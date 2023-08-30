/* { dg-do compile } */
/* { dg-options "-march=rv32gc_zve64f -mabi=ilp32d -Wno-psabi -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include "riscv_vector.h"

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
vfloat32mf2_t test_vfmsac_vv_f32mf2(vfloat32mf2_t vd, vfloat32mf2_t vs1, vfloat32mf2_t vs2, size_t vl) {
  return __riscv_vfmsac(vd, vs1, vs2, vl);
}

vfloat32mf2_t test_vfmsac_vf_f32mf2(vfloat32mf2_t vd, float32_t rs1, vfloat32mf2_t vs2, size_t vl) {
  return __riscv_vfmsac(vd, rs1, vs2, vl);
}

vfloat32m1_t test_vfmsac_vv_f32m1(vfloat32m1_t vd, vfloat32m1_t vs1, vfloat32m1_t vs2, size_t vl) {
  return __riscv_vfmsac(vd, vs1, vs2, vl);
}

vfloat32m1_t test_vfmsac_vf_f32m1(vfloat32m1_t vd, float32_t rs1, vfloat32m1_t vs2, size_t vl) {
  return __riscv_vfmsac(vd, rs1, vs2, vl);
}

vfloat32m2_t test_vfmsac_vv_f32m2(vfloat32m2_t vd, vfloat32m2_t vs1, vfloat32m2_t vs2, size_t vl) {
  return __riscv_vfmsac(vd, vs1, vs2, vl);
}

vfloat32m2_t test_vfmsac_vf_f32m2(vfloat32m2_t vd, float32_t rs1, vfloat32m2_t vs2, size_t vl) {
  return __riscv_vfmsac(vd, rs1, vs2, vl);
}

vfloat32m4_t test_vfmsac_vv_f32m4(vfloat32m4_t vd, vfloat32m4_t vs1, vfloat32m4_t vs2, size_t vl) {
  return __riscv_vfmsac(vd, vs1, vs2, vl);
}

vfloat32m4_t test_vfmsac_vf_f32m4(vfloat32m4_t vd, float32_t rs1, vfloat32m4_t vs2, size_t vl) {
  return __riscv_vfmsac(vd, rs1, vs2, vl);
}

vfloat32m8_t test_vfmsac_vv_f32m8(vfloat32m8_t vd, vfloat32m8_t vs1, vfloat32m8_t vs2, size_t vl) {
  return __riscv_vfmsac(vd, vs1, vs2, vl);
}

vfloat32m8_t test_vfmsac_vf_f32m8(vfloat32m8_t vd, float32_t rs1, vfloat32m8_t vs2, size_t vl) {
  return __riscv_vfmsac(vd, rs1, vs2, vl);
}

vfloat32mf2_t test_vfmsac_vv_f32mf2_m(vbool64_t mask, vfloat32mf2_t vd, vfloat32mf2_t vs1, vfloat32mf2_t vs2, size_t vl) {
  return __riscv_vfmsac(mask, vd, vs1, vs2, vl);
}

vfloat32mf2_t test_vfmsac_vf_f32mf2_m(vbool64_t mask, vfloat32mf2_t vd, float32_t rs1, vfloat32mf2_t vs2, size_t vl) {
  return __riscv_vfmsac(mask, vd, rs1, vs2, vl);
}

vfloat32m1_t test_vfmsac_vv_f32m1_m(vbool32_t mask, vfloat32m1_t vd, vfloat32m1_t vs1, vfloat32m1_t vs2, size_t vl) {
  return __riscv_vfmsac(mask, vd, vs1, vs2, vl);
}

vfloat32m1_t test_vfmsac_vf_f32m1_m(vbool32_t mask, vfloat32m1_t vd, float32_t rs1, vfloat32m1_t vs2, size_t vl) {
  return __riscv_vfmsac(mask, vd, rs1, vs2, vl);
}

vfloat32m2_t test_vfmsac_vv_f32m2_m(vbool16_t mask, vfloat32m2_t vd, vfloat32m2_t vs1, vfloat32m2_t vs2, size_t vl) {
  return __riscv_vfmsac(mask, vd, vs1, vs2, vl);
}

vfloat32m2_t test_vfmsac_vf_f32m2_m(vbool16_t mask, vfloat32m2_t vd, float32_t rs1, vfloat32m2_t vs2, size_t vl) {
  return __riscv_vfmsac(mask, vd, rs1, vs2, vl);
}

vfloat32m4_t test_vfmsac_vv_f32m4_m(vbool8_t mask, vfloat32m4_t vd, vfloat32m4_t vs1, vfloat32m4_t vs2, size_t vl) {
  return __riscv_vfmsac(mask, vd, vs1, vs2, vl);
}

vfloat32m4_t test_vfmsac_vf_f32m4_m(vbool8_t mask, vfloat32m4_t vd, float32_t rs1, vfloat32m4_t vs2, size_t vl) {
  return __riscv_vfmsac(mask, vd, rs1, vs2, vl);
}

vfloat32m8_t test_vfmsac_vv_f32m8_m(vbool4_t mask, vfloat32m8_t vd, vfloat32m8_t vs1, vfloat32m8_t vs2, size_t vl) {
  return __riscv_vfmsac(mask, vd, vs1, vs2, vl);
}

vfloat32m8_t test_vfmsac_vf_f32m8_m(vbool4_t mask, vfloat32m8_t vd, float32_t rs1, vfloat32m8_t vs2, size_t vl) {
  return __riscv_vfmsac(mask, vd, rs1, vs2, vl);
}

vfloat32mf2_t test_vfmsac_vv_f32mf2_rm(vfloat32mf2_t vd, vfloat32mf2_t vs1, vfloat32mf2_t vs2, size_t vl) {
  return __riscv_vfmsac(vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat32mf2_t test_vfmsac_vf_f32mf2_rm(vfloat32mf2_t vd, float32_t rs1, vfloat32mf2_t vs2, size_t vl) {
  return __riscv_vfmsac(vd, rs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfmsac_vv_f32m1_rm(vfloat32m1_t vd, vfloat32m1_t vs1, vfloat32m1_t vs2, size_t vl) {
  return __riscv_vfmsac(vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfmsac_vf_f32m1_rm(vfloat32m1_t vd, float32_t rs1, vfloat32m1_t vs2, size_t vl) {
  return __riscv_vfmsac(vd, rs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat32m2_t test_vfmsac_vv_f32m2_rm(vfloat32m2_t vd, vfloat32m2_t vs1, vfloat32m2_t vs2, size_t vl) {
  return __riscv_vfmsac(vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat32m2_t test_vfmsac_vf_f32m2_rm(vfloat32m2_t vd, float32_t rs1, vfloat32m2_t vs2, size_t vl) {
  return __riscv_vfmsac(vd, rs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat32m4_t test_vfmsac_vv_f32m4_rm(vfloat32m4_t vd, vfloat32m4_t vs1, vfloat32m4_t vs2, size_t vl) {
  return __riscv_vfmsac(vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat32m4_t test_vfmsac_vf_f32m4_rm(vfloat32m4_t vd, float32_t rs1, vfloat32m4_t vs2, size_t vl) {
  return __riscv_vfmsac(vd, rs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat32m8_t test_vfmsac_vv_f32m8_rm(vfloat32m8_t vd, vfloat32m8_t vs1, vfloat32m8_t vs2, size_t vl) {
  return __riscv_vfmsac(vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat32m8_t test_vfmsac_vf_f32m8_rm(vfloat32m8_t vd, float32_t rs1, vfloat32m8_t vs2, size_t vl) {
  return __riscv_vfmsac(vd, rs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat32mf2_t test_vfmsac_vv_f32mf2_rm_m(vbool64_t mask, vfloat32mf2_t vd, vfloat32mf2_t vs1, vfloat32mf2_t vs2, size_t vl) {
  return __riscv_vfmsac(mask, vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat32mf2_t test_vfmsac_vf_f32mf2_rm_m(vbool64_t mask, vfloat32mf2_t vd, float32_t rs1, vfloat32mf2_t vs2, size_t vl) {
  return __riscv_vfmsac(mask, vd, rs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfmsac_vv_f32m1_rm_m(vbool32_t mask, vfloat32m1_t vd, vfloat32m1_t vs1, vfloat32m1_t vs2, size_t vl) {
  return __riscv_vfmsac(mask, vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfmsac_vf_f32m1_rm_m(vbool32_t mask, vfloat32m1_t vd, float32_t rs1, vfloat32m1_t vs2, size_t vl) {
  return __riscv_vfmsac(mask, vd, rs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat32m2_t test_vfmsac_vv_f32m2_rm_m(vbool16_t mask, vfloat32m2_t vd, vfloat32m2_t vs1, vfloat32m2_t vs2, size_t vl) {
  return __riscv_vfmsac(mask, vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat32m2_t test_vfmsac_vf_f32m2_rm_m(vbool16_t mask, vfloat32m2_t vd, float32_t rs1, vfloat32m2_t vs2, size_t vl) {
  return __riscv_vfmsac(mask, vd, rs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat32m4_t test_vfmsac_vv_f32m4_rm_m(vbool8_t mask, vfloat32m4_t vd, vfloat32m4_t vs1, vfloat32m4_t vs2, size_t vl) {
  return __riscv_vfmsac(mask, vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat32m4_t test_vfmsac_vf_f32m4_rm_m(vbool8_t mask, vfloat32m4_t vd, float32_t rs1, vfloat32m4_t vs2, size_t vl) {
  return __riscv_vfmsac(mask, vd, rs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat32m8_t test_vfmsac_vv_f32m8_rm_m(vbool4_t mask, vfloat32m8_t vd, vfloat32m8_t vs1, vfloat32m8_t vs2, size_t vl) {
  return __riscv_vfmsac(mask, vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat32m8_t test_vfmsac_vf_f32m8_rm_m(vbool4_t mask, vfloat32m8_t vd, float32_t rs1, vfloat32m8_t vs2, size_t vl) {
  return __riscv_vfmsac(mask, vd, rs1, vs2, __RISCV_FRM_RNE, vl);
}

/* { dg-final { scan-assembler-times {vseti?vli\s+[a-z0-9]+,\s*[a-z0-9]+,\s*e[0-9]+,\s*mf?[1248],\s*t[au],\s*m[au]\s+vfmsac\.[ivxfswum.]+\s+} 40 } } */
