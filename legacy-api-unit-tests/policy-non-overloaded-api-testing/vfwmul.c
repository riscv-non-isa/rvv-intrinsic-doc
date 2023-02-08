#include <stdint.h>
#include "rvv-v0p10-compatible-headers/non-policy.h"
#include "rvv-v0p10-compatible-headers/policy.h"
#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
vfloat32mf2_t test_vfwmul_vv_f32mf2_tu(vfloat32mf2_t maskedoff, vfloat16mf4_t op1, vfloat16mf4_t op2, size_t vl) {
  return vfwmul_vv_f32mf2_tu(maskedoff, op1, op2, vl);
}

vfloat32mf2_t test_vfwmul_vf_f32mf2_tu(vfloat32mf2_t maskedoff, vfloat16mf4_t op1, float16_t op2, size_t vl) {
  return vfwmul_vf_f32mf2_tu(maskedoff, op1, op2, vl);
}

vfloat32m1_t test_vfwmul_vv_f32m1_tu(vfloat32m1_t maskedoff, vfloat16mf2_t op1, vfloat16mf2_t op2, size_t vl) {
  return vfwmul_vv_f32m1_tu(maskedoff, op1, op2, vl);
}

vfloat32m1_t test_vfwmul_vf_f32m1_tu(vfloat32m1_t maskedoff, vfloat16mf2_t op1, float16_t op2, size_t vl) {
  return vfwmul_vf_f32m1_tu(maskedoff, op1, op2, vl);
}

vfloat32m2_t test_vfwmul_vv_f32m2_tu(vfloat32m2_t maskedoff, vfloat16m1_t op1, vfloat16m1_t op2, size_t vl) {
  return vfwmul_vv_f32m2_tu(maskedoff, op1, op2, vl);
}

vfloat32m2_t test_vfwmul_vf_f32m2_tu(vfloat32m2_t maskedoff, vfloat16m1_t op1, float16_t op2, size_t vl) {
  return vfwmul_vf_f32m2_tu(maskedoff, op1, op2, vl);
}

vfloat32m4_t test_vfwmul_vv_f32m4_tu(vfloat32m4_t maskedoff, vfloat16m2_t op1, vfloat16m2_t op2, size_t vl) {
  return vfwmul_vv_f32m4_tu(maskedoff, op1, op2, vl);
}

vfloat32m4_t test_vfwmul_vf_f32m4_tu(vfloat32m4_t maskedoff, vfloat16m2_t op1, float16_t op2, size_t vl) {
  return vfwmul_vf_f32m4_tu(maskedoff, op1, op2, vl);
}

vfloat32m8_t test_vfwmul_vv_f32m8_tu(vfloat32m8_t maskedoff, vfloat16m4_t op1, vfloat16m4_t op2, size_t vl) {
  return vfwmul_vv_f32m8_tu(maskedoff, op1, op2, vl);
}

vfloat32m8_t test_vfwmul_vf_f32m8_tu(vfloat32m8_t maskedoff, vfloat16m4_t op1, float16_t op2, size_t vl) {
  return vfwmul_vf_f32m8_tu(maskedoff, op1, op2, vl);
}

vfloat64m1_t test_vfwmul_vv_f64m1_tu(vfloat64m1_t maskedoff, vfloat32mf2_t op1, vfloat32mf2_t op2, size_t vl) {
  return vfwmul_vv_f64m1_tu(maskedoff, op1, op2, vl);
}

vfloat64m1_t test_vfwmul_vf_f64m1_tu(vfloat64m1_t maskedoff, vfloat32mf2_t op1, float32_t op2, size_t vl) {
  return vfwmul_vf_f64m1_tu(maskedoff, op1, op2, vl);
}

vfloat64m2_t test_vfwmul_vv_f64m2_tu(vfloat64m2_t maskedoff, vfloat32m1_t op1, vfloat32m1_t op2, size_t vl) {
  return vfwmul_vv_f64m2_tu(maskedoff, op1, op2, vl);
}

vfloat64m2_t test_vfwmul_vf_f64m2_tu(vfloat64m2_t maskedoff, vfloat32m1_t op1, float32_t op2, size_t vl) {
  return vfwmul_vf_f64m2_tu(maskedoff, op1, op2, vl);
}

vfloat64m4_t test_vfwmul_vv_f64m4_tu(vfloat64m4_t maskedoff, vfloat32m2_t op1, vfloat32m2_t op2, size_t vl) {
  return vfwmul_vv_f64m4_tu(maskedoff, op1, op2, vl);
}

