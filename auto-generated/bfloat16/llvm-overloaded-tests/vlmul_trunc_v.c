// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -disable-O0-optnone \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

vbfloat16mf4_t test_vlmul_trunc_v_b16mf2_b16mf4(vbfloat16mf2_t value) {
  return __riscv_vlmul_trunc_b16mf4(value);
}

vbfloat16mf4_t test_vlmul_trunc_v_b16m1_b16mf4(vbfloat16m1_t value) {
  return __riscv_vlmul_trunc_b16mf4(value);
}

vbfloat16mf2_t test_vlmul_trunc_v_b16m1_b16mf2(vbfloat16m1_t value) {
  return __riscv_vlmul_trunc_b16mf2(value);
}

vbfloat16mf4_t test_vlmul_trunc_v_b16m2_b16mf4(vbfloat16m2_t value) {
  return __riscv_vlmul_trunc_b16mf4(value);
}

vbfloat16mf2_t test_vlmul_trunc_v_b16m2_b16mf2(vbfloat16m2_t value) {
  return __riscv_vlmul_trunc_b16mf2(value);
}

vbfloat16m1_t test_vlmul_trunc_v_b16m2_b16m1(vbfloat16m2_t value) {
  return __riscv_vlmul_trunc_b16m1(value);
}

vbfloat16mf4_t test_vlmul_trunc_v_b16m4_b16mf4(vbfloat16m4_t value) {
  return __riscv_vlmul_trunc_b16mf4(value);
}

vbfloat16mf2_t test_vlmul_trunc_v_b16m4_b16mf2(vbfloat16m4_t value) {
  return __riscv_vlmul_trunc_b16mf2(value);
}

vbfloat16m1_t test_vlmul_trunc_v_b16m4_b16m1(vbfloat16m4_t value) {
  return __riscv_vlmul_trunc_b16m1(value);
}

vbfloat16m2_t test_vlmul_trunc_v_b16m4_b16m2(vbfloat16m4_t value) {
  return __riscv_vlmul_trunc_b16m2(value);
}

vbfloat16mf4_t test_vlmul_trunc_v_b16m8_b16mf4(vbfloat16m8_t value) {
  return __riscv_vlmul_trunc_b16mf4(value);
}

vbfloat16mf2_t test_vlmul_trunc_v_b16m8_b16mf2(vbfloat16m8_t value) {
  return __riscv_vlmul_trunc_b16mf2(value);
}

vbfloat16m1_t test_vlmul_trunc_v_b16m8_b16m1(vbfloat16m8_t value) {
  return __riscv_vlmul_trunc_b16m1(value);
}

vbfloat16m2_t test_vlmul_trunc_v_b16m8_b16m2(vbfloat16m8_t value) {
  return __riscv_vlmul_trunc_b16m2(value);
}

vbfloat16m4_t test_vlmul_trunc_v_b16m8_b16m4(vbfloat16m8_t value) {
  return __riscv_vlmul_trunc_b16m4(value);
}
