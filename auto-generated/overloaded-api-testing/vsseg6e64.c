#include <stdint.h>
#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
void test_vsseg6e64_v_f64m1x6(float64_t *base, vfloat64m1x6_t v_tuple, size_t vl) {
  return __riscv_vsseg6e64(base, v_tuple, vl);
}

void test_vsseg6e64_v_i64m1x6(int64_t *base, vint64m1x6_t v_tuple, size_t vl) {
  return __riscv_vsseg6e64(base, v_tuple, vl);
}

void test_vsseg6e64_v_u64m1x6(uint64_t *base, vuint64m1x6_t v_tuple, size_t vl) {
  return __riscv_vsseg6e64(base, v_tuple, vl);
}

void test_vsseg6e64_v_f64m1x6_m(vbool64_t mask, float64_t *base, vfloat64m1x6_t v_tuple, size_t vl) {
  return __riscv_vsseg6e64(mask, base, v_tuple, vl);
}

void test_vsseg6e64_v_i64m1x6_m(vbool64_t mask, int64_t *base, vint64m1x6_t v_tuple, size_t vl) {
  return __riscv_vsseg6e64(mask, base, v_tuple, vl);
}

void test_vsseg6e64_v_u64m1x6_m(vbool64_t mask, uint64_t *base, vuint64m1x6_t v_tuple, size_t vl) {
  return __riscv_vsseg6e64(mask, base, v_tuple, vl);
}

