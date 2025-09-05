#include <riscv_vector.h>
#include <stdint.h>

vbfloat16mf2_t test_vlmul_ext_v_bf16mf4_bf16mf2(vbfloat16mf4_t value) {
  return __riscv_vlmul_ext_v_bf16mf4_bf16mf2(value);
}

vbfloat16m1_t test_vlmul_ext_v_bf16mf4_bf16m1(vbfloat16mf4_t value) {
  return __riscv_vlmul_ext_v_bf16mf4_bf16m1(value);
}

vbfloat16m2_t test_vlmul_ext_v_bf16mf4_bf16m2(vbfloat16mf4_t value) {
  return __riscv_vlmul_ext_v_bf16mf4_bf16m2(value);
}

vbfloat16m4_t test_vlmul_ext_v_bf16mf4_bf16m4(vbfloat16mf4_t value) {
  return __riscv_vlmul_ext_v_bf16mf4_bf16m4(value);
}

vbfloat16m8_t test_vlmul_ext_v_bf16mf4_bf16m8(vbfloat16mf4_t value) {
  return __riscv_vlmul_ext_v_bf16mf4_bf16m8(value);
}

vbfloat16m1_t test_vlmul_ext_v_bf16mf2_bf16m1(vbfloat16mf2_t value) {
  return __riscv_vlmul_ext_v_bf16mf2_bf16m1(value);
}

vbfloat16m2_t test_vlmul_ext_v_bf16mf2_bf16m2(vbfloat16mf2_t value) {
  return __riscv_vlmul_ext_v_bf16mf2_bf16m2(value);
}

vbfloat16m4_t test_vlmul_ext_v_bf16mf2_bf16m4(vbfloat16mf2_t value) {
  return __riscv_vlmul_ext_v_bf16mf2_bf16m4(value);
}

vbfloat16m8_t test_vlmul_ext_v_bf16mf2_bf16m8(vbfloat16mf2_t value) {
  return __riscv_vlmul_ext_v_bf16mf2_bf16m8(value);
}

vbfloat16m2_t test_vlmul_ext_v_bf16m1_bf16m2(vbfloat16m1_t value) {
  return __riscv_vlmul_ext_v_bf16m1_bf16m2(value);
}

vbfloat16m4_t test_vlmul_ext_v_bf16m1_bf16m4(vbfloat16m1_t value) {
  return __riscv_vlmul_ext_v_bf16m1_bf16m4(value);
}

vbfloat16m8_t test_vlmul_ext_v_bf16m1_bf16m8(vbfloat16m1_t value) {
  return __riscv_vlmul_ext_v_bf16m1_bf16m8(value);
}

vbfloat16m4_t test_vlmul_ext_v_bf16m2_bf16m4(vbfloat16m2_t value) {
  return __riscv_vlmul_ext_v_bf16m2_bf16m4(value);
}

vbfloat16m8_t test_vlmul_ext_v_bf16m2_bf16m8(vbfloat16m2_t value) {
  return __riscv_vlmul_ext_v_bf16m2_bf16m8(value);
}

vbfloat16m8_t test_vlmul_ext_v_bf16m4_bf16m8(vbfloat16m4_t value) {
  return __riscv_vlmul_ext_v_bf16m4_bf16m8(value);
}
