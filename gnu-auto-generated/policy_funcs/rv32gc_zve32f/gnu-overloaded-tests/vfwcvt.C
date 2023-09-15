/* { dg-do compile } */
/* { dg-options "-march=rv32gc_zve32f -mabi=ilp32d -Wno-psabi -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include "riscv_vector.h"

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
vfloat32m1_t test_vfwcvt_f_x_v_f32m1(vint16mf2_t src, size_t vl) {
  return __riscv_vfwcvt_f(src, vl);
}

vfloat32m2_t test_vfwcvt_f_x_v_f32m2(vint16m1_t src, size_t vl) {
  return __riscv_vfwcvt_f(src, vl);
}

vfloat32m4_t test_vfwcvt_f_x_v_f32m4(vint16m2_t src, size_t vl) {
  return __riscv_vfwcvt_f(src, vl);
}

vfloat32m8_t test_vfwcvt_f_x_v_f32m8(vint16m4_t src, size_t vl) {
  return __riscv_vfwcvt_f(src, vl);
}

vfloat32m1_t test_vfwcvt_f_xu_v_f32m1(vuint16mf2_t src, size_t vl) {
  return __riscv_vfwcvt_f(src, vl);
}

vfloat32m2_t test_vfwcvt_f_xu_v_f32m2(vuint16m1_t src, size_t vl) {
  return __riscv_vfwcvt_f(src, vl);
}

vfloat32m4_t test_vfwcvt_f_xu_v_f32m4(vuint16m2_t src, size_t vl) {
  return __riscv_vfwcvt_f(src, vl);
}

vfloat32m8_t test_vfwcvt_f_xu_v_f32m8(vuint16m4_t src, size_t vl) {
  return __riscv_vfwcvt_f(src, vl);
}

vfloat32m1_t test_vfwcvt_f_x_v_f32m1_m(vbool32_t mask, vint16mf2_t src, size_t vl) {
  return __riscv_vfwcvt_f(mask, src, vl);
}

vfloat32m2_t test_vfwcvt_f_x_v_f32m2_m(vbool16_t mask, vint16m1_t src, size_t vl) {
  return __riscv_vfwcvt_f(mask, src, vl);
}

vfloat32m4_t test_vfwcvt_f_x_v_f32m4_m(vbool8_t mask, vint16m2_t src, size_t vl) {
  return __riscv_vfwcvt_f(mask, src, vl);
}

vfloat32m8_t test_vfwcvt_f_x_v_f32m8_m(vbool4_t mask, vint16m4_t src, size_t vl) {
  return __riscv_vfwcvt_f(mask, src, vl);
}

vfloat32m1_t test_vfwcvt_f_xu_v_f32m1_m(vbool32_t mask, vuint16mf2_t src, size_t vl) {
  return __riscv_vfwcvt_f(mask, src, vl);
}

vfloat32m2_t test_vfwcvt_f_xu_v_f32m2_m(vbool16_t mask, vuint16m1_t src, size_t vl) {
  return __riscv_vfwcvt_f(mask, src, vl);
}

vfloat32m4_t test_vfwcvt_f_xu_v_f32m4_m(vbool8_t mask, vuint16m2_t src, size_t vl) {
  return __riscv_vfwcvt_f(mask, src, vl);
}

vfloat32m8_t test_vfwcvt_f_xu_v_f32m8_m(vbool4_t mask, vuint16m4_t src, size_t vl) {
  return __riscv_vfwcvt_f(mask, src, vl);
}

/* { dg-final { scan-assembler-times {vseti?vli\s+[a-z0-9]+,\s*[a-z0-9]+,\s*e[0-9]+,\s*mf?[1248],\s*t[au],\s*m[au]\s+vfwcvt\.[ivxfswum.]+\s+} 16 } } */
