/* { dg-do compile } */
/* { dg-options "-march=rv32gc_zve64x -mabi=ilp32d -Wno-psabi -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include "riscv_vector.h"

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
void test_vssseg3e8_v_i8mf8x3(int8_t *base, ptrdiff_t bstride, vint8mf8x3_t v_tuple, size_t vl) {
  return __riscv_vssseg3e8(base, bstride, v_tuple, vl);
}

void test_vssseg3e8_v_i8mf4x3(int8_t *base, ptrdiff_t bstride, vint8mf4x3_t v_tuple, size_t vl) {
  return __riscv_vssseg3e8(base, bstride, v_tuple, vl);
}

void test_vssseg3e8_v_i8mf2x3(int8_t *base, ptrdiff_t bstride, vint8mf2x3_t v_tuple, size_t vl) {
  return __riscv_vssseg3e8(base, bstride, v_tuple, vl);
}

void test_vssseg3e8_v_i8m1x3(int8_t *base, ptrdiff_t bstride, vint8m1x3_t v_tuple, size_t vl) {
  return __riscv_vssseg3e8(base, bstride, v_tuple, vl);
}

void test_vssseg3e8_v_i8m2x3(int8_t *base, ptrdiff_t bstride, vint8m2x3_t v_tuple, size_t vl) {
  return __riscv_vssseg3e8(base, bstride, v_tuple, vl);
}

void test_vssseg3e8_v_u8mf8x3(uint8_t *base, ptrdiff_t bstride, vuint8mf8x3_t v_tuple, size_t vl) {
  return __riscv_vssseg3e8(base, bstride, v_tuple, vl);
}

void test_vssseg3e8_v_u8mf4x3(uint8_t *base, ptrdiff_t bstride, vuint8mf4x3_t v_tuple, size_t vl) {
  return __riscv_vssseg3e8(base, bstride, v_tuple, vl);
}

void test_vssseg3e8_v_u8mf2x3(uint8_t *base, ptrdiff_t bstride, vuint8mf2x3_t v_tuple, size_t vl) {
  return __riscv_vssseg3e8(base, bstride, v_tuple, vl);
}

void test_vssseg3e8_v_u8m1x3(uint8_t *base, ptrdiff_t bstride, vuint8m1x3_t v_tuple, size_t vl) {
  return __riscv_vssseg3e8(base, bstride, v_tuple, vl);
}

void test_vssseg3e8_v_u8m2x3(uint8_t *base, ptrdiff_t bstride, vuint8m2x3_t v_tuple, size_t vl) {
  return __riscv_vssseg3e8(base, bstride, v_tuple, vl);
}

void test_vssseg3e8_v_i8mf8x3_m(vbool64_t mask, int8_t *base, ptrdiff_t bstride, vint8mf8x3_t v_tuple, size_t vl) {
  return __riscv_vssseg3e8(mask, base, bstride, v_tuple, vl);
}

void test_vssseg3e8_v_i8mf4x3_m(vbool32_t mask, int8_t *base, ptrdiff_t bstride, vint8mf4x3_t v_tuple, size_t vl) {
  return __riscv_vssseg3e8(mask, base, bstride, v_tuple, vl);
}

void test_vssseg3e8_v_i8mf2x3_m(vbool16_t mask, int8_t *base, ptrdiff_t bstride, vint8mf2x3_t v_tuple, size_t vl) {
  return __riscv_vssseg3e8(mask, base, bstride, v_tuple, vl);
}

void test_vssseg3e8_v_i8m1x3_m(vbool8_t mask, int8_t *base, ptrdiff_t bstride, vint8m1x3_t v_tuple, size_t vl) {
  return __riscv_vssseg3e8(mask, base, bstride, v_tuple, vl);
}

void test_vssseg3e8_v_i8m2x3_m(vbool4_t mask, int8_t *base, ptrdiff_t bstride, vint8m2x3_t v_tuple, size_t vl) {
  return __riscv_vssseg3e8(mask, base, bstride, v_tuple, vl);
}

void test_vssseg3e8_v_u8mf8x3_m(vbool64_t mask, uint8_t *base, ptrdiff_t bstride, vuint8mf8x3_t v_tuple, size_t vl) {
  return __riscv_vssseg3e8(mask, base, bstride, v_tuple, vl);
}

void test_vssseg3e8_v_u8mf4x3_m(vbool32_t mask, uint8_t *base, ptrdiff_t bstride, vuint8mf4x3_t v_tuple, size_t vl) {
  return __riscv_vssseg3e8(mask, base, bstride, v_tuple, vl);
}

void test_vssseg3e8_v_u8mf2x3_m(vbool16_t mask, uint8_t *base, ptrdiff_t bstride, vuint8mf2x3_t v_tuple, size_t vl) {
  return __riscv_vssseg3e8(mask, base, bstride, v_tuple, vl);
}

void test_vssseg3e8_v_u8m1x3_m(vbool8_t mask, uint8_t *base, ptrdiff_t bstride, vuint8m1x3_t v_tuple, size_t vl) {
  return __riscv_vssseg3e8(mask, base, bstride, v_tuple, vl);
}

void test_vssseg3e8_v_u8m2x3_m(vbool4_t mask, uint8_t *base, ptrdiff_t bstride, vuint8m2x3_t v_tuple, size_t vl) {
  return __riscv_vssseg3e8(mask, base, bstride, v_tuple, vl);
}

/* { dg-final { scan-assembler-times {vseti?vli\s+[a-z0-9]+,\s*[a-z0-9]+,\s*e[0-9]+,\s*mf?[1248],\s*t[au],\s*m[au]\s+vssseg3e8\.[ivxfswum.]+\s+} 20 } } */
