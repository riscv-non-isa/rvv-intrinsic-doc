/* { dg-do compile } */
/* { dg-options "-march=rv64gcv_zvfh -mabi=lp64d -Wno-psabi -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
void test_vssseg4e64_v_f64m1x4(float64_t *base, ptrdiff_t bstride, vfloat64m1x4_t v_tuple, size_t vl) {
  return __riscv_vssseg4e64(base, bstride, v_tuple, vl);
}

void test_vssseg4e64_v_f64m2x4(float64_t *base, ptrdiff_t bstride, vfloat64m2x4_t v_tuple, size_t vl) {
  return __riscv_vssseg4e64(base, bstride, v_tuple, vl);
}

void test_vssseg4e64_v_i64m1x4(int64_t *base, ptrdiff_t bstride, vint64m1x4_t v_tuple, size_t vl) {
  return __riscv_vssseg4e64(base, bstride, v_tuple, vl);
}

void test_vssseg4e64_v_i64m2x4(int64_t *base, ptrdiff_t bstride, vint64m2x4_t v_tuple, size_t vl) {
  return __riscv_vssseg4e64(base, bstride, v_tuple, vl);
}

void test_vssseg4e64_v_u64m1x4(uint64_t *base, ptrdiff_t bstride, vuint64m1x4_t v_tuple, size_t vl) {
  return __riscv_vssseg4e64(base, bstride, v_tuple, vl);
}

void test_vssseg4e64_v_u64m2x4(uint64_t *base, ptrdiff_t bstride, vuint64m2x4_t v_tuple, size_t vl) {
  return __riscv_vssseg4e64(base, bstride, v_tuple, vl);
}

void test_vssseg4e64_v_f64m1x4_m(vbool64_t mask, float64_t *base, ptrdiff_t bstride, vfloat64m1x4_t v_tuple, size_t vl) {
  return __riscv_vssseg4e64(mask, base, bstride, v_tuple, vl);
}

void test_vssseg4e64_v_f64m2x4_m(vbool32_t mask, float64_t *base, ptrdiff_t bstride, vfloat64m2x4_t v_tuple, size_t vl) {
  return __riscv_vssseg4e64(mask, base, bstride, v_tuple, vl);
}

void test_vssseg4e64_v_i64m1x4_m(vbool64_t mask, int64_t *base, ptrdiff_t bstride, vint64m1x4_t v_tuple, size_t vl) {
  return __riscv_vssseg4e64(mask, base, bstride, v_tuple, vl);
}

void test_vssseg4e64_v_i64m2x4_m(vbool32_t mask, int64_t *base, ptrdiff_t bstride, vint64m2x4_t v_tuple, size_t vl) {
  return __riscv_vssseg4e64(mask, base, bstride, v_tuple, vl);
}

void test_vssseg4e64_v_u64m1x4_m(vbool64_t mask, uint64_t *base, ptrdiff_t bstride, vuint64m1x4_t v_tuple, size_t vl) {
  return __riscv_vssseg4e64(mask, base, bstride, v_tuple, vl);
}

void test_vssseg4e64_v_u64m2x4_m(vbool32_t mask, uint64_t *base, ptrdiff_t bstride, vuint64m2x4_t v_tuple, size_t vl) {
  return __riscv_vssseg4e64(mask, base, bstride, v_tuple, vl);
}

/* { dg-final { scan-assembler-times {vseti?vli\s+[a-z0-9]+,\s*[a-z0-9]+,\s*e[0-9]+,\s*mf?[1248],\s*t[au],\s*m[au]\s+vssseg4e64\.[ivxfswum.]+\s+} 12 } } */
