#include <riscv_vector.h>
#include <stdint.h>

vbfloat16mf4x5_t test_vloxseg5ei16_v_bf16mf4x5(const __bf16 *rs1,
                                               vuint16mf4_t rs2, size_t vl) {
  return __riscv_vloxseg5ei16_v_bf16mf4x5(rs1, rs2, vl);
}

vbfloat16mf2x5_t test_vloxseg5ei16_v_bf16mf2x5(const __bf16 *rs1,
                                               vuint16mf2_t rs2, size_t vl) {
  return __riscv_vloxseg5ei16_v_bf16mf2x5(rs1, rs2, vl);
}

vbfloat16m1x5_t test_vloxseg5ei16_v_bf16m1x5(const __bf16 *rs1, vuint16m1_t rs2,
                                             size_t vl) {
  return __riscv_vloxseg5ei16_v_bf16m1x5(rs1, rs2, vl);
}

vbfloat16mf4x5_t test_vloxseg5ei16_v_bf16mf4x5_m(vbool64_t vm,
                                                 const __bf16 *rs1,
                                                 vuint16mf4_t rs2, size_t vl) {
  return __riscv_vloxseg5ei16_v_bf16mf4x5_m(vm, rs1, rs2, vl);
}

vbfloat16mf2x5_t test_vloxseg5ei16_v_bf16mf2x5_m(vbool32_t vm,
                                                 const __bf16 *rs1,
                                                 vuint16mf2_t rs2, size_t vl) {
  return __riscv_vloxseg5ei16_v_bf16mf2x5_m(vm, rs1, rs2, vl);
}

vbfloat16m1x5_t test_vloxseg5ei16_v_bf16m1x5_m(vbool16_t vm, const __bf16 *rs1,
                                               vuint16m1_t rs2, size_t vl) {
  return __riscv_vloxseg5ei16_v_bf16m1x5_m(vm, rs1, rs2, vl);
}
