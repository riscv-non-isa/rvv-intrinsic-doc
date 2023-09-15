/* { dg-do compile } */
/* { dg-options "-march=rv64gcv -mabi=lp64d -Wno-psabi -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include "riscv_vector.h"

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
void test_vssseg5e8_v_i8mf8x5(int8_t *base, ptrdiff_t bstride, vint8mf8x5_t v_tuple, size_t vl) {
  return __riscv_vssseg5e8(base, bstride, v_tuple, vl);
}

void test_vssseg5e8_v_i8mf4x5(int8_t *base, ptrdiff_t bstride, vint8mf4x5_t v_tuple, size_t vl) {
  return __riscv_vssseg5e8(base, bstride, v_tuple, vl);
}

void test_vssseg5e8_v_i8mf2x5(int8_t *base, ptrdiff_t bstride, vint8mf2x5_t v_tuple, size_t vl) {
  return __riscv_vssseg5e8(base, bstride, v_tuple, vl);
}

void test_vssseg5e8_v_i8m1x5(int8_t *base, ptrdiff_t bstride, vint8m1x5_t v_tuple, size_t vl) {
  return __riscv_vssseg5e8(base, bstride, v_tuple, vl);
}

void test_vssseg5e8_v_u8mf8x5(uint8_t *base, ptrdiff_t bstride, vuint8mf8x5_t v_tuple, size_t vl) {
  return __riscv_vssseg5e8(base, bstride, v_tuple, vl);
}

void test_vssseg5e8_v_u8mf4x5(uint8_t *base, ptrdiff_t bstride, vuint8mf4x5_t v_tuple, size_t vl) {
  return __riscv_vssseg5e8(base, bstride, v_tuple, vl);
}

void test_vssseg5e8_v_u8mf2x5(uint8_t *base, ptrdiff_t bstride, vuint8mf2x5_t v_tuple, size_t vl) {
  return __riscv_vssseg5e8(base, bstride, v_tuple, vl);
}

void test_vssseg5e8_v_u8m1x5(uint8_t *base, ptrdiff_t bstride, vuint8m1x5_t v_tuple, size_t vl) {
  return __riscv_vssseg5e8(base, bstride, v_tuple, vl);
}

void test_vssseg5e8_v_i8mf8x5_m(vbool64_t mask, int8_t *base, ptrdiff_t bstride, vint8mf8x5_t v_tuple, size_t vl) {
  return __riscv_vssseg5e8(mask, base, bstride, v_tuple, vl);
}

void test_vssseg5e8_v_i8mf4x5_m(vbool32_t mask, int8_t *base, ptrdiff_t bstride, vint8mf4x5_t v_tuple, size_t vl) {
  return __riscv_vssseg5e8(mask, base, bstride, v_tuple, vl);
}

void test_vssseg5e8_v_i8mf2x5_m(vbool16_t mask, int8_t *base, ptrdiff_t bstride, vint8mf2x5_t v_tuple, size_t vl) {
  return __riscv_vssseg5e8(mask, base, bstride, v_tuple, vl);
}

void test_vssseg5e8_v_i8m1x5_m(vbool8_t mask, int8_t *base, ptrdiff_t bstride, vint8m1x5_t v_tuple, size_t vl) {
  return __riscv_vssseg5e8(mask, base, bstride, v_tuple, vl);
}

void test_vssseg5e8_v_u8mf8x5_m(vbool64_t mask, uint8_t *base, ptrdiff_t bstride, vuint8mf8x5_t v_tuple, size_t vl) {
  return __riscv_vssseg5e8(mask, base, bstride, v_tuple, vl);
}

void test_vssseg5e8_v_u8mf4x5_m(vbool32_t mask, uint8_t *base, ptrdiff_t bstride, vuint8mf4x5_t v_tuple, size_t vl) {
  return __riscv_vssseg5e8(mask, base, bstride, v_tuple, vl);
}

void test_vssseg5e8_v_u8mf2x5_m(vbool16_t mask, uint8_t *base, ptrdiff_t bstride, vuint8mf2x5_t v_tuple, size_t vl) {
  return __riscv_vssseg5e8(mask, base, bstride, v_tuple, vl);
}

void test_vssseg5e8_v_u8m1x5_m(vbool8_t mask, uint8_t *base, ptrdiff_t bstride, vuint8m1x5_t v_tuple, size_t vl) {
  return __riscv_vssseg5e8(mask, base, bstride, v_tuple, vl);
}

/* { dg-final { scan-assembler-times {vseti?vli\s+[a-z0-9]+,\s*[a-z0-9]+,\s*e[0-9]+,\s*mf?[1248],\s*t[au],\s*m[au]\s+vssseg5e8\.[ivxfswum.]+\s+} 16 } } */
