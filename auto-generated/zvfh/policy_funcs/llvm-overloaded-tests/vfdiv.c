// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -target-feature +zfh \
// RUN:   -target-feature +zvfh -disable-O0-optnone \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

vfloat16mf4_t test_vfdiv_vv_f16mf4_tu(vfloat16mf4_t vd, vfloat16mf4_t vs2,
                                      vfloat16mf4_t vs1, size_t vl) {
  return __riscv_vfdiv_tu(vd, vs2, vs1, vl);
}

vfloat16mf4_t test_vfdiv_vf_f16mf4_tu(vfloat16mf4_t vd, vfloat16mf4_t vs2,
                                      _Float16 rs1, size_t vl) {
  return __riscv_vfdiv_tu(vd, vs2, rs1, vl);
}

vfloat16mf2_t test_vfdiv_vv_f16mf2_tu(vfloat16mf2_t vd, vfloat16mf2_t vs2,
                                      vfloat16mf2_t vs1, size_t vl) {
  return __riscv_vfdiv_tu(vd, vs2, vs1, vl);
}

vfloat16mf2_t test_vfdiv_vf_f16mf2_tu(vfloat16mf2_t vd, vfloat16mf2_t vs2,
                                      _Float16 rs1, size_t vl) {
  return __riscv_vfdiv_tu(vd, vs2, rs1, vl);
}

vfloat16m1_t test_vfdiv_vv_f16m1_tu(vfloat16m1_t vd, vfloat16m1_t vs2,
                                    vfloat16m1_t vs1, size_t vl) {
  return __riscv_vfdiv_tu(vd, vs2, vs1, vl);
}

vfloat16m1_t test_vfdiv_vf_f16m1_tu(vfloat16m1_t vd, vfloat16m1_t vs2,
                                    _Float16 rs1, size_t vl) {
  return __riscv_vfdiv_tu(vd, vs2, rs1, vl);
}

vfloat16m2_t test_vfdiv_vv_f16m2_tu(vfloat16m2_t vd, vfloat16m2_t vs2,
                                    vfloat16m2_t vs1, size_t vl) {
  return __riscv_vfdiv_tu(vd, vs2, vs1, vl);
}

vfloat16m2_t test_vfdiv_vf_f16m2_tu(vfloat16m2_t vd, vfloat16m2_t vs2,
                                    _Float16 rs1, size_t vl) {
  return __riscv_vfdiv_tu(vd, vs2, rs1, vl);
}

vfloat16m4_t test_vfdiv_vv_f16m4_tu(vfloat16m4_t vd, vfloat16m4_t vs2,
                                    vfloat16m4_t vs1, size_t vl) {
  return __riscv_vfdiv_tu(vd, vs2, vs1, vl);
}

vfloat16m4_t test_vfdiv_vf_f16m4_tu(vfloat16m4_t vd, vfloat16m4_t vs2,
                                    _Float16 rs1, size_t vl) {
  return __riscv_vfdiv_tu(vd, vs2, rs1, vl);
}

vfloat16m8_t test_vfdiv_vv_f16m8_tu(vfloat16m8_t vd, vfloat16m8_t vs2,
                                    vfloat16m8_t vs1, size_t vl) {
  return __riscv_vfdiv_tu(vd, vs2, vs1, vl);
}

vfloat16m8_t test_vfdiv_vf_f16m8_tu(vfloat16m8_t vd, vfloat16m8_t vs2,
                                    _Float16 rs1, size_t vl) {
  return __riscv_vfdiv_tu(vd, vs2, rs1, vl);
}

vfloat16mf4_t test_vfdiv_vv_f16mf4_tum(vbool64_t vm, vfloat16mf4_t vd,
                                       vfloat16mf4_t vs2, vfloat16mf4_t vs1,
                                       size_t vl) {
  return __riscv_vfdiv_tum(vm, vd, vs2, vs1, vl);
}

vfloat16mf4_t test_vfdiv_vf_f16mf4_tum(vbool64_t vm, vfloat16mf4_t vd,
                                       vfloat16mf4_t vs2, _Float16 rs1,
                                       size_t vl) {
  return __riscv_vfdiv_tum(vm, vd, vs2, rs1, vl);
}

