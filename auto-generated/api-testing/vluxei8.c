#include <stdint.h>
#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
vfloat16mf4_t test_vluxei8_v_f16mf4(const float16_t *base, vuint8mf8_t bindex, size_t vl) {
  return vluxei8_v_f16mf4(base, bindex, vl);
}

vfloat16mf2_t test_vluxei8_v_f16mf2(const float16_t *base, vuint8mf4_t bindex, size_t vl) {
  return vluxei8_v_f16mf2(base, bindex, vl);
}

vfloat16m1_t test_vluxei8_v_f16m1(const float16_t *base, vuint8mf2_t bindex, size_t vl) {
  return vluxei8_v_f16m1(base, bindex, vl);
}

vfloat16m2_t test_vluxei8_v_f16m2(const float16_t *base, vuint8m1_t bindex, size_t vl) {
  return vluxei8_v_f16m2(base, bindex, vl);
}

vfloat16m4_t test_vluxei8_v_f16m4(const float16_t *base, vuint8m2_t bindex, size_t vl) {
  return vluxei8_v_f16m4(base, bindex, vl);
}

vfloat16m8_t test_vluxei8_v_f16m8(const float16_t *base, vuint8m4_t bindex, size_t vl) {
  return vluxei8_v_f16m8(base, bindex, vl);
}

vfloat32mf2_t test_vluxei8_v_f32mf2(const float32_t *base, vuint8mf8_t bindex, size_t vl) {
  return vluxei8_v_f32mf2(base, bindex, vl);
}

vfloat32m1_t test_vluxei8_v_f32m1(const float32_t *base, vuint8mf4_t bindex, size_t vl) {
  return vluxei8_v_f32m1(base, bindex, vl);
}

vfloat32m2_t test_vluxei8_v_f32m2(const float32_t *base, vuint8mf2_t bindex, size_t vl) {
  return vluxei8_v_f32m2(base, bindex, vl);
}

vfloat32m4_t test_vluxei8_v_f32m4(const float32_t *base, vuint8m1_t bindex, size_t vl) {
  return vluxei8_v_f32m4(base, bindex, vl);
}

vfloat32m8_t test_vluxei8_v_f32m8(const float32_t *base, vuint8m2_t bindex, size_t vl) {
  return vluxei8_v_f32m8(base, bindex, vl);
}

vfloat64m1_t test_vluxei8_v_f64m1(const float64_t *base, vuint8mf8_t bindex, size_t vl) {
  return vluxei8_v_f64m1(base, bindex, vl);
}

vfloat64m2_t test_vluxei8_v_f64m2(const float64_t *base, vuint8mf4_t bindex, size_t vl) {
  return vluxei8_v_f64m2(base, bindex, vl);
}

vfloat64m4_t test_vluxei8_v_f64m4(const float64_t *base, vuint8mf2_t bindex, size_t vl) {
  return vluxei8_v_f64m4(base, bindex, vl);
}

vfloat64m8_t test_vluxei8_v_f64m8(const float64_t *base, vuint8m1_t bindex, size_t vl) {
  return vluxei8_v_f64m8(base, bindex, vl);
}

vint8mf8_t test_vluxei8_v_i8mf8(const int8_t *base, vuint8mf8_t bindex, size_t vl) {
  return vluxei8_v_i8mf8(base, bindex, vl);
}

vint8mf4_t test_vluxei8_v_i8mf4(const int8_t *base, vuint8mf4_t bindex, size_t vl) {
  return vluxei8_v_i8mf4(base, bindex, vl);
}

vint8mf2_t test_vluxei8_v_i8mf2(const int8_t *base, vuint8mf2_t bindex, size_t vl) {
  return vluxei8_v_i8mf2(base, bindex, vl);
}

vint8m1_t test_vluxei8_v_i8m1(const int8_t *base, vuint8m1_t bindex, size_t vl) {
  return vluxei8_v_i8m1(base, bindex, vl);
}

vint8m2_t test_vluxei8_v_i8m2(const int8_t *base, vuint8m2_t bindex, size_t vl) {
  return vluxei8_v_i8m2(base, bindex, vl);
}

vint8m4_t test_vluxei8_v_i8m4(const int8_t *base, vuint8m4_t bindex, size_t vl) {
  return vluxei8_v_i8m4(base, bindex, vl);
}

