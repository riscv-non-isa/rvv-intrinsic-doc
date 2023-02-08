#include <stdint.h>
#include "rvv-v0p10-compatible-headers/non-policy.h"
#include "rvv-v0p10-compatible-headers/policy.h"
#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
vfloat16mf4_t test_vfnmadd_vv_f16mf4_tu(vfloat16mf4_t vd, vfloat16mf4_t vs1, vfloat16mf4_t vs2, size_t vl) {
  return vfnmadd_vv_f16mf4_tu(vd, vs1, vs2, vl);
}

vfloat16mf4_t test_vfnmadd_vf_f16mf4_tu(vfloat16mf4_t vd, float16_t rs1, vfloat16mf4_t vs2, size_t vl) {
  return vfnmadd_vf_f16mf4_tu(vd, rs1, vs2, vl);
}

vfloat16mf2_t test_vfnmadd_vv_f16mf2_tu(vfloat16mf2_t vd, vfloat16mf2_t vs1, vfloat16mf2_t vs2, size_t vl) {
  return vfnmadd_vv_f16mf2_tu(vd, vs1, vs2, vl);
}

vfloat16mf2_t test_vfnmadd_vf_f16mf2_tu(vfloat16mf2_t vd, float16_t rs1, vfloat16mf2_t vs2, size_t vl) {
  return vfnmadd_vf_f16mf2_tu(vd, rs1, vs2, vl);
}

vfloat16m1_t test_vfnmadd_vv_f16m1_tu(vfloat16m1_t vd, vfloat16m1_t vs1, vfloat16m1_t vs2, size_t vl) {
  return vfnmadd_vv_f16m1_tu(vd, vs1, vs2, vl);
}

vfloat16m1_t test_vfnmadd_vf_f16m1_tu(vfloat16m1_t vd, float16_t rs1, vfloat16m1_t vs2, size_t vl) {
  return vfnmadd_vf_f16m1_tu(vd, rs1, vs2, vl);
}

vfloat16m2_t test_vfnmadd_vv_f16m2_tu(vfloat16m2_t vd, vfloat16m2_t vs1, vfloat16m2_t vs2, size_t vl) {
  return vfnmadd_vv_f16m2_tu(vd, vs1, vs2, vl);
}

vfloat16m2_t test_vfnmadd_vf_f16m2_tu(vfloat16m2_t vd, float16_t rs1, vfloat16m2_t vs2, size_t vl) {
  return vfnmadd_vf_f16m2_tu(vd, rs1, vs2, vl);
}

vfloat16m4_t test_vfnmadd_vv_f16m4_tu(vfloat16m4_t vd, vfloat16m4_t vs1, vfloat16m4_t vs2, size_t vl) {
  return vfnmadd_vv_f16m4_tu(vd, vs1, vs2, vl);
}

vfloat16m4_t test_vfnmadd_vf_f16m4_tu(vfloat16m4_t vd, float16_t rs1, vfloat16m4_t vs2, size_t vl) {
  return vfnmadd_vf_f16m4_tu(vd, rs1, vs2, vl);
}

vfloat16m8_t test_vfnmadd_vv_f16m8_tu(vfloat16m8_t vd, vfloat16m8_t vs1, vfloat16m8_t vs2, size_t vl) {
  return vfnmadd_vv_f16m8_tu(vd, vs1, vs2, vl);
}

vfloat16m8_t test_vfnmadd_vf_f16m8_tu(vfloat16m8_t vd, float16_t rs1, vfloat16m8_t vs2, size_t vl) {
  return vfnmadd_vf_f16m8_tu(vd, rs1, vs2, vl);
}

vfloat32mf2_t test_vfnmadd_vv_f32mf2_tu(vfloat32mf2_t vd, vfloat32mf2_t vs1, vfloat32mf2_t vs2, size_t vl) {
  return vfnmadd_vv_f32mf2_tu(vd, vs1, vs2, vl);
}

vfloat32mf2_t test_vfnmadd_vf_f32mf2_tu(vfloat32mf2_t vd, float32_t rs1, vfloat32mf2_t vs2, size_t vl) {
  return vfnmadd_vf_f32mf2_tu(vd, rs1, vs2, vl);
}

vfloat32m1_t test_vfnmadd_vv_f32m1_tu(vfloat32m1_t vd, vfloat32m1_t vs1, vfloat32m1_t vs2, size_t vl) {
  return vfnmadd_vv_f32m1_tu(vd, vs1, vs2, vl);
}

vfloat32m1_t test_vfnmadd_vf_f32m1_tu(vfloat32m1_t vd, float32_t rs1, vfloat32m1_t vs2, size_t vl) {
  return vfnmadd_vf_f32m1_tu(vd, rs1, vs2, vl);
}

vfloat32m2_t test_vfnmadd_vv_f32m2_tu(vfloat32m2_t vd, vfloat32m2_t vs1, vfloat32m2_t vs2, size_t vl) {
  return vfnmadd_vv_f32m2_tu(vd, vs1, vs2, vl);
}

vfloat32m2_t test_vfnmadd_vf_f32m2_tu(vfloat32m2_t vd, float32_t rs1, vfloat32m2_t vs2, size_t vl) {
  return vfnmadd_vf_f32m2_tu(vd, rs1, vs2, vl);
}

vfloat32m4_t test_vfnmadd_vv_f32m4_tu(vfloat32m4_t vd, vfloat32m4_t vs1, vfloat32m4_t vs2, size_t vl) {
  return vfnmadd_vv_f32m4_tu(vd, vs1, vs2, vl);
}

vfloat32m4_t test_vfnmadd_vf_f32m4_tu(vfloat32m4_t vd, float32_t rs1, vfloat32m4_t vs2, size_t vl) {
  return vfnmadd_vf_f32m4_tu(vd, rs1, vs2, vl);
}

vfloat32m8_t test_vfnmadd_vv_f32m8_tu(vfloat32m8_t vd, vfloat32m8_t vs1, vfloat32m8_t vs2, size_t vl) {
  return vfnmadd_vv_f32m8_tu(vd, vs1, vs2, vl);
}

vfloat32m8_t test_vfnmadd_vf_f32m8_tu(vfloat32m8_t vd, float32_t rs1, vfloat32m8_t vs2, size_t vl) {
  return vfnmadd_vf_f32m8_tu(vd, rs1, vs2, vl);
}

vfloat64m1_t test_vfnmadd_vv_f64m1_tu(vfloat64m1_t vd, vfloat64m1_t vs1, vfloat64m1_t vs2, size_t vl) {
  return vfnmadd_vv_f64m1_tu(vd, vs1, vs2, vl);
}

