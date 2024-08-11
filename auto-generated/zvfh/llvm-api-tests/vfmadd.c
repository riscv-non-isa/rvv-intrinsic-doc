// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -target-feature +zfh \
// RUN:   -target-feature +zvfh -disable-O0-optnone \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

vfloat16mf4_t test_vfmadd_vv_f16mf4(vfloat16mf4_t vd, vfloat16mf4_t vs1,
                                    vfloat16mf4_t vs2, size_t vl) {
  return __riscv_vfmadd_vv_f16mf4(vd, vs1, vs2, vl);
}

vfloat16mf4_t test_vfmadd_vf_f16mf4(vfloat16mf4_t vd, _Float16 rs1,
                                    vfloat16mf4_t vs2, size_t vl) {
  return __riscv_vfmadd_vf_f16mf4(vd, rs1, vs2, vl);
}

vfloat16mf2_t test_vfmadd_vv_f16mf2(vfloat16mf2_t vd, vfloat16mf2_t vs1,
                                    vfloat16mf2_t vs2, size_t vl) {
  return __riscv_vfmadd_vv_f16mf2(vd, vs1, vs2, vl);
}

vfloat16mf2_t test_vfmadd_vf_f16mf2(vfloat16mf2_t vd, _Float16 rs1,
                                    vfloat16mf2_t vs2, size_t vl) {
  return __riscv_vfmadd_vf_f16mf2(vd, rs1, vs2, vl);
}

vfloat16m1_t test_vfmadd_vv_f16m1(vfloat16m1_t vd, vfloat16m1_t vs1,
                                  vfloat16m1_t vs2, size_t vl) {
  return __riscv_vfmadd_vv_f16m1(vd, vs1, vs2, vl);
}

vfloat16m1_t test_vfmadd_vf_f16m1(vfloat16m1_t vd, _Float16 rs1,
                                  vfloat16m1_t vs2, size_t vl) {
  return __riscv_vfmadd_vf_f16m1(vd, rs1, vs2, vl);
}

vfloat16m2_t test_vfmadd_vv_f16m2(vfloat16m2_t vd, vfloat16m2_t vs1,
                                  vfloat16m2_t vs2, size_t vl) {
  return __riscv_vfmadd_vv_f16m2(vd, vs1, vs2, vl);
}

vfloat16m2_t test_vfmadd_vf_f16m2(vfloat16m2_t vd, _Float16 rs1,
                                  vfloat16m2_t vs2, size_t vl) {
  return __riscv_vfmadd_vf_f16m2(vd, rs1, vs2, vl);
}

vfloat16m4_t test_vfmadd_vv_f16m4(vfloat16m4_t vd, vfloat16m4_t vs1,
                                  vfloat16m4_t vs2, size_t vl) {
  return __riscv_vfmadd_vv_f16m4(vd, vs1, vs2, vl);
}

vfloat16m4_t test_vfmadd_vf_f16m4(vfloat16m4_t vd, _Float16 rs1,
                                  vfloat16m4_t vs2, size_t vl) {
  return __riscv_vfmadd_vf_f16m4(vd, rs1, vs2, vl);
}

vfloat16m8_t test_vfmadd_vv_f16m8(vfloat16m8_t vd, vfloat16m8_t vs1,
                                  vfloat16m8_t vs2, size_t vl) {
  return __riscv_vfmadd_vv_f16m8(vd, vs1, vs2, vl);
}

vfloat16m8_t test_vfmadd_vf_f16m8(vfloat16m8_t vd, _Float16 rs1,
                                  vfloat16m8_t vs2, size_t vl) {
  return __riscv_vfmadd_vf_f16m8(vd, rs1, vs2, vl);
}

vfloat16mf4_t test_vfmadd_vv_f16mf4_m(vbool64_t vm, vfloat16mf4_t vd,
                                      vfloat16mf4_t vs1, vfloat16mf4_t vs2,
                                      size_t vl) {
  return __riscv_vfmadd_vv_f16mf4_m(vm, vd, vs1, vs2, vl);
}

vfloat16mf4_t test_vfmadd_vf_f16mf4_m(vbool64_t vm, vfloat16mf4_t vd,
                                      _Float16 rs1, vfloat16mf4_t vs2,
                                      size_t vl) {
  return __riscv_vfmadd_vf_f16mf4_m(vm, vd, rs1, vs2, vl);
}

vfloat16mf2_t test_vfmadd_vv_f16mf2_m(vbool32_t vm, vfloat16mf2_t vd,
                                      vfloat16mf2_t vs1, vfloat16mf2_t vs2,
                                      size_t vl) {
  return __riscv_vfmadd_vv_f16mf2_m(vm, vd, vs1, vs2, vl);
}

