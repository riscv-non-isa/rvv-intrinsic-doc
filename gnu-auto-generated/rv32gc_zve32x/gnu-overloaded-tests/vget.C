/* { dg-do compile } */
/* { dg-options "-march=rv32gc_zve32x -mabi=ilp32d -Wno-psabi -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include "riscv_vector.h"

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
vint8m1_t test_vget_v_i8m2_i8m1(vint8m2_t src, size_t index) {
  return __riscv_vget_i8m1(src, 0);
}

vint8m1_t test_vget_v_i8m4_i8m1(vint8m4_t src, size_t index) {
  return __riscv_vget_i8m1(src, 0);
}

vint8m1_t test_vget_v_i8m8_i8m1(vint8m8_t src, size_t index) {
  return __riscv_vget_i8m1(src, 0);
}

vint8m2_t test_vget_v_i8m4_i8m2(vint8m4_t src, size_t index) {
  return __riscv_vget_i8m2(src, 0);
}

vint8m2_t test_vget_v_i8m8_i8m2(vint8m8_t src, size_t index) {
  return __riscv_vget_i8m2(src, 0);
}

vint8m4_t test_vget_v_i8m8_i8m4(vint8m8_t src, size_t index) {
  return __riscv_vget_i8m4(src, 0);
}

vint16m1_t test_vget_v_i16m2_i16m1(vint16m2_t src, size_t index) {
  return __riscv_vget_i16m1(src, 0);
}

vint16m1_t test_vget_v_i16m4_i16m1(vint16m4_t src, size_t index) {
  return __riscv_vget_i16m1(src, 0);
}

vint16m1_t test_vget_v_i16m8_i16m1(vint16m8_t src, size_t index) {
  return __riscv_vget_i16m1(src, 0);
}

vint16m2_t test_vget_v_i16m4_i16m2(vint16m4_t src, size_t index) {
  return __riscv_vget_i16m2(src, 0);
}

vint16m2_t test_vget_v_i16m8_i16m2(vint16m8_t src, size_t index) {
  return __riscv_vget_i16m2(src, 0);
}

vint16m4_t test_vget_v_i16m8_i16m4(vint16m8_t src, size_t index) {
  return __riscv_vget_i16m4(src, 0);
}

vint32m1_t test_vget_v_i32m2_i32m1(vint32m2_t src, size_t index) {
  return __riscv_vget_i32m1(src, 0);
}

vint32m1_t test_vget_v_i32m4_i32m1(vint32m4_t src, size_t index) {
  return __riscv_vget_i32m1(src, 0);
}

vint32m1_t test_vget_v_i32m8_i32m1(vint32m8_t src, size_t index) {
  return __riscv_vget_i32m1(src, 0);
}

vint32m2_t test_vget_v_i32m4_i32m2(vint32m4_t src, size_t index) {
  return __riscv_vget_i32m2(src, 0);
}

vint32m2_t test_vget_v_i32m8_i32m2(vint32m8_t src, size_t index) {
  return __riscv_vget_i32m2(src, 0);
}

vint32m4_t test_vget_v_i32m8_i32m4(vint32m8_t src, size_t index) {
  return __riscv_vget_i32m4(src, 0);
}

vuint8m1_t test_vget_v_u8m2_u8m1(vuint8m2_t src, size_t index) {
  return __riscv_vget_u8m1(src, 0);
}

vuint8m1_t test_vget_v_u8m4_u8m1(vuint8m4_t src, size_t index) {
  return __riscv_vget_u8m1(src, 0);
}

vuint8m1_t test_vget_v_u8m8_u8m1(vuint8m8_t src, size_t index) {
  return __riscv_vget_u8m1(src, 0);
}

vuint8m2_t test_vget_v_u8m4_u8m2(vuint8m4_t src, size_t index) {
  return __riscv_vget_u8m2(src, 0);
}

vuint8m2_t test_vget_v_u8m8_u8m2(vuint8m8_t src, size_t index) {
  return __riscv_vget_u8m2(src, 0);
}

vuint8m4_t test_vget_v_u8m8_u8m4(vuint8m8_t src, size_t index) {
  return __riscv_vget_u8m4(src, 0);
}

vuint16m1_t test_vget_v_u16m2_u16m1(vuint16m2_t src, size_t index) {
  return __riscv_vget_u16m1(src, 0);
}

vuint16m1_t test_vget_v_u16m4_u16m1(vuint16m4_t src, size_t index) {
  return __riscv_vget_u16m1(src, 0);
}

vuint16m1_t test_vget_v_u16m8_u16m1(vuint16m8_t src, size_t index) {
  return __riscv_vget_u16m1(src, 0);
}

vuint16m2_t test_vget_v_u16m4_u16m2(vuint16m4_t src, size_t index) {
  return __riscv_vget_u16m2(src, 0);
}

vuint16m2_t test_vget_v_u16m8_u16m2(vuint16m8_t src, size_t index) {
  return __riscv_vget_u16m2(src, 0);
}

vuint16m4_t test_vget_v_u16m8_u16m4(vuint16m8_t src, size_t index) {
  return __riscv_vget_u16m4(src, 0);
}

vuint32m1_t test_vget_v_u32m2_u32m1(vuint32m2_t src, size_t index) {
  return __riscv_vget_u32m1(src, 0);
}

vuint32m1_t test_vget_v_u32m4_u32m1(vuint32m4_t src, size_t index) {
  return __riscv_vget_u32m1(src, 0);
}

vuint32m1_t test_vget_v_u32m8_u32m1(vuint32m8_t src, size_t index) {
  return __riscv_vget_u32m1(src, 0);
}

vuint32m2_t test_vget_v_u32m4_u32m2(vuint32m4_t src, size_t index) {
  return __riscv_vget_u32m2(src, 0);
}

vuint32m2_t test_vget_v_u32m8_u32m2(vuint32m8_t src, size_t index) {
  return __riscv_vget_u32m2(src, 0);
}

vuint32m4_t test_vget_v_u32m8_u32m4(vuint32m8_t src, size_t index) {
  return __riscv_vget_u32m4(src, 0);
}

vint8mf4_t test_vget_v_i8mf4x2_i8mf4(vint8mf4x2_t src, size_t index) {
  return __riscv_vget_i8mf4(src, 0);
}

vint8mf4_t test_vget_v_i8mf4x3_i8mf4(vint8mf4x3_t src, size_t index) {
  return __riscv_vget_i8mf4(src, 0);
}

vint8mf4_t test_vget_v_i8mf4x4_i8mf4(vint8mf4x4_t src, size_t index) {
  return __riscv_vget_i8mf4(src, 0);
}

vint8mf4_t test_vget_v_i8mf4x5_i8mf4(vint8mf4x5_t src, size_t index) {
  return __riscv_vget_i8mf4(src, 0);
}

vint8mf4_t test_vget_v_i8mf4x6_i8mf4(vint8mf4x6_t src, size_t index) {
  return __riscv_vget_i8mf4(src, 0);
}

vint8mf4_t test_vget_v_i8mf4x7_i8mf4(vint8mf4x7_t src, size_t index) {
  return __riscv_vget_i8mf4(src, 0);
}

vint8mf4_t test_vget_v_i8mf4x8_i8mf4(vint8mf4x8_t src, size_t index) {
  return __riscv_vget_i8mf4(src, 0);
}

vint8mf2_t test_vget_v_i8mf2x2_i8mf2(vint8mf2x2_t src, size_t index) {
  return __riscv_vget_i8mf2(src, 0);
}

vint8mf2_t test_vget_v_i8mf2x3_i8mf2(vint8mf2x3_t src, size_t index) {
  return __riscv_vget_i8mf2(src, 0);
}

vint8mf2_t test_vget_v_i8mf2x4_i8mf2(vint8mf2x4_t src, size_t index) {
  return __riscv_vget_i8mf2(src, 0);
}

vint8mf2_t test_vget_v_i8mf2x5_i8mf2(vint8mf2x5_t src, size_t index) {
  return __riscv_vget_i8mf2(src, 0);
}

vint8mf2_t test_vget_v_i8mf2x6_i8mf2(vint8mf2x6_t src, size_t index) {
  return __riscv_vget_i8mf2(src, 0);
}

vint8mf2_t test_vget_v_i8mf2x7_i8mf2(vint8mf2x7_t src, size_t index) {
  return __riscv_vget_i8mf2(src, 0);
}

vint8mf2_t test_vget_v_i8mf2x8_i8mf2(vint8mf2x8_t src, size_t index) {
  return __riscv_vget_i8mf2(src, 0);
}

vint8m1_t test_vget_v_i8m1x2_i8m1(vint8m1x2_t src, size_t index) {
  return __riscv_vget_i8m1(src, 0);
}

vint8m1_t test_vget_v_i8m1x3_i8m1(vint8m1x3_t src, size_t index) {
  return __riscv_vget_i8m1(src, 0);
}

vint8m1_t test_vget_v_i8m1x4_i8m1(vint8m1x4_t src, size_t index) {
  return __riscv_vget_i8m1(src, 0);
}

vint8m1_t test_vget_v_i8m1x5_i8m1(vint8m1x5_t src, size_t index) {
  return __riscv_vget_i8m1(src, 0);
}

vint8m1_t test_vget_v_i8m1x6_i8m1(vint8m1x6_t src, size_t index) {
  return __riscv_vget_i8m1(src, 0);
}

vint8m1_t test_vget_v_i8m1x7_i8m1(vint8m1x7_t src, size_t index) {
  return __riscv_vget_i8m1(src, 0);
}

vint8m1_t test_vget_v_i8m1x8_i8m1(vint8m1x8_t src, size_t index) {
  return __riscv_vget_i8m1(src, 0);
}

vint8m2_t test_vget_v_i8m2x2_i8m2(vint8m2x2_t src, size_t index) {
  return __riscv_vget_i8m2(src, 0);
}

vint8m2_t test_vget_v_i8m2x3_i8m2(vint8m2x3_t src, size_t index) {
  return __riscv_vget_i8m2(src, 0);
}

vint8m2_t test_vget_v_i8m2x4_i8m2(vint8m2x4_t src, size_t index) {
  return __riscv_vget_i8m2(src, 0);
}

vint8m4_t test_vget_v_i8m4x2_i8m4(vint8m4x2_t src, size_t index) {
  return __riscv_vget_i8m4(src, 0);
}

vint16mf2_t test_vget_v_i16mf2x2_i16mf2(vint16mf2x2_t src, size_t index) {
  return __riscv_vget_i16mf2(src, 0);
}

vint16mf2_t test_vget_v_i16mf2x3_i16mf2(vint16mf2x3_t src, size_t index) {
  return __riscv_vget_i16mf2(src, 0);
}

vint16mf2_t test_vget_v_i16mf2x4_i16mf2(vint16mf2x4_t src, size_t index) {
  return __riscv_vget_i16mf2(src, 0);
}

vint16mf2_t test_vget_v_i16mf2x5_i16mf2(vint16mf2x5_t src, size_t index) {
  return __riscv_vget_i16mf2(src, 0);
}

vint16mf2_t test_vget_v_i16mf2x6_i16mf2(vint16mf2x6_t src, size_t index) {
  return __riscv_vget_i16mf2(src, 0);
}

vint16mf2_t test_vget_v_i16mf2x7_i16mf2(vint16mf2x7_t src, size_t index) {
  return __riscv_vget_i16mf2(src, 0);
}

vint16mf2_t test_vget_v_i16mf2x8_i16mf2(vint16mf2x8_t src, size_t index) {
  return __riscv_vget_i16mf2(src, 0);
}

vint16m1_t test_vget_v_i16m1x2_i16m1(vint16m1x2_t src, size_t index) {
  return __riscv_vget_i16m1(src, 0);
}

vint16m1_t test_vget_v_i16m1x3_i16m1(vint16m1x3_t src, size_t index) {
  return __riscv_vget_i16m1(src, 0);
}

vint16m1_t test_vget_v_i16m1x4_i16m1(vint16m1x4_t src, size_t index) {
  return __riscv_vget_i16m1(src, 0);
}

vint16m1_t test_vget_v_i16m1x5_i16m1(vint16m1x5_t src, size_t index) {
  return __riscv_vget_i16m1(src, 0);
}

vint16m1_t test_vget_v_i16m1x6_i16m1(vint16m1x6_t src, size_t index) {
  return __riscv_vget_i16m1(src, 0);
}

vint16m1_t test_vget_v_i16m1x7_i16m1(vint16m1x7_t src, size_t index) {
  return __riscv_vget_i16m1(src, 0);
}

vint16m1_t test_vget_v_i16m1x8_i16m1(vint16m1x8_t src, size_t index) {
  return __riscv_vget_i16m1(src, 0);
}

vint16m2_t test_vget_v_i16m2x2_i16m2(vint16m2x2_t src, size_t index) {
  return __riscv_vget_i16m2(src, 0);
}

vint16m2_t test_vget_v_i16m2x3_i16m2(vint16m2x3_t src, size_t index) {
  return __riscv_vget_i16m2(src, 0);
}

vint16m2_t test_vget_v_i16m2x4_i16m2(vint16m2x4_t src, size_t index) {
  return __riscv_vget_i16m2(src, 0);
}

vint16m4_t test_vget_v_i16m4x2_i16m4(vint16m4x2_t src, size_t index) {
  return __riscv_vget_i16m4(src, 0);
}

vint32m1_t test_vget_v_i32m1x2_i32m1(vint32m1x2_t src, size_t index) {
  return __riscv_vget_i32m1(src, 0);
}

vint32m1_t test_vget_v_i32m1x3_i32m1(vint32m1x3_t src, size_t index) {
  return __riscv_vget_i32m1(src, 0);
}

vint32m1_t test_vget_v_i32m1x4_i32m1(vint32m1x4_t src, size_t index) {
  return __riscv_vget_i32m1(src, 0);
}

vint32m1_t test_vget_v_i32m1x5_i32m1(vint32m1x5_t src, size_t index) {
  return __riscv_vget_i32m1(src, 0);
}

vint32m1_t test_vget_v_i32m1x6_i32m1(vint32m1x6_t src, size_t index) {
  return __riscv_vget_i32m1(src, 0);
}

vint32m1_t test_vget_v_i32m1x7_i32m1(vint32m1x7_t src, size_t index) {
  return __riscv_vget_i32m1(src, 0);
}

vint32m1_t test_vget_v_i32m1x8_i32m1(vint32m1x8_t src, size_t index) {
  return __riscv_vget_i32m1(src, 0);
}

vint32m2_t test_vget_v_i32m2x2_i32m2(vint32m2x2_t src, size_t index) {
  return __riscv_vget_i32m2(src, 0);
}

vint32m2_t test_vget_v_i32m2x3_i32m2(vint32m2x3_t src, size_t index) {
  return __riscv_vget_i32m2(src, 0);
}

vint32m2_t test_vget_v_i32m2x4_i32m2(vint32m2x4_t src, size_t index) {
  return __riscv_vget_i32m2(src, 0);
}

vint32m4_t test_vget_v_i32m4x2_i32m4(vint32m4x2_t src, size_t index) {
  return __riscv_vget_i32m4(src, 0);
}

vuint8mf4_t test_vget_v_u8mf4x2_u8mf4(vuint8mf4x2_t src, size_t index) {
  return __riscv_vget_u8mf4(src, 0);
}

vuint8mf4_t test_vget_v_u8mf4x3_u8mf4(vuint8mf4x3_t src, size_t index) {
  return __riscv_vget_u8mf4(src, 0);
}

vuint8mf4_t test_vget_v_u8mf4x4_u8mf4(vuint8mf4x4_t src, size_t index) {
  return __riscv_vget_u8mf4(src, 0);
}

vuint8mf4_t test_vget_v_u8mf4x5_u8mf4(vuint8mf4x5_t src, size_t index) {
  return __riscv_vget_u8mf4(src, 0);
}

vuint8mf4_t test_vget_v_u8mf4x6_u8mf4(vuint8mf4x6_t src, size_t index) {
  return __riscv_vget_u8mf4(src, 0);
}

vuint8mf4_t test_vget_v_u8mf4x7_u8mf4(vuint8mf4x7_t src, size_t index) {
  return __riscv_vget_u8mf4(src, 0);
}

vuint8mf4_t test_vget_v_u8mf4x8_u8mf4(vuint8mf4x8_t src, size_t index) {
  return __riscv_vget_u8mf4(src, 0);
}

vuint8mf2_t test_vget_v_u8mf2x2_u8mf2(vuint8mf2x2_t src, size_t index) {
  return __riscv_vget_u8mf2(src, 0);
}

vuint8mf2_t test_vget_v_u8mf2x3_u8mf2(vuint8mf2x3_t src, size_t index) {
  return __riscv_vget_u8mf2(src, 0);
}

vuint8mf2_t test_vget_v_u8mf2x4_u8mf2(vuint8mf2x4_t src, size_t index) {
  return __riscv_vget_u8mf2(src, 0);
}

vuint8mf2_t test_vget_v_u8mf2x5_u8mf2(vuint8mf2x5_t src, size_t index) {
  return __riscv_vget_u8mf2(src, 0);
}

vuint8mf2_t test_vget_v_u8mf2x6_u8mf2(vuint8mf2x6_t src, size_t index) {
  return __riscv_vget_u8mf2(src, 0);
}

vuint8mf2_t test_vget_v_u8mf2x7_u8mf2(vuint8mf2x7_t src, size_t index) {
  return __riscv_vget_u8mf2(src, 0);
}

vuint8mf2_t test_vget_v_u8mf2x8_u8mf2(vuint8mf2x8_t src, size_t index) {
  return __riscv_vget_u8mf2(src, 0);
}

vuint8m1_t test_vget_v_u8m1x2_u8m1(vuint8m1x2_t src, size_t index) {
  return __riscv_vget_u8m1(src, 0);
}

vuint8m1_t test_vget_v_u8m1x3_u8m1(vuint8m1x3_t src, size_t index) {
  return __riscv_vget_u8m1(src, 0);
}

vuint8m1_t test_vget_v_u8m1x4_u8m1(vuint8m1x4_t src, size_t index) {
  return __riscv_vget_u8m1(src, 0);
}

vuint8m1_t test_vget_v_u8m1x5_u8m1(vuint8m1x5_t src, size_t index) {
  return __riscv_vget_u8m1(src, 0);
}

vuint8m1_t test_vget_v_u8m1x6_u8m1(vuint8m1x6_t src, size_t index) {
  return __riscv_vget_u8m1(src, 0);
}

vuint8m1_t test_vget_v_u8m1x7_u8m1(vuint8m1x7_t src, size_t index) {
  return __riscv_vget_u8m1(src, 0);
}

vuint8m1_t test_vget_v_u8m1x8_u8m1(vuint8m1x8_t src, size_t index) {
  return __riscv_vget_u8m1(src, 0);
}

vuint8m2_t test_vget_v_u8m2x2_u8m2(vuint8m2x2_t src, size_t index) {
  return __riscv_vget_u8m2(src, 0);
}

vuint8m2_t test_vget_v_u8m2x3_u8m2(vuint8m2x3_t src, size_t index) {
  return __riscv_vget_u8m2(src, 0);
}

vuint8m2_t test_vget_v_u8m2x4_u8m2(vuint8m2x4_t src, size_t index) {
  return __riscv_vget_u8m2(src, 0);
}

vuint8m4_t test_vget_v_u8m4x2_u8m4(vuint8m4x2_t src, size_t index) {
  return __riscv_vget_u8m4(src, 0);
}

vuint16mf2_t test_vget_v_u16mf2x2_u16mf2(vuint16mf2x2_t src, size_t index) {
  return __riscv_vget_u16mf2(src, 0);
}

vuint16mf2_t test_vget_v_u16mf2x3_u16mf2(vuint16mf2x3_t src, size_t index) {
  return __riscv_vget_u16mf2(src, 0);
}

vuint16mf2_t test_vget_v_u16mf2x4_u16mf2(vuint16mf2x4_t src, size_t index) {
  return __riscv_vget_u16mf2(src, 0);
}

vuint16mf2_t test_vget_v_u16mf2x5_u16mf2(vuint16mf2x5_t src, size_t index) {
  return __riscv_vget_u16mf2(src, 0);
}

vuint16mf2_t test_vget_v_u16mf2x6_u16mf2(vuint16mf2x6_t src, size_t index) {
  return __riscv_vget_u16mf2(src, 0);
}

vuint16mf2_t test_vget_v_u16mf2x7_u16mf2(vuint16mf2x7_t src, size_t index) {
  return __riscv_vget_u16mf2(src, 0);
}

vuint16mf2_t test_vget_v_u16mf2x8_u16mf2(vuint16mf2x8_t src, size_t index) {
  return __riscv_vget_u16mf2(src, 0);
}

vuint16m1_t test_vget_v_u16m1x2_u16m1(vuint16m1x2_t src, size_t index) {
  return __riscv_vget_u16m1(src, 0);
}

vuint16m1_t test_vget_v_u16m1x3_u16m1(vuint16m1x3_t src, size_t index) {
  return __riscv_vget_u16m1(src, 0);
}

vuint16m1_t test_vget_v_u16m1x4_u16m1(vuint16m1x4_t src, size_t index) {
  return __riscv_vget_u16m1(src, 0);
}

vuint16m1_t test_vget_v_u16m1x5_u16m1(vuint16m1x5_t src, size_t index) {
  return __riscv_vget_u16m1(src, 0);
}

vuint16m1_t test_vget_v_u16m1x6_u16m1(vuint16m1x6_t src, size_t index) {
  return __riscv_vget_u16m1(src, 0);
}

vuint16m1_t test_vget_v_u16m1x7_u16m1(vuint16m1x7_t src, size_t index) {
  return __riscv_vget_u16m1(src, 0);
}

vuint16m1_t test_vget_v_u16m1x8_u16m1(vuint16m1x8_t src, size_t index) {
  return __riscv_vget_u16m1(src, 0);
}

vuint16m2_t test_vget_v_u16m2x2_u16m2(vuint16m2x2_t src, size_t index) {
  return __riscv_vget_u16m2(src, 0);
}

vuint16m2_t test_vget_v_u16m2x3_u16m2(vuint16m2x3_t src, size_t index) {
  return __riscv_vget_u16m2(src, 0);
}

vuint16m2_t test_vget_v_u16m2x4_u16m2(vuint16m2x4_t src, size_t index) {
  return __riscv_vget_u16m2(src, 0);
}

vuint16m4_t test_vget_v_u16m4x2_u16m4(vuint16m4x2_t src, size_t index) {
  return __riscv_vget_u16m4(src, 0);
}

vuint32m1_t test_vget_v_u32m1x2_u32m1(vuint32m1x2_t src, size_t index) {
  return __riscv_vget_u32m1(src, 0);
}

vuint32m1_t test_vget_v_u32m1x3_u32m1(vuint32m1x3_t src, size_t index) {
  return __riscv_vget_u32m1(src, 0);
}

vuint32m1_t test_vget_v_u32m1x4_u32m1(vuint32m1x4_t src, size_t index) {
  return __riscv_vget_u32m1(src, 0);
}

vuint32m1_t test_vget_v_u32m1x5_u32m1(vuint32m1x5_t src, size_t index) {
  return __riscv_vget_u32m1(src, 0);
}

vuint32m1_t test_vget_v_u32m1x6_u32m1(vuint32m1x6_t src, size_t index) {
  return __riscv_vget_u32m1(src, 0);
}

vuint32m1_t test_vget_v_u32m1x7_u32m1(vuint32m1x7_t src, size_t index) {
  return __riscv_vget_u32m1(src, 0);
}

vuint32m1_t test_vget_v_u32m1x8_u32m1(vuint32m1x8_t src, size_t index) {
  return __riscv_vget_u32m1(src, 0);
}

vuint32m2_t test_vget_v_u32m2x2_u32m2(vuint32m2x2_t src, size_t index) {
  return __riscv_vget_u32m2(src, 0);
}

vuint32m2_t test_vget_v_u32m2x3_u32m2(vuint32m2x3_t src, size_t index) {
  return __riscv_vget_u32m2(src, 0);
}

vuint32m2_t test_vget_v_u32m2x4_u32m2(vuint32m2x4_t src, size_t index) {
  return __riscv_vget_u32m2(src, 0);
}

vuint32m4_t test_vget_v_u32m4x2_u32m4(vuint32m4x2_t src, size_t index) {
  return __riscv_vget_u32m4(src, 0);
}

/* { dg-final { scan-assembler-times {vl[124]re[0-9]*\.v\s+v[124],0\([a-z0-9]*\)\s+vs[124]r\.+[ivxfswum.]*\s+} 144 } } */
