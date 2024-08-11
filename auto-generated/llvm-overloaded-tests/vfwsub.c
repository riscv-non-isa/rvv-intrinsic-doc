// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -target-feature +zfh \
// RUN:   -target-feature +experimental-zvfh -disable-O0-optnone \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

vfloat64m1_t test_vfwsub_vv_f64m1(vfloat32mf2_t vs2, vfloat32mf2_t vs1,
                                  size_t vl) {
  return __riscv_vfwsub_vv(vs2, vs1, vl);
}

vfloat64m1_t test_vfwsub_vf_f64m1(vfloat32mf2_t vs2, float rs1, size_t vl) {
  return __riscv_vfwsub_vf(vs2, rs1, vl);
}

vfloat64m1_t test_vfwsub_wv_f64m1(vfloat64m1_t vs2, vfloat32mf2_t vs1,
                                  size_t vl) {
  return __riscv_vfwsub_wv(vs2, vs1, vl);
}

vfloat64m1_t test_vfwsub_wf_f64m1(vfloat64m1_t vs2, float rs1, size_t vl) {
  return __riscv_vfwsub_wf(vs2, rs1, vl);
}

vfloat64m2_t test_vfwsub_vv_f64m2(vfloat32m1_t vs2, vfloat32m1_t vs1,
                                  size_t vl) {
  return __riscv_vfwsub_vv(vs2, vs1, vl);
}

vfloat64m2_t test_vfwsub_vf_f64m2(vfloat32m1_t vs2, float rs1, size_t vl) {
  return __riscv_vfwsub_vf(vs2, rs1, vl);
}

vfloat64m2_t test_vfwsub_wv_f64m2(vfloat64m2_t vs2, vfloat32m1_t vs1,
                                  size_t vl) {
  return __riscv_vfwsub_wv(vs2, vs1, vl);
}

vfloat64m2_t test_vfwsub_wf_f64m2(vfloat64m2_t vs2, float rs1, size_t vl) {
  return __riscv_vfwsub_wf(vs2, rs1, vl);
}

vfloat64m4_t test_vfwsub_vv_f64m4(vfloat32m2_t vs2, vfloat32m2_t vs1,
                                  size_t vl) {
  return __riscv_vfwsub_vv(vs2, vs1, vl);
}

vfloat64m4_t test_vfwsub_vf_f64m4(vfloat32m2_t vs2, float rs1, size_t vl) {
  return __riscv_vfwsub_vf(vs2, rs1, vl);
}

vfloat64m4_t test_vfwsub_wv_f64m4(vfloat64m4_t vs2, vfloat32m2_t vs1,
                                  size_t vl) {
  return __riscv_vfwsub_wv(vs2, vs1, vl);
}

vfloat64m4_t test_vfwsub_wf_f64m4(vfloat64m4_t vs2, float rs1, size_t vl) {
  return __riscv_vfwsub_wf(vs2, rs1, vl);
}

vfloat64m8_t test_vfwsub_vv_f64m8(vfloat32m4_t vs2, vfloat32m4_t vs1,
                                  size_t vl) {
  return __riscv_vfwsub_vv(vs2, vs1, vl);
}

vfloat64m8_t test_vfwsub_vf_f64m8(vfloat32m4_t vs2, float rs1, size_t vl) {
  return __riscv_vfwsub_vf(vs2, rs1, vl);
}

vfloat64m8_t test_vfwsub_wv_f64m8(vfloat64m8_t vs2, vfloat32m4_t vs1,
                                  size_t vl) {
  return __riscv_vfwsub_wv(vs2, vs1, vl);
}

vfloat64m8_t test_vfwsub_wf_f64m8(vfloat64m8_t vs2, float rs1, size_t vl) {
  return __riscv_vfwsub_wf(vs2, rs1, vl);
}

vfloat64m1_t test_vfwsub_vv_f64m1_m(vbool64_t vm, vfloat32mf2_t vs2,
                                    vfloat32mf2_t vs1, size_t vl) {
  return __riscv_vfwsub_vv(vm, vs2, vs1, vl);
}

vfloat64m1_t test_vfwsub_vf_f64m1_m(vbool64_t vm, vfloat32mf2_t vs2, float rs1,
                                    size_t vl) {
  return __riscv_vfwsub_vf(vm, vs2, rs1, vl);
}

vfloat64m1_t test_vfwsub_wv_f64m1_m(vbool64_t vm, vfloat64m1_t vs2,
                                    vfloat32mf2_t vs1, size_t vl) {
  return __riscv_vfwsub_wv(vm, vs2, vs1, vl);
}

vfloat64m1_t test_vfwsub_wf_f64m1_m(vbool64_t vm, vfloat64m1_t vs2, float rs1,
                                    size_t vl) {
  return __riscv_vfwsub_wf(vm, vs2, rs1, vl);
}