vfloat16mf2_t test_vfdiv_vv_f16mf2_tum(vbool32_t vm, vfloat16mf2_t vd,
                                       vfloat16mf2_t vs2, vfloat16mf2_t vs1,
                                       size_t vl) {
  return __riscv_vfdiv_tum(vm, vd, vs2, vs1, vl);
}

vfloat16mf2_t test_vfdiv_vf_f16mf2_tum(vbool32_t vm, vfloat16mf2_t vd,
                                       vfloat16mf2_t vs2, _Float16 rs1,
                                       size_t vl) {
  return __riscv_vfdiv_tum(vm, vd, vs2, rs1, vl);
}

vfloat16m1_t test_vfdiv_vv_f16m1_tum(vbool16_t vm, vfloat16m1_t vd,
                                     vfloat16m1_t vs2, vfloat16m1_t vs1,
                                     size_t vl) {
  return __riscv_vfdiv_tum(vm, vd, vs2, vs1, vl);
}

vfloat16m1_t test_vfdiv_vf_f16m1_tum(vbool16_t vm, vfloat16m1_t vd,
                                     vfloat16m1_t vs2, _Float16 rs1,
                                     size_t vl) {
  return __riscv_vfdiv_tum(vm, vd, vs2, rs1, vl);
}

vfloat16m2_t test_vfdiv_vv_f16m2_tum(vbool8_t vm, vfloat16m2_t vd,
                                     vfloat16m2_t vs2, vfloat16m2_t vs1,
                                     size_t vl) {
  return __riscv_vfdiv_tum(vm, vd, vs2, vs1, vl);
}

vfloat16m2_t test_vfdiv_vf_f16m2_tum(vbool8_t vm, vfloat16m2_t vd,
                                     vfloat16m2_t vs2, _Float16 rs1,
                                     size_t vl) {
  return __riscv_vfdiv_tum(vm, vd, vs2, rs1, vl);
}

vfloat16m4_t test_vfdiv_vv_f16m4_tum(vbool4_t vm, vfloat16m4_t vd,
                                     vfloat16m4_t vs2, vfloat16m4_t vs1,
                                     size_t vl) {
  return __riscv_vfdiv_tum(vm, vd, vs2, vs1, vl);
}

vfloat16m4_t test_vfdiv_vf_f16m4_tum(vbool4_t vm, vfloat16m4_t vd,
                                     vfloat16m4_t vs2, _Float16 rs1,
                                     size_t vl) {
  return __riscv_vfdiv_tum(vm, vd, vs2, rs1, vl);
}

vfloat16m8_t test_vfdiv_vv_f16m8_tum(vbool2_t vm, vfloat16m8_t vd,
                                     vfloat16m8_t vs2, vfloat16m8_t vs1,
                                     size_t vl) {
  return __riscv_vfdiv_tum(vm, vd, vs2, vs1, vl);
}

vfloat16m8_t test_vfdiv_vf_f16m8_tum(vbool2_t vm, vfloat16m8_t vd,
                                     vfloat16m8_t vs2, _Float16 rs1,
                                     size_t vl) {
  return __riscv_vfdiv_tum(vm, vd, vs2, rs1, vl);
}

vfloat16mf4_t test_vfdiv_vv_f16mf4_tumu(vbool64_t vm, vfloat16mf4_t vd,
                                        vfloat16mf4_t vs2, vfloat16mf4_t vs1,
                                        size_t vl) {
  return __riscv_vfdiv_tumu(vm, vd, vs2, vs1, vl);
}

vfloat16mf4_t test_vfdiv_vf_f16mf4_tumu(vbool64_t vm, vfloat16mf4_t vd,
                                        vfloat16mf4_t vs2, _Float16 rs1,
                                        size_t vl) {
  return __riscv_vfdiv_tumu(vm, vd, vs2, rs1, vl);
}

