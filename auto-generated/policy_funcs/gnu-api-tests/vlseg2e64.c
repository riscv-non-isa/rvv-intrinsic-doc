/* { dg-do compile } */
/* { dg-options "-march=rv64gcv -mabi=lp64d -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
void test_vlseg2e64_v_f64m1_tu(vfloat64m1_t *v0, vfloat64m1_t *v1, vfloat64m1_t maskedoff0, vfloat64m1_t maskedoff1, const float64_t *base, size_t vl) {
  return __riscv_vlseg2e64_v_f64m1_tu(v0, v1, maskedoff0, maskedoff1, base, vl);
}

void test_vlseg2e64_v_f64m2_tu(vfloat64m2_t *v0, vfloat64m2_t *v1, vfloat64m2_t maskedoff0, vfloat64m2_t maskedoff1, const float64_t *base, size_t vl) {
  return __riscv_vlseg2e64_v_f64m2_tu(v0, v1, maskedoff0, maskedoff1, base, vl);
}

void test_vlseg2e64_v_f64m4_tu(vfloat64m4_t *v0, vfloat64m4_t *v1, vfloat64m4_t maskedoff0, vfloat64m4_t maskedoff1, const float64_t *base, size_t vl) {
  return __riscv_vlseg2e64_v_f64m4_tu(v0, v1, maskedoff0, maskedoff1, base, vl);
}

void test_vlseg2e64_v_i64m1_tu(vint64m1_t *v0, vint64m1_t *v1, vint64m1_t maskedoff0, vint64m1_t maskedoff1, const int64_t *base, size_t vl) {
  return __riscv_vlseg2e64_v_i64m1_tu(v0, v1, maskedoff0, maskedoff1, base, vl);
}

void test_vlseg2e64_v_i64m2_tu(vint64m2_t *v0, vint64m2_t *v1, vint64m2_t maskedoff0, vint64m2_t maskedoff1, const int64_t *base, size_t vl) {
  return __riscv_vlseg2e64_v_i64m2_tu(v0, v1, maskedoff0, maskedoff1, base, vl);
}

void test_vlseg2e64_v_i64m4_tu(vint64m4_t *v0, vint64m4_t *v1, vint64m4_t maskedoff0, vint64m4_t maskedoff1, const int64_t *base, size_t vl) {
  return __riscv_vlseg2e64_v_i64m4_tu(v0, v1, maskedoff0, maskedoff1, base, vl);
}

void test_vlseg2e64_v_u64m1_tu(vuint64m1_t *v0, vuint64m1_t *v1, vuint64m1_t maskedoff0, vuint64m1_t maskedoff1, const uint64_t *base, size_t vl) {
  return __riscv_vlseg2e64_v_u64m1_tu(v0, v1, maskedoff0, maskedoff1, base, vl);
}

void test_vlseg2e64_v_u64m2_tu(vuint64m2_t *v0, vuint64m2_t *v1, vuint64m2_t maskedoff0, vuint64m2_t maskedoff1, const uint64_t *base, size_t vl) {
  return __riscv_vlseg2e64_v_u64m2_tu(v0, v1, maskedoff0, maskedoff1, base, vl);
}

void test_vlseg2e64_v_u64m4_tu(vuint64m4_t *v0, vuint64m4_t *v1, vuint64m4_t maskedoff0, vuint64m4_t maskedoff1, const uint64_t *base, size_t vl) {
  return __riscv_vlseg2e64_v_u64m4_tu(v0, v1, maskedoff0, maskedoff1, base, vl);
}

void test_vlseg2e64_v_f64m1_tum(vfloat64m1_t *v0, vfloat64m1_t *v1, vbool64_t mask, vfloat64m1_t maskedoff0, vfloat64m1_t maskedoff1, const float64_t *base, size_t vl) {
  return __riscv_vlseg2e64_v_f64m1_tum(v0, v1, mask, maskedoff0, maskedoff1, base, vl);
}

void test_vlseg2e64_v_f64m2_tum(vfloat64m2_t *v0, vfloat64m2_t *v1, vbool32_t mask, vfloat64m2_t maskedoff0, vfloat64m2_t maskedoff1, const float64_t *base, size_t vl) {
  return __riscv_vlseg2e64_v_f64m2_tum(v0, v1, mask, maskedoff0, maskedoff1, base, vl);
}

void test_vlseg2e64_v_f64m4_tum(vfloat64m4_t *v0, vfloat64m4_t *v1, vbool16_t mask, vfloat64m4_t maskedoff0, vfloat64m4_t maskedoff1, const float64_t *base, size_t vl) {
  return __riscv_vlseg2e64_v_f64m4_tum(v0, v1, mask, maskedoff0, maskedoff1, base, vl);
}

void test_vlseg2e64_v_i64m1_tum(vint64m1_t *v0, vint64m1_t *v1, vbool64_t mask, vint64m1_t maskedoff0, vint64m1_t maskedoff1, const int64_t *base, size_t vl) {
  return __riscv_vlseg2e64_v_i64m1_tum(v0, v1, mask, maskedoff0, maskedoff1, base, vl);
}

void test_vlseg2e64_v_i64m2_tum(vint64m2_t *v0, vint64m2_t *v1, vbool32_t mask, vint64m2_t maskedoff0, vint64m2_t maskedoff1, const int64_t *base, size_t vl) {
  return __riscv_vlseg2e64_v_i64m2_tum(v0, v1, mask, maskedoff0, maskedoff1, base, vl);
}

void test_vlseg2e64_v_i64m4_tum(vint64m4_t *v0, vint64m4_t *v1, vbool16_t mask, vint64m4_t maskedoff0, vint64m4_t maskedoff1, const int64_t *base, size_t vl) {
  return __riscv_vlseg2e64_v_i64m4_tum(v0, v1, mask, maskedoff0, maskedoff1, base, vl);
}

void test_vlseg2e64_v_u64m1_tum(vuint64m1_t *v0, vuint64m1_t *v1, vbool64_t mask, vuint64m1_t maskedoff0, vuint64m1_t maskedoff1, const uint64_t *base, size_t vl) {
  return __riscv_vlseg2e64_v_u64m1_tum(v0, v1, mask, maskedoff0, maskedoff1, base, vl);
}

void test_vlseg2e64_v_u64m2_tum(vuint64m2_t *v0, vuint64m2_t *v1, vbool32_t mask, vuint64m2_t maskedoff0, vuint64m2_t maskedoff1, const uint64_t *base, size_t vl) {
  return __riscv_vlseg2e64_v_u64m2_tum(v0, v1, mask, maskedoff0, maskedoff1, base, vl);
}

void test_vlseg2e64_v_u64m4_tum(vuint64m4_t *v0, vuint64m4_t *v1, vbool16_t mask, vuint64m4_t maskedoff0, vuint64m4_t maskedoff1, const uint64_t *base, size_t vl) {
  return __riscv_vlseg2e64_v_u64m4_tum(v0, v1, mask, maskedoff0, maskedoff1, base, vl);
}

void test_vlseg2e64_v_f64m1_tumu(vfloat64m1_t *v0, vfloat64m1_t *v1, vbool64_t mask, vfloat64m1_t maskedoff0, vfloat64m1_t maskedoff1, const float64_t *base, size_t vl) {
  return __riscv_vlseg2e64_v_f64m1_tumu(v0, v1, mask, maskedoff0, maskedoff1, base, vl);
}

void test_vlseg2e64_v_f64m2_tumu(vfloat64m2_t *v0, vfloat64m2_t *v1, vbool32_t mask, vfloat64m2_t maskedoff0, vfloat64m2_t maskedoff1, const float64_t *base, size_t vl) {
  return __riscv_vlseg2e64_v_f64m2_tumu(v0, v1, mask, maskedoff0, maskedoff1, base, vl);
}

void test_vlseg2e64_v_f64m4_tumu(vfloat64m4_t *v0, vfloat64m4_t *v1, vbool16_t mask, vfloat64m4_t maskedoff0, vfloat64m4_t maskedoff1, const float64_t *base, size_t vl) {
  return __riscv_vlseg2e64_v_f64m4_tumu(v0, v1, mask, maskedoff0, maskedoff1, base, vl);
}

void test_vlseg2e64_v_i64m1_tumu(vint64m1_t *v0, vint64m1_t *v1, vbool64_t mask, vint64m1_t maskedoff0, vint64m1_t maskedoff1, const int64_t *base, size_t vl) {
  return __riscv_vlseg2e64_v_i64m1_tumu(v0, v1, mask, maskedoff0, maskedoff1, base, vl);
}

void test_vlseg2e64_v_i64m2_tumu(vint64m2_t *v0, vint64m2_t *v1, vbool32_t mask, vint64m2_t maskedoff0, vint64m2_t maskedoff1, const int64_t *base, size_t vl) {
  return __riscv_vlseg2e64_v_i64m2_tumu(v0, v1, mask, maskedoff0, maskedoff1, base, vl);
}

void test_vlseg2e64_v_i64m4_tumu(vint64m4_t *v0, vint64m4_t *v1, vbool16_t mask, vint64m4_t maskedoff0, vint64m4_t maskedoff1, const int64_t *base, size_t vl) {
  return __riscv_vlseg2e64_v_i64m4_tumu(v0, v1, mask, maskedoff0, maskedoff1, base, vl);
}

void test_vlseg2e64_v_u64m1_tumu(vuint64m1_t *v0, vuint64m1_t *v1, vbool64_t mask, vuint64m1_t maskedoff0, vuint64m1_t maskedoff1, const uint64_t *base, size_t vl) {
  return __riscv_vlseg2e64_v_u64m1_tumu(v0, v1, mask, maskedoff0, maskedoff1, base, vl);
}

void test_vlseg2e64_v_u64m2_tumu(vuint64m2_t *v0, vuint64m2_t *v1, vbool32_t mask, vuint64m2_t maskedoff0, vuint64m2_t maskedoff1, const uint64_t *base, size_t vl) {
  return __riscv_vlseg2e64_v_u64m2_tumu(v0, v1, mask, maskedoff0, maskedoff1, base, vl);
}

void test_vlseg2e64_v_u64m4_tumu(vuint64m4_t *v0, vuint64m4_t *v1, vbool16_t mask, vuint64m4_t maskedoff0, vuint64m4_t maskedoff1, const uint64_t *base, size_t vl) {
  return __riscv_vlseg2e64_v_u64m4_tumu(v0, v1, mask, maskedoff0, maskedoff1, base, vl);
}

void test_vlseg2e64_v_f64m1_mu(vfloat64m1_t *v0, vfloat64m1_t *v1, vbool64_t mask, vfloat64m1_t maskedoff0, vfloat64m1_t maskedoff1, const float64_t *base, size_t vl) {
  return __riscv_vlseg2e64_v_f64m1_mu(v0, v1, mask, maskedoff0, maskedoff1, base, vl);
}

void test_vlseg2e64_v_f64m2_mu(vfloat64m2_t *v0, vfloat64m2_t *v1, vbool32_t mask, vfloat64m2_t maskedoff0, vfloat64m2_t maskedoff1, const float64_t *base, size_t vl) {
  return __riscv_vlseg2e64_v_f64m2_mu(v0, v1, mask, maskedoff0, maskedoff1, base, vl);
}

void test_vlseg2e64_v_f64m4_mu(vfloat64m4_t *v0, vfloat64m4_t *v1, vbool16_t mask, vfloat64m4_t maskedoff0, vfloat64m4_t maskedoff1, const float64_t *base, size_t vl) {
  return __riscv_vlseg2e64_v_f64m4_mu(v0, v1, mask, maskedoff0, maskedoff1, base, vl);
}

void test_vlseg2e64_v_i64m1_mu(vint64m1_t *v0, vint64m1_t *v1, vbool64_t mask, vint64m1_t maskedoff0, vint64m1_t maskedoff1, const int64_t *base, size_t vl) {
  return __riscv_vlseg2e64_v_i64m1_mu(v0, v1, mask, maskedoff0, maskedoff1, base, vl);
}

void test_vlseg2e64_v_i64m2_mu(vint64m2_t *v0, vint64m2_t *v1, vbool32_t mask, vint64m2_t maskedoff0, vint64m2_t maskedoff1, const int64_t *base, size_t vl) {
  return __riscv_vlseg2e64_v_i64m2_mu(v0, v1, mask, maskedoff0, maskedoff1, base, vl);
}

void test_vlseg2e64_v_i64m4_mu(vint64m4_t *v0, vint64m4_t *v1, vbool16_t mask, vint64m4_t maskedoff0, vint64m4_t maskedoff1, const int64_t *base, size_t vl) {
  return __riscv_vlseg2e64_v_i64m4_mu(v0, v1, mask, maskedoff0, maskedoff1, base, vl);
}

void test_vlseg2e64_v_u64m1_mu(vuint64m1_t *v0, vuint64m1_t *v1, vbool64_t mask, vuint64m1_t maskedoff0, vuint64m1_t maskedoff1, const uint64_t *base, size_t vl) {
  return __riscv_vlseg2e64_v_u64m1_mu(v0, v1, mask, maskedoff0, maskedoff1, base, vl);
}

void test_vlseg2e64_v_u64m2_mu(vuint64m2_t *v0, vuint64m2_t *v1, vbool32_t mask, vuint64m2_t maskedoff0, vuint64m2_t maskedoff1, const uint64_t *base, size_t vl) {
  return __riscv_vlseg2e64_v_u64m2_mu(v0, v1, mask, maskedoff0, maskedoff1, base, vl);
}

void test_vlseg2e64_v_u64m4_mu(vuint64m4_t *v0, vuint64m4_t *v1, vbool16_t mask, vuint64m4_t maskedoff0, vuint64m4_t maskedoff1, const uint64_t *base, size_t vl) {
  return __riscv_vlseg2e64_v_u64m4_mu(v0, v1, mask, maskedoff0, maskedoff1, base, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*[a-x0-9]+,\s*e[0-9]+,\s*m[f]?[1248],\s*t[au],\s*m[au]\s+vlseg2e64\.[,\sa-x0-9()]+} 36 } } */
