// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -target-feature +zfh \
// RUN:   -target-feature +experimental-zvfh -disable-O0-optnone  \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

vfloat32mf2_t test_vfwadd_vv_f32mf2_tu(vfloat32mf2_t maskedoff, vfloat16mf4_t op1, vfloat16mf4_t op2, size_t vl) {
  return __riscv_vfwadd_vv_tu(maskedoff, op1, op2, vl);
}

vfloat32mf2_t test_vfwadd_vf_f32mf2_tu(vfloat32mf2_t maskedoff, vfloat16mf4_t op1, _Float16 op2, size_t vl) {
  return __riscv_vfwadd_vf_tu(maskedoff, op1, op2, vl);
}

vfloat32mf2_t test_vfwadd_wv_f32mf2_tu(vfloat32mf2_t maskedoff, vfloat32mf2_t op1, vfloat16mf4_t op2, size_t vl) {
  return __riscv_vfwadd_wv_tu(maskedoff, op1, op2, vl);
}

vfloat32mf2_t test_vfwadd_wf_f32mf2_tu(vfloat32mf2_t maskedoff, vfloat32mf2_t op1, _Float16 op2, size_t vl) {
  return __riscv_vfwadd_wf_tu(maskedoff, op1, op2, vl);
}

vfloat32m1_t test_vfwadd_vv_f32m1_tu(vfloat32m1_t maskedoff, vfloat16mf2_t op1, vfloat16mf2_t op2, size_t vl) {
  return __riscv_vfwadd_vv_tu(maskedoff, op1, op2, vl);
}

vfloat32m1_t test_vfwadd_vf_f32m1_tu(vfloat32m1_t maskedoff, vfloat16mf2_t op1, _Float16 op2, size_t vl) {
  return __riscv_vfwadd_vf_tu(maskedoff, op1, op2, vl);
}

vfloat32m1_t test_vfwadd_wv_f32m1_tu(vfloat32m1_t maskedoff, vfloat32m1_t op1, vfloat16mf2_t op2, size_t vl) {
  return __riscv_vfwadd_wv_tu(maskedoff, op1, op2, vl);
}

vfloat32m1_t test_vfwadd_wf_f32m1_tu(vfloat32m1_t maskedoff, vfloat32m1_t op1, _Float16 op2, size_t vl) {
  return __riscv_vfwadd_wf_tu(maskedoff, op1, op2, vl);
}

vfloat32m2_t test_vfwadd_vv_f32m2_tu(vfloat32m2_t maskedoff, vfloat16m1_t op1, vfloat16m1_t op2, size_t vl) {
  return __riscv_vfwadd_vv_tu(maskedoff, op1, op2, vl);
}

vfloat32m2_t test_vfwadd_vf_f32m2_tu(vfloat32m2_t maskedoff, vfloat16m1_t op1, _Float16 op2, size_t vl) {
  return __riscv_vfwadd_vf_tu(maskedoff, op1, op2, vl);
}

vfloat32m2_t test_vfwadd_wv_f32m2_tu(vfloat32m2_t maskedoff, vfloat32m2_t op1, vfloat16m1_t op2, size_t vl) {
  return __riscv_vfwadd_wv_tu(maskedoff, op1, op2, vl);
}

vfloat32m2_t test_vfwadd_wf_f32m2_tu(vfloat32m2_t maskedoff, vfloat32m2_t op1, _Float16 op2, size_t vl) {
  return __riscv_vfwadd_wf_tu(maskedoff, op1, op2, vl);
}

vfloat32m4_t test_vfwadd_vv_f32m4_tu(vfloat32m4_t maskedoff, vfloat16m2_t op1, vfloat16m2_t op2, size_t vl) {
  return __riscv_vfwadd_vv_tu(maskedoff, op1, op2, vl);
}

vfloat32m4_t test_vfwadd_vf_f32m4_tu(vfloat32m4_t maskedoff, vfloat16m2_t op1, _Float16 op2, size_t vl) {
  return __riscv_vfwadd_vf_tu(maskedoff, op1, op2, vl);
}

vfloat32m4_t test_vfwadd_wv_f32m4_tu(vfloat32m4_t maskedoff, vfloat32m4_t op1, vfloat16m2_t op2, size_t vl) {
  return __riscv_vfwadd_wv_tu(maskedoff, op1, op2, vl);
}

vfloat32m4_t test_vfwadd_wf_f32m4_tu(vfloat32m4_t maskedoff, vfloat32m4_t op1, _Float16 op2, size_t vl) {
  return __riscv_vfwadd_wf_tu(maskedoff, op1, op2, vl);
}

vfloat32m8_t test_vfwadd_vv_f32m8_tu(vfloat32m8_t maskedoff, vfloat16m4_t op1, vfloat16m4_t op2, size_t vl) {
  return __riscv_vfwadd_vv_tu(maskedoff, op1, op2, vl);
}

vfloat32m8_t test_vfwadd_vf_f32m8_tu(vfloat32m8_t maskedoff, vfloat16m4_t op1, _Float16 op2, size_t vl) {
  return __riscv_vfwadd_vf_tu(maskedoff, op1, op2, vl);
}

vfloat32m8_t test_vfwadd_wv_f32m8_tu(vfloat32m8_t maskedoff, vfloat32m8_t op1, vfloat16m4_t op2, size_t vl) {
  return __riscv_vfwadd_wv_tu(maskedoff, op1, op2, vl);
}

vfloat32m8_t test_vfwadd_wf_f32m8_tu(vfloat32m8_t maskedoff, vfloat32m8_t op1, _Float16 op2, size_t vl) {
  return __riscv_vfwadd_wf_tu(maskedoff, op1, op2, vl);
}

vfloat64m1_t test_vfwadd_vv_f64m1_tu(vfloat64m1_t maskedoff, vfloat32mf2_t op1, vfloat32mf2_t op2, size_t vl) {
  return __riscv_vfwadd_vv_tu(maskedoff, op1, op2, vl);
}

vfloat64m1_t test_vfwadd_vf_f64m1_tu(vfloat64m1_t maskedoff, vfloat32mf2_t op1, float op2, size_t vl) {
  return __riscv_vfwadd_vf_tu(maskedoff, op1, op2, vl);
}

vfloat64m1_t test_vfwadd_wv_f64m1_tu(vfloat64m1_t maskedoff, vfloat64m1_t op1, vfloat32mf2_t op2, size_t vl) {
  return __riscv_vfwadd_wv_tu(maskedoff, op1, op2, vl);
}

vfloat64m1_t test_vfwadd_wf_f64m1_tu(vfloat64m1_t maskedoff, vfloat64m1_t op1, float op2, size_t vl) {
  return __riscv_vfwadd_wf_tu(maskedoff, op1, op2, vl);
}

vfloat64m2_t test_vfwadd_vv_f64m2_tu(vfloat64m2_t maskedoff, vfloat32m1_t op1, vfloat32m1_t op2, size_t vl) {
  return __riscv_vfwadd_vv_tu(maskedoff, op1, op2, vl);
}

vfloat64m2_t test_vfwadd_vf_f64m2_tu(vfloat64m2_t maskedoff, vfloat32m1_t op1, float op2, size_t vl) {
  return __riscv_vfwadd_vf_tu(maskedoff, op1, op2, vl);
}

vfloat64m2_t test_vfwadd_wv_f64m2_tu(vfloat64m2_t maskedoff, vfloat64m2_t op1, vfloat32m1_t op2, size_t vl) {
  return __riscv_vfwadd_wv_tu(maskedoff, op1, op2, vl);
}

vfloat64m2_t test_vfwadd_wf_f64m2_tu(vfloat64m2_t maskedoff, vfloat64m2_t op1, float op2, size_t vl) {
  return __riscv_vfwadd_wf_tu(maskedoff, op1, op2, vl);
}

vfloat64m4_t test_vfwadd_vv_f64m4_tu(vfloat64m4_t maskedoff, vfloat32m2_t op1, vfloat32m2_t op2, size_t vl) {
  return __riscv_vfwadd_vv_tu(maskedoff, op1, op2, vl);
}

vfloat64m4_t test_vfwadd_vf_f64m4_tu(vfloat64m4_t maskedoff, vfloat32m2_t op1, float op2, size_t vl) {
  return __riscv_vfwadd_vf_tu(maskedoff, op1, op2, vl);
}

vfloat64m4_t test_vfwadd_wv_f64m4_tu(vfloat64m4_t maskedoff, vfloat64m4_t op1, vfloat32m2_t op2, size_t vl) {
  return __riscv_vfwadd_wv_tu(maskedoff, op1, op2, vl);
}

vfloat64m4_t test_vfwadd_wf_f64m4_tu(vfloat64m4_t maskedoff, vfloat64m4_t op1, float op2, size_t vl) {
  return __riscv_vfwadd_wf_tu(maskedoff, op1, op2, vl);
}

vfloat64m8_t test_vfwadd_vv_f64m8_tu(vfloat64m8_t maskedoff, vfloat32m4_t op1, vfloat32m4_t op2, size_t vl) {
  return __riscv_vfwadd_vv_tu(maskedoff, op1, op2, vl);
}

vfloat64m8_t test_vfwadd_vf_f64m8_tu(vfloat64m8_t maskedoff, vfloat32m4_t op1, float op2, size_t vl) {
  return __riscv_vfwadd_vf_tu(maskedoff, op1, op2, vl);
}

vfloat64m8_t test_vfwadd_wv_f64m8_tu(vfloat64m8_t maskedoff, vfloat64m8_t op1, vfloat32m4_t op2, size_t vl) {
  return __riscv_vfwadd_wv_tu(maskedoff, op1, op2, vl);
}

vfloat64m8_t test_vfwadd_wf_f64m8_tu(vfloat64m8_t maskedoff, vfloat64m8_t op1, float op2, size_t vl) {
  return __riscv_vfwadd_wf_tu(maskedoff, op1, op2, vl);
}

vfloat32mf2_t test_vfwadd_vv_f32mf2_tum(vbool64_t mask, vfloat32mf2_t maskedoff, vfloat16mf4_t op1, vfloat16mf4_t op2, size_t vl) {
  return __riscv_vfwadd_vv_tum(mask, maskedoff, op1, op2, vl);
}

vfloat32mf2_t test_vfwadd_vf_f32mf2_tum(vbool64_t mask, vfloat32mf2_t maskedoff, vfloat16mf4_t op1, _Float16 op2, size_t vl) {
  return __riscv_vfwadd_vf_tum(mask, maskedoff, op1, op2, vl);
}

vfloat32mf2_t test_vfwadd_wv_f32mf2_tum(vbool64_t mask, vfloat32mf2_t maskedoff, vfloat32mf2_t op1, vfloat16mf4_t op2, size_t vl) {
  return __riscv_vfwadd_wv_tum(mask, maskedoff, op1, op2, vl);
}

vfloat32mf2_t test_vfwadd_wf_f32mf2_tum(vbool64_t mask, vfloat32mf2_t maskedoff, vfloat32mf2_t op1, _Float16 op2, size_t vl) {
  return __riscv_vfwadd_wf_tum(mask, maskedoff, op1, op2, vl);
}

