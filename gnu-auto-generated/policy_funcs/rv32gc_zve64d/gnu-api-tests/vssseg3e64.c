/* { dg-do compile } */
/* { dg-options "-march=rv32gc_zve64d -mabi=ilp32d -Wno-psabi -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include "riscv_vector.h"

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
void test_vssseg3e64_v_f64m1x3(float64_t *base, ptrdiff_t bstride, vfloat64m1x3_t v_tuple, size_t vl) {
  return __riscv_vssseg3e64_v_f64m1x3(base, bstride, v_tuple, vl);
}

void test_vssseg3e64_v_f64m2x3(float64_t *base, ptrdiff_t bstride, vfloat64m2x3_t v_tuple, size_t vl) {
  return __riscv_vssseg3e64_v_f64m2x3(base, bstride, v_tuple, vl);
}

void test_vssseg3e64_v_i64m1x3(int64_t *base, ptrdiff_t bstride, vint64m1x3_t v_tuple, size_t vl) {
  return __riscv_vssseg3e64_v_i64m1x3(base, bstride, v_tuple, vl);
}

void test_vssseg3e64_v_i64m2x3(int64_t *base, ptrdiff_t bstride, vint64m2x3_t v_tuple, size_t vl) {
  return __riscv_vssseg3e64_v_i64m2x3(base, bstride, v_tuple, vl);
}

void test_vssseg3e64_v_u64m1x3(uint64_t *base, ptrdiff_t bstride, vuint64m1x3_t v_tuple, size_t vl) {
  return __riscv_vssseg3e64_v_u64m1x3(base, bstride, v_tuple, vl);
}

void test_vssseg3e64_v_u64m2x3(uint64_t *base, ptrdiff_t bstride, vuint64m2x3_t v_tuple, size_t vl) {
  return __riscv_vssseg3e64_v_u64m2x3(base, bstride, v_tuple, vl);
}

void test_vssseg3e64_v_f64m1x3_m(vbool64_t mask, float64_t *base, ptrdiff_t bstride, vfloat64m1x3_t v_tuple, size_t vl) {
  return __riscv_vssseg3e64_v_f64m1x3_m(mask, base, bstride, v_tuple, vl);
}

void test_vssseg3e64_v_f64m2x3_m(vbool32_t mask, float64_t *base, ptrdiff_t bstride, vfloat64m2x3_t v_tuple, size_t vl) {
  return __riscv_vssseg3e64_v_f64m2x3_m(mask, base, bstride, v_tuple, vl);
}

void test_vssseg3e64_v_i64m1x3_m(vbool64_t mask, int64_t *base, ptrdiff_t bstride, vint64m1x3_t v_tuple, size_t vl) {
  return __riscv_vssseg3e64_v_i64m1x3_m(mask, base, bstride, v_tuple, vl);
}

void test_vssseg3e64_v_i64m2x3_m(vbool32_t mask, int64_t *base, ptrdiff_t bstride, vint64m2x3_t v_tuple, size_t vl) {
  return __riscv_vssseg3e64_v_i64m2x3_m(mask, base, bstride, v_tuple, vl);
}

void test_vssseg3e64_v_u64m1x3_m(vbool64_t mask, uint64_t *base, ptrdiff_t bstride, vuint64m1x3_t v_tuple, size_t vl) {
  return __riscv_vssseg3e64_v_u64m1x3_m(mask, base, bstride, v_tuple, vl);
}

void test_vssseg3e64_v_u64m2x3_m(vbool32_t mask, uint64_t *base, ptrdiff_t bstride, vuint64m2x3_t v_tuple, size_t vl) {
  return __riscv_vssseg3e64_v_u64m2x3_m(mask, base, bstride, v_tuple, vl);
}

/* { dg-final { scan-assembler-times {vseti?vli\s+[a-z0-9]+,\s*[a-z0-9]+,\s*e[0-9]+,\s*mf?[1248],\s*t[au],\s*m[au]\s+vssseg3e64\.[ivxfswum.]+\s+} 12 } } */
