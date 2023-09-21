/* { dg-do compile } */
/* { dg-options "-march=rv64gcv_zvfh -mabi=lp64d -Wno-psabi -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
void test_vssseg4e8_v_i8mf8x4(int8_t *base, ptrdiff_t bstride, vint8mf8x4_t v_tuple, size_t vl) {
  return __riscv_vssseg4e8_v_i8mf8x4(base, bstride, v_tuple, vl);
}

void test_vssseg4e8_v_i8mf4x4(int8_t *base, ptrdiff_t bstride, vint8mf4x4_t v_tuple, size_t vl) {
  return __riscv_vssseg4e8_v_i8mf4x4(base, bstride, v_tuple, vl);
}

void test_vssseg4e8_v_i8mf2x4(int8_t *base, ptrdiff_t bstride, vint8mf2x4_t v_tuple, size_t vl) {
  return __riscv_vssseg4e8_v_i8mf2x4(base, bstride, v_tuple, vl);
}

void test_vssseg4e8_v_i8m1x4(int8_t *base, ptrdiff_t bstride, vint8m1x4_t v_tuple, size_t vl) {
  return __riscv_vssseg4e8_v_i8m1x4(base, bstride, v_tuple, vl);
}

void test_vssseg4e8_v_i8m2x4(int8_t *base, ptrdiff_t bstride, vint8m2x4_t v_tuple, size_t vl) {
  return __riscv_vssseg4e8_v_i8m2x4(base, bstride, v_tuple, vl);
}

void test_vssseg4e8_v_u8mf8x4(uint8_t *base, ptrdiff_t bstride, vuint8mf8x4_t v_tuple, size_t vl) {
  return __riscv_vssseg4e8_v_u8mf8x4(base, bstride, v_tuple, vl);
}

void test_vssseg4e8_v_u8mf4x4(uint8_t *base, ptrdiff_t bstride, vuint8mf4x4_t v_tuple, size_t vl) {
  return __riscv_vssseg4e8_v_u8mf4x4(base, bstride, v_tuple, vl);
}

void test_vssseg4e8_v_u8mf2x4(uint8_t *base, ptrdiff_t bstride, vuint8mf2x4_t v_tuple, size_t vl) {
  return __riscv_vssseg4e8_v_u8mf2x4(base, bstride, v_tuple, vl);
}

void test_vssseg4e8_v_u8m1x4(uint8_t *base, ptrdiff_t bstride, vuint8m1x4_t v_tuple, size_t vl) {
  return __riscv_vssseg4e8_v_u8m1x4(base, bstride, v_tuple, vl);
}

void test_vssseg4e8_v_u8m2x4(uint8_t *base, ptrdiff_t bstride, vuint8m2x4_t v_tuple, size_t vl) {
  return __riscv_vssseg4e8_v_u8m2x4(base, bstride, v_tuple, vl);
}

void test_vssseg4e8_v_i8mf8x4_m(vbool64_t mask, int8_t *base, ptrdiff_t bstride, vint8mf8x4_t v_tuple, size_t vl) {
  return __riscv_vssseg4e8_v_i8mf8x4_m(mask, base, bstride, v_tuple, vl);
}

void test_vssseg4e8_v_i8mf4x4_m(vbool32_t mask, int8_t *base, ptrdiff_t bstride, vint8mf4x4_t v_tuple, size_t vl) {
  return __riscv_vssseg4e8_v_i8mf4x4_m(mask, base, bstride, v_tuple, vl);
}

void test_vssseg4e8_v_i8mf2x4_m(vbool16_t mask, int8_t *base, ptrdiff_t bstride, vint8mf2x4_t v_tuple, size_t vl) {
  return __riscv_vssseg4e8_v_i8mf2x4_m(mask, base, bstride, v_tuple, vl);
}

void test_vssseg4e8_v_i8m1x4_m(vbool8_t mask, int8_t *base, ptrdiff_t bstride, vint8m1x4_t v_tuple, size_t vl) {
  return __riscv_vssseg4e8_v_i8m1x4_m(mask, base, bstride, v_tuple, vl);
}

void test_vssseg4e8_v_i8m2x4_m(vbool4_t mask, int8_t *base, ptrdiff_t bstride, vint8m2x4_t v_tuple, size_t vl) {
  return __riscv_vssseg4e8_v_i8m2x4_m(mask, base, bstride, v_tuple, vl);
}

void test_vssseg4e8_v_u8mf8x4_m(vbool64_t mask, uint8_t *base, ptrdiff_t bstride, vuint8mf8x4_t v_tuple, size_t vl) {
  return __riscv_vssseg4e8_v_u8mf8x4_m(mask, base, bstride, v_tuple, vl);
}

void test_vssseg4e8_v_u8mf4x4_m(vbool32_t mask, uint8_t *base, ptrdiff_t bstride, vuint8mf4x4_t v_tuple, size_t vl) {
  return __riscv_vssseg4e8_v_u8mf4x4_m(mask, base, bstride, v_tuple, vl);
}

void test_vssseg4e8_v_u8mf2x4_m(vbool16_t mask, uint8_t *base, ptrdiff_t bstride, vuint8mf2x4_t v_tuple, size_t vl) {
  return __riscv_vssseg4e8_v_u8mf2x4_m(mask, base, bstride, v_tuple, vl);
}

void test_vssseg4e8_v_u8m1x4_m(vbool8_t mask, uint8_t *base, ptrdiff_t bstride, vuint8m1x4_t v_tuple, size_t vl) {
  return __riscv_vssseg4e8_v_u8m1x4_m(mask, base, bstride, v_tuple, vl);
}

void test_vssseg4e8_v_u8m2x4_m(vbool4_t mask, uint8_t *base, ptrdiff_t bstride, vuint8m2x4_t v_tuple, size_t vl) {
  return __riscv_vssseg4e8_v_u8m2x4_m(mask, base, bstride, v_tuple, vl);
}

