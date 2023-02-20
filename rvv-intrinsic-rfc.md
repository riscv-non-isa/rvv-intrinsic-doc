# RISC-V "V" Vector Extension Intrinsics

- [Introduction](#introduction)
- [Type System](#type-system)
  * [Data Types](#data-types)
  * [Mask Types](#mask-types)
- [Configuration-Setting and `vl` Argument](#configuration-setting)
- [Naming Rules](#naming-rules)
- [Exceptions in Naming](#exceptions)
  * [Vector Stores](#vector-stores)
  * [Vector Integer Add-with-Carry / Subtract-with-Borrow Instructions](#add-with-carry)
  * [Comparison Instructions](#comparison-instructions)
  * [Reduction Instructions](#reduction-instructions)
  * [`vcpop.m` and `vfirst.m`](#vcpop-and-vfirst)
  * [Permutation Instructions](#permutation-instructions)
- [Scalar in Vector Operations](#scalar-in-vector-operations)
- [Mask in Intrinsics](#mask-in-intrinsics)
- [Masked Intrinsics Without MaskedOff](#no-maskedoff)
  * [Vector Stores](#no-maskedoff-stores)
  * [Reduction Instructions](#no-maskedoff-reduction)
  * [Merge Instructions](#no-maskedoff-merge)
- [Policy Intrinsic Functions](#policy)
- [Keep the Original Values of the Destination Vector](#dest-operand)
- [SEW and LMUL of Intrinsics](#sew-and-lmul-of-intrinsics)
- [C Operators on RISC-V Vector Types](#c-operators)
- [Utility Functions](#utility-functions)
  * [Vector Initialization](#vector-init)
  * [Reinterpret between floating point and integer types](#reinterpret-float)
  * [Reinterpret between signed and unsigned types](#reinterpret-sign)
  * [Reinterpret between different SEWs under the same LMUL](#reinterpret-sew)
  * [LMUL truncation and LMUL extension functions](#lmul-trunc)
  * [Vector Insertion and Extraction functions](#insert-extract)
- [Overloaded Interface](#overloaded-interface)
- [Switching Vtype and Keep same VL in a Loop](#switching-vtype)
- [Programming Note](#programming-notes)
  * [Strided load/store with stride of 0](#stride-with-zero)

## Introduction<a name="introduction"></a>

This document introduces the intrinsics for RISC-V vector programming, including the design decision we take, the type system, the general naming rules for intrinsics, and facilities for vector users. It does not list all available intrinsics for vector programming. The full set of intrinsics will be written in another document.

## Availability<a name="availability"></a>

In order to access the intrinsics for RISC-V vector programming, it is necessary to include the header file `riscv_vector.h`.
Further, individual intrinsic functions depend on the availability of the corresponding vector instructions (as part of the effective `-march` string).

## Type System<a name="type-system"></a>

### Data Types<a name="data-types"></a>

Encode `SEW` and `LMUL` into data types. We enforce the constraint `LMUL ≥ SEW/ELEN` in the implementation. There are the following data types for `ELEN` = 64.

| Types        | LMUL = 1     | LMUL = 2     | LMUL = 4     | LMUL = 8     | LMUL = 1/2    | LMUL = 1/4    | LMUL = 1/8
| ------------ | ------------ | ------------ | ------------ | -----------  | ------------- | ------------- | --------------
| **int64_t**  | vint64m1_t   | vint64m2_t   | vint64m4_t   | vint64m8_t   | N/A           | N/A           | N/A
| **uint64_t** | vuint64m1_t  | vuint64m2_t  | vuint64m4_t  | vuint64m8_t  | N/A           | N/A           | N/A
| **int32_t**  | vint32m1_t   | vint32m2_t   | vint32m4_t   | vint32m8_t   | vint32mf2_t   | N/A           | N/A
| **uint32_t** | vuint32m1_t  | vuint32m2_t  | vuint32m4_t  | vuint32m8_t  | vuint32mf2_t  | N/A           | N/A
| **int16_t**  | vint16m1_t   | vint16m2_t   | vint16m4_t   | vint16m8_t   | vint16mf2_t   | vint16mf4_t   | N/A
| **uint16_t** | vuint16m1_t  | vuint16m2_t  | vuint16m4_t  | vuint16m8_t  | vuint16mf2_t  | vuint16mf4_t  | N/A
| **int8_t**   | vint8m1_t    | vint8m2_t    | vint8m4_t    | vint8m8_t    | vint8mf2_t    | vint8mf4_t    | vint8mf8_t
| **uint8_t**  | vuint8m1_t   | vuint8m2_t   | vuint8m4_t   | vuint8m8_t   | vuint8mf2_t   | vuint8mf4_t   | vuint8mf8_t
| **vfloat64** | vfloat64m1_t | vfloat64m2_t | vfloat64m4_t | vfloat64m8_t | N/A           | N/A           | N/A
| **vfloat32** | vfloat32m1_t | vfloat32m2_t | vfloat32m4_t | vfloat32m8_t | vfloat32mf2_t | N/A           | N/A
| **vfloat16** | vfloat16m1_t | vfloat16m2_t | vfloat16m4_t | vfloat16m8_t | vfloat16mf2_t | vfloat16mf4_t | N/A

There are the following data types for `ELEN` = 32.

| Types        | LMUL = 1     | LMUL = 2     | LMUL = 4     | LMUL = 8     | LMUL = 1/2    | LMUL = 1/4    | LMUL = 1/8
| ------------ | ------------ | ------------ | ------------ | -----------  | ------------- | ------------- | --------------
| **int32_t**  | vint32m1_t   | vint32m2_t   | vint32m4_t   | vint32m8_t   | N/A           | N/A           | N/A
| **uint32_t** | vuint32m1_t  | vuint32m2_t  | vuint32m4_t  | vuint32m8_t  | N/A           | N/A           | N/A
| **int16_t**  | vint16m1_t   | vint16m2_t   | vint16m4_t   | vint16m8_t   | vint16mf2_t   | N/A           | N/A
| **uint16_t** | vuint16m1_t  | vuint16m2_t  | vuint16m4_t  | vuint16m8_t  | vuint16mf2_t  | N/A           | N/A
| **int8_t**   | vint8m1_t    | vint8m2_t    | vint8m4_t    | vint8m8_t    | vint8mf2_t    | vint8mf4_t    | N/A
| **uint8_t**  | vuint8m1_t   | vuint8m2_t   | vuint8m4_t   | vuint8m8_t   | vuint8mf2_t   | vuint8mf4_t   | N/A
| **vfloat32** | vfloat32m1_t | vfloat32m2_t | vfloat32m4_t | vfloat32m8_t | N/A           | N/A           | N/A
| **vfloat16** | vfloat16m1_t | vfloat16m2_t | vfloat16m4_t | vfloat16m8_t | vfloat16mf2_t | N/A           | N/A

### Mask Types<a name="mask-types"></a>

Encode the ratio of `SEW`/`LMUL` into the mask types. There are the following mask types.

n = `SEW`/`LMUL`

| Types | n = 1    | n = 2    | n = 4    | n = 8    | n = 16    | n = 32    | n = 64
| ----- | -------- | -------- | -------- | -------- | --------- | --------- | ---------
| bool  | vbool1_t | vbool2_t | vbool4_t | vbool8_t | vbool16_t | vbool32_t | vbool64_t

## Configuration-Setting and `vl` Argument<a name="configuration-setting"></a>

There are two variants of configuration setting intrinsics. `vsetvl` is used to
get the active vector length (`vl`) according to the given application vector
length(`AVL`), `SEW` and `LMUL`.

`vl` register status is not exposed to C language level, so in theory you can
treat `vsetvl` as a function which returns the min value between `avl` and `VLMAX` and `vsetvlmax` as returning `VLMAX`.

```c
size_t vsetvl_e8m1 (size_t avl);
size_t vsetvl_e8m2 (size_t avl);
size_t vsetvl_e8m4 (size_t avl);
size_t vsetvl_e8m8 (size_t avl);
size_t vsetvlmax_e8m1 ();
size_t vsetvlmax_e8m2 ();
size_t vsetvlmax_e8m4 ();
size_t vsetvlmax_e8m8 ();
```

`SEW` and `LMUL` are a part of the naming. They are static information for the
intrinsics.

All of the intrinsic functions have a `vl` argument to specify the active
vector length, except a few functions which operate regardless of `vl`. e.g. `vmv.x.s`,
`vfmv.f.s`, `vundefined`, `vreinterpret`, `vlmul_ext`, `vlmul_trunc`, `vget`,
`vset` and `vcreate`.

The intrinsic functions will only operate at most `VLMAX` elements if the `vl`
arguments are larger than `VLMAX`.

The semantics of following two snippets are equivalent. We strongly suggest
the first form.

```c
size_t vl = vsetvl_e8m1 (avl);
vint8m1_t va, vb, vc;
va = vadd_vv_i8m1(vb, vc, vl);
```

```c
vint8m1_t va, vb, vc;
va = vadd_vv_i8m1(vb, vc, avl);
```

## Naming Rules<a name="naming-rules"></a>

Intrinsics is the interface to the low level assembly in high level programming language. The intrinsic API has the goal to make all the V-ext instructions accessible from C/C++. The intrinsic names are as close as the assembly mnemonics. Besides the basic intrinsics corresponding to assembly mnemonics, there are intrinsics close to semantic naming.

The intrinsic names will encode return type if it is appropriate. It is easier to know the output type of the intrinsics from the name. In addition, if the intrinsic call is used as the operand, having the return type is more immediate. If there is no return value, the intrinsics will encode the input value types. If the return type is the same, use exceptional rules to differentiate them. See [Exceptions in Naming](#exceptions).

In general, the naming rule of intrinsics is

```
INTRINSIC ::= MNEMONIC '_' RET_TYPE
MNEMONIC ::= Instruction name in v-ext specification. Replace '.' with '_'.
RET_TYPE ::= SEW LMUL
SEW ::= ( i8 | i16 | i32 | i64 | u8 | u16 | u32 | u64 | f16 | f32 | f64 )
LMUL ::= ( m1 | m2 | m4 | m8 | mf2 | mf4 | mf8 )
```

```
Example:

vadd.vv vd, vs2, vs1:
vint8m1_t vadd_vv_i8m1(vint8m1_t vs2, vint8m1_t vs1, size_t vl);

vwaddu.vv vd, vs2, vs1:
vint16m2_t vwaddu_vv_i16m2(vint8m1_t vs2, vint8m1_t vs1, size_t vl);
```


## Exceptions in Naming<a name="exceptions"></a>

If intrinsics have the same return type under different input types, we could not use general naming rules directly on these intrinsics. It will cause the same intrinsic names for different input types.

This section lists all exceptional cases for intrinsic naming.

### Vector Stores<a name="vector-stores"></a>

It does not encode return type into vector store. There is no return data for store operations. Instead, use the type of store data to name the intrinsics.

```
Example:

vse8.v vs3, (rs1):
void vse8_v_i8m1(int8_t *rs1, vint8m1_t vs3, size_t vl);
```

### Vector Integer Add-with-Carry / Subtract-with-Borrow Instructions<a name="add-with-carry"></a>

The result of `vmadc` and `vmsbc` is mask types. Because we use the ratio `SEW`/`LMUL` to name the mask types and multiple (`SEW`, `LMUL`) pairs map to the same ratio, in addition to use the return type to name the intrinsics, we also encode the input types to distinguish these intrinsics.

```
Example:

vmadc.vv vd, vs2, vs1:
vbool8_t vmadc_vv_i8m1_b8(vint8m1_t vs2, vint8m1_t vs1, size_t vl);
```

### Comparison Instructions<a name="comparison-instructions"></a>

The result of comparison instructions is mask types. Becuase we use the ratio `SEW`/`LMUL` to name the mask types and multiple (`SEW`, `LMUL`) pairs map to the same ratio, in addition to use the return type to name the intrinsics, we also encode the input types to distinguish these intrinsics.

```
Example:

vmseq.vv vd, vs2, vs1:
vbool8_t vmseq_vv_i8m1_b8(vint8m1_t vs2, vint8m1_t vs1, size_t vl);
vbool8_t vmseq_vv_i16m2_b8(vint16m2_t vs2, vint16m2_t vs1, size_t vl);
```

### Reduction Instructions<a name="reduction-instructions"></a>

The scalar input and output operands are held in element 0 of a single vector register. Use LMUL = 1 in the return type. To distinguish different intrinsics with different input types, encode the input type and the result type in the name.

```
Example:

vredsum.vs vd, vs2, vs1:
vint8m1_t vredsum_vs_i8m1_i8m1(vint8m1_t dest, vint8m1_t vs2, vint8m1_t vs1, size_t vl);
vint8m1_t vredsum_vs_i8m2_i8m1(vint8m1_t dest, vint8m2_t vs2, vint8m1_t vs1, size_t vl);
vint8m1_t vredsum_vs_i8m4_i8m1(vint8m1_t dest, vint8m4_t vs2, vint8m1_t vs1, size_t vl);
vint8m1_t vredsum_vs_i8m8_i8m1(vint8m1_t dest, vint8m8_t vs2, vint8m1_t vs1, size_t vl);
```

### `vcpop.m` and `vfirst.m`<a name="vcpop-and-vfirst"></a>

The return type of `vcpop.m` and `vfirst.m` is apparently an integer. Do not encode the return type into it. Instead, encode the input type to it.

```
Example:

vcpop.m rd, vs2:
unsigned long vcpop_m_b1(vbool1_t vs2, size_t vl);
unsigned long vcpop_m_b2(vbool2_t vs2, size_t vl);
```

### Permutation Instructions<a name="permutation-instructions"></a>

To move the element 0 of a vector to a scalar, encode the input vector type and the output scalar type.

```
Example:

vmv.x.s rd, vs2:
int8_t vmv_x_s_i8m1_i8 (vint8m1_t vs2, size_t vl);
int8_t vmv_x_s_i8m2_i8 (vint8m2_t vs2, size_t vl);
int8_t vmv_x_s_i8m4_i8 (vint8m4_t vs2, size_t vl);
int8_t vmv_x_s_i8m8_i8 (vint8m8_t vs2, size_t vl);
```

## Scalar in Vector Operations<a name="scalar-in-vector-operations"></a>

Some V-extension instructions have both vector and scalar operands,
and the scalar operands may be truncated or extended depending on the relative widths of XLEN and SEW.
The intrinsics API hides this detail from the C programmer by using fixed-width integer types, as follows:

```
Example:

// Use uint8_t for op2.
vuint8m1_t vadd_vx_u8m1(vuint8m1_t op1, uint8_t op2, size_t vl);
// Use uint64_t for op2.
vuint64m1_t vadd_vx_u64m1(vuint64m1_t op1, uint64_t op2, size_t vl);
```

To support the implied semantics, the compiler may generate multiple instructions for the intrinsics.
(More generally, this API does not constrain the compiler in which instructions it actually generates.)
For example, to support `vmv_x_s_i64m1_i64` when XLEN = 32, the compiler may generate `vmv.x.s`, `vslide1down.vi`, and another `vmv.x.s`, all with SEW = 32, to extract the full 64 bits into two X-registers. (A future API extension could include an "`vmv_x_s_i64m1_i32`", perhaps only when XLEN = 32, whose semantics match `vmv.x.s` for XLEN = 32 and SEW = 64.)

## Mask in Intrinsics<a name="mask-in-intrinsics"></a>

RISC-V "V" extension only has "merge in output" semantic. Intrinsics with mask has two additional arguments, `mask` and `maskedoff`.

```
vd = vop(mask, maskedoff, arg1, arg2)
vd[i] = maskedoff[i], if mask[i] == 0
vd[i] = vop(arg1[i], arg2[2]), if mask[i] == 1
```

In general, the naming rule of intrinsic with mask v0.t is

```
INTRINSIC_WITH_MASK ::= INTRINSIC '_m'
```

```
Example:

vadd.vv vd, vs2, vs1, v0.t:
vint8m1_t vadd_vv_i8m1_m(vbool8_t mask, vint8m1_t maskedoff, vint8m1_t vs2, vint8m1_t vs1, size_t vl);
```

If the intrinsics are always masked, there is no need to append `_m` to the intrinsic. For example, the `vmerge` instructions are always masked.

```
Example:

vmerge.vvm vd, vs2, vs1, v0:
vint8m1_t vmerge_vvm_i8m1(vbool8_t mask, vint8m1_t vs2, vint8m1_t vs1, size_t vl);

vcompress.vm vd, vs2, vs1:
vint8m1_t vcompress_vm_i8m1(vbool8_t vs1, vint8m1_t maskedoff, vint8m1_t vs2, size_t vl);
```

There are two additional masking semantics: *zero in output* semantic and *don't care in output* semantic. Users could leverage *merge in output* intrinsics to simulate these two additional masking semantics.

The intrinsics with ending `_m` have no argument to specify tail policy. Almost all `_m` intrinsics are tail agnostic and mask undisturbed. See [Policy Intrinsic Functions](#policy) for the more detail.

```
Example:

// Don't care in output semantic
vint8m1_t vadd_vv_i8m1_m(vbool8_t mask, vundefined_i8m1(), vint8m1_t vs2, vint8m1_t vs1, size_t vl);
```

## Masked Intrinsics Without MaskedOff<a name="no-maskedoff"></a>

### Vector Stores<a name="no-maskedoff-stores"></a>

There is no `maskedoff` argument for store operations. The value of `maskedoff` already exists in memory.

```
Example:

vse8.v vs3, (rs1), v0.t:
void vse8_v_i8m1_m(vbool8_t mask, int8_t *rs1, vint8m1_t vs3, size_t vl);
```

### Reduction Instructions<a name="no-maskedoff-reduction"></a>

The result of reductions is put in element 0 of the output vector. There is no `maskedoff` argument for reduction operations.

```
Example:

vredsum.vs vd, vs2, vs1, v0.t:
vint8m1_t vredsum_vs_i8m2_i8m1_m(vbool4_t mask, vint8m1_t dest, vint8m2_t vs2, vint8m1_t vs1, size_t vl);
```

### Merge Instructions<a name="no-maskedoff-merge"></a>

The result of merge operations comes from their two source operands. Merge intrinsics have no `maskedoff` argument.

```
Example:

vmerge.vvm vd, vs2, vs1, v0:
vint8m1_t vmerge_vvm_i8m1_m(vbool8_t mask, vint8m1_t vs2, vint8m1_t vs1, size_t vl);
```

## Policy Intrinsic Functions<a name="policy"></a>

The intrinsics encode the policy (or policies) explicitly in function name's suffix if operations support those policies.
Users could use policy intrinsic functions to control tail and inactive elements. Please refer to [3.4.3 Vector Tail Agnostic and Vector Mask Agnostic](https://github.com/riscv/riscv-v-spec/blob/master/v-spec.adoc#343-vector-tail-agnostic-and-vector-mask-agnostic-vta-and-vma)
and [5.4 Prestart, Active, Inactive, Body, and Tail Element Definitions](https://github.com/riscv/riscv-v-spec/blob/master/v-spec.adoc#sec-inactive-defs) for fundamental definitions.

The general naming rule is as the following.
The interface differs between instructions and will be enumerated in the following of this section.

```
INTRINSIC_WITH_TU ::= INTRINSIC '_tu'
INTRINSIC_WITH_TA ::= INTRINSIC '_ta'
INTRINSIC_WITH_MASK_MU ::= INTRINSIC '_mu'
INTRINSIC_WITH_MASK_MA ::= INTRINSIC '_ma'
INTRINSIC_WITH_MASK_TUM ::= INTRINSIC '_tum'
INTRINSIC_WITH_MASK_TAM ::= INTRINSIC '_tam'
INTRINSIC_WITH_MASK_TU_MA ::= INTRINSIC '_tuma'
INTRINSIC_WITH_MASK_TA_MA ::= INTRINSIC '_tama'
INTRINSIC_WITH_MASK_TU_MU ::= INTRINSIC '_tumu'
INTRINSIC_WITH_MASK_TA_MU ::= INTRINSIC '_tamu'
```

### Intrinsics without `dest` or `vd` argument

|Masked?  | TU? | MU? | Intrinsic
|--- |--- |--- |---
|No  | No | N/A| `vadd_vv_<ty>_ta(op1, op2, vl)` and `vadd_vv_<ty>(op1, op2, vl)`
|No  | Yes| N/A| `vadd_vv_<ty>_tu(merge,op1, op2, vl)`
|Yes | No | No | `vadd_vv_<ty>_tama(mask, op1, op2, vl)`
|Yes | No | Yes| `vadd_vv_<ty>_tamu(mask, merge, op1, op2, vl)`, and `vadd_vv_<ty>_m(mask, merge, op1, op2, vl)`
|Yes | Yes| No | `vadd_vv_<ty>_tuma(mask, merge, op1, op2, vl)`
|Yes | Yes| Yes| `vadd_vv_<ty>_tumu(mask, merge, op1, op2, vl)`

### Intrinsics with the `dest` argument and doesn't have a masked type

|Masked? | TU? | MU? | Intrinsic
|--- |--- | ---| ---
|No  | No | N/A| `vmv_v_x_<ty>_ta(src, vl)` and `vmv_v_x_<ty>(src, vl)`
|No  | Yes| N/A| `vmv_v_x_<ty>_tu(merge, src, vl)`

### Intrinsics with the `vd` argument

|Masked?  | TU? | MU? | Intrinsic
|--- |--- |--- |---
|No  | No | N/A| `vmacc_vv_<ty>_ta(vd, vs1, vs2, vl)`
|No  | Yes| N/A| `vmacc_vv_<ty>_tu(vd, vs1, vs2, vl)` and `vmacc_vv_<ty>(vd, vs1, vs2, vl)`
|Yes | No | No | `vmacc_vv_<ty>_tama(mask, vd, vs1, vs2, vl)`
|Yes | No | Yes| `vmacc_vv_<ty>_tamu(mask, vd, vs1, vs2, vl)` and `vmacc_vv_<ty>_m(mask, vd, vs1, vs2, vl)`
|Yes | Yes| No | `vmacc_vv_<ty>_tuma(mask, vd, vs1, vs2, vl)`
|Yes | Yes| Yes| `vmacc_vv_<ty>_tumu(mask, vd, vs1, vs2, vl)`

### Intrinsics for the reduction instruction which only have tail policy.

|Masked?  | TU? | MU? | Intrinsic
|--- |--- |--- |---
|No  | No | N/A| `vredsum_vs_<ty>_ta(vector, scalar, vl)`
|No  | Yes| N/A| `vredsum_vs_<ty>_tu(merge, vector, scalar, vl)` and `vredsum_vs_<ty>(merge, vector, scalar, vl)`
|Yes | No | N/A| `vredsum_vs_<ty>_tam(mask, vector, scalar, vl)`
|Yes | Yes| N/A| `vredsum_vs_<ty>_tum(mask, merge, vector, scalar, vl)` and `vredsum_vs_<ty>_m(mask, merge, vector, scalar, vl)`

### Intrinsics for the instructions which only have mask policy. (ex. vector comparison, `vmsbf.m`, `vmsif.m` and `vmsof.m`.)

Masked?  | TU? | MU? | Intrinsic
--- |--- |--- |---
No  | N/A| N/A| `vmseq_vv_i8m1_b8(op, op2, vl)`
Yes | N/A| No | `vmseq_vv_i8m1_b8_ma(mask, op1, op2, vl)`
Yes | N/A| Yes| `vmseq_vv_i8m1_b8_mu(mask, merge, op1, op2, vl)` and `vmseq_vv_i8m1_b8_m(mask, merge, op1, op2, vl)`


> NOTE: N/A means it is a compiler-defined value. For example, compiler could choose the same policy with adjacent instruction to save the vsetvli instruction.

### Special cases

There are some special cases for policy functions listed as below:

- The following instructions doesn't have an masked intrinsic, therefore it only supports `_ta` and `_tu`:
  - `vadc`, `vsbc`
  - `vmv.s.x`, `vfmv.s.f`
  - Vector integer and floating-point move instructions
  - Vector integer and floating-point merge instructions
  - Vector compress instructions
- The following instructions may only use mask value, it only supports `_ma` and `_mu`:
  - `vmsbf.m`, `vmsif.m`, `vmsof.m`
  - Vector integer and floating-point comparison instructions
- The following instructions do not have policy intrinsic functions:
  - `vfirst.m`, `vmv.x.s`, `vfmv.f.s`, `vcpop.m`
  - `vmadc`, `vmsbc`,  `vlm.v`
  - Vector store instructions
- `vslideup` and `vslidedown` still have dest operand in `_ta` and `_tama` policy.

### Explicit policy for overloaded intrinsic functions

The policy is encoded as suffix for overloading functions just like non-overloading ones.

```
vadd.vv vd, vs2, vs1:

// unmasked
vint32m1_t vadd(vint32m1_t op1, vint32m1_t op2, size_t vl); // alias to vadd_vv_i32m1
vint32m1_t vadd_ta(vint32m1_t op1, vint32m1_t op2, size_t vl);
vint32m1_t vadd_tu(vint32m1_t merge, vint32m1_t op1, vint32m1_t op2, size_t vl);
// masked
vint32m1_t vadd(vbool32_t mask, vint32m1_t merge, vint32m1_t op1, vint32m1_t op2, size_t vl); // alias to vadd_vv_i32m1_m
vint32m1_t vadd_tama(vbool32_t mask, vint32m1_t op1, vint32m1_t op2, size_t vl);
vint32m1_t vadd_tamu(vbool32_t mask, vint32m1_t merge, vint32m1_t op1, vint32m1_t op2, size_t vl);
vint32m1_t vadd_tuma(vbool32_t mask, vint32m1_t merge, vint32m1_t op1, vint32m1_t op2, size_t vl);
vint32m1_t vadd_tumu(vbool32_t mask, vint32m1_t merge, vint32m1_t op1, vint32m1_t op2, size_t vl);
```

The overloading intrinsics for `vmv.s.x`, `vfmv.s.f`, `vid.v` and `viota.m` are special cases from other overloading intrinsics.
Their arguments for `_ta` and `_tama` make them impossible to overload without specifying the return type, making them identical with the non-overloading ones.

```
vid.v vd, vm

// unmasked
vuint32m1_t vid_tu(vuint32m1_t merge, size_t vl);
vuint32m1_t vid_v_u32m1_ta(size_t vl);
// masked
vuint32m1_t vid_tuma(vbool32_t mask, vuint32m1_t merge, size_t vl);
vuint32m1_t vid_tumu(vbool32_t mask, vuint32m1_t merge, size_t vl);
vuint32m1_t vid_tamu(vbool32_t mask, vuint32m1_t merge, size_t vl);
vuint32m1_t vid_v_u32m1_tama(vbool32_t mask, size_t vl);
```

## Keep the Original Values of the Destination Vector<a name="dest-operand"></a>

`vmv.s.x` and reduction operations will only modify the first element of the destination vector. Users could keep the original values of the remaining elements in the destination vector through `dest` argument in these intrinsics.

Vector slideup works by leaving elements `0<i<OFFSET` undisturbed, so it need the destination operand as input for correctness. Vector slidedown also have destination operand, but it's used for interface consistent with vslideup, not for correctness.

```
Example:

vint8m1_t vmv_s_x_i8m1(vint8m1_t dest, int8_t src, size_t vl);
vint8m1_t vredsum_vs_i8m1_i8m1(vint8m1_t dest, vint8m1_t vs2, vint8m1_t vs1, size_t vl);
vint8m1_t vredsum_vs_i8m2_i8m1_m(vbool4_t mask, vint8m1_t dest, vint8m2_t vs2, vint8m1_t vs1, size_t vl);
vuint8m1_t vslide1up_vx_u8m1(vuint8m1_t dest, vuint8m1_t op1, uint8_1 op2, size_t vl);

```

## SEW and LMUL of Intrinsics<a name="sew-and-lmul-of-intrinsics"></a>

`SEW` and `LMUL` are the static information for the intrinsics. The compiler will generate vsetvli when vtype is changed between operations.

```
Example:

vint8m1_t a, b, c, d;
vint16m2_t a2, b2, c2;
...
a2 = vwadd_vv_i16m2(a, b, vl);
b2 = vwadd_vv_i16m2(c, d, vl);
c2 = vadd_vv_i16m2(a2, b2, vl);
```

It will generate the following instructions.

```
vsetvli x0, vl, e8,m1
vwadd.vv a2, a, b
vwadd.vv b2, c, d
vsetvli x0, vl, e16,m2
vadd.vv c2, a2, b2
```

Be aware that when the ratio of `LMUL/SEW` is changed, users need to ensure the `vl` is correct for the following operations if using *implicit vl intrinsics*.

## C Operators on RISC-V Vector Types<a name="c-operators"></a>

The semantic of C builtin operators, other than simple assignment, hasn't been decided yet. Simple assignment keeps the usual C semantics of storing the value on the right operand into the variable of the left operand.

## Utility Functions<a name="utility-functions"></a>

This section lists all utility functions to help users program in V intrinsics easier.

### Vector Initialization<a name="vector-init"></a>

These utility functions are used to initialize vector values. They could be used in masking intrinsics with *don't care in output* semantics.

```
Example:

vint8m1_t vundefined_i8m1()
```

Note: Any operation with `vundefined_* ()` are undefined and unpredictable,
the only recommended usage is used as maskedoff operand; an additional note is
any operation with `vundefined_* ()` will got unpredictable result, e.g.
`vxor(vundefined (), vundefined ())` and `vec a = vundefined(); vec b = vxor(a, a);`
both are not guarantee result vector with zeros.

### Reinterpret between floating point and integer types<a name="reinterpret-float"></a>

These utility functions help users to convert types between floating point and integer types. The reinterpreter intrinsics only change the types of underlying contents. It is a nop operation.

```
Example:

// Convert floating point to signed integer types.
vint64m1_t vreinterpret_v_f64m1_i64m1(vfloat64m1_t src)
// Convert floating point to unsigned integer types.
vuint64m1_t vreinterpret_v_f64m1_u64m1(vfloat64m1_t src);
```

### Reinterpret between signed and unsigned types<a name="reinterpret-sign"></a>

These utility functions help users to convert types between signed and unsigned types. The reinterpreter intrinsics only change the types of underlying contents. It is a nop operation.

```
Example:

// Convert signed to unsigned types.
vuint8m1_t vreinterpret_v_i8m1_u8m1(vint8m1_t src)
```

### Reinterpret between different SEW under the same LMUL<a name="reinterpret-sew"></a>

These utility functions help users to convert types between `SEW`s under the same `LMUL`, e.g., convert vint32m1_t to vint64m1_t. The reinterpreter intrinsics only change the types of underlying contents. It is a nop operation. It will generate `vsetvli` by the following vector operation for the new type.

```
Example:

// Convert SEW under the same LMUL.
vint64m1_t vreinterpret_v_i32m1_i64m1(vint32m1_t src)
```

### LMUL truncation and LMUL extension functions<a name="lmul-trunc)"></a>

These utility functions help users to truncate or extent current LMUL under same SEW regardless of vl (it won't change content of vl register)

The LMUL extension result of extension part are undefined value.

```
Example:

// LMUL Truncation, vlmul_trunc_v_<src_lmul>_<target_lmul>
vint64m1_t vlmul_trunc_v_i64m2_i64m1 (vint64m2_t op1);
vint64m1_t vlmul_trunc_v_i64m4_i64m1 (vint64m4_t op1);
vint64m2_t vlmul_trunc_v_i64m4_i64m2 (vint64m4_t op1);

// LMUL Extension, vlmul_ext_v_<src_lmul>_<target_lmul>
vint64m2_t vlmul_ext_v_i64m1_i64m2 (vint64m1_t op1);
vint64m4_t vlmul_ext_v_i64m1_i64m4 (vint64m1_t op1);
vint64m8_t vlmul_ext_v_i64m1_i64m8 (vint64m1_t op1);
```

### Vector Insertion and Extraction functions<a name="insert-extract)"></a>

These utility functions help users to insert or extract smaller LMUL under same SEW.

```
Example:

// Insert an smaller LMUL, vset_v_<src_lmul>_<target_lmul>
vint32m2_t vset_v_i32m1_i32m2 (vint32m2_t dest, size_t index, vint32m1_t val);
vint32m4_t vset_v_i32m1_i32m4 (vint32m4_t dest, size_t index, vint32m1_t val);
vint32m4_t vset_v_i32m2_i32m4 (vint32m4_t dest, size_t index, vint32m2_t val);

// Extract an smaller LMUL, vget_v_<src_lmul>_<target_lmul>
vint32m1_t vget_v_i32m2_i32m1 (vint32m2_t src, size_t index);
vint32m1_t vget_v_i32m4_i32m1 (vint32m4_t src, size_t index);
vint32m2_t vget_v_i32m4_i32m2 (vint32m4_t src, size_t index);
```

## Overloaded Interface<a name="overloaded-interface"></a>

Overloaded Interface have shorter function name and support less number of intrinsic functions.

Overloaded interface are always keep full function name with removing the suffix.

Compiler could support overloaded interface optionally. Preprocessor macro `__riscv_v_intrinsic_overloading` is defined when overloaded interface is available.

```
Example:
vadd.vv, vadd.vx, vadd.vi will have an unified interface vadd() for them.

vint8m1_t vadd(vint8m1_t op1, vint8m1_t op2, size_t vl);
// The compiler will choose the following intrinsic
vint8m1_t vadd_vv_i8m1(vint8m1_t op1, vint8m1_t op2, size_t vl);

vint8m2_t vadd(vint8m2_t op1, vint8m2_t op2, size_t vl);
// The compiler will choose the following intrinsic
vint8m2_t vadd_vv_i8m2(vint8m2_t op1, vint8m2_t op2, size_t vl);

vint8m1_t vadd(vint8m1_t op1, int8_t op2, size_t vl);
// The compiler will choose the following intrinsic
vint8m1_t vadd_vx_i8m1(vint8m1_t op1, int8_t op2, size_t vl);

vint8mf8_t vadd(vbool64_t mask, vint8mf8_t maskedoff, vint8mf8_t op1, vint8mf8_t op2, size_t vl);
// The compiler will choose the following intrinsic
vint8mf8_t vadd_vv_i8mf8_m (vbool64_t mask, vint8mf8_t maskedoff, vint8mf8_t op1, vint8mf8_t op2, size_t vl);
```

### The unsupported overloading functions

The unsupported overloading functions are based on the types of input/return arguments:

1. Input arguments are scalar type alone. (non-masked vle/vlse, etc.)
2. Input argument is empty. (vmclr.m/vmset.m/vid.v)
3. Input boolean vector argument with return type of a non boolean vector. (viota)

#### Non-masked `vle`, `vleff` and `vlseg`

#### Non-masked `viota.m`

#### `vmv.v.x` and `vfmv.v.f`

#### `vmclr.m`, `vmset.m`, `vid.v`, `vundefined`

### Special naming rule for some overloaded interfaces.

#### Convert Instructions.

Append one more suffix from mnemonic in the function names to distinct the different operation.

```
Example:

// vint16m1_t vfcvt_x_f_v_i16m1 (vfloat16m1_t src, size_t vl);
vint16m1_t vfcvt_x (vfloat16m1_t src, size_t vl);
```

#### Reinterpret, LMUL truncation, LMUL extension and vector extraction functions.

Append output type in the function names to avoid different operations have the same type of argument.

```
Example:

// vuint8mf4_t vreinterpret_v_u16mf4_u8mf4(vuint16mf4_t src)
vuint8mf4_t vreinterpret_u8mf4(vuint16mf4_t src)
// vfloat16mf4_t vreinterpret_v_u16mf4_f16mf4(vuint16mf4_t src)
vfloat16mf4_t vreinterpret_f16mf4(vuint16mf4_t src)

// vuint8mf8_t vlmul_trunc_v_u8m1_u8mf8(vuint8m1_t op1);
vuint8mf8_t vlmul_trunc_u8mf8(vuint8m1_t op1);
// vuint8mf4_t vlmul_trunc_v_u8m1_u8mf4(vuint8m1_t op1);
vuint8mf4_t vlmul_trunc_u8mf4(vuint8m1_t op1);

// vint8m2_t vget_v_i8m8_i8m2(vint8m8_t src, size_t index);
vint8m2_t vget_i8m2(vint8m8_t src, size_t index);
// vint8m4_t vget_v_i8m8_i8m4(vint8m8_t src, size_t index);
vint8m4_t vgeti8m4(vint8m8_t src, size_t index);

```

#### Widening Vector-Scalar Arithmetic Instructions for vx/wx and vf/wf cases.

The scalar type promotions is not obvious if instruction supports source vector type is 2*SEW and SEW, so append
the vx/wx/vf/wf suffix in the function names.
(ex. `vwadd[u].vx`/`vwadd[u].wx`, `vwsub[u].vx`/`vwsub[u].wx`, `vfwadd_vf`/`vfwadd_wf` and `vfwsub_vf`/`vfwsub_wf`).
In order to consistent, vector-vector operations also append a suffix in the function name.

```
// Example: users need to specific explicit type for op2 if below functions have the same name.
vuint32mf2_t vwaddu_wx(vuint32mf2_t op1, uint16_t op2, size_t vl);
vuint64m1_t  vwaddu_vx(vuint32mf2_t op1, uint32_t op2, size_t vl);
```

#### Vector Move Instructions.

Original overloading name are confusing. Append one more suffix for readability. For example:

```
// Old.
vint8m1_t vmv (vint8m1_t src, size_t vl); // vmv.v.v
int8_t vmv (vint8m1_t src); // vmv.x.s
vint8m1_t vmv (vint8m1_t dst, int8_t src, size_t vl); // vmv.s.x
float16_t vfmv (vfloat16m1_t src); // vfmv.f.s
vfloat16m1_t vfmv (vfloat16m1_t dst, float16_t src, size_t vl); // vfmv.s.f
```

```
// New.
vint8m1_t vmv_v (vint8m1_t src, size_t vl); // vmv.v.v
int8_t vmv_x (vint8m1_t src); // vmv.x.s
vint8m1_t vmv_s (vint8m1_t dst, int8_t src, size_t vl); // vmv.s.x
float16_t vfmv_f (vfloat16m1_t src); // vfmv.f.s
vfloat16m1_t vfmv_s (vfloat16m1_t dst, float16_t src, size_t vl); // vfmv.s.f
```

## Switching Vtype and Keep same VL after vsetvl instruction<a name="switching-vtype"></a>

Compiler should guarantee the correctness of vtype setting after vsetvl instruction. For example considering the widening multiply example as below.

```
vl = vsetvl_e16m4(n);
vfloat16m4_t vx = vle16_v_f16m4(ptr_x, vl);
// vsetvl_e32m8(vl); // No need to keep the same vl and change vtype manually
vfloat32m8_t vy = vle32_v_f32m8(ptr_y, vl);
// vsetvl_e16m4(vl); // No need to keep the same vl and change vtype manually
vfwmacc_vf_f32m8(vy, 2.0, vx, vl);
// vsetvl_e32m8(vl); // No need to keep the same vl and change vtype manually
vse32_v_f32m8(ptr_y, vy, vl);
```

This example has a `vl` computed from `vsetvl_e16m4`, and changing the type to `vfloat32m8_t` in the middle.
With compiler's helping, users don't need to change vtype manually because `vfloat16m4_t` and `vfloat32m8_t` have the exact same number of elements (same `SEW`/`LMUL` ratio).
Noted that when using the different vtype intrinsic functions with a new `SEW`/`LMUL` ratio after vsetvl instruction, the result will raise an illegal-instruction exception.


## Programming Note<a name="programming-notes"></a>

### Strided load/store with stride of 0 <a name="stride-with-zero"></a>

The V extension spec [mentions](https://github.com/riscv/riscv-v-spec/blob/master/v-spec.adoc#75-vector-strided-instructions) that the strided load/store instruction with stride of 0 could have different instruction to perform all memory accesses or fewer memory operations. Since needing all memory accesses isn't likely to be common, the compiler implementation is allowed to generate fewer memory operations with strided load/store intrinsics.
In other words, compiler does not guarantee generating the all memory accesses instruction in strided load/store intrinsics with stride of 0. If the user needs all memory accesses to be performed, they should use an indexed load/store intrinsics with all zero indices.
