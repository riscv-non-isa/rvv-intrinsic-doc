/* { dg-do compile } */
/* { dg-options "-march=rv64gc_zve64d -mabi=lp64d -Wno-psabi -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include "riscv_vector.h"

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
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

/* { dg-final { scan-assembler-times {vseti?vli\s+[a-z0-9]+,\s*[a-z0-9]+,\s*e[0-9]+,\s*mf?[1248],\s*t[au],\s*m[au]\s+vfwredusum\.[ivxfswum.]+\s+} 20 } } */
