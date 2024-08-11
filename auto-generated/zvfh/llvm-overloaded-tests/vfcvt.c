// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -target-feature +zfh \
// RUN:   -target-feature +zvfh -disable-O0-optnone \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

vint16mf4_t test_vfcvt_x_f_v_i16mf4(vfloat16mf4_t vs2, size_t vl) {
  return __riscv_vfcvt_x(vs2, vl);
}

vint16mf2_t test_vfcvt_x_f_v_i16mf2(vfloat16mf2_t vs2, size_t vl) {
  return __riscv_vfcvt_x(vs2, vl);
}

vint16m1_t test_vfcvt_x_f_v_i16m1(vfloat16m1_t vs2, size_t vl) {
  return __riscv_vfcvt_x(vs2, vl);
}

vint16m2_t test_vfcvt_x_f_v_i16m2(vfloat16m2_t vs2, size_t vl) {
  return __riscv_vfcvt_x(vs2, vl);
}

vint16m4_t test_vfcvt_x_f_v_i16m4(vfloat16m4_t vs2, size_t vl) {
  return __riscv_vfcvt_x(vs2, vl);
}

vint16m8_t test_vfcvt_x_f_v_i16m8(vfloat16m8_t vs2, size_t vl) {
  return __riscv_vfcvt_x(vs2, vl);
}

vuint16mf4_t test_vfcvt_xu_f_v_u16mf4(vfloat16mf4_t vs2, size_t vl) {
  return __riscv_vfcvt_xu(vs2, vl);
}

vuint16mf2_t test_vfcvt_xu_f_v_u16mf2(vfloat16mf2_t vs2, size_t vl) {
  return __riscv_vfcvt_xu(vs2, vl);
}

vuint16m1_t test_vfcvt_xu_f_v_u16m1(vfloat16m1_t vs2, size_t vl) {
  return __riscv_vfcvt_xu(vs2, vl);
}

vuint16m2_t test_vfcvt_xu_f_v_u16m2(vfloat16m2_t vs2, size_t vl) {
  return __riscv_vfcvt_xu(vs2, vl);
}

vuint16m4_t test_vfcvt_xu_f_v_u16m4(vfloat16m4_t vs2, size_t vl) {
  return __riscv_vfcvt_xu(vs2, vl);
}

vuint16m8_t test_vfcvt_xu_f_v_u16m8(vfloat16m8_t vs2, size_t vl) {
  return __riscv_vfcvt_xu(vs2, vl);
}

vfloat16mf4_t test_vfcvt_f_x_v_f16mf4(vint16mf4_t vs2, size_t vl) {
  return __riscv_vfcvt_f(vs2, vl);
}

vfloat16mf2_t test_vfcvt_f_x_v_f16mf2(vint16mf2_t vs2, size_t vl) {
  return __riscv_vfcvt_f(vs2, vl);
}

vfloat16m1_t test_vfcvt_f_x_v_f16m1(vint16m1_t vs2, size_t vl) {
  return __riscv_vfcvt_f(vs2, vl);
}

vfloat16m2_t test_vfcvt_f_x_v_f16m2(vint16m2_t vs2, size_t vl) {
  return __riscv_vfcvt_f(vs2, vl);
}

vfloat16m4_t test_vfcvt_f_x_v_f16m4(vint16m4_t vs2, size_t vl) {
  return __riscv_vfcvt_f(vs2, vl);
}

vfloat16m8_t test_vfcvt_f_x_v_f16m8(vint16m8_t vs2, size_t vl) {
  return __riscv_vfcvt_f(vs2, vl);
}

vfloat16mf4_t test_vfcvt_f_xu_v_f16mf4(vuint16mf4_t vs2, size_t vl) {
  return __riscv_vfcvt_f(vs2, vl);
}

vfloat16mf2_t test_vfcvt_f_xu_v_f16mf2(vuint16mf2_t vs2, size_t vl) {
  return __riscv_vfcvt_f(vs2, vl);
}

vfloat16m1_t test_vfcvt_f_xu_v_f16m1(vuint16m1_t vs2, size_t vl) {
  return __riscv_vfcvt_f(vs2, vl);
}

vfloat16m2_t test_vfcvt_f_xu_v_f16m2(vuint16m2_t vs2, size_t vl) {
  return __riscv_vfcvt_f(vs2, vl);
}

vfloat16m4_t test_vfcvt_f_xu_v_f16m4(vuint16m4_t vs2, size_t vl) {
  return __riscv_vfcvt_f(vs2, vl);
}

