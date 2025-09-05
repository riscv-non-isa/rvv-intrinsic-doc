// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -target-feature +zfh \
// RUN:   -target-feature +zvfh -disable-O0-optnone \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

void test_vssseg5e32_v_f32mf2x5(float *rs1, ptrdiff_t rs2, vfloat32mf2x5_t vs3,
                                size_t vl) {
  return __riscv_vssseg5e32(rs1, rs2, vs3, vl);
}

void test_vssseg5e32_v_f32m1x5(float *rs1, ptrdiff_t rs2, vfloat32m1x5_t vs3,
                               size_t vl) {
  return __riscv_vssseg5e32(rs1, rs2, vs3, vl);
}

void test_vssseg5e32_v_i32mf2x5(int32_t *rs1, ptrdiff_t rs2, vint32mf2x5_t vs3,
                                size_t vl) {
  return __riscv_vssseg5e32(rs1, rs2, vs3, vl);
}

void test_vssseg5e32_v_i32m1x5(int32_t *rs1, ptrdiff_t rs2, vint32m1x5_t vs3,
                               size_t vl) {
  return __riscv_vssseg5e32(rs1, rs2, vs3, vl);
}

void test_vssseg5e32_v_u32mf2x5(uint32_t *rs1, ptrdiff_t rs2,
                                vuint32mf2x5_t vs3, size_t vl) {
  return __riscv_vssseg5e32(rs1, rs2, vs3, vl);
}

void test_vssseg5e32_v_u32m1x5(uint32_t *rs1, ptrdiff_t rs2, vuint32m1x5_t vs3,
                               size_t vl) {
  return __riscv_vssseg5e32(rs1, rs2, vs3, vl);
}

void test_vssseg5e32_v_f32mf2x5_m(vbool64_t vm, float *rs1, ptrdiff_t rs2,
                                  vfloat32mf2x5_t vs3, size_t vl) {
  return __riscv_vssseg5e32(vm, rs1, rs2, vs3, vl);
}

void test_vssseg5e32_v_f32m1x5_m(vbool32_t vm, float *rs1, ptrdiff_t rs2,
                                 vfloat32m1x5_t vs3, size_t vl) {
  return __riscv_vssseg5e32(vm, rs1, rs2, vs3, vl);
}

void test_vssseg5e32_v_i32mf2x5_m(vbool64_t vm, int32_t *rs1, ptrdiff_t rs2,
                                  vint32mf2x5_t vs3, size_t vl) {
  return __riscv_vssseg5e32(vm, rs1, rs2, vs3, vl);
}

void test_vssseg5e32_v_i32m1x5_m(vbool32_t vm, int32_t *rs1, ptrdiff_t rs2,
                                 vint32m1x5_t vs3, size_t vl) {
  return __riscv_vssseg5e32(vm, rs1, rs2, vs3, vl);
}

void test_vssseg5e32_v_u32mf2x5_m(vbool64_t vm, uint32_t *rs1, ptrdiff_t rs2,
                                  vuint32mf2x5_t vs3, size_t vl) {
  return __riscv_vssseg5e32(vm, rs1, rs2, vs3, vl);
}

void test_vssseg5e32_v_u32m1x5_m(vbool32_t vm, uint32_t *rs1, ptrdiff_t rs2,
                                 vuint32m1x5_t vs3, size_t vl) {
  return __riscv_vssseg5e32(vm, rs1, rs2, vs3, vl);
}
