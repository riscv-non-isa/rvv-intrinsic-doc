#include <riscv_vector.h>
#include <stdint.h>

vbfloat16mf4x3_t test_vluxseg3ei32_v_bf16mf4x3(const __bf16 *rs1,
                                               vuint32mf2_t rs2, size_t vl) {
  return __riscv_vluxseg3ei32_v_bf16mf4x3(rs1, rs2, vl);
}

vbfloat16mf2x3_t test_vluxseg3ei32_v_bf16mf2x3(const __bf16 *rs1,
                                               vuint32m1_t rs2, size_t vl) {
  return __riscv_vluxseg3ei32_v_bf16mf2x3(rs1, rs2, vl);
}

vbfloat16m1x3_t test_vluxseg3ei32_v_bf16m1x3(const __bf16 *rs1, vuint32m2_t rs2,
                                             size_t vl) {
  return __riscv_vluxseg3ei32_v_bf16m1x3(rs1, rs2, vl);
}

vbfloat16m2x3_t test_vluxseg3ei32_v_bf16m2x3(const __bf16 *rs1, vuint32m4_t rs2,
                                             size_t vl) {
  return __riscv_vluxseg3ei32_v_bf16m2x3(rs1, rs2, vl);
}

vbfloat16mf4x3_t test_vluxseg3ei32_v_bf16mf4x3_m(vbool64_t vm,
                                                 const __bf16 *rs1,
                                                 vuint32mf2_t rs2, size_t vl) {
  return __riscv_vluxseg3ei32_v_bf16mf4x3_m(vm, rs1, rs2, vl);
}

vbfloat16mf2x3_t test_vluxseg3ei32_v_bf16mf2x3_m(vbool32_t vm,
                                                 const __bf16 *rs1,
                                                 vuint32m1_t rs2, size_t vl) {
  return __riscv_vluxseg3ei32_v_bf16mf2x3_m(vm, rs1, rs2, vl);
}

vbfloat16m1x3_t test_vluxseg3ei32_v_bf16m1x3_m(vbool16_t vm, const __bf16 *rs1,
                                               vuint32m2_t rs2, size_t vl) {
  return __riscv_vluxseg3ei32_v_bf16m1x3_m(vm, rs1, rs2, vl);
}

vbfloat16m2x3_t test_vluxseg3ei32_v_bf16m2x3_m(vbool8_t vm, const __bf16 *rs1,
                                               vuint32m4_t rs2, size_t vl) {
  return __riscv_vluxseg3ei32_v_bf16m2x3_m(vm, rs1, rs2, vl);
}
