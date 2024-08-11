#include <riscv_vector.h>
#include <stdint.h>

vfloat16mf4_t test_vlmul_trunc_v_f16mf2_f16mf4(vfloat16mf2_t value) {
  return __riscv_vlmul_trunc_v_f16mf2_f16mf4(value);
}

vfloat16mf4_t test_vlmul_trunc_v_f16m1_f16mf4(vfloat16m1_t value) {
  return __riscv_vlmul_trunc_v_f16m1_f16mf4(value);
}

vfloat16mf2_t test_vlmul_trunc_v_f16m1_f16mf2(vfloat16m1_t value) {
  return __riscv_vlmul_trunc_v_f16m1_f16mf2(value);
}

vfloat16mf4_t test_vlmul_trunc_v_f16m2_f16mf4(vfloat16m2_t value) {
  return __riscv_vlmul_trunc_v_f16m2_f16mf4(value);
}

vfloat16mf2_t test_vlmul_trunc_v_f16m2_f16mf2(vfloat16m2_t value) {
  return __riscv_vlmul_trunc_v_f16m2_f16mf2(value);
}

vfloat16m1_t test_vlmul_trunc_v_f16m2_f16m1(vfloat16m2_t value) {
  return __riscv_vlmul_trunc_v_f16m2_f16m1(value);
}

vfloat16mf4_t test_vlmul_trunc_v_f16m4_f16mf4(vfloat16m4_t value) {
  return __riscv_vlmul_trunc_v_f16m4_f16mf4(value);
}

vfloat16mf2_t test_vlmul_trunc_v_f16m4_f16mf2(vfloat16m4_t value) {
  return __riscv_vlmul_trunc_v_f16m4_f16mf2(value);
}

vfloat16m1_t test_vlmul_trunc_v_f16m4_f16m1(vfloat16m4_t value) {
  return __riscv_vlmul_trunc_v_f16m4_f16m1(value);
}

vfloat16m2_t test_vlmul_trunc_v_f16m4_f16m2(vfloat16m4_t value) {
  return __riscv_vlmul_trunc_v_f16m4_f16m2(value);
}

vfloat16mf4_t test_vlmul_trunc_v_f16m8_f16mf4(vfloat16m8_t value) {
  return __riscv_vlmul_trunc_v_f16m8_f16mf4(value);
}

vfloat16mf2_t test_vlmul_trunc_v_f16m8_f16mf2(vfloat16m8_t value) {
  return __riscv_vlmul_trunc_v_f16m8_f16mf2(value);
}

vfloat16m1_t test_vlmul_trunc_v_f16m8_f16m1(vfloat16m8_t value) {
  return __riscv_vlmul_trunc_v_f16m8_f16m1(value);
}

vfloat16m2_t test_vlmul_trunc_v_f16m8_f16m2(vfloat16m8_t value) {
  return __riscv_vlmul_trunc_v_f16m8_f16m2(value);
}

vfloat16m4_t test_vlmul_trunc_v_f16m8_f16m4(vfloat16m8_t value) {
  return __riscv_vlmul_trunc_v_f16m8_f16m4(value);
}