vint8m8_t test_vluxei8_v_i8m8(const int8_t *base, vuint8m8_t bindex, size_t vl) {
  return vluxei8_v_i8m8(base, bindex, vl);
}

vint16mf4_t test_vluxei8_v_i16mf4(const int16_t *base, vuint8mf8_t bindex, size_t vl) {
  return vluxei8_v_i16mf4(base, bindex, vl);
}

vint16mf2_t test_vluxei8_v_i16mf2(const int16_t *base, vuint8mf4_t bindex, size_t vl) {
  return vluxei8_v_i16mf2(base, bindex, vl);
}

vint16m1_t test_vluxei8_v_i16m1(const int16_t *base, vuint8mf2_t bindex, size_t vl) {
  return vluxei8_v_i16m1(base, bindex, vl);
}

vint16m2_t test_vluxei8_v_i16m2(const int16_t *base, vuint8m1_t bindex, size_t vl) {
  return vluxei8_v_i16m2(base, bindex, vl);
}

vint16m4_t test_vluxei8_v_i16m4(const int16_t *base, vuint8m2_t bindex, size_t vl) {
  return vluxei8_v_i16m4(base, bindex, vl);
}

vint16m8_t test_vluxei8_v_i16m8(const int16_t *base, vuint8m4_t bindex, size_t vl) {
  return vluxei8_v_i16m8(base, bindex, vl);
}

vint32mf2_t test_vluxei8_v_i32mf2(const int32_t *base, vuint8mf8_t bindex, size_t vl) {
  return vluxei8_v_i32mf2(base, bindex, vl);
}

vint32m1_t test_vluxei8_v_i32m1(const int32_t *base, vuint8mf4_t bindex, size_t vl) {
  return vluxei8_v_i32m1(base, bindex, vl);
}

vint32m2_t test_vluxei8_v_i32m2(const int32_t *base, vuint8mf2_t bindex, size_t vl) {
  return vluxei8_v_i32m2(base, bindex, vl);
}

vint32m4_t test_vluxei8_v_i32m4(const int32_t *base, vuint8m1_t bindex, size_t vl) {
  return vluxei8_v_i32m4(base, bindex, vl);
}

vint32m8_t test_vluxei8_v_i32m8(const int32_t *base, vuint8m2_t bindex, size_t vl) {
  return vluxei8_v_i32m8(base, bindex, vl);
}

vint64m1_t test_vluxei8_v_i64m1(const int64_t *base, vuint8mf8_t bindex, size_t vl) {
  return vluxei8_v_i64m1(base, bindex, vl);
}

vint64m2_t test_vluxei8_v_i64m2(const int64_t *base, vuint8mf4_t bindex, size_t vl) {
  return vluxei8_v_i64m2(base, bindex, vl);
}

vint64m4_t test_vluxei8_v_i64m4(const int64_t *base, vuint8mf2_t bindex, size_t vl) {
  return vluxei8_v_i64m4(base, bindex, vl);
}

vint64m8_t test_vluxei8_v_i64m8(const int64_t *base, vuint8m1_t bindex, size_t vl) {
  return vluxei8_v_i64m8(base, bindex, vl);
}

vuint8mf8_t test_vluxei8_v_u8mf8(const uint8_t *base, vuint8mf8_t bindex, size_t vl) {
  return vluxei8_v_u8mf8(base, bindex, vl);
}

vuint8mf4_t test_vluxei8_v_u8mf4(const uint8_t *base, vuint8mf4_t bindex, size_t vl) {
  return vluxei8_v_u8mf4(base, bindex, vl);
}

vuint8mf2_t test_vluxei8_v_u8mf2(const uint8_t *base, vuint8mf2_t bindex, size_t vl) {
  return vluxei8_v_u8mf2(base, bindex, vl);
}

vuint8m1_t test_vluxei8_v_u8m1(const uint8_t *base, vuint8m1_t bindex, size_t vl) {
  return vluxei8_v_u8m1(base, bindex, vl);
}

vuint8m2_t test_vluxei8_v_u8m2(const uint8_t *base, vuint8m2_t bindex, size_t vl) {
  return vluxei8_v_u8m2(base, bindex, vl);
}

vuint8m4_t test_vluxei8_v_u8m4(const uint8_t *base, vuint8m4_t bindex, size_t vl) {
  return vluxei8_v_u8m4(base, bindex, vl);
}