vfloat64m4_t test_vfwmul_vf_f64m4_tu(vfloat64m4_t maskedoff, vfloat32m2_t op1, float32_t op2, size_t vl) {
  return vfwmul_vf_f64m4_tu(maskedoff, op1, op2, vl);
}

vfloat64m8_t test_vfwmul_vv_f64m8_tu(vfloat64m8_t maskedoff, vfloat32m4_t op1, vfloat32m4_t op2, size_t vl) {
  return vfwmul_vv_f64m8_tu(maskedoff, op1, op2, vl);
}

vfloat64m8_t test_vfwmul_vf_f64m8_tu(vfloat64m8_t maskedoff, vfloat32m4_t op1, float32_t op2, size_t vl) {
  return vfwmul_vf_f64m8_tu(maskedoff, op1, op2, vl);
}

vfloat32mf2_t test_vfwmul_vv_f32mf2_ta(vfloat16mf4_t op1, vfloat16mf4_t op2, size_t vl) {
  return vfwmul_vv_f32mf2_ta(op1, op2, vl);
}

vfloat32mf2_t test_vfwmul_vf_f32mf2_ta(vfloat16mf4_t op1, float16_t op2, size_t vl) {
  return vfwmul_vf_f32mf2_ta(op1, op2, vl);
}

vfloat32m1_t test_vfwmul_vv_f32m1_ta(vfloat16mf2_t op1, vfloat16mf2_t op2, size_t vl) {
  return vfwmul_vv_f32m1_ta(op1, op2, vl);
}

vfloat32m1_t test_vfwmul_vf_f32m1_ta(vfloat16mf2_t op1, float16_t op2, size_t vl) {
  return vfwmul_vf_f32m1_ta(op1, op2, vl);
}

vfloat32m2_t test_vfwmul_vv_f32m2_ta(vfloat16m1_t op1, vfloat16m1_t op2, size_t vl) {
  return vfwmul_vv_f32m2_ta(op1, op2, vl);
}

vfloat32m2_t test_vfwmul_vf_f32m2_ta(vfloat16m1_t op1, float16_t op2, size_t vl) {
  return vfwmul_vf_f32m2_ta(op1, op2, vl);
}

vfloat32m4_t test_vfwmul_vv_f32m4_ta(vfloat16m2_t op1, vfloat16m2_t op2, size_t vl) {
  return vfwmul_vv_f32m4_ta(op1, op2, vl);
}

vfloat32m4_t test_vfwmul_vf_f32m4_ta(vfloat16m2_t op1, float16_t op2, size_t vl) {
  return vfwmul_vf_f32m4_ta(op1, op2, vl);
}

vfloat32m8_t test_vfwmul_vv_f32m8_ta(vfloat16m4_t op1, vfloat16m4_t op2, size_t vl) {
  return vfwmul_vv_f32m8_ta(op1, op2, vl);
}

vfloat32m8_t test_vfwmul_vf_f32m8_ta(vfloat16m4_t op1, float16_t op2, size_t vl) {
  return vfwmul_vf_f32m8_ta(op1, op2, vl);
}

vfloat64m1_t test_vfwmul_vv_f64m1_ta(vfloat32mf2_t op1, vfloat32mf2_t op2, size_t vl) {
  return vfwmul_vv_f64m1_ta(op1, op2, vl);
}

vfloat64m1_t test_vfwmul_vf_f64m1_ta(vfloat32mf2_t op1, float32_t op2, size_t vl) {
  return vfwmul_vf_f64m1_ta(op1, op2, vl);
}

vfloat64m2_t test_vfwmul_vv_f64m2_ta(vfloat32m1_t op1, vfloat32m1_t op2, size_t vl) {
  return vfwmul_vv_f64m2_ta(op1, op2, vl);
}

vfloat64m2_t test_vfwmul_vf_f64m2_ta(vfloat32m1_t op1, float32_t op2, size_t vl) {
  return vfwmul_vf_f64m2_ta(op1, op2, vl);
}

vfloat64m4_t test_vfwmul_vv_f64m4_ta(vfloat32m2_t op1, vfloat32m2_t op2, size_t vl) {
  return vfwmul_vv_f64m4_ta(op1, op2, vl);
}

