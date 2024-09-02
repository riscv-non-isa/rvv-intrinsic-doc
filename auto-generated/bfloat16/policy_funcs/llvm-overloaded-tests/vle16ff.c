// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v \
// RUN:   -target-feature +zvfbfmin \
// RUN:   -target-feature +zvfbfwma -disable-O0-optnone \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

vbfloat16mf4_t test_vle16ff_v_bf16mf4_tu(vbfloat16mf4_t vd, const __bf16 *rs1,
                                         size_t *new_vl, size_t vl) {
  return __riscv_vle16ff_tu(vd, rs1, new_vl, vl);
}

vbfloat16mf2_t test_vle16ff_v_bf16mf2_tu(vbfloat16mf2_t vd, const __bf16 *rs1,
                                         size_t *new_vl, size_t vl) {
  return __riscv_vle16ff_tu(vd, rs1, new_vl, vl);
}

vbfloat16m1_t test_vle16ff_v_bf16m1_tu(vbfloat16m1_t vd, const __bf16 *rs1,
                                       size_t *new_vl, size_t vl) {
  return __riscv_vle16ff_tu(vd, rs1, new_vl, vl);
}

vbfloat16m2_t test_vle16ff_v_bf16m2_tu(vbfloat16m2_t vd, const __bf16 *rs1,
                                       size_t *new_vl, size_t vl) {
  return __riscv_vle16ff_tu(vd, rs1, new_vl, vl);
}

vbfloat16m4_t test_vle16ff_v_bf16m4_tu(vbfloat16m4_t vd, const __bf16 *rs1,
                                       size_t *new_vl, size_t vl) {
  return __riscv_vle16ff_tu(vd, rs1, new_vl, vl);
}

vbfloat16m8_t test_vle16ff_v_bf16m8_tu(vbfloat16m8_t vd, const __bf16 *rs1,
                                       size_t *new_vl, size_t vl) {
  return __riscv_vle16ff_tu(vd, rs1, new_vl, vl);
}

vbfloat16mf4_t test_vle16ff_v_bf16mf4_tum(vbool64_t vm, vbfloat16mf4_t vd,
                                          const __bf16 *rs1, size_t *new_vl,
                                          size_t vl) {
  return __riscv_vle16ff_tum(vm, vd, rs1, new_vl, vl);
}

vbfloat16mf2_t test_vle16ff_v_bf16mf2_tum(vbool32_t vm, vbfloat16mf2_t vd,
                                          const __bf16 *rs1, size_t *new_vl,
                                          size_t vl) {
  return __riscv_vle16ff_tum(vm, vd, rs1, new_vl, vl);
}

vbfloat16m1_t test_vle16ff_v_bf16m1_tum(vbool16_t vm, vbfloat16m1_t vd,
                                        const __bf16 *rs1, size_t *new_vl,
                                        size_t vl) {
  return __riscv_vle16ff_tum(vm, vd, rs1, new_vl, vl);
}

vbfloat16m2_t test_vle16ff_v_bf16m2_tum(vbool8_t vm, vbfloat16m2_t vd,
                                        const __bf16 *rs1, size_t *new_vl,
                                        size_t vl) {
  return __riscv_vle16ff_tum(vm, vd, rs1, new_vl, vl);
}

vbfloat16m4_t test_vle16ff_v_bf16m4_tum(vbool4_t vm, vbfloat16m4_t vd,
                                        const __bf16 *rs1, size_t *new_vl,
                                        size_t vl) {
  return __riscv_vle16ff_tum(vm, vd, rs1, new_vl, vl);
}

vbfloat16m8_t test_vle16ff_v_bf16m8_tum(vbool2_t vm, vbfloat16m8_t vd,
                                        const __bf16 *rs1, size_t *new_vl,
                                        size_t vl) {
  return __riscv_vle16ff_tum(vm, vd, rs1, new_vl, vl);
}

vbfloat16mf4_t test_vle16ff_v_bf16mf4_tumu(vbool64_t vm, vbfloat16mf4_t vd,
                                           const __bf16 *rs1, size_t *new_vl,
                                           size_t vl) {
  return __riscv_vle16ff_tumu(vm, vd, rs1, new_vl, vl);
}

vbfloat16mf2_t test_vle16ff_v_bf16mf2_tumu(vbool32_t vm, vbfloat16mf2_t vd,
                                           const __bf16 *rs1, size_t *new_vl,
                                           size_t vl) {
  return __riscv_vle16ff_tumu(vm, vd, rs1, new_vl, vl);
}

vbfloat16m1_t test_vle16ff_v_bf16m1_tumu(vbool16_t vm, vbfloat16m1_t vd,
                                         const __bf16 *rs1, size_t *new_vl,
                                         size_t vl) {
  return __riscv_vle16ff_tumu(vm, vd, rs1, new_vl, vl);
}

vbfloat16m2_t test_vle16ff_v_bf16m2_tumu(vbool8_t vm, vbfloat16m2_t vd,
                                         const __bf16 *rs1, size_t *new_vl,
                                         size_t vl) {
  return __riscv_vle16ff_tumu(vm, vd, rs1, new_vl, vl);
}

vbfloat16m4_t test_vle16ff_v_bf16m4_tumu(vbool4_t vm, vbfloat16m4_t vd,
                                         const __bf16 *rs1, size_t *new_vl,
                                         size_t vl) {
  return __riscv_vle16ff_tumu(vm, vd, rs1, new_vl, vl);
}

vbfloat16m8_t test_vle16ff_v_bf16m8_tumu(vbool2_t vm, vbfloat16m8_t vd,
                                         const __bf16 *rs1, size_t *new_vl,
                                         size_t vl) {
  return __riscv_vle16ff_tumu(vm, vd, rs1, new_vl, vl);
}

vbfloat16mf4_t test_vle16ff_v_bf16mf4_mu(vbool64_t vm, vbfloat16mf4_t vd,
                                         const __bf16 *rs1, size_t *new_vl,
                                         size_t vl) {
  return __riscv_vle16ff_mu(vm, vd, rs1, new_vl, vl);
}

vbfloat16mf2_t test_vle16ff_v_bf16mf2_mu(vbool32_t vm, vbfloat16mf2_t vd,
                                         const __bf16 *rs1, size_t *new_vl,
                                         size_t vl) {
  return __riscv_vle16ff_mu(vm, vd, rs1, new_vl, vl);
}

vbfloat16m1_t test_vle16ff_v_bf16m1_mu(vbool16_t vm, vbfloat16m1_t vd,
                                       const __bf16 *rs1, size_t *new_vl,
                                       size_t vl) {
  return __riscv_vle16ff_mu(vm, vd, rs1, new_vl, vl);
}

vbfloat16m2_t test_vle16ff_v_bf16m2_mu(vbool8_t vm, vbfloat16m2_t vd,
                                       const __bf16 *rs1, size_t *new_vl,
                                       size_t vl) {
  return __riscv_vle16ff_mu(vm, vd, rs1, new_vl, vl);
}

vbfloat16m4_t test_vle16ff_v_bf16m4_mu(vbool4_t vm, vbfloat16m4_t vd,
                                       const __bf16 *rs1, size_t *new_vl,
                                       size_t vl) {
  return __riscv_vle16ff_mu(vm, vd, rs1, new_vl, vl);
}

vbfloat16m8_t test_vle16ff_v_bf16m8_mu(vbool2_t vm, vbfloat16m8_t vd,
                                       const __bf16 *rs1, size_t *new_vl,
                                       size_t vl) {
  return __riscv_vle16ff_mu(vm, vd, rs1, new_vl, vl);
}
