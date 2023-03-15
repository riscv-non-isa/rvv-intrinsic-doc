#include <stdint.h>
#include "rvv-v0p10-compatible-headers/overloaded-non-policy.h"
#include "rvv-v0p10-compatible-headers/overloaded-policy.h"
#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
vfloat16mf4_t test_vrgather_vv_f16mf4_tu(vfloat16mf4_t maskedoff, vfloat16mf4_t op1, vuint16mf4_t index, size_t vl) {
  return vrgather_tu(maskedoff, op1, index, vl);
}

vfloat16mf4_t test_vrgather_vx_f16mf4_tu(vfloat16mf4_t maskedoff, vfloat16mf4_t op1, size_t index, size_t vl) {
  return vrgather_tu(maskedoff, op1, index, vl);
}

vfloat16mf2_t test_vrgather_vv_f16mf2_tu(vfloat16mf2_t maskedoff, vfloat16mf2_t op1, vuint16mf2_t index, size_t vl) {
  return vrgather_tu(maskedoff, op1, index, vl);
}

vfloat16mf2_t test_vrgather_vx_f16mf2_tu(vfloat16mf2_t maskedoff, vfloat16mf2_t op1, size_t index, size_t vl) {
  return vrgather_tu(maskedoff, op1, index, vl);
}

vfloat16m1_t test_vrgather_vv_f16m1_tu(vfloat16m1_t maskedoff, vfloat16m1_t op1, vuint16m1_t index, size_t vl) {
  return vrgather_tu(maskedoff, op1, index, vl);
}

vfloat16m1_t test_vrgather_vx_f16m1_tu(vfloat16m1_t maskedoff, vfloat16m1_t op1, size_t index, size_t vl) {
  return vrgather_tu(maskedoff, op1, index, vl);
}

vfloat16m2_t test_vrgather_vv_f16m2_tu(vfloat16m2_t maskedoff, vfloat16m2_t op1, vuint16m2_t index, size_t vl) {
  return vrgather_tu(maskedoff, op1, index, vl);
}

vfloat16m2_t test_vrgather_vx_f16m2_tu(vfloat16m2_t maskedoff, vfloat16m2_t op1, size_t index, size_t vl) {
  return vrgather_tu(maskedoff, op1, index, vl);
}

vfloat16m4_t test_vrgather_vv_f16m4_tu(vfloat16m4_t maskedoff, vfloat16m4_t op1, vuint16m4_t index, size_t vl) {
  return vrgather_tu(maskedoff, op1, index, vl);
}

vfloat16m4_t test_vrgather_vx_f16m4_tu(vfloat16m4_t maskedoff, vfloat16m4_t op1, size_t index, size_t vl) {
  return vrgather_tu(maskedoff, op1, index, vl);
}

vfloat16m8_t test_vrgather_vv_f16m8_tu(vfloat16m8_t maskedoff, vfloat16m8_t op1, vuint16m8_t index, size_t vl) {
  return vrgather_tu(maskedoff, op1, index, vl);
}

vfloat16m8_t test_vrgather_vx_f16m8_tu(vfloat16m8_t maskedoff, vfloat16m8_t op1, size_t index, size_t vl) {
  return vrgather_tu(maskedoff, op1, index, vl);
}

vfloat32mf2_t test_vrgather_vv_f32mf2_tu(vfloat32mf2_t maskedoff, vfloat32mf2_t op1, vuint32mf2_t index, size_t vl) {
  return vrgather_tu(maskedoff, op1, index, vl);
}

vfloat32mf2_t test_vrgather_vx_f32mf2_tu(vfloat32mf2_t maskedoff, vfloat32mf2_t op1, size_t index, size_t vl) {
  return vrgather_tu(maskedoff, op1, index, vl);
}

vfloat32m1_t test_vrgather_vv_f32m1_tu(vfloat32m1_t maskedoff, vfloat32m1_t op1, vuint32m1_t index, size_t vl) {
  return vrgather_tu(maskedoff, op1, index, vl);
}

vfloat32m1_t test_vrgather_vx_f32m1_tu(vfloat32m1_t maskedoff, vfloat32m1_t op1, size_t index, size_t vl) {
  return vrgather_tu(maskedoff, op1, index, vl);
}

vfloat32m2_t test_vrgather_vv_f32m2_tu(vfloat32m2_t maskedoff, vfloat32m2_t op1, vuint32m2_t index, size_t vl) {
  return vrgather_tu(maskedoff, op1, index, vl);
}

vfloat32m2_t test_vrgather_vx_f32m2_tu(vfloat32m2_t maskedoff, vfloat32m2_t op1, size_t index, size_t vl) {
  return vrgather_tu(maskedoff, op1, index, vl);
}

vfloat32m4_t test_vrgather_vv_f32m4_tu(vfloat32m4_t maskedoff, vfloat32m4_t op1, vuint32m4_t index, size_t vl) {
  return vrgather_tu(maskedoff, op1, index, vl);
}

vfloat32m4_t test_vrgather_vx_f32m4_tu(vfloat32m4_t maskedoff, vfloat32m4_t op1, size_t index, size_t vl) {
  return vrgather_tu(maskedoff, op1, index, vl);
}

vfloat32m8_t test_vrgather_vv_f32m8_tu(vfloat32m8_t maskedoff, vfloat32m8_t op1, vuint32m8_t index, size_t vl) {
  return vrgather_tu(maskedoff, op1, index, vl);
}

vfloat32m8_t test_vrgather_vx_f32m8_tu(vfloat32m8_t maskedoff, vfloat32m8_t op1, size_t index, size_t vl) {
  return vrgather_tu(maskedoff, op1, index, vl);
}

vfloat64m1_t test_vrgather_vv_f64m1_tu(vfloat64m1_t maskedoff, vfloat64m1_t op1, vuint64m1_t index, size_t vl) {
  return vrgather_tu(maskedoff, op1, index, vl);
}

vfloat64m1_t test_vrgather_vx_f64m1_tu(vfloat64m1_t maskedoff, vfloat64m1_t op1, size_t index, size_t vl) {
  return vrgather_tu(maskedoff, op1, index, vl);
}

vfloat64m2_t test_vrgather_vv_f64m2_tu(vfloat64m2_t maskedoff, vfloat64m2_t op1, vuint64m2_t index, size_t vl) {
  return vrgather_tu(maskedoff, op1, index, vl);
}

vfloat64m2_t test_vrgather_vx_f64m2_tu(vfloat64m2_t maskedoff, vfloat64m2_t op1, size_t index, size_t vl) {
  return vrgather_tu(maskedoff, op1, index, vl);
}

vfloat64m4_t test_vrgather_vv_f64m4_tu(vfloat64m4_t maskedoff, vfloat64m4_t op1, vuint64m4_t index, size_t vl) {
  return vrgather_tu(maskedoff, op1, index, vl);
}

vfloat64m4_t test_vrgather_vx_f64m4_tu(vfloat64m4_t maskedoff, vfloat64m4_t op1, size_t index, size_t vl) {
  return vrgather_tu(maskedoff, op1, index, vl);
}

vfloat64m8_t test_vrgather_vv_f64m8_tu(vfloat64m8_t maskedoff, vfloat64m8_t op1, vuint64m8_t index, size_t vl) {
  return vrgather_tu(maskedoff, op1, index, vl);
}

vfloat64m8_t test_vrgather_vx_f64m8_tu(vfloat64m8_t maskedoff, vfloat64m8_t op1, size_t index, size_t vl) {
  return vrgather_tu(maskedoff, op1, index, vl);
}

vint8mf8_t test_vrgather_vv_i8mf8_tu(vint8mf8_t maskedoff, vint8mf8_t op1, vuint8mf8_t index, size_t vl) {
  return vrgather_tu(maskedoff, op1, index, vl);
}

vint8mf8_t test_vrgather_vx_i8mf8_tu(vint8mf8_t maskedoff, vint8mf8_t op1, size_t index, size_t vl) {
  return vrgather_tu(maskedoff, op1, index, vl);
}

vint8mf4_t test_vrgather_vv_i8mf4_tu(vint8mf4_t maskedoff, vint8mf4_t op1, vuint8mf4_t index, size_t vl) {
  return vrgather_tu(maskedoff, op1, index, vl);
}

vint8mf4_t test_vrgather_vx_i8mf4_tu(vint8mf4_t maskedoff, vint8mf4_t op1, size_t index, size_t vl) {
  return vrgather_tu(maskedoff, op1, index, vl);
}

vint8mf2_t test_vrgather_vv_i8mf2_tu(vint8mf2_t maskedoff, vint8mf2_t op1, vuint8mf2_t index, size_t vl) {
  return vrgather_tu(maskedoff, op1, index, vl);
}

vint8mf2_t test_vrgather_vx_i8mf2_tu(vint8mf2_t maskedoff, vint8mf2_t op1, size_t index, size_t vl) {
  return vrgather_tu(maskedoff, op1, index, vl);
}

vint8m1_t test_vrgather_vv_i8m1_tu(vint8m1_t maskedoff, vint8m1_t op1, vuint8m1_t index, size_t vl) {
  return vrgather_tu(maskedoff, op1, index, vl);
}

vint8m1_t test_vrgather_vx_i8m1_tu(vint8m1_t maskedoff, vint8m1_t op1, size_t index, size_t vl) {
  return vrgather_tu(maskedoff, op1, index, vl);
}

vint8m2_t test_vrgather_vv_i8m2_tu(vint8m2_t maskedoff, vint8m2_t op1, vuint8m2_t index, size_t vl) {
  return vrgather_tu(maskedoff, op1, index, vl);
}

vint8m2_t test_vrgather_vx_i8m2_tu(vint8m2_t maskedoff, vint8m2_t op1, size_t index, size_t vl) {
  return vrgather_tu(maskedoff, op1, index, vl);
}

vint8m4_t test_vrgather_vv_i8m4_tu(vint8m4_t maskedoff, vint8m4_t op1, vuint8m4_t index, size_t vl) {
  return vrgather_tu(maskedoff, op1, index, vl);
}

vint8m4_t test_vrgather_vx_i8m4_tu(vint8m4_t maskedoff, vint8m4_t op1, size_t index, size_t vl) {
  return vrgather_tu(maskedoff, op1, index, vl);
}

vint8m8_t test_vrgather_vv_i8m8_tu(vint8m8_t maskedoff, vint8m8_t op1, vuint8m8_t index, size_t vl) {
  return vrgather_tu(maskedoff, op1, index, vl);
}

vint8m8_t test_vrgather_vx_i8m8_tu(vint8m8_t maskedoff, vint8m8_t op1, size_t index, size_t vl) {
  return vrgather_tu(maskedoff, op1, index, vl);
}

vint16mf4_t test_vrgather_vv_i16mf4_tu(vint16mf4_t maskedoff, vint16mf4_t op1, vuint16mf4_t index, size_t vl) {
  return vrgather_tu(maskedoff, op1, index, vl);
}

vint16mf4_t test_vrgather_vx_i16mf4_tu(vint16mf4_t maskedoff, vint16mf4_t op1, size_t index, size_t vl) {
  return vrgather_tu(maskedoff, op1, index, vl);
}

vint16mf2_t test_vrgather_vv_i16mf2_tu(vint16mf2_t maskedoff, vint16mf2_t op1, vuint16mf2_t index, size_t vl) {
  return vrgather_tu(maskedoff, op1, index, vl);
}

vint16mf2_t test_vrgather_vx_i16mf2_tu(vint16mf2_t maskedoff, vint16mf2_t op1, size_t index, size_t vl) {
  return vrgather_tu(maskedoff, op1, index, vl);
}

vint16m1_t test_vrgather_vv_i16m1_tu(vint16m1_t maskedoff, vint16m1_t op1, vuint16m1_t index, size_t vl) {
  return vrgather_tu(maskedoff, op1, index, vl);
}

vint16m1_t test_vrgather_vx_i16m1_tu(vint16m1_t maskedoff, vint16m1_t op1, size_t index, size_t vl) {
  return vrgather_tu(maskedoff, op1, index, vl);
}

vint16m2_t test_vrgather_vv_i16m2_tu(vint16m2_t maskedoff, vint16m2_t op1, vuint16m2_t index, size_t vl) {
  return vrgather_tu(maskedoff, op1, index, vl);
}

vint16m2_t test_vrgather_vx_i16m2_tu(vint16m2_t maskedoff, vint16m2_t op1, size_t index, size_t vl) {
  return vrgather_tu(maskedoff, op1, index, vl);
}

vint16m4_t test_vrgather_vv_i16m4_tu(vint16m4_t maskedoff, vint16m4_t op1, vuint16m4_t index, size_t vl) {
  return vrgather_tu(maskedoff, op1, index, vl);
}

vint16m4_t test_vrgather_vx_i16m4_tu(vint16m4_t maskedoff, vint16m4_t op1, size_t index, size_t vl) {
  return vrgather_tu(maskedoff, op1, index, vl);
}

vint16m8_t test_vrgather_vv_i16m8_tu(vint16m8_t maskedoff, vint16m8_t op1, vuint16m8_t index, size_t vl) {
  return vrgather_tu(maskedoff, op1, index, vl);
}

vint16m8_t test_vrgather_vx_i16m8_tu(vint16m8_t maskedoff, vint16m8_t op1, size_t index, size_t vl) {
  return vrgather_tu(maskedoff, op1, index, vl);
}

vint32mf2_t test_vrgather_vv_i32mf2_tu(vint32mf2_t maskedoff, vint32mf2_t op1, vuint32mf2_t index, size_t vl) {
  return vrgather_tu(maskedoff, op1, index, vl);
}

vint32mf2_t test_vrgather_vx_i32mf2_tu(vint32mf2_t maskedoff, vint32mf2_t op1, size_t index, size_t vl) {
  return vrgather_tu(maskedoff, op1, index, vl);
}

vint32m1_t test_vrgather_vv_i32m1_tu(vint32m1_t maskedoff, vint32m1_t op1, vuint32m1_t index, size_t vl) {
  return vrgather_tu(maskedoff, op1, index, vl);
}

vint32m1_t test_vrgather_vx_i32m1_tu(vint32m1_t maskedoff, vint32m1_t op1, size_t index, size_t vl) {
  return vrgather_tu(maskedoff, op1, index, vl);
}

vint32m2_t test_vrgather_vv_i32m2_tu(vint32m2_t maskedoff, vint32m2_t op1, vuint32m2_t index, size_t vl) {
  return vrgather_tu(maskedoff, op1, index, vl);
}

vint32m2_t test_vrgather_vx_i32m2_tu(vint32m2_t maskedoff, vint32m2_t op1, size_t index, size_t vl) {
  return vrgather_tu(maskedoff, op1, index, vl);
}

vint32m4_t test_vrgather_vv_i32m4_tu(vint32m4_t maskedoff, vint32m4_t op1, vuint32m4_t index, size_t vl) {
  return vrgather_tu(maskedoff, op1, index, vl);
}

vint32m4_t test_vrgather_vx_i32m4_tu(vint32m4_t maskedoff, vint32m4_t op1, size_t index, size_t vl) {
  return vrgather_tu(maskedoff, op1, index, vl);
}

vint32m8_t test_vrgather_vv_i32m8_tu(vint32m8_t maskedoff, vint32m8_t op1, vuint32m8_t index, size_t vl) {
  return vrgather_tu(maskedoff, op1, index, vl);
}

vint32m8_t test_vrgather_vx_i32m8_tu(vint32m8_t maskedoff, vint32m8_t op1, size_t index, size_t vl) {
  return vrgather_tu(maskedoff, op1, index, vl);
}

vint64m1_t test_vrgather_vv_i64m1_tu(vint64m1_t maskedoff, vint64m1_t op1, vuint64m1_t index, size_t vl) {
  return vrgather_tu(maskedoff, op1, index, vl);
}

vint64m1_t test_vrgather_vx_i64m1_tu(vint64m1_t maskedoff, vint64m1_t op1, size_t index, size_t vl) {
  return vrgather_tu(maskedoff, op1, index, vl);
}

vint64m2_t test_vrgather_vv_i64m2_tu(vint64m2_t maskedoff, vint64m2_t op1, vuint64m2_t index, size_t vl) {
  return vrgather_tu(maskedoff, op1, index, vl);
}

vint64m2_t test_vrgather_vx_i64m2_tu(vint64m2_t maskedoff, vint64m2_t op1, size_t index, size_t vl) {
  return vrgather_tu(maskedoff, op1, index, vl);
}

vint64m4_t test_vrgather_vv_i64m4_tu(vint64m4_t maskedoff, vint64m4_t op1, vuint64m4_t index, size_t vl) {
  return vrgather_tu(maskedoff, op1, index, vl);
}

vint64m4_t test_vrgather_vx_i64m4_tu(vint64m4_t maskedoff, vint64m4_t op1, size_t index, size_t vl) {
  return vrgather_tu(maskedoff, op1, index, vl);
}

vint64m8_t test_vrgather_vv_i64m8_tu(vint64m8_t maskedoff, vint64m8_t op1, vuint64m8_t index, size_t vl) {
  return vrgather_tu(maskedoff, op1, index, vl);
}

vint64m8_t test_vrgather_vx_i64m8_tu(vint64m8_t maskedoff, vint64m8_t op1, size_t index, size_t vl) {
  return vrgather_tu(maskedoff, op1, index, vl);
}

vuint8mf8_t test_vrgather_vv_u8mf8_tu(vuint8mf8_t maskedoff, vuint8mf8_t op1, vuint8mf8_t index, size_t vl) {
  return vrgather_tu(maskedoff, op1, index, vl);
}

vuint8mf8_t test_vrgather_vx_u8mf8_tu(vuint8mf8_t maskedoff, vuint8mf8_t op1, size_t index, size_t vl) {
  return vrgather_tu(maskedoff, op1, index, vl);
}

vuint8mf4_t test_vrgather_vv_u8mf4_tu(vuint8mf4_t maskedoff, vuint8mf4_t op1, vuint8mf4_t index, size_t vl) {
  return vrgather_tu(maskedoff, op1, index, vl);
}

vuint8mf4_t test_vrgather_vx_u8mf4_tu(vuint8mf4_t maskedoff, vuint8mf4_t op1, size_t index, size_t vl) {
  return vrgather_tu(maskedoff, op1, index, vl);
}

vuint8mf2_t test_vrgather_vv_u8mf2_tu(vuint8mf2_t maskedoff, vuint8mf2_t op1, vuint8mf2_t index, size_t vl) {
  return vrgather_tu(maskedoff, op1, index, vl);
}

vuint8mf2_t test_vrgather_vx_u8mf2_tu(vuint8mf2_t maskedoff, vuint8mf2_t op1, size_t index, size_t vl) {
  return vrgather_tu(maskedoff, op1, index, vl);
}

vuint8m1_t test_vrgather_vv_u8m1_tu(vuint8m1_t maskedoff, vuint8m1_t op1, vuint8m1_t index, size_t vl) {
  return vrgather_tu(maskedoff, op1, index, vl);
}

vuint8m1_t test_vrgather_vx_u8m1_tu(vuint8m1_t maskedoff, vuint8m1_t op1, size_t index, size_t vl) {
  return vrgather_tu(maskedoff, op1, index, vl);
}

vuint8m2_t test_vrgather_vv_u8m2_tu(vuint8m2_t maskedoff, vuint8m2_t op1, vuint8m2_t index, size_t vl) {
  return vrgather_tu(maskedoff, op1, index, vl);
}

vuint8m2_t test_vrgather_vx_u8m2_tu(vuint8m2_t maskedoff, vuint8m2_t op1, size_t index, size_t vl) {
  return vrgather_tu(maskedoff, op1, index, vl);
}

vuint8m4_t test_vrgather_vv_u8m4_tu(vuint8m4_t maskedoff, vuint8m4_t op1, vuint8m4_t index, size_t vl) {
  return vrgather_tu(maskedoff, op1, index, vl);
}

vuint8m4_t test_vrgather_vx_u8m4_tu(vuint8m4_t maskedoff, vuint8m4_t op1, size_t index, size_t vl) {
  return vrgather_tu(maskedoff, op1, index, vl);
}

vuint8m8_t test_vrgather_vv_u8m8_tu(vuint8m8_t maskedoff, vuint8m8_t op1, vuint8m8_t index, size_t vl) {
  return vrgather_tu(maskedoff, op1, index, vl);
}

vuint8m8_t test_vrgather_vx_u8m8_tu(vuint8m8_t maskedoff, vuint8m8_t op1, size_t index, size_t vl) {
  return vrgather_tu(maskedoff, op1, index, vl);
}

vuint16mf4_t test_vrgather_vv_u16mf4_tu(vuint16mf4_t maskedoff, vuint16mf4_t op1, vuint16mf4_t index, size_t vl) {
  return vrgather_tu(maskedoff, op1, index, vl);
}

vuint16mf4_t test_vrgather_vx_u16mf4_tu(vuint16mf4_t maskedoff, vuint16mf4_t op1, size_t index, size_t vl) {
  return vrgather_tu(maskedoff, op1, index, vl);
}

