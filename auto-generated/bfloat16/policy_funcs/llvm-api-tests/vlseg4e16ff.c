// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v \
// RUN:   -target-feature +experimental-zvfbfmin \
// RUN:   -target-feature +experimental-zvfbfwma -disable-O0-optnone \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

vbfloat16mf4x4_t test_vlseg4e16ff_v_bf16mf4x4_tu(vbfloat16mf4x4_t vd,
                                                 const __bf16 *rs1,
                                                 size_t *new_vl, size_t vl) {
  return __riscv_vlseg4e16ff_v_bf16mf4x4_tu(vd, rs1, new_vl, vl);
}

vbfloat16mf2x4_t test_vlseg4e16ff_v_bf16mf2x4_tu(vbfloat16mf2x4_t vd,
                                                 const __bf16 *rs1,
                                                 size_t *new_vl, size_t vl) {
  return __riscv_vlseg4e16ff_v_bf16mf2x4_tu(vd, rs1, new_vl, vl);
}

vbfloat16m1x4_t test_vlseg4e16ff_v_bf16m1x4_tu(vbfloat16m1x4_t vd,
                                               const __bf16 *rs1,
                                               size_t *new_vl, size_t vl) {
  return __riscv_vlseg4e16ff_v_bf16m1x4_tu(vd, rs1, new_vl, vl);
}

vbfloat16m2x4_t test_vlseg4e16ff_v_bf16m2x4_tu(vbfloat16m2x4_t vd,
                                               const __bf16 *rs1,
                                               size_t *new_vl, size_t vl) {
  return __riscv_vlseg4e16ff_v_bf16m2x4_tu(vd, rs1, new_vl, vl);
}

vbfloat16mf4x4_t test_vlseg4e16ff_v_bf16mf4x4_tum(vbool64_t vm,
                                                  vbfloat16mf4x4_t vd,
                                                  const __bf16 *rs1,
                                                  size_t *new_vl, size_t vl) {
  return __riscv_vlseg4e16ff_v_bf16mf4x4_tum(vm, vd, rs1, new_vl, vl);
}

vbfloat16mf2x4_t test_vlseg4e16ff_v_bf16mf2x4_tum(vbool32_t vm,
                                                  vbfloat16mf2x4_t vd,
                                                  const __bf16 *rs1,
                                                  size_t *new_vl, size_t vl) {
  return __riscv_vlseg4e16ff_v_bf16mf2x4_tum(vm, vd, rs1, new_vl, vl);
}

vbfloat16m1x4_t test_vlseg4e16ff_v_bf16m1x4_tum(vbool16_t vm,
                                                vbfloat16m1x4_t vd,
                                                const __bf16 *rs1,
                                                size_t *new_vl, size_t vl) {
  return __riscv_vlseg4e16ff_v_bf16m1x4_tum(vm, vd, rs1, new_vl, vl);
}

vbfloat16m2x4_t test_vlseg4e16ff_v_bf16m2x4_tum(vbool8_t vm, vbfloat16m2x4_t vd,
                                                const __bf16 *rs1,
                                                size_t *new_vl, size_t vl) {
  return __riscv_vlseg4e16ff_v_bf16m2x4_tum(vm, vd, rs1, new_vl, vl);
}

vbfloat16mf4x4_t test_vlseg4e16ff_v_bf16mf4x4_tumu(vbool64_t vm,
                                                   vbfloat16mf4x4_t vd,
                                                   const __bf16 *rs1,
                                                   size_t *new_vl, size_t vl) {
  return __riscv_vlseg4e16ff_v_bf16mf4x4_tumu(vm, vd, rs1, new_vl, vl);
}

vbfloat16mf2x4_t test_vlseg4e16ff_v_bf16mf2x4_tumu(vbool32_t vm,
                                                   vbfloat16mf2x4_t vd,
                                                   const __bf16 *rs1,
                                                   size_t *new_vl, size_t vl) {
  return __riscv_vlseg4e16ff_v_bf16mf2x4_tumu(vm, vd, rs1, new_vl, vl);
}

vbfloat16m1x4_t test_vlseg4e16ff_v_bf16m1x4_tumu(vbool16_t vm,
                                                 vbfloat16m1x4_t vd,
                                                 const __bf16 *rs1,
                                                 size_t *new_vl, size_t vl) {
  return __riscv_vlseg4e16ff_v_bf16m1x4_tumu(vm, vd, rs1, new_vl, vl);
}

vbfloat16m2x4_t test_vlseg4e16ff_v_bf16m2x4_tumu(vbool8_t vm,
                                                 vbfloat16m2x4_t vd,
                                                 const __bf16 *rs1,
                                                 size_t *new_vl, size_t vl) {
  return __riscv_vlseg4e16ff_v_bf16m2x4_tumu(vm, vd, rs1, new_vl, vl);
}

vbfloat16mf4x4_t test_vlseg4e16ff_v_bf16mf4x4_mu(vbool64_t vm,
                                                 vbfloat16mf4x4_t vd,
                                                 const __bf16 *rs1,
                                                 size_t *new_vl, size_t vl) {
  return __riscv_vlseg4e16ff_v_bf16mf4x4_mu(vm, vd, rs1, new_vl, vl);
}

vbfloat16mf2x4_t test_vlseg4e16ff_v_bf16mf2x4_mu(vbool32_t vm,
                                                 vbfloat16mf2x4_t vd,
                                                 const __bf16 *rs1,
                                                 size_t *new_vl, size_t vl) {
  return __riscv_vlseg4e16ff_v_bf16mf2x4_mu(vm, vd, rs1, new_vl, vl);
}

vbfloat16m1x4_t test_vlseg4e16ff_v_bf16m1x4_mu(vbool16_t vm, vbfloat16m1x4_t vd,
                                               const __bf16 *rs1,
                                               size_t *new_vl, size_t vl) {
  return __riscv_vlseg4e16ff_v_bf16m1x4_mu(vm, vd, rs1, new_vl, vl);
}

vbfloat16m2x4_t test_vlseg4e16ff_v_bf16m2x4_mu(vbool8_t vm, vbfloat16m2x4_t vd,
                                               const __bf16 *rs1,
                                               size_t *new_vl, size_t vl) {
  return __riscv_vlseg4e16ff_v_bf16m2x4_mu(vm, vd, rs1, new_vl, vl);
}
