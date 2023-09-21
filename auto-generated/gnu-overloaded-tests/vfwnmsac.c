/* { dg-do compile } */
/* { dg-options "-march=rv64gcv_zvfh -mabi=lp64d -Wno-psabi -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
vfloat32mf2_t test_vfwnmsac_vv_f32mf2(vfloat32mf2_t vd, vfloat16mf4_t vs1, vfloat16mf4_t vs2, size_t vl) {
  return __riscv_vfwnmsac(vd, vs1, vs2, vl);
}

vfloat32mf2_t test_vfwnmsac_vf_f32mf2(vfloat32mf2_t vd, float16_t vs1, vfloat16mf4_t vs2, size_t vl) {
  return __riscv_vfwnmsac(vd, vs1, vs2, vl);
}

vfloat32m1_t test_vfwnmsac_vv_f32m1(vfloat32m1_t vd, vfloat16mf2_t vs1, vfloat16mf2_t vs2, size_t vl) {
  return __riscv_vfwnmsac(vd, vs1, vs2, vl);
}

vfloat32m1_t test_vfwnmsac_vf_f32m1(vfloat32m1_t vd, float16_t vs1, vfloat16mf2_t vs2, size_t vl) {
  return __riscv_vfwnmsac(vd, vs1, vs2, vl);
}

vfloat32m2_t test_vfwnmsac_vv_f32m2(vfloat32m2_t vd, vfloat16m1_t vs1, vfloat16m1_t vs2, size_t vl) {
  return __riscv_vfwnmsac(vd, vs1, vs2, vl);
}

vfloat32m2_t test_vfwnmsac_vf_f32m2(vfloat32m2_t vd, float16_t vs1, vfloat16m1_t vs2, size_t vl) {
  return __riscv_vfwnmsac(vd, vs1, vs2, vl);
}

vfloat32m4_t test_vfwnmsac_vv_f32m4(vfloat32m4_t vd, vfloat16m2_t vs1, vfloat16m2_t vs2, size_t vl) {
  return __riscv_vfwnmsac(vd, vs1, vs2, vl);
}

vfloat32m4_t test_vfwnmsac_vf_f32m4(vfloat32m4_t vd, float16_t vs1, vfloat16m2_t vs2, size_t vl) {
  return __riscv_vfwnmsac(vd, vs1, vs2, vl);
}

vfloat32m8_t test_vfwnmsac_vv_f32m8(vfloat32m8_t vd, vfloat16m4_t vs1, vfloat16m4_t vs2, size_t vl) {
  return __riscv_vfwnmsac(vd, vs1, vs2, vl);
}

vfloat32m8_t test_vfwnmsac_vf_f32m8(vfloat32m8_t vd, float16_t vs1, vfloat16m4_t vs2, size_t vl) {
  return __riscv_vfwnmsac(vd, vs1, vs2, vl);
}

vfloat64m1_t test_vfwnmsac_vv_f64m1(vfloat64m1_t vd, vfloat32mf2_t vs1, vfloat32mf2_t vs2, size_t vl) {
  return __riscv_vfwnmsac(vd, vs1, vs2, vl);
}

vfloat64m1_t test_vfwnmsac_vf_f64m1(vfloat64m1_t vd, float32_t vs1, vfloat32mf2_t vs2, size_t vl) {
  return __riscv_vfwnmsac(vd, vs1, vs2, vl);
}

vfloat64m2_t test_vfwnmsac_vv_f64m2(vfloat64m2_t vd, vfloat32m1_t vs1, vfloat32m1_t vs2, size_t vl) {
  return __riscv_vfwnmsac(vd, vs1, vs2, vl);
}

vfloat64m2_t test_vfwnmsac_vf_f64m2(vfloat64m2_t vd, float32_t vs1, vfloat32m1_t vs2, size_t vl) {
  return __riscv_vfwnmsac(vd, vs1, vs2, vl);
}

vfloat64m4_t test_vfwnmsac_vv_f64m4(vfloat64m4_t vd, vfloat32m2_t vs1, vfloat32m2_t vs2, size_t vl) {
  return __riscv_vfwnmsac(vd, vs1, vs2, vl);
}

vfloat64m4_t test_vfwnmsac_vf_f64m4(vfloat64m4_t vd, float32_t vs1, vfloat32m2_t vs2, size_t vl) {
  return __riscv_vfwnmsac(vd, vs1, vs2, vl);
}

vfloat64m8_t test_vfwnmsac_vv_f64m8(vfloat64m8_t vd, vfloat32m4_t vs1, vfloat32m4_t vs2, size_t vl) {
  return __riscv_vfwnmsac(vd, vs1, vs2, vl);
}

vfloat64m8_t test_vfwnmsac_vf_f64m8(vfloat64m8_t vd, float32_t vs1, vfloat32m4_t vs2, size_t vl) {
  return __riscv_vfwnmsac(vd, vs1, vs2, vl);
}

vfloat32mf2_t test_vfwnmsac_vv_f32mf2_m(vbool64_t mask, vfloat32mf2_t vd, vfloat16mf4_t vs1, vfloat16mf4_t vs2, size_t vl) {
  return __riscv_vfwnmsac(mask, vd, vs1, vs2, vl);
}

vfloat32mf2_t test_vfwnmsac_vf_f32mf2_m(vbool64_t mask, vfloat32mf2_t vd, float16_t vs1, vfloat16mf4_t vs2, size_t vl) {
  return __riscv_vfwnmsac(mask, vd, vs1, vs2, vl);
}

vfloat32m1_t test_vfwnmsac_vv_f32m1_m(vbool32_t mask, vfloat32m1_t vd, vfloat16mf2_t vs1, vfloat16mf2_t vs2, size_t vl) {
  return __riscv_vfwnmsac(mask, vd, vs1, vs2, vl);
}

vfloat32m1_t test_vfwnmsac_vf_f32m1_m(vbool32_t mask, vfloat32m1_t vd, float16_t vs1, vfloat16mf2_t vs2, size_t vl) {
  return __riscv_vfwnmsac(mask, vd, vs1, vs2, vl);
}

vfloat32m2_t test_vfwnmsac_vv_f32m2_m(vbool16_t mask, vfloat32m2_t vd, vfloat16m1_t vs1, vfloat16m1_t vs2, size_t vl) {
  return __riscv_vfwnmsac(mask, vd, vs1, vs2, vl);
}

vfloat32m2_t test_vfwnmsac_vf_f32m2_m(vbool16_t mask, vfloat32m2_t vd, float16_t vs1, vfloat16m1_t vs2, size_t vl) {
  return __riscv_vfwnmsac(mask, vd, vs1, vs2, vl);
}

vfloat32m4_t test_vfwnmsac_vv_f32m4_m(vbool8_t mask, vfloat32m4_t vd, vfloat16m2_t vs1, vfloat16m2_t vs2, size_t vl) {
  return __riscv_vfwnmsac(mask, vd, vs1, vs2, vl);
}

vfloat32m4_t test_vfwnmsac_vf_f32m4_m(vbool8_t mask, vfloat32m4_t vd, float16_t vs1, vfloat16m2_t vs2, size_t vl) {
  return __riscv_vfwnmsac(mask, vd, vs1, vs2, vl);
}

vfloat32m8_t test_vfwnmsac_vv_f32m8_m(vbool4_t mask, vfloat32m8_t vd, vfloat16m4_t vs1, vfloat16m4_t vs2, size_t vl) {
  return __riscv_vfwnmsac(mask, vd, vs1, vs2, vl);
}

vfloat32m8_t test_vfwnmsac_vf_f32m8_m(vbool4_t mask, vfloat32m8_t vd, float16_t vs1, vfloat16m4_t vs2, size_t vl) {
  return __riscv_vfwnmsac(mask, vd, vs1, vs2, vl);
}

vfloat64m1_t test_vfwnmsac_vv_f64m1_m(vbool64_t mask, vfloat64m1_t vd, vfloat32mf2_t vs1, vfloat32mf2_t vs2, size_t vl) {
  return __riscv_vfwnmsac(mask, vd, vs1, vs2, vl);
}

vfloat64m1_t test_vfwnmsac_vf_f64m1_m(vbool64_t mask, vfloat64m1_t vd, float32_t vs1, vfloat32mf2_t vs2, size_t vl) {
  return __riscv_vfwnmsac(mask, vd, vs1, vs2, vl);
}

vfloat64m2_t test_vfwnmsac_vv_f64m2_m(vbool32_t mask, vfloat64m2_t vd, vfloat32m1_t vs1, vfloat32m1_t vs2, size_t vl) {
  return __riscv_vfwnmsac(mask, vd, vs1, vs2, vl);
}

vfloat64m2_t test_vfwnmsac_vf_f64m2_m(vbool32_t mask, vfloat64m2_t vd, float32_t vs1, vfloat32m1_t vs2, size_t vl) {
  return __riscv_vfwnmsac(mask, vd, vs1, vs2, vl);
}

vfloat64m4_t test_vfwnmsac_vv_f64m4_m(vbool16_t mask, vfloat64m4_t vd, vfloat32m2_t vs1, vfloat32m2_t vs2, size_t vl) {
  return __riscv_vfwnmsac(mask, vd, vs1, vs2, vl);
}

vfloat64m4_t test_vfwnmsac_vf_f64m4_m(vbool16_t mask, vfloat64m4_t vd, float32_t vs1, vfloat32m2_t vs2, size_t vl) {
  return __riscv_vfwnmsac(mask, vd, vs1, vs2, vl);
}

vfloat64m8_t test_vfwnmsac_vv_f64m8_m(vbool8_t mask, vfloat64m8_t vd, vfloat32m4_t vs1, vfloat32m4_t vs2, size_t vl) {
  return __riscv_vfwnmsac(mask, vd, vs1, vs2, vl);
}

vfloat64m8_t test_vfwnmsac_vf_f64m8_m(vbool8_t mask, vfloat64m8_t vd, float32_t vs1, vfloat32m4_t vs2, size_t vl) {
  return __riscv_vfwnmsac(mask, vd, vs1, vs2, vl);
}

vfloat32mf2_t test_vfwnmsac_vv_f32mf2_rm(vfloat32mf2_t vd, vfloat16mf4_t vs1, vfloat16mf4_t vs2, size_t vl) {
  return __riscv_vfwnmsac(vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat32mf2_t test_vfwnmsac_vf_f32mf2_rm(vfloat32mf2_t vd, float16_t vs1, vfloat16mf4_t vs2, size_t vl) {
  return __riscv_vfwnmsac(vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfwnmsac_vv_f32m1_rm(vfloat32m1_t vd, vfloat16mf2_t vs1, vfloat16mf2_t vs2, size_t vl) {
  return __riscv_vfwnmsac(vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfwnmsac_vf_f32m1_rm(vfloat32m1_t vd, float16_t vs1, vfloat16mf2_t vs2, size_t vl) {
  return __riscv_vfwnmsac(vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat32m2_t test_vfwnmsac_vv_f32m2_rm(vfloat32m2_t vd, vfloat16m1_t vs1, vfloat16m1_t vs2, size_t vl) {
  return __riscv_vfwnmsac(vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat32m2_t test_vfwnmsac_vf_f32m2_rm(vfloat32m2_t vd, float16_t vs1, vfloat16m1_t vs2, size_t vl) {
  return __riscv_vfwnmsac(vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat32m4_t test_vfwnmsac_vv_f32m4_rm(vfloat32m4_t vd, vfloat16m2_t vs1, vfloat16m2_t vs2, size_t vl) {
  return __riscv_vfwnmsac(vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat32m4_t test_vfwnmsac_vf_f32m4_rm(vfloat32m4_t vd, float16_t vs1, vfloat16m2_t vs2, size_t vl) {
  return __riscv_vfwnmsac(vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat32m8_t test_vfwnmsac_vv_f32m8_rm(vfloat32m8_t vd, vfloat16m4_t vs1, vfloat16m4_t vs2, size_t vl) {
  return __riscv_vfwnmsac(vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat32m8_t test_vfwnmsac_vf_f32m8_rm(vfloat32m8_t vd, float16_t vs1, vfloat16m4_t vs2, size_t vl) {
  return __riscv_vfwnmsac(vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat64m1_t test_vfwnmsac_vv_f64m1_rm(vfloat64m1_t vd, vfloat32mf2_t vs1, vfloat32mf2_t vs2, size_t vl) {
  return __riscv_vfwnmsac(vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat64m1_t test_vfwnmsac_vf_f64m1_rm(vfloat64m1_t vd, float32_t vs1, vfloat32mf2_t vs2, size_t vl) {
  return __riscv_vfwnmsac(vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat64m2_t test_vfwnmsac_vv_f64m2_rm(vfloat64m2_t vd, vfloat32m1_t vs1, vfloat32m1_t vs2, size_t vl) {
  return __riscv_vfwnmsac(vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat64m2_t test_vfwnmsac_vf_f64m2_rm(vfloat64m2_t vd, float32_t vs1, vfloat32m1_t vs2, size_t vl) {
  return __riscv_vfwnmsac(vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat64m4_t test_vfwnmsac_vv_f64m4_rm(vfloat64m4_t vd, vfloat32m2_t vs1, vfloat32m2_t vs2, size_t vl) {
  return __riscv_vfwnmsac(vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat64m4_t test_vfwnmsac_vf_f64m4_rm(vfloat64m4_t vd, float32_t vs1, vfloat32m2_t vs2, size_t vl) {
  return __riscv_vfwnmsac(vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat64m8_t test_vfwnmsac_vv_f64m8_rm(vfloat64m8_t vd, vfloat32m4_t vs1, vfloat32m4_t vs2, size_t vl) {
  return __riscv_vfwnmsac(vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat64m8_t test_vfwnmsac_vf_f64m8_rm(vfloat64m8_t vd, float32_t vs1, vfloat32m4_t vs2, size_t vl) {
  return __riscv_vfwnmsac(vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat32mf2_t test_vfwnmsac_vv_f32mf2_rm_m(vbool64_t mask, vfloat32mf2_t vd, vfloat16mf4_t vs1, vfloat16mf4_t vs2, size_t vl) {
  return __riscv_vfwnmsac(mask, vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat32mf2_t test_vfwnmsac_vf_f32mf2_rm_m(vbool64_t mask, vfloat32mf2_t vd, float16_t vs1, vfloat16mf4_t vs2, size_t vl) {
  return __riscv_vfwnmsac(mask, vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfwnmsac_vv_f32m1_rm_m(vbool32_t mask, vfloat32m1_t vd, vfloat16mf2_t vs1, vfloat16mf2_t vs2, size_t vl) {
  return __riscv_vfwnmsac(mask, vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfwnmsac_vf_f32m1_rm_m(vbool32_t mask, vfloat32m1_t vd, float16_t vs1, vfloat16mf2_t vs2, size_t vl) {
  return __riscv_vfwnmsac(mask, vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat32m2_t test_vfwnmsac_vv_f32m2_rm_m(vbool16_t mask, vfloat32m2_t vd, vfloat16m1_t vs1, vfloat16m1_t vs2, size_t vl) {
  return __riscv_vfwnmsac(mask, vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat32m2_t test_vfwnmsac_vf_f32m2_rm_m(vbool16_t mask, vfloat32m2_t vd, float16_t vs1, vfloat16m1_t vs2, size_t vl) {
  return __riscv_vfwnmsac(mask, vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat32m4_t test_vfwnmsac_vv_f32m4_rm_m(vbool8_t mask, vfloat32m4_t vd, vfloat16m2_t vs1, vfloat16m2_t vs2, size_t vl) {
  return __riscv_vfwnmsac(mask, vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat32m4_t test_vfwnmsac_vf_f32m4_rm_m(vbool8_t mask, vfloat32m4_t vd, float16_t vs1, vfloat16m2_t vs2, size_t vl) {
  return __riscv_vfwnmsac(mask, vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat32m8_t test_vfwnmsac_vv_f32m8_rm_m(vbool4_t mask, vfloat32m8_t vd, vfloat16m4_t vs1, vfloat16m4_t vs2, size_t vl) {
  return __riscv_vfwnmsac(mask, vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat32m8_t test_vfwnmsac_vf_f32m8_rm_m(vbool4_t mask, vfloat32m8_t vd, float16_t vs1, vfloat16m4_t vs2, size_t vl) {
  return __riscv_vfwnmsac(mask, vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat64m1_t test_vfwnmsac_vv_f64m1_rm_m(vbool64_t mask, vfloat64m1_t vd, vfloat32mf2_t vs1, vfloat32mf2_t vs2, size_t vl) {
  return __riscv_vfwnmsac(mask, vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat64m1_t test_vfwnmsac_vf_f64m1_rm_m(vbool64_t mask, vfloat64m1_t vd, float32_t vs1, vfloat32mf2_t vs2, size_t vl) {
  return __riscv_vfwnmsac(mask, vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat64m2_t test_vfwnmsac_vv_f64m2_rm_m(vbool32_t mask, vfloat64m2_t vd, vfloat32m1_t vs1, vfloat32m1_t vs2, size_t vl) {
  return __riscv_vfwnmsac(mask, vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat64m2_t test_vfwnmsac_vf_f64m2_rm_m(vbool32_t mask, vfloat64m2_t vd, float32_t vs1, vfloat32m1_t vs2, size_t vl) {
  return __riscv_vfwnmsac(mask, vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat64m4_t test_vfwnmsac_vv_f64m4_rm_m(vbool16_t mask, vfloat64m4_t vd, vfloat32m2_t vs1, vfloat32m2_t vs2, size_t vl) {
  return __riscv_vfwnmsac(mask, vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat64m4_t test_vfwnmsac_vf_f64m4_rm_m(vbool16_t mask, vfloat64m4_t vd, float32_t vs1, vfloat32m2_t vs2, size_t vl) {
  return __riscv_vfwnmsac(mask, vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat64m8_t test_vfwnmsac_vv_f64m8_rm_m(vbool8_t mask, vfloat64m8_t vd, vfloat32m4_t vs1, vfloat32m4_t vs2, size_t vl) {
  return __riscv_vfwnmsac(mask, vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat64m8_t test_vfwnmsac_vf_f64m8_rm_m(vbool8_t mask, vfloat64m8_t vd, float32_t vs1, vfloat32m4_t vs2, size_t vl) {
  return __riscv_vfwnmsac(mask, vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

