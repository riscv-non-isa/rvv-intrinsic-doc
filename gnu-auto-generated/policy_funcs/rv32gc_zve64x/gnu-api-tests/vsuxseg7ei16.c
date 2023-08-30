/* { dg-do compile } */
/* { dg-options "-march=rv32gc_zve64x -mabi=ilp32d -Wno-psabi -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include "riscv_vector.h"

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
void test_vsuxseg7ei16_v_i8mf8x7(int8_t *base, vuint16mf4_t bindex, vint8mf8x7_t v_tuple, size_t vl) {
  return __riscv_vsuxseg7ei16_v_i8mf8x7(base, bindex, v_tuple, vl);
}

void test_vsuxseg7ei16_v_i8mf4x7(int8_t *base, vuint16mf2_t bindex, vint8mf4x7_t v_tuple, size_t vl) {
  return __riscv_vsuxseg7ei16_v_i8mf4x7(base, bindex, v_tuple, vl);
}

void test_vsuxseg7ei16_v_i8mf2x7(int8_t *base, vuint16m1_t bindex, vint8mf2x7_t v_tuple, size_t vl) {
  return __riscv_vsuxseg7ei16_v_i8mf2x7(base, bindex, v_tuple, vl);
}

void test_vsuxseg7ei16_v_i8m1x7(int8_t *base, vuint16m2_t bindex, vint8m1x7_t v_tuple, size_t vl) {
  return __riscv_vsuxseg7ei16_v_i8m1x7(base, bindex, v_tuple, vl);
}

void test_vsuxseg7ei16_v_i16mf4x7(int16_t *base, vuint16mf4_t bindex, vint16mf4x7_t v_tuple, size_t vl) {
  return __riscv_vsuxseg7ei16_v_i16mf4x7(base, bindex, v_tuple, vl);
}

void test_vsuxseg7ei16_v_i16mf2x7(int16_t *base, vuint16mf2_t bindex, vint16mf2x7_t v_tuple, size_t vl) {
  return __riscv_vsuxseg7ei16_v_i16mf2x7(base, bindex, v_tuple, vl);
}

void test_vsuxseg7ei16_v_i16m1x7(int16_t *base, vuint16m1_t bindex, vint16m1x7_t v_tuple, size_t vl) {
  return __riscv_vsuxseg7ei16_v_i16m1x7(base, bindex, v_tuple, vl);
}

void test_vsuxseg7ei16_v_i32mf2x7(int32_t *base, vuint16mf4_t bindex, vint32mf2x7_t v_tuple, size_t vl) {
  return __riscv_vsuxseg7ei16_v_i32mf2x7(base, bindex, v_tuple, vl);
}

void test_vsuxseg7ei16_v_i32m1x7(int32_t *base, vuint16mf2_t bindex, vint32m1x7_t v_tuple, size_t vl) {
  return __riscv_vsuxseg7ei16_v_i32m1x7(base, bindex, v_tuple, vl);
}

void test_vsuxseg7ei16_v_i64m1x7(int64_t *base, vuint16mf4_t bindex, vint64m1x7_t v_tuple, size_t vl) {
  return __riscv_vsuxseg7ei16_v_i64m1x7(base, bindex, v_tuple, vl);
}

void test_vsuxseg7ei16_v_u8mf8x7(uint8_t *base, vuint16mf4_t bindex, vuint8mf8x7_t v_tuple, size_t vl) {
  return __riscv_vsuxseg7ei16_v_u8mf8x7(base, bindex, v_tuple, vl);
}

void test_vsuxseg7ei16_v_u8mf4x7(uint8_t *base, vuint16mf2_t bindex, vuint8mf4x7_t v_tuple, size_t vl) {
  return __riscv_vsuxseg7ei16_v_u8mf4x7(base, bindex, v_tuple, vl);
}

void test_vsuxseg7ei16_v_u8mf2x7(uint8_t *base, vuint16m1_t bindex, vuint8mf2x7_t v_tuple, size_t vl) {
  return __riscv_vsuxseg7ei16_v_u8mf2x7(base, bindex, v_tuple, vl);
}

void test_vsuxseg7ei16_v_u8m1x7(uint8_t *base, vuint16m2_t bindex, vuint8m1x7_t v_tuple, size_t vl) {
  return __riscv_vsuxseg7ei16_v_u8m1x7(base, bindex, v_tuple, vl);
}

void test_vsuxseg7ei16_v_u16mf4x7(uint16_t *base, vuint16mf4_t bindex, vuint16mf4x7_t v_tuple, size_t vl) {
  return __riscv_vsuxseg7ei16_v_u16mf4x7(base, bindex, v_tuple, vl);
}

void test_vsuxseg7ei16_v_u16mf2x7(uint16_t *base, vuint16mf2_t bindex, vuint16mf2x7_t v_tuple, size_t vl) {
  return __riscv_vsuxseg7ei16_v_u16mf2x7(base, bindex, v_tuple, vl);
}

void test_vsuxseg7ei16_v_u16m1x7(uint16_t *base, vuint16m1_t bindex, vuint16m1x7_t v_tuple, size_t vl) {
  return __riscv_vsuxseg7ei16_v_u16m1x7(base, bindex, v_tuple, vl);
}

void test_vsuxseg7ei16_v_u32mf2x7(uint32_t *base, vuint16mf4_t bindex, vuint32mf2x7_t v_tuple, size_t vl) {
  return __riscv_vsuxseg7ei16_v_u32mf2x7(base, bindex, v_tuple, vl);
}

void test_vsuxseg7ei16_v_u32m1x7(uint32_t *base, vuint16mf2_t bindex, vuint32m1x7_t v_tuple, size_t vl) {
  return __riscv_vsuxseg7ei16_v_u32m1x7(base, bindex, v_tuple, vl);
}

void test_vsuxseg7ei16_v_u64m1x7(uint64_t *base, vuint16mf4_t bindex, vuint64m1x7_t v_tuple, size_t vl) {
  return __riscv_vsuxseg7ei16_v_u64m1x7(base, bindex, v_tuple, vl);
}

void test_vsuxseg7ei16_v_i8mf8x7_m(vbool64_t mask, int8_t *base, vuint16mf4_t bindex, vint8mf8x7_t v_tuple, size_t vl) {
  return __riscv_vsuxseg7ei16_v_i8mf8x7_m(mask, base, bindex, v_tuple, vl);
}

void test_vsuxseg7ei16_v_i8mf4x7_m(vbool32_t mask, int8_t *base, vuint16mf2_t bindex, vint8mf4x7_t v_tuple, size_t vl) {
  return __riscv_vsuxseg7ei16_v_i8mf4x7_m(mask, base, bindex, v_tuple, vl);
}

void test_vsuxseg7ei16_v_i8mf2x7_m(vbool16_t mask, int8_t *base, vuint16m1_t bindex, vint8mf2x7_t v_tuple, size_t vl) {
  return __riscv_vsuxseg7ei16_v_i8mf2x7_m(mask, base, bindex, v_tuple, vl);
}

void test_vsuxseg7ei16_v_i8m1x7_m(vbool8_t mask, int8_t *base, vuint16m2_t bindex, vint8m1x7_t v_tuple, size_t vl) {
  return __riscv_vsuxseg7ei16_v_i8m1x7_m(mask, base, bindex, v_tuple, vl);
}

void test_vsuxseg7ei16_v_i16mf4x7_m(vbool64_t mask, int16_t *base, vuint16mf4_t bindex, vint16mf4x7_t v_tuple, size_t vl) {
  return __riscv_vsuxseg7ei16_v_i16mf4x7_m(mask, base, bindex, v_tuple, vl);
}

void test_vsuxseg7ei16_v_i16mf2x7_m(vbool32_t mask, int16_t *base, vuint16mf2_t bindex, vint16mf2x7_t v_tuple, size_t vl) {
  return __riscv_vsuxseg7ei16_v_i16mf2x7_m(mask, base, bindex, v_tuple, vl);
}

void test_vsuxseg7ei16_v_i16m1x7_m(vbool16_t mask, int16_t *base, vuint16m1_t bindex, vint16m1x7_t v_tuple, size_t vl) {
  return __riscv_vsuxseg7ei16_v_i16m1x7_m(mask, base, bindex, v_tuple, vl);
}

void test_vsuxseg7ei16_v_i32mf2x7_m(vbool64_t mask, int32_t *base, vuint16mf4_t bindex, vint32mf2x7_t v_tuple, size_t vl) {
  return __riscv_vsuxseg7ei16_v_i32mf2x7_m(mask, base, bindex, v_tuple, vl);
}

void test_vsuxseg7ei16_v_i32m1x7_m(vbool32_t mask, int32_t *base, vuint16mf2_t bindex, vint32m1x7_t v_tuple, size_t vl) {
  return __riscv_vsuxseg7ei16_v_i32m1x7_m(mask, base, bindex, v_tuple, vl);
}

void test_vsuxseg7ei16_v_i64m1x7_m(vbool64_t mask, int64_t *base, vuint16mf4_t bindex, vint64m1x7_t v_tuple, size_t vl) {
  return __riscv_vsuxseg7ei16_v_i64m1x7_m(mask, base, bindex, v_tuple, vl);
}

void test_vsuxseg7ei16_v_u8mf8x7_m(vbool64_t mask, uint8_t *base, vuint16mf4_t bindex, vuint8mf8x7_t v_tuple, size_t vl) {
  return __riscv_vsuxseg7ei16_v_u8mf8x7_m(mask, base, bindex, v_tuple, vl);
}

void test_vsuxseg7ei16_v_u8mf4x7_m(vbool32_t mask, uint8_t *base, vuint16mf2_t bindex, vuint8mf4x7_t v_tuple, size_t vl) {
  return __riscv_vsuxseg7ei16_v_u8mf4x7_m(mask, base, bindex, v_tuple, vl);
}

void test_vsuxseg7ei16_v_u8mf2x7_m(vbool16_t mask, uint8_t *base, vuint16m1_t bindex, vuint8mf2x7_t v_tuple, size_t vl) {
  return __riscv_vsuxseg7ei16_v_u8mf2x7_m(mask, base, bindex, v_tuple, vl);
}

void test_vsuxseg7ei16_v_u8m1x7_m(vbool8_t mask, uint8_t *base, vuint16m2_t bindex, vuint8m1x7_t v_tuple, size_t vl) {
  return __riscv_vsuxseg7ei16_v_u8m1x7_m(mask, base, bindex, v_tuple, vl);
}

void test_vsuxseg7ei16_v_u16mf4x7_m(vbool64_t mask, uint16_t *base, vuint16mf4_t bindex, vuint16mf4x7_t v_tuple, size_t vl) {
  return __riscv_vsuxseg7ei16_v_u16mf4x7_m(mask, base, bindex, v_tuple, vl);
}

void test_vsuxseg7ei16_v_u16mf2x7_m(vbool32_t mask, uint16_t *base, vuint16mf2_t bindex, vuint16mf2x7_t v_tuple, size_t vl) {
  return __riscv_vsuxseg7ei16_v_u16mf2x7_m(mask, base, bindex, v_tuple, vl);
}

void test_vsuxseg7ei16_v_u16m1x7_m(vbool16_t mask, uint16_t *base, vuint16m1_t bindex, vuint16m1x7_t v_tuple, size_t vl) {
  return __riscv_vsuxseg7ei16_v_u16m1x7_m(mask, base, bindex, v_tuple, vl);
}

void test_vsuxseg7ei16_v_u32mf2x7_m(vbool64_t mask, uint32_t *base, vuint16mf4_t bindex, vuint32mf2x7_t v_tuple, size_t vl) {
  return __riscv_vsuxseg7ei16_v_u32mf2x7_m(mask, base, bindex, v_tuple, vl);
}

void test_vsuxseg7ei16_v_u32m1x7_m(vbool32_t mask, uint32_t *base, vuint16mf2_t bindex, vuint32m1x7_t v_tuple, size_t vl) {
  return __riscv_vsuxseg7ei16_v_u32m1x7_m(mask, base, bindex, v_tuple, vl);
}

void test_vsuxseg7ei16_v_u64m1x7_m(vbool64_t mask, uint64_t *base, vuint16mf4_t bindex, vuint64m1x7_t v_tuple, size_t vl) {
  return __riscv_vsuxseg7ei16_v_u64m1x7_m(mask, base, bindex, v_tuple, vl);
}

/* { dg-final { scan-assembler-times {vseti?vli\s+[a-z0-9]+,\s*[a-z0-9]+,\s*e[0-9]+,\s*mf?[1248],\s*t[au],\s*m[au]\s+vsuxseg7ei16\.[ivxfswum.]+\s+} 40 } } */
