#include <riscv_vector.h>
#include <stdint.h>

vbfloat16mf4x5_t test_vlseg5e16_v_bf16mf4x5(const __bf16 *rs1, size_t vl) {
  return __riscv_vlseg5e16_v_bf16mf4x5(rs1, vl);
}

vbfloat16mf2x5_t test_vlseg5e16_v_bf16mf2x5(const __bf16 *rs1, size_t vl) {
  return __riscv_vlseg5e16_v_bf16mf2x5(rs1, vl);
}

vbfloat16m1x5_t test_vlseg5e16_v_bf16m1x5(const __bf16 *rs1, size_t vl) {
  return __riscv_vlseg5e16_v_bf16m1x5(rs1, vl);
}

vbfloat16mf4x5_t test_vlseg5e16_v_bf16mf4x5_m(vbool64_t vm, const __bf16 *rs1,
                                              size_t vl) {
  return __riscv_vlseg5e16_v_bf16mf4x5_m(vm, rs1, vl);
}

vbfloat16mf2x5_t test_vlseg5e16_v_bf16mf2x5_m(vbool32_t vm, const __bf16 *rs1,
                                              size_t vl) {
  return __riscv_vlseg5e16_v_bf16mf2x5_m(vm, rs1, vl);
}

vbfloat16m1x5_t test_vlseg5e16_v_bf16m1x5_m(vbool16_t vm, const __bf16 *rs1,
                                            size_t vl) {
  return __riscv_vlseg5e16_v_bf16m1x5_m(vm, rs1, vl);
}
