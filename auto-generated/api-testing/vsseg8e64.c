#include <riscv_vector.h>
#include <stdint.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
void test_vsseg8e64_v_f64m1x8(float64_t *base, vfloat64m1x8_t v_tuple,
                              size_t vl) {
  return __riscv_vsseg8e64_v_f64m1x8(base, v_tuple, vl);
}

void test_vsseg8e64_v_i64m1x8(int64_t *base, vint64m1x8_t v_tuple, size_t vl) {
  return __riscv_vsseg8e64_v_i64m1x8(base, v_tuple, vl);
}

void test_vsseg8e64_v_u64m1x8(uint64_t *base, vuint64m1x8_t v_tuple,
                              size_t vl) {
  return __riscv_vsseg8e64_v_u64m1x8(base, v_tuple, vl);
}

void test_vsseg8e64_v_f64m1x8_m(vbool64_t mask, float64_t *base,
                                vfloat64m1x8_t v_tuple, size_t vl) {
  return __riscv_vsseg8e64_v_f64m1x8_m(mask, base, v_tuple, vl);
}

void test_vsseg8e64_v_i64m1x8_m(vbool64_t mask, int64_t *base,
                                vint64m1x8_t v_tuple, size_t vl) {
  return __riscv_vsseg8e64_v_i64m1x8_m(mask, base, v_tuple, vl);
}

void test_vsseg8e64_v_u64m1x8_m(vbool64_t mask, uint64_t *base,
                                vuint64m1x8_t v_tuple, size_t vl) {
  return __riscv_vsseg8e64_v_u64m1x8_m(mask, base, v_tuple, vl);
}
