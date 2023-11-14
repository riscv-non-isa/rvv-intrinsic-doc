#include <riscv_vector.h>
#include <stdint.h>

vbfloat16mf4_t test_vle16_v_bf16mf4_m(vbool64_t vm, const __bf16 *rs1,
                                      size_t vl) {
  return __riscv_vle16(vm, rs1, vl);
}

vbfloat16mf2_t test_vle16_v_bf16mf2_m(vbool32_t vm, const __bf16 *rs1,
                                      size_t vl) {
  return __riscv_vle16(vm, rs1, vl);
}

vbfloat16m1_t test_vle16_v_bf16m1_m(vbool16_t vm, const __bf16 *rs1,
                                    size_t vl) {
  return __riscv_vle16(vm, rs1, vl);
}

vbfloat16m2_t test_vle16_v_bf16m2_m(vbool8_t vm, const __bf16 *rs1, size_t vl) {
  return __riscv_vle16(vm, rs1, vl);
}

vbfloat16m4_t test_vle16_v_bf16m4_m(vbool4_t vm, const __bf16 *rs1, size_t vl) {
  return __riscv_vle16(vm, rs1, vl);
}

vbfloat16m8_t test_vle16_v_bf16m8_m(vbool2_t vm, const __bf16 *rs1, size_t vl) {
  return __riscv_vle16(vm, rs1, vl);
}
