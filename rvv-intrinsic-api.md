# RISC-V Vector Extension Intrinsic API Reference Manual

## 1. Preface
These builtins targets on rvv [1.0-draft](https://github.com/riscv/riscv-v-spec/tree/master) and trying to document rvv_intrinsics programming model.


## 2. Design Decisions and philosophy

Please see [rvv-intrinsic-rfc.md](rvv-intrinsic-rfc.md)

## 3. None
Keep this chapter none to aligned to riscv-v-spec chapters

## 4. None
Keep this chapter none to aligned to riscv-v-spec chapters

## 5. General Naming Rules

Please see [rvv-intrinsic-rfc.md](rvv-intrinsic-rfc.md#naming-rules)

## 6. Configuration-Setting and Utility Functions
#### Instructions
- vsetvli
- vsetvl

### Set vl and vtype Functions
#### [Intrinsics function list](intrinsic_funcs/01_configuration-setting_and_utility_functions.md#set-vl-and-vtype-functions)

### Set vl to VLMAX with specific vtype
#### [Intrinsic functions list](intrinsic_funcs/01_configuration-setting_and_utility_functions.md#set-the-vl-to-vlmax-with-specific-vtype)

### Reinterpret Cast Conversion Functions

Reinterpret the contents of a data as a different type, without changing any bits and generating any RVV instructions.

#### [Intrinsic functions list](intrinsic_funcs/12_miscellaneous_vector_functions.md#reinterpret-cast-conversion-functions)

### Vector Initialization Functions

#### [Intrinsic functions list](intrinsic_funcs/12_miscellaneous_vector_functions.md#vector-initialization-functions)

### Vector LMUL Extension and Truncation Functions

These utility functions help users to truncate or extent current LMUL under same SEW regardless of vl, it won't change content of vl register.

#### [Intrinsic functions list](intrinsic_funcs/12_miscellaneous_vector_functions.md#vector-lmul-extension-functions)

### Read/Write URW vector CSRs

```
enum RVV_CSR {
  RVV_VSTART = 0,
  RVV_VXSAT,
  RVV_VXRM,
  RVV_VCSR,
};

unsigned long vread_csr(enum RVV_CSR csr);
void vwrite_csr(enum RVV_CSR csr, unsigned long value);
```

## 7. Vector Loads and Stores
### 7.4. Vector Unit-Stride Operations
#### Instructions
- vle&lt;eew>.v
- vse&lt;eew>.v

#### [Load Intrinsic functions list](intrinsic_funcs/02_vector_loads_and_stores_functions.md#vector-unit-stride-load-functions)
#### [Store Intrinsic functions list](intrinsic_funcs/02_vector_loads_and_stores_functions.md#vector-unit-stride-store-functions)
#### [Mask Load/Store Intrinsic functions list](intrinsic_funcs/10_vector_mask_functions.md#vector-mask-loadstore-functions)


### 7.5. Vector Strided Load/Store Operations
#### Instructions
- vlse&lt;eew>.v
- vsse&lt;eew>.v

#### [Load Intrinsic functions list](intrinsic_funcs/02_vector_loads_and_stores_functions.md#vector-strided-load-functions)
#### [Store Intrinsic functions list](intrinsic_funcs/02_vector_loads_and_stores_functions.md#vector-strided-store-functions)


### 7.6. Vector Indexed Load/Store Operations
#### Instructions
- vlxei&lt;eew>.v
- vsxei&lt;eew>.v
- vsuxei&lt;eew>.v

#### [Load Intrinsic functions list](intrinsic_funcs/02_vector_loads_and_stores_functions.md#vector-indexed-load-functions)
#### [Store Intrinsic functions list](intrinsic_funcs/02_vector_loads_and_stores_functions.md#vector-indexed-store-functions)


### 7.7. Unit-stride Fault-Only-First Loads Operations
#### Instructions
- vle&lt;eew>ff.v

#### [Intrinsic functions list](intrinsic_funcs/02_vector_loads_and_stores_functions.md#unit-stride-fault-only-first-loads-functions)

#### Notes
- The unit-stride fault-only-first load instruction is used to vectorize loops with data-dependent exit conditions (while loops). These instructions execute as a regular load except that they will only take a trap on element 0. If an element > 0 raises an exception, that element and all following elements in the destination vector register are not modified, and the vector length vl is reduced to the number of elements processed without a trap.

### 7.8. Vector Load/Store Segment Operations (Zvlsseg)

### 7.8.1. Vector Unit-Stride Segment Loads and Stores

#### Instructions
- vlseg<nf>e&lt;eew>.v
- vsseg<nf>e&lt;eew>.v

#### [Load Intrinsic functions list](intrinsic_funcs/03_vector_load_store_segment_instructions_zvlsseg.md#vector-unit-stride-segment-load-functions)
#### [Store Intrinsic functions list](intrinsic_funcs/03_vector_load_store_segment_instructions_zvlsseg.md#vector-unit-stride-segment-store-functions)


### 7.8.2. Vector Strided Segment Loads and Stores

#### Instructions
- vlsseg<nf>e&lt;eew>.v
- vssseg<nf>e&lt;eew>.v

#### [Load Intrinsic functions list](intrinsic_funcs/03_vector_load_store_segment_instructions_zvlsseg.md#vector-unit-stride-segment-load-functions)
#### [Store Intrinsic functions list](intrinsic_funcs/03_vector_load_store_segment_instructions_zvlsseg.md#vector-unit-stride-segment-store-functions)


### 7.8.3. Vector Indexed Segment Loads and Stores

#### Instructions
- vlxseg<nf>ei&lt;eew>.v
- vsxseg<nf>ei&lt;eew>.v

#### [Load Intrinsic functions list](intrinsic_funcs/03_vector_load_store_segment_instructions_zvlsseg.md#vector-indexed-segment-load-functions)
#### [Store Intrinsic functions list](intrinsic_funcs/03_vector_load_store_segment_instructions_zvlsseg.md#vector-indexed-segment-store-functions)


## 8. Vector AMO Operations (Zvamo)

#### Instructions
- vamoswapei&lt;eew>.v
- vamoaddei&lt;eew>.v
- vamoxorei&lt;eew>.v
- vamoandei&lt;eew>.v
- vamoorei&lt;eew>.v
- vamominei&lt;eew>.v
- vamomaxei&lt;eew>.v
- vamominuei&lt;eew>.v
- vamomaxuei&lt;eew>.v

#### [Intrinsic functions list](intrinsic_funcs/05_vector_amo_operations_functions_zvamo.md#vector-amo-operations-functions)

## 9. None
Keep this chapter none to aligned to riscv-v-spec chapters

## 10. None
Keep this chapter none to aligned to riscv-v-spec chapters

## 11. None
Keep this chapter none to aligned to riscv-v-spec chapters

## 12. Vector Integer Arithmetic Operations
### 12.1. Vector Single-Width Integer Add and Subtract
#### Instructions
- vadd.{vv,vx,vi}
- vsub.{vv,vx}
- vrsub.{vx,vi}
- vneg.v

#### [Intrinsic functions list](intrinsic_funcs/06_vector_integer_arithmetic_functions.md#vector-single-width-integer-add-and-subtract-functions)


### 12.2. Vector Widening Integer Add/Subtract Operations
#### Instructions
- vwaddu.{vv,vx,wv,wx}
- vwsubu.{vv,vx,wv,wx}
- vwadd.{vv,vx,wv,wx}
- vwsub.{vv,vx,wv,wx}
- vwcvt.x.x.v
- vwcvtu.x.x.v

#### [Intrinsic functions list](intrinsic_funcs/06_vector_integer_arithmetic_functions.md#vector-widening-integer-addsubtract-functions)


### 12.3 Vector Integer Extension

#### Instructions
- vzext.vf{2,4,8}
- vsext.vf{2,4,8}
#### [Intrinsic functions list](intrinsic_funcs/06_vector_integer_arithmetic_functions.md#vector-integer-extension-functions)


### 12.4. Vector Integer Add-with-Carry / Subtract-with-Borrow Operations
#### Instructions
- vadc.{vvm,vxm,vim}
- vmadc.{vvm,vxm,vim}
- vsbc.{vvm,vxm}
- vmsbc.{vvm,vxm}

#### [Intrinsic functions list](intrinsic_funcs/06_vector_integer_arithmetic_functions.md#vector-integer-add-with-carry--subtract-with-borrow-functions)


### 12.5. Vector Bitwise Logical Operations
#### Instructions
- vand.{vv,vx,vi}
- vxor.{vv,vx,vi}
- vor.{vv,vx,vi}
- vnot.v

#### [Intrinsic functions list](intrinsic_funcs/06_vector_integer_arithmetic_functions.md#vector-bitwise-logical-functions)


### 12.6. Vector Single-Width Bit Shift Operations
#### Instructions
- vsll.{vv,vx,vi}
- vsrl.{vv,vx,vi}
- vsra.{vv,vx,vi}

#### [Intrinsic functions list](intrinsic_funcs/06_vector_integer_arithmetic_functions.md#vector-single-width-bit-shift-functions)

#### Notes
- A full complement of vector shift instructions are provided, including logical shift left, and logical (zero-extending) and arithmetic (sign-extending) shift right.


### 12.7. Vector Narrowing Integer Right Shift Operations
#### Instructions
- vnsra.{vv,vx,vi}
- vnsrl.{vv,vx,vi}
- vncvt.x.x.w

#### [Intrinsic functions list](intrinsic_funcs/06_vector_integer_arithmetic_functions.md#vector-narrowing-integer-right-shift-functions)


### 12.8. Vector Integer Comparison Operations
#### Instructions
- vmseq.{vv,vx,vi}
- vmsne.{vv,vx,vi}
- vmsltu.{vv,vx,vi}
- vmslt.{vv,vx,vi}
- vmsleu.{vv,vx,vi}
- vmsle.{vv,vx,vi}
- vmsgtu.{vv.vx,vi}
- vmsgt.{vv.vx,vi}

#### [Intrinsic functions list](intrinsic_funcs/06_vector_integer_arithmetic_functions.md#vector-integer-comparison-functions)


### 12.9. Vector Integer Min/Max Operations
#### Instructions
- vminu.{vv,vx}
- vmin.{vv,vx}
- vmaxu.{vv,vx}
- vmax.{vv,vx}

#### [Intrinsic functions list](intrinsic_funcs/06_vector_integer_arithmetic_functions.md#vector-integer-minmax-functions)


### 12.10. Vector Single-Width Integer Multiply Operations
#### Instructions
- vmul.{vv,vx}
- vmulh.{vv,vx}
- vmulhu.{vv,vx}
- vmulhsu.{vv,vx}

#### [Intrinsic functions list](intrinsic_funcs/06_vector_integer_arithmetic_functions.md#vector-single-width-integer-multiply-functions)


### 12.11. Vector Integer Divide Operations
#### Instructions
- vdivu.{vv,vx}
- vdiv.{vv,vx}
- vremu.{vv,vx}
- vrem.{vv,vx}

#### [Intrinsic functions list](intrinsic_funcs/06_vector_integer_arithmetic_functions.md#vector-integer-divide-functions)


### 12.12. Vector Widening Integer Multiply Operations
#### Instructions
- vwmul.{vv,vx}
- vwmulu.{vv,vx}
- vwmulsu.{vv,vx}

#### [Intrinsic functions list](intrinsic_funcs/06_vector_integer_arithmetic_functions.md#vector-widening-integer-multiply-functions)


### 12.13. Vector Single-Width Integer Multiply-Add Operations
#### Instructions
- vmacc_{vv,vx}
- vnmsac_{vv,vx}
- vmadd_{vv,vx}
- vnmsub_{vv,vx}

#### [Intrinsic functions list](intrinsic_funcs/06_vector_integer_arithmetic_functions.md#vector-single-width-integer-multiply-add-functions)


### 12.14. Vector Widening Integer Multiply-Add Operations
#### Instructions
- vwmaccu.{vv,vx}
- vwmacc.{vv,vx}
- vwmaccsu.{vv,vx}
- vwmaccus.{vv,vx}

#### [Intrinsic functions list](intrinsic_funcs/06_vector_integer_arithmetic_functions.md#vector-widening-integer-multiply-add-functions)


### 12.15. Vector Integer Merge Operations
#### Instructions
- vmerge.{vvm,vxm,vim}

#### [Intrinsic functions list](intrinsic_funcs/06_vector_integer_arithmetic_functions.md#vector-integer-merge-functions)


### 12.16. Vector Integer Move Operations
#### Instructions
- vmv.v.v
- vmv.v.x
- vmv.v.i

#### [Intrinsic functions list](intrinsic_funcs/06_vector_integer_arithmetic_functions.md#vector-integer-move-functions)


## 13. Vector Fixed-Point Arithmetic Operations
### 13.1. Vector Single-Width Saturating Add and Subtract
#### Instructions
- vsaddu.{vv,vx,vi}
- vsadd.{vv,vx,vi}
- vssubu.{vv,vx}
- vssub.{vv,vx}

#### [Intrinsic functions list](intrinsic_funcs/07_vector_fixed-point_arithmetic_functions.md#vector-single-width-saturating-add-and-subtract-functions)


### 13.2. Vector Single-Width Averaging Add and Subtract
#### Instructions
- vaadd.{vv,vx,vi}
- vasub.{vv,vx}

#### [Intrinsic functions list](intrinsic_funcs/07_vector_fixed-point_arithmetic_functions.md#vector-single-width-averaging-add-and-subtract-functions)


### 13.3. Vector Single-Width Fractional Multiply with Rounding and Saturation
#### Instructions
- vsmul.{vv,vx}

#### [Intrinsic functions list](intrinsic_funcs/07_vector_fixed-point_arithmetic_functions.md#vector-single-width-fractional-multiply-with-rounding-and-saturation-functions)


### 13.4. Vector Single-Width Scaling Shift Operations
#### Instructions
- vssrl.{vv,vx,vi}
- vssra.{vv,vx,vi}

#### [Intrinsic functions list](intrinsic_funcs/07_vector_fixed-point_arithmetic_functions.md#vector-single-width-scaling-shift-functions)


### 13.5. Vector Narrowing Fixed-Point Clip Operations
#### Instructions
- vnclipu.{wx,wv,wi}
- vnclip.{wx,wv,wi}

#### [Intrinsic functions list](intrinsic_funcs/07_vector_fixed-point_arithmetic_functions.md#vector-narrowing-fixed-point-clip-functions)


## 14. Vector Floating-Point Operations
### 14.2. Vector Single-Width Floating-Point Add/Subtract Operations
#### Instructions
- vfadd.{vv,vf}
- vfsub.{vv,vf}
- vfrsub.vf

#### [Intrinsic functions list](intrinsic_funcs/08_vector_floating-point_functions.md#vector-single-width-floating-point-addsubtract-functions)


### 14.3. Vector Widening Floating-Point Add/Subtract Operations
#### Instructions
- vfwadd.{vv,vf,wv,wf}
- vfwsub.{vv,vf,wv,wf}

#### [Intrinsic functions list](intrinsic_funcs/08_vector_floating-point_functions.md#vector-widening-floating-point-addsubtract-functions)


### 14.4. Vector Single-Width Floating-Point Multiply/Divide Operations
#### Instructions
- vfmul.{vv,vf}
- vfdiv.{vv,vf}
- vfrdiv.{vv,vf}

#### [Intrinsic functions list](intrinsic_funcs/08_vector_floating-point_functions.md#vector-single-width-floating-point-multiplydivide-functions)


### 14.5. Vector Widening Floating-Point Multiply Operations
#### Instructions
- vfwmul.{vv,vf}

#### [Intrinsic functions list](intrinsic_funcs/08_vector_floating-point_functions.md#vector-widening-floating-point-multiply-functions)


### 14.6. Vector Single-Width Floating-Point Fused Multiply-Add Operations
#### Instructions
- vfmacc.{vv,vf}
- vfnmacc.{vv,vf}
- vfmsac.{vv,vf}
- vfnmsac.{vv,vf}
- vfmadd.{vv,vf}
- vfnmadd.{vv,vf}
- vfmsub.{vv,vf}
- vfnmsub.{vv,vf}


#### [Intrinsic functions list](intrinsic_funcs/08_vector_floating-point_functions.md#vector-single-width-floating-point-fused-multiply-add-functions)


### 14.7. Vector Widening Floating-Point Fused Multiply-Add Operations
#### Instructions
- vfwmacc.{vv,vf}
- vfwnmacc.{vv,vf}
- vfwmsac.{vv,vf}
- vfwnmsac.{vv,vf}

#### [Intrinsic functions list](intrinsic_funcs/08_vector_floating-point_functions.md#vector-widening-floating-point-fused-multiply-add-functions)


### 14.8. Vector Floating-Point Square-Root Operations
#### Instructions
- vfsqrt.v

#### [Intrinsic functions list](intrinsic_funcs/08_vector_floating-point_functions.md#vector-floating-point-square-root-functions)


### 14.9. Vector Floating-Point Reciprocal Square-Root Estimate Operations
- vfrsqrt7.v

#### [Intrinsic functions list](intrinsic_funcs/08_vector_floating-point_functions.md#vector-floating-point-reciprocal-square-root-estimate-functions)


### 14.10. Vector Floating-Point Reciprocal Estimate Operations
- vfrec7.v

#### [Intrinsic functions list](intrinsic_funcs/08_vector_floating-point_functions.md#vector-floating-point-reciprocal-estimate-functions)


### 14.11. Vector Floating-Point MIN/MAX Operations
- vfmin.{vv,vf}
- vfmax.{vv,vf}

#### [Intrinsic functions list](intrinsic_funcs/08_vector_floating-point_functions.md#vector-floating-point-minmax-functions)


### 14.12. Vector Floating-Point Sign-Injection Operations
#### Instructions
- vfsgnj.{vv,vf}
- vfsgnjn.{vv,vf}
- vfsgnjx.{vv,vf}
- vfneg.v
- vfabs.v

#### [Intrinsic functions list](intrinsic_funcs/08_vector_floating-point_functions.md#vector-floating-point-sign-injection-functions)


### 14.13. Vector Floating-Point Compare Operations
#### Instructions
- vmfeq.{vv,vf}
- vmfne.{vv,vf}
- vmflt.{vv,vf}
- vmfle.{vv,vf}
- vmfgt.{vv,vf}
- vmfge.{vv,vf}

#### [Intrinsic functions list](intrinsic_funcs/08_vector_floating-point_functions.md#vector-floating-point-compare-functions)


### 14.14. Vector Floating-Point Classify Operations
#### Instructions
- vfclass.v

#### [Intrinsic functions list](intrinsic_funcs/08_vector_floating-point_functions.md#vector-floating-point-classify-functions)


### 14.15. Vector Floating-Point Merge Operations
#### Instructions
- vfmerge.vfm

#### [Intrinsic functions list](intrinsic_funcs/08_vector_floating-point_functions.md#vector-floating-point-merge-functions)


### 14.16. Vector Floating-Point Move Operations
#### Instructions
- vfmv.v.f

#### [Intrinsic functions list](intrinsic_funcs/08_vector_floating-point_functions.md#vector-floating-point-move-functions)


### 14.17. Single-Width Floating-Point/Integer Type-Convert Operations
#### Instructions
- vfcvt.xu.f.v
- vfcvt.x.f.v
- vfcvt.rtz.xu.f.v
- vfcvt.rtz.x.f.v
- vfcvt.f.xu.v
- vfcvt.f.x.v

#### [Intrinsic functions list](intrinsic_funcs/08_vector_floating-point_functions.md#single-width-floating-pointinteger-type-convert-functions)


### 14.18. Widening Floating-Point/Integer Type-Convert Operations
#### Instructions
- vfwcvt.xu.f.v
- vfwcvt.x.f.v
- vfwcvt.rtz.xu.f.v
- vfwcvt.rtz.x.f.v
- vfwcvt.f.xu.v
- vfwcvt.f.x.v
- vfwcvt.f.f.v

#### [Intrinsic functions list](intrinsic_funcs/08_vector_floating-point_functions.md#widening-floating-pointinteger-type-convert-functions)


### 14.19. Narrowing Floating-Point/Integer Type-Convert Operations
#### Instructions
- vfncvt.xu.f.w
- vfncvt.x.f.w
- vfncvt.rtz.xu.f.w
- vfncvt.rtz.x.f.w
- vfncvt.f.xu.w
- vfncvt.f.x.w
- vfncvt.f.f.w
- vfncvt.rod.f.f.w

#### [Intrinsic functions list](intrinsic_funcs/08_vector_floating-point_functions.md#narrowing-floating-pointinteger-type-convert-functions)


## 15. Vector Reduction Operations
### 15.1. Vector Single-Width Integer Reduction Operations
#### Instructions
- vredsum.vs
- vredmaxu.vs
- vredmax.vs
- vredminu.vs
- vredmin.vs
- vredand.vs
- vredor.vs
- vredxor.vs

#### [Intrinsic functions list](intrinsic_funcs/09_vector_reduction_functions.md#vector-single-width-integer-reduction-functions)


### 15.2. Vector Widening Integer Reduction Operations
#### Instructions
- vwredsumu.vs
- vwredsum.vs

#### [Intrinsic functions list](intrinsic_funcs/09_vector_reduction_functions.md#vector-widening-integer-reduction-functions)


### 15.3. Vector Single-Width Floating-Point Reduction Operations
#### Instructions
- vfredosum.vs
- vfredsum.vs
- vfredmax.vs
- vfredmin.vs

#### [Intrinsic functions list](intrinsic_funcs/09_vector_reduction_functions.md#vector-single-width-floating-point-reduction-functions)


### 15.4. Vector Widening Floating-Point Reduction Operations
#### Instructions
- vfwredosum.vs
- vfwredsum.vs

#### [Intrinsic functions list](intrinsic_funcs/09_vector_reduction_functions.md#vector-widening-floating-point-reduction-functions)


## 16. Vector Mask Instructions
### 16.1. Vector Mask-Register Logical Operations
#### Instructions
- vmand.mm
- vmnand.mm
- vmandnot.mm
- vmxor.mm
- vmor.mm
- vmnor.mm
- vmornot.mm
- vmxnor.mm
- vmmv.m
- vmclr.m
- vmset.m
- vmnot.m

#### [Intrinsic functions list](intrinsic_funcs/10_vector_mask_functions.md#vector-mask-register-logical-functions)


### 16.2. Vector mask population count vpopc
#### Instructions
- vpopc.m

#### [Intrinsic functions list](intrinsic_funcs/10_vector_mask_functions.md#vector-mask-population-count-functions)


### 16.3. vfirst find-first-set mask bit
#### Instructions
- vfirst.m

#### [Intrinsic functions list](intrinsic_funcs/10_vector_mask_functions.md#find-first-set-mask-bit-functions)


### 16.4. vmsbf.m set-before-first mask bit
#### Instructions
- vmsbf.m

#### [Intrinsic functions list](intrinsic_funcs/10_vector_mask_functions.md#set-before-first-mask-bit-functions)


### 16.5. vmsif.m set-including-first mask bit
#### Instructions
- vmsif.m

#### [Intrinsic functions list](intrinsic_funcs/10_vector_mask_functions.md#set-including-first-mask-bit-functions)


### 16.6. vmsof.m set-only-first mask bit
#### Instructions
- vmsof.m

#### [Intrinsic functions list](intrinsic_funcs/10_vector_mask_functions.md#set-only-first-mask-bit-functions)


### 16.8. Vector Iota Operations
#### Instructions
- viota.m

#### [Intrinsic functions list](intrinsic_funcs/10_vector_mask_functions.md#vector-iota-functions)


### 16.9. Vector Element Index Operations
#### Instructions
- vid.v

#### [Intrinsic functions list](intrinsic_funcs/10_vector_mask_functions.md#vector-element-index-functions)


## 17. Vector Permutation Operations
### 17.1. Integer Scalar Move Operations
#### Instructions
- vmv.s.x
- vmv.x.s

#### [Intrinsic functions list](intrinsic_funcs/11_vector_permutation_functions.md#integer-and-floating-point-scalar-move-functions)


### 17.2. Floating-Point Scalar Move Operations
#### Instructions
- vfmv.f.s
- vfmv.s.f

#### [Intrinsic functions list](intrinsic_funcs/11_vector_permutation_functions.md#integer-and-floating-point-scalar-move-functions)


### 17.3. Vector Slide Operations
#### Instructions
- vslideup.{vx,vi}
- vslidedown.{vx,vi}
- vslide1up.vx
- vslide1down.vx
- vfslide1up.vx
- vfslide1down.vx

#### [Intrinsic functions list](intrinsic_funcs/11_vector_permutation_functions.md#vector-slideup-and-slidedown-functions)


### 17.4. Vector Register Gather Operations
#### Instructions
- vrgather.{vx,vi}

#### [Intrinsic functions list](intrinsic_funcs/11_vector_permutation_functions.md#vector-register-gather-functions)


### 17.5. Vector Compress Operations
#### Instructions
- vcompress.vm

#### [Intrinsic functions list](intrinsic_funcs/11_vector_permutation_functions.md#vector-compress-instruction)

## 18. None
Keep this chapter none to aligned to riscv-v-spec chapters

## 19. Divided Element Extension ('Zvediv')
### 19.3. Vector Integer Dot-Product Operations
#### Instructions
- vdotu.vv
- vdot.vv

#### Intrinsic functions list
TODO


### 19.4. Vector Floating-Point Dot Product Operations
#### Instructions
- vfdotu.vv

#### Intrinsic functions list
TODO


## 20. RVV Intrinsic Examples
- [sgemm](rvv_sgemm.c)
- [saxpy](rvv_saxpy.c)

