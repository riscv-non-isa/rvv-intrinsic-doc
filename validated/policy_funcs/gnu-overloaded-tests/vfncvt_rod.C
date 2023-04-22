/* { dg-do compile } */
/* { dg-options "-march=rv64gcv -mabi=lp64d -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
vfloat32mf2_t test_vfncvt_rod_f_f_w_f32mf2_tu(vfloat32mf2_t maskedoff, vfloat64m1_t src, size_t vl) {
  return __riscv_vfncvt_rod_f_tu(maskedoff, src, vl);
}

vfloat32m1_t test_vfncvt_rod_f_f_w_f32m1_tu(vfloat32m1_t maskedoff, vfloat64m2_t src, size_t vl) {
  return __riscv_vfncvt_rod_f_tu(maskedoff, src, vl);
}

vfloat32m2_t test_vfncvt_rod_f_f_w_f32m2_tu(vfloat32m2_t maskedoff, vfloat64m4_t src, size_t vl) {
  return __riscv_vfncvt_rod_f_tu(maskedoff, src, vl);
}

vfloat32m4_t test_vfncvt_rod_f_f_w_f32m4_tu(vfloat32m4_t maskedoff, vfloat64m8_t src, size_t vl) {
  return __riscv_vfncvt_rod_f_tu(maskedoff, src, vl);
}

vfloat32mf2_t test_vfncvt_rod_f_f_w_f32mf2_tum(vbool64_t mask, vfloat32mf2_t maskedoff, vfloat64m1_t src, size_t vl) {
  return __riscv_vfncvt_rod_f_tum(mask, maskedoff, src, vl);
}

vfloat32m1_t test_vfncvt_rod_f_f_w_f32m1_tum(vbool32_t mask, vfloat32m1_t maskedoff, vfloat64m2_t src, size_t vl) {
  return __riscv_vfncvt_rod_f_tum(mask, maskedoff, src, vl);
}

vfloat32m2_t test_vfncvt_rod_f_f_w_f32m2_tum(vbool16_t mask, vfloat32m2_t maskedoff, vfloat64m4_t src, size_t vl) {
  return __riscv_vfncvt_rod_f_tum(mask, maskedoff, src, vl);
}

vfloat32m4_t test_vfncvt_rod_f_f_w_f32m4_tum(vbool8_t mask, vfloat32m4_t maskedoff, vfloat64m8_t src, size_t vl) {
  return __riscv_vfncvt_rod_f_tum(mask, maskedoff, src, vl);
}

vfloat32mf2_t test_vfncvt_rod_f_f_w_f32mf2_tumu(vbool64_t mask, vfloat32mf2_t maskedoff, vfloat64m1_t src, size_t vl) {
  return __riscv_vfncvt_rod_f_tumu(mask, maskedoff, src, vl);
}

vfloat32m1_t test_vfncvt_rod_f_f_w_f32m1_tumu(vbool32_t mask, vfloat32m1_t maskedoff, vfloat64m2_t src, size_t vl) {
  return __riscv_vfncvt_rod_f_tumu(mask, maskedoff, src, vl);
}

vfloat32m2_t test_vfncvt_rod_f_f_w_f32m2_tumu(vbool16_t mask, vfloat32m2_t maskedoff, vfloat64m4_t src, size_t vl) {
  return __riscv_vfncvt_rod_f_tumu(mask, maskedoff, src, vl);
}

vfloat32m4_t test_vfncvt_rod_f_f_w_f32m4_tumu(vbool8_t mask, vfloat32m4_t maskedoff, vfloat64m8_t src, size_t vl) {
  return __riscv_vfncvt_rod_f_tumu(mask, maskedoff, src, vl);
}

vfloat32mf2_t test_vfncvt_rod_f_f_w_f32mf2_mu(vbool64_t mask, vfloat32mf2_t maskedoff, vfloat64m1_t src, size_t vl) {
  return __riscv_vfncvt_rod_f_mu(mask, maskedoff, src, vl);
}

vfloat32m1_t test_vfncvt_rod_f_f_w_f32m1_mu(vbool32_t mask, vfloat32m1_t maskedoff, vfloat64m2_t src, size_t vl) {
  return __riscv_vfncvt_rod_f_mu(mask, maskedoff, src, vl);
}

vfloat32m2_t test_vfncvt_rod_f_f_w_f32m2_mu(vbool16_t mask, vfloat32m2_t maskedoff, vfloat64m4_t src, size_t vl) {
  return __riscv_vfncvt_rod_f_mu(mask, maskedoff, src, vl);
}

vfloat32m4_t test_vfncvt_rod_f_f_w_f32m4_mu(vbool8_t mask, vfloat32m4_t maskedoff, vfloat64m8_t src, size_t vl) {
  return __riscv_vfncvt_rod_f_mu(mask, maskedoff, src, vl);
}

/* { dg-final { scan-assembler-times {vseti?vli\s+[a-z0-9]+,\s*[a-z0-9]+,\s*e[0-9]+,\s*mf?[1248],\s*t[au],\s*m[au]\s+vfncvt\.rod[ivxfswum.]*\s+} 16 } } */