vfloat16mf2_t test_vfmadd_vf_f16mf2_m(vbool32_t vm, vfloat16mf2_t vd,
                                      _Float16 rs1, vfloat16mf2_t vs2,
                                      size_t vl) {
  return __riscv_vfmadd_vf_f16mf2_m(vm, vd, rs1, vs2, vl);
}

vfloat16m1_t test_vfmadd_vv_f16m1_m(vbool16_t vm, vfloat16m1_t vd,
                                    vfloat16m1_t vs1, vfloat16m1_t vs2,
                                    size_t vl) {
  return __riscv_vfmadd_vv_f16m1_m(vm, vd, vs1, vs2, vl);
}

vfloat16m1_t test_vfmadd_vf_f16m1_m(vbool16_t vm, vfloat16m1_t vd, _Float16 rs1,
                                    vfloat16m1_t vs2, size_t vl) {
  return __riscv_vfmadd_vf_f16m1_m(vm, vd, rs1, vs2, vl);
}

vfloat16m2_t test_vfmadd_vv_f16m2_m(vbool8_t vm, vfloat16m2_t vd,
                                    vfloat16m2_t vs1, vfloat16m2_t vs2,
                                    size_t vl) {
  return __riscv_vfmadd_vv_f16m2_m(vm, vd, vs1, vs2, vl);
}

vfloat16m2_t test_vfmadd_vf_f16m2_m(vbool8_t vm, vfloat16m2_t vd, _Float16 rs1,
                                    vfloat16m2_t vs2, size_t vl) {
  return __riscv_vfmadd_vf_f16m2_m(vm, vd, rs1, vs2, vl);
}

vfloat16m4_t test_vfmadd_vv_f16m4_m(vbool4_t vm, vfloat16m4_t vd,
                                    vfloat16m4_t vs1, vfloat16m4_t vs2,
                                    size_t vl) {
  return __riscv_vfmadd_vv_f16m4_m(vm, vd, vs1, vs2, vl);
}

vfloat16m4_t test_vfmadd_vf_f16m4_m(vbool4_t vm, vfloat16m4_t vd, _Float16 rs1,
                                    vfloat16m4_t vs2, size_t vl) {
  return __riscv_vfmadd_vf_f16m4_m(vm, vd, rs1, vs2, vl);
}

vfloat16m8_t test_vfmadd_vv_f16m8_m(vbool2_t vm, vfloat16m8_t vd,
                                    vfloat16m8_t vs1, vfloat16m8_t vs2,
                                    size_t vl) {
  return __riscv_vfmadd_vv_f16m8_m(vm, vd, vs1, vs2, vl);
}

vfloat16m8_t test_vfmadd_vf_f16m8_m(vbool2_t vm, vfloat16m8_t vd, _Float16 rs1,
                                    vfloat16m8_t vs2, size_t vl) {
  return __riscv_vfmadd_vf_f16m8_m(vm, vd, rs1, vs2, vl);
}