vuint16mf2_t test_vrgather_vv_u16mf2_tu(vuint16mf2_t maskedoff, vuint16mf2_t op1, vuint16mf2_t index, size_t vl) {
  return vrgather_tu(maskedoff, op1, index, vl);
}

vuint16mf2_t test_vrgather_vx_u16mf2_tu(vuint16mf2_t maskedoff, vuint16mf2_t op1, size_t index, size_t vl) {
  return vrgather_tu(maskedoff, op1, index, vl);
}

vuint16m1_t test_vrgather_vv_u16m1_tu(vuint16m1_t maskedoff, vuint16m1_t op1, vuint16m1_t index, size_t vl) {
  return vrgather_tu(maskedoff, op1, index, vl);
}

vuint16m1_t test_vrgather_vx_u16m1_tu(vuint16m1_t maskedoff, vuint16m1_t op1, size_t index, size_t vl) {
  return vrgather_tu(maskedoff, op1, index, vl);
}

vuint16m2_t test_vrgather_vv_u16m2_tu(vuint16m2_t maskedoff, vuint16m2_t op1, vuint16m2_t index, size_t vl) {
  return vrgather_tu(maskedoff, op1, index, vl);
}

vuint16m2_t test_vrgather_vx_u16m2_tu(vuint16m2_t maskedoff, vuint16m2_t op1, size_t index, size_t vl) {
  return vrgather_tu(maskedoff, op1, index, vl);
}

vuint16m4_t test_vrgather_vv_u16m4_tu(vuint16m4_t maskedoff, vuint16m4_t op1, vuint16m4_t index, size_t vl) {
  return vrgather_tu(maskedoff, op1, index, vl);
}

vuint16m4_t test_vrgather_vx_u16m4_tu(vuint16m4_t maskedoff, vuint16m4_t op1, size_t index, size_t vl) {
  return vrgather_tu(maskedoff, op1, index, vl);
}

vuint16m8_t test_vrgather_vv_u16m8_tu(vuint16m8_t maskedoff, vuint16m8_t op1, vuint16m8_t index, size_t vl) {
  return vrgather_tu(maskedoff, op1, index, vl);
}

vuint16m8_t test_vrgather_vx_u16m8_tu(vuint16m8_t maskedoff, vuint16m8_t op1, size_t index, size_t vl) {
  return vrgather_tu(maskedoff, op1, index, vl);
}

vuint32mf2_t test_vrgather_vv_u32mf2_tu(vuint32mf2_t maskedoff, vuint32mf2_t op1, vuint32mf2_t index, size_t vl) {
  return vrgather_tu(maskedoff, op1, index, vl);
}

vuint32mf2_t test_vrgather_vx_u32mf2_tu(vuint32mf2_t maskedoff, vuint32mf2_t op1, size_t index, size_t vl) {
  return vrgather_tu(maskedoff, op1, index, vl);
}

vuint32m1_t test_vrgather_vv_u32m1_tu(vuint32m1_t maskedoff, vuint32m1_t op1, vuint32m1_t index, size_t vl) {
  return vrgather_tu(maskedoff, op1, index, vl);
}

vuint32m1_t test_vrgather_vx_u32m1_tu(vuint32m1_t maskedoff, vuint32m1_t op1, size_t index, size_t vl) {
  return vrgather_tu(maskedoff, op1, index, vl);
}

vuint32m2_t test_vrgather_vv_u32m2_tu(vuint32m2_t maskedoff, vuint32m2_t op1, vuint32m2_t index, size_t vl) {
  return vrgather_tu(maskedoff, op1, index, vl);
}

vuint32m2_t test_vrgather_vx_u32m2_tu(vuint32m2_t maskedoff, vuint32m2_t op1, size_t index, size_t vl) {
  return vrgather_tu(maskedoff, op1, index, vl);
}

vuint32m4_t test_vrgather_vv_u32m4_tu(vuint32m4_t maskedoff, vuint32m4_t op1, vuint32m4_t index, size_t vl) {
  return vrgather_tu(maskedoff, op1, index, vl);
}

vuint32m4_t test_vrgather_vx_u32m4_tu(vuint32m4_t maskedoff, vuint32m4_t op1, size_t index, size_t vl) {
  return vrgather_tu(maskedoff, op1, index, vl);
}

vuint32m8_t test_vrgather_vv_u32m8_tu(vuint32m8_t maskedoff, vuint32m8_t op1, vuint32m8_t index, size_t vl) {
  return vrgather_tu(maskedoff, op1, index, vl);
}

vuint32m8_t test_vrgather_vx_u32m8_tu(vuint32m8_t maskedoff, vuint32m8_t op1, size_t index, size_t vl) {
  return vrgather_tu(maskedoff, op1, index, vl);
}

vuint64m1_t test_vrgather_vv_u64m1_tu(vuint64m1_t maskedoff, vuint64m1_t op1, vuint64m1_t index, size_t vl) {
  return vrgather_tu(maskedoff, op1, index, vl);
}

vuint64m1_t test_vrgather_vx_u64m1_tu(vuint64m1_t maskedoff, vuint64m1_t op1, size_t index, size_t vl) {
  return vrgather_tu(maskedoff, op1, index, vl);
}

vuint64m2_t test_vrgather_vv_u64m2_tu(vuint64m2_t maskedoff, vuint64m2_t op1, vuint64m2_t index, size_t vl) {
  return vrgather_tu(maskedoff, op1, index, vl);
}

vuint64m2_t test_vrgather_vx_u64m2_tu(vuint64m2_t maskedoff, vuint64m2_t op1, size_t index, size_t vl) {
  return vrgather_tu(maskedoff, op1, index, vl);
}

vuint64m4_t test_vrgather_vv_u64m4_tu(vuint64m4_t maskedoff, vuint64m4_t op1, vuint64m4_t index, size_t vl) {
  return vrgather_tu(maskedoff, op1, index, vl);
}

vuint64m4_t test_vrgather_vx_u64m4_tu(vuint64m4_t maskedoff, vuint64m4_t op1, size_t index, size_t vl) {
  return vrgather_tu(maskedoff, op1, index, vl);
}

vuint64m8_t test_vrgather_vv_u64m8_tu(vuint64m8_t maskedoff, vuint64m8_t op1, vuint64m8_t index, size_t vl) {
  return vrgather_tu(maskedoff, op1, index, vl);
}

vuint64m8_t test_vrgather_vx_u64m8_tu(vuint64m8_t maskedoff, vuint64m8_t op1, size_t index, size_t vl) {
  return vrgather_tu(maskedoff, op1, index, vl);
}

vfloat16mf4_t test_vrgather_vv_f16mf4_ta(vfloat16mf4_t op1, vuint16mf4_t index, size_t vl) {
  return vrgather_ta(op1, index, vl);
}

vfloat16mf4_t test_vrgather_vx_f16mf4_ta(vfloat16mf4_t op1, size_t index, size_t vl) {
  return vrgather_ta(op1, index, vl);
}

vfloat16mf2_t test_vrgather_vv_f16mf2_ta(vfloat16mf2_t op1, vuint16mf2_t index, size_t vl) {
  return vrgather_ta(op1, index, vl);
}

vfloat16mf2_t test_vrgather_vx_f16mf2_ta(vfloat16mf2_t op1, size_t index, size_t vl) {
  return vrgather_ta(op1, index, vl);
}

vfloat16m1_t test_vrgather_vv_f16m1_ta(vfloat16m1_t op1, vuint16m1_t index, size_t vl) {
  return vrgather_ta(op1, index, vl);
}

vfloat16m1_t test_vrgather_vx_f16m1_ta(vfloat16m1_t op1, size_t index, size_t vl) {
  return vrgather_ta(op1, index, vl);
}

vfloat16m2_t test_vrgather_vv_f16m2_ta(vfloat16m2_t op1, vuint16m2_t index, size_t vl) {
  return vrgather_ta(op1, index, vl);
}

vfloat16m2_t test_vrgather_vx_f16m2_ta(vfloat16m2_t op1, size_t index, size_t vl) {
  return vrgather_ta(op1, index, vl);
}

vfloat16m4_t test_vrgather_vv_f16m4_ta(vfloat16m4_t op1, vuint16m4_t index, size_t vl) {
  return vrgather_ta(op1, index, vl);
}

vfloat16m4_t test_vrgather_vx_f16m4_ta(vfloat16m4_t op1, size_t index, size_t vl) {
  return vrgather_ta(op1, index, vl);
}

vfloat16m8_t test_vrgather_vv_f16m8_ta(vfloat16m8_t op1, vuint16m8_t index, size_t vl) {
  return vrgather_ta(op1, index, vl);
}

vfloat16m8_t test_vrgather_vx_f16m8_ta(vfloat16m8_t op1, size_t index, size_t vl) {
  return vrgather_ta(op1, index, vl);
}

vfloat32mf2_t test_vrgather_vv_f32mf2_ta(vfloat32mf2_t op1, vuint32mf2_t index, size_t vl) {
  return vrgather_ta(op1, index, vl);
}

vfloat32mf2_t test_vrgather_vx_f32mf2_ta(vfloat32mf2_t op1, size_t index, size_t vl) {
  return vrgather_ta(op1, index, vl);
}

vfloat32m1_t test_vrgather_vv_f32m1_ta(vfloat32m1_t op1, vuint32m1_t index, size_t vl) {
  return vrgather_ta(op1, index, vl);
}

vfloat32m1_t test_vrgather_vx_f32m1_ta(vfloat32m1_t op1, size_t index, size_t vl) {
  return vrgather_ta(op1, index, vl);
}

vfloat32m2_t test_vrgather_vv_f32m2_ta(vfloat32m2_t op1, vuint32m2_t index, size_t vl) {
  return vrgather_ta(op1, index, vl);
}

vfloat32m2_t test_vrgather_vx_f32m2_ta(vfloat32m2_t op1, size_t index, size_t vl) {
  return vrgather_ta(op1, index, vl);
}

vfloat32m4_t test_vrgather_vv_f32m4_ta(vfloat32m4_t op1, vuint32m4_t index, size_t vl) {
  return vrgather_ta(op1, index, vl);
}

vfloat32m4_t test_vrgather_vx_f32m4_ta(vfloat32m4_t op1, size_t index, size_t vl) {
  return vrgather_ta(op1, index, vl);
}

vfloat32m8_t test_vrgather_vv_f32m8_ta(vfloat32m8_t op1, vuint32m8_t index, size_t vl) {
  return vrgather_ta(op1, index, vl);
}

vfloat32m8_t test_vrgather_vx_f32m8_ta(vfloat32m8_t op1, size_t index, size_t vl) {
  return vrgather_ta(op1, index, vl);
}

vfloat64m1_t test_vrgather_vv_f64m1_ta(vfloat64m1_t op1, vuint64m1_t index, size_t vl) {
  return vrgather_ta(op1, index, vl);
}

vfloat64m1_t test_vrgather_vx_f64m1_ta(vfloat64m1_t op1, size_t index, size_t vl) {
  return vrgather_ta(op1, index, vl);
}

vfloat64m2_t test_vrgather_vv_f64m2_ta(vfloat64m2_t op1, vuint64m2_t index, size_t vl) {
  return vrgather_ta(op1, index, vl);
}

vfloat64m2_t test_vrgather_vx_f64m2_ta(vfloat64m2_t op1, size_t index, size_t vl) {
  return vrgather_ta(op1, index, vl);
}

vfloat64m4_t test_vrgather_vv_f64m4_ta(vfloat64m4_t op1, vuint64m4_t index, size_t vl) {
  return vrgather_ta(op1, index, vl);
}

vfloat64m4_t test_vrgather_vx_f64m4_ta(vfloat64m4_t op1, size_t index, size_t vl) {
  return vrgather_ta(op1, index, vl);
}

vfloat64m8_t test_vrgather_vv_f64m8_ta(vfloat64m8_t op1, vuint64m8_t index, size_t vl) {
  return vrgather_ta(op1, index, vl);
}

vfloat64m8_t test_vrgather_vx_f64m8_ta(vfloat64m8_t op1, size_t index, size_t vl) {
  return vrgather_ta(op1, index, vl);
}

vint8mf8_t test_vrgather_vv_i8mf8_ta(vint8mf8_t op1, vuint8mf8_t index, size_t vl) {
  return vrgather_ta(op1, index, vl);
}

vint8mf8_t test_vrgather_vx_i8mf8_ta(vint8mf8_t op1, size_t index, size_t vl) {
  return vrgather_ta(op1, index, vl);
}

vint8mf4_t test_vrgather_vv_i8mf4_ta(vint8mf4_t op1, vuint8mf4_t index, size_t vl) {
  return vrgather_ta(op1, index, vl);
}

vint8mf4_t test_vrgather_vx_i8mf4_ta(vint8mf4_t op1, size_t index, size_t vl) {
  return vrgather_ta(op1, index, vl);
}

vint8mf2_t test_vrgather_vv_i8mf2_ta(vint8mf2_t op1, vuint8mf2_t index, size_t vl) {
  return vrgather_ta(op1, index, vl);
}

vint8mf2_t test_vrgather_vx_i8mf2_ta(vint8mf2_t op1, size_t index, size_t vl) {
  return vrgather_ta(op1, index, vl);
}

vint8m1_t test_vrgather_vv_i8m1_ta(vint8m1_t op1, vuint8m1_t index, size_t vl) {
  return vrgather_ta(op1, index, vl);
}

vint8m1_t test_vrgather_vx_i8m1_ta(vint8m1_t op1, size_t index, size_t vl) {
  return vrgather_ta(op1, index, vl);
}

vint8m2_t test_vrgather_vv_i8m2_ta(vint8m2_t op1, vuint8m2_t index, size_t vl) {
  return vrgather_ta(op1, index, vl);
}

vint8m2_t test_vrgather_vx_i8m2_ta(vint8m2_t op1, size_t index, size_t vl) {
  return vrgather_ta(op1, index, vl);
}

vint8m4_t test_vrgather_vv_i8m4_ta(vint8m4_t op1, vuint8m4_t index, size_t vl) {
  return vrgather_ta(op1, index, vl);
}

vint8m4_t test_vrgather_vx_i8m4_ta(vint8m4_t op1, size_t index, size_t vl) {
  return vrgather_ta(op1, index, vl);
}

vint8m8_t test_vrgather_vv_i8m8_ta(vint8m8_t op1, vuint8m8_t index, size_t vl) {
  return vrgather_ta(op1, index, vl);
}

vint8m8_t test_vrgather_vx_i8m8_ta(vint8m8_t op1, size_t index, size_t vl) {
  return vrgather_ta(op1, index, vl);
}

vint16mf4_t test_vrgather_vv_i16mf4_ta(vint16mf4_t op1, vuint16mf4_t index, size_t vl) {
  return vrgather_ta(op1, index, vl);
}

vint16mf4_t test_vrgather_vx_i16mf4_ta(vint16mf4_t op1, size_t index, size_t vl) {
  return vrgather_ta(op1, index, vl);
}

vint16mf2_t test_vrgather_vv_i16mf2_ta(vint16mf2_t op1, vuint16mf2_t index, size_t vl) {
  return vrgather_ta(op1, index, vl);
}

vint16mf2_t test_vrgather_vx_i16mf2_ta(vint16mf2_t op1, size_t index, size_t vl) {
  return vrgather_ta(op1, index, vl);
}

vint16m1_t test_vrgather_vv_i16m1_ta(vint16m1_t op1, vuint16m1_t index, size_t vl) {
  return vrgather_ta(op1, index, vl);
}

vint16m1_t test_vrgather_vx_i16m1_ta(vint16m1_t op1, size_t index, size_t vl) {
  return vrgather_ta(op1, index, vl);
}

vint16m2_t test_vrgather_vv_i16m2_ta(vint16m2_t op1, vuint16m2_t index, size_t vl) {
  return vrgather_ta(op1, index, vl);
}

vint16m2_t test_vrgather_vx_i16m2_ta(vint16m2_t op1, size_t index, size_t vl) {
  return vrgather_ta(op1, index, vl);
}

vint16m4_t test_vrgather_vv_i16m4_ta(vint16m4_t op1, vuint16m4_t index, size_t vl) {
  return vrgather_ta(op1, index, vl);
}

vint16m4_t test_vrgather_vx_i16m4_ta(vint16m4_t op1, size_t index, size_t vl) {
  return vrgather_ta(op1, index, vl);
}

vint16m8_t test_vrgather_vv_i16m8_ta(vint16m8_t op1, vuint16m8_t index, size_t vl) {
  return vrgather_ta(op1, index, vl);
}

vint16m8_t test_vrgather_vx_i16m8_ta(vint16m8_t op1, size_t index, size_t vl) {
  return vrgather_ta(op1, index, vl);
}

vint32mf2_t test_vrgather_vv_i32mf2_ta(vint32mf2_t op1, vuint32mf2_t index, size_t vl) {
  return vrgather_ta(op1, index, vl);
}

vint32mf2_t test_vrgather_vx_i32mf2_ta(vint32mf2_t op1, size_t index, size_t vl) {
  return vrgather_ta(op1, index, vl);
}

vint32m1_t test_vrgather_vv_i32m1_ta(vint32m1_t op1, vuint32m1_t index, size_t vl) {
  return vrgather_ta(op1, index, vl);
}

vint32m1_t test_vrgather_vx_i32m1_ta(vint32m1_t op1, size_t index, size_t vl) {
  return vrgather_ta(op1, index, vl);
}

vint32m2_t test_vrgather_vv_i32m2_ta(vint32m2_t op1, vuint32m2_t index, size_t vl) {
  return vrgather_ta(op1, index, vl);
}

vint32m2_t test_vrgather_vx_i32m2_ta(vint32m2_t op1, size_t index, size_t vl) {
  return vrgather_ta(op1, index, vl);
}

vint32m4_t test_vrgather_vv_i32m4_ta(vint32m4_t op1, vuint32m4_t index, size_t vl) {
  return vrgather_ta(op1, index, vl);
}

vint32m4_t test_vrgather_vx_i32m4_ta(vint32m4_t op1, size_t index, size_t vl) {
  return vrgather_ta(op1, index, vl);
}

vint32m8_t test_vrgather_vv_i32m8_ta(vint32m8_t op1, vuint32m8_t index, size_t vl) {
  return vrgather_ta(op1, index, vl);
}

vint32m8_t test_vrgather_vx_i32m8_ta(vint32m8_t op1, size_t index, size_t vl) {
  return vrgather_ta(op1, index, vl);
}

vint64m1_t test_vrgather_vv_i64m1_ta(vint64m1_t op1, vuint64m1_t index, size_t vl) {
  return vrgather_ta(op1, index, vl);
}

vint64m1_t test_vrgather_vx_i64m1_ta(vint64m1_t op1, size_t index, size_t vl) {
  return vrgather_ta(op1, index, vl);
}

vint64m2_t test_vrgather_vv_i64m2_ta(vint64m2_t op1, vuint64m2_t index, size_t vl) {
  return vrgather_ta(op1, index, vl);
}

vint64m2_t test_vrgather_vx_i64m2_ta(vint64m2_t op1, size_t index, size_t vl) {
  return vrgather_ta(op1, index, vl);
}

vint64m4_t test_vrgather_vv_i64m4_ta(vint64m4_t op1, vuint64m4_t index, size_t vl) {
  return vrgather_ta(op1, index, vl);
}

vint64m4_t test_vrgather_vx_i64m4_ta(vint64m4_t op1, size_t index, size_t vl) {
  return vrgather_ta(op1, index, vl);
}

vint64m8_t test_vrgather_vv_i64m8_ta(vint64m8_t op1, vuint64m8_t index, size_t vl) {
  return vrgather_ta(op1, index, vl);
}

vint64m8_t test_vrgather_vx_i64m8_ta(vint64m8_t op1, size_t index, size_t vl) {
  return vrgather_ta(op1, index, vl);
}

vuint8mf8_t test_vrgather_vv_u8mf8_ta(vuint8mf8_t op1, vuint8mf8_t index, size_t vl) {
  return vrgather_ta(op1, index, vl);
}

vuint8mf8_t test_vrgather_vx_u8mf8_ta(vuint8mf8_t op1, size_t index, size_t vl) {
  return vrgather_ta(op1, index, vl);
}

vuint8mf4_t test_vrgather_vv_u8mf4_ta(vuint8mf4_t op1, vuint8mf4_t index, size_t vl) {
  return vrgather_ta(op1, index, vl);
}

vuint8mf4_t test_vrgather_vx_u8mf4_ta(vuint8mf4_t op1, size_t index, size_t vl) {
  return vrgather_ta(op1, index, vl);
}

vuint8mf2_t test_vrgather_vv_u8mf2_ta(vuint8mf2_t op1, vuint8mf2_t index, size_t vl) {
  return vrgather_ta(op1, index, vl);
}