vfloat64m1_t test_vfnmadd_vf_f64m1_tu(vfloat64m1_t vd, float64_t rs1, vfloat64m1_t vs2, size_t vl) {
  return vfnmadd_vf_f64m1_tu(vd, rs1, vs2, vl);
}

vfloat64m2_t test_vfnmadd_vv_f64m2_tu(vfloat64m2_t vd, vfloat64m2_t vs1, vfloat64m2_t vs2, size_t vl) {
  return vfnmadd_vv_f64m2_tu(vd, vs1, vs2, vl);
}

vfloat64m2_t test_vfnmadd_vf_f64m2_tu(vfloat64m2_t vd, float64_t rs1, vfloat64m2_t vs2, size_t vl) {
  return vfnmadd_vf_f64m2_tu(vd, rs1, vs2, vl);
}

vfloat64m4_t test_vfnmadd_vv_f64m4_tu(vfloat64m4_t vd, vfloat64m4_t vs1, vfloat64m4_t vs2, size_t vl) {
  return vfnmadd_vv_f64m4_tu(vd, vs1, vs2, vl);
}

vfloat64m4_t test_vfnmadd_vf_f64m4_tu(vfloat64m4_t vd, float64_t rs1, vfloat64m4_t vs2, size_t vl) {
  return vfnmadd_vf_f64m4_tu(vd, rs1, vs2, vl);
}

vfloat64m8_t test_vfnmadd_vv_f64m8_tu(vfloat64m8_t vd, vfloat64m8_t vs1, vfloat64m8_t vs2, size_t vl) {
  return vfnmadd_vv_f64m8_tu(vd, vs1, vs2, vl);
}

vfloat64m8_t test_vfnmadd_vf_f64m8_tu(vfloat64m8_t vd, float64_t rs1, vfloat64m8_t vs2, size_t vl) {
  return vfnmadd_vf_f64m8_tu(vd, rs1, vs2, vl);
}

vfloat16mf4_t test_vfnmadd_vv_f16mf4_ta(vfloat16mf4_t vd, vfloat16mf4_t vs1, vfloat16mf4_t vs2, size_t vl) {
  return vfnmadd_vv_f16mf4_ta(vd, vs1, vs2, vl);
}

vfloat16mf4_t test_vfnmadd_vf_f16mf4_ta(vfloat16mf4_t vd, float16_t rs1, vfloat16mf4_t vs2, size_t vl) {
  return vfnmadd_vf_f16mf4_ta(vd, rs1, vs2, vl);
}

vfloat16mf2_t test_vfnmadd_vv_f16mf2_ta(vfloat16mf2_t vd, vfloat16mf2_t vs1, vfloat16mf2_t vs2, size_t vl) {
  return vfnmadd_vv_f16mf2_ta(vd, vs1, vs2, vl);
}

vfloat16mf2_t test_vfnmadd_vf_f16mf2_ta(vfloat16mf2_t vd, float16_t rs1, vfloat16mf2_t vs2, size_t vl) {
  return vfnmadd_vf_f16mf2_ta(vd, rs1, vs2, vl);
}

vfloat16m1_t test_vfnmadd_vv_f16m1_ta(vfloat16m1_t vd, vfloat16m1_t vs1, vfloat16m1_t vs2, size_t vl) {
  return vfnmadd_vv_f16m1_ta(vd, vs1, vs2, vl);
}

vfloat16m1_t test_vfnmadd_vf_f16m1_ta(vfloat16m1_t vd, float16_t rs1, vfloat16m1_t vs2, size_t vl) {
  return vfnmadd_vf_f16m1_ta(vd, rs1, vs2, vl);
}

vfloat16m2_t test_vfnmadd_vv_f16m2_ta(vfloat16m2_t vd, vfloat16m2_t vs1, vfloat16m2_t vs2, size_t vl) {
  return vfnmadd_vv_f16m2_ta(vd, vs1, vs2, vl);
}

vfloat16m2_t test_vfnmadd_vf_f16m2_ta(vfloat16m2_t vd, float16_t rs1, vfloat16m2_t vs2, size_t vl) {
  return vfnmadd_vf_f16m2_ta(vd, rs1, vs2, vl);
}

vfloat16m4_t test_vfnmadd_vv_f16m4_ta(vfloat16m4_t vd, vfloat16m4_t vs1, vfloat16m4_t vs2, size_t vl) {
  return vfnmadd_vv_f16m4_ta(vd, vs1, vs2, vl);
}

vfloat16m4_t test_vfnmadd_vf_f16m4_ta(vfloat16m4_t vd, float16_t rs1, vfloat16m4_t vs2, size_t vl) {
  return vfnmadd_vf_f16m4_ta(vd, rs1, vs2, vl);
}

vfloat16m8_t test_vfnmadd_vv_f16m8_ta(vfloat16m8_t vd, vfloat16m8_t vs1, vfloat16m8_t vs2, size_t vl) {
  return vfnmadd_vv_f16m8_ta(vd, vs1, vs2, vl);
}

vfloat16m8_t test_vfnmadd_vf_f16m8_ta(vfloat16m8_t vd, float16_t rs1, vfloat16m8_t vs2, size_t vl) {
  return vfnmadd_vf_f16m8_ta(vd, rs1, vs2, vl);
}

vfloat32mf2_t test_vfnmadd_vv_f32mf2_ta(vfloat32mf2_t vd, vfloat32mf2_t vs1, vfloat32mf2_t vs2, size_t vl) {
  return vfnmadd_vv_f32mf2_ta(vd, vs1, vs2, vl);
}

vfloat32mf2_t test_vfnmadd_vf_f32mf2_ta(vfloat32mf2_t vd, float32_t rs1, vfloat32mf2_t vs2, size_t vl) {
  return vfnmadd_vf_f32mf2_ta(vd, rs1, vs2, vl);
}

vfloat32m1_t test_vfnmadd_vv_f32m1_ta(vfloat32m1_t vd, vfloat32m1_t vs1, vfloat32m1_t vs2, size_t vl) {
  return vfnmadd_vv_f32m1_ta(vd, vs1, vs2, vl);
}

vfloat32m1_t test_vfnmadd_vf_f32m1_ta(vfloat32m1_t vd, float32_t rs1, vfloat32m1_t vs2, size_t vl) {
  return vfnmadd_vf_f32m1_ta(vd, rs1, vs2, vl);
}

vfloat32m2_t test_vfnmadd_vv_f32m2_ta(vfloat32m2_t vd, vfloat32m2_t vs1, vfloat32m2_t vs2, size_t vl) {
  return vfnmadd_vv_f32m2_ta(vd, vs1, vs2, vl);
}

vfloat32m2_t test_vfnmadd_vf_f32m2_ta(vfloat32m2_t vd, float32_t rs1, vfloat32m2_t vs2, size_t vl) {
  return vfnmadd_vf_f32m2_ta(vd, rs1, vs2, vl);
}

