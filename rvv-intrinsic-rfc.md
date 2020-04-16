# RISC-V "V" Vector Extension Intrinsics

- [Introduction](#introduction)
- [Type System](#type-system)
  * [Data Types](#data-types)
  * [Mask Types](#mask-types)
- [Naming Rules](#naming-rules)
- [Mask in Intrinsics](#mask-in-intrinsics)
- [With or Without the VL Argument](#with-or-without-the-vl-argument)
- [Configuration-Setting](#configuration-setting)
- [Exceptions](#exceptions)
  * [Vector Stores](#vector-stores)
  * [Comparison Instructions](#comparison-instructions)
  * [Reduction Instructions](#reduction-instructions)
  * [Merge Instructions](#merge-instructions)
  * [`vpopc.m` and `vfirst.m`](#vpopc-and-vfirst)
  * [Permutation Instructions](#permutation-instructions)
  * [Semantic Intrinsics](#semantic-intrinsics)

## Introduction

[TODO]

## Type System

### Data Types

Encode SEW and LMUL into data types. There are the following data types for `SEW` &#8804; 64. 

| Types        | LMUL = 1    | LMUL = 2    | LMUL = 4    | LMUL = 8
| ------------ | ----------- | ----------- | ----------- | -----------
| **int64_t**  | vint64m1_t  | vint64m2_t  | vint64m4_t  | vint64m8_t
| **uint64_t** | vuint64m1_t | vuint64m2_t | vuint64m4_t | vuint64m8_t
| **int32_t**  | vint32m1_t  | vint32m2_t  | vint32m4_t  | vint32m8_t
| **uint32_t** | vuint32m1_t | vuint32m2_t | vuint32m4_t | vuint32m8_t
| **int16_t**  | vint16m1_t  | vint16m2_t  | vint16m4_t  | vint16m8_t
| **uint16_t** | vuint16m1_t | vuint16m2_t | vuint16m4_t | vuint16m8_t
| **int8_t**   | vint8m1_t   | vint8m2_t   | vint8m4_t   | vint8m8_t
| **uint8_t**  | vuint8m1_t  | vuint8m2_t  | vuint8m4_t  | vuint8m8_t

### Mask Types

Encode `MLEN` into the mask types. There are the following mask types for `SEW` &#8804; 64.

| Types | MLEN = 1 | MLEN = 2 | MLEN = 4 | MLEN = 8 | MLEN = 16 | MLEN = 32 | MLEN = 64
| ----- | -------- | -------- | -------- | -------- | --------- | --------- | ---------
| bool  | vbool1_t | vbool2_t | vbool4_t | vbool8_t | vbool16_t | vbool32_t | vbool64_t

## Naming Rules

Intrinsics is the interface to the low level assembly in high level programming language. The intrinsic API has the goal to make all the V-ext instructions accessible from C/C++. The intrinsic names are as close as the assembly mnemonics. Besides the basic intrinsics corresponding to assembly mnemonics, there are intrinsics close to semantic naming.

The intrinsic names will encode return type if it is appropriate. It is easier to know the output type of the intrinsics from the name. If there is no return value, the intrinsics will encode the input value types.

In general, the naming rule of intrinsics is

```
INTRINSIC ::= MNEMONIC '_' RET_TYPE
MNEMONIC ::= Instruction name in v-ext specification. Replace '.' with '_'.
RET_TYPE ::= SEW LMUL
SEW ::= ( i8 | i16 | i32 | i64 | u8 | u16 | u32 | u64 )
LMUL ::= ( m1 | m2 | m4 | m8 )
```

```
Example:

vadd.vv vd, vs2, vs1:
vint8m1_t vadd_vv_i8m1(vint8m1_t vs2, vint8m1_t vs1)

vwaddu.vv vd, vs2, vs1:
vint16m2_t vwaddu_vv_i16m2(vint8m1_t vs2, vint8m1_t vs1)
```

## Mask in Intrinsics

RISC-V "V" extension only has "merge in output" semantic. Intrinsics with mask has two additional arguments, `mask` and `maskedoff`.

```
vd = vop(mask, maskedoff, arg1, arg2)
vd[i] = maskedoff[i], if mask[i] == 0
vd[i] = vop(arg1[i], arg2[2]), if mask[i] == 1
```

In general, the naming rule of intrinsic with mask is

```
INTRINSIC_WITH_MASK ::= INTRINSIC '_m'
```

```
Example:

vadd.vv vd, vs2, vs1, v0.t:
vint8m1_t vadd_vv_i8m1_m(vbool8_t mask, vint8m1_t maskedoff, vint8m1_t vs2, vint8m1_t vs1)
```

## With or Without the VL Argument

There are two variants of intrinsics regarding to `vl`.

1. Explicit vl intrinsic: Pass `vl` as an argument to the intrinsics. The `vl` argument helps users to track `vl` values from previous `vsetvl`.
2. Implicit vl intrinsic: No `vl` argument. Users need to know where the `vl` comes by the control flow.

The semantics between these two variants are the same.

To avoid users to manipulate `vl` argument in explicit vl intrinsic, there is an opaque type for `vl`.

```
typedef struct {
  unsigned long _vl;
} _VL_T;
```

The naming rule is

```
INTRINSIC_WITH_VL ::= INTRINSIC '_vl'
INTRINSIC_WITH_MASK_AND_VL ::= INTRINSIC_WITH_MASK '_vl'
```

```
Example:

vadd.vv vd, vs2, vs1:
vint8m1_t vadd_vv_i8m1(vint8m1_t vs2, vint8m1_t vs1)
vint8m1_t vadd_vv_i8m1_vl(vint8m1_t vs2, vint8m1_t vs1, _VL_T vl)

vadd.vv vd, vs2, vs1, v0.t:
vint8m1_t vadd_vv_i8m1_m(vbool8_t mask, vint8m1_t maskedoff, vint8m1_t vs2, vint8m1_t vs1)
vint8m1_t vadd_vv_i8m1_m_vl(vbool8_t mask, vint8m1_t maskedoff, vint8m1_t vs2, vint8m1_t vs1, _VL_T vl)
```

## Configuration-Setting

SEW and LMUL is a part of the naming. It is consistent with the other intrinsics.

```
Example:

size_t vsetvl_i8m1 (size_t avl);
size_t vsetvl_i8m2 (size_t avl);
size_t vsetvl_i8m4 (size_t avl);
size_t vsetvl_i8m8 (size_t avl);
size_t vsetvlmax_i8m1 ();
size_t vsetvlmax_i8m2 ();
size_t vsetvlmax_i8m4 ();
size_t vsetvlmax_i8m8 ();
```

## Exceptions

### Vector Stores

It does not encode return type into vector store. There is no return data for store operations. Instead, use the type of store data to name the intrinsics.

```
Example:

vsb.v vs3, (rs1):
void vsb_v_i8m1(int8_t *rs1, vint8m1_t vs3);
```

There is no `maskedoff` parameter for store operations. The value of `maskedoff` already exists in memory.

```
Example:

vsb.v vs3, (rs1), v0.t:
void vsb_v_i8m1_m(vbool8_t mask, int8_t *rs1, vint8m1_t vs3);
```

### Comparison Instructions

The result of comparison instructions is mask types. Becuase we use MLEN to name the mask types and multiple (SEW, LMUL) pairs map to the same MLEN, in addition to use the return type to name the intrinsics, we also encode the input types to distinguish these intrinsics.

```
Example:

vmseq.vv vd, vs2, vs1:
vbool8_t vmseq_vv_i8m1_b8(vint8m1_t vs2, vint8m1_t vs1);
vbool8_t vmseq_vv_i16m2_b8(vint16m2_t vs2, vint16m2_t vs1);
```

### Reduction Instructions

The scalar input and output operands are held in element 0 of a single vector register. Use LMUL = 1 in the return type. To distinguish different intrinsics with different input types, encode the input type and the result type in the name.

```
Example:

vredsum.vs vd, vs2, vs1:
vint8m1_t vredsum_vs_i8m1_i8m1(vint8m1_t vs2, vint8m1_t vs1)
vint8m1_t vredsum_vs_i8m2_i8m1(vint8m2_t vs2, vint8m1_t vs1)
vint8m1_t vredsum_vs_i8m4_i8m1(vint8m4_t vs2, vint8m1_t vs1)
vint8m1_t vredsum_vs_i8m8_i8m1(vint8m8_t vs2, vint8m1_t vs1)
```

There is no `maskedoff` parameter for reduction operations. 

```
Example:

vredsum.vs vd, vs2, vs1, v0.t:
vint8m1_t vredsum_vs_i8m2_i8m1_m(vbool4_t mask, vint8m2_t vs2, vint8m1_t vs1)
```

### Merge Instructions

Merge instructions have no `maskedoff` argument.

```
Example:

vmerge.vvm vd, vs2, vs1, v0:
vint8m1_t vmerge_vvm_i8m1(vbool8_t mask, vint8m1_t vs2, vint8m1_t vs1);
```

### `vpopc.m` and `vfirst.m`<a name="vpopc-and-vfirst"></a>

The return type of `vpopc.m` and `vfirst.m` is apparently an integer. Do not encode the return type into it. Instead, encode the input type to it.

```
Example:

vpopc.m rd, vs2:
unsigned long vpopc_m_b1(vbool1_t vs2);
unsigned long vpopc_m_b2(vbool2_t vs2);
```

### Permutation Instructions

To move the element 0 of a vector to a scalar, encode the input vector type and the output scalar type.

```
Example:

vmv.x.s rd, vs2:
int8_t vmv_x_s_i8m1_i8 (vint8m1_t vs2);
int8_t vmv_x_s_i8m2_i8 (vint8m2_t vs2);
int8_t vmv_x_s_i8m4_i8 (vint8m4_t vs2);
int8_t vmv_x_s_i8m8_i8 (vint8m8_t vs2);
```

### Semantic Intrinsics

This section lists all intrinsics with higher semantic naming. It is usually an alias of a vector instruction or a combination of vector instructions.

```
vmv.v.v vd, vs1:
vint8m1_t vcopy_i8m1(vint8m1_t vd, vint8m1_t vs1);

vmv.v.x vd, rs1:
vint8m1_t vsplat_i8m1(int8_t rs1);
```