vuint8mf2_t test_vrgather_vx_u8mf2_ta(vuint8mf2_t op1, size_t index, size_t vl) {
  return vrgather_ta(op1, index, vl);
}

vuint8m1_t test_vrgather_vv_u8m1_ta(vuint8m1_t op1, vuint8m1_t index, size_t vl) {
  return vrgather_ta(op1, index, vl);
}

vuint8m1_t test_vrgather_vx_u8m1_ta(vuint8m1_t op1, size_t index, size_t vl) {
  return vrgather_ta(op1, index, vl);
}

vuint8m2_t test_vrgather_vv_u8m2_ta(vuint8m2_t op1, vuint8m2_t index, size_t vl) {
  return vrgather_ta(op1, index, vl);
}

vuint8m2_t test_vrgather_vx_u8m2_ta(vuint8m2_t op1, size_t index, size_t vl) {
  return vrgather_ta(op1, index, vl);
}

vuint8m4_t test_vrgather_vv_u8m4_ta(vuint8m4_t op1, vuint8m4_t index, size_t vl) {
  return vrgather_ta(op1, index, vl);
}

vuint8m4_t test_vrgather_vx_u8m4_ta(vuint8m4_t op1, size_t index, size_t vl) {
  return vrgather_ta(op1, index, vl);
}

vuint8m8_t test_vrgather_vv_u8m8_ta(vuint8m8_t op1, vuint8m8_t index, size_t vl) {
  return vrgather_ta(op1, index, vl);
}

vuint8m8_t test_vrgather_vx_u8m8_ta(vuint8m8_t op1, size_t index, size_t vl) {
  return vrgather_ta(op1, index, vl);
}

vuint16mf4_t test_vrgather_vv_u16mf4_ta(vuint16mf4_t op1, vuint16mf4_t index, size_t vl) {
  return vrgather_ta(op1, index, vl);
}

vuint16mf4_t test_vrgather_vx_u16mf4_ta(vuint16mf4_t op1, size_t index, size_t vl) {
  return vrgather_ta(op1, index, vl);
}

vuint16mf2_t test_vrgather_vv_u16mf2_ta(vuint16mf2_t op1, vuint16mf2_t index, size_t vl) {
  return vrgather_ta(op1, index, vl);
}

vuint16mf2_t test_vrgather_vx_u16mf2_ta(vuint16mf2_t op1, size_t index, size_t vl) {
  return vrgather_ta(op1, index, vl);
}

vuint16m1_t test_vrgather_vv_u16m1_ta(vuint16m1_t op1, vuint16m1_t index, size_t vl) {
  return vrgather_ta(op1, index, vl);
}

vuint16m1_t test_vrgather_vx_u16m1_ta(vuint16m1_t op1, size_t index, size_t vl) {
  return vrgather_ta(op1, index, vl);
}

vuint16m2_t test_vrgather_vv_u16m2_ta(vuint16m2_t op1, vuint16m2_t index, size_t vl) {
  return vrgather_ta(op1, index, vl);
}

vuint16m2_t test_vrgather_vx_u16m2_ta(vuint16m2_t op1, size_t index, size_t vl) {
  return vrgather_ta(op1, index, vl);
}

vuint16m4_t test_vrgather_vv_u16m4_ta(vuint16m4_t op1, vuint16m4_t index, size_t vl) {
  return vrgather_ta(op1, index, vl);
}

vuint16m4_t test_vrgather_vx_u16m4_ta(vuint16m4_t op1, size_t index, size_t vl) {
  return vrgather_ta(op1, index, vl);
}

vuint16m8_t test_vrgather_vv_u16m8_ta(vuint16m8_t op1, vuint16m8_t index, size_t vl) {
  return vrgather_ta(op1, index, vl);
}

vuint16m8_t test_vrgather_vx_u16m8_ta(vuint16m8_t op1, size_t index, size_t vl) {
  return vrgather_ta(op1, index, vl);
}

vuint32mf2_t test_vrgather_vv_u32mf2_ta(vuint32mf2_t op1, vuint32mf2_t index, size_t vl) {
  return vrgather_ta(op1, index, vl);
}

vuint32mf2_t test_vrgather_vx_u32mf2_ta(vuint32mf2_t op1, size_t index, size_t vl) {
  return vrgather_ta(op1, index, vl);
}

vuint32m1_t test_vrgather_vv_u32m1_ta(vuint32m1_t op1, vuint32m1_t index, size_t vl) {
  return vrgather_ta(op1, index, vl);
}

vuint32m1_t test_vrgather_vx_u32m1_ta(vuint32m1_t op1, size_t index, size_t vl) {
  return vrgather_ta(op1, index, vl);
}

vuint32m2_t test_vrgather_vv_u32m2_ta(vuint32m2_t op1, vuint32m2_t index, size_t vl) {
  return vrgather_ta(op1, index, vl);
}

vuint32m2_t test_vrgather_vx_u32m2_ta(vuint32m2_t op1, size_t index, size_t vl) {
  return vrgather_ta(op1, index, vl);
}

vuint32m4_t test_vrgather_vv_u32m4_ta(vuint32m4_t op1, vuint32m4_t index, size_t vl) {
  return vrgather_ta(op1, index, vl);
}

vuint32m4_t test_vrgather_vx_u32m4_ta(vuint32m4_t op1, size_t index, size_t vl) {
  return vrgather_ta(op1, index, vl);
}

vuint32m8_t test_vrgather_vv_u32m8_ta(vuint32m8_t op1, vuint32m8_t index, size_t vl) {
  return vrgather_ta(op1, index, vl);
}

vuint32m8_t test_vrgather_vx_u32m8_ta(vuint32m8_t op1, size_t index, size_t vl) {
  return vrgather_ta(op1, index, vl);
}

vuint64m1_t test_vrgather_vv_u64m1_ta(vuint64m1_t op1, vuint64m1_t index, size_t vl) {
  return vrgather_ta(op1, index, vl);
}

vuint64m1_t test_vrgather_vx_u64m1_ta(vuint64m1_t op1, size_t index, size_t vl) {
  return vrgather_ta(op1, index, vl);
}

vuint64m2_t test_vrgather_vv_u64m2_ta(vuint64m2_t op1, vuint64m2_t index, size_t vl) {
  return vrgather_ta(op1, index, vl);
}

vuint64m2_t test_vrgather_vx_u64m2_ta(vuint64m2_t op1, size_t index, size_t vl) {
  return vrgather_ta(op1, index, vl);
}

vuint64m4_t test_vrgather_vv_u64m4_ta(vuint64m4_t op1, vuint64m4_t index, size_t vl) {
  return vrgather_ta(op1, index, vl);
}

vuint64m4_t test_vrgather_vx_u64m4_ta(vuint64m4_t op1, size_t index, size_t vl) {
  return vrgather_ta(op1, index, vl);
}

vuint64m8_t test_vrgather_vv_u64m8_ta(vuint64m8_t op1, vuint64m8_t index, size_t vl) {
  return vrgather_ta(op1, index, vl);
}

vuint64m8_t test_vrgather_vx_u64m8_ta(vuint64m8_t op1, size_t index, size_t vl) {
  return vrgather_ta(op1, index, vl);
}

vfloat16mf4_t test_vrgather_vv_f16mf4_tuma(vbool64_t mask, vfloat16mf4_t maskedoff, vfloat16mf4_t op1, vuint16mf4_t index, size_t vl) {
  return vrgather_tuma(mask, maskedoff, op1, index, vl);
}

vfloat16mf4_t test_vrgather_vx_f16mf4_tuma(vbool64_t mask, vfloat16mf4_t maskedoff, vfloat16mf4_t op1, size_t index, size_t vl) {
  return vrgather_tuma(mask, maskedoff, op1, index, vl);
}

vfloat16mf2_t test_vrgather_vv_f16mf2_tuma(vbool32_t mask, vfloat16mf2_t maskedoff, vfloat16mf2_t op1, vuint16mf2_t index, size_t vl) {
  return vrgather_tuma(mask, maskedoff, op1, index, vl);
}

vfloat16mf2_t test_vrgather_vx_f16mf2_tuma(vbool32_t mask, vfloat16mf2_t maskedoff, vfloat16mf2_t op1, size_t index, size_t vl) {
  return vrgather_tuma(mask, maskedoff, op1, index, vl);
}

vfloat16m1_t test_vrgather_vv_f16m1_tuma(vbool16_t mask, vfloat16m1_t maskedoff, vfloat16m1_t op1, vuint16m1_t index, size_t vl) {
  return vrgather_tuma(mask, maskedoff, op1, index, vl);
}

vfloat16m1_t test_vrgather_vx_f16m1_tuma(vbool16_t mask, vfloat16m1_t maskedoff, vfloat16m1_t op1, size_t index, size_t vl) {
  return vrgather_tuma(mask, maskedoff, op1, index, vl);
}

vfloat16m2_t test_vrgather_vv_f16m2_tuma(vbool8_t mask, vfloat16m2_t maskedoff, vfloat16m2_t op1, vuint16m2_t index, size_t vl) {
  return vrgather_tuma(mask, maskedoff, op1, index, vl);
}

vfloat16m2_t test_vrgather_vx_f16m2_tuma(vbool8_t mask, vfloat16m2_t maskedoff, vfloat16m2_t op1, size_t index, size_t vl) {
  return vrgather_tuma(mask, maskedoff, op1, index, vl);
}

vfloat16m4_t test_vrgather_vv_f16m4_tuma(vbool4_t mask, vfloat16m4_t maskedoff, vfloat16m4_t op1, vuint16m4_t index, size_t vl) {
  return vrgather_tuma(mask, maskedoff, op1, index, vl);
}

vfloat16m4_t test_vrgather_vx_f16m4_tuma(vbool4_t mask, vfloat16m4_t maskedoff, vfloat16m4_t op1, size_t index, size_t vl) {
  return vrgather_tuma(mask, maskedoff, op1, index, vl);
}

vfloat16m8_t test_vrgather_vv_f16m8_tuma(vbool2_t mask, vfloat16m8_t maskedoff, vfloat16m8_t op1, vuint16m8_t index, size_t vl) {
  return vrgather_tuma(mask, maskedoff, op1, index, vl);
}

vfloat16m8_t test_vrgather_vx_f16m8_tuma(vbool2_t mask, vfloat16m8_t maskedoff, vfloat16m8_t op1, size_t index, size_t vl) {
  return vrgather_tuma(mask, maskedoff, op1, index, vl);
}

vfloat32mf2_t test_vrgather_vv_f32mf2_tuma(vbool64_t mask, vfloat32mf2_t maskedoff, vfloat32mf2_t op1, vuint32mf2_t index, size_t vl) {
  return vrgather_tuma(mask, maskedoff, op1, index, vl);
}

vfloat32mf2_t test_vrgather_vx_f32mf2_tuma(vbool64_t mask, vfloat32mf2_t maskedoff, vfloat32mf2_t op1, size_t index, size_t vl) {
  return vrgather_tuma(mask, maskedoff, op1, index, vl);
}

vfloat32m1_t test_vrgather_vv_f32m1_tuma(vbool32_t mask, vfloat32m1_t maskedoff, vfloat32m1_t op1, vuint32m1_t index, size_t vl) {
  return vrgather_tuma(mask, maskedoff, op1, index, vl);
}

vfloat32m1_t test_vrgather_vx_f32m1_tuma(vbool32_t mask, vfloat32m1_t maskedoff, vfloat32m1_t op1, size_t index, size_t vl) {
  return vrgather_tuma(mask, maskedoff, op1, index, vl);
}

vfloat32m2_t test_vrgather_vv_f32m2_tuma(vbool16_t mask, vfloat32m2_t maskedoff, vfloat32m2_t op1, vuint32m2_t index, size_t vl) {
  return vrgather_tuma(mask, maskedoff, op1, index, vl);
}

vfloat32m2_t test_vrgather_vx_f32m2_tuma(vbool16_t mask, vfloat32m2_t maskedoff, vfloat32m2_t op1, size_t index, size_t vl) {
  return vrgather_tuma(mask, maskedoff, op1, index, vl);
}

vfloat32m4_t test_vrgather_vv_f32m4_tuma(vbool8_t mask, vfloat32m4_t maskedoff, vfloat32m4_t op1, vuint32m4_t index, size_t vl) {
  return vrgather_tuma(mask, maskedoff, op1, index, vl);
}

vfloat32m4_t test_vrgather_vx_f32m4_tuma(vbool8_t mask, vfloat32m4_t maskedoff, vfloat32m4_t op1, size_t index, size_t vl) {
  return vrgather_tuma(mask, maskedoff, op1, index, vl);
}

vfloat32m8_t test_vrgather_vv_f32m8_tuma(vbool4_t mask, vfloat32m8_t maskedoff, vfloat32m8_t op1, vuint32m8_t index, size_t vl) {
  return vrgather_tuma(mask, maskedoff, op1, index, vl);
}

vfloat32m8_t test_vrgather_vx_f32m8_tuma(vbool4_t mask, vfloat32m8_t maskedoff, vfloat32m8_t op1, size_t index, size_t vl) {
  return vrgather_tuma(mask, maskedoff, op1, index, vl);
}

vfloat64m1_t test_vrgather_vv_f64m1_tuma(vbool64_t mask, vfloat64m1_t maskedoff, vfloat64m1_t op1, vuint64m1_t index, size_t vl) {
  return vrgather_tuma(mask, maskedoff, op1, index, vl);
}

vfloat64m1_t test_vrgather_vx_f64m1_tuma(vbool64_t mask, vfloat64m1_t maskedoff, vfloat64m1_t op1, size_t index, size_t vl) {
  return vrgather_tuma(mask, maskedoff, op1, index, vl);
}

vfloat64m2_t test_vrgather_vv_f64m2_tuma(vbool32_t mask, vfloat64m2_t maskedoff, vfloat64m2_t op1, vuint64m2_t index, size_t vl) {
  return vrgather_tuma(mask, maskedoff, op1, index, vl);
}

vfloat64m2_t test_vrgather_vx_f64m2_tuma(vbool32_t mask, vfloat64m2_t maskedoff, vfloat64m2_t op1, size_t index, size_t vl) {
  return vrgather_tuma(mask, maskedoff, op1, index, vl);
}

vfloat64m4_t test_vrgather_vv_f64m4_tuma(vbool16_t mask, vfloat64m4_t maskedoff, vfloat64m4_t op1, vuint64m4_t index, size_t vl) {
  return vrgather_tuma(mask, maskedoff, op1, index, vl);
}

vfloat64m4_t test_vrgather_vx_f64m4_tuma(vbool16_t mask, vfloat64m4_t maskedoff, vfloat64m4_t op1, size_t index, size_t vl) {
  return vrgather_tuma(mask, maskedoff, op1, index, vl);
}

vfloat64m8_t test_vrgather_vv_f64m8_tuma(vbool8_t mask, vfloat64m8_t maskedoff, vfloat64m8_t op1, vuint64m8_t index, size_t vl) {
  return vrgather_tuma(mask, maskedoff, op1, index, vl);
}

vfloat64m8_t test_vrgather_vx_f64m8_tuma(vbool8_t mask, vfloat64m8_t maskedoff, vfloat64m8_t op1, size_t index, size_t vl) {
  return vrgather_tuma(mask, maskedoff, op1, index, vl);
}

vint8mf8_t test_vrgather_vv_i8mf8_tuma(vbool64_t mask, vint8mf8_t maskedoff, vint8mf8_t op1, vuint8mf8_t index, size_t vl) {
  return vrgather_tuma(mask, maskedoff, op1, index, vl);
}

vint8mf8_t test_vrgather_vx_i8mf8_tuma(vbool64_t mask, vint8mf8_t maskedoff, vint8mf8_t op1, size_t index, size_t vl) {
  return vrgather_tuma(mask, maskedoff, op1, index, vl);
}

vint8mf4_t test_vrgather_vv_i8mf4_tuma(vbool32_t mask, vint8mf4_t maskedoff, vint8mf4_t op1, vuint8mf4_t index, size_t vl) {
  return vrgather_tuma(mask, maskedoff, op1, index, vl);
}

vint8mf4_t test_vrgather_vx_i8mf4_tuma(vbool32_t mask, vint8mf4_t maskedoff, vint8mf4_t op1, size_t index, size_t vl) {
  return vrgather_tuma(mask, maskedoff, op1, index, vl);
}

vint8mf2_t test_vrgather_vv_i8mf2_tuma(vbool16_t mask, vint8mf2_t maskedoff, vint8mf2_t op1, vuint8mf2_t index, size_t vl) {
  return vrgather_tuma(mask, maskedoff, op1, index, vl);
}

vint8mf2_t test_vrgather_vx_i8mf2_tuma(vbool16_t mask, vint8mf2_t maskedoff, vint8mf2_t op1, size_t index, size_t vl) {
  return vrgather_tuma(mask, maskedoff, op1, index, vl);
}

vint8m1_t test_vrgather_vv_i8m1_tuma(vbool8_t mask, vint8m1_t maskedoff, vint8m1_t op1, vuint8m1_t index, size_t vl) {
  return vrgather_tuma(mask, maskedoff, op1, index, vl);
}

vint8m1_t test_vrgather_vx_i8m1_tuma(vbool8_t mask, vint8m1_t maskedoff, vint8m1_t op1, size_t index, size_t vl) {
  return vrgather_tuma(mask, maskedoff, op1, index, vl);
}

vint8m2_t test_vrgather_vv_i8m2_tuma(vbool4_t mask, vint8m2_t maskedoff, vint8m2_t op1, vuint8m2_t index, size_t vl) {
  return vrgather_tuma(mask, maskedoff, op1, index, vl);
}

vint8m2_t test_vrgather_vx_i8m2_tuma(vbool4_t mask, vint8m2_t maskedoff, vint8m2_t op1, size_t index, size_t vl) {
  return vrgather_tuma(mask, maskedoff, op1, index, vl);
}

vint8m4_t test_vrgather_vv_i8m4_tuma(vbool2_t mask, vint8m4_t maskedoff, vint8m4_t op1, vuint8m4_t index, size_t vl) {
  return vrgather_tuma(mask, maskedoff, op1, index, vl);
}

vint8m4_t test_vrgather_vx_i8m4_tuma(vbool2_t mask, vint8m4_t maskedoff, vint8m4_t op1, size_t index, size_t vl) {
  return vrgather_tuma(mask, maskedoff, op1, index, vl);
}

vint8m8_t test_vrgather_vv_i8m8_tuma(vbool1_t mask, vint8m8_t maskedoff, vint8m8_t op1, vuint8m8_t index, size_t vl) {
  return vrgather_tuma(mask, maskedoff, op1, index, vl);
}

vint8m8_t test_vrgather_vx_i8m8_tuma(vbool1_t mask, vint8m8_t maskedoff, vint8m8_t op1, size_t index, size_t vl) {
  return vrgather_tuma(mask, maskedoff, op1, index, vl);
}

vint16mf4_t test_vrgather_vv_i16mf4_tuma(vbool64_t mask, vint16mf4_t maskedoff, vint16mf4_t op1, vuint16mf4_t index, size_t vl) {
  return vrgather_tuma(mask, maskedoff, op1, index, vl);
}

vint16mf4_t test_vrgather_vx_i16mf4_tuma(vbool64_t mask, vint16mf4_t maskedoff, vint16mf4_t op1, size_t index, size_t vl) {
  return vrgather_tuma(mask, maskedoff, op1, index, vl);
}

vint16mf2_t test_vrgather_vv_i16mf2_tuma(vbool32_t mask, vint16mf2_t maskedoff, vint16mf2_t op1, vuint16mf2_t index, size_t vl) {
  return vrgather_tuma(mask, maskedoff, op1, index, vl);
}

vint16mf2_t test_vrgather_vx_i16mf2_tuma(vbool32_t mask, vint16mf2_t maskedoff, vint16mf2_t op1, size_t index, size_t vl) {
  return vrgather_tuma(mask, maskedoff, op1, index, vl);
}

vint16m1_t test_vrgather_vv_i16m1_tuma(vbool16_t mask, vint16m1_t maskedoff, vint16m1_t op1, vuint16m1_t index, size_t vl) {
  return vrgather_tuma(mask, maskedoff, op1, index, vl);
}

vint16m1_t test_vrgather_vx_i16m1_tuma(vbool16_t mask, vint16m1_t maskedoff, vint16m1_t op1, size_t index, size_t vl) {
  return vrgather_tuma(mask, maskedoff, op1, index, vl);
}

vint16m2_t test_vrgather_vv_i16m2_tuma(vbool8_t mask, vint16m2_t maskedoff, vint16m2_t op1, vuint16m2_t index, size_t vl) {
  return vrgather_tuma(mask, maskedoff, op1, index, vl);
}

vint16m2_t test_vrgather_vx_i16m2_tuma(vbool8_t mask, vint16m2_t maskedoff, vint16m2_t op1, size_t index, size_t vl) {
  return vrgather_tuma(mask, maskedoff, op1, index, vl);
}

