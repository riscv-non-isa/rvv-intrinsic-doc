/* { dg-do compile } */
/* { dg-options "-march=rv32gc_zve32x -mabi=ilp32d -Wno-psabi -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include "riscv_vector.h"

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
void test_vsuxei32_v_i8mf4(int8_t *base, vuint32m1_t bindex, vint8mf4_t value, size_t vl) {
  return __riscv_vsuxei32(base, bindex, value, vl);
}

void test_vsuxei32_v_i8mf2(int8_t *base, vuint32m2_t bindex, vint8mf2_t value, size_t vl) {
  return __riscv_vsuxei32(base, bindex, value, vl);
}

void test_vsuxei32_v_i8m1(int8_t *base, vuint32m4_t bindex, vint8m1_t value, size_t vl) {
  return __riscv_vsuxei32(base, bindex, value, vl);
}

void test_vsuxei32_v_i8m2(int8_t *base, vuint32m8_t bindex, vint8m2_t value, size_t vl) {
  return __riscv_vsuxei32(base, bindex, value, vl);
}

void test_vsuxei32_v_i16mf2(int16_t *base, vuint32m1_t bindex, vint16mf2_t value, size_t vl) {
  return __riscv_vsuxei32(base, bindex, value, vl);
}

void test_vsuxei32_v_i16m1(int16_t *base, vuint32m2_t bindex, vint16m1_t value, size_t vl) {
  return __riscv_vsuxei32(base, bindex, value, vl);
}

void test_vsuxei32_v_i16m2(int16_t *base, vuint32m4_t bindex, vint16m2_t value, size_t vl) {
  return __riscv_vsuxei32(base, bindex, value, vl);
}

void test_vsuxei32_v_i16m4(int16_t *base, vuint32m8_t bindex, vint16m4_t value, size_t vl) {
  return __riscv_vsuxei32(base, bindex, value, vl);
}

void test_vsuxei32_v_i32m1(int32_t *base, vuint32m1_t bindex, vint32m1_t value, size_t vl) {
  return __riscv_vsuxei32(base, bindex, value, vl);
}

void test_vsuxei32_v_i32m2(int32_t *base, vuint32m2_t bindex, vint32m2_t value, size_t vl) {
  return __riscv_vsuxei32(base, bindex, value, vl);
}

void test_vsuxei32_v_i32m4(int32_t *base, vuint32m4_t bindex, vint32m4_t value, size_t vl) {
  return __riscv_vsuxei32(base, bindex, value, vl);
}

void test_vsuxei32_v_i32m8(int32_t *base, vuint32m8_t bindex, vint32m8_t value, size_t vl) {
  return __riscv_vsuxei32(base, bindex, value, vl);
}

void test_vsuxei32_v_u8mf4(uint8_t *base, vuint32m1_t bindex, vuint8mf4_t value, size_t vl) {
  return __riscv_vsuxei32(base, bindex, value, vl);
}

void test_vsuxei32_v_u8mf2(uint8_t *base, vuint32m2_t bindex, vuint8mf2_t value, size_t vl) {
  return __riscv_vsuxei32(base, bindex, value, vl);
}

void test_vsuxei32_v_u8m1(uint8_t *base, vuint32m4_t bindex, vuint8m1_t value, size_t vl) {
  return __riscv_vsuxei32(base, bindex, value, vl);
}

void test_vsuxei32_v_u8m2(uint8_t *base, vuint32m8_t bindex, vuint8m2_t value, size_t vl) {
  return __riscv_vsuxei32(base, bindex, value, vl);
}

void test_vsuxei32_v_u16mf2(uint16_t *base, vuint32m1_t bindex, vuint16mf2_t value, size_t vl) {
  return __riscv_vsuxei32(base, bindex, value, vl);
}

void test_vsuxei32_v_u16m1(uint16_t *base, vuint32m2_t bindex, vuint16m1_t value, size_t vl) {
  return __riscv_vsuxei32(base, bindex, value, vl);
}

void test_vsuxei32_v_u16m2(uint16_t *base, vuint32m4_t bindex, vuint16m2_t value, size_t vl) {
  return __riscv_vsuxei32(base, bindex, value, vl);
}

void test_vsuxei32_v_u16m4(uint16_t *base, vuint32m8_t bindex, vuint16m4_t value, size_t vl) {
  return __riscv_vsuxei32(base, bindex, value, vl);
}

void test_vsuxei32_v_u32m1(uint32_t *base, vuint32m1_t bindex, vuint32m1_t value, size_t vl) {
  return __riscv_vsuxei32(base, bindex, value, vl);
}

void test_vsuxei32_v_u32m2(uint32_t *base, vuint32m2_t bindex, vuint32m2_t value, size_t vl) {
  return __riscv_vsuxei32(base, bindex, value, vl);
}

void test_vsuxei32_v_u32m4(uint32_t *base, vuint32m4_t bindex, vuint32m4_t value, size_t vl) {
  return __riscv_vsuxei32(base, bindex, value, vl);
}

void test_vsuxei32_v_u32m8(uint32_t *base, vuint32m8_t bindex, vuint32m8_t value, size_t vl) {
  return __riscv_vsuxei32(base, bindex, value, vl);
}

void test_vsuxei32_v_i8mf4_m(vbool32_t mask, int8_t *base, vuint32m1_t bindex, vint8mf4_t value, size_t vl) {
  return __riscv_vsuxei32(mask, base, bindex, value, vl);
}

void test_vsuxei32_v_i8mf2_m(vbool16_t mask, int8_t *base, vuint32m2_t bindex, vint8mf2_t value, size_t vl) {
  return __riscv_vsuxei32(mask, base, bindex, value, vl);
}

void test_vsuxei32_v_i8m1_m(vbool8_t mask, int8_t *base, vuint32m4_t bindex, vint8m1_t value, size_t vl) {
  return __riscv_vsuxei32(mask, base, bindex, value, vl);
}

void test_vsuxei32_v_i8m2_m(vbool4_t mask, int8_t *base, vuint32m8_t bindex, vint8m2_t value, size_t vl) {
  return __riscv_vsuxei32(mask, base, bindex, value, vl);
}

void test_vsuxei32_v_i16mf2_m(vbool32_t mask, int16_t *base, vuint32m1_t bindex, vint16mf2_t value, size_t vl) {
  return __riscv_vsuxei32(mask, base, bindex, value, vl);
}

void test_vsuxei32_v_i16m1_m(vbool16_t mask, int16_t *base, vuint32m2_t bindex, vint16m1_t value, size_t vl) {
  return __riscv_vsuxei32(mask, base, bindex, value, vl);
}

void test_vsuxei32_v_i16m2_m(vbool8_t mask, int16_t *base, vuint32m4_t bindex, vint16m2_t value, size_t vl) {
  return __riscv_vsuxei32(mask, base, bindex, value, vl);
}

void test_vsuxei32_v_i16m4_m(vbool4_t mask, int16_t *base, vuint32m8_t bindex, vint16m4_t value, size_t vl) {
  return __riscv_vsuxei32(mask, base, bindex, value, vl);
}

void test_vsuxei32_v_i32m1_m(vbool32_t mask, int32_t *base, vuint32m1_t bindex, vint32m1_t value, size_t vl) {
  return __riscv_vsuxei32(mask, base, bindex, value, vl);
}

void test_vsuxei32_v_i32m2_m(vbool16_t mask, int32_t *base, vuint32m2_t bindex, vint32m2_t value, size_t vl) {
  return __riscv_vsuxei32(mask, base, bindex, value, vl);
}

void test_vsuxei32_v_i32m4_m(vbool8_t mask, int32_t *base, vuint32m4_t bindex, vint32m4_t value, size_t vl) {
  return __riscv_vsuxei32(mask, base, bindex, value, vl);
}

void test_vsuxei32_v_i32m8_m(vbool4_t mask, int32_t *base, vuint32m8_t bindex, vint32m8_t value, size_t vl) {
  return __riscv_vsuxei32(mask, base, bindex, value, vl);
}

void test_vsuxei32_v_u8mf4_m(vbool32_t mask, uint8_t *base, vuint32m1_t bindex, vuint8mf4_t value, size_t vl) {
  return __riscv_vsuxei32(mask, base, bindex, value, vl);
}

void test_vsuxei32_v_u8mf2_m(vbool16_t mask, uint8_t *base, vuint32m2_t bindex, vuint8mf2_t value, size_t vl) {
  return __riscv_vsuxei32(mask, base, bindex, value, vl);
}

void test_vsuxei32_v_u8m1_m(vbool8_t mask, uint8_t *base, vuint32m4_t bindex, vuint8m1_t value, size_t vl) {
  return __riscv_vsuxei32(mask, base, bindex, value, vl);
}

void test_vsuxei32_v_u8m2_m(vbool4_t mask, uint8_t *base, vuint32m8_t bindex, vuint8m2_t value, size_t vl) {
  return __riscv_vsuxei32(mask, base, bindex, value, vl);
}

void test_vsuxei32_v_u16mf2_m(vbool32_t mask, uint16_t *base, vuint32m1_t bindex, vuint16mf2_t value, size_t vl) {
  return __riscv_vsuxei32(mask, base, bindex, value, vl);
}

void test_vsuxei32_v_u16m1_m(vbool16_t mask, uint16_t *base, vuint32m2_t bindex, vuint16m1_t value, size_t vl) {
  return __riscv_vsuxei32(mask, base, bindex, value, vl);
}

void test_vsuxei32_v_u16m2_m(vbool8_t mask, uint16_t *base, vuint32m4_t bindex, vuint16m2_t value, size_t vl) {
  return __riscv_vsuxei32(mask, base, bindex, value, vl);
}

void test_vsuxei32_v_u16m4_m(vbool4_t mask, uint16_t *base, vuint32m8_t bindex, vuint16m4_t value, size_t vl) {
  return __riscv_vsuxei32(mask, base, bindex, value, vl);
}

void test_vsuxei32_v_u32m1_m(vbool32_t mask, uint32_t *base, vuint32m1_t bindex, vuint32m1_t value, size_t vl) {
  return __riscv_vsuxei32(mask, base, bindex, value, vl);
}

void test_vsuxei32_v_u32m2_m(vbool16_t mask, uint32_t *base, vuint32m2_t bindex, vuint32m2_t value, size_t vl) {
  return __riscv_vsuxei32(mask, base, bindex, value, vl);
}

void test_vsuxei32_v_u32m4_m(vbool8_t mask, uint32_t *base, vuint32m4_t bindex, vuint32m4_t value, size_t vl) {
  return __riscv_vsuxei32(mask, base, bindex, value, vl);
}

void test_vsuxei32_v_u32m8_m(vbool4_t mask, uint32_t *base, vuint32m8_t bindex, vuint32m8_t value, size_t vl) {
  return __riscv_vsuxei32(mask, base, bindex, value, vl);
}

/* { dg-final { scan-assembler-times {vseti?vli\s+[a-z0-9]+,\s*[a-z0-9]+,\s*e[0-9]+,\s*mf?[1248],\s*t[au],\s*m[au]\s+vsuxei32\.[ivxfswum.]+\s+} 48 } } */