vfloat32m1_t test_vfwadd_vv_f32m1_tum(vbool32_t mask, vfloat32m1_t maskedoff, vfloat16mf2_t op1, vfloat16mf2_t op2, size_t vl) {
  return __riscv_vfwadd_vv_tum(mask, maskedoff, op1, op2, vl);
}

vfloat32m1_t test_vfwadd_vf_f32m1_tum(vbool32_t mask, vfloat32m1_t maskedoff, vfloat16mf2_t op1, _Float16 op2, size_t vl) {
  return __riscv_vfwadd_vf_tum(mask, maskedoff, op1, op2, vl);
}

vfloat32m1_t test_vfwadd_wv_f32m1_tum(vbool32_t mask, vfloat32m1_t maskedoff, vfloat32m1_t op1, vfloat16mf2_t op2, size_t vl) {
  return __riscv_vfwadd_wv_tum(mask, maskedoff, op1, op2, vl);
}

vfloat32m1_t test_vfwadd_wf_f32m1_tum(vbool32_t mask, vfloat32m1_t maskedoff, vfloat32m1_t op1, _Float16 op2, size_t vl) {
  return __riscv_vfwadd_wf_tum(mask, maskedoff, op1, op2, vl);
}

vfloat32m2_t test_vfwadd_vv_f32m2_tum(vbool16_t mask, vfloat32m2_t maskedoff, vfloat16m1_t op1, vfloat16m1_t op2, size_t vl) {
  return __riscv_vfwadd_vv_tum(mask, maskedoff, op1, op2, vl);
}

vfloat32m2_t test_vfwadd_vf_f32m2_tum(vbool16_t mask, vfloat32m2_t maskedoff, vfloat16m1_t op1, _Float16 op2, size_t vl) {
  return __riscv_vfwadd_vf_tum(mask, maskedoff, op1, op2, vl);
}

vfloat32m2_t test_vfwadd_wv_f32m2_tum(vbool16_t mask, vfloat32m2_t maskedoff, vfloat32m2_t op1, vfloat16m1_t op2, size_t vl) {
  return __riscv_vfwadd_wv_tum(mask, maskedoff, op1, op2, vl);
}

vfloat32m2_t test_vfwadd_wf_f32m2_tum(vbool16_t mask, vfloat32m2_t maskedoff, vfloat32m2_t op1, _Float16 op2, size_t vl) {
  return __riscv_vfwadd_wf_tum(mask, maskedoff, op1, op2, vl);
}

vfloat32m4_t test_vfwadd_vv_f32m4_tum(vbool8_t mask, vfloat32m4_t maskedoff, vfloat16m2_t op1, vfloat16m2_t op2, size_t vl) {
  return __riscv_vfwadd_vv_tum(mask, maskedoff, op1, op2, vl);
}

vfloat32m4_t test_vfwadd_vf_f32m4_tum(vbool8_t mask, vfloat32m4_t maskedoff, vfloat16m2_t op1, _Float16 op2, size_t vl) {
  return __riscv_vfwadd_vf_tum(mask, maskedoff, op1, op2, vl);
}

vfloat32m4_t test_vfwadd_wv_f32m4_tum(vbool8_t mask, vfloat32m4_t maskedoff, vfloat32m4_t op1, vfloat16m2_t op2, size_t vl) {
  return __riscv_vfwadd_wv_tum(mask, maskedoff, op1, op2, vl);
}

vfloat32m4_t test_vfwadd_wf_f32m4_tum(vbool8_t mask, vfloat32m4_t maskedoff, vfloat32m4_t op1, _Float16 op2, size_t vl) {
  return __riscv_vfwadd_wf_tum(mask, maskedoff, op1, op2, vl);
}

vfloat32m8_t test_vfwadd_vv_f32m8_tum(vbool4_t mask, vfloat32m8_t maskedoff, vfloat16m4_t op1, vfloat16m4_t op2, size_t vl) {
  return __riscv_vfwadd_vv_tum(mask, maskedoff, op1, op2, vl);
}

vfloat32m8_t test_vfwadd_vf_f32m8_tum(vbool4_t mask, vfloat32m8_t maskedoff, vfloat16m4_t op1, _Float16 op2, size_t vl) {
  return __riscv_vfwadd_vf_tum(mask, maskedoff, op1, op2, vl);
}

vfloat32m8_t test_vfwadd_wv_f32m8_tum(vbool4_t mask, vfloat32m8_t maskedoff, vfloat32m8_t op1, vfloat16m4_t op2, size_t vl) {
  return __riscv_vfwadd_wv_tum(mask, maskedoff, op1, op2, vl);
}

vfloat32m8_t test_vfwadd_wf_f32m8_tum(vbool4_t mask, vfloat32m8_t maskedoff, vfloat32m8_t op1, _Float16 op2, size_t vl) {
  return __riscv_vfwadd_wf_tum(mask, maskedoff, op1, op2, vl);
}

vfloat64m1_t test_vfwadd_vv_f64m1_tum(vbool64_t mask, vfloat64m1_t maskedoff, vfloat32mf2_t op1, vfloat32mf2_t op2, size_t vl) {
  return __riscv_vfwadd_vv_tum(mask, maskedoff, op1, op2, vl);
}

vfloat64m1_t test_vfwadd_vf_f64m1_tum(vbool64_t mask, vfloat64m1_t maskedoff, vfloat32mf2_t op1, float op2, size_t vl) {
  return __riscv_vfwadd_vf_tum(mask, maskedoff, op1, op2, vl);
}

vfloat64m1_t test_vfwadd_wv_f64m1_tum(vbool64_t mask, vfloat64m1_t maskedoff, vfloat64m1_t op1, vfloat32mf2_t op2, size_t vl) {
  return __riscv_vfwadd_wv_tum(mask, maskedoff, op1, op2, vl);
}

vfloat64m1_t test_vfwadd_wf_f64m1_tum(vbool64_t mask, vfloat64m1_t maskedoff, vfloat64m1_t op1, float op2, size_t vl) {
  return __riscv_vfwadd_wf_tum(mask, maskedoff, op1, op2, vl);
}

vfloat64m2_t test_vfwadd_vv_f64m2_tum(vbool32_t mask, vfloat64m2_t maskedoff, vfloat32m1_t op1, vfloat32m1_t op2, size_t vl) {
  return __riscv_vfwadd_vv_tum(mask, maskedoff, op1, op2, vl);
}

vfloat64m2_t test_vfwadd_vf_f64m2_tum(vbool32_t mask, vfloat64m2_t maskedoff, vfloat32m1_t op1, float op2, size_t vl) {
  return __riscv_vfwadd_vf_tum(mask, maskedoff, op1, op2, vl);
}

vfloat64m2_t test_vfwadd_wv_f64m2_tum(vbool32_t mask, vfloat64m2_t maskedoff, vfloat64m2_t op1, vfloat32m1_t op2, size_t vl) {
  return __riscv_vfwadd_wv_tum(mask, maskedoff, op1, op2, vl);
}

vfloat64m2_t test_vfwadd_wf_f64m2_tum(vbool32_t mask, vfloat64m2_t maskedoff, vfloat64m2_t op1, float op2, size_t vl) {
  return __riscv_vfwadd_wf_tum(mask, maskedoff, op1, op2, vl);
}

vfloat64m4_t test_vfwadd_vv_f64m4_tum(vbool16_t mask, vfloat64m4_t maskedoff, vfloat32m2_t op1, vfloat32m2_t op2, size_t vl) {
  return __riscv_vfwadd_vv_tum(mask, maskedoff, op1, op2, vl);
}

vfloat64m4_t test_vfwadd_vf_f64m4_tum(vbool16_t mask, vfloat64m4_t maskedoff, vfloat32m2_t op1, float op2, size_t vl) {
  return __riscv_vfwadd_vf_tum(mask, maskedoff, op1, op2, vl);
}

vfloat64m4_t test_vfwadd_wv_f64m4_tum(vbool16_t mask, vfloat64m4_t maskedoff, vfloat64m4_t op1, vfloat32m2_t op2, size_t vl) {
  return __riscv_vfwadd_wv_tum(mask, maskedoff, op1, op2, vl);
}

vfloat64m4_t test_vfwadd_wf_f64m4_tum(vbool16_t mask, vfloat64m4_t maskedoff, vfloat64m4_t op1, float op2, size_t vl) {
  return __riscv_vfwadd_wf_tum(mask, maskedoff, op1, op2, vl);
}

vfloat64m8_t test_vfwadd_vv_f64m8_tum(vbool8_t mask, vfloat64m8_t maskedoff, vfloat32m4_t op1, vfloat32m4_t op2, size_t vl) {
  return __riscv_vfwadd_vv_tum(mask, maskedoff, op1, op2, vl);
}

vfloat64m8_t test_vfwadd_vf_f64m8_tum(vbool8_t mask, vfloat64m8_t maskedoff, vfloat32m4_t op1, float op2, size_t vl) {
  return __riscv_vfwadd_vf_tum(mask, maskedoff, op1, op2, vl);
}

vfloat64m8_t test_vfwadd_wv_f64m8_tum(vbool8_t mask, vfloat64m8_t maskedoff, vfloat64m8_t op1, vfloat32m4_t op2, size_t vl) {
  return __riscv_vfwadd_wv_tum(mask, maskedoff, op1, op2, vl);
}

vfloat64m8_t test_vfwadd_wf_f64m8_tum(vbool8_t mask, vfloat64m8_t maskedoff, vfloat64m8_t op1, float op2, size_t vl) {
  return __riscv_vfwadd_wf_tum(mask, maskedoff, op1, op2, vl);
}

vfloat32mf2_t test_vfwadd_vv_f32mf2_tumu(vbool64_t mask, vfloat32mf2_t maskedoff, vfloat16mf4_t op1, vfloat16mf4_t op2, size_t vl) {
  return __riscv_vfwadd_vv_tumu(mask, maskedoff, op1, op2, vl);
}

vfloat32mf2_t test_vfwadd_vf_f32mf2_tumu(vbool64_t mask, vfloat32mf2_t maskedoff, vfloat16mf4_t op1, _Float16 op2, size_t vl) {
  return __riscv_vfwadd_vf_tumu(mask, maskedoff, op1, op2, vl);
}

vfloat32mf2_t test_vfwadd_wv_f32mf2_tumu(vbool64_t mask, vfloat32mf2_t maskedoff, vfloat32mf2_t op1, vfloat16mf4_t op2, size_t vl) {
  return __riscv_vfwadd_wv_tumu(mask, maskedoff, op1, op2, vl);
}

vfloat32mf2_t test_vfwadd_wf_f32mf2_tumu(vbool64_t mask, vfloat32mf2_t maskedoff, vfloat32mf2_t op1, _Float16 op2, size_t vl) {
  return __riscv_vfwadd_wf_tumu(mask, maskedoff, op1, op2, vl);
}

vfloat32m1_t test_vfwadd_vv_f32m1_tumu(vbool32_t mask, vfloat32m1_t maskedoff, vfloat16mf2_t op1, vfloat16mf2_t op2, size_t vl) {
  return __riscv_vfwadd_vv_tumu(mask, maskedoff, op1, op2, vl);
}

vfloat32m1_t test_vfwadd_vf_f32m1_tumu(vbool32_t mask, vfloat32m1_t maskedoff, vfloat16mf2_t op1, _Float16 op2, size_t vl) {
  return __riscv_vfwadd_vf_tumu(mask, maskedoff, op1, op2, vl);
}