vint16m4_t test_vrgather_vv_i16m4_tuma(vbool4_t mask, vint16m4_t maskedoff, vint16m4_t op1, vuint16m4_t index, size_t vl) {
  return vrgather_tuma(mask, maskedoff, op1, index, vl);
}

vint16m4_t test_vrgather_vx_i16m4_tuma(vbool4_t mask, vint16m4_t maskedoff, vint16m4_t op1, size_t index, size_t vl) {
  return vrgather_tuma(mask, maskedoff, op1, index, vl);
}

vint16m8_t test_vrgather_vv_i16m8_tuma(vbool2_t mask, vint16m8_t maskedoff, vint16m8_t op1, vuint16m8_t index, size_t vl) {
  return vrgather_tuma(mask, maskedoff, op1, index, vl);
}

vint16m8_t test_vrgather_vx_i16m8_tuma(vbool2_t mask, vint16m8_t maskedoff, vint16m8_t op1, size_t index, size_t vl) {
  return vrgather_tuma(mask, maskedoff, op1, index, vl);
}

vint32mf2_t test_vrgather_vv_i32mf2_tuma(vbool64_t mask, vint32mf2_t maskedoff, vint32mf2_t op1, vuint32mf2_t index, size_t vl) {
  return vrgather_tuma(mask, maskedoff, op1, index, vl);
}

vint32mf2_t test_vrgather_vx_i32mf2_tuma(vbool64_t mask, vint32mf2_t maskedoff, vint32mf2_t op1, size_t index, size_t vl) {
  return vrgather_tuma(mask, maskedoff, op1, index, vl);
}

vint32m1_t test_vrgather_vv_i32m1_tuma(vbool32_t mask, vint32m1_t maskedoff, vint32m1_t op1, vuint32m1_t index, size_t vl) {
  return vrgather_tuma(mask, maskedoff, op1, index, vl);
}

vint32m1_t test_vrgather_vx_i32m1_tuma(vbool32_t mask, vint32m1_t maskedoff, vint32m1_t op1, size_t index, size_t vl) {
  return vrgather_tuma(mask, maskedoff, op1, index, vl);
}

vint32m2_t test_vrgather_vv_i32m2_tuma(vbool16_t mask, vint32m2_t maskedoff, vint32m2_t op1, vuint32m2_t index, size_t vl) {
  return vrgather_tuma(mask, maskedoff, op1, index, vl);
}

vint32m2_t test_vrgather_vx_i32m2_tuma(vbool16_t mask, vint32m2_t maskedoff, vint32m2_t op1, size_t index, size_t vl) {
  return vrgather_tuma(mask, maskedoff, op1, index, vl);
}

vint32m4_t test_vrgather_vv_i32m4_tuma(vbool8_t mask, vint32m4_t maskedoff, vint32m4_t op1, vuint32m4_t index, size_t vl) {
  return vrgather_tuma(mask, maskedoff, op1, index, vl);
}

vint32m4_t test_vrgather_vx_i32m4_tuma(vbool8_t mask, vint32m4_t maskedoff, vint32m4_t op1, size_t index, size_t vl) {
  return vrgather_tuma(mask, maskedoff, op1, index, vl);
}

vint32m8_t test_vrgather_vv_i32m8_tuma(vbool4_t mask, vint32m8_t maskedoff, vint32m8_t op1, vuint32m8_t index, size_t vl) {
  return vrgather_tuma(mask, maskedoff, op1, index, vl);
}

vint32m8_t test_vrgather_vx_i32m8_tuma(vbool4_t mask, vint32m8_t maskedoff, vint32m8_t op1, size_t index, size_t vl) {
  return vrgather_tuma(mask, maskedoff, op1, index, vl);
}

vint64m1_t test_vrgather_vv_i64m1_tuma(vbool64_t mask, vint64m1_t maskedoff, vint64m1_t op1, vuint64m1_t index, size_t vl) {
  return vrgather_tuma(mask, maskedoff, op1, index, vl);
}

vint64m1_t test_vrgather_vx_i64m1_tuma(vbool64_t mask, vint64m1_t maskedoff, vint64m1_t op1, size_t index, size_t vl) {
  return vrgather_tuma(mask, maskedoff, op1, index, vl);
}

vint64m2_t test_vrgather_vv_i64m2_tuma(vbool32_t mask, vint64m2_t maskedoff, vint64m2_t op1, vuint64m2_t index, size_t vl) {
  return vrgather_tuma(mask, maskedoff, op1, index, vl);
}

vint64m2_t test_vrgather_vx_i64m2_tuma(vbool32_t mask, vint64m2_t maskedoff, vint64m2_t op1, size_t index, size_t vl) {
  return vrgather_tuma(mask, maskedoff, op1, index, vl);
}

vint64m4_t test_vrgather_vv_i64m4_tuma(vbool16_t mask, vint64m4_t maskedoff, vint64m4_t op1, vuint64m4_t index, size_t vl) {
  return vrgather_tuma(mask, maskedoff, op1, index, vl);
}

vint64m4_t test_vrgather_vx_i64m4_tuma(vbool16_t mask, vint64m4_t maskedoff, vint64m4_t op1, size_t index, size_t vl) {
  return vrgather_tuma(mask, maskedoff, op1, index, vl);
}

vint64m8_t test_vrgather_vv_i64m8_tuma(vbool8_t mask, vint64m8_t maskedoff, vint64m8_t op1, vuint64m8_t index, size_t vl) {
  return vrgather_tuma(mask, maskedoff, op1, index, vl);
}

vint64m8_t test_vrgather_vx_i64m8_tuma(vbool8_t mask, vint64m8_t maskedoff, vint64m8_t op1, size_t index, size_t vl) {
  return vrgather_tuma(mask, maskedoff, op1, index, vl);
}

vuint8mf8_t test_vrgather_vv_u8mf8_tuma(vbool64_t mask, vuint8mf8_t maskedoff, vuint8mf8_t op1, vuint8mf8_t index, size_t vl) {
  return vrgather_tuma(mask, maskedoff, op1, index, vl);
}

vuint8mf8_t test_vrgather_vx_u8mf8_tuma(vbool64_t mask, vuint8mf8_t maskedoff, vuint8mf8_t op1, size_t index, size_t vl) {
  return vrgather_tuma(mask, maskedoff, op1, index, vl);
}

vuint8mf4_t test_vrgather_vv_u8mf4_tuma(vbool32_t mask, vuint8mf4_t maskedoff, vuint8mf4_t op1, vuint8mf4_t index, size_t vl) {
  return vrgather_tuma(mask, maskedoff, op1, index, vl);
}

vuint8mf4_t test_vrgather_vx_u8mf4_tuma(vbool32_t mask, vuint8mf4_t maskedoff, vuint8mf4_t op1, size_t index, size_t vl) {
  return vrgather_tuma(mask, maskedoff, op1, index, vl);
}

vuint8mf2_t test_vrgather_vv_u8mf2_tuma(vbool16_t mask, vuint8mf2_t maskedoff, vuint8mf2_t op1, vuint8mf2_t index, size_t vl) {
  return vrgather_tuma(mask, maskedoff, op1, index, vl);
}

vuint8mf2_t test_vrgather_vx_u8mf2_tuma(vbool16_t mask, vuint8mf2_t maskedoff, vuint8mf2_t op1, size_t index, size_t vl) {
  return vrgather_tuma(mask, maskedoff, op1, index, vl);
}

vuint8m1_t test_vrgather_vv_u8m1_tuma(vbool8_t mask, vuint8m1_t maskedoff, vuint8m1_t op1, vuint8m1_t index, size_t vl) {
  return vrgather_tuma(mask, maskedoff, op1, index, vl);
}

vuint8m1_t test_vrgather_vx_u8m1_tuma(vbool8_t mask, vuint8m1_t maskedoff, vuint8m1_t op1, size_t index, size_t vl) {
  return vrgather_tuma(mask, maskedoff, op1, index, vl);
}

vuint8m2_t test_vrgather_vv_u8m2_tuma(vbool4_t mask, vuint8m2_t maskedoff, vuint8m2_t op1, vuint8m2_t index, size_t vl) {
  return vrgather_tuma(mask, maskedoff, op1, index, vl);
}

vuint8m2_t test_vrgather_vx_u8m2_tuma(vbool4_t mask, vuint8m2_t maskedoff, vuint8m2_t op1, size_t index, size_t vl) {
  return vrgather_tuma(mask, maskedoff, op1, index, vl);
}

vuint8m4_t test_vrgather_vv_u8m4_tuma(vbool2_t mask, vuint8m4_t maskedoff, vuint8m4_t op1, vuint8m4_t index, size_t vl) {
  return vrgather_tuma(mask, maskedoff, op1, index, vl);
}

vuint8m4_t test_vrgather_vx_u8m4_tuma(vbool2_t mask, vuint8m4_t maskedoff, vuint8m4_t op1, size_t index, size_t vl) {
  return vrgather_tuma(mask, maskedoff, op1, index, vl);
}

vuint8m8_t test_vrgather_vv_u8m8_tuma(vbool1_t mask, vuint8m8_t maskedoff, vuint8m8_t op1, vuint8m8_t index, size_t vl) {
  return vrgather_tuma(mask, maskedoff, op1, index, vl);
}

vuint8m8_t test_vrgather_vx_u8m8_tuma(vbool1_t mask, vuint8m8_t maskedoff, vuint8m8_t op1, size_t index, size_t vl) {
  return vrgather_tuma(mask, maskedoff, op1, index, vl);
}

vuint16mf4_t test_vrgather_vv_u16mf4_tuma(vbool64_t mask, vuint16mf4_t maskedoff, vuint16mf4_t op1, vuint16mf4_t index, size_t vl) {
  return vrgather_tuma(mask, maskedoff, op1, index, vl);
}

vuint16mf4_t test_vrgather_vx_u16mf4_tuma(vbool64_t mask, vuint16mf4_t maskedoff, vuint16mf4_t op1, size_t index, size_t vl) {
  return vrgather_tuma(mask, maskedoff, op1, index, vl);
}

vuint16mf2_t test_vrgather_vv_u16mf2_tuma(vbool32_t mask, vuint16mf2_t maskedoff, vuint16mf2_t op1, vuint16mf2_t index, size_t vl) {
  return vrgather_tuma(mask, maskedoff, op1, index, vl);
}

vuint16mf2_t test_vrgather_vx_u16mf2_tuma(vbool32_t mask, vuint16mf2_t maskedoff, vuint16mf2_t op1, size_t index, size_t vl) {
  return vrgather_tuma(mask, maskedoff, op1, index, vl);
}

vuint16m1_t test_vrgather_vv_u16m1_tuma(vbool16_t mask, vuint16m1_t maskedoff, vuint16m1_t op1, vuint16m1_t index, size_t vl) {
  return vrgather_tuma(mask, maskedoff, op1, index, vl);
}

vuint16m1_t test_vrgather_vx_u16m1_tuma(vbool16_t mask, vuint16m1_t maskedoff, vuint16m1_t op1, size_t index, size_t vl) {
  return vrgather_tuma(mask, maskedoff, op1, index, vl);
}

vuint16m2_t test_vrgather_vv_u16m2_tuma(vbool8_t mask, vuint16m2_t maskedoff, vuint16m2_t op1, vuint16m2_t index, size_t vl) {
  return vrgather_tuma(mask, maskedoff, op1, index, vl);
}

vuint16m2_t test_vrgather_vx_u16m2_tuma(vbool8_t mask, vuint16m2_t maskedoff, vuint16m2_t op1, size_t index, size_t vl) {
  return vrgather_tuma(mask, maskedoff, op1, index, vl);
}

vuint16m4_t test_vrgather_vv_u16m4_tuma(vbool4_t mask, vuint16m4_t maskedoff, vuint16m4_t op1, vuint16m4_t index, size_t vl) {
  return vrgather_tuma(mask, maskedoff, op1, index, vl);
}

vuint16m4_t test_vrgather_vx_u16m4_tuma(vbool4_t mask, vuint16m4_t maskedoff, vuint16m4_t op1, size_t index, size_t vl) {
  return vrgather_tuma(mask, maskedoff, op1, index, vl);
}

vuint16m8_t test_vrgather_vv_u16m8_tuma(vbool2_t mask, vuint16m8_t maskedoff, vuint16m8_t op1, vuint16m8_t index, size_t vl) {
  return vrgather_tuma(mask, maskedoff, op1, index, vl);
}

vuint16m8_t test_vrgather_vx_u16m8_tuma(vbool2_t mask, vuint16m8_t maskedoff, vuint16m8_t op1, size_t index, size_t vl) {
  return vrgather_tuma(mask, maskedoff, op1, index, vl);
}

vuint32mf2_t test_vrgather_vv_u32mf2_tuma(vbool64_t mask, vuint32mf2_t maskedoff, vuint32mf2_t op1, vuint32mf2_t index, size_t vl) {
  return vrgather_tuma(mask, maskedoff, op1, index, vl);
}

vuint32mf2_t test_vrgather_vx_u32mf2_tuma(vbool64_t mask, vuint32mf2_t maskedoff, vuint32mf2_t op1, size_t index, size_t vl) {
  return vrgather_tuma(mask, maskedoff, op1, index, vl);
}

vuint32m1_t test_vrgather_vv_u32m1_tuma(vbool32_t mask, vuint32m1_t maskedoff, vuint32m1_t op1, vuint32m1_t index, size_t vl) {
  return vrgather_tuma(mask, maskedoff, op1, index, vl);
}

vuint32m1_t test_vrgather_vx_u32m1_tuma(vbool32_t mask, vuint32m1_t maskedoff, vuint32m1_t op1, size_t index, size_t vl) {
  return vrgather_tuma(mask, maskedoff, op1, index, vl);
}

vuint32m2_t test_vrgather_vv_u32m2_tuma(vbool16_t mask, vuint32m2_t maskedoff, vuint32m2_t op1, vuint32m2_t index, size_t vl) {
  return vrgather_tuma(mask, maskedoff, op1, index, vl);
}

vuint32m2_t test_vrgather_vx_u32m2_tuma(vbool16_t mask, vuint32m2_t maskedoff, vuint32m2_t op1, size_t index, size_t vl) {
  return vrgather_tuma(mask, maskedoff, op1, index, vl);
}

vuint32m4_t test_vrgather_vv_u32m4_tuma(vbool8_t mask, vuint32m4_t maskedoff, vuint32m4_t op1, vuint32m4_t index, size_t vl) {
  return vrgather_tuma(mask, maskedoff, op1, index, vl);
}

vuint32m4_t test_vrgather_vx_u32m4_tuma(vbool8_t mask, vuint32m4_t maskedoff, vuint32m4_t op1, size_t index, size_t vl) {
  return vrgather_tuma(mask, maskedoff, op1, index, vl);
}

vuint32m8_t test_vrgather_vv_u32m8_tuma(vbool4_t mask, vuint32m8_t maskedoff, vuint32m8_t op1, vuint32m8_t index, size_t vl) {
  return vrgather_tuma(mask, maskedoff, op1, index, vl);
}

vuint32m8_t test_vrgather_vx_u32m8_tuma(vbool4_t mask, vuint32m8_t maskedoff, vuint32m8_t op1, size_t index, size_t vl) {
  return vrgather_tuma(mask, maskedoff, op1, index, vl);
}

vuint64m1_t test_vrgather_vv_u64m1_tuma(vbool64_t mask, vuint64m1_t maskedoff, vuint64m1_t op1, vuint64m1_t index, size_t vl) {
  return vrgather_tuma(mask, maskedoff, op1, index, vl);
}

vuint64m1_t test_vrgather_vx_u64m1_tuma(vbool64_t mask, vuint64m1_t maskedoff, vuint64m1_t op1, size_t index, size_t vl) {
  return vrgather_tuma(mask, maskedoff, op1, index, vl);
}

vuint64m2_t test_vrgather_vv_u64m2_tuma(vbool32_t mask, vuint64m2_t maskedoff, vuint64m2_t op1, vuint64m2_t index, size_t vl) {
  return vrgather_tuma(mask, maskedoff, op1, index, vl);
}

vuint64m2_t test_vrgather_vx_u64m2_tuma(vbool32_t mask, vuint64m2_t maskedoff, vuint64m2_t op1, size_t index, size_t vl) {
  return vrgather_tuma(mask, maskedoff, op1, index, vl);
}

vuint64m4_t test_vrgather_vv_u64m4_tuma(vbool16_t mask, vuint64m4_t maskedoff, vuint64m4_t op1, vuint64m4_t index, size_t vl) {
  return vrgather_tuma(mask, maskedoff, op1, index, vl);
}

vuint64m4_t test_vrgather_vx_u64m4_tuma(vbool16_t mask, vuint64m4_t maskedoff, vuint64m4_t op1, size_t index, size_t vl) {
  return vrgather_tuma(mask, maskedoff, op1, index, vl);
}

vuint64m8_t test_vrgather_vv_u64m8_tuma(vbool8_t mask, vuint64m8_t maskedoff, vuint64m8_t op1, vuint64m8_t index, size_t vl) {
  return vrgather_tuma(mask, maskedoff, op1, index, vl);
}

vuint64m8_t test_vrgather_vx_u64m8_tuma(vbool8_t mask, vuint64m8_t maskedoff, vuint64m8_t op1, size_t index, size_t vl) {
  return vrgather_tuma(mask, maskedoff, op1, index, vl);
}

vfloat16mf4_t test_vrgather_vv_f16mf4_tumu(vbool64_t mask, vfloat16mf4_t maskedoff, vfloat16mf4_t op1, vuint16mf4_t index, size_t vl) {
  return vrgather_tumu(mask, maskedoff, op1, index, vl);
}

vfloat16mf4_t test_vrgather_vx_f16mf4_tumu(vbool64_t mask, vfloat16mf4_t maskedoff, vfloat16mf4_t op1, size_t index, size_t vl) {
  return vrgather_tumu(mask, maskedoff, op1, index, vl);
}

vfloat16mf2_t test_vrgather_vv_f16mf2_tumu(vbool32_t mask, vfloat16mf2_t maskedoff, vfloat16mf2_t op1, vuint16mf2_t index, size_t vl) {
  return vrgather_tumu(mask, maskedoff, op1, index, vl);
}

vfloat16mf2_t test_vrgather_vx_f16mf2_tumu(vbool32_t mask, vfloat16mf2_t maskedoff, vfloat16mf2_t op1, size_t index, size_t vl) {
  return vrgather_tumu(mask, maskedoff, op1, index, vl);
}

vfloat16m1_t test_vrgather_vv_f16m1_tumu(vbool16_t mask, vfloat16m1_t maskedoff, vfloat16m1_t op1, vuint16m1_t index, size_t vl) {
  return vrgather_tumu(mask, maskedoff, op1, index, vl);
}

vfloat16m1_t test_vrgather_vx_f16m1_tumu(vbool16_t mask, vfloat16m1_t maskedoff, vfloat16m1_t op1, size_t index, size_t vl) {
  return vrgather_tumu(mask, maskedoff, op1, index, vl);
}

vfloat16m2_t test_vrgather_vv_f16m2_tumu(vbool8_t mask, vfloat16m2_t maskedoff, vfloat16m2_t op1, vuint16m2_t index, size_t vl) {
  return vrgather_tumu(mask, maskedoff, op1, index, vl);
}

vfloat16m2_t test_vrgather_vx_f16m2_tumu(vbool8_t mask, vfloat16m2_t maskedoff, vfloat16m2_t op1, size_t index, size_t vl) {
  return vrgather_tumu(mask, maskedoff, op1, index, vl);
}

vfloat16m4_t test_vrgather_vv_f16m4_tumu(vbool4_t mask, vfloat16m4_t maskedoff, vfloat16m4_t op1, vuint16m4_t index, size_t vl) {
  return vrgather_tumu(mask, maskedoff, op1, index, vl);
}

vfloat16m4_t test_vrgather_vx_f16m4_tumu(vbool4_t mask, vfloat16m4_t maskedoff, vfloat16m4_t op1, size_t index, size_t vl) {
  return vrgather_tumu(mask, maskedoff, op1, index, vl);
}

vfloat16m8_t test_vrgather_vv_f16m8_tumu(vbool2_t mask, vfloat16m8_t maskedoff, vfloat16m8_t op1, vuint16m8_t index, size_t vl) {
  return vrgather_tumu(mask, maskedoff, op1, index, vl);
}

vfloat16m8_t test_vrgather_vx_f16m8_tumu(vbool2_t mask, vfloat16m8_t maskedoff, vfloat16m8_t op1, size_t index, size_t vl) {
  return vrgather_tumu(mask, maskedoff, op1, index, vl);
}

vfloat32mf2_t test_vrgather_vv_f32mf2_tumu(vbool64_t mask, vfloat32mf2_t maskedoff, vfloat32mf2_t op1, vuint32mf2_t index, size_t vl) {
  return vrgather_tumu(mask, maskedoff, op1, index, vl);
}

