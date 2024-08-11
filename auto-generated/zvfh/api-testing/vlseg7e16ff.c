#include <riscv_vector.h>
#include <stdint.h>

vfloat16mf4x7_t test_vlseg7e16ff_v_f16mf4x7(const _Float16 *rs1, size_t *new_vl,
                                            size_t vl) {
  return __riscv_vlseg7e16ff_v_f16mf4x7(rs1, new_vl, vl);
}

vfloat16mf2x7_t test_vlseg7e16ff_v_f16mf2x7(const _Float16 *rs1, size_t *new_vl,
                                            size_t vl) {
  return __riscv_vlseg7e16ff_v_f16mf2x7(rs1, new_vl, vl);
}

vfloat16m1x7_t test_vlseg7e16ff_v_f16m1x7(const _Float16 *rs1, size_t *new_vl,
                                          size_t vl) {
  return __riscv_vlseg7e16ff_v_f16m1x7(rs1, new_vl, vl);
}

vfloat16mf4x7_t test_vlseg7e16ff_v_f16mf4x7_m(vbool64_t vm, const _Float16 *rs1,
                                              size_t *new_vl, size_t vl) {
  return __riscv_vlseg7e16ff_v_f16mf4x7_m(vm, rs1, new_vl, vl);
}

vfloat16mf2x7_t test_vlseg7e16ff_v_f16mf2x7_m(vbool32_t vm, const _Float16 *rs1,
                                              size_t *new_vl, size_t vl) {
  return __riscv_vlseg7e16ff_v_f16mf2x7_m(vm, rs1, new_vl, vl);
}

vfloat16m1x7_t test_vlseg7e16ff_v_f16m1x7_m(vbool16_t vm, const _Float16 *rs1,
                                            size_t *new_vl, size_t vl) {
  return __riscv_vlseg7e16ff_v_f16m1x7_m(vm, rs1, new_vl, vl);
}
