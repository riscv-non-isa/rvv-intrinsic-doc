#include <stdint.h>
#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;

void test_vlseg3e64ff_v_f64m1_m(vfloat64m1_t *v0, vfloat64m1_t *v1, vfloat64m1_t *v2, vbool64_t mask, const float64_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg3e64ff(v0, v1, v2, mask, base, new_vl, vl);
}

void test_vlseg3e64ff_v_f64m2_m(vfloat64m2_t *v0, vfloat64m2_t *v1, vfloat64m2_t *v2, vbool32_t mask, const float64_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg3e64ff(v0, v1, v2, mask, base, new_vl, vl);
}

void test_vlseg3e64ff_v_i64m1_m(vint64m1_t *v0, vint64m1_t *v1, vint64m1_t *v2, vbool64_t mask, const int64_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg3e64ff(v0, v1, v2, mask, base, new_vl, vl);
}

void test_vlseg3e64ff_v_i64m2_m(vint64m2_t *v0, vint64m2_t *v1, vint64m2_t *v2, vbool32_t mask, const int64_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg3e64ff(v0, v1, v2, mask, base, new_vl, vl);
}

void test_vlseg3e64ff_v_u64m1_m(vuint64m1_t *v0, vuint64m1_t *v1, vuint64m1_t *v2, vbool64_t mask, const uint64_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg3e64ff(v0, v1, v2, mask, base, new_vl, vl);
}

void test_vlseg3e64ff_v_u64m2_m(vuint64m2_t *v0, vuint64m2_t *v1, vuint64m2_t *v2, vbool32_t mask, const uint64_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg3e64ff(v0, v1, v2, mask, base, new_vl, vl);
}
