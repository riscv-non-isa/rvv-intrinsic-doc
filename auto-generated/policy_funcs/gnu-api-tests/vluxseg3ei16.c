/* { dg-do compile } */
/* { dg-options "-march=rv64gcv_zvfh -mabi=lp64d -Wno-psabi -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
vfloat16mf4x3_t test_vluxseg3ei16_v_f16mf4x3_tu(vfloat16mf4x3_t maskedoff_tuple, const float16_t *base, vuint16mf4_t bindex, size_t vl) {
  return __riscv_vluxseg3ei16_v_f16mf4x3_tu(maskedoff_tuple, base, bindex, vl);
}

vfloat16mf2x3_t test_vluxseg3ei16_v_f16mf2x3_tu(vfloat16mf2x3_t maskedoff_tuple, const float16_t *base, vuint16mf2_t bindex, size_t vl) {
  return __riscv_vluxseg3ei16_v_f16mf2x3_tu(maskedoff_tuple, base, bindex, vl);
}

vfloat16m1x3_t test_vluxseg3ei16_v_f16m1x3_tu(vfloat16m1x3_t maskedoff_tuple, const float16_t *base, vuint16m1_t bindex, size_t vl) {
  return __riscv_vluxseg3ei16_v_f16m1x3_tu(maskedoff_tuple, base, bindex, vl);
}

vfloat16m2x3_t test_vluxseg3ei16_v_f16m2x3_tu(vfloat16m2x3_t maskedoff_tuple, const float16_t *base, vuint16m2_t bindex, size_t vl) {
  return __riscv_vluxseg3ei16_v_f16m2x3_tu(maskedoff_tuple, base, bindex, vl);
}

vfloat32mf2x3_t test_vluxseg3ei16_v_f32mf2x3_tu(vfloat32mf2x3_t maskedoff_tuple, const float32_t *base, vuint16mf4_t bindex, size_t vl) {
  return __riscv_vluxseg3ei16_v_f32mf2x3_tu(maskedoff_tuple, base, bindex, vl);
}

vfloat32m1x3_t test_vluxseg3ei16_v_f32m1x3_tu(vfloat32m1x3_t maskedoff_tuple, const float32_t *base, vuint16mf2_t bindex, size_t vl) {
  return __riscv_vluxseg3ei16_v_f32m1x3_tu(maskedoff_tuple, base, bindex, vl);
}

vfloat32m2x3_t test_vluxseg3ei16_v_f32m2x3_tu(vfloat32m2x3_t maskedoff_tuple, const float32_t *base, vuint16m1_t bindex, size_t vl) {
  return __riscv_vluxseg3ei16_v_f32m2x3_tu(maskedoff_tuple, base, bindex, vl);
}

vfloat64m1x3_t test_vluxseg3ei16_v_f64m1x3_tu(vfloat64m1x3_t maskedoff_tuple, const float64_t *base, vuint16mf4_t bindex, size_t vl) {
  return __riscv_vluxseg3ei16_v_f64m1x3_tu(maskedoff_tuple, base, bindex, vl);
}

vfloat64m2x3_t test_vluxseg3ei16_v_f64m2x3_tu(vfloat64m2x3_t maskedoff_tuple, const float64_t *base, vuint16mf2_t bindex, size_t vl) {
  return __riscv_vluxseg3ei16_v_f64m2x3_tu(maskedoff_tuple, base, bindex, vl);
}

vint8mf8x3_t test_vluxseg3ei16_v_i8mf8x3_tu(vint8mf8x3_t maskedoff_tuple, const int8_t *base, vuint16mf4_t bindex, size_t vl) {
  return __riscv_vluxseg3ei16_v_i8mf8x3_tu(maskedoff_tuple, base, bindex, vl);
}

vint8mf4x3_t test_vluxseg3ei16_v_i8mf4x3_tu(vint8mf4x3_t maskedoff_tuple, const int8_t *base, vuint16mf2_t bindex, size_t vl) {
  return __riscv_vluxseg3ei16_v_i8mf4x3_tu(maskedoff_tuple, base, bindex, vl);
}

vint8mf2x3_t test_vluxseg3ei16_v_i8mf2x3_tu(vint8mf2x3_t maskedoff_tuple, const int8_t *base, vuint16m1_t bindex, size_t vl) {
  return __riscv_vluxseg3ei16_v_i8mf2x3_tu(maskedoff_tuple, base, bindex, vl);
}

vint8m1x3_t test_vluxseg3ei16_v_i8m1x3_tu(vint8m1x3_t maskedoff_tuple, const int8_t *base, vuint16m2_t bindex, size_t vl) {
  return __riscv_vluxseg3ei16_v_i8m1x3_tu(maskedoff_tuple, base, bindex, vl);
}

vint8m2x3_t test_vluxseg3ei16_v_i8m2x3_tu(vint8m2x3_t maskedoff_tuple, const int8_t *base, vuint16m4_t bindex, size_t vl) {
  return __riscv_vluxseg3ei16_v_i8m2x3_tu(maskedoff_tuple, base, bindex, vl);
}

vint16mf4x3_t test_vluxseg3ei16_v_i16mf4x3_tu(vint16mf4x3_t maskedoff_tuple, const int16_t *base, vuint16mf4_t bindex, size_t vl) {
  return __riscv_vluxseg3ei16_v_i16mf4x3_tu(maskedoff_tuple, base, bindex, vl);
}

vint16mf2x3_t test_vluxseg3ei16_v_i16mf2x3_tu(vint16mf2x3_t maskedoff_tuple, const int16_t *base, vuint16mf2_t bindex, size_t vl) {
  return __riscv_vluxseg3ei16_v_i16mf2x3_tu(maskedoff_tuple, base, bindex, vl);
}

vint16m1x3_t test_vluxseg3ei16_v_i16m1x3_tu(vint16m1x3_t maskedoff_tuple, const int16_t *base, vuint16m1_t bindex, size_t vl) {
  return __riscv_vluxseg3ei16_v_i16m1x3_tu(maskedoff_tuple, base, bindex, vl);
}

vint16m2x3_t test_vluxseg3ei16_v_i16m2x3_tu(vint16m2x3_t maskedoff_tuple, const int16_t *base, vuint16m2_t bindex, size_t vl) {
  return __riscv_vluxseg3ei16_v_i16m2x3_tu(maskedoff_tuple, base, bindex, vl);
}

vint32mf2x3_t test_vluxseg3ei16_v_i32mf2x3_tu(vint32mf2x3_t maskedoff_tuple, const int32_t *base, vuint16mf4_t bindex, size_t vl) {
  return __riscv_vluxseg3ei16_v_i32mf2x3_tu(maskedoff_tuple, base, bindex, vl);
}

vint32m1x3_t test_vluxseg3ei16_v_i32m1x3_tu(vint32m1x3_t maskedoff_tuple, const int32_t *base, vuint16mf2_t bindex, size_t vl) {
  return __riscv_vluxseg3ei16_v_i32m1x3_tu(maskedoff_tuple, base, bindex, vl);
}

vint32m2x3_t test_vluxseg3ei16_v_i32m2x3_tu(vint32m2x3_t maskedoff_tuple, const int32_t *base, vuint16m1_t bindex, size_t vl) {
  return __riscv_vluxseg3ei16_v_i32m2x3_tu(maskedoff_tuple, base, bindex, vl);
}

vint64m1x3_t test_vluxseg3ei16_v_i64m1x3_tu(vint64m1x3_t maskedoff_tuple, const int64_t *base, vuint16mf4_t bindex, size_t vl) {
  return __riscv_vluxseg3ei16_v_i64m1x3_tu(maskedoff_tuple, base, bindex, vl);
}

vint64m2x3_t test_vluxseg3ei16_v_i64m2x3_tu(vint64m2x3_t maskedoff_tuple, const int64_t *base, vuint16mf2_t bindex, size_t vl) {
  return __riscv_vluxseg3ei16_v_i64m2x3_tu(maskedoff_tuple, base, bindex, vl);
}

vuint8mf8x3_t test_vluxseg3ei16_v_u8mf8x3_tu(vuint8mf8x3_t maskedoff_tuple, const uint8_t *base, vuint16mf4_t bindex, size_t vl) {
  return __riscv_vluxseg3ei16_v_u8mf8x3_tu(maskedoff_tuple, base, bindex, vl);
}

vuint8mf4x3_t test_vluxseg3ei16_v_u8mf4x3_tu(vuint8mf4x3_t maskedoff_tuple, const uint8_t *base, vuint16mf2_t bindex, size_t vl) {
  return __riscv_vluxseg3ei16_v_u8mf4x3_tu(maskedoff_tuple, base, bindex, vl);
}

vuint8mf2x3_t test_vluxseg3ei16_v_u8mf2x3_tu(vuint8mf2x3_t maskedoff_tuple, const uint8_t *base, vuint16m1_t bindex, size_t vl) {
  return __riscv_vluxseg3ei16_v_u8mf2x3_tu(maskedoff_tuple, base, bindex, vl);
}

vuint8m1x3_t test_vluxseg3ei16_v_u8m1x3_tu(vuint8m1x3_t maskedoff_tuple, const uint8_t *base, vuint16m2_t bindex, size_t vl) {
  return __riscv_vluxseg3ei16_v_u8m1x3_tu(maskedoff_tuple, base, bindex, vl);
}

vuint8m2x3_t test_vluxseg3ei16_v_u8m2x3_tu(vuint8m2x3_t maskedoff_tuple, const uint8_t *base, vuint16m4_t bindex, size_t vl) {
  return __riscv_vluxseg3ei16_v_u8m2x3_tu(maskedoff_tuple, base, bindex, vl);
}

vuint16mf4x3_t test_vluxseg3ei16_v_u16mf4x3_tu(vuint16mf4x3_t maskedoff_tuple, const uint16_t *base, vuint16mf4_t bindex, size_t vl) {
  return __riscv_vluxseg3ei16_v_u16mf4x3_tu(maskedoff_tuple, base, bindex, vl);
}

vuint16mf2x3_t test_vluxseg3ei16_v_u16mf2x3_tu(vuint16mf2x3_t maskedoff_tuple, const uint16_t *base, vuint16mf2_t bindex, size_t vl) {
  return __riscv_vluxseg3ei16_v_u16mf2x3_tu(maskedoff_tuple, base, bindex, vl);
}

vuint16m1x3_t test_vluxseg3ei16_v_u16m1x3_tu(vuint16m1x3_t maskedoff_tuple, const uint16_t *base, vuint16m1_t bindex, size_t vl) {
  return __riscv_vluxseg3ei16_v_u16m1x3_tu(maskedoff_tuple, base, bindex, vl);
}

vuint16m2x3_t test_vluxseg3ei16_v_u16m2x3_tu(vuint16m2x3_t maskedoff_tuple, const uint16_t *base, vuint16m2_t bindex, size_t vl) {
  return __riscv_vluxseg3ei16_v_u16m2x3_tu(maskedoff_tuple, base, bindex, vl);
}

vuint32mf2x3_t test_vluxseg3ei16_v_u32mf2x3_tu(vuint32mf2x3_t maskedoff_tuple, const uint32_t *base, vuint16mf4_t bindex, size_t vl) {
  return __riscv_vluxseg3ei16_v_u32mf2x3_tu(maskedoff_tuple, base, bindex, vl);
}

vuint32m1x3_t test_vluxseg3ei16_v_u32m1x3_tu(vuint32m1x3_t maskedoff_tuple, const uint32_t *base, vuint16mf2_t bindex, size_t vl) {
  return __riscv_vluxseg3ei16_v_u32m1x3_tu(maskedoff_tuple, base, bindex, vl);
}

vuint32m2x3_t test_vluxseg3ei16_v_u32m2x3_tu(vuint32m2x3_t maskedoff_tuple, const uint32_t *base, vuint16m1_t bindex, size_t vl) {
  return __riscv_vluxseg3ei16_v_u32m2x3_tu(maskedoff_tuple, base, bindex, vl);
}

vuint64m1x3_t test_vluxseg3ei16_v_u64m1x3_tu(vuint64m1x3_t maskedoff_tuple, const uint64_t *base, vuint16mf4_t bindex, size_t vl) {
  return __riscv_vluxseg3ei16_v_u64m1x3_tu(maskedoff_tuple, base, bindex, vl);
}

vuint64m2x3_t test_vluxseg3ei16_v_u64m2x3_tu(vuint64m2x3_t maskedoff_tuple, const uint64_t *base, vuint16mf2_t bindex, size_t vl) {
  return __riscv_vluxseg3ei16_v_u64m2x3_tu(maskedoff_tuple, base, bindex, vl);
}

vfloat16mf4x3_t test_vluxseg3ei16_v_f16mf4x3_tum(vbool64_t mask, vfloat16mf4x3_t maskedoff_tuple, const float16_t *base, vuint16mf4_t bindex, size_t vl) {
  return __riscv_vluxseg3ei16_v_f16mf4x3_tum(mask, maskedoff_tuple, base, bindex, vl);
}

vfloat16mf2x3_t test_vluxseg3ei16_v_f16mf2x3_tum(vbool32_t mask, vfloat16mf2x3_t maskedoff_tuple, const float16_t *base, vuint16mf2_t bindex, size_t vl) {
  return __riscv_vluxseg3ei16_v_f16mf2x3_tum(mask, maskedoff_tuple, base, bindex, vl);
}

vfloat16m1x3_t test_vluxseg3ei16_v_f16m1x3_tum(vbool16_t mask, vfloat16m1x3_t maskedoff_tuple, const float16_t *base, vuint16m1_t bindex, size_t vl) {
  return __riscv_vluxseg3ei16_v_f16m1x3_tum(mask, maskedoff_tuple, base, bindex, vl);
}

vfloat16m2x3_t test_vluxseg3ei16_v_f16m2x3_tum(vbool8_t mask, vfloat16m2x3_t maskedoff_tuple, const float16_t *base, vuint16m2_t bindex, size_t vl) {
  return __riscv_vluxseg3ei16_v_f16m2x3_tum(mask, maskedoff_tuple, base, bindex, vl);
}

vfloat32mf2x3_t test_vluxseg3ei16_v_f32mf2x3_tum(vbool64_t mask, vfloat32mf2x3_t maskedoff_tuple, const float32_t *base, vuint16mf4_t bindex, size_t vl) {
  return __riscv_vluxseg3ei16_v_f32mf2x3_tum(mask, maskedoff_tuple, base, bindex, vl);
}

vfloat32m1x3_t test_vluxseg3ei16_v_f32m1x3_tum(vbool32_t mask, vfloat32m1x3_t maskedoff_tuple, const float32_t *base, vuint16mf2_t bindex, size_t vl) {
  return __riscv_vluxseg3ei16_v_f32m1x3_tum(mask, maskedoff_tuple, base, bindex, vl);
}

vfloat32m2x3_t test_vluxseg3ei16_v_f32m2x3_tum(vbool16_t mask, vfloat32m2x3_t maskedoff_tuple, const float32_t *base, vuint16m1_t bindex, size_t vl) {
  return __riscv_vluxseg3ei16_v_f32m2x3_tum(mask, maskedoff_tuple, base, bindex, vl);
}

vfloat64m1x3_t test_vluxseg3ei16_v_f64m1x3_tum(vbool64_t mask, vfloat64m1x3_t maskedoff_tuple, const float64_t *base, vuint16mf4_t bindex, size_t vl) {
  return __riscv_vluxseg3ei16_v_f64m1x3_tum(mask, maskedoff_tuple, base, bindex, vl);
}

vfloat64m2x3_t test_vluxseg3ei16_v_f64m2x3_tum(vbool32_t mask, vfloat64m2x3_t maskedoff_tuple, const float64_t *base, vuint16mf2_t bindex, size_t vl) {
  return __riscv_vluxseg3ei16_v_f64m2x3_tum(mask, maskedoff_tuple, base, bindex, vl);
}

vint8mf8x3_t test_vluxseg3ei16_v_i8mf8x3_tum(vbool64_t mask, vint8mf8x3_t maskedoff_tuple, const int8_t *base, vuint16mf4_t bindex, size_t vl) {
  return __riscv_vluxseg3ei16_v_i8mf8x3_tum(mask, maskedoff_tuple, base, bindex, vl);
}

vint8mf4x3_t test_vluxseg3ei16_v_i8mf4x3_tum(vbool32_t mask, vint8mf4x3_t maskedoff_tuple, const int8_t *base, vuint16mf2_t bindex, size_t vl) {
  return __riscv_vluxseg3ei16_v_i8mf4x3_tum(mask, maskedoff_tuple, base, bindex, vl);
}

vint8mf2x3_t test_vluxseg3ei16_v_i8mf2x3_tum(vbool16_t mask, vint8mf2x3_t maskedoff_tuple, const int8_t *base, vuint16m1_t bindex, size_t vl) {
  return __riscv_vluxseg3ei16_v_i8mf2x3_tum(mask, maskedoff_tuple, base, bindex, vl);
}

vint8m1x3_t test_vluxseg3ei16_v_i8m1x3_tum(vbool8_t mask, vint8m1x3_t maskedoff_tuple, const int8_t *base, vuint16m2_t bindex, size_t vl) {
  return __riscv_vluxseg3ei16_v_i8m1x3_tum(mask, maskedoff_tuple, base, bindex, vl);
}

vint8m2x3_t test_vluxseg3ei16_v_i8m2x3_tum(vbool4_t mask, vint8m2x3_t maskedoff_tuple, const int8_t *base, vuint16m4_t bindex, size_t vl) {
  return __riscv_vluxseg3ei16_v_i8m2x3_tum(mask, maskedoff_tuple, base, bindex, vl);
}

vint16mf4x3_t test_vluxseg3ei16_v_i16mf4x3_tum(vbool64_t mask, vint16mf4x3_t maskedoff_tuple, const int16_t *base, vuint16mf4_t bindex, size_t vl) {
  return __riscv_vluxseg3ei16_v_i16mf4x3_tum(mask, maskedoff_tuple, base, bindex, vl);
}

vint16mf2x3_t test_vluxseg3ei16_v_i16mf2x3_tum(vbool32_t mask, vint16mf2x3_t maskedoff_tuple, const int16_t *base, vuint16mf2_t bindex, size_t vl) {
  return __riscv_vluxseg3ei16_v_i16mf2x3_tum(mask, maskedoff_tuple, base, bindex, vl);
}

vint16m1x3_t test_vluxseg3ei16_v_i16m1x3_tum(vbool16_t mask, vint16m1x3_t maskedoff_tuple, const int16_t *base, vuint16m1_t bindex, size_t vl) {
  return __riscv_vluxseg3ei16_v_i16m1x3_tum(mask, maskedoff_tuple, base, bindex, vl);
}

vint16m2x3_t test_vluxseg3ei16_v_i16m2x3_tum(vbool8_t mask, vint16m2x3_t maskedoff_tuple, const int16_t *base, vuint16m2_t bindex, size_t vl) {
  return __riscv_vluxseg3ei16_v_i16m2x3_tum(mask, maskedoff_tuple, base, bindex, vl);
}

vint32mf2x3_t test_vluxseg3ei16_v_i32mf2x3_tum(vbool64_t mask, vint32mf2x3_t maskedoff_tuple, const int32_t *base, vuint16mf4_t bindex, size_t vl) {
  return __riscv_vluxseg3ei16_v_i32mf2x3_tum(mask, maskedoff_tuple, base, bindex, vl);
}

vint32m1x3_t test_vluxseg3ei16_v_i32m1x3_tum(vbool32_t mask, vint32m1x3_t maskedoff_tuple, const int32_t *base, vuint16mf2_t bindex, size_t vl) {
  return __riscv_vluxseg3ei16_v_i32m1x3_tum(mask, maskedoff_tuple, base, bindex, vl);
}

vint32m2x3_t test_vluxseg3ei16_v_i32m2x3_tum(vbool16_t mask, vint32m2x3_t maskedoff_tuple, const int32_t *base, vuint16m1_t bindex, size_t vl) {
  return __riscv_vluxseg3ei16_v_i32m2x3_tum(mask, maskedoff_tuple, base, bindex, vl);
}

vint64m1x3_t test_vluxseg3ei16_v_i64m1x3_tum(vbool64_t mask, vint64m1x3_t maskedoff_tuple, const int64_t *base, vuint16mf4_t bindex, size_t vl) {
  return __riscv_vluxseg3ei16_v_i64m1x3_tum(mask, maskedoff_tuple, base, bindex, vl);
}

vint64m2x3_t test_vluxseg3ei16_v_i64m2x3_tum(vbool32_t mask, vint64m2x3_t maskedoff_tuple, const int64_t *base, vuint16mf2_t bindex, size_t vl) {
  return __riscv_vluxseg3ei16_v_i64m2x3_tum(mask, maskedoff_tuple, base, bindex, vl);
}

vuint8mf8x3_t test_vluxseg3ei16_v_u8mf8x3_tum(vbool64_t mask, vuint8mf8x3_t maskedoff_tuple, const uint8_t *base, vuint16mf4_t bindex, size_t vl) {
  return __riscv_vluxseg3ei16_v_u8mf8x3_tum(mask, maskedoff_tuple, base, bindex, vl);
}

vuint8mf4x3_t test_vluxseg3ei16_v_u8mf4x3_tum(vbool32_t mask, vuint8mf4x3_t maskedoff_tuple, const uint8_t *base, vuint16mf2_t bindex, size_t vl) {
  return __riscv_vluxseg3ei16_v_u8mf4x3_tum(mask, maskedoff_tuple, base, bindex, vl);
}

vuint8mf2x3_t test_vluxseg3ei16_v_u8mf2x3_tum(vbool16_t mask, vuint8mf2x3_t maskedoff_tuple, const uint8_t *base, vuint16m1_t bindex, size_t vl) {
  return __riscv_vluxseg3ei16_v_u8mf2x3_tum(mask, maskedoff_tuple, base, bindex, vl);
}

vuint8m1x3_t test_vluxseg3ei16_v_u8m1x3_tum(vbool8_t mask, vuint8m1x3_t maskedoff_tuple, const uint8_t *base, vuint16m2_t bindex, size_t vl) {
  return __riscv_vluxseg3ei16_v_u8m1x3_tum(mask, maskedoff_tuple, base, bindex, vl);
}

vuint8m2x3_t test_vluxseg3ei16_v_u8m2x3_tum(vbool4_t mask, vuint8m2x3_t maskedoff_tuple, const uint8_t *base, vuint16m4_t bindex, size_t vl) {
  return __riscv_vluxseg3ei16_v_u8m2x3_tum(mask, maskedoff_tuple, base, bindex, vl);
}

vuint16mf4x3_t test_vluxseg3ei16_v_u16mf4x3_tum(vbool64_t mask, vuint16mf4x3_t maskedoff_tuple, const uint16_t *base, vuint16mf4_t bindex, size_t vl) {
  return __riscv_vluxseg3ei16_v_u16mf4x3_tum(mask, maskedoff_tuple, base, bindex, vl);
}

vuint16mf2x3_t test_vluxseg3ei16_v_u16mf2x3_tum(vbool32_t mask, vuint16mf2x3_t maskedoff_tuple, const uint16_t *base, vuint16mf2_t bindex, size_t vl) {
  return __riscv_vluxseg3ei16_v_u16mf2x3_tum(mask, maskedoff_tuple, base, bindex, vl);
}

vuint16m1x3_t test_vluxseg3ei16_v_u16m1x3_tum(vbool16_t mask, vuint16m1x3_t maskedoff_tuple, const uint16_t *base, vuint16m1_t bindex, size_t vl) {
  return __riscv_vluxseg3ei16_v_u16m1x3_tum(mask, maskedoff_tuple, base, bindex, vl);
}

vuint16m2x3_t test_vluxseg3ei16_v_u16m2x3_tum(vbool8_t mask, vuint16m2x3_t maskedoff_tuple, const uint16_t *base, vuint16m2_t bindex, size_t vl) {
  return __riscv_vluxseg3ei16_v_u16m2x3_tum(mask, maskedoff_tuple, base, bindex, vl);
}

vuint32mf2x3_t test_vluxseg3ei16_v_u32mf2x3_tum(vbool64_t mask, vuint32mf2x3_t maskedoff_tuple, const uint32_t *base, vuint16mf4_t bindex, size_t vl) {
  return __riscv_vluxseg3ei16_v_u32mf2x3_tum(mask, maskedoff_tuple, base, bindex, vl);
}

vuint32m1x3_t test_vluxseg3ei16_v_u32m1x3_tum(vbool32_t mask, vuint32m1x3_t maskedoff_tuple, const uint32_t *base, vuint16mf2_t bindex, size_t vl) {
  return __riscv_vluxseg3ei16_v_u32m1x3_tum(mask, maskedoff_tuple, base, bindex, vl);
}

vuint32m2x3_t test_vluxseg3ei16_v_u32m2x3_tum(vbool16_t mask, vuint32m2x3_t maskedoff_tuple, const uint32_t *base, vuint16m1_t bindex, size_t vl) {
  return __riscv_vluxseg3ei16_v_u32m2x3_tum(mask, maskedoff_tuple, base, bindex, vl);
}

vuint64m1x3_t test_vluxseg3ei16_v_u64m1x3_tum(vbool64_t mask, vuint64m1x3_t maskedoff_tuple, const uint64_t *base, vuint16mf4_t bindex, size_t vl) {
  return __riscv_vluxseg3ei16_v_u64m1x3_tum(mask, maskedoff_tuple, base, bindex, vl);
}

vuint64m2x3_t test_vluxseg3ei16_v_u64m2x3_tum(vbool32_t mask, vuint64m2x3_t maskedoff_tuple, const uint64_t *base, vuint16mf2_t bindex, size_t vl) {
  return __riscv_vluxseg3ei16_v_u64m2x3_tum(mask, maskedoff_tuple, base, bindex, vl);
}

vfloat16mf4x3_t test_vluxseg3ei16_v_f16mf4x3_tumu(vbool64_t mask, vfloat16mf4x3_t maskedoff_tuple, const float16_t *base, vuint16mf4_t bindex, size_t vl) {
  return __riscv_vluxseg3ei16_v_f16mf4x3_tumu(mask, maskedoff_tuple, base, bindex, vl);
}

vfloat16mf2x3_t test_vluxseg3ei16_v_f16mf2x3_tumu(vbool32_t mask, vfloat16mf2x3_t maskedoff_tuple, const float16_t *base, vuint16mf2_t bindex, size_t vl) {
  return __riscv_vluxseg3ei16_v_f16mf2x3_tumu(mask, maskedoff_tuple, base, bindex, vl);
}

vfloat16m1x3_t test_vluxseg3ei16_v_f16m1x3_tumu(vbool16_t mask, vfloat16m1x3_t maskedoff_tuple, const float16_t *base, vuint16m1_t bindex, size_t vl) {
  return __riscv_vluxseg3ei16_v_f16m1x3_tumu(mask, maskedoff_tuple, base, bindex, vl);
}

vfloat16m2x3_t test_vluxseg3ei16_v_f16m2x3_tumu(vbool8_t mask, vfloat16m2x3_t maskedoff_tuple, const float16_t *base, vuint16m2_t bindex, size_t vl) {
  return __riscv_vluxseg3ei16_v_f16m2x3_tumu(mask, maskedoff_tuple, base, bindex, vl);
}

vfloat32mf2x3_t test_vluxseg3ei16_v_f32mf2x3_tumu(vbool64_t mask, vfloat32mf2x3_t maskedoff_tuple, const float32_t *base, vuint16mf4_t bindex, size_t vl) {
  return __riscv_vluxseg3ei16_v_f32mf2x3_tumu(mask, maskedoff_tuple, base, bindex, vl);
}

vfloat32m1x3_t test_vluxseg3ei16_v_f32m1x3_tumu(vbool32_t mask, vfloat32m1x3_t maskedoff_tuple, const float32_t *base, vuint16mf2_t bindex, size_t vl) {
  return __riscv_vluxseg3ei16_v_f32m1x3_tumu(mask, maskedoff_tuple, base, bindex, vl);
}

vfloat32m2x3_t test_vluxseg3ei16_v_f32m2x3_tumu(vbool16_t mask, vfloat32m2x3_t maskedoff_tuple, const float32_t *base, vuint16m1_t bindex, size_t vl) {
  return __riscv_vluxseg3ei16_v_f32m2x3_tumu(mask, maskedoff_tuple, base, bindex, vl);
}

vfloat64m1x3_t test_vluxseg3ei16_v_f64m1x3_tumu(vbool64_t mask, vfloat64m1x3_t maskedoff_tuple, const float64_t *base, vuint16mf4_t bindex, size_t vl) {
  return __riscv_vluxseg3ei16_v_f64m1x3_tumu(mask, maskedoff_tuple, base, bindex, vl);
}

vfloat64m2x3_t test_vluxseg3ei16_v_f64m2x3_tumu(vbool32_t mask, vfloat64m2x3_t maskedoff_tuple, const float64_t *base, vuint16mf2_t bindex, size_t vl) {
  return __riscv_vluxseg3ei16_v_f64m2x3_tumu(mask, maskedoff_tuple, base, bindex, vl);
}

vint8mf8x3_t test_vluxseg3ei16_v_i8mf8x3_tumu(vbool64_t mask, vint8mf8x3_t maskedoff_tuple, const int8_t *base, vuint16mf4_t bindex, size_t vl) {
  return __riscv_vluxseg3ei16_v_i8mf8x3_tumu(mask, maskedoff_tuple, base, bindex, vl);
}

vint8mf4x3_t test_vluxseg3ei16_v_i8mf4x3_tumu(vbool32_t mask, vint8mf4x3_t maskedoff_tuple, const int8_t *base, vuint16mf2_t bindex, size_t vl) {
  return __riscv_vluxseg3ei16_v_i8mf4x3_tumu(mask, maskedoff_tuple, base, bindex, vl);
}

vint8mf2x3_t test_vluxseg3ei16_v_i8mf2x3_tumu(vbool16_t mask, vint8mf2x3_t maskedoff_tuple, const int8_t *base, vuint16m1_t bindex, size_t vl) {
  return __riscv_vluxseg3ei16_v_i8mf2x3_tumu(mask, maskedoff_tuple, base, bindex, vl);
}

vint8m1x3_t test_vluxseg3ei16_v_i8m1x3_tumu(vbool8_t mask, vint8m1x3_t maskedoff_tuple, const int8_t *base, vuint16m2_t bindex, size_t vl) {
  return __riscv_vluxseg3ei16_v_i8m1x3_tumu(mask, maskedoff_tuple, base, bindex, vl);
}

vint8m2x3_t test_vluxseg3ei16_v_i8m2x3_tumu(vbool4_t mask, vint8m2x3_t maskedoff_tuple, const int8_t *base, vuint16m4_t bindex, size_t vl) {
  return __riscv_vluxseg3ei16_v_i8m2x3_tumu(mask, maskedoff_tuple, base, bindex, vl);
}

vint16mf4x3_t test_vluxseg3ei16_v_i16mf4x3_tumu(vbool64_t mask, vint16mf4x3_t maskedoff_tuple, const int16_t *base, vuint16mf4_t bindex, size_t vl) {
  return __riscv_vluxseg3ei16_v_i16mf4x3_tumu(mask, maskedoff_tuple, base, bindex, vl);
}

vint16mf2x3_t test_vluxseg3ei16_v_i16mf2x3_tumu(vbool32_t mask, vint16mf2x3_t maskedoff_tuple, const int16_t *base, vuint16mf2_t bindex, size_t vl) {
  return __riscv_vluxseg3ei16_v_i16mf2x3_tumu(mask, maskedoff_tuple, base, bindex, vl);
}

vint16m1x3_t test_vluxseg3ei16_v_i16m1x3_tumu(vbool16_t mask, vint16m1x3_t maskedoff_tuple, const int16_t *base, vuint16m1_t bindex, size_t vl) {
  return __riscv_vluxseg3ei16_v_i16m1x3_tumu(mask, maskedoff_tuple, base, bindex, vl);
}

vint16m2x3_t test_vluxseg3ei16_v_i16m2x3_tumu(vbool8_t mask, vint16m2x3_t maskedoff_tuple, const int16_t *base, vuint16m2_t bindex, size_t vl) {
  return __riscv_vluxseg3ei16_v_i16m2x3_tumu(mask, maskedoff_tuple, base, bindex, vl);
}

vint32mf2x3_t test_vluxseg3ei16_v_i32mf2x3_tumu(vbool64_t mask, vint32mf2x3_t maskedoff_tuple, const int32_t *base, vuint16mf4_t bindex, size_t vl) {
  return __riscv_vluxseg3ei16_v_i32mf2x3_tumu(mask, maskedoff_tuple, base, bindex, vl);
}

vint32m1x3_t test_vluxseg3ei16_v_i32m1x3_tumu(vbool32_t mask, vint32m1x3_t maskedoff_tuple, const int32_t *base, vuint16mf2_t bindex, size_t vl) {
  return __riscv_vluxseg3ei16_v_i32m1x3_tumu(mask, maskedoff_tuple, base, bindex, vl);
}

vint32m2x3_t test_vluxseg3ei16_v_i32m2x3_tumu(vbool16_t mask, vint32m2x3_t maskedoff_tuple, const int32_t *base, vuint16m1_t bindex, size_t vl) {
  return __riscv_vluxseg3ei16_v_i32m2x3_tumu(mask, maskedoff_tuple, base, bindex, vl);
}

vint64m1x3_t test_vluxseg3ei16_v_i64m1x3_tumu(vbool64_t mask, vint64m1x3_t maskedoff_tuple, const int64_t *base, vuint16mf4_t bindex, size_t vl) {
  return __riscv_vluxseg3ei16_v_i64m1x3_tumu(mask, maskedoff_tuple, base, bindex, vl);
}

vint64m2x3_t test_vluxseg3ei16_v_i64m2x3_tumu(vbool32_t mask, vint64m2x3_t maskedoff_tuple, const int64_t *base, vuint16mf2_t bindex, size_t vl) {
  return __riscv_vluxseg3ei16_v_i64m2x3_tumu(mask, maskedoff_tuple, base, bindex, vl);
}

vuint8mf8x3_t test_vluxseg3ei16_v_u8mf8x3_tumu(vbool64_t mask, vuint8mf8x3_t maskedoff_tuple, const uint8_t *base, vuint16mf4_t bindex, size_t vl) {
  return __riscv_vluxseg3ei16_v_u8mf8x3_tumu(mask, maskedoff_tuple, base, bindex, vl);
}

vuint8mf4x3_t test_vluxseg3ei16_v_u8mf4x3_tumu(vbool32_t mask, vuint8mf4x3_t maskedoff_tuple, const uint8_t *base, vuint16mf2_t bindex, size_t vl) {
  return __riscv_vluxseg3ei16_v_u8mf4x3_tumu(mask, maskedoff_tuple, base, bindex, vl);
}

vuint8mf2x3_t test_vluxseg3ei16_v_u8mf2x3_tumu(vbool16_t mask, vuint8mf2x3_t maskedoff_tuple, const uint8_t *base, vuint16m1_t bindex, size_t vl) {
  return __riscv_vluxseg3ei16_v_u8mf2x3_tumu(mask, maskedoff_tuple, base, bindex, vl);
}

vuint8m1x3_t test_vluxseg3ei16_v_u8m1x3_tumu(vbool8_t mask, vuint8m1x3_t maskedoff_tuple, const uint8_t *base, vuint16m2_t bindex, size_t vl) {
  return __riscv_vluxseg3ei16_v_u8m1x3_tumu(mask, maskedoff_tuple, base, bindex, vl);
}

vuint8m2x3_t test_vluxseg3ei16_v_u8m2x3_tumu(vbool4_t mask, vuint8m2x3_t maskedoff_tuple, const uint8_t *base, vuint16m4_t bindex, size_t vl) {
  return __riscv_vluxseg3ei16_v_u8m2x3_tumu(mask, maskedoff_tuple, base, bindex, vl);
}

vuint16mf4x3_t test_vluxseg3ei16_v_u16mf4x3_tumu(vbool64_t mask, vuint16mf4x3_t maskedoff_tuple, const uint16_t *base, vuint16mf4_t bindex, size_t vl) {
  return __riscv_vluxseg3ei16_v_u16mf4x3_tumu(mask, maskedoff_tuple, base, bindex, vl);
}

vuint16mf2x3_t test_vluxseg3ei16_v_u16mf2x3_tumu(vbool32_t mask, vuint16mf2x3_t maskedoff_tuple, const uint16_t *base, vuint16mf2_t bindex, size_t vl) {
  return __riscv_vluxseg3ei16_v_u16mf2x3_tumu(mask, maskedoff_tuple, base, bindex, vl);
}

vuint16m1x3_t test_vluxseg3ei16_v_u16m1x3_tumu(vbool16_t mask, vuint16m1x3_t maskedoff_tuple, const uint16_t *base, vuint16m1_t bindex, size_t vl) {
  return __riscv_vluxseg3ei16_v_u16m1x3_tumu(mask, maskedoff_tuple, base, bindex, vl);
}

vuint16m2x3_t test_vluxseg3ei16_v_u16m2x3_tumu(vbool8_t mask, vuint16m2x3_t maskedoff_tuple, const uint16_t *base, vuint16m2_t bindex, size_t vl) {
  return __riscv_vluxseg3ei16_v_u16m2x3_tumu(mask, maskedoff_tuple, base, bindex, vl);
}

vuint32mf2x3_t test_vluxseg3ei16_v_u32mf2x3_tumu(vbool64_t mask, vuint32mf2x3_t maskedoff_tuple, const uint32_t *base, vuint16mf4_t bindex, size_t vl) {
  return __riscv_vluxseg3ei16_v_u32mf2x3_tumu(mask, maskedoff_tuple, base, bindex, vl);
}

vuint32m1x3_t test_vluxseg3ei16_v_u32m1x3_tumu(vbool32_t mask, vuint32m1x3_t maskedoff_tuple, const uint32_t *base, vuint16mf2_t bindex, size_t vl) {
  return __riscv_vluxseg3ei16_v_u32m1x3_tumu(mask, maskedoff_tuple, base, bindex, vl);
}

vuint32m2x3_t test_vluxseg3ei16_v_u32m2x3_tumu(vbool16_t mask, vuint32m2x3_t maskedoff_tuple, const uint32_t *base, vuint16m1_t bindex, size_t vl) {
  return __riscv_vluxseg3ei16_v_u32m2x3_tumu(mask, maskedoff_tuple, base, bindex, vl);
}

vuint64m1x3_t test_vluxseg3ei16_v_u64m1x3_tumu(vbool64_t mask, vuint64m1x3_t maskedoff_tuple, const uint64_t *base, vuint16mf4_t bindex, size_t vl) {
  return __riscv_vluxseg3ei16_v_u64m1x3_tumu(mask, maskedoff_tuple, base, bindex, vl);
}

vuint64m2x3_t test_vluxseg3ei16_v_u64m2x3_tumu(vbool32_t mask, vuint64m2x3_t maskedoff_tuple, const uint64_t *base, vuint16mf2_t bindex, size_t vl) {
  return __riscv_vluxseg3ei16_v_u64m2x3_tumu(mask, maskedoff_tuple, base, bindex, vl);
}

vfloat16mf4x3_t test_vluxseg3ei16_v_f16mf4x3_mu(vbool64_t mask, vfloat16mf4x3_t maskedoff_tuple, const float16_t *base, vuint16mf4_t bindex, size_t vl) {
  return __riscv_vluxseg3ei16_v_f16mf4x3_mu(mask, maskedoff_tuple, base, bindex, vl);
}

vfloat16mf2x3_t test_vluxseg3ei16_v_f16mf2x3_mu(vbool32_t mask, vfloat16mf2x3_t maskedoff_tuple, const float16_t *base, vuint16mf2_t bindex, size_t vl) {
  return __riscv_vluxseg3ei16_v_f16mf2x3_mu(mask, maskedoff_tuple, base, bindex, vl);
}

vfloat16m1x3_t test_vluxseg3ei16_v_f16m1x3_mu(vbool16_t mask, vfloat16m1x3_t maskedoff_tuple, const float16_t *base, vuint16m1_t bindex, size_t vl) {
  return __riscv_vluxseg3ei16_v_f16m1x3_mu(mask, maskedoff_tuple, base, bindex, vl);
}

vfloat16m2x3_t test_vluxseg3ei16_v_f16m2x3_mu(vbool8_t mask, vfloat16m2x3_t maskedoff_tuple, const float16_t *base, vuint16m2_t bindex, size_t vl) {
  return __riscv_vluxseg3ei16_v_f16m2x3_mu(mask, maskedoff_tuple, base, bindex, vl);
}

vfloat32mf2x3_t test_vluxseg3ei16_v_f32mf2x3_mu(vbool64_t mask, vfloat32mf2x3_t maskedoff_tuple, const float32_t *base, vuint16mf4_t bindex, size_t vl) {
  return __riscv_vluxseg3ei16_v_f32mf2x3_mu(mask, maskedoff_tuple, base, bindex, vl);
}

vfloat32m1x3_t test_vluxseg3ei16_v_f32m1x3_mu(vbool32_t mask, vfloat32m1x3_t maskedoff_tuple, const float32_t *base, vuint16mf2_t bindex, size_t vl) {
  return __riscv_vluxseg3ei16_v_f32m1x3_mu(mask, maskedoff_tuple, base, bindex, vl);
}

vfloat32m2x3_t test_vluxseg3ei16_v_f32m2x3_mu(vbool16_t mask, vfloat32m2x3_t maskedoff_tuple, const float32_t *base, vuint16m1_t bindex, size_t vl) {
  return __riscv_vluxseg3ei16_v_f32m2x3_mu(mask, maskedoff_tuple, base, bindex, vl);
}

vfloat64m1x3_t test_vluxseg3ei16_v_f64m1x3_mu(vbool64_t mask, vfloat64m1x3_t maskedoff_tuple, const float64_t *base, vuint16mf4_t bindex, size_t vl) {
  return __riscv_vluxseg3ei16_v_f64m1x3_mu(mask, maskedoff_tuple, base, bindex, vl);
}

vfloat64m2x3_t test_vluxseg3ei16_v_f64m2x3_mu(vbool32_t mask, vfloat64m2x3_t maskedoff_tuple, const float64_t *base, vuint16mf2_t bindex, size_t vl) {
  return __riscv_vluxseg3ei16_v_f64m2x3_mu(mask, maskedoff_tuple, base, bindex, vl);
}

vint8mf8x3_t test_vluxseg3ei16_v_i8mf8x3_mu(vbool64_t mask, vint8mf8x3_t maskedoff_tuple, const int8_t *base, vuint16mf4_t bindex, size_t vl) {
  return __riscv_vluxseg3ei16_v_i8mf8x3_mu(mask, maskedoff_tuple, base, bindex, vl);
}

vint8mf4x3_t test_vluxseg3ei16_v_i8mf4x3_mu(vbool32_t mask, vint8mf4x3_t maskedoff_tuple, const int8_t *base, vuint16mf2_t bindex, size_t vl) {
  return __riscv_vluxseg3ei16_v_i8mf4x3_mu(mask, maskedoff_tuple, base, bindex, vl);
}

vint8mf2x3_t test_vluxseg3ei16_v_i8mf2x3_mu(vbool16_t mask, vint8mf2x3_t maskedoff_tuple, const int8_t *base, vuint16m1_t bindex, size_t vl) {
  return __riscv_vluxseg3ei16_v_i8mf2x3_mu(mask, maskedoff_tuple, base, bindex, vl);
}

vint8m1x3_t test_vluxseg3ei16_v_i8m1x3_mu(vbool8_t mask, vint8m1x3_t maskedoff_tuple, const int8_t *base, vuint16m2_t bindex, size_t vl) {
  return __riscv_vluxseg3ei16_v_i8m1x3_mu(mask, maskedoff_tuple, base, bindex, vl);
}

vint8m2x3_t test_vluxseg3ei16_v_i8m2x3_mu(vbool4_t mask, vint8m2x3_t maskedoff_tuple, const int8_t *base, vuint16m4_t bindex, size_t vl) {
  return __riscv_vluxseg3ei16_v_i8m2x3_mu(mask, maskedoff_tuple, base, bindex, vl);
}

vint16mf4x3_t test_vluxseg3ei16_v_i16mf4x3_mu(vbool64_t mask, vint16mf4x3_t maskedoff_tuple, const int16_t *base, vuint16mf4_t bindex, size_t vl) {
  return __riscv_vluxseg3ei16_v_i16mf4x3_mu(mask, maskedoff_tuple, base, bindex, vl);
}

vint16mf2x3_t test_vluxseg3ei16_v_i16mf2x3_mu(vbool32_t mask, vint16mf2x3_t maskedoff_tuple, const int16_t *base, vuint16mf2_t bindex, size_t vl) {
  return __riscv_vluxseg3ei16_v_i16mf2x3_mu(mask, maskedoff_tuple, base, bindex, vl);
}

vint16m1x3_t test_vluxseg3ei16_v_i16m1x3_mu(vbool16_t mask, vint16m1x3_t maskedoff_tuple, const int16_t *base, vuint16m1_t bindex, size_t vl) {
  return __riscv_vluxseg3ei16_v_i16m1x3_mu(mask, maskedoff_tuple, base, bindex, vl);
}

vint16m2x3_t test_vluxseg3ei16_v_i16m2x3_mu(vbool8_t mask, vint16m2x3_t maskedoff_tuple, const int16_t *base, vuint16m2_t bindex, size_t vl) {
  return __riscv_vluxseg3ei16_v_i16m2x3_mu(mask, maskedoff_tuple, base, bindex, vl);
}

vint32mf2x3_t test_vluxseg3ei16_v_i32mf2x3_mu(vbool64_t mask, vint32mf2x3_t maskedoff_tuple, const int32_t *base, vuint16mf4_t bindex, size_t vl) {
  return __riscv_vluxseg3ei16_v_i32mf2x3_mu(mask, maskedoff_tuple, base, bindex, vl);
}

vint32m1x3_t test_vluxseg3ei16_v_i32m1x3_mu(vbool32_t mask, vint32m1x3_t maskedoff_tuple, const int32_t *base, vuint16mf2_t bindex, size_t vl) {
  return __riscv_vluxseg3ei16_v_i32m1x3_mu(mask, maskedoff_tuple, base, bindex, vl);
}

vint32m2x3_t test_vluxseg3ei16_v_i32m2x3_mu(vbool16_t mask, vint32m2x3_t maskedoff_tuple, const int32_t *base, vuint16m1_t bindex, size_t vl) {
  return __riscv_vluxseg3ei16_v_i32m2x3_mu(mask, maskedoff_tuple, base, bindex, vl);
}

vint64m1x3_t test_vluxseg3ei16_v_i64m1x3_mu(vbool64_t mask, vint64m1x3_t maskedoff_tuple, const int64_t *base, vuint16mf4_t bindex, size_t vl) {
  return __riscv_vluxseg3ei16_v_i64m1x3_mu(mask, maskedoff_tuple, base, bindex, vl);
}

vint64m2x3_t test_vluxseg3ei16_v_i64m2x3_mu(vbool32_t mask, vint64m2x3_t maskedoff_tuple, const int64_t *base, vuint16mf2_t bindex, size_t vl) {
  return __riscv_vluxseg3ei16_v_i64m2x3_mu(mask, maskedoff_tuple, base, bindex, vl);
}

vuint8mf8x3_t test_vluxseg3ei16_v_u8mf8x3_mu(vbool64_t mask, vuint8mf8x3_t maskedoff_tuple, const uint8_t *base, vuint16mf4_t bindex, size_t vl) {
  return __riscv_vluxseg3ei16_v_u8mf8x3_mu(mask, maskedoff_tuple, base, bindex, vl);
}

vuint8mf4x3_t test_vluxseg3ei16_v_u8mf4x3_mu(vbool32_t mask, vuint8mf4x3_t maskedoff_tuple, const uint8_t *base, vuint16mf2_t bindex, size_t vl) {
  return __riscv_vluxseg3ei16_v_u8mf4x3_mu(mask, maskedoff_tuple, base, bindex, vl);
}

vuint8mf2x3_t test_vluxseg3ei16_v_u8mf2x3_mu(vbool16_t mask, vuint8mf2x3_t maskedoff_tuple, const uint8_t *base, vuint16m1_t bindex, size_t vl) {
  return __riscv_vluxseg3ei16_v_u8mf2x3_mu(mask, maskedoff_tuple, base, bindex, vl);
}

vuint8m1x3_t test_vluxseg3ei16_v_u8m1x3_mu(vbool8_t mask, vuint8m1x3_t maskedoff_tuple, const uint8_t *base, vuint16m2_t bindex, size_t vl) {
  return __riscv_vluxseg3ei16_v_u8m1x3_mu(mask, maskedoff_tuple, base, bindex, vl);
}

vuint8m2x3_t test_vluxseg3ei16_v_u8m2x3_mu(vbool4_t mask, vuint8m2x3_t maskedoff_tuple, const uint8_t *base, vuint16m4_t bindex, size_t vl) {
  return __riscv_vluxseg3ei16_v_u8m2x3_mu(mask, maskedoff_tuple, base, bindex, vl);
}

vuint16mf4x3_t test_vluxseg3ei16_v_u16mf4x3_mu(vbool64_t mask, vuint16mf4x3_t maskedoff_tuple, const uint16_t *base, vuint16mf4_t bindex, size_t vl) {
  return __riscv_vluxseg3ei16_v_u16mf4x3_mu(mask, maskedoff_tuple, base, bindex, vl);
}

vuint16mf2x3_t test_vluxseg3ei16_v_u16mf2x3_mu(vbool32_t mask, vuint16mf2x3_t maskedoff_tuple, const uint16_t *base, vuint16mf2_t bindex, size_t vl) {
  return __riscv_vluxseg3ei16_v_u16mf2x3_mu(mask, maskedoff_tuple, base, bindex, vl);
}

vuint16m1x3_t test_vluxseg3ei16_v_u16m1x3_mu(vbool16_t mask, vuint16m1x3_t maskedoff_tuple, const uint16_t *base, vuint16m1_t bindex, size_t vl) {
  return __riscv_vluxseg3ei16_v_u16m1x3_mu(mask, maskedoff_tuple, base, bindex, vl);
}

vuint16m2x3_t test_vluxseg3ei16_v_u16m2x3_mu(vbool8_t mask, vuint16m2x3_t maskedoff_tuple, const uint16_t *base, vuint16m2_t bindex, size_t vl) {
  return __riscv_vluxseg3ei16_v_u16m2x3_mu(mask, maskedoff_tuple, base, bindex, vl);
}

vuint32mf2x3_t test_vluxseg3ei16_v_u32mf2x3_mu(vbool64_t mask, vuint32mf2x3_t maskedoff_tuple, const uint32_t *base, vuint16mf4_t bindex, size_t vl) {
  return __riscv_vluxseg3ei16_v_u32mf2x3_mu(mask, maskedoff_tuple, base, bindex, vl);
}

vuint32m1x3_t test_vluxseg3ei16_v_u32m1x3_mu(vbool32_t mask, vuint32m1x3_t maskedoff_tuple, const uint32_t *base, vuint16mf2_t bindex, size_t vl) {
  return __riscv_vluxseg3ei16_v_u32m1x3_mu(mask, maskedoff_tuple, base, bindex, vl);
}

vuint32m2x3_t test_vluxseg3ei16_v_u32m2x3_mu(vbool16_t mask, vuint32m2x3_t maskedoff_tuple, const uint32_t *base, vuint16m1_t bindex, size_t vl) {
  return __riscv_vluxseg3ei16_v_u32m2x3_mu(mask, maskedoff_tuple, base, bindex, vl);
}

vuint64m1x3_t test_vluxseg3ei16_v_u64m1x3_mu(vbool64_t mask, vuint64m1x3_t maskedoff_tuple, const uint64_t *base, vuint16mf4_t bindex, size_t vl) {
  return __riscv_vluxseg3ei16_v_u64m1x3_mu(mask, maskedoff_tuple, base, bindex, vl);
}

vuint64m2x3_t test_vluxseg3ei16_v_u64m2x3_mu(vbool32_t mask, vuint64m2x3_t maskedoff_tuple, const uint64_t *base, vuint16mf2_t bindex, size_t vl) {
  return __riscv_vluxseg3ei16_v_u64m2x3_mu(mask, maskedoff_tuple, base, bindex, vl);
}

/* { dg-final { scan-assembler-times {vseti?vli\s+[a-z0-9]+,\s*[a-z0-9]+,\s*e[0-9]+,\s*mf?[1248],\s*t[au],\s*m[au]\s+vluxseg3ei16\.[ivxfswum.]+\s+} 148 } } */
