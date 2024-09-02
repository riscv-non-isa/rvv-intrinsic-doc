// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v \
// RUN:   -target-feature +zvfbfmin \
// RUN:   -target-feature +zvfbfwma -disable-O0-optnone \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

void test_vsuxseg6ei16_v_bf16mf4x6(__bf16 *rs1, vuint16mf4_t vs2,
                                   vbfloat16mf4x6_t vs3, size_t vl) {
  return __riscv_vsuxseg6ei16(rs1, vs2, vs3, vl);
}

void test_vsuxseg6ei16_v_bf16mf2x6(__bf16 *rs1, vuint16mf2_t vs2,
                                   vbfloat16mf2x6_t vs3, size_t vl) {
  return __riscv_vsuxseg6ei16(rs1, vs2, vs3, vl);
}

void test_vsuxseg6ei16_v_bf16m1x6(__bf16 *rs1, vuint16m1_t vs2,
                                  vbfloat16m1x6_t vs3, size_t vl) {
  return __riscv_vsuxseg6ei16(rs1, vs2, vs3, vl);
}

void test_vsuxseg6ei16_v_bf16mf4x6_m(vbool64_t vm, __bf16 *rs1,
                                     vuint16mf4_t vs2, vbfloat16mf4x6_t vs3,
                                     size_t vl) {
  return __riscv_vsuxseg6ei16(vm, rs1, vs2, vs3, vl);
}

void test_vsuxseg6ei16_v_bf16mf2x6_m(vbool32_t vm, __bf16 *rs1,
                                     vuint16mf2_t vs2, vbfloat16mf2x6_t vs3,
                                     size_t vl) {
  return __riscv_vsuxseg6ei16(vm, rs1, vs2, vs3, vl);
}

void test_vsuxseg6ei16_v_bf16m1x6_m(vbool16_t vm, __bf16 *rs1, vuint16m1_t vs2,
                                    vbfloat16m1x6_t vs3, size_t vl) {
  return __riscv_vsuxseg6ei16(vm, rs1, vs2, vs3, vl);
}
