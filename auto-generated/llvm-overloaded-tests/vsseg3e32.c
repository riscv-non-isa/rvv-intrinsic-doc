// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -target-feature +zfh \
// RUN:   -target-feature +zvfh -disable-O0-optnone \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

void test_vsseg3e32_v_f32mf2x3(float *rs1, vfloat32mf2x3_t vs3, size_t vl) {
  return __riscv_vsseg3e32(rs1, vs3, vl);
}

void test_vsseg3e32_v_f32m1x3(float *rs1, vfloat32m1x3_t vs3, size_t vl) {
  return __riscv_vsseg3e32(rs1, vs3, vl);
}

void test_vsseg3e32_v_f32m2x3(float *rs1, vfloat32m2x3_t vs3, size_t vl) {
  return __riscv_vsseg3e32(rs1, vs3, vl);
}

void test_vsseg3e32_v_i32mf2x3(int32_t *rs1, vint32mf2x3_t vs3, size_t vl) {
  return __riscv_vsseg3e32(rs1, vs3, vl);
}

void test_vsseg3e32_v_i32m1x3(int32_t *rs1, vint32m1x3_t vs3, size_t vl) {
  return __riscv_vsseg3e32(rs1, vs3, vl);
}

void test_vsseg3e32_v_i32m2x3(int32_t *rs1, vint32m2x3_t vs3, size_t vl) {
  return __riscv_vsseg3e32(rs1, vs3, vl);
}

void test_vsseg3e32_v_u32mf2x3(uint32_t *rs1, vuint32mf2x3_t vs3, size_t vl) {
  return __riscv_vsseg3e32(rs1, vs3, vl);
}

void test_vsseg3e32_v_u32m1x3(uint32_t *rs1, vuint32m1x3_t vs3, size_t vl) {
  return __riscv_vsseg3e32(rs1, vs3, vl);
}

void test_vsseg3e32_v_u32m2x3(uint32_t *rs1, vuint32m2x3_t vs3, size_t vl) {
  return __riscv_vsseg3e32(rs1, vs3, vl);
}

void test_vsseg3e32_v_f32mf2x3_m(vbool64_t vm, float *rs1, vfloat32mf2x3_t vs3,
                                 size_t vl) {
  return __riscv_vsseg3e32(vm, rs1, vs3, vl);
}

void test_vsseg3e32_v_f32m1x3_m(vbool32_t vm, float *rs1, vfloat32m1x3_t vs3,
                                size_t vl) {
  return __riscv_vsseg3e32(vm, rs1, vs3, vl);
}

void test_vsseg3e32_v_f32m2x3_m(vbool16_t vm, float *rs1, vfloat32m2x3_t vs3,
                                size_t vl) {
  return __riscv_vsseg3e32(vm, rs1, vs3, vl);
}

void test_vsseg3e32_v_i32mf2x3_m(vbool64_t vm, int32_t *rs1, vint32mf2x3_t vs3,
                                 size_t vl) {
  return __riscv_vsseg3e32(vm, rs1, vs3, vl);
}

void test_vsseg3e32_v_i32m1x3_m(vbool32_t vm, int32_t *rs1, vint32m1x3_t vs3,
                                size_t vl) {
  return __riscv_vsseg3e32(vm, rs1, vs3, vl);
}

void test_vsseg3e32_v_i32m2x3_m(vbool16_t vm, int32_t *rs1, vint32m2x3_t vs3,
                                size_t vl) {
  return __riscv_vsseg3e32(vm, rs1, vs3, vl);
}

void test_vsseg3e32_v_u32mf2x3_m(vbool64_t vm, uint32_t *rs1,
                                 vuint32mf2x3_t vs3, size_t vl) {
  return __riscv_vsseg3e32(vm, rs1, vs3, vl);
}

void test_vsseg3e32_v_u32m1x3_m(vbool32_t vm, uint32_t *rs1, vuint32m1x3_t vs3,
                                size_t vl) {
  return __riscv_vsseg3e32(vm, rs1, vs3, vl);
}

void test_vsseg3e32_v_u32m2x3_m(vbool16_t vm, uint32_t *rs1, vuint32m2x3_t vs3,
                                size_t vl) {
  return __riscv_vsseg3e32(vm, rs1, vs3, vl);
}
