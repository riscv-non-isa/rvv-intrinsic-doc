/* { dg-do compile } */
/* { dg-options "-march=rv64gcv -mabi=lp64d -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
vfloat16mf4_t test_vrgather_vv_f16mf4(vfloat16mf4_t op1, vuint16mf4_t index, size_t vl) {
  return __riscv_vrgather_vv_f16mf4(op1, index, vl);
}

vfloat16mf4_t test_vrgather_vx_f16mf4(vfloat16mf4_t op1, size_t index, size_t vl) {
  return __riscv_vrgather_vx_f16mf4(op1, index, vl);
}

vfloat16mf2_t test_vrgather_vv_f16mf2(vfloat16mf2_t op1, vuint16mf2_t index, size_t vl) {
  return __riscv_vrgather_vv_f16mf2(op1, index, vl);
}

vfloat16mf2_t test_vrgather_vx_f16mf2(vfloat16mf2_t op1, size_t index, size_t vl) {
  return __riscv_vrgather_vx_f16mf2(op1, index, vl);
}

vfloat16m1_t test_vrgather_vv_f16m1(vfloat16m1_t op1, vuint16m1_t index, size_t vl) {
  return __riscv_vrgather_vv_f16m1(op1, index, vl);
}

vfloat16m1_t test_vrgather_vx_f16m1(vfloat16m1_t op1, size_t index, size_t vl) {
  return __riscv_vrgather_vx_f16m1(op1, index, vl);
}

vfloat16m2_t test_vrgather_vv_f16m2(vfloat16m2_t op1, vuint16m2_t index, size_t vl) {
  return __riscv_vrgather_vv_f16m2(op1, index, vl);
}

vfloat16m2_t test_vrgather_vx_f16m2(vfloat16m2_t op1, size_t index, size_t vl) {
  return __riscv_vrgather_vx_f16m2(op1, index, vl);
}

vfloat16m4_t test_vrgather_vv_f16m4(vfloat16m4_t op1, vuint16m4_t index, size_t vl) {
  return __riscv_vrgather_vv_f16m4(op1, index, vl);
}

vfloat16m4_t test_vrgather_vx_f16m4(vfloat16m4_t op1, size_t index, size_t vl) {
  return __riscv_vrgather_vx_f16m4(op1, index, vl);
}

vfloat16m8_t test_vrgather_vv_f16m8(vfloat16m8_t op1, vuint16m8_t index, size_t vl) {
  return __riscv_vrgather_vv_f16m8(op1, index, vl);
}

vfloat16m8_t test_vrgather_vx_f16m8(vfloat16m8_t op1, size_t index, size_t vl) {
  return __riscv_vrgather_vx_f16m8(op1, index, vl);
}

vfloat32mf2_t test_vrgather_vv_f32mf2(vfloat32mf2_t op1, vuint32mf2_t index, size_t vl) {
  return __riscv_vrgather_vv_f32mf2(op1, index, vl);
}

vfloat32mf2_t test_vrgather_vx_f32mf2(vfloat32mf2_t op1, size_t index, size_t vl) {
  return __riscv_vrgather_vx_f32mf2(op1, index, vl);
}

vfloat32m1_t test_vrgather_vv_f32m1(vfloat32m1_t op1, vuint32m1_t index, size_t vl) {
  return __riscv_vrgather_vv_f32m1(op1, index, vl);
}

vfloat32m1_t test_vrgather_vx_f32m1(vfloat32m1_t op1, size_t index, size_t vl) {
  return __riscv_vrgather_vx_f32m1(op1, index, vl);
}

vfloat32m2_t test_vrgather_vv_f32m2(vfloat32m2_t op1, vuint32m2_t index, size_t vl) {
  return __riscv_vrgather_vv_f32m2(op1, index, vl);
}

vfloat32m2_t test_vrgather_vx_f32m2(vfloat32m2_t op1, size_t index, size_t vl) {
  return __riscv_vrgather_vx_f32m2(op1, index, vl);
}

vfloat32m4_t test_vrgather_vv_f32m4(vfloat32m4_t op1, vuint32m4_t index, size_t vl) {
  return __riscv_vrgather_vv_f32m4(op1, index, vl);
}

vfloat32m4_t test_vrgather_vx_f32m4(vfloat32m4_t op1, size_t index, size_t vl) {
  return __riscv_vrgather_vx_f32m4(op1, index, vl);
}

vfloat32m8_t test_vrgather_vv_f32m8(vfloat32m8_t op1, vuint32m8_t index, size_t vl) {
  return __riscv_vrgather_vv_f32m8(op1, index, vl);
}

vfloat32m8_t test_vrgather_vx_f32m8(vfloat32m8_t op1, size_t index, size_t vl) {
  return __riscv_vrgather_vx_f32m8(op1, index, vl);
}

vfloat64m1_t test_vrgather_vv_f64m1(vfloat64m1_t op1, vuint64m1_t index, size_t vl) {
  return __riscv_vrgather_vv_f64m1(op1, index, vl);
}

vfloat64m1_t test_vrgather_vx_f64m1(vfloat64m1_t op1, size_t index, size_t vl) {
  return __riscv_vrgather_vx_f64m1(op1, index, vl);
}

vfloat64m2_t test_vrgather_vv_f64m2(vfloat64m2_t op1, vuint64m2_t index, size_t vl) {
  return __riscv_vrgather_vv_f64m2(op1, index, vl);
}

vfloat64m2_t test_vrgather_vx_f64m2(vfloat64m2_t op1, size_t index, size_t vl) {
  return __riscv_vrgather_vx_f64m2(op1, index, vl);
}

vfloat64m4_t test_vrgather_vv_f64m4(vfloat64m4_t op1, vuint64m4_t index, size_t vl) {
  return __riscv_vrgather_vv_f64m4(op1, index, vl);
}

vfloat64m4_t test_vrgather_vx_f64m4(vfloat64m4_t op1, size_t index, size_t vl) {
  return __riscv_vrgather_vx_f64m4(op1, index, vl);
}

vfloat64m8_t test_vrgather_vv_f64m8(vfloat64m8_t op1, vuint64m8_t index, size_t vl) {
  return __riscv_vrgather_vv_f64m8(op1, index, vl);
}

vfloat64m8_t test_vrgather_vx_f64m8(vfloat64m8_t op1, size_t index, size_t vl) {
  return __riscv_vrgather_vx_f64m8(op1, index, vl);
}

vint8mf8_t test_vrgather_vv_i8mf8(vint8mf8_t op1, vuint8mf8_t index, size_t vl) {
  return __riscv_vrgather_vv_i8mf8(op1, index, vl);
}

vint8mf8_t test_vrgather_vx_i8mf8(vint8mf8_t op1, size_t index, size_t vl) {
  return __riscv_vrgather_vx_i8mf8(op1, index, vl);
}

vint8mf4_t test_vrgather_vv_i8mf4(vint8mf4_t op1, vuint8mf4_t index, size_t vl) {
  return __riscv_vrgather_vv_i8mf4(op1, index, vl);
}

vint8mf4_t test_vrgather_vx_i8mf4(vint8mf4_t op1, size_t index, size_t vl) {
  return __riscv_vrgather_vx_i8mf4(op1, index, vl);
}

vint8mf2_t test_vrgather_vv_i8mf2(vint8mf2_t op1, vuint8mf2_t index, size_t vl) {
  return __riscv_vrgather_vv_i8mf2(op1, index, vl);
}

vint8mf2_t test_vrgather_vx_i8mf2(vint8mf2_t op1, size_t index, size_t vl) {
  return __riscv_vrgather_vx_i8mf2(op1, index, vl);
}

vint8m1_t test_vrgather_vv_i8m1(vint8m1_t op1, vuint8m1_t index, size_t vl) {
  return __riscv_vrgather_vv_i8m1(op1, index, vl);
}

vint8m1_t test_vrgather_vx_i8m1(vint8m1_t op1, size_t index, size_t vl) {
  return __riscv_vrgather_vx_i8m1(op1, index, vl);
}

vint8m2_t test_vrgather_vv_i8m2(vint8m2_t op1, vuint8m2_t index, size_t vl) {
  return __riscv_vrgather_vv_i8m2(op1, index, vl);
}

vint8m2_t test_vrgather_vx_i8m2(vint8m2_t op1, size_t index, size_t vl) {
  return __riscv_vrgather_vx_i8m2(op1, index, vl);
}

vint8m4_t test_vrgather_vv_i8m4(vint8m4_t op1, vuint8m4_t index, size_t vl) {
  return __riscv_vrgather_vv_i8m4(op1, index, vl);
}

vint8m4_t test_vrgather_vx_i8m4(vint8m4_t op1, size_t index, size_t vl) {
  return __riscv_vrgather_vx_i8m4(op1, index, vl);
}

vint8m8_t test_vrgather_vv_i8m8(vint8m8_t op1, vuint8m8_t index, size_t vl) {
  return __riscv_vrgather_vv_i8m8(op1, index, vl);
}

vint8m8_t test_vrgather_vx_i8m8(vint8m8_t op1, size_t index, size_t vl) {
  return __riscv_vrgather_vx_i8m8(op1, index, vl);
}

vint16mf4_t test_vrgather_vv_i16mf4(vint16mf4_t op1, vuint16mf4_t index, size_t vl) {
  return __riscv_vrgather_vv_i16mf4(op1, index, vl);
}

vint16mf4_t test_vrgather_vx_i16mf4(vint16mf4_t op1, size_t index, size_t vl) {
  return __riscv_vrgather_vx_i16mf4(op1, index, vl);
}

vint16mf2_t test_vrgather_vv_i16mf2(vint16mf2_t op1, vuint16mf2_t index, size_t vl) {
  return __riscv_vrgather_vv_i16mf2(op1, index, vl);
}

vint16mf2_t test_vrgather_vx_i16mf2(vint16mf2_t op1, size_t index, size_t vl) {
  return __riscv_vrgather_vx_i16mf2(op1, index, vl);
}

vint16m1_t test_vrgather_vv_i16m1(vint16m1_t op1, vuint16m1_t index, size_t vl) {
  return __riscv_vrgather_vv_i16m1(op1, index, vl);
}

vint16m1_t test_vrgather_vx_i16m1(vint16m1_t op1, size_t index, size_t vl) {
  return __riscv_vrgather_vx_i16m1(op1, index, vl);
}

vint16m2_t test_vrgather_vv_i16m2(vint16m2_t op1, vuint16m2_t index, size_t vl) {
  return __riscv_vrgather_vv_i16m2(op1, index, vl);
}

vint16m2_t test_vrgather_vx_i16m2(vint16m2_t op1, size_t index, size_t vl) {
  return __riscv_vrgather_vx_i16m2(op1, index, vl);
}

vint16m4_t test_vrgather_vv_i16m4(vint16m4_t op1, vuint16m4_t index, size_t vl) {
  return __riscv_vrgather_vv_i16m4(op1, index, vl);
}

vint16m4_t test_vrgather_vx_i16m4(vint16m4_t op1, size_t index, size_t vl) {
  return __riscv_vrgather_vx_i16m4(op1, index, vl);
}

vint16m8_t test_vrgather_vv_i16m8(vint16m8_t op1, vuint16m8_t index, size_t vl) {
  return __riscv_vrgather_vv_i16m8(op1, index, vl);
}

vint16m8_t test_vrgather_vx_i16m8(vint16m8_t op1, size_t index, size_t vl) {
  return __riscv_vrgather_vx_i16m8(op1, index, vl);
}

vint32mf2_t test_vrgather_vv_i32mf2(vint32mf2_t op1, vuint32mf2_t index, size_t vl) {
  return __riscv_vrgather_vv_i32mf2(op1, index, vl);
}

vint32mf2_t test_vrgather_vx_i32mf2(vint32mf2_t op1, size_t index, size_t vl) {
  return __riscv_vrgather_vx_i32mf2(op1, index, vl);
}

vint32m1_t test_vrgather_vv_i32m1(vint32m1_t op1, vuint32m1_t index, size_t vl) {
  return __riscv_vrgather_vv_i32m1(op1, index, vl);
}

vint32m1_t test_vrgather_vx_i32m1(vint32m1_t op1, size_t index, size_t vl) {
  return __riscv_vrgather_vx_i32m1(op1, index, vl);
}

vint32m2_t test_vrgather_vv_i32m2(vint32m2_t op1, vuint32m2_t index, size_t vl) {
  return __riscv_vrgather_vv_i32m2(op1, index, vl);
}

vint32m2_t test_vrgather_vx_i32m2(vint32m2_t op1, size_t index, size_t vl) {
  return __riscv_vrgather_vx_i32m2(op1, index, vl);
}

vint32m4_t test_vrgather_vv_i32m4(vint32m4_t op1, vuint32m4_t index, size_t vl) {
  return __riscv_vrgather_vv_i32m4(op1, index, vl);
}

vint32m4_t test_vrgather_vx_i32m4(vint32m4_t op1, size_t index, size_t vl) {
  return __riscv_vrgather_vx_i32m4(op1, index, vl);
}

vint32m8_t test_vrgather_vv_i32m8(vint32m8_t op1, vuint32m8_t index, size_t vl) {
  return __riscv_vrgather_vv_i32m8(op1, index, vl);
}

vint32m8_t test_vrgather_vx_i32m8(vint32m8_t op1, size_t index, size_t vl) {
  return __riscv_vrgather_vx_i32m8(op1, index, vl);
}

vint64m1_t test_vrgather_vv_i64m1(vint64m1_t op1, vuint64m1_t index, size_t vl) {
  return __riscv_vrgather_vv_i64m1(op1, index, vl);
}

vint64m1_t test_vrgather_vx_i64m1(vint64m1_t op1, size_t index, size_t vl) {
  return __riscv_vrgather_vx_i64m1(op1, index, vl);
}

vint64m2_t test_vrgather_vv_i64m2(vint64m2_t op1, vuint64m2_t index, size_t vl) {
  return __riscv_vrgather_vv_i64m2(op1, index, vl);
}

vint64m2_t test_vrgather_vx_i64m2(vint64m2_t op1, size_t index, size_t vl) {
  return __riscv_vrgather_vx_i64m2(op1, index, vl);
}

vint64m4_t test_vrgather_vv_i64m4(vint64m4_t op1, vuint64m4_t index, size_t vl) {
  return __riscv_vrgather_vv_i64m4(op1, index, vl);
}

vint64m4_t test_vrgather_vx_i64m4(vint64m4_t op1, size_t index, size_t vl) {
  return __riscv_vrgather_vx_i64m4(op1, index, vl);
}

vint64m8_t test_vrgather_vv_i64m8(vint64m8_t op1, vuint64m8_t index, size_t vl) {
  return __riscv_vrgather_vv_i64m8(op1, index, vl);
}

vint64m8_t test_vrgather_vx_i64m8(vint64m8_t op1, size_t index, size_t vl) {
  return __riscv_vrgather_vx_i64m8(op1, index, vl);
}

vuint8mf8_t test_vrgather_vv_u8mf8(vuint8mf8_t op1, vuint8mf8_t index, size_t vl) {
  return __riscv_vrgather_vv_u8mf8(op1, index, vl);
}

vuint8mf8_t test_vrgather_vx_u8mf8(vuint8mf8_t op1, size_t index, size_t vl) {
  return __riscv_vrgather_vx_u8mf8(op1, index, vl);
}

vuint8mf4_t test_vrgather_vv_u8mf4(vuint8mf4_t op1, vuint8mf4_t index, size_t vl) {
  return __riscv_vrgather_vv_u8mf4(op1, index, vl);
}

vuint8mf4_t test_vrgather_vx_u8mf4(vuint8mf4_t op1, size_t index, size_t vl) {
  return __riscv_vrgather_vx_u8mf4(op1, index, vl);
}

vuint8mf2_t test_vrgather_vv_u8mf2(vuint8mf2_t op1, vuint8mf2_t index, size_t vl) {
  return __riscv_vrgather_vv_u8mf2(op1, index, vl);
}

vuint8mf2_t test_vrgather_vx_u8mf2(vuint8mf2_t op1, size_t index, size_t vl) {
  return __riscv_vrgather_vx_u8mf2(op1, index, vl);
}

vuint8m1_t test_vrgather_vv_u8m1(vuint8m1_t op1, vuint8m1_t index, size_t vl) {
  return __riscv_vrgather_vv_u8m1(op1, index, vl);
}

vuint8m1_t test_vrgather_vx_u8m1(vuint8m1_t op1, size_t index, size_t vl) {
  return __riscv_vrgather_vx_u8m1(op1, index, vl);
}

vuint8m2_t test_vrgather_vv_u8m2(vuint8m2_t op1, vuint8m2_t index, size_t vl) {
  return __riscv_vrgather_vv_u8m2(op1, index, vl);
}

vuint8m2_t test_vrgather_vx_u8m2(vuint8m2_t op1, size_t index, size_t vl) {
  return __riscv_vrgather_vx_u8m2(op1, index, vl);
}

vuint8m4_t test_vrgather_vv_u8m4(vuint8m4_t op1, vuint8m4_t index, size_t vl) {
  return __riscv_vrgather_vv_u8m4(op1, index, vl);
}

vuint8m4_t test_vrgather_vx_u8m4(vuint8m4_t op1, size_t index, size_t vl) {
  return __riscv_vrgather_vx_u8m4(op1, index, vl);
}

vuint8m8_t test_vrgather_vv_u8m8(vuint8m8_t op1, vuint8m8_t index, size_t vl) {
  return __riscv_vrgather_vv_u8m8(op1, index, vl);
}

vuint8m8_t test_vrgather_vx_u8m8(vuint8m8_t op1, size_t index, size_t vl) {
  return __riscv_vrgather_vx_u8m8(op1, index, vl);
}

vuint16mf4_t test_vrgather_vv_u16mf4(vuint16mf4_t op1, vuint16mf4_t index, size_t vl) {
  return __riscv_vrgather_vv_u16mf4(op1, index, vl);
}

vuint16mf4_t test_vrgather_vx_u16mf4(vuint16mf4_t op1, size_t index, size_t vl) {
  return __riscv_vrgather_vx_u16mf4(op1, index, vl);
}

vuint16mf2_t test_vrgather_vv_u16mf2(vuint16mf2_t op1, vuint16mf2_t index, size_t vl) {
  return __riscv_vrgather_vv_u16mf2(op1, index, vl);
}

vuint16mf2_t test_vrgather_vx_u16mf2(vuint16mf2_t op1, size_t index, size_t vl) {
  return __riscv_vrgather_vx_u16mf2(op1, index, vl);
}

vuint16m1_t test_vrgather_vv_u16m1(vuint16m1_t op1, vuint16m1_t index, size_t vl) {
  return __riscv_vrgather_vv_u16m1(op1, index, vl);
}

vuint16m1_t test_vrgather_vx_u16m1(vuint16m1_t op1, size_t index, size_t vl) {
  return __riscv_vrgather_vx_u16m1(op1, index, vl);
}

vuint16m2_t test_vrgather_vv_u16m2(vuint16m2_t op1, vuint16m2_t index, size_t vl) {
  return __riscv_vrgather_vv_u16m2(op1, index, vl);
}

vuint16m2_t test_vrgather_vx_u16m2(vuint16m2_t op1, size_t index, size_t vl) {
  return __riscv_vrgather_vx_u16m2(op1, index, vl);
}

vuint16m4_t test_vrgather_vv_u16m4(vuint16m4_t op1, vuint16m4_t index, size_t vl) {
  return __riscv_vrgather_vv_u16m4(op1, index, vl);
}

vuint16m4_t test_vrgather_vx_u16m4(vuint16m4_t op1, size_t index, size_t vl) {
  return __riscv_vrgather_vx_u16m4(op1, index, vl);
}

vuint16m8_t test_vrgather_vv_u16m8(vuint16m8_t op1, vuint16m8_t index, size_t vl) {
  return __riscv_vrgather_vv_u16m8(op1, index, vl);
}

vuint16m8_t test_vrgather_vx_u16m8(vuint16m8_t op1, size_t index, size_t vl) {
  return __riscv_vrgather_vx_u16m8(op1, index, vl);
}

vuint32mf2_t test_vrgather_vv_u32mf2(vuint32mf2_t op1, vuint32mf2_t index, size_t vl) {
  return __riscv_vrgather_vv_u32mf2(op1, index, vl);
}

vuint32mf2_t test_vrgather_vx_u32mf2(vuint32mf2_t op1, size_t index, size_t vl) {
  return __riscv_vrgather_vx_u32mf2(op1, index, vl);
}

vuint32m1_t test_vrgather_vv_u32m1(vuint32m1_t op1, vuint32m1_t index, size_t vl) {
  return __riscv_vrgather_vv_u32m1(op1, index, vl);
}

vuint32m1_t test_vrgather_vx_u32m1(vuint32m1_t op1, size_t index, size_t vl) {
  return __riscv_vrgather_vx_u32m1(op1, index, vl);
}

vuint32m2_t test_vrgather_vv_u32m2(vuint32m2_t op1, vuint32m2_t index, size_t vl) {
  return __riscv_vrgather_vv_u32m2(op1, index, vl);
}

vuint32m2_t test_vrgather_vx_u32m2(vuint32m2_t op1, size_t index, size_t vl) {
  return __riscv_vrgather_vx_u32m2(op1, index, vl);
}

vuint32m4_t test_vrgather_vv_u32m4(vuint32m4_t op1, vuint32m4_t index, size_t vl) {
  return __riscv_vrgather_vv_u32m4(op1, index, vl);
}

vuint32m4_t test_vrgather_vx_u32m4(vuint32m4_t op1, size_t index, size_t vl) {
  return __riscv_vrgather_vx_u32m4(op1, index, vl);
}

vuint32m8_t test_vrgather_vv_u32m8(vuint32m8_t op1, vuint32m8_t index, size_t vl) {
  return __riscv_vrgather_vv_u32m8(op1, index, vl);
}

vuint32m8_t test_vrgather_vx_u32m8(vuint32m8_t op1, size_t index, size_t vl) {
  return __riscv_vrgather_vx_u32m8(op1, index, vl);
}

vuint64m1_t test_vrgather_vv_u64m1(vuint64m1_t op1, vuint64m1_t index, size_t vl) {
  return __riscv_vrgather_vv_u64m1(op1, index, vl);
}

vuint64m1_t test_vrgather_vx_u64m1(vuint64m1_t op1, size_t index, size_t vl) {
  return __riscv_vrgather_vx_u64m1(op1, index, vl);
}

vuint64m2_t test_vrgather_vv_u64m2(vuint64m2_t op1, vuint64m2_t index, size_t vl) {
  return __riscv_vrgather_vv_u64m2(op1, index, vl);
}

vuint64m2_t test_vrgather_vx_u64m2(vuint64m2_t op1, size_t index, size_t vl) {
  return __riscv_vrgather_vx_u64m2(op1, index, vl);
}

vuint64m4_t test_vrgather_vv_u64m4(vuint64m4_t op1, vuint64m4_t index, size_t vl) {
  return __riscv_vrgather_vv_u64m4(op1, index, vl);
}

vuint64m4_t test_vrgather_vx_u64m4(vuint64m4_t op1, size_t index, size_t vl) {
  return __riscv_vrgather_vx_u64m4(op1, index, vl);
}

vuint64m8_t test_vrgather_vv_u64m8(vuint64m8_t op1, vuint64m8_t index, size_t vl) {
  return __riscv_vrgather_vv_u64m8(op1, index, vl);
}

vuint64m8_t test_vrgather_vx_u64m8(vuint64m8_t op1, size_t index, size_t vl) {
  return __riscv_vrgather_vx_u64m8(op1, index, vl);
}

vfloat16mf4_t test_vrgather_vv_f16mf4_m(vbool64_t mask, vfloat16mf4_t op1, vuint16mf4_t index, size_t vl) {
  return __riscv_vrgather_vv_f16mf4_m(mask, op1, index, vl);
}

vfloat16mf4_t test_vrgather_vx_f16mf4_m(vbool64_t mask, vfloat16mf4_t op1, size_t index, size_t vl) {
  return __riscv_vrgather_vx_f16mf4_m(mask, op1, index, vl);
}

vfloat16mf2_t test_vrgather_vv_f16mf2_m(vbool32_t mask, vfloat16mf2_t op1, vuint16mf2_t index, size_t vl) {
  return __riscv_vrgather_vv_f16mf2_m(mask, op1, index, vl);
}

vfloat16mf2_t test_vrgather_vx_f16mf2_m(vbool32_t mask, vfloat16mf2_t op1, size_t index, size_t vl) {
  return __riscv_vrgather_vx_f16mf2_m(mask, op1, index, vl);
}

vfloat16m1_t test_vrgather_vv_f16m1_m(vbool16_t mask, vfloat16m1_t op1, vuint16m1_t index, size_t vl) {
  return __riscv_vrgather_vv_f16m1_m(mask, op1, index, vl);
}

vfloat16m1_t test_vrgather_vx_f16m1_m(vbool16_t mask, vfloat16m1_t op1, size_t index, size_t vl) {
  return __riscv_vrgather_vx_f16m1_m(mask, op1, index, vl);
}

vfloat16m2_t test_vrgather_vv_f16m2_m(vbool8_t mask, vfloat16m2_t op1, vuint16m2_t index, size_t vl) {
  return __riscv_vrgather_vv_f16m2_m(mask, op1, index, vl);
}

vfloat16m2_t test_vrgather_vx_f16m2_m(vbool8_t mask, vfloat16m2_t op1, size_t index, size_t vl) {
  return __riscv_vrgather_vx_f16m2_m(mask, op1, index, vl);
}

vfloat16m4_t test_vrgather_vv_f16m4_m(vbool4_t mask, vfloat16m4_t op1, vuint16m4_t index, size_t vl) {
  return __riscv_vrgather_vv_f16m4_m(mask, op1, index, vl);
}

vfloat16m4_t test_vrgather_vx_f16m4_m(vbool4_t mask, vfloat16m4_t op1, size_t index, size_t vl) {
  return __riscv_vrgather_vx_f16m4_m(mask, op1, index, vl);
}

vfloat16m8_t test_vrgather_vv_f16m8_m(vbool2_t mask, vfloat16m8_t op1, vuint16m8_t index, size_t vl) {
  return __riscv_vrgather_vv_f16m8_m(mask, op1, index, vl);
}

vfloat16m8_t test_vrgather_vx_f16m8_m(vbool2_t mask, vfloat16m8_t op1, size_t index, size_t vl) {
  return __riscv_vrgather_vx_f16m8_m(mask, op1, index, vl);
}

vfloat32mf2_t test_vrgather_vv_f32mf2_m(vbool64_t mask, vfloat32mf2_t op1, vuint32mf2_t index, size_t vl) {
  return __riscv_vrgather_vv_f32mf2_m(mask, op1, index, vl);
}

vfloat32mf2_t test_vrgather_vx_f32mf2_m(vbool64_t mask, vfloat32mf2_t op1, size_t index, size_t vl) {
  return __riscv_vrgather_vx_f32mf2_m(mask, op1, index, vl);
}

vfloat32m1_t test_vrgather_vv_f32m1_m(vbool32_t mask, vfloat32m1_t op1, vuint32m1_t index, size_t vl) {
  return __riscv_vrgather_vv_f32m1_m(mask, op1, index, vl);
}

vfloat32m1_t test_vrgather_vx_f32m1_m(vbool32_t mask, vfloat32m1_t op1, size_t index, size_t vl) {
  return __riscv_vrgather_vx_f32m1_m(mask, op1, index, vl);
}

vfloat32m2_t test_vrgather_vv_f32m2_m(vbool16_t mask, vfloat32m2_t op1, vuint32m2_t index, size_t vl) {
  return __riscv_vrgather_vv_f32m2_m(mask, op1, index, vl);
}

vfloat32m2_t test_vrgather_vx_f32m2_m(vbool16_t mask, vfloat32m2_t op1, size_t index, size_t vl) {
  return __riscv_vrgather_vx_f32m2_m(mask, op1, index, vl);
}

vfloat32m4_t test_vrgather_vv_f32m4_m(vbool8_t mask, vfloat32m4_t op1, vuint32m4_t index, size_t vl) {
  return __riscv_vrgather_vv_f32m4_m(mask, op1, index, vl);
}

vfloat32m4_t test_vrgather_vx_f32m4_m(vbool8_t mask, vfloat32m4_t op1, size_t index, size_t vl) {
  return __riscv_vrgather_vx_f32m4_m(mask, op1, index, vl);
}

vfloat32m8_t test_vrgather_vv_f32m8_m(vbool4_t mask, vfloat32m8_t op1, vuint32m8_t index, size_t vl) {
  return __riscv_vrgather_vv_f32m8_m(mask, op1, index, vl);
}

vfloat32m8_t test_vrgather_vx_f32m8_m(vbool4_t mask, vfloat32m8_t op1, size_t index, size_t vl) {
  return __riscv_vrgather_vx_f32m8_m(mask, op1, index, vl);
}

vfloat64m1_t test_vrgather_vv_f64m1_m(vbool64_t mask, vfloat64m1_t op1, vuint64m1_t index, size_t vl) {
  return __riscv_vrgather_vv_f64m1_m(mask, op1, index, vl);
}

vfloat64m1_t test_vrgather_vx_f64m1_m(vbool64_t mask, vfloat64m1_t op1, size_t index, size_t vl) {
  return __riscv_vrgather_vx_f64m1_m(mask, op1, index, vl);
}

vfloat64m2_t test_vrgather_vv_f64m2_m(vbool32_t mask, vfloat64m2_t op1, vuint64m2_t index, size_t vl) {
  return __riscv_vrgather_vv_f64m2_m(mask, op1, index, vl);
}

vfloat64m2_t test_vrgather_vx_f64m2_m(vbool32_t mask, vfloat64m2_t op1, size_t index, size_t vl) {
  return __riscv_vrgather_vx_f64m2_m(mask, op1, index, vl);
}

vfloat64m4_t test_vrgather_vv_f64m4_m(vbool16_t mask, vfloat64m4_t op1, vuint64m4_t index, size_t vl) {
  return __riscv_vrgather_vv_f64m4_m(mask, op1, index, vl);
}

vfloat64m4_t test_vrgather_vx_f64m4_m(vbool16_t mask, vfloat64m4_t op1, size_t index, size_t vl) {
  return __riscv_vrgather_vx_f64m4_m(mask, op1, index, vl);
}

vfloat64m8_t test_vrgather_vv_f64m8_m(vbool8_t mask, vfloat64m8_t op1, vuint64m8_t index, size_t vl) {
  return __riscv_vrgather_vv_f64m8_m(mask, op1, index, vl);
}

vfloat64m8_t test_vrgather_vx_f64m8_m(vbool8_t mask, vfloat64m8_t op1, size_t index, size_t vl) {
  return __riscv_vrgather_vx_f64m8_m(mask, op1, index, vl);
}

vint8mf8_t test_vrgather_vv_i8mf8_m(vbool64_t mask, vint8mf8_t op1, vuint8mf8_t index, size_t vl) {
  return __riscv_vrgather_vv_i8mf8_m(mask, op1, index, vl);
}

vint8mf8_t test_vrgather_vx_i8mf8_m(vbool64_t mask, vint8mf8_t op1, size_t index, size_t vl) {
  return __riscv_vrgather_vx_i8mf8_m(mask, op1, index, vl);
}

vint8mf4_t test_vrgather_vv_i8mf4_m(vbool32_t mask, vint8mf4_t op1, vuint8mf4_t index, size_t vl) {
  return __riscv_vrgather_vv_i8mf4_m(mask, op1, index, vl);
}

vint8mf4_t test_vrgather_vx_i8mf4_m(vbool32_t mask, vint8mf4_t op1, size_t index, size_t vl) {
  return __riscv_vrgather_vx_i8mf4_m(mask, op1, index, vl);
}

vint8mf2_t test_vrgather_vv_i8mf2_m(vbool16_t mask, vint8mf2_t op1, vuint8mf2_t index, size_t vl) {
  return __riscv_vrgather_vv_i8mf2_m(mask, op1, index, vl);
}

vint8mf2_t test_vrgather_vx_i8mf2_m(vbool16_t mask, vint8mf2_t op1, size_t index, size_t vl) {
  return __riscv_vrgather_vx_i8mf2_m(mask, op1, index, vl);
}

vint8m1_t test_vrgather_vv_i8m1_m(vbool8_t mask, vint8m1_t op1, vuint8m1_t index, size_t vl) {
  return __riscv_vrgather_vv_i8m1_m(mask, op1, index, vl);
}

vint8m1_t test_vrgather_vx_i8m1_m(vbool8_t mask, vint8m1_t op1, size_t index, size_t vl) {
  return __riscv_vrgather_vx_i8m1_m(mask, op1, index, vl);
}

vint8m2_t test_vrgather_vv_i8m2_m(vbool4_t mask, vint8m2_t op1, vuint8m2_t index, size_t vl) {
  return __riscv_vrgather_vv_i8m2_m(mask, op1, index, vl);
}

vint8m2_t test_vrgather_vx_i8m2_m(vbool4_t mask, vint8m2_t op1, size_t index, size_t vl) {
  return __riscv_vrgather_vx_i8m2_m(mask, op1, index, vl);
}

vint8m4_t test_vrgather_vv_i8m4_m(vbool2_t mask, vint8m4_t op1, vuint8m4_t index, size_t vl) {
  return __riscv_vrgather_vv_i8m4_m(mask, op1, index, vl);
}

vint8m4_t test_vrgather_vx_i8m4_m(vbool2_t mask, vint8m4_t op1, size_t index, size_t vl) {
  return __riscv_vrgather_vx_i8m4_m(mask, op1, index, vl);
}

vint8m8_t test_vrgather_vv_i8m8_m(vbool1_t mask, vint8m8_t op1, vuint8m8_t index, size_t vl) {
  return __riscv_vrgather_vv_i8m8_m(mask, op1, index, vl);
}

vint8m8_t test_vrgather_vx_i8m8_m(vbool1_t mask, vint8m8_t op1, size_t index, size_t vl) {
  return __riscv_vrgather_vx_i8m8_m(mask, op1, index, vl);
}

vint16mf4_t test_vrgather_vv_i16mf4_m(vbool64_t mask, vint16mf4_t op1, vuint16mf4_t index, size_t vl) {
  return __riscv_vrgather_vv_i16mf4_m(mask, op1, index, vl);
}

vint16mf4_t test_vrgather_vx_i16mf4_m(vbool64_t mask, vint16mf4_t op1, size_t index, size_t vl) {
  return __riscv_vrgather_vx_i16mf4_m(mask, op1, index, vl);
}

vint16mf2_t test_vrgather_vv_i16mf2_m(vbool32_t mask, vint16mf2_t op1, vuint16mf2_t index, size_t vl) {
  return __riscv_vrgather_vv_i16mf2_m(mask, op1, index, vl);
}

vint16mf2_t test_vrgather_vx_i16mf2_m(vbool32_t mask, vint16mf2_t op1, size_t index, size_t vl) {
  return __riscv_vrgather_vx_i16mf2_m(mask, op1, index, vl);
}

vint16m1_t test_vrgather_vv_i16m1_m(vbool16_t mask, vint16m1_t op1, vuint16m1_t index, size_t vl) {
  return __riscv_vrgather_vv_i16m1_m(mask, op1, index, vl);
}

vint16m1_t test_vrgather_vx_i16m1_m(vbool16_t mask, vint16m1_t op1, size_t index, size_t vl) {
  return __riscv_vrgather_vx_i16m1_m(mask, op1, index, vl);
}

vint16m2_t test_vrgather_vv_i16m2_m(vbool8_t mask, vint16m2_t op1, vuint16m2_t index, size_t vl) {
  return __riscv_vrgather_vv_i16m2_m(mask, op1, index, vl);
}

vint16m2_t test_vrgather_vx_i16m2_m(vbool8_t mask, vint16m2_t op1, size_t index, size_t vl) {
  return __riscv_vrgather_vx_i16m2_m(mask, op1, index, vl);
}

vint16m4_t test_vrgather_vv_i16m4_m(vbool4_t mask, vint16m4_t op1, vuint16m4_t index, size_t vl) {
  return __riscv_vrgather_vv_i16m4_m(mask, op1, index, vl);
}

vint16m4_t test_vrgather_vx_i16m4_m(vbool4_t mask, vint16m4_t op1, size_t index, size_t vl) {
  return __riscv_vrgather_vx_i16m4_m(mask, op1, index, vl);
}

vint16m8_t test_vrgather_vv_i16m8_m(vbool2_t mask, vint16m8_t op1, vuint16m8_t index, size_t vl) {
  return __riscv_vrgather_vv_i16m8_m(mask, op1, index, vl);
}

vint16m8_t test_vrgather_vx_i16m8_m(vbool2_t mask, vint16m8_t op1, size_t index, size_t vl) {
  return __riscv_vrgather_vx_i16m8_m(mask, op1, index, vl);
}

vint32mf2_t test_vrgather_vv_i32mf2_m(vbool64_t mask, vint32mf2_t op1, vuint32mf2_t index, size_t vl) {
  return __riscv_vrgather_vv_i32mf2_m(mask, op1, index, vl);
}

vint32mf2_t test_vrgather_vx_i32mf2_m(vbool64_t mask, vint32mf2_t op1, size_t index, size_t vl) {
  return __riscv_vrgather_vx_i32mf2_m(mask, op1, index, vl);
}

vint32m1_t test_vrgather_vv_i32m1_m(vbool32_t mask, vint32m1_t op1, vuint32m1_t index, size_t vl) {
  return __riscv_vrgather_vv_i32m1_m(mask, op1, index, vl);
}

vint32m1_t test_vrgather_vx_i32m1_m(vbool32_t mask, vint32m1_t op1, size_t index, size_t vl) {
  return __riscv_vrgather_vx_i32m1_m(mask, op1, index, vl);
}

vint32m2_t test_vrgather_vv_i32m2_m(vbool16_t mask, vint32m2_t op1, vuint32m2_t index, size_t vl) {
  return __riscv_vrgather_vv_i32m2_m(mask, op1, index, vl);
}

vint32m2_t test_vrgather_vx_i32m2_m(vbool16_t mask, vint32m2_t op1, size_t index, size_t vl) {
  return __riscv_vrgather_vx_i32m2_m(mask, op1, index, vl);
}

vint32m4_t test_vrgather_vv_i32m4_m(vbool8_t mask, vint32m4_t op1, vuint32m4_t index, size_t vl) {
  return __riscv_vrgather_vv_i32m4_m(mask, op1, index, vl);
}

vint32m4_t test_vrgather_vx_i32m4_m(vbool8_t mask, vint32m4_t op1, size_t index, size_t vl) {
  return __riscv_vrgather_vx_i32m4_m(mask, op1, index, vl);
}

vint32m8_t test_vrgather_vv_i32m8_m(vbool4_t mask, vint32m8_t op1, vuint32m8_t index, size_t vl) {
  return __riscv_vrgather_vv_i32m8_m(mask, op1, index, vl);
}

vint32m8_t test_vrgather_vx_i32m8_m(vbool4_t mask, vint32m8_t op1, size_t index, size_t vl) {
  return __riscv_vrgather_vx_i32m8_m(mask, op1, index, vl);
}

vint64m1_t test_vrgather_vv_i64m1_m(vbool64_t mask, vint64m1_t op1, vuint64m1_t index, size_t vl) {
  return __riscv_vrgather_vv_i64m1_m(mask, op1, index, vl);
}

vint64m1_t test_vrgather_vx_i64m1_m(vbool64_t mask, vint64m1_t op1, size_t index, size_t vl) {
  return __riscv_vrgather_vx_i64m1_m(mask, op1, index, vl);
}

vint64m2_t test_vrgather_vv_i64m2_m(vbool32_t mask, vint64m2_t op1, vuint64m2_t index, size_t vl) {
  return __riscv_vrgather_vv_i64m2_m(mask, op1, index, vl);
}

vint64m2_t test_vrgather_vx_i64m2_m(vbool32_t mask, vint64m2_t op1, size_t index, size_t vl) {
  return __riscv_vrgather_vx_i64m2_m(mask, op1, index, vl);
}

vint64m4_t test_vrgather_vv_i64m4_m(vbool16_t mask, vint64m4_t op1, vuint64m4_t index, size_t vl) {
  return __riscv_vrgather_vv_i64m4_m(mask, op1, index, vl);
}

vint64m4_t test_vrgather_vx_i64m4_m(vbool16_t mask, vint64m4_t op1, size_t index, size_t vl) {
  return __riscv_vrgather_vx_i64m4_m(mask, op1, index, vl);
}

vint64m8_t test_vrgather_vv_i64m8_m(vbool8_t mask, vint64m8_t op1, vuint64m8_t index, size_t vl) {
  return __riscv_vrgather_vv_i64m8_m(mask, op1, index, vl);
}

vint64m8_t test_vrgather_vx_i64m8_m(vbool8_t mask, vint64m8_t op1, size_t index, size_t vl) {
  return __riscv_vrgather_vx_i64m8_m(mask, op1, index, vl);
}

vuint8mf8_t test_vrgather_vv_u8mf8_m(vbool64_t mask, vuint8mf8_t op1, vuint8mf8_t index, size_t vl) {
  return __riscv_vrgather_vv_u8mf8_m(mask, op1, index, vl);
}

vuint8mf8_t test_vrgather_vx_u8mf8_m(vbool64_t mask, vuint8mf8_t op1, size_t index, size_t vl) {
  return __riscv_vrgather_vx_u8mf8_m(mask, op1, index, vl);
}

vuint8mf4_t test_vrgather_vv_u8mf4_m(vbool32_t mask, vuint8mf4_t op1, vuint8mf4_t index, size_t vl) {
  return __riscv_vrgather_vv_u8mf4_m(mask, op1, index, vl);
}

vuint8mf4_t test_vrgather_vx_u8mf4_m(vbool32_t mask, vuint8mf4_t op1, size_t index, size_t vl) {
  return __riscv_vrgather_vx_u8mf4_m(mask, op1, index, vl);
}

vuint8mf2_t test_vrgather_vv_u8mf2_m(vbool16_t mask, vuint8mf2_t op1, vuint8mf2_t index, size_t vl) {
  return __riscv_vrgather_vv_u8mf2_m(mask, op1, index, vl);
}

vuint8mf2_t test_vrgather_vx_u8mf2_m(vbool16_t mask, vuint8mf2_t op1, size_t index, size_t vl) {
  return __riscv_vrgather_vx_u8mf2_m(mask, op1, index, vl);
}

vuint8m1_t test_vrgather_vv_u8m1_m(vbool8_t mask, vuint8m1_t op1, vuint8m1_t index, size_t vl) {
  return __riscv_vrgather_vv_u8m1_m(mask, op1, index, vl);
}

vuint8m1_t test_vrgather_vx_u8m1_m(vbool8_t mask, vuint8m1_t op1, size_t index, size_t vl) {
  return __riscv_vrgather_vx_u8m1_m(mask, op1, index, vl);
}

vuint8m2_t test_vrgather_vv_u8m2_m(vbool4_t mask, vuint8m2_t op1, vuint8m2_t index, size_t vl) {
  return __riscv_vrgather_vv_u8m2_m(mask, op1, index, vl);
}

vuint8m2_t test_vrgather_vx_u8m2_m(vbool4_t mask, vuint8m2_t op1, size_t index, size_t vl) {
  return __riscv_vrgather_vx_u8m2_m(mask, op1, index, vl);
}

vuint8m4_t test_vrgather_vv_u8m4_m(vbool2_t mask, vuint8m4_t op1, vuint8m4_t index, size_t vl) {
  return __riscv_vrgather_vv_u8m4_m(mask, op1, index, vl);
}

vuint8m4_t test_vrgather_vx_u8m4_m(vbool2_t mask, vuint8m4_t op1, size_t index, size_t vl) {
  return __riscv_vrgather_vx_u8m4_m(mask, op1, index, vl);
}

vuint8m8_t test_vrgather_vv_u8m8_m(vbool1_t mask, vuint8m8_t op1, vuint8m8_t index, size_t vl) {
  return __riscv_vrgather_vv_u8m8_m(mask, op1, index, vl);
}

vuint8m8_t test_vrgather_vx_u8m8_m(vbool1_t mask, vuint8m8_t op1, size_t index, size_t vl) {
  return __riscv_vrgather_vx_u8m8_m(mask, op1, index, vl);
}

vuint16mf4_t test_vrgather_vv_u16mf4_m(vbool64_t mask, vuint16mf4_t op1, vuint16mf4_t index, size_t vl) {
  return __riscv_vrgather_vv_u16mf4_m(mask, op1, index, vl);
}

vuint16mf4_t test_vrgather_vx_u16mf4_m(vbool64_t mask, vuint16mf4_t op1, size_t index, size_t vl) {
  return __riscv_vrgather_vx_u16mf4_m(mask, op1, index, vl);
}

vuint16mf2_t test_vrgather_vv_u16mf2_m(vbool32_t mask, vuint16mf2_t op1, vuint16mf2_t index, size_t vl) {
  return __riscv_vrgather_vv_u16mf2_m(mask, op1, index, vl);
}

vuint16mf2_t test_vrgather_vx_u16mf2_m(vbool32_t mask, vuint16mf2_t op1, size_t index, size_t vl) {
  return __riscv_vrgather_vx_u16mf2_m(mask, op1, index, vl);
}

vuint16m1_t test_vrgather_vv_u16m1_m(vbool16_t mask, vuint16m1_t op1, vuint16m1_t index, size_t vl) {
  return __riscv_vrgather_vv_u16m1_m(mask, op1, index, vl);
}

vuint16m1_t test_vrgather_vx_u16m1_m(vbool16_t mask, vuint16m1_t op1, size_t index, size_t vl) {
  return __riscv_vrgather_vx_u16m1_m(mask, op1, index, vl);
}

vuint16m2_t test_vrgather_vv_u16m2_m(vbool8_t mask, vuint16m2_t op1, vuint16m2_t index, size_t vl) {
  return __riscv_vrgather_vv_u16m2_m(mask, op1, index, vl);
}

vuint16m2_t test_vrgather_vx_u16m2_m(vbool8_t mask, vuint16m2_t op1, size_t index, size_t vl) {
  return __riscv_vrgather_vx_u16m2_m(mask, op1, index, vl);
}

vuint16m4_t test_vrgather_vv_u16m4_m(vbool4_t mask, vuint16m4_t op1, vuint16m4_t index, size_t vl) {
  return __riscv_vrgather_vv_u16m4_m(mask, op1, index, vl);
}

vuint16m4_t test_vrgather_vx_u16m4_m(vbool4_t mask, vuint16m4_t op1, size_t index, size_t vl) {
  return __riscv_vrgather_vx_u16m4_m(mask, op1, index, vl);
}

vuint16m8_t test_vrgather_vv_u16m8_m(vbool2_t mask, vuint16m8_t op1, vuint16m8_t index, size_t vl) {
  return __riscv_vrgather_vv_u16m8_m(mask, op1, index, vl);
}

vuint16m8_t test_vrgather_vx_u16m8_m(vbool2_t mask, vuint16m8_t op1, size_t index, size_t vl) {
  return __riscv_vrgather_vx_u16m8_m(mask, op1, index, vl);
}

vuint32mf2_t test_vrgather_vv_u32mf2_m(vbool64_t mask, vuint32mf2_t op1, vuint32mf2_t index, size_t vl) {
  return __riscv_vrgather_vv_u32mf2_m(mask, op1, index, vl);
}

vuint32mf2_t test_vrgather_vx_u32mf2_m(vbool64_t mask, vuint32mf2_t op1, size_t index, size_t vl) {
  return __riscv_vrgather_vx_u32mf2_m(mask, op1, index, vl);
}

vuint32m1_t test_vrgather_vv_u32m1_m(vbool32_t mask, vuint32m1_t op1, vuint32m1_t index, size_t vl) {
  return __riscv_vrgather_vv_u32m1_m(mask, op1, index, vl);
}

vuint32m1_t test_vrgather_vx_u32m1_m(vbool32_t mask, vuint32m1_t op1, size_t index, size_t vl) {
  return __riscv_vrgather_vx_u32m1_m(mask, op1, index, vl);
}

vuint32m2_t test_vrgather_vv_u32m2_m(vbool16_t mask, vuint32m2_t op1, vuint32m2_t index, size_t vl) {
  return __riscv_vrgather_vv_u32m2_m(mask, op1, index, vl);
}

vuint32m2_t test_vrgather_vx_u32m2_m(vbool16_t mask, vuint32m2_t op1, size_t index, size_t vl) {
  return __riscv_vrgather_vx_u32m2_m(mask, op1, index, vl);
}

vuint32m4_t test_vrgather_vv_u32m4_m(vbool8_t mask, vuint32m4_t op1, vuint32m4_t index, size_t vl) {
  return __riscv_vrgather_vv_u32m4_m(mask, op1, index, vl);
}

vuint32m4_t test_vrgather_vx_u32m4_m(vbool8_t mask, vuint32m4_t op1, size_t index, size_t vl) {
  return __riscv_vrgather_vx_u32m4_m(mask, op1, index, vl);
}

vuint32m8_t test_vrgather_vv_u32m8_m(vbool4_t mask, vuint32m8_t op1, vuint32m8_t index, size_t vl) {
  return __riscv_vrgather_vv_u32m8_m(mask, op1, index, vl);
}

vuint32m8_t test_vrgather_vx_u32m8_m(vbool4_t mask, vuint32m8_t op1, size_t index, size_t vl) {
  return __riscv_vrgather_vx_u32m8_m(mask, op1, index, vl);
}

vuint64m1_t test_vrgather_vv_u64m1_m(vbool64_t mask, vuint64m1_t op1, vuint64m1_t index, size_t vl) {
  return __riscv_vrgather_vv_u64m1_m(mask, op1, index, vl);
}

vuint64m1_t test_vrgather_vx_u64m1_m(vbool64_t mask, vuint64m1_t op1, size_t index, size_t vl) {
  return __riscv_vrgather_vx_u64m1_m(mask, op1, index, vl);
}

vuint64m2_t test_vrgather_vv_u64m2_m(vbool32_t mask, vuint64m2_t op1, vuint64m2_t index, size_t vl) {
  return __riscv_vrgather_vv_u64m2_m(mask, op1, index, vl);
}

vuint64m2_t test_vrgather_vx_u64m2_m(vbool32_t mask, vuint64m2_t op1, size_t index, size_t vl) {
  return __riscv_vrgather_vx_u64m2_m(mask, op1, index, vl);
}

vuint64m4_t test_vrgather_vv_u64m4_m(vbool16_t mask, vuint64m4_t op1, vuint64m4_t index, size_t vl) {
  return __riscv_vrgather_vv_u64m4_m(mask, op1, index, vl);
}

vuint64m4_t test_vrgather_vx_u64m4_m(vbool16_t mask, vuint64m4_t op1, size_t index, size_t vl) {
  return __riscv_vrgather_vx_u64m4_m(mask, op1, index, vl);
}

vuint64m8_t test_vrgather_vv_u64m8_m(vbool8_t mask, vuint64m8_t op1, vuint64m8_t index, size_t vl) {
  return __riscv_vrgather_vv_u64m8_m(mask, op1, index, vl);
}

vuint64m8_t test_vrgather_vx_u64m8_m(vbool8_t mask, vuint64m8_t op1, size_t index, size_t vl) {
  return __riscv_vrgather_vx_u64m8_m(mask, op1, index, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*[a-x0-9]+,\s*e[0-9]+,\s*m[f]?[1248],\s*t[au],\s*m[au]\s+vrgather\.[,\sa-x0-9()]+} 236 } } */
