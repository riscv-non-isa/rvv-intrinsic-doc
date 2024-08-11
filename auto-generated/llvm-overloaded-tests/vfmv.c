// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -target-feature +zfh \
// RUN:   -target-feature +experimental-zvfh -disable-O0-optnone \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

float test_vfmv_f_s_f32mf2_f32(vfloat32mf2_t vs1) {
  return __riscv_vfmv_f(vs1);
}

float test_vfmv_f_s_f32m1_f32(vfloat32m1_t vs1) { return __riscv_vfmv_f(vs1); }

float test_vfmv_f_s_f32m2_f32(vfloat32m2_t vs1) { return __riscv_vfmv_f(vs1); }

float test_vfmv_f_s_f32m4_f32(vfloat32m4_t vs1) { return __riscv_vfmv_f(vs1); }

float test_vfmv_f_s_f32m8_f32(vfloat32m8_t vs1) { return __riscv_vfmv_f(vs1); }

double test_vfmv_f_s_f64m1_f64(vfloat64m1_t vs1) { return __riscv_vfmv_f(vs1); }

double test_vfmv_f_s_f64m2_f64(vfloat64m2_t vs1) { return __riscv_vfmv_f(vs1); }

double test_vfmv_f_s_f64m4_f64(vfloat64m4_t vs1) { return __riscv_vfmv_f(vs1); }

double test_vfmv_f_s_f64m8_f64(vfloat64m8_t vs1) { return __riscv_vfmv_f(vs1); }
