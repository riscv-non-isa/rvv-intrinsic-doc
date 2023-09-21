/* { dg-do compile } */
/* { dg-options "-march=rv64gcv_zvfh -mabi=lp64d -Wno-psabi -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
vint8mf8_t test_vfncvt_x_f_w_i8mf8_tu(vint8mf8_t maskedoff, vfloat16mf4_t src, size_t vl) {
  return __riscv_vfncvt_x_tu(maskedoff, src, vl);
}

vint8mf4_t test_vfncvt_x_f_w_i8mf4_tu(vint8mf4_t maskedoff, vfloat16mf2_t src, size_t vl) {
  return __riscv_vfncvt_x_tu(maskedoff, src, vl);
}

vint8mf2_t test_vfncvt_x_f_w_i8mf2_tu(vint8mf2_t maskedoff, vfloat16m1_t src, size_t vl) {
  return __riscv_vfncvt_x_tu(maskedoff, src, vl);
}

vint8m1_t test_vfncvt_x_f_w_i8m1_tu(vint8m1_t maskedoff, vfloat16m2_t src, size_t vl) {
  return __riscv_vfncvt_x_tu(maskedoff, src, vl);
}

vint8m2_t test_vfncvt_x_f_w_i8m2_tu(vint8m2_t maskedoff, vfloat16m4_t src, size_t vl) {
  return __riscv_vfncvt_x_tu(maskedoff, src, vl);
}

vint8m4_t test_vfncvt_x_f_w_i8m4_tu(vint8m4_t maskedoff, vfloat16m8_t src, size_t vl) {
  return __riscv_vfncvt_x_tu(maskedoff, src, vl);
}

vuint8mf8_t test_vfncvt_xu_f_w_u8mf8_tu(vuint8mf8_t maskedoff, vfloat16mf4_t src, size_t vl) {
  return __riscv_vfncvt_xu_tu(maskedoff, src, vl);
}

vuint8mf4_t test_vfncvt_xu_f_w_u8mf4_tu(vuint8mf4_t maskedoff, vfloat16mf2_t src, size_t vl) {
  return __riscv_vfncvt_xu_tu(maskedoff, src, vl);
}

vuint8mf2_t test_vfncvt_xu_f_w_u8mf2_tu(vuint8mf2_t maskedoff, vfloat16m1_t src, size_t vl) {
  return __riscv_vfncvt_xu_tu(maskedoff, src, vl);
}

vuint8m1_t test_vfncvt_xu_f_w_u8m1_tu(vuint8m1_t maskedoff, vfloat16m2_t src, size_t vl) {
  return __riscv_vfncvt_xu_tu(maskedoff, src, vl);
}

vuint8m2_t test_vfncvt_xu_f_w_u8m2_tu(vuint8m2_t maskedoff, vfloat16m4_t src, size_t vl) {
  return __riscv_vfncvt_xu_tu(maskedoff, src, vl);
}

vuint8m4_t test_vfncvt_xu_f_w_u8m4_tu(vuint8m4_t maskedoff, vfloat16m8_t src, size_t vl) {
  return __riscv_vfncvt_xu_tu(maskedoff, src, vl);
}

vint16mf4_t test_vfncvt_x_f_w_i16mf4_tu(vint16mf4_t maskedoff, vfloat32mf2_t src, size_t vl) {
  return __riscv_vfncvt_x_tu(maskedoff, src, vl);
}

vint16mf2_t test_vfncvt_x_f_w_i16mf2_tu(vint16mf2_t maskedoff, vfloat32m1_t src, size_t vl) {
  return __riscv_vfncvt_x_tu(maskedoff, src, vl);
}

vint16m1_t test_vfncvt_x_f_w_i16m1_tu(vint16m1_t maskedoff, vfloat32m2_t src, size_t vl) {
  return __riscv_vfncvt_x_tu(maskedoff, src, vl);
}

vint16m2_t test_vfncvt_x_f_w_i16m2_tu(vint16m2_t maskedoff, vfloat32m4_t src, size_t vl) {
  return __riscv_vfncvt_x_tu(maskedoff, src, vl);
}

vint16m4_t test_vfncvt_x_f_w_i16m4_tu(vint16m4_t maskedoff, vfloat32m8_t src, size_t vl) {
  return __riscv_vfncvt_x_tu(maskedoff, src, vl);
}

vuint16mf4_t test_vfncvt_xu_f_w_u16mf4_tu(vuint16mf4_t maskedoff, vfloat32mf2_t src, size_t vl) {
  return __riscv_vfncvt_xu_tu(maskedoff, src, vl);
}

vuint16mf2_t test_vfncvt_xu_f_w_u16mf2_tu(vuint16mf2_t maskedoff, vfloat32m1_t src, size_t vl) {
  return __riscv_vfncvt_xu_tu(maskedoff, src, vl);
}

vuint16m1_t test_vfncvt_xu_f_w_u16m1_tu(vuint16m1_t maskedoff, vfloat32m2_t src, size_t vl) {
  return __riscv_vfncvt_xu_tu(maskedoff, src, vl);
}

vuint16m2_t test_vfncvt_xu_f_w_u16m2_tu(vuint16m2_t maskedoff, vfloat32m4_t src, size_t vl) {
  return __riscv_vfncvt_xu_tu(maskedoff, src, vl);
}

vuint16m4_t test_vfncvt_xu_f_w_u16m4_tu(vuint16m4_t maskedoff, vfloat32m8_t src, size_t vl) {
  return __riscv_vfncvt_xu_tu(maskedoff, src, vl);
}

vfloat16mf4_t test_vfncvt_f_x_w_f16mf4_tu(vfloat16mf4_t maskedoff, vint32mf2_t src, size_t vl) {
  return __riscv_vfncvt_f_tu(maskedoff, src, vl);
}

vfloat16mf2_t test_vfncvt_f_x_w_f16mf2_tu(vfloat16mf2_t maskedoff, vint32m1_t src, size_t vl) {
  return __riscv_vfncvt_f_tu(maskedoff, src, vl);
}

vfloat16m1_t test_vfncvt_f_x_w_f16m1_tu(vfloat16m1_t maskedoff, vint32m2_t src, size_t vl) {
  return __riscv_vfncvt_f_tu(maskedoff, src, vl);
}

vfloat16m2_t test_vfncvt_f_x_w_f16m2_tu(vfloat16m2_t maskedoff, vint32m4_t src, size_t vl) {
  return __riscv_vfncvt_f_tu(maskedoff, src, vl);
}

vfloat16m4_t test_vfncvt_f_x_w_f16m4_tu(vfloat16m4_t maskedoff, vint32m8_t src, size_t vl) {
  return __riscv_vfncvt_f_tu(maskedoff, src, vl);
}

vfloat16mf4_t test_vfncvt_f_xu_w_f16mf4_tu(vfloat16mf4_t maskedoff, vuint32mf2_t src, size_t vl) {
  return __riscv_vfncvt_f_tu(maskedoff, src, vl);
}

vfloat16mf2_t test_vfncvt_f_xu_w_f16mf2_tu(vfloat16mf2_t maskedoff, vuint32m1_t src, size_t vl) {
  return __riscv_vfncvt_f_tu(maskedoff, src, vl);
}

vfloat16m1_t test_vfncvt_f_xu_w_f16m1_tu(vfloat16m1_t maskedoff, vuint32m2_t src, size_t vl) {
  return __riscv_vfncvt_f_tu(maskedoff, src, vl);
}

vfloat16m2_t test_vfncvt_f_xu_w_f16m2_tu(vfloat16m2_t maskedoff, vuint32m4_t src, size_t vl) {
  return __riscv_vfncvt_f_tu(maskedoff, src, vl);
}

vfloat16m4_t test_vfncvt_f_xu_w_f16m4_tu(vfloat16m4_t maskedoff, vuint32m8_t src, size_t vl) {
  return __riscv_vfncvt_f_tu(maskedoff, src, vl);
}

vfloat16mf4_t test_vfncvt_f_f_w_f16mf4_tu(vfloat16mf4_t maskedoff, vfloat32mf2_t src, size_t vl) {
  return __riscv_vfncvt_f_tu(maskedoff, src, vl);
}

vfloat16mf2_t test_vfncvt_f_f_w_f16mf2_tu(vfloat16mf2_t maskedoff, vfloat32m1_t src, size_t vl) {
  return __riscv_vfncvt_f_tu(maskedoff, src, vl);
}

vfloat16m1_t test_vfncvt_f_f_w_f16m1_tu(vfloat16m1_t maskedoff, vfloat32m2_t src, size_t vl) {
  return __riscv_vfncvt_f_tu(maskedoff, src, vl);
}

vfloat16m2_t test_vfncvt_f_f_w_f16m2_tu(vfloat16m2_t maskedoff, vfloat32m4_t src, size_t vl) {
  return __riscv_vfncvt_f_tu(maskedoff, src, vl);
}

vfloat16m4_t test_vfncvt_f_f_w_f16m4_tu(vfloat16m4_t maskedoff, vfloat32m8_t src, size_t vl) {
  return __riscv_vfncvt_f_tu(maskedoff, src, vl);
}

vint32mf2_t test_vfncvt_x_f_w_i32mf2_tu(vint32mf2_t maskedoff, vfloat64m1_t src, size_t vl) {
  return __riscv_vfncvt_x_tu(maskedoff, src, vl);
}

vint32m1_t test_vfncvt_x_f_w_i32m1_tu(vint32m1_t maskedoff, vfloat64m2_t src, size_t vl) {
  return __riscv_vfncvt_x_tu(maskedoff, src, vl);
}

vint32m2_t test_vfncvt_x_f_w_i32m2_tu(vint32m2_t maskedoff, vfloat64m4_t src, size_t vl) {
  return __riscv_vfncvt_x_tu(maskedoff, src, vl);
}

vint32m4_t test_vfncvt_x_f_w_i32m4_tu(vint32m4_t maskedoff, vfloat64m8_t src, size_t vl) {
  return __riscv_vfncvt_x_tu(maskedoff, src, vl);
}

vuint32mf2_t test_vfncvt_xu_f_w_u32mf2_tu(vuint32mf2_t maskedoff, vfloat64m1_t src, size_t vl) {
  return __riscv_vfncvt_xu_tu(maskedoff, src, vl);
}

vuint32m1_t test_vfncvt_xu_f_w_u32m1_tu(vuint32m1_t maskedoff, vfloat64m2_t src, size_t vl) {
  return __riscv_vfncvt_xu_tu(maskedoff, src, vl);
}

vuint32m2_t test_vfncvt_xu_f_w_u32m2_tu(vuint32m2_t maskedoff, vfloat64m4_t src, size_t vl) {
  return __riscv_vfncvt_xu_tu(maskedoff, src, vl);
}

vuint32m4_t test_vfncvt_xu_f_w_u32m4_tu(vuint32m4_t maskedoff, vfloat64m8_t src, size_t vl) {
  return __riscv_vfncvt_xu_tu(maskedoff, src, vl);
}

vfloat32mf2_t test_vfncvt_f_x_w_f32mf2_tu(vfloat32mf2_t maskedoff, vint64m1_t src, size_t vl) {
  return __riscv_vfncvt_f_tu(maskedoff, src, vl);
}

vfloat32m1_t test_vfncvt_f_x_w_f32m1_tu(vfloat32m1_t maskedoff, vint64m2_t src, size_t vl) {
  return __riscv_vfncvt_f_tu(maskedoff, src, vl);
}

vfloat32m2_t test_vfncvt_f_x_w_f32m2_tu(vfloat32m2_t maskedoff, vint64m4_t src, size_t vl) {
  return __riscv_vfncvt_f_tu(maskedoff, src, vl);
}

vfloat32m4_t test_vfncvt_f_x_w_f32m4_tu(vfloat32m4_t maskedoff, vint64m8_t src, size_t vl) {
  return __riscv_vfncvt_f_tu(maskedoff, src, vl);
}

vfloat32mf2_t test_vfncvt_f_xu_w_f32mf2_tu(vfloat32mf2_t maskedoff, vuint64m1_t src, size_t vl) {
  return __riscv_vfncvt_f_tu(maskedoff, src, vl);
}

vfloat32m1_t test_vfncvt_f_xu_w_f32m1_tu(vfloat32m1_t maskedoff, vuint64m2_t src, size_t vl) {
  return __riscv_vfncvt_f_tu(maskedoff, src, vl);
}

vfloat32m2_t test_vfncvt_f_xu_w_f32m2_tu(vfloat32m2_t maskedoff, vuint64m4_t src, size_t vl) {
  return __riscv_vfncvt_f_tu(maskedoff, src, vl);
}

vfloat32m4_t test_vfncvt_f_xu_w_f32m4_tu(vfloat32m4_t maskedoff, vuint64m8_t src, size_t vl) {
  return __riscv_vfncvt_f_tu(maskedoff, src, vl);
}

vfloat32mf2_t test_vfncvt_f_f_w_f32mf2_tu(vfloat32mf2_t maskedoff, vfloat64m1_t src, size_t vl) {
  return __riscv_vfncvt_f_tu(maskedoff, src, vl);
}

vfloat32m1_t test_vfncvt_f_f_w_f32m1_tu(vfloat32m1_t maskedoff, vfloat64m2_t src, size_t vl) {
  return __riscv_vfncvt_f_tu(maskedoff, src, vl);
}

vfloat32m2_t test_vfncvt_f_f_w_f32m2_tu(vfloat32m2_t maskedoff, vfloat64m4_t src, size_t vl) {
  return __riscv_vfncvt_f_tu(maskedoff, src, vl);
}

vfloat32m4_t test_vfncvt_f_f_w_f32m4_tu(vfloat32m4_t maskedoff, vfloat64m8_t src, size_t vl) {
  return __riscv_vfncvt_f_tu(maskedoff, src, vl);
}

vint8mf8_t test_vfncvt_x_f_w_i8mf8_tum(vbool64_t mask, vint8mf8_t maskedoff, vfloat16mf4_t src, size_t vl) {
  return __riscv_vfncvt_x_tum(mask, maskedoff, src, vl);
}

vint8mf4_t test_vfncvt_x_f_w_i8mf4_tum(vbool32_t mask, vint8mf4_t maskedoff, vfloat16mf2_t src, size_t vl) {
  return __riscv_vfncvt_x_tum(mask, maskedoff, src, vl);
}

vint8mf2_t test_vfncvt_x_f_w_i8mf2_tum(vbool16_t mask, vint8mf2_t maskedoff, vfloat16m1_t src, size_t vl) {
  return __riscv_vfncvt_x_tum(mask, maskedoff, src, vl);
}

vint8m1_t test_vfncvt_x_f_w_i8m1_tum(vbool8_t mask, vint8m1_t maskedoff, vfloat16m2_t src, size_t vl) {
  return __riscv_vfncvt_x_tum(mask, maskedoff, src, vl);
}

vint8m2_t test_vfncvt_x_f_w_i8m2_tum(vbool4_t mask, vint8m2_t maskedoff, vfloat16m4_t src, size_t vl) {
  return __riscv_vfncvt_x_tum(mask, maskedoff, src, vl);
}

vint8m4_t test_vfncvt_x_f_w_i8m4_tum(vbool2_t mask, vint8m4_t maskedoff, vfloat16m8_t src, size_t vl) {
  return __riscv_vfncvt_x_tum(mask, maskedoff, src, vl);
}

vuint8mf8_t test_vfncvt_xu_f_w_u8mf8_tum(vbool64_t mask, vuint8mf8_t maskedoff, vfloat16mf4_t src, size_t vl) {
  return __riscv_vfncvt_xu_tum(mask, maskedoff, src, vl);
}

vuint8mf4_t test_vfncvt_xu_f_w_u8mf4_tum(vbool32_t mask, vuint8mf4_t maskedoff, vfloat16mf2_t src, size_t vl) {
  return __riscv_vfncvt_xu_tum(mask, maskedoff, src, vl);
}

vuint8mf2_t test_vfncvt_xu_f_w_u8mf2_tum(vbool16_t mask, vuint8mf2_t maskedoff, vfloat16m1_t src, size_t vl) {
  return __riscv_vfncvt_xu_tum(mask, maskedoff, src, vl);
}

vuint8m1_t test_vfncvt_xu_f_w_u8m1_tum(vbool8_t mask, vuint8m1_t maskedoff, vfloat16m2_t src, size_t vl) {
  return __riscv_vfncvt_xu_tum(mask, maskedoff, src, vl);
}

vuint8m2_t test_vfncvt_xu_f_w_u8m2_tum(vbool4_t mask, vuint8m2_t maskedoff, vfloat16m4_t src, size_t vl) {
  return __riscv_vfncvt_xu_tum(mask, maskedoff, src, vl);
}

vuint8m4_t test_vfncvt_xu_f_w_u8m4_tum(vbool2_t mask, vuint8m4_t maskedoff, vfloat16m8_t src, size_t vl) {
  return __riscv_vfncvt_xu_tum(mask, maskedoff, src, vl);
}

vint16mf4_t test_vfncvt_x_f_w_i16mf4_tum(vbool64_t mask, vint16mf4_t maskedoff, vfloat32mf2_t src, size_t vl) {
  return __riscv_vfncvt_x_tum(mask, maskedoff, src, vl);
}

vint16mf2_t test_vfncvt_x_f_w_i16mf2_tum(vbool32_t mask, vint16mf2_t maskedoff, vfloat32m1_t src, size_t vl) {
  return __riscv_vfncvt_x_tum(mask, maskedoff, src, vl);
}

vint16m1_t test_vfncvt_x_f_w_i16m1_tum(vbool16_t mask, vint16m1_t maskedoff, vfloat32m2_t src, size_t vl) {
  return __riscv_vfncvt_x_tum(mask, maskedoff, src, vl);
}

vint16m2_t test_vfncvt_x_f_w_i16m2_tum(vbool8_t mask, vint16m2_t maskedoff, vfloat32m4_t src, size_t vl) {
  return __riscv_vfncvt_x_tum(mask, maskedoff, src, vl);
}

vint16m4_t test_vfncvt_x_f_w_i16m4_tum(vbool4_t mask, vint16m4_t maskedoff, vfloat32m8_t src, size_t vl) {
  return __riscv_vfncvt_x_tum(mask, maskedoff, src, vl);
}

vuint16mf4_t test_vfncvt_xu_f_w_u16mf4_tum(vbool64_t mask, vuint16mf4_t maskedoff, vfloat32mf2_t src, size_t vl) {
  return __riscv_vfncvt_xu_tum(mask, maskedoff, src, vl);
}

vuint16mf2_t test_vfncvt_xu_f_w_u16mf2_tum(vbool32_t mask, vuint16mf2_t maskedoff, vfloat32m1_t src, size_t vl) {
  return __riscv_vfncvt_xu_tum(mask, maskedoff, src, vl);
}

vuint16m1_t test_vfncvt_xu_f_w_u16m1_tum(vbool16_t mask, vuint16m1_t maskedoff, vfloat32m2_t src, size_t vl) {
  return __riscv_vfncvt_xu_tum(mask, maskedoff, src, vl);
}

vuint16m2_t test_vfncvt_xu_f_w_u16m2_tum(vbool8_t mask, vuint16m2_t maskedoff, vfloat32m4_t src, size_t vl) {
  return __riscv_vfncvt_xu_tum(mask, maskedoff, src, vl);
}

vuint16m4_t test_vfncvt_xu_f_w_u16m4_tum(vbool4_t mask, vuint16m4_t maskedoff, vfloat32m8_t src, size_t vl) {
  return __riscv_vfncvt_xu_tum(mask, maskedoff, src, vl);
}

vfloat16mf4_t test_vfncvt_f_x_w_f16mf4_tum(vbool64_t mask, vfloat16mf4_t maskedoff, vint32mf2_t src, size_t vl) {
  return __riscv_vfncvt_f_tum(mask, maskedoff, src, vl);
}

vfloat16mf2_t test_vfncvt_f_x_w_f16mf2_tum(vbool32_t mask, vfloat16mf2_t maskedoff, vint32m1_t src, size_t vl) {
  return __riscv_vfncvt_f_tum(mask, maskedoff, src, vl);
}

vfloat16m1_t test_vfncvt_f_x_w_f16m1_tum(vbool16_t mask, vfloat16m1_t maskedoff, vint32m2_t src, size_t vl) {
  return __riscv_vfncvt_f_tum(mask, maskedoff, src, vl);
}

vfloat16m2_t test_vfncvt_f_x_w_f16m2_tum(vbool8_t mask, vfloat16m2_t maskedoff, vint32m4_t src, size_t vl) {
  return __riscv_vfncvt_f_tum(mask, maskedoff, src, vl);
}

vfloat16m4_t test_vfncvt_f_x_w_f16m4_tum(vbool4_t mask, vfloat16m4_t maskedoff, vint32m8_t src, size_t vl) {
  return __riscv_vfncvt_f_tum(mask, maskedoff, src, vl);
}

vfloat16mf4_t test_vfncvt_f_xu_w_f16mf4_tum(vbool64_t mask, vfloat16mf4_t maskedoff, vuint32mf2_t src, size_t vl) {
  return __riscv_vfncvt_f_tum(mask, maskedoff, src, vl);
}

vfloat16mf2_t test_vfncvt_f_xu_w_f16mf2_tum(vbool32_t mask, vfloat16mf2_t maskedoff, vuint32m1_t src, size_t vl) {
  return __riscv_vfncvt_f_tum(mask, maskedoff, src, vl);
}

vfloat16m1_t test_vfncvt_f_xu_w_f16m1_tum(vbool16_t mask, vfloat16m1_t maskedoff, vuint32m2_t src, size_t vl) {
  return __riscv_vfncvt_f_tum(mask, maskedoff, src, vl);
}

vfloat16m2_t test_vfncvt_f_xu_w_f16m2_tum(vbool8_t mask, vfloat16m2_t maskedoff, vuint32m4_t src, size_t vl) {
  return __riscv_vfncvt_f_tum(mask, maskedoff, src, vl);
}

vfloat16m4_t test_vfncvt_f_xu_w_f16m4_tum(vbool4_t mask, vfloat16m4_t maskedoff, vuint32m8_t src, size_t vl) {
  return __riscv_vfncvt_f_tum(mask, maskedoff, src, vl);
}

vfloat16mf4_t test_vfncvt_f_f_w_f16mf4_tum(vbool64_t mask, vfloat16mf4_t maskedoff, vfloat32mf2_t src, size_t vl) {
  return __riscv_vfncvt_f_tum(mask, maskedoff, src, vl);
}

vfloat16mf2_t test_vfncvt_f_f_w_f16mf2_tum(vbool32_t mask, vfloat16mf2_t maskedoff, vfloat32m1_t src, size_t vl) {
  return __riscv_vfncvt_f_tum(mask, maskedoff, src, vl);
}

vfloat16m1_t test_vfncvt_f_f_w_f16m1_tum(vbool16_t mask, vfloat16m1_t maskedoff, vfloat32m2_t src, size_t vl) {
  return __riscv_vfncvt_f_tum(mask, maskedoff, src, vl);
}

vfloat16m2_t test_vfncvt_f_f_w_f16m2_tum(vbool8_t mask, vfloat16m2_t maskedoff, vfloat32m4_t src, size_t vl) {
  return __riscv_vfncvt_f_tum(mask, maskedoff, src, vl);
}

vfloat16m4_t test_vfncvt_f_f_w_f16m4_tum(vbool4_t mask, vfloat16m4_t maskedoff, vfloat32m8_t src, size_t vl) {
  return __riscv_vfncvt_f_tum(mask, maskedoff, src, vl);
}

vint32mf2_t test_vfncvt_x_f_w_i32mf2_tum(vbool64_t mask, vint32mf2_t maskedoff, vfloat64m1_t src, size_t vl) {
  return __riscv_vfncvt_x_tum(mask, maskedoff, src, vl);
}

vint32m1_t test_vfncvt_x_f_w_i32m1_tum(vbool32_t mask, vint32m1_t maskedoff, vfloat64m2_t src, size_t vl) {
  return __riscv_vfncvt_x_tum(mask, maskedoff, src, vl);
}

vint32m2_t test_vfncvt_x_f_w_i32m2_tum(vbool16_t mask, vint32m2_t maskedoff, vfloat64m4_t src, size_t vl) {
  return __riscv_vfncvt_x_tum(mask, maskedoff, src, vl);
}

vint32m4_t test_vfncvt_x_f_w_i32m4_tum(vbool8_t mask, vint32m4_t maskedoff, vfloat64m8_t src, size_t vl) {
  return __riscv_vfncvt_x_tum(mask, maskedoff, src, vl);
}

vuint32mf2_t test_vfncvt_xu_f_w_u32mf2_tum(vbool64_t mask, vuint32mf2_t maskedoff, vfloat64m1_t src, size_t vl) {
  return __riscv_vfncvt_xu_tum(mask, maskedoff, src, vl);
}

vuint32m1_t test_vfncvt_xu_f_w_u32m1_tum(vbool32_t mask, vuint32m1_t maskedoff, vfloat64m2_t src, size_t vl) {
  return __riscv_vfncvt_xu_tum(mask, maskedoff, src, vl);
}

vuint32m2_t test_vfncvt_xu_f_w_u32m2_tum(vbool16_t mask, vuint32m2_t maskedoff, vfloat64m4_t src, size_t vl) {
  return __riscv_vfncvt_xu_tum(mask, maskedoff, src, vl);
}

vuint32m4_t test_vfncvt_xu_f_w_u32m4_tum(vbool8_t mask, vuint32m4_t maskedoff, vfloat64m8_t src, size_t vl) {
  return __riscv_vfncvt_xu_tum(mask, maskedoff, src, vl);
}

vfloat32mf2_t test_vfncvt_f_x_w_f32mf2_tum(vbool64_t mask, vfloat32mf2_t maskedoff, vint64m1_t src, size_t vl) {
  return __riscv_vfncvt_f_tum(mask, maskedoff, src, vl);
}

vfloat32m1_t test_vfncvt_f_x_w_f32m1_tum(vbool32_t mask, vfloat32m1_t maskedoff, vint64m2_t src, size_t vl) {
  return __riscv_vfncvt_f_tum(mask, maskedoff, src, vl);
}

vfloat32m2_t test_vfncvt_f_x_w_f32m2_tum(vbool16_t mask, vfloat32m2_t maskedoff, vint64m4_t src, size_t vl) {
  return __riscv_vfncvt_f_tum(mask, maskedoff, src, vl);
}

vfloat32m4_t test_vfncvt_f_x_w_f32m4_tum(vbool8_t mask, vfloat32m4_t maskedoff, vint64m8_t src, size_t vl) {
  return __riscv_vfncvt_f_tum(mask, maskedoff, src, vl);
}

vfloat32mf2_t test_vfncvt_f_xu_w_f32mf2_tum(vbool64_t mask, vfloat32mf2_t maskedoff, vuint64m1_t src, size_t vl) {
  return __riscv_vfncvt_f_tum(mask, maskedoff, src, vl);
}

vfloat32m1_t test_vfncvt_f_xu_w_f32m1_tum(vbool32_t mask, vfloat32m1_t maskedoff, vuint64m2_t src, size_t vl) {
  return __riscv_vfncvt_f_tum(mask, maskedoff, src, vl);
}

vfloat32m2_t test_vfncvt_f_xu_w_f32m2_tum(vbool16_t mask, vfloat32m2_t maskedoff, vuint64m4_t src, size_t vl) {
  return __riscv_vfncvt_f_tum(mask, maskedoff, src, vl);
}

vfloat32m4_t test_vfncvt_f_xu_w_f32m4_tum(vbool8_t mask, vfloat32m4_t maskedoff, vuint64m8_t src, size_t vl) {
  return __riscv_vfncvt_f_tum(mask, maskedoff, src, vl);
}

vfloat32mf2_t test_vfncvt_f_f_w_f32mf2_tum(vbool64_t mask, vfloat32mf2_t maskedoff, vfloat64m1_t src, size_t vl) {
  return __riscv_vfncvt_f_tum(mask, maskedoff, src, vl);
}

vfloat32m1_t test_vfncvt_f_f_w_f32m1_tum(vbool32_t mask, vfloat32m1_t maskedoff, vfloat64m2_t src, size_t vl) {
  return __riscv_vfncvt_f_tum(mask, maskedoff, src, vl);
}

vfloat32m2_t test_vfncvt_f_f_w_f32m2_tum(vbool16_t mask, vfloat32m2_t maskedoff, vfloat64m4_t src, size_t vl) {
  return __riscv_vfncvt_f_tum(mask, maskedoff, src, vl);
}

vfloat32m4_t test_vfncvt_f_f_w_f32m4_tum(vbool8_t mask, vfloat32m4_t maskedoff, vfloat64m8_t src, size_t vl) {
  return __riscv_vfncvt_f_tum(mask, maskedoff, src, vl);
}

vint8mf8_t test_vfncvt_x_f_w_i8mf8_tumu(vbool64_t mask, vint8mf8_t maskedoff, vfloat16mf4_t src, size_t vl) {
  return __riscv_vfncvt_x_tumu(mask, maskedoff, src, vl);
}

vint8mf4_t test_vfncvt_x_f_w_i8mf4_tumu(vbool32_t mask, vint8mf4_t maskedoff, vfloat16mf2_t src, size_t vl) {
  return __riscv_vfncvt_x_tumu(mask, maskedoff, src, vl);
}

vint8mf2_t test_vfncvt_x_f_w_i8mf2_tumu(vbool16_t mask, vint8mf2_t maskedoff, vfloat16m1_t src, size_t vl) {
  return __riscv_vfncvt_x_tumu(mask, maskedoff, src, vl);
}

vint8m1_t test_vfncvt_x_f_w_i8m1_tumu(vbool8_t mask, vint8m1_t maskedoff, vfloat16m2_t src, size_t vl) {
  return __riscv_vfncvt_x_tumu(mask, maskedoff, src, vl);
}

vint8m2_t test_vfncvt_x_f_w_i8m2_tumu(vbool4_t mask, vint8m2_t maskedoff, vfloat16m4_t src, size_t vl) {
  return __riscv_vfncvt_x_tumu(mask, maskedoff, src, vl);
}

vint8m4_t test_vfncvt_x_f_w_i8m4_tumu(vbool2_t mask, vint8m4_t maskedoff, vfloat16m8_t src, size_t vl) {
  return __riscv_vfncvt_x_tumu(mask, maskedoff, src, vl);
}

vuint8mf8_t test_vfncvt_xu_f_w_u8mf8_tumu(vbool64_t mask, vuint8mf8_t maskedoff, vfloat16mf4_t src, size_t vl) {
  return __riscv_vfncvt_xu_tumu(mask, maskedoff, src, vl);
}

vuint8mf4_t test_vfncvt_xu_f_w_u8mf4_tumu(vbool32_t mask, vuint8mf4_t maskedoff, vfloat16mf2_t src, size_t vl) {
  return __riscv_vfncvt_xu_tumu(mask, maskedoff, src, vl);
}

vuint8mf2_t test_vfncvt_xu_f_w_u8mf2_tumu(vbool16_t mask, vuint8mf2_t maskedoff, vfloat16m1_t src, size_t vl) {
  return __riscv_vfncvt_xu_tumu(mask, maskedoff, src, vl);
}

vuint8m1_t test_vfncvt_xu_f_w_u8m1_tumu(vbool8_t mask, vuint8m1_t maskedoff, vfloat16m2_t src, size_t vl) {
  return __riscv_vfncvt_xu_tumu(mask, maskedoff, src, vl);
}

vuint8m2_t test_vfncvt_xu_f_w_u8m2_tumu(vbool4_t mask, vuint8m2_t maskedoff, vfloat16m4_t src, size_t vl) {
  return __riscv_vfncvt_xu_tumu(mask, maskedoff, src, vl);
}

vuint8m4_t test_vfncvt_xu_f_w_u8m4_tumu(vbool2_t mask, vuint8m4_t maskedoff, vfloat16m8_t src, size_t vl) {
  return __riscv_vfncvt_xu_tumu(mask, maskedoff, src, vl);
}

vint16mf4_t test_vfncvt_x_f_w_i16mf4_tumu(vbool64_t mask, vint16mf4_t maskedoff, vfloat32mf2_t src, size_t vl) {
  return __riscv_vfncvt_x_tumu(mask, maskedoff, src, vl);
}

vint16mf2_t test_vfncvt_x_f_w_i16mf2_tumu(vbool32_t mask, vint16mf2_t maskedoff, vfloat32m1_t src, size_t vl) {
  return __riscv_vfncvt_x_tumu(mask, maskedoff, src, vl);
}

vint16m1_t test_vfncvt_x_f_w_i16m1_tumu(vbool16_t mask, vint16m1_t maskedoff, vfloat32m2_t src, size_t vl) {
  return __riscv_vfncvt_x_tumu(mask, maskedoff, src, vl);
}

vint16m2_t test_vfncvt_x_f_w_i16m2_tumu(vbool8_t mask, vint16m2_t maskedoff, vfloat32m4_t src, size_t vl) {
  return __riscv_vfncvt_x_tumu(mask, maskedoff, src, vl);
}

vint16m4_t test_vfncvt_x_f_w_i16m4_tumu(vbool4_t mask, vint16m4_t maskedoff, vfloat32m8_t src, size_t vl) {
  return __riscv_vfncvt_x_tumu(mask, maskedoff, src, vl);
}

vuint16mf4_t test_vfncvt_xu_f_w_u16mf4_tumu(vbool64_t mask, vuint16mf4_t maskedoff, vfloat32mf2_t src, size_t vl) {
  return __riscv_vfncvt_xu_tumu(mask, maskedoff, src, vl);
}

vuint16mf2_t test_vfncvt_xu_f_w_u16mf2_tumu(vbool32_t mask, vuint16mf2_t maskedoff, vfloat32m1_t src, size_t vl) {
  return __riscv_vfncvt_xu_tumu(mask, maskedoff, src, vl);
}

vuint16m1_t test_vfncvt_xu_f_w_u16m1_tumu(vbool16_t mask, vuint16m1_t maskedoff, vfloat32m2_t src, size_t vl) {
  return __riscv_vfncvt_xu_tumu(mask, maskedoff, src, vl);
}

vuint16m2_t test_vfncvt_xu_f_w_u16m2_tumu(vbool8_t mask, vuint16m2_t maskedoff, vfloat32m4_t src, size_t vl) {
  return __riscv_vfncvt_xu_tumu(mask, maskedoff, src, vl);
}

vuint16m4_t test_vfncvt_xu_f_w_u16m4_tumu(vbool4_t mask, vuint16m4_t maskedoff, vfloat32m8_t src, size_t vl) {
  return __riscv_vfncvt_xu_tumu(mask, maskedoff, src, vl);
}

vfloat16mf4_t test_vfncvt_f_x_w_f16mf4_tumu(vbool64_t mask, vfloat16mf4_t maskedoff, vint32mf2_t src, size_t vl) {
  return __riscv_vfncvt_f_tumu(mask, maskedoff, src, vl);
}

vfloat16mf2_t test_vfncvt_f_x_w_f16mf2_tumu(vbool32_t mask, vfloat16mf2_t maskedoff, vint32m1_t src, size_t vl) {
  return __riscv_vfncvt_f_tumu(mask, maskedoff, src, vl);
}

vfloat16m1_t test_vfncvt_f_x_w_f16m1_tumu(vbool16_t mask, vfloat16m1_t maskedoff, vint32m2_t src, size_t vl) {
  return __riscv_vfncvt_f_tumu(mask, maskedoff, src, vl);
}

vfloat16m2_t test_vfncvt_f_x_w_f16m2_tumu(vbool8_t mask, vfloat16m2_t maskedoff, vint32m4_t src, size_t vl) {
  return __riscv_vfncvt_f_tumu(mask, maskedoff, src, vl);
}

vfloat16m4_t test_vfncvt_f_x_w_f16m4_tumu(vbool4_t mask, vfloat16m4_t maskedoff, vint32m8_t src, size_t vl) {
  return __riscv_vfncvt_f_tumu(mask, maskedoff, src, vl);
}

vfloat16mf4_t test_vfncvt_f_xu_w_f16mf4_tumu(vbool64_t mask, vfloat16mf4_t maskedoff, vuint32mf2_t src, size_t vl) {
  return __riscv_vfncvt_f_tumu(mask, maskedoff, src, vl);
}

vfloat16mf2_t test_vfncvt_f_xu_w_f16mf2_tumu(vbool32_t mask, vfloat16mf2_t maskedoff, vuint32m1_t src, size_t vl) {
  return __riscv_vfncvt_f_tumu(mask, maskedoff, src, vl);
}

vfloat16m1_t test_vfncvt_f_xu_w_f16m1_tumu(vbool16_t mask, vfloat16m1_t maskedoff, vuint32m2_t src, size_t vl) {
  return __riscv_vfncvt_f_tumu(mask, maskedoff, src, vl);
}

vfloat16m2_t test_vfncvt_f_xu_w_f16m2_tumu(vbool8_t mask, vfloat16m2_t maskedoff, vuint32m4_t src, size_t vl) {
  return __riscv_vfncvt_f_tumu(mask, maskedoff, src, vl);
}

vfloat16m4_t test_vfncvt_f_xu_w_f16m4_tumu(vbool4_t mask, vfloat16m4_t maskedoff, vuint32m8_t src, size_t vl) {
  return __riscv_vfncvt_f_tumu(mask, maskedoff, src, vl);
}

vfloat16mf4_t test_vfncvt_f_f_w_f16mf4_tumu(vbool64_t mask, vfloat16mf4_t maskedoff, vfloat32mf2_t src, size_t vl) {
  return __riscv_vfncvt_f_tumu(mask, maskedoff, src, vl);
}

vfloat16mf2_t test_vfncvt_f_f_w_f16mf2_tumu(vbool32_t mask, vfloat16mf2_t maskedoff, vfloat32m1_t src, size_t vl) {
  return __riscv_vfncvt_f_tumu(mask, maskedoff, src, vl);
}

vfloat16m1_t test_vfncvt_f_f_w_f16m1_tumu(vbool16_t mask, vfloat16m1_t maskedoff, vfloat32m2_t src, size_t vl) {
  return __riscv_vfncvt_f_tumu(mask, maskedoff, src, vl);
}

vfloat16m2_t test_vfncvt_f_f_w_f16m2_tumu(vbool8_t mask, vfloat16m2_t maskedoff, vfloat32m4_t src, size_t vl) {
  return __riscv_vfncvt_f_tumu(mask, maskedoff, src, vl);
}

vfloat16m4_t test_vfncvt_f_f_w_f16m4_tumu(vbool4_t mask, vfloat16m4_t maskedoff, vfloat32m8_t src, size_t vl) {
  return __riscv_vfncvt_f_tumu(mask, maskedoff, src, vl);
}

vint32mf2_t test_vfncvt_x_f_w_i32mf2_tumu(vbool64_t mask, vint32mf2_t maskedoff, vfloat64m1_t src, size_t vl) {
  return __riscv_vfncvt_x_tumu(mask, maskedoff, src, vl);
}

vint32m1_t test_vfncvt_x_f_w_i32m1_tumu(vbool32_t mask, vint32m1_t maskedoff, vfloat64m2_t src, size_t vl) {
  return __riscv_vfncvt_x_tumu(mask, maskedoff, src, vl);
}

vint32m2_t test_vfncvt_x_f_w_i32m2_tumu(vbool16_t mask, vint32m2_t maskedoff, vfloat64m4_t src, size_t vl) {
  return __riscv_vfncvt_x_tumu(mask, maskedoff, src, vl);
}

vint32m4_t test_vfncvt_x_f_w_i32m4_tumu(vbool8_t mask, vint32m4_t maskedoff, vfloat64m8_t src, size_t vl) {
  return __riscv_vfncvt_x_tumu(mask, maskedoff, src, vl);
}

vuint32mf2_t test_vfncvt_xu_f_w_u32mf2_tumu(vbool64_t mask, vuint32mf2_t maskedoff, vfloat64m1_t src, size_t vl) {
  return __riscv_vfncvt_xu_tumu(mask, maskedoff, src, vl);
}

vuint32m1_t test_vfncvt_xu_f_w_u32m1_tumu(vbool32_t mask, vuint32m1_t maskedoff, vfloat64m2_t src, size_t vl) {
  return __riscv_vfncvt_xu_tumu(mask, maskedoff, src, vl);
}

vuint32m2_t test_vfncvt_xu_f_w_u32m2_tumu(vbool16_t mask, vuint32m2_t maskedoff, vfloat64m4_t src, size_t vl) {
  return __riscv_vfncvt_xu_tumu(mask, maskedoff, src, vl);
}

vuint32m4_t test_vfncvt_xu_f_w_u32m4_tumu(vbool8_t mask, vuint32m4_t maskedoff, vfloat64m8_t src, size_t vl) {
  return __riscv_vfncvt_xu_tumu(mask, maskedoff, src, vl);
}

vfloat32mf2_t test_vfncvt_f_x_w_f32mf2_tumu(vbool64_t mask, vfloat32mf2_t maskedoff, vint64m1_t src, size_t vl) {
  return __riscv_vfncvt_f_tumu(mask, maskedoff, src, vl);
}

vfloat32m1_t test_vfncvt_f_x_w_f32m1_tumu(vbool32_t mask, vfloat32m1_t maskedoff, vint64m2_t src, size_t vl) {
  return __riscv_vfncvt_f_tumu(mask, maskedoff, src, vl);
}

vfloat32m2_t test_vfncvt_f_x_w_f32m2_tumu(vbool16_t mask, vfloat32m2_t maskedoff, vint64m4_t src, size_t vl) {
  return __riscv_vfncvt_f_tumu(mask, maskedoff, src, vl);
}

vfloat32m4_t test_vfncvt_f_x_w_f32m4_tumu(vbool8_t mask, vfloat32m4_t maskedoff, vint64m8_t src, size_t vl) {
  return __riscv_vfncvt_f_tumu(mask, maskedoff, src, vl);
}

vfloat32mf2_t test_vfncvt_f_xu_w_f32mf2_tumu(vbool64_t mask, vfloat32mf2_t maskedoff, vuint64m1_t src, size_t vl) {
  return __riscv_vfncvt_f_tumu(mask, maskedoff, src, vl);
}

vfloat32m1_t test_vfncvt_f_xu_w_f32m1_tumu(vbool32_t mask, vfloat32m1_t maskedoff, vuint64m2_t src, size_t vl) {
  return __riscv_vfncvt_f_tumu(mask, maskedoff, src, vl);
}

vfloat32m2_t test_vfncvt_f_xu_w_f32m2_tumu(vbool16_t mask, vfloat32m2_t maskedoff, vuint64m4_t src, size_t vl) {
  return __riscv_vfncvt_f_tumu(mask, maskedoff, src, vl);
}

vfloat32m4_t test_vfncvt_f_xu_w_f32m4_tumu(vbool8_t mask, vfloat32m4_t maskedoff, vuint64m8_t src, size_t vl) {
  return __riscv_vfncvt_f_tumu(mask, maskedoff, src, vl);
}

vfloat32mf2_t test_vfncvt_f_f_w_f32mf2_tumu(vbool64_t mask, vfloat32mf2_t maskedoff, vfloat64m1_t src, size_t vl) {
  return __riscv_vfncvt_f_tumu(mask, maskedoff, src, vl);
}

vfloat32m1_t test_vfncvt_f_f_w_f32m1_tumu(vbool32_t mask, vfloat32m1_t maskedoff, vfloat64m2_t src, size_t vl) {
  return __riscv_vfncvt_f_tumu(mask, maskedoff, src, vl);
}

vfloat32m2_t test_vfncvt_f_f_w_f32m2_tumu(vbool16_t mask, vfloat32m2_t maskedoff, vfloat64m4_t src, size_t vl) {
  return __riscv_vfncvt_f_tumu(mask, maskedoff, src, vl);
}

vfloat32m4_t test_vfncvt_f_f_w_f32m4_tumu(vbool8_t mask, vfloat32m4_t maskedoff, vfloat64m8_t src, size_t vl) {
  return __riscv_vfncvt_f_tumu(mask, maskedoff, src, vl);
}

vint8mf8_t test_vfncvt_x_f_w_i8mf8_mu(vbool64_t mask, vint8mf8_t maskedoff, vfloat16mf4_t src, size_t vl) {
  return __riscv_vfncvt_x_mu(mask, maskedoff, src, vl);
}

vint8mf4_t test_vfncvt_x_f_w_i8mf4_mu(vbool32_t mask, vint8mf4_t maskedoff, vfloat16mf2_t src, size_t vl) {
  return __riscv_vfncvt_x_mu(mask, maskedoff, src, vl);
}

vint8mf2_t test_vfncvt_x_f_w_i8mf2_mu(vbool16_t mask, vint8mf2_t maskedoff, vfloat16m1_t src, size_t vl) {
  return __riscv_vfncvt_x_mu(mask, maskedoff, src, vl);
}

vint8m1_t test_vfncvt_x_f_w_i8m1_mu(vbool8_t mask, vint8m1_t maskedoff, vfloat16m2_t src, size_t vl) {
  return __riscv_vfncvt_x_mu(mask, maskedoff, src, vl);
}

vint8m2_t test_vfncvt_x_f_w_i8m2_mu(vbool4_t mask, vint8m2_t maskedoff, vfloat16m4_t src, size_t vl) {
  return __riscv_vfncvt_x_mu(mask, maskedoff, src, vl);
}

vint8m4_t test_vfncvt_x_f_w_i8m4_mu(vbool2_t mask, vint8m4_t maskedoff, vfloat16m8_t src, size_t vl) {
  return __riscv_vfncvt_x_mu(mask, maskedoff, src, vl);
}

vuint8mf8_t test_vfncvt_xu_f_w_u8mf8_mu(vbool64_t mask, vuint8mf8_t maskedoff, vfloat16mf4_t src, size_t vl) {
  return __riscv_vfncvt_xu_mu(mask, maskedoff, src, vl);
}

vuint8mf4_t test_vfncvt_xu_f_w_u8mf4_mu(vbool32_t mask, vuint8mf4_t maskedoff, vfloat16mf2_t src, size_t vl) {
  return __riscv_vfncvt_xu_mu(mask, maskedoff, src, vl);
}

vuint8mf2_t test_vfncvt_xu_f_w_u8mf2_mu(vbool16_t mask, vuint8mf2_t maskedoff, vfloat16m1_t src, size_t vl) {
  return __riscv_vfncvt_xu_mu(mask, maskedoff, src, vl);
}

vuint8m1_t test_vfncvt_xu_f_w_u8m1_mu(vbool8_t mask, vuint8m1_t maskedoff, vfloat16m2_t src, size_t vl) {
  return __riscv_vfncvt_xu_mu(mask, maskedoff, src, vl);
}

vuint8m2_t test_vfncvt_xu_f_w_u8m2_mu(vbool4_t mask, vuint8m2_t maskedoff, vfloat16m4_t src, size_t vl) {
  return __riscv_vfncvt_xu_mu(mask, maskedoff, src, vl);
}

vuint8m4_t test_vfncvt_xu_f_w_u8m4_mu(vbool2_t mask, vuint8m4_t maskedoff, vfloat16m8_t src, size_t vl) {
  return __riscv_vfncvt_xu_mu(mask, maskedoff, src, vl);
}

vint16mf4_t test_vfncvt_x_f_w_i16mf4_mu(vbool64_t mask, vint16mf4_t maskedoff, vfloat32mf2_t src, size_t vl) {
  return __riscv_vfncvt_x_mu(mask, maskedoff, src, vl);
}

vint16mf2_t test_vfncvt_x_f_w_i16mf2_mu(vbool32_t mask, vint16mf2_t maskedoff, vfloat32m1_t src, size_t vl) {
  return __riscv_vfncvt_x_mu(mask, maskedoff, src, vl);
}

vint16m1_t test_vfncvt_x_f_w_i16m1_mu(vbool16_t mask, vint16m1_t maskedoff, vfloat32m2_t src, size_t vl) {
  return __riscv_vfncvt_x_mu(mask, maskedoff, src, vl);
}

vint16m2_t test_vfncvt_x_f_w_i16m2_mu(vbool8_t mask, vint16m2_t maskedoff, vfloat32m4_t src, size_t vl) {
  return __riscv_vfncvt_x_mu(mask, maskedoff, src, vl);
}

vint16m4_t test_vfncvt_x_f_w_i16m4_mu(vbool4_t mask, vint16m4_t maskedoff, vfloat32m8_t src, size_t vl) {
  return __riscv_vfncvt_x_mu(mask, maskedoff, src, vl);
}

vuint16mf4_t test_vfncvt_xu_f_w_u16mf4_mu(vbool64_t mask, vuint16mf4_t maskedoff, vfloat32mf2_t src, size_t vl) {
  return __riscv_vfncvt_xu_mu(mask, maskedoff, src, vl);
}

vuint16mf2_t test_vfncvt_xu_f_w_u16mf2_mu(vbool32_t mask, vuint16mf2_t maskedoff, vfloat32m1_t src, size_t vl) {
  return __riscv_vfncvt_xu_mu(mask, maskedoff, src, vl);
}

vuint16m1_t test_vfncvt_xu_f_w_u16m1_mu(vbool16_t mask, vuint16m1_t maskedoff, vfloat32m2_t src, size_t vl) {
  return __riscv_vfncvt_xu_mu(mask, maskedoff, src, vl);
}

vuint16m2_t test_vfncvt_xu_f_w_u16m2_mu(vbool8_t mask, vuint16m2_t maskedoff, vfloat32m4_t src, size_t vl) {
  return __riscv_vfncvt_xu_mu(mask, maskedoff, src, vl);
}

vuint16m4_t test_vfncvt_xu_f_w_u16m4_mu(vbool4_t mask, vuint16m4_t maskedoff, vfloat32m8_t src, size_t vl) {
  return __riscv_vfncvt_xu_mu(mask, maskedoff, src, vl);
}

vfloat16mf4_t test_vfncvt_f_x_w_f16mf4_mu(vbool64_t mask, vfloat16mf4_t maskedoff, vint32mf2_t src, size_t vl) {
  return __riscv_vfncvt_f_mu(mask, maskedoff, src, vl);
}

vfloat16mf2_t test_vfncvt_f_x_w_f16mf2_mu(vbool32_t mask, vfloat16mf2_t maskedoff, vint32m1_t src, size_t vl) {
  return __riscv_vfncvt_f_mu(mask, maskedoff, src, vl);
}

vfloat16m1_t test_vfncvt_f_x_w_f16m1_mu(vbool16_t mask, vfloat16m1_t maskedoff, vint32m2_t src, size_t vl) {
  return __riscv_vfncvt_f_mu(mask, maskedoff, src, vl);
}

vfloat16m2_t test_vfncvt_f_x_w_f16m2_mu(vbool8_t mask, vfloat16m2_t maskedoff, vint32m4_t src, size_t vl) {
  return __riscv_vfncvt_f_mu(mask, maskedoff, src, vl);
}

vfloat16m4_t test_vfncvt_f_x_w_f16m4_mu(vbool4_t mask, vfloat16m4_t maskedoff, vint32m8_t src, size_t vl) {
  return __riscv_vfncvt_f_mu(mask, maskedoff, src, vl);
}

vfloat16mf4_t test_vfncvt_f_xu_w_f16mf4_mu(vbool64_t mask, vfloat16mf4_t maskedoff, vuint32mf2_t src, size_t vl) {
  return __riscv_vfncvt_f_mu(mask, maskedoff, src, vl);
}

vfloat16mf2_t test_vfncvt_f_xu_w_f16mf2_mu(vbool32_t mask, vfloat16mf2_t maskedoff, vuint32m1_t src, size_t vl) {
  return __riscv_vfncvt_f_mu(mask, maskedoff, src, vl);
}

vfloat16m1_t test_vfncvt_f_xu_w_f16m1_mu(vbool16_t mask, vfloat16m1_t maskedoff, vuint32m2_t src, size_t vl) {
  return __riscv_vfncvt_f_mu(mask, maskedoff, src, vl);
}

vfloat16m2_t test_vfncvt_f_xu_w_f16m2_mu(vbool8_t mask, vfloat16m2_t maskedoff, vuint32m4_t src, size_t vl) {
  return __riscv_vfncvt_f_mu(mask, maskedoff, src, vl);
}

vfloat16m4_t test_vfncvt_f_xu_w_f16m4_mu(vbool4_t mask, vfloat16m4_t maskedoff, vuint32m8_t src, size_t vl) {
  return __riscv_vfncvt_f_mu(mask, maskedoff, src, vl);
}

vfloat16mf4_t test_vfncvt_f_f_w_f16mf4_mu(vbool64_t mask, vfloat16mf4_t maskedoff, vfloat32mf2_t src, size_t vl) {
  return __riscv_vfncvt_f_mu(mask, maskedoff, src, vl);
}

vfloat16mf2_t test_vfncvt_f_f_w_f16mf2_mu(vbool32_t mask, vfloat16mf2_t maskedoff, vfloat32m1_t src, size_t vl) {
  return __riscv_vfncvt_f_mu(mask, maskedoff, src, vl);
}

vfloat16m1_t test_vfncvt_f_f_w_f16m1_mu(vbool16_t mask, vfloat16m1_t maskedoff, vfloat32m2_t src, size_t vl) {
  return __riscv_vfncvt_f_mu(mask, maskedoff, src, vl);
}

vfloat16m2_t test_vfncvt_f_f_w_f16m2_mu(vbool8_t mask, vfloat16m2_t maskedoff, vfloat32m4_t src, size_t vl) {
  return __riscv_vfncvt_f_mu(mask, maskedoff, src, vl);
}

vfloat16m4_t test_vfncvt_f_f_w_f16m4_mu(vbool4_t mask, vfloat16m4_t maskedoff, vfloat32m8_t src, size_t vl) {
  return __riscv_vfncvt_f_mu(mask, maskedoff, src, vl);
}

vint32mf2_t test_vfncvt_x_f_w_i32mf2_mu(vbool64_t mask, vint32mf2_t maskedoff, vfloat64m1_t src, size_t vl) {
  return __riscv_vfncvt_x_mu(mask, maskedoff, src, vl);
}

vint32m1_t test_vfncvt_x_f_w_i32m1_mu(vbool32_t mask, vint32m1_t maskedoff, vfloat64m2_t src, size_t vl) {
  return __riscv_vfncvt_x_mu(mask, maskedoff, src, vl);
}

vint32m2_t test_vfncvt_x_f_w_i32m2_mu(vbool16_t mask, vint32m2_t maskedoff, vfloat64m4_t src, size_t vl) {
  return __riscv_vfncvt_x_mu(mask, maskedoff, src, vl);
}

vint32m4_t test_vfncvt_x_f_w_i32m4_mu(vbool8_t mask, vint32m4_t maskedoff, vfloat64m8_t src, size_t vl) {
  return __riscv_vfncvt_x_mu(mask, maskedoff, src, vl);
}

vuint32mf2_t test_vfncvt_xu_f_w_u32mf2_mu(vbool64_t mask, vuint32mf2_t maskedoff, vfloat64m1_t src, size_t vl) {
  return __riscv_vfncvt_xu_mu(mask, maskedoff, src, vl);
}

vuint32m1_t test_vfncvt_xu_f_w_u32m1_mu(vbool32_t mask, vuint32m1_t maskedoff, vfloat64m2_t src, size_t vl) {
  return __riscv_vfncvt_xu_mu(mask, maskedoff, src, vl);
}

vuint32m2_t test_vfncvt_xu_f_w_u32m2_mu(vbool16_t mask, vuint32m2_t maskedoff, vfloat64m4_t src, size_t vl) {
  return __riscv_vfncvt_xu_mu(mask, maskedoff, src, vl);
}

vuint32m4_t test_vfncvt_xu_f_w_u32m4_mu(vbool8_t mask, vuint32m4_t maskedoff, vfloat64m8_t src, size_t vl) {
  return __riscv_vfncvt_xu_mu(mask, maskedoff, src, vl);
}

vfloat32mf2_t test_vfncvt_f_x_w_f32mf2_mu(vbool64_t mask, vfloat32mf2_t maskedoff, vint64m1_t src, size_t vl) {
  return __riscv_vfncvt_f_mu(mask, maskedoff, src, vl);
}

vfloat32m1_t test_vfncvt_f_x_w_f32m1_mu(vbool32_t mask, vfloat32m1_t maskedoff, vint64m2_t src, size_t vl) {
  return __riscv_vfncvt_f_mu(mask, maskedoff, src, vl);
}

vfloat32m2_t test_vfncvt_f_x_w_f32m2_mu(vbool16_t mask, vfloat32m2_t maskedoff, vint64m4_t src, size_t vl) {
  return __riscv_vfncvt_f_mu(mask, maskedoff, src, vl);
}

vfloat32m4_t test_vfncvt_f_x_w_f32m4_mu(vbool8_t mask, vfloat32m4_t maskedoff, vint64m8_t src, size_t vl) {
  return __riscv_vfncvt_f_mu(mask, maskedoff, src, vl);
}

vfloat32mf2_t test_vfncvt_f_xu_w_f32mf2_mu(vbool64_t mask, vfloat32mf2_t maskedoff, vuint64m1_t src, size_t vl) {
  return __riscv_vfncvt_f_mu(mask, maskedoff, src, vl);
}

vfloat32m1_t test_vfncvt_f_xu_w_f32m1_mu(vbool32_t mask, vfloat32m1_t maskedoff, vuint64m2_t src, size_t vl) {
  return __riscv_vfncvt_f_mu(mask, maskedoff, src, vl);
}

vfloat32m2_t test_vfncvt_f_xu_w_f32m2_mu(vbool16_t mask, vfloat32m2_t maskedoff, vuint64m4_t src, size_t vl) {
  return __riscv_vfncvt_f_mu(mask, maskedoff, src, vl);
}

vfloat32m4_t test_vfncvt_f_xu_w_f32m4_mu(vbool8_t mask, vfloat32m4_t maskedoff, vuint64m8_t src, size_t vl) {
  return __riscv_vfncvt_f_mu(mask, maskedoff, src, vl);
}

vfloat32mf2_t test_vfncvt_f_f_w_f32mf2_mu(vbool64_t mask, vfloat32mf2_t maskedoff, vfloat64m1_t src, size_t vl) {
  return __riscv_vfncvt_f_mu(mask, maskedoff, src, vl);
}

vfloat32m1_t test_vfncvt_f_f_w_f32m1_mu(vbool32_t mask, vfloat32m1_t maskedoff, vfloat64m2_t src, size_t vl) {
  return __riscv_vfncvt_f_mu(mask, maskedoff, src, vl);
}

vfloat32m2_t test_vfncvt_f_f_w_f32m2_mu(vbool16_t mask, vfloat32m2_t maskedoff, vfloat64m4_t src, size_t vl) {
  return __riscv_vfncvt_f_mu(mask, maskedoff, src, vl);
}

vfloat32m4_t test_vfncvt_f_f_w_f32m4_mu(vbool8_t mask, vfloat32m4_t maskedoff, vfloat64m8_t src, size_t vl) {
  return __riscv_vfncvt_f_mu(mask, maskedoff, src, vl);
}

vint8mf8_t test_vfncvt_x_f_w_i8mf8_rm_tu(vint8mf8_t maskedoff, vfloat16mf4_t src, size_t vl) {
  return __riscv_vfncvt_x_tu(maskedoff, src, __RISCV_FRM_RNE, vl);
}

vint8mf4_t test_vfncvt_x_f_w_i8mf4_rm_tu(vint8mf4_t maskedoff, vfloat16mf2_t src, size_t vl) {
  return __riscv_vfncvt_x_tu(maskedoff, src, __RISCV_FRM_RNE, vl);
}

vint8mf2_t test_vfncvt_x_f_w_i8mf2_rm_tu(vint8mf2_t maskedoff, vfloat16m1_t src, size_t vl) {
  return __riscv_vfncvt_x_tu(maskedoff, src, __RISCV_FRM_RNE, vl);
}

vint8m1_t test_vfncvt_x_f_w_i8m1_rm_tu(vint8m1_t maskedoff, vfloat16m2_t src, size_t vl) {
  return __riscv_vfncvt_x_tu(maskedoff, src, __RISCV_FRM_RNE, vl);
}

vint8m2_t test_vfncvt_x_f_w_i8m2_rm_tu(vint8m2_t maskedoff, vfloat16m4_t src, size_t vl) {
  return __riscv_vfncvt_x_tu(maskedoff, src, __RISCV_FRM_RNE, vl);
}

vint8m4_t test_vfncvt_x_f_w_i8m4_rm_tu(vint8m4_t maskedoff, vfloat16m8_t src, size_t vl) {
  return __riscv_vfncvt_x_tu(maskedoff, src, __RISCV_FRM_RNE, vl);
}

vuint8mf8_t test_vfncvt_xu_f_w_u8mf8_rm_tu(vuint8mf8_t maskedoff, vfloat16mf4_t src, size_t vl) {
  return __riscv_vfncvt_xu_tu(maskedoff, src, __RISCV_FRM_RNE, vl);
}

vuint8mf4_t test_vfncvt_xu_f_w_u8mf4_rm_tu(vuint8mf4_t maskedoff, vfloat16mf2_t src, size_t vl) {
  return __riscv_vfncvt_xu_tu(maskedoff, src, __RISCV_FRM_RNE, vl);
}

vuint8mf2_t test_vfncvt_xu_f_w_u8mf2_rm_tu(vuint8mf2_t maskedoff, vfloat16m1_t src, size_t vl) {
  return __riscv_vfncvt_xu_tu(maskedoff, src, __RISCV_FRM_RNE, vl);
}

vuint8m1_t test_vfncvt_xu_f_w_u8m1_rm_tu(vuint8m1_t maskedoff, vfloat16m2_t src, size_t vl) {
  return __riscv_vfncvt_xu_tu(maskedoff, src, __RISCV_FRM_RNE, vl);
}

vuint8m2_t test_vfncvt_xu_f_w_u8m2_rm_tu(vuint8m2_t maskedoff, vfloat16m4_t src, size_t vl) {
  return __riscv_vfncvt_xu_tu(maskedoff, src, __RISCV_FRM_RNE, vl);
}

vuint8m4_t test_vfncvt_xu_f_w_u8m4_rm_tu(vuint8m4_t maskedoff, vfloat16m8_t src, size_t vl) {
  return __riscv_vfncvt_xu_tu(maskedoff, src, __RISCV_FRM_RNE, vl);
}

vint16mf4_t test_vfncvt_x_f_w_i16mf4_rm_tu(vint16mf4_t maskedoff, vfloat32mf2_t src, size_t vl) {
  return __riscv_vfncvt_x_tu(maskedoff, src, __RISCV_FRM_RNE, vl);
}

vint16mf2_t test_vfncvt_x_f_w_i16mf2_rm_tu(vint16mf2_t maskedoff, vfloat32m1_t src, size_t vl) {
  return __riscv_vfncvt_x_tu(maskedoff, src, __RISCV_FRM_RNE, vl);
}

vint16m1_t test_vfncvt_x_f_w_i16m1_rm_tu(vint16m1_t maskedoff, vfloat32m2_t src, size_t vl) {
  return __riscv_vfncvt_x_tu(maskedoff, src, __RISCV_FRM_RNE, vl);
}

vint16m2_t test_vfncvt_x_f_w_i16m2_rm_tu(vint16m2_t maskedoff, vfloat32m4_t src, size_t vl) {
  return __riscv_vfncvt_x_tu(maskedoff, src, __RISCV_FRM_RNE, vl);
}

vint16m4_t test_vfncvt_x_f_w_i16m4_rm_tu(vint16m4_t maskedoff, vfloat32m8_t src, size_t vl) {
  return __riscv_vfncvt_x_tu(maskedoff, src, __RISCV_FRM_RNE, vl);
}

vuint16mf4_t test_vfncvt_xu_f_w_u16mf4_rm_tu(vuint16mf4_t maskedoff, vfloat32mf2_t src, size_t vl) {
  return __riscv_vfncvt_xu_tu(maskedoff, src, __RISCV_FRM_RNE, vl);
}

vuint16mf2_t test_vfncvt_xu_f_w_u16mf2_rm_tu(vuint16mf2_t maskedoff, vfloat32m1_t src, size_t vl) {
  return __riscv_vfncvt_xu_tu(maskedoff, src, __RISCV_FRM_RNE, vl);
}

vuint16m1_t test_vfncvt_xu_f_w_u16m1_rm_tu(vuint16m1_t maskedoff, vfloat32m2_t src, size_t vl) {
  return __riscv_vfncvt_xu_tu(maskedoff, src, __RISCV_FRM_RNE, vl);
}

vuint16m2_t test_vfncvt_xu_f_w_u16m2_rm_tu(vuint16m2_t maskedoff, vfloat32m4_t src, size_t vl) {
  return __riscv_vfncvt_xu_tu(maskedoff, src, __RISCV_FRM_RNE, vl);
}

vuint16m4_t test_vfncvt_xu_f_w_u16m4_rm_tu(vuint16m4_t maskedoff, vfloat32m8_t src, size_t vl) {
  return __riscv_vfncvt_xu_tu(maskedoff, src, __RISCV_FRM_RNE, vl);
}

vfloat16mf4_t test_vfncvt_f_x_w_f16mf4_rm_tu(vfloat16mf4_t maskedoff, vint32mf2_t src, size_t vl) {
  return __riscv_vfncvt_f_tu(maskedoff, src, __RISCV_FRM_RNE, vl);
}

vfloat16mf2_t test_vfncvt_f_x_w_f16mf2_rm_tu(vfloat16mf2_t maskedoff, vint32m1_t src, size_t vl) {
  return __riscv_vfncvt_f_tu(maskedoff, src, __RISCV_FRM_RNE, vl);
}

vfloat16m1_t test_vfncvt_f_x_w_f16m1_rm_tu(vfloat16m1_t maskedoff, vint32m2_t src, size_t vl) {
  return __riscv_vfncvt_f_tu(maskedoff, src, __RISCV_FRM_RNE, vl);
}

vfloat16m2_t test_vfncvt_f_x_w_f16m2_rm_tu(vfloat16m2_t maskedoff, vint32m4_t src, size_t vl) {
  return __riscv_vfncvt_f_tu(maskedoff, src, __RISCV_FRM_RNE, vl);
}

vfloat16m4_t test_vfncvt_f_x_w_f16m4_rm_tu(vfloat16m4_t maskedoff, vint32m8_t src, size_t vl) {
  return __riscv_vfncvt_f_tu(maskedoff, src, __RISCV_FRM_RNE, vl);
}

vfloat16mf4_t test_vfncvt_f_xu_w_f16mf4_rm_tu(vfloat16mf4_t maskedoff, vuint32mf2_t src, size_t vl) {
  return __riscv_vfncvt_f_tu(maskedoff, src, __RISCV_FRM_RNE, vl);
}

vfloat16mf2_t test_vfncvt_f_xu_w_f16mf2_rm_tu(vfloat16mf2_t maskedoff, vuint32m1_t src, size_t vl) {
  return __riscv_vfncvt_f_tu(maskedoff, src, __RISCV_FRM_RNE, vl);
}

vfloat16m1_t test_vfncvt_f_xu_w_f16m1_rm_tu(vfloat16m1_t maskedoff, vuint32m2_t src, size_t vl) {
  return __riscv_vfncvt_f_tu(maskedoff, src, __RISCV_FRM_RNE, vl);
}

vfloat16m2_t test_vfncvt_f_xu_w_f16m2_rm_tu(vfloat16m2_t maskedoff, vuint32m4_t src, size_t vl) {
  return __riscv_vfncvt_f_tu(maskedoff, src, __RISCV_FRM_RNE, vl);
}

vfloat16m4_t test_vfncvt_f_xu_w_f16m4_rm_tu(vfloat16m4_t maskedoff, vuint32m8_t src, size_t vl) {
  return __riscv_vfncvt_f_tu(maskedoff, src, __RISCV_FRM_RNE, vl);
}

vfloat16mf4_t test_vfncvt_f_f_w_f16mf4_rm_tu(vfloat16mf4_t maskedoff, vfloat32mf2_t src, size_t vl) {
  return __riscv_vfncvt_f_tu(maskedoff, src, __RISCV_FRM_RNE, vl);
}

vfloat16mf2_t test_vfncvt_f_f_w_f16mf2_rm_tu(vfloat16mf2_t maskedoff, vfloat32m1_t src, size_t vl) {
  return __riscv_vfncvt_f_tu(maskedoff, src, __RISCV_FRM_RNE, vl);
}

vfloat16m1_t test_vfncvt_f_f_w_f16m1_rm_tu(vfloat16m1_t maskedoff, vfloat32m2_t src, size_t vl) {
  return __riscv_vfncvt_f_tu(maskedoff, src, __RISCV_FRM_RNE, vl);
}

vfloat16m2_t test_vfncvt_f_f_w_f16m2_rm_tu(vfloat16m2_t maskedoff, vfloat32m4_t src, size_t vl) {
  return __riscv_vfncvt_f_tu(maskedoff, src, __RISCV_FRM_RNE, vl);
}

vfloat16m4_t test_vfncvt_f_f_w_f16m4_rm_tu(vfloat16m4_t maskedoff, vfloat32m8_t src, size_t vl) {
  return __riscv_vfncvt_f_tu(maskedoff, src, __RISCV_FRM_RNE, vl);
}

vint32mf2_t test_vfncvt_x_f_w_i32mf2_rm_tu(vint32mf2_t maskedoff, vfloat64m1_t src, size_t vl) {
  return __riscv_vfncvt_x_tu(maskedoff, src, __RISCV_FRM_RNE, vl);
}

vint32m1_t test_vfncvt_x_f_w_i32m1_rm_tu(vint32m1_t maskedoff, vfloat64m2_t src, size_t vl) {
  return __riscv_vfncvt_x_tu(maskedoff, src, __RISCV_FRM_RNE, vl);
}

vint32m2_t test_vfncvt_x_f_w_i32m2_rm_tu(vint32m2_t maskedoff, vfloat64m4_t src, size_t vl) {
  return __riscv_vfncvt_x_tu(maskedoff, src, __RISCV_FRM_RNE, vl);
}

vint32m4_t test_vfncvt_x_f_w_i32m4_rm_tu(vint32m4_t maskedoff, vfloat64m8_t src, size_t vl) {
  return __riscv_vfncvt_x_tu(maskedoff, src, __RISCV_FRM_RNE, vl);
}

vuint32mf2_t test_vfncvt_xu_f_w_u32mf2_rm_tu(vuint32mf2_t maskedoff, vfloat64m1_t src, size_t vl) {
  return __riscv_vfncvt_xu_tu(maskedoff, src, __RISCV_FRM_RNE, vl);
}

vuint32m1_t test_vfncvt_xu_f_w_u32m1_rm_tu(vuint32m1_t maskedoff, vfloat64m2_t src, size_t vl) {
  return __riscv_vfncvt_xu_tu(maskedoff, src, __RISCV_FRM_RNE, vl);
}

vuint32m2_t test_vfncvt_xu_f_w_u32m2_rm_tu(vuint32m2_t maskedoff, vfloat64m4_t src, size_t vl) {
  return __riscv_vfncvt_xu_tu(maskedoff, src, __RISCV_FRM_RNE, vl);
}

vuint32m4_t test_vfncvt_xu_f_w_u32m4_rm_tu(vuint32m4_t maskedoff, vfloat64m8_t src, size_t vl) {
  return __riscv_vfncvt_xu_tu(maskedoff, src, __RISCV_FRM_RNE, vl);
}

vfloat32mf2_t test_vfncvt_f_x_w_f32mf2_rm_tu(vfloat32mf2_t maskedoff, vint64m1_t src, size_t vl) {
  return __riscv_vfncvt_f_tu(maskedoff, src, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfncvt_f_x_w_f32m1_rm_tu(vfloat32m1_t maskedoff, vint64m2_t src, size_t vl) {
  return __riscv_vfncvt_f_tu(maskedoff, src, __RISCV_FRM_RNE, vl);
}

vfloat32m2_t test_vfncvt_f_x_w_f32m2_rm_tu(vfloat32m2_t maskedoff, vint64m4_t src, size_t vl) {
  return __riscv_vfncvt_f_tu(maskedoff, src, __RISCV_FRM_RNE, vl);
}

vfloat32m4_t test_vfncvt_f_x_w_f32m4_rm_tu(vfloat32m4_t maskedoff, vint64m8_t src, size_t vl) {
  return __riscv_vfncvt_f_tu(maskedoff, src, __RISCV_FRM_RNE, vl);
}

vfloat32mf2_t test_vfncvt_f_xu_w_f32mf2_rm_tu(vfloat32mf2_t maskedoff, vuint64m1_t src, size_t vl) {
  return __riscv_vfncvt_f_tu(maskedoff, src, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfncvt_f_xu_w_f32m1_rm_tu(vfloat32m1_t maskedoff, vuint64m2_t src, size_t vl) {
  return __riscv_vfncvt_f_tu(maskedoff, src, __RISCV_FRM_RNE, vl);
}

vfloat32m2_t test_vfncvt_f_xu_w_f32m2_rm_tu(vfloat32m2_t maskedoff, vuint64m4_t src, size_t vl) {
  return __riscv_vfncvt_f_tu(maskedoff, src, __RISCV_FRM_RNE, vl);
}

vfloat32m4_t test_vfncvt_f_xu_w_f32m4_rm_tu(vfloat32m4_t maskedoff, vuint64m8_t src, size_t vl) {
  return __riscv_vfncvt_f_tu(maskedoff, src, __RISCV_FRM_RNE, vl);
}

vfloat32mf2_t test_vfncvt_f_f_w_f32mf2_rm_tu(vfloat32mf2_t maskedoff, vfloat64m1_t src, size_t vl) {
  return __riscv_vfncvt_f_tu(maskedoff, src, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfncvt_f_f_w_f32m1_rm_tu(vfloat32m1_t maskedoff, vfloat64m2_t src, size_t vl) {
  return __riscv_vfncvt_f_tu(maskedoff, src, __RISCV_FRM_RNE, vl);
}

vfloat32m2_t test_vfncvt_f_f_w_f32m2_rm_tu(vfloat32m2_t maskedoff, vfloat64m4_t src, size_t vl) {
  return __riscv_vfncvt_f_tu(maskedoff, src, __RISCV_FRM_RNE, vl);
}

vfloat32m4_t test_vfncvt_f_f_w_f32m4_rm_tu(vfloat32m4_t maskedoff, vfloat64m8_t src, size_t vl) {
  return __riscv_vfncvt_f_tu(maskedoff, src, __RISCV_FRM_RNE, vl);
}

vint8mf8_t test_vfncvt_x_f_w_i8mf8_rm_tum(vbool64_t mask, vint8mf8_t maskedoff, vfloat16mf4_t src, size_t vl) {
  return __riscv_vfncvt_x_tum(mask, maskedoff, src, __RISCV_FRM_RNE, vl);
}

vint8mf4_t test_vfncvt_x_f_w_i8mf4_rm_tum(vbool32_t mask, vint8mf4_t maskedoff, vfloat16mf2_t src, size_t vl) {
  return __riscv_vfncvt_x_tum(mask, maskedoff, src, __RISCV_FRM_RNE, vl);
}

vint8mf2_t test_vfncvt_x_f_w_i8mf2_rm_tum(vbool16_t mask, vint8mf2_t maskedoff, vfloat16m1_t src, size_t vl) {
  return __riscv_vfncvt_x_tum(mask, maskedoff, src, __RISCV_FRM_RNE, vl);
}

vint8m1_t test_vfncvt_x_f_w_i8m1_rm_tum(vbool8_t mask, vint8m1_t maskedoff, vfloat16m2_t src, size_t vl) {
  return __riscv_vfncvt_x_tum(mask, maskedoff, src, __RISCV_FRM_RNE, vl);
}

vint8m2_t test_vfncvt_x_f_w_i8m2_rm_tum(vbool4_t mask, vint8m2_t maskedoff, vfloat16m4_t src, size_t vl) {
  return __riscv_vfncvt_x_tum(mask, maskedoff, src, __RISCV_FRM_RNE, vl);
}

vint8m4_t test_vfncvt_x_f_w_i8m4_rm_tum(vbool2_t mask, vint8m4_t maskedoff, vfloat16m8_t src, size_t vl) {
  return __riscv_vfncvt_x_tum(mask, maskedoff, src, __RISCV_FRM_RNE, vl);
}

vuint8mf8_t test_vfncvt_xu_f_w_u8mf8_rm_tum(vbool64_t mask, vuint8mf8_t maskedoff, vfloat16mf4_t src, size_t vl) {
  return __riscv_vfncvt_xu_tum(mask, maskedoff, src, __RISCV_FRM_RNE, vl);
}

vuint8mf4_t test_vfncvt_xu_f_w_u8mf4_rm_tum(vbool32_t mask, vuint8mf4_t maskedoff, vfloat16mf2_t src, size_t vl) {
  return __riscv_vfncvt_xu_tum(mask, maskedoff, src, __RISCV_FRM_RNE, vl);
}

vuint8mf2_t test_vfncvt_xu_f_w_u8mf2_rm_tum(vbool16_t mask, vuint8mf2_t maskedoff, vfloat16m1_t src, size_t vl) {
  return __riscv_vfncvt_xu_tum(mask, maskedoff, src, __RISCV_FRM_RNE, vl);
}

vuint8m1_t test_vfncvt_xu_f_w_u8m1_rm_tum(vbool8_t mask, vuint8m1_t maskedoff, vfloat16m2_t src, size_t vl) {
  return __riscv_vfncvt_xu_tum(mask, maskedoff, src, __RISCV_FRM_RNE, vl);
}

vuint8m2_t test_vfncvt_xu_f_w_u8m2_rm_tum(vbool4_t mask, vuint8m2_t maskedoff, vfloat16m4_t src, size_t vl) {
  return __riscv_vfncvt_xu_tum(mask, maskedoff, src, __RISCV_FRM_RNE, vl);
}

vuint8m4_t test_vfncvt_xu_f_w_u8m4_rm_tum(vbool2_t mask, vuint8m4_t maskedoff, vfloat16m8_t src, size_t vl) {
  return __riscv_vfncvt_xu_tum(mask, maskedoff, src, __RISCV_FRM_RNE, vl);
}

vint16mf4_t test_vfncvt_x_f_w_i16mf4_rm_tum(vbool64_t mask, vint16mf4_t maskedoff, vfloat32mf2_t src, size_t vl) {
  return __riscv_vfncvt_x_tum(mask, maskedoff, src, __RISCV_FRM_RNE, vl);
}

vint16mf2_t test_vfncvt_x_f_w_i16mf2_rm_tum(vbool32_t mask, vint16mf2_t maskedoff, vfloat32m1_t src, size_t vl) {
  return __riscv_vfncvt_x_tum(mask, maskedoff, src, __RISCV_FRM_RNE, vl);
}

vint16m1_t test_vfncvt_x_f_w_i16m1_rm_tum(vbool16_t mask, vint16m1_t maskedoff, vfloat32m2_t src, size_t vl) {
  return __riscv_vfncvt_x_tum(mask, maskedoff, src, __RISCV_FRM_RNE, vl);
}

vint16m2_t test_vfncvt_x_f_w_i16m2_rm_tum(vbool8_t mask, vint16m2_t maskedoff, vfloat32m4_t src, size_t vl) {
  return __riscv_vfncvt_x_tum(mask, maskedoff, src, __RISCV_FRM_RNE, vl);
}

vint16m4_t test_vfncvt_x_f_w_i16m4_rm_tum(vbool4_t mask, vint16m4_t maskedoff, vfloat32m8_t src, size_t vl) {
  return __riscv_vfncvt_x_tum(mask, maskedoff, src, __RISCV_FRM_RNE, vl);
}

vuint16mf4_t test_vfncvt_xu_f_w_u16mf4_rm_tum(vbool64_t mask, vuint16mf4_t maskedoff, vfloat32mf2_t src, size_t vl) {
  return __riscv_vfncvt_xu_tum(mask, maskedoff, src, __RISCV_FRM_RNE, vl);
}

vuint16mf2_t test_vfncvt_xu_f_w_u16mf2_rm_tum(vbool32_t mask, vuint16mf2_t maskedoff, vfloat32m1_t src, size_t vl) {
  return __riscv_vfncvt_xu_tum(mask, maskedoff, src, __RISCV_FRM_RNE, vl);
}

vuint16m1_t test_vfncvt_xu_f_w_u16m1_rm_tum(vbool16_t mask, vuint16m1_t maskedoff, vfloat32m2_t src, size_t vl) {
  return __riscv_vfncvt_xu_tum(mask, maskedoff, src, __RISCV_FRM_RNE, vl);
}

vuint16m2_t test_vfncvt_xu_f_w_u16m2_rm_tum(vbool8_t mask, vuint16m2_t maskedoff, vfloat32m4_t src, size_t vl) {
  return __riscv_vfncvt_xu_tum(mask, maskedoff, src, __RISCV_FRM_RNE, vl);
}

vuint16m4_t test_vfncvt_xu_f_w_u16m4_rm_tum(vbool4_t mask, vuint16m4_t maskedoff, vfloat32m8_t src, size_t vl) {
  return __riscv_vfncvt_xu_tum(mask, maskedoff, src, __RISCV_FRM_RNE, vl);
}

vfloat16mf4_t test_vfncvt_f_x_w_f16mf4_rm_tum(vbool64_t mask, vfloat16mf4_t maskedoff, vint32mf2_t src, size_t vl) {
  return __riscv_vfncvt_f_tum(mask, maskedoff, src, __RISCV_FRM_RNE, vl);
}

vfloat16mf2_t test_vfncvt_f_x_w_f16mf2_rm_tum(vbool32_t mask, vfloat16mf2_t maskedoff, vint32m1_t src, size_t vl) {
  return __riscv_vfncvt_f_tum(mask, maskedoff, src, __RISCV_FRM_RNE, vl);
}

vfloat16m1_t test_vfncvt_f_x_w_f16m1_rm_tum(vbool16_t mask, vfloat16m1_t maskedoff, vint32m2_t src, size_t vl) {
  return __riscv_vfncvt_f_tum(mask, maskedoff, src, __RISCV_FRM_RNE, vl);
}

vfloat16m2_t test_vfncvt_f_x_w_f16m2_rm_tum(vbool8_t mask, vfloat16m2_t maskedoff, vint32m4_t src, size_t vl) {
  return __riscv_vfncvt_f_tum(mask, maskedoff, src, __RISCV_FRM_RNE, vl);
}

vfloat16m4_t test_vfncvt_f_x_w_f16m4_rm_tum(vbool4_t mask, vfloat16m4_t maskedoff, vint32m8_t src, size_t vl) {
  return __riscv_vfncvt_f_tum(mask, maskedoff, src, __RISCV_FRM_RNE, vl);
}

vfloat16mf4_t test_vfncvt_f_xu_w_f16mf4_rm_tum(vbool64_t mask, vfloat16mf4_t maskedoff, vuint32mf2_t src, size_t vl) {
  return __riscv_vfncvt_f_tum(mask, maskedoff, src, __RISCV_FRM_RNE, vl);
}

vfloat16mf2_t test_vfncvt_f_xu_w_f16mf2_rm_tum(vbool32_t mask, vfloat16mf2_t maskedoff, vuint32m1_t src, size_t vl) {
  return __riscv_vfncvt_f_tum(mask, maskedoff, src, __RISCV_FRM_RNE, vl);
}

vfloat16m1_t test_vfncvt_f_xu_w_f16m1_rm_tum(vbool16_t mask, vfloat16m1_t maskedoff, vuint32m2_t src, size_t vl) {
  return __riscv_vfncvt_f_tum(mask, maskedoff, src, __RISCV_FRM_RNE, vl);
}

vfloat16m2_t test_vfncvt_f_xu_w_f16m2_rm_tum(vbool8_t mask, vfloat16m2_t maskedoff, vuint32m4_t src, size_t vl) {
  return __riscv_vfncvt_f_tum(mask, maskedoff, src, __RISCV_FRM_RNE, vl);
}

vfloat16m4_t test_vfncvt_f_xu_w_f16m4_rm_tum(vbool4_t mask, vfloat16m4_t maskedoff, vuint32m8_t src, size_t vl) {
  return __riscv_vfncvt_f_tum(mask, maskedoff, src, __RISCV_FRM_RNE, vl);
}

vfloat16mf4_t test_vfncvt_f_f_w_f16mf4_rm_tum(vbool64_t mask, vfloat16mf4_t maskedoff, vfloat32mf2_t src, size_t vl) {
  return __riscv_vfncvt_f_tum(mask, maskedoff, src, __RISCV_FRM_RNE, vl);
}

vfloat16mf2_t test_vfncvt_f_f_w_f16mf2_rm_tum(vbool32_t mask, vfloat16mf2_t maskedoff, vfloat32m1_t src, size_t vl) {
  return __riscv_vfncvt_f_tum(mask, maskedoff, src, __RISCV_FRM_RNE, vl);
}

vfloat16m1_t test_vfncvt_f_f_w_f16m1_rm_tum(vbool16_t mask, vfloat16m1_t maskedoff, vfloat32m2_t src, size_t vl) {
  return __riscv_vfncvt_f_tum(mask, maskedoff, src, __RISCV_FRM_RNE, vl);
}

vfloat16m2_t test_vfncvt_f_f_w_f16m2_rm_tum(vbool8_t mask, vfloat16m2_t maskedoff, vfloat32m4_t src, size_t vl) {
  return __riscv_vfncvt_f_tum(mask, maskedoff, src, __RISCV_FRM_RNE, vl);
}

vfloat16m4_t test_vfncvt_f_f_w_f16m4_rm_tum(vbool4_t mask, vfloat16m4_t maskedoff, vfloat32m8_t src, size_t vl) {
  return __riscv_vfncvt_f_tum(mask, maskedoff, src, __RISCV_FRM_RNE, vl);
}

vint32mf2_t test_vfncvt_x_f_w_i32mf2_rm_tum(vbool64_t mask, vint32mf2_t maskedoff, vfloat64m1_t src, size_t vl) {
  return __riscv_vfncvt_x_tum(mask, maskedoff, src, __RISCV_FRM_RNE, vl);
}

vint32m1_t test_vfncvt_x_f_w_i32m1_rm_tum(vbool32_t mask, vint32m1_t maskedoff, vfloat64m2_t src, size_t vl) {
  return __riscv_vfncvt_x_tum(mask, maskedoff, src, __RISCV_FRM_RNE, vl);
}

vint32m2_t test_vfncvt_x_f_w_i32m2_rm_tum(vbool16_t mask, vint32m2_t maskedoff, vfloat64m4_t src, size_t vl) {
  return __riscv_vfncvt_x_tum(mask, maskedoff, src, __RISCV_FRM_RNE, vl);
}

vint32m4_t test_vfncvt_x_f_w_i32m4_rm_tum(vbool8_t mask, vint32m4_t maskedoff, vfloat64m8_t src, size_t vl) {
  return __riscv_vfncvt_x_tum(mask, maskedoff, src, __RISCV_FRM_RNE, vl);
}

vuint32mf2_t test_vfncvt_xu_f_w_u32mf2_rm_tum(vbool64_t mask, vuint32mf2_t maskedoff, vfloat64m1_t src, size_t vl) {
  return __riscv_vfncvt_xu_tum(mask, maskedoff, src, __RISCV_FRM_RNE, vl);
}

vuint32m1_t test_vfncvt_xu_f_w_u32m1_rm_tum(vbool32_t mask, vuint32m1_t maskedoff, vfloat64m2_t src, size_t vl) {
  return __riscv_vfncvt_xu_tum(mask, maskedoff, src, __RISCV_FRM_RNE, vl);
}

vuint32m2_t test_vfncvt_xu_f_w_u32m2_rm_tum(vbool16_t mask, vuint32m2_t maskedoff, vfloat64m4_t src, size_t vl) {
  return __riscv_vfncvt_xu_tum(mask, maskedoff, src, __RISCV_FRM_RNE, vl);
}

vuint32m4_t test_vfncvt_xu_f_w_u32m4_rm_tum(vbool8_t mask, vuint32m4_t maskedoff, vfloat64m8_t src, size_t vl) {
  return __riscv_vfncvt_xu_tum(mask, maskedoff, src, __RISCV_FRM_RNE, vl);
}

vfloat32mf2_t test_vfncvt_f_x_w_f32mf2_rm_tum(vbool64_t mask, vfloat32mf2_t maskedoff, vint64m1_t src, size_t vl) {
  return __riscv_vfncvt_f_tum(mask, maskedoff, src, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfncvt_f_x_w_f32m1_rm_tum(vbool32_t mask, vfloat32m1_t maskedoff, vint64m2_t src, size_t vl) {
  return __riscv_vfncvt_f_tum(mask, maskedoff, src, __RISCV_FRM_RNE, vl);
}

vfloat32m2_t test_vfncvt_f_x_w_f32m2_rm_tum(vbool16_t mask, vfloat32m2_t maskedoff, vint64m4_t src, size_t vl) {
  return __riscv_vfncvt_f_tum(mask, maskedoff, src, __RISCV_FRM_RNE, vl);
}

vfloat32m4_t test_vfncvt_f_x_w_f32m4_rm_tum(vbool8_t mask, vfloat32m4_t maskedoff, vint64m8_t src, size_t vl) {
  return __riscv_vfncvt_f_tum(mask, maskedoff, src, __RISCV_FRM_RNE, vl);
}

vfloat32mf2_t test_vfncvt_f_xu_w_f32mf2_rm_tum(vbool64_t mask, vfloat32mf2_t maskedoff, vuint64m1_t src, size_t vl) {
  return __riscv_vfncvt_f_tum(mask, maskedoff, src, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfncvt_f_xu_w_f32m1_rm_tum(vbool32_t mask, vfloat32m1_t maskedoff, vuint64m2_t src, size_t vl) {
  return __riscv_vfncvt_f_tum(mask, maskedoff, src, __RISCV_FRM_RNE, vl);
}

vfloat32m2_t test_vfncvt_f_xu_w_f32m2_rm_tum(vbool16_t mask, vfloat32m2_t maskedoff, vuint64m4_t src, size_t vl) {
  return __riscv_vfncvt_f_tum(mask, maskedoff, src, __RISCV_FRM_RNE, vl);
}

vfloat32m4_t test_vfncvt_f_xu_w_f32m4_rm_tum(vbool8_t mask, vfloat32m4_t maskedoff, vuint64m8_t src, size_t vl) {
  return __riscv_vfncvt_f_tum(mask, maskedoff, src, __RISCV_FRM_RNE, vl);
}

vfloat32mf2_t test_vfncvt_f_f_w_f32mf2_rm_tum(vbool64_t mask, vfloat32mf2_t maskedoff, vfloat64m1_t src, size_t vl) {
  return __riscv_vfncvt_f_tum(mask, maskedoff, src, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfncvt_f_f_w_f32m1_rm_tum(vbool32_t mask, vfloat32m1_t maskedoff, vfloat64m2_t src, size_t vl) {
  return __riscv_vfncvt_f_tum(mask, maskedoff, src, __RISCV_FRM_RNE, vl);
}

vfloat32m2_t test_vfncvt_f_f_w_f32m2_rm_tum(vbool16_t mask, vfloat32m2_t maskedoff, vfloat64m4_t src, size_t vl) {
  return __riscv_vfncvt_f_tum(mask, maskedoff, src, __RISCV_FRM_RNE, vl);
}

vfloat32m4_t test_vfncvt_f_f_w_f32m4_rm_tum(vbool8_t mask, vfloat32m4_t maskedoff, vfloat64m8_t src, size_t vl) {
  return __riscv_vfncvt_f_tum(mask, maskedoff, src, __RISCV_FRM_RNE, vl);
}

vint8mf8_t test_vfncvt_x_f_w_i8mf8_rm_tumu(vbool64_t mask, vint8mf8_t maskedoff, vfloat16mf4_t src, size_t vl) {
  return __riscv_vfncvt_x_tumu(mask, maskedoff, src, __RISCV_FRM_RNE, vl);
}

vint8mf4_t test_vfncvt_x_f_w_i8mf4_rm_tumu(vbool32_t mask, vint8mf4_t maskedoff, vfloat16mf2_t src, size_t vl) {
  return __riscv_vfncvt_x_tumu(mask, maskedoff, src, __RISCV_FRM_RNE, vl);
}

vint8mf2_t test_vfncvt_x_f_w_i8mf2_rm_tumu(vbool16_t mask, vint8mf2_t maskedoff, vfloat16m1_t src, size_t vl) {
  return __riscv_vfncvt_x_tumu(mask, maskedoff, src, __RISCV_FRM_RNE, vl);
}

vint8m1_t test_vfncvt_x_f_w_i8m1_rm_tumu(vbool8_t mask, vint8m1_t maskedoff, vfloat16m2_t src, size_t vl) {
  return __riscv_vfncvt_x_tumu(mask, maskedoff, src, __RISCV_FRM_RNE, vl);
}

vint8m2_t test_vfncvt_x_f_w_i8m2_rm_tumu(vbool4_t mask, vint8m2_t maskedoff, vfloat16m4_t src, size_t vl) {
  return __riscv_vfncvt_x_tumu(mask, maskedoff, src, __RISCV_FRM_RNE, vl);
}

vint8m4_t test_vfncvt_x_f_w_i8m4_rm_tumu(vbool2_t mask, vint8m4_t maskedoff, vfloat16m8_t src, size_t vl) {
  return __riscv_vfncvt_x_tumu(mask, maskedoff, src, __RISCV_FRM_RNE, vl);
}

vuint8mf8_t test_vfncvt_xu_f_w_u8mf8_rm_tumu(vbool64_t mask, vuint8mf8_t maskedoff, vfloat16mf4_t src, size_t vl) {
  return __riscv_vfncvt_xu_tumu(mask, maskedoff, src, __RISCV_FRM_RNE, vl);
}

vuint8mf4_t test_vfncvt_xu_f_w_u8mf4_rm_tumu(vbool32_t mask, vuint8mf4_t maskedoff, vfloat16mf2_t src, size_t vl) {
  return __riscv_vfncvt_xu_tumu(mask, maskedoff, src, __RISCV_FRM_RNE, vl);
}

vuint8mf2_t test_vfncvt_xu_f_w_u8mf2_rm_tumu(vbool16_t mask, vuint8mf2_t maskedoff, vfloat16m1_t src, size_t vl) {
  return __riscv_vfncvt_xu_tumu(mask, maskedoff, src, __RISCV_FRM_RNE, vl);
}

vuint8m1_t test_vfncvt_xu_f_w_u8m1_rm_tumu(vbool8_t mask, vuint8m1_t maskedoff, vfloat16m2_t src, size_t vl) {
  return __riscv_vfncvt_xu_tumu(mask, maskedoff, src, __RISCV_FRM_RNE, vl);
}

vuint8m2_t test_vfncvt_xu_f_w_u8m2_rm_tumu(vbool4_t mask, vuint8m2_t maskedoff, vfloat16m4_t src, size_t vl) {
  return __riscv_vfncvt_xu_tumu(mask, maskedoff, src, __RISCV_FRM_RNE, vl);
}

vuint8m4_t test_vfncvt_xu_f_w_u8m4_rm_tumu(vbool2_t mask, vuint8m4_t maskedoff, vfloat16m8_t src, size_t vl) {
  return __riscv_vfncvt_xu_tumu(mask, maskedoff, src, __RISCV_FRM_RNE, vl);
}

vint16mf4_t test_vfncvt_x_f_w_i16mf4_rm_tumu(vbool64_t mask, vint16mf4_t maskedoff, vfloat32mf2_t src, size_t vl) {
  return __riscv_vfncvt_x_tumu(mask, maskedoff, src, __RISCV_FRM_RNE, vl);
}

vint16mf2_t test_vfncvt_x_f_w_i16mf2_rm_tumu(vbool32_t mask, vint16mf2_t maskedoff, vfloat32m1_t src, size_t vl) {
  return __riscv_vfncvt_x_tumu(mask, maskedoff, src, __RISCV_FRM_RNE, vl);
}

vint16m1_t test_vfncvt_x_f_w_i16m1_rm_tumu(vbool16_t mask, vint16m1_t maskedoff, vfloat32m2_t src, size_t vl) {
  return __riscv_vfncvt_x_tumu(mask, maskedoff, src, __RISCV_FRM_RNE, vl);
}

vint16m2_t test_vfncvt_x_f_w_i16m2_rm_tumu(vbool8_t mask, vint16m2_t maskedoff, vfloat32m4_t src, size_t vl) {
  return __riscv_vfncvt_x_tumu(mask, maskedoff, src, __RISCV_FRM_RNE, vl);
}

vint16m4_t test_vfncvt_x_f_w_i16m4_rm_tumu(vbool4_t mask, vint16m4_t maskedoff, vfloat32m8_t src, size_t vl) {
  return __riscv_vfncvt_x_tumu(mask, maskedoff, src, __RISCV_FRM_RNE, vl);
}

vuint16mf4_t test_vfncvt_xu_f_w_u16mf4_rm_tumu(vbool64_t mask, vuint16mf4_t maskedoff, vfloat32mf2_t src, size_t vl) {
  return __riscv_vfncvt_xu_tumu(mask, maskedoff, src, __RISCV_FRM_RNE, vl);
}

vuint16mf2_t test_vfncvt_xu_f_w_u16mf2_rm_tumu(vbool32_t mask, vuint16mf2_t maskedoff, vfloat32m1_t src, size_t vl) {
  return __riscv_vfncvt_xu_tumu(mask, maskedoff, src, __RISCV_FRM_RNE, vl);
}

vuint16m1_t test_vfncvt_xu_f_w_u16m1_rm_tumu(vbool16_t mask, vuint16m1_t maskedoff, vfloat32m2_t src, size_t vl) {
  return __riscv_vfncvt_xu_tumu(mask, maskedoff, src, __RISCV_FRM_RNE, vl);
}

vuint16m2_t test_vfncvt_xu_f_w_u16m2_rm_tumu(vbool8_t mask, vuint16m2_t maskedoff, vfloat32m4_t src, size_t vl) {
  return __riscv_vfncvt_xu_tumu(mask, maskedoff, src, __RISCV_FRM_RNE, vl);
}

vuint16m4_t test_vfncvt_xu_f_w_u16m4_rm_tumu(vbool4_t mask, vuint16m4_t maskedoff, vfloat32m8_t src, size_t vl) {
  return __riscv_vfncvt_xu_tumu(mask, maskedoff, src, __RISCV_FRM_RNE, vl);
}

vfloat16mf4_t test_vfncvt_f_x_w_f16mf4_rm_tumu(vbool64_t mask, vfloat16mf4_t maskedoff, vint32mf2_t src, size_t vl) {
  return __riscv_vfncvt_f_tumu(mask, maskedoff, src, __RISCV_FRM_RNE, vl);
}

vfloat16mf2_t test_vfncvt_f_x_w_f16mf2_rm_tumu(vbool32_t mask, vfloat16mf2_t maskedoff, vint32m1_t src, size_t vl) {
  return __riscv_vfncvt_f_tumu(mask, maskedoff, src, __RISCV_FRM_RNE, vl);
}

vfloat16m1_t test_vfncvt_f_x_w_f16m1_rm_tumu(vbool16_t mask, vfloat16m1_t maskedoff, vint32m2_t src, size_t vl) {
  return __riscv_vfncvt_f_tumu(mask, maskedoff, src, __RISCV_FRM_RNE, vl);
}

vfloat16m2_t test_vfncvt_f_x_w_f16m2_rm_tumu(vbool8_t mask, vfloat16m2_t maskedoff, vint32m4_t src, size_t vl) {
  return __riscv_vfncvt_f_tumu(mask, maskedoff, src, __RISCV_FRM_RNE, vl);
}

vfloat16m4_t test_vfncvt_f_x_w_f16m4_rm_tumu(vbool4_t mask, vfloat16m4_t maskedoff, vint32m8_t src, size_t vl) {
  return __riscv_vfncvt_f_tumu(mask, maskedoff, src, __RISCV_FRM_RNE, vl);
}

vfloat16mf4_t test_vfncvt_f_xu_w_f16mf4_rm_tumu(vbool64_t mask, vfloat16mf4_t maskedoff, vuint32mf2_t src, size_t vl) {
  return __riscv_vfncvt_f_tumu(mask, maskedoff, src, __RISCV_FRM_RNE, vl);
}

vfloat16mf2_t test_vfncvt_f_xu_w_f16mf2_rm_tumu(vbool32_t mask, vfloat16mf2_t maskedoff, vuint32m1_t src, size_t vl) {
  return __riscv_vfncvt_f_tumu(mask, maskedoff, src, __RISCV_FRM_RNE, vl);
}

vfloat16m1_t test_vfncvt_f_xu_w_f16m1_rm_tumu(vbool16_t mask, vfloat16m1_t maskedoff, vuint32m2_t src, size_t vl) {
  return __riscv_vfncvt_f_tumu(mask, maskedoff, src, __RISCV_FRM_RNE, vl);
}

vfloat16m2_t test_vfncvt_f_xu_w_f16m2_rm_tumu(vbool8_t mask, vfloat16m2_t maskedoff, vuint32m4_t src, size_t vl) {
  return __riscv_vfncvt_f_tumu(mask, maskedoff, src, __RISCV_FRM_RNE, vl);
}

vfloat16m4_t test_vfncvt_f_xu_w_f16m4_rm_tumu(vbool4_t mask, vfloat16m4_t maskedoff, vuint32m8_t src, size_t vl) {
  return __riscv_vfncvt_f_tumu(mask, maskedoff, src, __RISCV_FRM_RNE, vl);
}

vfloat16mf4_t test_vfncvt_f_f_w_f16mf4_rm_tumu(vbool64_t mask, vfloat16mf4_t maskedoff, vfloat32mf2_t src, size_t vl) {
  return __riscv_vfncvt_f_tumu(mask, maskedoff, src, __RISCV_FRM_RNE, vl);
}

vfloat16mf2_t test_vfncvt_f_f_w_f16mf2_rm_tumu(vbool32_t mask, vfloat16mf2_t maskedoff, vfloat32m1_t src, size_t vl) {
  return __riscv_vfncvt_f_tumu(mask, maskedoff, src, __RISCV_FRM_RNE, vl);
}

vfloat16m1_t test_vfncvt_f_f_w_f16m1_rm_tumu(vbool16_t mask, vfloat16m1_t maskedoff, vfloat32m2_t src, size_t vl) {
  return __riscv_vfncvt_f_tumu(mask, maskedoff, src, __RISCV_FRM_RNE, vl);
}

vfloat16m2_t test_vfncvt_f_f_w_f16m2_rm_tumu(vbool8_t mask, vfloat16m2_t maskedoff, vfloat32m4_t src, size_t vl) {
  return __riscv_vfncvt_f_tumu(mask, maskedoff, src, __RISCV_FRM_RNE, vl);
}

vfloat16m4_t test_vfncvt_f_f_w_f16m4_rm_tumu(vbool4_t mask, vfloat16m4_t maskedoff, vfloat32m8_t src, size_t vl) {
  return __riscv_vfncvt_f_tumu(mask, maskedoff, src, __RISCV_FRM_RNE, vl);
}

vint32mf2_t test_vfncvt_x_f_w_i32mf2_rm_tumu(vbool64_t mask, vint32mf2_t maskedoff, vfloat64m1_t src, size_t vl) {
  return __riscv_vfncvt_x_tumu(mask, maskedoff, src, __RISCV_FRM_RNE, vl);
}

vint32m1_t test_vfncvt_x_f_w_i32m1_rm_tumu(vbool32_t mask, vint32m1_t maskedoff, vfloat64m2_t src, size_t vl) {
  return __riscv_vfncvt_x_tumu(mask, maskedoff, src, __RISCV_FRM_RNE, vl);
}

vint32m2_t test_vfncvt_x_f_w_i32m2_rm_tumu(vbool16_t mask, vint32m2_t maskedoff, vfloat64m4_t src, size_t vl) {
  return __riscv_vfncvt_x_tumu(mask, maskedoff, src, __RISCV_FRM_RNE, vl);
}

vint32m4_t test_vfncvt_x_f_w_i32m4_rm_tumu(vbool8_t mask, vint32m4_t maskedoff, vfloat64m8_t src, size_t vl) {
  return __riscv_vfncvt_x_tumu(mask, maskedoff, src, __RISCV_FRM_RNE, vl);
}

vuint32mf2_t test_vfncvt_xu_f_w_u32mf2_rm_tumu(vbool64_t mask, vuint32mf2_t maskedoff, vfloat64m1_t src, size_t vl) {
  return __riscv_vfncvt_xu_tumu(mask, maskedoff, src, __RISCV_FRM_RNE, vl);
}

vuint32m1_t test_vfncvt_xu_f_w_u32m1_rm_tumu(vbool32_t mask, vuint32m1_t maskedoff, vfloat64m2_t src, size_t vl) {
  return __riscv_vfncvt_xu_tumu(mask, maskedoff, src, __RISCV_FRM_RNE, vl);
}

vuint32m2_t test_vfncvt_xu_f_w_u32m2_rm_tumu(vbool16_t mask, vuint32m2_t maskedoff, vfloat64m4_t src, size_t vl) {
  return __riscv_vfncvt_xu_tumu(mask, maskedoff, src, __RISCV_FRM_RNE, vl);
}

vuint32m4_t test_vfncvt_xu_f_w_u32m4_rm_tumu(vbool8_t mask, vuint32m4_t maskedoff, vfloat64m8_t src, size_t vl) {
  return __riscv_vfncvt_xu_tumu(mask, maskedoff, src, __RISCV_FRM_RNE, vl);
}

vfloat32mf2_t test_vfncvt_f_x_w_f32mf2_rm_tumu(vbool64_t mask, vfloat32mf2_t maskedoff, vint64m1_t src, size_t vl) {
  return __riscv_vfncvt_f_tumu(mask, maskedoff, src, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfncvt_f_x_w_f32m1_rm_tumu(vbool32_t mask, vfloat32m1_t maskedoff, vint64m2_t src, size_t vl) {
  return __riscv_vfncvt_f_tumu(mask, maskedoff, src, __RISCV_FRM_RNE, vl);
}

vfloat32m2_t test_vfncvt_f_x_w_f32m2_rm_tumu(vbool16_t mask, vfloat32m2_t maskedoff, vint64m4_t src, size_t vl) {
  return __riscv_vfncvt_f_tumu(mask, maskedoff, src, __RISCV_FRM_RNE, vl);
}

vfloat32m4_t test_vfncvt_f_x_w_f32m4_rm_tumu(vbool8_t mask, vfloat32m4_t maskedoff, vint64m8_t src, size_t vl) {
  return __riscv_vfncvt_f_tumu(mask, maskedoff, src, __RISCV_FRM_RNE, vl);
}

vfloat32mf2_t test_vfncvt_f_xu_w_f32mf2_rm_tumu(vbool64_t mask, vfloat32mf2_t maskedoff, vuint64m1_t src, size_t vl) {
  return __riscv_vfncvt_f_tumu(mask, maskedoff, src, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfncvt_f_xu_w_f32m1_rm_tumu(vbool32_t mask, vfloat32m1_t maskedoff, vuint64m2_t src, size_t vl) {
  return __riscv_vfncvt_f_tumu(mask, maskedoff, src, __RISCV_FRM_RNE, vl);
}

vfloat32m2_t test_vfncvt_f_xu_w_f32m2_rm_tumu(vbool16_t mask, vfloat32m2_t maskedoff, vuint64m4_t src, size_t vl) {
  return __riscv_vfncvt_f_tumu(mask, maskedoff, src, __RISCV_FRM_RNE, vl);
}

vfloat32m4_t test_vfncvt_f_xu_w_f32m4_rm_tumu(vbool8_t mask, vfloat32m4_t maskedoff, vuint64m8_t src, size_t vl) {
  return __riscv_vfncvt_f_tumu(mask, maskedoff, src, __RISCV_FRM_RNE, vl);
}

vfloat32mf2_t test_vfncvt_f_f_w_f32mf2_rm_tumu(vbool64_t mask, vfloat32mf2_t maskedoff, vfloat64m1_t src, size_t vl) {
  return __riscv_vfncvt_f_tumu(mask, maskedoff, src, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfncvt_f_f_w_f32m1_rm_tumu(vbool32_t mask, vfloat32m1_t maskedoff, vfloat64m2_t src, size_t vl) {
  return __riscv_vfncvt_f_tumu(mask, maskedoff, src, __RISCV_FRM_RNE, vl);
}

vfloat32m2_t test_vfncvt_f_f_w_f32m2_rm_tumu(vbool16_t mask, vfloat32m2_t maskedoff, vfloat64m4_t src, size_t vl) {
  return __riscv_vfncvt_f_tumu(mask, maskedoff, src, __RISCV_FRM_RNE, vl);
}

vfloat32m4_t test_vfncvt_f_f_w_f32m4_rm_tumu(vbool8_t mask, vfloat32m4_t maskedoff, vfloat64m8_t src, size_t vl) {
  return __riscv_vfncvt_f_tumu(mask, maskedoff, src, __RISCV_FRM_RNE, vl);
}

vint8mf8_t test_vfncvt_x_f_w_i8mf8_rm_mu(vbool64_t mask, vint8mf8_t maskedoff, vfloat16mf4_t src, size_t vl) {
  return __riscv_vfncvt_x_mu(mask, maskedoff, src, __RISCV_FRM_RNE, vl);
}

vint8mf4_t test_vfncvt_x_f_w_i8mf4_rm_mu(vbool32_t mask, vint8mf4_t maskedoff, vfloat16mf2_t src, size_t vl) {
  return __riscv_vfncvt_x_mu(mask, maskedoff, src, __RISCV_FRM_RNE, vl);
}

vint8mf2_t test_vfncvt_x_f_w_i8mf2_rm_mu(vbool16_t mask, vint8mf2_t maskedoff, vfloat16m1_t src, size_t vl) {
  return __riscv_vfncvt_x_mu(mask, maskedoff, src, __RISCV_FRM_RNE, vl);
}

vint8m1_t test_vfncvt_x_f_w_i8m1_rm_mu(vbool8_t mask, vint8m1_t maskedoff, vfloat16m2_t src, size_t vl) {
  return __riscv_vfncvt_x_mu(mask, maskedoff, src, __RISCV_FRM_RNE, vl);
}

vint8m2_t test_vfncvt_x_f_w_i8m2_rm_mu(vbool4_t mask, vint8m2_t maskedoff, vfloat16m4_t src, size_t vl) {
  return __riscv_vfncvt_x_mu(mask, maskedoff, src, __RISCV_FRM_RNE, vl);
}

vint8m4_t test_vfncvt_x_f_w_i8m4_rm_mu(vbool2_t mask, vint8m4_t maskedoff, vfloat16m8_t src, size_t vl) {
  return __riscv_vfncvt_x_mu(mask, maskedoff, src, __RISCV_FRM_RNE, vl);
}

vuint8mf8_t test_vfncvt_xu_f_w_u8mf8_rm_mu(vbool64_t mask, vuint8mf8_t maskedoff, vfloat16mf4_t src, size_t vl) {
  return __riscv_vfncvt_xu_mu(mask, maskedoff, src, __RISCV_FRM_RNE, vl);
}

vuint8mf4_t test_vfncvt_xu_f_w_u8mf4_rm_mu(vbool32_t mask, vuint8mf4_t maskedoff, vfloat16mf2_t src, size_t vl) {
  return __riscv_vfncvt_xu_mu(mask, maskedoff, src, __RISCV_FRM_RNE, vl);
}

vuint8mf2_t test_vfncvt_xu_f_w_u8mf2_rm_mu(vbool16_t mask, vuint8mf2_t maskedoff, vfloat16m1_t src, size_t vl) {
  return __riscv_vfncvt_xu_mu(mask, maskedoff, src, __RISCV_FRM_RNE, vl);
}

vuint8m1_t test_vfncvt_xu_f_w_u8m1_rm_mu(vbool8_t mask, vuint8m1_t maskedoff, vfloat16m2_t src, size_t vl) {
  return __riscv_vfncvt_xu_mu(mask, maskedoff, src, __RISCV_FRM_RNE, vl);
}

vuint8m2_t test_vfncvt_xu_f_w_u8m2_rm_mu(vbool4_t mask, vuint8m2_t maskedoff, vfloat16m4_t src, size_t vl) {
  return __riscv_vfncvt_xu_mu(mask, maskedoff, src, __RISCV_FRM_RNE, vl);
}

vuint8m4_t test_vfncvt_xu_f_w_u8m4_rm_mu(vbool2_t mask, vuint8m4_t maskedoff, vfloat16m8_t src, size_t vl) {
  return __riscv_vfncvt_xu_mu(mask, maskedoff, src, __RISCV_FRM_RNE, vl);
}

vint16mf4_t test_vfncvt_x_f_w_i16mf4_rm_mu(vbool64_t mask, vint16mf4_t maskedoff, vfloat32mf2_t src, size_t vl) {
  return __riscv_vfncvt_x_mu(mask, maskedoff, src, __RISCV_FRM_RNE, vl);
}

vint16mf2_t test_vfncvt_x_f_w_i16mf2_rm_mu(vbool32_t mask, vint16mf2_t maskedoff, vfloat32m1_t src, size_t vl) {
  return __riscv_vfncvt_x_mu(mask, maskedoff, src, __RISCV_FRM_RNE, vl);
}

vint16m1_t test_vfncvt_x_f_w_i16m1_rm_mu(vbool16_t mask, vint16m1_t maskedoff, vfloat32m2_t src, size_t vl) {
  return __riscv_vfncvt_x_mu(mask, maskedoff, src, __RISCV_FRM_RNE, vl);
}

vint16m2_t test_vfncvt_x_f_w_i16m2_rm_mu(vbool8_t mask, vint16m2_t maskedoff, vfloat32m4_t src, size_t vl) {
  return __riscv_vfncvt_x_mu(mask, maskedoff, src, __RISCV_FRM_RNE, vl);
}

vint16m4_t test_vfncvt_x_f_w_i16m4_rm_mu(vbool4_t mask, vint16m4_t maskedoff, vfloat32m8_t src, size_t vl) {
  return __riscv_vfncvt_x_mu(mask, maskedoff, src, __RISCV_FRM_RNE, vl);
}

vuint16mf4_t test_vfncvt_xu_f_w_u16mf4_rm_mu(vbool64_t mask, vuint16mf4_t maskedoff, vfloat32mf2_t src, size_t vl) {
  return __riscv_vfncvt_xu_mu(mask, maskedoff, src, __RISCV_FRM_RNE, vl);
}

vuint16mf2_t test_vfncvt_xu_f_w_u16mf2_rm_mu(vbool32_t mask, vuint16mf2_t maskedoff, vfloat32m1_t src, size_t vl) {
  return __riscv_vfncvt_xu_mu(mask, maskedoff, src, __RISCV_FRM_RNE, vl);
}

vuint16m1_t test_vfncvt_xu_f_w_u16m1_rm_mu(vbool16_t mask, vuint16m1_t maskedoff, vfloat32m2_t src, size_t vl) {
  return __riscv_vfncvt_xu_mu(mask, maskedoff, src, __RISCV_FRM_RNE, vl);
}

vuint16m2_t test_vfncvt_xu_f_w_u16m2_rm_mu(vbool8_t mask, vuint16m2_t maskedoff, vfloat32m4_t src, size_t vl) {
  return __riscv_vfncvt_xu_mu(mask, maskedoff, src, __RISCV_FRM_RNE, vl);
}

vuint16m4_t test_vfncvt_xu_f_w_u16m4_rm_mu(vbool4_t mask, vuint16m4_t maskedoff, vfloat32m8_t src, size_t vl) {
  return __riscv_vfncvt_xu_mu(mask, maskedoff, src, __RISCV_FRM_RNE, vl);
}

vfloat16mf4_t test_vfncvt_f_x_w_f16mf4_rm_mu(vbool64_t mask, vfloat16mf4_t maskedoff, vint32mf2_t src, size_t vl) {
  return __riscv_vfncvt_f_mu(mask, maskedoff, src, __RISCV_FRM_RNE, vl);
}

vfloat16mf2_t test_vfncvt_f_x_w_f16mf2_rm_mu(vbool32_t mask, vfloat16mf2_t maskedoff, vint32m1_t src, size_t vl) {
  return __riscv_vfncvt_f_mu(mask, maskedoff, src, __RISCV_FRM_RNE, vl);
}

vfloat16m1_t test_vfncvt_f_x_w_f16m1_rm_mu(vbool16_t mask, vfloat16m1_t maskedoff, vint32m2_t src, size_t vl) {
  return __riscv_vfncvt_f_mu(mask, maskedoff, src, __RISCV_FRM_RNE, vl);
}

vfloat16m2_t test_vfncvt_f_x_w_f16m2_rm_mu(vbool8_t mask, vfloat16m2_t maskedoff, vint32m4_t src, size_t vl) {
  return __riscv_vfncvt_f_mu(mask, maskedoff, src, __RISCV_FRM_RNE, vl);
}

vfloat16m4_t test_vfncvt_f_x_w_f16m4_rm_mu(vbool4_t mask, vfloat16m4_t maskedoff, vint32m8_t src, size_t vl) {
  return __riscv_vfncvt_f_mu(mask, maskedoff, src, __RISCV_FRM_RNE, vl);
}

vfloat16mf4_t test_vfncvt_f_xu_w_f16mf4_rm_mu(vbool64_t mask, vfloat16mf4_t maskedoff, vuint32mf2_t src, size_t vl) {
  return __riscv_vfncvt_f_mu(mask, maskedoff, src, __RISCV_FRM_RNE, vl);
}

vfloat16mf2_t test_vfncvt_f_xu_w_f16mf2_rm_mu(vbool32_t mask, vfloat16mf2_t maskedoff, vuint32m1_t src, size_t vl) {
  return __riscv_vfncvt_f_mu(mask, maskedoff, src, __RISCV_FRM_RNE, vl);
}

vfloat16m1_t test_vfncvt_f_xu_w_f16m1_rm_mu(vbool16_t mask, vfloat16m1_t maskedoff, vuint32m2_t src, size_t vl) {
  return __riscv_vfncvt_f_mu(mask, maskedoff, src, __RISCV_FRM_RNE, vl);
}

vfloat16m2_t test_vfncvt_f_xu_w_f16m2_rm_mu(vbool8_t mask, vfloat16m2_t maskedoff, vuint32m4_t src, size_t vl) {
  return __riscv_vfncvt_f_mu(mask, maskedoff, src, __RISCV_FRM_RNE, vl);
}

vfloat16m4_t test_vfncvt_f_xu_w_f16m4_rm_mu(vbool4_t mask, vfloat16m4_t maskedoff, vuint32m8_t src, size_t vl) {
  return __riscv_vfncvt_f_mu(mask, maskedoff, src, __RISCV_FRM_RNE, vl);
}

vfloat16mf4_t test_vfncvt_f_f_w_f16mf4_rm_mu(vbool64_t mask, vfloat16mf4_t maskedoff, vfloat32mf2_t src, size_t vl) {
  return __riscv_vfncvt_f_mu(mask, maskedoff, src, __RISCV_FRM_RNE, vl);
}

vfloat16mf2_t test_vfncvt_f_f_w_f16mf2_rm_mu(vbool32_t mask, vfloat16mf2_t maskedoff, vfloat32m1_t src, size_t vl) {
  return __riscv_vfncvt_f_mu(mask, maskedoff, src, __RISCV_FRM_RNE, vl);
}

vfloat16m1_t test_vfncvt_f_f_w_f16m1_rm_mu(vbool16_t mask, vfloat16m1_t maskedoff, vfloat32m2_t src, size_t vl) {
  return __riscv_vfncvt_f_mu(mask, maskedoff, src, __RISCV_FRM_RNE, vl);
}

vfloat16m2_t test_vfncvt_f_f_w_f16m2_rm_mu(vbool8_t mask, vfloat16m2_t maskedoff, vfloat32m4_t src, size_t vl) {
  return __riscv_vfncvt_f_mu(mask, maskedoff, src, __RISCV_FRM_RNE, vl);
}

vfloat16m4_t test_vfncvt_f_f_w_f16m4_rm_mu(vbool4_t mask, vfloat16m4_t maskedoff, vfloat32m8_t src, size_t vl) {
  return __riscv_vfncvt_f_mu(mask, maskedoff, src, __RISCV_FRM_RNE, vl);
}

vint32mf2_t test_vfncvt_x_f_w_i32mf2_rm_mu(vbool64_t mask, vint32mf2_t maskedoff, vfloat64m1_t src, size_t vl) {
  return __riscv_vfncvt_x_mu(mask, maskedoff, src, __RISCV_FRM_RNE, vl);
}

vint32m1_t test_vfncvt_x_f_w_i32m1_rm_mu(vbool32_t mask, vint32m1_t maskedoff, vfloat64m2_t src, size_t vl) {
  return __riscv_vfncvt_x_mu(mask, maskedoff, src, __RISCV_FRM_RNE, vl);
}

vint32m2_t test_vfncvt_x_f_w_i32m2_rm_mu(vbool16_t mask, vint32m2_t maskedoff, vfloat64m4_t src, size_t vl) {
  return __riscv_vfncvt_x_mu(mask, maskedoff, src, __RISCV_FRM_RNE, vl);
}

vint32m4_t test_vfncvt_x_f_w_i32m4_rm_mu(vbool8_t mask, vint32m4_t maskedoff, vfloat64m8_t src, size_t vl) {
  return __riscv_vfncvt_x_mu(mask, maskedoff, src, __RISCV_FRM_RNE, vl);
}

vuint32mf2_t test_vfncvt_xu_f_w_u32mf2_rm_mu(vbool64_t mask, vuint32mf2_t maskedoff, vfloat64m1_t src, size_t vl) {
  return __riscv_vfncvt_xu_mu(mask, maskedoff, src, __RISCV_FRM_RNE, vl);
}

vuint32m1_t test_vfncvt_xu_f_w_u32m1_rm_mu(vbool32_t mask, vuint32m1_t maskedoff, vfloat64m2_t src, size_t vl) {
  return __riscv_vfncvt_xu_mu(mask, maskedoff, src, __RISCV_FRM_RNE, vl);
}

vuint32m2_t test_vfncvt_xu_f_w_u32m2_rm_mu(vbool16_t mask, vuint32m2_t maskedoff, vfloat64m4_t src, size_t vl) {
  return __riscv_vfncvt_xu_mu(mask, maskedoff, src, __RISCV_FRM_RNE, vl);
}

vuint32m4_t test_vfncvt_xu_f_w_u32m4_rm_mu(vbool8_t mask, vuint32m4_t maskedoff, vfloat64m8_t src, size_t vl) {
  return __riscv_vfncvt_xu_mu(mask, maskedoff, src, __RISCV_FRM_RNE, vl);
}

vfloat32mf2_t test_vfncvt_f_x_w_f32mf2_rm_mu(vbool64_t mask, vfloat32mf2_t maskedoff, vint64m1_t src, size_t vl) {
  return __riscv_vfncvt_f_mu(mask, maskedoff, src, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfncvt_f_x_w_f32m1_rm_mu(vbool32_t mask, vfloat32m1_t maskedoff, vint64m2_t src, size_t vl) {
  return __riscv_vfncvt_f_mu(mask, maskedoff, src, __RISCV_FRM_RNE, vl);
}

vfloat32m2_t test_vfncvt_f_x_w_f32m2_rm_mu(vbool16_t mask, vfloat32m2_t maskedoff, vint64m4_t src, size_t vl) {
  return __riscv_vfncvt_f_mu(mask, maskedoff, src, __RISCV_FRM_RNE, vl);
}

vfloat32m4_t test_vfncvt_f_x_w_f32m4_rm_mu(vbool8_t mask, vfloat32m4_t maskedoff, vint64m8_t src, size_t vl) {
  return __riscv_vfncvt_f_mu(mask, maskedoff, src, __RISCV_FRM_RNE, vl);
}

vfloat32mf2_t test_vfncvt_f_xu_w_f32mf2_rm_mu(vbool64_t mask, vfloat32mf2_t maskedoff, vuint64m1_t src, size_t vl) {
  return __riscv_vfncvt_f_mu(mask, maskedoff, src, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfncvt_f_xu_w_f32m1_rm_mu(vbool32_t mask, vfloat32m1_t maskedoff, vuint64m2_t src, size_t vl) {
  return __riscv_vfncvt_f_mu(mask, maskedoff, src, __RISCV_FRM_RNE, vl);
}

vfloat32m2_t test_vfncvt_f_xu_w_f32m2_rm_mu(vbool16_t mask, vfloat32m2_t maskedoff, vuint64m4_t src, size_t vl) {
  return __riscv_vfncvt_f_mu(mask, maskedoff, src, __RISCV_FRM_RNE, vl);
}

vfloat32m4_t test_vfncvt_f_xu_w_f32m4_rm_mu(vbool8_t mask, vfloat32m4_t maskedoff, vuint64m8_t src, size_t vl) {
  return __riscv_vfncvt_f_mu(mask, maskedoff, src, __RISCV_FRM_RNE, vl);
}

vfloat32mf2_t test_vfncvt_f_f_w_f32mf2_rm_mu(vbool64_t mask, vfloat32mf2_t maskedoff, vfloat64m1_t src, size_t vl) {
  return __riscv_vfncvt_f_mu(mask, maskedoff, src, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfncvt_f_f_w_f32m1_rm_mu(vbool32_t mask, vfloat32m1_t maskedoff, vfloat64m2_t src, size_t vl) {
  return __riscv_vfncvt_f_mu(mask, maskedoff, src, __RISCV_FRM_RNE, vl);
}

vfloat32m2_t test_vfncvt_f_f_w_f32m2_rm_mu(vbool16_t mask, vfloat32m2_t maskedoff, vfloat64m4_t src, size_t vl) {
  return __riscv_vfncvt_f_mu(mask, maskedoff, src, __RISCV_FRM_RNE, vl);
}

vfloat32m4_t test_vfncvt_f_f_w_f32m4_rm_mu(vbool8_t mask, vfloat32m4_t maskedoff, vfloat64m8_t src, size_t vl) {
  return __riscv_vfncvt_f_mu(mask, maskedoff, src, __RISCV_FRM_RNE, vl);
}