vfloat64m4_t test_vfwmul_vf_f64m4_ta(vfloat32m2_t op1, float32_t op2, size_t vl) {
  return vfwmul_vf_f64m4_ta(op1, op2, vl);
}

vfloat64m8_t test_vfwmul_vv_f64m8_ta(vfloat32m4_t op1, vfloat32m4_t op2, size_t vl) {
  return vfwmul_vv_f64m8_ta(op1, op2, vl);
}

vfloat64m8_t test_vfwmul_vf_f64m8_ta(vfloat32m4_t op1, float32_t op2, size_t vl) {
  return vfwmul_vf_f64m8_ta(op1, op2, vl);
}

vfloat32mf2_t test_vfwmul_vv_f32mf2_tuma(vbool64_t mask, vfloat32mf2_t maskedoff, vfloat16mf4_t op1, vfloat16mf4_t op2, size_t vl) {
  return vfwmul_vv_f32mf2_tuma(mask, maskedoff, op1, op2, vl);
}

vfloat32mf2_t test_vfwmul_vf_f32mf2_tuma(vbool64_t mask, vfloat32mf2_t maskedoff, vfloat16mf4_t op1, float16_t op2, size_t vl) {
  return vfwmul_vf_f32mf2_tuma(mask, maskedoff, op1, op2, vl);
}

vfloat32m1_t test_vfwmul_vv_f32m1_tuma(vbool32_t mask, vfloat32m1_t maskedoff, vfloat16mf2_t op1, vfloat16mf2_t op2, size_t vl) {
  return vfwmul_vv_f32m1_tuma(mask, maskedoff, op1, op2, vl);
}

vfloat32m1_t test_vfwmul_vf_f32m1_tuma(vbool32_t mask, vfloat32m1_t maskedoff, vfloat16mf2_t op1, float16_t op2, size_t vl) {
  return vfwmul_vf_f32m1_tuma(mask, maskedoff, op1, op2, vl);
}

vfloat32m2_t test_vfwmul_vv_f32m2_tuma(vbool16_t mask, vfloat32m2_t maskedoff, vfloat16m1_t op1, vfloat16m1_t op2, size_t vl) {
  return vfwmul_vv_f32m2_tuma(mask, maskedoff, op1, op2, vl);
}

vfloat32m2_t test_vfwmul_vf_f32m2_tuma(vbool16_t mask, vfloat32m2_t maskedoff, vfloat16m1_t op1, float16_t op2, size_t vl) {
  return vfwmul_vf_f32m2_tuma(mask, maskedoff, op1, op2, vl);
}

vfloat32m4_t test_vfwmul_vv_f32m4_tuma(vbool8_t mask, vfloat32m4_t maskedoff, vfloat16m2_t op1, vfloat16m2_t op2, size_t vl) {
  return vfwmul_vv_f32m4_tuma(mask, maskedoff, op1, op2, vl);
}

vfloat32m4_t test_vfwmul_vf_f32m4_tuma(vbool8_t mask, vfloat32m4_t maskedoff, vfloat16m2_t op1, float16_t op2, size_t vl) {
  return vfwmul_vf_f32m4_tuma(mask, maskedoff, op1, op2, vl);
}

vfloat32m8_t test_vfwmul_vv_f32m8_tuma(vbool4_t mask, vfloat32m8_t maskedoff, vfloat16m4_t op1, vfloat16m4_t op2, size_t vl) {
  return vfwmul_vv_f32m8_tuma(mask, maskedoff, op1, op2, vl);
}

vfloat32m8_t test_vfwmul_vf_f32m8_tuma(vbool4_t mask, vfloat32m8_t maskedoff, vfloat16m4_t op1, float16_t op2, size_t vl) {
  return vfwmul_vf_f32m8_tuma(mask, maskedoff, op1, op2, vl);
}

vfloat64m1_t test_vfwmul_vv_f64m1_tuma(vbool64_t mask, vfloat64m1_t maskedoff, vfloat32mf2_t op1, vfloat32mf2_t op2, size_t vl) {
  return vfwmul_vv_f64m1_tuma(mask, maskedoff, op1, op2, vl);
}

vfloat64m1_t test_vfwmul_vf_f64m1_tuma(vbool64_t mask, vfloat64m1_t maskedoff, vfloat32mf2_t op1, float32_t op2, size_t vl) {
  return vfwmul_vf_f64m1_tuma(mask, maskedoff, op1, op2, vl);
}

