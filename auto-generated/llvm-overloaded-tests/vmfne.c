// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -target-feature +zfh \
// RUN:   -target-feature +experimental-zvfh -disable-O0-optnone  \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

vbool64_t test_vmfne_vv_f16mf4_b64(vfloat16mf4_t op1, vfloat16mf4_t op2, size_t vl) {
  return vmfne(op1, op2, vl);
}

vbool64_t test_vmfne_vf_f16mf4_b64(vfloat16mf4_t op1, _Float16 op2, size_t vl) {
  return vmfne(op1, op2, vl);
}

vbool32_t test_vmfne_vv_f16mf2_b32(vfloat16mf2_t op1, vfloat16mf2_t op2, size_t vl) {
  return vmfne(op1, op2, vl);
}

vbool32_t test_vmfne_vf_f16mf2_b32(vfloat16mf2_t op1, _Float16 op2, size_t vl) {
  return vmfne(op1, op2, vl);
}

vbool16_t test_vmfne_vv_f16m1_b16(vfloat16m1_t op1, vfloat16m1_t op2, size_t vl) {
  return vmfne(op1, op2, vl);
}

vbool16_t test_vmfne_vf_f16m1_b16(vfloat16m1_t op1, _Float16 op2, size_t vl) {
  return vmfne(op1, op2, vl);
}

vbool8_t test_vmfne_vv_f16m2_b8(vfloat16m2_t op1, vfloat16m2_t op2, size_t vl) {
  return vmfne(op1, op2, vl);
}

vbool8_t test_vmfne_vf_f16m2_b8(vfloat16m2_t op1, _Float16 op2, size_t vl) {
  return vmfne(op1, op2, vl);
}

vbool4_t test_vmfne_vv_f16m4_b4(vfloat16m4_t op1, vfloat16m4_t op2, size_t vl) {
  return vmfne(op1, op2, vl);
}

vbool4_t test_vmfne_vf_f16m4_b4(vfloat16m4_t op1, _Float16 op2, size_t vl) {
  return vmfne(op1, op2, vl);
}

vbool2_t test_vmfne_vv_f16m8_b2(vfloat16m8_t op1, vfloat16m8_t op2, size_t vl) {
  return vmfne(op1, op2, vl);
}

vbool2_t test_vmfne_vf_f16m8_b2(vfloat16m8_t op1, _Float16 op2, size_t vl) {
  return vmfne(op1, op2, vl);
}

vbool64_t test_vmfne_vv_f32mf2_b64(vfloat32mf2_t op1, vfloat32mf2_t op2, size_t vl) {
  return vmfne(op1, op2, vl);
}

vbool64_t test_vmfne_vf_f32mf2_b64(vfloat32mf2_t op1, float op2, size_t vl) {
  return vmfne(op1, op2, vl);
}

vbool32_t test_vmfne_vv_f32m1_b32(vfloat32m1_t op1, vfloat32m1_t op2, size_t vl) {
  return vmfne(op1, op2, vl);
}

vbool32_t test_vmfne_vf_f32m1_b32(vfloat32m1_t op1, float op2, size_t vl) {
  return vmfne(op1, op2, vl);
}

vbool16_t test_vmfne_vv_f32m2_b16(vfloat32m2_t op1, vfloat32m2_t op2, size_t vl) {
  return vmfne(op1, op2, vl);
}

vbool16_t test_vmfne_vf_f32m2_b16(vfloat32m2_t op1, float op2, size_t vl) {
  return vmfne(op1, op2, vl);
}

vbool8_t test_vmfne_vv_f32m4_b8(vfloat32m4_t op1, vfloat32m4_t op2, size_t vl) {
  return vmfne(op1, op2, vl);
}

vbool8_t test_vmfne_vf_f32m4_b8(vfloat32m4_t op1, float op2, size_t vl) {
  return vmfne(op1, op2, vl);
}

vbool4_t test_vmfne_vv_f32m8_b4(vfloat32m8_t op1, vfloat32m8_t op2, size_t vl) {
  return vmfne(op1, op2, vl);
}