vfloat32m4_t test_vfnmadd_vv_f32m4_ta(vfloat32m4_t vd, vfloat32m4_t vs1, vfloat32m4_t vs2, size_t vl) {
  return vfnmadd_vv_f32m4_ta(vd, vs1, vs2, vl);
}

vfloat32m4_t test_vfnmadd_vf_f32m4_ta(vfloat32m4_t vd, float32_t rs1, vfloat32m4_t vs2, size_t vl) {
  return vfnmadd_vf_f32m4_ta(vd, rs1, vs2, vl);
}

vfloat32m8_t test_vfnmadd_vv_f32m8_ta(vfloat32m8_t vd, vfloat32m8_t vs1, vfloat32m8_t vs2, size_t vl) {
  return vfnmadd_vv_f32m8_ta(vd, vs1, vs2, vl);
}

vfloat32m8_t test_vfnmadd_vf_f32m8_ta(vfloat32m8_t vd, float32_t rs1, vfloat32m8_t vs2, size_t vl) {
  return vfnmadd_vf_f32m8_ta(vd, rs1, vs2, vl);
}

vfloat64m1_t test_vfnmadd_vv_f64m1_ta(vfloat64m1_t vd, vfloat64m1_t vs1, vfloat64m1_t vs2, size_t vl) {
  return vfnmadd_vv_f64m1_ta(vd, vs1, vs2, vl);
}

vfloat64m1_t test_vfnmadd_vf_f64m1_ta(vfloat64m1_t vd, float64_t rs1, vfloat64m1_t vs2, size_t vl) {
  return vfnmadd_vf_f64m1_ta(vd, rs1, vs2, vl);
}

vfloat64m2_t test_vfnmadd_vv_f64m2_ta(vfloat64m2_t vd, vfloat64m2_t vs1, vfloat64m2_t vs2, size_t vl) {
  return vfnmadd_vv_f64m2_ta(vd, vs1, vs2, vl);
}

vfloat64m2_t test_vfnmadd_vf_f64m2_ta(vfloat64m2_t vd, float64_t rs1, vfloat64m2_t vs2, size_t vl) {
  return vfnmadd_vf_f64m2_ta(vd, rs1, vs2, vl);
}

vfloat64m4_t test_vfnmadd_vv_f64m4_ta(vfloat64m4_t vd, vfloat64m4_t vs1, vfloat64m4_t vs2, size_t vl) {
  return vfnmadd_vv_f64m4_ta(vd, vs1, vs2, vl);
}

vfloat64m4_t test_vfnmadd_vf_f64m4_ta(vfloat64m4_t vd, float64_t rs1, vfloat64m4_t vs2, size_t vl) {
  return vfnmadd_vf_f64m4_ta(vd, rs1, vs2, vl);
}

vfloat64m8_t test_vfnmadd_vv_f64m8_ta(vfloat64m8_t vd, vfloat64m8_t vs1, vfloat64m8_t vs2, size_t vl) {
  return vfnmadd_vv_f64m8_ta(vd, vs1, vs2, vl);
}

vfloat64m8_t test_vfnmadd_vf_f64m8_ta(vfloat64m8_t vd, float64_t rs1, vfloat64m8_t vs2, size_t vl) {
  return vfnmadd_vf_f64m8_ta(vd, rs1, vs2, vl);
}

vfloat16mf4_t test_vfnmadd_vv_f16mf4_tuma(vbool64_t mask, vfloat16mf4_t vd, vfloat16mf4_t vs1, vfloat16mf4_t vs2, size_t vl) {
  return vfnmadd_vv_f16mf4_tuma(mask, vd, vs1, vs2, vl);
}

vfloat16mf4_t test_vfnmadd_vf_f16mf4_tuma(vbool64_t mask, vfloat16mf4_t vd, float16_t rs1, vfloat16mf4_t vs2, size_t vl) {
  return vfnmadd_vf_f16mf4_tuma(mask, vd, rs1, vs2, vl);
}

vfloat16mf2_t test_vfnmadd_vv_f16mf2_tuma(vbool32_t mask, vfloat16mf2_t vd, vfloat16mf2_t vs1, vfloat16mf2_t vs2, size_t vl) {
  return vfnmadd_vv_f16mf2_tuma(mask, vd, vs1, vs2, vl);
}

vfloat16mf2_t test_vfnmadd_vf_f16mf2_tuma(vbool32_t mask, vfloat16mf2_t vd, float16_t rs1, vfloat16mf2_t vs2, size_t vl) {
  return vfnmadd_vf_f16mf2_tuma(mask, vd, rs1, vs2, vl);
}

vfloat16m1_t test_vfnmadd_vv_f16m1_tuma(vbool16_t mask, vfloat16m1_t vd, vfloat16m1_t vs1, vfloat16m1_t vs2, size_t vl) {
  return vfnmadd_vv_f16m1_tuma(mask, vd, vs1, vs2, vl);
}

vfloat16m1_t test_vfnmadd_vf_f16m1_tuma(vbool16_t mask, vfloat16m1_t vd, float16_t rs1, vfloat16m1_t vs2, size_t vl) {
  return vfnmadd_vf_f16m1_tuma(mask, vd, rs1, vs2, vl);
}

vfloat16m2_t test_vfnmadd_vv_f16m2_tuma(vbool8_t mask, vfloat16m2_t vd, vfloat16m2_t vs1, vfloat16m2_t vs2, size_t vl) {
  return vfnmadd_vv_f16m2_tuma(mask, vd, vs1, vs2, vl);
}

vfloat16m2_t test_vfnmadd_vf_f16m2_tuma(vbool8_t mask, vfloat16m2_t vd, float16_t rs1, vfloat16m2_t vs2, size_t vl) {
  return vfnmadd_vf_f16m2_tuma(mask, vd, rs1, vs2, vl);
}

vfloat16m4_t test_vfnmadd_vv_f16m4_tuma(vbool4_t mask, vfloat16m4_t vd, vfloat16m4_t vs1, vfloat16m4_t vs2, size_t vl) {
  return vfnmadd_vv_f16m4_tuma(mask, vd, vs1, vs2, vl);
}

vfloat16m4_t test_vfnmadd_vf_f16m4_tuma(vbool4_t mask, vfloat16m4_t vd, float16_t rs1, vfloat16m4_t vs2, size_t vl) {
  return vfnmadd_vf_f16m4_tuma(mask, vd, rs1, vs2, vl);
}

vfloat16m8_t test_vfnmadd_vv_f16m8_tuma(vbool2_t mask, vfloat16m8_t vd, vfloat16m8_t vs1, vfloat16m8_t vs2, size_t vl) {
  return vfnmadd_vv_f16m8_tuma(mask, vd, vs1, vs2, vl);
}

