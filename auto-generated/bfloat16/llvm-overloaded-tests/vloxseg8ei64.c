// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v \
// RUN:   -target-feature +zvfbfmin \
// RUN:   -target-feature +zvfbfwma -disable-O0-optnone \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

vbfloat16mf4x8_t test_vloxseg8ei64_v_bf16mf4x8(const __bf16 *rs1,
                                               vuint64m1_t rs2, size_t vl) {
  return __riscv_vloxseg8ei64(rs1, rs2, vl);
}

vbfloat16mf2x8_t test_vloxseg8ei64_v_bf16mf2x8(const __bf16 *rs1,
                                               vuint64m2_t rs2, size_t vl) {
  return __riscv_vloxseg8ei64(rs1, rs2, vl);
}

vbfloat16m1x8_t test_vloxseg8ei64_v_bf16m1x8(const __bf16 *rs1, vuint64m4_t rs2,
                                             size_t vl) {
  return __riscv_vloxseg8ei64(rs1, rs2, vl);
}

vbfloat16mf4x8_t test_vloxseg8ei64_v_bf16mf4x8_m(vbool64_t vm,
                                                 const __bf16 *rs1,
                                                 vuint64m1_t rs2, size_t vl) {
  return __riscv_vloxseg8ei64(vm, rs1, rs2, vl);
}

vbfloat16mf2x8_t test_vloxseg8ei64_v_bf16mf2x8_m(vbool32_t vm,
                                                 const __bf16 *rs1,
                                                 vuint64m2_t rs2, size_t vl) {
  return __riscv_vloxseg8ei64(vm, rs1, rs2, vl);
}

vbfloat16m1x8_t test_vloxseg8ei64_v_bf16m1x8_m(vbool16_t vm, const __bf16 *rs1,
                                               vuint64m4_t rs2, size_t vl) {
  return __riscv_vloxseg8ei64(vm, rs1, rs2, vl);
}