vuint8m8_t test_vluxei8_v_u8m8(const uint8_t *base, vuint8m8_t bindex, size_t vl) {
  return vluxei8_v_u8m8(base, bindex, vl);
}

vuint16mf4_t test_vluxei8_v_u16mf4(const uint16_t *base, vuint8mf8_t bindex, size_t vl) {
  return vluxei8_v_u16mf4(base, bindex, vl);
}

vuint16mf2_t test_vluxei8_v_u16mf2(const uint16_t *base, vuint8mf4_t bindex, size_t vl) {
  return vluxei8_v_u16mf2(base, bindex, vl);
}

vuint16m1_t test_vluxei8_v_u16m1(const uint16_t *base, vuint8mf2_t bindex, size_t vl) {
  return vluxei8_v_u16m1(base, bindex, vl);
}

vuint16m2_t test_vluxei8_v_u16m2(const uint16_t *base, vuint8m1_t bindex, size_t vl) {
  return vluxei8_v_u16m2(base, bindex, vl);
}

vuint16m4_t test_vluxei8_v_u16m4(const uint16_t *base, vuint8m2_t bindex, size_t vl) {
  return vluxei8_v_u16m4(base, bindex, vl);
}

vuint16m8_t test_vluxei8_v_u16m8(const uint16_t *base, vuint8m4_t bindex, size_t vl) {
  return vluxei8_v_u16m8(base, bindex, vl);
}

vuint32mf2_t test_vluxei8_v_u32mf2(const uint32_t *base, vuint8mf8_t bindex, size_t vl) {
  return vluxei8_v_u32mf2(base, bindex, vl);
}

vuint32m1_t test_vluxei8_v_u32m1(const uint32_t *base, vuint8mf4_t bindex, size_t vl) {
  return vluxei8_v_u32m1(base, bindex, vl);
}

vuint32m2_t test_vluxei8_v_u32m2(const uint32_t *base, vuint8mf2_t bindex, size_t vl) {
  return vluxei8_v_u32m2(base, bindex, vl);
}

vuint32m4_t test_vluxei8_v_u32m4(const uint32_t *base, vuint8m1_t bindex, size_t vl) {
  return vluxei8_v_u32m4(base, bindex, vl);
}

vuint32m8_t test_vluxei8_v_u32m8(const uint32_t *base, vuint8m2_t bindex, size_t vl) {
  return vluxei8_v_u32m8(base, bindex, vl);
}

vuint64m1_t test_vluxei8_v_u64m1(const uint64_t *base, vuint8mf8_t bindex, size_t vl) {
  return vluxei8_v_u64m1(base, bindex, vl);
}

vuint64m2_t test_vluxei8_v_u64m2(const uint64_t *base, vuint8mf4_t bindex, size_t vl) {
  return vluxei8_v_u64m2(base, bindex, vl);
}

vuint64m4_t test_vluxei8_v_u64m4(const uint64_t *base, vuint8mf2_t bindex, size_t vl) {
  return vluxei8_v_u64m4(base, bindex, vl);
}

vuint64m8_t test_vluxei8_v_u64m8(const uint64_t *base, vuint8m1_t bindex, size_t vl) {
  return vluxei8_v_u64m8(base, bindex, vl);
}

vfloat16mf4_t test_vluxei8_v_f16mf4_m(vbool64_t mask, const float16_t *base, vuint8mf8_t bindex, size_t vl) {
  return vluxei8_v_f16mf4_m(mask, base, bindex, vl);
}

vfloat16mf2_t test_vluxei8_v_f16mf2_m(vbool32_t mask, const float16_t *base, vuint8mf4_t bindex, size_t vl) {
  return vluxei8_v_f16mf2_m(mask, base, bindex, vl);
}

vfloat16m1_t test_vluxei8_v_f16m1_m(vbool16_t mask, const float16_t *base, vuint8mf2_t bindex, size_t vl) {
  return vluxei8_v_f16m1_m(mask, base, bindex, vl);
}

vfloat16m2_t test_vluxei8_v_f16m2_m(vbool8_t mask, const float16_t *base, vuint8m1_t bindex, size_t vl) {
  return vluxei8_v_f16m2_m(mask, base, bindex, vl);
}

vfloat16m4_t test_vluxei8_v_f16m4_m(vbool4_t mask, const float16_t *base, vuint8m2_t bindex, size_t vl) {
  return vluxei8_v_f16m4_m(mask, base, bindex, vl);
}

