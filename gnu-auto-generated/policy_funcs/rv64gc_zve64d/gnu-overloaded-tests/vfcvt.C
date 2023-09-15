/* { dg-do compile } */
/* { dg-options "-march=rv64gc_zve64d -mabi=lp64d -Wno-psabi -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include "riscv_vector.h"

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
vint32mf2_t test_vfcvt_x_f_v_i32mf2(vfloat32mf2_t src, size_t vl) {
  return __riscv_vfcvt_x(src, vl);
}

vint32m1_t test_vfcvt_x_f_v_i32m1(vfloat32m1_t src, size_t vl) {
  return __riscv_vfcvt_x(src, vl);
}

vint32m2_t test_vfcvt_x_f_v_i32m2(vfloat32m2_t src, size_t vl) {
  return __riscv_vfcvt_x(src, vl);
}

vint32m4_t test_vfcvt_x_f_v_i32m4(vfloat32m4_t src, size_t vl) {
  return __riscv_vfcvt_x(src, vl);
}

vint32m8_t test_vfcvt_x_f_v_i32m8(vfloat32m8_t src, size_t vl) {
  return __riscv_vfcvt_x(src, vl);
}

vuint32mf2_t test_vfcvt_xu_f_v_u32mf2(vfloat32mf2_t src, size_t vl) {
  return __riscv_vfcvt_xu(src, vl);
}

vuint32m1_t test_vfcvt_xu_f_v_u32m1(vfloat32m1_t src, size_t vl) {
  return __riscv_vfcvt_xu(src, vl);
}

vuint32m2_t test_vfcvt_xu_f_v_u32m2(vfloat32m2_t src, size_t vl) {
  return __riscv_vfcvt_xu(src, vl);
}

vuint32m4_t test_vfcvt_xu_f_v_u32m4(vfloat32m4_t src, size_t vl) {
  return __riscv_vfcvt_xu(src, vl);
}

vuint32m8_t test_vfcvt_xu_f_v_u32m8(vfloat32m8_t src, size_t vl) {
  return __riscv_vfcvt_xu(src, vl);
}

vfloat32mf2_t test_vfcvt_f_x_v_f32mf2(vint32mf2_t src, size_t vl) {
  return __riscv_vfcvt_f(src, vl);
}

vfloat32m1_t test_vfcvt_f_x_v_f32m1(vint32m1_t src, size_t vl) {
  return __riscv_vfcvt_f(src, vl);
}

vfloat32m2_t test_vfcvt_f_x_v_f32m2(vint32m2_t src, size_t vl) {
  return __riscv_vfcvt_f(src, vl);
}

vfloat32m4_t test_vfcvt_f_x_v_f32m4(vint32m4_t src, size_t vl) {
  return __riscv_vfcvt_f(src, vl);
}

vfloat32m8_t test_vfcvt_f_x_v_f32m8(vint32m8_t src, size_t vl) {
  return __riscv_vfcvt_f(src, vl);
}

vfloat32mf2_t test_vfcvt_f_xu_v_f32mf2(vuint32mf2_t src, size_t vl) {
  return __riscv_vfcvt_f(src, vl);
}

vfloat32m1_t test_vfcvt_f_xu_v_f32m1(vuint32m1_t src, size_t vl) {
  return __riscv_vfcvt_f(src, vl);
}

vfloat32m2_t test_vfcvt_f_xu_v_f32m2(vuint32m2_t src, size_t vl) {
  return __riscv_vfcvt_f(src, vl);
}

vfloat32m4_t test_vfcvt_f_xu_v_f32m4(vuint32m4_t src, size_t vl) {
  return __riscv_vfcvt_f(src, vl);
}

vfloat32m8_t test_vfcvt_f_xu_v_f32m8(vuint32m8_t src, size_t vl) {
  return __riscv_vfcvt_f(src, vl);
}

vint64m1_t test_vfcvt_x_f_v_i64m1(vfloat64m1_t src, size_t vl) {
  return __riscv_vfcvt_x(src, vl);
}

vint64m2_t test_vfcvt_x_f_v_i64m2(vfloat64m2_t src, size_t vl) {
  return __riscv_vfcvt_x(src, vl);
}

vint64m4_t test_vfcvt_x_f_v_i64m4(vfloat64m4_t src, size_t vl) {
  return __riscv_vfcvt_x(src, vl);
}

vint64m8_t test_vfcvt_x_f_v_i64m8(vfloat64m8_t src, size_t vl) {
  return __riscv_vfcvt_x(src, vl);
}

vuint64m1_t test_vfcvt_xu_f_v_u64m1(vfloat64m1_t src, size_t vl) {
  return __riscv_vfcvt_xu(src, vl);
}

vuint64m2_t test_vfcvt_xu_f_v_u64m2(vfloat64m2_t src, size_t vl) {
  return __riscv_vfcvt_xu(src, vl);
}

vuint64m4_t test_vfcvt_xu_f_v_u64m4(vfloat64m4_t src, size_t vl) {
  return __riscv_vfcvt_xu(src, vl);
}

vuint64m8_t test_vfcvt_xu_f_v_u64m8(vfloat64m8_t src, size_t vl) {
  return __riscv_vfcvt_xu(src, vl);
}

vfloat64m1_t test_vfcvt_f_x_v_f64m1(vint64m1_t src, size_t vl) {
  return __riscv_vfcvt_f(src, vl);
}

vfloat64m2_t test_vfcvt_f_x_v_f64m2(vint64m2_t src, size_t vl) {
  return __riscv_vfcvt_f(src, vl);
}

vfloat64m4_t test_vfcvt_f_x_v_f64m4(vint64m4_t src, size_t vl) {
  return __riscv_vfcvt_f(src, vl);
}

vfloat64m8_t test_vfcvt_f_x_v_f64m8(vint64m8_t src, size_t vl) {
  return __riscv_vfcvt_f(src, vl);
}

vfloat64m1_t test_vfcvt_f_xu_v_f64m1(vuint64m1_t src, size_t vl) {
  return __riscv_vfcvt_f(src, vl);
}

vfloat64m2_t test_vfcvt_f_xu_v_f64m2(vuint64m2_t src, size_t vl) {
  return __riscv_vfcvt_f(src, vl);
}

vfloat64m4_t test_vfcvt_f_xu_v_f64m4(vuint64m4_t src, size_t vl) {
  return __riscv_vfcvt_f(src, vl);
}

vfloat64m8_t test_vfcvt_f_xu_v_f64m8(vuint64m8_t src, size_t vl) {
  return __riscv_vfcvt_f(src, vl);
}

vint32mf2_t test_vfcvt_x_f_v_i32mf2_m(vbool64_t mask, vfloat32mf2_t src, size_t vl) {
  return __riscv_vfcvt_x(mask, src, vl);
}

vint32m1_t test_vfcvt_x_f_v_i32m1_m(vbool32_t mask, vfloat32m1_t src, size_t vl) {
  return __riscv_vfcvt_x(mask, src, vl);
}

vint32m2_t test_vfcvt_x_f_v_i32m2_m(vbool16_t mask, vfloat32m2_t src, size_t vl) {
  return __riscv_vfcvt_x(mask, src, vl);
}

vint32m4_t test_vfcvt_x_f_v_i32m4_m(vbool8_t mask, vfloat32m4_t src, size_t vl) {
  return __riscv_vfcvt_x(mask, src, vl);
}

vint32m8_t test_vfcvt_x_f_v_i32m8_m(vbool4_t mask, vfloat32m8_t src, size_t vl) {
  return __riscv_vfcvt_x(mask, src, vl);
}

vuint32mf2_t test_vfcvt_xu_f_v_u32mf2_m(vbool64_t mask, vfloat32mf2_t src, size_t vl) {
  return __riscv_vfcvt_xu(mask, src, vl);
}

vuint32m1_t test_vfcvt_xu_f_v_u32m1_m(vbool32_t mask, vfloat32m1_t src, size_t vl) {
  return __riscv_vfcvt_xu(mask, src, vl);
}

vuint32m2_t test_vfcvt_xu_f_v_u32m2_m(vbool16_t mask, vfloat32m2_t src, size_t vl) {
  return __riscv_vfcvt_xu(mask, src, vl);
}

vuint32m4_t test_vfcvt_xu_f_v_u32m4_m(vbool8_t mask, vfloat32m4_t src, size_t vl) {
  return __riscv_vfcvt_xu(mask, src, vl);
}

vuint32m8_t test_vfcvt_xu_f_v_u32m8_m(vbool4_t mask, vfloat32m8_t src, size_t vl) {
  return __riscv_vfcvt_xu(mask, src, vl);
}

vfloat32mf2_t test_vfcvt_f_x_v_f32mf2_m(vbool64_t mask, vint32mf2_t src, size_t vl) {
  return __riscv_vfcvt_f(mask, src, vl);
}

vfloat32m1_t test_vfcvt_f_x_v_f32m1_m(vbool32_t mask, vint32m1_t src, size_t vl) {
  return __riscv_vfcvt_f(mask, src, vl);
}

vfloat32m2_t test_vfcvt_f_x_v_f32m2_m(vbool16_t mask, vint32m2_t src, size_t vl) {
  return __riscv_vfcvt_f(mask, src, vl);
}

vfloat32m4_t test_vfcvt_f_x_v_f32m4_m(vbool8_t mask, vint32m4_t src, size_t vl) {
  return __riscv_vfcvt_f(mask, src, vl);
}

vfloat32m8_t test_vfcvt_f_x_v_f32m8_m(vbool4_t mask, vint32m8_t src, size_t vl) {
  return __riscv_vfcvt_f(mask, src, vl);
}

vfloat32mf2_t test_vfcvt_f_xu_v_f32mf2_m(vbool64_t mask, vuint32mf2_t src, size_t vl) {
  return __riscv_vfcvt_f(mask, src, vl);
}

vfloat32m1_t test_vfcvt_f_xu_v_f32m1_m(vbool32_t mask, vuint32m1_t src, size_t vl) {
  return __riscv_vfcvt_f(mask, src, vl);
}

vfloat32m2_t test_vfcvt_f_xu_v_f32m2_m(vbool16_t mask, vuint32m2_t src, size_t vl) {
  return __riscv_vfcvt_f(mask, src, vl);
}

vfloat32m4_t test_vfcvt_f_xu_v_f32m4_m(vbool8_t mask, vuint32m4_t src, size_t vl) {
  return __riscv_vfcvt_f(mask, src, vl);
}

vfloat32m8_t test_vfcvt_f_xu_v_f32m8_m(vbool4_t mask, vuint32m8_t src, size_t vl) {
  return __riscv_vfcvt_f(mask, src, vl);
}

vint64m1_t test_vfcvt_x_f_v_i64m1_m(vbool64_t mask, vfloat64m1_t src, size_t vl) {
  return __riscv_vfcvt_x(mask, src, vl);
}

vint64m2_t test_vfcvt_x_f_v_i64m2_m(vbool32_t mask, vfloat64m2_t src, size_t vl) {
  return __riscv_vfcvt_x(mask, src, vl);
}

vint64m4_t test_vfcvt_x_f_v_i64m4_m(vbool16_t mask, vfloat64m4_t src, size_t vl) {
  return __riscv_vfcvt_x(mask, src, vl);
}

vint64m8_t test_vfcvt_x_f_v_i64m8_m(vbool8_t mask, vfloat64m8_t src, size_t vl) {
  return __riscv_vfcvt_x(mask, src, vl);
}

vuint64m1_t test_vfcvt_xu_f_v_u64m1_m(vbool64_t mask, vfloat64m1_t src, size_t vl) {
  return __riscv_vfcvt_xu(mask, src, vl);
}

vuint64m2_t test_vfcvt_xu_f_v_u64m2_m(vbool32_t mask, vfloat64m2_t src, size_t vl) {
  return __riscv_vfcvt_xu(mask, src, vl);
}

vuint64m4_t test_vfcvt_xu_f_v_u64m4_m(vbool16_t mask, vfloat64m4_t src, size_t vl) {
  return __riscv_vfcvt_xu(mask, src, vl);
}

vuint64m8_t test_vfcvt_xu_f_v_u64m8_m(vbool8_t mask, vfloat64m8_t src, size_t vl) {
  return __riscv_vfcvt_xu(mask, src, vl);
}

vfloat64m1_t test_vfcvt_f_x_v_f64m1_m(vbool64_t mask, vint64m1_t src, size_t vl) {
  return __riscv_vfcvt_f(mask, src, vl);
}

vfloat64m2_t test_vfcvt_f_x_v_f64m2_m(vbool32_t mask, vint64m2_t src, size_t vl) {
  return __riscv_vfcvt_f(mask, src, vl);
}

vfloat64m4_t test_vfcvt_f_x_v_f64m4_m(vbool16_t mask, vint64m4_t src, size_t vl) {
  return __riscv_vfcvt_f(mask, src, vl);
}

vfloat64m8_t test_vfcvt_f_x_v_f64m8_m(vbool8_t mask, vint64m8_t src, size_t vl) {
  return __riscv_vfcvt_f(mask, src, vl);
}

vfloat64m1_t test_vfcvt_f_xu_v_f64m1_m(vbool64_t mask, vuint64m1_t src, size_t vl) {
  return __riscv_vfcvt_f(mask, src, vl);
}

vfloat64m2_t test_vfcvt_f_xu_v_f64m2_m(vbool32_t mask, vuint64m2_t src, size_t vl) {
  return __riscv_vfcvt_f(mask, src, vl);
}

vfloat64m4_t test_vfcvt_f_xu_v_f64m4_m(vbool16_t mask, vuint64m4_t src, size_t vl) {
  return __riscv_vfcvt_f(mask, src, vl);
}

vfloat64m8_t test_vfcvt_f_xu_v_f64m8_m(vbool8_t mask, vuint64m8_t src, size_t vl) {
  return __riscv_vfcvt_f(mask, src, vl);
}

vint32mf2_t test_vfcvt_x_f_v_i32mf2_rm(vfloat32mf2_t src, size_t vl) {
  return __riscv_vfcvt_x(src, __RISCV_FRM_RNE, vl);
}

vint32m1_t test_vfcvt_x_f_v_i32m1_rm(vfloat32m1_t src, size_t vl) {
  return __riscv_vfcvt_x(src, __RISCV_FRM_RNE, vl);
}

vint32m2_t test_vfcvt_x_f_v_i32m2_rm(vfloat32m2_t src, size_t vl) {
  return __riscv_vfcvt_x(src, __RISCV_FRM_RNE, vl);
}

vint32m4_t test_vfcvt_x_f_v_i32m4_rm(vfloat32m4_t src, size_t vl) {
  return __riscv_vfcvt_x(src, __RISCV_FRM_RNE, vl);
}

vint32m8_t test_vfcvt_x_f_v_i32m8_rm(vfloat32m8_t src, size_t vl) {
  return __riscv_vfcvt_x(src, __RISCV_FRM_RNE, vl);
}

vuint32mf2_t test_vfcvt_xu_f_v_u32mf2_rm(vfloat32mf2_t src, size_t vl) {
  return __riscv_vfcvt_xu(src, __RISCV_FRM_RNE, vl);
}

vuint32m1_t test_vfcvt_xu_f_v_u32m1_rm(vfloat32m1_t src, size_t vl) {
  return __riscv_vfcvt_xu(src, __RISCV_FRM_RNE, vl);
}

vuint32m2_t test_vfcvt_xu_f_v_u32m2_rm(vfloat32m2_t src, size_t vl) {
  return __riscv_vfcvt_xu(src, __RISCV_FRM_RNE, vl);
}

vuint32m4_t test_vfcvt_xu_f_v_u32m4_rm(vfloat32m4_t src, size_t vl) {
  return __riscv_vfcvt_xu(src, __RISCV_FRM_RNE, vl);
}

vuint32m8_t test_vfcvt_xu_f_v_u32m8_rm(vfloat32m8_t src, size_t vl) {
  return __riscv_vfcvt_xu(src, __RISCV_FRM_RNE, vl);
}

vfloat32mf2_t test_vfcvt_f_x_v_f32mf2_rm(vint32mf2_t src, size_t vl) {
  return __riscv_vfcvt_f(src, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfcvt_f_x_v_f32m1_rm(vint32m1_t src, size_t vl) {
  return __riscv_vfcvt_f(src, __RISCV_FRM_RNE, vl);
}

vfloat32m2_t test_vfcvt_f_x_v_f32m2_rm(vint32m2_t src, size_t vl) {
  return __riscv_vfcvt_f(src, __RISCV_FRM_RNE, vl);
}

vfloat32m4_t test_vfcvt_f_x_v_f32m4_rm(vint32m4_t src, size_t vl) {
  return __riscv_vfcvt_f(src, __RISCV_FRM_RNE, vl);
}

vfloat32m8_t test_vfcvt_f_x_v_f32m8_rm(vint32m8_t src, size_t vl) {
  return __riscv_vfcvt_f(src, __RISCV_FRM_RNE, vl);
}

vfloat32mf2_t test_vfcvt_f_xu_v_f32mf2_rm(vuint32mf2_t src, size_t vl) {
  return __riscv_vfcvt_f(src, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfcvt_f_xu_v_f32m1_rm(vuint32m1_t src, size_t vl) {
  return __riscv_vfcvt_f(src, __RISCV_FRM_RNE, vl);
}

vfloat32m2_t test_vfcvt_f_xu_v_f32m2_rm(vuint32m2_t src, size_t vl) {
  return __riscv_vfcvt_f(src, __RISCV_FRM_RNE, vl);
}

vfloat32m4_t test_vfcvt_f_xu_v_f32m4_rm(vuint32m4_t src, size_t vl) {
  return __riscv_vfcvt_f(src, __RISCV_FRM_RNE, vl);
}

vfloat32m8_t test_vfcvt_f_xu_v_f32m8_rm(vuint32m8_t src, size_t vl) {
  return __riscv_vfcvt_f(src, __RISCV_FRM_RNE, vl);
}

vint64m1_t test_vfcvt_x_f_v_i64m1_rm(vfloat64m1_t src, size_t vl) {
  return __riscv_vfcvt_x(src, __RISCV_FRM_RNE, vl);
}

vint64m2_t test_vfcvt_x_f_v_i64m2_rm(vfloat64m2_t src, size_t vl) {
  return __riscv_vfcvt_x(src, __RISCV_FRM_RNE, vl);
}

vint64m4_t test_vfcvt_x_f_v_i64m4_rm(vfloat64m4_t src, size_t vl) {
  return __riscv_vfcvt_x(src, __RISCV_FRM_RNE, vl);
}

vint64m8_t test_vfcvt_x_f_v_i64m8_rm(vfloat64m8_t src, size_t vl) {
  return __riscv_vfcvt_x(src, __RISCV_FRM_RNE, vl);
}

vuint64m1_t test_vfcvt_xu_f_v_u64m1_rm(vfloat64m1_t src, size_t vl) {
  return __riscv_vfcvt_xu(src, __RISCV_FRM_RNE, vl);
}

vuint64m2_t test_vfcvt_xu_f_v_u64m2_rm(vfloat64m2_t src, size_t vl) {
  return __riscv_vfcvt_xu(src, __RISCV_FRM_RNE, vl);
}

vuint64m4_t test_vfcvt_xu_f_v_u64m4_rm(vfloat64m4_t src, size_t vl) {
  return __riscv_vfcvt_xu(src, __RISCV_FRM_RNE, vl);
}

vuint64m8_t test_vfcvt_xu_f_v_u64m8_rm(vfloat64m8_t src, size_t vl) {
  return __riscv_vfcvt_xu(src, __RISCV_FRM_RNE, vl);
}

vfloat64m1_t test_vfcvt_f_x_v_f64m1_rm(vint64m1_t src, size_t vl) {
  return __riscv_vfcvt_f(src, __RISCV_FRM_RNE, vl);
}

vfloat64m2_t test_vfcvt_f_x_v_f64m2_rm(vint64m2_t src, size_t vl) {
  return __riscv_vfcvt_f(src, __RISCV_FRM_RNE, vl);
}

vfloat64m4_t test_vfcvt_f_x_v_f64m4_rm(vint64m4_t src, size_t vl) {
  return __riscv_vfcvt_f(src, __RISCV_FRM_RNE, vl);
}

vfloat64m8_t test_vfcvt_f_x_v_f64m8_rm(vint64m8_t src, size_t vl) {
  return __riscv_vfcvt_f(src, __RISCV_FRM_RNE, vl);
}

vfloat64m1_t test_vfcvt_f_xu_v_f64m1_rm(vuint64m1_t src, size_t vl) {
  return __riscv_vfcvt_f(src, __RISCV_FRM_RNE, vl);
}

vfloat64m2_t test_vfcvt_f_xu_v_f64m2_rm(vuint64m2_t src, size_t vl) {
  return __riscv_vfcvt_f(src, __RISCV_FRM_RNE, vl);
}

vfloat64m4_t test_vfcvt_f_xu_v_f64m4_rm(vuint64m4_t src, size_t vl) {
  return __riscv_vfcvt_f(src, __RISCV_FRM_RNE, vl);
}

vfloat64m8_t test_vfcvt_f_xu_v_f64m8_rm(vuint64m8_t src, size_t vl) {
  return __riscv_vfcvt_f(src, __RISCV_FRM_RNE, vl);
}

vint32mf2_t test_vfcvt_x_f_v_i32mf2_rm_m(vbool64_t mask, vfloat32mf2_t src, size_t vl) {
  return __riscv_vfcvt_x(mask, src, __RISCV_FRM_RNE, vl);
}

vint32m1_t test_vfcvt_x_f_v_i32m1_rm_m(vbool32_t mask, vfloat32m1_t src, size_t vl) {
  return __riscv_vfcvt_x(mask, src, __RISCV_FRM_RNE, vl);
}

vint32m2_t test_vfcvt_x_f_v_i32m2_rm_m(vbool16_t mask, vfloat32m2_t src, size_t vl) {
  return __riscv_vfcvt_x(mask, src, __RISCV_FRM_RNE, vl);
}

vint32m4_t test_vfcvt_x_f_v_i32m4_rm_m(vbool8_t mask, vfloat32m4_t src, size_t vl) {
  return __riscv_vfcvt_x(mask, src, __RISCV_FRM_RNE, vl);
}

vint32m8_t test_vfcvt_x_f_v_i32m8_rm_m(vbool4_t mask, vfloat32m8_t src, size_t vl) {
  return __riscv_vfcvt_x(mask, src, __RISCV_FRM_RNE, vl);
}

vuint32mf2_t test_vfcvt_xu_f_v_u32mf2_rm_m(vbool64_t mask, vfloat32mf2_t src, size_t vl) {
  return __riscv_vfcvt_xu(mask, src, __RISCV_FRM_RNE, vl);
}

vuint32m1_t test_vfcvt_xu_f_v_u32m1_rm_m(vbool32_t mask, vfloat32m1_t src, size_t vl) {
  return __riscv_vfcvt_xu(mask, src, __RISCV_FRM_RNE, vl);
}

vuint32m2_t test_vfcvt_xu_f_v_u32m2_rm_m(vbool16_t mask, vfloat32m2_t src, size_t vl) {
  return __riscv_vfcvt_xu(mask, src, __RISCV_FRM_RNE, vl);
}

vuint32m4_t test_vfcvt_xu_f_v_u32m4_rm_m(vbool8_t mask, vfloat32m4_t src, size_t vl) {
  return __riscv_vfcvt_xu(mask, src, __RISCV_FRM_RNE, vl);
}

vuint32m8_t test_vfcvt_xu_f_v_u32m8_rm_m(vbool4_t mask, vfloat32m8_t src, size_t vl) {
  return __riscv_vfcvt_xu(mask, src, __RISCV_FRM_RNE, vl);
}

vfloat32mf2_t test_vfcvt_f_x_v_f32mf2_rm_m(vbool64_t mask, vint32mf2_t src, size_t vl) {
  return __riscv_vfcvt_f(mask, src, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfcvt_f_x_v_f32m1_rm_m(vbool32_t mask, vint32m1_t src, size_t vl) {
  return __riscv_vfcvt_f(mask, src, __RISCV_FRM_RNE, vl);
}

vfloat32m2_t test_vfcvt_f_x_v_f32m2_rm_m(vbool16_t mask, vint32m2_t src, size_t vl) {
  return __riscv_vfcvt_f(mask, src, __RISCV_FRM_RNE, vl);
}

vfloat32m4_t test_vfcvt_f_x_v_f32m4_rm_m(vbool8_t mask, vint32m4_t src, size_t vl) {
  return __riscv_vfcvt_f(mask, src, __RISCV_FRM_RNE, vl);
}

vfloat32m8_t test_vfcvt_f_x_v_f32m8_rm_m(vbool4_t mask, vint32m8_t src, size_t vl) {
  return __riscv_vfcvt_f(mask, src, __RISCV_FRM_RNE, vl);
}

vfloat32mf2_t test_vfcvt_f_xu_v_f32mf2_rm_m(vbool64_t mask, vuint32mf2_t src, size_t vl) {
  return __riscv_vfcvt_f(mask, src, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfcvt_f_xu_v_f32m1_rm_m(vbool32_t mask, vuint32m1_t src, size_t vl) {
  return __riscv_vfcvt_f(mask, src, __RISCV_FRM_RNE, vl);
}

vfloat32m2_t test_vfcvt_f_xu_v_f32m2_rm_m(vbool16_t mask, vuint32m2_t src, size_t vl) {
  return __riscv_vfcvt_f(mask, src, __RISCV_FRM_RNE, vl);
}

vfloat32m4_t test_vfcvt_f_xu_v_f32m4_rm_m(vbool8_t mask, vuint32m4_t src, size_t vl) {
  return __riscv_vfcvt_f(mask, src, __RISCV_FRM_RNE, vl);
}

vfloat32m8_t test_vfcvt_f_xu_v_f32m8_rm_m(vbool4_t mask, vuint32m8_t src, size_t vl) {
  return __riscv_vfcvt_f(mask, src, __RISCV_FRM_RNE, vl);
}

vint64m1_t test_vfcvt_x_f_v_i64m1_rm_m(vbool64_t mask, vfloat64m1_t src, size_t vl) {
  return __riscv_vfcvt_x(mask, src, __RISCV_FRM_RNE, vl);
}

vint64m2_t test_vfcvt_x_f_v_i64m2_rm_m(vbool32_t mask, vfloat64m2_t src, size_t vl) {
  return __riscv_vfcvt_x(mask, src, __RISCV_FRM_RNE, vl);
}

vint64m4_t test_vfcvt_x_f_v_i64m4_rm_m(vbool16_t mask, vfloat64m4_t src, size_t vl) {
  return __riscv_vfcvt_x(mask, src, __RISCV_FRM_RNE, vl);
}

vint64m8_t test_vfcvt_x_f_v_i64m8_rm_m(vbool8_t mask, vfloat64m8_t src, size_t vl) {
  return __riscv_vfcvt_x(mask, src, __RISCV_FRM_RNE, vl);
}

vuint64m1_t test_vfcvt_xu_f_v_u64m1_rm_m(vbool64_t mask, vfloat64m1_t src, size_t vl) {
  return __riscv_vfcvt_xu(mask, src, __RISCV_FRM_RNE, vl);
}

vuint64m2_t test_vfcvt_xu_f_v_u64m2_rm_m(vbool32_t mask, vfloat64m2_t src, size_t vl) {
  return __riscv_vfcvt_xu(mask, src, __RISCV_FRM_RNE, vl);
}

vuint64m4_t test_vfcvt_xu_f_v_u64m4_rm_m(vbool16_t mask, vfloat64m4_t src, size_t vl) {
  return __riscv_vfcvt_xu(mask, src, __RISCV_FRM_RNE, vl);
}

vuint64m8_t test_vfcvt_xu_f_v_u64m8_rm_m(vbool8_t mask, vfloat64m8_t src, size_t vl) {
  return __riscv_vfcvt_xu(mask, src, __RISCV_FRM_RNE, vl);
}

vfloat64m1_t test_vfcvt_f_x_v_f64m1_rm_m(vbool64_t mask, vint64m1_t src, size_t vl) {
  return __riscv_vfcvt_f(mask, src, __RISCV_FRM_RNE, vl);
}

vfloat64m2_t test_vfcvt_f_x_v_f64m2_rm_m(vbool32_t mask, vint64m2_t src, size_t vl) {
  return __riscv_vfcvt_f(mask, src, __RISCV_FRM_RNE, vl);
}

vfloat64m4_t test_vfcvt_f_x_v_f64m4_rm_m(vbool16_t mask, vint64m4_t src, size_t vl) {
  return __riscv_vfcvt_f(mask, src, __RISCV_FRM_RNE, vl);
}

vfloat64m8_t test_vfcvt_f_x_v_f64m8_rm_m(vbool8_t mask, vint64m8_t src, size_t vl) {
  return __riscv_vfcvt_f(mask, src, __RISCV_FRM_RNE, vl);
}

vfloat64m1_t test_vfcvt_f_xu_v_f64m1_rm_m(vbool64_t mask, vuint64m1_t src, size_t vl) {
  return __riscv_vfcvt_f(mask, src, __RISCV_FRM_RNE, vl);
}

vfloat64m2_t test_vfcvt_f_xu_v_f64m2_rm_m(vbool32_t mask, vuint64m2_t src, size_t vl) {
  return __riscv_vfcvt_f(mask, src, __RISCV_FRM_RNE, vl);
}

vfloat64m4_t test_vfcvt_f_xu_v_f64m4_rm_m(vbool16_t mask, vuint64m4_t src, size_t vl) {
  return __riscv_vfcvt_f(mask, src, __RISCV_FRM_RNE, vl);
}

vfloat64m8_t test_vfcvt_f_xu_v_f64m8_rm_m(vbool8_t mask, vuint64m8_t src, size_t vl) {
  return __riscv_vfcvt_f(mask, src, __RISCV_FRM_RNE, vl);
}

/* { dg-final { scan-assembler-times {vseti?vli\s+[a-z0-9]+,\s*[a-z0-9]+,\s*e[0-9]+,\s*mf?[1248],\s*t[au],\s*m[au]\s+vfcvt\.[ivxfswum.]+\s+} 144 } } */