vfloat32mf2_t test_vrgather_vx_f32mf2_tumu(vbool64_t mask, vfloat32mf2_t maskedoff, vfloat32mf2_t op1, size_t index, size_t vl) {
  return vrgather_tumu(mask, maskedoff, op1, index, vl);
}

vfloat32m1_t test_vrgather_vv_f32m1_tumu(vbool32_t mask, vfloat32m1_t maskedoff, vfloat32m1_t op1, vuint32m1_t index, size_t vl) {
  return vrgather_tumu(mask, maskedoff, op1, index, vl);
}

vfloat32m1_t test_vrgather_vx_f32m1_tumu(vbool32_t mask, vfloat32m1_t maskedoff, vfloat32m1_t op1, size_t index, size_t vl) {
  return vrgather_tumu(mask, maskedoff, op1, index, vl);
}

vfloat32m2_t test_vrgather_vv_f32m2_tumu(vbool16_t mask, vfloat32m2_t maskedoff, vfloat32m2_t op1, vuint32m2_t index, size_t vl) {
  return vrgather_tumu(mask, maskedoff, op1, index, vl);
}

vfloat32m2_t test_vrgather_vx_f32m2_tumu(vbool16_t mask, vfloat32m2_t maskedoff, vfloat32m2_t op1, size_t index, size_t vl) {
  return vrgather_tumu(mask, maskedoff, op1, index, vl);
}

vfloat32m4_t test_vrgather_vv_f32m4_tumu(vbool8_t mask, vfloat32m4_t maskedoff, vfloat32m4_t op1, vuint32m4_t index, size_t vl) {
  return vrgather_tumu(mask, maskedoff, op1, index, vl);
}

vfloat32m4_t test_vrgather_vx_f32m4_tumu(vbool8_t mask, vfloat32m4_t maskedoff, vfloat32m4_t op1, size_t index, size_t vl) {
  return vrgather_tumu(mask, maskedoff, op1, index, vl);
}

vfloat32m8_t test_vrgather_vv_f32m8_tumu(vbool4_t mask, vfloat32m8_t maskedoff, vfloat32m8_t op1, vuint32m8_t index, size_t vl) {
  return vrgather_tumu(mask, maskedoff, op1, index, vl);
}

vfloat32m8_t test_vrgather_vx_f32m8_tumu(vbool4_t mask, vfloat32m8_t maskedoff, vfloat32m8_t op1, size_t index, size_t vl) {
  return vrgather_tumu(mask, maskedoff, op1, index, vl);
}

vfloat64m1_t test_vrgather_vv_f64m1_tumu(vbool64_t mask, vfloat64m1_t maskedoff, vfloat64m1_t op1, vuint64m1_t index, size_t vl) {
  return vrgather_tumu(mask, maskedoff, op1, index, vl);
}

vfloat64m1_t test_vrgather_vx_f64m1_tumu(vbool64_t mask, vfloat64m1_t maskedoff, vfloat64m1_t op1, size_t index, size_t vl) {
  return vrgather_tumu(mask, maskedoff, op1, index, vl);
}

vfloat64m2_t test_vrgather_vv_f64m2_tumu(vbool32_t mask, vfloat64m2_t maskedoff, vfloat64m2_t op1, vuint64m2_t index, size_t vl) {
  return vrgather_tumu(mask, maskedoff, op1, index, vl);
}

vfloat64m2_t test_vrgather_vx_f64m2_tumu(vbool32_t mask, vfloat64m2_t maskedoff, vfloat64m2_t op1, size_t index, size_t vl) {
  return vrgather_tumu(mask, maskedoff, op1, index, vl);
}

vfloat64m4_t test_vrgather_vv_f64m4_tumu(vbool16_t mask, vfloat64m4_t maskedoff, vfloat64m4_t op1, vuint64m4_t index, size_t vl) {
  return vrgather_tumu(mask, maskedoff, op1, index, vl);
}

vfloat64m4_t test_vrgather_vx_f64m4_tumu(vbool16_t mask, vfloat64m4_t maskedoff, vfloat64m4_t op1, size_t index, size_t vl) {
  return vrgather_tumu(mask, maskedoff, op1, index, vl);
}

vfloat64m8_t test_vrgather_vv_f64m8_tumu(vbool8_t mask, vfloat64m8_t maskedoff, vfloat64m8_t op1, vuint64m8_t index, size_t vl) {
  return vrgather_tumu(mask, maskedoff, op1, index, vl);
}

vfloat64m8_t test_vrgather_vx_f64m8_tumu(vbool8_t mask, vfloat64m8_t maskedoff, vfloat64m8_t op1, size_t index, size_t vl) {
  return vrgather_tumu(mask, maskedoff, op1, index, vl);
}

vint8mf8_t test_vrgather_vv_i8mf8_tumu(vbool64_t mask, vint8mf8_t maskedoff, vint8mf8_t op1, vuint8mf8_t index, size_t vl) {
  return vrgather_tumu(mask, maskedoff, op1, index, vl);
}

vint8mf8_t test_vrgather_vx_i8mf8_tumu(vbool64_t mask, vint8mf8_t maskedoff, vint8mf8_t op1, size_t index, size_t vl) {
  return vrgather_tumu(mask, maskedoff, op1, index, vl);
}

vint8mf4_t test_vrgather_vv_i8mf4_tumu(vbool32_t mask, vint8mf4_t maskedoff, vint8mf4_t op1, vuint8mf4_t index, size_t vl) {
  return vrgather_tumu(mask, maskedoff, op1, index, vl);
}

vint8mf4_t test_vrgather_vx_i8mf4_tumu(vbool32_t mask, vint8mf4_t maskedoff, vint8mf4_t op1, size_t index, size_t vl) {
  return vrgather_tumu(mask, maskedoff, op1, index, vl);
}

vint8mf2_t test_vrgather_vv_i8mf2_tumu(vbool16_t mask, vint8mf2_t maskedoff, vint8mf2_t op1, vuint8mf2_t index, size_t vl) {
  return vrgather_tumu(mask, maskedoff, op1, index, vl);
}

vint8mf2_t test_vrgather_vx_i8mf2_tumu(vbool16_t mask, vint8mf2_t maskedoff, vint8mf2_t op1, size_t index, size_t vl) {
  return vrgather_tumu(mask, maskedoff, op1, index, vl);
}

vint8m1_t test_vrgather_vv_i8m1_tumu(vbool8_t mask, vint8m1_t maskedoff, vint8m1_t op1, vuint8m1_t index, size_t vl) {
  return vrgather_tumu(mask, maskedoff, op1, index, vl);
}

vint8m1_t test_vrgather_vx_i8m1_tumu(vbool8_t mask, vint8m1_t maskedoff, vint8m1_t op1, size_t index, size_t vl) {
  return vrgather_tumu(mask, maskedoff, op1, index, vl);
}

vint8m2_t test_vrgather_vv_i8m2_tumu(vbool4_t mask, vint8m2_t maskedoff, vint8m2_t op1, vuint8m2_t index, size_t vl) {
  return vrgather_tumu(mask, maskedoff, op1, index, vl);
}

vint8m2_t test_vrgather_vx_i8m2_tumu(vbool4_t mask, vint8m2_t maskedoff, vint8m2_t op1, size_t index, size_t vl) {
  return vrgather_tumu(mask, maskedoff, op1, index, vl);
}

vint8m4_t test_vrgather_vv_i8m4_tumu(vbool2_t mask, vint8m4_t maskedoff, vint8m4_t op1, vuint8m4_t index, size_t vl) {
  return vrgather_tumu(mask, maskedoff, op1, index, vl);
}

vint8m4_t test_vrgather_vx_i8m4_tumu(vbool2_t mask, vint8m4_t maskedoff, vint8m4_t op1, size_t index, size_t vl) {
  return vrgather_tumu(mask, maskedoff, op1, index, vl);
}

vint8m8_t test_vrgather_vv_i8m8_tumu(vbool1_t mask, vint8m8_t maskedoff, vint8m8_t op1, vuint8m8_t index, size_t vl) {
  return vrgather_tumu(mask, maskedoff, op1, index, vl);
}

vint8m8_t test_vrgather_vx_i8m8_tumu(vbool1_t mask, vint8m8_t maskedoff, vint8m8_t op1, size_t index, size_t vl) {
  return vrgather_tumu(mask, maskedoff, op1, index, vl);
}

vint16mf4_t test_vrgather_vv_i16mf4_tumu(vbool64_t mask, vint16mf4_t maskedoff, vint16mf4_t op1, vuint16mf4_t index, size_t vl) {
  return vrgather_tumu(mask, maskedoff, op1, index, vl);
}

vint16mf4_t test_vrgather_vx_i16mf4_tumu(vbool64_t mask, vint16mf4_t maskedoff, vint16mf4_t op1, size_t index, size_t vl) {
  return vrgather_tumu(mask, maskedoff, op1, index, vl);
}

vint16mf2_t test_vrgather_vv_i16mf2_tumu(vbool32_t mask, vint16mf2_t maskedoff, vint16mf2_t op1, vuint16mf2_t index, size_t vl) {
  return vrgather_tumu(mask, maskedoff, op1, index, vl);
}

vint16mf2_t test_vrgather_vx_i16mf2_tumu(vbool32_t mask, vint16mf2_t maskedoff, vint16mf2_t op1, size_t index, size_t vl) {
  return vrgather_tumu(mask, maskedoff, op1, index, vl);
}

vint16m1_t test_vrgather_vv_i16m1_tumu(vbool16_t mask, vint16m1_t maskedoff, vint16m1_t op1, vuint16m1_t index, size_t vl) {
  return vrgather_tumu(mask, maskedoff, op1, index, vl);
}

vint16m1_t test_vrgather_vx_i16m1_tumu(vbool16_t mask, vint16m1_t maskedoff, vint16m1_t op1, size_t index, size_t vl) {
  return vrgather_tumu(mask, maskedoff, op1, index, vl);
}

vint16m2_t test_vrgather_vv_i16m2_tumu(vbool8_t mask, vint16m2_t maskedoff, vint16m2_t op1, vuint16m2_t index, size_t vl) {
  return vrgather_tumu(mask, maskedoff, op1, index, vl);
}

vint16m2_t test_vrgather_vx_i16m2_tumu(vbool8_t mask, vint16m2_t maskedoff, vint16m2_t op1, size_t index, size_t vl) {
  return vrgather_tumu(mask, maskedoff, op1, index, vl);
}

vint16m4_t test_vrgather_vv_i16m4_tumu(vbool4_t mask, vint16m4_t maskedoff, vint16m4_t op1, vuint16m4_t index, size_t vl) {
  return vrgather_tumu(mask, maskedoff, op1, index, vl);
}

vint16m4_t test_vrgather_vx_i16m4_tumu(vbool4_t mask, vint16m4_t maskedoff, vint16m4_t op1, size_t index, size_t vl) {
  return vrgather_tumu(mask, maskedoff, op1, index, vl);
}

vint16m8_t test_vrgather_vv_i16m8_tumu(vbool2_t mask, vint16m8_t maskedoff, vint16m8_t op1, vuint16m8_t index, size_t vl) {
  return vrgather_tumu(mask, maskedoff, op1, index, vl);
}

vint16m8_t test_vrgather_vx_i16m8_tumu(vbool2_t mask, vint16m8_t maskedoff, vint16m8_t op1, size_t index, size_t vl) {
  return vrgather_tumu(mask, maskedoff, op1, index, vl);
}

vint32mf2_t test_vrgather_vv_i32mf2_tumu(vbool64_t mask, vint32mf2_t maskedoff, vint32mf2_t op1, vuint32mf2_t index, size_t vl) {
  return vrgather_tumu(mask, maskedoff, op1, index, vl);
}

vint32mf2_t test_vrgather_vx_i32mf2_tumu(vbool64_t mask, vint32mf2_t maskedoff, vint32mf2_t op1, size_t index, size_t vl) {
  return vrgather_tumu(mask, maskedoff, op1, index, vl);
}

vint32m1_t test_vrgather_vv_i32m1_tumu(vbool32_t mask, vint32m1_t maskedoff, vint32m1_t op1, vuint32m1_t index, size_t vl) {
  return vrgather_tumu(mask, maskedoff, op1, index, vl);
}

vint32m1_t test_vrgather_vx_i32m1_tumu(vbool32_t mask, vint32m1_t maskedoff, vint32m1_t op1, size_t index, size_t vl) {
  return vrgather_tumu(mask, maskedoff, op1, index, vl);
}

vint32m2_t test_vrgather_vv_i32m2_tumu(vbool16_t mask, vint32m2_t maskedoff, vint32m2_t op1, vuint32m2_t index, size_t vl) {
  return vrgather_tumu(mask, maskedoff, op1, index, vl);
}

vint32m2_t test_vrgather_vx_i32m2_tumu(vbool16_t mask, vint32m2_t maskedoff, vint32m2_t op1, size_t index, size_t vl) {
  return vrgather_tumu(mask, maskedoff, op1, index, vl);
}

vint32m4_t test_vrgather_vv_i32m4_tumu(vbool8_t mask, vint32m4_t maskedoff, vint32m4_t op1, vuint32m4_t index, size_t vl) {
  return vrgather_tumu(mask, maskedoff, op1, index, vl);
}

vint32m4_t test_vrgather_vx_i32m4_tumu(vbool8_t mask, vint32m4_t maskedoff, vint32m4_t op1, size_t index, size_t vl) {
  return vrgather_tumu(mask, maskedoff, op1, index, vl);
}

vint32m8_t test_vrgather_vv_i32m8_tumu(vbool4_t mask, vint32m8_t maskedoff, vint32m8_t op1, vuint32m8_t index, size_t vl) {
  return vrgather_tumu(mask, maskedoff, op1, index, vl);
}

vint32m8_t test_vrgather_vx_i32m8_tumu(vbool4_t mask, vint32m8_t maskedoff, vint32m8_t op1, size_t index, size_t vl) {
  return vrgather_tumu(mask, maskedoff, op1, index, vl);
}

vint64m1_t test_vrgather_vv_i64m1_tumu(vbool64_t mask, vint64m1_t maskedoff, vint64m1_t op1, vuint64m1_t index, size_t vl) {
  return vrgather_tumu(mask, maskedoff, op1, index, vl);
}

vint64m1_t test_vrgather_vx_i64m1_tumu(vbool64_t mask, vint64m1_t maskedoff, vint64m1_t op1, size_t index, size_t vl) {
  return vrgather_tumu(mask, maskedoff, op1, index, vl);
}

vint64m2_t test_vrgather_vv_i64m2_tumu(vbool32_t mask, vint64m2_t maskedoff, vint64m2_t op1, vuint64m2_t index, size_t vl) {
  return vrgather_tumu(mask, maskedoff, op1, index, vl);
}

vint64m2_t test_vrgather_vx_i64m2_tumu(vbool32_t mask, vint64m2_t maskedoff, vint64m2_t op1, size_t index, size_t vl) {
  return vrgather_tumu(mask, maskedoff, op1, index, vl);
}

vint64m4_t test_vrgather_vv_i64m4_tumu(vbool16_t mask, vint64m4_t maskedoff, vint64m4_t op1, vuint64m4_t index, size_t vl) {
  return vrgather_tumu(mask, maskedoff, op1, index, vl);
}

vint64m4_t test_vrgather_vx_i64m4_tumu(vbool16_t mask, vint64m4_t maskedoff, vint64m4_t op1, size_t index, size_t vl) {
  return vrgather_tumu(mask, maskedoff, op1, index, vl);
}

vint64m8_t test_vrgather_vv_i64m8_tumu(vbool8_t mask, vint64m8_t maskedoff, vint64m8_t op1, vuint64m8_t index, size_t vl) {
  return vrgather_tumu(mask, maskedoff, op1, index, vl);
}

vint64m8_t test_vrgather_vx_i64m8_tumu(vbool8_t mask, vint64m8_t maskedoff, vint64m8_t op1, size_t index, size_t vl) {
  return vrgather_tumu(mask, maskedoff, op1, index, vl);
}

vuint8mf8_t test_vrgather_vv_u8mf8_tumu(vbool64_t mask, vuint8mf8_t maskedoff, vuint8mf8_t op1, vuint8mf8_t index, size_t vl) {
  return vrgather_tumu(mask, maskedoff, op1, index, vl);
}

vuint8mf8_t test_vrgather_vx_u8mf8_tumu(vbool64_t mask, vuint8mf8_t maskedoff, vuint8mf8_t op1, size_t index, size_t vl) {
  return vrgather_tumu(mask, maskedoff, op1, index, vl);
}

vuint8mf4_t test_vrgather_vv_u8mf4_tumu(vbool32_t mask, vuint8mf4_t maskedoff, vuint8mf4_t op1, vuint8mf4_t index, size_t vl) {
  return vrgather_tumu(mask, maskedoff, op1, index, vl);
}

vuint8mf4_t test_vrgather_vx_u8mf4_tumu(vbool32_t mask, vuint8mf4_t maskedoff, vuint8mf4_t op1, size_t index, size_t vl) {
  return vrgather_tumu(mask, maskedoff, op1, index, vl);
}

vuint8mf2_t test_vrgather_vv_u8mf2_tumu(vbool16_t mask, vuint8mf2_t maskedoff, vuint8mf2_t op1, vuint8mf2_t index, size_t vl) {
  return vrgather_tumu(mask, maskedoff, op1, index, vl);
}

vuint8mf2_t test_vrgather_vx_u8mf2_tumu(vbool16_t mask, vuint8mf2_t maskedoff, vuint8mf2_t op1, size_t index, size_t vl) {
  return vrgather_tumu(mask, maskedoff, op1, index, vl);
}

vuint8m1_t test_vrgather_vv_u8m1_tumu(vbool8_t mask, vuint8m1_t maskedoff, vuint8m1_t op1, vuint8m1_t index, size_t vl) {
  return vrgather_tumu(mask, maskedoff, op1, index, vl);
}

vuint8m1_t test_vrgather_vx_u8m1_tumu(vbool8_t mask, vuint8m1_t maskedoff, vuint8m1_t op1, size_t index, size_t vl) {
  return vrgather_tumu(mask, maskedoff, op1, index, vl);
}

vuint8m2_t test_vrgather_vv_u8m2_tumu(vbool4_t mask, vuint8m2_t maskedoff, vuint8m2_t op1, vuint8m2_t index, size_t vl) {
  return vrgather_tumu(mask, maskedoff, op1, index, vl);
}

vuint8m2_t test_vrgather_vx_u8m2_tumu(vbool4_t mask, vuint8m2_t maskedoff, vuint8m2_t op1, size_t index, size_t vl) {
  return vrgather_tumu(mask, maskedoff, op1, index, vl);
}

vuint8m4_t test_vrgather_vv_u8m4_tumu(vbool2_t mask, vuint8m4_t maskedoff, vuint8m4_t op1, vuint8m4_t index, size_t vl) {
  return vrgather_tumu(mask, maskedoff, op1, index, vl);
}

vuint8m4_t test_vrgather_vx_u8m4_tumu(vbool2_t mask, vuint8m4_t maskedoff, vuint8m4_t op1, size_t index, size_t vl) {
  return vrgather_tumu(mask, maskedoff, op1, index, vl);
}

vuint8m8_t test_vrgather_vv_u8m8_tumu(vbool1_t mask, vuint8m8_t maskedoff, vuint8m8_t op1, vuint8m8_t index, size_t vl) {
  return vrgather_tumu(mask, maskedoff, op1, index, vl);
}

vuint8m8_t test_vrgather_vx_u8m8_tumu(vbool1_t mask, vuint8m8_t maskedoff, vuint8m8_t op1, size_t index, size_t vl) {
  return vrgather_tumu(mask, maskedoff, op1, index, vl);
}

vuint16mf4_t test_vrgather_vv_u16mf4_tumu(vbool64_t mask, vuint16mf4_t maskedoff, vuint16mf4_t op1, vuint16mf4_t index, size_t vl) {
  return vrgather_tumu(mask, maskedoff, op1, index, vl);
}

vuint16mf4_t test_vrgather_vx_u16mf4_tumu(vbool64_t mask, vuint16mf4_t maskedoff, vuint16mf4_t op1, size_t index, size_t vl) {
  return vrgather_tumu(mask, maskedoff, op1, index, vl);
}

vuint16mf2_t test_vrgather_vv_u16mf2_tumu(vbool32_t mask, vuint16mf2_t maskedoff, vuint16mf2_t op1, vuint16mf2_t index, size_t vl) {
  return vrgather_tumu(mask, maskedoff, op1, index, vl);
}

vuint16mf2_t test_vrgather_vx_u16mf2_tumu(vbool32_t mask, vuint16mf2_t maskedoff, vuint16mf2_t op1, size_t index, size_t vl) {
  return vrgather_tumu(mask, maskedoff, op1, index, vl);
}

vuint16m1_t test_vrgather_vv_u16m1_tumu(vbool16_t mask, vuint16m1_t maskedoff, vuint16m1_t op1, vuint16m1_t index, size_t vl) {
  return vrgather_tumu(mask, maskedoff, op1, index, vl);
}

