/* { dg-do compile } */
/* { dg-options "-march=rv32gc_zve32f -mabi=ilp32d -Wno-psabi -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include "riscv_vector.h"

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
vint8mf4_t test_vmadd_vv_i8mf4(vint8mf4_t vd, vint8mf4_t vs1, vint8mf4_t vs2, size_t vl) {
  return __riscv_vmadd(vd, vs1, vs2, vl);
}

vint8mf4_t test_vmadd_vx_i8mf4(vint8mf4_t vd, int8_t rs1, vint8mf4_t vs2, size_t vl) {
  return __riscv_vmadd(vd, rs1, vs2, vl);
}

vint8mf2_t test_vmadd_vv_i8mf2(vint8mf2_t vd, vint8mf2_t vs1, vint8mf2_t vs2, size_t vl) {
  return __riscv_vmadd(vd, vs1, vs2, vl);
}

vint8mf2_t test_vmadd_vx_i8mf2(vint8mf2_t vd, int8_t rs1, vint8mf2_t vs2, size_t vl) {
  return __riscv_vmadd(vd, rs1, vs2, vl);
}

vint8m1_t test_vmadd_vv_i8m1(vint8m1_t vd, vint8m1_t vs1, vint8m1_t vs2, size_t vl) {
  return __riscv_vmadd(vd, vs1, vs2, vl);
}

vint8m1_t test_vmadd_vx_i8m1(vint8m1_t vd, int8_t rs1, vint8m1_t vs2, size_t vl) {
  return __riscv_vmadd(vd, rs1, vs2, vl);
}

vint8m2_t test_vmadd_vv_i8m2(vint8m2_t vd, vint8m2_t vs1, vint8m2_t vs2, size_t vl) {
  return __riscv_vmadd(vd, vs1, vs2, vl);
}

vint8m2_t test_vmadd_vx_i8m2(vint8m2_t vd, int8_t rs1, vint8m2_t vs2, size_t vl) {
  return __riscv_vmadd(vd, rs1, vs2, vl);
}

vint8m4_t test_vmadd_vv_i8m4(vint8m4_t vd, vint8m4_t vs1, vint8m4_t vs2, size_t vl) {
  return __riscv_vmadd(vd, vs1, vs2, vl);
}

vint8m4_t test_vmadd_vx_i8m4(vint8m4_t vd, int8_t rs1, vint8m4_t vs2, size_t vl) {
  return __riscv_vmadd(vd, rs1, vs2, vl);
}

vint8m8_t test_vmadd_vv_i8m8(vint8m8_t vd, vint8m8_t vs1, vint8m8_t vs2, size_t vl) {
  return __riscv_vmadd(vd, vs1, vs2, vl);
}

vint8m8_t test_vmadd_vx_i8m8(vint8m8_t vd, int8_t rs1, vint8m8_t vs2, size_t vl) {
  return __riscv_vmadd(vd, rs1, vs2, vl);
}

vint16mf2_t test_vmadd_vv_i16mf2(vint16mf2_t vd, vint16mf2_t vs1, vint16mf2_t vs2, size_t vl) {
  return __riscv_vmadd(vd, vs1, vs2, vl);
}

vint16mf2_t test_vmadd_vx_i16mf2(vint16mf2_t vd, int16_t rs1, vint16mf2_t vs2, size_t vl) {
  return __riscv_vmadd(vd, rs1, vs2, vl);
}

vint16m1_t test_vmadd_vv_i16m1(vint16m1_t vd, vint16m1_t vs1, vint16m1_t vs2, size_t vl) {
  return __riscv_vmadd(vd, vs1, vs2, vl);
}

vint16m1_t test_vmadd_vx_i16m1(vint16m1_t vd, int16_t rs1, vint16m1_t vs2, size_t vl) {
  return __riscv_vmadd(vd, rs1, vs2, vl);
}

vint16m2_t test_vmadd_vv_i16m2(vint16m2_t vd, vint16m2_t vs1, vint16m2_t vs2, size_t vl) {
  return __riscv_vmadd(vd, vs1, vs2, vl);
}

vint16m2_t test_vmadd_vx_i16m2(vint16m2_t vd, int16_t rs1, vint16m2_t vs2, size_t vl) {
  return __riscv_vmadd(vd, rs1, vs2, vl);
}

vint16m4_t test_vmadd_vv_i16m4(vint16m4_t vd, vint16m4_t vs1, vint16m4_t vs2, size_t vl) {
  return __riscv_vmadd(vd, vs1, vs2, vl);
}

vint16m4_t test_vmadd_vx_i16m4(vint16m4_t vd, int16_t rs1, vint16m4_t vs2, size_t vl) {
  return __riscv_vmadd(vd, rs1, vs2, vl);
}

vint16m8_t test_vmadd_vv_i16m8(vint16m8_t vd, vint16m8_t vs1, vint16m8_t vs2, size_t vl) {
  return __riscv_vmadd(vd, vs1, vs2, vl);
}

vint16m8_t test_vmadd_vx_i16m8(vint16m8_t vd, int16_t rs1, vint16m8_t vs2, size_t vl) {
  return __riscv_vmadd(vd, rs1, vs2, vl);
}

vint32m1_t test_vmadd_vv_i32m1(vint32m1_t vd, vint32m1_t vs1, vint32m1_t vs2, size_t vl) {
  return __riscv_vmadd(vd, vs1, vs2, vl);
}

vint32m1_t test_vmadd_vx_i32m1(vint32m1_t vd, int32_t rs1, vint32m1_t vs2, size_t vl) {
  return __riscv_vmadd(vd, rs1, vs2, vl);
}

vint32m2_t test_vmadd_vv_i32m2(vint32m2_t vd, vint32m2_t vs1, vint32m2_t vs2, size_t vl) {
  return __riscv_vmadd(vd, vs1, vs2, vl);
}

vint32m2_t test_vmadd_vx_i32m2(vint32m2_t vd, int32_t rs1, vint32m2_t vs2, size_t vl) {
  return __riscv_vmadd(vd, rs1, vs2, vl);
}

vint32m4_t test_vmadd_vv_i32m4(vint32m4_t vd, vint32m4_t vs1, vint32m4_t vs2, size_t vl) {
  return __riscv_vmadd(vd, vs1, vs2, vl);
}

vint32m4_t test_vmadd_vx_i32m4(vint32m4_t vd, int32_t rs1, vint32m4_t vs2, size_t vl) {
  return __riscv_vmadd(vd, rs1, vs2, vl);
}

vint32m8_t test_vmadd_vv_i32m8(vint32m8_t vd, vint32m8_t vs1, vint32m8_t vs2, size_t vl) {
  return __riscv_vmadd(vd, vs1, vs2, vl);
}

vint32m8_t test_vmadd_vx_i32m8(vint32m8_t vd, int32_t rs1, vint32m8_t vs2, size_t vl) {
  return __riscv_vmadd(vd, rs1, vs2, vl);
}

vuint8mf4_t test_vmadd_vv_u8mf4(vuint8mf4_t vd, vuint8mf4_t vs1, vuint8mf4_t vs2, size_t vl) {
  return __riscv_vmadd(vd, vs1, vs2, vl);
}

vuint8mf4_t test_vmadd_vx_u8mf4(vuint8mf4_t vd, uint8_t rs1, vuint8mf4_t vs2, size_t vl) {
  return __riscv_vmadd(vd, rs1, vs2, vl);
}

vuint8mf2_t test_vmadd_vv_u8mf2(vuint8mf2_t vd, vuint8mf2_t vs1, vuint8mf2_t vs2, size_t vl) {
  return __riscv_vmadd(vd, vs1, vs2, vl);
}

vuint8mf2_t test_vmadd_vx_u8mf2(vuint8mf2_t vd, uint8_t rs1, vuint8mf2_t vs2, size_t vl) {
  return __riscv_vmadd(vd, rs1, vs2, vl);
}

vuint8m1_t test_vmadd_vv_u8m1(vuint8m1_t vd, vuint8m1_t vs1, vuint8m1_t vs2, size_t vl) {
  return __riscv_vmadd(vd, vs1, vs2, vl);
}

vuint8m1_t test_vmadd_vx_u8m1(vuint8m1_t vd, uint8_t rs1, vuint8m1_t vs2, size_t vl) {
  return __riscv_vmadd(vd, rs1, vs2, vl);
}

vuint8m2_t test_vmadd_vv_u8m2(vuint8m2_t vd, vuint8m2_t vs1, vuint8m2_t vs2, size_t vl) {
  return __riscv_vmadd(vd, vs1, vs2, vl);
}

vuint8m2_t test_vmadd_vx_u8m2(vuint8m2_t vd, uint8_t rs1, vuint8m2_t vs2, size_t vl) {
  return __riscv_vmadd(vd, rs1, vs2, vl);
}

vuint8m4_t test_vmadd_vv_u8m4(vuint8m4_t vd, vuint8m4_t vs1, vuint8m4_t vs2, size_t vl) {
  return __riscv_vmadd(vd, vs1, vs2, vl);
}

vuint8m4_t test_vmadd_vx_u8m4(vuint8m4_t vd, uint8_t rs1, vuint8m4_t vs2, size_t vl) {
  return __riscv_vmadd(vd, rs1, vs2, vl);
}

vuint8m8_t test_vmadd_vv_u8m8(vuint8m8_t vd, vuint8m8_t vs1, vuint8m8_t vs2, size_t vl) {
  return __riscv_vmadd(vd, vs1, vs2, vl);
}

vuint8m8_t test_vmadd_vx_u8m8(vuint8m8_t vd, uint8_t rs1, vuint8m8_t vs2, size_t vl) {
  return __riscv_vmadd(vd, rs1, vs2, vl);
}

vuint16mf2_t test_vmadd_vv_u16mf2(vuint16mf2_t vd, vuint16mf2_t vs1, vuint16mf2_t vs2, size_t vl) {
  return __riscv_vmadd(vd, vs1, vs2, vl);
}

vuint16mf2_t test_vmadd_vx_u16mf2(vuint16mf2_t vd, uint16_t rs1, vuint16mf2_t vs2, size_t vl) {
  return __riscv_vmadd(vd, rs1, vs2, vl);
}

vuint16m1_t test_vmadd_vv_u16m1(vuint16m1_t vd, vuint16m1_t vs1, vuint16m1_t vs2, size_t vl) {
  return __riscv_vmadd(vd, vs1, vs2, vl);
}

vuint16m1_t test_vmadd_vx_u16m1(vuint16m1_t vd, uint16_t rs1, vuint16m1_t vs2, size_t vl) {
  return __riscv_vmadd(vd, rs1, vs2, vl);
}

vuint16m2_t test_vmadd_vv_u16m2(vuint16m2_t vd, vuint16m2_t vs1, vuint16m2_t vs2, size_t vl) {
  return __riscv_vmadd(vd, vs1, vs2, vl);
}

vuint16m2_t test_vmadd_vx_u16m2(vuint16m2_t vd, uint16_t rs1, vuint16m2_t vs2, size_t vl) {
  return __riscv_vmadd(vd, rs1, vs2, vl);
}

vuint16m4_t test_vmadd_vv_u16m4(vuint16m4_t vd, vuint16m4_t vs1, vuint16m4_t vs2, size_t vl) {
  return __riscv_vmadd(vd, vs1, vs2, vl);
}

vuint16m4_t test_vmadd_vx_u16m4(vuint16m4_t vd, uint16_t rs1, vuint16m4_t vs2, size_t vl) {
  return __riscv_vmadd(vd, rs1, vs2, vl);
}

vuint16m8_t test_vmadd_vv_u16m8(vuint16m8_t vd, vuint16m8_t vs1, vuint16m8_t vs2, size_t vl) {
  return __riscv_vmadd(vd, vs1, vs2, vl);
}

vuint16m8_t test_vmadd_vx_u16m8(vuint16m8_t vd, uint16_t rs1, vuint16m8_t vs2, size_t vl) {
  return __riscv_vmadd(vd, rs1, vs2, vl);
}

vuint32m1_t test_vmadd_vv_u32m1(vuint32m1_t vd, vuint32m1_t vs1, vuint32m1_t vs2, size_t vl) {
  return __riscv_vmadd(vd, vs1, vs2, vl);
}

vuint32m1_t test_vmadd_vx_u32m1(vuint32m1_t vd, uint32_t rs1, vuint32m1_t vs2, size_t vl) {
  return __riscv_vmadd(vd, rs1, vs2, vl);
}

vuint32m2_t test_vmadd_vv_u32m2(vuint32m2_t vd, vuint32m2_t vs1, vuint32m2_t vs2, size_t vl) {
  return __riscv_vmadd(vd, vs1, vs2, vl);
}

vuint32m2_t test_vmadd_vx_u32m2(vuint32m2_t vd, uint32_t rs1, vuint32m2_t vs2, size_t vl) {
  return __riscv_vmadd(vd, rs1, vs2, vl);
}

vuint32m4_t test_vmadd_vv_u32m4(vuint32m4_t vd, vuint32m4_t vs1, vuint32m4_t vs2, size_t vl) {
  return __riscv_vmadd(vd, vs1, vs2, vl);
}

vuint32m4_t test_vmadd_vx_u32m4(vuint32m4_t vd, uint32_t rs1, vuint32m4_t vs2, size_t vl) {
  return __riscv_vmadd(vd, rs1, vs2, vl);
}

vuint32m8_t test_vmadd_vv_u32m8(vuint32m8_t vd, vuint32m8_t vs1, vuint32m8_t vs2, size_t vl) {
  return __riscv_vmadd(vd, vs1, vs2, vl);
}

vuint32m8_t test_vmadd_vx_u32m8(vuint32m8_t vd, uint32_t rs1, vuint32m8_t vs2, size_t vl) {
  return __riscv_vmadd(vd, rs1, vs2, vl);
}

vint8mf4_t test_vmadd_vv_i8mf4_m(vbool32_t mask, vint8mf4_t vd, vint8mf4_t vs1, vint8mf4_t vs2, size_t vl) {
  return __riscv_vmadd(mask, vd, vs1, vs2, vl);
}

vint8mf4_t test_vmadd_vx_i8mf4_m(vbool32_t mask, vint8mf4_t vd, int8_t rs1, vint8mf4_t vs2, size_t vl) {
  return __riscv_vmadd(mask, vd, rs1, vs2, vl);
}

vint8mf2_t test_vmadd_vv_i8mf2_m(vbool16_t mask, vint8mf2_t vd, vint8mf2_t vs1, vint8mf2_t vs2, size_t vl) {
  return __riscv_vmadd(mask, vd, vs1, vs2, vl);
}

vint8mf2_t test_vmadd_vx_i8mf2_m(vbool16_t mask, vint8mf2_t vd, int8_t rs1, vint8mf2_t vs2, size_t vl) {
  return __riscv_vmadd(mask, vd, rs1, vs2, vl);
}

vint8m1_t test_vmadd_vv_i8m1_m(vbool8_t mask, vint8m1_t vd, vint8m1_t vs1, vint8m1_t vs2, size_t vl) {
  return __riscv_vmadd(mask, vd, vs1, vs2, vl);
}

vint8m1_t test_vmadd_vx_i8m1_m(vbool8_t mask, vint8m1_t vd, int8_t rs1, vint8m1_t vs2, size_t vl) {
  return __riscv_vmadd(mask, vd, rs1, vs2, vl);
}

vint8m2_t test_vmadd_vv_i8m2_m(vbool4_t mask, vint8m2_t vd, vint8m2_t vs1, vint8m2_t vs2, size_t vl) {
  return __riscv_vmadd(mask, vd, vs1, vs2, vl);
}

vint8m2_t test_vmadd_vx_i8m2_m(vbool4_t mask, vint8m2_t vd, int8_t rs1, vint8m2_t vs2, size_t vl) {
  return __riscv_vmadd(mask, vd, rs1, vs2, vl);
}

vint8m4_t test_vmadd_vv_i8m4_m(vbool2_t mask, vint8m4_t vd, vint8m4_t vs1, vint8m4_t vs2, size_t vl) {
  return __riscv_vmadd(mask, vd, vs1, vs2, vl);
}

vint8m4_t test_vmadd_vx_i8m4_m(vbool2_t mask, vint8m4_t vd, int8_t rs1, vint8m4_t vs2, size_t vl) {
  return __riscv_vmadd(mask, vd, rs1, vs2, vl);
}

vint8m8_t test_vmadd_vv_i8m8_m(vbool1_t mask, vint8m8_t vd, vint8m8_t vs1, vint8m8_t vs2, size_t vl) {
  return __riscv_vmadd(mask, vd, vs1, vs2, vl);
}

vint8m8_t test_vmadd_vx_i8m8_m(vbool1_t mask, vint8m8_t vd, int8_t rs1, vint8m8_t vs2, size_t vl) {
  return __riscv_vmadd(mask, vd, rs1, vs2, vl);
}

vint16mf2_t test_vmadd_vv_i16mf2_m(vbool32_t mask, vint16mf2_t vd, vint16mf2_t vs1, vint16mf2_t vs2, size_t vl) {
  return __riscv_vmadd(mask, vd, vs1, vs2, vl);
}

vint16mf2_t test_vmadd_vx_i16mf2_m(vbool32_t mask, vint16mf2_t vd, int16_t rs1, vint16mf2_t vs2, size_t vl) {
  return __riscv_vmadd(mask, vd, rs1, vs2, vl);
}

vint16m1_t test_vmadd_vv_i16m1_m(vbool16_t mask, vint16m1_t vd, vint16m1_t vs1, vint16m1_t vs2, size_t vl) {
  return __riscv_vmadd(mask, vd, vs1, vs2, vl);
}

vint16m1_t test_vmadd_vx_i16m1_m(vbool16_t mask, vint16m1_t vd, int16_t rs1, vint16m1_t vs2, size_t vl) {
  return __riscv_vmadd(mask, vd, rs1, vs2, vl);
}

vint16m2_t test_vmadd_vv_i16m2_m(vbool8_t mask, vint16m2_t vd, vint16m2_t vs1, vint16m2_t vs2, size_t vl) {
  return __riscv_vmadd(mask, vd, vs1, vs2, vl);
}

vint16m2_t test_vmadd_vx_i16m2_m(vbool8_t mask, vint16m2_t vd, int16_t rs1, vint16m2_t vs2, size_t vl) {
  return __riscv_vmadd(mask, vd, rs1, vs2, vl);
}

vint16m4_t test_vmadd_vv_i16m4_m(vbool4_t mask, vint16m4_t vd, vint16m4_t vs1, vint16m4_t vs2, size_t vl) {
  return __riscv_vmadd(mask, vd, vs1, vs2, vl);
}

vint16m4_t test_vmadd_vx_i16m4_m(vbool4_t mask, vint16m4_t vd, int16_t rs1, vint16m4_t vs2, size_t vl) {
  return __riscv_vmadd(mask, vd, rs1, vs2, vl);
}

vint16m8_t test_vmadd_vv_i16m8_m(vbool2_t mask, vint16m8_t vd, vint16m8_t vs1, vint16m8_t vs2, size_t vl) {
  return __riscv_vmadd(mask, vd, vs1, vs2, vl);
}

vint16m8_t test_vmadd_vx_i16m8_m(vbool2_t mask, vint16m8_t vd, int16_t rs1, vint16m8_t vs2, size_t vl) {
  return __riscv_vmadd(mask, vd, rs1, vs2, vl);
}

vint32m1_t test_vmadd_vv_i32m1_m(vbool32_t mask, vint32m1_t vd, vint32m1_t vs1, vint32m1_t vs2, size_t vl) {
  return __riscv_vmadd(mask, vd, vs1, vs2, vl);
}

vint32m1_t test_vmadd_vx_i32m1_m(vbool32_t mask, vint32m1_t vd, int32_t rs1, vint32m1_t vs2, size_t vl) {
  return __riscv_vmadd(mask, vd, rs1, vs2, vl);
}

vint32m2_t test_vmadd_vv_i32m2_m(vbool16_t mask, vint32m2_t vd, vint32m2_t vs1, vint32m2_t vs2, size_t vl) {
  return __riscv_vmadd(mask, vd, vs1, vs2, vl);
}

vint32m2_t test_vmadd_vx_i32m2_m(vbool16_t mask, vint32m2_t vd, int32_t rs1, vint32m2_t vs2, size_t vl) {
  return __riscv_vmadd(mask, vd, rs1, vs2, vl);
}

vint32m4_t test_vmadd_vv_i32m4_m(vbool8_t mask, vint32m4_t vd, vint32m4_t vs1, vint32m4_t vs2, size_t vl) {
  return __riscv_vmadd(mask, vd, vs1, vs2, vl);
}

vint32m4_t test_vmadd_vx_i32m4_m(vbool8_t mask, vint32m4_t vd, int32_t rs1, vint32m4_t vs2, size_t vl) {
  return __riscv_vmadd(mask, vd, rs1, vs2, vl);
}

vint32m8_t test_vmadd_vv_i32m8_m(vbool4_t mask, vint32m8_t vd, vint32m8_t vs1, vint32m8_t vs2, size_t vl) {
  return __riscv_vmadd(mask, vd, vs1, vs2, vl);
}

vint32m8_t test_vmadd_vx_i32m8_m(vbool4_t mask, vint32m8_t vd, int32_t rs1, vint32m8_t vs2, size_t vl) {
  return __riscv_vmadd(mask, vd, rs1, vs2, vl);
}

vuint8mf4_t test_vmadd_vv_u8mf4_m(vbool32_t mask, vuint8mf4_t vd, vuint8mf4_t vs1, vuint8mf4_t vs2, size_t vl) {
  return __riscv_vmadd(mask, vd, vs1, vs2, vl);
}

vuint8mf4_t test_vmadd_vx_u8mf4_m(vbool32_t mask, vuint8mf4_t vd, uint8_t rs1, vuint8mf4_t vs2, size_t vl) {
  return __riscv_vmadd(mask, vd, rs1, vs2, vl);
}

vuint8mf2_t test_vmadd_vv_u8mf2_m(vbool16_t mask, vuint8mf2_t vd, vuint8mf2_t vs1, vuint8mf2_t vs2, size_t vl) {
  return __riscv_vmadd(mask, vd, vs1, vs2, vl);
}

vuint8mf2_t test_vmadd_vx_u8mf2_m(vbool16_t mask, vuint8mf2_t vd, uint8_t rs1, vuint8mf2_t vs2, size_t vl) {
  return __riscv_vmadd(mask, vd, rs1, vs2, vl);
}

vuint8m1_t test_vmadd_vv_u8m1_m(vbool8_t mask, vuint8m1_t vd, vuint8m1_t vs1, vuint8m1_t vs2, size_t vl) {
  return __riscv_vmadd(mask, vd, vs1, vs2, vl);
}

vuint8m1_t test_vmadd_vx_u8m1_m(vbool8_t mask, vuint8m1_t vd, uint8_t rs1, vuint8m1_t vs2, size_t vl) {
  return __riscv_vmadd(mask, vd, rs1, vs2, vl);
}

vuint8m2_t test_vmadd_vv_u8m2_m(vbool4_t mask, vuint8m2_t vd, vuint8m2_t vs1, vuint8m2_t vs2, size_t vl) {
  return __riscv_vmadd(mask, vd, vs1, vs2, vl);
}

vuint8m2_t test_vmadd_vx_u8m2_m(vbool4_t mask, vuint8m2_t vd, uint8_t rs1, vuint8m2_t vs2, size_t vl) {
  return __riscv_vmadd(mask, vd, rs1, vs2, vl);
}

vuint8m4_t test_vmadd_vv_u8m4_m(vbool2_t mask, vuint8m4_t vd, vuint8m4_t vs1, vuint8m4_t vs2, size_t vl) {
  return __riscv_vmadd(mask, vd, vs1, vs2, vl);
}

vuint8m4_t test_vmadd_vx_u8m4_m(vbool2_t mask, vuint8m4_t vd, uint8_t rs1, vuint8m4_t vs2, size_t vl) {
  return __riscv_vmadd(mask, vd, rs1, vs2, vl);
}

vuint8m8_t test_vmadd_vv_u8m8_m(vbool1_t mask, vuint8m8_t vd, vuint8m8_t vs1, vuint8m8_t vs2, size_t vl) {
  return __riscv_vmadd(mask, vd, vs1, vs2, vl);
}

vuint8m8_t test_vmadd_vx_u8m8_m(vbool1_t mask, vuint8m8_t vd, uint8_t rs1, vuint8m8_t vs2, size_t vl) {
  return __riscv_vmadd(mask, vd, rs1, vs2, vl);
}

vuint16mf2_t test_vmadd_vv_u16mf2_m(vbool32_t mask, vuint16mf2_t vd, vuint16mf2_t vs1, vuint16mf2_t vs2, size_t vl) {
  return __riscv_vmadd(mask, vd, vs1, vs2, vl);
}

vuint16mf2_t test_vmadd_vx_u16mf2_m(vbool32_t mask, vuint16mf2_t vd, uint16_t rs1, vuint16mf2_t vs2, size_t vl) {
  return __riscv_vmadd(mask, vd, rs1, vs2, vl);
}

vuint16m1_t test_vmadd_vv_u16m1_m(vbool16_t mask, vuint16m1_t vd, vuint16m1_t vs1, vuint16m1_t vs2, size_t vl) {
  return __riscv_vmadd(mask, vd, vs1, vs2, vl);
}

vuint16m1_t test_vmadd_vx_u16m1_m(vbool16_t mask, vuint16m1_t vd, uint16_t rs1, vuint16m1_t vs2, size_t vl) {
  return __riscv_vmadd(mask, vd, rs1, vs2, vl);
}

vuint16m2_t test_vmadd_vv_u16m2_m(vbool8_t mask, vuint16m2_t vd, vuint16m2_t vs1, vuint16m2_t vs2, size_t vl) {
  return __riscv_vmadd(mask, vd, vs1, vs2, vl);
}

vuint16m2_t test_vmadd_vx_u16m2_m(vbool8_t mask, vuint16m2_t vd, uint16_t rs1, vuint16m2_t vs2, size_t vl) {
  return __riscv_vmadd(mask, vd, rs1, vs2, vl);
}

vuint16m4_t test_vmadd_vv_u16m4_m(vbool4_t mask, vuint16m4_t vd, vuint16m4_t vs1, vuint16m4_t vs2, size_t vl) {
  return __riscv_vmadd(mask, vd, vs1, vs2, vl);
}

vuint16m4_t test_vmadd_vx_u16m4_m(vbool4_t mask, vuint16m4_t vd, uint16_t rs1, vuint16m4_t vs2, size_t vl) {
  return __riscv_vmadd(mask, vd, rs1, vs2, vl);
}

vuint16m8_t test_vmadd_vv_u16m8_m(vbool2_t mask, vuint16m8_t vd, vuint16m8_t vs1, vuint16m8_t vs2, size_t vl) {
  return __riscv_vmadd(mask, vd, vs1, vs2, vl);
}

vuint16m8_t test_vmadd_vx_u16m8_m(vbool2_t mask, vuint16m8_t vd, uint16_t rs1, vuint16m8_t vs2, size_t vl) {
  return __riscv_vmadd(mask, vd, rs1, vs2, vl);
}

vuint32m1_t test_vmadd_vv_u32m1_m(vbool32_t mask, vuint32m1_t vd, vuint32m1_t vs1, vuint32m1_t vs2, size_t vl) {
  return __riscv_vmadd(mask, vd, vs1, vs2, vl);
}

vuint32m1_t test_vmadd_vx_u32m1_m(vbool32_t mask, vuint32m1_t vd, uint32_t rs1, vuint32m1_t vs2, size_t vl) {
  return __riscv_vmadd(mask, vd, rs1, vs2, vl);
}

vuint32m2_t test_vmadd_vv_u32m2_m(vbool16_t mask, vuint32m2_t vd, vuint32m2_t vs1, vuint32m2_t vs2, size_t vl) {
  return __riscv_vmadd(mask, vd, vs1, vs2, vl);
}

vuint32m2_t test_vmadd_vx_u32m2_m(vbool16_t mask, vuint32m2_t vd, uint32_t rs1, vuint32m2_t vs2, size_t vl) {
  return __riscv_vmadd(mask, vd, rs1, vs2, vl);
}

vuint32m4_t test_vmadd_vv_u32m4_m(vbool8_t mask, vuint32m4_t vd, vuint32m4_t vs1, vuint32m4_t vs2, size_t vl) {
  return __riscv_vmadd(mask, vd, vs1, vs2, vl);
}

vuint32m4_t test_vmadd_vx_u32m4_m(vbool8_t mask, vuint32m4_t vd, uint32_t rs1, vuint32m4_t vs2, size_t vl) {
  return __riscv_vmadd(mask, vd, rs1, vs2, vl);
}

vuint32m8_t test_vmadd_vv_u32m8_m(vbool4_t mask, vuint32m8_t vd, vuint32m8_t vs1, vuint32m8_t vs2, size_t vl) {
  return __riscv_vmadd(mask, vd, vs1, vs2, vl);
}

vuint32m8_t test_vmadd_vx_u32m8_m(vbool4_t mask, vuint32m8_t vd, uint32_t rs1, vuint32m8_t vs2, size_t vl) {
  return __riscv_vmadd(mask, vd, rs1, vs2, vl);
}

/* { dg-final { scan-assembler-times {vma[c-d][c-d]\.[ivxfswum.]+\s+} 120 } } */
