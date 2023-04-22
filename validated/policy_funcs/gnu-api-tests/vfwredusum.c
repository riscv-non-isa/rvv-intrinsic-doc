/* { dg-do compile } */
/* { dg-options "-march=rv64gcv -mabi=lp64d -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
vfloat64m1_t test_vfwredusum_vs_f32mf2_f64m1_tu(vfloat64m1_t maskedoff, vfloat32mf2_t vector, vfloat64m1_t scalar, size_t vl) {
  return __riscv_vfwredusum_vs_f32mf2_f64m1_tu(maskedoff, vector, scalar, vl);
}

vfloat64m1_t test_vfwredusum_vs_f32m1_f64m1_tu(vfloat64m1_t maskedoff, vfloat32m1_t vector, vfloat64m1_t scalar, size_t vl) {
  return __riscv_vfwredusum_vs_f32m1_f64m1_tu(maskedoff, vector, scalar, vl);
}

vfloat64m1_t test_vfwredusum_vs_f32m2_f64m1_tu(vfloat64m1_t maskedoff, vfloat32m2_t vector, vfloat64m1_t scalar, size_t vl) {
  return __riscv_vfwredusum_vs_f32m2_f64m1_tu(maskedoff, vector, scalar, vl);
}

vfloat64m1_t test_vfwredusum_vs_f32m4_f64m1_tu(vfloat64m1_t maskedoff, vfloat32m4_t vector, vfloat64m1_t scalar, size_t vl) {
  return __riscv_vfwredusum_vs_f32m4_f64m1_tu(maskedoff, vector, scalar, vl);
}

vfloat64m1_t test_vfwredusum_vs_f32m8_f64m1_tu(vfloat64m1_t maskedoff, vfloat32m8_t vector, vfloat64m1_t scalar, size_t vl) {
  return __riscv_vfwredusum_vs_f32m8_f64m1_tu(maskedoff, vector, scalar, vl);
}

vfloat64m1_t test_vfwredusum_vs_f32mf2_f64m1_tum(vbool64_t mask, vfloat64m1_t maskedoff, vfloat32mf2_t vector, vfloat64m1_t scalar, size_t vl) {
  return __riscv_vfwredusum_vs_f32mf2_f64m1_tum(mask, maskedoff, vector, scalar, vl);
}

vfloat64m1_t test_vfwredusum_vs_f32m1_f64m1_tum(vbool32_t mask, vfloat64m1_t maskedoff, vfloat32m1_t vector, vfloat64m1_t scalar, size_t vl) {
  return __riscv_vfwredusum_vs_f32m1_f64m1_tum(mask, maskedoff, vector, scalar, vl);
}

vfloat64m1_t test_vfwredusum_vs_f32m2_f64m1_tum(vbool16_t mask, vfloat64m1_t maskedoff, vfloat32m2_t vector, vfloat64m1_t scalar, size_t vl) {
  return __riscv_vfwredusum_vs_f32m2_f64m1_tum(mask, maskedoff, vector, scalar, vl);
}

vfloat64m1_t test_vfwredusum_vs_f32m4_f64m1_tum(vbool8_t mask, vfloat64m1_t maskedoff, vfloat32m4_t vector, vfloat64m1_t scalar, size_t vl) {
  return __riscv_vfwredusum_vs_f32m4_f64m1_tum(mask, maskedoff, vector, scalar, vl);
}

vfloat64m1_t test_vfwredusum_vs_f32m8_f64m1_tum(vbool4_t mask, vfloat64m1_t maskedoff, vfloat32m8_t vector, vfloat64m1_t scalar, size_t vl) {
  return __riscv_vfwredusum_vs_f32m8_f64m1_tum(mask, maskedoff, vector, scalar, vl);
}

/* { dg-final { scan-assembler-times {vseti?vli\s+[a-z0-9]+,\s*[a-z0-9]+,\s*e[0-9]+,\s*mf?[1248],\s*t[au],\s*m[au]\s+vfwredusum\.[ivxfswum.]+\s+} 10 } } */
