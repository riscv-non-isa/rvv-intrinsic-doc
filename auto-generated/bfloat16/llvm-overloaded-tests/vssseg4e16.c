// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v \
// RUN:   -target-feature +zvfbfmin \
// RUN:   -target-feature +zvfbfwma -disable-O0-optnone \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

void test_vssseg4e16_v_bf16mf4x4(__bf16 *rs1, ptrdiff_t rs2,
                                 vbfloat16mf4x4_t vs3, size_t vl) {
  return __riscv_vssseg4e16(rs1, rs2, vs3, vl);
}

void test_vssseg4e16_v_bf16mf2x4(__bf16 *rs1, ptrdiff_t rs2,
                                 vbfloat16mf2x4_t vs3, size_t vl) {
  return __riscv_vssseg4e16(rs1, rs2, vs3, vl);
}

void test_vssseg4e16_v_bf16m1x4(__bf16 *rs1, ptrdiff_t rs2, vbfloat16m1x4_t vs3,
                                size_t vl) {
  return __riscv_vssseg4e16(rs1, rs2, vs3, vl);
}

void test_vssseg4e16_v_bf16m2x4(__bf16 *rs1, ptrdiff_t rs2, vbfloat16m2x4_t vs3,
                                size_t vl) {
  return __riscv_vssseg4e16(rs1, rs2, vs3, vl);
}

void test_vssseg4e16_v_bf16mf4x4_m(vbool64_t vm, __bf16 *rs1, ptrdiff_t rs2,
                                   vbfloat16mf4x4_t vs3, size_t vl) {
  return __riscv_vssseg4e16(vm, rs1, rs2, vs3, vl);
}

void test_vssseg4e16_v_bf16mf2x4_m(vbool32_t vm, __bf16 *rs1, ptrdiff_t rs2,
                                   vbfloat16mf2x4_t vs3, size_t vl) {
  return __riscv_vssseg4e16(vm, rs1, rs2, vs3, vl);
}

void test_vssseg4e16_v_bf16m1x4_m(vbool16_t vm, __bf16 *rs1, ptrdiff_t rs2,
                                  vbfloat16m1x4_t vs3, size_t vl) {
  return __riscv_vssseg4e16(vm, rs1, rs2, vs3, vl);
}

void test_vssseg4e16_v_bf16m2x4_m(vbool8_t vm, __bf16 *rs1, ptrdiff_t rs2,
                                  vbfloat16m2x4_t vs3, size_t vl) {
  return __riscv_vssseg4e16(vm, rs1, rs2, vs3, vl);
}