vfloat16mf2_t test_vfdiv_vv_f16mf2_tumu(vbool32_t vm, vfloat16mf2_t vd,
                                        vfloat16mf2_t vs2, vfloat16mf2_t vs1,
                                        size_t vl) {
  return __riscv_vfdiv_tumu(vm, vd, vs2, vs1, vl);
}

vfloat16mf2_t test_vfdiv_vf_f16mf2_tumu(vbool32_t vm, vfloat16mf2_t vd,
                                        vfloat16mf2_t vs2, _Float16 rs1,
                                        size_t vl) {
  return __riscv_vfdiv_tumu(vm, vd, vs2, rs1, vl);
}

vfloat16m1_t test_vfdiv_vv_f16m1_tumu(vbool16_t vm, vfloat16m1_t vd,
                                      vfloat16m1_t vs2, vfloat16m1_t vs1,
                                      size_t vl) {
  return __riscv_vfdiv_tumu(vm, vd, vs2, vs1, vl);
}

vfloat16m1_t test_vfdiv_vf_f16m1_tumu(vbool16_t vm, vfloat16m1_t vd,
                                      vfloat16m1_t vs2, _Float16 rs1,
                                      size_t vl) {
  return __riscv_vfdiv_tumu(vm, vd, vs2, rs1, vl);
}

vfloat16m2_t test_vfdiv_vv_f16m2_tumu(vbool8_t vm, vfloat16m2_t vd,
                                      vfloat16m2_t vs2, vfloat16m2_t vs1,
                                      size_t vl) {
  return __riscv_vfdiv_tumu(vm, vd, vs2, vs1, vl);
}

vfloat16m2_t test_vfdiv_vf_f16m2_tumu(vbool8_t vm, vfloat16m2_t vd,
                                      vfloat16m2_t vs2, _Float16 rs1,
                                      size_t vl) {
  return __riscv_vfdiv_tumu(vm, vd, vs2, rs1, vl);
}

vfloat16m4_t test_vfdiv_vv_f16m4_tumu(vbool4_t vm, vfloat16m4_t vd,
                                      vfloat16m4_t vs2, vfloat16m4_t vs1,
                                      size_t vl) {
  return __riscv_vfdiv_tumu(vm, vd, vs2, vs1, vl);
}

vfloat16m4_t test_vfdiv_vf_f16m4_tumu(vbool4_t vm, vfloat16m4_t vd,
                                      vfloat16m4_t vs2, _Float16 rs1,
                                      size_t vl) {
  return __riscv_vfdiv_tumu(vm, vd, vs2, rs1, vl);
}

vfloat16m8_t test_vfdiv_vv_f16m8_tumu(vbool2_t vm, vfloat16m8_t vd,
                                      vfloat16m8_t vs2, vfloat16m8_t vs1,
                                      size_t vl) {
  return __riscv_vfdiv_tumu(vm, vd, vs2, vs1, vl);
}

vfloat16m8_t test_vfdiv_vf_f16m8_tumu(vbool2_t vm, vfloat16m8_t vd,
                                      vfloat16m8_t vs2, _Float16 rs1,
                                      size_t vl) {
  return __riscv_vfdiv_tumu(vm, vd, vs2, rs1, vl);
}

vfloat16mf4_t test_vfdiv_vv_f16mf4_mu(vbool64_t vm, vfloat16mf4_t vd,
                                      vfloat16mf4_t vs2, vfloat16mf4_t vs1,
                                      size_t vl) {
  return __riscv_vfdiv_mu(vm, vd, vs2, vs1, vl);
}

vfloat16mf4_t test_vfdiv_vf_f16mf4_mu(vbool64_t vm, vfloat16mf4_t vd,
                                      vfloat16mf4_t vs2, _Float16 rs1,
                                      size_t vl) {
  return __riscv_vfdiv_mu(vm, vd, vs2, rs1, vl);
}

vfloat16mf2_t test_vfdiv_vv_f16mf2_mu(vbool32_t vm, vfloat16mf2_t vd,
                                      vfloat16mf2_t vs2, vfloat16mf2_t vs1,
                                      size_t vl) {
  return __riscv_vfdiv_mu(vm, vd, vs2, vs1, vl);
}

