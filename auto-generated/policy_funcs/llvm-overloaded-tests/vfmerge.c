// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -target-feature +zfh \
// RUN:   -target-feature +experimental-zvfh -disable-O0-optnone  \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

vfloat16mf4_t test_vfmerge_vfm_f16mf4_tu(vfloat16mf4_t maskedoff, vfloat16mf4_t op1, _Float16 op2, vbool64_t mask, size_t vl) {
  return vfmerge_tu(maskedoff, op1, op2, mask, vl);
}

vfloat16mf2_t test_vfmerge_vfm_f16mf2_tu(vfloat16mf2_t maskedoff, vfloat16mf2_t op1, _Float16 op2, vbool32_t mask, size_t vl) {
  return vfmerge_tu(maskedoff, op1, op2, mask, vl);
}

vfloat16m1_t test_vfmerge_vfm_f16m1_tu(vfloat16m1_t maskedoff, vfloat16m1_t op1, _Float16 op2, vbool16_t mask, size_t vl) {
  return vfmerge_tu(maskedoff, op1, op2, mask, vl);
}

vfloat16m2_t test_vfmerge_vfm_f16m2_tu(vfloat16m2_t maskedoff, vfloat16m2_t op1, _Float16 op2, vbool8_t mask, size_t vl) {
  return vfmerge_tu(maskedoff, op1, op2, mask, vl);
}

vfloat16m4_t test_vfmerge_vfm_f16m4_tu(vfloat16m4_t maskedoff, vfloat16m4_t op1, _Float16 op2, vbool4_t mask, size_t vl) {
  return vfmerge_tu(maskedoff, op1, op2, mask, vl);
}

vfloat16m8_t test_vfmerge_vfm_f16m8_tu(vfloat16m8_t maskedoff, vfloat16m8_t op1, _Float16 op2, vbool2_t mask, size_t vl) {
  return vfmerge_tu(maskedoff, op1, op2, mask, vl);
}

vfloat32mf2_t test_vfmerge_vfm_f32mf2_tu(vfloat32mf2_t maskedoff, vfloat32mf2_t op1, float op2, vbool64_t mask, size_t vl) {
  return vfmerge_tu(maskedoff, op1, op2, mask, vl);
}

vfloat32m1_t test_vfmerge_vfm_f32m1_tu(vfloat32m1_t maskedoff, vfloat32m1_t op1, float op2, vbool32_t mask, size_t vl) {
  return vfmerge_tu(maskedoff, op1, op2, mask, vl);
}

vfloat32m2_t test_vfmerge_vfm_f32m2_tu(vfloat32m2_t maskedoff, vfloat32m2_t op1, float op2, vbool16_t mask, size_t vl) {
  return vfmerge_tu(maskedoff, op1, op2, mask, vl);
}

vfloat32m4_t test_vfmerge_vfm_f32m4_tu(vfloat32m4_t maskedoff, vfloat32m4_t op1, float op2, vbool8_t mask, size_t vl) {
  return vfmerge_tu(maskedoff, op1, op2, mask, vl);
}

vfloat32m8_t test_vfmerge_vfm_f32m8_tu(vfloat32m8_t maskedoff, vfloat32m8_t op1, float op2, vbool4_t mask, size_t vl) {
  return vfmerge_tu(maskedoff, op1, op2, mask, vl);
}

vfloat64m1_t test_vfmerge_vfm_f64m1_tu(vfloat64m1_t maskedoff, vfloat64m1_t op1, double op2, vbool64_t mask, size_t vl) {
  return vfmerge_tu(maskedoff, op1, op2, mask, vl);
}

vfloat64m2_t test_vfmerge_vfm_f64m2_tu(vfloat64m2_t maskedoff, vfloat64m2_t op1, double op2, vbool32_t mask, size_t vl) {
  return vfmerge_tu(maskedoff, op1, op2, mask, vl);
}