vfloat16m8_t test_vluxei8_v_f16m8_m(vbool2_t mask, const float16_t *base, vuint8m4_t bindex, size_t vl) {
  return vluxei8_v_f16m8_m(mask, base, bindex, vl);
}

vfloat32mf2_t test_vluxei8_v_f32mf2_m(vbool64_t mask, const float32_t *base, vuint8mf8_t bindex, size_t vl) {
  return vluxei8_v_f32mf2_m(mask, base, bindex, vl);
}

vfloat32m1_t test_vluxei8_v_f32m1_m(vbool32_t mask, const float32_t *base, vuint8mf4_t bindex, size_t vl) {
  return vluxei8_v_f32m1_m(mask, base, bindex, vl);
}

vfloat32m2_t test_vluxei8_v_f32m2_m(vbool16_t mask, const float32_t *base, vuint8mf2_t bindex, size_t vl) {
  return vluxei8_v_f32m2_m(mask, base, bindex, vl);
}

vfloat32m4_t test_vluxei8_v_f32m4_m(vbool8_t mask, const float32_t *base, vuint8m1_t bindex, size_t vl) {
  return vluxei8_v_f32m4_m(mask, base, bindex, vl);
}

vfloat32m8_t test_vluxei8_v_f32m8_m(vbool4_t mask, const float32_t *base, vuint8m2_t bindex, size_t vl) {
  return vluxei8_v_f32m8_m(mask, base, bindex, vl);
}

vfloat64m1_t test_vluxei8_v_f64m1_m(vbool64_t mask, const float64_t *base, vuint8mf8_t bindex, size_t vl) {
  return vluxei8_v_f64m1_m(mask, base, bindex, vl);
}

vfloat64m2_t test_vluxei8_v_f64m2_m(vbool32_t mask, const float64_t *base, vuint8mf4_t bindex, size_t vl) {
  return vluxei8_v_f64m2_m(mask, base, bindex, vl);
}

vfloat64m4_t test_vluxei8_v_f64m4_m(vbool16_t mask, const float64_t *base, vuint8mf2_t bindex, size_t vl) {
  return vluxei8_v_f64m4_m(mask, base, bindex, vl);
}

vfloat64m8_t test_vluxei8_v_f64m8_m(vbool8_t mask, const float64_t *base, vuint8m1_t bindex, size_t vl) {
  return vluxei8_v_f64m8_m(mask, base, bindex, vl);
}

vint8mf8_t test_vluxei8_v_i8mf8_m(vbool64_t mask, const int8_t *base, vuint8mf8_t bindex, size_t vl) {
  return vluxei8_v_i8mf8_m(mask, base, bindex, vl);
}

vint8mf4_t test_vluxei8_v_i8mf4_m(vbool32_t mask, const int8_t *base, vuint8mf4_t bindex, size_t vl) {
  return vluxei8_v_i8mf4_m(mask, base, bindex, vl);
}

vint8mf2_t test_vluxei8_v_i8mf2_m(vbool16_t mask, const int8_t *base, vuint8mf2_t bindex, size_t vl) {
  return vluxei8_v_i8mf2_m(mask, base, bindex, vl);
}

vint8m1_t test_vluxei8_v_i8m1_m(vbool8_t mask, const int8_t *base, vuint8m1_t bindex, size_t vl) {
  return vluxei8_v_i8m1_m(mask, base, bindex, vl);
}

vint8m2_t test_vluxei8_v_i8m2_m(vbool4_t mask, const int8_t *base, vuint8m2_t bindex, size_t vl) {
  return vluxei8_v_i8m2_m(mask, base, bindex, vl);
}

vint8m4_t test_vluxei8_v_i8m4_m(vbool2_t mask, const int8_t *base, vuint8m4_t bindex, size_t vl) {
  return vluxei8_v_i8m4_m(mask, base, bindex, vl);
}

vint8m8_t test_vluxei8_v_i8m8_m(vbool1_t mask, const int8_t *base, vuint8m8_t bindex, size_t vl) {
  return vluxei8_v_i8m8_m(mask, base, bindex, vl);
}

vint16mf4_t test_vluxei8_v_i16mf4_m(vbool64_t mask, const int16_t *base, vuint8mf8_t bindex, size_t vl) {
  return vluxei8_v_i16mf4_m(mask, base, bindex, vl);
}