vbool4_t test_vmfne_vf_f32m8_b4(vfloat32m8_t op1, float op2, size_t vl) {
  return vmfne(op1, op2, vl);
}

vbool64_t test_vmfne_vv_f64m1_b64(vfloat64m1_t op1, vfloat64m1_t op2, size_t vl) {
  return vmfne(op1, op2, vl);
}

vbool64_t test_vmfne_vf_f64m1_b64(vfloat64m1_t op1, double op2, size_t vl) {
  return vmfne(op1, op2, vl);
}

vbool32_t test_vmfne_vv_f64m2_b32(vfloat64m2_t op1, vfloat64m2_t op2, size_t vl) {
  return vmfne(op1, op2, vl);
}

vbool32_t test_vmfne_vf_f64m2_b32(vfloat64m2_t op1, double op2, size_t vl) {
  return vmfne(op1, op2, vl);
}

vbool16_t test_vmfne_vv_f64m4_b16(vfloat64m4_t op1, vfloat64m4_t op2, size_t vl) {
  return vmfne(op1, op2, vl);
}

vbool16_t test_vmfne_vf_f64m4_b16(vfloat64m4_t op1, double op2, size_t vl) {
  return vmfne(op1, op2, vl);
}

vbool8_t test_vmfne_vv_f64m8_b8(vfloat64m8_t op1, vfloat64m8_t op2, size_t vl) {
  return vmfne(op1, op2, vl);
}

vbool8_t test_vmfne_vf_f64m8_b8(vfloat64m8_t op1, double op2, size_t vl) {
  return vmfne(op1, op2, vl);
}

vbool64_t test_vmfne_vv_f16mf4_b64_m(vbool64_t mask, vfloat16mf4_t op1, vfloat16mf4_t op2, size_t vl) {
  return vmfne(mask, op1, op2, vl);
}

vbool64_t test_vmfne_vf_f16mf4_b64_m(vbool64_t mask, vfloat16mf4_t op1, _Float16 op2, size_t vl) {
  return vmfne(mask, op1, op2, vl);
}

vbool32_t test_vmfne_vv_f16mf2_b32_m(vbool32_t mask, vfloat16mf2_t op1, vfloat16mf2_t op2, size_t vl) {
  return vmfne(mask, op1, op2, vl);
}

vbool32_t test_vmfne_vf_f16mf2_b32_m(vbool32_t mask, vfloat16mf2_t op1, _Float16 op2, size_t vl) {
  return vmfne(mask, op1, op2, vl);
}

vbool16_t test_vmfne_vv_f16m1_b16_m(vbool16_t mask, vfloat16m1_t op1, vfloat16m1_t op2, size_t vl) {
  return vmfne(mask, op1, op2, vl);
}

vbool16_t test_vmfne_vf_f16m1_b16_m(vbool16_t mask, vfloat16m1_t op1, _Float16 op2, size_t vl) {
  return vmfne(mask, op1, op2, vl);
}

vbool8_t test_vmfne_vv_f16m2_b8_m(vbool8_t mask, vfloat16m2_t op1, vfloat16m2_t op2, size_t vl) {
  return vmfne(mask, op1, op2, vl);
}

vbool8_t test_vmfne_vf_f16m2_b8_m(vbool8_t mask, vfloat16m2_t op1, _Float16 op2, size_t vl) {
  return vmfne(mask, op1, op2, vl);
}

vbool4_t test_vmfne_vv_f16m4_b4_m(vbool4_t mask, vfloat16m4_t op1, vfloat16m4_t op2, size_t vl) {
  return vmfne(mask, op1, op2, vl);
}

vbool4_t test_vmfne_vf_f16m4_b4_m(vbool4_t mask, vfloat16m4_t op1, _Float16 op2, size_t vl) {
  return vmfne(mask, op1, op2, vl);
}

vbool2_t test_vmfne_vv_f16m8_b2_m(vbool2_t mask, vfloat16m8_t op1, vfloat16m8_t op2, size_t vl) {
  return vmfne(mask, op1, op2, vl);
}

