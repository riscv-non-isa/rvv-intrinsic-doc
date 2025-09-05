// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -target-feature +zfh \
// RUN:   -target-feature +zvfh -disable-O0-optnone \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

void test_vsseg4e32_v_f32mf2x4(float *rs1, vfloat32mf2x4_t vs3, size_t vl) {
  return __riscv_vsseg4e32_v_f32mf2x4(rs1, vs3, vl);
}

void test_vsseg4e32_v_f32m1x4(float *rs1, vfloat32m1x4_t vs3, size_t vl) {
  return __riscv_vsseg4e32_v_f32m1x4(rs1, vs3, vl);
}

void test_vsseg4e32_v_f32m2x4(float *rs1, vfloat32m2x4_t vs3, size_t vl) {
  return __riscv_vsseg4e32_v_f32m2x4(rs1, vs3, vl);
}

void test_vsseg4e32_v_i32mf2x4(int32_t *rs1, vint32mf2x4_t vs3, size_t vl) {
  return __riscv_vsseg4e32_v_i32mf2x4(rs1, vs3, vl);
}

void test_vsseg4e32_v_i32m1x4(int32_t *rs1, vint32m1x4_t vs3, size_t vl) {
  return __riscv_vsseg4e32_v_i32m1x4(rs1, vs3, vl);
}

void test_vsseg4e32_v_i32m2x4(int32_t *rs1, vint32m2x4_t vs3, size_t vl) {
  return __riscv_vsseg4e32_v_i32m2x4(rs1, vs3, vl);
}

void test_vsseg4e32_v_u32mf2x4(uint32_t *rs1, vuint32mf2x4_t vs3, size_t vl) {
  return __riscv_vsseg4e32_v_u32mf2x4(rs1, vs3, vl);
}

void test_vsseg4e32_v_u32m1x4(uint32_t *rs1, vuint32m1x4_t vs3, size_t vl) {
  return __riscv_vsseg4e32_v_u32m1x4(rs1, vs3, vl);
}

void test_vsseg4e32_v_u32m2x4(uint32_t *rs1, vuint32m2x4_t vs3, size_t vl) {
  return __riscv_vsseg4e32_v_u32m2x4(rs1, vs3, vl);
}

void test_vsseg4e32_v_f32mf2x4_m(vbool64_t vm, float *rs1, vfloat32mf2x4_t vs3,
                                 size_t vl) {
  return __riscv_vsseg4e32_v_f32mf2x4_m(vm, rs1, vs3, vl);
}

void test_vsseg4e32_v_f32m1x4_m(vbool32_t vm, float *rs1, vfloat32m1x4_t vs3,
                                size_t vl) {
  return __riscv_vsseg4e32_v_f32m1x4_m(vm, rs1, vs3, vl);
}

void test_vsseg4e32_v_f32m2x4_m(vbool16_t vm, float *rs1, vfloat32m2x4_t vs3,
                                size_t vl) {
  return __riscv_vsseg4e32_v_f32m2x4_m(vm, rs1, vs3, vl);
}

void test_vsseg4e32_v_i32mf2x4_m(vbool64_t vm, int32_t *rs1, vint32mf2x4_t vs3,
                                 size_t vl) {
  return __riscv_vsseg4e32_v_i32mf2x4_m(vm, rs1, vs3, vl);
}

void test_vsseg4e32_v_i32m1x4_m(vbool32_t vm, int32_t *rs1, vint32m1x4_t vs3,
                                size_t vl) {
  return __riscv_vsseg4e32_v_i32m1x4_m(vm, rs1, vs3, vl);
}

void test_vsseg4e32_v_i32m2x4_m(vbool16_t vm, int32_t *rs1, vint32m2x4_t vs3,
                                size_t vl) {
  return __riscv_vsseg4e32_v_i32m2x4_m(vm, rs1, vs3, vl);
}

void test_vsseg4e32_v_u32mf2x4_m(vbool64_t vm, uint32_t *rs1,
                                 vuint32mf2x4_t vs3, size_t vl) {
  return __riscv_vsseg4e32_v_u32mf2x4_m(vm, rs1, vs3, vl);
}

void test_vsseg4e32_v_u32m1x4_m(vbool32_t vm, uint32_t *rs1, vuint32m1x4_t vs3,
                                size_t vl) {
  return __riscv_vsseg4e32_v_u32m1x4_m(vm, rs1, vs3, vl);
}

void test_vsseg4e32_v_u32m2x4_m(vbool16_t vm, uint32_t *rs1, vuint32m2x4_t vs3,
                                size_t vl) {
  return __riscv_vsseg4e32_v_u32m2x4_m(vm, rs1, vs3, vl);
}