vfloat64m2_t test_vfwsub_vv_f64m2_m(vbool32_t vm, vfloat32m1_t vs2,
                                    vfloat32m1_t vs1, size_t vl) {
  return __riscv_vfwsub_vv(vm, vs2, vs1, vl);
}

vfloat64m2_t test_vfwsub_vf_f64m2_m(vbool32_t vm, vfloat32m1_t vs2, float rs1,
                                    size_t vl) {
  return __riscv_vfwsub_vf(vm, vs2, rs1, vl);
}

vfloat64m2_t test_vfwsub_wv_f64m2_m(vbool32_t vm, vfloat64m2_t vs2,
                                    vfloat32m1_t vs1, size_t vl) {
  return __riscv_vfwsub_wv(vm, vs2, vs1, vl);
}

vfloat64m2_t test_vfwsub_wf_f64m2_m(vbool32_t vm, vfloat64m2_t vs2, float rs1,
                                    size_t vl) {
  return __riscv_vfwsub_wf(vm, vs2, rs1, vl);
}

vfloat64m4_t test_vfwsub_vv_f64m4_m(vbool16_t vm, vfloat32m2_t vs2,
                                    vfloat32m2_t vs1, size_t vl) {
  return __riscv_vfwsub_vv(vm, vs2, vs1, vl);
}

vfloat64m4_t test_vfwsub_vf_f64m4_m(vbool16_t vm, vfloat32m2_t vs2, float rs1,
                                    size_t vl) {
  return __riscv_vfwsub_vf(vm, vs2, rs1, vl);
}

vfloat64m4_t test_vfwsub_wv_f64m4_m(vbool16_t vm, vfloat64m4_t vs2,
                                    vfloat32m2_t vs1, size_t vl) {
  return __riscv_vfwsub_wv(vm, vs2, vs1, vl);
}

vfloat64m4_t test_vfwsub_wf_f64m4_m(vbool16_t vm, vfloat64m4_t vs2, float rs1,
                                    size_t vl) {
  return __riscv_vfwsub_wf(vm, vs2, rs1, vl);
}

vfloat64m8_t test_vfwsub_vv_f64m8_m(vbool8_t vm, vfloat32m4_t vs2,
                                    vfloat32m4_t vs1, size_t vl) {
  return __riscv_vfwsub_vv(vm, vs2, vs1, vl);
}

vfloat64m8_t test_vfwsub_vf_f64m8_m(vbool8_t vm, vfloat32m4_t vs2, float rs1,
                                    size_t vl) {
  return __riscv_vfwsub_vf(vm, vs2, rs1, vl);
}

vfloat64m8_t test_vfwsub_wv_f64m8_m(vbool8_t vm, vfloat64m8_t vs2,
                                    vfloat32m4_t vs1, size_t vl) {
  return __riscv_vfwsub_wv(vm, vs2, vs1, vl);
}

vfloat64m8_t test_vfwsub_wf_f64m8_m(vbool8_t vm, vfloat64m8_t vs2, float rs1,
                                    size_t vl) {
  return __riscv_vfwsub_wf(vm, vs2, rs1, vl);
}

