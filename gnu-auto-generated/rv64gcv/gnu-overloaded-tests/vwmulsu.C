/* { dg-do compile } */
/* { dg-options "-march=rv64gcv -mabi=lp64d -Wno-psabi -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include "riscv_vector.h"

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
vint16mf4_t test_vwmulsu_vv_i16mf4(vint8mf8_t op1, vuint8mf8_t op2, size_t vl) {
  return __riscv_vwmulsu(op1, op2, vl);
}

vint16mf4_t test_vwmulsu_vx_i16mf4(vint8mf8_t op1, uint8_t op2, size_t vl) {
  return __riscv_vwmulsu(op1, op2, vl);
}

vint16mf2_t test_vwmulsu_vv_i16mf2(vint8mf4_t op1, vuint8mf4_t op2, size_t vl) {
  return __riscv_vwmulsu(op1, op2, vl);
}

vint16mf2_t test_vwmulsu_vx_i16mf2(vint8mf4_t op1, uint8_t op2, size_t vl) {
  return __riscv_vwmulsu(op1, op2, vl);
}

vint16m1_t test_vwmulsu_vv_i16m1(vint8mf2_t op1, vuint8mf2_t op2, size_t vl) {
  return __riscv_vwmulsu(op1, op2, vl);
}

vint16m1_t test_vwmulsu_vx_i16m1(vint8mf2_t op1, uint8_t op2, size_t vl) {
  return __riscv_vwmulsu(op1, op2, vl);
}

vint16m2_t test_vwmulsu_vv_i16m2(vint8m1_t op1, vuint8m1_t op2, size_t vl) {
  return __riscv_vwmulsu(op1, op2, vl);
}

vint16m2_t test_vwmulsu_vx_i16m2(vint8m1_t op1, uint8_t op2, size_t vl) {
  return __riscv_vwmulsu(op1, op2, vl);
}

vint16m4_t test_vwmulsu_vv_i16m4(vint8m2_t op1, vuint8m2_t op2, size_t vl) {
  return __riscv_vwmulsu(op1, op2, vl);
}

vint16m4_t test_vwmulsu_vx_i16m4(vint8m2_t op1, uint8_t op2, size_t vl) {
  return __riscv_vwmulsu(op1, op2, vl);
}

vint16m8_t test_vwmulsu_vv_i16m8(vint8m4_t op1, vuint8m4_t op2, size_t vl) {
  return __riscv_vwmulsu(op1, op2, vl);
}

vint16m8_t test_vwmulsu_vx_i16m8(vint8m4_t op1, uint8_t op2, size_t vl) {
  return __riscv_vwmulsu(op1, op2, vl);
}

vint32mf2_t test_vwmulsu_vv_i32mf2(vint16mf4_t op1, vuint16mf4_t op2, size_t vl) {
  return __riscv_vwmulsu(op1, op2, vl);
}

vint32mf2_t test_vwmulsu_vx_i32mf2(vint16mf4_t op1, uint16_t op2, size_t vl) {
  return __riscv_vwmulsu(op1, op2, vl);
}

vint32m1_t test_vwmulsu_vv_i32m1(vint16mf2_t op1, vuint16mf2_t op2, size_t vl) {
  return __riscv_vwmulsu(op1, op2, vl);
}

vint32m1_t test_vwmulsu_vx_i32m1(vint16mf2_t op1, uint16_t op2, size_t vl) {
  return __riscv_vwmulsu(op1, op2, vl);
}

vint32m2_t test_vwmulsu_vv_i32m2(vint16m1_t op1, vuint16m1_t op2, size_t vl) {
  return __riscv_vwmulsu(op1, op2, vl);
}

vint32m2_t test_vwmulsu_vx_i32m2(vint16m1_t op1, uint16_t op2, size_t vl) {
  return __riscv_vwmulsu(op1, op2, vl);
}

vint32m4_t test_vwmulsu_vv_i32m4(vint16m2_t op1, vuint16m2_t op2, size_t vl) {
  return __riscv_vwmulsu(op1, op2, vl);
}

vint32m4_t test_vwmulsu_vx_i32m4(vint16m2_t op1, uint16_t op2, size_t vl) {
  return __riscv_vwmulsu(op1, op2, vl);
}

vint32m8_t test_vwmulsu_vv_i32m8(vint16m4_t op1, vuint16m4_t op2, size_t vl) {
  return __riscv_vwmulsu(op1, op2, vl);
}

vint32m8_t test_vwmulsu_vx_i32m8(vint16m4_t op1, uint16_t op2, size_t vl) {
  return __riscv_vwmulsu(op1, op2, vl);
}

vint64m1_t test_vwmulsu_vv_i64m1(vint32mf2_t op1, vuint32mf2_t op2, size_t vl) {
  return __riscv_vwmulsu(op1, op2, vl);
}

vint64m1_t test_vwmulsu_vx_i64m1(vint32mf2_t op1, uint32_t op2, size_t vl) {
  return __riscv_vwmulsu(op1, op2, vl);
}

vint64m2_t test_vwmulsu_vv_i64m2(vint32m1_t op1, vuint32m1_t op2, size_t vl) {
  return __riscv_vwmulsu(op1, op2, vl);
}

vint64m2_t test_vwmulsu_vx_i64m2(vint32m1_t op1, uint32_t op2, size_t vl) {
  return __riscv_vwmulsu(op1, op2, vl);
}

vint64m4_t test_vwmulsu_vv_i64m4(vint32m2_t op1, vuint32m2_t op2, size_t vl) {
  return __riscv_vwmulsu(op1, op2, vl);
}

vint64m4_t test_vwmulsu_vx_i64m4(vint32m2_t op1, uint32_t op2, size_t vl) {
  return __riscv_vwmulsu(op1, op2, vl);
}

vint64m8_t test_vwmulsu_vv_i64m8(vint32m4_t op1, vuint32m4_t op2, size_t vl) {
  return __riscv_vwmulsu(op1, op2, vl);
}

vint64m8_t test_vwmulsu_vx_i64m8(vint32m4_t op1, uint32_t op2, size_t vl) {
  return __riscv_vwmulsu(op1, op2, vl);
}

vint16mf4_t test_vwmulsu_vv_i16mf4_m(vbool64_t mask, vint8mf8_t op1, vuint8mf8_t op2, size_t vl) {
  return __riscv_vwmulsu(mask, op1, op2, vl);
}

vint16mf4_t test_vwmulsu_vx_i16mf4_m(vbool64_t mask, vint8mf8_t op1, uint8_t op2, size_t vl) {
  return __riscv_vwmulsu(mask, op1, op2, vl);
}

vint16mf2_t test_vwmulsu_vv_i16mf2_m(vbool32_t mask, vint8mf4_t op1, vuint8mf4_t op2, size_t vl) {
  return __riscv_vwmulsu(mask, op1, op2, vl);
}

vint16mf2_t test_vwmulsu_vx_i16mf2_m(vbool32_t mask, vint8mf4_t op1, uint8_t op2, size_t vl) {
  return __riscv_vwmulsu(mask, op1, op2, vl);
}

vint16m1_t test_vwmulsu_vv_i16m1_m(vbool16_t mask, vint8mf2_t op1, vuint8mf2_t op2, size_t vl) {
  return __riscv_vwmulsu(mask, op1, op2, vl);
}

vint16m1_t test_vwmulsu_vx_i16m1_m(vbool16_t mask, vint8mf2_t op1, uint8_t op2, size_t vl) {
  return __riscv_vwmulsu(mask, op1, op2, vl);
}

vint16m2_t test_vwmulsu_vv_i16m2_m(vbool8_t mask, vint8m1_t op1, vuint8m1_t op2, size_t vl) {
  return __riscv_vwmulsu(mask, op1, op2, vl);
}

vint16m2_t test_vwmulsu_vx_i16m2_m(vbool8_t mask, vint8m1_t op1, uint8_t op2, size_t vl) {
  return __riscv_vwmulsu(mask, op1, op2, vl);
}

vint16m4_t test_vwmulsu_vv_i16m4_m(vbool4_t mask, vint8m2_t op1, vuint8m2_t op2, size_t vl) {
  return __riscv_vwmulsu(mask, op1, op2, vl);
}

vint16m4_t test_vwmulsu_vx_i16m4_m(vbool4_t mask, vint8m2_t op1, uint8_t op2, size_t vl) {
  return __riscv_vwmulsu(mask, op1, op2, vl);
}

vint16m8_t test_vwmulsu_vv_i16m8_m(vbool2_t mask, vint8m4_t op1, vuint8m4_t op2, size_t vl) {
  return __riscv_vwmulsu(mask, op1, op2, vl);
}

vint16m8_t test_vwmulsu_vx_i16m8_m(vbool2_t mask, vint8m4_t op1, uint8_t op2, size_t vl) {
  return __riscv_vwmulsu(mask, op1, op2, vl);
}

vint32mf2_t test_vwmulsu_vv_i32mf2_m(vbool64_t mask, vint16mf4_t op1, vuint16mf4_t op2, size_t vl) {
  return __riscv_vwmulsu(mask, op1, op2, vl);
}

vint32mf2_t test_vwmulsu_vx_i32mf2_m(vbool64_t mask, vint16mf4_t op1, uint16_t op2, size_t vl) {
  return __riscv_vwmulsu(mask, op1, op2, vl);
}

vint32m1_t test_vwmulsu_vv_i32m1_m(vbool32_t mask, vint16mf2_t op1, vuint16mf2_t op2, size_t vl) {
  return __riscv_vwmulsu(mask, op1, op2, vl);
}

vint32m1_t test_vwmulsu_vx_i32m1_m(vbool32_t mask, vint16mf2_t op1, uint16_t op2, size_t vl) {
  return __riscv_vwmulsu(mask, op1, op2, vl);
}

vint32m2_t test_vwmulsu_vv_i32m2_m(vbool16_t mask, vint16m1_t op1, vuint16m1_t op2, size_t vl) {
  return __riscv_vwmulsu(mask, op1, op2, vl);
}

vint32m2_t test_vwmulsu_vx_i32m2_m(vbool16_t mask, vint16m1_t op1, uint16_t op2, size_t vl) {
  return __riscv_vwmulsu(mask, op1, op2, vl);
}

vint32m4_t test_vwmulsu_vv_i32m4_m(vbool8_t mask, vint16m2_t op1, vuint16m2_t op2, size_t vl) {
  return __riscv_vwmulsu(mask, op1, op2, vl);
}

vint32m4_t test_vwmulsu_vx_i32m4_m(vbool8_t mask, vint16m2_t op1, uint16_t op2, size_t vl) {
  return __riscv_vwmulsu(mask, op1, op2, vl);
}

vint32m8_t test_vwmulsu_vv_i32m8_m(vbool4_t mask, vint16m4_t op1, vuint16m4_t op2, size_t vl) {
  return __riscv_vwmulsu(mask, op1, op2, vl);
}

vint32m8_t test_vwmulsu_vx_i32m8_m(vbool4_t mask, vint16m4_t op1, uint16_t op2, size_t vl) {
  return __riscv_vwmulsu(mask, op1, op2, vl);
}

vint64m1_t test_vwmulsu_vv_i64m1_m(vbool64_t mask, vint32mf2_t op1, vuint32mf2_t op2, size_t vl) {
  return __riscv_vwmulsu(mask, op1, op2, vl);
}

vint64m1_t test_vwmulsu_vx_i64m1_m(vbool64_t mask, vint32mf2_t op1, uint32_t op2, size_t vl) {
  return __riscv_vwmulsu(mask, op1, op2, vl);
}

vint64m2_t test_vwmulsu_vv_i64m2_m(vbool32_t mask, vint32m1_t op1, vuint32m1_t op2, size_t vl) {
  return __riscv_vwmulsu(mask, op1, op2, vl);
}

vint64m2_t test_vwmulsu_vx_i64m2_m(vbool32_t mask, vint32m1_t op1, uint32_t op2, size_t vl) {
  return __riscv_vwmulsu(mask, op1, op2, vl);
}

vint64m4_t test_vwmulsu_vv_i64m4_m(vbool16_t mask, vint32m2_t op1, vuint32m2_t op2, size_t vl) {
  return __riscv_vwmulsu(mask, op1, op2, vl);
}

vint64m4_t test_vwmulsu_vx_i64m4_m(vbool16_t mask, vint32m2_t op1, uint32_t op2, size_t vl) {
  return __riscv_vwmulsu(mask, op1, op2, vl);
}

vint64m8_t test_vwmulsu_vv_i64m8_m(vbool8_t mask, vint32m4_t op1, vuint32m4_t op2, size_t vl) {
  return __riscv_vwmulsu(mask, op1, op2, vl);
}

vint64m8_t test_vwmulsu_vx_i64m8_m(vbool8_t mask, vint32m4_t op1, uint32_t op2, size_t vl) {
  return __riscv_vwmulsu(mask, op1, op2, vl);
}

/* { dg-final { scan-assembler-times {vseti?vli\s+[a-z0-9]+,\s*[a-z0-9]+,\s*e[0-9]+,\s*mf?[1248],\s*t[au],\s*m[au]\s+vwmulsu\.[ivxfswum.]+\s+} 60 } } */
