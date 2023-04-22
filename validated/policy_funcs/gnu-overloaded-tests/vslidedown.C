/* { dg-do compile } */
/* { dg-options "-march=rv64gcv -mabi=lp64d -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
vfloat32mf2_t test_vslidedown_vx_f32mf2_tu(vfloat32mf2_t maskedoff, vfloat32mf2_t src, size_t offset, size_t vl) {
  return __riscv_vslidedown_tu(maskedoff, src, offset, vl);
}

vfloat32m1_t test_vslidedown_vx_f32m1_tu(vfloat32m1_t maskedoff, vfloat32m1_t src, size_t offset, size_t vl) {
  return __riscv_vslidedown_tu(maskedoff, src, offset, vl);
}

vfloat32m2_t test_vslidedown_vx_f32m2_tu(vfloat32m2_t maskedoff, vfloat32m2_t src, size_t offset, size_t vl) {
  return __riscv_vslidedown_tu(maskedoff, src, offset, vl);
}

vfloat32m4_t test_vslidedown_vx_f32m4_tu(vfloat32m4_t maskedoff, vfloat32m4_t src, size_t offset, size_t vl) {
  return __riscv_vslidedown_tu(maskedoff, src, offset, vl);
}

vfloat32m8_t test_vslidedown_vx_f32m8_tu(vfloat32m8_t maskedoff, vfloat32m8_t src, size_t offset, size_t vl) {
  return __riscv_vslidedown_tu(maskedoff, src, offset, vl);
}

vfloat64m1_t test_vslidedown_vx_f64m1_tu(vfloat64m1_t maskedoff, vfloat64m1_t src, size_t offset, size_t vl) {
  return __riscv_vslidedown_tu(maskedoff, src, offset, vl);
}

vfloat64m2_t test_vslidedown_vx_f64m2_tu(vfloat64m2_t maskedoff, vfloat64m2_t src, size_t offset, size_t vl) {
  return __riscv_vslidedown_tu(maskedoff, src, offset, vl);
}

vfloat64m4_t test_vslidedown_vx_f64m4_tu(vfloat64m4_t maskedoff, vfloat64m4_t src, size_t offset, size_t vl) {
  return __riscv_vslidedown_tu(maskedoff, src, offset, vl);
}

vfloat64m8_t test_vslidedown_vx_f64m8_tu(vfloat64m8_t maskedoff, vfloat64m8_t src, size_t offset, size_t vl) {
  return __riscv_vslidedown_tu(maskedoff, src, offset, vl);
}

vint8mf8_t test_vslidedown_vx_i8mf8_tu(vint8mf8_t maskedoff, vint8mf8_t src, size_t offset, size_t vl) {
  return __riscv_vslidedown_tu(maskedoff, src, offset, vl);
}

vint8mf4_t test_vslidedown_vx_i8mf4_tu(vint8mf4_t maskedoff, vint8mf4_t src, size_t offset, size_t vl) {
  return __riscv_vslidedown_tu(maskedoff, src, offset, vl);
}

vint8mf2_t test_vslidedown_vx_i8mf2_tu(vint8mf2_t maskedoff, vint8mf2_t src, size_t offset, size_t vl) {
  return __riscv_vslidedown_tu(maskedoff, src, offset, vl);
}

vint8m1_t test_vslidedown_vx_i8m1_tu(vint8m1_t maskedoff, vint8m1_t src, size_t offset, size_t vl) {
  return __riscv_vslidedown_tu(maskedoff, src, offset, vl);
}

vint8m2_t test_vslidedown_vx_i8m2_tu(vint8m2_t maskedoff, vint8m2_t src, size_t offset, size_t vl) {
  return __riscv_vslidedown_tu(maskedoff, src, offset, vl);
}

vint8m4_t test_vslidedown_vx_i8m4_tu(vint8m4_t maskedoff, vint8m4_t src, size_t offset, size_t vl) {
  return __riscv_vslidedown_tu(maskedoff, src, offset, vl);
}

vint8m8_t test_vslidedown_vx_i8m8_tu(vint8m8_t maskedoff, vint8m8_t src, size_t offset, size_t vl) {
  return __riscv_vslidedown_tu(maskedoff, src, offset, vl);
}

vint16mf4_t test_vslidedown_vx_i16mf4_tu(vint16mf4_t maskedoff, vint16mf4_t src, size_t offset, size_t vl) {
  return __riscv_vslidedown_tu(maskedoff, src, offset, vl);
}

vint16mf2_t test_vslidedown_vx_i16mf2_tu(vint16mf2_t maskedoff, vint16mf2_t src, size_t offset, size_t vl) {
  return __riscv_vslidedown_tu(maskedoff, src, offset, vl);
}

vint16m1_t test_vslidedown_vx_i16m1_tu(vint16m1_t maskedoff, vint16m1_t src, size_t offset, size_t vl) {
  return __riscv_vslidedown_tu(maskedoff, src, offset, vl);
}

vint16m2_t test_vslidedown_vx_i16m2_tu(vint16m2_t maskedoff, vint16m2_t src, size_t offset, size_t vl) {
  return __riscv_vslidedown_tu(maskedoff, src, offset, vl);
}

vint16m4_t test_vslidedown_vx_i16m4_tu(vint16m4_t maskedoff, vint16m4_t src, size_t offset, size_t vl) {
  return __riscv_vslidedown_tu(maskedoff, src, offset, vl);
}

vint16m8_t test_vslidedown_vx_i16m8_tu(vint16m8_t maskedoff, vint16m8_t src, size_t offset, size_t vl) {
  return __riscv_vslidedown_tu(maskedoff, src, offset, vl);
}

vint32mf2_t test_vslidedown_vx_i32mf2_tu(vint32mf2_t maskedoff, vint32mf2_t src, size_t offset, size_t vl) {
  return __riscv_vslidedown_tu(maskedoff, src, offset, vl);
}

vint32m1_t test_vslidedown_vx_i32m1_tu(vint32m1_t maskedoff, vint32m1_t src, size_t offset, size_t vl) {
  return __riscv_vslidedown_tu(maskedoff, src, offset, vl);
}

vint32m2_t test_vslidedown_vx_i32m2_tu(vint32m2_t maskedoff, vint32m2_t src, size_t offset, size_t vl) {
  return __riscv_vslidedown_tu(maskedoff, src, offset, vl);
}

vint32m4_t test_vslidedown_vx_i32m4_tu(vint32m4_t maskedoff, vint32m4_t src, size_t offset, size_t vl) {
  return __riscv_vslidedown_tu(maskedoff, src, offset, vl);
}

vint32m8_t test_vslidedown_vx_i32m8_tu(vint32m8_t maskedoff, vint32m8_t src, size_t offset, size_t vl) {
  return __riscv_vslidedown_tu(maskedoff, src, offset, vl);
}

vint64m1_t test_vslidedown_vx_i64m1_tu(vint64m1_t maskedoff, vint64m1_t src, size_t offset, size_t vl) {
  return __riscv_vslidedown_tu(maskedoff, src, offset, vl);
}

vint64m2_t test_vslidedown_vx_i64m2_tu(vint64m2_t maskedoff, vint64m2_t src, size_t offset, size_t vl) {
  return __riscv_vslidedown_tu(maskedoff, src, offset, vl);
}

vint64m4_t test_vslidedown_vx_i64m4_tu(vint64m4_t maskedoff, vint64m4_t src, size_t offset, size_t vl) {
  return __riscv_vslidedown_tu(maskedoff, src, offset, vl);
}

vint64m8_t test_vslidedown_vx_i64m8_tu(vint64m8_t maskedoff, vint64m8_t src, size_t offset, size_t vl) {
  return __riscv_vslidedown_tu(maskedoff, src, offset, vl);
}

vuint8mf8_t test_vslidedown_vx_u8mf8_tu(vuint8mf8_t maskedoff, vuint8mf8_t src, size_t offset, size_t vl) {
  return __riscv_vslidedown_tu(maskedoff, src, offset, vl);
}

vuint8mf4_t test_vslidedown_vx_u8mf4_tu(vuint8mf4_t maskedoff, vuint8mf4_t src, size_t offset, size_t vl) {
  return __riscv_vslidedown_tu(maskedoff, src, offset, vl);
}

vuint8mf2_t test_vslidedown_vx_u8mf2_tu(vuint8mf2_t maskedoff, vuint8mf2_t src, size_t offset, size_t vl) {
  return __riscv_vslidedown_tu(maskedoff, src, offset, vl);
}

vuint8m1_t test_vslidedown_vx_u8m1_tu(vuint8m1_t maskedoff, vuint8m1_t src, size_t offset, size_t vl) {
  return __riscv_vslidedown_tu(maskedoff, src, offset, vl);
}

vuint8m2_t test_vslidedown_vx_u8m2_tu(vuint8m2_t maskedoff, vuint8m2_t src, size_t offset, size_t vl) {
  return __riscv_vslidedown_tu(maskedoff, src, offset, vl);
}

vuint8m4_t test_vslidedown_vx_u8m4_tu(vuint8m4_t maskedoff, vuint8m4_t src, size_t offset, size_t vl) {
  return __riscv_vslidedown_tu(maskedoff, src, offset, vl);
}

vuint8m8_t test_vslidedown_vx_u8m8_tu(vuint8m8_t maskedoff, vuint8m8_t src, size_t offset, size_t vl) {
  return __riscv_vslidedown_tu(maskedoff, src, offset, vl);
}

vuint16mf4_t test_vslidedown_vx_u16mf4_tu(vuint16mf4_t maskedoff, vuint16mf4_t src, size_t offset, size_t vl) {
  return __riscv_vslidedown_tu(maskedoff, src, offset, vl);
}

vuint16mf2_t test_vslidedown_vx_u16mf2_tu(vuint16mf2_t maskedoff, vuint16mf2_t src, size_t offset, size_t vl) {
  return __riscv_vslidedown_tu(maskedoff, src, offset, vl);
}

vuint16m1_t test_vslidedown_vx_u16m1_tu(vuint16m1_t maskedoff, vuint16m1_t src, size_t offset, size_t vl) {
  return __riscv_vslidedown_tu(maskedoff, src, offset, vl);
}

vuint16m2_t test_vslidedown_vx_u16m2_tu(vuint16m2_t maskedoff, vuint16m2_t src, size_t offset, size_t vl) {
  return __riscv_vslidedown_tu(maskedoff, src, offset, vl);
}

vuint16m4_t test_vslidedown_vx_u16m4_tu(vuint16m4_t maskedoff, vuint16m4_t src, size_t offset, size_t vl) {
  return __riscv_vslidedown_tu(maskedoff, src, offset, vl);
}

vuint16m8_t test_vslidedown_vx_u16m8_tu(vuint16m8_t maskedoff, vuint16m8_t src, size_t offset, size_t vl) {
  return __riscv_vslidedown_tu(maskedoff, src, offset, vl);
}

vuint32mf2_t test_vslidedown_vx_u32mf2_tu(vuint32mf2_t maskedoff, vuint32mf2_t src, size_t offset, size_t vl) {
  return __riscv_vslidedown_tu(maskedoff, src, offset, vl);
}

vuint32m1_t test_vslidedown_vx_u32m1_tu(vuint32m1_t maskedoff, vuint32m1_t src, size_t offset, size_t vl) {
  return __riscv_vslidedown_tu(maskedoff, src, offset, vl);
}

vuint32m2_t test_vslidedown_vx_u32m2_tu(vuint32m2_t maskedoff, vuint32m2_t src, size_t offset, size_t vl) {
  return __riscv_vslidedown_tu(maskedoff, src, offset, vl);
}

vuint32m4_t test_vslidedown_vx_u32m4_tu(vuint32m4_t maskedoff, vuint32m4_t src, size_t offset, size_t vl) {
  return __riscv_vslidedown_tu(maskedoff, src, offset, vl);
}

vuint32m8_t test_vslidedown_vx_u32m8_tu(vuint32m8_t maskedoff, vuint32m8_t src, size_t offset, size_t vl) {
  return __riscv_vslidedown_tu(maskedoff, src, offset, vl);
}

vuint64m1_t test_vslidedown_vx_u64m1_tu(vuint64m1_t maskedoff, vuint64m1_t src, size_t offset, size_t vl) {
  return __riscv_vslidedown_tu(maskedoff, src, offset, vl);
}

vuint64m2_t test_vslidedown_vx_u64m2_tu(vuint64m2_t maskedoff, vuint64m2_t src, size_t offset, size_t vl) {
  return __riscv_vslidedown_tu(maskedoff, src, offset, vl);
}

vuint64m4_t test_vslidedown_vx_u64m4_tu(vuint64m4_t maskedoff, vuint64m4_t src, size_t offset, size_t vl) {
  return __riscv_vslidedown_tu(maskedoff, src, offset, vl);
}

vuint64m8_t test_vslidedown_vx_u64m8_tu(vuint64m8_t maskedoff, vuint64m8_t src, size_t offset, size_t vl) {
  return __riscv_vslidedown_tu(maskedoff, src, offset, vl);
}

vfloat32mf2_t test_vslidedown_vx_f32mf2_tum(vbool64_t mask, vfloat32mf2_t maskedoff, vfloat32mf2_t src, size_t offset, size_t vl) {
  return __riscv_vslidedown_tum(mask, maskedoff, src, offset, vl);
}

vfloat32m1_t test_vslidedown_vx_f32m1_tum(vbool32_t mask, vfloat32m1_t maskedoff, vfloat32m1_t src, size_t offset, size_t vl) {
  return __riscv_vslidedown_tum(mask, maskedoff, src, offset, vl);
}

vfloat32m2_t test_vslidedown_vx_f32m2_tum(vbool16_t mask, vfloat32m2_t maskedoff, vfloat32m2_t src, size_t offset, size_t vl) {
  return __riscv_vslidedown_tum(mask, maskedoff, src, offset, vl);
}

vfloat32m4_t test_vslidedown_vx_f32m4_tum(vbool8_t mask, vfloat32m4_t maskedoff, vfloat32m4_t src, size_t offset, size_t vl) {
  return __riscv_vslidedown_tum(mask, maskedoff, src, offset, vl);
}

vfloat32m8_t test_vslidedown_vx_f32m8_tum(vbool4_t mask, vfloat32m8_t maskedoff, vfloat32m8_t src, size_t offset, size_t vl) {
  return __riscv_vslidedown_tum(mask, maskedoff, src, offset, vl);
}

vfloat64m1_t test_vslidedown_vx_f64m1_tum(vbool64_t mask, vfloat64m1_t maskedoff, vfloat64m1_t src, size_t offset, size_t vl) {
  return __riscv_vslidedown_tum(mask, maskedoff, src, offset, vl);
}

vfloat64m2_t test_vslidedown_vx_f64m2_tum(vbool32_t mask, vfloat64m2_t maskedoff, vfloat64m2_t src, size_t offset, size_t vl) {
  return __riscv_vslidedown_tum(mask, maskedoff, src, offset, vl);
}

vfloat64m4_t test_vslidedown_vx_f64m4_tum(vbool16_t mask, vfloat64m4_t maskedoff, vfloat64m4_t src, size_t offset, size_t vl) {
  return __riscv_vslidedown_tum(mask, maskedoff, src, offset, vl);
}

vfloat64m8_t test_vslidedown_vx_f64m8_tum(vbool8_t mask, vfloat64m8_t maskedoff, vfloat64m8_t src, size_t offset, size_t vl) {
  return __riscv_vslidedown_tum(mask, maskedoff, src, offset, vl);
}

vint8mf8_t test_vslidedown_vx_i8mf8_tum(vbool64_t mask, vint8mf8_t maskedoff, vint8mf8_t src, size_t offset, size_t vl) {
  return __riscv_vslidedown_tum(mask, maskedoff, src, offset, vl);
}

vint8mf4_t test_vslidedown_vx_i8mf4_tum(vbool32_t mask, vint8mf4_t maskedoff, vint8mf4_t src, size_t offset, size_t vl) {
  return __riscv_vslidedown_tum(mask, maskedoff, src, offset, vl);
}

vint8mf2_t test_vslidedown_vx_i8mf2_tum(vbool16_t mask, vint8mf2_t maskedoff, vint8mf2_t src, size_t offset, size_t vl) {
  return __riscv_vslidedown_tum(mask, maskedoff, src, offset, vl);
}

vint8m1_t test_vslidedown_vx_i8m1_tum(vbool8_t mask, vint8m1_t maskedoff, vint8m1_t src, size_t offset, size_t vl) {
  return __riscv_vslidedown_tum(mask, maskedoff, src, offset, vl);
}

vint8m2_t test_vslidedown_vx_i8m2_tum(vbool4_t mask, vint8m2_t maskedoff, vint8m2_t src, size_t offset, size_t vl) {
  return __riscv_vslidedown_tum(mask, maskedoff, src, offset, vl);
}

vint8m4_t test_vslidedown_vx_i8m4_tum(vbool2_t mask, vint8m4_t maskedoff, vint8m4_t src, size_t offset, size_t vl) {
  return __riscv_vslidedown_tum(mask, maskedoff, src, offset, vl);
}

vint8m8_t test_vslidedown_vx_i8m8_tum(vbool1_t mask, vint8m8_t maskedoff, vint8m8_t src, size_t offset, size_t vl) {
  return __riscv_vslidedown_tum(mask, maskedoff, src, offset, vl);
}

vint16mf4_t test_vslidedown_vx_i16mf4_tum(vbool64_t mask, vint16mf4_t maskedoff, vint16mf4_t src, size_t offset, size_t vl) {
  return __riscv_vslidedown_tum(mask, maskedoff, src, offset, vl);
}

vint16mf2_t test_vslidedown_vx_i16mf2_tum(vbool32_t mask, vint16mf2_t maskedoff, vint16mf2_t src, size_t offset, size_t vl) {
  return __riscv_vslidedown_tum(mask, maskedoff, src, offset, vl);
}

vint16m1_t test_vslidedown_vx_i16m1_tum(vbool16_t mask, vint16m1_t maskedoff, vint16m1_t src, size_t offset, size_t vl) {
  return __riscv_vslidedown_tum(mask, maskedoff, src, offset, vl);
}

vint16m2_t test_vslidedown_vx_i16m2_tum(vbool8_t mask, vint16m2_t maskedoff, vint16m2_t src, size_t offset, size_t vl) {
  return __riscv_vslidedown_tum(mask, maskedoff, src, offset, vl);
}

vint16m4_t test_vslidedown_vx_i16m4_tum(vbool4_t mask, vint16m4_t maskedoff, vint16m4_t src, size_t offset, size_t vl) {
  return __riscv_vslidedown_tum(mask, maskedoff, src, offset, vl);
}

vint16m8_t test_vslidedown_vx_i16m8_tum(vbool2_t mask, vint16m8_t maskedoff, vint16m8_t src, size_t offset, size_t vl) {
  return __riscv_vslidedown_tum(mask, maskedoff, src, offset, vl);
}

vint32mf2_t test_vslidedown_vx_i32mf2_tum(vbool64_t mask, vint32mf2_t maskedoff, vint32mf2_t src, size_t offset, size_t vl) {
  return __riscv_vslidedown_tum(mask, maskedoff, src, offset, vl);
}

vint32m1_t test_vslidedown_vx_i32m1_tum(vbool32_t mask, vint32m1_t maskedoff, vint32m1_t src, size_t offset, size_t vl) {
  return __riscv_vslidedown_tum(mask, maskedoff, src, offset, vl);
}

vint32m2_t test_vslidedown_vx_i32m2_tum(vbool16_t mask, vint32m2_t maskedoff, vint32m2_t src, size_t offset, size_t vl) {
  return __riscv_vslidedown_tum(mask, maskedoff, src, offset, vl);
}

vint32m4_t test_vslidedown_vx_i32m4_tum(vbool8_t mask, vint32m4_t maskedoff, vint32m4_t src, size_t offset, size_t vl) {
  return __riscv_vslidedown_tum(mask, maskedoff, src, offset, vl);
}

vint32m8_t test_vslidedown_vx_i32m8_tum(vbool4_t mask, vint32m8_t maskedoff, vint32m8_t src, size_t offset, size_t vl) {
  return __riscv_vslidedown_tum(mask, maskedoff, src, offset, vl);
}

vint64m1_t test_vslidedown_vx_i64m1_tum(vbool64_t mask, vint64m1_t maskedoff, vint64m1_t src, size_t offset, size_t vl) {
  return __riscv_vslidedown_tum(mask, maskedoff, src, offset, vl);
}

vint64m2_t test_vslidedown_vx_i64m2_tum(vbool32_t mask, vint64m2_t maskedoff, vint64m2_t src, size_t offset, size_t vl) {
  return __riscv_vslidedown_tum(mask, maskedoff, src, offset, vl);
}

vint64m4_t test_vslidedown_vx_i64m4_tum(vbool16_t mask, vint64m4_t maskedoff, vint64m4_t src, size_t offset, size_t vl) {
  return __riscv_vslidedown_tum(mask, maskedoff, src, offset, vl);
}

vint64m8_t test_vslidedown_vx_i64m8_tum(vbool8_t mask, vint64m8_t maskedoff, vint64m8_t src, size_t offset, size_t vl) {
  return __riscv_vslidedown_tum(mask, maskedoff, src, offset, vl);
}

vuint8mf8_t test_vslidedown_vx_u8mf8_tum(vbool64_t mask, vuint8mf8_t maskedoff, vuint8mf8_t src, size_t offset, size_t vl) {
  return __riscv_vslidedown_tum(mask, maskedoff, src, offset, vl);
}

vuint8mf4_t test_vslidedown_vx_u8mf4_tum(vbool32_t mask, vuint8mf4_t maskedoff, vuint8mf4_t src, size_t offset, size_t vl) {
  return __riscv_vslidedown_tum(mask, maskedoff, src, offset, vl);
}

vuint8mf2_t test_vslidedown_vx_u8mf2_tum(vbool16_t mask, vuint8mf2_t maskedoff, vuint8mf2_t src, size_t offset, size_t vl) {
  return __riscv_vslidedown_tum(mask, maskedoff, src, offset, vl);
}

vuint8m1_t test_vslidedown_vx_u8m1_tum(vbool8_t mask, vuint8m1_t maskedoff, vuint8m1_t src, size_t offset, size_t vl) {
  return __riscv_vslidedown_tum(mask, maskedoff, src, offset, vl);
}

vuint8m2_t test_vslidedown_vx_u8m2_tum(vbool4_t mask, vuint8m2_t maskedoff, vuint8m2_t src, size_t offset, size_t vl) {
  return __riscv_vslidedown_tum(mask, maskedoff, src, offset, vl);
}

vuint8m4_t test_vslidedown_vx_u8m4_tum(vbool2_t mask, vuint8m4_t maskedoff, vuint8m4_t src, size_t offset, size_t vl) {
  return __riscv_vslidedown_tum(mask, maskedoff, src, offset, vl);
}

vuint8m8_t test_vslidedown_vx_u8m8_tum(vbool1_t mask, vuint8m8_t maskedoff, vuint8m8_t src, size_t offset, size_t vl) {
  return __riscv_vslidedown_tum(mask, maskedoff, src, offset, vl);
}

vuint16mf4_t test_vslidedown_vx_u16mf4_tum(vbool64_t mask, vuint16mf4_t maskedoff, vuint16mf4_t src, size_t offset, size_t vl) {
  return __riscv_vslidedown_tum(mask, maskedoff, src, offset, vl);
}

vuint16mf2_t test_vslidedown_vx_u16mf2_tum(vbool32_t mask, vuint16mf2_t maskedoff, vuint16mf2_t src, size_t offset, size_t vl) {
  return __riscv_vslidedown_tum(mask, maskedoff, src, offset, vl);
}

vuint16m1_t test_vslidedown_vx_u16m1_tum(vbool16_t mask, vuint16m1_t maskedoff, vuint16m1_t src, size_t offset, size_t vl) {
  return __riscv_vslidedown_tum(mask, maskedoff, src, offset, vl);
}

vuint16m2_t test_vslidedown_vx_u16m2_tum(vbool8_t mask, vuint16m2_t maskedoff, vuint16m2_t src, size_t offset, size_t vl) {
  return __riscv_vslidedown_tum(mask, maskedoff, src, offset, vl);
}

vuint16m4_t test_vslidedown_vx_u16m4_tum(vbool4_t mask, vuint16m4_t maskedoff, vuint16m4_t src, size_t offset, size_t vl) {
  return __riscv_vslidedown_tum(mask, maskedoff, src, offset, vl);
}

vuint16m8_t test_vslidedown_vx_u16m8_tum(vbool2_t mask, vuint16m8_t maskedoff, vuint16m8_t src, size_t offset, size_t vl) {
  return __riscv_vslidedown_tum(mask, maskedoff, src, offset, vl);
}

vuint32mf2_t test_vslidedown_vx_u32mf2_tum(vbool64_t mask, vuint32mf2_t maskedoff, vuint32mf2_t src, size_t offset, size_t vl) {
  return __riscv_vslidedown_tum(mask, maskedoff, src, offset, vl);
}

vuint32m1_t test_vslidedown_vx_u32m1_tum(vbool32_t mask, vuint32m1_t maskedoff, vuint32m1_t src, size_t offset, size_t vl) {
  return __riscv_vslidedown_tum(mask, maskedoff, src, offset, vl);
}

vuint32m2_t test_vslidedown_vx_u32m2_tum(vbool16_t mask, vuint32m2_t maskedoff, vuint32m2_t src, size_t offset, size_t vl) {
  return __riscv_vslidedown_tum(mask, maskedoff, src, offset, vl);
}

vuint32m4_t test_vslidedown_vx_u32m4_tum(vbool8_t mask, vuint32m4_t maskedoff, vuint32m4_t src, size_t offset, size_t vl) {
  return __riscv_vslidedown_tum(mask, maskedoff, src, offset, vl);
}

vuint32m8_t test_vslidedown_vx_u32m8_tum(vbool4_t mask, vuint32m8_t maskedoff, vuint32m8_t src, size_t offset, size_t vl) {
  return __riscv_vslidedown_tum(mask, maskedoff, src, offset, vl);
}

vuint64m1_t test_vslidedown_vx_u64m1_tum(vbool64_t mask, vuint64m1_t maskedoff, vuint64m1_t src, size_t offset, size_t vl) {
  return __riscv_vslidedown_tum(mask, maskedoff, src, offset, vl);
}

vuint64m2_t test_vslidedown_vx_u64m2_tum(vbool32_t mask, vuint64m2_t maskedoff, vuint64m2_t src, size_t offset, size_t vl) {
  return __riscv_vslidedown_tum(mask, maskedoff, src, offset, vl);
}

vuint64m4_t test_vslidedown_vx_u64m4_tum(vbool16_t mask, vuint64m4_t maskedoff, vuint64m4_t src, size_t offset, size_t vl) {
  return __riscv_vslidedown_tum(mask, maskedoff, src, offset, vl);
}

vuint64m8_t test_vslidedown_vx_u64m8_tum(vbool8_t mask, vuint64m8_t maskedoff, vuint64m8_t src, size_t offset, size_t vl) {
  return __riscv_vslidedown_tum(mask, maskedoff, src, offset, vl);
}

vfloat32mf2_t test_vslidedown_vx_f32mf2_tumu(vbool64_t mask, vfloat32mf2_t maskedoff, vfloat32mf2_t src, size_t offset, size_t vl) {
  return __riscv_vslidedown_tumu(mask, maskedoff, src, offset, vl);
}

vfloat32m1_t test_vslidedown_vx_f32m1_tumu(vbool32_t mask, vfloat32m1_t maskedoff, vfloat32m1_t src, size_t offset, size_t vl) {
  return __riscv_vslidedown_tumu(mask, maskedoff, src, offset, vl);
}

vfloat32m2_t test_vslidedown_vx_f32m2_tumu(vbool16_t mask, vfloat32m2_t maskedoff, vfloat32m2_t src, size_t offset, size_t vl) {
  return __riscv_vslidedown_tumu(mask, maskedoff, src, offset, vl);
}

vfloat32m4_t test_vslidedown_vx_f32m4_tumu(vbool8_t mask, vfloat32m4_t maskedoff, vfloat32m4_t src, size_t offset, size_t vl) {
  return __riscv_vslidedown_tumu(mask, maskedoff, src, offset, vl);
}

vfloat32m8_t test_vslidedown_vx_f32m8_tumu(vbool4_t mask, vfloat32m8_t maskedoff, vfloat32m8_t src, size_t offset, size_t vl) {
  return __riscv_vslidedown_tumu(mask, maskedoff, src, offset, vl);
}

vfloat64m1_t test_vslidedown_vx_f64m1_tumu(vbool64_t mask, vfloat64m1_t maskedoff, vfloat64m1_t src, size_t offset, size_t vl) {
  return __riscv_vslidedown_tumu(mask, maskedoff, src, offset, vl);
}

vfloat64m2_t test_vslidedown_vx_f64m2_tumu(vbool32_t mask, vfloat64m2_t maskedoff, vfloat64m2_t src, size_t offset, size_t vl) {
  return __riscv_vslidedown_tumu(mask, maskedoff, src, offset, vl);
}

vfloat64m4_t test_vslidedown_vx_f64m4_tumu(vbool16_t mask, vfloat64m4_t maskedoff, vfloat64m4_t src, size_t offset, size_t vl) {
  return __riscv_vslidedown_tumu(mask, maskedoff, src, offset, vl);
}

vfloat64m8_t test_vslidedown_vx_f64m8_tumu(vbool8_t mask, vfloat64m8_t maskedoff, vfloat64m8_t src, size_t offset, size_t vl) {
  return __riscv_vslidedown_tumu(mask, maskedoff, src, offset, vl);
}

vint8mf8_t test_vslidedown_vx_i8mf8_tumu(vbool64_t mask, vint8mf8_t maskedoff, vint8mf8_t src, size_t offset, size_t vl) {
  return __riscv_vslidedown_tumu(mask, maskedoff, src, offset, vl);
}

vint8mf4_t test_vslidedown_vx_i8mf4_tumu(vbool32_t mask, vint8mf4_t maskedoff, vint8mf4_t src, size_t offset, size_t vl) {
  return __riscv_vslidedown_tumu(mask, maskedoff, src, offset, vl);
}

vint8mf2_t test_vslidedown_vx_i8mf2_tumu(vbool16_t mask, vint8mf2_t maskedoff, vint8mf2_t src, size_t offset, size_t vl) {
  return __riscv_vslidedown_tumu(mask, maskedoff, src, offset, vl);
}

vint8m1_t test_vslidedown_vx_i8m1_tumu(vbool8_t mask, vint8m1_t maskedoff, vint8m1_t src, size_t offset, size_t vl) {
  return __riscv_vslidedown_tumu(mask, maskedoff, src, offset, vl);
}

vint8m2_t test_vslidedown_vx_i8m2_tumu(vbool4_t mask, vint8m2_t maskedoff, vint8m2_t src, size_t offset, size_t vl) {
  return __riscv_vslidedown_tumu(mask, maskedoff, src, offset, vl);
}

vint8m4_t test_vslidedown_vx_i8m4_tumu(vbool2_t mask, vint8m4_t maskedoff, vint8m4_t src, size_t offset, size_t vl) {
  return __riscv_vslidedown_tumu(mask, maskedoff, src, offset, vl);
}

vint8m8_t test_vslidedown_vx_i8m8_tumu(vbool1_t mask, vint8m8_t maskedoff, vint8m8_t src, size_t offset, size_t vl) {
  return __riscv_vslidedown_tumu(mask, maskedoff, src, offset, vl);
}

vint16mf4_t test_vslidedown_vx_i16mf4_tumu(vbool64_t mask, vint16mf4_t maskedoff, vint16mf4_t src, size_t offset, size_t vl) {
  return __riscv_vslidedown_tumu(mask, maskedoff, src, offset, vl);
}

vint16mf2_t test_vslidedown_vx_i16mf2_tumu(vbool32_t mask, vint16mf2_t maskedoff, vint16mf2_t src, size_t offset, size_t vl) {
  return __riscv_vslidedown_tumu(mask, maskedoff, src, offset, vl);
}

vint16m1_t test_vslidedown_vx_i16m1_tumu(vbool16_t mask, vint16m1_t maskedoff, vint16m1_t src, size_t offset, size_t vl) {
  return __riscv_vslidedown_tumu(mask, maskedoff, src, offset, vl);
}

vint16m2_t test_vslidedown_vx_i16m2_tumu(vbool8_t mask, vint16m2_t maskedoff, vint16m2_t src, size_t offset, size_t vl) {
  return __riscv_vslidedown_tumu(mask, maskedoff, src, offset, vl);
}

vint16m4_t test_vslidedown_vx_i16m4_tumu(vbool4_t mask, vint16m4_t maskedoff, vint16m4_t src, size_t offset, size_t vl) {
  return __riscv_vslidedown_tumu(mask, maskedoff, src, offset, vl);
}

vint16m8_t test_vslidedown_vx_i16m8_tumu(vbool2_t mask, vint16m8_t maskedoff, vint16m8_t src, size_t offset, size_t vl) {
  return __riscv_vslidedown_tumu(mask, maskedoff, src, offset, vl);
}

vint32mf2_t test_vslidedown_vx_i32mf2_tumu(vbool64_t mask, vint32mf2_t maskedoff, vint32mf2_t src, size_t offset, size_t vl) {
  return __riscv_vslidedown_tumu(mask, maskedoff, src, offset, vl);
}

vint32m1_t test_vslidedown_vx_i32m1_tumu(vbool32_t mask, vint32m1_t maskedoff, vint32m1_t src, size_t offset, size_t vl) {
  return __riscv_vslidedown_tumu(mask, maskedoff, src, offset, vl);
}

vint32m2_t test_vslidedown_vx_i32m2_tumu(vbool16_t mask, vint32m2_t maskedoff, vint32m2_t src, size_t offset, size_t vl) {
  return __riscv_vslidedown_tumu(mask, maskedoff, src, offset, vl);
}

vint32m4_t test_vslidedown_vx_i32m4_tumu(vbool8_t mask, vint32m4_t maskedoff, vint32m4_t src, size_t offset, size_t vl) {
  return __riscv_vslidedown_tumu(mask, maskedoff, src, offset, vl);
}

vint32m8_t test_vslidedown_vx_i32m8_tumu(vbool4_t mask, vint32m8_t maskedoff, vint32m8_t src, size_t offset, size_t vl) {
  return __riscv_vslidedown_tumu(mask, maskedoff, src, offset, vl);
}

vint64m1_t test_vslidedown_vx_i64m1_tumu(vbool64_t mask, vint64m1_t maskedoff, vint64m1_t src, size_t offset, size_t vl) {
  return __riscv_vslidedown_tumu(mask, maskedoff, src, offset, vl);
}

vint64m2_t test_vslidedown_vx_i64m2_tumu(vbool32_t mask, vint64m2_t maskedoff, vint64m2_t src, size_t offset, size_t vl) {
  return __riscv_vslidedown_tumu(mask, maskedoff, src, offset, vl);
}

vint64m4_t test_vslidedown_vx_i64m4_tumu(vbool16_t mask, vint64m4_t maskedoff, vint64m4_t src, size_t offset, size_t vl) {
  return __riscv_vslidedown_tumu(mask, maskedoff, src, offset, vl);
}

vint64m8_t test_vslidedown_vx_i64m8_tumu(vbool8_t mask, vint64m8_t maskedoff, vint64m8_t src, size_t offset, size_t vl) {
  return __riscv_vslidedown_tumu(mask, maskedoff, src, offset, vl);
}

vuint8mf8_t test_vslidedown_vx_u8mf8_tumu(vbool64_t mask, vuint8mf8_t maskedoff, vuint8mf8_t src, size_t offset, size_t vl) {
  return __riscv_vslidedown_tumu(mask, maskedoff, src, offset, vl);
}

vuint8mf4_t test_vslidedown_vx_u8mf4_tumu(vbool32_t mask, vuint8mf4_t maskedoff, vuint8mf4_t src, size_t offset, size_t vl) {
  return __riscv_vslidedown_tumu(mask, maskedoff, src, offset, vl);
}

vuint8mf2_t test_vslidedown_vx_u8mf2_tumu(vbool16_t mask, vuint8mf2_t maskedoff, vuint8mf2_t src, size_t offset, size_t vl) {
  return __riscv_vslidedown_tumu(mask, maskedoff, src, offset, vl);
}

vuint8m1_t test_vslidedown_vx_u8m1_tumu(vbool8_t mask, vuint8m1_t maskedoff, vuint8m1_t src, size_t offset, size_t vl) {
  return __riscv_vslidedown_tumu(mask, maskedoff, src, offset, vl);
}

vuint8m2_t test_vslidedown_vx_u8m2_tumu(vbool4_t mask, vuint8m2_t maskedoff, vuint8m2_t src, size_t offset, size_t vl) {
  return __riscv_vslidedown_tumu(mask, maskedoff, src, offset, vl);
}

vuint8m4_t test_vslidedown_vx_u8m4_tumu(vbool2_t mask, vuint8m4_t maskedoff, vuint8m4_t src, size_t offset, size_t vl) {
  return __riscv_vslidedown_tumu(mask, maskedoff, src, offset, vl);
}

vuint8m8_t test_vslidedown_vx_u8m8_tumu(vbool1_t mask, vuint8m8_t maskedoff, vuint8m8_t src, size_t offset, size_t vl) {
  return __riscv_vslidedown_tumu(mask, maskedoff, src, offset, vl);
}

vuint16mf4_t test_vslidedown_vx_u16mf4_tumu(vbool64_t mask, vuint16mf4_t maskedoff, vuint16mf4_t src, size_t offset, size_t vl) {
  return __riscv_vslidedown_tumu(mask, maskedoff, src, offset, vl);
}

vuint16mf2_t test_vslidedown_vx_u16mf2_tumu(vbool32_t mask, vuint16mf2_t maskedoff, vuint16mf2_t src, size_t offset, size_t vl) {
  return __riscv_vslidedown_tumu(mask, maskedoff, src, offset, vl);
}

vuint16m1_t test_vslidedown_vx_u16m1_tumu(vbool16_t mask, vuint16m1_t maskedoff, vuint16m1_t src, size_t offset, size_t vl) {
  return __riscv_vslidedown_tumu(mask, maskedoff, src, offset, vl);
}

vuint16m2_t test_vslidedown_vx_u16m2_tumu(vbool8_t mask, vuint16m2_t maskedoff, vuint16m2_t src, size_t offset, size_t vl) {
  return __riscv_vslidedown_tumu(mask, maskedoff, src, offset, vl);
}

vuint16m4_t test_vslidedown_vx_u16m4_tumu(vbool4_t mask, vuint16m4_t maskedoff, vuint16m4_t src, size_t offset, size_t vl) {
  return __riscv_vslidedown_tumu(mask, maskedoff, src, offset, vl);
}

vuint16m8_t test_vslidedown_vx_u16m8_tumu(vbool2_t mask, vuint16m8_t maskedoff, vuint16m8_t src, size_t offset, size_t vl) {
  return __riscv_vslidedown_tumu(mask, maskedoff, src, offset, vl);
}

vuint32mf2_t test_vslidedown_vx_u32mf2_tumu(vbool64_t mask, vuint32mf2_t maskedoff, vuint32mf2_t src, size_t offset, size_t vl) {
  return __riscv_vslidedown_tumu(mask, maskedoff, src, offset, vl);
}

vuint32m1_t test_vslidedown_vx_u32m1_tumu(vbool32_t mask, vuint32m1_t maskedoff, vuint32m1_t src, size_t offset, size_t vl) {
  return __riscv_vslidedown_tumu(mask, maskedoff, src, offset, vl);
}

vuint32m2_t test_vslidedown_vx_u32m2_tumu(vbool16_t mask, vuint32m2_t maskedoff, vuint32m2_t src, size_t offset, size_t vl) {
  return __riscv_vslidedown_tumu(mask, maskedoff, src, offset, vl);
}

vuint32m4_t test_vslidedown_vx_u32m4_tumu(vbool8_t mask, vuint32m4_t maskedoff, vuint32m4_t src, size_t offset, size_t vl) {
  return __riscv_vslidedown_tumu(mask, maskedoff, src, offset, vl);
}

vuint32m8_t test_vslidedown_vx_u32m8_tumu(vbool4_t mask, vuint32m8_t maskedoff, vuint32m8_t src, size_t offset, size_t vl) {
  return __riscv_vslidedown_tumu(mask, maskedoff, src, offset, vl);
}

vuint64m1_t test_vslidedown_vx_u64m1_tumu(vbool64_t mask, vuint64m1_t maskedoff, vuint64m1_t src, size_t offset, size_t vl) {
  return __riscv_vslidedown_tumu(mask, maskedoff, src, offset, vl);
}

vuint64m2_t test_vslidedown_vx_u64m2_tumu(vbool32_t mask, vuint64m2_t maskedoff, vuint64m2_t src, size_t offset, size_t vl) {
  return __riscv_vslidedown_tumu(mask, maskedoff, src, offset, vl);
}

vuint64m4_t test_vslidedown_vx_u64m4_tumu(vbool16_t mask, vuint64m4_t maskedoff, vuint64m4_t src, size_t offset, size_t vl) {
  return __riscv_vslidedown_tumu(mask, maskedoff, src, offset, vl);
}

vuint64m8_t test_vslidedown_vx_u64m8_tumu(vbool8_t mask, vuint64m8_t maskedoff, vuint64m8_t src, size_t offset, size_t vl) {
  return __riscv_vslidedown_tumu(mask, maskedoff, src, offset, vl);
}

vfloat32mf2_t test_vslidedown_vx_f32mf2_mu(vbool64_t mask, vfloat32mf2_t maskedoff, vfloat32mf2_t src, size_t offset, size_t vl) {
  return __riscv_vslidedown_mu(mask, maskedoff, src, offset, vl);
}

vfloat32m1_t test_vslidedown_vx_f32m1_mu(vbool32_t mask, vfloat32m1_t maskedoff, vfloat32m1_t src, size_t offset, size_t vl) {
  return __riscv_vslidedown_mu(mask, maskedoff, src, offset, vl);
}

vfloat32m2_t test_vslidedown_vx_f32m2_mu(vbool16_t mask, vfloat32m2_t maskedoff, vfloat32m2_t src, size_t offset, size_t vl) {
  return __riscv_vslidedown_mu(mask, maskedoff, src, offset, vl);
}

vfloat32m4_t test_vslidedown_vx_f32m4_mu(vbool8_t mask, vfloat32m4_t maskedoff, vfloat32m4_t src, size_t offset, size_t vl) {
  return __riscv_vslidedown_mu(mask, maskedoff, src, offset, vl);
}

vfloat32m8_t test_vslidedown_vx_f32m8_mu(vbool4_t mask, vfloat32m8_t maskedoff, vfloat32m8_t src, size_t offset, size_t vl) {
  return __riscv_vslidedown_mu(mask, maskedoff, src, offset, vl);
}

vfloat64m1_t test_vslidedown_vx_f64m1_mu(vbool64_t mask, vfloat64m1_t maskedoff, vfloat64m1_t src, size_t offset, size_t vl) {
  return __riscv_vslidedown_mu(mask, maskedoff, src, offset, vl);
}

vfloat64m2_t test_vslidedown_vx_f64m2_mu(vbool32_t mask, vfloat64m2_t maskedoff, vfloat64m2_t src, size_t offset, size_t vl) {
  return __riscv_vslidedown_mu(mask, maskedoff, src, offset, vl);
}

vfloat64m4_t test_vslidedown_vx_f64m4_mu(vbool16_t mask, vfloat64m4_t maskedoff, vfloat64m4_t src, size_t offset, size_t vl) {
  return __riscv_vslidedown_mu(mask, maskedoff, src, offset, vl);
}

vfloat64m8_t test_vslidedown_vx_f64m8_mu(vbool8_t mask, vfloat64m8_t maskedoff, vfloat64m8_t src, size_t offset, size_t vl) {
  return __riscv_vslidedown_mu(mask, maskedoff, src, offset, vl);
}

vint8mf8_t test_vslidedown_vx_i8mf8_mu(vbool64_t mask, vint8mf8_t maskedoff, vint8mf8_t src, size_t offset, size_t vl) {
  return __riscv_vslidedown_mu(mask, maskedoff, src, offset, vl);
}

vint8mf4_t test_vslidedown_vx_i8mf4_mu(vbool32_t mask, vint8mf4_t maskedoff, vint8mf4_t src, size_t offset, size_t vl) {
  return __riscv_vslidedown_mu(mask, maskedoff, src, offset, vl);
}

vint8mf2_t test_vslidedown_vx_i8mf2_mu(vbool16_t mask, vint8mf2_t maskedoff, vint8mf2_t src, size_t offset, size_t vl) {
  return __riscv_vslidedown_mu(mask, maskedoff, src, offset, vl);
}

vint8m1_t test_vslidedown_vx_i8m1_mu(vbool8_t mask, vint8m1_t maskedoff, vint8m1_t src, size_t offset, size_t vl) {
  return __riscv_vslidedown_mu(mask, maskedoff, src, offset, vl);
}

vint8m2_t test_vslidedown_vx_i8m2_mu(vbool4_t mask, vint8m2_t maskedoff, vint8m2_t src, size_t offset, size_t vl) {
  return __riscv_vslidedown_mu(mask, maskedoff, src, offset, vl);
}

vint8m4_t test_vslidedown_vx_i8m4_mu(vbool2_t mask, vint8m4_t maskedoff, vint8m4_t src, size_t offset, size_t vl) {
  return __riscv_vslidedown_mu(mask, maskedoff, src, offset, vl);
}

vint8m8_t test_vslidedown_vx_i8m8_mu(vbool1_t mask, vint8m8_t maskedoff, vint8m8_t src, size_t offset, size_t vl) {
  return __riscv_vslidedown_mu(mask, maskedoff, src, offset, vl);
}

vint16mf4_t test_vslidedown_vx_i16mf4_mu(vbool64_t mask, vint16mf4_t maskedoff, vint16mf4_t src, size_t offset, size_t vl) {
  return __riscv_vslidedown_mu(mask, maskedoff, src, offset, vl);
}

vint16mf2_t test_vslidedown_vx_i16mf2_mu(vbool32_t mask, vint16mf2_t maskedoff, vint16mf2_t src, size_t offset, size_t vl) {
  return __riscv_vslidedown_mu(mask, maskedoff, src, offset, vl);
}

vint16m1_t test_vslidedown_vx_i16m1_mu(vbool16_t mask, vint16m1_t maskedoff, vint16m1_t src, size_t offset, size_t vl) {
  return __riscv_vslidedown_mu(mask, maskedoff, src, offset, vl);
}

vint16m2_t test_vslidedown_vx_i16m2_mu(vbool8_t mask, vint16m2_t maskedoff, vint16m2_t src, size_t offset, size_t vl) {
  return __riscv_vslidedown_mu(mask, maskedoff, src, offset, vl);
}

vint16m4_t test_vslidedown_vx_i16m4_mu(vbool4_t mask, vint16m4_t maskedoff, vint16m4_t src, size_t offset, size_t vl) {
  return __riscv_vslidedown_mu(mask, maskedoff, src, offset, vl);
}

vint16m8_t test_vslidedown_vx_i16m8_mu(vbool2_t mask, vint16m8_t maskedoff, vint16m8_t src, size_t offset, size_t vl) {
  return __riscv_vslidedown_mu(mask, maskedoff, src, offset, vl);
}

vint32mf2_t test_vslidedown_vx_i32mf2_mu(vbool64_t mask, vint32mf2_t maskedoff, vint32mf2_t src, size_t offset, size_t vl) {
  return __riscv_vslidedown_mu(mask, maskedoff, src, offset, vl);
}

vint32m1_t test_vslidedown_vx_i32m1_mu(vbool32_t mask, vint32m1_t maskedoff, vint32m1_t src, size_t offset, size_t vl) {
  return __riscv_vslidedown_mu(mask, maskedoff, src, offset, vl);
}

vint32m2_t test_vslidedown_vx_i32m2_mu(vbool16_t mask, vint32m2_t maskedoff, vint32m2_t src, size_t offset, size_t vl) {
  return __riscv_vslidedown_mu(mask, maskedoff, src, offset, vl);
}

vint32m4_t test_vslidedown_vx_i32m4_mu(vbool8_t mask, vint32m4_t maskedoff, vint32m4_t src, size_t offset, size_t vl) {
  return __riscv_vslidedown_mu(mask, maskedoff, src, offset, vl);
}

vint32m8_t test_vslidedown_vx_i32m8_mu(vbool4_t mask, vint32m8_t maskedoff, vint32m8_t src, size_t offset, size_t vl) {
  return __riscv_vslidedown_mu(mask, maskedoff, src, offset, vl);
}

vint64m1_t test_vslidedown_vx_i64m1_mu(vbool64_t mask, vint64m1_t maskedoff, vint64m1_t src, size_t offset, size_t vl) {
  return __riscv_vslidedown_mu(mask, maskedoff, src, offset, vl);
}

vint64m2_t test_vslidedown_vx_i64m2_mu(vbool32_t mask, vint64m2_t maskedoff, vint64m2_t src, size_t offset, size_t vl) {
  return __riscv_vslidedown_mu(mask, maskedoff, src, offset, vl);
}

vint64m4_t test_vslidedown_vx_i64m4_mu(vbool16_t mask, vint64m4_t maskedoff, vint64m4_t src, size_t offset, size_t vl) {
  return __riscv_vslidedown_mu(mask, maskedoff, src, offset, vl);
}

vint64m8_t test_vslidedown_vx_i64m8_mu(vbool8_t mask, vint64m8_t maskedoff, vint64m8_t src, size_t offset, size_t vl) {
  return __riscv_vslidedown_mu(mask, maskedoff, src, offset, vl);
}

vuint8mf8_t test_vslidedown_vx_u8mf8_mu(vbool64_t mask, vuint8mf8_t maskedoff, vuint8mf8_t src, size_t offset, size_t vl) {
  return __riscv_vslidedown_mu(mask, maskedoff, src, offset, vl);
}

vuint8mf4_t test_vslidedown_vx_u8mf4_mu(vbool32_t mask, vuint8mf4_t maskedoff, vuint8mf4_t src, size_t offset, size_t vl) {
  return __riscv_vslidedown_mu(mask, maskedoff, src, offset, vl);
}

vuint8mf2_t test_vslidedown_vx_u8mf2_mu(vbool16_t mask, vuint8mf2_t maskedoff, vuint8mf2_t src, size_t offset, size_t vl) {
  return __riscv_vslidedown_mu(mask, maskedoff, src, offset, vl);
}

vuint8m1_t test_vslidedown_vx_u8m1_mu(vbool8_t mask, vuint8m1_t maskedoff, vuint8m1_t src, size_t offset, size_t vl) {
  return __riscv_vslidedown_mu(mask, maskedoff, src, offset, vl);
}

vuint8m2_t test_vslidedown_vx_u8m2_mu(vbool4_t mask, vuint8m2_t maskedoff, vuint8m2_t src, size_t offset, size_t vl) {
  return __riscv_vslidedown_mu(mask, maskedoff, src, offset, vl);
}

vuint8m4_t test_vslidedown_vx_u8m4_mu(vbool2_t mask, vuint8m4_t maskedoff, vuint8m4_t src, size_t offset, size_t vl) {
  return __riscv_vslidedown_mu(mask, maskedoff, src, offset, vl);
}

vuint8m8_t test_vslidedown_vx_u8m8_mu(vbool1_t mask, vuint8m8_t maskedoff, vuint8m8_t src, size_t offset, size_t vl) {
  return __riscv_vslidedown_mu(mask, maskedoff, src, offset, vl);
}

vuint16mf4_t test_vslidedown_vx_u16mf4_mu(vbool64_t mask, vuint16mf4_t maskedoff, vuint16mf4_t src, size_t offset, size_t vl) {
  return __riscv_vslidedown_mu(mask, maskedoff, src, offset, vl);
}

vuint16mf2_t test_vslidedown_vx_u16mf2_mu(vbool32_t mask, vuint16mf2_t maskedoff, vuint16mf2_t src, size_t offset, size_t vl) {
  return __riscv_vslidedown_mu(mask, maskedoff, src, offset, vl);
}

vuint16m1_t test_vslidedown_vx_u16m1_mu(vbool16_t mask, vuint16m1_t maskedoff, vuint16m1_t src, size_t offset, size_t vl) {
  return __riscv_vslidedown_mu(mask, maskedoff, src, offset, vl);
}

vuint16m2_t test_vslidedown_vx_u16m2_mu(vbool8_t mask, vuint16m2_t maskedoff, vuint16m2_t src, size_t offset, size_t vl) {
  return __riscv_vslidedown_mu(mask, maskedoff, src, offset, vl);
}

vuint16m4_t test_vslidedown_vx_u16m4_mu(vbool4_t mask, vuint16m4_t maskedoff, vuint16m4_t src, size_t offset, size_t vl) {
  return __riscv_vslidedown_mu(mask, maskedoff, src, offset, vl);
}

vuint16m8_t test_vslidedown_vx_u16m8_mu(vbool2_t mask, vuint16m8_t maskedoff, vuint16m8_t src, size_t offset, size_t vl) {
  return __riscv_vslidedown_mu(mask, maskedoff, src, offset, vl);
}

vuint32mf2_t test_vslidedown_vx_u32mf2_mu(vbool64_t mask, vuint32mf2_t maskedoff, vuint32mf2_t src, size_t offset, size_t vl) {
  return __riscv_vslidedown_mu(mask, maskedoff, src, offset, vl);
}

vuint32m1_t test_vslidedown_vx_u32m1_mu(vbool32_t mask, vuint32m1_t maskedoff, vuint32m1_t src, size_t offset, size_t vl) {
  return __riscv_vslidedown_mu(mask, maskedoff, src, offset, vl);
}

vuint32m2_t test_vslidedown_vx_u32m2_mu(vbool16_t mask, vuint32m2_t maskedoff, vuint32m2_t src, size_t offset, size_t vl) {
  return __riscv_vslidedown_mu(mask, maskedoff, src, offset, vl);
}

vuint32m4_t test_vslidedown_vx_u32m4_mu(vbool8_t mask, vuint32m4_t maskedoff, vuint32m4_t src, size_t offset, size_t vl) {
  return __riscv_vslidedown_mu(mask, maskedoff, src, offset, vl);
}

vuint32m8_t test_vslidedown_vx_u32m8_mu(vbool4_t mask, vuint32m8_t maskedoff, vuint32m8_t src, size_t offset, size_t vl) {
  return __riscv_vslidedown_mu(mask, maskedoff, src, offset, vl);
}

vuint64m1_t test_vslidedown_vx_u64m1_mu(vbool64_t mask, vuint64m1_t maskedoff, vuint64m1_t src, size_t offset, size_t vl) {
  return __riscv_vslidedown_mu(mask, maskedoff, src, offset, vl);
}

vuint64m2_t test_vslidedown_vx_u64m2_mu(vbool32_t mask, vuint64m2_t maskedoff, vuint64m2_t src, size_t offset, size_t vl) {
  return __riscv_vslidedown_mu(mask, maskedoff, src, offset, vl);
}

vuint64m4_t test_vslidedown_vx_u64m4_mu(vbool16_t mask, vuint64m4_t maskedoff, vuint64m4_t src, size_t offset, size_t vl) {
  return __riscv_vslidedown_mu(mask, maskedoff, src, offset, vl);
}

vuint64m8_t test_vslidedown_vx_u64m8_mu(vbool8_t mask, vuint64m8_t maskedoff, vuint64m8_t src, size_t offset, size_t vl) {
  return __riscv_vslidedown_mu(mask, maskedoff, src, offset, vl);
}

/* { dg-final { scan-assembler-times {vseti?vli\s+[a-z0-9]+,\s*[a-z0-9]+,\s*e[0-9]+,\s*mf?[1248],\s*t[au],\s*m[au]\s+vslidedown\.[ivxfswum.]+\s+} 212 } } */
