/* { dg-do compile } */
/* { dg-options "-march=rv64gc_zve64d -mabi=lp64d -Wno-psabi -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include "riscv_vector.h"

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
void test_vsuxseg5ei8_v_f32mf2x5(float32_t *base, vuint8mf8_t bindex, vfloat32mf2x5_t v_tuple, size_t vl) {
  return __riscv_vsuxseg5ei8_v_f32mf2x5(base, bindex, v_tuple, vl);
}

void test_vsuxseg5ei8_v_f32m1x5(float32_t *base, vuint8mf4_t bindex, vfloat32m1x5_t v_tuple, size_t vl) {
  return __riscv_vsuxseg5ei8_v_f32m1x5(base, bindex, v_tuple, vl);
}

void test_vsuxseg5ei8_v_f64m1x5(float64_t *base, vuint8mf8_t bindex, vfloat64m1x5_t v_tuple, size_t vl) {
  return __riscv_vsuxseg5ei8_v_f64m1x5(base, bindex, v_tuple, vl);
}

void test_vsuxseg5ei8_v_i8mf8x5(int8_t *base, vuint8mf8_t bindex, vint8mf8x5_t v_tuple, size_t vl) {
  return __riscv_vsuxseg5ei8_v_i8mf8x5(base, bindex, v_tuple, vl);
}

void test_vsuxseg5ei8_v_i8mf4x5(int8_t *base, vuint8mf4_t bindex, vint8mf4x5_t v_tuple, size_t vl) {
  return __riscv_vsuxseg5ei8_v_i8mf4x5(base, bindex, v_tuple, vl);
}

void test_vsuxseg5ei8_v_i8mf2x5(int8_t *base, vuint8mf2_t bindex, vint8mf2x5_t v_tuple, size_t vl) {
  return __riscv_vsuxseg5ei8_v_i8mf2x5(base, bindex, v_tuple, vl);
}

void test_vsuxseg5ei8_v_i8m1x5(int8_t *base, vuint8m1_t bindex, vint8m1x5_t v_tuple, size_t vl) {
  return __riscv_vsuxseg5ei8_v_i8m1x5(base, bindex, v_tuple, vl);
}

void test_vsuxseg5ei8_v_i16mf4x5(int16_t *base, vuint8mf8_t bindex, vint16mf4x5_t v_tuple, size_t vl) {
  return __riscv_vsuxseg5ei8_v_i16mf4x5(base, bindex, v_tuple, vl);
}

void test_vsuxseg5ei8_v_i16mf2x5(int16_t *base, vuint8mf4_t bindex, vint16mf2x5_t v_tuple, size_t vl) {
  return __riscv_vsuxseg5ei8_v_i16mf2x5(base, bindex, v_tuple, vl);
}

void test_vsuxseg5ei8_v_i16m1x5(int16_t *base, vuint8mf2_t bindex, vint16m1x5_t v_tuple, size_t vl) {
  return __riscv_vsuxseg5ei8_v_i16m1x5(base, bindex, v_tuple, vl);
}

void test_vsuxseg5ei8_v_i32mf2x5(int32_t *base, vuint8mf8_t bindex, vint32mf2x5_t v_tuple, size_t vl) {
  return __riscv_vsuxseg5ei8_v_i32mf2x5(base, bindex, v_tuple, vl);
}

void test_vsuxseg5ei8_v_i32m1x5(int32_t *base, vuint8mf4_t bindex, vint32m1x5_t v_tuple, size_t vl) {
  return __riscv_vsuxseg5ei8_v_i32m1x5(base, bindex, v_tuple, vl);
}

void test_vsuxseg5ei8_v_i64m1x5(int64_t *base, vuint8mf8_t bindex, vint64m1x5_t v_tuple, size_t vl) {
  return __riscv_vsuxseg5ei8_v_i64m1x5(base, bindex, v_tuple, vl);
}

void test_vsuxseg5ei8_v_u8mf8x5(uint8_t *base, vuint8mf8_t bindex, vuint8mf8x5_t v_tuple, size_t vl) {
  return __riscv_vsuxseg5ei8_v_u8mf8x5(base, bindex, v_tuple, vl);
}

void test_vsuxseg5ei8_v_u8mf4x5(uint8_t *base, vuint8mf4_t bindex, vuint8mf4x5_t v_tuple, size_t vl) {
  return __riscv_vsuxseg5ei8_v_u8mf4x5(base, bindex, v_tuple, vl);
}

void test_vsuxseg5ei8_v_u8mf2x5(uint8_t *base, vuint8mf2_t bindex, vuint8mf2x5_t v_tuple, size_t vl) {
  return __riscv_vsuxseg5ei8_v_u8mf2x5(base, bindex, v_tuple, vl);
}

void test_vsuxseg5ei8_v_u8m1x5(uint8_t *base, vuint8m1_t bindex, vuint8m1x5_t v_tuple, size_t vl) {
  return __riscv_vsuxseg5ei8_v_u8m1x5(base, bindex, v_tuple, vl);
}

void test_vsuxseg5ei8_v_u16mf4x5(uint16_t *base, vuint8mf8_t bindex, vuint16mf4x5_t v_tuple, size_t vl) {
  return __riscv_vsuxseg5ei8_v_u16mf4x5(base, bindex, v_tuple, vl);
}

void test_vsuxseg5ei8_v_u16mf2x5(uint16_t *base, vuint8mf4_t bindex, vuint16mf2x5_t v_tuple, size_t vl) {
  return __riscv_vsuxseg5ei8_v_u16mf2x5(base, bindex, v_tuple, vl);
}

void test_vsuxseg5ei8_v_u16m1x5(uint16_t *base, vuint8mf2_t bindex, vuint16m1x5_t v_tuple, size_t vl) {
  return __riscv_vsuxseg5ei8_v_u16m1x5(base, bindex, v_tuple, vl);
}

void test_vsuxseg5ei8_v_u32mf2x5(uint32_t *base, vuint8mf8_t bindex, vuint32mf2x5_t v_tuple, size_t vl) {
  return __riscv_vsuxseg5ei8_v_u32mf2x5(base, bindex, v_tuple, vl);
}

void test_vsuxseg5ei8_v_u32m1x5(uint32_t *base, vuint8mf4_t bindex, vuint32m1x5_t v_tuple, size_t vl) {
  return __riscv_vsuxseg5ei8_v_u32m1x5(base, bindex, v_tuple, vl);
}

void test_vsuxseg5ei8_v_u64m1x5(uint64_t *base, vuint8mf8_t bindex, vuint64m1x5_t v_tuple, size_t vl) {
  return __riscv_vsuxseg5ei8_v_u64m1x5(base, bindex, v_tuple, vl);
}

void test_vsuxseg5ei8_v_f32mf2x5_m(vbool64_t mask, float32_t *base, vuint8mf8_t bindex, vfloat32mf2x5_t v_tuple, size_t vl) {
  return __riscv_vsuxseg5ei8_v_f32mf2x5_m(mask, base, bindex, v_tuple, vl);
}

void test_vsuxseg5ei8_v_f32m1x5_m(vbool32_t mask, float32_t *base, vuint8mf4_t bindex, vfloat32m1x5_t v_tuple, size_t vl) {
  return __riscv_vsuxseg5ei8_v_f32m1x5_m(mask, base, bindex, v_tuple, vl);
}

void test_vsuxseg5ei8_v_f64m1x5_m(vbool64_t mask, float64_t *base, vuint8mf8_t bindex, vfloat64m1x5_t v_tuple, size_t vl) {
  return __riscv_vsuxseg5ei8_v_f64m1x5_m(mask, base, bindex, v_tuple, vl);
}

void test_vsuxseg5ei8_v_i8mf8x5_m(vbool64_t mask, int8_t *base, vuint8mf8_t bindex, vint8mf8x5_t v_tuple, size_t vl) {
  return __riscv_vsuxseg5ei8_v_i8mf8x5_m(mask, base, bindex, v_tuple, vl);
}

void test_vsuxseg5ei8_v_i8mf4x5_m(vbool32_t mask, int8_t *base, vuint8mf4_t bindex, vint8mf4x5_t v_tuple, size_t vl) {
  return __riscv_vsuxseg5ei8_v_i8mf4x5_m(mask, base, bindex, v_tuple, vl);
}

void test_vsuxseg5ei8_v_i8mf2x5_m(vbool16_t mask, int8_t *base, vuint8mf2_t bindex, vint8mf2x5_t v_tuple, size_t vl) {
  return __riscv_vsuxseg5ei8_v_i8mf2x5_m(mask, base, bindex, v_tuple, vl);
}

void test_vsuxseg5ei8_v_i8m1x5_m(vbool8_t mask, int8_t *base, vuint8m1_t bindex, vint8m1x5_t v_tuple, size_t vl) {
  return __riscv_vsuxseg5ei8_v_i8m1x5_m(mask, base, bindex, v_tuple, vl);
}

void test_vsuxseg5ei8_v_i16mf4x5_m(vbool64_t mask, int16_t *base, vuint8mf8_t bindex, vint16mf4x5_t v_tuple, size_t vl) {
  return __riscv_vsuxseg5ei8_v_i16mf4x5_m(mask, base, bindex, v_tuple, vl);
}

void test_vsuxseg5ei8_v_i16mf2x5_m(vbool32_t mask, int16_t *base, vuint8mf4_t bindex, vint16mf2x5_t v_tuple, size_t vl) {
  return __riscv_vsuxseg5ei8_v_i16mf2x5_m(mask, base, bindex, v_tuple, vl);
}

void test_vsuxseg5ei8_v_i16m1x5_m(vbool16_t mask, int16_t *base, vuint8mf2_t bindex, vint16m1x5_t v_tuple, size_t vl) {
  return __riscv_vsuxseg5ei8_v_i16m1x5_m(mask, base, bindex, v_tuple, vl);
}

void test_vsuxseg5ei8_v_i32mf2x5_m(vbool64_t mask, int32_t *base, vuint8mf8_t bindex, vint32mf2x5_t v_tuple, size_t vl) {
  return __riscv_vsuxseg5ei8_v_i32mf2x5_m(mask, base, bindex, v_tuple, vl);
}

void test_vsuxseg5ei8_v_i32m1x5_m(vbool32_t mask, int32_t *base, vuint8mf4_t bindex, vint32m1x5_t v_tuple, size_t vl) {
  return __riscv_vsuxseg5ei8_v_i32m1x5_m(mask, base, bindex, v_tuple, vl);
}

void test_vsuxseg5ei8_v_i64m1x5_m(vbool64_t mask, int64_t *base, vuint8mf8_t bindex, vint64m1x5_t v_tuple, size_t vl) {
  return __riscv_vsuxseg5ei8_v_i64m1x5_m(mask, base, bindex, v_tuple, vl);
}

void test_vsuxseg5ei8_v_u8mf8x5_m(vbool64_t mask, uint8_t *base, vuint8mf8_t bindex, vuint8mf8x5_t v_tuple, size_t vl) {
  return __riscv_vsuxseg5ei8_v_u8mf8x5_m(mask, base, bindex, v_tuple, vl);
}

void test_vsuxseg5ei8_v_u8mf4x5_m(vbool32_t mask, uint8_t *base, vuint8mf4_t bindex, vuint8mf4x5_t v_tuple, size_t vl) {
  return __riscv_vsuxseg5ei8_v_u8mf4x5_m(mask, base, bindex, v_tuple, vl);
}

void test_vsuxseg5ei8_v_u8mf2x5_m(vbool16_t mask, uint8_t *base, vuint8mf2_t bindex, vuint8mf2x5_t v_tuple, size_t vl) {
  return __riscv_vsuxseg5ei8_v_u8mf2x5_m(mask, base, bindex, v_tuple, vl);
}

void test_vsuxseg5ei8_v_u8m1x5_m(vbool8_t mask, uint8_t *base, vuint8m1_t bindex, vuint8m1x5_t v_tuple, size_t vl) {
  return __riscv_vsuxseg5ei8_v_u8m1x5_m(mask, base, bindex, v_tuple, vl);
}

void test_vsuxseg5ei8_v_u16mf4x5_m(vbool64_t mask, uint16_t *base, vuint8mf8_t bindex, vuint16mf4x5_t v_tuple, size_t vl) {
  return __riscv_vsuxseg5ei8_v_u16mf4x5_m(mask, base, bindex, v_tuple, vl);
}

void test_vsuxseg5ei8_v_u16mf2x5_m(vbool32_t mask, uint16_t *base, vuint8mf4_t bindex, vuint16mf2x5_t v_tuple, size_t vl) {
  return __riscv_vsuxseg5ei8_v_u16mf2x5_m(mask, base, bindex, v_tuple, vl);
}

void test_vsuxseg5ei8_v_u16m1x5_m(vbool16_t mask, uint16_t *base, vuint8mf2_t bindex, vuint16m1x5_t v_tuple, size_t vl) {
  return __riscv_vsuxseg5ei8_v_u16m1x5_m(mask, base, bindex, v_tuple, vl);
}

void test_vsuxseg5ei8_v_u32mf2x5_m(vbool64_t mask, uint32_t *base, vuint8mf8_t bindex, vuint32mf2x5_t v_tuple, size_t vl) {
  return __riscv_vsuxseg5ei8_v_u32mf2x5_m(mask, base, bindex, v_tuple, vl);
}

void test_vsuxseg5ei8_v_u32m1x5_m(vbool32_t mask, uint32_t *base, vuint8mf4_t bindex, vuint32m1x5_t v_tuple, size_t vl) {
  return __riscv_vsuxseg5ei8_v_u32m1x5_m(mask, base, bindex, v_tuple, vl);
}

void test_vsuxseg5ei8_v_u64m1x5_m(vbool64_t mask, uint64_t *base, vuint8mf8_t bindex, vuint64m1x5_t v_tuple, size_t vl) {
  return __riscv_vsuxseg5ei8_v_u64m1x5_m(mask, base, bindex, v_tuple, vl);
}

/* { dg-final { scan-assembler-times {vseti?vli\s+[a-z0-9]+,\s*[a-z0-9]+,\s*e[0-9]+,\s*mf?[1248],\s*t[au],\s*m[au]\s+vsuxseg5ei8\.[ivxfswum.]+\s+} 46 } } */