vfloat16m8_t test_vfnmadd_vf_f16m8_tuma(vbool2_t mask, vfloat16m8_t vd, float16_t rs1, vfloat16m8_t vs2, size_t vl) {
  return vfnmadd_vf_f16m8_tuma(mask, vd, rs1, vs2, vl);
}

vfloat32mf2_t test_vfnmadd_vv_f32mf2_tuma(vbool64_t mask, vfloat32mf2_t vd, vfloat32mf2_t vs1, vfloat32mf2_t vs2, size_t vl) {
  return vfnmadd_vv_f32mf2_tuma(mask, vd, vs1, vs2, vl);
}

vfloat32mf2_t test_vfnmadd_vf_f32mf2_tuma(vbool64_t mask, vfloat32mf2_t vd, float32_t rs1, vfloat32mf2_t vs2, size_t vl) {
  return vfnmadd_vf_f32mf2_tuma(mask, vd, rs1, vs2, vl);
}

vfloat32m1_t test_vfnmadd_vv_f32m1_tuma(vbool32_t mask, vfloat32m1_t vd, vfloat32m1_t vs1, vfloat32m1_t vs2, size_t vl) {
  return vfnmadd_vv_f32m1_tuma(mask, vd, vs1, vs2, vl);
}

vfloat32m1_t test_vfnmadd_vf_f32m1_tuma(vbool32_t mask, vfloat32m1_t vd, float32_t rs1, vfloat32m1_t vs2, size_t vl) {
  return vfnmadd_vf_f32m1_tuma(mask, vd, rs1, vs2, vl);
}

vfloat32m2_t test_vfnmadd_vv_f32m2_tuma(vbool16_t mask, vfloat32m2_t vd, vfloat32m2_t vs1, vfloat32m2_t vs2, size_t vl) {
  return vfnmadd_vv_f32m2_tuma(mask, vd, vs1, vs2, vl);
}

vfloat32m2_t test_vfnmadd_vf_f32m2_tuma(vbool16_t mask, vfloat32m2_t vd, float32_t rs1, vfloat32m2_t vs2, size_t vl) {
  return vfnmadd_vf_f32m2_tuma(mask, vd, rs1, vs2, vl);
}

vfloat32m4_t test_vfnmadd_vv_f32m4_tuma(vbool8_t mask, vfloat32m4_t vd, vfloat32m4_t vs1, vfloat32m4_t vs2, size_t vl) {
  return vfnmadd_vv_f32m4_tuma(mask, vd, vs1, vs2, vl);
}

vfloat32m4_t test_vfnmadd_vf_f32m4_tuma(vbool8_t mask, vfloat32m4_t vd, float32_t rs1, vfloat32m4_t vs2, size_t vl) {
  return vfnmadd_vf_f32m4_tuma(mask, vd, rs1, vs2, vl);
}

vfloat32m8_t test_vfnmadd_vv_f32m8_tuma(vbool4_t mask, vfloat32m8_t vd, vfloat32m8_t vs1, vfloat32m8_t vs2, size_t vl) {
  return vfnmadd_vv_f32m8_tuma(mask, vd, vs1, vs2, vl);
}

vfloat32m8_t test_vfnmadd_vf_f32m8_tuma(vbool4_t mask, vfloat32m8_t vd, float32_t rs1, vfloat32m8_t vs2, size_t vl) {
  return vfnmadd_vf_f32m8_tuma(mask, vd, rs1, vs2, vl);
}

vfloat64m1_t test_vfnmadd_vv_f64m1_tuma(vbool64_t mask, vfloat64m1_t vd, vfloat64m1_t vs1, vfloat64m1_t vs2, size_t vl) {
  return vfnmadd_vv_f64m1_tuma(mask, vd, vs1, vs2, vl);
}

vfloat64m1_t test_vfnmadd_vf_f64m1_tuma(vbool64_t mask, vfloat64m1_t vd, float64_t rs1, vfloat64m1_t vs2, size_t vl) {
  return vfnmadd_vf_f64m1_tuma(mask, vd, rs1, vs2, vl);
}

vfloat64m2_t test_vfnmadd_vv_f64m2_tuma(vbool32_t mask, vfloat64m2_t vd, vfloat64m2_t vs1, vfloat64m2_t vs2, size_t vl) {
  return vfnmadd_vv_f64m2_tuma(mask, vd, vs1, vs2, vl);
}

vfloat64m2_t test_vfnmadd_vf_f64m2_tuma(vbool32_t mask, vfloat64m2_t vd, float64_t rs1, vfloat64m2_t vs2, size_t vl) {
  return vfnmadd_vf_f64m2_tuma(mask, vd, rs1, vs2, vl);
}

vfloat64m4_t test_vfnmadd_vv_f64m4_tuma(vbool16_t mask, vfloat64m4_t vd, vfloat64m4_t vs1, vfloat64m4_t vs2, size_t vl) {
  return vfnmadd_vv_f64m4_tuma(mask, vd, vs1, vs2, vl);
}

vfloat64m4_t test_vfnmadd_vf_f64m4_tuma(vbool16_t mask, vfloat64m4_t vd, float64_t rs1, vfloat64m4_t vs2, size_t vl) {
  return vfnmadd_vf_f64m4_tuma(mask, vd, rs1, vs2, vl);
}

vfloat64m8_t test_vfnmadd_vv_f64m8_tuma(vbool8_t mask, vfloat64m8_t vd, vfloat64m8_t vs1, vfloat64m8_t vs2, size_t vl) {
  return vfnmadd_vv_f64m8_tuma(mask, vd, vs1, vs2, vl);
}

vfloat64m8_t test_vfnmadd_vf_f64m8_tuma(vbool8_t mask, vfloat64m8_t vd, float64_t rs1, vfloat64m8_t vs2, size_t vl) {
  return vfnmadd_vf_f64m8_tuma(mask, vd, rs1, vs2, vl);
}

vfloat16mf4_t test_vfnmadd_vv_f16mf4_tumu(vbool64_t mask, vfloat16mf4_t vd, vfloat16mf4_t vs1, vfloat16mf4_t vs2, size_t vl) {
  return vfnmadd_vv_f16mf4_tumu(mask, vd, vs1, vs2, vl);
}

vfloat16mf4_t test_vfnmadd_vf_f16mf4_tumu(vbool64_t mask, vfloat16mf4_t vd, float16_t rs1, vfloat16mf4_t vs2, size_t vl) {
  return vfnmadd_vf_f16mf4_tumu(mask, vd, rs1, vs2, vl);
}

vfloat16mf2_t test_vfnmadd_vv_f16mf2_tumu(vbool32_t mask, vfloat16mf2_t vd, vfloat16mf2_t vs1, vfloat16mf2_t vs2, size_t vl) {
  return vfnmadd_vv_f16mf2_tumu(mask, vd, vs1, vs2, vl);
}