vuint16m1_t test_vrgather_vx_u16m1_tumu(vbool16_t mask, vuint16m1_t maskedoff, vuint16m1_t op1, size_t index, size_t vl) {
  return vrgather_tumu(mask, maskedoff, op1, index, vl);
}

vuint16m2_t test_vrgather_vv_u16m2_tumu(vbool8_t mask, vuint16m2_t maskedoff, vuint16m2_t op1, vuint16m2_t index, size_t vl) {
  return vrgather_tumu(mask, maskedoff, op1, index, vl);
}

vuint16m2_t test_vrgather_vx_u16m2_tumu(vbool8_t mask, vuint16m2_t maskedoff, vuint16m2_t op1, size_t index, size_t vl) {
  return vrgather_tumu(mask, maskedoff, op1, index, vl);
}

vuint16m4_t test_vrgather_vv_u16m4_tumu(vbool4_t mask, vuint16m4_t maskedoff, vuint16m4_t op1, vuint16m4_t index, size_t vl) {
  return vrgather_tumu(mask, maskedoff, op1, index, vl);
}

vuint16m4_t test_vrgather_vx_u16m4_tumu(vbool4_t mask, vuint16m4_t maskedoff, vuint16m4_t op1, size_t index, size_t vl) {
  return vrgather_tumu(mask, maskedoff, op1, index, vl);
}

vuint16m8_t test_vrgather_vv_u16m8_tumu(vbool2_t mask, vuint16m8_t maskedoff, vuint16m8_t op1, vuint16m8_t index, size_t vl) {
  return vrgather_tumu(mask, maskedoff, op1, index, vl);
}

vuint16m8_t test_vrgather_vx_u16m8_tumu(vbool2_t mask, vuint16m8_t maskedoff, vuint16m8_t op1, size_t index, size_t vl) {
  return vrgather_tumu(mask, maskedoff, op1, index, vl);
}

vuint32mf2_t test_vrgather_vv_u32mf2_tumu(vbool64_t mask, vuint32mf2_t maskedoff, vuint32mf2_t op1, vuint32mf2_t index, size_t vl) {
  return vrgather_tumu(mask, maskedoff, op1, index, vl);
}

vuint32mf2_t test_vrgather_vx_u32mf2_tumu(vbool64_t mask, vuint32mf2_t maskedoff, vuint32mf2_t op1, size_t index, size_t vl) {
  return vrgather_tumu(mask, maskedoff, op1, index, vl);
}

vuint32m1_t test_vrgather_vv_u32m1_tumu(vbool32_t mask, vuint32m1_t maskedoff, vuint32m1_t op1, vuint32m1_t index, size_t vl) {
  return vrgather_tumu(mask, maskedoff, op1, index, vl);
}

vuint32m1_t test_vrgather_vx_u32m1_tumu(vbool32_t mask, vuint32m1_t maskedoff, vuint32m1_t op1, size_t index, size_t vl) {
  return vrgather_tumu(mask, maskedoff, op1, index, vl);
}

vuint32m2_t test_vrgather_vv_u32m2_tumu(vbool16_t mask, vuint32m2_t maskedoff, vuint32m2_t op1, vuint32m2_t index, size_t vl) {
  return vrgather_tumu(mask, maskedoff, op1, index, vl);
}

vuint32m2_t test_vrgather_vx_u32m2_tumu(vbool16_t mask, vuint32m2_t maskedoff, vuint32m2_t op1, size_t index, size_t vl) {
  return vrgather_tumu(mask, maskedoff, op1, index, vl);
}

vuint32m4_t test_vrgather_vv_u32m4_tumu(vbool8_t mask, vuint32m4_t maskedoff, vuint32m4_t op1, vuint32m4_t index, size_t vl) {
  return vrgather_tumu(mask, maskedoff, op1, index, vl);
}

vuint32m4_t test_vrgather_vx_u32m4_tumu(vbool8_t mask, vuint32m4_t maskedoff, vuint32m4_t op1, size_t index, size_t vl) {
  return vrgather_tumu(mask, maskedoff, op1, index, vl);
}

vuint32m8_t test_vrgather_vv_u32m8_tumu(vbool4_t mask, vuint32m8_t maskedoff, vuint32m8_t op1, vuint32m8_t index, size_t vl) {
  return vrgather_tumu(mask, maskedoff, op1, index, vl);
}

vuint32m8_t test_vrgather_vx_u32m8_tumu(vbool4_t mask, vuint32m8_t maskedoff, vuint32m8_t op1, size_t index, size_t vl) {
  return vrgather_tumu(mask, maskedoff, op1, index, vl);
}

vuint64m1_t test_vrgather_vv_u64m1_tumu(vbool64_t mask, vuint64m1_t maskedoff, vuint64m1_t op1, vuint64m1_t index, size_t vl) {
  return vrgather_tumu(mask, maskedoff, op1, index, vl);
}

vuint64m1_t test_vrgather_vx_u64m1_tumu(vbool64_t mask, vuint64m1_t maskedoff, vuint64m1_t op1, size_t index, size_t vl) {
  return vrgather_tumu(mask, maskedoff, op1, index, vl);
}

vuint64m2_t test_vrgather_vv_u64m2_tumu(vbool32_t mask, vuint64m2_t maskedoff, vuint64m2_t op1, vuint64m2_t index, size_t vl) {
  return vrgather_tumu(mask, maskedoff, op1, index, vl);
}

vuint64m2_t test_vrgather_vx_u64m2_tumu(vbool32_t mask, vuint64m2_t maskedoff, vuint64m2_t op1, size_t index, size_t vl) {
  return vrgather_tumu(mask, maskedoff, op1, index, vl);
}

vuint64m4_t test_vrgather_vv_u64m4_tumu(vbool16_t mask, vuint64m4_t maskedoff, vuint64m4_t op1, vuint64m4_t index, size_t vl) {
  return vrgather_tumu(mask, maskedoff, op1, index, vl);
}

vuint64m4_t test_vrgather_vx_u64m4_tumu(vbool16_t mask, vuint64m4_t maskedoff, vuint64m4_t op1, size_t index, size_t vl) {
  return vrgather_tumu(mask, maskedoff, op1, index, vl);
}

vuint64m8_t test_vrgather_vv_u64m8_tumu(vbool8_t mask, vuint64m8_t maskedoff, vuint64m8_t op1, vuint64m8_t index, size_t vl) {
  return vrgather_tumu(mask, maskedoff, op1, index, vl);
}

vuint64m8_t test_vrgather_vx_u64m8_tumu(vbool8_t mask, vuint64m8_t maskedoff, vuint64m8_t op1, size_t index, size_t vl) {
  return vrgather_tumu(mask, maskedoff, op1, index, vl);
}

vfloat16mf4_t test_vrgather_vv_f16mf4_tama(vbool64_t mask, vfloat16mf4_t op1, vuint16mf4_t index, size_t vl) {
  return vrgather_tama(mask, op1, index, vl);
}

vfloat16mf4_t test_vrgather_vx_f16mf4_tama(vbool64_t mask, vfloat16mf4_t op1, size_t index, size_t vl) {
  return vrgather_tama(mask, op1, index, vl);
}

vfloat16mf2_t test_vrgather_vv_f16mf2_tama(vbool32_t mask, vfloat16mf2_t op1, vuint16mf2_t index, size_t vl) {
  return vrgather_tama(mask, op1, index, vl);
}

vfloat16mf2_t test_vrgather_vx_f16mf2_tama(vbool32_t mask, vfloat16mf2_t op1, size_t index, size_t vl) {
  return vrgather_tama(mask, op1, index, vl);
}

vfloat16m1_t test_vrgather_vv_f16m1_tama(vbool16_t mask, vfloat16m1_t op1, vuint16m1_t index, size_t vl) {
  return vrgather_tama(mask, op1, index, vl);
}

vfloat16m1_t test_vrgather_vx_f16m1_tama(vbool16_t mask, vfloat16m1_t op1, size_t index, size_t vl) {
  return vrgather_tama(mask, op1, index, vl);
}

vfloat16m2_t test_vrgather_vv_f16m2_tama(vbool8_t mask, vfloat16m2_t op1, vuint16m2_t index, size_t vl) {
  return vrgather_tama(mask, op1, index, vl);
}

vfloat16m2_t test_vrgather_vx_f16m2_tama(vbool8_t mask, vfloat16m2_t op1, size_t index, size_t vl) {
  return vrgather_tama(mask, op1, index, vl);
}

vfloat16m4_t test_vrgather_vv_f16m4_tama(vbool4_t mask, vfloat16m4_t op1, vuint16m4_t index, size_t vl) {
  return vrgather_tama(mask, op1, index, vl);
}

vfloat16m4_t test_vrgather_vx_f16m4_tama(vbool4_t mask, vfloat16m4_t op1, size_t index, size_t vl) {
  return vrgather_tama(mask, op1, index, vl);
}

vfloat16m8_t test_vrgather_vv_f16m8_tama(vbool2_t mask, vfloat16m8_t op1, vuint16m8_t index, size_t vl) {
  return vrgather_tama(mask, op1, index, vl);
}

vfloat16m8_t test_vrgather_vx_f16m8_tama(vbool2_t mask, vfloat16m8_t op1, size_t index, size_t vl) {
  return vrgather_tama(mask, op1, index, vl);
}

vfloat32mf2_t test_vrgather_vv_f32mf2_tama(vbool64_t mask, vfloat32mf2_t op1, vuint32mf2_t index, size_t vl) {
  return vrgather_tama(mask, op1, index, vl);
}

vfloat32mf2_t test_vrgather_vx_f32mf2_tama(vbool64_t mask, vfloat32mf2_t op1, size_t index, size_t vl) {
  return vrgather_tama(mask, op1, index, vl);
}

vfloat32m1_t test_vrgather_vv_f32m1_tama(vbool32_t mask, vfloat32m1_t op1, vuint32m1_t index, size_t vl) {
  return vrgather_tama(mask, op1, index, vl);
}

vfloat32m1_t test_vrgather_vx_f32m1_tama(vbool32_t mask, vfloat32m1_t op1, size_t index, size_t vl) {
  return vrgather_tama(mask, op1, index, vl);
}

vfloat32m2_t test_vrgather_vv_f32m2_tama(vbool16_t mask, vfloat32m2_t op1, vuint32m2_t index, size_t vl) {
  return vrgather_tama(mask, op1, index, vl);
}

vfloat32m2_t test_vrgather_vx_f32m2_tama(vbool16_t mask, vfloat32m2_t op1, size_t index, size_t vl) {
  return vrgather_tama(mask, op1, index, vl);
}

vfloat32m4_t test_vrgather_vv_f32m4_tama(vbool8_t mask, vfloat32m4_t op1, vuint32m4_t index, size_t vl) {
  return vrgather_tama(mask, op1, index, vl);
}

vfloat32m4_t test_vrgather_vx_f32m4_tama(vbool8_t mask, vfloat32m4_t op1, size_t index, size_t vl) {
  return vrgather_tama(mask, op1, index, vl);
}

vfloat32m8_t test_vrgather_vv_f32m8_tama(vbool4_t mask, vfloat32m8_t op1, vuint32m8_t index, size_t vl) {
  return vrgather_tama(mask, op1, index, vl);
}

vfloat32m8_t test_vrgather_vx_f32m8_tama(vbool4_t mask, vfloat32m8_t op1, size_t index, size_t vl) {
  return vrgather_tama(mask, op1, index, vl);
}

vfloat64m1_t test_vrgather_vv_f64m1_tama(vbool64_t mask, vfloat64m1_t op1, vuint64m1_t index, size_t vl) {
  return vrgather_tama(mask, op1, index, vl);
}

vfloat64m1_t test_vrgather_vx_f64m1_tama(vbool64_t mask, vfloat64m1_t op1, size_t index, size_t vl) {
  return vrgather_tama(mask, op1, index, vl);
}

vfloat64m2_t test_vrgather_vv_f64m2_tama(vbool32_t mask, vfloat64m2_t op1, vuint64m2_t index, size_t vl) {
  return vrgather_tama(mask, op1, index, vl);
}

vfloat64m2_t test_vrgather_vx_f64m2_tama(vbool32_t mask, vfloat64m2_t op1, size_t index, size_t vl) {
  return vrgather_tama(mask, op1, index, vl);
}

vfloat64m4_t test_vrgather_vv_f64m4_tama(vbool16_t mask, vfloat64m4_t op1, vuint64m4_t index, size_t vl) {
  return vrgather_tama(mask, op1, index, vl);
}

vfloat64m4_t test_vrgather_vx_f64m4_tama(vbool16_t mask, vfloat64m4_t op1, size_t index, size_t vl) {
  return vrgather_tama(mask, op1, index, vl);
}

vfloat64m8_t test_vrgather_vv_f64m8_tama(vbool8_t mask, vfloat64m8_t op1, vuint64m8_t index, size_t vl) {
  return vrgather_tama(mask, op1, index, vl);
}

vfloat64m8_t test_vrgather_vx_f64m8_tama(vbool8_t mask, vfloat64m8_t op1, size_t index, size_t vl) {
  return vrgather_tama(mask, op1, index, vl);
}

vint8mf8_t test_vrgather_vv_i8mf8_tama(vbool64_t mask, vint8mf8_t op1, vuint8mf8_t index, size_t vl) {
  return vrgather_tama(mask, op1, index, vl);
}

vint8mf8_t test_vrgather_vx_i8mf8_tama(vbool64_t mask, vint8mf8_t op1, size_t index, size_t vl) {
  return vrgather_tama(mask, op1, index, vl);
}

vint8mf4_t test_vrgather_vv_i8mf4_tama(vbool32_t mask, vint8mf4_t op1, vuint8mf4_t index, size_t vl) {
  return vrgather_tama(mask, op1, index, vl);
}

vint8mf4_t test_vrgather_vx_i8mf4_tama(vbool32_t mask, vint8mf4_t op1, size_t index, size_t vl) {
  return vrgather_tama(mask, op1, index, vl);
}

vint8mf2_t test_vrgather_vv_i8mf2_tama(vbool16_t mask, vint8mf2_t op1, vuint8mf2_t index, size_t vl) {
  return vrgather_tama(mask, op1, index, vl);
}

vint8mf2_t test_vrgather_vx_i8mf2_tama(vbool16_t mask, vint8mf2_t op1, size_t index, size_t vl) {
  return vrgather_tama(mask, op1, index, vl);
}

vint8m1_t test_vrgather_vv_i8m1_tama(vbool8_t mask, vint8m1_t op1, vuint8m1_t index, size_t vl) {
  return vrgather_tama(mask, op1, index, vl);
}

vint8m1_t test_vrgather_vx_i8m1_tama(vbool8_t mask, vint8m1_t op1, size_t index, size_t vl) {
  return vrgather_tama(mask, op1, index, vl);
}

vint8m2_t test_vrgather_vv_i8m2_tama(vbool4_t mask, vint8m2_t op1, vuint8m2_t index, size_t vl) {
  return vrgather_tama(mask, op1, index, vl);
}

vint8m2_t test_vrgather_vx_i8m2_tama(vbool4_t mask, vint8m2_t op1, size_t index, size_t vl) {
  return vrgather_tama(mask, op1, index, vl);
}

vint8m4_t test_vrgather_vv_i8m4_tama(vbool2_t mask, vint8m4_t op1, vuint8m4_t index, size_t vl) {
  return vrgather_tama(mask, op1, index, vl);
}

vint8m4_t test_vrgather_vx_i8m4_tama(vbool2_t mask, vint8m4_t op1, size_t index, size_t vl) {
  return vrgather_tama(mask, op1, index, vl);
}

vint8m8_t test_vrgather_vv_i8m8_tama(vbool1_t mask, vint8m8_t op1, vuint8m8_t index, size_t vl) {
  return vrgather_tama(mask, op1, index, vl);
}

vint8m8_t test_vrgather_vx_i8m8_tama(vbool1_t mask, vint8m8_t op1, size_t index, size_t vl) {
  return vrgather_tama(mask, op1, index, vl);
}

vint16mf4_t test_vrgather_vv_i16mf4_tama(vbool64_t mask, vint16mf4_t op1, vuint16mf4_t index, size_t vl) {
  return vrgather_tama(mask, op1, index, vl);
}

vint16mf4_t test_vrgather_vx_i16mf4_tama(vbool64_t mask, vint16mf4_t op1, size_t index, size_t vl) {
  return vrgather_tama(mask, op1, index, vl);
}

vint16mf2_t test_vrgather_vv_i16mf2_tama(vbool32_t mask, vint16mf2_t op1, vuint16mf2_t index, size_t vl) {
  return vrgather_tama(mask, op1, index, vl);
}

vint16mf2_t test_vrgather_vx_i16mf2_tama(vbool32_t mask, vint16mf2_t op1, size_t index, size_t vl) {
  return vrgather_tama(mask, op1, index, vl);
}

vint16m1_t test_vrgather_vv_i16m1_tama(vbool16_t mask, vint16m1_t op1, vuint16m1_t index, size_t vl) {
  return vrgather_tama(mask, op1, index, vl);
}

vint16m1_t test_vrgather_vx_i16m1_tama(vbool16_t mask, vint16m1_t op1, size_t index, size_t vl) {
  return vrgather_tama(mask, op1, index, vl);
}

vint16m2_t test_vrgather_vv_i16m2_tama(vbool8_t mask, vint16m2_t op1, vuint16m2_t index, size_t vl) {
  return vrgather_tama(mask, op1, index, vl);
}

vint16m2_t test_vrgather_vx_i16m2_tama(vbool8_t mask, vint16m2_t op1, size_t index, size_t vl) {
  return vrgather_tama(mask, op1, index, vl);
}

vint16m4_t test_vrgather_vv_i16m4_tama(vbool4_t mask, vint16m4_t op1, vuint16m4_t index, size_t vl) {
  return vrgather_tama(mask, op1, index, vl);
}

vint16m4_t test_vrgather_vx_i16m4_tama(vbool4_t mask, vint16m4_t op1, size_t index, size_t vl) {
  return vrgather_tama(mask, op1, index, vl);
}

vint16m8_t test_vrgather_vv_i16m8_tama(vbool2_t mask, vint16m8_t op1, vuint16m8_t index, size_t vl) {
  return vrgather_tama(mask, op1, index, vl);
}

vint16m8_t test_vrgather_vx_i16m8_tama(vbool2_t mask, vint16m8_t op1, size_t index, size_t vl) {
  return vrgather_tama(mask, op1, index, vl);
}

vint32mf2_t test_vrgather_vv_i32mf2_tama(vbool64_t mask, vint32mf2_t op1, vuint32mf2_t index, size_t vl) {
  return vrgather_tama(mask, op1, index, vl);
}

vint32mf2_t test_vrgather_vx_i32mf2_tama(vbool64_t mask, vint32mf2_t op1, size_t index, size_t vl) {
  return vrgather_tama(mask, op1, index, vl);
}

vint32m1_t test_vrgather_vv_i32m1_tama(vbool32_t mask, vint32m1_t op1, vuint32m1_t index, size_t vl) {
  return vrgather_tama(mask, op1, index, vl);
}

vint32m1_t test_vrgather_vx_i32m1_tama(vbool32_t mask, vint32m1_t op1, size_t index, size_t vl) {
  return vrgather_tama(mask, op1, index, vl);
}

vint32m2_t test_vrgather_vv_i32m2_tama(vbool16_t mask, vint32m2_t op1, vuint32m2_t index, size_t vl) {
  return vrgather_tama(mask, op1, index, vl);
}

vint32m2_t test_vrgather_vx_i32m2_tama(vbool16_t mask, vint32m2_t op1, size_t index, size_t vl) {
  return vrgather_tama(mask, op1, index, vl);
}

vint32m4_t test_vrgather_vv_i32m4_tama(vbool8_t mask, vint32m4_t op1, vuint32m4_t index, size_t vl) {
  return vrgather_tama(mask, op1, index, vl);
}

vint32m4_t test_vrgather_vx_i32m4_tama(vbool8_t mask, vint32m4_t op1, size_t index, size_t vl) {
  return vrgather_tama(mask, op1, index, vl);
}

vint32m8_t test_vrgather_vv_i32m8_tama(vbool4_t mask, vint32m8_t op1, vuint32m8_t index, size_t vl) {
  return vrgather_tama(mask, op1, index, vl);
}

vint32m8_t test_vrgather_vx_i32m8_tama(vbool4_t mask, vint32m8_t op1, size_t index, size_t vl) {
  return vrgather_tama(mask, op1, index, vl);
}

vint64m1_t test_vrgather_vv_i64m1_tama(vbool64_t mask, vint64m1_t op1, vuint64m1_t index, size_t vl) {
  return vrgather_tama(mask, op1, index, vl);
}

vint64m1_t test_vrgather_vx_i64m1_tama(vbool64_t mask, vint64m1_t op1, size_t index, size_t vl) {
  return vrgather_tama(mask, op1, index, vl);
}

