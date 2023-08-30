/* { dg-do compile } */
/* { dg-options "-march=rv32gc_zve64d -mabi=ilp32d -Wno-psabi -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include "riscv_vector.h"

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
vint64m1_t test_vfwcvt_rtz_x_f_v_i64m1(vfloat32mf2_t src, size_t vl) {
  return __riscv_vfwcvt_rtz_x(src, vl);
}

vint64m2_t test_vfwcvt_rtz_x_f_v_i64m2(vfloat32m1_t src, size_t vl) {
  return __riscv_vfwcvt_rtz_x(src, vl);
}

vint64m4_t test_vfwcvt_rtz_x_f_v_i64m4(vfloat32m2_t src, size_t vl) {
  return __riscv_vfwcvt_rtz_x(src, vl);
}

vint64m8_t test_vfwcvt_rtz_x_f_v_i64m8(vfloat32m4_t src, size_t vl) {
  return __riscv_vfwcvt_rtz_x(src, vl);
}

vuint64m1_t test_vfwcvt_rtz_xu_f_v_u64m1(vfloat32mf2_t src, size_t vl) {
  return __riscv_vfwcvt_rtz_xu(src, vl);
}

vuint64m2_t test_vfwcvt_rtz_xu_f_v_u64m2(vfloat32m1_t src, size_t vl) {
  return __riscv_vfwcvt_rtz_xu(src, vl);
}

vuint64m4_t test_vfwcvt_rtz_xu_f_v_u64m4(vfloat32m2_t src, size_t vl) {
  return __riscv_vfwcvt_rtz_xu(src, vl);
}

vuint64m8_t test_vfwcvt_rtz_xu_f_v_u64m8(vfloat32m4_t src, size_t vl) {
  return __riscv_vfwcvt_rtz_xu(src, vl);
}

vint64m1_t test_vfwcvt_rtz_x_f_v_i64m1_m(vbool64_t mask, vfloat32mf2_t src, size_t vl) {
  return __riscv_vfwcvt_rtz_x(mask, src, vl);
}

vint64m2_t test_vfwcvt_rtz_x_f_v_i64m2_m(vbool32_t mask, vfloat32m1_t src, size_t vl) {
  return __riscv_vfwcvt_rtz_x(mask, src, vl);
}

vint64m4_t test_vfwcvt_rtz_x_f_v_i64m4_m(vbool16_t mask, vfloat32m2_t src, size_t vl) {
  return __riscv_vfwcvt_rtz_x(mask, src, vl);
}

vint64m8_t test_vfwcvt_rtz_x_f_v_i64m8_m(vbool8_t mask, vfloat32m4_t src, size_t vl) {
  return __riscv_vfwcvt_rtz_x(mask, src, vl);
}

vuint64m1_t test_vfwcvt_rtz_xu_f_v_u64m1_m(vbool64_t mask, vfloat32mf2_t src, size_t vl) {
  return __riscv_vfwcvt_rtz_xu(mask, src, vl);
}

vuint64m2_t test_vfwcvt_rtz_xu_f_v_u64m2_m(vbool32_t mask, vfloat32m1_t src, size_t vl) {
  return __riscv_vfwcvt_rtz_xu(mask, src, vl);
}

vuint64m4_t test_vfwcvt_rtz_xu_f_v_u64m4_m(vbool16_t mask, vfloat32m2_t src, size_t vl) {
  return __riscv_vfwcvt_rtz_xu(mask, src, vl);
}

vuint64m8_t test_vfwcvt_rtz_xu_f_v_u64m8_m(vbool8_t mask, vfloat32m4_t src, size_t vl) {
  return __riscv_vfwcvt_rtz_xu(mask, src, vl);
}

/* { dg-final { scan-assembler-times {vseti?vli\s+[a-z0-9]+,\s*[a-z0-9]+,\s*e[0-9]+,\s*mf?[1248],\s*t[au],\s*m[au]\s+vfwcvt\.rtz[ivxfswum.]*\s+} 16 } } */
