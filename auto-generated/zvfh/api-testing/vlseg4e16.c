#include <riscv_vector.h>
#include <stdint.h>

vfloat16mf4x4_t test_vlseg4e16_v_f16mf4x4(const _Float16 *rs1, size_t vl) {
  return __riscv_vlseg4e16_v_f16mf4x4(rs1, vl);
}

vfloat16mf2x4_t test_vlseg4e16_v_f16mf2x4(const _Float16 *rs1, size_t vl) {
  return __riscv_vlseg4e16_v_f16mf2x4(rs1, vl);
}

vfloat16m1x4_t test_vlseg4e16_v_f16m1x4(const _Float16 *rs1, size_t vl) {
  return __riscv_vlseg4e16_v_f16m1x4(rs1, vl);
}

vfloat16m2x4_t test_vlseg4e16_v_f16m2x4(const _Float16 *rs1, size_t vl) {
  return __riscv_vlseg4e16_v_f16m2x4(rs1, vl);
}

vfloat16mf4x4_t test_vlseg4e16_v_f16mf4x4_m(vbool64_t vm, const _Float16 *rs1,
                                            size_t vl) {
  return __riscv_vlseg4e16_v_f16mf4x4_m(vm, rs1, vl);
}

vfloat16mf2x4_t test_vlseg4e16_v_f16mf2x4_m(vbool32_t vm, const _Float16 *rs1,
                                            size_t vl) {
  return __riscv_vlseg4e16_v_f16mf2x4_m(vm, rs1, vl);
}

vfloat16m1x4_t test_vlseg4e16_v_f16m1x4_m(vbool16_t vm, const _Float16 *rs1,
                                          size_t vl) {
  return __riscv_vlseg4e16_v_f16m1x4_m(vm, rs1, vl);
}

vfloat16m2x4_t test_vlseg4e16_v_f16m2x4_m(vbool8_t vm, const _Float16 *rs1,
                                          size_t vl) {
  return __riscv_vlseg4e16_v_f16m2x4_m(vm, rs1, vl);
}
