// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -target-feature +zfh \
// RUN:   -target-feature +zvfh -disable-O0-optnone \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

void test_vsseg5e16_v_f16mf4x5(_Float16 *rs1, vfloat16mf4x5_t vs3, size_t vl) {
  return __riscv_vsseg5e16_v_f16mf4x5(rs1, vs3, vl);
}

void test_vsseg5e16_v_f16mf2x5(_Float16 *rs1, vfloat16mf2x5_t vs3, size_t vl) {
  return __riscv_vsseg5e16_v_f16mf2x5(rs1, vs3, vl);
}

void test_vsseg5e16_v_f16m1x5(_Float16 *rs1, vfloat16m1x5_t vs3, size_t vl) {
  return __riscv_vsseg5e16_v_f16m1x5(rs1, vs3, vl);
}

void test_vsseg5e16_v_i16mf4x5(int16_t *rs1, vint16mf4x5_t vs3, size_t vl) {
  return __riscv_vsseg5e16_v_i16mf4x5(rs1, vs3, vl);
}

void test_vsseg5e16_v_i16mf2x5(int16_t *rs1, vint16mf2x5_t vs3, size_t vl) {
  return __riscv_vsseg5e16_v_i16mf2x5(rs1, vs3, vl);
}

void test_vsseg5e16_v_i16m1x5(int16_t *rs1, vint16m1x5_t vs3, size_t vl) {
  return __riscv_vsseg5e16_v_i16m1x5(rs1, vs3, vl);
}

void test_vsseg5e16_v_u16mf4x5(uint16_t *rs1, vuint16mf4x5_t vs3, size_t vl) {
  return __riscv_vsseg5e16_v_u16mf4x5(rs1, vs3, vl);
}

void test_vsseg5e16_v_u16mf2x5(uint16_t *rs1, vuint16mf2x5_t vs3, size_t vl) {
  return __riscv_vsseg5e16_v_u16mf2x5(rs1, vs3, vl);
}

void test_vsseg5e16_v_u16m1x5(uint16_t *rs1, vuint16m1x5_t vs3, size_t vl) {
  return __riscv_vsseg5e16_v_u16m1x5(rs1, vs3, vl);
}

void test_vsseg5e16_v_f16mf4x5_m(vbool64_t vm, _Float16 *rs1,
                                 vfloat16mf4x5_t vs3, size_t vl) {
  return __riscv_vsseg5e16_v_f16mf4x5_m(vm, rs1, vs3, vl);
}

void test_vsseg5e16_v_f16mf2x5_m(vbool32_t vm, _Float16 *rs1,
                                 vfloat16mf2x5_t vs3, size_t vl) {
  return __riscv_vsseg5e16_v_f16mf2x5_m(vm, rs1, vs3, vl);
}

void test_vsseg5e16_v_f16m1x5_m(vbool16_t vm, _Float16 *rs1, vfloat16m1x5_t vs3,
                                size_t vl) {
  return __riscv_vsseg5e16_v_f16m1x5_m(vm, rs1, vs3, vl);
}

void test_vsseg5e16_v_i16mf4x5_m(vbool64_t vm, int16_t *rs1, vint16mf4x5_t vs3,
                                 size_t vl) {
  return __riscv_vsseg5e16_v_i16mf4x5_m(vm, rs1, vs3, vl);
}

void test_vsseg5e16_v_i16mf2x5_m(vbool32_t vm, int16_t *rs1, vint16mf2x5_t vs3,
                                 size_t vl) {
  return __riscv_vsseg5e16_v_i16mf2x5_m(vm, rs1, vs3, vl);
}

void test_vsseg5e16_v_i16m1x5_m(vbool16_t vm, int16_t *rs1, vint16m1x5_t vs3,
                                size_t vl) {
  return __riscv_vsseg5e16_v_i16m1x5_m(vm, rs1, vs3, vl);
}

void test_vsseg5e16_v_u16mf4x5_m(vbool64_t vm, uint16_t *rs1,
                                 vuint16mf4x5_t vs3, size_t vl) {
  return __riscv_vsseg5e16_v_u16mf4x5_m(vm, rs1, vs3, vl);
}

void test_vsseg5e16_v_u16mf2x5_m(vbool32_t vm, uint16_t *rs1,
                                 vuint16mf2x5_t vs3, size_t vl) {
  return __riscv_vsseg5e16_v_u16mf2x5_m(vm, rs1, vs3, vl);
}

void test_vsseg5e16_v_u16m1x5_m(vbool16_t vm, uint16_t *rs1, vuint16m1x5_t vs3,
                                size_t vl) {
  return __riscv_vsseg5e16_v_u16m1x5_m(vm, rs1, vs3, vl);
}
