#include <riscv_vector.h>
#include <stdint.h>

vbfloat16mf4x2_t test_vloxseg2ei32_v_bf16mf4x2(const __bf16 *rs1,
                                               vuint32mf2_t rs2, size_t vl) {
  return __riscv_vloxseg2ei32_v_bf16mf4x2(rs1, rs2, vl);
}

vbfloat16mf2x2_t test_vloxseg2ei32_v_bf16mf2x2(const __bf16 *rs1,
                                               vuint32m1_t rs2, size_t vl) {
  return __riscv_vloxseg2ei32_v_bf16mf2x2(rs1, rs2, vl);
}

vbfloat16m1x2_t test_vloxseg2ei32_v_bf16m1x2(const __bf16 *rs1, vuint32m2_t rs2,
                                             size_t vl) {
  return __riscv_vloxseg2ei32_v_bf16m1x2(rs1, rs2, vl);
}

vbfloat16m2x2_t test_vloxseg2ei32_v_bf16m2x2(const __bf16 *rs1, vuint32m4_t rs2,
                                             size_t vl) {
  return __riscv_vloxseg2ei32_v_bf16m2x2(rs1, rs2, vl);
}

vbfloat16m4x2_t test_vloxseg2ei32_v_bf16m4x2(const __bf16 *rs1, vuint32m8_t rs2,
                                             size_t vl) {
  return __riscv_vloxseg2ei32_v_bf16m4x2(rs1, rs2, vl);
}

vbfloat16mf4x2_t test_vloxseg2ei32_v_bf16mf4x2_m(vbool64_t vm,
                                                 const __bf16 *rs1,
                                                 vuint32mf2_t rs2, size_t vl) {
  return __riscv_vloxseg2ei32_v_bf16mf4x2_m(vm, rs1, rs2, vl);
}

vbfloat16mf2x2_t test_vloxseg2ei32_v_bf16mf2x2_m(vbool32_t vm,
                                                 const __bf16 *rs1,
                                                 vuint32m1_t rs2, size_t vl) {
  return __riscv_vloxseg2ei32_v_bf16mf2x2_m(vm, rs1, rs2, vl);
}

vbfloat16m1x2_t test_vloxseg2ei32_v_bf16m1x2_m(vbool16_t vm, const __bf16 *rs1,
                                               vuint32m2_t rs2, size_t vl) {
  return __riscv_vloxseg2ei32_v_bf16m1x2_m(vm, rs1, rs2, vl);
}

vbfloat16m2x2_t test_vloxseg2ei32_v_bf16m2x2_m(vbool8_t vm, const __bf16 *rs1,
                                               vuint32m4_t rs2, size_t vl) {
  return __riscv_vloxseg2ei32_v_bf16m2x2_m(vm, rs1, rs2, vl);
}

vbfloat16m4x2_t test_vloxseg2ei32_v_bf16m4x2_m(vbool4_t vm, const __bf16 *rs1,
                                               vuint32m8_t rs2, size_t vl) {
  return __riscv_vloxseg2ei32_v_bf16m4x2_m(vm, rs1, rs2, vl);
}