vint16mf2_t test_vluxei8_v_i16mf2_m(vbool32_t mask, const int16_t *base, vuint8mf4_t bindex, size_t vl) {
  return vluxei8_v_i16mf2_m(mask, base, bindex, vl);
}

vint16m1_t test_vluxei8_v_i16m1_m(vbool16_t mask, const int16_t *base, vuint8mf2_t bindex, size_t vl) {
  return vluxei8_v_i16m1_m(mask, base, bindex, vl);
}

vint16m2_t test_vluxei8_v_i16m2_m(vbool8_t mask, const int16_t *base, vuint8m1_t bindex, size_t vl) {
  return vluxei8_v_i16m2_m(mask, base, bindex, vl);
}

vint16m4_t test_vluxei8_v_i16m4_m(vbool4_t mask, const int16_t *base, vuint8m2_t bindex, size_t vl) {
  return vluxei8_v_i16m4_m(mask, base, bindex, vl);
}

vint16m8_t test_vluxei8_v_i16m8_m(vbool2_t mask, const int16_t *base, vuint8m4_t bindex, size_t vl) {
  return vluxei8_v_i16m8_m(mask, base, bindex, vl);
}

vint32mf2_t test_vluxei8_v_i32mf2_m(vbool64_t mask, const int32_t *base, vuint8mf8_t bindex, size_t vl) {
  return vluxei8_v_i32mf2_m(mask, base, bindex, vl);
}

vint32m1_t test_vluxei8_v_i32m1_m(vbool32_t mask, const int32_t *base, vuint8mf4_t bindex, size_t vl) {
  return vluxei8_v_i32m1_m(mask, base, bindex, vl);
}

vint32m2_t test_vluxei8_v_i32m2_m(vbool16_t mask, const int32_t *base, vuint8mf2_t bindex, size_t vl) {
  return vluxei8_v_i32m2_m(mask, base, bindex, vl);
}

vint32m4_t test_vluxei8_v_i32m4_m(vbool8_t mask, const int32_t *base, vuint8m1_t bindex, size_t vl) {
  return vluxei8_v_i32m4_m(mask, base, bindex, vl);
}

vint32m8_t test_vluxei8_v_i32m8_m(vbool4_t mask, const int32_t *base, vuint8m2_t bindex, size_t vl) {
  return vluxei8_v_i32m8_m(mask, base, bindex, vl);
}

vint64m1_t test_vluxei8_v_i64m1_m(vbool64_t mask, const int64_t *base, vuint8mf8_t bindex, size_t vl) {
  return vluxei8_v_i64m1_m(mask, base, bindex, vl);
}

vint64m2_t test_vluxei8_v_i64m2_m(vbool32_t mask, const int64_t *base, vuint8mf4_t bindex, size_t vl) {
  return vluxei8_v_i64m2_m(mask, base, bindex, vl);
}

vint64m4_t test_vluxei8_v_i64m4_m(vbool16_t mask, const int64_t *base, vuint8mf2_t bindex, size_t vl) {
  return vluxei8_v_i64m4_m(mask, base, bindex, vl);
}

vint64m8_t test_vluxei8_v_i64m8_m(vbool8_t mask, const int64_t *base, vuint8m1_t bindex, size_t vl) {
  return vluxei8_v_i64m8_m(mask, base, bindex, vl);
}

vuint8mf8_t test_vluxei8_v_u8mf8_m(vbool64_t mask, const uint8_t *base, vuint8mf8_t bindex, size_t vl) {
  return vluxei8_v_u8mf8_m(mask, base, bindex, vl);
}

vuint8mf4_t test_vluxei8_v_u8mf4_m(vbool32_t mask, const uint8_t *base, vuint8mf4_t bindex, size_t vl) {
  return vluxei8_v_u8mf4_m(mask, base, bindex, vl);
}

vuint8mf2_t test_vluxei8_v_u8mf2_m(vbool16_t mask, const uint8_t *base, vuint8mf2_t bindex, size_t vl) {
  return vluxei8_v_u8mf2_m(mask, base, bindex, vl);
}

vuint8m1_t test_vluxei8_v_u8m1_m(vbool8_t mask, const uint8_t *base, vuint8m1_t bindex, size_t vl) {
  return vluxei8_v_u8m1_m(mask, base, bindex, vl);
}

