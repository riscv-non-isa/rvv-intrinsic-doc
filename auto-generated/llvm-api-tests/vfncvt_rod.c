// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -target-feature +zfh \
// RUN:   -target-feature +experimental-zvfh -disable-O0-optnone \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

vfloat32mf2_t test_vfncvt_rod_f_f_w_f32mf2(vfloat64m1_t vs2, size_t vl) {
  return __riscv_vfncvt_rod_f_f_w_f32mf2(vs2, vl);
}

vfloat32m1_t test_vfncvt_rod_f_f_w_f32m1(vfloat64m2_t vs2, size_t vl) {
  return __riscv_vfncvt_rod_f_f_w_f32m1(vs2, vl);
}

vfloat32m2_t test_vfncvt_rod_f_f_w_f32m2(vfloat64m4_t vs2, size_t vl) {
  return __riscv_vfncvt_rod_f_f_w_f32m2(vs2, vl);
}

vfloat32m4_t test_vfncvt_rod_f_f_w_f32m4(vfloat64m8_t vs2, size_t vl) {
  return __riscv_vfncvt_rod_f_f_w_f32m4(vs2, vl);
}

vfloat32mf2_t test_vfncvt_rod_f_f_w_f32mf2_m(vbool64_t vm, vfloat64m1_t vs2,
                                             size_t vl) {
  return __riscv_vfncvt_rod_f_f_w_f32mf2_m(vm, vs2, vl);
}

vfloat32m1_t test_vfncvt_rod_f_f_w_f32m1_m(vbool32_t vm, vfloat64m2_t vs2,
                                           size_t vl) {
  return __riscv_vfncvt_rod_f_f_w_f32m1_m(vm, vs2, vl);
}

vfloat32m2_t test_vfncvt_rod_f_f_w_f32m2_m(vbool16_t vm, vfloat64m4_t vs2,
                                           size_t vl) {
  return __riscv_vfncvt_rod_f_f_w_f32m2_m(vm, vs2, vl);
}

vfloat32m4_t test_vfncvt_rod_f_f_w_f32m4_m(vbool8_t vm, vfloat64m8_t vs2,
                                           size_t vl) {
  return __riscv_vfncvt_rod_f_f_w_f32m4_m(vm, vs2, vl);
}