vfloat16m8_t test_vfcvt_f_xu_v_f16m8(vuint16m8_t vs2, size_t vl) {
  return __riscv_vfcvt_f(vs2, vl);
}

vint16mf4_t test_vfcvt_x_f_v_i16mf4_m(vbool64_t vm, vfloat16mf4_t vs2,
                                      size_t vl) {
  return __riscv_vfcvt_x(vm, vs2, vl);
}

vint16mf2_t test_vfcvt_x_f_v_i16mf2_m(vbool32_t vm, vfloat16mf2_t vs2,
                                      size_t vl) {
  return __riscv_vfcvt_x(vm, vs2, vl);
}

vint16m1_t test_vfcvt_x_f_v_i16m1_m(vbool16_t vm, vfloat16m1_t vs2, size_t vl) {
  return __riscv_vfcvt_x(vm, vs2, vl);
}

vint16m2_t test_vfcvt_x_f_v_i16m2_m(vbool8_t vm, vfloat16m2_t vs2, size_t vl) {
  return __riscv_vfcvt_x(vm, vs2, vl);
}

vint16m4_t test_vfcvt_x_f_v_i16m4_m(vbool4_t vm, vfloat16m4_t vs2, size_t vl) {
  return __riscv_vfcvt_x(vm, vs2, vl);
}

vint16m8_t test_vfcvt_x_f_v_i16m8_m(vbool2_t vm, vfloat16m8_t vs2, size_t vl) {
  return __riscv_vfcvt_x(vm, vs2, vl);
}

vuint16mf4_t test_vfcvt_xu_f_v_u16mf4_m(vbool64_t vm, vfloat16mf4_t vs2,
                                        size_t vl) {
  return __riscv_vfcvt_xu(vm, vs2, vl);
}

vuint16mf2_t test_vfcvt_xu_f_v_u16mf2_m(vbool32_t vm, vfloat16mf2_t vs2,
                                        size_t vl) {
  return __riscv_vfcvt_xu(vm, vs2, vl);
}

vuint16m1_t test_vfcvt_xu_f_v_u16m1_m(vbool16_t vm, vfloat16m1_t vs2,
                                      size_t vl) {
  return __riscv_vfcvt_xu(vm, vs2, vl);
}

vuint16m2_t test_vfcvt_xu_f_v_u16m2_m(vbool8_t vm, vfloat16m2_t vs2,
                                      size_t vl) {
  return __riscv_vfcvt_xu(vm, vs2, vl);
}

vuint16m4_t test_vfcvt_xu_f_v_u16m4_m(vbool4_t vm, vfloat16m4_t vs2,
                                      size_t vl) {
  return __riscv_vfcvt_xu(vm, vs2, vl);
}

vuint16m8_t test_vfcvt_xu_f_v_u16m8_m(vbool2_t vm, vfloat16m8_t vs2,
                                      size_t vl) {
  return __riscv_vfcvt_xu(vm, vs2, vl);
}

vfloat16mf4_t test_vfcvt_f_x_v_f16mf4_m(vbool64_t vm, vint16mf4_t vs2,
                                        size_t vl) {
  return __riscv_vfcvt_f(vm, vs2, vl);
}

vfloat16mf2_t test_vfcvt_f_x_v_f16mf2_m(vbool32_t vm, vint16mf2_t vs2,
                                        size_t vl) {
  return __riscv_vfcvt_f(vm, vs2, vl);
}

vfloat16m1_t test_vfcvt_f_x_v_f16m1_m(vbool16_t vm, vint16m1_t vs2, size_t vl) {
  return __riscv_vfcvt_f(vm, vs2, vl);
}

vfloat16m2_t test_vfcvt_f_x_v_f16m2_m(vbool8_t vm, vint16m2_t vs2, size_t vl) {
  return __riscv_vfcvt_f(vm, vs2, vl);
}

vfloat16m4_t test_vfcvt_f_x_v_f16m4_m(vbool4_t vm, vint16m4_t vs2, size_t vl) {
  return __riscv_vfcvt_f(vm, vs2, vl);
}

vfloat16m8_t test_vfcvt_f_x_v_f16m8_m(vbool2_t vm, vint16m8_t vs2, size_t vl) {
  return __riscv_vfcvt_f(vm, vs2, vl);
}

vfloat16mf4_t test_vfcvt_f_xu_v_f16mf4_m(vbool64_t vm, vuint16mf4_t vs2,
                                         size_t vl) {
  return __riscv_vfcvt_f(vm, vs2, vl);
}

