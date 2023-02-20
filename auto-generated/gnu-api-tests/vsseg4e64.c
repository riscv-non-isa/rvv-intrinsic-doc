/* { dg-do compile } */
/* { dg-options "-march=rv64gcv -mabi=lp64d -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include <riscv_vector.h>

void test_vsseg4e64_v_f64m1(float64_t *base, vfloat64m1_t v0, vfloat64m1_t v1, vfloat64m1_t v2, vfloat64m1_t v3, size_t vl) {
  return __riscv_vsseg4e64_v_f64m1(base, v0, v1, v2, v3, vl);
}

void test_vsseg4e64_v_f64m2(float64_t *base, vfloat64m2_t v0, vfloat64m2_t v1, vfloat64m2_t v2, vfloat64m2_t v3, size_t vl) {
  return __riscv_vsseg4e64_v_f64m2(base, v0, v1, v2, v3, vl);
}

void test_vsseg4e64_v_i64m1(int64_t *base, vint64m1_t v0, vint64m1_t v1, vint64m1_t v2, vint64m1_t v3, size_t vl) {
  return __riscv_vsseg4e64_v_i64m1(base, v0, v1, v2, v3, vl);
}

void test_vsseg4e64_v_i64m2(int64_t *base, vint64m2_t v0, vint64m2_t v1, vint64m2_t v2, vint64m2_t v3, size_t vl) {
  return __riscv_vsseg4e64_v_i64m2(base, v0, v1, v2, v3, vl);
}

void test_vsseg4e64_v_u64m1(uint64_t *base, vuint64m1_t v0, vuint64m1_t v1, vuint64m1_t v2, vuint64m1_t v3, size_t vl) {
  return __riscv_vsseg4e64_v_u64m1(base, v0, v1, v2, v3, vl);
}

void test_vsseg4e64_v_u64m2(uint64_t *base, vuint64m2_t v0, vuint64m2_t v1, vuint64m2_t v2, vuint64m2_t v3, size_t vl) {
  return __riscv_vsseg4e64_v_u64m2(base, v0, v1, v2, v3, vl);
}

void test_vsseg4e64_v_f64m1_m(vbool64_t mask, float64_t *base, vfloat64m1_t v0, vfloat64m1_t v1, vfloat64m1_t v2, vfloat64m1_t v3, size_t vl) {
  return __riscv_vsseg4e64_v_f64m1_m(mask, base, v0, v1, v2, v3, vl);
}

void test_vsseg4e64_v_f64m2_m(vbool32_t mask, float64_t *base, vfloat64m2_t v0, vfloat64m2_t v1, vfloat64m2_t v2, vfloat64m2_t v3, size_t vl) {
  return __riscv_vsseg4e64_v_f64m2_m(mask, base, v0, v1, v2, v3, vl);
}

void test_vsseg4e64_v_i64m1_m(vbool64_t mask, int64_t *base, vint64m1_t v0, vint64m1_t v1, vint64m1_t v2, vint64m1_t v3, size_t vl) {
  return __riscv_vsseg4e64_v_i64m1_m(mask, base, v0, v1, v2, v3, vl);
}

void test_vsseg4e64_v_i64m2_m(vbool32_t mask, int64_t *base, vint64m2_t v0, vint64m2_t v1, vint64m2_t v2, vint64m2_t v3, size_t vl) {
  return __riscv_vsseg4e64_v_i64m2_m(mask, base, v0, v1, v2, v3, vl);
}

void test_vsseg4e64_v_u64m1_m(vbool64_t mask, uint64_t *base, vuint64m1_t v0, vuint64m1_t v1, vuint64m1_t v2, vuint64m1_t v3, size_t vl) {
  return __riscv_vsseg4e64_v_u64m1_m(mask, base, v0, v1, v2, v3, vl);
}

void test_vsseg4e64_v_u64m2_m(vbool32_t mask, uint64_t *base, vuint64m2_t v0, vuint64m2_t v1, vuint64m2_t v2, vuint64m2_t v3, size_t vl) {
  return __riscv_vsseg4e64_v_u64m2_m(mask, base, v0, v1, v2, v3, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*[a-x0-9]+,\s*e[0-9]+,\s*m[f]?[1248],\s*t[au],\s*m[au]\s+vsseg4e64\.[, a-x0-9()]+} 12 } } */
