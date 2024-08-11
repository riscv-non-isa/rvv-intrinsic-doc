// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -disable-O0-optnone \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

void test_vsseg8e16_v_i16mf4x8(int16_t *rs1, vint16mf4x8_t vs3, size_t vl) {
  return __riscv_vsseg8e16(rs1, vs3, vl);
}

void test_vsseg8e16_v_i16mf2x8(int16_t *rs1, vint16mf2x8_t vs3, size_t vl) {
  return __riscv_vsseg8e16(rs1, vs3, vl);
}

void test_vsseg8e16_v_i16m1x8(int16_t *rs1, vint16m1x8_t vs3, size_t vl) {
  return __riscv_vsseg8e16(rs1, vs3, vl);
}

void test_vsseg8e16_v_u16mf4x8(uint16_t *rs1, vuint16mf4x8_t vs3, size_t vl) {
  return __riscv_vsseg8e16(rs1, vs3, vl);
}

void test_vsseg8e16_v_u16mf2x8(uint16_t *rs1, vuint16mf2x8_t vs3, size_t vl) {
  return __riscv_vsseg8e16(rs1, vs3, vl);
}

void test_vsseg8e16_v_u16m1x8(uint16_t *rs1, vuint16m1x8_t vs3, size_t vl) {
  return __riscv_vsseg8e16(rs1, vs3, vl);
}

void test_vsseg8e16_v_i16mf4x8_m(vbool64_t vm, int16_t *rs1, vint16mf4x8_t vs3,
                                 size_t vl) {
  return __riscv_vsseg8e16(vm, rs1, vs3, vl);
}

void test_vsseg8e16_v_i16mf2x8_m(vbool32_t vm, int16_t *rs1, vint16mf2x8_t vs3,
                                 size_t vl) {
  return __riscv_vsseg8e16(vm, rs1, vs3, vl);
}

void test_vsseg8e16_v_i16m1x8_m(vbool16_t vm, int16_t *rs1, vint16m1x8_t vs3,
                                size_t vl) {
  return __riscv_vsseg8e16(vm, rs1, vs3, vl);
}

void test_vsseg8e16_v_u16mf4x8_m(vbool64_t vm, uint16_t *rs1,
                                 vuint16mf4x8_t vs3, size_t vl) {
  return __riscv_vsseg8e16(vm, rs1, vs3, vl);
}

void test_vsseg8e16_v_u16mf2x8_m(vbool32_t vm, uint16_t *rs1,
                                 vuint16mf2x8_t vs3, size_t vl) {
  return __riscv_vsseg8e16(vm, rs1, vs3, vl);
}

void test_vsseg8e16_v_u16m1x8_m(vbool16_t vm, uint16_t *rs1, vuint16m1x8_t vs3,
                                size_t vl) {
  return __riscv_vsseg8e16(vm, rs1, vs3, vl);
}
