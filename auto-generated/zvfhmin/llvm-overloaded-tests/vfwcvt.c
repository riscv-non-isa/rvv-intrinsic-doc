// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -target-feature +zfh \
// RUN:   -target-feature +zvfhmin -disable-O0-optnone \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

vfloat32mf2_t test_vfwcvt_f_f_v_f32mf2(vfloat16mf4_t vs2, size_t vl) {
  return __riscv_vfwcvt_f(vs2, vl);
}

vfloat32m1_t test_vfwcvt_f_f_v_f32m1(vfloat16mf2_t vs2, size_t vl) {
  return __riscv_vfwcvt_f(vs2, vl);
}

vfloat32m2_t test_vfwcvt_f_f_v_f32m2(vfloat16m1_t vs2, size_t vl) {
  return __riscv_vfwcvt_f(vs2, vl);
}

vfloat32m4_t test_vfwcvt_f_f_v_f32m4(vfloat16m2_t vs2, size_t vl) {
  return __riscv_vfwcvt_f(vs2, vl);
}

vfloat32m8_t test_vfwcvt_f_f_v_f32m8(vfloat16m4_t vs2, size_t vl) {
  return __riscv_vfwcvt_f(vs2, vl);
}

vfloat32mf2_t test_vfwcvt_f_f_v_f32mf2_m(vbool64_t vm, vfloat16mf4_t vs2,
                                         size_t vl) {
  return __riscv_vfwcvt_f(vm, vs2, vl);
}

vfloat32m1_t test_vfwcvt_f_f_v_f32m1_m(vbool32_t vm, vfloat16mf2_t vs2,
                                       size_t vl) {
  return __riscv_vfwcvt_f(vm, vs2, vl);
}

vfloat32m2_t test_vfwcvt_f_f_v_f32m2_m(vbool16_t vm, vfloat16m1_t vs2,
                                       size_t vl) {
  return __riscv_vfwcvt_f(vm, vs2, vl);
}

vfloat32m4_t test_vfwcvt_f_f_v_f32m4_m(vbool8_t vm, vfloat16m2_t vs2,
                                       size_t vl) {
  return __riscv_vfwcvt_f(vm, vs2, vl);
}

vfloat32m8_t test_vfwcvt_f_f_v_f32m8_m(vbool4_t vm, vfloat16m4_t vs2,
                                       size_t vl) {
  return __riscv_vfwcvt_f(vm, vs2, vl);
}