vfloat16mf2_t test_vfnmadd_vf_f16mf2_tumu(vbool32_t mask, vfloat16mf2_t vd, float16_t rs1, vfloat16mf2_t vs2, size_t vl) {
  return vfnmadd_vf_f16mf2_tumu(mask, vd, rs1, vs2, vl);
}

vfloat16m1_t test_vfnmadd_vv_f16m1_tumu(vbool16_t mask, vfloat16m1_t vd, vfloat16m1_t vs1, vfloat16m1_t vs2, size_t vl) {
  return vfnmadd_vv_f16m1_tumu(mask, vd, vs1, vs2, vl);
}

vfloat16m1_t test_vfnmadd_vf_f16m1_tumu(vbool16_t mask, vfloat16m1_t vd, float16_t rs1, vfloat16m1_t vs2, size_t vl) {
  return vfnmadd_vf_f16m1_tumu(mask, vd, rs1, vs2, vl);
}

vfloat16m2_t test_vfnmadd_vv_f16m2_tumu(vbool8_t mask, vfloat16m2_t vd, vfloat16m2_t vs1, vfloat16m2_t vs2, size_t vl) {
  return vfnmadd_vv_f16m2_tumu(mask, vd, vs1, vs2, vl);
}

vfloat16m2_t test_vfnmadd_vf_f16m2_tumu(vbool8_t mask, vfloat16m2_t vd, float16_t rs1, vfloat16m2_t vs2, size_t vl) {
  return vfnmadd_vf_f16m2_tumu(mask, vd, rs1, vs2, vl);
}

vfloat16m4_t test_vfnmadd_vv_f16m4_tumu(vbool4_t mask, vfloat16m4_t vd, vfloat16m4_t vs1, vfloat16m4_t vs2, size_t vl) {
  return vfnmadd_vv_f16m4_tumu(mask, vd, vs1, vs2, vl);
}

vfloat16m4_t test_vfnmadd_vf_f16m4_tumu(vbool4_t mask, vfloat16m4_t vd, float16_t rs1, vfloat16m4_t vs2, size_t vl) {
  return vfnmadd_vf_f16m4_tumu(mask, vd, rs1, vs2, vl);
}

vfloat16m8_t test_vfnmadd_vv_f16m8_tumu(vbool2_t mask, vfloat16m8_t vd, vfloat16m8_t vs1, vfloat16m8_t vs2, size_t vl) {
  return vfnmadd_vv_f16m8_tumu(mask, vd, vs1, vs2, vl);
}

vfloat16m8_t test_vfnmadd_vf_f16m8_tumu(vbool2_t mask, vfloat16m8_t vd, float16_t rs1, vfloat16m8_t vs2, size_t vl) {
  return vfnmadd_vf_f16m8_tumu(mask, vd, rs1, vs2, vl);
}

vfloat32mf2_t test_vfnmadd_vv_f32mf2_tumu(vbool64_t mask, vfloat32mf2_t vd, vfloat32mf2_t vs1, vfloat32mf2_t vs2, size_t vl) {
  return vfnmadd_vv_f32mf2_tumu(mask, vd, vs1, vs2, vl);
}

vfloat32mf2_t test_vfnmadd_vf_f32mf2_tumu(vbool64_t mask, vfloat32mf2_t vd, float32_t rs1, vfloat32mf2_t vs2, size_t vl) {
  return vfnmadd_vf_f32mf2_tumu(mask, vd, rs1, vs2, vl);
}

vfloat32m1_t test_vfnmadd_vv_f32m1_tumu(vbool32_t mask, vfloat32m1_t vd, vfloat32m1_t vs1, vfloat32m1_t vs2, size_t vl) {
  return vfnmadd_vv_f32m1_tumu(mask, vd, vs1, vs2, vl);
}

vfloat32m1_t test_vfnmadd_vf_f32m1_tumu(vbool32_t mask, vfloat32m1_t vd, float32_t rs1, vfloat32m1_t vs2, size_t vl) {
  return vfnmadd_vf_f32m1_tumu(mask, vd, rs1, vs2, vl);
}

vfloat32m2_t test_vfnmadd_vv_f32m2_tumu(vbool16_t mask, vfloat32m2_t vd, vfloat32m2_t vs1, vfloat32m2_t vs2, size_t vl) {
  return vfnmadd_vv_f32m2_tumu(mask, vd, vs1, vs2, vl);
}

vfloat32m2_t test_vfnmadd_vf_f32m2_tumu(vbool16_t mask, vfloat32m2_t vd, float32_t rs1, vfloat32m2_t vs2, size_t vl) {
  return vfnmadd_vf_f32m2_tumu(mask, vd, rs1, vs2, vl);
}

vfloat32m4_t test_vfnmadd_vv_f32m4_tumu(vbool8_t mask, vfloat32m4_t vd, vfloat32m4_t vs1, vfloat32m4_t vs2, size_t vl) {
  return vfnmadd_vv_f32m4_tumu(mask, vd, vs1, vs2, vl);
}

vfloat32m4_t test_vfnmadd_vf_f32m4_tumu(vbool8_t mask, vfloat32m4_t vd, float32_t rs1, vfloat32m4_t vs2, size_t vl) {
  return vfnmadd_vf_f32m4_tumu(mask, vd, rs1, vs2, vl);
}

vfloat32m8_t test_vfnmadd_vv_f32m8_tumu(vbool4_t mask, vfloat32m8_t vd, vfloat32m8_t vs1, vfloat32m8_t vs2, size_t vl) {
  return vfnmadd_vv_f32m8_tumu(mask, vd, vs1, vs2, vl);
}

vfloat32m8_t test_vfnmadd_vf_f32m8_tumu(vbool4_t mask, vfloat32m8_t vd, float32_t rs1, vfloat32m8_t vs2, size_t vl) {
  return vfnmadd_vf_f32m8_tumu(mask, vd, rs1, vs2, vl);
}

vfloat64m1_t test_vfnmadd_vv_f64m1_tumu(vbool64_t mask, vfloat64m1_t vd, vfloat64m1_t vs1, vfloat64m1_t vs2, size_t vl) {
  return vfnmadd_vv_f64m1_tumu(mask, vd, vs1, vs2, vl);
}

vfloat64m1_t test_vfnmadd_vf_f64m1_tumu(vbool64_t mask, vfloat64m1_t vd, float64_t rs1, vfloat64m1_t vs2, size_t vl) {
  return vfnmadd_vf_f64m1_tumu(mask, vd, rs1, vs2, vl);
}

