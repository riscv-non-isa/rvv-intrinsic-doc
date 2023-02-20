/* { dg-do compile } */
/* { dg-options "-march=rv64gcv -mabi=lp64d -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include <riscv_vector.h>

void test_vssseg2e64_v_f64m1(float64_t *base, ptrdiff_t bstride, vfloat64m1_t v0, vfloat64m1_t v1, size_t vl) {
  return __riscv_vssseg2e64_v_f64m1(base, bstride, v0, v1, vl);
}

void test_vssseg2e64_v_f64m2(float64_t *base, ptrdiff_t bstride, vfloat64m2_t v0, vfloat64m2_t v1, size_t vl) {
  return __riscv_vssseg2e64_v_f64m2(base, bstride, v0, v1, vl);
}

void test_vssseg2e64_v_f64m4(float64_t *base, ptrdiff_t bstride, vfloat64m4_t v0, vfloat64m4_t v1, size_t vl) {
  return __riscv_vssseg2e64_v_f64m4(base, bstride, v0, v1, vl);
}

void test_vssseg2e64_v_i64m1(int64_t *base, ptrdiff_t bstride, vint64m1_t v0, vint64m1_t v1, size_t vl) {
  return __riscv_vssseg2e64_v_i64m1(base, bstride, v0, v1, vl);
}

void test_vssseg2e64_v_i64m2(int64_t *base, ptrdiff_t bstride, vint64m2_t v0, vint64m2_t v1, size_t vl) {
  return __riscv_vssseg2e64_v_i64m2(base, bstride, v0, v1, vl);
}

void test_vssseg2e64_v_i64m4(int64_t *base, ptrdiff_t bstride, vint64m4_t v0, vint64m4_t v1, size_t vl) {
  return __riscv_vssseg2e64_v_i64m4(base, bstride, v0, v1, vl);
}

void test_vssseg2e64_v_u64m1(uint64_t *base, ptrdiff_t bstride, vuint64m1_t v0, vuint64m1_t v1, size_t vl) {
  return __riscv_vssseg2e64_v_u64m1(base, bstride, v0, v1, vl);
}

void test_vssseg2e64_v_u64m2(uint64_t *base, ptrdiff_t bstride, vuint64m2_t v0, vuint64m2_t v1, size_t vl) {
  return __riscv_vssseg2e64_v_u64m2(base, bstride, v0, v1, vl);
}

void test_vssseg2e64_v_u64m4(uint64_t *base, ptrdiff_t bstride, vuint64m4_t v0, vuint64m4_t v1, size_t vl) {
  return __riscv_vssseg2e64_v_u64m4(base, bstride, v0, v1, vl);
}

void test_vssseg2e64_v_f64m1_m(vbool64_t mask, float64_t *base, ptrdiff_t bstride, vfloat64m1_t v0, vfloat64m1_t v1, size_t vl) {
  return __riscv_vssseg2e64_v_f64m1_m(mask, base, bstride, v0, v1, vl);
}

void test_vssseg2e64_v_f64m2_m(vbool32_t mask, float64_t *base, ptrdiff_t bstride, vfloat64m2_t v0, vfloat64m2_t v1, size_t vl) {
  return __riscv_vssseg2e64_v_f64m2_m(mask, base, bstride, v0, v1, vl);
}

void test_vssseg2e64_v_f64m4_m(vbool16_t mask, float64_t *base, ptrdiff_t bstride, vfloat64m4_t v0, vfloat64m4_t v1, size_t vl) {
  return __riscv_vssseg2e64_v_f64m4_m(mask, base, bstride, v0, v1, vl);
}

void test_vssseg2e64_v_i64m1_m(vbool64_t mask, int64_t *base, ptrdiff_t bstride, vint64m1_t v0, vint64m1_t v1, size_t vl) {
  return __riscv_vssseg2e64_v_i64m1_m(mask, base, bstride, v0, v1, vl);
}

void test_vssseg2e64_v_i64m2_m(vbool32_t mask, int64_t *base, ptrdiff_t bstride, vint64m2_t v0, vint64m2_t v1, size_t vl) {
  return __riscv_vssseg2e64_v_i64m2_m(mask, base, bstride, v0, v1, vl);
}

void test_vssseg2e64_v_i64m4_m(vbool16_t mask, int64_t *base, ptrdiff_t bstride, vint64m4_t v0, vint64m4_t v1, size_t vl) {
  return __riscv_vssseg2e64_v_i64m4_m(mask, base, bstride, v0, v1, vl);
}

void test_vssseg2e64_v_u64m1_m(vbool64_t mask, uint64_t *base, ptrdiff_t bstride, vuint64m1_t v0, vuint64m1_t v1, size_t vl) {
  return __riscv_vssseg2e64_v_u64m1_m(mask, base, bstride, v0, v1, vl);
}

void test_vssseg2e64_v_u64m2_m(vbool32_t mask, uint64_t *base, ptrdiff_t bstride, vuint64m2_t v0, vuint64m2_t v1, size_t vl) {
  return __riscv_vssseg2e64_v_u64m2_m(mask, base, bstride, v0, v1, vl);
}

void test_vssseg2e64_v_u64m4_m(vbool16_t mask, uint64_t *base, ptrdiff_t bstride, vuint64m4_t v0, vuint64m4_t v1, size_t vl) {
  return __riscv_vssseg2e64_v_u64m4_m(mask, base, bstride, v0, v1, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*[a-x0-9]+,\s*e[0-9]+,\s*m[f]?[1248],\s*t[au],\s*m[au]\s+vssseg2e64\.[, a-x0-9()]+} 18 } } */