vfloat64m1_t test_vfwsub_vv_f64m1_rm(vfloat32mf2_t vs2, vfloat32mf2_t vs1,
                                     size_t vl) {
  return __riscv_vfwsub_vv(vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat64m1_t test_vfwsub_vf_f64m1_rm(vfloat32mf2_t vs2, float rs1, size_t vl) {
  return __riscv_vfwsub_vf(vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat64m1_t test_vfwsub_wv_f64m1_rm(vfloat64m1_t vs2, vfloat32mf2_t vs1,
                                     size_t vl) {
  return __riscv_vfwsub_wv(vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat64m1_t test_vfwsub_wf_f64m1_rm(vfloat64m1_t vs2, float rs1, size_t vl) {
  return __riscv_vfwsub_wf(vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat64m2_t test_vfwsub_vv_f64m2_rm(vfloat32m1_t vs2, vfloat32m1_t vs1,
                                     size_t vl) {
  return __riscv_vfwsub_vv(vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat64m2_t test_vfwsub_vf_f64m2_rm(vfloat32m1_t vs2, float rs1, size_t vl) {
  return __riscv_vfwsub_vf(vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat64m2_t test_vfwsub_wv_f64m2_rm(vfloat64m2_t vs2, vfloat32m1_t vs1,
                                     size_t vl) {
  return __riscv_vfwsub_wv(vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat64m2_t test_vfwsub_wf_f64m2_rm(vfloat64m2_t vs2, float rs1, size_t vl) {
  return __riscv_vfwsub_wf(vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat64m4_t test_vfwsub_vv_f64m4_rm(vfloat32m2_t vs2, vfloat32m2_t vs1,
                                     size_t vl) {
  return __riscv_vfwsub_vv(vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat64m4_t test_vfwsub_vf_f64m4_rm(vfloat32m2_t vs2, float rs1, size_t vl) {
  return __riscv_vfwsub_vf(vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat64m4_t test_vfwsub_wv_f64m4_rm(vfloat64m4_t vs2, vfloat32m2_t vs1,
                                     size_t vl) {
  return __riscv_vfwsub_wv(vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat64m4_t test_vfwsub_wf_f64m4_rm(vfloat64m4_t vs2, float rs1, size_t vl) {
  return __riscv_vfwsub_wf(vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat64m8_t test_vfwsub_vv_f64m8_rm(vfloat32m4_t vs2, vfloat32m4_t vs1,
                                     size_t vl) {
  return __riscv_vfwsub_vv(vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat64m8_t test_vfwsub_vf_f64m8_rm(vfloat32m4_t vs2, float rs1, size_t vl) {
  return __riscv_vfwsub_vf(vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat64m8_t test_vfwsub_wv_f64m8_rm(vfloat64m8_t vs2, vfloat32m4_t vs1,
                                     size_t vl) {
  return __riscv_vfwsub_wv(vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat64m8_t test_vfwsub_wf_f64m8_rm(vfloat64m8_t vs2, float rs1, size_t vl) {
  return __riscv_vfwsub_wf(vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat64m1_t test_vfwsub_vv_f64m1_rm_m(vbool64_t vm, vfloat32mf2_t vs2,
                                       vfloat32mf2_t vs1, size_t vl) {
  return __riscv_vfwsub_vv(vm, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat64m1_t test_vfwsub_vf_f64m1_rm_m(vbool64_t vm, vfloat32mf2_t vs2,
                                       float rs1, size_t vl) {
  return __riscv_vfwsub_vf(vm, vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat64m1_t test_vfwsub_wv_f64m1_rm_m(vbool64_t vm, vfloat64m1_t vs2,
                                       vfloat32mf2_t vs1, size_t vl) {
  return __riscv_vfwsub_wv(vm, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat64m1_t test_vfwsub_wf_f64m1_rm_m(vbool64_t vm, vfloat64m1_t vs2,
                                       float rs1, size_t vl) {
  return __riscv_vfwsub_wf(vm, vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat64m2_t test_vfwsub_vv_f64m2_rm_m(vbool32_t vm, vfloat32m1_t vs2,
                                       vfloat32m1_t vs1, size_t vl) {
  return __riscv_vfwsub_vv(vm, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat64m2_t test_vfwsub_vf_f64m2_rm_m(vbool32_t vm, vfloat32m1_t vs2,
                                       float rs1, size_t vl) {
  return __riscv_vfwsub_vf(vm, vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat64m2_t test_vfwsub_wv_f64m2_rm_m(vbool32_t vm, vfloat64m2_t vs2,
                                       vfloat32m1_t vs1, size_t vl) {
  return __riscv_vfwsub_wv(vm, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat64m2_t test_vfwsub_wf_f64m2_rm_m(vbool32_t vm, vfloat64m2_t vs2,
                                       float rs1, size_t vl) {
  return __riscv_vfwsub_wf(vm, vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat64m4_t test_vfwsub_vv_f64m4_rm_m(vbool16_t vm, vfloat32m2_t vs2,
                                       vfloat32m2_t vs1, size_t vl) {
  return __riscv_vfwsub_vv(vm, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat64m4_t test_vfwsub_vf_f64m4_rm_m(vbool16_t vm, vfloat32m2_t vs2,
                                       float rs1, size_t vl) {
  return __riscv_vfwsub_vf(vm, vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat64m4_t test_vfwsub_wv_f64m4_rm_m(vbool16_t vm, vfloat64m4_t vs2,
                                       vfloat32m2_t vs1, size_t vl) {
  return __riscv_vfwsub_wv(vm, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat64m4_t test_vfwsub_wf_f64m4_rm_m(vbool16_t vm, vfloat64m4_t vs2,
                                       float rs1, size_t vl) {
  return __riscv_vfwsub_wf(vm, vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat64m8_t test_vfwsub_vv_f64m8_rm_m(vbool8_t vm, vfloat32m4_t vs2,
                                       vfloat32m4_t vs1, size_t vl) {
  return __riscv_vfwsub_vv(vm, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat64m8_t test_vfwsub_vf_f64m8_rm_m(vbool8_t vm, vfloat32m4_t vs2, float rs1,
                                       size_t vl) {
  return __riscv_vfwsub_vf(vm, vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat64m8_t test_vfwsub_wv_f64m8_rm_m(vbool8_t vm, vfloat64m8_t vs2,
                                       vfloat32m4_t vs1, size_t vl) {
  return __riscv_vfwsub_wv(vm, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat64m8_t test_vfwsub_wf_f64m8_rm_m(vbool8_t vm, vfloat64m8_t vs2, float rs1,
                                       size_t vl) {
  return __riscv_vfwsub_wf(vm, vs2, rs1, __RISCV_FRM_RNE, vl);
}
