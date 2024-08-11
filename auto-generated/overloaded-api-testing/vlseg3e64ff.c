#include <riscv_vector.h>
#include <stdint.h>

vint64m1x3_t test_vlseg3e64ff_v_i64m1x3_m(vbool64_t vm, const int64_t *rs1,
                                          size_t *new_vl, size_t vl) {
  return __riscv_vlseg3e64ff(vm, rs1, new_vl, vl);
}

vint64m2x3_t test_vlseg3e64ff_v_i64m2x3_m(vbool32_t vm, const int64_t *rs1,
                                          size_t *new_vl, size_t vl) {
  return __riscv_vlseg3e64ff(vm, rs1, new_vl, vl);
}

vuint64m1x3_t test_vlseg3e64ff_v_u64m1x3_m(vbool64_t vm, const uint64_t *rs1,
                                           size_t *new_vl, size_t vl) {
  return __riscv_vlseg3e64ff(vm, rs1, new_vl, vl);
}

vuint64m2x3_t test_vlseg3e64ff_v_u64m2x3_m(vbool32_t vm, const uint64_t *rs1,
                                           size_t *new_vl, size_t vl) {
  return __riscv_vlseg3e64ff(vm, rs1, new_vl, vl);
}

vfloat64m1x3_t test_vlseg3e64ff_v_f64m1x3_m(vbool64_t vm, const double *rs1,
                                            size_t *new_vl, size_t vl) {
  return __riscv_vlseg3e64ff(vm, rs1, new_vl, vl);
}

vfloat64m2x3_t test_vlseg3e64ff_v_f64m2x3_m(vbool32_t vm, const double *rs1,
                                            size_t *new_vl, size_t vl) {
  return __riscv_vlseg3e64ff(vm, rs1, new_vl, vl);
}
