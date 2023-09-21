/* { dg-do compile } */
/* { dg-options "-march=rv64gcv_zvfh -mabi=lp64d -Wno-psabi -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
void test_vssseg7e64_v_f64m1x7(float64_t *base, ptrdiff_t bstride, vfloat64m1x7_t v_tuple, size_t vl) {
  return __riscv_vssseg7e64(base, bstride, v_tuple, vl);
}

void test_vssseg7e64_v_i64m1x7(int64_t *base, ptrdiff_t bstride, vint64m1x7_t v_tuple, size_t vl) {
  return __riscv_vssseg7e64(base, bstride, v_tuple, vl);
}

void test_vssseg7e64_v_u64m1x7(uint64_t *base, ptrdiff_t bstride, vuint64m1x7_t v_tuple, size_t vl) {
  return __riscv_vssseg7e64(base, bstride, v_tuple, vl);
}

void test_vssseg7e64_v_f64m1x7_m(vbool64_t mask, float64_t *base, ptrdiff_t bstride, vfloat64m1x7_t v_tuple, size_t vl) {
  return __riscv_vssseg7e64(mask, base, bstride, v_tuple, vl);
}

void test_vssseg7e64_v_i64m1x7_m(vbool64_t mask, int64_t *base, ptrdiff_t bstride, vint64m1x7_t v_tuple, size_t vl) {
  return __riscv_vssseg7e64(mask, base, bstride, v_tuple, vl);
}

void test_vssseg7e64_v_u64m1x7_m(vbool64_t mask, uint64_t *base, ptrdiff_t bstride, vuint64m1x7_t v_tuple, size_t vl) {
  return __riscv_vssseg7e64(mask, base, bstride, v_tuple, vl);
}

