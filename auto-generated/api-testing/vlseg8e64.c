#include <riscv_vector.h>
#include <stdint.h>

vfloat64m1x8_t test_vlseg8e64_v_f64m1x8(const double *rs1, size_t vl) {
  return __riscv_vlseg8e64_v_f64m1x8(rs1, vl);
}

vint64m1x8_t test_vlseg8e64_v_i64m1x8(const int64_t *rs1, size_t vl) {
  return __riscv_vlseg8e64_v_i64m1x8(rs1, vl);
}

vuint64m1x8_t test_vlseg8e64_v_u64m1x8(const uint64_t *rs1, size_t vl) {
  return __riscv_vlseg8e64_v_u64m1x8(rs1, vl);
}

vfloat64m1x8_t test_vlseg8e64_v_f64m1x8_m(vbool64_t vm, const double *rs1,
                                          size_t vl) {
  return __riscv_vlseg8e64_v_f64m1x8_m(vm, rs1, vl);
}

vint64m1x8_t test_vlseg8e64_v_i64m1x8_m(vbool64_t vm, const int64_t *rs1,
                                        size_t vl) {
  return __riscv_vlseg8e64_v_i64m1x8_m(vm, rs1, vl);
}

vuint64m1x8_t test_vlseg8e64_v_u64m1x8_m(vbool64_t vm, const uint64_t *rs1,
                                         size_t vl) {
  return __riscv_vlseg8e64_v_u64m1x8_m(vm, rs1, vl);
}
