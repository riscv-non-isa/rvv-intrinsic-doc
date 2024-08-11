/* { dg-do compile } */
/* { dg-options "-march=rv64gcv_zvfh -mabi=lp64d -Wno-psabi -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include <riscv_vector.h>

vfloat32mf2_t test_vfnmsac_vv_f32mf2(vfloat32mf2_t vd, vfloat32mf2_t vs1, vfloat32mf2_t vs2, size_t vl) {
  return __riscv_vfnmsac(vd, vs1, vs2, vl);
}

vfloat32mf2_t test_vfnmsac_vf_f32mf2(vfloat32mf2_t vd, float rs1, vfloat32mf2_t vs2, size_t vl) {
  return __riscv_vfnmsac(vd, rs1, vs2, vl);
}

vfloat32m1_t test_vfnmsac_vv_f32m1(vfloat32m1_t vd, vfloat32m1_t vs1, vfloat32m1_t vs2, size_t vl) {
  return __riscv_vfnmsac(vd, vs1, vs2, vl);
}

vfloat32m1_t test_vfnmsac_vf_f32m1(vfloat32m1_t vd, float rs1, vfloat32m1_t vs2, size_t vl) {
  return __riscv_vfnmsac(vd, rs1, vs2, vl);
}

vfloat32m2_t test_vfnmsac_vv_f32m2(vfloat32m2_t vd, vfloat32m2_t vs1, vfloat32m2_t vs2, size_t vl) {
  return __riscv_vfnmsac(vd, vs1, vs2, vl);
}

vfloat32m2_t test_vfnmsac_vf_f32m2(vfloat32m2_t vd, float rs1, vfloat32m2_t vs2, size_t vl) {
  return __riscv_vfnmsac(vd, rs1, vs2, vl);
}

vfloat32m4_t test_vfnmsac_vv_f32m4(vfloat32m4_t vd, vfloat32m4_t vs1, vfloat32m4_t vs2, size_t vl) {
  return __riscv_vfnmsac(vd, vs1, vs2, vl);
}

vfloat32m4_t test_vfnmsac_vf_f32m4(vfloat32m4_t vd, float rs1, vfloat32m4_t vs2, size_t vl) {
  return __riscv_vfnmsac(vd, rs1, vs2, vl);
}

vfloat32m8_t test_vfnmsac_vv_f32m8(vfloat32m8_t vd, vfloat32m8_t vs1, vfloat32m8_t vs2, size_t vl) {
  return __riscv_vfnmsac(vd, vs1, vs2, vl);
}

vfloat32m8_t test_vfnmsac_vf_f32m8(vfloat32m8_t vd, float rs1, vfloat32m8_t vs2, size_t vl) {
  return __riscv_vfnmsac(vd, rs1, vs2, vl);
}

vfloat64m1_t test_vfnmsac_vv_f64m1(vfloat64m1_t vd, vfloat64m1_t vs1, vfloat64m1_t vs2, size_t vl) {
  return __riscv_vfnmsac(vd, vs1, vs2, vl);
}

vfloat64m1_t test_vfnmsac_vf_f64m1(vfloat64m1_t vd, double rs1, vfloat64m1_t vs2, size_t vl) {
  return __riscv_vfnmsac(vd, rs1, vs2, vl);
}

vfloat64m2_t test_vfnmsac_vv_f64m2(vfloat64m2_t vd, vfloat64m2_t vs1, vfloat64m2_t vs2, size_t vl) {
  return __riscv_vfnmsac(vd, vs1, vs2, vl);
}

vfloat64m2_t test_vfnmsac_vf_f64m2(vfloat64m2_t vd, double rs1, vfloat64m2_t vs2, size_t vl) {
  return __riscv_vfnmsac(vd, rs1, vs2, vl);
}

vfloat64m4_t test_vfnmsac_vv_f64m4(vfloat64m4_t vd, vfloat64m4_t vs1, vfloat64m4_t vs2, size_t vl) {
  return __riscv_vfnmsac(vd, vs1, vs2, vl);
}

vfloat64m4_t test_vfnmsac_vf_f64m4(vfloat64m4_t vd, double rs1, vfloat64m4_t vs2, size_t vl) {
  return __riscv_vfnmsac(vd, rs1, vs2, vl);
}

vfloat64m8_t test_vfnmsac_vv_f64m8(vfloat64m8_t vd, vfloat64m8_t vs1, vfloat64m8_t vs2, size_t vl) {
  return __riscv_vfnmsac(vd, vs1, vs2, vl);
}

vfloat64m8_t test_vfnmsac_vf_f64m8(vfloat64m8_t vd, double rs1, vfloat64m8_t vs2, size_t vl) {
  return __riscv_vfnmsac(vd, rs1, vs2, vl);
}

vfloat32mf2_t test_vfnmsac_vv_f32mf2_m(vbool64_t vm, vfloat32mf2_t vd, vfloat32mf2_t vs1, vfloat32mf2_t vs2, size_t vl) {
  return __riscv_vfnmsac(vm, vd, vs1, vs2, vl);
}

vfloat32mf2_t test_vfnmsac_vf_f32mf2_m(vbool64_t vm, vfloat32mf2_t vd, float rs1, vfloat32mf2_t vs2, size_t vl) {
  return __riscv_vfnmsac(vm, vd, rs1, vs2, vl);
}

vfloat32m1_t test_vfnmsac_vv_f32m1_m(vbool32_t vm, vfloat32m1_t vd, vfloat32m1_t vs1, vfloat32m1_t vs2, size_t vl) {
  return __riscv_vfnmsac(vm, vd, vs1, vs2, vl);
}

vfloat32m1_t test_vfnmsac_vf_f32m1_m(vbool32_t vm, vfloat32m1_t vd, float rs1, vfloat32m1_t vs2, size_t vl) {
  return __riscv_vfnmsac(vm, vd, rs1, vs2, vl);
}

vfloat32m2_t test_vfnmsac_vv_f32m2_m(vbool16_t vm, vfloat32m2_t vd, vfloat32m2_t vs1, vfloat32m2_t vs2, size_t vl) {
  return __riscv_vfnmsac(vm, vd, vs1, vs2, vl);
}

vfloat32m2_t test_vfnmsac_vf_f32m2_m(vbool16_t vm, vfloat32m2_t vd, float rs1, vfloat32m2_t vs2, size_t vl) {
  return __riscv_vfnmsac(vm, vd, rs1, vs2, vl);
}

vfloat32m4_t test_vfnmsac_vv_f32m4_m(vbool8_t vm, vfloat32m4_t vd, vfloat32m4_t vs1, vfloat32m4_t vs2, size_t vl) {
  return __riscv_vfnmsac(vm, vd, vs1, vs2, vl);
}

vfloat32m4_t test_vfnmsac_vf_f32m4_m(vbool8_t vm, vfloat32m4_t vd, float rs1, vfloat32m4_t vs2, size_t vl) {
  return __riscv_vfnmsac(vm, vd, rs1, vs2, vl);
}

vfloat32m8_t test_vfnmsac_vv_f32m8_m(vbool4_t vm, vfloat32m8_t vd, vfloat32m8_t vs1, vfloat32m8_t vs2, size_t vl) {
  return __riscv_vfnmsac(vm, vd, vs1, vs2, vl);
}

vfloat32m8_t test_vfnmsac_vf_f32m8_m(vbool4_t vm, vfloat32m8_t vd, float rs1, vfloat32m8_t vs2, size_t vl) {
  return __riscv_vfnmsac(vm, vd, rs1, vs2, vl);
}

vfloat64m1_t test_vfnmsac_vv_f64m1_m(vbool64_t vm, vfloat64m1_t vd, vfloat64m1_t vs1, vfloat64m1_t vs2, size_t vl) {
  return __riscv_vfnmsac(vm, vd, vs1, vs2, vl);
}

vfloat64m1_t test_vfnmsac_vf_f64m1_m(vbool64_t vm, vfloat64m1_t vd, double rs1, vfloat64m1_t vs2, size_t vl) {
  return __riscv_vfnmsac(vm, vd, rs1, vs2, vl);
}

vfloat64m2_t test_vfnmsac_vv_f64m2_m(vbool32_t vm, vfloat64m2_t vd, vfloat64m2_t vs1, vfloat64m2_t vs2, size_t vl) {
  return __riscv_vfnmsac(vm, vd, vs1, vs2, vl);
}

vfloat64m2_t test_vfnmsac_vf_f64m2_m(vbool32_t vm, vfloat64m2_t vd, double rs1, vfloat64m2_t vs2, size_t vl) {
  return __riscv_vfnmsac(vm, vd, rs1, vs2, vl);
}

vfloat64m4_t test_vfnmsac_vv_f64m4_m(vbool16_t vm, vfloat64m4_t vd, vfloat64m4_t vs1, vfloat64m4_t vs2, size_t vl) {
  return __riscv_vfnmsac(vm, vd, vs1, vs2, vl);
}

vfloat64m4_t test_vfnmsac_vf_f64m4_m(vbool16_t vm, vfloat64m4_t vd, double rs1, vfloat64m4_t vs2, size_t vl) {
  return __riscv_vfnmsac(vm, vd, rs1, vs2, vl);
}

vfloat64m8_t test_vfnmsac_vv_f64m8_m(vbool8_t vm, vfloat64m8_t vd, vfloat64m8_t vs1, vfloat64m8_t vs2, size_t vl) {
  return __riscv_vfnmsac(vm, vd, vs1, vs2, vl);
}

vfloat64m8_t test_vfnmsac_vf_f64m8_m(vbool8_t vm, vfloat64m8_t vd, double rs1, vfloat64m8_t vs2, size_t vl) {
  return __riscv_vfnmsac(vm, vd, rs1, vs2, vl);
}

vfloat32mf2_t test_vfnmsac_vv_f32mf2_rm(vfloat32mf2_t vd, vfloat32mf2_t vs1, vfloat32mf2_t vs2, size_t vl) {
  return __riscv_vfnmsac(vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat32mf2_t test_vfnmsac_vf_f32mf2_rm(vfloat32mf2_t vd, float rs1, vfloat32mf2_t vs2, size_t vl) {
  return __riscv_vfnmsac(vd, rs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfnmsac_vv_f32m1_rm(vfloat32m1_t vd, vfloat32m1_t vs1, vfloat32m1_t vs2, size_t vl) {
  return __riscv_vfnmsac(vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfnmsac_vf_f32m1_rm(vfloat32m1_t vd, float rs1, vfloat32m1_t vs2, size_t vl) {
  return __riscv_vfnmsac(vd, rs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat32m2_t test_vfnmsac_vv_f32m2_rm(vfloat32m2_t vd, vfloat32m2_t vs1, vfloat32m2_t vs2, size_t vl) {
  return __riscv_vfnmsac(vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat32m2_t test_vfnmsac_vf_f32m2_rm(vfloat32m2_t vd, float rs1, vfloat32m2_t vs2, size_t vl) {
  return __riscv_vfnmsac(vd, rs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat32m4_t test_vfnmsac_vv_f32m4_rm(vfloat32m4_t vd, vfloat32m4_t vs1, vfloat32m4_t vs2, size_t vl) {
  return __riscv_vfnmsac(vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat32m4_t test_vfnmsac_vf_f32m4_rm(vfloat32m4_t vd, float rs1, vfloat32m4_t vs2, size_t vl) {
  return __riscv_vfnmsac(vd, rs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat32m8_t test_vfnmsac_vv_f32m8_rm(vfloat32m8_t vd, vfloat32m8_t vs1, vfloat32m8_t vs2, size_t vl) {
  return __riscv_vfnmsac(vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat32m8_t test_vfnmsac_vf_f32m8_rm(vfloat32m8_t vd, float rs1, vfloat32m8_t vs2, size_t vl) {
  return __riscv_vfnmsac(vd, rs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat64m1_t test_vfnmsac_vv_f64m1_rm(vfloat64m1_t vd, vfloat64m1_t vs1, vfloat64m1_t vs2, size_t vl) {
  return __riscv_vfnmsac(vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat64m1_t test_vfnmsac_vf_f64m1_rm(vfloat64m1_t vd, double rs1, vfloat64m1_t vs2, size_t vl) {
  return __riscv_vfnmsac(vd, rs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat64m2_t test_vfnmsac_vv_f64m2_rm(vfloat64m2_t vd, vfloat64m2_t vs1, vfloat64m2_t vs2, size_t vl) {
  return __riscv_vfnmsac(vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat64m2_t test_vfnmsac_vf_f64m2_rm(vfloat64m2_t vd, double rs1, vfloat64m2_t vs2, size_t vl) {
  return __riscv_vfnmsac(vd, rs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat64m4_t test_vfnmsac_vv_f64m4_rm(vfloat64m4_t vd, vfloat64m4_t vs1, vfloat64m4_t vs2, size_t vl) {
  return __riscv_vfnmsac(vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat64m4_t test_vfnmsac_vf_f64m4_rm(vfloat64m4_t vd, double rs1, vfloat64m4_t vs2, size_t vl) {
  return __riscv_vfnmsac(vd, rs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat64m8_t test_vfnmsac_vv_f64m8_rm(vfloat64m8_t vd, vfloat64m8_t vs1, vfloat64m8_t vs2, size_t vl) {
  return __riscv_vfnmsac(vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat64m8_t test_vfnmsac_vf_f64m8_rm(vfloat64m8_t vd, double rs1, vfloat64m8_t vs2, size_t vl) {
  return __riscv_vfnmsac(vd, rs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat32mf2_t test_vfnmsac_vv_f32mf2_rm_m(vbool64_t vm, vfloat32mf2_t vd, vfloat32mf2_t vs1, vfloat32mf2_t vs2, size_t vl) {
  return __riscv_vfnmsac(vm, vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat32mf2_t test_vfnmsac_vf_f32mf2_rm_m(vbool64_t vm, vfloat32mf2_t vd, float rs1, vfloat32mf2_t vs2, size_t vl) {
  return __riscv_vfnmsac(vm, vd, rs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfnmsac_vv_f32m1_rm_m(vbool32_t vm, vfloat32m1_t vd, vfloat32m1_t vs1, vfloat32m1_t vs2, size_t vl) {
  return __riscv_vfnmsac(vm, vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfnmsac_vf_f32m1_rm_m(vbool32_t vm, vfloat32m1_t vd, float rs1, vfloat32m1_t vs2, size_t vl) {
  return __riscv_vfnmsac(vm, vd, rs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat32m2_t test_vfnmsac_vv_f32m2_rm_m(vbool16_t vm, vfloat32m2_t vd, vfloat32m2_t vs1, vfloat32m2_t vs2, size_t vl) {
  return __riscv_vfnmsac(vm, vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat32m2_t test_vfnmsac_vf_f32m2_rm_m(vbool16_t vm, vfloat32m2_t vd, float rs1, vfloat32m2_t vs2, size_t vl) {
  return __riscv_vfnmsac(vm, vd, rs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat32m4_t test_vfnmsac_vv_f32m4_rm_m(vbool8_t vm, vfloat32m4_t vd, vfloat32m4_t vs1, vfloat32m4_t vs2, size_t vl) {
  return __riscv_vfnmsac(vm, vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat32m4_t test_vfnmsac_vf_f32m4_rm_m(vbool8_t vm, vfloat32m4_t vd, float rs1, vfloat32m4_t vs2, size_t vl) {
  return __riscv_vfnmsac(vm, vd, rs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat32m8_t test_vfnmsac_vv_f32m8_rm_m(vbool4_t vm, vfloat32m8_t vd, vfloat32m8_t vs1, vfloat32m8_t vs2, size_t vl) {
  return __riscv_vfnmsac(vm, vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat32m8_t test_vfnmsac_vf_f32m8_rm_m(vbool4_t vm, vfloat32m8_t vd, float rs1, vfloat32m8_t vs2, size_t vl) {
  return __riscv_vfnmsac(vm, vd, rs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat64m1_t test_vfnmsac_vv_f64m1_rm_m(vbool64_t vm, vfloat64m1_t vd, vfloat64m1_t vs1, vfloat64m1_t vs2, size_t vl) {
  return __riscv_vfnmsac(vm, vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat64m1_t test_vfnmsac_vf_f64m1_rm_m(vbool64_t vm, vfloat64m1_t vd, double rs1, vfloat64m1_t vs2, size_t vl) {
  return __riscv_vfnmsac(vm, vd, rs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat64m2_t test_vfnmsac_vv_f64m2_rm_m(vbool32_t vm, vfloat64m2_t vd, vfloat64m2_t vs1, vfloat64m2_t vs2, size_t vl) {
  return __riscv_vfnmsac(vm, vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat64m2_t test_vfnmsac_vf_f64m2_rm_m(vbool32_t vm, vfloat64m2_t vd, double rs1, vfloat64m2_t vs2, size_t vl) {
  return __riscv_vfnmsac(vm, vd, rs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat64m4_t test_vfnmsac_vv_f64m4_rm_m(vbool16_t vm, vfloat64m4_t vd, vfloat64m4_t vs1, vfloat64m4_t vs2, size_t vl) {
  return __riscv_vfnmsac(vm, vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat64m4_t test_vfnmsac_vf_f64m4_rm_m(vbool16_t vm, vfloat64m4_t vd, double rs1, vfloat64m4_t vs2, size_t vl) {
  return __riscv_vfnmsac(vm, vd, rs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat64m8_t test_vfnmsac_vv_f64m8_rm_m(vbool8_t vm, vfloat64m8_t vd, vfloat64m8_t vs1, vfloat64m8_t vs2, size_t vl) {
  return __riscv_vfnmsac(vm, vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat64m8_t test_vfnmsac_vf_f64m8_rm_m(vbool8_t vm, vfloat64m8_t vd, double rs1, vfloat64m8_t vs2, size_t vl) {
  return __riscv_vfnmsac(vm, vd, rs1, vs2, __RISCV_FRM_RNE, vl);
}
/* { dg-final { scan-assembler-times {vseti?vli\s+[a-z0-9]+,\s*[a-z0-9]+,\s*e[0-9]+,\s*mf?[1248],\s*t[au],\s*m[au]\s+vfnmsac\.[ivxfswum.]+\s+} 72 } } */
