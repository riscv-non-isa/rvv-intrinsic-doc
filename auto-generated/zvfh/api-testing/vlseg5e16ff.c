#include <riscv_vector.h>
#include <stdint.h>

vfloat16mf4x5_t test_vlseg5e16ff_v_f16mf4x5(const _Float16 *rs1, size_t *new_vl,
                                            size_t vl) {
  return __riscv_vlseg5e16ff_v_f16mf4x5(rs1, new_vl, vl);
}

vfloat16mf2x5_t test_vlseg5e16ff_v_f16mf2x5(const _Float16 *rs1, size_t *new_vl,
                                            size_t vl) {
  return __riscv_vlseg5e16ff_v_f16mf2x5(rs1, new_vl, vl);
}

vfloat16m1x5_t test_vlseg5e16ff_v_f16m1x5(const _Float16 *rs1, size_t *new_vl,
                                          size_t vl) {
  return __riscv_vlseg5e16ff_v_f16m1x5(rs1, new_vl, vl);
}

vfloat16mf4x5_t test_vlseg5e16ff_v_f16mf4x5_m(vbool64_t vm, const _Float16 *rs1,
                                              size_t *new_vl, size_t vl) {
  return __riscv_vlseg5e16ff_v_f16mf4x5_m(vm, rs1, new_vl, vl);
}

vfloat16mf2x5_t test_vlseg5e16ff_v_f16mf2x5_m(vbool32_t vm, const _Float16 *rs1,
                                              size_t *new_vl, size_t vl) {
  return __riscv_vlseg5e16ff_v_f16mf2x5_m(vm, rs1, new_vl, vl);
}

vfloat16m1x5_t test_vlseg5e16ff_v_f16m1x5_m(vbool16_t vm, const _Float16 *rs1,
                                            size_t *new_vl, size_t vl) {
  return __riscv_vlseg5e16ff_v_f16m1x5_m(vm, rs1, new_vl, vl);
}
