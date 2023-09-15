/* { dg-do compile } */
/* { dg-options "-march=rv32gc_zve32x -mabi=ilp32d -Wno-psabi -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include "riscv_vector.h"

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
vint16mf2_t test_vsext_vf2_i16mf2(vint8mf4_t op1, size_t vl) {
  return __riscv_vsext_vf2_i16mf2(op1, vl);
}

vint16m1_t test_vsext_vf2_i16m1(vint8mf2_t op1, size_t vl) {
  return __riscv_vsext_vf2_i16m1(op1, vl);
}

vint16m2_t test_vsext_vf2_i16m2(vint8m1_t op1, size_t vl) {
  return __riscv_vsext_vf2_i16m2(op1, vl);
}

vint16m4_t test_vsext_vf2_i16m4(vint8m2_t op1, size_t vl) {
  return __riscv_vsext_vf2_i16m4(op1, vl);
}

vint16m8_t test_vsext_vf2_i16m8(vint8m4_t op1, size_t vl) {
  return __riscv_vsext_vf2_i16m8(op1, vl);
}

vint32m1_t test_vsext_vf2_i32m1(vint16mf2_t op1, size_t vl) {
  return __riscv_vsext_vf2_i32m1(op1, vl);
}

vint32m2_t test_vsext_vf2_i32m2(vint16m1_t op1, size_t vl) {
  return __riscv_vsext_vf2_i32m2(op1, vl);
}

vint32m4_t test_vsext_vf2_i32m4(vint16m2_t op1, size_t vl) {
  return __riscv_vsext_vf2_i32m4(op1, vl);
}

vint32m8_t test_vsext_vf2_i32m8(vint16m4_t op1, size_t vl) {
  return __riscv_vsext_vf2_i32m8(op1, vl);
}

vint16mf2_t test_vsext_vf2_i16mf2_m(vbool32_t mask, vint8mf4_t op1, size_t vl) {
  return __riscv_vsext_vf2_i16mf2_m(mask, op1, vl);
}

vint16m1_t test_vsext_vf2_i16m1_m(vbool16_t mask, vint8mf2_t op1, size_t vl) {
  return __riscv_vsext_vf2_i16m1_m(mask, op1, vl);
}

vint16m2_t test_vsext_vf2_i16m2_m(vbool8_t mask, vint8m1_t op1, size_t vl) {
  return __riscv_vsext_vf2_i16m2_m(mask, op1, vl);
}

vint16m4_t test_vsext_vf2_i16m4_m(vbool4_t mask, vint8m2_t op1, size_t vl) {
  return __riscv_vsext_vf2_i16m4_m(mask, op1, vl);
}

vint16m8_t test_vsext_vf2_i16m8_m(vbool2_t mask, vint8m4_t op1, size_t vl) {
  return __riscv_vsext_vf2_i16m8_m(mask, op1, vl);
}

vint32m1_t test_vsext_vf2_i32m1_m(vbool32_t mask, vint16mf2_t op1, size_t vl) {
  return __riscv_vsext_vf2_i32m1_m(mask, op1, vl);
}

vint32m2_t test_vsext_vf2_i32m2_m(vbool16_t mask, vint16m1_t op1, size_t vl) {
  return __riscv_vsext_vf2_i32m2_m(mask, op1, vl);
}

vint32m4_t test_vsext_vf2_i32m4_m(vbool8_t mask, vint16m2_t op1, size_t vl) {
  return __riscv_vsext_vf2_i32m4_m(mask, op1, vl);
}

vint32m8_t test_vsext_vf2_i32m8_m(vbool4_t mask, vint16m4_t op1, size_t vl) {
  return __riscv_vsext_vf2_i32m8_m(mask, op1, vl);
}

/* { dg-final { scan-assembler-times {vseti?vli\s+[a-z0-9]+,\s*[a-z0-9]+,\s*e[0-9]+,\s*mf?[1248],\s*t[au],\s*m[au]\s+vsext\.vf2[ivxfswum.]*\s+} 18 } } */