vfloat32m1_t test_vfwadd_wv_f32m1_tumu(vbool32_t mask, vfloat32m1_t maskedoff, vfloat32m1_t op1, vfloat16mf2_t op2, size_t vl) {
  return __riscv_vfwadd_wv_tumu(mask, maskedoff, op1, op2, vl);
}

vfloat32m1_t test_vfwadd_wf_f32m1_tumu(vbool32_t mask, vfloat32m1_t maskedoff, vfloat32m1_t op1, _Float16 op2, size_t vl) {
  return __riscv_vfwadd_wf_tumu(mask, maskedoff, op1, op2, vl);
}

vfloat32m2_t test_vfwadd_vv_f32m2_tumu(vbool16_t mask, vfloat32m2_t maskedoff, vfloat16m1_t op1, vfloat16m1_t op2, size_t vl) {
  return __riscv_vfwadd_vv_tumu(mask, maskedoff, op1, op2, vl);
}

vfloat32m2_t test_vfwadd_vf_f32m2_tumu(vbool16_t mask, vfloat32m2_t maskedoff, vfloat16m1_t op1, _Float16 op2, size_t vl) {
  return __riscv_vfwadd_vf_tumu(mask, maskedoff, op1, op2, vl);
}

vfloat32m2_t test_vfwadd_wv_f32m2_tumu(vbool16_t mask, vfloat32m2_t maskedoff, vfloat32m2_t op1, vfloat16m1_t op2, size_t vl) {
  return __riscv_vfwadd_wv_tumu(mask, maskedoff, op1, op2, vl);
}

vfloat32m2_t test_vfwadd_wf_f32m2_tumu(vbool16_t mask, vfloat32m2_t maskedoff, vfloat32m2_t op1, _Float16 op2, size_t vl) {
  return __riscv_vfwadd_wf_tumu(mask, maskedoff, op1, op2, vl);
}

vfloat32m4_t test_vfwadd_vv_f32m4_tumu(vbool8_t mask, vfloat32m4_t maskedoff, vfloat16m2_t op1, vfloat16m2_t op2, size_t vl) {
  return __riscv_vfwadd_vv_tumu(mask, maskedoff, op1, op2, vl);
}

vfloat32m4_t test_vfwadd_vf_f32m4_tumu(vbool8_t mask, vfloat32m4_t maskedoff, vfloat16m2_t op1, _Float16 op2, size_t vl) {
  return __riscv_vfwadd_vf_tumu(mask, maskedoff, op1, op2, vl);
}

vfloat32m4_t test_vfwadd_wv_f32m4_tumu(vbool8_t mask, vfloat32m4_t maskedoff, vfloat32m4_t op1, vfloat16m2_t op2, size_t vl) {
  return __riscv_vfwadd_wv_tumu(mask, maskedoff, op1, op2, vl);
}

vfloat32m4_t test_vfwadd_wf_f32m4_tumu(vbool8_t mask, vfloat32m4_t maskedoff, vfloat32m4_t op1, _Float16 op2, size_t vl) {
  return __riscv_vfwadd_wf_tumu(mask, maskedoff, op1, op2, vl);
}

vfloat32m8_t test_vfwadd_vv_f32m8_tumu(vbool4_t mask, vfloat32m8_t maskedoff, vfloat16m4_t op1, vfloat16m4_t op2, size_t vl) {
  return __riscv_vfwadd_vv_tumu(mask, maskedoff, op1, op2, vl);
}

vfloat32m8_t test_vfwadd_vf_f32m8_tumu(vbool4_t mask, vfloat32m8_t maskedoff, vfloat16m4_t op1, _Float16 op2, size_t vl) {
  return __riscv_vfwadd_vf_tumu(mask, maskedoff, op1, op2, vl);
}

vfloat32m8_t test_vfwadd_wv_f32m8_tumu(vbool4_t mask, vfloat32m8_t maskedoff, vfloat32m8_t op1, vfloat16m4_t op2, size_t vl) {
  return __riscv_vfwadd_wv_tumu(mask, maskedoff, op1, op2, vl);
}

vfloat32m8_t test_vfwadd_wf_f32m8_tumu(vbool4_t mask, vfloat32m8_t maskedoff, vfloat32m8_t op1, _Float16 op2, size_t vl) {
  return __riscv_vfwadd_wf_tumu(mask, maskedoff, op1, op2, vl);
}

vfloat64m1_t test_vfwadd_vv_f64m1_tumu(vbool64_t mask, vfloat64m1_t maskedoff, vfloat32mf2_t op1, vfloat32mf2_t op2, size_t vl) {
  return __riscv_vfwadd_vv_tumu(mask, maskedoff, op1, op2, vl);
}

vfloat64m1_t test_vfwadd_vf_f64m1_tumu(vbool64_t mask, vfloat64m1_t maskedoff, vfloat32mf2_t op1, float op2, size_t vl) {
  return __riscv_vfwadd_vf_tumu(mask, maskedoff, op1, op2, vl);
}

vfloat64m1_t test_vfwadd_wv_f64m1_tumu(vbool64_t mask, vfloat64m1_t maskedoff, vfloat64m1_t op1, vfloat32mf2_t op2, size_t vl) {
  return __riscv_vfwadd_wv_tumu(mask, maskedoff, op1, op2, vl);
}

vfloat64m1_t test_vfwadd_wf_f64m1_tumu(vbool64_t mask, vfloat64m1_t maskedoff, vfloat64m1_t op1, float op2, size_t vl) {
  return __riscv_vfwadd_wf_tumu(mask, maskedoff, op1, op2, vl);
}

vfloat64m2_t test_vfwadd_vv_f64m2_tumu(vbool32_t mask, vfloat64m2_t maskedoff, vfloat32m1_t op1, vfloat32m1_t op2, size_t vl) {
  return __riscv_vfwadd_vv_tumu(mask, maskedoff, op1, op2, vl);
}

vfloat64m2_t test_vfwadd_vf_f64m2_tumu(vbool32_t mask, vfloat64m2_t maskedoff, vfloat32m1_t op1, float op2, size_t vl) {
  return __riscv_vfwadd_vf_tumu(mask, maskedoff, op1, op2, vl);
}

vfloat64m2_t test_vfwadd_wv_f64m2_tumu(vbool32_t mask, vfloat64m2_t maskedoff, vfloat64m2_t op1, vfloat32m1_t op2, size_t vl) {
  return __riscv_vfwadd_wv_tumu(mask, maskedoff, op1, op2, vl);
}

vfloat64m2_t test_vfwadd_wf_f64m2_tumu(vbool32_t mask, vfloat64m2_t maskedoff, vfloat64m2_t op1, float op2, size_t vl) {
  return __riscv_vfwadd_wf_tumu(mask, maskedoff, op1, op2, vl);
}

vfloat64m4_t test_vfwadd_vv_f64m4_tumu(vbool16_t mask, vfloat64m4_t maskedoff, vfloat32m2_t op1, vfloat32m2_t op2, size_t vl) {
  return __riscv_vfwadd_vv_tumu(mask, maskedoff, op1, op2, vl);
}

vfloat64m4_t test_vfwadd_vf_f64m4_tumu(vbool16_t mask, vfloat64m4_t maskedoff, vfloat32m2_t op1, float op2, size_t vl) {
  return __riscv_vfwadd_vf_tumu(mask, maskedoff, op1, op2, vl);
}

vfloat64m4_t test_vfwadd_wv_f64m4_tumu(vbool16_t mask, vfloat64m4_t maskedoff, vfloat64m4_t op1, vfloat32m2_t op2, size_t vl) {
  return __riscv_vfwadd_wv_tumu(mask, maskedoff, op1, op2, vl);
}

vfloat64m4_t test_vfwadd_wf_f64m4_tumu(vbool16_t mask, vfloat64m4_t maskedoff, vfloat64m4_t op1, float op2, size_t vl) {
  return __riscv_vfwadd_wf_tumu(mask, maskedoff, op1, op2, vl);
}

vfloat64m8_t test_vfwadd_vv_f64m8_tumu(vbool8_t mask, vfloat64m8_t maskedoff, vfloat32m4_t op1, vfloat32m4_t op2, size_t vl) {
  return __riscv_vfwadd_vv_tumu(mask, maskedoff, op1, op2, vl);
}

vfloat64m8_t test_vfwadd_vf_f64m8_tumu(vbool8_t mask, vfloat64m8_t maskedoff, vfloat32m4_t op1, float op2, size_t vl) {
  return __riscv_vfwadd_vf_tumu(mask, maskedoff, op1, op2, vl);
}

vfloat64m8_t test_vfwadd_wv_f64m8_tumu(vbool8_t mask, vfloat64m8_t maskedoff, vfloat64m8_t op1, vfloat32m4_t op2, size_t vl) {
  return __riscv_vfwadd_wv_tumu(mask, maskedoff, op1, op2, vl);
}

vfloat64m8_t test_vfwadd_wf_f64m8_tumu(vbool8_t mask, vfloat64m8_t maskedoff, vfloat64m8_t op1, float op2, size_t vl) {
  return __riscv_vfwadd_wf_tumu(mask, maskedoff, op1, op2, vl);
}

vfloat32mf2_t test_vfwadd_vv_f32mf2_mu(vbool64_t mask, vfloat32mf2_t maskedoff, vfloat16mf4_t op1, vfloat16mf4_t op2, size_t vl) {
  return __riscv_vfwadd_vv_mu(mask, maskedoff, op1, op2, vl);
}

vfloat32mf2_t test_vfwadd_vf_f32mf2_mu(vbool64_t mask, vfloat32mf2_t maskedoff, vfloat16mf4_t op1, _Float16 op2, size_t vl) {
  return __riscv_vfwadd_vf_mu(mask, maskedoff, op1, op2, vl);
}

vfloat32mf2_t test_vfwadd_wv_f32mf2_mu(vbool64_t mask, vfloat32mf2_t maskedoff, vfloat32mf2_t op1, vfloat16mf4_t op2, size_t vl) {
  return __riscv_vfwadd_wv_mu(mask, maskedoff, op1, op2, vl);
}

vfloat32mf2_t test_vfwadd_wf_f32mf2_mu(vbool64_t mask, vfloat32mf2_t maskedoff, vfloat32mf2_t op1, _Float16 op2, size_t vl) {
  return __riscv_vfwadd_wf_mu(mask, maskedoff, op1, op2, vl);
}

vfloat32m1_t test_vfwadd_vv_f32m1_mu(vbool32_t mask, vfloat32m1_t maskedoff, vfloat16mf2_t op1, vfloat16mf2_t op2, size_t vl) {
  return __riscv_vfwadd_vv_mu(mask, maskedoff, op1, op2, vl);
}

vfloat32m1_t test_vfwadd_vf_f32m1_mu(vbool32_t mask, vfloat32m1_t maskedoff, vfloat16mf2_t op1, _Float16 op2, size_t vl) {
  return __riscv_vfwadd_vf_mu(mask, maskedoff, op1, op2, vl);
}

