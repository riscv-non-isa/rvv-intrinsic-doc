#include <stdint.h>
#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
void test_vsseg4e64_v_f64m1x4(float64_t *base, vfloat64m1x4_t v_tuple, size_t vl) {
  return __riscv_vsseg4e64(base, v_tuple, vl);
}

void test_vsseg4e64_v_f64m2x4(float64_t *base, vfloat64m2x4_t v_tuple, size_t vl) {
  return __riscv_vsseg4e64(base, v_tuple, vl);
}

void test_vsseg4e64_v_i64m1x4(int64_t *base, vint64m1x4_t v_tuple, size_t vl) {
  return __riscv_vsseg4e64(base, v_tuple, vl);
}

void test_vsseg4e64_v_i64m2x4(int64_t *base, vint64m2x4_t v_tuple, size_t vl) {
  return __riscv_vsseg4e64(base, v_tuple, vl);
}

void test_vsseg4e64_v_u64m1x4(uint64_t *base, vuint64m1x4_t v_tuple, size_t vl) {
  return __riscv_vsseg4e64(base, v_tuple, vl);
}

void test_vsseg4e64_v_u64m2x4(uint64_t *base, vuint64m2x4_t v_tuple, size_t vl) {
  return __riscv_vsseg4e64(base, v_tuple, vl);
}

void test_vsseg4e64_v_f64m1x4_m(vbool64_t mask, float64_t *base, vfloat64m1x4_t v_tuple, size_t vl) {
  return __riscv_vsseg4e64(mask, base, v_tuple, vl);
}

void test_vsseg4e64_v_f64m2x4_m(vbool32_t mask, float64_t *base, vfloat64m2x4_t v_tuple, size_t vl) {
  return __riscv_vsseg4e64(mask, base, v_tuple, vl);
}

void test_vsseg4e64_v_i64m1x4_m(vbool64_t mask, int64_t *base, vint64m1x4_t v_tuple, size_t vl) {
  return __riscv_vsseg4e64(mask, base, v_tuple, vl);
}

void test_vsseg4e64_v_i64m2x4_m(vbool32_t mask, int64_t *base, vint64m2x4_t v_tuple, size_t vl) {
  return __riscv_vsseg4e64(mask, base, v_tuple, vl);
}

void test_vsseg4e64_v_u64m1x4_m(vbool64_t mask, uint64_t *base, vuint64m1x4_t v_tuple, size_t vl) {
  return __riscv_vsseg4e64(mask, base, v_tuple, vl);
}

void test_vsseg4e64_v_u64m2x4_m(vbool32_t mask, uint64_t *base, vuint64m2x4_t v_tuple, size_t vl) {
  return __riscv_vsseg4e64(mask, base, v_tuple, vl);
}

