#include <stdint.h>
#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
vfloat64m1x4_t test_vlseg4e64ff_v_f64m1x4_m(vbool64_t mask, const float64_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg4e64ff(mask, base, new_vl, vl);
}

vfloat64m2x4_t test_vlseg4e64ff_v_f64m2x4_m(vbool32_t mask, const float64_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg4e64ff(mask, base, new_vl, vl);
}

vint64m1x4_t test_vlseg4e64ff_v_i64m1x4_m(vbool64_t mask, const int64_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg4e64ff(mask, base, new_vl, vl);
}

vint64m2x4_t test_vlseg4e64ff_v_i64m2x4_m(vbool32_t mask, const int64_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg4e64ff(mask, base, new_vl, vl);
}

vuint64m1x4_t test_vlseg4e64ff_v_u64m1x4_m(vbool64_t mask, const uint64_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg4e64ff(mask, base, new_vl, vl);
}

vuint64m2x4_t test_vlseg4e64ff_v_u64m2x4_m(vbool32_t mask, const uint64_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg4e64ff(mask, base, new_vl, vl);
}