vfloat32m1_t test_vfwadd_wv_f32m1_mu(vbool32_t mask, vfloat32m1_t maskedoff, vfloat32m1_t op1, vfloat16mf2_t op2, size_t vl) {
  return __riscv_vfwadd_wv_mu(mask, maskedoff, op1, op2, vl);
}

vfloat32m1_t test_vfwadd_wf_f32m1_mu(vbool32_t mask, vfloat32m1_t maskedoff, vfloat32m1_t op1, _Float16 op2, size_t vl) {
  return __riscv_vfwadd_wf_mu(mask, maskedoff, op1, op2, vl);
}

vfloat32m2_t test_vfwadd_vv_f32m2_mu(vbool16_t mask, vfloat32m2_t maskedoff, vfloat16m1_t op1, vfloat16m1_t op2, size_t vl) {
  return __riscv_vfwadd_vv_mu(mask, maskedoff, op1, op2, vl);
}

vfloat32m2_t test_vfwadd_vf_f32m2_mu(vbool16_t mask, vfloat32m2_t maskedoff, vfloat16m1_t op1, _Float16 op2, size_t vl) {
  return __riscv_vfwadd_vf_mu(mask, maskedoff, op1, op2, vl);
}

vfloat32m2_t test_vfwadd_wv_f32m2_mu(vbool16_t mask, vfloat32m2_t maskedoff, vfloat32m2_t op1, vfloat16m1_t op2, size_t vl) {
  return __riscv_vfwadd_wv_mu(mask, maskedoff, op1, op2, vl);
}

vfloat32m2_t test_vfwadd_wf_f32m2_mu(vbool16_t mask, vfloat32m2_t maskedoff, vfloat32m2_t op1, _Float16 op2, size_t vl) {
  return __riscv_vfwadd_wf_mu(mask, maskedoff, op1, op2, vl);
}

vfloat32m4_t test_vfwadd_vv_f32m4_mu(vbool8_t mask, vfloat32m4_t maskedoff, vfloat16m2_t op1, vfloat16m2_t op2, size_t vl) {
  return __riscv_vfwadd_vv_mu(mask, maskedoff, op1, op2, vl);
}

vfloat32m4_t test_vfwadd_vf_f32m4_mu(vbool8_t mask, vfloat32m4_t maskedoff, vfloat16m2_t op1, _Float16 op2, size_t vl) {
  return __riscv_vfwadd_vf_mu(mask, maskedoff, op1, op2, vl);
}

vfloat32m4_t test_vfwadd_wv_f32m4_mu(vbool8_t mask, vfloat32m4_t maskedoff, vfloat32m4_t op1, vfloat16m2_t op2, size_t vl) {
  return __riscv_vfwadd_wv_mu(mask, maskedoff, op1, op2, vl);
}

vfloat32m4_t test_vfwadd_wf_f32m4_mu(vbool8_t mask, vfloat32m4_t maskedoff, vfloat32m4_t op1, _Float16 op2, size_t vl) {
  return __riscv_vfwadd_wf_mu(mask, maskedoff, op1, op2, vl);
}

vfloat32m8_t test_vfwadd_vv_f32m8_mu(vbool4_t mask, vfloat32m8_t maskedoff, vfloat16m4_t op1, vfloat16m4_t op2, size_t vl) {
  return __riscv_vfwadd_vv_mu(mask, maskedoff, op1, op2, vl);
}

vfloat32m8_t test_vfwadd_vf_f32m8_mu(vbool4_t mask, vfloat32m8_t maskedoff, vfloat16m4_t op1, _Float16 op2, size_t vl) {
  return __riscv_vfwadd_vf_mu(mask, maskedoff, op1, op2, vl);
}

vfloat32m8_t test_vfwadd_wv_f32m8_mu(vbool4_t mask, vfloat32m8_t maskedoff, vfloat32m8_t op1, vfloat16m4_t op2, size_t vl) {
  return __riscv_vfwadd_wv_mu(mask, maskedoff, op1, op2, vl);
}

vfloat32m8_t test_vfwadd_wf_f32m8_mu(vbool4_t mask, vfloat32m8_t maskedoff, vfloat32m8_t op1, _Float16 op2, size_t vl) {
  return __riscv_vfwadd_wf_mu(mask, maskedoff, op1, op2, vl);
}

vfloat64m1_t test_vfwadd_vv_f64m1_mu(vbool64_t mask, vfloat64m1_t maskedoff, vfloat32mf2_t op1, vfloat32mf2_t op2, size_t vl) {
  return __riscv_vfwadd_vv_mu(mask, maskedoff, op1, op2, vl);
}

vfloat64m1_t test_vfwadd_vf_f64m1_mu(vbool64_t mask, vfloat64m1_t maskedoff, vfloat32mf2_t op1, float op2, size_t vl) {
  return __riscv_vfwadd_vf_mu(mask, maskedoff, op1, op2, vl);
}

vfloat64m1_t test_vfwadd_wv_f64m1_mu(vbool64_t mask, vfloat64m1_t maskedoff, vfloat64m1_t op1, vfloat32mf2_t op2, size_t vl) {
  return __riscv_vfwadd_wv_mu(mask, maskedoff, op1, op2, vl);
}

vfloat64m1_t test_vfwadd_wf_f64m1_mu(vbool64_t mask, vfloat64m1_t maskedoff, vfloat64m1_t op1, float op2, size_t vl) {
  return __riscv_vfwadd_wf_mu(mask, maskedoff, op1, op2, vl);
}

vfloat64m2_t test_vfwadd_vv_f64m2_mu(vbool32_t mask, vfloat64m2_t maskedoff, vfloat32m1_t op1, vfloat32m1_t op2, size_t vl) {
  return __riscv_vfwadd_vv_mu(mask, maskedoff, op1, op2, vl);
}

vfloat64m2_t test_vfwadd_vf_f64m2_mu(vbool32_t mask, vfloat64m2_t maskedoff, vfloat32m1_t op1, float op2, size_t vl) {
  return __riscv_vfwadd_vf_mu(mask, maskedoff, op1, op2, vl);
}

vfloat64m2_t test_vfwadd_wv_f64m2_mu(vbool32_t mask, vfloat64m2_t maskedoff, vfloat64m2_t op1, vfloat32m1_t op2, size_t vl) {
  return __riscv_vfwadd_wv_mu(mask, maskedoff, op1, op2, vl);
}

vfloat64m2_t test_vfwadd_wf_f64m2_mu(vbool32_t mask, vfloat64m2_t maskedoff, vfloat64m2_t op1, float op2, size_t vl) {
  return __riscv_vfwadd_wf_mu(mask, maskedoff, op1, op2, vl);
}

vfloat64m4_t test_vfwadd_vv_f64m4_mu(vbool16_t mask, vfloat64m4_t maskedoff, vfloat32m2_t op1, vfloat32m2_t op2, size_t vl) {
  return __riscv_vfwadd_vv_mu(mask, maskedoff, op1, op2, vl);
}

vfloat64m4_t test_vfwadd_vf_f64m4_mu(vbool16_t mask, vfloat64m4_t maskedoff, vfloat32m2_t op1, float op2, size_t vl) {
  return __riscv_vfwadd_vf_mu(mask, maskedoff, op1, op2, vl);
}

vfloat64m4_t test_vfwadd_wv_f64m4_mu(vbool16_t mask, vfloat64m4_t maskedoff, vfloat64m4_t op1, vfloat32m2_t op2, size_t vl) {
  return __riscv_vfwadd_wv_mu(mask, maskedoff, op1, op2, vl);
}

vfloat64m4_t test_vfwadd_wf_f64m4_mu(vbool16_t mask, vfloat64m4_t maskedoff, vfloat64m4_t op1, float op2, size_t vl) {
  return __riscv_vfwadd_wf_mu(mask, maskedoff, op1, op2, vl);
}

vfloat64m8_t test_vfwadd_vv_f64m8_mu(vbool8_t mask, vfloat64m8_t maskedoff, vfloat32m4_t op1, vfloat32m4_t op2, size_t vl) {
  return __riscv_vfwadd_vv_mu(mask, maskedoff, op1, op2, vl);
}

vfloat64m8_t test_vfwadd_vf_f64m8_mu(vbool8_t mask, vfloat64m8_t maskedoff, vfloat32m4_t op1, float op2, size_t vl) {
  return __riscv_vfwadd_vf_mu(mask, maskedoff, op1, op2, vl);
}

vfloat64m8_t test_vfwadd_wv_f64m8_mu(vbool8_t mask, vfloat64m8_t maskedoff, vfloat64m8_t op1, vfloat32m4_t op2, size_t vl) {
  return __riscv_vfwadd_wv_mu(mask, maskedoff, op1, op2, vl);
}

vfloat64m8_t test_vfwadd_wf_f64m8_mu(vbool8_t mask, vfloat64m8_t maskedoff, vfloat64m8_t op1, float op2, size_t vl) {
  return __riscv_vfwadd_wf_mu(mask, maskedoff, op1, op2, vl);
}

vfloat32mf2_t test_vfwadd_vv_f32mf2_rm_tu(vfloat32mf2_t maskedoff, vfloat16mf4_t op1, vfloat16mf4_t op2, size_t vl) {
  return __riscv_vfwadd_vv_tu(maskedoff, op1, op2, __RISCV_FRM_RNE, vl);
}

vfloat32mf2_t test_vfwadd_vf_f32mf2_rm_tu(vfloat32mf2_t maskedoff, vfloat16mf4_t op1, _Float16 op2, size_t vl) {
  return __riscv_vfwadd_vf_tu(maskedoff, op1, op2, __RISCV_FRM_RNE, vl);
}

vfloat32mf2_t test_vfwadd_wv_f32mf2_rm_tu(vfloat32mf2_t maskedoff, vfloat32mf2_t op1, vfloat16mf4_t op2, size_t vl) {
  return __riscv_vfwadd_wv_tu(maskedoff, op1, op2, __RISCV_FRM_RNE, vl);
}

