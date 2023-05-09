#include <stdint.h>
#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;

void test_vsseg2e64_v_f64m1(float64_t *base, vfloat64m1_t v0, vfloat64m1_t v1, size_t vl) {
  return __riscv_vsseg2e64_v_f64m1(base, v0, v1, vl);
}

void test_vsseg2e64_v_f64m2(float64_t *base, vfloat64m2_t v0, vfloat64m2_t v1, size_t vl) {
  return __riscv_vsseg2e64_v_f64m2(base, v0, v1, vl);
}

void test_vsseg2e64_v_f64m4(float64_t *base, vfloat64m4_t v0, vfloat64m4_t v1, size_t vl) {
  return __riscv_vsseg2e64_v_f64m4(base, v0, v1, vl);
}

void test_vsseg2e64_v_i64m1(int64_t *base, vint64m1_t v0, vint64m1_t v1, size_t vl) {
  return __riscv_vsseg2e64_v_i64m1(base, v0, v1, vl);
}

void test_vsseg2e64_v_i64m2(int64_t *base, vint64m2_t v0, vint64m2_t v1, size_t vl) {
  return __riscv_vsseg2e64_v_i64m2(base, v0, v1, vl);
}

void test_vsseg2e64_v_i64m4(int64_t *base, vint64m4_t v0, vint64m4_t v1, size_t vl) {
  return __riscv_vsseg2e64_v_i64m4(base, v0, v1, vl);
}

void test_vsseg2e64_v_u64m1(uint64_t *base, vuint64m1_t v0, vuint64m1_t v1, size_t vl) {
  return __riscv_vsseg2e64_v_u64m1(base, v0, v1, vl);
}

void test_vsseg2e64_v_u64m2(uint64_t *base, vuint64m2_t v0, vuint64m2_t v1, size_t vl) {
  return __riscv_vsseg2e64_v_u64m2(base, v0, v1, vl);
}

void test_vsseg2e64_v_u64m4(uint64_t *base, vuint64m4_t v0, vuint64m4_t v1, size_t vl) {
  return __riscv_vsseg2e64_v_u64m4(base, v0, v1, vl);
}

void test_vsseg2e64_v_f64m1_m(vbool64_t mask, float64_t *base, vfloat64m1_t v0, vfloat64m1_t v1, size_t vl) {
  return __riscv_vsseg2e64_v_f64m1_m(mask, base, v0, v1, vl);
}

void test_vsseg2e64_v_f64m2_m(vbool32_t mask, float64_t *base, vfloat64m2_t v0, vfloat64m2_t v1, size_t vl) {
  return __riscv_vsseg2e64_v_f64m2_m(mask, base, v0, v1, vl);
}

void test_vsseg2e64_v_f64m4_m(vbool16_t mask, float64_t *base, vfloat64m4_t v0, vfloat64m4_t v1, size_t vl) {
  return __riscv_vsseg2e64_v_f64m4_m(mask, base, v0, v1, vl);
}

void test_vsseg2e64_v_i64m1_m(vbool64_t mask, int64_t *base, vint64m1_t v0, vint64m1_t v1, size_t vl) {
  return __riscv_vsseg2e64_v_i64m1_m(mask, base, v0, v1, vl);
}

void test_vsseg2e64_v_i64m2_m(vbool32_t mask, int64_t *base, vint64m2_t v0, vint64m2_t v1, size_t vl) {
  return __riscv_vsseg2e64_v_i64m2_m(mask, base, v0, v1, vl);
}

void test_vsseg2e64_v_i64m4_m(vbool16_t mask, int64_t *base, vint64m4_t v0, vint64m4_t v1, size_t vl) {
  return __riscv_vsseg2e64_v_i64m4_m(mask, base, v0, v1, vl);
}

void test_vsseg2e64_v_u64m1_m(vbool64_t mask, uint64_t *base, vuint64m1_t v0, vuint64m1_t v1, size_t vl) {
  return __riscv_vsseg2e64_v_u64m1_m(mask, base, v0, v1, vl);
}

void test_vsseg2e64_v_u64m2_m(vbool32_t mask, uint64_t *base, vuint64m2_t v0, vuint64m2_t v1, size_t vl) {
  return __riscv_vsseg2e64_v_u64m2_m(mask, base, v0, v1, vl);
}

void test_vsseg2e64_v_u64m4_m(vbool16_t mask, uint64_t *base, vuint64m4_t v0, vuint64m4_t v1, size_t vl) {
  return __riscv_vsseg2e64_v_u64m4_m(mask, base, v0, v1, vl);
}
