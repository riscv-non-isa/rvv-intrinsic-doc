/* { dg-do compile } */
/* { dg-options "-march=rv32gc_zve32f -mabi=ilp32d -Wno-psabi -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include "riscv_vector.h"

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
vint8mf4_t test_vmv_v_v_i8mf4(vint8mf4_t src, size_t vl) {
  return __riscv_vmv_v(src, vl);
}

vint8mf2_t test_vmv_v_v_i8mf2(vint8mf2_t src, size_t vl) {
  return __riscv_vmv_v(src, vl);
}

vint8m1_t test_vmv_v_v_i8m1(vint8m1_t src, size_t vl) {
  return __riscv_vmv_v(src, vl);
}

vint8m2_t test_vmv_v_v_i8m2(vint8m2_t src, size_t vl) {
  return __riscv_vmv_v(src, vl);
}

vint8m4_t test_vmv_v_v_i8m4(vint8m4_t src, size_t vl) {
  return __riscv_vmv_v(src, vl);
}

vint8m8_t test_vmv_v_v_i8m8(vint8m8_t src, size_t vl) {
  return __riscv_vmv_v(src, vl);
}

vint16mf2_t test_vmv_v_v_i16mf2(vint16mf2_t src, size_t vl) {
  return __riscv_vmv_v(src, vl);
}

vint16m1_t test_vmv_v_v_i16m1(vint16m1_t src, size_t vl) {
  return __riscv_vmv_v(src, vl);
}

vint16m2_t test_vmv_v_v_i16m2(vint16m2_t src, size_t vl) {
  return __riscv_vmv_v(src, vl);
}

vint16m4_t test_vmv_v_v_i16m4(vint16m4_t src, size_t vl) {
  return __riscv_vmv_v(src, vl);
}

vint16m8_t test_vmv_v_v_i16m8(vint16m8_t src, size_t vl) {
  return __riscv_vmv_v(src, vl);
}

vint32m1_t test_vmv_v_v_i32m1(vint32m1_t src, size_t vl) {
  return __riscv_vmv_v(src, vl);
}

vint32m2_t test_vmv_v_v_i32m2(vint32m2_t src, size_t vl) {
  return __riscv_vmv_v(src, vl);
}

vint32m4_t test_vmv_v_v_i32m4(vint32m4_t src, size_t vl) {
  return __riscv_vmv_v(src, vl);
}

vint32m8_t test_vmv_v_v_i32m8(vint32m8_t src, size_t vl) {
  return __riscv_vmv_v(src, vl);
}

vuint8mf4_t test_vmv_v_v_u8mf4(vuint8mf4_t src, size_t vl) {
  return __riscv_vmv_v(src, vl);
}

vuint8mf2_t test_vmv_v_v_u8mf2(vuint8mf2_t src, size_t vl) {
  return __riscv_vmv_v(src, vl);
}

vuint8m1_t test_vmv_v_v_u8m1(vuint8m1_t src, size_t vl) {
  return __riscv_vmv_v(src, vl);
}

vuint8m2_t test_vmv_v_v_u8m2(vuint8m2_t src, size_t vl) {
  return __riscv_vmv_v(src, vl);
}

vuint8m4_t test_vmv_v_v_u8m4(vuint8m4_t src, size_t vl) {
  return __riscv_vmv_v(src, vl);
}

vuint8m8_t test_vmv_v_v_u8m8(vuint8m8_t src, size_t vl) {
  return __riscv_vmv_v(src, vl);
}

vuint16mf2_t test_vmv_v_v_u16mf2(vuint16mf2_t src, size_t vl) {
  return __riscv_vmv_v(src, vl);
}

vuint16m1_t test_vmv_v_v_u16m1(vuint16m1_t src, size_t vl) {
  return __riscv_vmv_v(src, vl);
}

vuint16m2_t test_vmv_v_v_u16m2(vuint16m2_t src, size_t vl) {
  return __riscv_vmv_v(src, vl);
}

vuint16m4_t test_vmv_v_v_u16m4(vuint16m4_t src, size_t vl) {
  return __riscv_vmv_v(src, vl);
}

vuint16m8_t test_vmv_v_v_u16m8(vuint16m8_t src, size_t vl) {
  return __riscv_vmv_v(src, vl);
}

vuint32m1_t test_vmv_v_v_u32m1(vuint32m1_t src, size_t vl) {
  return __riscv_vmv_v(src, vl);
}

vuint32m2_t test_vmv_v_v_u32m2(vuint32m2_t src, size_t vl) {
  return __riscv_vmv_v(src, vl);
}

vuint32m4_t test_vmv_v_v_u32m4(vuint32m4_t src, size_t vl) {
  return __riscv_vmv_v(src, vl);
}

vuint32m8_t test_vmv_v_v_u32m8(vuint32m8_t src, size_t vl) {
  return __riscv_vmv_v(src, vl);
}

vfloat32m1_t test_vmv_v_v_f32m1(vfloat32m1_t src, size_t vl) {
  return __riscv_vmv_v(src, vl);
}

vfloat32m2_t test_vmv_v_v_f32m2(vfloat32m2_t src, size_t vl) {
  return __riscv_vmv_v(src, vl);
}

vfloat32m4_t test_vmv_v_v_f32m4(vfloat32m4_t src, size_t vl) {
  return __riscv_vmv_v(src, vl);
}

vfloat32m8_t test_vmv_v_v_f32m8(vfloat32m8_t src, size_t vl) {
  return __riscv_vmv_v(src, vl);
}

int8_t test_vmv_x_s_i8mf4_i8(vint8mf4_t src) {
  return __riscv_vmv_x(src);
}

int8_t test_vmv_x_s_i8mf2_i8(vint8mf2_t src) {
  return __riscv_vmv_x(src);
}

int8_t test_vmv_x_s_i8m1_i8(vint8m1_t src) {
  return __riscv_vmv_x(src);
}

int8_t test_vmv_x_s_i8m2_i8(vint8m2_t src) {
  return __riscv_vmv_x(src);
}

int8_t test_vmv_x_s_i8m4_i8(vint8m4_t src) {
  return __riscv_vmv_x(src);
}

int8_t test_vmv_x_s_i8m8_i8(vint8m8_t src) {
  return __riscv_vmv_x(src);
}

int16_t test_vmv_x_s_i16mf2_i16(vint16mf2_t src) {
  return __riscv_vmv_x(src);
}

int16_t test_vmv_x_s_i16m1_i16(vint16m1_t src) {
  return __riscv_vmv_x(src);
}

int16_t test_vmv_x_s_i16m2_i16(vint16m2_t src) {
  return __riscv_vmv_x(src);
}

int16_t test_vmv_x_s_i16m4_i16(vint16m4_t src) {
  return __riscv_vmv_x(src);
}

int16_t test_vmv_x_s_i16m8_i16(vint16m8_t src) {
  return __riscv_vmv_x(src);
}

int32_t test_vmv_x_s_i32m1_i32(vint32m1_t src) {
  return __riscv_vmv_x(src);
}

int32_t test_vmv_x_s_i32m2_i32(vint32m2_t src) {
  return __riscv_vmv_x(src);
}

int32_t test_vmv_x_s_i32m4_i32(vint32m4_t src) {
  return __riscv_vmv_x(src);
}

int32_t test_vmv_x_s_i32m8_i32(vint32m8_t src) {
  return __riscv_vmv_x(src);
}

uint8_t test_vmv_x_s_u8mf4_u8(vuint8mf4_t src) {
  return __riscv_vmv_x(src);
}

uint8_t test_vmv_x_s_u8mf2_u8(vuint8mf2_t src) {
  return __riscv_vmv_x(src);
}

uint8_t test_vmv_x_s_u8m1_u8(vuint8m1_t src) {
  return __riscv_vmv_x(src);
}

uint8_t test_vmv_x_s_u8m2_u8(vuint8m2_t src) {
  return __riscv_vmv_x(src);
}

uint8_t test_vmv_x_s_u8m4_u8(vuint8m4_t src) {
  return __riscv_vmv_x(src);
}

uint8_t test_vmv_x_s_u8m8_u8(vuint8m8_t src) {
  return __riscv_vmv_x(src);
}

uint16_t test_vmv_x_s_u16mf2_u16(vuint16mf2_t src) {
  return __riscv_vmv_x(src);
}

uint16_t test_vmv_x_s_u16m1_u16(vuint16m1_t src) {
  return __riscv_vmv_x(src);
}

uint16_t test_vmv_x_s_u16m2_u16(vuint16m2_t src) {
  return __riscv_vmv_x(src);
}

uint16_t test_vmv_x_s_u16m4_u16(vuint16m4_t src) {
  return __riscv_vmv_x(src);
}

uint16_t test_vmv_x_s_u16m8_u16(vuint16m8_t src) {
  return __riscv_vmv_x(src);
}

uint32_t test_vmv_x_s_u32m1_u32(vuint32m1_t src) {
  return __riscv_vmv_x(src);
}

uint32_t test_vmv_x_s_u32m2_u32(vuint32m2_t src) {
  return __riscv_vmv_x(src);
}

uint32_t test_vmv_x_s_u32m4_u32(vuint32m4_t src) {
  return __riscv_vmv_x(src);
}

uint32_t test_vmv_x_s_u32m8_u32(vuint32m8_t src) {
  return __riscv_vmv_x(src);
}

/* { dg-final { scan-assembler-times {v[ml][s]*[ve][0-9]*\.[ivxfswum.]+\s+} 136 } } */