vfloat64m2_t test_vfnmadd_vv_f64m2_tumu(vbool32_t mask, vfloat64m2_t vd, vfloat64m2_t vs1, vfloat64m2_t vs2, size_t vl) {
  return vfnmadd_vv_f64m2_tumu(mask, vd, vs1, vs2, vl);
}

vfloat64m2_t test_vfnmadd_vf_f64m2_tumu(vbool32_t mask, vfloat64m2_t vd, float64_t rs1, vfloat64m2_t vs2, size_t vl) {
  return vfnmadd_vf_f64m2_tumu(mask, vd, rs1, vs2, vl);
}

vfloat64m4_t test_vfnmadd_vv_f64m4_tumu(vbool16_t mask, vfloat64m4_t vd, vfloat64m4_t vs1, vfloat64m4_t vs2, size_t vl) {
  return vfnmadd_vv_f64m4_tumu(mask, vd, vs1, vs2, vl);
}

vfloat64m4_t test_vfnmadd_vf_f64m4_tumu(vbool16_t mask, vfloat64m4_t vd, float64_t rs1, vfloat64m4_t vs2, size_t vl) {
  return vfnmadd_vf_f64m4_tumu(mask, vd, rs1, vs2, vl);
}

vfloat64m8_t test_vfnmadd_vv_f64m8_tumu(vbool8_t mask, vfloat64m8_t vd, vfloat64m8_t vs1, vfloat64m8_t vs2, size_t vl) {
  return vfnmadd_vv_f64m8_tumu(mask, vd, vs1, vs2, vl);
}

vfloat64m8_t test_vfnmadd_vf_f64m8_tumu(vbool8_t mask, vfloat64m8_t vd, float64_t rs1, vfloat64m8_t vs2, size_t vl) {
  return vfnmadd_vf_f64m8_tumu(mask, vd, rs1, vs2, vl);
}

vfloat16mf4_t test_vfnmadd_vv_f16mf4_tama(vbool64_t mask, vfloat16mf4_t vd, vfloat16mf4_t vs1, vfloat16mf4_t vs2, size_t vl) {
  return vfnmadd_vv_f16mf4_tama(mask, vd, vs1, vs2, vl);
}

vfloat16mf4_t test_vfnmadd_vf_f16mf4_tama(vbool64_t mask, vfloat16mf4_t vd, float16_t rs1, vfloat16mf4_t vs2, size_t vl) {
  return vfnmadd_vf_f16mf4_tama(mask, vd, rs1, vs2, vl);
}

vfloat16mf2_t test_vfnmadd_vv_f16mf2_tama(vbool32_t mask, vfloat16mf2_t vd, vfloat16mf2_t vs1, vfloat16mf2_t vs2, size_t vl) {
  return vfnmadd_vv_f16mf2_tama(mask, vd, vs1, vs2, vl);
}

vfloat16mf2_t test_vfnmadd_vf_f16mf2_tama(vbool32_t mask, vfloat16mf2_t vd, float16_t rs1, vfloat16mf2_t vs2, size_t vl) {
  return vfnmadd_vf_f16mf2_tama(mask, vd, rs1, vs2, vl);
}

vfloat16m1_t test_vfnmadd_vv_f16m1_tama(vbool16_t mask, vfloat16m1_t vd, vfloat16m1_t vs1, vfloat16m1_t vs2, size_t vl) {
  return vfnmadd_vv_f16m1_tama(mask, vd, vs1, vs2, vl);
}

vfloat16m1_t test_vfnmadd_vf_f16m1_tama(vbool16_t mask, vfloat16m1_t vd, float16_t rs1, vfloat16m1_t vs2, size_t vl) {
  return vfnmadd_vf_f16m1_tama(mask, vd, rs1, vs2, vl);
}

vfloat16m2_t test_vfnmadd_vv_f16m2_tama(vbool8_t mask, vfloat16m2_t vd, vfloat16m2_t vs1, vfloat16m2_t vs2, size_t vl) {
  return vfnmadd_vv_f16m2_tama(mask, vd, vs1, vs2, vl);
}

vfloat16m2_t test_vfnmadd_vf_f16m2_tama(vbool8_t mask, vfloat16m2_t vd, float16_t rs1, vfloat16m2_t vs2, size_t vl) {
  return vfnmadd_vf_f16m2_tama(mask, vd, rs1, vs2, vl);
}

vfloat16m4_t test_vfnmadd_vv_f16m4_tama(vbool4_t mask, vfloat16m4_t vd, vfloat16m4_t vs1, vfloat16m4_t vs2, size_t vl) {
  return vfnmadd_vv_f16m4_tama(mask, vd, vs1, vs2, vl);
}

vfloat16m4_t test_vfnmadd_vf_f16m4_tama(vbool4_t mask, vfloat16m4_t vd, float16_t rs1, vfloat16m4_t vs2, size_t vl) {
  return vfnmadd_vf_f16m4_tama(mask, vd, rs1, vs2, vl);
}

vfloat16m8_t test_vfnmadd_vv_f16m8_tama(vbool2_t mask, vfloat16m8_t vd, vfloat16m8_t vs1, vfloat16m8_t vs2, size_t vl) {
  return vfnmadd_vv_f16m8_tama(mask, vd, vs1, vs2, vl);
}

vfloat16m8_t test_vfnmadd_vf_f16m8_tama(vbool2_t mask, vfloat16m8_t vd, float16_t rs1, vfloat16m8_t vs2, size_t vl) {
  return vfnmadd_vf_f16m8_tama(mask, vd, rs1, vs2, vl);
}

vfloat32mf2_t test_vfnmadd_vv_f32mf2_tama(vbool64_t mask, vfloat32mf2_t vd, vfloat32mf2_t vs1, vfloat32mf2_t vs2, size_t vl) {
  return vfnmadd_vv_f32mf2_tama(mask, vd, vs1, vs2, vl);
}

vfloat32mf2_t test_vfnmadd_vf_f32mf2_tama(vbool64_t mask, vfloat32mf2_t vd, float32_t rs1, vfloat32mf2_t vs2, size_t vl) {
  return vfnmadd_vf_f32mf2_tama(mask, vd, rs1, vs2, vl);
}

vfloat32m1_t test_vfnmadd_vv_f32m1_tama(vbool32_t mask, vfloat32m1_t vd, vfloat32m1_t vs1, vfloat32m1_t vs2, size_t vl) {
  return vfnmadd_vv_f32m1_tama(mask, vd, vs1, vs2, vl);
}

vfloat32m1_t test_vfnmadd_vf_f32m1_tama(vbool32_t mask, vfloat32m1_t vd, float32_t rs1, vfloat32m1_t vs2, size_t vl) {
  return vfnmadd_vf_f32m1_tama(mask, vd, rs1, vs2, vl);
}

