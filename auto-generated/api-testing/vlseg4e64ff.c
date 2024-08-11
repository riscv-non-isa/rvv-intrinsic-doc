#include <riscv_vector.h>
#include <stdint.h>

vint64m1x4_t test_vlseg4e64ff_v_i64m1x4(const int64_t *rs1, size_t *new_vl,
                                        size_t vl) {
  return __riscv_vlseg4e64ff_v_i64m1x4(rs1, new_vl, vl);
}

vint64m2x4_t test_vlseg4e64ff_v_i64m2x4(const int64_t *rs1, size_t *new_vl,
                                        size_t vl) {
  return __riscv_vlseg4e64ff_v_i64m2x4(rs1, new_vl, vl);
}

vuint64m1x4_t test_vlseg4e64ff_v_u64m1x4(const uint64_t *rs1, size_t *new_vl,
                                         size_t vl) {
  return __riscv_vlseg4e64ff_v_u64m1x4(rs1, new_vl, vl);
}

vuint64m2x4_t test_vlseg4e64ff_v_u64m2x4(const uint64_t *rs1, size_t *new_vl,
                                         size_t vl) {
  return __riscv_vlseg4e64ff_v_u64m2x4(rs1, new_vl, vl);
}

vint64m1x4_t test_vlseg4e64ff_v_i64m1x4_m(vbool64_t vm, const int64_t *rs1,
                                          size_t *new_vl, size_t vl) {
  return __riscv_vlseg4e64ff_v_i64m1x4_m(vm, rs1, new_vl, vl);
}

vint64m2x4_t test_vlseg4e64ff_v_i64m2x4_m(vbool32_t vm, const int64_t *rs1,
                                          size_t *new_vl, size_t vl) {
  return __riscv_vlseg4e64ff_v_i64m2x4_m(vm, rs1, new_vl, vl);
}

vuint64m1x4_t test_vlseg4e64ff_v_u64m1x4_m(vbool64_t vm, const uint64_t *rs1,
                                           size_t *new_vl, size_t vl) {
  return __riscv_vlseg4e64ff_v_u64m1x4_m(vm, rs1, new_vl, vl);
}

vuint64m2x4_t test_vlseg4e64ff_v_u64m2x4_m(vbool32_t vm, const uint64_t *rs1,
                                           size_t *new_vl, size_t vl) {
  return __riscv_vlseg4e64ff_v_u64m2x4_m(vm, rs1, new_vl, vl);
}

vfloat64m1x4_t test_vlseg4e64ff_v_f64m1x4(const double *rs1, size_t *new_vl,
                                          size_t vl) {
  return __riscv_vlseg4e64ff_v_f64m1x4(rs1, new_vl, vl);
}

vfloat64m2x4_t test_vlseg4e64ff_v_f64m2x4(const double *rs1, size_t *new_vl,
                                          size_t vl) {
  return __riscv_vlseg4e64ff_v_f64m2x4(rs1, new_vl, vl);
}

vfloat64m1x4_t test_vlseg4e64ff_v_f64m1x4_m(vbool64_t vm, const double *rs1,
                                            size_t *new_vl, size_t vl) {
  return __riscv_vlseg4e64ff_v_f64m1x4_m(vm, rs1, new_vl, vl);
}

vfloat64m2x4_t test_vlseg4e64ff_v_f64m2x4_m(vbool32_t vm, const double *rs1,
                                            size_t *new_vl, size_t vl) {
  return __riscv_vlseg4e64ff_v_f64m2x4_m(vm, rs1, new_vl, vl);
}
