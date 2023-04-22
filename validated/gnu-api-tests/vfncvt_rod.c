/* { dg-do compile } */
/* { dg-options "-march=rv64gcv -mabi=lp64d -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
vfloat32mf2_t test_vfncvt_rod_f_f_w_f32mf2(vfloat64m1_t src, size_t vl) {
  return __riscv_vfncvt_rod_f_f_w_f32mf2(src, vl);
}

vfloat32m1_t test_vfncvt_rod_f_f_w_f32m1(vfloat64m2_t src, size_t vl) {
  return __riscv_vfncvt_rod_f_f_w_f32m1(src, vl);
}

vfloat32m2_t test_vfncvt_rod_f_f_w_f32m2(vfloat64m4_t src, size_t vl) {
  return __riscv_vfncvt_rod_f_f_w_f32m2(src, vl);
}

vfloat32m4_t test_vfncvt_rod_f_f_w_f32m4(vfloat64m8_t src, size_t vl) {
  return __riscv_vfncvt_rod_f_f_w_f32m4(src, vl);
}

vfloat32mf2_t test_vfncvt_rod_f_f_w_f32mf2_m(vbool64_t mask, vfloat64m1_t src, size_t vl) {
  return __riscv_vfncvt_rod_f_f_w_f32mf2_m(mask, src, vl);
}

vfloat32m1_t test_vfncvt_rod_f_f_w_f32m1_m(vbool32_t mask, vfloat64m2_t src, size_t vl) {
  return __riscv_vfncvt_rod_f_f_w_f32m1_m(mask, src, vl);
}

vfloat32m2_t test_vfncvt_rod_f_f_w_f32m2_m(vbool16_t mask, vfloat64m4_t src, size_t vl) {
  return __riscv_vfncvt_rod_f_f_w_f32m2_m(mask, src, vl);
}

vfloat32m4_t test_vfncvt_rod_f_f_w_f32m4_m(vbool8_t mask, vfloat64m8_t src, size_t vl) {
  return __riscv_vfncvt_rod_f_f_w_f32m4_m(mask, src, vl);
}

/* { dg-final { scan-assembler-times {vseti?vli\s+[a-z0-9]+,\s*[a-z0-9]+,\s*e[0-9]+,\s*mf?[1248],\s*t[au],\s*m[au]\s+vfncvt\.rod[ivxfswum.]*\s+} 8 } } */
