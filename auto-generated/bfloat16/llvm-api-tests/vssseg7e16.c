// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v \
// RUN:   -target-feature +experimental-zvfbfmin \
// RUN:   -target-feature +experimental-zvfbfwma -disable-O0-optnone \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

void test_vssseg7e16_v_bf16mf4x7(__bf16 *rs1, ptrdiff_t rs2,
                                 vbfloat16mf4x7_t vs3, size_t vl) {
  return __riscv_vssseg7e16_v_bf16mf4x7(rs1, rs2, vs3, vl);
}

void test_vssseg7e16_v_bf16mf2x7(__bf16 *rs1, ptrdiff_t rs2,
                                 vbfloat16mf2x7_t vs3, size_t vl) {
  return __riscv_vssseg7e16_v_bf16mf2x7(rs1, rs2, vs3, vl);
}

void test_vssseg7e16_v_bf16m1x7(__bf16 *rs1, ptrdiff_t rs2, vbfloat16m1x7_t vs3,
                                size_t vl) {
  return __riscv_vssseg7e16_v_bf16m1x7(rs1, rs2, vs3, vl);
}

void test_vssseg7e16_v_bf16mf4x7_m(vbool64_t vm, __bf16 *rs1, ptrdiff_t rs2,
                                   vbfloat16mf4x7_t vs3, size_t vl) {
  return __riscv_vssseg7e16_v_bf16mf4x7_m(vm, rs1, rs2, vs3, vl);
}

void test_vssseg7e16_v_bf16mf2x7_m(vbool32_t vm, __bf16 *rs1, ptrdiff_t rs2,
                                   vbfloat16mf2x7_t vs3, size_t vl) {
  return __riscv_vssseg7e16_v_bf16mf2x7_m(vm, rs1, rs2, vs3, vl);
}

void test_vssseg7e16_v_bf16m1x7_m(vbool16_t vm, __bf16 *rs1, ptrdiff_t rs2,
                                  vbfloat16m1x7_t vs3, size_t vl) {
  return __riscv_vssseg7e16_v_bf16m1x7_m(vm, rs1, rs2, vs3, vl);
}