vfloat16mf2_t test_vfcvt_f_xu_v_f16mf2_m(vbool32_t vm, vuint16mf2_t vs2,
                                         size_t vl) {
  return __riscv_vfcvt_f(vm, vs2, vl);
}

vfloat16m1_t test_vfcvt_f_xu_v_f16m1_m(vbool16_t vm, vuint16m1_t vs2,
                                       size_t vl) {
  return __riscv_vfcvt_f(vm, vs2, vl);
}

vfloat16m2_t test_vfcvt_f_xu_v_f16m2_m(vbool8_t vm, vuint16m2_t vs2,
                                       size_t vl) {
  return __riscv_vfcvt_f(vm, vs2, vl);
}

vfloat16m4_t test_vfcvt_f_xu_v_f16m4_m(vbool4_t vm, vuint16m4_t vs2,
                                       size_t vl) {
  return __riscv_vfcvt_f(vm, vs2, vl);
}

vfloat16m8_t test_vfcvt_f_xu_v_f16m8_m(vbool2_t vm, vuint16m8_t vs2,
                                       size_t vl) {
  return __riscv_vfcvt_f(vm, vs2, vl);
}

vint16mf4_t test_vfcvt_x_f_v_i16mf4_rm(vfloat16mf4_t vs2, size_t vl) {
  return __riscv_vfcvt_x(vs2, __RISCV_FRM_RNE, vl);
}

vint16mf2_t test_vfcvt_x_f_v_i16mf2_rm(vfloat16mf2_t vs2, size_t vl) {
  return __riscv_vfcvt_x(vs2, __RISCV_FRM_RNE, vl);
}

vint16m1_t test_vfcvt_x_f_v_i16m1_rm(vfloat16m1_t vs2, size_t vl) {
  return __riscv_vfcvt_x(vs2, __RISCV_FRM_RNE, vl);
}

vint16m2_t test_vfcvt_x_f_v_i16m2_rm(vfloat16m2_t vs2, size_t vl) {
  return __riscv_vfcvt_x(vs2, __RISCV_FRM_RNE, vl);
}

vint16m4_t test_vfcvt_x_f_v_i16m4_rm(vfloat16m4_t vs2, size_t vl) {
  return __riscv_vfcvt_x(vs2, __RISCV_FRM_RNE, vl);
}

vint16m8_t test_vfcvt_x_f_v_i16m8_rm(vfloat16m8_t vs2, size_t vl) {
  return __riscv_vfcvt_x(vs2, __RISCV_FRM_RNE, vl);
}

vuint16mf4_t test_vfcvt_xu_f_v_u16mf4_rm(vfloat16mf4_t vs2, size_t vl) {
  return __riscv_vfcvt_xu(vs2, __RISCV_FRM_RNE, vl);
}

vuint16mf2_t test_vfcvt_xu_f_v_u16mf2_rm(vfloat16mf2_t vs2, size_t vl) {
  return __riscv_vfcvt_xu(vs2, __RISCV_FRM_RNE, vl);
}

vuint16m1_t test_vfcvt_xu_f_v_u16m1_rm(vfloat16m1_t vs2, size_t vl) {
  return __riscv_vfcvt_xu(vs2, __RISCV_FRM_RNE, vl);
}

vuint16m2_t test_vfcvt_xu_f_v_u16m2_rm(vfloat16m2_t vs2, size_t vl) {
  return __riscv_vfcvt_xu(vs2, __RISCV_FRM_RNE, vl);
}

vuint16m4_t test_vfcvt_xu_f_v_u16m4_rm(vfloat16m4_t vs2, size_t vl) {
  return __riscv_vfcvt_xu(vs2, __RISCV_FRM_RNE, vl);
}

vuint16m8_t test_vfcvt_xu_f_v_u16m8_rm(vfloat16m8_t vs2, size_t vl) {
  return __riscv_vfcvt_xu(vs2, __RISCV_FRM_RNE, vl);
}

vfloat16mf4_t test_vfcvt_f_x_v_f16mf4_rm(vint16mf4_t vs2, size_t vl) {
  return __riscv_vfcvt_f(vs2, __RISCV_FRM_RNE, vl);
}

vfloat16mf2_t test_vfcvt_f_x_v_f16mf2_rm(vint16mf2_t vs2, size_t vl) {
  return __riscv_vfcvt_f(vs2, __RISCV_FRM_RNE, vl);
}

