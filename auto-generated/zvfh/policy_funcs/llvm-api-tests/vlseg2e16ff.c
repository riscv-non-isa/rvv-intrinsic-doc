// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -target-feature +zfh \
// RUN:   -target-feature +zvfh -disable-O0-optnone \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

vfloat16mf4x2_t test_vlseg2e16ff_v_f16mf4x2_tu(vfloat16mf4x2_t vd,
                                               const _Float16 *rs1,
                                               size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e16ff_v_f16mf4x2_tu(vd, rs1, new_vl, vl);
}

vfloat16mf2x2_t test_vlseg2e16ff_v_f16mf2x2_tu(vfloat16mf2x2_t vd,
                                               const _Float16 *rs1,
                                               size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e16ff_v_f16mf2x2_tu(vd, rs1, new_vl, vl);
}

vfloat16m1x2_t test_vlseg2e16ff_v_f16m1x2_tu(vfloat16m1x2_t vd,
                                             const _Float16 *rs1,
                                             size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e16ff_v_f16m1x2_tu(vd, rs1, new_vl, vl);
}

vfloat16m2x2_t test_vlseg2e16ff_v_f16m2x2_tu(vfloat16m2x2_t vd,
                                             const _Float16 *rs1,
                                             size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e16ff_v_f16m2x2_tu(vd, rs1, new_vl, vl);
}

vfloat16m4x2_t test_vlseg2e16ff_v_f16m4x2_tu(vfloat16m4x2_t vd,
                                             const _Float16 *rs1,
                                             size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e16ff_v_f16m4x2_tu(vd, rs1, new_vl, vl);
}

vfloat16mf4x2_t test_vlseg2e16ff_v_f16mf4x2_tum(vbool64_t vm,
                                                vfloat16mf4x2_t vd,
                                                const _Float16 *rs1,
                                                size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e16ff_v_f16mf4x2_tum(vm, vd, rs1, new_vl, vl);
}

vfloat16mf2x2_t test_vlseg2e16ff_v_f16mf2x2_tum(vbool32_t vm,
                                                vfloat16mf2x2_t vd,
                                                const _Float16 *rs1,
                                                size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e16ff_v_f16mf2x2_tum(vm, vd, rs1, new_vl, vl);
}

vfloat16m1x2_t test_vlseg2e16ff_v_f16m1x2_tum(vbool16_t vm, vfloat16m1x2_t vd,
                                              const _Float16 *rs1,
                                              size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e16ff_v_f16m1x2_tum(vm, vd, rs1, new_vl, vl);
}

vfloat16m2x2_t test_vlseg2e16ff_v_f16m2x2_tum(vbool8_t vm, vfloat16m2x2_t vd,
                                              const _Float16 *rs1,
                                              size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e16ff_v_f16m2x2_tum(vm, vd, rs1, new_vl, vl);
}

vfloat16m4x2_t test_vlseg2e16ff_v_f16m4x2_tum(vbool4_t vm, vfloat16m4x2_t vd,
                                              const _Float16 *rs1,
                                              size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e16ff_v_f16m4x2_tum(vm, vd, rs1, new_vl, vl);
}

vfloat16mf4x2_t test_vlseg2e16ff_v_f16mf4x2_tumu(vbool64_t vm,
                                                 vfloat16mf4x2_t vd,
                                                 const _Float16 *rs1,
                                                 size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e16ff_v_f16mf4x2_tumu(vm, vd, rs1, new_vl, vl);
}

vfloat16mf2x2_t test_vlseg2e16ff_v_f16mf2x2_tumu(vbool32_t vm,
                                                 vfloat16mf2x2_t vd,
                                                 const _Float16 *rs1,
                                                 size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e16ff_v_f16mf2x2_tumu(vm, vd, rs1, new_vl, vl);
}

vfloat16m1x2_t test_vlseg2e16ff_v_f16m1x2_tumu(vbool16_t vm, vfloat16m1x2_t vd,
                                               const _Float16 *rs1,
                                               size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e16ff_v_f16m1x2_tumu(vm, vd, rs1, new_vl, vl);
}

vfloat16m2x2_t test_vlseg2e16ff_v_f16m2x2_tumu(vbool8_t vm, vfloat16m2x2_t vd,
                                               const _Float16 *rs1,
                                               size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e16ff_v_f16m2x2_tumu(vm, vd, rs1, new_vl, vl);
}

vfloat16m4x2_t test_vlseg2e16ff_v_f16m4x2_tumu(vbool4_t vm, vfloat16m4x2_t vd,
                                               const _Float16 *rs1,
                                               size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e16ff_v_f16m4x2_tumu(vm, vd, rs1, new_vl, vl);
}

vfloat16mf4x2_t test_vlseg2e16ff_v_f16mf4x2_mu(vbool64_t vm, vfloat16mf4x2_t vd,
                                               const _Float16 *rs1,
                                               size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e16ff_v_f16mf4x2_mu(vm, vd, rs1, new_vl, vl);
}

vfloat16mf2x2_t test_vlseg2e16ff_v_f16mf2x2_mu(vbool32_t vm, vfloat16mf2x2_t vd,
                                               const _Float16 *rs1,
                                               size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e16ff_v_f16mf2x2_mu(vm, vd, rs1, new_vl, vl);
}

vfloat16m1x2_t test_vlseg2e16ff_v_f16m1x2_mu(vbool16_t vm, vfloat16m1x2_t vd,
                                             const _Float16 *rs1,
                                             size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e16ff_v_f16m1x2_mu(vm, vd, rs1, new_vl, vl);
}

vfloat16m2x2_t test_vlseg2e16ff_v_f16m2x2_mu(vbool8_t vm, vfloat16m2x2_t vd,
                                             const _Float16 *rs1,
                                             size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e16ff_v_f16m2x2_mu(vm, vd, rs1, new_vl, vl);
}

vfloat16m4x2_t test_vlseg2e16ff_v_f16m4x2_mu(vbool4_t vm, vfloat16m4x2_t vd,
                                             const _Float16 *rs1,
                                             size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e16ff_v_f16m4x2_mu(vm, vd, rs1, new_vl, vl);
}
