#include <stdint.h>
#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
void test_vlseg2e64_v_f64m1_m(vfloat64m1_t *v0, vfloat64m1_t *v1, vbool64_t mask, const float64_t *base, size_t vl) {
  return __riscv_vlseg2e64(v0, v1, mask, base, vl);
}

void test_vlseg2e64_v_f64m2_m(vfloat64m2_t *v0, vfloat64m2_t *v1, vbool32_t mask, const float64_t *base, size_t vl) {
  return __riscv_vlseg2e64(v0, v1, mask, base, vl);
}

void test_vlseg2e64_v_f64m4_m(vfloat64m4_t *v0, vfloat64m4_t *v1, vbool16_t mask, const float64_t *base, size_t vl) {
  return __riscv_vlseg2e64(v0, v1, mask, base, vl);
}

void test_vlseg2e64_v_i64m1_m(vint64m1_t *v0, vint64m1_t *v1, vbool64_t mask, const int64_t *base, size_t vl) {
  return __riscv_vlseg2e64(v0, v1, mask, base, vl);
}

void test_vlseg2e64_v_i64m2_m(vint64m2_t *v0, vint64m2_t *v1, vbool32_t mask, const int64_t *base, size_t vl) {
  return __riscv_vlseg2e64(v0, v1, mask, base, vl);
}

void test_vlseg2e64_v_i64m4_m(vint64m4_t *v0, vint64m4_t *v1, vbool16_t mask, const int64_t *base, size_t vl) {
  return __riscv_vlseg2e64(v0, v1, mask, base, vl);
}

void test_vlseg2e64_v_u64m1_m(vuint64m1_t *v0, vuint64m1_t *v1, vbool64_t mask, const uint64_t *base, size_t vl) {
  return __riscv_vlseg2e64(v0, v1, mask, base, vl);
}

void test_vlseg2e64_v_u64m2_m(vuint64m2_t *v0, vuint64m2_t *v1, vbool32_t mask, const uint64_t *base, size_t vl) {
  return __riscv_vlseg2e64(v0, v1, mask, base, vl);
}

void test_vlseg2e64_v_u64m4_m(vuint64m4_t *v0, vuint64m4_t *v1, vbool16_t mask, const uint64_t *base, size_t vl) {
  return __riscv_vlseg2e64(v0, v1, mask, base, vl);
}

