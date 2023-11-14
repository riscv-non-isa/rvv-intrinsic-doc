#include <riscv_vector.h>
#include <stdint.h>

vbfloat16mf4x8_t test_vloxseg8ei16_v_bf16mf4x8(const __bf16 *rs1,
                                               vuint16mf4_t rs2, size_t vl) {
  return __riscv_vloxseg8ei16_v_bf16mf4x8(rs1, rs2, vl);
}

vbfloat16mf2x8_t test_vloxseg8ei16_v_bf16mf2x8(const __bf16 *rs1,
                                               vuint16mf2_t rs2, size_t vl) {
  return __riscv_vloxseg8ei16_v_bf16mf2x8(rs1, rs2, vl);
}

vbfloat16m1x8_t test_vloxseg8ei16_v_bf16m1x8(const __bf16 *rs1, vuint16m1_t rs2,
                                             size_t vl) {
  return __riscv_vloxseg8ei16_v_bf16m1x8(rs1, rs2, vl);
}

vbfloat16mf4x8_t test_vloxseg8ei16_v_bf16mf4x8_m(vbool64_t vm,
                                                 const __bf16 *rs1,
                                                 vuint16mf4_t rs2, size_t vl) {
  return __riscv_vloxseg8ei16_v_bf16mf4x8_m(vm, rs1, rs2, vl);
}

vbfloat16mf2x8_t test_vloxseg8ei16_v_bf16mf2x8_m(vbool32_t vm,
                                                 const __bf16 *rs1,
                                                 vuint16mf2_t rs2, size_t vl) {
  return __riscv_vloxseg8ei16_v_bf16mf2x8_m(vm, rs1, rs2, vl);
}

vbfloat16m1x8_t test_vloxseg8ei16_v_bf16m1x8_m(vbool16_t vm, const __bf16 *rs1,
                                               vuint16m1_t rs2, size_t vl) {
  return __riscv_vloxseg8ei16_v_bf16m1x8_m(vm, rs1, rs2, vl);
}
