/* { dg-do compile } */
/* { dg-options "-march=rv64gcv -mabi=lp64d -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
vuint8mf8_t test_vreinterpret_v_i8mf8_u8mf8(vint8mf8_t src) {
  return __riscv_vreinterpret_v_i8mf8_u8mf8(src);
}

vuint8mf4_t test_vreinterpret_v_i8mf4_u8mf4(vint8mf4_t src) {
  return __riscv_vreinterpret_v_i8mf4_u8mf4(src);
}

vuint8mf2_t test_vreinterpret_v_i8mf2_u8mf2(vint8mf2_t src) {
  return __riscv_vreinterpret_v_i8mf2_u8mf2(src);
}

vuint8m1_t test_vreinterpret_v_i8m1_u8m1(vint8m1_t src) {
  return __riscv_vreinterpret_v_i8m1_u8m1(src);
}

vuint8m2_t test_vreinterpret_v_i8m2_u8m2(vint8m2_t src) {
  return __riscv_vreinterpret_v_i8m2_u8m2(src);
}

vuint8m4_t test_vreinterpret_v_i8m4_u8m4(vint8m4_t src) {
  return __riscv_vreinterpret_v_i8m4_u8m4(src);
}

vuint8m8_t test_vreinterpret_v_i8m8_u8m8(vint8m8_t src) {
  return __riscv_vreinterpret_v_i8m8_u8m8(src);
}

vint8mf8_t test_vreinterpret_v_u8mf8_i8mf8(vuint8mf8_t src) {
  return __riscv_vreinterpret_v_u8mf8_i8mf8(src);
}

vint8mf4_t test_vreinterpret_v_u8mf4_i8mf4(vuint8mf4_t src) {
  return __riscv_vreinterpret_v_u8mf4_i8mf4(src);
}

vint8mf2_t test_vreinterpret_v_u8mf2_i8mf2(vuint8mf2_t src) {
  return __riscv_vreinterpret_v_u8mf2_i8mf2(src);
}

vint8m1_t test_vreinterpret_v_u8m1_i8m1(vuint8m1_t src) {
  return __riscv_vreinterpret_v_u8m1_i8m1(src);
}

vint8m2_t test_vreinterpret_v_u8m2_i8m2(vuint8m2_t src) {
  return __riscv_vreinterpret_v_u8m2_i8m2(src);
}

vint8m4_t test_vreinterpret_v_u8m4_i8m4(vuint8m4_t src) {
  return __riscv_vreinterpret_v_u8m4_i8m4(src);
}

vint8m8_t test_vreinterpret_v_u8m8_i8m8(vuint8m8_t src) {
  return __riscv_vreinterpret_v_u8m8_i8m8(src);
}

vfloat16mf4_t test_vreinterpret_v_i16mf4_f16mf4(vint16mf4_t src) {
  return __riscv_vreinterpret_v_i16mf4_f16mf4(src);
}

vfloat16mf2_t test_vreinterpret_v_i16mf2_f16mf2(vint16mf2_t src) {
  return __riscv_vreinterpret_v_i16mf2_f16mf2(src);
}

vfloat16m1_t test_vreinterpret_v_i16m1_f16m1(vint16m1_t src) {
  return __riscv_vreinterpret_v_i16m1_f16m1(src);
}

vfloat16m2_t test_vreinterpret_v_i16m2_f16m2(vint16m2_t src) {
  return __riscv_vreinterpret_v_i16m2_f16m2(src);
}

vfloat16m4_t test_vreinterpret_v_i16m4_f16m4(vint16m4_t src) {
  return __riscv_vreinterpret_v_i16m4_f16m4(src);
}

vfloat16m8_t test_vreinterpret_v_i16m8_f16m8(vint16m8_t src) {
  return __riscv_vreinterpret_v_i16m8_f16m8(src);
}

vfloat16mf4_t test_vreinterpret_v_u16mf4_f16mf4(vuint16mf4_t src) {
  return __riscv_vreinterpret_v_u16mf4_f16mf4(src);
}

vfloat16mf2_t test_vreinterpret_v_u16mf2_f16mf2(vuint16mf2_t src) {
  return __riscv_vreinterpret_v_u16mf2_f16mf2(src);
}

vfloat16m1_t test_vreinterpret_v_u16m1_f16m1(vuint16m1_t src) {
  return __riscv_vreinterpret_v_u16m1_f16m1(src);
}

vfloat16m2_t test_vreinterpret_v_u16m2_f16m2(vuint16m2_t src) {
  return __riscv_vreinterpret_v_u16m2_f16m2(src);
}

vfloat16m4_t test_vreinterpret_v_u16m4_f16m4(vuint16m4_t src) {
  return __riscv_vreinterpret_v_u16m4_f16m4(src);
}

vfloat16m8_t test_vreinterpret_v_u16m8_f16m8(vuint16m8_t src) {
  return __riscv_vreinterpret_v_u16m8_f16m8(src);
}

vuint16mf4_t test_vreinterpret_v_i16mf4_u16mf4(vint16mf4_t src) {
  return __riscv_vreinterpret_v_i16mf4_u16mf4(src);
}

vuint16mf2_t test_vreinterpret_v_i16mf2_u16mf2(vint16mf2_t src) {
  return __riscv_vreinterpret_v_i16mf2_u16mf2(src);
}

vuint16m1_t test_vreinterpret_v_i16m1_u16m1(vint16m1_t src) {
  return __riscv_vreinterpret_v_i16m1_u16m1(src);
}

vuint16m2_t test_vreinterpret_v_i16m2_u16m2(vint16m2_t src) {
  return __riscv_vreinterpret_v_i16m2_u16m2(src);
}

vuint16m4_t test_vreinterpret_v_i16m4_u16m4(vint16m4_t src) {
  return __riscv_vreinterpret_v_i16m4_u16m4(src);
}

vuint16m8_t test_vreinterpret_v_i16m8_u16m8(vint16m8_t src) {
  return __riscv_vreinterpret_v_i16m8_u16m8(src);
}

vint16mf4_t test_vreinterpret_v_u16mf4_i16mf4(vuint16mf4_t src) {
  return __riscv_vreinterpret_v_u16mf4_i16mf4(src);
}

vint16mf2_t test_vreinterpret_v_u16mf2_i16mf2(vuint16mf2_t src) {
  return __riscv_vreinterpret_v_u16mf2_i16mf2(src);
}

vint16m1_t test_vreinterpret_v_u16m1_i16m1(vuint16m1_t src) {
  return __riscv_vreinterpret_v_u16m1_i16m1(src);
}

vint16m2_t test_vreinterpret_v_u16m2_i16m2(vuint16m2_t src) {
  return __riscv_vreinterpret_v_u16m2_i16m2(src);
}

vint16m4_t test_vreinterpret_v_u16m4_i16m4(vuint16m4_t src) {
  return __riscv_vreinterpret_v_u16m4_i16m4(src);
}

vint16m8_t test_vreinterpret_v_u16m8_i16m8(vuint16m8_t src) {
  return __riscv_vreinterpret_v_u16m8_i16m8(src);
}

vint16mf4_t test_vreinterpret_v_f16mf4_i16mf4(vfloat16mf4_t src) {
  return __riscv_vreinterpret_v_f16mf4_i16mf4(src);
}

vint16mf2_t test_vreinterpret_v_f16mf2_i16mf2(vfloat16mf2_t src) {
  return __riscv_vreinterpret_v_f16mf2_i16mf2(src);
}

vint16m1_t test_vreinterpret_v_f16m1_i16m1(vfloat16m1_t src) {
  return __riscv_vreinterpret_v_f16m1_i16m1(src);
}

vint16m2_t test_vreinterpret_v_f16m2_i16m2(vfloat16m2_t src) {
  return __riscv_vreinterpret_v_f16m2_i16m2(src);
}

vint16m4_t test_vreinterpret_v_f16m4_i16m4(vfloat16m4_t src) {
  return __riscv_vreinterpret_v_f16m4_i16m4(src);
}

vint16m8_t test_vreinterpret_v_f16m8_i16m8(vfloat16m8_t src) {
  return __riscv_vreinterpret_v_f16m8_i16m8(src);
}

vuint16mf4_t test_vreinterpret_v_f16mf4_u16mf4(vfloat16mf4_t src) {
  return __riscv_vreinterpret_v_f16mf4_u16mf4(src);
}

vuint16mf2_t test_vreinterpret_v_f16mf2_u16mf2(vfloat16mf2_t src) {
  return __riscv_vreinterpret_v_f16mf2_u16mf2(src);
}

vuint16m1_t test_vreinterpret_v_f16m1_u16m1(vfloat16m1_t src) {
  return __riscv_vreinterpret_v_f16m1_u16m1(src);
}

vuint16m2_t test_vreinterpret_v_f16m2_u16m2(vfloat16m2_t src) {
  return __riscv_vreinterpret_v_f16m2_u16m2(src);
}

vuint16m4_t test_vreinterpret_v_f16m4_u16m4(vfloat16m4_t src) {
  return __riscv_vreinterpret_v_f16m4_u16m4(src);
}

vuint16m8_t test_vreinterpret_v_f16m8_u16m8(vfloat16m8_t src) {
  return __riscv_vreinterpret_v_f16m8_u16m8(src);
}

vfloat32mf2_t test_vreinterpret_v_i32mf2_f32mf2(vint32mf2_t src) {
  return __riscv_vreinterpret_v_i32mf2_f32mf2(src);
}

vfloat32m1_t test_vreinterpret_v_i32m1_f32m1(vint32m1_t src) {
  return __riscv_vreinterpret_v_i32m1_f32m1(src);
}

vfloat32m2_t test_vreinterpret_v_i32m2_f32m2(vint32m2_t src) {
  return __riscv_vreinterpret_v_i32m2_f32m2(src);
}

vfloat32m4_t test_vreinterpret_v_i32m4_f32m4(vint32m4_t src) {
  return __riscv_vreinterpret_v_i32m4_f32m4(src);
}

vfloat32m8_t test_vreinterpret_v_i32m8_f32m8(vint32m8_t src) {
  return __riscv_vreinterpret_v_i32m8_f32m8(src);
}

vfloat32mf2_t test_vreinterpret_v_u32mf2_f32mf2(vuint32mf2_t src) {
  return __riscv_vreinterpret_v_u32mf2_f32mf2(src);
}

vfloat32m1_t test_vreinterpret_v_u32m1_f32m1(vuint32m1_t src) {
  return __riscv_vreinterpret_v_u32m1_f32m1(src);
}

vfloat32m2_t test_vreinterpret_v_u32m2_f32m2(vuint32m2_t src) {
  return __riscv_vreinterpret_v_u32m2_f32m2(src);
}

vfloat32m4_t test_vreinterpret_v_u32m4_f32m4(vuint32m4_t src) {
  return __riscv_vreinterpret_v_u32m4_f32m4(src);
}

vfloat32m8_t test_vreinterpret_v_u32m8_f32m8(vuint32m8_t src) {
  return __riscv_vreinterpret_v_u32m8_f32m8(src);
}

vuint32mf2_t test_vreinterpret_v_i32mf2_u32mf2(vint32mf2_t src) {
  return __riscv_vreinterpret_v_i32mf2_u32mf2(src);
}

vuint32m1_t test_vreinterpret_v_i32m1_u32m1(vint32m1_t src) {
  return __riscv_vreinterpret_v_i32m1_u32m1(src);
}

vuint32m2_t test_vreinterpret_v_i32m2_u32m2(vint32m2_t src) {
  return __riscv_vreinterpret_v_i32m2_u32m2(src);
}

vuint32m4_t test_vreinterpret_v_i32m4_u32m4(vint32m4_t src) {
  return __riscv_vreinterpret_v_i32m4_u32m4(src);
}

vuint32m8_t test_vreinterpret_v_i32m8_u32m8(vint32m8_t src) {
  return __riscv_vreinterpret_v_i32m8_u32m8(src);
}

vint32mf2_t test_vreinterpret_v_u32mf2_i32mf2(vuint32mf2_t src) {
  return __riscv_vreinterpret_v_u32mf2_i32mf2(src);
}

vint32m1_t test_vreinterpret_v_u32m1_i32m1(vuint32m1_t src) {
  return __riscv_vreinterpret_v_u32m1_i32m1(src);
}

vint32m2_t test_vreinterpret_v_u32m2_i32m2(vuint32m2_t src) {
  return __riscv_vreinterpret_v_u32m2_i32m2(src);
}

vint32m4_t test_vreinterpret_v_u32m4_i32m4(vuint32m4_t src) {
  return __riscv_vreinterpret_v_u32m4_i32m4(src);
}

vint32m8_t test_vreinterpret_v_u32m8_i32m8(vuint32m8_t src) {
  return __riscv_vreinterpret_v_u32m8_i32m8(src);
}

vint32mf2_t test_vreinterpret_v_f32mf2_i32mf2(vfloat32mf2_t src) {
  return __riscv_vreinterpret_v_f32mf2_i32mf2(src);
}

vint32m1_t test_vreinterpret_v_f32m1_i32m1(vfloat32m1_t src) {
  return __riscv_vreinterpret_v_f32m1_i32m1(src);
}

vint32m2_t test_vreinterpret_v_f32m2_i32m2(vfloat32m2_t src) {
  return __riscv_vreinterpret_v_f32m2_i32m2(src);
}

vint32m4_t test_vreinterpret_v_f32m4_i32m4(vfloat32m4_t src) {
  return __riscv_vreinterpret_v_f32m4_i32m4(src);
}

vint32m8_t test_vreinterpret_v_f32m8_i32m8(vfloat32m8_t src) {
  return __riscv_vreinterpret_v_f32m8_i32m8(src);
}

vuint32mf2_t test_vreinterpret_v_f32mf2_u32mf2(vfloat32mf2_t src) {
  return __riscv_vreinterpret_v_f32mf2_u32mf2(src);
}

vuint32m1_t test_vreinterpret_v_f32m1_u32m1(vfloat32m1_t src) {
  return __riscv_vreinterpret_v_f32m1_u32m1(src);
}

vuint32m2_t test_vreinterpret_v_f32m2_u32m2(vfloat32m2_t src) {
  return __riscv_vreinterpret_v_f32m2_u32m2(src);
}

vuint32m4_t test_vreinterpret_v_f32m4_u32m4(vfloat32m4_t src) {
  return __riscv_vreinterpret_v_f32m4_u32m4(src);
}

vuint32m8_t test_vreinterpret_v_f32m8_u32m8(vfloat32m8_t src) {
  return __riscv_vreinterpret_v_f32m8_u32m8(src);
}

vfloat64m1_t test_vreinterpret_v_i64m1_f64m1(vint64m1_t src) {
  return __riscv_vreinterpret_v_i64m1_f64m1(src);
}

vfloat64m2_t test_vreinterpret_v_i64m2_f64m2(vint64m2_t src) {
  return __riscv_vreinterpret_v_i64m2_f64m2(src);
}

vfloat64m4_t test_vreinterpret_v_i64m4_f64m4(vint64m4_t src) {
  return __riscv_vreinterpret_v_i64m4_f64m4(src);
}

vfloat64m8_t test_vreinterpret_v_i64m8_f64m8(vint64m8_t src) {
  return __riscv_vreinterpret_v_i64m8_f64m8(src);
}

vfloat64m1_t test_vreinterpret_v_u64m1_f64m1(vuint64m1_t src) {
  return __riscv_vreinterpret_v_u64m1_f64m1(src);
}

vfloat64m2_t test_vreinterpret_v_u64m2_f64m2(vuint64m2_t src) {
  return __riscv_vreinterpret_v_u64m2_f64m2(src);
}

vfloat64m4_t test_vreinterpret_v_u64m4_f64m4(vuint64m4_t src) {
  return __riscv_vreinterpret_v_u64m4_f64m4(src);
}

vfloat64m8_t test_vreinterpret_v_u64m8_f64m8(vuint64m8_t src) {
  return __riscv_vreinterpret_v_u64m8_f64m8(src);
}

vuint64m1_t test_vreinterpret_v_i64m1_u64m1(vint64m1_t src) {
  return __riscv_vreinterpret_v_i64m1_u64m1(src);
}

vuint64m2_t test_vreinterpret_v_i64m2_u64m2(vint64m2_t src) {
  return __riscv_vreinterpret_v_i64m2_u64m2(src);
}

vuint64m4_t test_vreinterpret_v_i64m4_u64m4(vint64m4_t src) {
  return __riscv_vreinterpret_v_i64m4_u64m4(src);
}

vuint64m8_t test_vreinterpret_v_i64m8_u64m8(vint64m8_t src) {
  return __riscv_vreinterpret_v_i64m8_u64m8(src);
}

vint64m1_t test_vreinterpret_v_u64m1_i64m1(vuint64m1_t src) {
  return __riscv_vreinterpret_v_u64m1_i64m1(src);
}

vint64m2_t test_vreinterpret_v_u64m2_i64m2(vuint64m2_t src) {
  return __riscv_vreinterpret_v_u64m2_i64m2(src);
}

vint64m4_t test_vreinterpret_v_u64m4_i64m4(vuint64m4_t src) {
  return __riscv_vreinterpret_v_u64m4_i64m4(src);
}

vint64m8_t test_vreinterpret_v_u64m8_i64m8(vuint64m8_t src) {
  return __riscv_vreinterpret_v_u64m8_i64m8(src);
}

vint64m1_t test_vreinterpret_v_f64m1_i64m1(vfloat64m1_t src) {
  return __riscv_vreinterpret_v_f64m1_i64m1(src);
}

vint64m2_t test_vreinterpret_v_f64m2_i64m2(vfloat64m2_t src) {
  return __riscv_vreinterpret_v_f64m2_i64m2(src);
}

vint64m4_t test_vreinterpret_v_f64m4_i64m4(vfloat64m4_t src) {
  return __riscv_vreinterpret_v_f64m4_i64m4(src);
}

vint64m8_t test_vreinterpret_v_f64m8_i64m8(vfloat64m8_t src) {
  return __riscv_vreinterpret_v_f64m8_i64m8(src);
}

vuint64m1_t test_vreinterpret_v_f64m1_u64m1(vfloat64m1_t src) {
  return __riscv_vreinterpret_v_f64m1_u64m1(src);
}

vuint64m2_t test_vreinterpret_v_f64m2_u64m2(vfloat64m2_t src) {
  return __riscv_vreinterpret_v_f64m2_u64m2(src);
}

vuint64m4_t test_vreinterpret_v_f64m4_u64m4(vfloat64m4_t src) {
  return __riscv_vreinterpret_v_f64m4_u64m4(src);
}

vuint64m8_t test_vreinterpret_v_f64m8_u64m8(vfloat64m8_t src) {
  return __riscv_vreinterpret_v_f64m8_u64m8(src);
}

vint16mf4_t test_vreinterpret_v_i8mf4_i16mf4(vint8mf4_t src) {
  return __riscv_vreinterpret_v_i8mf4_i16mf4(src);
}

vint16mf2_t test_vreinterpret_v_i8mf2_i16mf2(vint8mf2_t src) {
  return __riscv_vreinterpret_v_i8mf2_i16mf2(src);
}

vint16m1_t test_vreinterpret_v_i8m1_i16m1(vint8m1_t src) {
  return __riscv_vreinterpret_v_i8m1_i16m1(src);
}

vint16m2_t test_vreinterpret_v_i8m2_i16m2(vint8m2_t src) {
  return __riscv_vreinterpret_v_i8m2_i16m2(src);
}

vint16m4_t test_vreinterpret_v_i8m4_i16m4(vint8m4_t src) {
  return __riscv_vreinterpret_v_i8m4_i16m4(src);
}

vint16m8_t test_vreinterpret_v_i8m8_i16m8(vint8m8_t src) {
  return __riscv_vreinterpret_v_i8m8_i16m8(src);
}

vuint16mf4_t test_vreinterpret_v_u8mf4_u16mf4(vuint8mf4_t src) {
  return __riscv_vreinterpret_v_u8mf4_u16mf4(src);
}

vuint16mf2_t test_vreinterpret_v_u8mf2_u16mf2(vuint8mf2_t src) {
  return __riscv_vreinterpret_v_u8mf2_u16mf2(src);
}

vuint16m1_t test_vreinterpret_v_u8m1_u16m1(vuint8m1_t src) {
  return __riscv_vreinterpret_v_u8m1_u16m1(src);
}

vuint16m2_t test_vreinterpret_v_u8m2_u16m2(vuint8m2_t src) {
  return __riscv_vreinterpret_v_u8m2_u16m2(src);
}

vuint16m4_t test_vreinterpret_v_u8m4_u16m4(vuint8m4_t src) {
  return __riscv_vreinterpret_v_u8m4_u16m4(src);
}

vuint16m8_t test_vreinterpret_v_u8m8_u16m8(vuint8m8_t src) {
  return __riscv_vreinterpret_v_u8m8_u16m8(src);
}

vint32mf2_t test_vreinterpret_v_i8mf2_i32mf2(vint8mf2_t src) {
  return __riscv_vreinterpret_v_i8mf2_i32mf2(src);
}

vint32m1_t test_vreinterpret_v_i8m1_i32m1(vint8m1_t src) {
  return __riscv_vreinterpret_v_i8m1_i32m1(src);
}

vint32m2_t test_vreinterpret_v_i8m2_i32m2(vint8m2_t src) {
  return __riscv_vreinterpret_v_i8m2_i32m2(src);
}

vint32m4_t test_vreinterpret_v_i8m4_i32m4(vint8m4_t src) {
  return __riscv_vreinterpret_v_i8m4_i32m4(src);
}

vint32m8_t test_vreinterpret_v_i8m8_i32m8(vint8m8_t src) {
  return __riscv_vreinterpret_v_i8m8_i32m8(src);
}

vuint32mf2_t test_vreinterpret_v_u8mf2_u32mf2(vuint8mf2_t src) {
  return __riscv_vreinterpret_v_u8mf2_u32mf2(src);
}

vuint32m1_t test_vreinterpret_v_u8m1_u32m1(vuint8m1_t src) {
  return __riscv_vreinterpret_v_u8m1_u32m1(src);
}

vuint32m2_t test_vreinterpret_v_u8m2_u32m2(vuint8m2_t src) {
  return __riscv_vreinterpret_v_u8m2_u32m2(src);
}

vuint32m4_t test_vreinterpret_v_u8m4_u32m4(vuint8m4_t src) {
  return __riscv_vreinterpret_v_u8m4_u32m4(src);
}

vuint32m8_t test_vreinterpret_v_u8m8_u32m8(vuint8m8_t src) {
  return __riscv_vreinterpret_v_u8m8_u32m8(src);
}

vint64m1_t test_vreinterpret_v_i8m1_i64m1(vint8m1_t src) {
  return __riscv_vreinterpret_v_i8m1_i64m1(src);
}

vint64m2_t test_vreinterpret_v_i8m2_i64m2(vint8m2_t src) {
  return __riscv_vreinterpret_v_i8m2_i64m2(src);
}

vint64m4_t test_vreinterpret_v_i8m4_i64m4(vint8m4_t src) {
  return __riscv_vreinterpret_v_i8m4_i64m4(src);
}

vint64m8_t test_vreinterpret_v_i8m8_i64m8(vint8m8_t src) {
  return __riscv_vreinterpret_v_i8m8_i64m8(src);
}

vuint64m1_t test_vreinterpret_v_u8m1_u64m1(vuint8m1_t src) {
  return __riscv_vreinterpret_v_u8m1_u64m1(src);
}

vuint64m2_t test_vreinterpret_v_u8m2_u64m2(vuint8m2_t src) {
  return __riscv_vreinterpret_v_u8m2_u64m2(src);
}

vuint64m4_t test_vreinterpret_v_u8m4_u64m4(vuint8m4_t src) {
  return __riscv_vreinterpret_v_u8m4_u64m4(src);
}

vuint64m8_t test_vreinterpret_v_u8m8_u64m8(vuint8m8_t src) {
  return __riscv_vreinterpret_v_u8m8_u64m8(src);
}

vint8mf4_t test_vreinterpret_v_i16mf4_i8mf4(vint16mf4_t src) {
  return __riscv_vreinterpret_v_i16mf4_i8mf4(src);
}

vint8mf2_t test_vreinterpret_v_i16mf2_i8mf2(vint16mf2_t src) {
  return __riscv_vreinterpret_v_i16mf2_i8mf2(src);
}

vint8m1_t test_vreinterpret_v_i16m1_i8m1(vint16m1_t src) {
  return __riscv_vreinterpret_v_i16m1_i8m1(src);
}

vint8m2_t test_vreinterpret_v_i16m2_i8m2(vint16m2_t src) {
  return __riscv_vreinterpret_v_i16m2_i8m2(src);
}

vint8m4_t test_vreinterpret_v_i16m4_i8m4(vint16m4_t src) {
  return __riscv_vreinterpret_v_i16m4_i8m4(src);
}

vint8m8_t test_vreinterpret_v_i16m8_i8m8(vint16m8_t src) {
  return __riscv_vreinterpret_v_i16m8_i8m8(src);
}

vuint8mf4_t test_vreinterpret_v_u16mf4_u8mf4(vuint16mf4_t src) {
  return __riscv_vreinterpret_v_u16mf4_u8mf4(src);
}

vuint8mf2_t test_vreinterpret_v_u16mf2_u8mf2(vuint16mf2_t src) {
  return __riscv_vreinterpret_v_u16mf2_u8mf2(src);
}

vuint8m1_t test_vreinterpret_v_u16m1_u8m1(vuint16m1_t src) {
  return __riscv_vreinterpret_v_u16m1_u8m1(src);
}

vuint8m2_t test_vreinterpret_v_u16m2_u8m2(vuint16m2_t src) {
  return __riscv_vreinterpret_v_u16m2_u8m2(src);
}

vuint8m4_t test_vreinterpret_v_u16m4_u8m4(vuint16m4_t src) {
  return __riscv_vreinterpret_v_u16m4_u8m4(src);
}

vuint8m8_t test_vreinterpret_v_u16m8_u8m8(vuint16m8_t src) {
  return __riscv_vreinterpret_v_u16m8_u8m8(src);
}

vint32mf2_t test_vreinterpret_v_i16mf2_i32mf2(vint16mf2_t src) {
  return __riscv_vreinterpret_v_i16mf2_i32mf2(src);
}

vint32m1_t test_vreinterpret_v_i16m1_i32m1(vint16m1_t src) {
  return __riscv_vreinterpret_v_i16m1_i32m1(src);
}

vint32m2_t test_vreinterpret_v_i16m2_i32m2(vint16m2_t src) {
  return __riscv_vreinterpret_v_i16m2_i32m2(src);
}

vint32m4_t test_vreinterpret_v_i16m4_i32m4(vint16m4_t src) {
  return __riscv_vreinterpret_v_i16m4_i32m4(src);
}

vint32m8_t test_vreinterpret_v_i16m8_i32m8(vint16m8_t src) {
  return __riscv_vreinterpret_v_i16m8_i32m8(src);
}

vuint32mf2_t test_vreinterpret_v_u16mf2_u32mf2(vuint16mf2_t src) {
  return __riscv_vreinterpret_v_u16mf2_u32mf2(src);
}

vuint32m1_t test_vreinterpret_v_u16m1_u32m1(vuint16m1_t src) {
  return __riscv_vreinterpret_v_u16m1_u32m1(src);
}

vuint32m2_t test_vreinterpret_v_u16m2_u32m2(vuint16m2_t src) {
  return __riscv_vreinterpret_v_u16m2_u32m2(src);
}

vuint32m4_t test_vreinterpret_v_u16m4_u32m4(vuint16m4_t src) {
  return __riscv_vreinterpret_v_u16m4_u32m4(src);
}

vuint32m8_t test_vreinterpret_v_u16m8_u32m8(vuint16m8_t src) {
  return __riscv_vreinterpret_v_u16m8_u32m8(src);
}

vint64m1_t test_vreinterpret_v_i16m1_i64m1(vint16m1_t src) {
  return __riscv_vreinterpret_v_i16m1_i64m1(src);
}

vint64m2_t test_vreinterpret_v_i16m2_i64m2(vint16m2_t src) {
  return __riscv_vreinterpret_v_i16m2_i64m2(src);
}

vint64m4_t test_vreinterpret_v_i16m4_i64m4(vint16m4_t src) {
  return __riscv_vreinterpret_v_i16m4_i64m4(src);
}

vint64m8_t test_vreinterpret_v_i16m8_i64m8(vint16m8_t src) {
  return __riscv_vreinterpret_v_i16m8_i64m8(src);
}

vuint64m1_t test_vreinterpret_v_u16m1_u64m1(vuint16m1_t src) {
  return __riscv_vreinterpret_v_u16m1_u64m1(src);
}

vuint64m2_t test_vreinterpret_v_u16m2_u64m2(vuint16m2_t src) {
  return __riscv_vreinterpret_v_u16m2_u64m2(src);
}

vuint64m4_t test_vreinterpret_v_u16m4_u64m4(vuint16m4_t src) {
  return __riscv_vreinterpret_v_u16m4_u64m4(src);
}

vuint64m8_t test_vreinterpret_v_u16m8_u64m8(vuint16m8_t src) {
  return __riscv_vreinterpret_v_u16m8_u64m8(src);
}

vint8mf2_t test_vreinterpret_v_i32mf2_i8mf2(vint32mf2_t src) {
  return __riscv_vreinterpret_v_i32mf2_i8mf2(src);
}

vint8m1_t test_vreinterpret_v_i32m1_i8m1(vint32m1_t src) {
  return __riscv_vreinterpret_v_i32m1_i8m1(src);
}

vint8m2_t test_vreinterpret_v_i32m2_i8m2(vint32m2_t src) {
  return __riscv_vreinterpret_v_i32m2_i8m2(src);
}

vint8m4_t test_vreinterpret_v_i32m4_i8m4(vint32m4_t src) {
  return __riscv_vreinterpret_v_i32m4_i8m4(src);
}

vint8m8_t test_vreinterpret_v_i32m8_i8m8(vint32m8_t src) {
  return __riscv_vreinterpret_v_i32m8_i8m8(src);
}

vuint8mf2_t test_vreinterpret_v_u32mf2_u8mf2(vuint32mf2_t src) {
  return __riscv_vreinterpret_v_u32mf2_u8mf2(src);
}

vuint8m1_t test_vreinterpret_v_u32m1_u8m1(vuint32m1_t src) {
  return __riscv_vreinterpret_v_u32m1_u8m1(src);
}

vuint8m2_t test_vreinterpret_v_u32m2_u8m2(vuint32m2_t src) {
  return __riscv_vreinterpret_v_u32m2_u8m2(src);
}

vuint8m4_t test_vreinterpret_v_u32m4_u8m4(vuint32m4_t src) {
  return __riscv_vreinterpret_v_u32m4_u8m4(src);
}

vuint8m8_t test_vreinterpret_v_u32m8_u8m8(vuint32m8_t src) {
  return __riscv_vreinterpret_v_u32m8_u8m8(src);
}

vint16mf2_t test_vreinterpret_v_i32mf2_i16mf2(vint32mf2_t src) {
  return __riscv_vreinterpret_v_i32mf2_i16mf2(src);
}

vint16m1_t test_vreinterpret_v_i32m1_i16m1(vint32m1_t src) {
  return __riscv_vreinterpret_v_i32m1_i16m1(src);
}

vint16m2_t test_vreinterpret_v_i32m2_i16m2(vint32m2_t src) {
  return __riscv_vreinterpret_v_i32m2_i16m2(src);
}

vint16m4_t test_vreinterpret_v_i32m4_i16m4(vint32m4_t src) {
  return __riscv_vreinterpret_v_i32m4_i16m4(src);
}

vint16m8_t test_vreinterpret_v_i32m8_i16m8(vint32m8_t src) {
  return __riscv_vreinterpret_v_i32m8_i16m8(src);
}

vuint16mf2_t test_vreinterpret_v_u32mf2_u16mf2(vuint32mf2_t src) {
  return __riscv_vreinterpret_v_u32mf2_u16mf2(src);
}

vuint16m1_t test_vreinterpret_v_u32m1_u16m1(vuint32m1_t src) {
  return __riscv_vreinterpret_v_u32m1_u16m1(src);
}

vuint16m2_t test_vreinterpret_v_u32m2_u16m2(vuint32m2_t src) {
  return __riscv_vreinterpret_v_u32m2_u16m2(src);
}

vuint16m4_t test_vreinterpret_v_u32m4_u16m4(vuint32m4_t src) {
  return __riscv_vreinterpret_v_u32m4_u16m4(src);
}

vuint16m8_t test_vreinterpret_v_u32m8_u16m8(vuint32m8_t src) {
  return __riscv_vreinterpret_v_u32m8_u16m8(src);
}

vint64m1_t test_vreinterpret_v_i32m1_i64m1(vint32m1_t src) {
  return __riscv_vreinterpret_v_i32m1_i64m1(src);
}

vint64m2_t test_vreinterpret_v_i32m2_i64m2(vint32m2_t src) {
  return __riscv_vreinterpret_v_i32m2_i64m2(src);
}

vint64m4_t test_vreinterpret_v_i32m4_i64m4(vint32m4_t src) {
  return __riscv_vreinterpret_v_i32m4_i64m4(src);
}

vint64m8_t test_vreinterpret_v_i32m8_i64m8(vint32m8_t src) {
  return __riscv_vreinterpret_v_i32m8_i64m8(src);
}

vuint64m1_t test_vreinterpret_v_u32m1_u64m1(vuint32m1_t src) {
  return __riscv_vreinterpret_v_u32m1_u64m1(src);
}

vuint64m2_t test_vreinterpret_v_u32m2_u64m2(vuint32m2_t src) {
  return __riscv_vreinterpret_v_u32m2_u64m2(src);
}

vuint64m4_t test_vreinterpret_v_u32m4_u64m4(vuint32m4_t src) {
  return __riscv_vreinterpret_v_u32m4_u64m4(src);
}

vuint64m8_t test_vreinterpret_v_u32m8_u64m8(vuint32m8_t src) {
  return __riscv_vreinterpret_v_u32m8_u64m8(src);
}

vint8m1_t test_vreinterpret_v_i64m1_i8m1(vint64m1_t src) {
  return __riscv_vreinterpret_v_i64m1_i8m1(src);
}

vint8m2_t test_vreinterpret_v_i64m2_i8m2(vint64m2_t src) {
  return __riscv_vreinterpret_v_i64m2_i8m2(src);
}

vint8m4_t test_vreinterpret_v_i64m4_i8m4(vint64m4_t src) {
  return __riscv_vreinterpret_v_i64m4_i8m4(src);
}

vint8m8_t test_vreinterpret_v_i64m8_i8m8(vint64m8_t src) {
  return __riscv_vreinterpret_v_i64m8_i8m8(src);
}

vuint8m1_t test_vreinterpret_v_u64m1_u8m1(vuint64m1_t src) {
  return __riscv_vreinterpret_v_u64m1_u8m1(src);
}

vuint8m2_t test_vreinterpret_v_u64m2_u8m2(vuint64m2_t src) {
  return __riscv_vreinterpret_v_u64m2_u8m2(src);
}

vuint8m4_t test_vreinterpret_v_u64m4_u8m4(vuint64m4_t src) {
  return __riscv_vreinterpret_v_u64m4_u8m4(src);
}

vuint8m8_t test_vreinterpret_v_u64m8_u8m8(vuint64m8_t src) {
  return __riscv_vreinterpret_v_u64m8_u8m8(src);
}

vint16m1_t test_vreinterpret_v_i64m1_i16m1(vint64m1_t src) {
  return __riscv_vreinterpret_v_i64m1_i16m1(src);
}

vint16m2_t test_vreinterpret_v_i64m2_i16m2(vint64m2_t src) {
  return __riscv_vreinterpret_v_i64m2_i16m2(src);
}

vint16m4_t test_vreinterpret_v_i64m4_i16m4(vint64m4_t src) {
  return __riscv_vreinterpret_v_i64m4_i16m4(src);
}

vint16m8_t test_vreinterpret_v_i64m8_i16m8(vint64m8_t src) {
  return __riscv_vreinterpret_v_i64m8_i16m8(src);
}

vuint16m1_t test_vreinterpret_v_u64m1_u16m1(vuint64m1_t src) {
  return __riscv_vreinterpret_v_u64m1_u16m1(src);
}

vuint16m2_t test_vreinterpret_v_u64m2_u16m2(vuint64m2_t src) {
  return __riscv_vreinterpret_v_u64m2_u16m2(src);
}

vuint16m4_t test_vreinterpret_v_u64m4_u16m4(vuint64m4_t src) {
  return __riscv_vreinterpret_v_u64m4_u16m4(src);
}

vuint16m8_t test_vreinterpret_v_u64m8_u16m8(vuint64m8_t src) {
  return __riscv_vreinterpret_v_u64m8_u16m8(src);
}

vint32m1_t test_vreinterpret_v_i64m1_i32m1(vint64m1_t src) {
  return __riscv_vreinterpret_v_i64m1_i32m1(src);
}

vint32m2_t test_vreinterpret_v_i64m2_i32m2(vint64m2_t src) {
  return __riscv_vreinterpret_v_i64m2_i32m2(src);
}

vint32m4_t test_vreinterpret_v_i64m4_i32m4(vint64m4_t src) {
  return __riscv_vreinterpret_v_i64m4_i32m4(src);
}

vint32m8_t test_vreinterpret_v_i64m8_i32m8(vint64m8_t src) {
  return __riscv_vreinterpret_v_i64m8_i32m8(src);
}

vuint32m1_t test_vreinterpret_v_u64m1_u32m1(vuint64m1_t src) {
  return __riscv_vreinterpret_v_u64m1_u32m1(src);
}

vuint32m2_t test_vreinterpret_v_u64m2_u32m2(vuint64m2_t src) {
  return __riscv_vreinterpret_v_u64m2_u32m2(src);
}

vuint32m4_t test_vreinterpret_v_u64m4_u32m4(vuint64m4_t src) {
  return __riscv_vreinterpret_v_u64m4_u32m4(src);
}

vuint32m8_t test_vreinterpret_v_u64m8_u32m8(vuint64m8_t src) {
  return __riscv_vreinterpret_v_u64m8_u32m8(src);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*[a-x0-9]+,\s*e[0-9]+,\s*m[f]?[1248],\s*t[au],\s*m[au]\s+vreinterpret\.[,\sa-x0-9()]+} 216 } } */