vbool2_t test_vmfne_vf_f16m8_b2_m(vbool2_t mask, vfloat16m8_t op1, _Float16 op2, size_t vl) {
  return vmfne(mask, op1, op2, vl);
}

vbool64_t test_vmfne_vv_f32mf2_b64_m(vbool64_t mask, vfloat32mf2_t op1, vfloat32mf2_t op2, size_t vl) {
  return vmfne(mask, op1, op2, vl);
}

vbool64_t test_vmfne_vf_f32mf2_b64_m(vbool64_t mask, vfloat32mf2_t op1, float op2, size_t vl) {
  return vmfne(mask, op1, op2, vl);
}

vbool32_t test_vmfne_vv_f32m1_b32_m(vbool32_t mask, vfloat32m1_t op1, vfloat32m1_t op2, size_t vl) {
  return vmfne(mask, op1, op2, vl);
}

vbool32_t test_vmfne_vf_f32m1_b32_m(vbool32_t mask, vfloat32m1_t op1, float op2, size_t vl) {
  return vmfne(mask, op1, op2, vl);
}

vbool16_t test_vmfne_vv_f32m2_b16_m(vbool16_t mask, vfloat32m2_t op1, vfloat32m2_t op2, size_t vl) {
  return vmfne(mask, op1, op2, vl);
}

vbool16_t test_vmfne_vf_f32m2_b16_m(vbool16_t mask, vfloat32m2_t op1, float op2, size_t vl) {
  return vmfne(mask, op1, op2, vl);
}

vbool8_t test_vmfne_vv_f32m4_b8_m(vbool8_t mask, vfloat32m4_t op1, vfloat32m4_t op2, size_t vl) {
  return vmfne(mask, op1, op2, vl);
}

vbool8_t test_vmfne_vf_f32m4_b8_m(vbool8_t mask, vfloat32m4_t op1, float op2, size_t vl) {
  return vmfne(mask, op1, op2, vl);
}

vbool4_t test_vmfne_vv_f32m8_b4_m(vbool4_t mask, vfloat32m8_t op1, vfloat32m8_t op2, size_t vl) {
  return vmfne(mask, op1, op2, vl);
}

vbool4_t test_vmfne_vf_f32m8_b4_m(vbool4_t mask, vfloat32m8_t op1, float op2, size_t vl) {
  return vmfne(mask, op1, op2, vl);
}

vbool64_t test_vmfne_vv_f64m1_b64_m(vbool64_t mask, vfloat64m1_t op1, vfloat64m1_t op2, size_t vl) {
  return vmfne(mask, op1, op2, vl);
}

vbool64_t test_vmfne_vf_f64m1_b64_m(vbool64_t mask, vfloat64m1_t op1, double op2, size_t vl) {
  return vmfne(mask, op1, op2, vl);
}

vbool32_t test_vmfne_vv_f64m2_b32_m(vbool32_t mask, vfloat64m2_t op1, vfloat64m2_t op2, size_t vl) {
  return vmfne(mask, op1, op2, vl);
}

vbool32_t test_vmfne_vf_f64m2_b32_m(vbool32_t mask, vfloat64m2_t op1, double op2, size_t vl) {
  return vmfne(mask, op1, op2, vl);
}

vbool16_t test_vmfne_vv_f64m4_b16_m(vbool16_t mask, vfloat64m4_t op1, vfloat64m4_t op2, size_t vl) {
  return vmfne(mask, op1, op2, vl);
}

vbool16_t test_vmfne_vf_f64m4_b16_m(vbool16_t mask, vfloat64m4_t op1, double op2, size_t vl) {
  return vmfne(mask, op1, op2, vl);
}

vbool8_t test_vmfne_vv_f64m8_b8_m(vbool8_t mask, vfloat64m8_t op1, vfloat64m8_t op2, size_t vl) {
  return vmfne(mask, op1, op2, vl);
}

vbool8_t test_vmfne_vf_f64m8_b8_m(vbool8_t mask, vfloat64m8_t op1, double op2, size_t vl) {
  return vmfne(mask, op1, op2, vl);
}

