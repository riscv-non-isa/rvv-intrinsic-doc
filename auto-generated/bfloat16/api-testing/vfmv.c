#include <riscv_vector.h>
#include <stdint.h>

vbfloat16mf4_t test_vfmv_v_f_bf16mf4(__bf16 rs1, size_t vl) {
  return __riscv_vfmv_v_f_bf16mf4(rs1, vl);
}

vbfloat16mf2_t test_vfmv_v_f_bf16mf2(__bf16 rs1, size_t vl) {
  return __riscv_vfmv_v_f_bf16mf2(rs1, vl);
}

vbfloat16m1_t test_vfmv_v_f_bf16m1(__bf16 rs1, size_t vl) {
  return __riscv_vfmv_v_f_bf16m1(rs1, vl);
}

vbfloat16m2_t test_vfmv_v_f_bf16m2(__bf16 rs1, size_t vl) {
  return __riscv_vfmv_v_f_bf16m2(rs1, vl);
}

vbfloat16m4_t test_vfmv_v_f_bf16m4(__bf16 rs1, size_t vl) {
  return __riscv_vfmv_v_f_bf16m4(rs1, vl);
}

vbfloat16m8_t test_vfmv_v_f_bf16m8(__bf16 rs1, size_t vl) {
  return __riscv_vfmv_v_f_bf16m8(rs1, vl);
}
