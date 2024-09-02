// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -target-feature +zfh \
// RUN:   -target-feature +zvfh -disable-O0-optnone \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

void test_vsse32_v_f32mf2(float *rs1, ptrdiff_t rs2, vfloat32mf2_t vs3,
                          size_t vl) {
  return __riscv_vsse32(rs1, rs2, vs3, vl);
}

void test_vsse32_v_f32m1(float *rs1, ptrdiff_t rs2, vfloat32m1_t vs3,
                         size_t vl) {
  return __riscv_vsse32(rs1, rs2, vs3, vl);
}

void test_vsse32_v_f32m2(float *rs1, ptrdiff_t rs2, vfloat32m2_t vs3,
                         size_t vl) {
  return __riscv_vsse32(rs1, rs2, vs3, vl);
}

void test_vsse32_v_f32m4(float *rs1, ptrdiff_t rs2, vfloat32m4_t vs3,
                         size_t vl) {
  return __riscv_vsse32(rs1, rs2, vs3, vl);
}

void test_vsse32_v_f32m8(float *rs1, ptrdiff_t rs2, vfloat32m8_t vs3,
                         size_t vl) {
  return __riscv_vsse32(rs1, rs2, vs3, vl);
}

void test_vsse32_v_i32mf2(int32_t *rs1, ptrdiff_t rs2, vint32mf2_t vs3,
                          size_t vl) {
  return __riscv_vsse32(rs1, rs2, vs3, vl);
}

void test_vsse32_v_i32m1(int32_t *rs1, ptrdiff_t rs2, vint32m1_t vs3,
                         size_t vl) {
  return __riscv_vsse32(rs1, rs2, vs3, vl);
}

void test_vsse32_v_i32m2(int32_t *rs1, ptrdiff_t rs2, vint32m2_t vs3,
                         size_t vl) {
  return __riscv_vsse32(rs1, rs2, vs3, vl);
}

void test_vsse32_v_i32m4(int32_t *rs1, ptrdiff_t rs2, vint32m4_t vs3,
                         size_t vl) {
  return __riscv_vsse32(rs1, rs2, vs3, vl);
}

void test_vsse32_v_i32m8(int32_t *rs1, ptrdiff_t rs2, vint32m8_t vs3,
                         size_t vl) {
  return __riscv_vsse32(rs1, rs2, vs3, vl);
}

void test_vsse32_v_u32mf2(uint32_t *rs1, ptrdiff_t rs2, vuint32mf2_t vs3,
                          size_t vl) {
  return __riscv_vsse32(rs1, rs2, vs3, vl);
}

void test_vsse32_v_u32m1(uint32_t *rs1, ptrdiff_t rs2, vuint32m1_t vs3,
                         size_t vl) {
  return __riscv_vsse32(rs1, rs2, vs3, vl);
}

void test_vsse32_v_u32m2(uint32_t *rs1, ptrdiff_t rs2, vuint32m2_t vs3,
                         size_t vl) {
  return __riscv_vsse32(rs1, rs2, vs3, vl);
}

void test_vsse32_v_u32m4(uint32_t *rs1, ptrdiff_t rs2, vuint32m4_t vs3,
                         size_t vl) {
  return __riscv_vsse32(rs1, rs2, vs3, vl);
}

void test_vsse32_v_u32m8(uint32_t *rs1, ptrdiff_t rs2, vuint32m8_t vs3,
                         size_t vl) {
  return __riscv_vsse32(rs1, rs2, vs3, vl);
}

void test_vsse32_v_f32mf2_m(vbool64_t vm, float *rs1, ptrdiff_t rs2,
                            vfloat32mf2_t vs3, size_t vl) {
  return __riscv_vsse32(vm, rs1, rs2, vs3, vl);
}

void test_vsse32_v_f32m1_m(vbool32_t vm, float *rs1, ptrdiff_t rs2,
                           vfloat32m1_t vs3, size_t vl) {
  return __riscv_vsse32(vm, rs1, rs2, vs3, vl);
}

void test_vsse32_v_f32m2_m(vbool16_t vm, float *rs1, ptrdiff_t rs2,
                           vfloat32m2_t vs3, size_t vl) {
  return __riscv_vsse32(vm, rs1, rs2, vs3, vl);
}

void test_vsse32_v_f32m4_m(vbool8_t vm, float *rs1, ptrdiff_t rs2,
                           vfloat32m4_t vs3, size_t vl) {
  return __riscv_vsse32(vm, rs1, rs2, vs3, vl);
}

void test_vsse32_v_f32m8_m(vbool4_t vm, float *rs1, ptrdiff_t rs2,
                           vfloat32m8_t vs3, size_t vl) {
  return __riscv_vsse32(vm, rs1, rs2, vs3, vl);
}

void test_vsse32_v_i32mf2_m(vbool64_t vm, int32_t *rs1, ptrdiff_t rs2,
                            vint32mf2_t vs3, size_t vl) {
  return __riscv_vsse32(vm, rs1, rs2, vs3, vl);
}

void test_vsse32_v_i32m1_m(vbool32_t vm, int32_t *rs1, ptrdiff_t rs2,
                           vint32m1_t vs3, size_t vl) {
  return __riscv_vsse32(vm, rs1, rs2, vs3, vl);
}

void test_vsse32_v_i32m2_m(vbool16_t vm, int32_t *rs1, ptrdiff_t rs2,
                           vint32m2_t vs3, size_t vl) {
  return __riscv_vsse32(vm, rs1, rs2, vs3, vl);
}

void test_vsse32_v_i32m4_m(vbool8_t vm, int32_t *rs1, ptrdiff_t rs2,
                           vint32m4_t vs3, size_t vl) {
  return __riscv_vsse32(vm, rs1, rs2, vs3, vl);
}

void test_vsse32_v_i32m8_m(vbool4_t vm, int32_t *rs1, ptrdiff_t rs2,
                           vint32m8_t vs3, size_t vl) {
  return __riscv_vsse32(vm, rs1, rs2, vs3, vl);
}

void test_vsse32_v_u32mf2_m(vbool64_t vm, uint32_t *rs1, ptrdiff_t rs2,
                            vuint32mf2_t vs3, size_t vl) {
  return __riscv_vsse32(vm, rs1, rs2, vs3, vl);
}

void test_vsse32_v_u32m1_m(vbool32_t vm, uint32_t *rs1, ptrdiff_t rs2,
                           vuint32m1_t vs3, size_t vl) {
  return __riscv_vsse32(vm, rs1, rs2, vs3, vl);
}

void test_vsse32_v_u32m2_m(vbool16_t vm, uint32_t *rs1, ptrdiff_t rs2,
                           vuint32m2_t vs3, size_t vl) {
  return __riscv_vsse32(vm, rs1, rs2, vs3, vl);
}

void test_vsse32_v_u32m4_m(vbool8_t vm, uint32_t *rs1, ptrdiff_t rs2,
                           vuint32m4_t vs3, size_t vl) {
  return __riscv_vsse32(vm, rs1, rs2, vs3, vl);
}

void test_vsse32_v_u32m8_m(vbool4_t vm, uint32_t *rs1, ptrdiff_t rs2,
                           vuint32m8_t vs3, size_t vl) {
  return __riscv_vsse32(vm, rs1, rs2, vs3, vl);
}