vfloat16m1_t test_vfcvt_f_x_v_f16m1_rm(vint16m1_t vs2, size_t vl) {
  return __riscv_vfcvt_f(vs2, __RISCV_FRM_RNE, vl);
}

vfloat16m2_t test_vfcvt_f_x_v_f16m2_rm(vint16m2_t vs2, size_t vl) {
  return __riscv_vfcvt_f(vs2, __RISCV_FRM_RNE, vl);
}

vfloat16m4_t test_vfcvt_f_x_v_f16m4_rm(vint16m4_t vs2, size_t vl) {
  return __riscv_vfcvt_f(vs2, __RISCV_FRM_RNE, vl);
}

vfloat16m8_t test_vfcvt_f_x_v_f16m8_rm(vint16m8_t vs2, size_t vl) {
  return __riscv_vfcvt_f(vs2, __RISCV_FRM_RNE, vl);
}

vfloat16mf4_t test_vfcvt_f_xu_v_f16mf4_rm(vuint16mf4_t vs2, size_t vl) {
  return __riscv_vfcvt_f(vs2, __RISCV_FRM_RNE, vl);
}

vfloat16mf2_t test_vfcvt_f_xu_v_f16mf2_rm(vuint16mf2_t vs2, size_t vl) {
  return __riscv_vfcvt_f(vs2, __RISCV_FRM_RNE, vl);
}

vfloat16m1_t test_vfcvt_f_xu_v_f16m1_rm(vuint16m1_t vs2, size_t vl) {
  return __riscv_vfcvt_f(vs2, __RISCV_FRM_RNE, vl);
}

vfloat16m2_t test_vfcvt_f_xu_v_f16m2_rm(vuint16m2_t vs2, size_t vl) {
  return __riscv_vfcvt_f(vs2, __RISCV_FRM_RNE, vl);
}

vfloat16m4_t test_vfcvt_f_xu_v_f16m4_rm(vuint16m4_t vs2, size_t vl) {
  return __riscv_vfcvt_f(vs2, __RISCV_FRM_RNE, vl);
}

vfloat16m8_t test_vfcvt_f_xu_v_f16m8_rm(vuint16m8_t vs2, size_t vl) {
  return __riscv_vfcvt_f(vs2, __RISCV_FRM_RNE, vl);
}

vint16mf4_t test_vfcvt_x_f_v_i16mf4_rm_m(vbool64_t vm, vfloat16mf4_t vs2,
                                         size_t vl) {
  return __riscv_vfcvt_x(vm, vs2, __RISCV_FRM_RNE, vl);
}

vint16mf2_t test_vfcvt_x_f_v_i16mf2_rm_m(vbool32_t vm, vfloat16mf2_t vs2,
                                         size_t vl) {
  return __riscv_vfcvt_x(vm, vs2, __RISCV_FRM_RNE, vl);
}

vint16m1_t test_vfcvt_x_f_v_i16m1_rm_m(vbool16_t vm, vfloat16m1_t vs2,
                                       size_t vl) {
  return __riscv_vfcvt_x(vm, vs2, __RISCV_FRM_RNE, vl);
}

vint16m2_t test_vfcvt_x_f_v_i16m2_rm_m(vbool8_t vm, vfloat16m2_t vs2,
                                       size_t vl) {
  return __riscv_vfcvt_x(vm, vs2, __RISCV_FRM_RNE, vl);
}

vint16m4_t test_vfcvt_x_f_v_i16m4_rm_m(vbool4_t vm, vfloat16m4_t vs2,
                                       size_t vl) {
  return __riscv_vfcvt_x(vm, vs2, __RISCV_FRM_RNE, vl);
}

vint16m8_t test_vfcvt_x_f_v_i16m8_rm_m(vbool2_t vm, vfloat16m8_t vs2,
                                       size_t vl) {
  return __riscv_vfcvt_x(vm, vs2, __RISCV_FRM_RNE, vl);
}

vuint16mf4_t test_vfcvt_xu_f_v_u16mf4_rm_m(vbool64_t vm, vfloat16mf4_t vs2,
                                           size_t vl) {
  return __riscv_vfcvt_xu(vm, vs2, __RISCV_FRM_RNE, vl);
}

vuint16mf2_t test_vfcvt_xu_f_v_u16mf2_rm_m(vbool32_t vm, vfloat16mf2_t vs2,
                                           size_t vl) {
  return __riscv_vfcvt_xu(vm, vs2, __RISCV_FRM_RNE, vl);
}