vfloat64m4_t test_vfmerge_vfm_f64m4_tu(vfloat64m4_t maskedoff, vfloat64m4_t op1, double op2, vbool16_t mask, size_t vl) {
  return vfmerge_tu(maskedoff, op1, op2, mask, vl);
}

vfloat64m8_t test_vfmerge_vfm_f64m8_tu(vfloat64m8_t maskedoff, vfloat64m8_t op1, double op2, vbool8_t mask, size_t vl) {
  return vfmerge_tu(maskedoff, op1, op2, mask, vl);
}

vfloat16mf4_t test_vfmerge_vfm_f16mf4_ta(vfloat16mf4_t op1, _Float16 op2, vbool64_t mask, size_t vl) {
  return vfmerge_ta(op1, op2, mask, vl);
}

vfloat16mf2_t test_vfmerge_vfm_f16mf2_ta(vfloat16mf2_t op1, _Float16 op2, vbool32_t mask, size_t vl) {
  return vfmerge_ta(op1, op2, mask, vl);
}

vfloat16m1_t test_vfmerge_vfm_f16m1_ta(vfloat16m1_t op1, _Float16 op2, vbool16_t mask, size_t vl) {
  return vfmerge_ta(op1, op2, mask, vl);
}

vfloat16m2_t test_vfmerge_vfm_f16m2_ta(vfloat16m2_t op1, _Float16 op2, vbool8_t mask, size_t vl) {
  return vfmerge_ta(op1, op2, mask, vl);
}

vfloat16m4_t test_vfmerge_vfm_f16m4_ta(vfloat16m4_t op1, _Float16 op2, vbool4_t mask, size_t vl) {
  return vfmerge_ta(op1, op2, mask, vl);
}

vfloat16m8_t test_vfmerge_vfm_f16m8_ta(vfloat16m8_t op1, _Float16 op2, vbool2_t mask, size_t vl) {
  return vfmerge_ta(op1, op2, mask, vl);
}

vfloat32mf2_t test_vfmerge_vfm_f32mf2_ta(vfloat32mf2_t op1, float op2, vbool64_t mask, size_t vl) {
  return vfmerge_ta(op1, op2, mask, vl);
}

vfloat32m1_t test_vfmerge_vfm_f32m1_ta(vfloat32m1_t op1, float op2, vbool32_t mask, size_t vl) {
  return vfmerge_ta(op1, op2, mask, vl);
}

vfloat32m2_t test_vfmerge_vfm_f32m2_ta(vfloat32m2_t op1, float op2, vbool16_t mask, size_t vl) {
  return vfmerge_ta(op1, op2, mask, vl);
}

vfloat32m4_t test_vfmerge_vfm_f32m4_ta(vfloat32m4_t op1, float op2, vbool8_t mask, size_t vl) {
  return vfmerge_ta(op1, op2, mask, vl);
}

vfloat32m8_t test_vfmerge_vfm_f32m8_ta(vfloat32m8_t op1, float op2, vbool4_t mask, size_t vl) {
  return vfmerge_ta(op1, op2, mask, vl);
}

vfloat64m1_t test_vfmerge_vfm_f64m1_ta(vfloat64m1_t op1, double op2, vbool64_t mask, size_t vl) {
  return vfmerge_ta(op1, op2, mask, vl);
}

vfloat64m2_t test_vfmerge_vfm_f64m2_ta(vfloat64m2_t op1, double op2, vbool32_t mask, size_t vl) {
  return vfmerge_ta(op1, op2, mask, vl);
}

vfloat64m4_t test_vfmerge_vfm_f64m4_ta(vfloat64m4_t op1, double op2, vbool16_t mask, size_t vl) {
  return vfmerge_ta(op1, op2, mask, vl);
}

vfloat64m8_t test_vfmerge_vfm_f64m8_ta(vfloat64m8_t op1, double op2, vbool8_t mask, size_t vl) {
  return vfmerge_ta(op1, op2, mask, vl);
}

