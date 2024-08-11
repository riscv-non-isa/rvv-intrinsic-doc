#include <riscv_vector.h>
#include <stdint.h>

vint64m1x4_t test_vlseg4e64_v_i64m1x4_m(vbool64_t vm, const int64_t *rs1,
                                        size_t vl) {
  return __riscv_vlseg4e64(vm, rs1, vl);
}

vint64m2x4_t test_vlseg4e64_v_i64m2x4_m(vbool32_t vm, const int64_t *rs1,
                                        size_t vl) {
  return __riscv_vlseg4e64(vm, rs1, vl);
}

vuint64m1x4_t test_vlseg4e64_v_u64m1x4_m(vbool64_t vm, const uint64_t *rs1,
                                         size_t vl) {
  return __riscv_vlseg4e64(vm, rs1, vl);
}

vuint64m2x4_t test_vlseg4e64_v_u64m2x4_m(vbool32_t vm, const uint64_t *rs1,
                                         size_t vl) {
  return __riscv_vlseg4e64(vm, rs1, vl);
}

vfloat64m1x4_t test_vlseg4e64_v_f64m1x4_m(vbool64_t vm, const double *rs1,
                                          size_t vl) {
  return __riscv_vlseg4e64(vm, rs1, vl);
}

vfloat64m2x4_t test_vlseg4e64_v_f64m2x4_m(vbool32_t vm, const double *rs1,
                                          size_t vl) {
  return __riscv_vlseg4e64(vm, rs1, vl);
}
