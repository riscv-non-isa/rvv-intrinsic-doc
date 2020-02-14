# RISC-V Vector Extension Intrinsic API Reference Manual

## 1. Preface
These builtins current targets the [0.8](https://raw.githubusercontent.com/riscv/riscv-v-spec/0.8/v-spec.adoc) version of the extension and trying to document rvv_intrinsics programming model based on
Krste's [proposal](https://github.com/sifive/rvv_-intrinsics/blob/master/docs/0_krste_proposal.txt) and Jim's GCC implementation.


## 2. Design Decisions
### 2.1 invisible `vl`
Based on [this](https://github.com/riscv/riscv-v-spec/issues/264#issuecomment-515594056) discussion, spec 0.8 supports a special instruction (use `vsetvl` with set `rs1=x0`) to switching SEW/LMUL with `vl` unchanged, so it is needless for user to pass `AVL` as another argument to the intrinsic.

### 2.2 implicit intrinsic functions
Support implicit intrinsic functions of simple operations for more clearly and friendly programming interface.

**Example:**
``` C
void vadd(size_t n, const float32_t *z, const float32_t *x, float32_t *y) {
  size_t l;
  vfloat32m8_t vx, vy, vz;

  for (; (l = vsetvl_32m8(n)) > 0; n -= l) {
    vx = *(vfloat32m8_t*)(x); // explicit: vx = vload_f32m8(x);
    vy = *(vfloat32m8_t*)(y); // explicit: vu = vload_f32m8(x);
    vz = vx + vy;             // explicit: vz = vadd_f32m8(vx,vy);
    *(vfloat32m8_t*)z = vz;   // explicit: vstore_f32m8(z, vz);
    x += l;
    y += l;
    z += l;
  }
}
```


## 3. Known Issues
#### 3.1 `ELEN` [should be known](https://github.com/riscv/riscv-v-spec/issues/302) in compiler time.
For example, the supported widening instructions are depend on `ELEN`, so if `ELEN` is 32, then the widening instruction with `SEW` 32 (result is 64bit) is not supported.

#### 3.2 Support alias mask intrinsic functions?

We don't support alias mask type, user need to understand how to calculate `MLEN`
 example:
``` C
 vbool4_t mask1 = vsetlt_vs_i8m2(a, 5);
 vbool4_t mask2 = vsetlt_vs_i16m4(b, 5);
 vbool4_t mask3= vand_mm_b4(mask1, mask2);
 vadd_i32m8_mask(mask3, ..., ...);
```

#### 3.3 There is no implementation and error handling when `XLEN` < `SEW`

1. vslide1up: 
If `XLEN` < `SEW`, the value is `sign-extended` to `SEW` bits. 
If `XLEN` > `SEW`, the least-significant bits are copied over and the high SEW-XLEN bits are ignored.

in RISCV32, `XLEN`=32, `SEW`=64 config, intrinsic interface are
```
vint64m1_t vslide1up_vs_i64m1(vint64m1_t src, int64_t scalar); // illegal?
vint64m1_t vslide1up_vs_i64m1(vint64m1_t src, int32_t scalar);
vint64m1_t vslide1up_vs_i64m1(vint64m1_t src, int16_t scalar);
vint64m1_t vslide1up_vs_i64m1(vint64m1_t src, int8_t scalar);

vuint64m1_t vslide1up_vs_i64m1(vuint64m1_t src, int64_t scalar);  // illegal?
vuint64m1_t vslide1up_vs_i64m1(vuint64m1_t src, int32_t scalar);
vuint64m1_t vslide1up_vs_i64m1(vuint64m1_t src, int16_t scalar)
vuint64m1_t vslide1up_vs_i64m1(vuint64m1_t src, int8_t scalar)
```
or
```
vint64m1_t vslide1up_int64m1(vint64m1_t src, long scalar);
vuint64m1_t vslide1up_uint64m1(vuint64m1_t src, unsigned long scalar);  // illegal?
```

2.  vmv.s.x
The `vmv.s.x` instruction copies the scalar integer register to element 0 of the destination vector register.
If `XLEN` < `SEW`, the value is `sign-extended` to SEW bits. 
If `XLEN` > `SEW`, the least-significant bits are copied and the upper XLEN-SEW bits are ignored. 

in RISCV32, `XLEN`=32, `SEW`=64 config, intrinsic interface are
```
vint64m1_t vsplat_i64m1(int64_t a); // illegal?
vint64m1_t vsplat_i64m1(int32_t a);
vint64m1_t vsplat_i64m1(uint32_t a);  // illegal?
```
or
```
vint64m1_t vsplat_i64m1(long a);
vint64m1_t vsplat_i64m1(unsigned long b); // illegal?
```

The main prolbem is rvv only provides the sign-extended for scalar, but if the input scalar is unsigned, we can not support it. (XLEN is 32, but SEW is 64 so 32-bit unsigned scalar need to sign-extended)

#### 3.4. Support pseudo intrinsic functions for interface consistency is not well handled now

- There is only `vwmaccus` does not support `vv` instruction of Widening Integer Multiply-Add Instructions category.


## 4. Future Works
### 4.1 support polymorphic intrinsic functions
In order to provide more clearly and friendly programming interface for explicit intrinsic function, we use C C11 `_Generic` expression to support polymorphic intrinsic functions (function overloading) 

For example:
``` C
vint16m2_t vwadd_vv_i8m1(vint8m1_t op1, vint8m1_t op2);  // 2*SEW = SEW + SEW
vint16m2_t vwadd_wv_i8m1(vint16m2_t op1, vint8m1_t op2); // 2*SEW = 2*SEW + SEW

#define vwadd(__op1_type, __op2_type)           \
  _Generic((__op1_type),                           \
         default: vwadd_vv_int8m1,              \
         vint16m2_t: vwadd_wv_int8m1)        \
(__op1_type, __op2_type)

// test1
void foo1(vint16m2_t *dst, vint8m1_t *op1, vint8m1_t *op2) {
  vint16m2_t result;
  result  = vwadd(*op1, *op2);
  *dst = result;
}

// test2
void foo2(vint16m2_t *dst, vint16m2_t *op1, vint8m1_t *op2) {
  vint16m2_t result;
  result  = vwadd(*op1, *op2);
  *dst = result;
}
```

## 5. General Naming Rules
### 5.1 Vector types
- Syntax: `v{{TYPE}}{{SEW}}m{{LMUL}}_t`
    - TYPE = ['int', 'uint', 'float']
    - SEW = [8, 16, 32, 64]
    - LMUL = [1, 2, 4, 8]

- [List of all vector types](./rvv_intrinsic_funcs.md#rvv-c-extension-types)


### 5.2 Mask types
- Syntax: `vbool{{MLEN}}_t`
  - MLEN is `SEW/LUML`, it can be 1, 2, 4, 8, 16, 32, 64.
    - `vbool1_t`
    - `vbool2_t`
    - `vbool4_t`
    - `vbool8_t`
    - `vbool16_t`
    - `vbool32_t`
    - `vbool64_t`
  - Need 11 types if we support SEW = 1024
    - Support `vbool<SEW>m<LMUL>_t` as alias types

- [List of all vector mask types](./rvv_intrinsic_funcs.md#rvv-c-extension-mask-types)

### 5.3 Intrinsic functions
- Syntax: `v{{TYPE}}{{SEW}}m{{LMUL}}_t v{{OP}}_{{SV}}_{{TYPE}}{{SEW}}m{{LMUL}}[_mask]`
    - OP = ['add', 'sub', ...]
    - SV = ['VS', 'VV', 'WV', 'WS']
        - S for scalar
        - V for vector
        - W for 2*SEW
    - TYPE = [u, i, f]
    - SEW = [8, 16, 32, 64]
    - LMUL = [1, 2, 4, 8]

## 6. Configuration-Setting Functions
#### Instructions
- vsetvli
- vsetvl

### Set vl and vtype Functions
#### [Intrinsics function list](./rvv_intrinsic_funcs.md#set-vl-and-vtype-functions)

### Set vl to VLMAX with specific vtype
#### [Intrinsic functions list](./rvv_intrinsic_funcs.md#set-the-vl-to-vlmax-with-specific-vtype)

### Read vl value
#### [Intrinsic functions list](./rvv_intrinsic_funcs.md#read-the-vl)

## 7. Vector Loads and Stores
### 7.4. Vector Unit-Stride Operations
#### Instructions [SEW supported]
- vlw.v	[32]
- vsw.v	[32]
- vlwu.v	[32]
- vlh.v	[16,32]
- vlhu.v	[16,32]
- vsh.v	[16,32]
- vlb.v	[8,16,32]
- vlbu.v	[8,16,32]
- vsb.v	[8,16,32]
- vle.v	[8,16,32]
- vse.v	[8,16,32]

#### [Intrinsic functions list](./rvv_intrinsic_funcs.md#vector-unit-stride-load-functions)

#### Notes
- Fixed-sized vector loads can optionally sign or zero-extend their memory element into the destination register element if the register element is wider than the memory element.
- A fixed-size vector load raises an illegal instruction exception if the destination register element is narrower than the memory element.


### 7.5. Vector Strided Load/Store Operations
#### Instructions [SEW supported]
- vlsw.v	[8,16,32,64]
- vssw.v	[8,16,32,64]
- vlswu.v	[8,16,32,64]
- vlsh.v	[8,16,32,64]
- vlshu.v	[8,16,32,64]
- vssh.v	[8,16,32,64]
- vlsb.v	[8,16,32,64]
- vlsbu.v	[8,16,32,64]
- vssb.v	[8,16,32,64]
- vlse.v	[8,16,32,64]
- vsse.v	[8,16,32,64]

#### [Intrinsic functions list](./rvv_intrinsic_funcs.md#vector-strided-load-functions)

### 7.6. Vector Indexed Load/Store Operations
#### Instructions [SEW supported]
- vlxw.v	[8,16,32,64]
- vsxw.v	[8,16,32,64]
- vlxwu.v	[8,16,32,64]
- vlxh.v	[8,16,32,64]
- vlxhu.v	[8,16,32,64]
- vsxh.v	[8,16,32,64]
- vsuxh.v	[8,16,32,64]
- vlxb.v	[8,16,32,64]
- vlxbu.v	[8,16,32,64]
- vsxb.v	[8,16,32,64]
- vsuxb.v	[8,16,32,64]
- vlxe.v	[8,16,32,64]
- vsxe.v	[8,16,32,64]
- vsuxe.v	[8,16,32,64]


#### [Intrinsic functions list](./rvv_intrinsic_funcs.md#vector-indexed-load-functions)


### 7.7. Unit-stride Fault-Only-First Loads Operations
#### Instructions [SEW supported]
- vlbff.v	[8,16,32,64] (**not supported in first HW release**)
- vlhff.v	[8,16,32,64] (**not supported in first HW release**)
- vlwff.v	[8,16,32,64] (**not supported in first HW release**)
- vlbuff.v	[8,16,32,64] (**not supported in first HW release**)
- vlhuff.v	[8,16,32,64] (**not supported in first HW release**)
- vlwuff.v	[8,16,32,64] (**not supported in first HW release**)
- vleff.v	[8,16,32,64] (**not supported in first HW release**)

#### [Intrinsic functions list](./rvv_intrinsic_funcs.md#unit-stride-fault-only-first-loads-functions)

#### Notes
- Execute a regular load and stop load operation if there is 0 value of element, and then set vl equals the index of last non-zero value.

### 7.8. Vector Load/Store Segment Operations (Zvlsseg)

### 7.8.1. Vector Unit-Stride Segment Loads and Stores
#### Instructions [SEW supported]
- vlseg2w.v	[8,16,32,64]
- vsseg2w.v	[8,16,32,64]
- vlseg4w.v	[8,16,32,64]
- vsseg4w.v	[8,16,32,64]
- vlseg8w.v	[8,16,32,64]
- vsseg8w.v	[8,16,32,64]
- vlseg{3,5,6,7}w.v	[8,16,32,64]
- vlseg{2-8}wu.v	[8,16,32,64]
- vsseg{3,5,6,7}w.v	[8,16,32,64]
- vlseg{2-8}h.v	[8,16,32,64]
- vlseg{2-8}hu.v	[8,16,32,64]
- vsseg{2-8}h.v	[8,16,32,64]
- vlseg{2-8}b.v	[8,16,32,64]
- vlseg{2-8}bu.v	[8,16,32,64]
- vsseg{2-8}b.v	[8,16,32,64]
- vlseg{2-8}e.v	[8,16,32,64]
- vsseg{2-8}e.v	[8,16,32,64]

#### Intrinsic functions list
TODO

### 7.8.2. Vector Strided Segment Loads and Stores
### Instructions [SEW supported]
- vlsseg2w.v	[8,16,32,64]
- vssseg2w.v	[8,16,32,64]
- vlsseg{3-8}w.v	[8,16,32,64]
- vlsseg{2-8}wu.v	[8,16,32,64]
- vssseg{3-8}w.v	[8,16,32,64]
- vlsseg{2-8}h.v	[8,16,32,64]
- vlsseg{2-8}hu.v	[8,16,32,64]
- vssseg{2-8}h.v	[8,16,32,64]
- vlsseg{2-8}b.v	[8,16,32,64]
- vlsseg{2-8}bu.v	[8,16,32,64]
- vssseg{2-8}b.v	[8,16,32,64]
- vlsseg{2-8}e.v	[8,16,32,64]
- vssseg{2-8}e.v	[8,16,32,64]

#### Intrinsic functions list
TODO

#### 7.8.3. Vector Indexed Segment Loads and Stores
### Instructions [SEW supported]
- vlxseg{2-8}w.v	[8,16,32,64]
- vlxseg{2-8}wu.v	[8,16,32,64]
- vsxseg{2-8}w.v	[8,16,32,64]
- vlxseg{2-8}h.v	[8,16,32,64]
- vlxseg{2-8}hu.v	[8,16,32,64]
- vsxseg{2-8}h.v	[8,16,32,64]
- vlxseg{2-8}b.v	[8,16,32,64]
- vlxseg{2-8}bu.v	[8,16,32,64]
- vsxseg{2-8}b.v	[8,16,32,64]
- vlxseg{2-8}e.v	[8,16,32,64]
- vsxseg{2-8}e.v	[8,16,32,64]

#### Intrinsic functions list
TODO


## 8. Vector AMO Operations (Zvamo)
- Vector AMOs	[8,16,32,64]

#### Intrinsic functions list
TODO

## 9. None
Keep this chapter none to aligned to riscv-v-spec chapters

## 10. None
Keep this chapter none to aligned to riscv-v-spec chapters

## 11. None
Keep this chapter none to aligned to riscv-v-spec chapters

## 12. Vector Integer Arithmetic Operations
### 12.1. Vector Single-Width Integer Add and Subtract
#### Instructions [SEW supported]
- vadd.{vv,vx,vi}	[8,16,32]
- vsub.{vv,vx}	[8,16,32]
- vrsub.{vx,vi}	[8,16,32]


#### [Intrinsic functions list](./rvv_intrinsic_funcs.md#vector-single-width-integer-add-and-subtract-functions)


### 12.2. Vector Widening Integer Add/Subtract Operations
#### Instructions [SEW supported]
- vwaddu.{vv,vx,wv,wx}	[8,16,32]
- vwsubu.{vv,vx,wv,wx}	[8,16,32]
- vwadd.{vv,vx,wv,wx}	[8,16,32]
- vwsub.{vv,vx,wv,wx}	[8,16,32]


#### [Intrinsic functions list](./rvv_intrinsic_funcs.md#vector-widening-integer-addsubtract-functions)


### 12.3. Vector Integer Add-with-Carry / Subtract-with-Borrow Operations
#### Instructions [SEW supported]
- vadc.{vvm,vxm,vim}	[8,16,32]
- vmadc.{vvm,vxm,vim}	[8,16,32]
- vsbc.{vvm,vxm}	[8,16,32]
- vmsbc.{vvm,vxm}	[8,16,32]


#### [Intrinsic functions list](./rvv_intrinsic_funcs.md#vector-integer-add-with-carry--subtract-with-borrow-functions)


### 12.4. Vector Bitwise Logical Operations
#### Instructions [SEW supported]
- vand.{vv,vx,vi}	[8,16,32]
- vxor.{vv,vx,vi}	[8,16,32]
- vor.{vv,vx,vi}	[8,16,32]


#### [Intrinsic functions list](./rvv_intrinsic_funcs.md#vector-bitwise-logical-functions)

#### Note
- With an immediate of -1, scalar-immediate forms of the vxor instruction provide a bitwise NOT operation. This can be provided as an assembler pseudoinstruction vnot.v.


### 12.5. Vector Single-Width Bit Shift Operations
#### Instructions [SEW supported]
- vsll.{vv,vx,vi}	[8,16,32]
- vsrl.{vv,vx,vi}	[8,16,32]
- vsra.{vv,vx,vi}	[8,16,32]


#### [Intrinsic functions list](./rvv_intrinsic_funcs.md#vector-single-width-bit-shift-functions)

#### Notes
- A full complement of vector shift instructions are provided, including logical shift left, and logical (zero-extending) and arithmetic (sign-extending) shift right.


### 12.6. Vector Narrowing Integer Right Shift Operations
#### Instructions [SEW supported]
- vnsra.{vv,vx,vi}	[8,16,32]
- vnsrl.{vv,vx,vi}	[8,16,32]


#### [Intrinsic functions list](./rvv_intrinsic_funcs.md#vector-narrowing-integer-right-shift-functions)


### 12.7. Vector Integer Comparison Operations
#### Instructions [SEW supported]
- vmseq.{vv,vx,vi}	[8,16,32]
- vmsne.{vv,vx,vi}	[8,16,32]
- vmsltu.{vv,vx}	[8,16,32]
- vmslt.{vv,vx}	[8,16,32]
- vmsleu.{vv,vx,vi}	[8,16,32]
- vmsle.{vv,vx,vi}	[8,16,32]
- vmsgtu.{vx,vi}	[8,16,32]
- vmsgt.{vx,vi}	[8,16,32]


#### [Intrinsic functions list](./rvv_intrinsic_funcs.md#vector-integer-comparison-functions)

### 12.8. Vector Integer Min/Max Operations
#### Instructions [SEW supported]
- vminu_{vv,vx}	[8,16,32]
- vmin_{vv,vx}	[8,16,32]
- vmaxu_{vv,vx}	[8,16,32]
- vmax_{vv,vx}	[8,16,32]


#### [Intrinsic functions list](./rvv_intrinsic_funcs.md#vector-integer-minmax-functions)

### 12.9. Vector Single-Width Integer Multiply Operations
#### Instructions [SEW supported]
- vmul_{vv,vx}	[8,16,32]
- vmulh_{vv,vx}	[8,16,32]
- vmulhu_{vv,vx}	[8,16,32]
- vmulhsu_{vv,vx}	[8,16,32]


#### [Intrinsic functions list](./rvv_intrinsic_funcs.md#vector-single-width-integer-multiply-functions)

### 12.10. Vector Integer Divide Operations
#### Instructions [SEW supported]
- vdivu.{vv,vx}	[8,16,32]
- vdiv.{vv,vx}	[8,16,32]
- vremu.{vv,vx}	[8,16,32]
- vrem.{vv,vx}	[8,16,32]


#### [Intrinsic functions list](./rvv_intrinsic_funcs.md#vector-integer-divide-functions)


### 12.11. Vector Widening Integer Multiply Operations
#### Instructions [SEW supported]
- vwmul.{vv,vx}	[8,16,32]
- vwmulu.{vv,vx}	[8,16,32]
- vwmulsu.{vv,vx}	[8,16,32]


#### [Intrinsic functions list](./rvv_intrinsic_funcs.md#vector-widening-integer-multiply-functions)


### 12.12. Vector Single-Width Integer Multiply-Add Operations
#### Instructions [SEW supported]
- vmacc_{vv,vx}	[8,16,32]
- vnmsac_{vv,vx}	[8,16,32]
- vmadd_{vv,vx}	[8,16,32]
- vnmsub_{vv,vx}	[8,16,32]


#### [Intrinsic functions list](./rvv_intrinsic_funcs.md#vector-single-width-integer-multiply-add-functions)

### 12.13. Vector Widening Integer Multiply-Add Operations
#### Instructions [SEW supported]
- vwmaccu.{vv,vx}	[8,16,32]
- vwmacc.{vv,vx}	[8,16,32]
- vwmaccsu.{vv,vx}	[8,16,32]
- vwmaccus.{vv,vx}	[8,16,32]


#### [Intrinsic functions list](./rvv_intrinsic_funcs.md#vector-widening-integer-multiply-add-functions)

### 12.14. Vector Quad-Widening Integer Multiply-Add Operations (Extension Zvqmac)
#### Instructions
TODO

#### [Intrinsic functions list](./rvv_intrinsic_funcs.md#vector-quad-widening-integer-multiply-add-functions)


### 12.15. Vector Integer Merge Operations
#### Instructions [SEW supported]
- vmerge.{vvm,vxm,vim}	[8,16,32]

#### [Intrinsic functions list](./rvv_intrinsic_funcs.md#vector-integer-merge-functions)

### 12.16. Vector Integer Move Operations
#### Instructions [SEW supported]
- vmv.v.v	[8,16,32]
- vmv.v.x	[8,16,32]
- vmv.v.i	[8,16,32]


#### [Intrinsic functions list](./rvv_intrinsic_funcs.md#vector-integer-move-functions)


## 13. Vector Fixed-Point Arithmetic Operations
### 13.1. Vector Single-Width Saturating Add and Subtract
#### Instructions [SEW supported]
- vsaddu.{vv,vx,vi}	[8,16,32]
- vsadd.{vv,vx,vi}	[8,16,32]
- vssubu.{vv,vx}	[8,16,32]
- vssub.{vv,vx}	[8,16,32]


#### [Intrinsic functions list](./rvv_intrinsic_funcs.md#vector-single-width-saturating-add-and-subtract-functions)

### 13.2. Vector Single-Width Averaging Add and Subtract
#### Instructions [SEW supported]
- vaadd.{vv,vx,vi}	[8,16,32]
- vasub.{vv,vx}	[8,16,32]


#### [Intrinsic functions list](./rvv_intrinsic_funcs.md#vector-single-width-averaging-add-and-subtract-functions)

### 13.3. Vector Single-Width Fractional Multiply with Rounding and Saturation
#### Instructions [SEW supported]
- vsmul.{vv,vx}	[8,16,32]


#### [Intrinsic functions list](./rvv_intrinsic_funcs.md#vector-single-width-fractional-multiply-with-rounding-and-saturation-functions)

### 13.4. Vector Widening Saturating Scaled Multiply-Add
#### Instructions [SEW supported]
- vwsmaccu.{vv,vx}	[8,16,32]
- vwsmacc.{vv,vx}	[8,16,32]
- vwsmaccsu.{vv,vx}	[8,16,32]
- vwsmaccus.vx	[8,16,32]


#### [Intrinsic functions list]()

### 13.5. Vector Single-Width Scaling Shift Operations
#### Instructions [SEW supported]
- vssrl.{vv,vx,vi}	[8,16,32]
- vssra.{vv,vx,vi}	[8,16,32]


#### [Intrinsic functions list](./rvv_intrinsic_funcs.md#vector-single-width-scaling-shift-functions)

### 13.6. Vector Narrowing Fixed-Point Clip Operations
#### Instructions [SEW supported]
- vnclipu.{wx,wv,wi} [8,16,32]
- vnclip.{wx,wv,wi}	[8,16,32]


#### [Intrinsic functions list](./rvv_intrinsic_funcs.md#vector-narrowing-fixed-point-clip-functions)


## 14. Vector Floating-Point Operations
### 14.2. Vector Single-Width Floating-Point Add/Subtract Operations
#### Instructions [SEW supported]
- vfadd.{vv,vf}	[32]
- vfsub.{vv,vf}	[32]
- vfrsub.vf	[32]


#### [Intrinsic functions list](./rvv_intrinsic_funcs.md#vector-single-width-floating-point-addsubtract-functions)


### 14.3. Vector Widening Floating-Point Add/Subtract Operations
#### Instructions [SEW supported]
- vfwadd.{vv,vf,wv,wf}	[32]
- vfwsub.{vv,vf,wv,wf}	[32]


#### [Intrinsic functions list](./rvv_intrinsic_funcs.md#vector-widening-floating-point-addsubtract-functions)


### 14.4. Vector Single-Width Floating-Point Multiply/Divide Operations
#### Instructions [SEW supported]
- vfmul.{vv,vf}	[32]
- vfdiv.{vv,vf}	[32]
- vfrdiv.{vv,vf}	[32]


#### [Intrinsic functions list](./rvv_intrinsic_funcs.md#vector-single-width-floating-point-multiplydivide-functions)


### 14.5. Vector Widening Floating-Point Multiply
#### Instructions [SEW supported]
- vfwmul.{vv,vf}	[32]


#### [Intrinsic functions list](./rvv_intrinsic_funcs.md#vector-widening-floating-point-multiply-functions)


### 14.6. Vector Single-Width Floating-Point Fused Multiply-Add Operations
#### Instructions [SEW supported]
- vfmacc.{vv,vf}	[32]
- vfnmacc.{vv,vf}	[32]
- vfmsac.{vv,vf}	[32]
- vfnmsac.{vv,vf}	[32]
- vfmadd.{vv,vf}	[32]
- vfnmadd.{vv,vf}	[32]
- vfmsub.{vv,vf}	[32]
- vfnmsub.{vv,vf}	[32]


#### [Intrinsic functions list](./rvv_intrinsic_funcs.md#vector-single-width-floating-point-fused-multiply-add-functions)


### 14.7. Vector Widening Floating-Point Fused Multiply-Add Operations
#### Instructions [SEW supported]
- vfwmacc.{vv,vf}	[32]
- vfwnmacc.{vv,vf}	[32]
- vfwmsac.{vv,vf}	[32]
- vfwnmsac.{vv,vf}	[32]


#### [Intrinsic functions list](./rvv_intrinsic_funcs.md#vector-widening-floating-point-fused-multiply-add-functions)


### 14.8. Vector Floating-Point Square-Root Operations
#### Instructions [SEW supported]
- vfsqrt.v	[32]


#### [Intrinsic functions list](./rvv_intrinsic_funcs.md#vector-floating-point-square-root-functions)


### 14.9. Vector Floating-Point MIN/MAX Operations
- vfmin.{vv,vf}	[32]
- vfmax.{vv,vf}	[32]


#### [Intrinsic functions list](./rvv_intrinsic_funcs.md#vector-floating-point-minmax-functions)


### 14.10. Vector Floating-Point Sign-Injection Operations
#### Instructions [SEW supported]
- vfsgnj.{vv,vf}	[32]
- vfsgnjn.{vv,vf}	[32]
- vfsgnjx.{vv,vf}	[32]


#### [Intrinsic functions list](./rvv_intrinsic_funcs.md#vector-floating-point-sign-injection-functions)


### 14.11. Vector Floating-Point Compare Operations
#### Instructions [SEW supported]
- vmfeq.{vv,vf}	[32]
- vmfne.{vv,vf}	[32]
- vmflt.{vv,vf}	[32]
- vmfle.{vv,vf}	[32]
- vmfgt.vf	[32]
- vmfge.vf	[32]


#### [Intrinsic functions list](./rvv_intrinsic_funcs.md#vector-floating-point-compare-functions)


### 14.12. Vector Floating-Point Classify Operations
#### Instructions [SEW supported]
- vfclass.v	[32]


#### [Intrinsic functions list](./rvv_intrinsic_funcs.md#vector-floating-point-classify-functions)


### 14.13. Vector Floating-Point Merge Operations
#### Instructions [SEW supported]
- vfmerge.vfm	[32]


#### [Intrinsic functions list](./rvv_intrinsic_funcs.md#vector-floating-point-merge-functions)


### 14.14. Vector Floating-Point Move Operations
#### Instructions [SEW supported]
- vfmv.v.f	[32]


#### [Intrinsic functions list](./rvv_intrinsic_funcs.md#vector-floating-point-move-functions)


### 14.15. Single-Width Floating-Point/Integer Type-Convert Operations
#### Instructions [SEW supported]
- vfcvt.xu.f.v	[32]
- vfcvt.x.f.v	[32]
- vfcvt.f.xu.v	[32]
- vfcvt.f.x.v	[32]


#### [Intrinsic functions list](./rvv_intrinsic_funcs.md#single-width-floating-pointinteger-type-convert-functions)


### 14.16. Widening Floating-Point/Integer Type-Convert Operations
#### Instructions [SEW supported]
- vfwcvt.xu.f.v	[32]
- vfwcvt.x.f.v	[32]
- vfwcvt.f.xu.v	[16]
- vfwcvt.f.x.v	[16]
- vfwcvt.f.f.v	[32] (**not supported in first HW release**)


#### [Intrinsic functions list](./rvv_intrinsic_funcs.md#widening-floating-pointinteger-type-convert-functions)




### 14.17. Narrowing Floating-Point/Integer Type-Convert Operations
#### Instructions [SEW supported]
- vfncvt.xu.f.w	[32]
- vfncvt.x.f.w	[32]
- vfncvt.f.xu.w	[64]
- vfncvt.f.x.w	[64]
- vfncvt.f.f.w	[32] (**not supported in first HW release**)
- vfncvt.rod.f.f.w	[32] (**not supported in first HW release**)


#### [Intrinsic functions list](./rvv_intrinsic_funcs.md#narrowing-floating-pointinteger-type-convert-functions)


## 15. Vector Reduction Operations
### 15.1. Vector Single-Width Integer Reduction Operations
#### Instructions [SEW supported]
- vredsum.vs	[8,16,32]
- vredmaxu.vs	[8,16,32]
- vredmax.vs	[8,16,32]
- vredminu.vs	[8,16,32]
- vredmin.vs	[8,16,32]
- vredand.vs	[8,16,32]
- vredor.vs	[8,16,32]
- vredxor.vs	[8,16,32]


#### [Intrinsic functions list](./rvv_intrinsic_funcs.md#vector-single-width-integer-reduction-functions)


### 15.2. Vector Widening Integer Reduction Operations
#### Instructions [SEW supported]
- vwredsumu.vs	[8,16,32]
- vwredsum.vs	[8,16,32]


#### [Intrinsic functions list](./rvv_intrinsic_funcs.md#vector-widening-integer-reduction-functions)


### 15.3. Vector Single-Width Floating-Point Reduction Operations
#### Instructions [SEW supported]
- vfredosum.vs	[32]
- vfredsum.vs	[32]
- vfredmax.vs	[32]
- vfredmin.vs	[32]


#### [Intrinsic functions list](./rvv_intrinsic_funcs.md#vector-single-width-floating-point-reduction-functions)


### 15.4. Vector Widening Floating-Point Reduction Operations
#### Instructions [SEW supported]
- vfwredosum.vs	[32] (**not supported in first HW release**)
- vfwredsum.vs	[32] (**not supported in first HW release**)


#### [Intrinsic functions list](./rvv_intrinsic_funcs.md#vector-widening-floating-point-reduction-functions)


## 16. Vector Mask Instructions
### 16.1. Vector Mask-Register Logical Operations
#### Instructions [SEW supported]
- vmand.mm	[8,16,32]
- vmnand.mm	[8,16,32]
- vmandnot.mm	[8,16,32]
- vmxor.mm	[8,16,32]
- vmor.mm	[8,16,32]
- vmnor.mm	[8,16,32]
- vmornot.mm	[8,16,32]
- vmxnor.mm	[8,16,32]


#### [Intrinsic functions list](./rvv_intrinsic_funcs.md#vector-mask-register-logical-functions)


### 16.2. Vector mask population count vpopc
#### Instructions [SEW supported]
- vpopc.m	[8,16,32]


#### [Intrinsic functions list](./rvv_intrinsic_funcs.md#vector-mask-population-count-functions)


### 16.3. vfirst find-first-set mask bit
#### Instructions [SEW supported]
- vfirst.m	[8,16,32]


#### [Intrinsic functions list](./rvv_intrinsic_funcs.md#find-first-set-mask-bit-functions)


### 16.4. vmsbf.m set-before-first mask bit
#### Instructions [SEW supported]
- vmsbf.m	[8,16,32]


#### [Intrinsic functions list](./rvv_intrinsic_funcs.md#set-before-first-mask-bit-functions)


### 16.5. vmsif.m set-including-first mask bit
#### Instructions [SEW supported]
- vmsif.m	[8,16,32]


#### [Intrinsic functions list](./rvv_intrinsic_funcs.md#set-including-first-mask-bit-functions)


### 16.6. vmsof.m set-only-first mask bit
#### Instructions [SEW supported]
- vmsof.m	[8,16,32]


#### [Intrinsic functions list](./rvv_intrinsic_funcs.md#set-only-first-mask-bit-functions)


### 16.8. Vector Iota Operations
#### Instructions [SEW supported]
- viota.m	[8,16,32]


#### [Intrinsic functions list](./rvv_intrinsic_funcs.md#vector-iota-functions)


### 16.9. Vector Element Index Operations
#### Instructions [SEW supported]
- vid.v	[8,16,32]


#### [Intrinsic functions list](./rvv_intrinsic_funcs.md#vector-element-index-functions)


## 17. Vector Permutation Operations
### 17.1. Integer Scalar Move Operations
#### Instructions [SEW supported]
- vmv.s.x	[8,16,32]
- vmv.x.s	[8,16,32]


#### [Intrinsic functions list](./rvv_intrinsic_funcs.md#integer-and-floating-point-scalar-move-functions)


### 17.2. Floating-Point Scalar Move Operations
#### Instructions [SEW supported]
- vfmv.f.s	[8,16,32]
- vfmv.s.f	[8,16,32]


#### [Intrinsic functions list](./rvv_intrinsic_funcs.md#integer-and-floating-point-scalar-move-functions)


### 17.3. Vector Slide Operations
#### Instructions [SEW supported]
- vslideup.{vx,vi}	[8,16,32]
- vslidedown.{vx,vi}	[8,16,32]
- vslide1up.vx	[8,16,32]
- vslide1down.vx	[8,16,32]


#### [Intrinsic functions list](./rvv_intrinsic_funcs.md#vector-slideup-and-slidedown-functions)


### 17.4. Vector Register Gather Operations
#### Instructions [SEW supported]
- vrgather.{vx,vi}	[8,16,32]


#### [Intrinsic functions list](./rvv_intrinsic_funcs.md#vector-register-gather-functions)


### 17.5. Vector Compress Operations
#### Instructions [SEW supported]
- vcompress.vm	[8,16,32]

#### [Intrinsic functions list](./rvv_intrinsic_funcs.md#vector-compress-instruction)

## 18. None
Keep this chapter none to aligned to riscv-v-spec chapters

## 19. Divided Element Extension ('Zvediv')
### 19.3. Vector Integer Dot-Product Operations
#### Instructions [SEW supported]
- vdotu.vv	[8,16,32] (**not supported in first HW release**)
- vdot.vv	[8,16,32] (**not supported in first HW release**)

#### Intrinsic functions list
TODO


### 19.4. Vector Floating-Point Dot Product Operations
#### Instructions [SEW supported]
- vfdotu.vv	[32] (**not supported in first HW release**)


#### Intrinsic functions list
TODO


## 20. RVV Intrinsic Examples
- [sgemm](sgemm.c)
- [saxpy](rvv_saxpy.c)

