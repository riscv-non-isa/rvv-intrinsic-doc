/* { dg-do compile } */
/* { dg-options "-march=rv64gcv_zvfh -mabi=lp64d -Wno-psabi -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include "riscv_vector.h"

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
vfloat32m1_t test_vfwredusum_vs_f16mf4_f32m1(vfloat16mf4_t vector, vfloat32m1_t scalar, size_t vl) {
  return __riscv_vfwredusum(vector, scalar, vl);
}

vfloat32m1_t test_vfwredusum_vs_f16mf2_f32m1(vfloat16mf2_t vector, vfloat32m1_t scalar, size_t vl) {
  return __riscv_vfwredusum(vector, scalar, vl);
}

vfloat32m1_t test_vfwredusum_vs_f16m1_f32m1(vfloat16m1_t vector, vfloat32m1_t scalar, size_t vl) {
  return __riscv_vfwredusum(vector, scalar, vl);
}

vfloat32m1_t test_vfwredusum_vs_f16m2_f32m1(vfloat16m2_t vector, vfloat32m1_t scalar, size_t vl) {
  return __riscv_vfwredusum(vector, scalar, vl);
}

vfloat32m1_t test_vfwredusum_vs_f16m4_f32m1(vfloat16m4_t vector, vfloat32m1_t scalar, size_t vl) {
  return __riscv_vfwredusum(vector, scalar, vl);
}

vfloat32m1_t test_vfwredusum_vs_f16m8_f32m1(vfloat16m8_t vector, vfloat32m1_t scalar, size_t vl) {
  return __riscv_vfwredusum(vector, scalar, vl);
}

vfloat64m1_t test_vfwredusum_vs_f32mf2_f64m1(vfloat32mf2_t vector, vfloat64m1_t scalar, size_t vl) {
  return __riscv_vfwredusum(vector, scalar, vl);
}

vfloat64m1_t test_vfwredusum_vs_f32m1_f64m1(vfloat32m1_t vector, vfloat64m1_t scalar, size_t vl) {
  return __riscv_vfwredusum(vector, scalar, vl);
}

vfloat64m1_t test_vfwredusum_vs_f32m2_f64m1(vfloat32m2_t vector, vfloat64m1_t scalar, size_t vl) {
  return __riscv_vfwredusum(vector, scalar, vl);
}

vfloat64m1_t test_vfwredusum_vs_f32m4_f64m1(vfloat32m4_t vector, vfloat64m1_t scalar, size_t vl) {
  return __riscv_vfwredusum(vector, scalar, vl);
}

vfloat64m1_t test_vfwredusum_vs_f32m8_f64m1(vfloat32m8_t vector, vfloat64m1_t scalar, size_t vl) {
  return __riscv_vfwredusum(vector, scalar, vl);
}

vfloat32m1_t test_vfwredusum_vs_f16mf4_f32m1_m(vbool64_t mask, vfloat16mf4_t vector, vfloat32m1_t scalar, size_t vl) {
  return __riscv_vfwredusum(mask, vector, scalar, vl);
}

vfloat32m1_t test_vfwredusum_vs_f16mf2_f32m1_m(vbool32_t mask, vfloat16mf2_t vector, vfloat32m1_t scalar, size_t vl) {
  return __riscv_vfwredusum(mask, vector, scalar, vl);
}

vfloat32m1_t test_vfwredusum_vs_f16m1_f32m1_m(vbool16_t mask, vfloat16m1_t vector, vfloat32m1_t scalar, size_t vl) {
  return __riscv_vfwredusum(mask, vector, scalar, vl);
}

vfloat32m1_t test_vfwredusum_vs_f16m2_f32m1_m(vbool8_t mask, vfloat16m2_t vector, vfloat32m1_t scalar, size_t vl) {
  return __riscv_vfwredusum(mask, vector, scalar, vl);
}

vfloat32m1_t test_vfwredusum_vs_f16m4_f32m1_m(vbool4_t mask, vfloat16m4_t vector, vfloat32m1_t scalar, size_t vl) {
  return __riscv_vfwredusum(mask, vector, scalar, vl);
}

vfloat32m1_t test_vfwredusum_vs_f16m8_f32m1_m(vbool2_t mask, vfloat16m8_t vector, vfloat32m1_t scalar, size_t vl) {
  return __riscv_vfwredusum(mask, vector, scalar, vl);
}

vfloat64m1_t test_vfwredusum_vs_f32mf2_f64m1_m(vbool64_t mask, vfloat32mf2_t vector, vfloat64m1_t scalar, size_t vl) {
  return __riscv_vfwredusum(mask, vector, scalar, vl);
}

vfloat64m1_t test_vfwredusum_vs_f32m1_f64m1_m(vbool32_t mask, vfloat32m1_t vector, vfloat64m1_t scalar, size_t vl) {
  return __riscv_vfwredusum(mask, vector, scalar, vl);
}

vfloat64m1_t test_vfwredusum_vs_f32m2_f64m1_m(vbool16_t mask, vfloat32m2_t vector, vfloat64m1_t scalar, size_t vl) {
  return __riscv_vfwredusum(mask, vector, scalar, vl);
}

vfloat64m1_t test_vfwredusum_vs_f32m4_f64m1_m(vbool8_t mask, vfloat32m4_t vector, vfloat64m1_t scalar, size_t vl) {
  return __riscv_vfwredusum(mask, vector, scalar, vl);
}

vfloat64m1_t test_vfwredusum_vs_f32m8_f64m1_m(vbool4_t mask, vfloat32m8_t vector, vfloat64m1_t scalar, size_t vl) {
  return __riscv_vfwredusum(mask, vector, scalar, vl);
}

vfloat32m1_t test_vfwredusum_vs_f16mf4_f32m1_rm(vfloat16mf4_t vector, vfloat32m1_t scalar, size_t vl) {
  return __riscv_vfwredusum(vector, scalar, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfwredusum_vs_f16mf2_f32m1_rm(vfloat16mf2_t vector, vfloat32m1_t scalar, size_t vl) {
  return __riscv_vfwredusum(vector, scalar, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfwredusum_vs_f16m1_f32m1_rm(vfloat16m1_t vector, vfloat32m1_t scalar, size_t vl) {
  return __riscv_vfwredusum(vector, scalar, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfwredusum_vs_f16m2_f32m1_rm(vfloat16m2_t vector, vfloat32m1_t scalar, size_t vl) {
  return __riscv_vfwredusum(vector, scalar, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfwredusum_vs_f16m4_f32m1_rm(vfloat16m4_t vector, vfloat32m1_t scalar, size_t vl) {
  return __riscv_vfwredusum(vector, scalar, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfwredusum_vs_f16m8_f32m1_rm(vfloat16m8_t vector, vfloat32m1_t scalar, size_t vl) {
  return __riscv_vfwredusum(vector, scalar, __RISCV_FRM_RNE, vl);
}

vfloat64m1_t test_vfwredusum_vs_f32mf2_f64m1_rm(vfloat32mf2_t vector, vfloat64m1_t scalar, size_t vl) {
  return __riscv_vfwredusum(vector, scalar, __RISCV_FRM_RNE, vl);
}

vfloat64m1_t test_vfwredusum_vs_f32m1_f64m1_rm(vfloat32m1_t vector, vfloat64m1_t scalar, size_t vl) {
  return __riscv_vfwredusum(vector, scalar, __RISCV_FRM_RNE, vl);
}

vfloat64m1_t test_vfwredusum_vs_f32m2_f64m1_rm(vfloat32m2_t vector, vfloat64m1_t scalar, size_t vl) {
  return __riscv_vfwredusum(vector, scalar, __RISCV_FRM_RNE, vl);
}

vfloat64m1_t test_vfwredusum_vs_f32m4_f64m1_rm(vfloat32m4_t vector, vfloat64m1_t scalar, size_t vl) {
  return __riscv_vfwredusum(vector, scalar, __RISCV_FRM_RNE, vl);
}

vfloat64m1_t test_vfwredusum_vs_f32m8_f64m1_rm(vfloat32m8_t vector, vfloat64m1_t scalar, size_t vl) {
  return __riscv_vfwredusum(vector, scalar, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfwredusum_vs_f16mf4_f32m1_rm_m(vbool64_t mask, vfloat16mf4_t vector, vfloat32m1_t scalar, size_t vl) {
  return __riscv_vfwredusum(mask, vector, scalar, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfwredusum_vs_f16mf2_f32m1_rm_m(vbool32_t mask, vfloat16mf2_t vector, vfloat32m1_t scalar, size_t vl) {
  return __riscv_vfwredusum(mask, vector, scalar, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfwredusum_vs_f16m1_f32m1_rm_m(vbool16_t mask, vfloat16m1_t vector, vfloat32m1_t scalar, size_t vl) {
  return __riscv_vfwredusum(mask, vector, scalar, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfwredusum_vs_f16m2_f32m1_rm_m(vbool8_t mask, vfloat16m2_t vector, vfloat32m1_t scalar, size_t vl) {
  return __riscv_vfwredusum(mask, vector, scalar, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfwredusum_vs_f16m4_f32m1_rm_m(vbool4_t mask, vfloat16m4_t vector, vfloat32m1_t scalar, size_t vl) {
  return __riscv_vfwredusum(mask, vector, scalar, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfwredusum_vs_f16m8_f32m1_rm_m(vbool2_t mask, vfloat16m8_t vector, vfloat32m1_t scalar, size_t vl) {
  return __riscv_vfwredusum(mask, vector, scalar, __RISCV_FRM_RNE, vl);
}

vfloat64m1_t test_vfwredusum_vs_f32mf2_f64m1_rm_m(vbool64_t mask, vfloat32mf2_t vector, vfloat64m1_t scalar, size_t vl) {
  return __riscv_vfwredusum(mask, vector, scalar, __RISCV_FRM_RNE, vl);
}

vfloat64m1_t test_vfwredusum_vs_f32m1_f64m1_rm_m(vbool32_t mask, vfloat32m1_t vector, vfloat64m1_t scalar, size_t vl) {
  return __riscv_vfwredusum(mask, vector, scalar, __RISCV_FRM_RNE, vl);
}

vfloat64m1_t test_vfwredusum_vs_f32m2_f64m1_rm_m(vbool16_t mask, vfloat32m2_t vector, vfloat64m1_t scalar, size_t vl) {
  return __riscv_vfwredusum(mask, vector, scalar, __RISCV_FRM_RNE, vl);
}

vfloat64m1_t test_vfwredusum_vs_f32m4_f64m1_rm_m(vbool8_t mask, vfloat32m4_t vector, vfloat64m1_t scalar, size_t vl) {
  return __riscv_vfwredusum(mask, vector, scalar, __RISCV_FRM_RNE, vl);
}

vfloat64m1_t test_vfwredusum_vs_f32m8_f64m1_rm_m(vbool4_t mask, vfloat32m8_t vector, vfloat64m1_t scalar, size_t vl) {
  return __riscv_vfwredusum(mask, vector, scalar, __RISCV_FRM_RNE, vl);
}

/* { dg-final { scan-assembler-times {vseti?vli\s+[a-z0-9]+,\s*[a-z0-9]+,\s*e[0-9]+,\s*mf?[1248],\s*t[au],\s*m[au]\s+vfwredusum\.[ivxfswum.]+\s+} 44 } } */
