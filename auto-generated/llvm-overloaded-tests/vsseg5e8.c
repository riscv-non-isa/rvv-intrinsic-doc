// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -disable-O0-optnone \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

void test_vsseg5e8_v_i8mf8x5(int8_t *rs1, vint8mf8x5_t vs3, size_t vl) {
  return __riscv_vsseg5e8(rs1, vs3, vl);
}

void test_vsseg5e8_v_i8mf4x5(int8_t *rs1, vint8mf4x5_t vs3, size_t vl) {
  return __riscv_vsseg5e8(rs1, vs3, vl);
}

void test_vsseg5e8_v_i8mf2x5(int8_t *rs1, vint8mf2x5_t vs3, size_t vl) {
  return __riscv_vsseg5e8(rs1, vs3, vl);
}

void test_vsseg5e8_v_i8m1x5(int8_t *rs1, vint8m1x5_t vs3, size_t vl) {
  return __riscv_vsseg5e8(rs1, vs3, vl);
}

void test_vsseg5e8_v_u8mf8x5(uint8_t *rs1, vuint8mf8x5_t vs3, size_t vl) {
  return __riscv_vsseg5e8(rs1, vs3, vl);
}

void test_vsseg5e8_v_u8mf4x5(uint8_t *rs1, vuint8mf4x5_t vs3, size_t vl) {
  return __riscv_vsseg5e8(rs1, vs3, vl);
}

void test_vsseg5e8_v_u8mf2x5(uint8_t *rs1, vuint8mf2x5_t vs3, size_t vl) {
  return __riscv_vsseg5e8(rs1, vs3, vl);
}

void test_vsseg5e8_v_u8m1x5(uint8_t *rs1, vuint8m1x5_t vs3, size_t vl) {
  return __riscv_vsseg5e8(rs1, vs3, vl);
}

void test_vsseg5e8_v_i8mf8x5_m(vbool64_t vm, int8_t *rs1, vint8mf8x5_t vs3,
                               size_t vl) {
  return __riscv_vsseg5e8(vm, rs1, vs3, vl);
}

void test_vsseg5e8_v_i8mf4x5_m(vbool32_t vm, int8_t *rs1, vint8mf4x5_t vs3,
                               size_t vl) {
  return __riscv_vsseg5e8(vm, rs1, vs3, vl);
}

void test_vsseg5e8_v_i8mf2x5_m(vbool16_t vm, int8_t *rs1, vint8mf2x5_t vs3,
                               size_t vl) {
  return __riscv_vsseg5e8(vm, rs1, vs3, vl);
}

void test_vsseg5e8_v_i8m1x5_m(vbool8_t vm, int8_t *rs1, vint8m1x5_t vs3,
                              size_t vl) {
  return __riscv_vsseg5e8(vm, rs1, vs3, vl);
}

void test_vsseg5e8_v_u8mf8x5_m(vbool64_t vm, uint8_t *rs1, vuint8mf8x5_t vs3,
                               size_t vl) {
  return __riscv_vsseg5e8(vm, rs1, vs3, vl);
}

void test_vsseg5e8_v_u8mf4x5_m(vbool32_t vm, uint8_t *rs1, vuint8mf4x5_t vs3,
                               size_t vl) {
  return __riscv_vsseg5e8(vm, rs1, vs3, vl);
}

void test_vsseg5e8_v_u8mf2x5_m(vbool16_t vm, uint8_t *rs1, vuint8mf2x5_t vs3,
                               size_t vl) {
  return __riscv_vsseg5e8(vm, rs1, vs3, vl);
}

void test_vsseg5e8_v_u8m1x5_m(vbool8_t vm, uint8_t *rs1, vuint8m1x5_t vs3,
                              size_t vl) {
  return __riscv_vsseg5e8(vm, rs1, vs3, vl);
}