vuint16m1_t test_vfcvt_xu_f_v_u16m1_rm_m(vbool16_t vm, vfloat16m1_t vs2,
                                         size_t vl) {
  return __riscv_vfcvt_xu(vm, vs2, __RISCV_FRM_RNE, vl);
}

vuint16m2_t test_vfcvt_xu_f_v_u16m2_rm_m(vbool8_t vm, vfloat16m2_t vs2,
                                         size_t vl) {
  return __riscv_vfcvt_xu(vm, vs2, __RISCV_FRM_RNE, vl);
}

vuint16m4_t test_vfcvt_xu_f_v_u16m4_rm_m(vbool4_t vm, vfloat16m4_t vs2,
                                         size_t vl) {
  return __riscv_vfcvt_xu(vm, vs2, __RISCV_FRM_RNE, vl);
}

vuint16m8_t test_vfcvt_xu_f_v_u16m8_rm_m(vbool2_t vm, vfloat16m8_t vs2,
                                         size_t vl) {
  return __riscv_vfcvt_xu(vm, vs2, __RISCV_FRM_RNE, vl);
}

vfloat16mf4_t test_vfcvt_f_x_v_f16mf4_rm_m(vbool64_t vm, vint16mf4_t vs2,
                                           size_t vl) {
  return __riscv_vfcvt_f(vm, vs2, __RISCV_FRM_RNE, vl);
}

vfloat16mf2_t test_vfcvt_f_x_v_f16mf2_rm_m(vbool32_t vm, vint16mf2_t vs2,
                                           size_t vl) {
  return __riscv_vfcvt_f(vm, vs2, __RISCV_FRM_RNE, vl);
}

vfloat16m1_t test_vfcvt_f_x_v_f16m1_rm_m(vbool16_t vm, vint16m1_t vs2,
                                         size_t vl) {
  return __riscv_vfcvt_f(vm, vs2, __RISCV_FRM_RNE, vl);
}

vfloat16m2_t test_vfcvt_f_x_v_f16m2_rm_m(vbool8_t vm, vint16m2_t vs2,
                                         size_t vl) {
  return __riscv_vfcvt_f(vm, vs2, __RISCV_FRM_RNE, vl);
}

vfloat16m4_t test_vfcvt_f_x_v_f16m4_rm_m(vbool4_t vm, vint16m4_t vs2,
                                         size_t vl) {
  return __riscv_vfcvt_f(vm, vs2, __RISCV_FRM_RNE, vl);
}

vfloat16m8_t test_vfcvt_f_x_v_f16m8_rm_m(vbool2_t vm, vint16m8_t vs2,
                                         size_t vl) {
  return __riscv_vfcvt_f(vm, vs2, __RISCV_FRM_RNE, vl);
}

vfloat16mf4_t test_vfcvt_f_xu_v_f16mf4_rm_m(vbool64_t vm, vuint16mf4_t vs2,
                                            size_t vl) {
  return __riscv_vfcvt_f(vm, vs2, __RISCV_FRM_RNE, vl);
}

vfloat16mf2_t test_vfcvt_f_xu_v_f16mf2_rm_m(vbool32_t vm, vuint16mf2_t vs2,
                                            size_t vl) {
  return __riscv_vfcvt_f(vm, vs2, __RISCV_FRM_RNE, vl);
}

vfloat16m1_t test_vfcvt_f_xu_v_f16m1_rm_m(vbool16_t vm, vuint16m1_t vs2,
                                          size_t vl) {
  return __riscv_vfcvt_f(vm, vs2, __RISCV_FRM_RNE, vl);
}

vfloat16m2_t test_vfcvt_f_xu_v_f16m2_rm_m(vbool8_t vm, vuint16m2_t vs2,
                                          size_t vl) {
  return __riscv_vfcvt_f(vm, vs2, __RISCV_FRM_RNE, vl);
}

vfloat16m4_t test_vfcvt_f_xu_v_f16m4_rm_m(vbool4_t vm, vuint16m4_t vs2,
                                          size_t vl) {
  return __riscv_vfcvt_f(vm, vs2, __RISCV_FRM_RNE, vl);
}

vfloat16m8_t test_vfcvt_f_xu_v_f16m8_rm_m(vbool2_t vm, vuint16m8_t vs2,
                                          size_t vl) {
  return __riscv_vfcvt_f(vm, vs2, __RISCV_FRM_RNE, vl);
}
