// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -disable-O0-optnone \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

void test_vsseg4e8_v_i8mf8x4(int8_t *rs1, vint8mf8x4_t vs3, size_t vl) {
  return __riscv_vsseg4e8_v_i8mf8x4(rs1, vs3, vl);
}

void test_vsseg4e8_v_i8mf4x4(int8_t *rs1, vint8mf4x4_t vs3, size_t vl) {
  return __riscv_vsseg4e8_v_i8mf4x4(rs1, vs3, vl);
}

void test_vsseg4e8_v_i8mf2x4(int8_t *rs1, vint8mf2x4_t vs3, size_t vl) {
  return __riscv_vsseg4e8_v_i8mf2x4(rs1, vs3, vl);
}

void test_vsseg4e8_v_i8m1x4(int8_t *rs1, vint8m1x4_t vs3, size_t vl) {
  return __riscv_vsseg4e8_v_i8m1x4(rs1, vs3, vl);
}

void test_vsseg4e8_v_i8m2x4(int8_t *rs1, vint8m2x4_t vs3, size_t vl) {
  return __riscv_vsseg4e8_v_i8m2x4(rs1, vs3, vl);
}

void test_vsseg4e8_v_u8mf8x4(uint8_t *rs1, vuint8mf8x4_t vs3, size_t vl) {
  return __riscv_vsseg4e8_v_u8mf8x4(rs1, vs3, vl);
}

void test_vsseg4e8_v_u8mf4x4(uint8_t *rs1, vuint8mf4x4_t vs3, size_t vl) {
  return __riscv_vsseg4e8_v_u8mf4x4(rs1, vs3, vl);
}

void test_vsseg4e8_v_u8mf2x4(uint8_t *rs1, vuint8mf2x4_t vs3, size_t vl) {
  return __riscv_vsseg4e8_v_u8mf2x4(rs1, vs3, vl);
}

void test_vsseg4e8_v_u8m1x4(uint8_t *rs1, vuint8m1x4_t vs3, size_t vl) {
  return __riscv_vsseg4e8_v_u8m1x4(rs1, vs3, vl);
}

void test_vsseg4e8_v_u8m2x4(uint8_t *rs1, vuint8m2x4_t vs3, size_t vl) {
  return __riscv_vsseg4e8_v_u8m2x4(rs1, vs3, vl);
}

void test_vsseg4e8_v_i8mf8x4_m(vbool64_t vm, int8_t *rs1, vint8mf8x4_t vs3,
                               size_t vl) {
  return __riscv_vsseg4e8_v_i8mf8x4_m(vm, rs1, vs3, vl);
}

void test_vsseg4e8_v_i8mf4x4_m(vbool32_t vm, int8_t *rs1, vint8mf4x4_t vs3,
                               size_t vl) {
  return __riscv_vsseg4e8_v_i8mf4x4_m(vm, rs1, vs3, vl);
}

void test_vsseg4e8_v_i8mf2x4_m(vbool16_t vm, int8_t *rs1, vint8mf2x4_t vs3,
                               size_t vl) {
  return __riscv_vsseg4e8_v_i8mf2x4_m(vm, rs1, vs3, vl);
}

void test_vsseg4e8_v_i8m1x4_m(vbool8_t vm, int8_t *rs1, vint8m1x4_t vs3,
                              size_t vl) {
  return __riscv_vsseg4e8_v_i8m1x4_m(vm, rs1, vs3, vl);
}

void test_vsseg4e8_v_i8m2x4_m(vbool4_t vm, int8_t *rs1, vint8m2x4_t vs3,
                              size_t vl) {
  return __riscv_vsseg4e8_v_i8m2x4_m(vm, rs1, vs3, vl);
}

void test_vsseg4e8_v_u8mf8x4_m(vbool64_t vm, uint8_t *rs1, vuint8mf8x4_t vs3,
                               size_t vl) {
  return __riscv_vsseg4e8_v_u8mf8x4_m(vm, rs1, vs3, vl);
}

void test_vsseg4e8_v_u8mf4x4_m(vbool32_t vm, uint8_t *rs1, vuint8mf4x4_t vs3,
                               size_t vl) {
  return __riscv_vsseg4e8_v_u8mf4x4_m(vm, rs1, vs3, vl);
}

void test_vsseg4e8_v_u8mf2x4_m(vbool16_t vm, uint8_t *rs1, vuint8mf2x4_t vs3,
                               size_t vl) {
  return __riscv_vsseg4e8_v_u8mf2x4_m(vm, rs1, vs3, vl);
}

void test_vsseg4e8_v_u8m1x4_m(vbool8_t vm, uint8_t *rs1, vuint8m1x4_t vs3,
                              size_t vl) {
  return __riscv_vsseg4e8_v_u8m1x4_m(vm, rs1, vs3, vl);
}

void test_vsseg4e8_v_u8m2x4_m(vbool4_t vm, uint8_t *rs1, vuint8m2x4_t vs3,
                              size_t vl) {
  return __riscv_vsseg4e8_v_u8m2x4_m(vm, rs1, vs3, vl);
}
