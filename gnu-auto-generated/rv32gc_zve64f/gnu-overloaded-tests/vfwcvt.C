/* { dg-do compile } */
/* { dg-options "-march=rv32gc_zve64f -mabi=ilp32d -Wno-psabi -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include "riscv_vector.h"

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
vfloat32mf2_t test_vfwcvt_f_x_v_f32mf2(vint16mf4_t src, size_t vl) {
  return __riscv_vfwcvt_f(src, vl);
}

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

vfloat32mf2_t test_vfwcvt_f_xu_v_f32mf2(vuint16mf4_t src, size_t vl) {
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

vint64m1_t test_vfwcvt_x_f_v_i64m1(vfloat32mf2_t src, size_t vl) {
  return __riscv_vfwcvt_x(src, vl);
}

vint64m2_t test_vfwcvt_x_f_v_i64m2(vfloat32m1_t src, size_t vl) {
  return __riscv_vfwcvt_x(src, vl);
}

vint64m4_t test_vfwcvt_x_f_v_i64m4(vfloat32m2_t src, size_t vl) {
  return __riscv_vfwcvt_x(src, vl);
}

vint64m8_t test_vfwcvt_x_f_v_i64m8(vfloat32m4_t src, size_t vl) {
  return __riscv_vfwcvt_x(src, vl);
}

vuint64m1_t test_vfwcvt_xu_f_v_u64m1(vfloat32mf2_t src, size_t vl) {
  return __riscv_vfwcvt_xu(src, vl);
}

vuint64m2_t test_vfwcvt_xu_f_v_u64m2(vfloat32m1_t src, size_t vl) {
  return __riscv_vfwcvt_xu(src, vl);
}

vuint64m4_t test_vfwcvt_xu_f_v_u64m4(vfloat32m2_t src, size_t vl) {
  return __riscv_vfwcvt_xu(src, vl);
}

vuint64m8_t test_vfwcvt_xu_f_v_u64m8(vfloat32m4_t src, size_t vl) {
  return __riscv_vfwcvt_xu(src, vl);
}

vfloat32mf2_t test_vfwcvt_f_x_v_f32mf2_m(vbool64_t mask, vint16mf4_t src, size_t vl) {
  return __riscv_vfwcvt_f(mask, src, vl);
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

vfloat32mf2_t test_vfwcvt_f_xu_v_f32mf2_m(vbool64_t mask, vuint16mf4_t src, size_t vl) {
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

vint64m1_t test_vfwcvt_x_f_v_i64m1_m(vbool64_t mask, vfloat32mf2_t src, size_t vl) {
  return __riscv_vfwcvt_x(mask, src, vl);
}

vint64m2_t test_vfwcvt_x_f_v_i64m2_m(vbool32_t mask, vfloat32m1_t src, size_t vl) {
  return __riscv_vfwcvt_x(mask, src, vl);
}

vint64m4_t test_vfwcvt_x_f_v_i64m4_m(vbool16_t mask, vfloat32m2_t src, size_t vl) {
  return __riscv_vfwcvt_x(mask, src, vl);
}

vint64m8_t test_vfwcvt_x_f_v_i64m8_m(vbool8_t mask, vfloat32m4_t src, size_t vl) {
  return __riscv_vfwcvt_x(mask, src, vl);
}

vuint64m1_t test_vfwcvt_xu_f_v_u64m1_m(vbool64_t mask, vfloat32mf2_t src, size_t vl) {
  return __riscv_vfwcvt_xu(mask, src, vl);
}

vuint64m2_t test_vfwcvt_xu_f_v_u64m2_m(vbool32_t mask, vfloat32m1_t src, size_t vl) {
  return __riscv_vfwcvt_xu(mask, src, vl);
}

vuint64m4_t test_vfwcvt_xu_f_v_u64m4_m(vbool16_t mask, vfloat32m2_t src, size_t vl) {
  return __riscv_vfwcvt_xu(mask, src, vl);
}

vuint64m8_t test_vfwcvt_xu_f_v_u64m8_m(vbool8_t mask, vfloat32m4_t src, size_t vl) {
  return __riscv_vfwcvt_xu(mask, src, vl);
}

vint64m1_t test_vfwcvt_x_f_v_i64m1_rm(vfloat32mf2_t src, size_t vl) {
  return __riscv_vfwcvt_x(src, __RISCV_FRM_RNE, vl);
}

vint64m2_t test_vfwcvt_x_f_v_i64m2_rm(vfloat32m1_t src, size_t vl) {
  return __riscv_vfwcvt_x(src, __RISCV_FRM_RNE, vl);
}

vint64m4_t test_vfwcvt_x_f_v_i64m4_rm(vfloat32m2_t src, size_t vl) {
  return __riscv_vfwcvt_x(src, __RISCV_FRM_RNE, vl);
}

vint64m8_t test_vfwcvt_x_f_v_i64m8_rm(vfloat32m4_t src, size_t vl) {
  return __riscv_vfwcvt_x(src, __RISCV_FRM_RNE, vl);
}

vuint64m1_t test_vfwcvt_xu_f_v_u64m1_rm(vfloat32mf2_t src, size_t vl) {
  return __riscv_vfwcvt_xu(src, __RISCV_FRM_RNE, vl);
}

vuint64m2_t test_vfwcvt_xu_f_v_u64m2_rm(vfloat32m1_t src, size_t vl) {
  return __riscv_vfwcvt_xu(src, __RISCV_FRM_RNE, vl);
}

vuint64m4_t test_vfwcvt_xu_f_v_u64m4_rm(vfloat32m2_t src, size_t vl) {
  return __riscv_vfwcvt_xu(src, __RISCV_FRM_RNE, vl);
}

vuint64m8_t test_vfwcvt_xu_f_v_u64m8_rm(vfloat32m4_t src, size_t vl) {
  return __riscv_vfwcvt_xu(src, __RISCV_FRM_RNE, vl);
}

vint64m1_t test_vfwcvt_x_f_v_i64m1_rm_m(vbool64_t mask, vfloat32mf2_t src, size_t vl) {
  return __riscv_vfwcvt_x(mask, src, __RISCV_FRM_RNE, vl);
}

vint64m2_t test_vfwcvt_x_f_v_i64m2_rm_m(vbool32_t mask, vfloat32m1_t src, size_t vl) {
  return __riscv_vfwcvt_x(mask, src, __RISCV_FRM_RNE, vl);
}

vint64m4_t test_vfwcvt_x_f_v_i64m4_rm_m(vbool16_t mask, vfloat32m2_t src, size_t vl) {
  return __riscv_vfwcvt_x(mask, src, __RISCV_FRM_RNE, vl);
}

vint64m8_t test_vfwcvt_x_f_v_i64m8_rm_m(vbool8_t mask, vfloat32m4_t src, size_t vl) {
  return __riscv_vfwcvt_x(mask, src, __RISCV_FRM_RNE, vl);
}

vuint64m1_t test_vfwcvt_xu_f_v_u64m1_rm_m(vbool64_t mask, vfloat32mf2_t src, size_t vl) {
  return __riscv_vfwcvt_xu(mask, src, __RISCV_FRM_RNE, vl);
}

vuint64m2_t test_vfwcvt_xu_f_v_u64m2_rm_m(vbool32_t mask, vfloat32m1_t src, size_t vl) {
  return __riscv_vfwcvt_xu(mask, src, __RISCV_FRM_RNE, vl);
}

vuint64m4_t test_vfwcvt_xu_f_v_u64m4_rm_m(vbool16_t mask, vfloat32m2_t src, size_t vl) {
  return __riscv_vfwcvt_xu(mask, src, __RISCV_FRM_RNE, vl);
}

vuint64m8_t test_vfwcvt_xu_f_v_u64m8_rm_m(vbool8_t mask, vfloat32m4_t src, size_t vl) {
  return __riscv_vfwcvt_xu(mask, src, __RISCV_FRM_RNE, vl);
}

/* { dg-final { scan-assembler-times {vseti?vli\s+[a-z0-9]+,\s*[a-z0-9]+,\s*e[0-9]+,\s*mf?[1248],\s*t[au],\s*m[au]\s+vfwcvt\.[ivxfswum.]+\s+} 52 } } */
