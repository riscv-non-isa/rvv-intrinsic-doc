/* { dg-do compile } */
/* { dg-options "-march=rv64gcv_zvfh -mabi=lp64d -Wno-psabi -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include <riscv_vector.h>

vfloat32mf2_t test_vfmerge_vfm_f32mf2(vfloat32mf2_t vs2, float rs1, vbool64_t v0, size_t vl) {
  return __riscv_vfmerge_vfm_f32mf2(vs2, rs1, v0, vl);
}

vfloat32m1_t test_vfmerge_vfm_f32m1(vfloat32m1_t vs2, float rs1, vbool32_t v0, size_t vl) {
  return __riscv_vfmerge_vfm_f32m1(vs2, rs1, v0, vl);
}

vfloat32m2_t test_vfmerge_vfm_f32m2(vfloat32m2_t vs2, float rs1, vbool16_t v0, size_t vl) {
  return __riscv_vfmerge_vfm_f32m2(vs2, rs1, v0, vl);
}

vfloat32m4_t test_vfmerge_vfm_f32m4(vfloat32m4_t vs2, float rs1, vbool8_t v0, size_t vl) {
  return __riscv_vfmerge_vfm_f32m4(vs2, rs1, v0, vl);
}

vfloat32m8_t test_vfmerge_vfm_f32m8(vfloat32m8_t vs2, float rs1, vbool4_t v0, size_t vl) {
  return __riscv_vfmerge_vfm_f32m8(vs2, rs1, v0, vl);
}

vfloat64m1_t test_vfmerge_vfm_f64m1(vfloat64m1_t vs2, double rs1, vbool64_t v0, size_t vl) {
  return __riscv_vfmerge_vfm_f64m1(vs2, rs1, v0, vl);
}

vfloat64m2_t test_vfmerge_vfm_f64m2(vfloat64m2_t vs2, double rs1, vbool32_t v0, size_t vl) {
  return __riscv_vfmerge_vfm_f64m2(vs2, rs1, v0, vl);
}

vfloat64m4_t test_vfmerge_vfm_f64m4(vfloat64m4_t vs2, double rs1, vbool16_t v0, size_t vl) {
  return __riscv_vfmerge_vfm_f64m4(vs2, rs1, v0, vl);
}

vfloat64m8_t test_vfmerge_vfm_f64m8(vfloat64m8_t vs2, double rs1, vbool8_t v0, size_t vl) {
  return __riscv_vfmerge_vfm_f64m8(vs2, rs1, v0, vl);
}
/* { dg-final { scan-assembler-times {vseti?vli\s+[a-z0-9]+,\s*[a-z0-9]+,\s*e[0-9]+,\s*mf?[1248],\s*t[au],\s*m[au]\s+vfmerge\.[ivxfswum.]+\s+} 9 } } */
