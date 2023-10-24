#include <riscv_vector.h>
#include <stdint.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;

vfloat64m1x8_t test_vlseg8e64ff_v_f64m1x8_tu(vfloat64m1x8_t vd,
                                             const float64_t *rs1,
                                             size_t *new_vl, size_t vl) {
  return __riscv_vlseg8e64ff_tu(vd, rs1, new_vl, vl);
}

vint64m1x8_t test_vlseg8e64ff_v_i64m1x8_tu(vint64m1x8_t vd, const int64_t *rs1,
                                           size_t *new_vl, size_t vl) {
  return __riscv_vlseg8e64ff_tu(vd, rs1, new_vl, vl);
}

vuint64m1x8_t test_vlseg8e64ff_v_u64m1x8_tu(vuint64m1x8_t vd,
                                            const uint64_t *rs1, size_t *new_vl,
                                            size_t vl) {
  return __riscv_vlseg8e64ff_tu(vd, rs1, new_vl, vl);
}

vfloat64m1x8_t test_vlseg8e64ff_v_f64m1x8_tum(vbool64_t vm, vfloat64m1x8_t vd,
                                              const float64_t *rs1,
                                              size_t *new_vl, size_t vl) {
  return __riscv_vlseg8e64ff_tum(vm, vd, rs1, new_vl, vl);
}

vint64m1x8_t test_vlseg8e64ff_v_i64m1x8_tum(vbool64_t vm, vint64m1x8_t vd,
                                            const int64_t *rs1, size_t *new_vl,
                                            size_t vl) {
  return __riscv_vlseg8e64ff_tum(vm, vd, rs1, new_vl, vl);
}

vuint64m1x8_t test_vlseg8e64ff_v_u64m1x8_tum(vbool64_t vm, vuint64m1x8_t vd,
                                             const uint64_t *rs1,
                                             size_t *new_vl, size_t vl) {
  return __riscv_vlseg8e64ff_tum(vm, vd, rs1, new_vl, vl);
}

vfloat64m1x8_t test_vlseg8e64ff_v_f64m1x8_tumu(vbool64_t vm, vfloat64m1x8_t vd,
                                               const float64_t *rs1,
                                               size_t *new_vl, size_t vl) {
  return __riscv_vlseg8e64ff_tumu(vm, vd, rs1, new_vl, vl);
}

vint64m1x8_t test_vlseg8e64ff_v_i64m1x8_tumu(vbool64_t vm, vint64m1x8_t vd,
                                             const int64_t *rs1, size_t *new_vl,
                                             size_t vl) {
  return __riscv_vlseg8e64ff_tumu(vm, vd, rs1, new_vl, vl);
}

vuint64m1x8_t test_vlseg8e64ff_v_u64m1x8_tumu(vbool64_t vm, vuint64m1x8_t vd,
                                              const uint64_t *rs1,
                                              size_t *new_vl, size_t vl) {
  return __riscv_vlseg8e64ff_tumu(vm, vd, rs1, new_vl, vl);
}

vfloat64m1x8_t test_vlseg8e64ff_v_f64m1x8_mu(vbool64_t vm, vfloat64m1x8_t vd,
                                             const float64_t *rs1,
                                             size_t *new_vl, size_t vl) {
  return __riscv_vlseg8e64ff_mu(vm, vd, rs1, new_vl, vl);
}

vint64m1x8_t test_vlseg8e64ff_v_i64m1x8_mu(vbool64_t vm, vint64m1x8_t vd,
                                           const int64_t *rs1, size_t *new_vl,
                                           size_t vl) {
  return __riscv_vlseg8e64ff_mu(vm, vd, rs1, new_vl, vl);
}

vuint64m1x8_t test_vlseg8e64ff_v_u64m1x8_mu(vbool64_t vm, vuint64m1x8_t vd,
                                            const uint64_t *rs1, size_t *new_vl,
                                            size_t vl) {
  return __riscv_vlseg8e64ff_mu(vm, vd, rs1, new_vl, vl);
}
