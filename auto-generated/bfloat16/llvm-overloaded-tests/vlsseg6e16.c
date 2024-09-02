// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v \
// RUN:   -target-feature +zvfbfmin \
// RUN:   -target-feature +zvfbfwma -disable-O0-optnone \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

vbfloat16mf4x6_t test_vlsseg6e16_v_bf16mf4x6_m(vbool64_t vm, const __bf16 *rs1,
                                               ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg6e16(vm, rs1, rs2, vl);
}

vbfloat16mf2x6_t test_vlsseg6e16_v_bf16mf2x6_m(vbool32_t vm, const __bf16 *rs1,
                                               ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg6e16(vm, rs1, rs2, vl);
}

vbfloat16m1x6_t test_vlsseg6e16_v_bf16m1x6_m(vbool16_t vm, const __bf16 *rs1,
                                             ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg6e16(vm, rs1, rs2, vl);
}
