#include <riscv_vector.h>
#include <stdint.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
vfloat64m1x6_t test_vlseg6e64_v_f64m1x6(const float64_t *base, size_t vl) {
  return __riscv_vlseg6e64_v_f64m1x6(base, vl);
}

vint64m1x6_t test_vlseg6e64_v_i64m1x6(const int64_t *base, size_t vl) {
  return __riscv_vlseg6e64_v_i64m1x6(base, vl);
}

vuint64m1x6_t test_vlseg6e64_v_u64m1x6(const uint64_t *base, size_t vl) {
  return __riscv_vlseg6e64_v_u64m1x6(base, vl);
}

vfloat64m1x6_t test_vlseg6e64_v_f64m1x6_m(vbool64_t mask, const float64_t *base,
                                          size_t vl) {
  return __riscv_vlseg6e64_v_f64m1x6_m(mask, base, vl);
}

vint64m1x6_t test_vlseg6e64_v_i64m1x6_m(vbool64_t mask, const int64_t *base,
                                        size_t vl) {
  return __riscv_vlseg6e64_v_i64m1x6_m(mask, base, vl);
}

vuint64m1x6_t test_vlseg6e64_v_u64m1x6_m(vbool64_t mask, const uint64_t *base,
                                         size_t vl) {
  return __riscv_vlseg6e64_v_u64m1x6_m(mask, base, vl);
}