vuint8m2_t test_vluxei8_v_u8m2_m(vbool4_t mask, const uint8_t *base, vuint8m2_t bindex, size_t vl) {
  return vluxei8_v_u8m2_m(mask, base, bindex, vl);
}

vuint8m4_t test_vluxei8_v_u8m4_m(vbool2_t mask, const uint8_t *base, vuint8m4_t bindex, size_t vl) {
  return vluxei8_v_u8m4_m(mask, base, bindex, vl);
}

vuint8m8_t test_vluxei8_v_u8m8_m(vbool1_t mask, const uint8_t *base, vuint8m8_t bindex, size_t vl) {
  return vluxei8_v_u8m8_m(mask, base, bindex, vl);
}

vuint16mf4_t test_vluxei8_v_u16mf4_m(vbool64_t mask, const uint16_t *base, vuint8mf8_t bindex, size_t vl) {
  return vluxei8_v_u16mf4_m(mask, base, bindex, vl);
}

vuint16mf2_t test_vluxei8_v_u16mf2_m(vbool32_t mask, const uint16_t *base, vuint8mf4_t bindex, size_t vl) {
  return vluxei8_v_u16mf2_m(mask, base, bindex, vl);
}

vuint16m1_t test_vluxei8_v_u16m1_m(vbool16_t mask, const uint16_t *base, vuint8mf2_t bindex, size_t vl) {
  return vluxei8_v_u16m1_m(mask, base, bindex, vl);
}

vuint16m2_t test_vluxei8_v_u16m2_m(vbool8_t mask, const uint16_t *base, vuint8m1_t bindex, size_t vl) {
  return vluxei8_v_u16m2_m(mask, base, bindex, vl);
}

vuint16m4_t test_vluxei8_v_u16m4_m(vbool4_t mask, const uint16_t *base, vuint8m2_t bindex, size_t vl) {
  return vluxei8_v_u16m4_m(mask, base, bindex, vl);
}

vuint16m8_t test_vluxei8_v_u16m8_m(vbool2_t mask, const uint16_t *base, vuint8m4_t bindex, size_t vl) {
  return vluxei8_v_u16m8_m(mask, base, bindex, vl);
}

vuint32mf2_t test_vluxei8_v_u32mf2_m(vbool64_t mask, const uint32_t *base, vuint8mf8_t bindex, size_t vl) {
  return vluxei8_v_u32mf2_m(mask, base, bindex, vl);
}

vuint32m1_t test_vluxei8_v_u32m1_m(vbool32_t mask, const uint32_t *base, vuint8mf4_t bindex, size_t vl) {
  return vluxei8_v_u32m1_m(mask, base, bindex, vl);
}

vuint32m2_t test_vluxei8_v_u32m2_m(vbool16_t mask, const uint32_t *base, vuint8mf2_t bindex, size_t vl) {
  return vluxei8_v_u32m2_m(mask, base, bindex, vl);
}

vuint32m4_t test_vluxei8_v_u32m4_m(vbool8_t mask, const uint32_t *base, vuint8m1_t bindex, size_t vl) {
  return vluxei8_v_u32m4_m(mask, base, bindex, vl);
}

vuint32m8_t test_vluxei8_v_u32m8_m(vbool4_t mask, const uint32_t *base, vuint8m2_t bindex, size_t vl) {
  return vluxei8_v_u32m8_m(mask, base, bindex, vl);
}

vuint64m1_t test_vluxei8_v_u64m1_m(vbool64_t mask, const uint64_t *base, vuint8mf8_t bindex, size_t vl) {
  return vluxei8_v_u64m1_m(mask, base, bindex, vl);
}

vuint64m2_t test_vluxei8_v_u64m2_m(vbool32_t mask, const uint64_t *base, vuint8mf4_t bindex, size_t vl) {
  return vluxei8_v_u64m2_m(mask, base, bindex, vl);
}

vuint64m4_t test_vluxei8_v_u64m4_m(vbool16_t mask, const uint64_t *base, vuint8mf2_t bindex, size_t vl) {
  return vluxei8_v_u64m4_m(mask, base, bindex, vl);
}

vuint64m8_t test_vluxei8_v_u64m8_m(vbool8_t mask, const uint64_t *base, vuint8m1_t bindex, size_t vl) {
  return vluxei8_v_u64m8_m(mask, base, bindex, vl);
}

