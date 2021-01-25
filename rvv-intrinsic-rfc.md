# RISC-V "V" Vector Extension Intrinsics

- [Introduction](#introduction)
- [Type System](#type-system)
  * [Data Types](#data-types)
  * [Mask Types](#mask-types)
  * [Types for Segment Load/Store](#segment-load-store-types)
- [Configuration-Setting](#configuration-setting)
- [Naming Rules](#naming-rules)
- [Exceptions in Naming](#exceptions)
  * [Vector Stores](#vector-stores)
  * [Vector Integer Add-with-Carry / Subtract-with-Borrow Instructions](#add-with-carry)
  * [Comparison Instructions](#comparison-instructions)
  * [Reduction Instructions](#reduction-instructions)
  * [`vpopc.m` and `vfirst.m`](#vpopc-and-vfirst)
  * [Permutation Instructions](#permutation-instructions)
- [Scalar in Vector Operations](#scalar-in-vector-operations)
- [Mask in Intrinsics](#mask-in-intrinsics)
- [Masked Intrinsics Without MaskedOff](#no-maskedoff)
  * [Vector Stores](#no-maskedoff-stores)
  * [Reduction Instructions](#no-maskedoff-reduction)
  * [Merge Instructions](#no-maskedoff-merge)
- [Keep the Original Values of the Destination Vector](#dest-operand)
- [With or Without the VL Argument](#vl-argument)
- [SEW and LMUL of Intrinsics](#sew-and-lmul-of-intrinsics)
- [C Operators on RISC-V Vector Types](#c-operators)
- [Utility Functions](#utility-functions)
  * [Vector Initialization](#vector-init)
  * [Reinterpret between floating point and integer types](#reinterpret-float)
  * [Reinterpret between signed and unsigned types](#reinterpret-sign)
  * [Reinterpret between different SEWs under the same LMUL](#reinterpret-sew)
  * [LMUL truncation and LMUL extension functions](#lmul-trunc)
  * [Utility Functions for Segment Load/Store Types](#utils-segment-types)
- [C11 Generic Interface](#c11-generic-interface)
- [Switching Vtype and Keep same VL in a Loop](#switching-vtype)

## Introduction<a name="introduction"></a>

This document introduces the intrinsics for RISC-V vector programming, including the design decision we take, the type system, the general naming rules for intrinsics, and facilities for vector users. It does not list all available intrinsics for vector programming. The full set of intrinsics will be written in another document.

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
| **int32_t**  | vint32m1_t   | vint32m2_t   | vint32m4_t   | vint32m8_t   | vint32mf2_t   | N/A           | N/A
| **uint32_t** | vuint32m1_t  | vuint32m2_t  | vuint32m4_t  | vuint32m8_t  | vuint32mf2_t  | N/A           | N/A
| **int16_t**  | vint16m1_t   | vint16m2_t   | vint16m4_t   | vint16m8_t   | vint16mf2_t   | vint16mf4_t   | N/A
| **uint16_t** | vuint16m1_t  | vuint16m2_t  | vuint16m4_t  | vuint16m8_t  | vuint16mf2_t  | vuint16mf4_t  | N/A
| **int8_t**   | vint8m1_t    | vint8m2_t    | vint8m4_t    | vint8m8_t    | vint8mf2_t    | vint8mf4_t    | vint8mf8_t
| **uint8_t**  | vuint8m1_t   | vuint8m2_t   | vuint8m4_t   | vuint8m8_t   | vuint8mf2_t   | vuint8mf4_t   | vuint8mf8_t
| **vfloat32** | vfloat32m1_t | vfloat32m2_t | vfloat32m4_t | vfloat32m8_t | vfloat32mf2_t | N/A           | N/A
| **vfloat16** | vfloat16m1_t | vfloat16m2_t | vfloat16m4_t | vfloat16m8_t | vfloat16mf2_t | vfloat16mf4_t | N/A

### Mask Types<a name="mask-types"></a>

Encode the ratio of `SEW`/`LMUL` into the mask types. There are the following mask types.

n = `SEW`/`LMUL`

| Types | n = 1    | n = 2    | n = 4    | n = 8    | n = 16    | n = 32    | n = 64
| ----- | -------- | -------- | -------- | -------- | --------- | --------- | ---------
| bool  | vbool1_t | vbool2_t | vbool4_t | vbool8_t | vbool16_t | vbool32_t | vbool64_t

### Types for Segment Load/Store<a name="segment-load-store-types"></a>

Under the constraint `LMUL` * `NR` &#8804; 8.

```
SEGMENT_TYPE ::= 'v' TYPE LMUL 'x' NR '_t'
TYPE ::= ( 'int8' | 'int16' | 'int32' | 'int64' |
           'uint8' | 'uint16' | 'uint32' | 'uint64' |
           'float16' | 'float32' | 'float64' )
LMUL ::= ( m1 | m2 | m4 | m8 | mf2 | mf4 | mf8 )
NR ::= ( 2 | 3 | 4 | 5 | 6 | 7 | 8 )
```

int8_t:

|  NF \ LMUL   | LMUL = 1/8   | LMUL = 1/4   | LMUL = 1/2   | LMUL = 1     | LMUL = 2      | LMUL = 4      | LMUL = 8
| ------------ | ------------ | ------------ | ------------ | -----------  | ------------- | ------------- | --------------
| **2**        | vint8mf8x2_t | vint8mf4x2_t | vint8mf2x2_t | vint8m1x2_t  | vint8m2x2_t   | vint8m4x2_t   | N/A
| **3**        | vint8mf8x3_t | vint8mf4x3_t | vint8mf2x3_t | vint8m1x3_t  | vint8m2x3_t   | N/A           | N/A
| **4**        | vint8mf8x4_t | vint8mf4x4_t | vint8mf2x4_t | vint8m1x4_t  | vint8m2x4_t   | N/A           | N/A
| **5**        | vint8mf8x5_t | vint8mf4x5_t | vint8mf2x5_t | vint8m1x5_t  | N/A           | N/A           | N/A
| **6**        | vint8mf8x6_t | vint8mf4x6_t | vint8mf2x6_t | vint8m1x6_t  | N/A           | N/A           | N/A
| **7**        | vint8mf8x7_t | vint8mf4x7_t | vint8mf2x7_t | vint8m1x7_t  | N/A           | N/A           | N/A
| **8**        | vint8mf8x8_t | vint8mf4x8_t | vint8mf2x8_t | vint8m1x8_t  | N/A           | N/A           | N/A

uint8_t:

|  NF \ LMUL   | LMUL = 1/8    | LMUL = 1/4    | LMUL = 1/2    | LMUL = 1      | LMUL = 2      | LMUL = 4      | LMUL = 8
| ------------ | ------------- | ------------- | ------------- | ------------- | ------------- | ------------- | --------------
| **2**        | vuint8mf8x2_t | vuint8mf4x2_t | vuint8mf2x2_t | vuint8m1x2_t  | vuint8m2x2_t  | vuint8m4x2_t  | N/A
| **3**        | vuint8mf8x3_t | vuint8mf4x3_t | vuint8mf2x3_t | vuint8m1x3_t  | vuint8m2x3_t  | N/A           | N/A
| **4**        | vuint8mf8x4_t | vuint8mf4x4_t | vuint8mf2x4_t | vuint8m1x4_t  | vuint8m2x4_t  | N/A           | N/A
| **5**        | vuint8mf8x5_t | vuint8mf4x5_t | vuint8mf2x5_t | vuint8m1x5_t  | N/A           | N/A           | N/A
| **6**        | vuint8mf8x6_t | vuint8mf4x6_t | vuint8mf2x6_t | vuint8m1x6_t  | N/A           | N/A           | N/A
| **7**        | vuint8mf8x7_t | vuint8mf4x7_t | vuint8mf2x7_t | vuint8m1x7_t  | N/A           | N/A           | N/A
| **8**        | vuint8mf8x8_t | vuint8mf4x8_t | vuint8mf2x8_t | vuint8m1x8_t  | N/A           | N/A           | N/A

int16_t:

|  NF \ LMUL   | LMUL = 1/8  | LMUL = 1/4    | LMUL = 1/2    | LMUL = 1     | LMUL = 2      | LMUL = 4      | LMUL = 8
| ------------ | ----------- | ------------- | ------------- | ------------ | ------------- | ------------- | --------------
| **2**        | N/A         | vint16mf4x2_t | vint16mf2x2_t | vint16m1x2_t | vint16m2x2_t  | vint16m4x2_t  | N/A
| **3**        | N/A         | vint16mf4x3_t | vint16mf2x3_t | vint16m1x3_t | vint16m2x3_t  | N/A           | N/A
| **4**        | N/A         | vint16mf4x4_t | vint16mf2x4_t | vint16m1x4_t | vint16m2x4_t  | N/A           | N/A
| **5**        | N/A         | vint16mf4x5_t | vint16mf2x5_t | vint16m1x5_t | N/A           | N/A           | N/A
| **6**        | N/A         | vint16mf4x6_t | vint16mf2x6_t | vint16m1x6_t | N/A           | N/A           | N/A
| **7**        | N/A         | vint16mf4x7_t | vint16mf2x7_t | vint16m1x7_t | N/A           | N/A           | N/A
| **8**        | N/A         | vint16mf4x8_t | vint16mf2x8_t | vint16m1x8_t | N/A           | N/A           | N/A

uint16_t:

|  NF \ LMUL   | LMUL = 1/8  | LMUL = 1/4     | LMUL = 1/2     | LMUL = 1      | LMUL = 2      | LMUL = 4      | LMUL = 8
| ------------ | ----------- | -------------- | -------------- | ------------- | ------------- | ------------- | --------------
| **2**        | N/A         | vuint16mf4x2_t | vuint16mf2x2_t | vuint16m1x2_t | vuint16m2x2_t | vuint16m4x2_t | N/A
| **3**        | N/A         | vuint16mf4x3_t | vuint16mf2x3_t | vuint16m1x3_t | vuint16m2x3_t | N/A           | N/A
| **4**        | N/A         | vuint16mf4x4_t | vuint16mf2x4_t | vuint16m1x4_t | vuint16m2x4_t | N/A           | N/A
| **5**        | N/A         | vuint16mf4x5_t | vuint16mf2x5_t | vuint16m1x5_t | N/A           | N/A           | N/A
| **6**        | N/A         | vuint16mf4x6_t | vuint16mf2x6_t | vuint16m1x6_t | N/A           | N/A           | N/A
| **7**        | N/A         | vuint16mf4x7_t | vuint16mf2x7_t | vuint16m1x7_t | N/A           | N/A           | N/A
| **8**        | N/A         | vuint16mf4x8_t | vuint16mf2x8_t | vuint16m1x8_t | N/A           | N/A           | N/A

int32_t:

|  NF \ LMUL   | LMUL = 1/8  | LMUL = 1/4    | LMUL = 1/2    | LMUL = 1     | LMUL = 2      | LMUL = 4      | LMUL = 8
| ------------ | ----------- | ------------- | ------------- | ------------ | ------------- | ------------- | --------------
| **2**        | N/A         | N/A           | vint32mf2x2_t | vint32m1x2_t | vint32m2x2_t  | vint32m4x2_t  | N/A
| **3**        | N/A         | N/A           | vint32mf2x3_t | vint32m1x3_t | vint32m2x3_t  | N/A           | N/A
| **4**        | N/A         | N/A           | vint32mf2x4_t | vint32m1x4_t | vint32m2x4_t  | N/A           | N/A
| **5**        | N/A         | N/A           | vint32mf2x5_t | vint32m1x5_t | N/A           | N/A           | N/A
| **6**        | N/A         | N/A           | vint32mf2x6_t | vint32m1x6_t | N/A           | N/A           | N/A
| **7**        | N/A         | N/A           | vint32mf2x7_t | vint32m1x7_t | N/A           | N/A           | N/A
| **8**        | N/A         | N/A           | vint32mf2x8_t | vint32m1x8_t | N/A           | N/A           | N/A

uint32_t:

|  NF \ LMUL   | LMUL = 1/8  | LMUL = 1/4    | LMUL = 1/2     | LMUL = 1      | LMUL = 2      | LMUL = 4      | LMUL = 8
| ------------ | ----------- | ------------- | -------------- | ------------- | ------------- | ------------- | --------------
| **2**        | N/A         | N/A           | vuint32mf2x2_t | vuint32m1x2_t | vuint32m2x2_t | vuint32m4x2_t | N/A
| **3**        | N/A         | N/A           | vuint32mf2x3_t | vuint32m1x3_t | vuint32m2x3_t | N/A           | N/A
| **4**        | N/A         | N/A           | vuint32mf2x4_t | vuint32m1x4_t | vuint32m2x4_t | N/A           | N/A
| **5**        | N/A         | N/A           | vuint32mf2x5_t | vuint32m1x5_t | N/A           | N/A           | N/A
| **6**        | N/A         | N/A           | vuint32mf2x6_t | vuint32m1x6_t | N/A           | N/A           | N/A
| **7**        | N/A         | N/A           | vuint32mf2x7_t | vuint32m1x7_t | N/A           | N/A           | N/A
| **8**        | N/A         | N/A           | vuint32mf2x8_t | vuint32m1x8_t | N/A           | N/A           | N/A

int64_t:

|  NF \ LMUL   | LMUL = 1/8  | LMUL = 1/4    | LMUL = 1/2    | LMUL = 1     | LMUL = 2      | LMUL = 4      | LMUL = 8
| ------------ | ----------- | ------------- | ------------- | ------------ | ------------- | ------------- | --------------
| **2**        | N/A         | N/A           | N/A           | vint64m1x2_t | vint64m2x2_t  | vint64m4x2_t  | N/A
| **3**        | N/A         | N/A           | N/A           | vint64m1x3_t | vint64m2x3_t  | N/A           | N/A
| **4**        | N/A         | N/A           | N/A           | vint64m1x4_t | vint64m2x4_t  | N/A           | N/A
| **5**        | N/A         | N/A           | N/A           | vint64m1x5_t | N/A           | N/A           | N/A
| **6**        | N/A         | N/A           | N/A           | vint64m1x6_t | N/A           | N/A           | N/A
| **7**        | N/A         | N/A           | N/A           | vint64m1x7_t | N/A           | N/A           | N/A
| **8**        | N/A         | N/A           | N/A           | vint64m1x8_t | N/A           | N/A           | N/A

uint64_t:

|  NF \ LMUL   | LMUL = 1/8  | LMUL = 1/4    | LMUL = 1/2    | LMUL = 1      | LMUL = 2      | LMUL = 4      | LMUL = 8
| ------------ | ----------- | ------------- | ------------- | ------------- | ------------- | ------------- | --------------
| **2**        | N/A         | N/A           | N/A           | vuint64m1x2_t | vuint64m2x2_t | vuint64m4x2_t | N/A
| **3**        | N/A         | N/A           | N/A           | vuint64m1x3_t | vuint64m2x3_t | N/A           | N/A
| **4**        | N/A         | N/A           | N/A           | vuint64m1x4_t | vuint64m2x4_t | N/A           | N/A
| **5**        | N/A         | N/A           | N/A           | vuint64m1x5_t | N/A           | N/A           | N/A
| **6**        | N/A         | N/A           | N/A           | vuint64m1x6_t | N/A           | N/A           | N/A
| **7**        | N/A         | N/A           | N/A           | vuint64m1x7_t | N/A           | N/A           | N/A
| **8**        | N/A         | N/A           | N/A           | vuint64m1x8_t | N/A           | N/A           | N/A

float16:

|  NF \ LMUL   | LMUL = 1/8  | LMUL = 1/4      | LMUL = 1/2      | LMUL = 1       | LMUL = 2       | LMUL = 4       | LMUL = 8
| ------------ | ----------- | --------------- | --------------- | -------------- | -------------- | -------------- | --------------
| **2**        | N/A         | vfloat16mf4x2_t | vfloat16mf2x2_t | vfloat16m1x2_t | vfloat16m2x2_t | vfloat16m4x2_t | N/A
| **3**        | N/A         | vfloat16mf4x3_t | vfloat16mf2x3_t | vfloat16m1x3_t | vfloat16m2x3_t | N/A            | N/A
| **4**        | N/A         | vfloat16mf4x4_t | vfloat16mf2x4_t | vfloat16m1x4_t | vfloat16m2x4_t | N/A            | N/A
| **5**        | N/A         | vfloat16mf4x5_t | vfloat16mf2x5_t | vfloat16m1x5_t | N/A            | N/A            | N/A
| **6**        | N/A         | vfloat16mf4x6_t | vfloat16mf2x6_t | vfloat16m1x6_t | N/A            | N/A            | N/A
| **7**        | N/A         | vfloat16mf4x7_t | vfloat16mf2x7_t | vfloat16m1x7_t | N/A            | N/A            | N/A
| **8**        | N/A         | vfloat16mf4x8_t | vfloat16mf2x8_t | vfloat16m1x8_t | N/A            | N/A            | N/A

float32:

|  NF \ LMUL   | LMUL = 1/8  | LMUL = 1/4      | LMUL = 1/2      | LMUL = 1       | LMUL = 2       | LMUL = 4       | LMUL = 8
| ------------ | ----------- | --------------- | --------------- | -------------- | -------------- | -------------- | --------------
| **2**        | N/A         | N/A             | vfloat32mf2x2_t | vfloat32m1x2_t | vfloat32m2x2_t | vfloat32m4x2_t | N/A
| **3**        | N/A         | N/A             | vfloat32mf2x3_t | vfloat32m1x3_t | vfloat32m2x3_t | N/A            | N/A
| **4**        | N/A         | N/A             | vfloat32mf2x4_t | vfloat32m1x4_t | vfloat32m2x4_t | N/A            | N/A
| **5**        | N/A         | N/A             | vfloat32mf2x5_t | vfloat32m1x5_t | N/A            | N/A            | N/A
| **6**        | N/A         | N/A             | vfloat32mf2x6_t | vfloat32m1x6_t | N/A            | N/A            | N/A
| **7**        | N/A         | N/A             | vfloat32mf2x7_t | vfloat32m1x7_t | N/A            | N/A            | N/A
| **8**        | N/A         | N/A             | vfloat32mf2x8_t | vfloat32m1x8_t | N/A            | N/A            | N/A

float64:

|  NF \ LMUL   | LMUL = 1/8  | LMUL = 1/4      | LMUL = 1/2      | LMUL = 1       | LMUL = 2       | LMUL = 4       | LMUL = 8
| ------------ | ----------- | --------------- | --------------- | -------------- | -------------- | -------------- | --------------
| **2**        | N/A         | N/A             | N/A             | vfloat64m1x2_t | vfloat64m2x2_t | vfloat64m4x2_t | N/A
| **3**        | N/A         | N/A             | N/A             | vfloat64m1x3_t | vfloat64m2x3_t | N/A            | N/A
| **4**        | N/A         | N/A             | N/A             | vfloat64m1x4_t | vfloat64m2x4_t | N/A            | N/A
| **5**        | N/A         | N/A             | N/A             | vfloat64m1x5_t | N/A            | N/A            | N/A
| **6**        | N/A         | N/A             | N/A             | vfloat64m1x6_t | N/A            | N/A            | N/A
| **7**        | N/A         | N/A             | N/A             | vfloat64m1x7_t | N/A            | N/A            | N/A
| **8**        | N/A         | N/A             | N/A             | vfloat64m1x8_t | N/A            | N/A            | N/A

## Configuration-Setting<a name="configuration-setting"></a>

`SEW` and `LMUL` are a part of the naming. They are static information for the intrinsics.
There are two variants of configuration setting intrinsics. `vsetvl` is used to set `vl` according to the given AVL. `vsetvlmax` is used to set `vl` to VLMAX.

```
Example:

size_t vsetvl_e8m1 (size_t avl);
size_t vsetvl_e8m2 (size_t avl);
size_t vsetvl_e8m4 (size_t avl);
size_t vsetvl_e8m8 (size_t avl);
size_t vsetvlmax_e8m1 ();
size_t vsetvlmax_e8m2 ();
size_t vsetvlmax_e8m4 ();
size_t vsetvlmax_e8m8 ();
```

There is no need to specify the behavior of tail and masked-off elements being undisturbed or agnostic. The default setting is tail agnostic and masked-off undisturbed. If users do not want to keep the values in masked-off elements, they could pass `vundefined()` as the `maskedoff` value.

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

The result of `vmadc` and `vmsbc` is mask types. Becuase we use the ratio `SEW`/`LMUL` to name the mask types and multiple (`SEW`, `LMUL`) pairs map to the same ratio, in addition to use the return type to name the intrinsics, we also encode the input types to distinguish these intrinsics.

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

### `vpopc.m` and `vfirst.m`<a name="vpopc-and-vfirst"></a>

The return type of `vpopc.m` and `vfirst.m` is apparently an integer. Do not encode the return type into it. Instead, encode the input type to it.

```
Example:

vpopc.m rd, vs2:
unsigned long vpopc_m_b1(vbool1_t vs2, size_t vl);
unsigned long vpopc_m_b2(vbool2_t vs2, size_t vl);
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

In V specification, it defines operations between vector and scalar types. If `XLEN` > `SEW`, the least-significant SEW bits of the scalar register are used. If `XLEN` < `SEW`, the value from the scalar register is sign-extended to SEW bits.

We define arithmetic intrinsics with scalar using SEW types.

```
Example:

// Use uint8_t for op2.
vuint8m1_t vadd_vx_u8m1(vuint8m1_t op1, uint8_t op2, size_t vl);
// Use uint64_t for op2.
vuint64m1_t vadd_vx_u64m1(vuint64m1_t op1, uint64_t op2, size_t vl);
```

The compiler may generate multiple instructions for the intrinsics. For example, it is a little bit complicated to support `uint64_t` operations under `XLEN` = 32.

It breaks the one-to-one mapping between intrinsics and assembly mnemonics in some hardware configurations. However, it makes more sense for users to use the scalar types consistent with the `SEW` of vector types.

There is the same issue for `vmv.x.s`, `vmv.s.x`, `vfmv.f.s`, `vfmv.s.f`, `vslide1up.vx`, `vfslide1up.vf`, `vslide1down.vx`, and `vfslide1down.vx`. Use `SEW` to encode the scalar type.

```
Example:

// Use uint8_t for op2.
vuint8m1_t vslide1up_vx_u8m1(vuint8m1_t dest, vuint8m1_t op1, uint8_1 op2);
```

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

## Keep the Original Values of the Destination Vector<a name="dest-operand"></a>

`vmv.s.x` and reduction operations will only modify the first element of the destination vector. Users could keep the original values of the remaining elements in the destination vector through `dest` argument in these intrinsics.

Vector slide instructions also have unchanged parts in the destination register group. Users could keep the original values of the unchanged parts in the destination vector group through `dest` argument in the intrinsics.

```
Example:

vint8m1_t vmv_s_x_i8m1(vint8m1_t dest, int8_t src, size_t vl);
vint8m1_t vredsum_vs_i8m1_i8m1(vint8m1_t dest, vint8m1_t vs2, vint8m1_t vs1, size_t vl);
vint8m1_t vredsum_vs_i8m2_i8m1_m(vbool4_t mask, vint8m1_t dest, vint8m2_t vs2, vint8m1_t vs1, size_t vl);
vuint8m1_t vslide1up_vx_u8m1(vuint8m1_t dest, vuint8m1_t op1, uint8_1 op2, size_t vl);

```

## With or Without the VL Argument<a name="vl-argument"></a>

(This design decision is still under dispute. We have no final decision about which one is better for users. This RFC includes both version of intrinsics for users.)

There are two variants of intrinsics regarding to `vl`.

1. Explicit vl intrinsics:

    All the intrinsics receive an explicit `vl` argument, by value, which is used by the vector operation. Only calls to `vsetvl` or `vsetvlmax` intrinsics can be used to generate values that are permissible as the explicit `vl` argument.

    Pros:
     - Operations are entirely defined by the vector operands and the explicit vector length.
     - In C programmers' point of view, there is no side-effect of intrinsics with `vl` argument.
     - Some instructions do not use `vl`, so the explicit interface makes this obvious.

    Cons:
     - It is less consistent with the C operator syntax. The GCC vector extension cannot be implemented, because of lack of the `vl` operand, or it must be given whole vector register semantics.
     - It is more verbose, as many vector codes may not use different `vl` values at the same time.
     - An additional operand means additional programming error opportunities.

2. Implicit vl intrinsics:

    Intrinsics do not receive a `vl` argument. Instead the `vl` used by the vector operations is the one set by the last call to `vsetvl` or `vsetvlmax` intrinsics that the program has done at runtime.

    Pros:
     - It is more faithful to the underlying instructions which allows the user finer control on the instructions emitted.
     - It is more consistent with C operator syntax as vector operations naturally involve the implicit `vl` argument.

    Cons:
     - A vector operation is not fully defined by its operands.
     - The implicit `vl` operand might open the possibility for unobvious programming errors.

The semantics between these two variants are the same.

The naming rule is

```
INTRINSIC_WITH_VL ::= INTRINSIC '_vl'
INTRINSIC_WITH_MASK_AND_VL ::= INTRINSIC_WITH_MASK '_vl'
```

```
Example:

vadd.vv vd, vs2, vs1:
vint8m1_t vadd_vv_i8m1(vint8m1_t vs2, vint8m1_t vs1)
vint8m1_t vadd_vv_i8m1_vl(vint8m1_t vs2, vint8m1_t vs1, size_t vl)

vadd.vv vd, vs2, vs1, v0.t:
vint8m1_t vadd_vv_i8m1_m(vbool8_t mask, vint8m1_t maskedoff, vint8m1_t vs2, vint8m1_t vs1)
vint8m1_t vadd_vv_i8m1_m_vl(vbool8_t mask, vint8m1_t maskedoff, vint8m1_t vs2, vint8m1_t vs1, size_t vl)
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


### Utility Functions for Segment Load/Store Types<a name="utils-segment-types"></a>

These utility functions help users to create segment load/store types and insert/extract elements to/from segment load/store types.

```
Example:

// Create segment load/store types.
vint32m2x2_t vcreate_i32m2x2(vint32m2_t val1, vint32m2_t val2)
vint32m2x3_t vcreate_i32m2x3(vint32m2_t val1, vint32m2_t val2, vint32m2_t val3)

// Insert an element to segment load/store types.
vint32m2x2_t vset_i32m2x2(vint32m2x2_t tuple, size_t index, vint32m2_t value)

// Extract an element from segment load/store types.
vint32m2_t vget_i32m2x2_i32m2(vint32m2x2_t tuple, size_t index)
vint32m2_t vget_i32m2x3_i32m2(vint32m2x3_t tuple, size_t index)
```

## C11 Generic Interface<a name="c11-generic-interface"></a>

Use C11 `_Generic` keyword to choose one of these intrinsics at compile time, based on the types of input arguments. In general, if we could choose the intrinsic according to the types of arguments, we define C11 generic interface for it.

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
```

There are some special cases in C11 generic interface. Describe them in the following subsections.

### Vector Load/Store

We could not use C11 generic for vector unit-stride load. We do not provide the unified interface for vector load/store for consistency.

### `vmadc` and `vmsbc`

They have different number of arguments but the same kind of types in the first two arguments. We keep the appendix of these instructions, i.e., `vvm`, `vxm`, `vv` and `vx`.

```
vbool8_t vmadc_vvm(vint8m1_t op1, vint8m1_t op2, vbool8_t carryin, size_t vl);
vbool8_t vmadc_vxm(vint8m1_t op1, int8_t op2, vbool8_t carryin, size_t vl);
vbool8_t vmadc_vv(vint8m1_t op1, vint8m1_t op2, size_t vl);
vbool8_t vmadc_vx(vint8m1_t op1, int8_t op2, size_t vl);
```

### `vmv.v.v`, `vmv.x.s`, `vmv.s.x`, `vfmv.f.s` and `vfmv.s.f`

With C11 generic interface. Use the full mnemonic names for the function names, e.g., `vmv.v.v` uses `vmv_v_v()` as the function name.

### `vmv.v.x`, `vfmv.v.f`, and `viota.m`

The same input may produce different types of output value. No C11 generic interface.

### `vmclr.m`, `vmset.m`, `vid.v`, `vundefined`

There is no input argument. No C11 generic interface.

### Reinterpret and Convert

Keep the output type in the function names.

```
Example:

// u8 for uint8
vuint8m1_t vreinterpret_u8 (vint8m1_t src);
// x for scalar, xu for unsigned scalar, and f for float.
vint16m1_t vfcvt_x (vfloat16m1_t src, size_t vl);
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