vfloat32mf2_t test_vfwadd_wf_f32mf2_rm_tu(vfloat32mf2_t maskedoff, vfloat32mf2_t op1, _Float16 op2, size_t vl) {
  return __riscv_vfwadd_wf_tu(maskedoff, op1, op2, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfwadd_vv_f32m1_rm_tu(vfloat32m1_t maskedoff, vfloat16mf2_t op1, vfloat16mf2_t op2, size_t vl) {
  return __riscv_vfwadd_vv_tu(maskedoff, op1, op2, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfwadd_vf_f32m1_rm_tu(vfloat32m1_t maskedoff, vfloat16mf2_t op1, _Float16 op2, size_t vl) {
  return __riscv_vfwadd_vf_tu(maskedoff, op1, op2, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfwadd_wv_f32m1_rm_tu(vfloat32m1_t maskedoff, vfloat32m1_t op1, vfloat16mf2_t op2, size_t vl) {
  return __riscv_vfwadd_wv_tu(maskedoff, op1, op2, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfwadd_wf_f32m1_rm_tu(vfloat32m1_t maskedoff, vfloat32m1_t op1, _Float16 op2, size_t vl) {
  return __riscv_vfwadd_wf_tu(maskedoff, op1, op2, __RISCV_FRM_RNE, vl);
}

vfloat32m2_t test_vfwadd_vv_f32m2_rm_tu(vfloat32m2_t maskedoff, vfloat16m1_t op1, vfloat16m1_t op2, size_t vl) {
  return __riscv_vfwadd_vv_tu(maskedoff, op1, op2, __RISCV_FRM_RNE, vl);
}

vfloat32m2_t test_vfwadd_vf_f32m2_rm_tu(vfloat32m2_t maskedoff, vfloat16m1_t op1, _Float16 op2, size_t vl) {
  return __riscv_vfwadd_vf_tu(maskedoff, op1, op2, __RISCV_FRM_RNE, vl);
}

vfloat32m2_t test_vfwadd_wv_f32m2_rm_tu(vfloat32m2_t maskedoff, vfloat32m2_t op1, vfloat16m1_t op2, size_t vl) {
  return __riscv_vfwadd_wv_tu(maskedoff, op1, op2, __RISCV_FRM_RNE, vl);
}

vfloat32m2_t test_vfwadd_wf_f32m2_rm_tu(vfloat32m2_t maskedoff, vfloat32m2_t op1, _Float16 op2, size_t vl) {
  return __riscv_vfwadd_wf_tu(maskedoff, op1, op2, __RISCV_FRM_RNE, vl);
}

vfloat32m4_t test_vfwadd_vv_f32m4_rm_tu(vfloat32m4_t maskedoff, vfloat16m2_t op1, vfloat16m2_t op2, size_t vl) {
  return __riscv_vfwadd_vv_tu(maskedoff, op1, op2, __RISCV_FRM_RNE, vl);
}

vfloat32m4_t test_vfwadd_vf_f32m4_rm_tu(vfloat32m4_t maskedoff, vfloat16m2_t op1, _Float16 op2, size_t vl) {
  return __riscv_vfwadd_vf_tu(maskedoff, op1, op2, __RISCV_FRM_RNE, vl);
}

vfloat32m4_t test_vfwadd_wv_f32m4_rm_tu(vfloat32m4_t maskedoff, vfloat32m4_t op1, vfloat16m2_t op2, size_t vl) {
  return __riscv_vfwadd_wv_tu(maskedoff, op1, op2, __RISCV_FRM_RNE, vl);
}

vfloat32m4_t test_vfwadd_wf_f32m4_rm_tu(vfloat32m4_t maskedoff, vfloat32m4_t op1, _Float16 op2, size_t vl) {
  return __riscv_vfwadd_wf_tu(maskedoff, op1, op2, __RISCV_FRM_RNE, vl);
}

vfloat32m8_t test_vfwadd_vv_f32m8_rm_tu(vfloat32m8_t maskedoff, vfloat16m4_t op1, vfloat16m4_t op2, size_t vl) {
  return __riscv_vfwadd_vv_tu(maskedoff, op1, op2, __RISCV_FRM_RNE, vl);
}

vfloat32m8_t test_vfwadd_vf_f32m8_rm_tu(vfloat32m8_t maskedoff, vfloat16m4_t op1, _Float16 op2, size_t vl) {
  return __riscv_vfwadd_vf_tu(maskedoff, op1, op2, __RISCV_FRM_RNE, vl);
}

vfloat32m8_t test_vfwadd_wv_f32m8_rm_tu(vfloat32m8_t maskedoff, vfloat32m8_t op1, vfloat16m4_t op2, size_t vl) {
  return __riscv_vfwadd_wv_tu(maskedoff, op1, op2, __RISCV_FRM_RNE, vl);
}

vfloat32m8_t test_vfwadd_wf_f32m8_rm_tu(vfloat32m8_t maskedoff, vfloat32m8_t op1, _Float16 op2, size_t vl) {
  return __riscv_vfwadd_wf_tu(maskedoff, op1, op2, __RISCV_FRM_RNE, vl);
}

vfloat64m1_t test_vfwadd_vv_f64m1_rm_tu(vfloat64m1_t maskedoff, vfloat32mf2_t op1, vfloat32mf2_t op2, size_t vl) {
  return __riscv_vfwadd_vv_tu(maskedoff, op1, op2, __RISCV_FRM_RNE, vl);
}

vfloat64m1_t test_vfwadd_vf_f64m1_rm_tu(vfloat64m1_t maskedoff, vfloat32mf2_t op1, float op2, size_t vl) {
  return __riscv_vfwadd_vf_tu(maskedoff, op1, op2, __RISCV_FRM_RNE, vl);
}

vfloat64m1_t test_vfwadd_wv_f64m1_rm_tu(vfloat64m1_t maskedoff, vfloat64m1_t op1, vfloat32mf2_t op2, size_t vl) {
  return __riscv_vfwadd_wv_tu(maskedoff, op1, op2, __RISCV_FRM_RNE, vl);
}

vfloat64m1_t test_vfwadd_wf_f64m1_rm_tu(vfloat64m1_t maskedoff, vfloat64m1_t op1, float op2, size_t vl) {
  return __riscv_vfwadd_wf_tu(maskedoff, op1, op2, __RISCV_FRM_RNE, vl);
}

vfloat64m2_t test_vfwadd_vv_f64m2_rm_tu(vfloat64m2_t maskedoff, vfloat32m1_t op1, vfloat32m1_t op2, size_t vl) {
  return __riscv_vfwadd_vv_tu(maskedoff, op1, op2, __RISCV_FRM_RNE, vl);
}

vfloat64m2_t test_vfwadd_vf_f64m2_rm_tu(vfloat64m2_t maskedoff, vfloat32m1_t op1, float op2, size_t vl) {
  return __riscv_vfwadd_vf_tu(maskedoff, op1, op2, __RISCV_FRM_RNE, vl);
}

vfloat64m2_t test_vfwadd_wv_f64m2_rm_tu(vfloat64m2_t maskedoff, vfloat64m2_t op1, vfloat32m1_t op2, size_t vl) {
  return __riscv_vfwadd_wv_tu(maskedoff, op1, op2, __RISCV_FRM_RNE, vl);
}

vfloat64m2_t test_vfwadd_wf_f64m2_rm_tu(vfloat64m2_t maskedoff, vfloat64m2_t op1, float op2, size_t vl) {
  return __riscv_vfwadd_wf_tu(maskedoff, op1, op2, __RISCV_FRM_RNE, vl);
}

vfloat64m4_t test_vfwadd_vv_f64m4_rm_tu(vfloat64m4_t maskedoff, vfloat32m2_t op1, vfloat32m2_t op2, size_t vl) {
  return __riscv_vfwadd_vv_tu(maskedoff, op1, op2, __RISCV_FRM_RNE, vl);
}

vfloat64m4_t test_vfwadd_vf_f64m4_rm_tu(vfloat64m4_t maskedoff, vfloat32m2_t op1, float op2, size_t vl) {
  return __riscv_vfwadd_vf_tu(maskedoff, op1, op2, __RISCV_FRM_RNE, vl);
}

vfloat64m4_t test_vfwadd_wv_f64m4_rm_tu(vfloat64m4_t maskedoff, vfloat64m4_t op1, vfloat32m2_t op2, size_t vl) {
  return __riscv_vfwadd_wv_tu(maskedoff, op1, op2, __RISCV_FRM_RNE, vl);
}

vfloat64m4_t test_vfwadd_wf_f64m4_rm_tu(vfloat64m4_t maskedoff, vfloat64m4_t op1, float op2, size_t vl) {
  return __riscv_vfwadd_wf_tu(maskedoff, op1, op2, __RISCV_FRM_RNE, vl);
}

vfloat64m8_t test_vfwadd_vv_f64m8_rm_tu(vfloat64m8_t maskedoff, vfloat32m4_t op1, vfloat32m4_t op2, size_t vl) {
  return __riscv_vfwadd_vv_tu(maskedoff, op1, op2, __RISCV_FRM_RNE, vl);
}

vfloat64m8_t test_vfwadd_vf_f64m8_rm_tu(vfloat64m8_t maskedoff, vfloat32m4_t op1, float op2, size_t vl) {
  return __riscv_vfwadd_vf_tu(maskedoff, op1, op2, __RISCV_FRM_RNE, vl);
}

vfloat64m8_t test_vfwadd_wv_f64m8_rm_tu(vfloat64m8_t maskedoff, vfloat64m8_t op1, vfloat32m4_t op2, size_t vl) {
  return __riscv_vfwadd_wv_tu(maskedoff, op1, op2, __RISCV_FRM_RNE, vl);
}

vfloat64m8_t test_vfwadd_wf_f64m8_rm_tu(vfloat64m8_t maskedoff, vfloat64m8_t op1, float op2, size_t vl) {
  return __riscv_vfwadd_wf_tu(maskedoff, op1, op2, __RISCV_FRM_RNE, vl);
}

vfloat32mf2_t test_vfwadd_vv_f32mf2_rm_tum(vbool64_t mask, vfloat32mf2_t maskedoff, vfloat16mf4_t op1, vfloat16mf4_t op2, size_t vl) {
  return __riscv_vfwadd_vv_tum(mask, maskedoff, op1, op2, __RISCV_FRM_RNE, vl);
}

vfloat32mf2_t test_vfwadd_vf_f32mf2_rm_tum(vbool64_t mask, vfloat32mf2_t maskedoff, vfloat16mf4_t op1, _Float16 op2, size_t vl) {
  return __riscv_vfwadd_vf_tum(mask, maskedoff, op1, op2, __RISCV_FRM_RNE, vl);
}

vfloat32mf2_t test_vfwadd_wv_f32mf2_rm_tum(vbool64_t mask, vfloat32mf2_t maskedoff, vfloat32mf2_t op1, vfloat16mf4_t op2, size_t vl) {
  return __riscv_vfwadd_wv_tum(mask, maskedoff, op1, op2, __RISCV_FRM_RNE, vl);
}

vfloat32mf2_t test_vfwadd_wf_f32mf2_rm_tum(vbool64_t mask, vfloat32mf2_t maskedoff, vfloat32mf2_t op1, _Float16 op2, size_t vl) {
  return __riscv_vfwadd_wf_tum(mask, maskedoff, op1, op2, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfwadd_vv_f32m1_rm_tum(vbool32_t mask, vfloat32m1_t maskedoff, vfloat16mf2_t op1, vfloat16mf2_t op2, size_t vl) {
  return __riscv_vfwadd_vv_tum(mask, maskedoff, op1, op2, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfwadd_vf_f32m1_rm_tum(vbool32_t mask, vfloat32m1_t maskedoff, vfloat16mf2_t op1, _Float16 op2, size_t vl) {
  return __riscv_vfwadd_vf_tum(mask, maskedoff, op1, op2, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfwadd_wv_f32m1_rm_tum(vbool32_t mask, vfloat32m1_t maskedoff, vfloat32m1_t op1, vfloat16mf2_t op2, size_t vl) {
  return __riscv_vfwadd_wv_tum(mask, maskedoff, op1, op2, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfwadd_wf_f32m1_rm_tum(vbool32_t mask, vfloat32m1_t maskedoff, vfloat32m1_t op1, _Float16 op2, size_t vl) {
  return __riscv_vfwadd_wf_tum(mask, maskedoff, op1, op2, __RISCV_FRM_RNE, vl);
}

vfloat32m2_t test_vfwadd_vv_f32m2_rm_tum(vbool16_t mask, vfloat32m2_t maskedoff, vfloat16m1_t op1, vfloat16m1_t op2, size_t vl) {
  return __riscv_vfwadd_vv_tum(mask, maskedoff, op1, op2, __RISCV_FRM_RNE, vl);
}

vfloat32m2_t test_vfwadd_vf_f32m2_rm_tum(vbool16_t mask, vfloat32m2_t maskedoff, vfloat16m1_t op1, _Float16 op2, size_t vl) {
  return __riscv_vfwadd_vf_tum(mask, maskedoff, op1, op2, __RISCV_FRM_RNE, vl);
}

vfloat32m2_t test_vfwadd_wv_f32m2_rm_tum(vbool16_t mask, vfloat32m2_t maskedoff, vfloat32m2_t op1, vfloat16m1_t op2, size_t vl) {
  return __riscv_vfwadd_wv_tum(mask, maskedoff, op1, op2, __RISCV_FRM_RNE, vl);
}

vfloat32m2_t test_vfwadd_wf_f32m2_rm_tum(vbool16_t mask, vfloat32m2_t maskedoff, vfloat32m2_t op1, _Float16 op2, size_t vl) {
  return __riscv_vfwadd_wf_tum(mask, maskedoff, op1, op2, __RISCV_FRM_RNE, vl);
}

vfloat32m4_t test_vfwadd_vv_f32m4_rm_tum(vbool8_t mask, vfloat32m4_t maskedoff, vfloat16m2_t op1, vfloat16m2_t op2, size_t vl) {
  return __riscv_vfwadd_vv_tum(mask, maskedoff, op1, op2, __RISCV_FRM_RNE, vl);
}

vfloat32m4_t test_vfwadd_vf_f32m4_rm_tum(vbool8_t mask, vfloat32m4_t maskedoff, vfloat16m2_t op1, _Float16 op2, size_t vl) {
  return __riscv_vfwadd_vf_tum(mask, maskedoff, op1, op2, __RISCV_FRM_RNE, vl);
}

vfloat32m4_t test_vfwadd_wv_f32m4_rm_tum(vbool8_t mask, vfloat32m4_t maskedoff, vfloat32m4_t op1, vfloat16m2_t op2, size_t vl) {
  return __riscv_vfwadd_wv_tum(mask, maskedoff, op1, op2, __RISCV_FRM_RNE, vl);
}

vfloat32m4_t test_vfwadd_wf_f32m4_rm_tum(vbool8_t mask, vfloat32m4_t maskedoff, vfloat32m4_t op1, _Float16 op2, size_t vl) {
  return __riscv_vfwadd_wf_tum(mask, maskedoff, op1, op2, __RISCV_FRM_RNE, vl);
}

vfloat32m8_t test_vfwadd_vv_f32m8_rm_tum(vbool4_t mask, vfloat32m8_t maskedoff, vfloat16m4_t op1, vfloat16m4_t op2, size_t vl) {
  return __riscv_vfwadd_vv_tum(mask, maskedoff, op1, op2, __RISCV_FRM_RNE, vl);
}

vfloat32m8_t test_vfwadd_vf_f32m8_rm_tum(vbool4_t mask, vfloat32m8_t maskedoff, vfloat16m4_t op1, _Float16 op2, size_t vl) {
  return __riscv_vfwadd_vf_tum(mask, maskedoff, op1, op2, __RISCV_FRM_RNE, vl);
}

vfloat32m8_t test_vfwadd_wv_f32m8_rm_tum(vbool4_t mask, vfloat32m8_t maskedoff, vfloat32m8_t op1, vfloat16m4_t op2, size_t vl) {
  return __riscv_vfwadd_wv_tum(mask, maskedoff, op1, op2, __RISCV_FRM_RNE, vl);
}

vfloat32m8_t test_vfwadd_wf_f32m8_rm_tum(vbool4_t mask, vfloat32m8_t maskedoff, vfloat32m8_t op1, _Float16 op2, size_t vl) {
  return __riscv_vfwadd_wf_tum(mask, maskedoff, op1, op2, __RISCV_FRM_RNE, vl);
}

vfloat64m1_t test_vfwadd_vv_f64m1_rm_tum(vbool64_t mask, vfloat64m1_t maskedoff, vfloat32mf2_t op1, vfloat32mf2_t op2, size_t vl) {
  return __riscv_vfwadd_vv_tum(mask, maskedoff, op1, op2, __RISCV_FRM_RNE, vl);
}

vfloat64m1_t test_vfwadd_vf_f64m1_rm_tum(vbool64_t mask, vfloat64m1_t maskedoff, vfloat32mf2_t op1, float op2, size_t vl) {
  return __riscv_vfwadd_vf_tum(mask, maskedoff, op1, op2, __RISCV_FRM_RNE, vl);
}

vfloat64m1_t test_vfwadd_wv_f64m1_rm_tum(vbool64_t mask, vfloat64m1_t maskedoff, vfloat64m1_t op1, vfloat32mf2_t op2, size_t vl) {
  return __riscv_vfwadd_wv_tum(mask, maskedoff, op1, op2, __RISCV_FRM_RNE, vl);
}

vfloat64m1_t test_vfwadd_wf_f64m1_rm_tum(vbool64_t mask, vfloat64m1_t maskedoff, vfloat64m1_t op1, float op2, size_t vl) {
  return __riscv_vfwadd_wf_tum(mask, maskedoff, op1, op2, __RISCV_FRM_RNE, vl);
}

vfloat64m2_t test_vfwadd_vv_f64m2_rm_tum(vbool32_t mask, vfloat64m2_t maskedoff, vfloat32m1_t op1, vfloat32m1_t op2, size_t vl) {
  return __riscv_vfwadd_vv_tum(mask, maskedoff, op1, op2, __RISCV_FRM_RNE, vl);
}

vfloat64m2_t test_vfwadd_vf_f64m2_rm_tum(vbool32_t mask, vfloat64m2_t maskedoff, vfloat32m1_t op1, float op2, size_t vl) {
  return __riscv_vfwadd_vf_tum(mask, maskedoff, op1, op2, __RISCV_FRM_RNE, vl);
}

vfloat64m2_t test_vfwadd_wv_f64m2_rm_tum(vbool32_t mask, vfloat64m2_t maskedoff, vfloat64m2_t op1, vfloat32m1_t op2, size_t vl) {
  return __riscv_vfwadd_wv_tum(mask, maskedoff, op1, op2, __RISCV_FRM_RNE, vl);
}

vfloat64m2_t test_vfwadd_wf_f64m2_rm_tum(vbool32_t mask, vfloat64m2_t maskedoff, vfloat64m2_t op1, float op2, size_t vl) {
  return __riscv_vfwadd_wf_tum(mask, maskedoff, op1, op2, __RISCV_FRM_RNE, vl);
}

vfloat64m4_t test_vfwadd_vv_f64m4_rm_tum(vbool16_t mask, vfloat64m4_t maskedoff, vfloat32m2_t op1, vfloat32m2_t op2, size_t vl) {
  return __riscv_vfwadd_vv_tum(mask, maskedoff, op1, op2, __RISCV_FRM_RNE, vl);
}

vfloat64m4_t test_vfwadd_vf_f64m4_rm_tum(vbool16_t mask, vfloat64m4_t maskedoff, vfloat32m2_t op1, float op2, size_t vl) {
  return __riscv_vfwadd_vf_tum(mask, maskedoff, op1, op2, __RISCV_FRM_RNE, vl);
}

vfloat64m4_t test_vfwadd_wv_f64m4_rm_tum(vbool16_t mask, vfloat64m4_t maskedoff, vfloat64m4_t op1, vfloat32m2_t op2, size_t vl) {
  return __riscv_vfwadd_wv_tum(mask, maskedoff, op1, op2, __RISCV_FRM_RNE, vl);
}

vfloat64m4_t test_vfwadd_wf_f64m4_rm_tum(vbool16_t mask, vfloat64m4_t maskedoff, vfloat64m4_t op1, float op2, size_t vl) {
  return __riscv_vfwadd_wf_tum(mask, maskedoff, op1, op2, __RISCV_FRM_RNE, vl);
}

vfloat64m8_t test_vfwadd_vv_f64m8_rm_tum(vbool8_t mask, vfloat64m8_t maskedoff, vfloat32m4_t op1, vfloat32m4_t op2, size_t vl) {
  return __riscv_vfwadd_vv_tum(mask, maskedoff, op1, op2, __RISCV_FRM_RNE, vl);
}

vfloat64m8_t test_vfwadd_vf_f64m8_rm_tum(vbool8_t mask, vfloat64m8_t maskedoff, vfloat32m4_t op1, float op2, size_t vl) {
  return __riscv_vfwadd_vf_tum(mask, maskedoff, op1, op2, __RISCV_FRM_RNE, vl);
}

vfloat64m8_t test_vfwadd_wv_f64m8_rm_tum(vbool8_t mask, vfloat64m8_t maskedoff, vfloat64m8_t op1, vfloat32m4_t op2, size_t vl) {
  return __riscv_vfwadd_wv_tum(mask, maskedoff, op1, op2, __RISCV_FRM_RNE, vl);
}

vfloat64m8_t test_vfwadd_wf_f64m8_rm_tum(vbool8_t mask, vfloat64m8_t maskedoff, vfloat64m8_t op1, float op2, size_t vl) {
  return __riscv_vfwadd_wf_tum(mask, maskedoff, op1, op2, __RISCV_FRM_RNE, vl);
}

vfloat32mf2_t test_vfwadd_vv_f32mf2_rm_tumu(vbool64_t mask, vfloat32mf2_t maskedoff, vfloat16mf4_t op1, vfloat16mf4_t op2, size_t vl) {
  return __riscv_vfwadd_vv_tumu(mask, maskedoff, op1, op2, __RISCV_FRM_RNE, vl);
}

vfloat32mf2_t test_vfwadd_vf_f32mf2_rm_tumu(vbool64_t mask, vfloat32mf2_t maskedoff, vfloat16mf4_t op1, _Float16 op2, size_t vl) {
  return __riscv_vfwadd_vf_tumu(mask, maskedoff, op1, op2, __RISCV_FRM_RNE, vl);
}

vfloat32mf2_t test_vfwadd_wv_f32mf2_rm_tumu(vbool64_t mask, vfloat32mf2_t maskedoff, vfloat32mf2_t op1, vfloat16mf4_t op2, size_t vl) {
  return __riscv_vfwadd_wv_tumu(mask, maskedoff, op1, op2, __RISCV_FRM_RNE, vl);
}

vfloat32mf2_t test_vfwadd_wf_f32mf2_rm_tumu(vbool64_t mask, vfloat32mf2_t maskedoff, vfloat32mf2_t op1, _Float16 op2, size_t vl) {
  return __riscv_vfwadd_wf_tumu(mask, maskedoff, op1, op2, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfwadd_vv_f32m1_rm_tumu(vbool32_t mask, vfloat32m1_t maskedoff, vfloat16mf2_t op1, vfloat16mf2_t op2, size_t vl) {
  return __riscv_vfwadd_vv_tumu(mask, maskedoff, op1, op2, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfwadd_vf_f32m1_rm_tumu(vbool32_t mask, vfloat32m1_t maskedoff, vfloat16mf2_t op1, _Float16 op2, size_t vl) {
  return __riscv_vfwadd_vf_tumu(mask, maskedoff, op1, op2, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfwadd_wv_f32m1_rm_tumu(vbool32_t mask, vfloat32m1_t maskedoff, vfloat32m1_t op1, vfloat16mf2_t op2, size_t vl) {
  return __riscv_vfwadd_wv_tumu(mask, maskedoff, op1, op2, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfwadd_wf_f32m1_rm_tumu(vbool32_t mask, vfloat32m1_t maskedoff, vfloat32m1_t op1, _Float16 op2, size_t vl) {
  return __riscv_vfwadd_wf_tumu(mask, maskedoff, op1, op2, __RISCV_FRM_RNE, vl);
}

vfloat32m2_t test_vfwadd_vv_f32m2_rm_tumu(vbool16_t mask, vfloat32m2_t maskedoff, vfloat16m1_t op1, vfloat16m1_t op2, size_t vl) {
  return __riscv_vfwadd_vv_tumu(mask, maskedoff, op1, op2, __RISCV_FRM_RNE, vl);
}

vfloat32m2_t test_vfwadd_vf_f32m2_rm_tumu(vbool16_t mask, vfloat32m2_t maskedoff, vfloat16m1_t op1, _Float16 op2, size_t vl) {
  return __riscv_vfwadd_vf_tumu(mask, maskedoff, op1, op2, __RISCV_FRM_RNE, vl);
}

vfloat32m2_t test_vfwadd_wv_f32m2_rm_tumu(vbool16_t mask, vfloat32m2_t maskedoff, vfloat32m2_t op1, vfloat16m1_t op2, size_t vl) {
  return __riscv_vfwadd_wv_tumu(mask, maskedoff, op1, op2, __RISCV_FRM_RNE, vl);
}

vfloat32m2_t test_vfwadd_wf_f32m2_rm_tumu(vbool16_t mask, vfloat32m2_t maskedoff, vfloat32m2_t op1, _Float16 op2, size_t vl) {
  return __riscv_vfwadd_wf_tumu(mask, maskedoff, op1, op2, __RISCV_FRM_RNE, vl);
}

vfloat32m4_t test_vfwadd_vv_f32m4_rm_tumu(vbool8_t mask, vfloat32m4_t maskedoff, vfloat16m2_t op1, vfloat16m2_t op2, size_t vl) {
  return __riscv_vfwadd_vv_tumu(mask, maskedoff, op1, op2, __RISCV_FRM_RNE, vl);
}

vfloat32m4_t test_vfwadd_vf_f32m4_rm_tumu(vbool8_t mask, vfloat32m4_t maskedoff, vfloat16m2_t op1, _Float16 op2, size_t vl) {
  return __riscv_vfwadd_vf_tumu(mask, maskedoff, op1, op2, __RISCV_FRM_RNE, vl);
}

vfloat32m4_t test_vfwadd_wv_f32m4_rm_tumu(vbool8_t mask, vfloat32m4_t maskedoff, vfloat32m4_t op1, vfloat16m2_t op2, size_t vl) {
  return __riscv_vfwadd_wv_tumu(mask, maskedoff, op1, op2, __RISCV_FRM_RNE, vl);
}

vfloat32m4_t test_vfwadd_wf_f32m4_rm_tumu(vbool8_t mask, vfloat32m4_t maskedoff, vfloat32m4_t op1, _Float16 op2, size_t vl) {
  return __riscv_vfwadd_wf_tumu(mask, maskedoff, op1, op2, __RISCV_FRM_RNE, vl);
}

vfloat32m8_t test_vfwadd_vv_f32m8_rm_tumu(vbool4_t mask, vfloat32m8_t maskedoff, vfloat16m4_t op1, vfloat16m4_t op2, size_t vl) {
  return __riscv_vfwadd_vv_tumu(mask, maskedoff, op1, op2, __RISCV_FRM_RNE, vl);
}

vfloat32m8_t test_vfwadd_vf_f32m8_rm_tumu(vbool4_t mask, vfloat32m8_t maskedoff, vfloat16m4_t op1, _Float16 op2, size_t vl) {
  return __riscv_vfwadd_vf_tumu(mask, maskedoff, op1, op2, __RISCV_FRM_RNE, vl);
}

vfloat32m8_t test_vfwadd_wv_f32m8_rm_tumu(vbool4_t mask, vfloat32m8_t maskedoff, vfloat32m8_t op1, vfloat16m4_t op2, size_t vl) {
  return __riscv_vfwadd_wv_tumu(mask, maskedoff, op1, op2, __RISCV_FRM_RNE, vl);
}

vfloat32m8_t test_vfwadd_wf_f32m8_rm_tumu(vbool4_t mask, vfloat32m8_t maskedoff, vfloat32m8_t op1, _Float16 op2, size_t vl) {
  return __riscv_vfwadd_wf_tumu(mask, maskedoff, op1, op2, __RISCV_FRM_RNE, vl);
}

vfloat64m1_t test_vfwadd_vv_f64m1_rm_tumu(vbool64_t mask, vfloat64m1_t maskedoff, vfloat32mf2_t op1, vfloat32mf2_t op2, size_t vl) {
  return __riscv_vfwadd_vv_tumu(mask, maskedoff, op1, op2, __RISCV_FRM_RNE, vl);
}

vfloat64m1_t test_vfwadd_vf_f64m1_rm_tumu(vbool64_t mask, vfloat64m1_t maskedoff, vfloat32mf2_t op1, float op2, size_t vl) {
  return __riscv_vfwadd_vf_tumu(mask, maskedoff, op1, op2, __RISCV_FRM_RNE, vl);
}

vfloat64m1_t test_vfwadd_wv_f64m1_rm_tumu(vbool64_t mask, vfloat64m1_t maskedoff, vfloat64m1_t op1, vfloat32mf2_t op2, size_t vl) {
  return __riscv_vfwadd_wv_tumu(mask, maskedoff, op1, op2, __RISCV_FRM_RNE, vl);
}

vfloat64m1_t test_vfwadd_wf_f64m1_rm_tumu(vbool64_t mask, vfloat64m1_t maskedoff, vfloat64m1_t op1, float op2, size_t vl) {
  return __riscv_vfwadd_wf_tumu(mask, maskedoff, op1, op2, __RISCV_FRM_RNE, vl);
}

vfloat64m2_t test_vfwadd_vv_f64m2_rm_tumu(vbool32_t mask, vfloat64m2_t maskedoff, vfloat32m1_t op1, vfloat32m1_t op2, size_t vl) {
  return __riscv_vfwadd_vv_tumu(mask, maskedoff, op1, op2, __RISCV_FRM_RNE, vl);
}

vfloat64m2_t test_vfwadd_vf_f64m2_rm_tumu(vbool32_t mask, vfloat64m2_t maskedoff, vfloat32m1_t op1, float op2, size_t vl) {
  return __riscv_vfwadd_vf_tumu(mask, maskedoff, op1, op2, __RISCV_FRM_RNE, vl);
}

vfloat64m2_t test_vfwadd_wv_f64m2_rm_tumu(vbool32_t mask, vfloat64m2_t maskedoff, vfloat64m2_t op1, vfloat32m1_t op2, size_t vl) {
  return __riscv_vfwadd_wv_tumu(mask, maskedoff, op1, op2, __RISCV_FRM_RNE, vl);
}

vfloat64m2_t test_vfwadd_wf_f64m2_rm_tumu(vbool32_t mask, vfloat64m2_t maskedoff, vfloat64m2_t op1, float op2, size_t vl) {
  return __riscv_vfwadd_wf_tumu(mask, maskedoff, op1, op2, __RISCV_FRM_RNE, vl);
}

vfloat64m4_t test_vfwadd_vv_f64m4_rm_tumu(vbool16_t mask, vfloat64m4_t maskedoff, vfloat32m2_t op1, vfloat32m2_t op2, size_t vl) {
  return __riscv_vfwadd_vv_tumu(mask, maskedoff, op1, op2, __RISCV_FRM_RNE, vl);
}

vfloat64m4_t test_vfwadd_vf_f64m4_rm_tumu(vbool16_t mask, vfloat64m4_t maskedoff, vfloat32m2_t op1, float op2, size_t vl) {
  return __riscv_vfwadd_vf_tumu(mask, maskedoff, op1, op2, __RISCV_FRM_RNE, vl);
}

vfloat64m4_t test_vfwadd_wv_f64m4_rm_tumu(vbool16_t mask, vfloat64m4_t maskedoff, vfloat64m4_t op1, vfloat32m2_t op2, size_t vl) {
  return __riscv_vfwadd_wv_tumu(mask, maskedoff, op1, op2, __RISCV_FRM_RNE, vl);
}

vfloat64m4_t test_vfwadd_wf_f64m4_rm_tumu(vbool16_t mask, vfloat64m4_t maskedoff, vfloat64m4_t op1, float op2, size_t vl) {
  return __riscv_vfwadd_wf_tumu(mask, maskedoff, op1, op2, __RISCV_FRM_RNE, vl);
}

vfloat64m8_t test_vfwadd_vv_f64m8_rm_tumu(vbool8_t mask, vfloat64m8_t maskedoff, vfloat32m4_t op1, vfloat32m4_t op2, size_t vl) {
  return __riscv_vfwadd_vv_tumu(mask, maskedoff, op1, op2, __RISCV_FRM_RNE, vl);
}

vfloat64m8_t test_vfwadd_vf_f64m8_rm_tumu(vbool8_t mask, vfloat64m8_t maskedoff, vfloat32m4_t op1, float op2, size_t vl) {
  return __riscv_vfwadd_vf_tumu(mask, maskedoff, op1, op2, __RISCV_FRM_RNE, vl);
}

vfloat64m8_t test_vfwadd_wv_f64m8_rm_tumu(vbool8_t mask, vfloat64m8_t maskedoff, vfloat64m8_t op1, vfloat32m4_t op2, size_t vl) {
  return __riscv_vfwadd_wv_tumu(mask, maskedoff, op1, op2, __RISCV_FRM_RNE, vl);
}

vfloat64m8_t test_vfwadd_wf_f64m8_rm_tumu(vbool8_t mask, vfloat64m8_t maskedoff, vfloat64m8_t op1, float op2, size_t vl) {
  return __riscv_vfwadd_wf_tumu(mask, maskedoff, op1, op2, __RISCV_FRM_RNE, vl);
}

vfloat32mf2_t test_vfwadd_vv_f32mf2_rm_mu(vbool64_t mask, vfloat32mf2_t maskedoff, vfloat16mf4_t op1, vfloat16mf4_t op2, size_t vl) {
  return __riscv_vfwadd_vv_mu(mask, maskedoff, op1, op2, __RISCV_FRM_RNE, vl);
}

vfloat32mf2_t test_vfwadd_vf_f32mf2_rm_mu(vbool64_t mask, vfloat32mf2_t maskedoff, vfloat16mf4_t op1, _Float16 op2, size_t vl) {
  return __riscv_vfwadd_vf_mu(mask, maskedoff, op1, op2, __RISCV_FRM_RNE, vl);
}

vfloat32mf2_t test_vfwadd_wv_f32mf2_rm_mu(vbool64_t mask, vfloat32mf2_t maskedoff, vfloat32mf2_t op1, vfloat16mf4_t op2, size_t vl) {
  return __riscv_vfwadd_wv_mu(mask, maskedoff, op1, op2, __RISCV_FRM_RNE, vl);
}

vfloat32mf2_t test_vfwadd_wf_f32mf2_rm_mu(vbool64_t mask, vfloat32mf2_t maskedoff, vfloat32mf2_t op1, _Float16 op2, size_t vl) {
  return __riscv_vfwadd_wf_mu(mask, maskedoff, op1, op2, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfwadd_vv_f32m1_rm_mu(vbool32_t mask, vfloat32m1_t maskedoff, vfloat16mf2_t op1, vfloat16mf2_t op2, size_t vl) {
  return __riscv_vfwadd_vv_mu(mask, maskedoff, op1, op2, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfwadd_vf_f32m1_rm_mu(vbool32_t mask, vfloat32m1_t maskedoff, vfloat16mf2_t op1, _Float16 op2, size_t vl) {
  return __riscv_vfwadd_vf_mu(mask, maskedoff, op1, op2, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfwadd_wv_f32m1_rm_mu(vbool32_t mask, vfloat32m1_t maskedoff, vfloat32m1_t op1, vfloat16mf2_t op2, size_t vl) {
  return __riscv_vfwadd_wv_mu(mask, maskedoff, op1, op2, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfwadd_wf_f32m1_rm_mu(vbool32_t mask, vfloat32m1_t maskedoff, vfloat32m1_t op1, _Float16 op2, size_t vl) {
  return __riscv_vfwadd_wf_mu(mask, maskedoff, op1, op2, __RISCV_FRM_RNE, vl);
}

vfloat32m2_t test_vfwadd_vv_f32m2_rm_mu(vbool16_t mask, vfloat32m2_t maskedoff, vfloat16m1_t op1, vfloat16m1_t op2, size_t vl) {
  return __riscv_vfwadd_vv_mu(mask, maskedoff, op1, op2, __RISCV_FRM_RNE, vl);
}

vfloat32m2_t test_vfwadd_vf_f32m2_rm_mu(vbool16_t mask, vfloat32m2_t maskedoff, vfloat16m1_t op1, _Float16 op2, size_t vl) {
  return __riscv_vfwadd_vf_mu(mask, maskedoff, op1, op2, __RISCV_FRM_RNE, vl);
}

vfloat32m2_t test_vfwadd_wv_f32m2_rm_mu(vbool16_t mask, vfloat32m2_t maskedoff, vfloat32m2_t op1, vfloat16m1_t op2, size_t vl) {
  return __riscv_vfwadd_wv_mu(mask, maskedoff, op1, op2, __RISCV_FRM_RNE, vl);
}

vfloat32m2_t test_vfwadd_wf_f32m2_rm_mu(vbool16_t mask, vfloat32m2_t maskedoff, vfloat32m2_t op1, _Float16 op2, size_t vl) {
  return __riscv_vfwadd_wf_mu(mask, maskedoff, op1, op2, __RISCV_FRM_RNE, vl);
}

vfloat32m4_t test_vfwadd_vv_f32m4_rm_mu(vbool8_t mask, vfloat32m4_t maskedoff, vfloat16m2_t op1, vfloat16m2_t op2, size_t vl) {
  return __riscv_vfwadd_vv_mu(mask, maskedoff, op1, op2, __RISCV_FRM_RNE, vl);
}

vfloat32m4_t test_vfwadd_vf_f32m4_rm_mu(vbool8_t mask, vfloat32m4_t maskedoff, vfloat16m2_t op1, _Float16 op2, size_t vl) {
  return __riscv_vfwadd_vf_mu(mask, maskedoff, op1, op2, __RISCV_FRM_RNE, vl);
}

vfloat32m4_t test_vfwadd_wv_f32m4_rm_mu(vbool8_t mask, vfloat32m4_t maskedoff, vfloat32m4_t op1, vfloat16m2_t op2, size_t vl) {
  return __riscv_vfwadd_wv_mu(mask, maskedoff, op1, op2, __RISCV_FRM_RNE, vl);
}

vfloat32m4_t test_vfwadd_wf_f32m4_rm_mu(vbool8_t mask, vfloat32m4_t maskedoff, vfloat32m4_t op1, _Float16 op2, size_t vl) {
  return __riscv_vfwadd_wf_mu(mask, maskedoff, op1, op2, __RISCV_FRM_RNE, vl);
}

vfloat32m8_t test_vfwadd_vv_f32m8_rm_mu(vbool4_t mask, vfloat32m8_t maskedoff, vfloat16m4_t op1, vfloat16m4_t op2, size_t vl) {
  return __riscv_vfwadd_vv_mu(mask, maskedoff, op1, op2, __RISCV_FRM_RNE, vl);
}

vfloat32m8_t test_vfwadd_vf_f32m8_rm_mu(vbool4_t mask, vfloat32m8_t maskedoff, vfloat16m4_t op1, _Float16 op2, size_t vl) {
  return __riscv_vfwadd_vf_mu(mask, maskedoff, op1, op2, __RISCV_FRM_RNE, vl);
}

vfloat32m8_t test_vfwadd_wv_f32m8_rm_mu(vbool4_t mask, vfloat32m8_t maskedoff, vfloat32m8_t op1, vfloat16m4_t op2, size_t vl) {
  return __riscv_vfwadd_wv_mu(mask, maskedoff, op1, op2, __RISCV_FRM_RNE, vl);
}

vfloat32m8_t test_vfwadd_wf_f32m8_rm_mu(vbool4_t mask, vfloat32m8_t maskedoff, vfloat32m8_t op1, _Float16 op2, size_t vl) {
  return __riscv_vfwadd_wf_mu(mask, maskedoff, op1, op2, __RISCV_FRM_RNE, vl);
}

vfloat64m1_t test_vfwadd_vv_f64m1_rm_mu(vbool64_t mask, vfloat64m1_t maskedoff, vfloat32mf2_t op1, vfloat32mf2_t op2, size_t vl) {
  return __riscv_vfwadd_vv_mu(mask, maskedoff, op1, op2, __RISCV_FRM_RNE, vl);
}

vfloat64m1_t test_vfwadd_vf_f64m1_rm_mu(vbool64_t mask, vfloat64m1_t maskedoff, vfloat32mf2_t op1, float op2, size_t vl) {
  return __riscv_vfwadd_vf_mu(mask, maskedoff, op1, op2, __RISCV_FRM_RNE, vl);
}

vfloat64m1_t test_vfwadd_wv_f64m1_rm_mu(vbool64_t mask, vfloat64m1_t maskedoff, vfloat64m1_t op1, vfloat32mf2_t op2, size_t vl) {
  return __riscv_vfwadd_wv_mu(mask, maskedoff, op1, op2, __RISCV_FRM_RNE, vl);
}

vfloat64m1_t test_vfwadd_wf_f64m1_rm_mu(vbool64_t mask, vfloat64m1_t maskedoff, vfloat64m1_t op1, float op2, size_t vl) {
  return __riscv_vfwadd_wf_mu(mask, maskedoff, op1, op2, __RISCV_FRM_RNE, vl);
}

vfloat64m2_t test_vfwadd_vv_f64m2_rm_mu(vbool32_t mask, vfloat64m2_t maskedoff, vfloat32m1_t op1, vfloat32m1_t op2, size_t vl) {
  return __riscv_vfwadd_vv_mu(mask, maskedoff, op1, op2, __RISCV_FRM_RNE, vl);
}

vfloat64m2_t test_vfwadd_vf_f64m2_rm_mu(vbool32_t mask, vfloat64m2_t maskedoff, vfloat32m1_t op1, float op2, size_t vl) {
  return __riscv_vfwadd_vf_mu(mask, maskedoff, op1, op2, __RISCV_FRM_RNE, vl);
}

vfloat64m2_t test_vfwadd_wv_f64m2_rm_mu(vbool32_t mask, vfloat64m2_t maskedoff, vfloat64m2_t op1, vfloat32m1_t op2, size_t vl) {
  return __riscv_vfwadd_wv_mu(mask, maskedoff, op1, op2, __RISCV_FRM_RNE, vl);
}

vfloat64m2_t test_vfwadd_wf_f64m2_rm_mu(vbool32_t mask, vfloat64m2_t maskedoff, vfloat64m2_t op1, float op2, size_t vl) {
  return __riscv_vfwadd_wf_mu(mask, maskedoff, op1, op2, __RISCV_FRM_RNE, vl);
}

vfloat64m4_t test_vfwadd_vv_f64m4_rm_mu(vbool16_t mask, vfloat64m4_t maskedoff, vfloat32m2_t op1, vfloat32m2_t op2, size_t vl) {
  return __riscv_vfwadd_vv_mu(mask, maskedoff, op1, op2, __RISCV_FRM_RNE, vl);
}

vfloat64m4_t test_vfwadd_vf_f64m4_rm_mu(vbool16_t mask, vfloat64m4_t maskedoff, vfloat32m2_t op1, float op2, size_t vl) {
  return __riscv_vfwadd_vf_mu(mask, maskedoff, op1, op2, __RISCV_FRM_RNE, vl);
}

vfloat64m4_t test_vfwadd_wv_f64m4_rm_mu(vbool16_t mask, vfloat64m4_t maskedoff, vfloat64m4_t op1, vfloat32m2_t op2, size_t vl) {
  return __riscv_vfwadd_wv_mu(mask, maskedoff, op1, op2, __RISCV_FRM_RNE, vl);
}

vfloat64m4_t test_vfwadd_wf_f64m4_rm_mu(vbool16_t mask, vfloat64m4_t maskedoff, vfloat64m4_t op1, float op2, size_t vl) {
  return __riscv_vfwadd_wf_mu(mask, maskedoff, op1, op2, __RISCV_FRM_RNE, vl);
}

vfloat64m8_t test_vfwadd_vv_f64m8_rm_mu(vbool8_t mask, vfloat64m8_t maskedoff, vfloat32m4_t op1, vfloat32m4_t op2, size_t vl) {
  return __riscv_vfwadd_vv_mu(mask, maskedoff, op1, op2, __RISCV_FRM_RNE, vl);
}

vfloat64m8_t test_vfwadd_vf_f64m8_rm_mu(vbool8_t mask, vfloat64m8_t maskedoff, vfloat32m4_t op1, float op2, size_t vl) {
  return __riscv_vfwadd_vf_mu(mask, maskedoff, op1, op2, __RISCV_FRM_RNE, vl);
}

vfloat64m8_t test_vfwadd_wv_f64m8_rm_mu(vbool8_t mask, vfloat64m8_t maskedoff, vfloat64m8_t op1, vfloat32m4_t op2, size_t vl) {
  return __riscv_vfwadd_wv_mu(mask, maskedoff, op1, op2, __RISCV_FRM_RNE, vl);
}

vfloat64m8_t test_vfwadd_wf_f64m8_rm_mu(vbool8_t mask, vfloat64m8_t maskedoff, vfloat64m8_t op1, float op2, size_t vl) {
  return __riscv_vfwadd_wf_mu(mask, maskedoff, op1, op2, __RISCV_FRM_RNE, vl);
}

