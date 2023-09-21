/* { dg-do compile } */
/* { dg-options "-march=rv64gcv_zvfh -mabi=lp64d -Wno-psabi -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
vfloat16mf4x2_t test_vloxseg2ei64_v_f16mf4x2(const float16_t *base, vuint64m1_t bindex, size_t vl) {
  return __riscv_vloxseg2ei64(base, bindex, vl);
}

vfloat16mf2x2_t test_vloxseg2ei64_v_f16mf2x2(const float16_t *base, vuint64m2_t bindex, size_t vl) {
  return __riscv_vloxseg2ei64(base, bindex, vl);
}

vfloat16m1x2_t test_vloxseg2ei64_v_f16m1x2(const float16_t *base, vuint64m4_t bindex, size_t vl) {
  return __riscv_vloxseg2ei64(base, bindex, vl);
}

vfloat16m2x2_t test_vloxseg2ei64_v_f16m2x2(const float16_t *base, vuint64m8_t bindex, size_t vl) {
  return __riscv_vloxseg2ei64(base, bindex, vl);
}

vfloat32mf2x2_t test_vloxseg2ei64_v_f32mf2x2(const float32_t *base, vuint64m1_t bindex, size_t vl) {
  return __riscv_vloxseg2ei64(base, bindex, vl);
}

vfloat32m1x2_t test_vloxseg2ei64_v_f32m1x2(const float32_t *base, vuint64m2_t bindex, size_t vl) {
  return __riscv_vloxseg2ei64(base, bindex, vl);
}

vfloat32m2x2_t test_vloxseg2ei64_v_f32m2x2(const float32_t *base, vuint64m4_t bindex, size_t vl) {
  return __riscv_vloxseg2ei64(base, bindex, vl);
}

vfloat32m4x2_t test_vloxseg2ei64_v_f32m4x2(const float32_t *base, vuint64m8_t bindex, size_t vl) {
  return __riscv_vloxseg2ei64(base, bindex, vl);
}

vfloat64m1x2_t test_vloxseg2ei64_v_f64m1x2(const float64_t *base, vuint64m1_t bindex, size_t vl) {
  return __riscv_vloxseg2ei64(base, bindex, vl);
}

vfloat64m2x2_t test_vloxseg2ei64_v_f64m2x2(const float64_t *base, vuint64m2_t bindex, size_t vl) {
  return __riscv_vloxseg2ei64(base, bindex, vl);
}

vfloat64m4x2_t test_vloxseg2ei64_v_f64m4x2(const float64_t *base, vuint64m4_t bindex, size_t vl) {
  return __riscv_vloxseg2ei64(base, bindex, vl);
}

vint8mf8x2_t test_vloxseg2ei64_v_i8mf8x2(const int8_t *base, vuint64m1_t bindex, size_t vl) {
  return __riscv_vloxseg2ei64(base, bindex, vl);
}

vint8mf4x2_t test_vloxseg2ei64_v_i8mf4x2(const int8_t *base, vuint64m2_t bindex, size_t vl) {
  return __riscv_vloxseg2ei64(base, bindex, vl);
}

vint8mf2x2_t test_vloxseg2ei64_v_i8mf2x2(const int8_t *base, vuint64m4_t bindex, size_t vl) {
  return __riscv_vloxseg2ei64(base, bindex, vl);
}

vint8m1x2_t test_vloxseg2ei64_v_i8m1x2(const int8_t *base, vuint64m8_t bindex, size_t vl) {
  return __riscv_vloxseg2ei64(base, bindex, vl);
}

vint16mf4x2_t test_vloxseg2ei64_v_i16mf4x2(const int16_t *base, vuint64m1_t bindex, size_t vl) {
  return __riscv_vloxseg2ei64(base, bindex, vl);
}

vint16mf2x2_t test_vloxseg2ei64_v_i16mf2x2(const int16_t *base, vuint64m2_t bindex, size_t vl) {
  return __riscv_vloxseg2ei64(base, bindex, vl);
}

vint16m1x2_t test_vloxseg2ei64_v_i16m1x2(const int16_t *base, vuint64m4_t bindex, size_t vl) {
  return __riscv_vloxseg2ei64(base, bindex, vl);
}

vint16m2x2_t test_vloxseg2ei64_v_i16m2x2(const int16_t *base, vuint64m8_t bindex, size_t vl) {
  return __riscv_vloxseg2ei64(base, bindex, vl);
}

vint32mf2x2_t test_vloxseg2ei64_v_i32mf2x2(const int32_t *base, vuint64m1_t bindex, size_t vl) {
  return __riscv_vloxseg2ei64(base, bindex, vl);
}

vint32m1x2_t test_vloxseg2ei64_v_i32m1x2(const int32_t *base, vuint64m2_t bindex, size_t vl) {
  return __riscv_vloxseg2ei64(base, bindex, vl);
}

vint32m2x2_t test_vloxseg2ei64_v_i32m2x2(const int32_t *base, vuint64m4_t bindex, size_t vl) {
  return __riscv_vloxseg2ei64(base, bindex, vl);
}

vint32m4x2_t test_vloxseg2ei64_v_i32m4x2(const int32_t *base, vuint64m8_t bindex, size_t vl) {
  return __riscv_vloxseg2ei64(base, bindex, vl);
}

vint64m1x2_t test_vloxseg2ei64_v_i64m1x2(const int64_t *base, vuint64m1_t bindex, size_t vl) {
  return __riscv_vloxseg2ei64(base, bindex, vl);
}

vint64m2x2_t test_vloxseg2ei64_v_i64m2x2(const int64_t *base, vuint64m2_t bindex, size_t vl) {
  return __riscv_vloxseg2ei64(base, bindex, vl);
}

vint64m4x2_t test_vloxseg2ei64_v_i64m4x2(const int64_t *base, vuint64m4_t bindex, size_t vl) {
  return __riscv_vloxseg2ei64(base, bindex, vl);
}

vuint8mf8x2_t test_vloxseg2ei64_v_u8mf8x2(const uint8_t *base, vuint64m1_t bindex, size_t vl) {
  return __riscv_vloxseg2ei64(base, bindex, vl);
}

vuint8mf4x2_t test_vloxseg2ei64_v_u8mf4x2(const uint8_t *base, vuint64m2_t bindex, size_t vl) {
  return __riscv_vloxseg2ei64(base, bindex, vl);
}

vuint8mf2x2_t test_vloxseg2ei64_v_u8mf2x2(const uint8_t *base, vuint64m4_t bindex, size_t vl) {
  return __riscv_vloxseg2ei64(base, bindex, vl);
}

vuint8m1x2_t test_vloxseg2ei64_v_u8m1x2(const uint8_t *base, vuint64m8_t bindex, size_t vl) {
  return __riscv_vloxseg2ei64(base, bindex, vl);
}

vuint16mf4x2_t test_vloxseg2ei64_v_u16mf4x2(const uint16_t *base, vuint64m1_t bindex, size_t vl) {
  return __riscv_vloxseg2ei64(base, bindex, vl);
}

vuint16mf2x2_t test_vloxseg2ei64_v_u16mf2x2(const uint16_t *base, vuint64m2_t bindex, size_t vl) {
  return __riscv_vloxseg2ei64(base, bindex, vl);
}

vuint16m1x2_t test_vloxseg2ei64_v_u16m1x2(const uint16_t *base, vuint64m4_t bindex, size_t vl) {
  return __riscv_vloxseg2ei64(base, bindex, vl);
}

vuint16m2x2_t test_vloxseg2ei64_v_u16m2x2(const uint16_t *base, vuint64m8_t bindex, size_t vl) {
  return __riscv_vloxseg2ei64(base, bindex, vl);
}

vuint32mf2x2_t test_vloxseg2ei64_v_u32mf2x2(const uint32_t *base, vuint64m1_t bindex, size_t vl) {
  return __riscv_vloxseg2ei64(base, bindex, vl);
}

vuint32m1x2_t test_vloxseg2ei64_v_u32m1x2(const uint32_t *base, vuint64m2_t bindex, size_t vl) {
  return __riscv_vloxseg2ei64(base, bindex, vl);
}

vuint32m2x2_t test_vloxseg2ei64_v_u32m2x2(const uint32_t *base, vuint64m4_t bindex, size_t vl) {
  return __riscv_vloxseg2ei64(base, bindex, vl);
}

vuint32m4x2_t test_vloxseg2ei64_v_u32m4x2(const uint32_t *base, vuint64m8_t bindex, size_t vl) {
  return __riscv_vloxseg2ei64(base, bindex, vl);
}

vuint64m1x2_t test_vloxseg2ei64_v_u64m1x2(const uint64_t *base, vuint64m1_t bindex, size_t vl) {
  return __riscv_vloxseg2ei64(base, bindex, vl);
}

vuint64m2x2_t test_vloxseg2ei64_v_u64m2x2(const uint64_t *base, vuint64m2_t bindex, size_t vl) {
  return __riscv_vloxseg2ei64(base, bindex, vl);
}

vuint64m4x2_t test_vloxseg2ei64_v_u64m4x2(const uint64_t *base, vuint64m4_t bindex, size_t vl) {
  return __riscv_vloxseg2ei64(base, bindex, vl);
}

vfloat16mf4x2_t test_vloxseg2ei64_v_f16mf4x2_m(vbool64_t mask, const float16_t *base, vuint64m1_t bindex, size_t vl) {
  return __riscv_vloxseg2ei64(mask, base, bindex, vl);
}

vfloat16mf2x2_t test_vloxseg2ei64_v_f16mf2x2_m(vbool32_t mask, const float16_t *base, vuint64m2_t bindex, size_t vl) {
  return __riscv_vloxseg2ei64(mask, base, bindex, vl);
}

vfloat16m1x2_t test_vloxseg2ei64_v_f16m1x2_m(vbool16_t mask, const float16_t *base, vuint64m4_t bindex, size_t vl) {
  return __riscv_vloxseg2ei64(mask, base, bindex, vl);
}

vfloat16m2x2_t test_vloxseg2ei64_v_f16m2x2_m(vbool8_t mask, const float16_t *base, vuint64m8_t bindex, size_t vl) {
  return __riscv_vloxseg2ei64(mask, base, bindex, vl);
}

vfloat32mf2x2_t test_vloxseg2ei64_v_f32mf2x2_m(vbool64_t mask, const float32_t *base, vuint64m1_t bindex, size_t vl) {
  return __riscv_vloxseg2ei64(mask, base, bindex, vl);
}

vfloat32m1x2_t test_vloxseg2ei64_v_f32m1x2_m(vbool32_t mask, const float32_t *base, vuint64m2_t bindex, size_t vl) {
  return __riscv_vloxseg2ei64(mask, base, bindex, vl);
}

vfloat32m2x2_t test_vloxseg2ei64_v_f32m2x2_m(vbool16_t mask, const float32_t *base, vuint64m4_t bindex, size_t vl) {
  return __riscv_vloxseg2ei64(mask, base, bindex, vl);
}

vfloat32m4x2_t test_vloxseg2ei64_v_f32m4x2_m(vbool8_t mask, const float32_t *base, vuint64m8_t bindex, size_t vl) {
  return __riscv_vloxseg2ei64(mask, base, bindex, vl);
}

vfloat64m1x2_t test_vloxseg2ei64_v_f64m1x2_m(vbool64_t mask, const float64_t *base, vuint64m1_t bindex, size_t vl) {
  return __riscv_vloxseg2ei64(mask, base, bindex, vl);
}

vfloat64m2x2_t test_vloxseg2ei64_v_f64m2x2_m(vbool32_t mask, const float64_t *base, vuint64m2_t bindex, size_t vl) {
  return __riscv_vloxseg2ei64(mask, base, bindex, vl);
}

vfloat64m4x2_t test_vloxseg2ei64_v_f64m4x2_m(vbool16_t mask, const float64_t *base, vuint64m4_t bindex, size_t vl) {
  return __riscv_vloxseg2ei64(mask, base, bindex, vl);
}

vint8mf8x2_t test_vloxseg2ei64_v_i8mf8x2_m(vbool64_t mask, const int8_t *base, vuint64m1_t bindex, size_t vl) {
  return __riscv_vloxseg2ei64(mask, base, bindex, vl);
}

vint8mf4x2_t test_vloxseg2ei64_v_i8mf4x2_m(vbool32_t mask, const int8_t *base, vuint64m2_t bindex, size_t vl) {
  return __riscv_vloxseg2ei64(mask, base, bindex, vl);
}

vint8mf2x2_t test_vloxseg2ei64_v_i8mf2x2_m(vbool16_t mask, const int8_t *base, vuint64m4_t bindex, size_t vl) {
  return __riscv_vloxseg2ei64(mask, base, bindex, vl);
}

vint8m1x2_t test_vloxseg2ei64_v_i8m1x2_m(vbool8_t mask, const int8_t *base, vuint64m8_t bindex, size_t vl) {
  return __riscv_vloxseg2ei64(mask, base, bindex, vl);
}

vint16mf4x2_t test_vloxseg2ei64_v_i16mf4x2_m(vbool64_t mask, const int16_t *base, vuint64m1_t bindex, size_t vl) {
  return __riscv_vloxseg2ei64(mask, base, bindex, vl);
}

vint16mf2x2_t test_vloxseg2ei64_v_i16mf2x2_m(vbool32_t mask, const int16_t *base, vuint64m2_t bindex, size_t vl) {
  return __riscv_vloxseg2ei64(mask, base, bindex, vl);
}

vint16m1x2_t test_vloxseg2ei64_v_i16m1x2_m(vbool16_t mask, const int16_t *base, vuint64m4_t bindex, size_t vl) {
  return __riscv_vloxseg2ei64(mask, base, bindex, vl);
}

vint16m2x2_t test_vloxseg2ei64_v_i16m2x2_m(vbool8_t mask, const int16_t *base, vuint64m8_t bindex, size_t vl) {
  return __riscv_vloxseg2ei64(mask, base, bindex, vl);
}

vint32mf2x2_t test_vloxseg2ei64_v_i32mf2x2_m(vbool64_t mask, const int32_t *base, vuint64m1_t bindex, size_t vl) {
  return __riscv_vloxseg2ei64(mask, base, bindex, vl);
}

vint32m1x2_t test_vloxseg2ei64_v_i32m1x2_m(vbool32_t mask, const int32_t *base, vuint64m2_t bindex, size_t vl) {
  return __riscv_vloxseg2ei64(mask, base, bindex, vl);
}

vint32m2x2_t test_vloxseg2ei64_v_i32m2x2_m(vbool16_t mask, const int32_t *base, vuint64m4_t bindex, size_t vl) {
  return __riscv_vloxseg2ei64(mask, base, bindex, vl);
}

vint32m4x2_t test_vloxseg2ei64_v_i32m4x2_m(vbool8_t mask, const int32_t *base, vuint64m8_t bindex, size_t vl) {
  return __riscv_vloxseg2ei64(mask, base, bindex, vl);
}

vint64m1x2_t test_vloxseg2ei64_v_i64m1x2_m(vbool64_t mask, const int64_t *base, vuint64m1_t bindex, size_t vl) {
  return __riscv_vloxseg2ei64(mask, base, bindex, vl);
}

vint64m2x2_t test_vloxseg2ei64_v_i64m2x2_m(vbool32_t mask, const int64_t *base, vuint64m2_t bindex, size_t vl) {
  return __riscv_vloxseg2ei64(mask, base, bindex, vl);
}

vint64m4x2_t test_vloxseg2ei64_v_i64m4x2_m(vbool16_t mask, const int64_t *base, vuint64m4_t bindex, size_t vl) {
  return __riscv_vloxseg2ei64(mask, base, bindex, vl);
}

vuint8mf8x2_t test_vloxseg2ei64_v_u8mf8x2_m(vbool64_t mask, const uint8_t *base, vuint64m1_t bindex, size_t vl) {
  return __riscv_vloxseg2ei64(mask, base, bindex, vl);
}

vuint8mf4x2_t test_vloxseg2ei64_v_u8mf4x2_m(vbool32_t mask, const uint8_t *base, vuint64m2_t bindex, size_t vl) {
  return __riscv_vloxseg2ei64(mask, base, bindex, vl);
}

vuint8mf2x2_t test_vloxseg2ei64_v_u8mf2x2_m(vbool16_t mask, const uint8_t *base, vuint64m4_t bindex, size_t vl) {
  return __riscv_vloxseg2ei64(mask, base, bindex, vl);
}

vuint8m1x2_t test_vloxseg2ei64_v_u8m1x2_m(vbool8_t mask, const uint8_t *base, vuint64m8_t bindex, size_t vl) {
  return __riscv_vloxseg2ei64(mask, base, bindex, vl);
}

vuint16mf4x2_t test_vloxseg2ei64_v_u16mf4x2_m(vbool64_t mask, const uint16_t *base, vuint64m1_t bindex, size_t vl) {
  return __riscv_vloxseg2ei64(mask, base, bindex, vl);
}

vuint16mf2x2_t test_vloxseg2ei64_v_u16mf2x2_m(vbool32_t mask, const uint16_t *base, vuint64m2_t bindex, size_t vl) {
  return __riscv_vloxseg2ei64(mask, base, bindex, vl);
}

vuint16m1x2_t test_vloxseg2ei64_v_u16m1x2_m(vbool16_t mask, const uint16_t *base, vuint64m4_t bindex, size_t vl) {
  return __riscv_vloxseg2ei64(mask, base, bindex, vl);
}

vuint16m2x2_t test_vloxseg2ei64_v_u16m2x2_m(vbool8_t mask, const uint16_t *base, vuint64m8_t bindex, size_t vl) {
  return __riscv_vloxseg2ei64(mask, base, bindex, vl);
}

vuint32mf2x2_t test_vloxseg2ei64_v_u32mf2x2_m(vbool64_t mask, const uint32_t *base, vuint64m1_t bindex, size_t vl) {
  return __riscv_vloxseg2ei64(mask, base, bindex, vl);
}

vuint32m1x2_t test_vloxseg2ei64_v_u32m1x2_m(vbool32_t mask, const uint32_t *base, vuint64m2_t bindex, size_t vl) {
  return __riscv_vloxseg2ei64(mask, base, bindex, vl);
}

vuint32m2x2_t test_vloxseg2ei64_v_u32m2x2_m(vbool16_t mask, const uint32_t *base, vuint64m4_t bindex, size_t vl) {
  return __riscv_vloxseg2ei64(mask, base, bindex, vl);
}

vuint32m4x2_t test_vloxseg2ei64_v_u32m4x2_m(vbool8_t mask, const uint32_t *base, vuint64m8_t bindex, size_t vl) {
  return __riscv_vloxseg2ei64(mask, base, bindex, vl);
}

vuint64m1x2_t test_vloxseg2ei64_v_u64m1x2_m(vbool64_t mask, const uint64_t *base, vuint64m1_t bindex, size_t vl) {
  return __riscv_vloxseg2ei64(mask, base, bindex, vl);
}

vuint64m2x2_t test_vloxseg2ei64_v_u64m2x2_m(vbool32_t mask, const uint64_t *base, vuint64m2_t bindex, size_t vl) {
  return __riscv_vloxseg2ei64(mask, base, bindex, vl);
}

vuint64m4x2_t test_vloxseg2ei64_v_u64m4x2_m(vbool16_t mask, const uint64_t *base, vuint64m4_t bindex, size_t vl) {
  return __riscv_vloxseg2ei64(mask, base, bindex, vl);
}