vfloat32m2_t test_vfnmadd_vv_f32m2_tama(vbool16_t mask, vfloat32m2_t vd, vfloat32m2_t vs1, vfloat32m2_t vs2, size_t vl) {
  return vfnmadd_vv_f32m2_tama(mask, vd, vs1, vs2, vl);
}

vfloat32m2_t test_vfnmadd_vf_f32m2_tama(vbool16_t mask, vfloat32m2_t vd, float32_t rs1, vfloat32m2_t vs2, size_t vl) {
  return vfnmadd_vf_f32m2_tama(mask, vd, rs1, vs2, vl);
}

vfloat32m4_t test_vfnmadd_vv_f32m4_tama(vbool8_t mask, vfloat32m4_t vd, vfloat32m4_t vs1, vfloat32m4_t vs2, size_t vl) {
  return vfnmadd_vv_f32m4_tama(mask, vd, vs1, vs2, vl);
}

vfloat32m4_t test_vfnmadd_vf_f32m4_tama(vbool8_t mask, vfloat32m4_t vd, float32_t rs1, vfloat32m4_t vs2, size_t vl) {
  return vfnmadd_vf_f32m4_tama(mask, vd, rs1, vs2, vl);
}

vfloat32m8_t test_vfnmadd_vv_f32m8_tama(vbool4_t mask, vfloat32m8_t vd, vfloat32m8_t vs1, vfloat32m8_t vs2, size_t vl) {
  return vfnmadd_vv_f32m8_tama(mask, vd, vs1, vs2, vl);
}

vfloat32m8_t test_vfnmadd_vf_f32m8_tama(vbool4_t mask, vfloat32m8_t vd, float32_t rs1, vfloat32m8_t vs2, size_t vl) {
  return vfnmadd_vf_f32m8_tama(mask, vd, rs1, vs2, vl);
}

vfloat64m1_t test_vfnmadd_vv_f64m1_tama(vbool64_t mask, vfloat64m1_t vd, vfloat64m1_t vs1, vfloat64m1_t vs2, size_t vl) {
  return vfnmadd_vv_f64m1_tama(mask, vd, vs1, vs2, vl);
}

vfloat64m1_t test_vfnmadd_vf_f64m1_tama(vbool64_t mask, vfloat64m1_t vd, float64_t rs1, vfloat64m1_t vs2, size_t vl) {
  return vfnmadd_vf_f64m1_tama(mask, vd, rs1, vs2, vl);
}

vfloat64m2_t test_vfnmadd_vv_f64m2_tama(vbool32_t mask, vfloat64m2_t vd, vfloat64m2_t vs1, vfloat64m2_t vs2, size_t vl) {
  return vfnmadd_vv_f64m2_tama(mask, vd, vs1, vs2, vl);
}

vfloat64m2_t test_vfnmadd_vf_f64m2_tama(vbool32_t mask, vfloat64m2_t vd, float64_t rs1, vfloat64m2_t vs2, size_t vl) {
  return vfnmadd_vf_f64m2_tama(mask, vd, rs1, vs2, vl);
}

vfloat64m4_t test_vfnmadd_vv_f64m4_tama(vbool16_t mask, vfloat64m4_t vd, vfloat64m4_t vs1, vfloat64m4_t vs2, size_t vl) {
  return vfnmadd_vv_f64m4_tama(mask, vd, vs1, vs2, vl);
}

vfloat64m4_t test_vfnmadd_vf_f64m4_tama(vbool16_t mask, vfloat64m4_t vd, float64_t rs1, vfloat64m4_t vs2, size_t vl) {
  return vfnmadd_vf_f64m4_tama(mask, vd, rs1, vs2, vl);
}

vfloat64m8_t test_vfnmadd_vv_f64m8_tama(vbool8_t mask, vfloat64m8_t vd, vfloat64m8_t vs1, vfloat64m8_t vs2, size_t vl) {
  return vfnmadd_vv_f64m8_tama(mask, vd, vs1, vs2, vl);
}

vfloat64m8_t test_vfnmadd_vf_f64m8_tama(vbool8_t mask, vfloat64m8_t vd, float64_t rs1, vfloat64m8_t vs2, size_t vl) {
  return vfnmadd_vf_f64m8_tama(mask, vd, rs1, vs2, vl);
}

vfloat16mf4_t test_vfnmadd_vv_f16mf4_tamu(vbool64_t mask, vfloat16mf4_t vd, vfloat16mf4_t vs1, vfloat16mf4_t vs2, size_t vl) {
  return vfnmadd_vv_f16mf4_tamu(mask, vd, vs1, vs2, vl);
}

vfloat16mf4_t test_vfnmadd_vf_f16mf4_tamu(vbool64_t mask, vfloat16mf4_t vd, float16_t rs1, vfloat16mf4_t vs2, size_t vl) {
  return vfnmadd_vf_f16mf4_tamu(mask, vd, rs1, vs2, vl);
}

vfloat16mf2_t test_vfnmadd_vv_f16mf2_tamu(vbool32_t mask, vfloat16mf2_t vd, vfloat16mf2_t vs1, vfloat16mf2_t vs2, size_t vl) {
  return vfnmadd_vv_f16mf2_tamu(mask, vd, vs1, vs2, vl);
}

vfloat16mf2_t test_vfnmadd_vf_f16mf2_tamu(vbool32_t mask, vfloat16mf2_t vd, float16_t rs1, vfloat16mf2_t vs2, size_t vl) {
  return vfnmadd_vf_f16mf2_tamu(mask, vd, rs1, vs2, vl);
}

vfloat16m1_t test_vfnmadd_vv_f16m1_tamu(vbool16_t mask, vfloat16m1_t vd, vfloat16m1_t vs1, vfloat16m1_t vs2, size_t vl) {
  return vfnmadd_vv_f16m1_tamu(mask, vd, vs1, vs2, vl);
}

vfloat16m1_t test_vfnmadd_vf_f16m1_tamu(vbool16_t mask, vfloat16m1_t vd, float16_t rs1, vfloat16m1_t vs2, size_t vl) {
  return vfnmadd_vf_f16m1_tamu(mask, vd, rs1, vs2, vl);
}

vfloat16m2_t test_vfnmadd_vv_f16m2_tamu(vbool8_t mask, vfloat16m2_t vd, vfloat16m2_t vs1, vfloat16m2_t vs2, size_t vl) {
  return vfnmadd_vv_f16m2_tamu(mask, vd, vs1, vs2, vl);
}

vfloat16m2_t test_vfnmadd_vf_f16m2_tamu(vbool8_t mask, vfloat16m2_t vd, float16_t rs1, vfloat16m2_t vs2, size_t vl) {
  return vfnmadd_vf_f16m2_tamu(mask, vd, rs1, vs2, vl);
}