vint64m2_t test_vrgather_vv_i64m2_tama(vbool32_t mask, vint64m2_t op1, vuint64m2_t index, size_t vl) {
  return vrgather_tama(mask, op1, index, vl);
}

vint64m2_t test_vrgather_vx_i64m2_tama(vbool32_t mask, vint64m2_t op1, size_t index, size_t vl) {
  return vrgather_tama(mask, op1, index, vl);
}

vint64m4_t test_vrgather_vv_i64m4_tama(vbool16_t mask, vint64m4_t op1, vuint64m4_t index, size_t vl) {
  return vrgather_tama(mask, op1, index, vl);
}

vint64m4_t test_vrgather_vx_i64m4_tama(vbool16_t mask, vint64m4_t op1, size_t index, size_t vl) {
  return vrgather_tama(mask, op1, index, vl);
}

vint64m8_t test_vrgather_vv_i64m8_tama(vbool8_t mask, vint64m8_t op1, vuint64m8_t index, size_t vl) {
  return vrgather_tama(mask, op1, index, vl);
}

vint64m8_t test_vrgather_vx_i64m8_tama(vbool8_t mask, vint64m8_t op1, size_t index, size_t vl) {
  return vrgather_tama(mask, op1, index, vl);
}

vuint8mf8_t test_vrgather_vv_u8mf8_tama(vbool64_t mask, vuint8mf8_t op1, vuint8mf8_t index, size_t vl) {
  return vrgather_tama(mask, op1, index, vl);
}

vuint8mf8_t test_vrgather_vx_u8mf8_tama(vbool64_t mask, vuint8mf8_t op1, size_t index, size_t vl) {
  return vrgather_tama(mask, op1, index, vl);
}

vuint8mf4_t test_vrgather_vv_u8mf4_tama(vbool32_t mask, vuint8mf4_t op1, vuint8mf4_t index, size_t vl) {
  return vrgather_tama(mask, op1, index, vl);
}

vuint8mf4_t test_vrgather_vx_u8mf4_tama(vbool32_t mask, vuint8mf4_t op1, size_t index, size_t vl) {
  return vrgather_tama(mask, op1, index, vl);
}

vuint8mf2_t test_vrgather_vv_u8mf2_tama(vbool16_t mask, vuint8mf2_t op1, vuint8mf2_t index, size_t vl) {
  return vrgather_tama(mask, op1, index, vl);
}

vuint8mf2_t test_vrgather_vx_u8mf2_tama(vbool16_t mask, vuint8mf2_t op1, size_t index, size_t vl) {
  return vrgather_tama(mask, op1, index, vl);
}

vuint8m1_t test_vrgather_vv_u8m1_tama(vbool8_t mask, vuint8m1_t op1, vuint8m1_t index, size_t vl) {
  return vrgather_tama(mask, op1, index, vl);
}

vuint8m1_t test_vrgather_vx_u8m1_tama(vbool8_t mask, vuint8m1_t op1, size_t index, size_t vl) {
  return vrgather_tama(mask, op1, index, vl);
}

vuint8m2_t test_vrgather_vv_u8m2_tama(vbool4_t mask, vuint8m2_t op1, vuint8m2_t index, size_t vl) {
  return vrgather_tama(mask, op1, index, vl);
}

vuint8m2_t test_vrgather_vx_u8m2_tama(vbool4_t mask, vuint8m2_t op1, size_t index, size_t vl) {
  return vrgather_tama(mask, op1, index, vl);
}

vuint8m4_t test_vrgather_vv_u8m4_tama(vbool2_t mask, vuint8m4_t op1, vuint8m4_t index, size_t vl) {
  return vrgather_tama(mask, op1, index, vl);
}

vuint8m4_t test_vrgather_vx_u8m4_tama(vbool2_t mask, vuint8m4_t op1, size_t index, size_t vl) {
  return vrgather_tama(mask, op1, index, vl);
}

vuint8m8_t test_vrgather_vv_u8m8_tama(vbool1_t mask, vuint8m8_t op1, vuint8m8_t index, size_t vl) {
  return vrgather_tama(mask, op1, index, vl);
}

vuint8m8_t test_vrgather_vx_u8m8_tama(vbool1_t mask, vuint8m8_t op1, size_t index, size_t vl) {
  return vrgather_tama(mask, op1, index, vl);
}

vuint16mf4_t test_vrgather_vv_u16mf4_tama(vbool64_t mask, vuint16mf4_t op1, vuint16mf4_t index, size_t vl) {
  return vrgather_tama(mask, op1, index, vl);
}

vuint16mf4_t test_vrgather_vx_u16mf4_tama(vbool64_t mask, vuint16mf4_t op1, size_t index, size_t vl) {
  return vrgather_tama(mask, op1, index, vl);
}

vuint16mf2_t test_vrgather_vv_u16mf2_tama(vbool32_t mask, vuint16mf2_t op1, vuint16mf2_t index, size_t vl) {
  return vrgather_tama(mask, op1, index, vl);
}

vuint16mf2_t test_vrgather_vx_u16mf2_tama(vbool32_t mask, vuint16mf2_t op1, size_t index, size_t vl) {
  return vrgather_tama(mask, op1, index, vl);
}

vuint16m1_t test_vrgather_vv_u16m1_tama(vbool16_t mask, vuint16m1_t op1, vuint16m1_t index, size_t vl) {
  return vrgather_tama(mask, op1, index, vl);
}

vuint16m1_t test_vrgather_vx_u16m1_tama(vbool16_t mask, vuint16m1_t op1, size_t index, size_t vl) {
  return vrgather_tama(mask, op1, index, vl);
}

vuint16m2_t test_vrgather_vv_u16m2_tama(vbool8_t mask, vuint16m2_t op1, vuint16m2_t index, size_t vl) {
  return vrgather_tama(mask, op1, index, vl);
}

vuint16m2_t test_vrgather_vx_u16m2_tama(vbool8_t mask, vuint16m2_t op1, size_t index, size_t vl) {
  return vrgather_tama(mask, op1, index, vl);
}

vuint16m4_t test_vrgather_vv_u16m4_tama(vbool4_t mask, vuint16m4_t op1, vuint16m4_t index, size_t vl) {
  return vrgather_tama(mask, op1, index, vl);
}

vuint16m4_t test_vrgather_vx_u16m4_tama(vbool4_t mask, vuint16m4_t op1, size_t index, size_t vl) {
  return vrgather_tama(mask, op1, index, vl);
}

vuint16m8_t test_vrgather_vv_u16m8_tama(vbool2_t mask, vuint16m8_t op1, vuint16m8_t index, size_t vl) {
  return vrgather_tama(mask, op1, index, vl);
}

vuint16m8_t test_vrgather_vx_u16m8_tama(vbool2_t mask, vuint16m8_t op1, size_t index, size_t vl) {
  return vrgather_tama(mask, op1, index, vl);
}

vuint32mf2_t test_vrgather_vv_u32mf2_tama(vbool64_t mask, vuint32mf2_t op1, vuint32mf2_t index, size_t vl) {
  return vrgather_tama(mask, op1, index, vl);
}

vuint32mf2_t test_vrgather_vx_u32mf2_tama(vbool64_t mask, vuint32mf2_t op1, size_t index, size_t vl) {
  return vrgather_tama(mask, op1, index, vl);
}

vuint32m1_t test_vrgather_vv_u32m1_tama(vbool32_t mask, vuint32m1_t op1, vuint32m1_t index, size_t vl) {
  return vrgather_tama(mask, op1, index, vl);
}

vuint32m1_t test_vrgather_vx_u32m1_tama(vbool32_t mask, vuint32m1_t op1, size_t index, size_t vl) {
  return vrgather_tama(mask, op1, index, vl);
}

vuint32m2_t test_vrgather_vv_u32m2_tama(vbool16_t mask, vuint32m2_t op1, vuint32m2_t index, size_t vl) {
  return vrgather_tama(mask, op1, index, vl);
}

vuint32m2_t test_vrgather_vx_u32m2_tama(vbool16_t mask, vuint32m2_t op1, size_t index, size_t vl) {
  return vrgather_tama(mask, op1, index, vl);
}

vuint32m4_t test_vrgather_vv_u32m4_tama(vbool8_t mask, vuint32m4_t op1, vuint32m4_t index, size_t vl) {
  return vrgather_tama(mask, op1, index, vl);
}

vuint32m4_t test_vrgather_vx_u32m4_tama(vbool8_t mask, vuint32m4_t op1, size_t index, size_t vl) {
  return vrgather_tama(mask, op1, index, vl);
}

vuint32m8_t test_vrgather_vv_u32m8_tama(vbool4_t mask, vuint32m8_t op1, vuint32m8_t index, size_t vl) {
  return vrgather_tama(mask, op1, index, vl);
}

vuint32m8_t test_vrgather_vx_u32m8_tama(vbool4_t mask, vuint32m8_t op1, size_t index, size_t vl) {
  return vrgather_tama(mask, op1, index, vl);
}

vuint64m1_t test_vrgather_vv_u64m1_tama(vbool64_t mask, vuint64m1_t op1, vuint64m1_t index, size_t vl) {
  return vrgather_tama(mask, op1, index, vl);
}

vuint64m1_t test_vrgather_vx_u64m1_tama(vbool64_t mask, vuint64m1_t op1, size_t index, size_t vl) {
  return vrgather_tama(mask, op1, index, vl);
}

vuint64m2_t test_vrgather_vv_u64m2_tama(vbool32_t mask, vuint64m2_t op1, vuint64m2_t index, size_t vl) {
  return vrgather_tama(mask, op1, index, vl);
}

vuint64m2_t test_vrgather_vx_u64m2_tama(vbool32_t mask, vuint64m2_t op1, size_t index, size_t vl) {
  return vrgather_tama(mask, op1, index, vl);
}

vuint64m4_t test_vrgather_vv_u64m4_tama(vbool16_t mask, vuint64m4_t op1, vuint64m4_t index, size_t vl) {
  return vrgather_tama(mask, op1, index, vl);
}

vuint64m4_t test_vrgather_vx_u64m4_tama(vbool16_t mask, vuint64m4_t op1, size_t index, size_t vl) {
  return vrgather_tama(mask, op1, index, vl);
}

vuint64m8_t test_vrgather_vv_u64m8_tama(vbool8_t mask, vuint64m8_t op1, vuint64m8_t index, size_t vl) {
  return vrgather_tama(mask, op1, index, vl);
}

vuint64m8_t test_vrgather_vx_u64m8_tama(vbool8_t mask, vuint64m8_t op1, size_t index, size_t vl) {
  return vrgather_tama(mask, op1, index, vl);
}

vfloat16mf4_t test_vrgather_vv_f16mf4_tamu(vbool64_t mask, vfloat16mf4_t maskedoff, vfloat16mf4_t op1, vuint16mf4_t index, size_t vl) {
  return vrgather_tamu(mask, maskedoff, op1, index, vl);
}

vfloat16mf4_t test_vrgather_vx_f16mf4_tamu(vbool64_t mask, vfloat16mf4_t maskedoff, vfloat16mf4_t op1, size_t index, size_t vl) {
  return vrgather_tamu(mask, maskedoff, op1, index, vl);
}

vfloat16mf2_t test_vrgather_vv_f16mf2_tamu(vbool32_t mask, vfloat16mf2_t maskedoff, vfloat16mf2_t op1, vuint16mf2_t index, size_t vl) {
  return vrgather_tamu(mask, maskedoff, op1, index, vl);
}

vfloat16mf2_t test_vrgather_vx_f16mf2_tamu(vbool32_t mask, vfloat16mf2_t maskedoff, vfloat16mf2_t op1, size_t index, size_t vl) {
  return vrgather_tamu(mask, maskedoff, op1, index, vl);
}

vfloat16m1_t test_vrgather_vv_f16m1_tamu(vbool16_t mask, vfloat16m1_t maskedoff, vfloat16m1_t op1, vuint16m1_t index, size_t vl) {
  return vrgather_tamu(mask, maskedoff, op1, index, vl);
}

vfloat16m1_t test_vrgather_vx_f16m1_tamu(vbool16_t mask, vfloat16m1_t maskedoff, vfloat16m1_t op1, size_t index, size_t vl) {
  return vrgather_tamu(mask, maskedoff, op1, index, vl);
}

vfloat16m2_t test_vrgather_vv_f16m2_tamu(vbool8_t mask, vfloat16m2_t maskedoff, vfloat16m2_t op1, vuint16m2_t index, size_t vl) {
  return vrgather_tamu(mask, maskedoff, op1, index, vl);
}

vfloat16m2_t test_vrgather_vx_f16m2_tamu(vbool8_t mask, vfloat16m2_t maskedoff, vfloat16m2_t op1, size_t index, size_t vl) {
  return vrgather_tamu(mask, maskedoff, op1, index, vl);
}

vfloat16m4_t test_vrgather_vv_f16m4_tamu(vbool4_t mask, vfloat16m4_t maskedoff, vfloat16m4_t op1, vuint16m4_t index, size_t vl) {
  return vrgather_tamu(mask, maskedoff, op1, index, vl);
}

vfloat16m4_t test_vrgather_vx_f16m4_tamu(vbool4_t mask, vfloat16m4_t maskedoff, vfloat16m4_t op1, size_t index, size_t vl) {
  return vrgather_tamu(mask, maskedoff, op1, index, vl);
}

vfloat16m8_t test_vrgather_vv_f16m8_tamu(vbool2_t mask, vfloat16m8_t maskedoff, vfloat16m8_t op1, vuint16m8_t index, size_t vl) {
  return vrgather_tamu(mask, maskedoff, op1, index, vl);
}

vfloat16m8_t test_vrgather_vx_f16m8_tamu(vbool2_t mask, vfloat16m8_t maskedoff, vfloat16m8_t op1, size_t index, size_t vl) {
  return vrgather_tamu(mask, maskedoff, op1, index, vl);
}

vfloat32mf2_t test_vrgather_vv_f32mf2_tamu(vbool64_t mask, vfloat32mf2_t maskedoff, vfloat32mf2_t op1, vuint32mf2_t index, size_t vl) {
  return vrgather_tamu(mask, maskedoff, op1, index, vl);
}

vfloat32mf2_t test_vrgather_vx_f32mf2_tamu(vbool64_t mask, vfloat32mf2_t maskedoff, vfloat32mf2_t op1, size_t index, size_t vl) {
  return vrgather_tamu(mask, maskedoff, op1, index, vl);
}

vfloat32m1_t test_vrgather_vv_f32m1_tamu(vbool32_t mask, vfloat32m1_t maskedoff, vfloat32m1_t op1, vuint32m1_t index, size_t vl) {
  return vrgather_tamu(mask, maskedoff, op1, index, vl);
}

vfloat32m1_t test_vrgather_vx_f32m1_tamu(vbool32_t mask, vfloat32m1_t maskedoff, vfloat32m1_t op1, size_t index, size_t vl) {
  return vrgather_tamu(mask, maskedoff, op1, index, vl);
}

vfloat32m2_t test_vrgather_vv_f32m2_tamu(vbool16_t mask, vfloat32m2_t maskedoff, vfloat32m2_t op1, vuint32m2_t index, size_t vl) {
  return vrgather_tamu(mask, maskedoff, op1, index, vl);
}

vfloat32m2_t test_vrgather_vx_f32m2_tamu(vbool16_t mask, vfloat32m2_t maskedoff, vfloat32m2_t op1, size_t index, size_t vl) {
  return vrgather_tamu(mask, maskedoff, op1, index, vl);
}

vfloat32m4_t test_vrgather_vv_f32m4_tamu(vbool8_t mask, vfloat32m4_t maskedoff, vfloat32m4_t op1, vuint32m4_t index, size_t vl) {
  return vrgather_tamu(mask, maskedoff, op1, index, vl);
}

vfloat32m4_t test_vrgather_vx_f32m4_tamu(vbool8_t mask, vfloat32m4_t maskedoff, vfloat32m4_t op1, size_t index, size_t vl) {
  return vrgather_tamu(mask, maskedoff, op1, index, vl);
}

vfloat32m8_t test_vrgather_vv_f32m8_tamu(vbool4_t mask, vfloat32m8_t maskedoff, vfloat32m8_t op1, vuint32m8_t index, size_t vl) {
  return vrgather_tamu(mask, maskedoff, op1, index, vl);
}

vfloat32m8_t test_vrgather_vx_f32m8_tamu(vbool4_t mask, vfloat32m8_t maskedoff, vfloat32m8_t op1, size_t index, size_t vl) {
  return vrgather_tamu(mask, maskedoff, op1, index, vl);
}

vfloat64m1_t test_vrgather_vv_f64m1_tamu(vbool64_t mask, vfloat64m1_t maskedoff, vfloat64m1_t op1, vuint64m1_t index, size_t vl) {
  return vrgather_tamu(mask, maskedoff, op1, index, vl);
}

vfloat64m1_t test_vrgather_vx_f64m1_tamu(vbool64_t mask, vfloat64m1_t maskedoff, vfloat64m1_t op1, size_t index, size_t vl) {
  return vrgather_tamu(mask, maskedoff, op1, index, vl);
}

vfloat64m2_t test_vrgather_vv_f64m2_tamu(vbool32_t mask, vfloat64m2_t maskedoff, vfloat64m2_t op1, vuint64m2_t index, size_t vl) {
  return vrgather_tamu(mask, maskedoff, op1, index, vl);
}

vfloat64m2_t test_vrgather_vx_f64m2_tamu(vbool32_t mask, vfloat64m2_t maskedoff, vfloat64m2_t op1, size_t index, size_t vl) {
  return vrgather_tamu(mask, maskedoff, op1, index, vl);
}

vfloat64m4_t test_vrgather_vv_f64m4_tamu(vbool16_t mask, vfloat64m4_t maskedoff, vfloat64m4_t op1, vuint64m4_t index, size_t vl) {
  return vrgather_tamu(mask, maskedoff, op1, index, vl);
}

vfloat64m4_t test_vrgather_vx_f64m4_tamu(vbool16_t mask, vfloat64m4_t maskedoff, vfloat64m4_t op1, size_t index, size_t vl) {
  return vrgather_tamu(mask, maskedoff, op1, index, vl);
}

vfloat64m8_t test_vrgather_vv_f64m8_tamu(vbool8_t mask, vfloat64m8_t maskedoff, vfloat64m8_t op1, vuint64m8_t index, size_t vl) {
  return vrgather_tamu(mask, maskedoff, op1, index, vl);
}

vfloat64m8_t test_vrgather_vx_f64m8_tamu(vbool8_t mask, vfloat64m8_t maskedoff, vfloat64m8_t op1, size_t index, size_t vl) {
  return vrgather_tamu(mask, maskedoff, op1, index, vl);
}

vint8mf8_t test_vrgather_vv_i8mf8_tamu(vbool64_t mask, vint8mf8_t maskedoff, vint8mf8_t op1, vuint8mf8_t index, size_t vl) {
  return vrgather_tamu(mask, maskedoff, op1, index, vl);
}

vint8mf8_t test_vrgather_vx_i8mf8_tamu(vbool64_t mask, vint8mf8_t maskedoff, vint8mf8_t op1, size_t index, size_t vl) {
  return vrgather_tamu(mask, maskedoff, op1, index, vl);
}

vint8mf4_t test_vrgather_vv_i8mf4_tamu(vbool32_t mask, vint8mf4_t maskedoff, vint8mf4_t op1, vuint8mf4_t index, size_t vl) {
  return vrgather_tamu(mask, maskedoff, op1, index, vl);
}

vint8mf4_t test_vrgather_vx_i8mf4_tamu(vbool32_t mask, vint8mf4_t maskedoff, vint8mf4_t op1, size_t index, size_t vl) {
  return vrgather_tamu(mask, maskedoff, op1, index, vl);
}

vint8mf2_t test_vrgather_vv_i8mf2_tamu(vbool16_t mask, vint8mf2_t maskedoff, vint8mf2_t op1, vuint8mf2_t index, size_t vl) {
  return vrgather_tamu(mask, maskedoff, op1, index, vl);
}

vint8mf2_t test_vrgather_vx_i8mf2_tamu(vbool16_t mask, vint8mf2_t maskedoff, vint8mf2_t op1, size_t index, size_t vl) {
  return vrgather_tamu(mask, maskedoff, op1, index, vl);
}

vint8m1_t test_vrgather_vv_i8m1_tamu(vbool8_t mask, vint8m1_t maskedoff, vint8m1_t op1, vuint8m1_t index, size_t vl) {
  return vrgather_tamu(mask, maskedoff, op1, index, vl);
}

vint8m1_t test_vrgather_vx_i8m1_tamu(vbool8_t mask, vint8m1_t maskedoff, vint8m1_t op1, size_t index, size_t vl) {
  return vrgather_tamu(mask, maskedoff, op1, index, vl);
}

