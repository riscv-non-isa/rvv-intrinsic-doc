#include <stdint.h>
#include "rvv-v0p10-compatible-headers/non-policy.h"
#include "rvv-v0p10-compatible-headers/policy.h"
#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
vfloat16mf4_t test_vfslide1up_vf_f16mf4(vfloat16mf4_t src, float16_t value, size_t vl) {
  return vfslide1up_vf_f16mf4(src, value, vl);
}

vfloat16mf2_t test_vfslide1up_vf_f16mf2(vfloat16mf2_t src, float16_t value, size_t vl) {
  return vfslide1up_vf_f16mf2(src, value, vl);
}

vfloat16m1_t test_vfslide1up_vf_f16m1(vfloat16m1_t src, float16_t value, size_t vl) {
  return vfslide1up_vf_f16m1(src, value, vl);
}

vfloat16m2_t test_vfslide1up_vf_f16m2(vfloat16m2_t src, float16_t value, size_t vl) {
  return vfslide1up_vf_f16m2(src, value, vl);
}

vfloat16m4_t test_vfslide1up_vf_f16m4(vfloat16m4_t src, float16_t value, size_t vl) {
  return vfslide1up_vf_f16m4(src, value, vl);
}

vfloat16m8_t test_vfslide1up_vf_f16m8(vfloat16m8_t src, float16_t value, size_t vl) {
  return vfslide1up_vf_f16m8(src, value, vl);
}

vfloat32mf2_t test_vfslide1up_vf_f32mf2(vfloat32mf2_t src, float32_t value, size_t vl) {
  return vfslide1up_vf_f32mf2(src, value, vl);
}

vfloat32m1_t test_vfslide1up_vf_f32m1(vfloat32m1_t src, float32_t value, size_t vl) {
  return vfslide1up_vf_f32m1(src, value, vl);
}

vfloat32m2_t test_vfslide1up_vf_f32m2(vfloat32m2_t src, float32_t value, size_t vl) {
  return vfslide1up_vf_f32m2(src, value, vl);
}

vfloat32m4_t test_vfslide1up_vf_f32m4(vfloat32m4_t src, float32_t value, size_t vl) {
  return vfslide1up_vf_f32m4(src, value, vl);
}

vfloat32m8_t test_vfslide1up_vf_f32m8(vfloat32m8_t src, float32_t value, size_t vl) {
  return vfslide1up_vf_f32m8(src, value, vl);
}

vfloat64m1_t test_vfslide1up_vf_f64m1(vfloat64m1_t src, float64_t value, size_t vl) {
  return vfslide1up_vf_f64m1(src, value, vl);
}

vfloat64m2_t test_vfslide1up_vf_f64m2(vfloat64m2_t src, float64_t value, size_t vl) {
  return vfslide1up_vf_f64m2(src, value, vl);
}

vfloat64m4_t test_vfslide1up_vf_f64m4(vfloat64m4_t src, float64_t value, size_t vl) {
  return vfslide1up_vf_f64m4(src, value, vl);
}

vfloat64m8_t test_vfslide1up_vf_f64m8(vfloat64m8_t src, float64_t value, size_t vl) {
  return vfslide1up_vf_f64m8(src, value, vl);
}

vfloat16mf4_t test_vfslide1up_vf_f16mf4_m(vbool64_t mask, vfloat16mf4_t maskedoff, vfloat16mf4_t src, float16_t value, size_t vl) {
  return vfslide1up_vf_f16mf4_m(mask, maskedoff, src, value, vl);
}

vfloat16mf2_t test_vfslide1up_vf_f16mf2_m(vbool32_t mask, vfloat16mf2_t maskedoff, vfloat16mf2_t src, float16_t value, size_t vl) {
  return vfslide1up_vf_f16mf2_m(mask, maskedoff, src, value, vl);
}

vfloat16m1_t test_vfslide1up_vf_f16m1_m(vbool16_t mask, vfloat16m1_t maskedoff, vfloat16m1_t src, float16_t value, size_t vl) {
  return vfslide1up_vf_f16m1_m(mask, maskedoff, src, value, vl);
}

vfloat16m2_t test_vfslide1up_vf_f16m2_m(vbool8_t mask, vfloat16m2_t maskedoff, vfloat16m2_t src, float16_t value, size_t vl) {
  return vfslide1up_vf_f16m2_m(mask, maskedoff, src, value, vl);
}

vfloat16m4_t test_vfslide1up_vf_f16m4_m(vbool4_t mask, vfloat16m4_t maskedoff, vfloat16m4_t src, float16_t value, size_t vl) {
  return vfslide1up_vf_f16m4_m(mask, maskedoff, src, value, vl);
}

vfloat16m8_t test_vfslide1up_vf_f16m8_m(vbool2_t mask, vfloat16m8_t maskedoff, vfloat16m8_t src, float16_t value, size_t vl) {
  return vfslide1up_vf_f16m8_m(mask, maskedoff, src, value, vl);
}

vfloat32mf2_t test_vfslide1up_vf_f32mf2_m(vbool64_t mask, vfloat32mf2_t maskedoff, vfloat32mf2_t src, float32_t value, size_t vl) {
  return vfslide1up_vf_f32mf2_m(mask, maskedoff, src, value, vl);
}

vfloat32m1_t test_vfslide1up_vf_f32m1_m(vbool32_t mask, vfloat32m1_t maskedoff, vfloat32m1_t src, float32_t value, size_t vl) {
  return vfslide1up_vf_f32m1_m(mask, maskedoff, src, value, vl);
}

vfloat32m2_t test_vfslide1up_vf_f32m2_m(vbool16_t mask, vfloat32m2_t maskedoff, vfloat32m2_t src, float32_t value, size_t vl) {
  return vfslide1up_vf_f32m2_m(mask, maskedoff, src, value, vl);
}

vfloat32m4_t test_vfslide1up_vf_f32m4_m(vbool8_t mask, vfloat32m4_t maskedoff, vfloat32m4_t src, float32_t value, size_t vl) {
  return vfslide1up_vf_f32m4_m(mask, maskedoff, src, value, vl);
}

vfloat32m8_t test_vfslide1up_vf_f32m8_m(vbool4_t mask, vfloat32m8_t maskedoff, vfloat32m8_t src, float32_t value, size_t vl) {
  return vfslide1up_vf_f32m8_m(mask, maskedoff, src, value, vl);
}

vfloat64m1_t test_vfslide1up_vf_f64m1_m(vbool64_t mask, vfloat64m1_t maskedoff, vfloat64m1_t src, float64_t value, size_t vl) {
  return vfslide1up_vf_f64m1_m(mask, maskedoff, src, value, vl);
}

vfloat64m2_t test_vfslide1up_vf_f64m2_m(vbool32_t mask, vfloat64m2_t maskedoff, vfloat64m2_t src, float64_t value, size_t vl) {
  return vfslide1up_vf_f64m2_m(mask, maskedoff, src, value, vl);
}

vfloat64m4_t test_vfslide1up_vf_f64m4_m(vbool16_t mask, vfloat64m4_t maskedoff, vfloat64m4_t src, float64_t value, size_t vl) {
  return vfslide1up_vf_f64m4_m(mask, maskedoff, src, value, vl);
}

vfloat64m8_t test_vfslide1up_vf_f64m8_m(vbool8_t mask, vfloat64m8_t maskedoff, vfloat64m8_t src, float64_t value, size_t vl) {
  return vfslide1up_vf_f64m8_m(mask, maskedoff, src, value, vl);
}