vfloat64m2_t test_vfwmul_vv_f64m2_tuma(vbool32_t mask, vfloat64m2_t maskedoff, vfloat32m1_t op1, vfloat32m1_t op2, size_t vl) {
  return vfwmul_vv_f64m2_tuma(mask, maskedoff, op1, op2, vl);
}

vfloat64m2_t test_vfwmul_vf_f64m2_tuma(vbool32_t mask, vfloat64m2_t maskedoff, vfloat32m1_t op1, float32_t op2, size_t vl) {
  return vfwmul_vf_f64m2_tuma(mask, maskedoff, op1, op2, vl);
}

vfloat64m4_t test_vfwmul_vv_f64m4_tuma(vbool16_t mask, vfloat64m4_t maskedoff, vfloat32m2_t op1, vfloat32m2_t op2, size_t vl) {
  return vfwmul_vv_f64m4_tuma(mask, maskedoff, op1, op2, vl);
}

vfloat64m4_t test_vfwmul_vf_f64m4_tuma(vbool16_t mask, vfloat64m4_t maskedoff, vfloat32m2_t op1, float32_t op2, size_t vl) {
  return vfwmul_vf_f64m4_tuma(mask, maskedoff, op1, op2, vl);
}

vfloat64m8_t test_vfwmul_vv_f64m8_tuma(vbool8_t mask, vfloat64m8_t maskedoff, vfloat32m4_t op1, vfloat32m4_t op2, size_t vl) {
  return vfwmul_vv_f64m8_tuma(mask, maskedoff, op1, op2, vl);
}

vfloat64m8_t test_vfwmul_vf_f64m8_tuma(vbool8_t mask, vfloat64m8_t maskedoff, vfloat32m4_t op1, float32_t op2, size_t vl) {
  return vfwmul_vf_f64m8_tuma(mask, maskedoff, op1, op2, vl);
}

vfloat32mf2_t test_vfwmul_vv_f32mf2_tumu(vbool64_t mask, vfloat32mf2_t maskedoff, vfloat16mf4_t op1, vfloat16mf4_t op2, size_t vl) {
  return vfwmul_vv_f32mf2_tumu(mask, maskedoff, op1, op2, vl);
}

vfloat32mf2_t test_vfwmul_vf_f32mf2_tumu(vbool64_t mask, vfloat32mf2_t maskedoff, vfloat16mf4_t op1, float16_t op2, size_t vl) {
  return vfwmul_vf_f32mf2_tumu(mask, maskedoff, op1, op2, vl);
}

vfloat32m1_t test_vfwmul_vv_f32m1_tumu(vbool32_t mask, vfloat32m1_t maskedoff, vfloat16mf2_t op1, vfloat16mf2_t op2, size_t vl) {
  return vfwmul_vv_f32m1_tumu(mask, maskedoff, op1, op2, vl);
}

vfloat32m1_t test_vfwmul_vf_f32m1_tumu(vbool32_t mask, vfloat32m1_t maskedoff, vfloat16mf2_t op1, float16_t op2, size_t vl) {
  return vfwmul_vf_f32m1_tumu(mask, maskedoff, op1, op2, vl);
}

vfloat32m2_t test_vfwmul_vv_f32m2_tumu(vbool16_t mask, vfloat32m2_t maskedoff, vfloat16m1_t op1, vfloat16m1_t op2, size_t vl) {
  return vfwmul_vv_f32m2_tumu(mask, maskedoff, op1, op2, vl);
}

vfloat32m2_t test_vfwmul_vf_f32m2_tumu(vbool16_t mask, vfloat32m2_t maskedoff, vfloat16m1_t op1, float16_t op2, size_t vl) {
  return vfwmul_vf_f32m2_tumu(mask, maskedoff, op1, op2, vl);
}

vfloat32m4_t test_vfwmul_vv_f32m4_tumu(vbool8_t mask, vfloat32m4_t maskedoff, vfloat16m2_t op1, vfloat16m2_t op2, size_t vl) {
  return vfwmul_vv_f32m4_tumu(mask, maskedoff, op1, op2, vl);
}

vfloat32m4_t test_vfwmul_vf_f32m4_tumu(vbool8_t mask, vfloat32m4_t maskedoff, vfloat16m2_t op1, float16_t op2, size_t vl) {
  return vfwmul_vf_f32m4_tumu(mask, maskedoff, op1, op2, vl);
}

