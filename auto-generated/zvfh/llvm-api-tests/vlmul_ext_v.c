// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -target-feature +zfh \
// RUN:   -target-feature +zvfh -disable-O0-optnone \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

vfloat16mf2_t test_vlmul_ext_v_f16mf4_f16mf2(vfloat16mf4_t value) {
  return __riscv_vlmul_ext_v_f16mf4_f16mf2(value);
}

vfloat16m1_t test_vlmul_ext_v_f16mf4_f16m1(vfloat16mf4_t value) {
  return __riscv_vlmul_ext_v_f16mf4_f16m1(value);
}

vfloat16m2_t test_vlmul_ext_v_f16mf4_f16m2(vfloat16mf4_t value) {
  return __riscv_vlmul_ext_v_f16mf4_f16m2(value);
}

vfloat16m4_t test_vlmul_ext_v_f16mf4_f16m4(vfloat16mf4_t value) {
  return __riscv_vlmul_ext_v_f16mf4_f16m4(value);
}

vfloat16m8_t test_vlmul_ext_v_f16mf4_f16m8(vfloat16mf4_t value) {
  return __riscv_vlmul_ext_v_f16mf4_f16m8(value);
}

vfloat16m1_t test_vlmul_ext_v_f16mf2_f16m1(vfloat16mf2_t value) {
  return __riscv_vlmul_ext_v_f16mf2_f16m1(value);
}

vfloat16m2_t test_vlmul_ext_v_f16mf2_f16m2(vfloat16mf2_t value) {
  return __riscv_vlmul_ext_v_f16mf2_f16m2(value);
}

vfloat16m4_t test_vlmul_ext_v_f16mf2_f16m4(vfloat16mf2_t value) {
  return __riscv_vlmul_ext_v_f16mf2_f16m4(value);
}

vfloat16m8_t test_vlmul_ext_v_f16mf2_f16m8(vfloat16mf2_t value) {
  return __riscv_vlmul_ext_v_f16mf2_f16m8(value);
}

vfloat16m2_t test_vlmul_ext_v_f16m1_f16m2(vfloat16m1_t value) {
  return __riscv_vlmul_ext_v_f16m1_f16m2(value);
}

vfloat16m4_t test_vlmul_ext_v_f16m1_f16m4(vfloat16m1_t value) {
  return __riscv_vlmul_ext_v_f16m1_f16m4(value);
}

vfloat16m8_t test_vlmul_ext_v_f16m1_f16m8(vfloat16m1_t value) {
  return __riscv_vlmul_ext_v_f16m1_f16m8(value);
}

vfloat16m4_t test_vlmul_ext_v_f16m2_f16m4(vfloat16m2_t value) {
  return __riscv_vlmul_ext_v_f16m2_f16m4(value);
}

vfloat16m8_t test_vlmul_ext_v_f16m2_f16m8(vfloat16m2_t value) {
  return __riscv_vlmul_ext_v_f16m2_f16m8(value);
}

vfloat16m8_t test_vlmul_ext_v_f16m4_f16m8(vfloat16m4_t value) {
  return __riscv_vlmul_ext_v_f16m4_f16m8(value);
}
