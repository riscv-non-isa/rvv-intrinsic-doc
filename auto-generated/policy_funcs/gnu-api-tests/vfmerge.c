/* { dg-do compile } */
/* { dg-options "-march=rv64gcv -mabi=lp64d -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
vfloat16mf4_t test_vfmerge_vfm_f16mf4_tu(vfloat16mf4_t maskedoff, vfloat16mf4_t op1, float16_t op2, vbool64_t mask, size_t vl) {
  return __riscv_vfmerge_vfm_f16mf4_tu(maskedoff, op1, op2, mask, vl);
}

vfloat16mf2_t test_vfmerge_vfm_f16mf2_tu(vfloat16mf2_t maskedoff, vfloat16mf2_t op1, float16_t op2, vbool32_t mask, size_t vl) {
  return __riscv_vfmerge_vfm_f16mf2_tu(maskedoff, op1, op2, mask, vl);
}

vfloat16m1_t test_vfmerge_vfm_f16m1_tu(vfloat16m1_t maskedoff, vfloat16m1_t op1, float16_t op2, vbool16_t mask, size_t vl) {
  return __riscv_vfmerge_vfm_f16m1_tu(maskedoff, op1, op2, mask, vl);
}

vfloat16m2_t test_vfmerge_vfm_f16m2_tu(vfloat16m2_t maskedoff, vfloat16m2_t op1, float16_t op2, vbool8_t mask, size_t vl) {
  return __riscv_vfmerge_vfm_f16m2_tu(maskedoff, op1, op2, mask, vl);
}

vfloat16m4_t test_vfmerge_vfm_f16m4_tu(vfloat16m4_t maskedoff, vfloat16m4_t op1, float16_t op2, vbool4_t mask, size_t vl) {
  return __riscv_vfmerge_vfm_f16m4_tu(maskedoff, op1, op2, mask, vl);
}

vfloat16m8_t test_vfmerge_vfm_f16m8_tu(vfloat16m8_t maskedoff, vfloat16m8_t op1, float16_t op2, vbool2_t mask, size_t vl) {
  return __riscv_vfmerge_vfm_f16m8_tu(maskedoff, op1, op2, mask, vl);
}

vfloat32mf2_t test_vfmerge_vfm_f32mf2_tu(vfloat32mf2_t maskedoff, vfloat32mf2_t op1, float32_t op2, vbool64_t mask, size_t vl) {
  return __riscv_vfmerge_vfm_f32mf2_tu(maskedoff, op1, op2, mask, vl);
}

vfloat32m1_t test_vfmerge_vfm_f32m1_tu(vfloat32m1_t maskedoff, vfloat32m1_t op1, float32_t op2, vbool32_t mask, size_t vl) {
  return __riscv_vfmerge_vfm_f32m1_tu(maskedoff, op1, op2, mask, vl);
}

vfloat32m2_t test_vfmerge_vfm_f32m2_tu(vfloat32m2_t maskedoff, vfloat32m2_t op1, float32_t op2, vbool16_t mask, size_t vl) {
  return __riscv_vfmerge_vfm_f32m2_tu(maskedoff, op1, op2, mask, vl);
}

vfloat32m4_t test_vfmerge_vfm_f32m4_tu(vfloat32m4_t maskedoff, vfloat32m4_t op1, float32_t op2, vbool8_t mask, size_t vl) {
  return __riscv_vfmerge_vfm_f32m4_tu(maskedoff, op1, op2, mask, vl);
}

vfloat32m8_t test_vfmerge_vfm_f32m8_tu(vfloat32m8_t maskedoff, vfloat32m8_t op1, float32_t op2, vbool4_t mask, size_t vl) {
  return __riscv_vfmerge_vfm_f32m8_tu(maskedoff, op1, op2, mask, vl);
}

vfloat64m1_t test_vfmerge_vfm_f64m1_tu(vfloat64m1_t maskedoff, vfloat64m1_t op1, float64_t op2, vbool64_t mask, size_t vl) {
  return __riscv_vfmerge_vfm_f64m1_tu(maskedoff, op1, op2, mask, vl);
}

vfloat64m2_t test_vfmerge_vfm_f64m2_tu(vfloat64m2_t maskedoff, vfloat64m2_t op1, float64_t op2, vbool32_t mask, size_t vl) {
  return __riscv_vfmerge_vfm_f64m2_tu(maskedoff, op1, op2, mask, vl);
}

vfloat64m4_t test_vfmerge_vfm_f64m4_tu(vfloat64m4_t maskedoff, vfloat64m4_t op1, float64_t op2, vbool16_t mask, size_t vl) {
  return __riscv_vfmerge_vfm_f64m4_tu(maskedoff, op1, op2, mask, vl);
}

vfloat64m8_t test_vfmerge_vfm_f64m8_tu(vfloat64m8_t maskedoff, vfloat64m8_t op1, float64_t op2, vbool8_t mask, size_t vl) {
  return __riscv_vfmerge_vfm_f64m8_tu(maskedoff, op1, op2, mask, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*[a-x0-9]+,\s*e[0-9]+,\s*m[f]?[1248],\s*t[au],\s*m[au]\s+vfmerge\.[,\sa-x0-9()]+} 15 } } */