vfloat32m8_t test_vfwmul_vv_f32m8_tumu(vbool4_t mask, vfloat32m8_t maskedoff, vfloat16m4_t op1, vfloat16m4_t op2, size_t vl) {
  return vfwmul_vv_f32m8_tumu(mask, maskedoff, op1, op2, vl);
}

vfloat32m8_t test_vfwmul_vf_f32m8_tumu(vbool4_t mask, vfloat32m8_t maskedoff, vfloat16m4_t op1, float16_t op2, size_t vl) {
  return vfwmul_vf_f32m8_tumu(mask, maskedoff, op1, op2, vl);
}

vfloat64m1_t test_vfwmul_vv_f64m1_tumu(vbool64_t mask, vfloat64m1_t maskedoff, vfloat32mf2_t op1, vfloat32mf2_t op2, size_t vl) {
  return vfwmul_vv_f64m1_tumu(mask, maskedoff, op1, op2, vl);
}

vfloat64m1_t test_vfwmul_vf_f64m1_tumu(vbool64_t mask, vfloat64m1_t maskedoff, vfloat32mf2_t op1, float32_t op2, size_t vl) {
  return vfwmul_vf_f64m1_tumu(mask, maskedoff, op1, op2, vl);
}

vfloat64m2_t test_vfwmul_vv_f64m2_tumu(vbool32_t mask, vfloat64m2_t maskedoff, vfloat32m1_t op1, vfloat32m1_t op2, size_t vl) {
  return vfwmul_vv_f64m2_tumu(mask, maskedoff, op1, op2, vl);
}

vfloat64m2_t test_vfwmul_vf_f64m2_tumu(vbool32_t mask, vfloat64m2_t maskedoff, vfloat32m1_t op1, float32_t op2, size_t vl) {
  return vfwmul_vf_f64m2_tumu(mask, maskedoff, op1, op2, vl);
}

vfloat64m4_t test_vfwmul_vv_f64m4_tumu(vbool16_t mask, vfloat64m4_t maskedoff, vfloat32m2_t op1, vfloat32m2_t op2, size_t vl) {
  return vfwmul_vv_f64m4_tumu(mask, maskedoff, op1, op2, vl);
}

vfloat64m4_t test_vfwmul_vf_f64m4_tumu(vbool16_t mask, vfloat64m4_t maskedoff, vfloat32m2_t op1, float32_t op2, size_t vl) {
  return vfwmul_vf_f64m4_tumu(mask, maskedoff, op1, op2, vl);
}

vfloat64m8_t test_vfwmul_vv_f64m8_tumu(vbool8_t mask, vfloat64m8_t maskedoff, vfloat32m4_t op1, vfloat32m4_t op2, size_t vl) {
  return vfwmul_vv_f64m8_tumu(mask, maskedoff, op1, op2, vl);
}

vfloat64m8_t test_vfwmul_vf_f64m8_tumu(vbool8_t mask, vfloat64m8_t maskedoff, vfloat32m4_t op1, float32_t op2, size_t vl) {
  return vfwmul_vf_f64m8_tumu(mask, maskedoff, op1, op2, vl);
}

vfloat32mf2_t test_vfwmul_vv_f32mf2_tama(vbool64_t mask, vfloat16mf4_t op1, vfloat16mf4_t op2, size_t vl) {
  return vfwmul_vv_f32mf2_tama(mask, op1, op2, vl);
}

vfloat32mf2_t test_vfwmul_vf_f32mf2_tama(vbool64_t mask, vfloat16mf4_t op1, float16_t op2, size_t vl) {
  return vfwmul_vf_f32mf2_tama(mask, op1, op2, vl);
}

vfloat32m1_t test_vfwmul_vv_f32m1_tama(vbool32_t mask, vfloat16mf2_t op1, vfloat16mf2_t op2, size_t vl) {
  return vfwmul_vv_f32m1_tama(mask, op1, op2, vl);
}

vfloat32m1_t test_vfwmul_vf_f32m1_tama(vbool32_t mask, vfloat16mf2_t op1, float16_t op2, size_t vl) {
  return vfwmul_vf_f32m1_tama(mask, op1, op2, vl);
}

vfloat32m2_t test_vfwmul_vv_f32m2_tama(vbool16_t mask, vfloat16m1_t op1, vfloat16m1_t op2, size_t vl) {
  return vfwmul_vv_f32m2_tama(mask, op1, op2, vl);
}

