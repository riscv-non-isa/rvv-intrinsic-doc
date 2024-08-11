/* { dg-do compile } */
/* { dg-options "-march=rv64gcv_zvfh -mabi=lp64d -Wno-psabi -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include <riscv_vector.h>

vfloat64m1_t test_vfwmacc_vv_f64m1(vfloat64m1_t vd, vfloat32mf2_t vs1, vfloat32mf2_t vs2, size_t vl) {
  return __riscv_vfwmacc_vv_f64m1(vd, vs1, vs2, vl);
}

vfloat64m1_t test_vfwmacc_vf_f64m1(vfloat64m1_t vd, float vs1, vfloat32mf2_t vs2, size_t vl) {
  return __riscv_vfwmacc_vf_f64m1(vd, vs1, vs2, vl);
}

vfloat64m2_t test_vfwmacc_vv_f64m2(vfloat64m2_t vd, vfloat32m1_t vs1, vfloat32m1_t vs2, size_t vl) {
  return __riscv_vfwmacc_vv_f64m2(vd, vs1, vs2, vl);
}

vfloat64m2_t test_vfwmacc_vf_f64m2(vfloat64m2_t vd, float vs1, vfloat32m1_t vs2, size_t vl) {
  return __riscv_vfwmacc_vf_f64m2(vd, vs1, vs2, vl);
}

vfloat64m4_t test_vfwmacc_vv_f64m4(vfloat64m4_t vd, vfloat32m2_t vs1, vfloat32m2_t vs2, size_t vl) {
  return __riscv_vfwmacc_vv_f64m4(vd, vs1, vs2, vl);
}

vfloat64m4_t test_vfwmacc_vf_f64m4(vfloat64m4_t vd, float vs1, vfloat32m2_t vs2, size_t vl) {
  return __riscv_vfwmacc_vf_f64m4(vd, vs1, vs2, vl);
}

vfloat64m8_t test_vfwmacc_vv_f64m8(vfloat64m8_t vd, vfloat32m4_t vs1, vfloat32m4_t vs2, size_t vl) {
  return __riscv_vfwmacc_vv_f64m8(vd, vs1, vs2, vl);
}

vfloat64m8_t test_vfwmacc_vf_f64m8(vfloat64m8_t vd, float vs1, vfloat32m4_t vs2, size_t vl) {
  return __riscv_vfwmacc_vf_f64m8(vd, vs1, vs2, vl);
}

vfloat64m1_t test_vfwmacc_vv_f64m1_m(vbool64_t vm, vfloat64m1_t vd, vfloat32mf2_t vs1, vfloat32mf2_t vs2, size_t vl) {
  return __riscv_vfwmacc_vv_f64m1_m(vm, vd, vs1, vs2, vl);
}

vfloat64m1_t test_vfwmacc_vf_f64m1_m(vbool64_t vm, vfloat64m1_t vd, float vs1, vfloat32mf2_t vs2, size_t vl) {
  return __riscv_vfwmacc_vf_f64m1_m(vm, vd, vs1, vs2, vl);
}

vfloat64m2_t test_vfwmacc_vv_f64m2_m(vbool32_t vm, vfloat64m2_t vd, vfloat32m1_t vs1, vfloat32m1_t vs2, size_t vl) {
  return __riscv_vfwmacc_vv_f64m2_m(vm, vd, vs1, vs2, vl);
}

vfloat64m2_t test_vfwmacc_vf_f64m2_m(vbool32_t vm, vfloat64m2_t vd, float vs1, vfloat32m1_t vs2, size_t vl) {
  return __riscv_vfwmacc_vf_f64m2_m(vm, vd, vs1, vs2, vl);
}

vfloat64m4_t test_vfwmacc_vv_f64m4_m(vbool16_t vm, vfloat64m4_t vd, vfloat32m2_t vs1, vfloat32m2_t vs2, size_t vl) {
  return __riscv_vfwmacc_vv_f64m4_m(vm, vd, vs1, vs2, vl);
}

vfloat64m4_t test_vfwmacc_vf_f64m4_m(vbool16_t vm, vfloat64m4_t vd, float vs1, vfloat32m2_t vs2, size_t vl) {
  return __riscv_vfwmacc_vf_f64m4_m(vm, vd, vs1, vs2, vl);
}

vfloat64m8_t test_vfwmacc_vv_f64m8_m(vbool8_t vm, vfloat64m8_t vd, vfloat32m4_t vs1, vfloat32m4_t vs2, size_t vl) {
  return __riscv_vfwmacc_vv_f64m8_m(vm, vd, vs1, vs2, vl);
}

vfloat64m8_t test_vfwmacc_vf_f64m8_m(vbool8_t vm, vfloat64m8_t vd, float vs1, vfloat32m4_t vs2, size_t vl) {
  return __riscv_vfwmacc_vf_f64m8_m(vm, vd, vs1, vs2, vl);
}

vfloat64m1_t test_vfwmacc_vv_f64m1_rm(vfloat64m1_t vd, vfloat32mf2_t vs1, vfloat32mf2_t vs2, size_t vl) {
  return __riscv_vfwmacc_vv_f64m1_rm(vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat64m1_t test_vfwmacc_vf_f64m1_rm(vfloat64m1_t vd, float vs1, vfloat32mf2_t vs2, size_t vl) {
  return __riscv_vfwmacc_vf_f64m1_rm(vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat64m2_t test_vfwmacc_vv_f64m2_rm(vfloat64m2_t vd, vfloat32m1_t vs1, vfloat32m1_t vs2, size_t vl) {
  return __riscv_vfwmacc_vv_f64m2_rm(vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat64m2_t test_vfwmacc_vf_f64m2_rm(vfloat64m2_t vd, float vs1, vfloat32m1_t vs2, size_t vl) {
  return __riscv_vfwmacc_vf_f64m2_rm(vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat64m4_t test_vfwmacc_vv_f64m4_rm(vfloat64m4_t vd, vfloat32m2_t vs1, vfloat32m2_t vs2, size_t vl) {
  return __riscv_vfwmacc_vv_f64m4_rm(vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat64m4_t test_vfwmacc_vf_f64m4_rm(vfloat64m4_t vd, float vs1, vfloat32m2_t vs2, size_t vl) {
  return __riscv_vfwmacc_vf_f64m4_rm(vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat64m8_t test_vfwmacc_vv_f64m8_rm(vfloat64m8_t vd, vfloat32m4_t vs1, vfloat32m4_t vs2, size_t vl) {
  return __riscv_vfwmacc_vv_f64m8_rm(vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat64m8_t test_vfwmacc_vf_f64m8_rm(vfloat64m8_t vd, float vs1, vfloat32m4_t vs2, size_t vl) {
  return __riscv_vfwmacc_vf_f64m8_rm(vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat64m1_t test_vfwmacc_vv_f64m1_rm_m(vbool64_t vm, vfloat64m1_t vd, vfloat32mf2_t vs1, vfloat32mf2_t vs2, size_t vl) {
  return __riscv_vfwmacc_vv_f64m1_rm_m(vm, vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat64m1_t test_vfwmacc_vf_f64m1_rm_m(vbool64_t vm, vfloat64m1_t vd, float vs1, vfloat32mf2_t vs2, size_t vl) {
  return __riscv_vfwmacc_vf_f64m1_rm_m(vm, vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat64m2_t test_vfwmacc_vv_f64m2_rm_m(vbool32_t vm, vfloat64m2_t vd, vfloat32m1_t vs1, vfloat32m1_t vs2, size_t vl) {
  return __riscv_vfwmacc_vv_f64m2_rm_m(vm, vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat64m2_t test_vfwmacc_vf_f64m2_rm_m(vbool32_t vm, vfloat64m2_t vd, float vs1, vfloat32m1_t vs2, size_t vl) {
  return __riscv_vfwmacc_vf_f64m2_rm_m(vm, vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat64m4_t test_vfwmacc_vv_f64m4_rm_m(vbool16_t vm, vfloat64m4_t vd, vfloat32m2_t vs1, vfloat32m2_t vs2, size_t vl) {
  return __riscv_vfwmacc_vv_f64m4_rm_m(vm, vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat64m4_t test_vfwmacc_vf_f64m4_rm_m(vbool16_t vm, vfloat64m4_t vd, float vs1, vfloat32m2_t vs2, size_t vl) {
  return __riscv_vfwmacc_vf_f64m4_rm_m(vm, vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat64m8_t test_vfwmacc_vv_f64m8_rm_m(vbool8_t vm, vfloat64m8_t vd, vfloat32m4_t vs1, vfloat32m4_t vs2, size_t vl) {
  return __riscv_vfwmacc_vv_f64m8_rm_m(vm, vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat64m8_t test_vfwmacc_vf_f64m8_rm_m(vbool8_t vm, vfloat64m8_t vd, float vs1, vfloat32m4_t vs2, size_t vl) {
  return __riscv_vfwmacc_vf_f64m8_rm_m(vm, vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}
/* { dg-final { scan-assembler-times {vseti?vli\s+[a-z0-9]+,\s*[a-z0-9]+,\s*e[0-9]+,\s*mf?[1248],\s*t[au],\s*m[au]\s+vfwmacc\.[ivxfswum.]+\s+} 32 } } */
