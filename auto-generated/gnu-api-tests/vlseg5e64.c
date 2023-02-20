/* { dg-do compile } */
/* { dg-options "-march=rv64gcv -mabi=lp64d -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include <riscv_vector.h>

void test_vlseg5e64_v_f64m1(vfloat64m1_t *v0, vfloat64m1_t *v1, vfloat64m1_t *v2, vfloat64m1_t *v3, vfloat64m1_t *v4, const float64_t *base, size_t vl) {
  return __riscv_vlseg5e64_v_f64m1(v0, v1, v2, v3, v4, base, vl);
}

void test_vlseg5e64_v_i64m1(vint64m1_t *v0, vint64m1_t *v1, vint64m1_t *v2, vint64m1_t *v3, vint64m1_t *v4, const int64_t *base, size_t vl) {
  return __riscv_vlseg5e64_v_i64m1(v0, v1, v2, v3, v4, base, vl);
}

void test_vlseg5e64_v_u64m1(vuint64m1_t *v0, vuint64m1_t *v1, vuint64m1_t *v2, vuint64m1_t *v3, vuint64m1_t *v4, const uint64_t *base, size_t vl) {
  return __riscv_vlseg5e64_v_u64m1(v0, v1, v2, v3, v4, base, vl);
}

void test_vlseg5e64_v_f64m1_m(vfloat64m1_t *v0, vfloat64m1_t *v1, vfloat64m1_t *v2, vfloat64m1_t *v3, vfloat64m1_t *v4, vbool64_t mask, const float64_t *base, size_t vl) {
  return __riscv_vlseg5e64_v_f64m1_m(v0, v1, v2, v3, v4, mask, base, vl);
}

void test_vlseg5e64_v_i64m1_m(vint64m1_t *v0, vint64m1_t *v1, vint64m1_t *v2, vint64m1_t *v3, vint64m1_t *v4, vbool64_t mask, const int64_t *base, size_t vl) {
  return __riscv_vlseg5e64_v_i64m1_m(v0, v1, v2, v3, v4, mask, base, vl);
}

void test_vlseg5e64_v_u64m1_m(vuint64m1_t *v0, vuint64m1_t *v1, vuint64m1_t *v2, vuint64m1_t *v3, vuint64m1_t *v4, vbool64_t mask, const uint64_t *base, size_t vl) {
  return __riscv_vlseg5e64_v_u64m1_m(v0, v1, v2, v3, v4, mask, base, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*[a-x0-9]+,\s*e[0-9]+,\s*m[f]?[1248],\s*t[au],\s*m[au]\s+vlseg5e64\.[, a-x0-9()]+} 6 } } */
