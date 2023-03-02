/* { dg-do compile } */
/* { dg-options "-march=rv64gcv -mabi=lp64d -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
void test_vlsseg7e64_v_f64m1(vfloat64m1_t *v0, vfloat64m1_t *v1, vfloat64m1_t *v2, vfloat64m1_t *v3, vfloat64m1_t *v4, vfloat64m1_t *v5, vfloat64m1_t *v6, const float64_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg7e64_v_f64m1(v0, v1, v2, v3, v4, v5, v6, base, bstride, vl);
}

void test_vlsseg7e64_v_i64m1(vint64m1_t *v0, vint64m1_t *v1, vint64m1_t *v2, vint64m1_t *v3, vint64m1_t *v4, vint64m1_t *v5, vint64m1_t *v6, const int64_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg7e64_v_i64m1(v0, v1, v2, v3, v4, v5, v6, base, bstride, vl);
}

void test_vlsseg7e64_v_u64m1(vuint64m1_t *v0, vuint64m1_t *v1, vuint64m1_t *v2, vuint64m1_t *v3, vuint64m1_t *v4, vuint64m1_t *v5, vuint64m1_t *v6, const uint64_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg7e64_v_u64m1(v0, v1, v2, v3, v4, v5, v6, base, bstride, vl);
}

void test_vlsseg7e64_v_f64m1_m(vfloat64m1_t *v0, vfloat64m1_t *v1, vfloat64m1_t *v2, vfloat64m1_t *v3, vfloat64m1_t *v4, vfloat64m1_t *v5, vfloat64m1_t *v6, vbool64_t mask, const float64_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg7e64_v_f64m1_m(v0, v1, v2, v3, v4, v5, v6, mask, base, bstride, vl);
}

void test_vlsseg7e64_v_i64m1_m(vint64m1_t *v0, vint64m1_t *v1, vint64m1_t *v2, vint64m1_t *v3, vint64m1_t *v4, vint64m1_t *v5, vint64m1_t *v6, vbool64_t mask, const int64_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg7e64_v_i64m1_m(v0, v1, v2, v3, v4, v5, v6, mask, base, bstride, vl);
}

void test_vlsseg7e64_v_u64m1_m(vuint64m1_t *v0, vuint64m1_t *v1, vuint64m1_t *v2, vuint64m1_t *v3, vuint64m1_t *v4, vuint64m1_t *v5, vuint64m1_t *v6, vbool64_t mask, const uint64_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg7e64_v_u64m1_m(v0, v1, v2, v3, v4, v5, v6, mask, base, bstride, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*[a-x0-9]+,\s*e[0-9]+,\s*m[f]?[1248],\s*t[au],\s*m[au]\s+vlsseg7e64\.[,\sa-x0-9()]+} 6 } } */
