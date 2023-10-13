/* { dg-do compile } */
/* { dg-options "-march=rv64gcv_zvfh -mabi=lp64d -Wno-psabi -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
vfloat32m1_t test_vfwredosum_vs_f16mf4_f32m1_tu(vfloat32m1_t vd, vfloat16mf4_t vs2, vfloat32m1_t vs1, size_t vl) {
  return __riscv_vfwredosum_tu(vd, vs2, vs1, vl);
}

vfloat32m1_t test_vfwredosum_vs_f16mf2_f32m1_tu(vfloat32m1_t vd, vfloat16mf2_t vs2, vfloat32m1_t vs1, size_t vl) {
  return __riscv_vfwredosum_tu(vd, vs2, vs1, vl);
}

vfloat32m1_t test_vfwredosum_vs_f16m1_f32m1_tu(vfloat32m1_t vd, vfloat16m1_t vs2, vfloat32m1_t vs1, size_t vl) {
  return __riscv_vfwredosum_tu(vd, vs2, vs1, vl);
}

vfloat32m1_t test_vfwredosum_vs_f16m2_f32m1_tu(vfloat32m1_t vd, vfloat16m2_t vs2, vfloat32m1_t vs1, size_t vl) {
  return __riscv_vfwredosum_tu(vd, vs2, vs1, vl);
}

vfloat32m1_t test_vfwredosum_vs_f16m4_f32m1_tu(vfloat32m1_t vd, vfloat16m4_t vs2, vfloat32m1_t vs1, size_t vl) {
  return __riscv_vfwredosum_tu(vd, vs2, vs1, vl);
}

vfloat32m1_t test_vfwredosum_vs_f16m8_f32m1_tu(vfloat32m1_t vd, vfloat16m8_t vs2, vfloat32m1_t vs1, size_t vl) {
  return __riscv_vfwredosum_tu(vd, vs2, vs1, vl);
}

vfloat64m1_t test_vfwredosum_vs_f32mf2_f64m1_tu(vfloat64m1_t vd, vfloat32mf2_t vs2, vfloat64m1_t vs1, size_t vl) {
  return __riscv_vfwredosum_tu(vd, vs2, vs1, vl);
}

vfloat64m1_t test_vfwredosum_vs_f32m1_f64m1_tu(vfloat64m1_t vd, vfloat32m1_t vs2, vfloat64m1_t vs1, size_t vl) {
  return __riscv_vfwredosum_tu(vd, vs2, vs1, vl);
}

vfloat64m1_t test_vfwredosum_vs_f32m2_f64m1_tu(vfloat64m1_t vd, vfloat32m2_t vs2, vfloat64m1_t vs1, size_t vl) {
  return __riscv_vfwredosum_tu(vd, vs2, vs1, vl);
}

vfloat64m1_t test_vfwredosum_vs_f32m4_f64m1_tu(vfloat64m1_t vd, vfloat32m4_t vs2, vfloat64m1_t vs1, size_t vl) {
  return __riscv_vfwredosum_tu(vd, vs2, vs1, vl);
}

vfloat64m1_t test_vfwredosum_vs_f32m8_f64m1_tu(vfloat64m1_t vd, vfloat32m8_t vs2, vfloat64m1_t vs1, size_t vl) {
  return __riscv_vfwredosum_tu(vd, vs2, vs1, vl);
}

vfloat32m1_t test_vfwredosum_vs_f16mf4_f32m1_tum(vbool64_t vm, vfloat32m1_t vd, vfloat16mf4_t vs2, vfloat32m1_t vs1, size_t vl) {
  return __riscv_vfwredosum_tum(vm, vd, vs2, vs1, vl);
}

vfloat32m1_t test_vfwredosum_vs_f16mf2_f32m1_tum(vbool32_t vm, vfloat32m1_t vd, vfloat16mf2_t vs2, vfloat32m1_t vs1, size_t vl) {
  return __riscv_vfwredosum_tum(vm, vd, vs2, vs1, vl);
}

vfloat32m1_t test_vfwredosum_vs_f16m1_f32m1_tum(vbool16_t vm, vfloat32m1_t vd, vfloat16m1_t vs2, vfloat32m1_t vs1, size_t vl) {
  return __riscv_vfwredosum_tum(vm, vd, vs2, vs1, vl);
}

vfloat32m1_t test_vfwredosum_vs_f16m2_f32m1_tum(vbool8_t vm, vfloat32m1_t vd, vfloat16m2_t vs2, vfloat32m1_t vs1, size_t vl) {
  return __riscv_vfwredosum_tum(vm, vd, vs2, vs1, vl);
}

vfloat32m1_t test_vfwredosum_vs_f16m4_f32m1_tum(vbool4_t vm, vfloat32m1_t vd, vfloat16m4_t vs2, vfloat32m1_t vs1, size_t vl) {
  return __riscv_vfwredosum_tum(vm, vd, vs2, vs1, vl);
}

vfloat32m1_t test_vfwredosum_vs_f16m8_f32m1_tum(vbool2_t vm, vfloat32m1_t vd, vfloat16m8_t vs2, vfloat32m1_t vs1, size_t vl) {
  return __riscv_vfwredosum_tum(vm, vd, vs2, vs1, vl);
}

vfloat64m1_t test_vfwredosum_vs_f32mf2_f64m1_tum(vbool64_t vm, vfloat64m1_t vd, vfloat32mf2_t vs2, vfloat64m1_t vs1, size_t vl) {
  return __riscv_vfwredosum_tum(vm, vd, vs2, vs1, vl);
}

vfloat64m1_t test_vfwredosum_vs_f32m1_f64m1_tum(vbool32_t vm, vfloat64m1_t vd, vfloat32m1_t vs2, vfloat64m1_t vs1, size_t vl) {
  return __riscv_vfwredosum_tum(vm, vd, vs2, vs1, vl);
}

vfloat64m1_t test_vfwredosum_vs_f32m2_f64m1_tum(vbool16_t vm, vfloat64m1_t vd, vfloat32m2_t vs2, vfloat64m1_t vs1, size_t vl) {
  return __riscv_vfwredosum_tum(vm, vd, vs2, vs1, vl);
}

vfloat64m1_t test_vfwredosum_vs_f32m4_f64m1_tum(vbool8_t vm, vfloat64m1_t vd, vfloat32m4_t vs2, vfloat64m1_t vs1, size_t vl) {
  return __riscv_vfwredosum_tum(vm, vd, vs2, vs1, vl);
}

vfloat64m1_t test_vfwredosum_vs_f32m8_f64m1_tum(vbool4_t vm, vfloat64m1_t vd, vfloat32m8_t vs2, vfloat64m1_t vs1, size_t vl) {
  return __riscv_vfwredosum_tum(vm, vd, vs2, vs1, vl);
}

vfloat32m1_t test_vfwredosum_vs_f16mf4_f32m1_rm_tu(vfloat32m1_t vd, vfloat16mf4_t vs2, vfloat32m1_t vs1, size_t vl) {
  return __riscv_vfwredosum_tu(vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfwredosum_vs_f16mf2_f32m1_rm_tu(vfloat32m1_t vd, vfloat16mf2_t vs2, vfloat32m1_t vs1, size_t vl) {
  return __riscv_vfwredosum_tu(vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfwredosum_vs_f16m1_f32m1_rm_tu(vfloat32m1_t vd, vfloat16m1_t vs2, vfloat32m1_t vs1, size_t vl) {
  return __riscv_vfwredosum_tu(vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfwredosum_vs_f16m2_f32m1_rm_tu(vfloat32m1_t vd, vfloat16m2_t vs2, vfloat32m1_t vs1, size_t vl) {
  return __riscv_vfwredosum_tu(vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfwredosum_vs_f16m4_f32m1_rm_tu(vfloat32m1_t vd, vfloat16m4_t vs2, vfloat32m1_t vs1, size_t vl) {
  return __riscv_vfwredosum_tu(vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfwredosum_vs_f16m8_f32m1_rm_tu(vfloat32m1_t vd, vfloat16m8_t vs2, vfloat32m1_t vs1, size_t vl) {
  return __riscv_vfwredosum_tu(vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat64m1_t test_vfwredosum_vs_f32mf2_f64m1_rm_tu(vfloat64m1_t vd, vfloat32mf2_t vs2, vfloat64m1_t vs1, size_t vl) {
  return __riscv_vfwredosum_tu(vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat64m1_t test_vfwredosum_vs_f32m1_f64m1_rm_tu(vfloat64m1_t vd, vfloat32m1_t vs2, vfloat64m1_t vs1, size_t vl) {
  return __riscv_vfwredosum_tu(vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat64m1_t test_vfwredosum_vs_f32m2_f64m1_rm_tu(vfloat64m1_t vd, vfloat32m2_t vs2, vfloat64m1_t vs1, size_t vl) {
  return __riscv_vfwredosum_tu(vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat64m1_t test_vfwredosum_vs_f32m4_f64m1_rm_tu(vfloat64m1_t vd, vfloat32m4_t vs2, vfloat64m1_t vs1, size_t vl) {
  return __riscv_vfwredosum_tu(vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat64m1_t test_vfwredosum_vs_f32m8_f64m1_rm_tu(vfloat64m1_t vd, vfloat32m8_t vs2, vfloat64m1_t vs1, size_t vl) {
  return __riscv_vfwredosum_tu(vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfwredosum_vs_f16mf4_f32m1_rm_tum(vbool64_t vm, vfloat32m1_t vd, vfloat16mf4_t vs2, vfloat32m1_t vs1, size_t vl) {
  return __riscv_vfwredosum_tum(vm, vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfwredosum_vs_f16mf2_f32m1_rm_tum(vbool32_t vm, vfloat32m1_t vd, vfloat16mf2_t vs2, vfloat32m1_t vs1, size_t vl) {
  return __riscv_vfwredosum_tum(vm, vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfwredosum_vs_f16m1_f32m1_rm_tum(vbool16_t vm, vfloat32m1_t vd, vfloat16m1_t vs2, vfloat32m1_t vs1, size_t vl) {
  return __riscv_vfwredosum_tum(vm, vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfwredosum_vs_f16m2_f32m1_rm_tum(vbool8_t vm, vfloat32m1_t vd, vfloat16m2_t vs2, vfloat32m1_t vs1, size_t vl) {
  return __riscv_vfwredosum_tum(vm, vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfwredosum_vs_f16m4_f32m1_rm_tum(vbool4_t vm, vfloat32m1_t vd, vfloat16m4_t vs2, vfloat32m1_t vs1, size_t vl) {
  return __riscv_vfwredosum_tum(vm, vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfwredosum_vs_f16m8_f32m1_rm_tum(vbool2_t vm, vfloat32m1_t vd, vfloat16m8_t vs2, vfloat32m1_t vs1, size_t vl) {
  return __riscv_vfwredosum_tum(vm, vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat64m1_t test_vfwredosum_vs_f32mf2_f64m1_rm_tum(vbool64_t vm, vfloat64m1_t vd, vfloat32mf2_t vs2, vfloat64m1_t vs1, size_t vl) {
  return __riscv_vfwredosum_tum(vm, vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat64m1_t test_vfwredosum_vs_f32m1_f64m1_rm_tum(vbool32_t vm, vfloat64m1_t vd, vfloat32m1_t vs2, vfloat64m1_t vs1, size_t vl) {
  return __riscv_vfwredosum_tum(vm, vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat64m1_t test_vfwredosum_vs_f32m2_f64m1_rm_tum(vbool16_t vm, vfloat64m1_t vd, vfloat32m2_t vs2, vfloat64m1_t vs1, size_t vl) {
  return __riscv_vfwredosum_tum(vm, vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat64m1_t test_vfwredosum_vs_f32m4_f64m1_rm_tum(vbool8_t vm, vfloat64m1_t vd, vfloat32m4_t vs2, vfloat64m1_t vs1, size_t vl) {
  return __riscv_vfwredosum_tum(vm, vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat64m1_t test_vfwredosum_vs_f32m8_f64m1_rm_tum(vbool4_t vm, vfloat64m1_t vd, vfloat32m8_t vs2, vfloat64m1_t vs1, size_t vl) {
  return __riscv_vfwredosum_tum(vm, vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

/* { dg-final { scan-assembler-times {vseti?vli\s+[a-z0-9]+,\s*[a-z0-9]+,\s*e[0-9]+,\s*mf?[1248],\s*t[au],\s*m[au]\s+vfwredosum\.[ivxfswum.]+\s+} 44 } } */