vfloat16mf2_t test_vfdiv_vf_f16mf2_mu(vbool32_t vm, vfloat16mf2_t vd,
                                      vfloat16mf2_t vs2, _Float16 rs1,
                                      size_t vl) {
  return __riscv_vfdiv_mu(vm, vd, vs2, rs1, vl);
}

vfloat16m1_t test_vfdiv_vv_f16m1_mu(vbool16_t vm, vfloat16m1_t vd,
                                    vfloat16m1_t vs2, vfloat16m1_t vs1,
                                    size_t vl) {
  return __riscv_vfdiv_mu(vm, vd, vs2, vs1, vl);
}

vfloat16m1_t test_vfdiv_vf_f16m1_mu(vbool16_t vm, vfloat16m1_t vd,
                                    vfloat16m1_t vs2, _Float16 rs1, size_t vl) {
  return __riscv_vfdiv_mu(vm, vd, vs2, rs1, vl);
}

vfloat16m2_t test_vfdiv_vv_f16m2_mu(vbool8_t vm, vfloat16m2_t vd,
                                    vfloat16m2_t vs2, vfloat16m2_t vs1,
                                    size_t vl) {
  return __riscv_vfdiv_mu(vm, vd, vs2, vs1, vl);
}

vfloat16m2_t test_vfdiv_vf_f16m2_mu(vbool8_t vm, vfloat16m2_t vd,
                                    vfloat16m2_t vs2, _Float16 rs1, size_t vl) {
  return __riscv_vfdiv_mu(vm, vd, vs2, rs1, vl);
}

vfloat16m4_t test_vfdiv_vv_f16m4_mu(vbool4_t vm, vfloat16m4_t vd,
                                    vfloat16m4_t vs2, vfloat16m4_t vs1,
                                    size_t vl) {
  return __riscv_vfdiv_mu(vm, vd, vs2, vs1, vl);
}

vfloat16m4_t test_vfdiv_vf_f16m4_mu(vbool4_t vm, vfloat16m4_t vd,
                                    vfloat16m4_t vs2, _Float16 rs1, size_t vl) {
  return __riscv_vfdiv_mu(vm, vd, vs2, rs1, vl);
}

vfloat16m8_t test_vfdiv_vv_f16m8_mu(vbool2_t vm, vfloat16m8_t vd,
                                    vfloat16m8_t vs2, vfloat16m8_t vs1,
                                    size_t vl) {
  return __riscv_vfdiv_mu(vm, vd, vs2, vs1, vl);
}

vfloat16m8_t test_vfdiv_vf_f16m8_mu(vbool2_t vm, vfloat16m8_t vd,
                                    vfloat16m8_t vs2, _Float16 rs1, size_t vl) {
  return __riscv_vfdiv_mu(vm, vd, vs2, rs1, vl);
}

