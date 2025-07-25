// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v \
// RUN:   -target-feature +zvfbfmin \
// RUN:   -target-feature +zvfbfwma -disable-O0-optnone \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

void test_vsuxseg2ei8_v_bf16mf4x2(__bf16 *rs1, vuint8mf8_t vs2,
                                  vbfloat16mf4x2_t vs3, size_t vl) {
  return __riscv_vsuxseg2ei8_v_bf16mf4x2(rs1, vs2, vs3, vl);
}

void test_vsuxseg2ei8_v_bf16mf2x2(__bf16 *rs1, vuint8mf4_t vs2,
                                  vbfloat16mf2x2_t vs3, size_t vl) {
  return __riscv_vsuxseg2ei8_v_bf16mf2x2(rs1, vs2, vs3, vl);
}

void test_vsuxseg2ei8_v_bf16m1x2(__bf16 *rs1, vuint8mf2_t vs2,
                                 vbfloat16m1x2_t vs3, size_t vl) {
  return __riscv_vsuxseg2ei8_v_bf16m1x2(rs1, vs2, vs3, vl);
}

void test_vsuxseg2ei8_v_bf16m2x2(__bf16 *rs1, vuint8m1_t vs2,
                                 vbfloat16m2x2_t vs3, size_t vl) {
  return __riscv_vsuxseg2ei8_v_bf16m2x2(rs1, vs2, vs3, vl);
}

void test_vsuxseg2ei8_v_bf16m4x2(__bf16 *rs1, vuint8m2_t vs2,
                                 vbfloat16m4x2_t vs3, size_t vl) {
  return __riscv_vsuxseg2ei8_v_bf16m4x2(rs1, vs2, vs3, vl);
}

void test_vsuxseg2ei8_v_bf16mf4x2_m(vbool64_t vm, __bf16 *rs1, vuint8mf8_t vs2,
                                    vbfloat16mf4x2_t vs3, size_t vl) {
  return __riscv_vsuxseg2ei8_v_bf16mf4x2_m(vm, rs1, vs2, vs3, vl);
}

void test_vsuxseg2ei8_v_bf16mf2x2_m(vbool32_t vm, __bf16 *rs1, vuint8mf4_t vs2,
                                    vbfloat16mf2x2_t vs3, size_t vl) {
  return __riscv_vsuxseg2ei8_v_bf16mf2x2_m(vm, rs1, vs2, vs3, vl);
}

void test_vsuxseg2ei8_v_bf16m1x2_m(vbool16_t vm, __bf16 *rs1, vuint8mf2_t vs2,
                                   vbfloat16m1x2_t vs3, size_t vl) {
  return __riscv_vsuxseg2ei8_v_bf16m1x2_m(vm, rs1, vs2, vs3, vl);
}

void test_vsuxseg2ei8_v_bf16m2x2_m(vbool8_t vm, __bf16 *rs1, vuint8m1_t vs2,
                                   vbfloat16m2x2_t vs3, size_t vl) {
  return __riscv_vsuxseg2ei8_v_bf16m2x2_m(vm, rs1, vs2, vs3, vl);
}

void test_vsuxseg2ei8_v_bf16m4x2_m(vbool4_t vm, __bf16 *rs1, vuint8m2_t vs2,
                                   vbfloat16m4x2_t vs3, size_t vl) {
  return __riscv_vsuxseg2ei8_v_bf16m4x2_m(vm, rs1, vs2, vs3, vl);
}
