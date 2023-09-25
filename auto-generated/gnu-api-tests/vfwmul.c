/* { dg-do compile } */
/* { dg-options "-march=rv64gcv_zvfh -mabi=lp64d -Wno-psabi -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
vfloat32mf2_t test_vfwmul_vv_f32mf2(vfloat16mf4_t op1, vfloat16mf4_t op2, size_t vl) {
  return __riscv_vfwmul_vv_f32mf2(op1, op2, vl);
}

vfloat32mf2_t test_vfwmul_vf_f32mf2(vfloat16mf4_t op1, float16_t op2, size_t vl) {
  return __riscv_vfwmul_vf_f32mf2(op1, op2, vl);
}

vfloat32m1_t test_vfwmul_vv_f32m1(vfloat16mf2_t op1, vfloat16mf2_t op2, size_t vl) {
  return __riscv_vfwmul_vv_f32m1(op1, op2, vl);
}

vfloat32m1_t test_vfwmul_vf_f32m1(vfloat16mf2_t op1, float16_t op2, size_t vl) {
  return __riscv_vfwmul_vf_f32m1(op1, op2, vl);
}

vfloat32m2_t test_vfwmul_vv_f32m2(vfloat16m1_t op1, vfloat16m1_t op2, size_t vl) {
  return __riscv_vfwmul_vv_f32m2(op1, op2, vl);
}

vfloat32m2_t test_vfwmul_vf_f32m2(vfloat16m1_t op1, float16_t op2, size_t vl) {
  return __riscv_vfwmul_vf_f32m2(op1, op2, vl);
}

vfloat32m4_t test_vfwmul_vv_f32m4(vfloat16m2_t op1, vfloat16m2_t op2, size_t vl) {
  return __riscv_vfwmul_vv_f32m4(op1, op2, vl);
}

vfloat32m4_t test_vfwmul_vf_f32m4(vfloat16m2_t op1, float16_t op2, size_t vl) {
  return __riscv_vfwmul_vf_f32m4(op1, op2, vl);
}

vfloat32m8_t test_vfwmul_vv_f32m8(vfloat16m4_t op1, vfloat16m4_t op2, size_t vl) {
  return __riscv_vfwmul_vv_f32m8(op1, op2, vl);
}

vfloat32m8_t test_vfwmul_vf_f32m8(vfloat16m4_t op1, float16_t op2, size_t vl) {
  return __riscv_vfwmul_vf_f32m8(op1, op2, vl);
}

vfloat64m1_t test_vfwmul_vv_f64m1(vfloat32mf2_t op1, vfloat32mf2_t op2, size_t vl) {
  return __riscv_vfwmul_vv_f64m1(op1, op2, vl);
}

vfloat64m1_t test_vfwmul_vf_f64m1(vfloat32mf2_t op1, float32_t op2, size_t vl) {
  return __riscv_vfwmul_vf_f64m1(op1, op2, vl);
}

vfloat64m2_t test_vfwmul_vv_f64m2(vfloat32m1_t op1, vfloat32m1_t op2, size_t vl) {
  return __riscv_vfwmul_vv_f64m2(op1, op2, vl);
}

vfloat64m2_t test_vfwmul_vf_f64m2(vfloat32m1_t op1, float32_t op2, size_t vl) {
  return __riscv_vfwmul_vf_f64m2(op1, op2, vl);
}

vfloat64m4_t test_vfwmul_vv_f64m4(vfloat32m2_t op1, vfloat32m2_t op2, size_t vl) {
  return __riscv_vfwmul_vv_f64m4(op1, op2, vl);
}

vfloat64m4_t test_vfwmul_vf_f64m4(vfloat32m2_t op1, float32_t op2, size_t vl) {
  return __riscv_vfwmul_vf_f64m4(op1, op2, vl);
}

vfloat64m8_t test_vfwmul_vv_f64m8(vfloat32m4_t op1, vfloat32m4_t op2, size_t vl) {
  return __riscv_vfwmul_vv_f64m8(op1, op2, vl);
}

vfloat64m8_t test_vfwmul_vf_f64m8(vfloat32m4_t op1, float32_t op2, size_t vl) {
  return __riscv_vfwmul_vf_f64m8(op1, op2, vl);
}

vfloat32mf2_t test_vfwmul_vv_f32mf2_m(vbool64_t mask, vfloat16mf4_t op1, vfloat16mf4_t op2, size_t vl) {
  return __riscv_vfwmul_vv_f32mf2_m(mask, op1, op2, vl);
}

vfloat32mf2_t test_vfwmul_vf_f32mf2_m(vbool64_t mask, vfloat16mf4_t op1, float16_t op2, size_t vl) {
  return __riscv_vfwmul_vf_f32mf2_m(mask, op1, op2, vl);
}

vfloat32m1_t test_vfwmul_vv_f32m1_m(vbool32_t mask, vfloat16mf2_t op1, vfloat16mf2_t op2, size_t vl) {
  return __riscv_vfwmul_vv_f32m1_m(mask, op1, op2, vl);
}

vfloat32m1_t test_vfwmul_vf_f32m1_m(vbool32_t mask, vfloat16mf2_t op1, float16_t op2, size_t vl) {
  return __riscv_vfwmul_vf_f32m1_m(mask, op1, op2, vl);
}

vfloat32m2_t test_vfwmul_vv_f32m2_m(vbool16_t mask, vfloat16m1_t op1, vfloat16m1_t op2, size_t vl) {
  return __riscv_vfwmul_vv_f32m2_m(mask, op1, op2, vl);
}

vfloat32m2_t test_vfwmul_vf_f32m2_m(vbool16_t mask, vfloat16m1_t op1, float16_t op2, size_t vl) {
  return __riscv_vfwmul_vf_f32m2_m(mask, op1, op2, vl);
}

vfloat32m4_t test_vfwmul_vv_f32m4_m(vbool8_t mask, vfloat16m2_t op1, vfloat16m2_t op2, size_t vl) {
  return __riscv_vfwmul_vv_f32m4_m(mask, op1, op2, vl);
}

vfloat32m4_t test_vfwmul_vf_f32m4_m(vbool8_t mask, vfloat16m2_t op1, float16_t op2, size_t vl) {
  return __riscv_vfwmul_vf_f32m4_m(mask, op1, op2, vl);
}

vfloat32m8_t test_vfwmul_vv_f32m8_m(vbool4_t mask, vfloat16m4_t op1, vfloat16m4_t op2, size_t vl) {
  return __riscv_vfwmul_vv_f32m8_m(mask, op1, op2, vl);
}

vfloat32m8_t test_vfwmul_vf_f32m8_m(vbool4_t mask, vfloat16m4_t op1, float16_t op2, size_t vl) {
  return __riscv_vfwmul_vf_f32m8_m(mask, op1, op2, vl);
}

vfloat64m1_t test_vfwmul_vv_f64m1_m(vbool64_t mask, vfloat32mf2_t op1, vfloat32mf2_t op2, size_t vl) {
  return __riscv_vfwmul_vv_f64m1_m(mask, op1, op2, vl);
}

vfloat64m1_t test_vfwmul_vf_f64m1_m(vbool64_t mask, vfloat32mf2_t op1, float32_t op2, size_t vl) {
  return __riscv_vfwmul_vf_f64m1_m(mask, op1, op2, vl);
}

vfloat64m2_t test_vfwmul_vv_f64m2_m(vbool32_t mask, vfloat32m1_t op1, vfloat32m1_t op2, size_t vl) {
  return __riscv_vfwmul_vv_f64m2_m(mask, op1, op2, vl);
}

vfloat64m2_t test_vfwmul_vf_f64m2_m(vbool32_t mask, vfloat32m1_t op1, float32_t op2, size_t vl) {
  return __riscv_vfwmul_vf_f64m2_m(mask, op1, op2, vl);
}

vfloat64m4_t test_vfwmul_vv_f64m4_m(vbool16_t mask, vfloat32m2_t op1, vfloat32m2_t op2, size_t vl) {
  return __riscv_vfwmul_vv_f64m4_m(mask, op1, op2, vl);
}

vfloat64m4_t test_vfwmul_vf_f64m4_m(vbool16_t mask, vfloat32m2_t op1, float32_t op2, size_t vl) {
  return __riscv_vfwmul_vf_f64m4_m(mask, op1, op2, vl);
}

vfloat64m8_t test_vfwmul_vv_f64m8_m(vbool8_t mask, vfloat32m4_t op1, vfloat32m4_t op2, size_t vl) {
  return __riscv_vfwmul_vv_f64m8_m(mask, op1, op2, vl);
}

vfloat64m8_t test_vfwmul_vf_f64m8_m(vbool8_t mask, vfloat32m4_t op1, float32_t op2, size_t vl) {
  return __riscv_vfwmul_vf_f64m8_m(mask, op1, op2, vl);
}

vfloat32mf2_t test_vfwmul_vv_f32mf2_rm(vfloat16mf4_t op1, vfloat16mf4_t op2, size_t vl) {
  return __riscv_vfwmul_vv_f32mf2_rm(op1, op2, __RISCV_FRM_RNE, vl);
}

vfloat32mf2_t test_vfwmul_vf_f32mf2_rm(vfloat16mf4_t op1, float16_t op2, size_t vl) {
  return __riscv_vfwmul_vf_f32mf2_rm(op1, op2, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfwmul_vv_f32m1_rm(vfloat16mf2_t op1, vfloat16mf2_t op2, size_t vl) {
  return __riscv_vfwmul_vv_f32m1_rm(op1, op2, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfwmul_vf_f32m1_rm(vfloat16mf2_t op1, float16_t op2, size_t vl) {
  return __riscv_vfwmul_vf_f32m1_rm(op1, op2, __RISCV_FRM_RNE, vl);
}

vfloat32m2_t test_vfwmul_vv_f32m2_rm(vfloat16m1_t op1, vfloat16m1_t op2, size_t vl) {
  return __riscv_vfwmul_vv_f32m2_rm(op1, op2, __RISCV_FRM_RNE, vl);
}

vfloat32m2_t test_vfwmul_vf_f32m2_rm(vfloat16m1_t op1, float16_t op2, size_t vl) {
  return __riscv_vfwmul_vf_f32m2_rm(op1, op2, __RISCV_FRM_RNE, vl);
}

vfloat32m4_t test_vfwmul_vv_f32m4_rm(vfloat16m2_t op1, vfloat16m2_t op2, size_t vl) {
  return __riscv_vfwmul_vv_f32m4_rm(op1, op2, __RISCV_FRM_RNE, vl);
}

vfloat32m4_t test_vfwmul_vf_f32m4_rm(vfloat16m2_t op1, float16_t op2, size_t vl) {
  return __riscv_vfwmul_vf_f32m4_rm(op1, op2, __RISCV_FRM_RNE, vl);
}

vfloat32m8_t test_vfwmul_vv_f32m8_rm(vfloat16m4_t op1, vfloat16m4_t op2, size_t vl) {
  return __riscv_vfwmul_vv_f32m8_rm(op1, op2, __RISCV_FRM_RNE, vl);
}

vfloat32m8_t test_vfwmul_vf_f32m8_rm(vfloat16m4_t op1, float16_t op2, size_t vl) {
  return __riscv_vfwmul_vf_f32m8_rm(op1, op2, __RISCV_FRM_RNE, vl);
}

vfloat64m1_t test_vfwmul_vv_f64m1_rm(vfloat32mf2_t op1, vfloat32mf2_t op2, size_t vl) {
  return __riscv_vfwmul_vv_f64m1_rm(op1, op2, __RISCV_FRM_RNE, vl);
}

vfloat64m1_t test_vfwmul_vf_f64m1_rm(vfloat32mf2_t op1, float32_t op2, size_t vl) {
  return __riscv_vfwmul_vf_f64m1_rm(op1, op2, __RISCV_FRM_RNE, vl);
}

vfloat64m2_t test_vfwmul_vv_f64m2_rm(vfloat32m1_t op1, vfloat32m1_t op2, size_t vl) {
  return __riscv_vfwmul_vv_f64m2_rm(op1, op2, __RISCV_FRM_RNE, vl);
}

vfloat64m2_t test_vfwmul_vf_f64m2_rm(vfloat32m1_t op1, float32_t op2, size_t vl) {
  return __riscv_vfwmul_vf_f64m2_rm(op1, op2, __RISCV_FRM_RNE, vl);
}

vfloat64m4_t test_vfwmul_vv_f64m4_rm(vfloat32m2_t op1, vfloat32m2_t op2, size_t vl) {
  return __riscv_vfwmul_vv_f64m4_rm(op1, op2, __RISCV_FRM_RNE, vl);
}

vfloat64m4_t test_vfwmul_vf_f64m4_rm(vfloat32m2_t op1, float32_t op2, size_t vl) {
  return __riscv_vfwmul_vf_f64m4_rm(op1, op2, __RISCV_FRM_RNE, vl);
}

vfloat64m8_t test_vfwmul_vv_f64m8_rm(vfloat32m4_t op1, vfloat32m4_t op2, size_t vl) {
  return __riscv_vfwmul_vv_f64m8_rm(op1, op2, __RISCV_FRM_RNE, vl);
}

vfloat64m8_t test_vfwmul_vf_f64m8_rm(vfloat32m4_t op1, float32_t op2, size_t vl) {
  return __riscv_vfwmul_vf_f64m8_rm(op1, op2, __RISCV_FRM_RNE, vl);
}

vfloat32mf2_t test_vfwmul_vv_f32mf2_rm_m(vbool64_t mask, vfloat16mf4_t op1, vfloat16mf4_t op2, size_t vl) {
  return __riscv_vfwmul_vv_f32mf2_rm_m(mask, op1, op2, __RISCV_FRM_RNE, vl);
}

vfloat32mf2_t test_vfwmul_vf_f32mf2_rm_m(vbool64_t mask, vfloat16mf4_t op1, float16_t op2, size_t vl) {
  return __riscv_vfwmul_vf_f32mf2_rm_m(mask, op1, op2, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfwmul_vv_f32m1_rm_m(vbool32_t mask, vfloat16mf2_t op1, vfloat16mf2_t op2, size_t vl) {
  return __riscv_vfwmul_vv_f32m1_rm_m(mask, op1, op2, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfwmul_vf_f32m1_rm_m(vbool32_t mask, vfloat16mf2_t op1, float16_t op2, size_t vl) {
  return __riscv_vfwmul_vf_f32m1_rm_m(mask, op1, op2, __RISCV_FRM_RNE, vl);
}

vfloat32m2_t test_vfwmul_vv_f32m2_rm_m(vbool16_t mask, vfloat16m1_t op1, vfloat16m1_t op2, size_t vl) {
  return __riscv_vfwmul_vv_f32m2_rm_m(mask, op1, op2, __RISCV_FRM_RNE, vl);
}

vfloat32m2_t test_vfwmul_vf_f32m2_rm_m(vbool16_t mask, vfloat16m1_t op1, float16_t op2, size_t vl) {
  return __riscv_vfwmul_vf_f32m2_rm_m(mask, op1, op2, __RISCV_FRM_RNE, vl);
}

vfloat32m4_t test_vfwmul_vv_f32m4_rm_m(vbool8_t mask, vfloat16m2_t op1, vfloat16m2_t op2, size_t vl) {
  return __riscv_vfwmul_vv_f32m4_rm_m(mask, op1, op2, __RISCV_FRM_RNE, vl);
}

vfloat32m4_t test_vfwmul_vf_f32m4_rm_m(vbool8_t mask, vfloat16m2_t op1, float16_t op2, size_t vl) {
  return __riscv_vfwmul_vf_f32m4_rm_m(mask, op1, op2, __RISCV_FRM_RNE, vl);
}

vfloat32m8_t test_vfwmul_vv_f32m8_rm_m(vbool4_t mask, vfloat16m4_t op1, vfloat16m4_t op2, size_t vl) {
  return __riscv_vfwmul_vv_f32m8_rm_m(mask, op1, op2, __RISCV_FRM_RNE, vl);
}

vfloat32m8_t test_vfwmul_vf_f32m8_rm_m(vbool4_t mask, vfloat16m4_t op1, float16_t op2, size_t vl) {
  return __riscv_vfwmul_vf_f32m8_rm_m(mask, op1, op2, __RISCV_FRM_RNE, vl);
}

vfloat64m1_t test_vfwmul_vv_f64m1_rm_m(vbool64_t mask, vfloat32mf2_t op1, vfloat32mf2_t op2, size_t vl) {
  return __riscv_vfwmul_vv_f64m1_rm_m(mask, op1, op2, __RISCV_FRM_RNE, vl);
}

vfloat64m1_t test_vfwmul_vf_f64m1_rm_m(vbool64_t mask, vfloat32mf2_t op1, float32_t op2, size_t vl) {
  return __riscv_vfwmul_vf_f64m1_rm_m(mask, op1, op2, __RISCV_FRM_RNE, vl);
}

vfloat64m2_t test_vfwmul_vv_f64m2_rm_m(vbool32_t mask, vfloat32m1_t op1, vfloat32m1_t op2, size_t vl) {
  return __riscv_vfwmul_vv_f64m2_rm_m(mask, op1, op2, __RISCV_FRM_RNE, vl);
}

vfloat64m2_t test_vfwmul_vf_f64m2_rm_m(vbool32_t mask, vfloat32m1_t op1, float32_t op2, size_t vl) {
  return __riscv_vfwmul_vf_f64m2_rm_m(mask, op1, op2, __RISCV_FRM_RNE, vl);
}

vfloat64m4_t test_vfwmul_vv_f64m4_rm_m(vbool16_t mask, vfloat32m2_t op1, vfloat32m2_t op2, size_t vl) {
  return __riscv_vfwmul_vv_f64m4_rm_m(mask, op1, op2, __RISCV_FRM_RNE, vl);
}

vfloat64m4_t test_vfwmul_vf_f64m4_rm_m(vbool16_t mask, vfloat32m2_t op1, float32_t op2, size_t vl) {
  return __riscv_vfwmul_vf_f64m4_rm_m(mask, op1, op2, __RISCV_FRM_RNE, vl);
}

vfloat64m8_t test_vfwmul_vv_f64m8_rm_m(vbool8_t mask, vfloat32m4_t op1, vfloat32m4_t op2, size_t vl) {
  return __riscv_vfwmul_vv_f64m8_rm_m(mask, op1, op2, __RISCV_FRM_RNE, vl);
}

vfloat64m8_t test_vfwmul_vf_f64m8_rm_m(vbool8_t mask, vfloat32m4_t op1, float32_t op2, size_t vl) {
  return __riscv_vfwmul_vf_f64m8_rm_m(mask, op1, op2, __RISCV_FRM_RNE, vl);
}

/* { dg-final { scan-assembler-times {vseti?vli\s+[a-z0-9]+,\s*[a-z0-9]+,\s*e[0-9]+,\s*mf?[1248],\s*t[au],\s*m[au]\s+vfwmul\.[ivxfswum.]+\s+} 72 } } */