vfloat32m2_t test_vfwmul_vf_f32m2_tama(vbool16_t mask, vfloat16m1_t op1, float16_t op2, size_t vl) {
  return vfwmul_vf_f32m2_tama(mask, op1, op2, vl);
}

vfloat32m4_t test_vfwmul_vv_f32m4_tama(vbool8_t mask, vfloat16m2_t op1, vfloat16m2_t op2, size_t vl) {
  return vfwmul_vv_f32m4_tama(mask, op1, op2, vl);
}

vfloat32m4_t test_vfwmul_vf_f32m4_tama(vbool8_t mask, vfloat16m2_t op1, float16_t op2, size_t vl) {
  return vfwmul_vf_f32m4_tama(mask, op1, op2, vl);
}

vfloat32m8_t test_vfwmul_vv_f32m8_tama(vbool4_t mask, vfloat16m4_t op1, vfloat16m4_t op2, size_t vl) {
  return vfwmul_vv_f32m8_tama(mask, op1, op2, vl);
}

vfloat32m8_t test_vfwmul_vf_f32m8_tama(vbool4_t mask, vfloat16m4_t op1, float16_t op2, size_t vl) {
  return vfwmul_vf_f32m8_tama(mask, op1, op2, vl);
}

vfloat64m1_t test_vfwmul_vv_f64m1_tama(vbool64_t mask, vfloat32mf2_t op1, vfloat32mf2_t op2, size_t vl) {
  return vfwmul_vv_f64m1_tama(mask, op1, op2, vl);
}

vfloat64m1_t test_vfwmul_vf_f64m1_tama(vbool64_t mask, vfloat32mf2_t op1, float32_t op2, size_t vl) {
  return vfwmul_vf_f64m1_tama(mask, op1, op2, vl);
}

vfloat64m2_t test_vfwmul_vv_f64m2_tama(vbool32_t mask, vfloat32m1_t op1, vfloat32m1_t op2, size_t vl) {
  return vfwmul_vv_f64m2_tama(mask, op1, op2, vl);
}

vfloat64m2_t test_vfwmul_vf_f64m2_tama(vbool32_t mask, vfloat32m1_t op1, float32_t op2, size_t vl) {
  return vfwmul_vf_f64m2_tama(mask, op1, op2, vl);
}

vfloat64m4_t test_vfwmul_vv_f64m4_tama(vbool16_t mask, vfloat32m2_t op1, vfloat32m2_t op2, size_t vl) {
  return vfwmul_vv_f64m4_tama(mask, op1, op2, vl);
}

vfloat64m4_t test_vfwmul_vf_f64m4_tama(vbool16_t mask, vfloat32m2_t op1, float32_t op2, size_t vl) {
  return vfwmul_vf_f64m4_tama(mask, op1, op2, vl);
}

vfloat64m8_t test_vfwmul_vv_f64m8_tama(vbool8_t mask, vfloat32m4_t op1, vfloat32m4_t op2, size_t vl) {
  return vfwmul_vv_f64m8_tama(mask, op1, op2, vl);
}

vfloat64m8_t test_vfwmul_vf_f64m8_tama(vbool8_t mask, vfloat32m4_t op1, float32_t op2, size_t vl) {
  return vfwmul_vf_f64m8_tama(mask, op1, op2, vl);
}

vfloat32mf2_t test_vfwmul_vv_f32mf2_tamu(vbool64_t mask, vfloat32mf2_t maskedoff, vfloat16mf4_t op1, vfloat16mf4_t op2, size_t vl) {
  return vfwmul_vv_f32mf2_tamu(mask, maskedoff, op1, op2, vl);
}

vfloat32mf2_t test_vfwmul_vf_f32mf2_tamu(vbool64_t mask, vfloat32mf2_t maskedoff, vfloat16mf4_t op1, float16_t op2, size_t vl) {
  return vfwmul_vf_f32mf2_tamu(mask, maskedoff, op1, op2, vl);
}

vfloat32m1_t test_vfwmul_vv_f32m1_tamu(vbool32_t mask, vfloat32m1_t maskedoff, vfloat16mf2_t op1, vfloat16mf2_t op2, size_t vl) {
  return vfwmul_vv_f32m1_tamu(mask, maskedoff, op1, op2, vl);
}

vfloat32m1_t test_vfwmul_vf_f32m1_tamu(vbool32_t mask, vfloat32m1_t maskedoff, vfloat16mf2_t op1, float16_t op2, size_t vl) {
  return vfwmul_vf_f32m1_tamu(mask, maskedoff, op1, op2, vl);
}

