/* { dg-do compile } */
/* { dg-options "-march=rv32gc_zve64d -mabi=ilp32d -Wno-psabi -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include "riscv_vector.h"

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
void test_vsse64_v_f64m1(float64_t *base, ptrdiff_t bstride, vfloat64m1_t value, size_t vl) {
  return __riscv_vsse64(base, bstride, value, vl);
}

void test_vsse64_v_f64m2(float64_t *base, ptrdiff_t bstride, vfloat64m2_t value, size_t vl) {
  return __riscv_vsse64(base, bstride, value, vl);
}

void test_vsse64_v_f64m4(float64_t *base, ptrdiff_t bstride, vfloat64m4_t value, size_t vl) {
  return __riscv_vsse64(base, bstride, value, vl);
}

void test_vsse64_v_f64m8(float64_t *base, ptrdiff_t bstride, vfloat64m8_t value, size_t vl) {
  return __riscv_vsse64(base, bstride, value, vl);
}

void test_vsse64_v_i64m1(int64_t *base, ptrdiff_t bstride, vint64m1_t value, size_t vl) {
  return __riscv_vsse64(base, bstride, value, vl);
}

void test_vsse64_v_i64m2(int64_t *base, ptrdiff_t bstride, vint64m2_t value, size_t vl) {
  return __riscv_vsse64(base, bstride, value, vl);
}

void test_vsse64_v_i64m4(int64_t *base, ptrdiff_t bstride, vint64m4_t value, size_t vl) {
  return __riscv_vsse64(base, bstride, value, vl);
}

void test_vsse64_v_i64m8(int64_t *base, ptrdiff_t bstride, vint64m8_t value, size_t vl) {
  return __riscv_vsse64(base, bstride, value, vl);
}

void test_vsse64_v_u64m1(uint64_t *base, ptrdiff_t bstride, vuint64m1_t value, size_t vl) {
  return __riscv_vsse64(base, bstride, value, vl);
}

void test_vsse64_v_u64m2(uint64_t *base, ptrdiff_t bstride, vuint64m2_t value, size_t vl) {
  return __riscv_vsse64(base, bstride, value, vl);
}

void test_vsse64_v_u64m4(uint64_t *base, ptrdiff_t bstride, vuint64m4_t value, size_t vl) {
  return __riscv_vsse64(base, bstride, value, vl);
}

void test_vsse64_v_u64m8(uint64_t *base, ptrdiff_t bstride, vuint64m8_t value, size_t vl) {
  return __riscv_vsse64(base, bstride, value, vl);
}

void test_vsse64_v_f64m1_m(vbool64_t mask, float64_t *base, ptrdiff_t bstride, vfloat64m1_t value, size_t vl) {
  return __riscv_vsse64(mask, base, bstride, value, vl);
}

void test_vsse64_v_f64m2_m(vbool32_t mask, float64_t *base, ptrdiff_t bstride, vfloat64m2_t value, size_t vl) {
  return __riscv_vsse64(mask, base, bstride, value, vl);
}

void test_vsse64_v_f64m4_m(vbool16_t mask, float64_t *base, ptrdiff_t bstride, vfloat64m4_t value, size_t vl) {
  return __riscv_vsse64(mask, base, bstride, value, vl);
}

void test_vsse64_v_f64m8_m(vbool8_t mask, float64_t *base, ptrdiff_t bstride, vfloat64m8_t value, size_t vl) {
  return __riscv_vsse64(mask, base, bstride, value, vl);
}

void test_vsse64_v_i64m1_m(vbool64_t mask, int64_t *base, ptrdiff_t bstride, vint64m1_t value, size_t vl) {
  return __riscv_vsse64(mask, base, bstride, value, vl);
}

void test_vsse64_v_i64m2_m(vbool32_t mask, int64_t *base, ptrdiff_t bstride, vint64m2_t value, size_t vl) {
  return __riscv_vsse64(mask, base, bstride, value, vl);
}

void test_vsse64_v_i64m4_m(vbool16_t mask, int64_t *base, ptrdiff_t bstride, vint64m4_t value, size_t vl) {
  return __riscv_vsse64(mask, base, bstride, value, vl);
}

void test_vsse64_v_i64m8_m(vbool8_t mask, int64_t *base, ptrdiff_t bstride, vint64m8_t value, size_t vl) {
  return __riscv_vsse64(mask, base, bstride, value, vl);
}

void test_vsse64_v_u64m1_m(vbool64_t mask, uint64_t *base, ptrdiff_t bstride, vuint64m1_t value, size_t vl) {
  return __riscv_vsse64(mask, base, bstride, value, vl);
}

void test_vsse64_v_u64m2_m(vbool32_t mask, uint64_t *base, ptrdiff_t bstride, vuint64m2_t value, size_t vl) {
  return __riscv_vsse64(mask, base, bstride, value, vl);
}

void test_vsse64_v_u64m4_m(vbool16_t mask, uint64_t *base, ptrdiff_t bstride, vuint64m4_t value, size_t vl) {
  return __riscv_vsse64(mask, base, bstride, value, vl);
}

void test_vsse64_v_u64m8_m(vbool8_t mask, uint64_t *base, ptrdiff_t bstride, vuint64m8_t value, size_t vl) {
  return __riscv_vsse64(mask, base, bstride, value, vl);
}

/* { dg-final { scan-assembler-times {vseti?vli\s+[a-z0-9]+,\s*[a-z0-9]+,\s*e[0-9]+,\s*mf?[1248],\s*t[au],\s*m[au]\s+vsse64\.[ivxfswum.]+\s+} 24 } } */
