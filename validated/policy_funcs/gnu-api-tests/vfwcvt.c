/* { dg-do compile } */
/* { dg-options "-march=rv64gcv -mabi=lp64d -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
vfloat32mf2_t test_vfwcvt_f_x_v_f32mf2_tu(vfloat32mf2_t maskedoff, vint16mf4_t src, size_t vl) {
  return __riscv_vfwcvt_f_x_v_f32mf2_tu(maskedoff, src, vl);
}

vfloat32m1_t test_vfwcvt_f_x_v_f32m1_tu(vfloat32m1_t maskedoff, vint16mf2_t src, size_t vl) {
  return __riscv_vfwcvt_f_x_v_f32m1_tu(maskedoff, src, vl);
}

vfloat32m2_t test_vfwcvt_f_x_v_f32m2_tu(vfloat32m2_t maskedoff, vint16m1_t src, size_t vl) {
  return __riscv_vfwcvt_f_x_v_f32m2_tu(maskedoff, src, vl);
}

vfloat32m4_t test_vfwcvt_f_x_v_f32m4_tu(vfloat32m4_t maskedoff, vint16m2_t src, size_t vl) {
  return __riscv_vfwcvt_f_x_v_f32m4_tu(maskedoff, src, vl);
}

vfloat32m8_t test_vfwcvt_f_x_v_f32m8_tu(vfloat32m8_t maskedoff, vint16m4_t src, size_t vl) {
  return __riscv_vfwcvt_f_x_v_f32m8_tu(maskedoff, src, vl);
}

vfloat32mf2_t test_vfwcvt_f_xu_v_f32mf2_tu(vfloat32mf2_t maskedoff, vuint16mf4_t src, size_t vl) {
  return __riscv_vfwcvt_f_xu_v_f32mf2_tu(maskedoff, src, vl);
}

vfloat32m1_t test_vfwcvt_f_xu_v_f32m1_tu(vfloat32m1_t maskedoff, vuint16mf2_t src, size_t vl) {
  return __riscv_vfwcvt_f_xu_v_f32m1_tu(maskedoff, src, vl);
}

vfloat32m2_t test_vfwcvt_f_xu_v_f32m2_tu(vfloat32m2_t maskedoff, vuint16m1_t src, size_t vl) {
  return __riscv_vfwcvt_f_xu_v_f32m2_tu(maskedoff, src, vl);
}

vfloat32m4_t test_vfwcvt_f_xu_v_f32m4_tu(vfloat32m4_t maskedoff, vuint16m2_t src, size_t vl) {
  return __riscv_vfwcvt_f_xu_v_f32m4_tu(maskedoff, src, vl);
}

vfloat32m8_t test_vfwcvt_f_xu_v_f32m8_tu(vfloat32m8_t maskedoff, vuint16m4_t src, size_t vl) {
  return __riscv_vfwcvt_f_xu_v_f32m8_tu(maskedoff, src, vl);
}

vint64m1_t test_vfwcvt_x_f_v_i64m1_tu(vint64m1_t maskedoff, vfloat32mf2_t src, size_t vl) {
  return __riscv_vfwcvt_x_f_v_i64m1_tu(maskedoff, src, vl);
}

vint64m2_t test_vfwcvt_x_f_v_i64m2_tu(vint64m2_t maskedoff, vfloat32m1_t src, size_t vl) {
  return __riscv_vfwcvt_x_f_v_i64m2_tu(maskedoff, src, vl);
}

vint64m4_t test_vfwcvt_x_f_v_i64m4_tu(vint64m4_t maskedoff, vfloat32m2_t src, size_t vl) {
  return __riscv_vfwcvt_x_f_v_i64m4_tu(maskedoff, src, vl);
}

vint64m8_t test_vfwcvt_x_f_v_i64m8_tu(vint64m8_t maskedoff, vfloat32m4_t src, size_t vl) {
  return __riscv_vfwcvt_x_f_v_i64m8_tu(maskedoff, src, vl);
}

vuint64m1_t test_vfwcvt_xu_f_v_u64m1_tu(vuint64m1_t maskedoff, vfloat32mf2_t src, size_t vl) {
  return __riscv_vfwcvt_xu_f_v_u64m1_tu(maskedoff, src, vl);
}

vuint64m2_t test_vfwcvt_xu_f_v_u64m2_tu(vuint64m2_t maskedoff, vfloat32m1_t src, size_t vl) {
  return __riscv_vfwcvt_xu_f_v_u64m2_tu(maskedoff, src, vl);
}

vuint64m4_t test_vfwcvt_xu_f_v_u64m4_tu(vuint64m4_t maskedoff, vfloat32m2_t src, size_t vl) {
  return __riscv_vfwcvt_xu_f_v_u64m4_tu(maskedoff, src, vl);
}

vuint64m8_t test_vfwcvt_xu_f_v_u64m8_tu(vuint64m8_t maskedoff, vfloat32m4_t src, size_t vl) {
  return __riscv_vfwcvt_xu_f_v_u64m8_tu(maskedoff, src, vl);
}

vfloat64m1_t test_vfwcvt_f_x_v_f64m1_tu(vfloat64m1_t maskedoff, vint32mf2_t src, size_t vl) {
  return __riscv_vfwcvt_f_x_v_f64m1_tu(maskedoff, src, vl);
}

vfloat64m2_t test_vfwcvt_f_x_v_f64m2_tu(vfloat64m2_t maskedoff, vint32m1_t src, size_t vl) {
  return __riscv_vfwcvt_f_x_v_f64m2_tu(maskedoff, src, vl);
}

vfloat64m4_t test_vfwcvt_f_x_v_f64m4_tu(vfloat64m4_t maskedoff, vint32m2_t src, size_t vl) {
  return __riscv_vfwcvt_f_x_v_f64m4_tu(maskedoff, src, vl);
}

vfloat64m8_t test_vfwcvt_f_x_v_f64m8_tu(vfloat64m8_t maskedoff, vint32m4_t src, size_t vl) {
  return __riscv_vfwcvt_f_x_v_f64m8_tu(maskedoff, src, vl);
}

vfloat64m1_t test_vfwcvt_f_xu_v_f64m1_tu(vfloat64m1_t maskedoff, vuint32mf2_t src, size_t vl) {
  return __riscv_vfwcvt_f_xu_v_f64m1_tu(maskedoff, src, vl);
}

vfloat64m2_t test_vfwcvt_f_xu_v_f64m2_tu(vfloat64m2_t maskedoff, vuint32m1_t src, size_t vl) {
  return __riscv_vfwcvt_f_xu_v_f64m2_tu(maskedoff, src, vl);
}

vfloat64m4_t test_vfwcvt_f_xu_v_f64m4_tu(vfloat64m4_t maskedoff, vuint32m2_t src, size_t vl) {
  return __riscv_vfwcvt_f_xu_v_f64m4_tu(maskedoff, src, vl);
}

vfloat64m8_t test_vfwcvt_f_xu_v_f64m8_tu(vfloat64m8_t maskedoff, vuint32m4_t src, size_t vl) {
  return __riscv_vfwcvt_f_xu_v_f64m8_tu(maskedoff, src, vl);
}

vfloat64m1_t test_vfwcvt_f_f_v_f64m1_tu(vfloat64m1_t maskedoff, vfloat32mf2_t src, size_t vl) {
  return __riscv_vfwcvt_f_f_v_f64m1_tu(maskedoff, src, vl);
}

vfloat64m2_t test_vfwcvt_f_f_v_f64m2_tu(vfloat64m2_t maskedoff, vfloat32m1_t src, size_t vl) {
  return __riscv_vfwcvt_f_f_v_f64m2_tu(maskedoff, src, vl);
}

vfloat64m4_t test_vfwcvt_f_f_v_f64m4_tu(vfloat64m4_t maskedoff, vfloat32m2_t src, size_t vl) {
  return __riscv_vfwcvt_f_f_v_f64m4_tu(maskedoff, src, vl);
}

vfloat64m8_t test_vfwcvt_f_f_v_f64m8_tu(vfloat64m8_t maskedoff, vfloat32m4_t src, size_t vl) {
  return __riscv_vfwcvt_f_f_v_f64m8_tu(maskedoff, src, vl);
}

vfloat32mf2_t test_vfwcvt_f_x_v_f32mf2_tum(vbool64_t mask, vfloat32mf2_t maskedoff, vint16mf4_t src, size_t vl) {
  return __riscv_vfwcvt_f_x_v_f32mf2_tum(mask, maskedoff, src, vl);
}

vfloat32m1_t test_vfwcvt_f_x_v_f32m1_tum(vbool32_t mask, vfloat32m1_t maskedoff, vint16mf2_t src, size_t vl) {
  return __riscv_vfwcvt_f_x_v_f32m1_tum(mask, maskedoff, src, vl);
}

vfloat32m2_t test_vfwcvt_f_x_v_f32m2_tum(vbool16_t mask, vfloat32m2_t maskedoff, vint16m1_t src, size_t vl) {
  return __riscv_vfwcvt_f_x_v_f32m2_tum(mask, maskedoff, src, vl);
}

vfloat32m4_t test_vfwcvt_f_x_v_f32m4_tum(vbool8_t mask, vfloat32m4_t maskedoff, vint16m2_t src, size_t vl) {
  return __riscv_vfwcvt_f_x_v_f32m4_tum(mask, maskedoff, src, vl);
}

vfloat32m8_t test_vfwcvt_f_x_v_f32m8_tum(vbool4_t mask, vfloat32m8_t maskedoff, vint16m4_t src, size_t vl) {
  return __riscv_vfwcvt_f_x_v_f32m8_tum(mask, maskedoff, src, vl);
}

vfloat32mf2_t test_vfwcvt_f_xu_v_f32mf2_tum(vbool64_t mask, vfloat32mf2_t maskedoff, vuint16mf4_t src, size_t vl) {
  return __riscv_vfwcvt_f_xu_v_f32mf2_tum(mask, maskedoff, src, vl);
}

vfloat32m1_t test_vfwcvt_f_xu_v_f32m1_tum(vbool32_t mask, vfloat32m1_t maskedoff, vuint16mf2_t src, size_t vl) {
  return __riscv_vfwcvt_f_xu_v_f32m1_tum(mask, maskedoff, src, vl);
}

vfloat32m2_t test_vfwcvt_f_xu_v_f32m2_tum(vbool16_t mask, vfloat32m2_t maskedoff, vuint16m1_t src, size_t vl) {
  return __riscv_vfwcvt_f_xu_v_f32m2_tum(mask, maskedoff, src, vl);
}

vfloat32m4_t test_vfwcvt_f_xu_v_f32m4_tum(vbool8_t mask, vfloat32m4_t maskedoff, vuint16m2_t src, size_t vl) {
  return __riscv_vfwcvt_f_xu_v_f32m4_tum(mask, maskedoff, src, vl);
}

vfloat32m8_t test_vfwcvt_f_xu_v_f32m8_tum(vbool4_t mask, vfloat32m8_t maskedoff, vuint16m4_t src, size_t vl) {
  return __riscv_vfwcvt_f_xu_v_f32m8_tum(mask, maskedoff, src, vl);
}

vint64m1_t test_vfwcvt_x_f_v_i64m1_tum(vbool64_t mask, vint64m1_t maskedoff, vfloat32mf2_t src, size_t vl) {
  return __riscv_vfwcvt_x_f_v_i64m1_tum(mask, maskedoff, src, vl);
}

vint64m2_t test_vfwcvt_x_f_v_i64m2_tum(vbool32_t mask, vint64m2_t maskedoff, vfloat32m1_t src, size_t vl) {
  return __riscv_vfwcvt_x_f_v_i64m2_tum(mask, maskedoff, src, vl);
}

vint64m4_t test_vfwcvt_x_f_v_i64m4_tum(vbool16_t mask, vint64m4_t maskedoff, vfloat32m2_t src, size_t vl) {
  return __riscv_vfwcvt_x_f_v_i64m4_tum(mask, maskedoff, src, vl);
}

vint64m8_t test_vfwcvt_x_f_v_i64m8_tum(vbool8_t mask, vint64m8_t maskedoff, vfloat32m4_t src, size_t vl) {
  return __riscv_vfwcvt_x_f_v_i64m8_tum(mask, maskedoff, src, vl);
}

vuint64m1_t test_vfwcvt_xu_f_v_u64m1_tum(vbool64_t mask, vuint64m1_t maskedoff, vfloat32mf2_t src, size_t vl) {
  return __riscv_vfwcvt_xu_f_v_u64m1_tum(mask, maskedoff, src, vl);
}

vuint64m2_t test_vfwcvt_xu_f_v_u64m2_tum(vbool32_t mask, vuint64m2_t maskedoff, vfloat32m1_t src, size_t vl) {
  return __riscv_vfwcvt_xu_f_v_u64m2_tum(mask, maskedoff, src, vl);
}

vuint64m4_t test_vfwcvt_xu_f_v_u64m4_tum(vbool16_t mask, vuint64m4_t maskedoff, vfloat32m2_t src, size_t vl) {
  return __riscv_vfwcvt_xu_f_v_u64m4_tum(mask, maskedoff, src, vl);
}

vuint64m8_t test_vfwcvt_xu_f_v_u64m8_tum(vbool8_t mask, vuint64m8_t maskedoff, vfloat32m4_t src, size_t vl) {
  return __riscv_vfwcvt_xu_f_v_u64m8_tum(mask, maskedoff, src, vl);
}

vfloat64m1_t test_vfwcvt_f_x_v_f64m1_tum(vbool64_t mask, vfloat64m1_t maskedoff, vint32mf2_t src, size_t vl) {
  return __riscv_vfwcvt_f_x_v_f64m1_tum(mask, maskedoff, src, vl);
}

vfloat64m2_t test_vfwcvt_f_x_v_f64m2_tum(vbool32_t mask, vfloat64m2_t maskedoff, vint32m1_t src, size_t vl) {
  return __riscv_vfwcvt_f_x_v_f64m2_tum(mask, maskedoff, src, vl);
}

vfloat64m4_t test_vfwcvt_f_x_v_f64m4_tum(vbool16_t mask, vfloat64m4_t maskedoff, vint32m2_t src, size_t vl) {
  return __riscv_vfwcvt_f_x_v_f64m4_tum(mask, maskedoff, src, vl);
}

vfloat64m8_t test_vfwcvt_f_x_v_f64m8_tum(vbool8_t mask, vfloat64m8_t maskedoff, vint32m4_t src, size_t vl) {
  return __riscv_vfwcvt_f_x_v_f64m8_tum(mask, maskedoff, src, vl);
}

vfloat64m1_t test_vfwcvt_f_xu_v_f64m1_tum(vbool64_t mask, vfloat64m1_t maskedoff, vuint32mf2_t src, size_t vl) {
  return __riscv_vfwcvt_f_xu_v_f64m1_tum(mask, maskedoff, src, vl);
}

vfloat64m2_t test_vfwcvt_f_xu_v_f64m2_tum(vbool32_t mask, vfloat64m2_t maskedoff, vuint32m1_t src, size_t vl) {
  return __riscv_vfwcvt_f_xu_v_f64m2_tum(mask, maskedoff, src, vl);
}

vfloat64m4_t test_vfwcvt_f_xu_v_f64m4_tum(vbool16_t mask, vfloat64m4_t maskedoff, vuint32m2_t src, size_t vl) {
  return __riscv_vfwcvt_f_xu_v_f64m4_tum(mask, maskedoff, src, vl);
}

vfloat64m8_t test_vfwcvt_f_xu_v_f64m8_tum(vbool8_t mask, vfloat64m8_t maskedoff, vuint32m4_t src, size_t vl) {
  return __riscv_vfwcvt_f_xu_v_f64m8_tum(mask, maskedoff, src, vl);
}

vfloat64m1_t test_vfwcvt_f_f_v_f64m1_tum(vbool64_t mask, vfloat64m1_t maskedoff, vfloat32mf2_t src, size_t vl) {
  return __riscv_vfwcvt_f_f_v_f64m1_tum(mask, maskedoff, src, vl);
}

vfloat64m2_t test_vfwcvt_f_f_v_f64m2_tum(vbool32_t mask, vfloat64m2_t maskedoff, vfloat32m1_t src, size_t vl) {
  return __riscv_vfwcvt_f_f_v_f64m2_tum(mask, maskedoff, src, vl);
}

vfloat64m4_t test_vfwcvt_f_f_v_f64m4_tum(vbool16_t mask, vfloat64m4_t maskedoff, vfloat32m2_t src, size_t vl) {
  return __riscv_vfwcvt_f_f_v_f64m4_tum(mask, maskedoff, src, vl);
}

vfloat64m8_t test_vfwcvt_f_f_v_f64m8_tum(vbool8_t mask, vfloat64m8_t maskedoff, vfloat32m4_t src, size_t vl) {
  return __riscv_vfwcvt_f_f_v_f64m8_tum(mask, maskedoff, src, vl);
}

vfloat32mf2_t test_vfwcvt_f_x_v_f32mf2_tumu(vbool64_t mask, vfloat32mf2_t maskedoff, vint16mf4_t src, size_t vl) {
  return __riscv_vfwcvt_f_x_v_f32mf2_tumu(mask, maskedoff, src, vl);
}

vfloat32m1_t test_vfwcvt_f_x_v_f32m1_tumu(vbool32_t mask, vfloat32m1_t maskedoff, vint16mf2_t src, size_t vl) {
  return __riscv_vfwcvt_f_x_v_f32m1_tumu(mask, maskedoff, src, vl);
}

vfloat32m2_t test_vfwcvt_f_x_v_f32m2_tumu(vbool16_t mask, vfloat32m2_t maskedoff, vint16m1_t src, size_t vl) {
  return __riscv_vfwcvt_f_x_v_f32m2_tumu(mask, maskedoff, src, vl);
}

vfloat32m4_t test_vfwcvt_f_x_v_f32m4_tumu(vbool8_t mask, vfloat32m4_t maskedoff, vint16m2_t src, size_t vl) {
  return __riscv_vfwcvt_f_x_v_f32m4_tumu(mask, maskedoff, src, vl);
}

vfloat32m8_t test_vfwcvt_f_x_v_f32m8_tumu(vbool4_t mask, vfloat32m8_t maskedoff, vint16m4_t src, size_t vl) {
  return __riscv_vfwcvt_f_x_v_f32m8_tumu(mask, maskedoff, src, vl);
}

vfloat32mf2_t test_vfwcvt_f_xu_v_f32mf2_tumu(vbool64_t mask, vfloat32mf2_t maskedoff, vuint16mf4_t src, size_t vl) {
  return __riscv_vfwcvt_f_xu_v_f32mf2_tumu(mask, maskedoff, src, vl);
}

vfloat32m1_t test_vfwcvt_f_xu_v_f32m1_tumu(vbool32_t mask, vfloat32m1_t maskedoff, vuint16mf2_t src, size_t vl) {
  return __riscv_vfwcvt_f_xu_v_f32m1_tumu(mask, maskedoff, src, vl);
}

vfloat32m2_t test_vfwcvt_f_xu_v_f32m2_tumu(vbool16_t mask, vfloat32m2_t maskedoff, vuint16m1_t src, size_t vl) {
  return __riscv_vfwcvt_f_xu_v_f32m2_tumu(mask, maskedoff, src, vl);
}

vfloat32m4_t test_vfwcvt_f_xu_v_f32m4_tumu(vbool8_t mask, vfloat32m4_t maskedoff, vuint16m2_t src, size_t vl) {
  return __riscv_vfwcvt_f_xu_v_f32m4_tumu(mask, maskedoff, src, vl);
}

vfloat32m8_t test_vfwcvt_f_xu_v_f32m8_tumu(vbool4_t mask, vfloat32m8_t maskedoff, vuint16m4_t src, size_t vl) {
  return __riscv_vfwcvt_f_xu_v_f32m8_tumu(mask, maskedoff, src, vl);
}

vint64m1_t test_vfwcvt_x_f_v_i64m1_tumu(vbool64_t mask, vint64m1_t maskedoff, vfloat32mf2_t src, size_t vl) {
  return __riscv_vfwcvt_x_f_v_i64m1_tumu(mask, maskedoff, src, vl);
}

vint64m2_t test_vfwcvt_x_f_v_i64m2_tumu(vbool32_t mask, vint64m2_t maskedoff, vfloat32m1_t src, size_t vl) {
  return __riscv_vfwcvt_x_f_v_i64m2_tumu(mask, maskedoff, src, vl);
}

vint64m4_t test_vfwcvt_x_f_v_i64m4_tumu(vbool16_t mask, vint64m4_t maskedoff, vfloat32m2_t src, size_t vl) {
  return __riscv_vfwcvt_x_f_v_i64m4_tumu(mask, maskedoff, src, vl);
}

vint64m8_t test_vfwcvt_x_f_v_i64m8_tumu(vbool8_t mask, vint64m8_t maskedoff, vfloat32m4_t src, size_t vl) {
  return __riscv_vfwcvt_x_f_v_i64m8_tumu(mask, maskedoff, src, vl);
}

vuint64m1_t test_vfwcvt_xu_f_v_u64m1_tumu(vbool64_t mask, vuint64m1_t maskedoff, vfloat32mf2_t src, size_t vl) {
  return __riscv_vfwcvt_xu_f_v_u64m1_tumu(mask, maskedoff, src, vl);
}

vuint64m2_t test_vfwcvt_xu_f_v_u64m2_tumu(vbool32_t mask, vuint64m2_t maskedoff, vfloat32m1_t src, size_t vl) {
  return __riscv_vfwcvt_xu_f_v_u64m2_tumu(mask, maskedoff, src, vl);
}

vuint64m4_t test_vfwcvt_xu_f_v_u64m4_tumu(vbool16_t mask, vuint64m4_t maskedoff, vfloat32m2_t src, size_t vl) {
  return __riscv_vfwcvt_xu_f_v_u64m4_tumu(mask, maskedoff, src, vl);
}

vuint64m8_t test_vfwcvt_xu_f_v_u64m8_tumu(vbool8_t mask, vuint64m8_t maskedoff, vfloat32m4_t src, size_t vl) {
  return __riscv_vfwcvt_xu_f_v_u64m8_tumu(mask, maskedoff, src, vl);
}

vfloat64m1_t test_vfwcvt_f_x_v_f64m1_tumu(vbool64_t mask, vfloat64m1_t maskedoff, vint32mf2_t src, size_t vl) {
  return __riscv_vfwcvt_f_x_v_f64m1_tumu(mask, maskedoff, src, vl);
}

vfloat64m2_t test_vfwcvt_f_x_v_f64m2_tumu(vbool32_t mask, vfloat64m2_t maskedoff, vint32m1_t src, size_t vl) {
  return __riscv_vfwcvt_f_x_v_f64m2_tumu(mask, maskedoff, src, vl);
}

vfloat64m4_t test_vfwcvt_f_x_v_f64m4_tumu(vbool16_t mask, vfloat64m4_t maskedoff, vint32m2_t src, size_t vl) {
  return __riscv_vfwcvt_f_x_v_f64m4_tumu(mask, maskedoff, src, vl);
}

vfloat64m8_t test_vfwcvt_f_x_v_f64m8_tumu(vbool8_t mask, vfloat64m8_t maskedoff, vint32m4_t src, size_t vl) {
  return __riscv_vfwcvt_f_x_v_f64m8_tumu(mask, maskedoff, src, vl);
}

vfloat64m1_t test_vfwcvt_f_xu_v_f64m1_tumu(vbool64_t mask, vfloat64m1_t maskedoff, vuint32mf2_t src, size_t vl) {
  return __riscv_vfwcvt_f_xu_v_f64m1_tumu(mask, maskedoff, src, vl);
}

vfloat64m2_t test_vfwcvt_f_xu_v_f64m2_tumu(vbool32_t mask, vfloat64m2_t maskedoff, vuint32m1_t src, size_t vl) {
  return __riscv_vfwcvt_f_xu_v_f64m2_tumu(mask, maskedoff, src, vl);
}

vfloat64m4_t test_vfwcvt_f_xu_v_f64m4_tumu(vbool16_t mask, vfloat64m4_t maskedoff, vuint32m2_t src, size_t vl) {
  return __riscv_vfwcvt_f_xu_v_f64m4_tumu(mask, maskedoff, src, vl);
}

vfloat64m8_t test_vfwcvt_f_xu_v_f64m8_tumu(vbool8_t mask, vfloat64m8_t maskedoff, vuint32m4_t src, size_t vl) {
  return __riscv_vfwcvt_f_xu_v_f64m8_tumu(mask, maskedoff, src, vl);
}

vfloat64m1_t test_vfwcvt_f_f_v_f64m1_tumu(vbool64_t mask, vfloat64m1_t maskedoff, vfloat32mf2_t src, size_t vl) {
  return __riscv_vfwcvt_f_f_v_f64m1_tumu(mask, maskedoff, src, vl);
}

vfloat64m2_t test_vfwcvt_f_f_v_f64m2_tumu(vbool32_t mask, vfloat64m2_t maskedoff, vfloat32m1_t src, size_t vl) {
  return __riscv_vfwcvt_f_f_v_f64m2_tumu(mask, maskedoff, src, vl);
}

vfloat64m4_t test_vfwcvt_f_f_v_f64m4_tumu(vbool16_t mask, vfloat64m4_t maskedoff, vfloat32m2_t src, size_t vl) {
  return __riscv_vfwcvt_f_f_v_f64m4_tumu(mask, maskedoff, src, vl);
}

vfloat64m8_t test_vfwcvt_f_f_v_f64m8_tumu(vbool8_t mask, vfloat64m8_t maskedoff, vfloat32m4_t src, size_t vl) {
  return __riscv_vfwcvt_f_f_v_f64m8_tumu(mask, maskedoff, src, vl);
}

vfloat32mf2_t test_vfwcvt_f_x_v_f32mf2_mu(vbool64_t mask, vfloat32mf2_t maskedoff, vint16mf4_t src, size_t vl) {
  return __riscv_vfwcvt_f_x_v_f32mf2_mu(mask, maskedoff, src, vl);
}

vfloat32m1_t test_vfwcvt_f_x_v_f32m1_mu(vbool32_t mask, vfloat32m1_t maskedoff, vint16mf2_t src, size_t vl) {
  return __riscv_vfwcvt_f_x_v_f32m1_mu(mask, maskedoff, src, vl);
}

vfloat32m2_t test_vfwcvt_f_x_v_f32m2_mu(vbool16_t mask, vfloat32m2_t maskedoff, vint16m1_t src, size_t vl) {
  return __riscv_vfwcvt_f_x_v_f32m2_mu(mask, maskedoff, src, vl);
}

vfloat32m4_t test_vfwcvt_f_x_v_f32m4_mu(vbool8_t mask, vfloat32m4_t maskedoff, vint16m2_t src, size_t vl) {
  return __riscv_vfwcvt_f_x_v_f32m4_mu(mask, maskedoff, src, vl);
}

vfloat32m8_t test_vfwcvt_f_x_v_f32m8_mu(vbool4_t mask, vfloat32m8_t maskedoff, vint16m4_t src, size_t vl) {
  return __riscv_vfwcvt_f_x_v_f32m8_mu(mask, maskedoff, src, vl);
}

vfloat32mf2_t test_vfwcvt_f_xu_v_f32mf2_mu(vbool64_t mask, vfloat32mf2_t maskedoff, vuint16mf4_t src, size_t vl) {
  return __riscv_vfwcvt_f_xu_v_f32mf2_mu(mask, maskedoff, src, vl);
}

vfloat32m1_t test_vfwcvt_f_xu_v_f32m1_mu(vbool32_t mask, vfloat32m1_t maskedoff, vuint16mf2_t src, size_t vl) {
  return __riscv_vfwcvt_f_xu_v_f32m1_mu(mask, maskedoff, src, vl);
}

vfloat32m2_t test_vfwcvt_f_xu_v_f32m2_mu(vbool16_t mask, vfloat32m2_t maskedoff, vuint16m1_t src, size_t vl) {
  return __riscv_vfwcvt_f_xu_v_f32m2_mu(mask, maskedoff, src, vl);
}

vfloat32m4_t test_vfwcvt_f_xu_v_f32m4_mu(vbool8_t mask, vfloat32m4_t maskedoff, vuint16m2_t src, size_t vl) {
  return __riscv_vfwcvt_f_xu_v_f32m4_mu(mask, maskedoff, src, vl);
}

vfloat32m8_t test_vfwcvt_f_xu_v_f32m8_mu(vbool4_t mask, vfloat32m8_t maskedoff, vuint16m4_t src, size_t vl) {
  return __riscv_vfwcvt_f_xu_v_f32m8_mu(mask, maskedoff, src, vl);
}

vint64m1_t test_vfwcvt_x_f_v_i64m1_mu(vbool64_t mask, vint64m1_t maskedoff, vfloat32mf2_t src, size_t vl) {
  return __riscv_vfwcvt_x_f_v_i64m1_mu(mask, maskedoff, src, vl);
}

vint64m2_t test_vfwcvt_x_f_v_i64m2_mu(vbool32_t mask, vint64m2_t maskedoff, vfloat32m1_t src, size_t vl) {
  return __riscv_vfwcvt_x_f_v_i64m2_mu(mask, maskedoff, src, vl);
}

vint64m4_t test_vfwcvt_x_f_v_i64m4_mu(vbool16_t mask, vint64m4_t maskedoff, vfloat32m2_t src, size_t vl) {
  return __riscv_vfwcvt_x_f_v_i64m4_mu(mask, maskedoff, src, vl);
}

vint64m8_t test_vfwcvt_x_f_v_i64m8_mu(vbool8_t mask, vint64m8_t maskedoff, vfloat32m4_t src, size_t vl) {
  return __riscv_vfwcvt_x_f_v_i64m8_mu(mask, maskedoff, src, vl);
}

vuint64m1_t test_vfwcvt_xu_f_v_u64m1_mu(vbool64_t mask, vuint64m1_t maskedoff, vfloat32mf2_t src, size_t vl) {
  return __riscv_vfwcvt_xu_f_v_u64m1_mu(mask, maskedoff, src, vl);
}

vuint64m2_t test_vfwcvt_xu_f_v_u64m2_mu(vbool32_t mask, vuint64m2_t maskedoff, vfloat32m1_t src, size_t vl) {
  return __riscv_vfwcvt_xu_f_v_u64m2_mu(mask, maskedoff, src, vl);
}

vuint64m4_t test_vfwcvt_xu_f_v_u64m4_mu(vbool16_t mask, vuint64m4_t maskedoff, vfloat32m2_t src, size_t vl) {
  return __riscv_vfwcvt_xu_f_v_u64m4_mu(mask, maskedoff, src, vl);
}

vuint64m8_t test_vfwcvt_xu_f_v_u64m8_mu(vbool8_t mask, vuint64m8_t maskedoff, vfloat32m4_t src, size_t vl) {
  return __riscv_vfwcvt_xu_f_v_u64m8_mu(mask, maskedoff, src, vl);
}

vfloat64m1_t test_vfwcvt_f_x_v_f64m1_mu(vbool64_t mask, vfloat64m1_t maskedoff, vint32mf2_t src, size_t vl) {
  return __riscv_vfwcvt_f_x_v_f64m1_mu(mask, maskedoff, src, vl);
}

vfloat64m2_t test_vfwcvt_f_x_v_f64m2_mu(vbool32_t mask, vfloat64m2_t maskedoff, vint32m1_t src, size_t vl) {
  return __riscv_vfwcvt_f_x_v_f64m2_mu(mask, maskedoff, src, vl);
}

vfloat64m4_t test_vfwcvt_f_x_v_f64m4_mu(vbool16_t mask, vfloat64m4_t maskedoff, vint32m2_t src, size_t vl) {
  return __riscv_vfwcvt_f_x_v_f64m4_mu(mask, maskedoff, src, vl);
}

vfloat64m8_t test_vfwcvt_f_x_v_f64m8_mu(vbool8_t mask, vfloat64m8_t maskedoff, vint32m4_t src, size_t vl) {
  return __riscv_vfwcvt_f_x_v_f64m8_mu(mask, maskedoff, src, vl);
}

vfloat64m1_t test_vfwcvt_f_xu_v_f64m1_mu(vbool64_t mask, vfloat64m1_t maskedoff, vuint32mf2_t src, size_t vl) {
  return __riscv_vfwcvt_f_xu_v_f64m1_mu(mask, maskedoff, src, vl);
}

vfloat64m2_t test_vfwcvt_f_xu_v_f64m2_mu(vbool32_t mask, vfloat64m2_t maskedoff, vuint32m1_t src, size_t vl) {
  return __riscv_vfwcvt_f_xu_v_f64m2_mu(mask, maskedoff, src, vl);
}

vfloat64m4_t test_vfwcvt_f_xu_v_f64m4_mu(vbool16_t mask, vfloat64m4_t maskedoff, vuint32m2_t src, size_t vl) {
  return __riscv_vfwcvt_f_xu_v_f64m4_mu(mask, maskedoff, src, vl);
}

vfloat64m8_t test_vfwcvt_f_xu_v_f64m8_mu(vbool8_t mask, vfloat64m8_t maskedoff, vuint32m4_t src, size_t vl) {
  return __riscv_vfwcvt_f_xu_v_f64m8_mu(mask, maskedoff, src, vl);
}

vfloat64m1_t test_vfwcvt_f_f_v_f64m1_mu(vbool64_t mask, vfloat64m1_t maskedoff, vfloat32mf2_t src, size_t vl) {
  return __riscv_vfwcvt_f_f_v_f64m1_mu(mask, maskedoff, src, vl);
}

vfloat64m2_t test_vfwcvt_f_f_v_f64m2_mu(vbool32_t mask, vfloat64m2_t maskedoff, vfloat32m1_t src, size_t vl) {
  return __riscv_vfwcvt_f_f_v_f64m2_mu(mask, maskedoff, src, vl);
}

vfloat64m4_t test_vfwcvt_f_f_v_f64m4_mu(vbool16_t mask, vfloat64m4_t maskedoff, vfloat32m2_t src, size_t vl) {
  return __riscv_vfwcvt_f_f_v_f64m4_mu(mask, maskedoff, src, vl);
}

vfloat64m8_t test_vfwcvt_f_f_v_f64m8_mu(vbool8_t mask, vfloat64m8_t maskedoff, vfloat32m4_t src, size_t vl) {
  return __riscv_vfwcvt_f_f_v_f64m8_mu(mask, maskedoff, src, vl);
}

/* { dg-final { scan-assembler-times {vseti?vli\s+[a-z0-9]+,\s*[a-z0-9]+,\s*e[0-9]+,\s*mf?[1248],\s*t[au],\s*m[au]\s+vfwcvt\.[ivxfswum.]+\s+} 120 } } */