vfloat32m2_t test_vfwmul_vv_f32m2_tamu(vbool16_t mask, vfloat32m2_t maskedoff, vfloat16m1_t op1, vfloat16m1_t op2, size_t vl) {
  return vfwmul_vv_f32m2_tamu(mask, maskedoff, op1, op2, vl);
}

vfloat32m2_t test_vfwmul_vf_f32m2_tamu(vbool16_t mask, vfloat32m2_t maskedoff, vfloat16m1_t op1, float16_t op2, size_t vl) {
  return vfwmul_vf_f32m2_tamu(mask, maskedoff, op1, op2, vl);
}

vfloat32m4_t test_vfwmul_vv_f32m4_tamu(vbool8_t mask, vfloat32m4_t maskedoff, vfloat16m2_t op1, vfloat16m2_t op2, size_t vl) {
  return vfwmul_vv_f32m4_tamu(mask, maskedoff, op1, op2, vl);
}

vfloat32m4_t test_vfwmul_vf_f32m4_tamu(vbool8_t mask, vfloat32m4_t maskedoff, vfloat16m2_t op1, float16_t op2, size_t vl) {
  return vfwmul_vf_f32m4_tamu(mask, maskedoff, op1, op2, vl);
}

vfloat32m8_t test_vfwmul_vv_f32m8_tamu(vbool4_t mask, vfloat32m8_t maskedoff, vfloat16m4_t op1, vfloat16m4_t op2, size_t vl) {
  return vfwmul_vv_f32m8_tamu(mask, maskedoff, op1, op2, vl);
}

vfloat32m8_t test_vfwmul_vf_f32m8_tamu(vbool4_t mask, vfloat32m8_t maskedoff, vfloat16m4_t op1, float16_t op2, size_t vl) {
  return vfwmul_vf_f32m8_tamu(mask, maskedoff, op1, op2, vl);
}

vfloat64m1_t test_vfwmul_vv_f64m1_tamu(vbool64_t mask, vfloat64m1_t maskedoff, vfloat32mf2_t op1, vfloat32mf2_t op2, size_t vl) {
  return vfwmul_vv_f64m1_tamu(mask, maskedoff, op1, op2, vl);
}

vfloat64m1_t test_vfwmul_vf_f64m1_tamu(vbool64_t mask, vfloat64m1_t maskedoff, vfloat32mf2_t op1, float32_t op2, size_t vl) {
  return vfwmul_vf_f64m1_tamu(mask, maskedoff, op1, op2, vl);
}

vfloat64m2_t test_vfwmul_vv_f64m2_tamu(vbool32_t mask, vfloat64m2_t maskedoff, vfloat32m1_t op1, vfloat32m1_t op2, size_t vl) {
  return vfwmul_vv_f64m2_tamu(mask, maskedoff, op1, op2, vl);
}

vfloat64m2_t test_vfwmul_vf_f64m2_tamu(vbool32_t mask, vfloat64m2_t maskedoff, vfloat32m1_t op1, float32_t op2, size_t vl) {
  return vfwmul_vf_f64m2_tamu(mask, maskedoff, op1, op2, vl);
}

vfloat64m4_t test_vfwmul_vv_f64m4_tamu(vbool16_t mask, vfloat64m4_t maskedoff, vfloat32m2_t op1, vfloat32m2_t op2, size_t vl) {
  return vfwmul_vv_f64m4_tamu(mask, maskedoff, op1, op2, vl);
}

vfloat64m4_t test_vfwmul_vf_f64m4_tamu(vbool16_t mask, vfloat64m4_t maskedoff, vfloat32m2_t op1, float32_t op2, size_t vl) {
  return vfwmul_vf_f64m4_tamu(mask, maskedoff, op1, op2, vl);
}

vfloat64m8_t test_vfwmul_vv_f64m8_tamu(vbool8_t mask, vfloat64m8_t maskedoff, vfloat32m4_t op1, vfloat32m4_t op2, size_t vl) {
  return vfwmul_vv_f64m8_tamu(mask, maskedoff, op1, op2, vl);
}

vfloat64m8_t test_vfwmul_vf_f64m8_tamu(vbool8_t mask, vfloat64m8_t maskedoff, vfloat32m4_t op1, float32_t op2, size_t vl) {
  return vfwmul_vf_f64m8_tamu(mask, maskedoff, op1, op2, vl);
}

