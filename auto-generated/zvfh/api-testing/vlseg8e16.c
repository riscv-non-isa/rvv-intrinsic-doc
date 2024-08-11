#include <riscv_vector.h>
#include <stdint.h>

vfloat16mf4x8_t test_vlseg8e16_v_f16mf4x8(const _Float16 *rs1, size_t vl) {
  return __riscv_vlseg8e16_v_f16mf4x8(rs1, vl);
}

vfloat16mf2x8_t test_vlseg8e16_v_f16mf2x8(const _Float16 *rs1, size_t vl) {
  return __riscv_vlseg8e16_v_f16mf2x8(rs1, vl);
}

vfloat16m1x8_t test_vlseg8e16_v_f16m1x8(const _Float16 *rs1, size_t vl) {
  return __riscv_vlseg8e16_v_f16m1x8(rs1, vl);
}

vfloat16mf4x8_t test_vlseg8e16_v_f16mf4x8_m(vbool64_t vm, const _Float16 *rs1,
                                            size_t vl) {
  return __riscv_vlseg8e16_v_f16mf4x8_m(vm, rs1, vl);
}

vfloat16mf2x8_t test_vlseg8e16_v_f16mf2x8_m(vbool32_t vm, const _Float16 *rs1,
                                            size_t vl) {
  return __riscv_vlseg8e16_v_f16mf2x8_m(vm, rs1, vl);
}

vfloat16m1x8_t test_vlseg8e16_v_f16m1x8_m(vbool16_t vm, const _Float16 *rs1,
                                          size_t vl) {
  return __riscv_vlseg8e16_v_f16m1x8_m(vm, rs1, vl);
}
