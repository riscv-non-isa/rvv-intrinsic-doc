// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -target-feature +zfh \
// RUN:   -target-feature +experimental-zvfh -disable-O0-optnone  \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

vfloat16mf4_t test_vfmerge_vfm_f16mf4(vbool64_t mask, vfloat16mf4_t op1, _Float16 op2, size_t vl) {
  return vfmerge(mask, op1, op2, vl);
}

vfloat16mf2_t test_vfmerge_vfm_f16mf2(vbool32_t mask, vfloat16mf2_t op1, _Float16 op2, size_t vl) {
  return vfmerge(mask, op1, op2, vl);
}

vfloat16m1_t test_vfmerge_vfm_f16m1(vbool16_t mask, vfloat16m1_t op1, _Float16 op2, size_t vl) {
  return vfmerge(mask, op1, op2, vl);
}

vfloat16m2_t test_vfmerge_vfm_f16m2(vbool8_t mask, vfloat16m2_t op1, _Float16 op2, size_t vl) {
  return vfmerge(mask, op1, op2, vl);
}

vfloat16m4_t test_vfmerge_vfm_f16m4(vbool4_t mask, vfloat16m4_t op1, _Float16 op2, size_t vl) {
  return vfmerge(mask, op1, op2, vl);
}

vfloat16m8_t test_vfmerge_vfm_f16m8(vbool2_t mask, vfloat16m8_t op1, _Float16 op2, size_t vl) {
  return vfmerge(mask, op1, op2, vl);
}

vfloat32mf2_t test_vfmerge_vfm_f32mf2(vbool64_t mask, vfloat32mf2_t op1, float op2, size_t vl) {
  return vfmerge(mask, op1, op2, vl);
}

vfloat32m1_t test_vfmerge_vfm_f32m1(vbool32_t mask, vfloat32m1_t op1, float op2, size_t vl) {
  return vfmerge(mask, op1, op2, vl);
}

vfloat32m2_t test_vfmerge_vfm_f32m2(vbool16_t mask, vfloat32m2_t op1, float op2, size_t vl) {
  return vfmerge(mask, op1, op2, vl);
}

vfloat32m4_t test_vfmerge_vfm_f32m4(vbool8_t mask, vfloat32m4_t op1, float op2, size_t vl) {
  return vfmerge(mask, op1, op2, vl);
}

vfloat32m8_t test_vfmerge_vfm_f32m8(vbool4_t mask, vfloat32m8_t op1, float op2, size_t vl) {
  return vfmerge(mask, op1, op2, vl);
}

vfloat64m1_t test_vfmerge_vfm_f64m1(vbool64_t mask, vfloat64m1_t op1, double op2, size_t vl) {
  return vfmerge(mask, op1, op2, vl);
}

vfloat64m2_t test_vfmerge_vfm_f64m2(vbool32_t mask, vfloat64m2_t op1, double op2, size_t vl) {
  return vfmerge(mask, op1, op2, vl);
}

vfloat64m4_t test_vfmerge_vfm_f64m4(vbool16_t mask, vfloat64m4_t op1, double op2, size_t vl) {
  return vfmerge(mask, op1, op2, vl);
}

vfloat64m8_t test_vfmerge_vfm_f64m8(vbool8_t mask, vfloat64m8_t op1, double op2, size_t vl) {
  return vfmerge(mask, op1, op2, vl);
}