vfloat16mf4_t test_vfmadd_vv_f16mf4_rm(vfloat16mf4_t vd, vfloat16mf4_t vs1,
                                       vfloat16mf4_t vs2, size_t vl) {
  return __riscv_vfmadd_vv_f16mf4_rm(vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat16mf4_t test_vfmadd_vf_f16mf4_rm(vfloat16mf4_t vd, _Float16 rs1,
                                       vfloat16mf4_t vs2, size_t vl) {
  return __riscv_vfmadd_vf_f16mf4_rm(vd, rs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat16mf2_t test_vfmadd_vv_f16mf2_rm(vfloat16mf2_t vd, vfloat16mf2_t vs1,
                                       vfloat16mf2_t vs2, size_t vl) {
  return __riscv_vfmadd_vv_f16mf2_rm(vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat16mf2_t test_vfmadd_vf_f16mf2_rm(vfloat16mf2_t vd, _Float16 rs1,
                                       vfloat16mf2_t vs2, size_t vl) {
  return __riscv_vfmadd_vf_f16mf2_rm(vd, rs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat16m1_t test_vfmadd_vv_f16m1_rm(vfloat16m1_t vd, vfloat16m1_t vs1,
                                     vfloat16m1_t vs2, size_t vl) {
  return __riscv_vfmadd_vv_f16m1_rm(vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat16m1_t test_vfmadd_vf_f16m1_rm(vfloat16m1_t vd, _Float16 rs1,
                                     vfloat16m1_t vs2, size_t vl) {
  return __riscv_vfmadd_vf_f16m1_rm(vd, rs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat16m2_t test_vfmadd_vv_f16m2_rm(vfloat16m2_t vd, vfloat16m2_t vs1,
                                     vfloat16m2_t vs2, size_t vl) {
  return __riscv_vfmadd_vv_f16m2_rm(vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat16m2_t test_vfmadd_vf_f16m2_rm(vfloat16m2_t vd, _Float16 rs1,
                                     vfloat16m2_t vs2, size_t vl) {
  return __riscv_vfmadd_vf_f16m2_rm(vd, rs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat16m4_t test_vfmadd_vv_f16m4_rm(vfloat16m4_t vd, vfloat16m4_t vs1,
                                     vfloat16m4_t vs2, size_t vl) {
  return __riscv_vfmadd_vv_f16m4_rm(vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat16m4_t test_vfmadd_vf_f16m4_rm(vfloat16m4_t vd, _Float16 rs1,
                                     vfloat16m4_t vs2, size_t vl) {
  return __riscv_vfmadd_vf_f16m4_rm(vd, rs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat16m8_t test_vfmadd_vv_f16m8_rm(vfloat16m8_t vd, vfloat16m8_t vs1,
                                     vfloat16m8_t vs2, size_t vl) {
  return __riscv_vfmadd_vv_f16m8_rm(vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat16m8_t test_vfmadd_vf_f16m8_rm(vfloat16m8_t vd, _Float16 rs1,
                                     vfloat16m8_t vs2, size_t vl) {
  return __riscv_vfmadd_vf_f16m8_rm(vd, rs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat16mf4_t test_vfmadd_vv_f16mf4_rm_m(vbool64_t vm, vfloat16mf4_t vd,
                                         vfloat16mf4_t vs1, vfloat16mf4_t vs2,
                                         size_t vl) {
  return __riscv_vfmadd_vv_f16mf4_rm_m(vm, vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat16mf4_t test_vfmadd_vf_f16mf4_rm_m(vbool64_t vm, vfloat16mf4_t vd,
                                         _Float16 rs1, vfloat16mf4_t vs2,
                                         size_t vl) {
  return __riscv_vfmadd_vf_f16mf4_rm_m(vm, vd, rs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat16mf2_t test_vfmadd_vv_f16mf2_rm_m(vbool32_t vm, vfloat16mf2_t vd,
                                         vfloat16mf2_t vs1, vfloat16mf2_t vs2,
                                         size_t vl) {
  return __riscv_vfmadd_vv_f16mf2_rm_m(vm, vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat16mf2_t test_vfmadd_vf_f16mf2_rm_m(vbool32_t vm, vfloat16mf2_t vd,
                                         _Float16 rs1, vfloat16mf2_t vs2,
                                         size_t vl) {
  return __riscv_vfmadd_vf_f16mf2_rm_m(vm, vd, rs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat16m1_t test_vfmadd_vv_f16m1_rm_m(vbool16_t vm, vfloat16m1_t vd,
                                       vfloat16m1_t vs1, vfloat16m1_t vs2,
                                       size_t vl) {
  return __riscv_vfmadd_vv_f16m1_rm_m(vm, vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat16m1_t test_vfmadd_vf_f16m1_rm_m(vbool16_t vm, vfloat16m1_t vd,
                                       _Float16 rs1, vfloat16m1_t vs2,
                                       size_t vl) {
  return __riscv_vfmadd_vf_f16m1_rm_m(vm, vd, rs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat16m2_t test_vfmadd_vv_f16m2_rm_m(vbool8_t vm, vfloat16m2_t vd,
                                       vfloat16m2_t vs1, vfloat16m2_t vs2,
                                       size_t vl) {
  return __riscv_vfmadd_vv_f16m2_rm_m(vm, vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat16m2_t test_vfmadd_vf_f16m2_rm_m(vbool8_t vm, vfloat16m2_t vd,
                                       _Float16 rs1, vfloat16m2_t vs2,
                                       size_t vl) {
  return __riscv_vfmadd_vf_f16m2_rm_m(vm, vd, rs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat16m4_t test_vfmadd_vv_f16m4_rm_m(vbool4_t vm, vfloat16m4_t vd,
                                       vfloat16m4_t vs1, vfloat16m4_t vs2,
                                       size_t vl) {
  return __riscv_vfmadd_vv_f16m4_rm_m(vm, vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat16m4_t test_vfmadd_vf_f16m4_rm_m(vbool4_t vm, vfloat16m4_t vd,
                                       _Float16 rs1, vfloat16m4_t vs2,
                                       size_t vl) {
  return __riscv_vfmadd_vf_f16m4_rm_m(vm, vd, rs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat16m8_t test_vfmadd_vv_f16m8_rm_m(vbool2_t vm, vfloat16m8_t vd,
                                       vfloat16m8_t vs1, vfloat16m8_t vs2,
                                       size_t vl) {
  return __riscv_vfmadd_vv_f16m8_rm_m(vm, vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat16m8_t test_vfmadd_vf_f16m8_rm_m(vbool2_t vm, vfloat16m8_t vd,
                                       _Float16 rs1, vfloat16m8_t vs2,
                                       size_t vl) {
  return __riscv_vfmadd_vf_f16m8_rm_m(vm, vd, rs1, vs2, __RISCV_FRM_RNE, vl);
}
