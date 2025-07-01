#include <riscv_vector.h>
#include <stdint.h>

vbfloat16mf4_t test_vluxei64_v_bf16mf4(const __bf16 *rs1, vuint64m1_t rs2,
                                       size_t vl) {
  return __riscv_vluxei64(rs1, rs2, vl);
}

vbfloat16mf2_t test_vluxei64_v_bf16mf2(const __bf16 *rs1, vuint64m2_t rs2,
                                       size_t vl) {
  return __riscv_vluxei64(rs1, rs2, vl);
}

vbfloat16m1_t test_vluxei64_v_bf16m1(const __bf16 *rs1, vuint64m4_t rs2,
                                     size_t vl) {
  return __riscv_vluxei64(rs1, rs2, vl);
}

vbfloat16m2_t test_vluxei64_v_bf16m2(const __bf16 *rs1, vuint64m8_t rs2,
                                     size_t vl) {
  return __riscv_vluxei64(rs1, rs2, vl);
}

vbfloat16mf4_t test_vluxei64_v_bf16mf4_m(vbool64_t vm, const __bf16 *rs1,
                                         vuint64m1_t rs2, size_t vl) {
  return __riscv_vluxei64(vm, rs1, rs2, vl);
}

vbfloat16mf2_t test_vluxei64_v_bf16mf2_m(vbool32_t vm, const __bf16 *rs1,
                                         vuint64m2_t rs2, size_t vl) {
  return __riscv_vluxei64(vm, rs1, rs2, vl);
}

vbfloat16m1_t test_vluxei64_v_bf16m1_m(vbool16_t vm, const __bf16 *rs1,
                                       vuint64m4_t rs2, size_t vl) {
  return __riscv_vluxei64(vm, rs1, rs2, vl);
}

vbfloat16m2_t test_vluxei64_v_bf16m2_m(vbool8_t vm, const __bf16 *rs1,
                                       vuint64m8_t rs2, size_t vl) {
  return __riscv_vluxei64(vm, rs1, rs2, vl);
}
