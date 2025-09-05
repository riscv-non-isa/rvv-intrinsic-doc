#include <riscv_vector.h>
#include <stdint.h>

vbfloat16mf4_t test_vmv_v_v_bf16mf4(vbfloat16mf4_t vs1, size_t vl) {
  return __riscv_vmv_v(vs1, vl);
}

vbfloat16mf2_t test_vmv_v_v_bf16mf2(vbfloat16mf2_t vs1, size_t vl) {
  return __riscv_vmv_v(vs1, vl);
}

vbfloat16m1_t test_vmv_v_v_bf16m1(vbfloat16m1_t vs1, size_t vl) {
  return __riscv_vmv_v(vs1, vl);
}

vbfloat16m2_t test_vmv_v_v_bf16m2(vbfloat16m2_t vs1, size_t vl) {
  return __riscv_vmv_v(vs1, vl);
}

vbfloat16m4_t test_vmv_v_v_bf16m4(vbfloat16m4_t vs1, size_t vl) {
  return __riscv_vmv_v(vs1, vl);
}

vbfloat16m8_t test_vmv_v_v_bf16m8(vbfloat16m8_t vs1, size_t vl) {
  return __riscv_vmv_v(vs1, vl);
}
