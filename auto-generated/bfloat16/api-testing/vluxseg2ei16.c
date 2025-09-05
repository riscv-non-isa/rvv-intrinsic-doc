#include <riscv_vector.h>
#include <stdint.h>

vbfloat16mf4x2_t test_vluxseg2ei16_v_bf16mf4x2(const __bf16 *rs1,
                                               vuint16mf4_t rs2, size_t vl) {
  return __riscv_vluxseg2ei16_v_bf16mf4x2(rs1, rs2, vl);
}

vbfloat16mf2x2_t test_vluxseg2ei16_v_bf16mf2x2(const __bf16 *rs1,
                                               vuint16mf2_t rs2, size_t vl) {
  return __riscv_vluxseg2ei16_v_bf16mf2x2(rs1, rs2, vl);
}

vbfloat16m1x2_t test_vluxseg2ei16_v_bf16m1x2(const __bf16 *rs1, vuint16m1_t rs2,
                                             size_t vl) {
  return __riscv_vluxseg2ei16_v_bf16m1x2(rs1, rs2, vl);
}

vbfloat16m2x2_t test_vluxseg2ei16_v_bf16m2x2(const __bf16 *rs1, vuint16m2_t rs2,
                                             size_t vl) {
  return __riscv_vluxseg2ei16_v_bf16m2x2(rs1, rs2, vl);
}

vbfloat16m4x2_t test_vluxseg2ei16_v_bf16m4x2(const __bf16 *rs1, vuint16m4_t rs2,
                                             size_t vl) {
  return __riscv_vluxseg2ei16_v_bf16m4x2(rs1, rs2, vl);
}

vbfloat16mf4x2_t test_vluxseg2ei16_v_bf16mf4x2_m(vbool64_t vm,
                                                 const __bf16 *rs1,
                                                 vuint16mf4_t rs2, size_t vl) {
  return __riscv_vluxseg2ei16_v_bf16mf4x2_m(vm, rs1, rs2, vl);
}

vbfloat16mf2x2_t test_vluxseg2ei16_v_bf16mf2x2_m(vbool32_t vm,
                                                 const __bf16 *rs1,
                                                 vuint16mf2_t rs2, size_t vl) {
  return __riscv_vluxseg2ei16_v_bf16mf2x2_m(vm, rs1, rs2, vl);
}

vbfloat16m1x2_t test_vluxseg2ei16_v_bf16m1x2_m(vbool16_t vm, const __bf16 *rs1,
                                               vuint16m1_t rs2, size_t vl) {
  return __riscv_vluxseg2ei16_v_bf16m1x2_m(vm, rs1, rs2, vl);
}

vbfloat16m2x2_t test_vluxseg2ei16_v_bf16m2x2_m(vbool8_t vm, const __bf16 *rs1,
                                               vuint16m2_t rs2, size_t vl) {
  return __riscv_vluxseg2ei16_v_bf16m2x2_m(vm, rs1, rs2, vl);
}

vbfloat16m4x2_t test_vluxseg2ei16_v_bf16m4x2_m(vbool4_t vm, const __bf16 *rs1,
                                               vuint16m4_t rs2, size_t vl) {
  return __riscv_vluxseg2ei16_v_bf16m4x2_m(vm, rs1, rs2, vl);
}
