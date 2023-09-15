/* { dg-do compile } */
/* { dg-options "-march=rv64gc_zve64d -mabi=lp64d -Wno-psabi -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include "riscv_vector.h"

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
vint64m1_t test_vsext_vf8_i64m1(vint8mf8_t op1, size_t vl) {
  return __riscv_vsext_vf8_i64m1(op1, vl);
}

vint64m2_t test_vsext_vf8_i64m2(vint8mf4_t op1, size_t vl) {
  return __riscv_vsext_vf8_i64m2(op1, vl);
}

vint64m4_t test_vsext_vf8_i64m4(vint8mf2_t op1, size_t vl) {
  return __riscv_vsext_vf8_i64m4(op1, vl);
}

vint64m8_t test_vsext_vf8_i64m8(vint8m1_t op1, size_t vl) {
  return __riscv_vsext_vf8_i64m8(op1, vl);
}

vint64m1_t test_vsext_vf8_i64m1_m(vbool64_t mask, vint8mf8_t op1, size_t vl) {
  return __riscv_vsext_vf8_i64m1_m(mask, op1, vl);
}

vint64m2_t test_vsext_vf8_i64m2_m(vbool32_t mask, vint8mf4_t op1, size_t vl) {
  return __riscv_vsext_vf8_i64m2_m(mask, op1, vl);
}

vint64m4_t test_vsext_vf8_i64m4_m(vbool16_t mask, vint8mf2_t op1, size_t vl) {
  return __riscv_vsext_vf8_i64m4_m(mask, op1, vl);
}

vint64m8_t test_vsext_vf8_i64m8_m(vbool8_t mask, vint8m1_t op1, size_t vl) {
  return __riscv_vsext_vf8_i64m8_m(mask, op1, vl);
}

/* { dg-final { scan-assembler-times {vseti?vli\s+[a-z0-9]+,\s*[a-z0-9]+,\s*e[0-9]+,\s*mf?[1248],\s*t[au],\s*m[au]\s+vsext\.vf8[ivxfswum.]*\s+} 8 } } */
