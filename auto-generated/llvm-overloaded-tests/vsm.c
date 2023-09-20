// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -disable-O0-optnone \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

void test_vsm_v_b1(uint8_t *rs1, vbool1_t vs3, size_t vl) {
  return __riscv_vsm(rs1, vs3, vl);
}

void test_vsm_v_b2(uint8_t *rs1, vbool2_t vs3, size_t vl) {
  return __riscv_vsm(rs1, vs3, vl);
}

void test_vsm_v_b4(uint8_t *rs1, vbool4_t vs3, size_t vl) {
  return __riscv_vsm(rs1, vs3, vl);
}

void test_vsm_v_b8(uint8_t *rs1, vbool8_t vs3, size_t vl) {
  return __riscv_vsm(rs1, vs3, vl);
}

void test_vsm_v_b16(uint8_t *rs1, vbool16_t vs3, size_t vl) {
  return __riscv_vsm(rs1, vs3, vl);
}

void test_vsm_v_b32(uint8_t *rs1, vbool32_t vs3, size_t vl) {
  return __riscv_vsm(rs1, vs3, vl);
}

void test_vsm_v_b64(uint8_t *rs1, vbool64_t vs3, size_t vl) {
  return __riscv_vsm(rs1, vs3, vl);
}