vfloat16m4_t test_vfnmadd_vv_f16m4_tamu(vbool4_t mask, vfloat16m4_t vd, vfloat16m4_t vs1, vfloat16m4_t vs2, size_t vl) {
  return vfnmadd_vv_f16m4_tamu(mask, vd, vs1, vs2, vl);
}

vfloat16m4_t test_vfnmadd_vf_f16m4_tamu(vbool4_t mask, vfloat16m4_t vd, float16_t rs1, vfloat16m4_t vs2, size_t vl) {
  return vfnmadd_vf_f16m4_tamu(mask, vd, rs1, vs2, vl);
}

vfloat16m8_t test_vfnmadd_vv_f16m8_tamu(vbool2_t mask, vfloat16m8_t vd, vfloat16m8_t vs1, vfloat16m8_t vs2, size_t vl) {
  return vfnmadd_vv_f16m8_tamu(mask, vd, vs1, vs2, vl);
}

vfloat16m8_t test_vfnmadd_vf_f16m8_tamu(vbool2_t mask, vfloat16m8_t vd, float16_t rs1, vfloat16m8_t vs2, size_t vl) {
  return vfnmadd_vf_f16m8_tamu(mask, vd, rs1, vs2, vl);
}

vfloat32mf2_t test_vfnmadd_vv_f32mf2_tamu(vbool64_t mask, vfloat32mf2_t vd, vfloat32mf2_t vs1, vfloat32mf2_t vs2, size_t vl) {
  return vfnmadd_vv_f32mf2_tamu(mask, vd, vs1, vs2, vl);
}

vfloat32mf2_t test_vfnmadd_vf_f32mf2_tamu(vbool64_t mask, vfloat32mf2_t vd, float32_t rs1, vfloat32mf2_t vs2, size_t vl) {
  return vfnmadd_vf_f32mf2_tamu(mask, vd, rs1, vs2, vl);
}

vfloat32m1_t test_vfnmadd_vv_f32m1_tamu(vbool32_t mask, vfloat32m1_t vd, vfloat32m1_t vs1, vfloat32m1_t vs2, size_t vl) {
  return vfnmadd_vv_f32m1_tamu(mask, vd, vs1, vs2, vl);
}

vfloat32m1_t test_vfnmadd_vf_f32m1_tamu(vbool32_t mask, vfloat32m1_t vd, float32_t rs1, vfloat32m1_t vs2, size_t vl) {
  return vfnmadd_vf_f32m1_tamu(mask, vd, rs1, vs2, vl);
}

vfloat32m2_t test_vfnmadd_vv_f32m2_tamu(vbool16_t mask, vfloat32m2_t vd, vfloat32m2_t vs1, vfloat32m2_t vs2, size_t vl) {
  return vfnmadd_vv_f32m2_tamu(mask, vd, vs1, vs2, vl);
}

vfloat32m2_t test_vfnmadd_vf_f32m2_tamu(vbool16_t mask, vfloat32m2_t vd, float32_t rs1, vfloat32m2_t vs2, size_t vl) {
  return vfnmadd_vf_f32m2_tamu(mask, vd, rs1, vs2, vl);
}

vfloat32m4_t test_vfnmadd_vv_f32m4_tamu(vbool8_t mask, vfloat32m4_t vd, vfloat32m4_t vs1, vfloat32m4_t vs2, size_t vl) {
  return vfnmadd_vv_f32m4_tamu(mask, vd, vs1, vs2, vl);
}

vfloat32m4_t test_vfnmadd_vf_f32m4_tamu(vbool8_t mask, vfloat32m4_t vd, float32_t rs1, vfloat32m4_t vs2, size_t vl) {
  return vfnmadd_vf_f32m4_tamu(mask, vd, rs1, vs2, vl);
}

vfloat32m8_t test_vfnmadd_vv_f32m8_tamu(vbool4_t mask, vfloat32m8_t vd, vfloat32m8_t vs1, vfloat32m8_t vs2, size_t vl) {
  return vfnmadd_vv_f32m8_tamu(mask, vd, vs1, vs2, vl);
}

vfloat32m8_t test_vfnmadd_vf_f32m8_tamu(vbool4_t mask, vfloat32m8_t vd, float32_t rs1, vfloat32m8_t vs2, size_t vl) {
  return vfnmadd_vf_f32m8_tamu(mask, vd, rs1, vs2, vl);
}

vfloat64m1_t test_vfnmadd_vv_f64m1_tamu(vbool64_t mask, vfloat64m1_t vd, vfloat64m1_t vs1, vfloat64m1_t vs2, size_t vl) {
  return vfnmadd_vv_f64m1_tamu(mask, vd, vs1, vs2, vl);
}

vfloat64m1_t test_vfnmadd_vf_f64m1_tamu(vbool64_t mask, vfloat64m1_t vd, float64_t rs1, vfloat64m1_t vs2, size_t vl) {
  return vfnmadd_vf_f64m1_tamu(mask, vd, rs1, vs2, vl);
}

vfloat64m2_t test_vfnmadd_vv_f64m2_tamu(vbool32_t mask, vfloat64m2_t vd, vfloat64m2_t vs1, vfloat64m2_t vs2, size_t vl) {
  return vfnmadd_vv_f64m2_tamu(mask, vd, vs1, vs2, vl);
}

vfloat64m2_t test_vfnmadd_vf_f64m2_tamu(vbool32_t mask, vfloat64m2_t vd, float64_t rs1, vfloat64m2_t vs2, size_t vl) {
  return vfnmadd_vf_f64m2_tamu(mask, vd, rs1, vs2, vl);
}

vfloat64m4_t test_vfnmadd_vv_f64m4_tamu(vbool16_t mask, vfloat64m4_t vd, vfloat64m4_t vs1, vfloat64m4_t vs2, size_t vl) {
  return vfnmadd_vv_f64m4_tamu(mask, vd, vs1, vs2, vl);
}

vfloat64m4_t test_vfnmadd_vf_f64m4_tamu(vbool16_t mask, vfloat64m4_t vd, float64_t rs1, vfloat64m4_t vs2, size_t vl) {
  return vfnmadd_vf_f64m4_tamu(mask, vd, rs1, vs2, vl);
}

vfloat64m8_t test_vfnmadd_vv_f64m8_tamu(vbool8_t mask, vfloat64m8_t vd, vfloat64m8_t vs1, vfloat64m8_t vs2, size_t vl) {
  return vfnmadd_vv_f64m8_tamu(mask, vd, vs1, vs2, vl);
}

vfloat64m8_t test_vfnmadd_vf_f64m8_tamu(vbool8_t mask, vfloat64m8_t vd, float64_t rs1, vfloat64m8_t vs2, size_t vl) {
  return vfnmadd_vf_f64m8_tamu(mask, vd, rs1, vs2, vl);
}

