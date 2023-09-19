#include <riscv_vector.h>
#include <stdint.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
vfloat64m1x6_t test_vlseg6e64ff_v_f64m1x6_tu(vfloat64m1x6_t maskedoff_tuple,
                                             const float64_t *base,
                                             size_t *new_vl, size_t vl) {
  return __riscv_vlseg6e64ff_v_f64m1x6_tu(maskedoff_tuple, base, new_vl, vl);
}

vint64m1x6_t test_vlseg6e64ff_v_i64m1x6_tu(vint64m1x6_t maskedoff_tuple,
                                           const int64_t *base, size_t *new_vl,
                                           size_t vl) {
  return __riscv_vlseg6e64ff_v_i64m1x6_tu(maskedoff_tuple, base, new_vl, vl);
}

vuint64m1x6_t test_vlseg6e64ff_v_u64m1x6_tu(vuint64m1x6_t maskedoff_tuple,
                                            const uint64_t *base,
                                            size_t *new_vl, size_t vl) {
  return __riscv_vlseg6e64ff_v_u64m1x6_tu(maskedoff_tuple, base, new_vl, vl);
}

vfloat64m1x6_t test_vlseg6e64ff_v_f64m1x6_tum(vbool64_t mask,
                                              vfloat64m1x6_t maskedoff_tuple,
                                              const float64_t *base,
                                              size_t *new_vl, size_t vl) {
  return __riscv_vlseg6e64ff_v_f64m1x6_tum(mask, maskedoff_tuple, base, new_vl,
                                           vl);
}

vint64m1x6_t test_vlseg6e64ff_v_i64m1x6_tum(vbool64_t mask,
                                            vint64m1x6_t maskedoff_tuple,
                                            const int64_t *base, size_t *new_vl,
                                            size_t vl) {
  return __riscv_vlseg6e64ff_v_i64m1x6_tum(mask, maskedoff_tuple, base, new_vl,
                                           vl);
}

vuint64m1x6_t test_vlseg6e64ff_v_u64m1x6_tum(vbool64_t mask,
                                             vuint64m1x6_t maskedoff_tuple,
                                             const uint64_t *base,
                                             size_t *new_vl, size_t vl) {
  return __riscv_vlseg6e64ff_v_u64m1x6_tum(mask, maskedoff_tuple, base, new_vl,
                                           vl);
}

vfloat64m1x6_t test_vlseg6e64ff_v_f64m1x6_tumu(vbool64_t mask,
                                               vfloat64m1x6_t maskedoff_tuple,
                                               const float64_t *base,
                                               size_t *new_vl, size_t vl) {
  return __riscv_vlseg6e64ff_v_f64m1x6_tumu(mask, maskedoff_tuple, base, new_vl,
                                            vl);
}

vint64m1x6_t test_vlseg6e64ff_v_i64m1x6_tumu(vbool64_t mask,
                                             vint64m1x6_t maskedoff_tuple,
                                             const int64_t *base,
                                             size_t *new_vl, size_t vl) {
  return __riscv_vlseg6e64ff_v_i64m1x6_tumu(mask, maskedoff_tuple, base, new_vl,
                                            vl);
}

vuint64m1x6_t test_vlseg6e64ff_v_u64m1x6_tumu(vbool64_t mask,
                                              vuint64m1x6_t maskedoff_tuple,
                                              const uint64_t *base,
                                              size_t *new_vl, size_t vl) {
  return __riscv_vlseg6e64ff_v_u64m1x6_tumu(mask, maskedoff_tuple, base, new_vl,
                                            vl);
}

vfloat64m1x6_t test_vlseg6e64ff_v_f64m1x6_mu(vbool64_t mask,
                                             vfloat64m1x6_t maskedoff_tuple,
                                             const float64_t *base,
                                             size_t *new_vl, size_t vl) {
  return __riscv_vlseg6e64ff_v_f64m1x6_mu(mask, maskedoff_tuple, base, new_vl,
                                          vl);
}

vint64m1x6_t test_vlseg6e64ff_v_i64m1x6_mu(vbool64_t mask,
                                           vint64m1x6_t maskedoff_tuple,
                                           const int64_t *base, size_t *new_vl,
                                           size_t vl) {
  return __riscv_vlseg6e64ff_v_i64m1x6_mu(mask, maskedoff_tuple, base, new_vl,
                                          vl);
}

vuint64m1x6_t test_vlseg6e64ff_v_u64m1x6_mu(vbool64_t mask,
                                            vuint64m1x6_t maskedoff_tuple,
                                            const uint64_t *base,
                                            size_t *new_vl, size_t vl) {
  return __riscv_vlseg6e64ff_v_u64m1x6_mu(mask, maskedoff_tuple, base, new_vl,
                                          vl);
}
