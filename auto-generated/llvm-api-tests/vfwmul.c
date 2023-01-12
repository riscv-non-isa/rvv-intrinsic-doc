// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -target-feature +zfh \
// RUN:   -target-feature +experimental-zvfh -disable-O0-optnone  \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

vfloat32mf2_t test_vfwmul_vv_f32mf2(vfloat16mf4_t op1, vfloat16mf4_t op2, size_t vl) {
  return vfwmul_vv_f32mf2(op1, op2, vl);
}

vfloat32mf2_t test_vfwmul_vf_f32mf2(vfloat16mf4_t op1, _Float16 op2, size_t vl) {
  return vfwmul_vf_f32mf2(op1, op2, vl);
}

vfloat32m1_t test_vfwmul_vv_f32m1(vfloat16mf2_t op1, vfloat16mf2_t op2, size_t vl) {
  return vfwmul_vv_f32m1(op1, op2, vl);
}

vfloat32m1_t test_vfwmul_vf_f32m1(vfloat16mf2_t op1, _Float16 op2, size_t vl) {
  return vfwmul_vf_f32m1(op1, op2, vl);
}

vfloat32m2_t test_vfwmul_vv_f32m2(vfloat16m1_t op1, vfloat16m1_t op2, size_t vl) {
  return vfwmul_vv_f32m2(op1, op2, vl);
}

vfloat32m2_t test_vfwmul_vf_f32m2(vfloat16m1_t op1, _Float16 op2, size_t vl) {
  return vfwmul_vf_f32m2(op1, op2, vl);
}

vfloat32m4_t test_vfwmul_vv_f32m4(vfloat16m2_t op1, vfloat16m2_t op2, size_t vl) {
  return vfwmul_vv_f32m4(op1, op2, vl);
}

vfloat32m4_t test_vfwmul_vf_f32m4(vfloat16m2_t op1, _Float16 op2, size_t vl) {
  return vfwmul_vf_f32m4(op1, op2, vl);
}

vfloat32m8_t test_vfwmul_vv_f32m8(vfloat16m4_t op1, vfloat16m4_t op2, size_t vl) {
  return vfwmul_vv_f32m8(op1, op2, vl);
}

vfloat32m8_t test_vfwmul_vf_f32m8(vfloat16m4_t op1, _Float16 op2, size_t vl) {
  return vfwmul_vf_f32m8(op1, op2, vl);
}

vfloat64m1_t test_vfwmul_vv_f64m1(vfloat32mf2_t op1, vfloat32mf2_t op2, size_t vl) {
  return vfwmul_vv_f64m1(op1, op2, vl);
}

vfloat64m1_t test_vfwmul_vf_f64m1(vfloat32mf2_t op1, float op2, size_t vl) {
  return vfwmul_vf_f64m1(op1, op2, vl);
}

vfloat64m2_t test_vfwmul_vv_f64m2(vfloat32m1_t op1, vfloat32m1_t op2, size_t vl) {
  return vfwmul_vv_f64m2(op1, op2, vl);
}

vfloat64m2_t test_vfwmul_vf_f64m2(vfloat32m1_t op1, float op2, size_t vl) {
  return vfwmul_vf_f64m2(op1, op2, vl);
}

vfloat64m4_t test_vfwmul_vv_f64m4(vfloat32m2_t op1, vfloat32m2_t op2, size_t vl) {
  return vfwmul_vv_f64m4(op1, op2, vl);
}

vfloat64m4_t test_vfwmul_vf_f64m4(vfloat32m2_t op1, float op2, size_t vl) {
  return vfwmul_vf_f64m4(op1, op2, vl);
}

vfloat64m8_t test_vfwmul_vv_f64m8(vfloat32m4_t op1, vfloat32m4_t op2, size_t vl) {
  return vfwmul_vv_f64m8(op1, op2, vl);
}

vfloat64m8_t test_vfwmul_vf_f64m8(vfloat32m4_t op1, float op2, size_t vl) {
  return vfwmul_vf_f64m8(op1, op2, vl);
}

vfloat32mf2_t test_vfwmul_vv_f32mf2_m(vbool64_t mask, vfloat32mf2_t maskedoff, vfloat16mf4_t op1, vfloat16mf4_t op2, size_t vl) {
  return vfwmul_vv_f32mf2_m(mask, maskedoff, op1, op2, vl);
}

vfloat32mf2_t test_vfwmul_vf_f32mf2_m(vbool64_t mask, vfloat32mf2_t maskedoff, vfloat16mf4_t op1, _Float16 op2, size_t vl) {
  return vfwmul_vf_f32mf2_m(mask, maskedoff, op1, op2, vl);
}