vfloat16mf4_t test_vfdiv_vv_f16mf4_rm_tu(vfloat16mf4_t vd, vfloat16mf4_t vs2,
                                         vfloat16mf4_t vs1, size_t vl) {
  return __riscv_vfdiv_tu(vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat16mf4_t test_vfdiv_vf_f16mf4_rm_tu(vfloat16mf4_t vd, vfloat16mf4_t vs2,
                                         _Float16 rs1, size_t vl) {
  return __riscv_vfdiv_tu(vd, vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat16mf2_t test_vfdiv_vv_f16mf2_rm_tu(vfloat16mf2_t vd, vfloat16mf2_t vs2,
                                         vfloat16mf2_t vs1, size_t vl) {
  return __riscv_vfdiv_tu(vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat16mf2_t test_vfdiv_vf_f16mf2_rm_tu(vfloat16mf2_t vd, vfloat16mf2_t vs2,
                                         _Float16 rs1, size_t vl) {
  return __riscv_vfdiv_tu(vd, vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat16m1_t test_vfdiv_vv_f16m1_rm_tu(vfloat16m1_t vd, vfloat16m1_t vs2,
                                       vfloat16m1_t vs1, size_t vl) {
  return __riscv_vfdiv_tu(vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat16m1_t test_vfdiv_vf_f16m1_rm_tu(vfloat16m1_t vd, vfloat16m1_t vs2,
                                       _Float16 rs1, size_t vl) {
  return __riscv_vfdiv_tu(vd, vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat16m2_t test_vfdiv_vv_f16m2_rm_tu(vfloat16m2_t vd, vfloat16m2_t vs2,
                                       vfloat16m2_t vs1, size_t vl) {
  return __riscv_vfdiv_tu(vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat16m2_t test_vfdiv_vf_f16m2_rm_tu(vfloat16m2_t vd, vfloat16m2_t vs2,
                                       _Float16 rs1, size_t vl) {
  return __riscv_vfdiv_tu(vd, vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat16m4_t test_vfdiv_vv_f16m4_rm_tu(vfloat16m4_t vd, vfloat16m4_t vs2,
                                       vfloat16m4_t vs1, size_t vl) {
  return __riscv_vfdiv_tu(vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat16m4_t test_vfdiv_vf_f16m4_rm_tu(vfloat16m4_t vd, vfloat16m4_t vs2,
                                       _Float16 rs1, size_t vl) {
  return __riscv_vfdiv_tu(vd, vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat16m8_t test_vfdiv_vv_f16m8_rm_tu(vfloat16m8_t vd, vfloat16m8_t vs2,
                                       vfloat16m8_t vs1, size_t vl) {
  return __riscv_vfdiv_tu(vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat16m8_t test_vfdiv_vf_f16m8_rm_tu(vfloat16m8_t vd, vfloat16m8_t vs2,
                                       _Float16 rs1, size_t vl) {
  return __riscv_vfdiv_tu(vd, vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat16mf4_t test_vfdiv_vv_f16mf4_rm_tum(vbool64_t vm, vfloat16mf4_t vd,
                                          vfloat16mf4_t vs2, vfloat16mf4_t vs1,
                                          size_t vl) {
  return __riscv_vfdiv_tum(vm, vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat16mf4_t test_vfdiv_vf_f16mf4_rm_tum(vbool64_t vm, vfloat16mf4_t vd,
                                          vfloat16mf4_t vs2, _Float16 rs1,
                                          size_t vl) {
  return __riscv_vfdiv_tum(vm, vd, vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat16mf2_t test_vfdiv_vv_f16mf2_rm_tum(vbool32_t vm, vfloat16mf2_t vd,
                                          vfloat16mf2_t vs2, vfloat16mf2_t vs1,
                                          size_t vl) {
  return __riscv_vfdiv_tum(vm, vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat16mf2_t test_vfdiv_vf_f16mf2_rm_tum(vbool32_t vm, vfloat16mf2_t vd,
                                          vfloat16mf2_t vs2, _Float16 rs1,
                                          size_t vl) {
  return __riscv_vfdiv_tum(vm, vd, vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat16m1_t test_vfdiv_vv_f16m1_rm_tum(vbool16_t vm, vfloat16m1_t vd,
                                        vfloat16m1_t vs2, vfloat16m1_t vs1,
                                        size_t vl) {
  return __riscv_vfdiv_tum(vm, vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat16m1_t test_vfdiv_vf_f16m1_rm_tum(vbool16_t vm, vfloat16m1_t vd,
                                        vfloat16m1_t vs2, _Float16 rs1,
                                        size_t vl) {
  return __riscv_vfdiv_tum(vm, vd, vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat16m2_t test_vfdiv_vv_f16m2_rm_tum(vbool8_t vm, vfloat16m2_t vd,
                                        vfloat16m2_t vs2, vfloat16m2_t vs1,
                                        size_t vl) {
  return __riscv_vfdiv_tum(vm, vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat16m2_t test_vfdiv_vf_f16m2_rm_tum(vbool8_t vm, vfloat16m2_t vd,
                                        vfloat16m2_t vs2, _Float16 rs1,
                                        size_t vl) {
  return __riscv_vfdiv_tum(vm, vd, vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat16m4_t test_vfdiv_vv_f16m4_rm_tum(vbool4_t vm, vfloat16m4_t vd,
                                        vfloat16m4_t vs2, vfloat16m4_t vs1,
                                        size_t vl) {
  return __riscv_vfdiv_tum(vm, vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat16m4_t test_vfdiv_vf_f16m4_rm_tum(vbool4_t vm, vfloat16m4_t vd,
                                        vfloat16m4_t vs2, _Float16 rs1,
                                        size_t vl) {
  return __riscv_vfdiv_tum(vm, vd, vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat16m8_t test_vfdiv_vv_f16m8_rm_tum(vbool2_t vm, vfloat16m8_t vd,
                                        vfloat16m8_t vs2, vfloat16m8_t vs1,
                                        size_t vl) {
  return __riscv_vfdiv_tum(vm, vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat16m8_t test_vfdiv_vf_f16m8_rm_tum(vbool2_t vm, vfloat16m8_t vd,
                                        vfloat16m8_t vs2, _Float16 rs1,
                                        size_t vl) {
  return __riscv_vfdiv_tum(vm, vd, vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat16mf4_t test_vfdiv_vv_f16mf4_rm_tumu(vbool64_t vm, vfloat16mf4_t vd,
                                           vfloat16mf4_t vs2, vfloat16mf4_t vs1,
                                           size_t vl) {
  return __riscv_vfdiv_tumu(vm, vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat16mf4_t test_vfdiv_vf_f16mf4_rm_tumu(vbool64_t vm, vfloat16mf4_t vd,
                                           vfloat16mf4_t vs2, _Float16 rs1,
                                           size_t vl) {
  return __riscv_vfdiv_tumu(vm, vd, vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat16mf2_t test_vfdiv_vv_f16mf2_rm_tumu(vbool32_t vm, vfloat16mf2_t vd,
                                           vfloat16mf2_t vs2, vfloat16mf2_t vs1,
                                           size_t vl) {
  return __riscv_vfdiv_tumu(vm, vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat16mf2_t test_vfdiv_vf_f16mf2_rm_tumu(vbool32_t vm, vfloat16mf2_t vd,
                                           vfloat16mf2_t vs2, _Float16 rs1,
                                           size_t vl) {
  return __riscv_vfdiv_tumu(vm, vd, vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat16m1_t test_vfdiv_vv_f16m1_rm_tumu(vbool16_t vm, vfloat16m1_t vd,
                                         vfloat16m1_t vs2, vfloat16m1_t vs1,
                                         size_t vl) {
  return __riscv_vfdiv_tumu(vm, vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat16m1_t test_vfdiv_vf_f16m1_rm_tumu(vbool16_t vm, vfloat16m1_t vd,
                                         vfloat16m1_t vs2, _Float16 rs1,
                                         size_t vl) {
  return __riscv_vfdiv_tumu(vm, vd, vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat16m2_t test_vfdiv_vv_f16m2_rm_tumu(vbool8_t vm, vfloat16m2_t vd,
                                         vfloat16m2_t vs2, vfloat16m2_t vs1,
                                         size_t vl) {
  return __riscv_vfdiv_tumu(vm, vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat16m2_t test_vfdiv_vf_f16m2_rm_tumu(vbool8_t vm, vfloat16m2_t vd,
                                         vfloat16m2_t vs2, _Float16 rs1,
                                         size_t vl) {
  return __riscv_vfdiv_tumu(vm, vd, vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat16m4_t test_vfdiv_vv_f16m4_rm_tumu(vbool4_t vm, vfloat16m4_t vd,
                                         vfloat16m4_t vs2, vfloat16m4_t vs1,
                                         size_t vl) {
  return __riscv_vfdiv_tumu(vm, vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat16m4_t test_vfdiv_vf_f16m4_rm_tumu(vbool4_t vm, vfloat16m4_t vd,
                                         vfloat16m4_t vs2, _Float16 rs1,
                                         size_t vl) {
  return __riscv_vfdiv_tumu(vm, vd, vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat16m8_t test_vfdiv_vv_f16m8_rm_tumu(vbool2_t vm, vfloat16m8_t vd,
                                         vfloat16m8_t vs2, vfloat16m8_t vs1,
                                         size_t vl) {
  return __riscv_vfdiv_tumu(vm, vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat16m8_t test_vfdiv_vf_f16m8_rm_tumu(vbool2_t vm, vfloat16m8_t vd,
                                         vfloat16m8_t vs2, _Float16 rs1,
                                         size_t vl) {
  return __riscv_vfdiv_tumu(vm, vd, vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat16mf4_t test_vfdiv_vv_f16mf4_rm_mu(vbool64_t vm, vfloat16mf4_t vd,
                                         vfloat16mf4_t vs2, vfloat16mf4_t vs1,
                                         size_t vl) {
  return __riscv_vfdiv_mu(vm, vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat16mf4_t test_vfdiv_vf_f16mf4_rm_mu(vbool64_t vm, vfloat16mf4_t vd,
                                         vfloat16mf4_t vs2, _Float16 rs1,
                                         size_t vl) {
  return __riscv_vfdiv_mu(vm, vd, vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat16mf2_t test_vfdiv_vv_f16mf2_rm_mu(vbool32_t vm, vfloat16mf2_t vd,
                                         vfloat16mf2_t vs2, vfloat16mf2_t vs1,
                                         size_t vl) {
  return __riscv_vfdiv_mu(vm, vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat16mf2_t test_vfdiv_vf_f16mf2_rm_mu(vbool32_t vm, vfloat16mf2_t vd,
                                         vfloat16mf2_t vs2, _Float16 rs1,
                                         size_t vl) {
  return __riscv_vfdiv_mu(vm, vd, vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat16m1_t test_vfdiv_vv_f16m1_rm_mu(vbool16_t vm, vfloat16m1_t vd,
                                       vfloat16m1_t vs2, vfloat16m1_t vs1,
                                       size_t vl) {
  return __riscv_vfdiv_mu(vm, vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat16m1_t test_vfdiv_vf_f16m1_rm_mu(vbool16_t vm, vfloat16m1_t vd,
                                       vfloat16m1_t vs2, _Float16 rs1,
                                       size_t vl) {
  return __riscv_vfdiv_mu(vm, vd, vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat16m2_t test_vfdiv_vv_f16m2_rm_mu(vbool8_t vm, vfloat16m2_t vd,
                                       vfloat16m2_t vs2, vfloat16m2_t vs1,
                                       size_t vl) {
  return __riscv_vfdiv_mu(vm, vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat16m2_t test_vfdiv_vf_f16m2_rm_mu(vbool8_t vm, vfloat16m2_t vd,
                                       vfloat16m2_t vs2, _Float16 rs1,
                                       size_t vl) {
  return __riscv_vfdiv_mu(vm, vd, vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat16m4_t test_vfdiv_vv_f16m4_rm_mu(vbool4_t vm, vfloat16m4_t vd,
                                       vfloat16m4_t vs2, vfloat16m4_t vs1,
                                       size_t vl) {
  return __riscv_vfdiv_mu(vm, vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat16m4_t test_vfdiv_vf_f16m4_rm_mu(vbool4_t vm, vfloat16m4_t vd,
                                       vfloat16m4_t vs2, _Float16 rs1,
                                       size_t vl) {
  return __riscv_vfdiv_mu(vm, vd, vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat16m8_t test_vfdiv_vv_f16m8_rm_mu(vbool2_t vm, vfloat16m8_t vd,
                                       vfloat16m8_t vs2, vfloat16m8_t vs1,
                                       size_t vl) {
  return __riscv_vfdiv_mu(vm, vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat16m8_t test_vfdiv_vf_f16m8_rm_mu(vbool2_t vm, vfloat16m8_t vd,
                                       vfloat16m8_t vs2, _Float16 rs1,
                                       size_t vl) {
  return __riscv_vfdiv_mu(vm, vd, vs2, rs1, __RISCV_FRM_RNE, vl);
}
