/* { dg-do compile } */
/* { dg-options "-march=rv64gcv -mabi=lp64d -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
vfloat32mf2_t test_vfmerge_vfm_f32mf2(vfloat32mf2_t op1, float32_t op2, vbool64_t mask, size_t vl) {
  return __riscv_vfmerge_vfm_f32mf2(op1, op2, mask, vl);
}

vfloat32m1_t test_vfmerge_vfm_f32m1(vfloat32m1_t op1, float32_t op2, vbool32_t mask, size_t vl) {
  return __riscv_vfmerge_vfm_f32m1(op1, op2, mask, vl);
}

vfloat32m2_t test_vfmerge_vfm_f32m2(vfloat32m2_t op1, float32_t op2, vbool16_t mask, size_t vl) {
  return __riscv_vfmerge_vfm_f32m2(op1, op2, mask, vl);
}

vfloat32m4_t test_vfmerge_vfm_f32m4(vfloat32m4_t op1, float32_t op2, vbool8_t mask, size_t vl) {
  return __riscv_vfmerge_vfm_f32m4(op1, op2, mask, vl);
}

vfloat32m8_t test_vfmerge_vfm_f32m8(vfloat32m8_t op1, float32_t op2, vbool4_t mask, size_t vl) {
  return __riscv_vfmerge_vfm_f32m8(op1, op2, mask, vl);
}

vfloat64m1_t test_vfmerge_vfm_f64m1(vfloat64m1_t op1, float64_t op2, vbool64_t mask, size_t vl) {
  return __riscv_vfmerge_vfm_f64m1(op1, op2, mask, vl);
}

vfloat64m2_t test_vfmerge_vfm_f64m2(vfloat64m2_t op1, float64_t op2, vbool32_t mask, size_t vl) {
  return __riscv_vfmerge_vfm_f64m2(op1, op2, mask, vl);
}

vfloat64m4_t test_vfmerge_vfm_f64m4(vfloat64m4_t op1, float64_t op2, vbool16_t mask, size_t vl) {
  return __riscv_vfmerge_vfm_f64m4(op1, op2, mask, vl);
}

vfloat64m8_t test_vfmerge_vfm_f64m8(vfloat64m8_t op1, float64_t op2, vbool8_t mask, size_t vl) {
  return __riscv_vfmerge_vfm_f64m8(op1, op2, mask, vl);
}

/* { dg-final { scan-assembler-times {vseti?vli\s+[a-z0-9]+,\s*[a-z0-9]+,\s*e[0-9]+,\s*mf?[1248],\s*t[au],\s*m[au]\s+vfmerge\.[ivxfswum.]+\s+} 9 } } */
