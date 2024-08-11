// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -target-feature +zfh \
// RUN:   -target-feature +zvfh -disable-O0-optnone \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

void test_vssseg2e16_v_f16mf4x2(_Float16 *rs1, ptrdiff_t rs2,
                                vfloat16mf4x2_t vs3, size_t vl) {
  return __riscv_vssseg2e16_v_f16mf4x2(rs1, rs2, vs3, vl);
}

void test_vssseg2e16_v_f16mf2x2(_Float16 *rs1, ptrdiff_t rs2,
                                vfloat16mf2x2_t vs3, size_t vl) {
  return __riscv_vssseg2e16_v_f16mf2x2(rs1, rs2, vs3, vl);
}

void test_vssseg2e16_v_f16m1x2(_Float16 *rs1, ptrdiff_t rs2, vfloat16m1x2_t vs3,
                               size_t vl) {
  return __riscv_vssseg2e16_v_f16m1x2(rs1, rs2, vs3, vl);
}

void test_vssseg2e16_v_f16m2x2(_Float16 *rs1, ptrdiff_t rs2, vfloat16m2x2_t vs3,
                               size_t vl) {
  return __riscv_vssseg2e16_v_f16m2x2(rs1, rs2, vs3, vl);
}

void test_vssseg2e16_v_f16m4x2(_Float16 *rs1, ptrdiff_t rs2, vfloat16m4x2_t vs3,
                               size_t vl) {
  return __riscv_vssseg2e16_v_f16m4x2(rs1, rs2, vs3, vl);
}

void test_vssseg2e16_v_f16mf4x2_m(vbool64_t vm, _Float16 *rs1, ptrdiff_t rs2,
                                  vfloat16mf4x2_t vs3, size_t vl) {
  return __riscv_vssseg2e16_v_f16mf4x2_m(vm, rs1, rs2, vs3, vl);
}

void test_vssseg2e16_v_f16mf2x2_m(vbool32_t vm, _Float16 *rs1, ptrdiff_t rs2,
                                  vfloat16mf2x2_t vs3, size_t vl) {
  return __riscv_vssseg2e16_v_f16mf2x2_m(vm, rs1, rs2, vs3, vl);
}

void test_vssseg2e16_v_f16m1x2_m(vbool16_t vm, _Float16 *rs1, ptrdiff_t rs2,
                                 vfloat16m1x2_t vs3, size_t vl) {
  return __riscv_vssseg2e16_v_f16m1x2_m(vm, rs1, rs2, vs3, vl);
}

void test_vssseg2e16_v_f16m2x2_m(vbool8_t vm, _Float16 *rs1, ptrdiff_t rs2,
                                 vfloat16m2x2_t vs3, size_t vl) {
  return __riscv_vssseg2e16_v_f16m2x2_m(vm, rs1, rs2, vs3, vl);
}

void test_vssseg2e16_v_f16m4x2_m(vbool4_t vm, _Float16 *rs1, ptrdiff_t rs2,
                                 vfloat16m4x2_t vs3, size_t vl) {
  return __riscv_vssseg2e16_v_f16m4x2_m(vm, rs1, rs2, vs3, vl);
}
