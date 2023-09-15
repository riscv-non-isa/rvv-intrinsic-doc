/* { dg-do compile } */
/* { dg-options "-march=rv32gc_zve32f -mabi=ilp32d -Wno-psabi -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include "riscv_vector.h"

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
void test_vsoxseg6ei16_v_f32m1x6(float32_t *base, vuint16mf2_t bindex, vfloat32m1x6_t v_tuple, size_t vl) {
  return __riscv_vsoxseg6ei16(base, bindex, v_tuple, vl);
}

void test_vsoxseg6ei16_v_i8mf4x6(int8_t *base, vuint16mf2_t bindex, vint8mf4x6_t v_tuple, size_t vl) {
  return __riscv_vsoxseg6ei16(base, bindex, v_tuple, vl);
}

void test_vsoxseg6ei16_v_i8mf2x6(int8_t *base, vuint16m1_t bindex, vint8mf2x6_t v_tuple, size_t vl) {
  return __riscv_vsoxseg6ei16(base, bindex, v_tuple, vl);
}

void test_vsoxseg6ei16_v_i8m1x6(int8_t *base, vuint16m2_t bindex, vint8m1x6_t v_tuple, size_t vl) {
  return __riscv_vsoxseg6ei16(base, bindex, v_tuple, vl);
}

void test_vsoxseg6ei16_v_i16mf2x6(int16_t *base, vuint16mf2_t bindex, vint16mf2x6_t v_tuple, size_t vl) {
  return __riscv_vsoxseg6ei16(base, bindex, v_tuple, vl);
}

void test_vsoxseg6ei16_v_i16m1x6(int16_t *base, vuint16m1_t bindex, vint16m1x6_t v_tuple, size_t vl) {
  return __riscv_vsoxseg6ei16(base, bindex, v_tuple, vl);
}

void test_vsoxseg6ei16_v_i32m1x6(int32_t *base, vuint16mf2_t bindex, vint32m1x6_t v_tuple, size_t vl) {
  return __riscv_vsoxseg6ei16(base, bindex, v_tuple, vl);
}

void test_vsoxseg6ei16_v_u8mf4x6(uint8_t *base, vuint16mf2_t bindex, vuint8mf4x6_t v_tuple, size_t vl) {
  return __riscv_vsoxseg6ei16(base, bindex, v_tuple, vl);
}

void test_vsoxseg6ei16_v_u8mf2x6(uint8_t *base, vuint16m1_t bindex, vuint8mf2x6_t v_tuple, size_t vl) {
  return __riscv_vsoxseg6ei16(base, bindex, v_tuple, vl);
}

void test_vsoxseg6ei16_v_u8m1x6(uint8_t *base, vuint16m2_t bindex, vuint8m1x6_t v_tuple, size_t vl) {
  return __riscv_vsoxseg6ei16(base, bindex, v_tuple, vl);
}

void test_vsoxseg6ei16_v_u16mf2x6(uint16_t *base, vuint16mf2_t bindex, vuint16mf2x6_t v_tuple, size_t vl) {
  return __riscv_vsoxseg6ei16(base, bindex, v_tuple, vl);
}

void test_vsoxseg6ei16_v_u16m1x6(uint16_t *base, vuint16m1_t bindex, vuint16m1x6_t v_tuple, size_t vl) {
  return __riscv_vsoxseg6ei16(base, bindex, v_tuple, vl);
}

void test_vsoxseg6ei16_v_u32m1x6(uint32_t *base, vuint16mf2_t bindex, vuint32m1x6_t v_tuple, size_t vl) {
  return __riscv_vsoxseg6ei16(base, bindex, v_tuple, vl);
}

void test_vsoxseg6ei16_v_f32m1x6_m(vbool32_t mask, float32_t *base, vuint16mf2_t bindex, vfloat32m1x6_t v_tuple, size_t vl) {
  return __riscv_vsoxseg6ei16(mask, base, bindex, v_tuple, vl);
}

void test_vsoxseg6ei16_v_i8mf4x6_m(vbool32_t mask, int8_t *base, vuint16mf2_t bindex, vint8mf4x6_t v_tuple, size_t vl) {
  return __riscv_vsoxseg6ei16(mask, base, bindex, v_tuple, vl);
}

void test_vsoxseg6ei16_v_i8mf2x6_m(vbool16_t mask, int8_t *base, vuint16m1_t bindex, vint8mf2x6_t v_tuple, size_t vl) {
  return __riscv_vsoxseg6ei16(mask, base, bindex, v_tuple, vl);
}

void test_vsoxseg6ei16_v_i8m1x6_m(vbool8_t mask, int8_t *base, vuint16m2_t bindex, vint8m1x6_t v_tuple, size_t vl) {
  return __riscv_vsoxseg6ei16(mask, base, bindex, v_tuple, vl);
}

void test_vsoxseg6ei16_v_i16mf2x6_m(vbool32_t mask, int16_t *base, vuint16mf2_t bindex, vint16mf2x6_t v_tuple, size_t vl) {
  return __riscv_vsoxseg6ei16(mask, base, bindex, v_tuple, vl);
}

void test_vsoxseg6ei16_v_i16m1x6_m(vbool16_t mask, int16_t *base, vuint16m1_t bindex, vint16m1x6_t v_tuple, size_t vl) {
  return __riscv_vsoxseg6ei16(mask, base, bindex, v_tuple, vl);
}

void test_vsoxseg6ei16_v_i32m1x6_m(vbool32_t mask, int32_t *base, vuint16mf2_t bindex, vint32m1x6_t v_tuple, size_t vl) {
  return __riscv_vsoxseg6ei16(mask, base, bindex, v_tuple, vl);
}

void test_vsoxseg6ei16_v_u8mf4x6_m(vbool32_t mask, uint8_t *base, vuint16mf2_t bindex, vuint8mf4x6_t v_tuple, size_t vl) {
  return __riscv_vsoxseg6ei16(mask, base, bindex, v_tuple, vl);
}

void test_vsoxseg6ei16_v_u8mf2x6_m(vbool16_t mask, uint8_t *base, vuint16m1_t bindex, vuint8mf2x6_t v_tuple, size_t vl) {
  return __riscv_vsoxseg6ei16(mask, base, bindex, v_tuple, vl);
}

void test_vsoxseg6ei16_v_u8m1x6_m(vbool8_t mask, uint8_t *base, vuint16m2_t bindex, vuint8m1x6_t v_tuple, size_t vl) {
  return __riscv_vsoxseg6ei16(mask, base, bindex, v_tuple, vl);
}

void test_vsoxseg6ei16_v_u16mf2x6_m(vbool32_t mask, uint16_t *base, vuint16mf2_t bindex, vuint16mf2x6_t v_tuple, size_t vl) {
  return __riscv_vsoxseg6ei16(mask, base, bindex, v_tuple, vl);
}

void test_vsoxseg6ei16_v_u16m1x6_m(vbool16_t mask, uint16_t *base, vuint16m1_t bindex, vuint16m1x6_t v_tuple, size_t vl) {
  return __riscv_vsoxseg6ei16(mask, base, bindex, v_tuple, vl);
}

void test_vsoxseg6ei16_v_u32m1x6_m(vbool32_t mask, uint32_t *base, vuint16mf2_t bindex, vuint32m1x6_t v_tuple, size_t vl) {
  return __riscv_vsoxseg6ei16(mask, base, bindex, v_tuple, vl);
}

/* { dg-final { scan-assembler-times {vseti?vli\s+[a-z0-9]+,\s*[a-z0-9]+,\s*e[0-9]+,\s*mf?[1248],\s*t[au],\s*m[au]\s+vsoxseg6ei16\.[ivxfswum.]+\s+} 26 } } */
