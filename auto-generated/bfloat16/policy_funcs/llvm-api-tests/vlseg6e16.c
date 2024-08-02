// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v \
// RUN:   -target-feature +experimental-zvfbfmin \
// RUN:   -target-feature +experimental-zvfbfwma -disable-O0-optnone \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

vbfloat16mf4x6_t test_vlseg6e16_v_bf16mf4x6_tu(vbfloat16mf4x6_t vd,
                                               const __bf16 *rs1, size_t vl) {
  return __riscv_vlseg6e16_v_bf16mf4x6_tu(vd, rs1, vl);
}

vbfloat16mf2x6_t test_vlseg6e16_v_bf16mf2x6_tu(vbfloat16mf2x6_t vd,
                                               const __bf16 *rs1, size_t vl) {
  return __riscv_vlseg6e16_v_bf16mf2x6_tu(vd, rs1, vl);
}

vbfloat16m1x6_t test_vlseg6e16_v_bf16m1x6_tu(vbfloat16m1x6_t vd,
                                             const __bf16 *rs1, size_t vl) {
  return __riscv_vlseg6e16_v_bf16m1x6_tu(vd, rs1, vl);
}

vbfloat16mf4x6_t test_vlseg6e16_v_bf16mf4x6_tum(vbool64_t vm,
                                                vbfloat16mf4x6_t vd,
                                                const __bf16 *rs1, size_t vl) {
  return __riscv_vlseg6e16_v_bf16mf4x6_tum(vm, vd, rs1, vl);
}

vbfloat16mf2x6_t test_vlseg6e16_v_bf16mf2x6_tum(vbool32_t vm,
                                                vbfloat16mf2x6_t vd,
                                                const __bf16 *rs1, size_t vl) {
  return __riscv_vlseg6e16_v_bf16mf2x6_tum(vm, vd, rs1, vl);
}

vbfloat16m1x6_t test_vlseg6e16_v_bf16m1x6_tum(vbool16_t vm, vbfloat16m1x6_t vd,
                                              const __bf16 *rs1, size_t vl) {
  return __riscv_vlseg6e16_v_bf16m1x6_tum(vm, vd, rs1, vl);
}

vbfloat16mf4x6_t test_vlseg6e16_v_bf16mf4x6_tumu(vbool64_t vm,
                                                 vbfloat16mf4x6_t vd,
                                                 const __bf16 *rs1, size_t vl) {
  return __riscv_vlseg6e16_v_bf16mf4x6_tumu(vm, vd, rs1, vl);
}

vbfloat16mf2x6_t test_vlseg6e16_v_bf16mf2x6_tumu(vbool32_t vm,
                                                 vbfloat16mf2x6_t vd,
                                                 const __bf16 *rs1, size_t vl) {
  return __riscv_vlseg6e16_v_bf16mf2x6_tumu(vm, vd, rs1, vl);
}

vbfloat16m1x6_t test_vlseg6e16_v_bf16m1x6_tumu(vbool16_t vm, vbfloat16m1x6_t vd,
                                               const __bf16 *rs1, size_t vl) {
  return __riscv_vlseg6e16_v_bf16m1x6_tumu(vm, vd, rs1, vl);
}

vbfloat16mf4x6_t test_vlseg6e16_v_bf16mf4x6_mu(vbool64_t vm,
                                               vbfloat16mf4x6_t vd,
                                               const __bf16 *rs1, size_t vl) {
  return __riscv_vlseg6e16_v_bf16mf4x6_mu(vm, vd, rs1, vl);
}

vbfloat16mf2x6_t test_vlseg6e16_v_bf16mf2x6_mu(vbool32_t vm,
                                               vbfloat16mf2x6_t vd,
                                               const __bf16 *rs1, size_t vl) {
  return __riscv_vlseg6e16_v_bf16mf2x6_mu(vm, vd, rs1, vl);
}

vbfloat16m1x6_t test_vlseg6e16_v_bf16m1x6_mu(vbool16_t vm, vbfloat16m1x6_t vd,
                                             const __bf16 *rs1, size_t vl) {
  return __riscv_vlseg6e16_v_bf16m1x6_mu(vm, vd, rs1, vl);
}
