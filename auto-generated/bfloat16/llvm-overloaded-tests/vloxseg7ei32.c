// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v \
// RUN:   -target-feature +zvfbfmin \
// RUN:   -target-feature +zvfbfwma -disable-O0-optnone \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

vbfloat16mf4x7_t test_vloxseg7ei32_v_bf16mf4x7(const __bf16 *rs1,
                                               vuint32mf2_t rs2, size_t vl) {
  return __riscv_vloxseg7ei32(rs1, rs2, vl);
}

vbfloat16mf2x7_t test_vloxseg7ei32_v_bf16mf2x7(const __bf16 *rs1,
                                               vuint32m1_t rs2, size_t vl) {
  return __riscv_vloxseg7ei32(rs1, rs2, vl);
}

vbfloat16m1x7_t test_vloxseg7ei32_v_bf16m1x7(const __bf16 *rs1, vuint32m2_t rs2,
                                             size_t vl) {
  return __riscv_vloxseg7ei32(rs1, rs2, vl);
}

vbfloat16mf4x7_t test_vloxseg7ei32_v_bf16mf4x7_m(vbool64_t vm,
                                                 const __bf16 *rs1,
                                                 vuint32mf2_t rs2, size_t vl) {
  return __riscv_vloxseg7ei32(vm, rs1, rs2, vl);
}

vbfloat16mf2x7_t test_vloxseg7ei32_v_bf16mf2x7_m(vbool32_t vm,
                                                 const __bf16 *rs1,
                                                 vuint32m1_t rs2, size_t vl) {
  return __riscv_vloxseg7ei32(vm, rs1, rs2, vl);
}

vbfloat16m1x7_t test_vloxseg7ei32_v_bf16m1x7_m(vbool16_t vm, const __bf16 *rs1,
                                               vuint32m2_t rs2, size_t vl) {
  return __riscv_vloxseg7ei32(vm, rs1, rs2, vl);
}