vint8m2_t test_vrgather_vv_i8m2_tamu(vbool4_t mask, vint8m2_t maskedoff, vint8m2_t op1, vuint8m2_t index, size_t vl) {
  return vrgather_tamu(mask, maskedoff, op1, index, vl);
}

vint8m2_t test_vrgather_vx_i8m2_tamu(vbool4_t mask, vint8m2_t maskedoff, vint8m2_t op1, size_t index, size_t vl) {
  return vrgather_tamu(mask, maskedoff, op1, index, vl);
}

vint8m4_t test_vrgather_vv_i8m4_tamu(vbool2_t mask, vint8m4_t maskedoff, vint8m4_t op1, vuint8m4_t index, size_t vl) {
  return vrgather_tamu(mask, maskedoff, op1, index, vl);
}

vint8m4_t test_vrgather_vx_i8m4_tamu(vbool2_t mask, vint8m4_t maskedoff, vint8m4_t op1, size_t index, size_t vl) {
  return vrgather_tamu(mask, maskedoff, op1, index, vl);
}

vint8m8_t test_vrgather_vv_i8m8_tamu(vbool1_t mask, vint8m8_t maskedoff, vint8m8_t op1, vuint8m8_t index, size_t vl) {
  return vrgather_tamu(mask, maskedoff, op1, index, vl);
}

vint8m8_t test_vrgather_vx_i8m8_tamu(vbool1_t mask, vint8m8_t maskedoff, vint8m8_t op1, size_t index, size_t vl) {
  return vrgather_tamu(mask, maskedoff, op1, index, vl);
}

vint16mf4_t test_vrgather_vv_i16mf4_tamu(vbool64_t mask, vint16mf4_t maskedoff, vint16mf4_t op1, vuint16mf4_t index, size_t vl) {
  return vrgather_tamu(mask, maskedoff, op1, index, vl);
}

vint16mf4_t test_vrgather_vx_i16mf4_tamu(vbool64_t mask, vint16mf4_t maskedoff, vint16mf4_t op1, size_t index, size_t vl) {
  return vrgather_tamu(mask, maskedoff, op1, index, vl);
}

vint16mf2_t test_vrgather_vv_i16mf2_tamu(vbool32_t mask, vint16mf2_t maskedoff, vint16mf2_t op1, vuint16mf2_t index, size_t vl) {
  return vrgather_tamu(mask, maskedoff, op1, index, vl);
}

vint16mf2_t test_vrgather_vx_i16mf2_tamu(vbool32_t mask, vint16mf2_t maskedoff, vint16mf2_t op1, size_t index, size_t vl) {
  return vrgather_tamu(mask, maskedoff, op1, index, vl);
}

vint16m1_t test_vrgather_vv_i16m1_tamu(vbool16_t mask, vint16m1_t maskedoff, vint16m1_t op1, vuint16m1_t index, size_t vl) {
  return vrgather_tamu(mask, maskedoff, op1, index, vl);
}

vint16m1_t test_vrgather_vx_i16m1_tamu(vbool16_t mask, vint16m1_t maskedoff, vint16m1_t op1, size_t index, size_t vl) {
  return vrgather_tamu(mask, maskedoff, op1, index, vl);
}

vint16m2_t test_vrgather_vv_i16m2_tamu(vbool8_t mask, vint16m2_t maskedoff, vint16m2_t op1, vuint16m2_t index, size_t vl) {
  return vrgather_tamu(mask, maskedoff, op1, index, vl);
}

vint16m2_t test_vrgather_vx_i16m2_tamu(vbool8_t mask, vint16m2_t maskedoff, vint16m2_t op1, size_t index, size_t vl) {
  return vrgather_tamu(mask, maskedoff, op1, index, vl);
}

vint16m4_t test_vrgather_vv_i16m4_tamu(vbool4_t mask, vint16m4_t maskedoff, vint16m4_t op1, vuint16m4_t index, size_t vl) {
  return vrgather_tamu(mask, maskedoff, op1, index, vl);
}

vint16m4_t test_vrgather_vx_i16m4_tamu(vbool4_t mask, vint16m4_t maskedoff, vint16m4_t op1, size_t index, size_t vl) {
  return vrgather_tamu(mask, maskedoff, op1, index, vl);
}

vint16m8_t test_vrgather_vv_i16m8_tamu(vbool2_t mask, vint16m8_t maskedoff, vint16m8_t op1, vuint16m8_t index, size_t vl) {
  return vrgather_tamu(mask, maskedoff, op1, index, vl);
}

vint16m8_t test_vrgather_vx_i16m8_tamu(vbool2_t mask, vint16m8_t maskedoff, vint16m8_t op1, size_t index, size_t vl) {
  return vrgather_tamu(mask, maskedoff, op1, index, vl);
}

vint32mf2_t test_vrgather_vv_i32mf2_tamu(vbool64_t mask, vint32mf2_t maskedoff, vint32mf2_t op1, vuint32mf2_t index, size_t vl) {
  return vrgather_tamu(mask, maskedoff, op1, index, vl);
}

vint32mf2_t test_vrgather_vx_i32mf2_tamu(vbool64_t mask, vint32mf2_t maskedoff, vint32mf2_t op1, size_t index, size_t vl) {
  return vrgather_tamu(mask, maskedoff, op1, index, vl);
}

vint32m1_t test_vrgather_vv_i32m1_tamu(vbool32_t mask, vint32m1_t maskedoff, vint32m1_t op1, vuint32m1_t index, size_t vl) {
  return vrgather_tamu(mask, maskedoff, op1, index, vl);
}

vint32m1_t test_vrgather_vx_i32m1_tamu(vbool32_t mask, vint32m1_t maskedoff, vint32m1_t op1, size_t index, size_t vl) {
  return vrgather_tamu(mask, maskedoff, op1, index, vl);
}

vint32m2_t test_vrgather_vv_i32m2_tamu(vbool16_t mask, vint32m2_t maskedoff, vint32m2_t op1, vuint32m2_t index, size_t vl) {
  return vrgather_tamu(mask, maskedoff, op1, index, vl);
}

vint32m2_t test_vrgather_vx_i32m2_tamu(vbool16_t mask, vint32m2_t maskedoff, vint32m2_t op1, size_t index, size_t vl) {
  return vrgather_tamu(mask, maskedoff, op1, index, vl);
}

vint32m4_t test_vrgather_vv_i32m4_tamu(vbool8_t mask, vint32m4_t maskedoff, vint32m4_t op1, vuint32m4_t index, size_t vl) {
  return vrgather_tamu(mask, maskedoff, op1, index, vl);
}

vint32m4_t test_vrgather_vx_i32m4_tamu(vbool8_t mask, vint32m4_t maskedoff, vint32m4_t op1, size_t index, size_t vl) {
  return vrgather_tamu(mask, maskedoff, op1, index, vl);
}

vint32m8_t test_vrgather_vv_i32m8_tamu(vbool4_t mask, vint32m8_t maskedoff, vint32m8_t op1, vuint32m8_t index, size_t vl) {
  return vrgather_tamu(mask, maskedoff, op1, index, vl);
}

vint32m8_t test_vrgather_vx_i32m8_tamu(vbool4_t mask, vint32m8_t maskedoff, vint32m8_t op1, size_t index, size_t vl) {
  return vrgather_tamu(mask, maskedoff, op1, index, vl);
}

vint64m1_t test_vrgather_vv_i64m1_tamu(vbool64_t mask, vint64m1_t maskedoff, vint64m1_t op1, vuint64m1_t index, size_t vl) {
  return vrgather_tamu(mask, maskedoff, op1, index, vl);
}

vint64m1_t test_vrgather_vx_i64m1_tamu(vbool64_t mask, vint64m1_t maskedoff, vint64m1_t op1, size_t index, size_t vl) {
  return vrgather_tamu(mask, maskedoff, op1, index, vl);
}

vint64m2_t test_vrgather_vv_i64m2_tamu(vbool32_t mask, vint64m2_t maskedoff, vint64m2_t op1, vuint64m2_t index, size_t vl) {
  return vrgather_tamu(mask, maskedoff, op1, index, vl);
}

vint64m2_t test_vrgather_vx_i64m2_tamu(vbool32_t mask, vint64m2_t maskedoff, vint64m2_t op1, size_t index, size_t vl) {
  return vrgather_tamu(mask, maskedoff, op1, index, vl);
}

vint64m4_t test_vrgather_vv_i64m4_tamu(vbool16_t mask, vint64m4_t maskedoff, vint64m4_t op1, vuint64m4_t index, size_t vl) {
  return vrgather_tamu(mask, maskedoff, op1, index, vl);
}

vint64m4_t test_vrgather_vx_i64m4_tamu(vbool16_t mask, vint64m4_t maskedoff, vint64m4_t op1, size_t index, size_t vl) {
  return vrgather_tamu(mask, maskedoff, op1, index, vl);
}

vint64m8_t test_vrgather_vv_i64m8_tamu(vbool8_t mask, vint64m8_t maskedoff, vint64m8_t op1, vuint64m8_t index, size_t vl) {
  return vrgather_tamu(mask, maskedoff, op1, index, vl);
}

vint64m8_t test_vrgather_vx_i64m8_tamu(vbool8_t mask, vint64m8_t maskedoff, vint64m8_t op1, size_t index, size_t vl) {
  return vrgather_tamu(mask, maskedoff, op1, index, vl);
}

vuint8mf8_t test_vrgather_vv_u8mf8_tamu(vbool64_t mask, vuint8mf8_t maskedoff, vuint8mf8_t op1, vuint8mf8_t index, size_t vl) {
  return vrgather_tamu(mask, maskedoff, op1, index, vl);
}

vuint8mf8_t test_vrgather_vx_u8mf8_tamu(vbool64_t mask, vuint8mf8_t maskedoff, vuint8mf8_t op1, size_t index, size_t vl) {
  return vrgather_tamu(mask, maskedoff, op1, index, vl);
}

vuint8mf4_t test_vrgather_vv_u8mf4_tamu(vbool32_t mask, vuint8mf4_t maskedoff, vuint8mf4_t op1, vuint8mf4_t index, size_t vl) {
  return vrgather_tamu(mask, maskedoff, op1, index, vl);
}

vuint8mf4_t test_vrgather_vx_u8mf4_tamu(vbool32_t mask, vuint8mf4_t maskedoff, vuint8mf4_t op1, size_t index, size_t vl) {
  return vrgather_tamu(mask, maskedoff, op1, index, vl);
}

vuint8mf2_t test_vrgather_vv_u8mf2_tamu(vbool16_t mask, vuint8mf2_t maskedoff, vuint8mf2_t op1, vuint8mf2_t index, size_t vl) {
  return vrgather_tamu(mask, maskedoff, op1, index, vl);
}

vuint8mf2_t test_vrgather_vx_u8mf2_tamu(vbool16_t mask, vuint8mf2_t maskedoff, vuint8mf2_t op1, size_t index, size_t vl) {
  return vrgather_tamu(mask, maskedoff, op1, index, vl);
}

vuint8m1_t test_vrgather_vv_u8m1_tamu(vbool8_t mask, vuint8m1_t maskedoff, vuint8m1_t op1, vuint8m1_t index, size_t vl) {
  return vrgather_tamu(mask, maskedoff, op1, index, vl);
}

vuint8m1_t test_vrgather_vx_u8m1_tamu(vbool8_t mask, vuint8m1_t maskedoff, vuint8m1_t op1, size_t index, size_t vl) {
  return vrgather_tamu(mask, maskedoff, op1, index, vl);
}

vuint8m2_t test_vrgather_vv_u8m2_tamu(vbool4_t mask, vuint8m2_t maskedoff, vuint8m2_t op1, vuint8m2_t index, size_t vl) {
  return vrgather_tamu(mask, maskedoff, op1, index, vl);
}

vuint8m2_t test_vrgather_vx_u8m2_tamu(vbool4_t mask, vuint8m2_t maskedoff, vuint8m2_t op1, size_t index, size_t vl) {
  return vrgather_tamu(mask, maskedoff, op1, index, vl);
}

vuint8m4_t test_vrgather_vv_u8m4_tamu(vbool2_t mask, vuint8m4_t maskedoff, vuint8m4_t op1, vuint8m4_t index, size_t vl) {
  return vrgather_tamu(mask, maskedoff, op1, index, vl);
}

vuint8m4_t test_vrgather_vx_u8m4_tamu(vbool2_t mask, vuint8m4_t maskedoff, vuint8m4_t op1, size_t index, size_t vl) {
  return vrgather_tamu(mask, maskedoff, op1, index, vl);
}

vuint8m8_t test_vrgather_vv_u8m8_tamu(vbool1_t mask, vuint8m8_t maskedoff, vuint8m8_t op1, vuint8m8_t index, size_t vl) {
  return vrgather_tamu(mask, maskedoff, op1, index, vl);
}

vuint8m8_t test_vrgather_vx_u8m8_tamu(vbool1_t mask, vuint8m8_t maskedoff, vuint8m8_t op1, size_t index, size_t vl) {
  return vrgather_tamu(mask, maskedoff, op1, index, vl);
}

vuint16mf4_t test_vrgather_vv_u16mf4_tamu(vbool64_t mask, vuint16mf4_t maskedoff, vuint16mf4_t op1, vuint16mf4_t index, size_t vl) {
  return vrgather_tamu(mask, maskedoff, op1, index, vl);
}

vuint16mf4_t test_vrgather_vx_u16mf4_tamu(vbool64_t mask, vuint16mf4_t maskedoff, vuint16mf4_t op1, size_t index, size_t vl) {
  return vrgather_tamu(mask, maskedoff, op1, index, vl);
}

vuint16mf2_t test_vrgather_vv_u16mf2_tamu(vbool32_t mask, vuint16mf2_t maskedoff, vuint16mf2_t op1, vuint16mf2_t index, size_t vl) {
  return vrgather_tamu(mask, maskedoff, op1, index, vl);
}

vuint16mf2_t test_vrgather_vx_u16mf2_tamu(vbool32_t mask, vuint16mf2_t maskedoff, vuint16mf2_t op1, size_t index, size_t vl) {
  return vrgather_tamu(mask, maskedoff, op1, index, vl);
}

vuint16m1_t test_vrgather_vv_u16m1_tamu(vbool16_t mask, vuint16m1_t maskedoff, vuint16m1_t op1, vuint16m1_t index, size_t vl) {
  return vrgather_tamu(mask, maskedoff, op1, index, vl);
}

vuint16m1_t test_vrgather_vx_u16m1_tamu(vbool16_t mask, vuint16m1_t maskedoff, vuint16m1_t op1, size_t index, size_t vl) {
  return vrgather_tamu(mask, maskedoff, op1, index, vl);
}

vuint16m2_t test_vrgather_vv_u16m2_tamu(vbool8_t mask, vuint16m2_t maskedoff, vuint16m2_t op1, vuint16m2_t index, size_t vl) {
  return vrgather_tamu(mask, maskedoff, op1, index, vl);
}

vuint16m2_t test_vrgather_vx_u16m2_tamu(vbool8_t mask, vuint16m2_t maskedoff, vuint16m2_t op1, size_t index, size_t vl) {
  return vrgather_tamu(mask, maskedoff, op1, index, vl);
}

vuint16m4_t test_vrgather_vv_u16m4_tamu(vbool4_t mask, vuint16m4_t maskedoff, vuint16m4_t op1, vuint16m4_t index, size_t vl) {
  return vrgather_tamu(mask, maskedoff, op1, index, vl);
}

vuint16m4_t test_vrgather_vx_u16m4_tamu(vbool4_t mask, vuint16m4_t maskedoff, vuint16m4_t op1, size_t index, size_t vl) {
  return vrgather_tamu(mask, maskedoff, op1, index, vl);
}

vuint16m8_t test_vrgather_vv_u16m8_tamu(vbool2_t mask, vuint16m8_t maskedoff, vuint16m8_t op1, vuint16m8_t index, size_t vl) {
  return vrgather_tamu(mask, maskedoff, op1, index, vl);
}

vuint16m8_t test_vrgather_vx_u16m8_tamu(vbool2_t mask, vuint16m8_t maskedoff, vuint16m8_t op1, size_t index, size_t vl) {
  return vrgather_tamu(mask, maskedoff, op1, index, vl);
}

vuint32mf2_t test_vrgather_vv_u32mf2_tamu(vbool64_t mask, vuint32mf2_t maskedoff, vuint32mf2_t op1, vuint32mf2_t index, size_t vl) {
  return vrgather_tamu(mask, maskedoff, op1, index, vl);
}

vuint32mf2_t test_vrgather_vx_u32mf2_tamu(vbool64_t mask, vuint32mf2_t maskedoff, vuint32mf2_t op1, size_t index, size_t vl) {
  return vrgather_tamu(mask, maskedoff, op1, index, vl);
}

vuint32m1_t test_vrgather_vv_u32m1_tamu(vbool32_t mask, vuint32m1_t maskedoff, vuint32m1_t op1, vuint32m1_t index, size_t vl) {
  return vrgather_tamu(mask, maskedoff, op1, index, vl);
}

vuint32m1_t test_vrgather_vx_u32m1_tamu(vbool32_t mask, vuint32m1_t maskedoff, vuint32m1_t op1, size_t index, size_t vl) {
  return vrgather_tamu(mask, maskedoff, op1, index, vl);
}

vuint32m2_t test_vrgather_vv_u32m2_tamu(vbool16_t mask, vuint32m2_t maskedoff, vuint32m2_t op1, vuint32m2_t index, size_t vl) {
  return vrgather_tamu(mask, maskedoff, op1, index, vl);
}

vuint32m2_t test_vrgather_vx_u32m2_tamu(vbool16_t mask, vuint32m2_t maskedoff, vuint32m2_t op1, size_t index, size_t vl) {
  return vrgather_tamu(mask, maskedoff, op1, index, vl);
}

vuint32m4_t test_vrgather_vv_u32m4_tamu(vbool8_t mask, vuint32m4_t maskedoff, vuint32m4_t op1, vuint32m4_t index, size_t vl) {
  return vrgather_tamu(mask, maskedoff, op1, index, vl);
}

vuint32m4_t test_vrgather_vx_u32m4_tamu(vbool8_t mask, vuint32m4_t maskedoff, vuint32m4_t op1, size_t index, size_t vl) {
  return vrgather_tamu(mask, maskedoff, op1, index, vl);
}

vuint32m8_t test_vrgather_vv_u32m8_tamu(vbool4_t mask, vuint32m8_t maskedoff, vuint32m8_t op1, vuint32m8_t index, size_t vl) {
  return vrgather_tamu(mask, maskedoff, op1, index, vl);
}

vuint32m8_t test_vrgather_vx_u32m8_tamu(vbool4_t mask, vuint32m8_t maskedoff, vuint32m8_t op1, size_t index, size_t vl) {
  return vrgather_tamu(mask, maskedoff, op1, index, vl);
}

vuint64m1_t test_vrgather_vv_u64m1_tamu(vbool64_t mask, vuint64m1_t maskedoff, vuint64m1_t op1, vuint64m1_t index, size_t vl) {
  return vrgather_tamu(mask, maskedoff, op1, index, vl);
}

vuint64m1_t test_vrgather_vx_u64m1_tamu(vbool64_t mask, vuint64m1_t maskedoff, vuint64m1_t op1, size_t index, size_t vl) {
  return vrgather_tamu(mask, maskedoff, op1, index, vl);
}

vuint64m2_t test_vrgather_vv_u64m2_tamu(vbool32_t mask, vuint64m2_t maskedoff, vuint64m2_t op1, vuint64m2_t index, size_t vl) {
  return vrgather_tamu(mask, maskedoff, op1, index, vl);
}

vuint64m2_t test_vrgather_vx_u64m2_tamu(vbool32_t mask, vuint64m2_t maskedoff, vuint64m2_t op1, size_t index, size_t vl) {
  return vrgather_tamu(mask, maskedoff, op1, index, vl);
}

vuint64m4_t test_vrgather_vv_u64m4_tamu(vbool16_t mask, vuint64m4_t maskedoff, vuint64m4_t op1, vuint64m4_t index, size_t vl) {
  return vrgather_tamu(mask, maskedoff, op1, index, vl);
}

vuint64m4_t test_vrgather_vx_u64m4_tamu(vbool16_t mask, vuint64m4_t maskedoff, vuint64m4_t op1, size_t index, size_t vl) {
  return vrgather_tamu(mask, maskedoff, op1, index, vl);
}

vuint64m8_t test_vrgather_vv_u64m8_tamu(vbool8_t mask, vuint64m8_t maskedoff, vuint64m8_t op1, vuint64m8_t index, size_t vl) {
  return vrgather_tamu(mask, maskedoff, op1, index, vl);
}

vuint64m8_t test_vrgather_vx_u64m8_tamu(vbool8_t mask, vuint64m8_t maskedoff, vuint64m8_t op1, size_t index, size_t vl) {
  return vrgather_tamu(mask, maskedoff, op1, index, vl);
}