vfloat32m1_t test_vfwmul_vv_f32m1_m(vbool32_t mask, vfloat32m1_t maskedoff, vfloat16mf2_t op1, vfloat16mf2_t op2, size_t vl) {
  return vfwmul_vv_f32m1_m(mask, maskedoff, op1, op2, vl);
}

vfloat32m1_t test_vfwmul_vf_f32m1_m(vbool32_t mask, vfloat32m1_t maskedoff, vfloat16mf2_t op1, _Float16 op2, size_t vl) {
  return vfwmul_vf_f32m1_m(mask, maskedoff, op1, op2, vl);
}

vfloat32m2_t test_vfwmul_vv_f32m2_m(vbool16_t mask, vfloat32m2_t maskedoff, vfloat16m1_t op1, vfloat16m1_t op2, size_t vl) {
  return vfwmul_vv_f32m2_m(mask, maskedoff, op1, op2, vl);
}

vfloat32m2_t test_vfwmul_vf_f32m2_m(vbool16_t mask, vfloat32m2_t maskedoff, vfloat16m1_t op1, _Float16 op2, size_t vl) {
  return vfwmul_vf_f32m2_m(mask, maskedoff, op1, op2, vl);
}

vfloat32m4_t test_vfwmul_vv_f32m4_m(vbool8_t mask, vfloat32m4_t maskedoff, vfloat16m2_t op1, vfloat16m2_t op2, size_t vl) {
  return vfwmul_vv_f32m4_m(mask, maskedoff, op1, op2, vl);
}

vfloat32m4_t test_vfwmul_vf_f32m4_m(vbool8_t mask, vfloat32m4_t maskedoff, vfloat16m2_t op1, _Float16 op2, size_t vl) {
  return vfwmul_vf_f32m4_m(mask, maskedoff, op1, op2, vl);
}

vfloat32m8_t test_vfwmul_vv_f32m8_m(vbool4_t mask, vfloat32m8_t maskedoff, vfloat16m4_t op1, vfloat16m4_t op2, size_t vl) {
  return vfwmul_vv_f32m8_m(mask, maskedoff, op1, op2, vl);
}

vfloat32m8_t test_vfwmul_vf_f32m8_m(vbool4_t mask, vfloat32m8_t maskedoff, vfloat16m4_t op1, _Float16 op2, size_t vl) {
  return vfwmul_vf_f32m8_m(mask, maskedoff, op1, op2, vl);
}

vfloat64m1_t test_vfwmul_vv_f64m1_m(vbool64_t mask, vfloat64m1_t maskedoff, vfloat32mf2_t op1, vfloat32mf2_t op2, size_t vl) {
  return vfwmul_vv_f64m1_m(mask, maskedoff, op1, op2, vl);
}

vfloat64m1_t test_vfwmul_vf_f64m1_m(vbool64_t mask, vfloat64m1_t maskedoff, vfloat32mf2_t op1, float op2, size_t vl) {
  return vfwmul_vf_f64m1_m(mask, maskedoff, op1, op2, vl);
}

vfloat64m2_t test_vfwmul_vv_f64m2_m(vbool32_t mask, vfloat64m2_t maskedoff, vfloat32m1_t op1, vfloat32m1_t op2, size_t vl) {
  return vfwmul_vv_f64m2_m(mask, maskedoff, op1, op2, vl);
}

vfloat64m2_t test_vfwmul_vf_f64m2_m(vbool32_t mask, vfloat64m2_t maskedoff, vfloat32m1_t op1, float op2, size_t vl) {
  return vfwmul_vf_f64m2_m(mask, maskedoff, op1, op2, vl);
}

vfloat64m4_t test_vfwmul_vv_f64m4_m(vbool16_t mask, vfloat64m4_t maskedoff, vfloat32m2_t op1, vfloat32m2_t op2, size_t vl) {
  return vfwmul_vv_f64m4_m(mask, maskedoff, op1, op2, vl);
}

vfloat64m4_t test_vfwmul_vf_f64m4_m(vbool16_t mask, vfloat64m4_t maskedoff, vfloat32m2_t op1, float op2, size_t vl) {
  return vfwmul_vf_f64m4_m(mask, maskedoff, op1, op2, vl);
}

vfloat64m8_t test_vfwmul_vv_f64m8_m(vbool8_t mask, vfloat64m8_t maskedoff, vfloat32m4_t op1, vfloat32m4_t op2, size_t vl) {
  return vfwmul_vv_f64m8_m(mask, maskedoff, op1, op2, vl);
}

vfloat64m8_t test_vfwmul_vf_f64m8_m(vbool8_t mask, vfloat64m8_t maskedoff, vfloat32m4_t op1, float op2, size_t vl) {
  return vfwmul_vf_f64m8_m(mask, maskedoff, op1, op2, vl);
}

