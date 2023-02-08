#include <stdint.h>
#include "rvv-v0p10-compatible-headers/non-policy.h"
#include "rvv-v0p10-compatible-headers/policy.h"
#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
void test_vssseg4e8_v_i8mf8(int8_t *base, ptrdiff_t bstride, vint8mf8_t v0, vint8mf8_t v1, vint8mf8_t v2, vint8mf8_t v3, size_t vl) {
  return vssseg4e8_v_i8mf8(base, bstride, v0, v1, v2, v3, vl);
}

void test_vssseg4e8_v_i8mf4(int8_t *base, ptrdiff_t bstride, vint8mf4_t v0, vint8mf4_t v1, vint8mf4_t v2, vint8mf4_t v3, size_t vl) {
  return vssseg4e8_v_i8mf4(base, bstride, v0, v1, v2, v3, vl);
}

void test_vssseg4e8_v_i8mf2(int8_t *base, ptrdiff_t bstride, vint8mf2_t v0, vint8mf2_t v1, vint8mf2_t v2, vint8mf2_t v3, size_t vl) {
  return vssseg4e8_v_i8mf2(base, bstride, v0, v1, v2, v3, vl);
}

void test_vssseg4e8_v_i8m1(int8_t *base, ptrdiff_t bstride, vint8m1_t v0, vint8m1_t v1, vint8m1_t v2, vint8m1_t v3, size_t vl) {
  return vssseg4e8_v_i8m1(base, bstride, v0, v1, v2, v3, vl);
}

void test_vssseg4e8_v_i8m2(int8_t *base, ptrdiff_t bstride, vint8m2_t v0, vint8m2_t v1, vint8m2_t v2, vint8m2_t v3, size_t vl) {
  return vssseg4e8_v_i8m2(base, bstride, v0, v1, v2, v3, vl);
}

void test_vssseg4e8_v_u8mf8(uint8_t *base, ptrdiff_t bstride, vuint8mf8_t v0, vuint8mf8_t v1, vuint8mf8_t v2, vuint8mf8_t v3, size_t vl) {
  return vssseg4e8_v_u8mf8(base, bstride, v0, v1, v2, v3, vl);
}

void test_vssseg4e8_v_u8mf4(uint8_t *base, ptrdiff_t bstride, vuint8mf4_t v0, vuint8mf4_t v1, vuint8mf4_t v2, vuint8mf4_t v3, size_t vl) {
  return vssseg4e8_v_u8mf4(base, bstride, v0, v1, v2, v3, vl);
}

void test_vssseg4e8_v_u8mf2(uint8_t *base, ptrdiff_t bstride, vuint8mf2_t v0, vuint8mf2_t v1, vuint8mf2_t v2, vuint8mf2_t v3, size_t vl) {
  return vssseg4e8_v_u8mf2(base, bstride, v0, v1, v2, v3, vl);
}

void test_vssseg4e8_v_u8m1(uint8_t *base, ptrdiff_t bstride, vuint8m1_t v0, vuint8m1_t v1, vuint8m1_t v2, vuint8m1_t v3, size_t vl) {
  return vssseg4e8_v_u8m1(base, bstride, v0, v1, v2, v3, vl);
}

void test_vssseg4e8_v_u8m2(uint8_t *base, ptrdiff_t bstride, vuint8m2_t v0, vuint8m2_t v1, vuint8m2_t v2, vuint8m2_t v3, size_t vl) {
  return vssseg4e8_v_u8m2(base, bstride, v0, v1, v2, v3, vl);
}

void test_vssseg4e8_v_i8mf8_m(vbool64_t mask, int8_t *base, ptrdiff_t bstride, vint8mf8_t v0, vint8mf8_t v1, vint8mf8_t v2, vint8mf8_t v3, size_t vl) {
  return vssseg4e8_v_i8mf8_m(mask, base, bstride, v0, v1, v2, v3, vl);
}

void test_vssseg4e8_v_i8mf4_m(vbool32_t mask, int8_t *base, ptrdiff_t bstride, vint8mf4_t v0, vint8mf4_t v1, vint8mf4_t v2, vint8mf4_t v3, size_t vl) {
  return vssseg4e8_v_i8mf4_m(mask, base, bstride, v0, v1, v2, v3, vl);
}

void test_vssseg4e8_v_i8mf2_m(vbool16_t mask, int8_t *base, ptrdiff_t bstride, vint8mf2_t v0, vint8mf2_t v1, vint8mf2_t v2, vint8mf2_t v3, size_t vl) {
  return vssseg4e8_v_i8mf2_m(mask, base, bstride, v0, v1, v2, v3, vl);
}

void test_vssseg4e8_v_i8m1_m(vbool8_t mask, int8_t *base, ptrdiff_t bstride, vint8m1_t v0, vint8m1_t v1, vint8m1_t v2, vint8m1_t v3, size_t vl) {
  return vssseg4e8_v_i8m1_m(mask, base, bstride, v0, v1, v2, v3, vl);
}

void test_vssseg4e8_v_i8m2_m(vbool4_t mask, int8_t *base, ptrdiff_t bstride, vint8m2_t v0, vint8m2_t v1, vint8m2_t v2, vint8m2_t v3, size_t vl) {
  return vssseg4e8_v_i8m2_m(mask, base, bstride, v0, v1, v2, v3, vl);
}

void test_vssseg4e8_v_u8mf8_m(vbool64_t mask, uint8_t *base, ptrdiff_t bstride, vuint8mf8_t v0, vuint8mf8_t v1, vuint8mf8_t v2, vuint8mf8_t v3, size_t vl) {
  return vssseg4e8_v_u8mf8_m(mask, base, bstride, v0, v1, v2, v3, vl);
}

void test_vssseg4e8_v_u8mf4_m(vbool32_t mask, uint8_t *base, ptrdiff_t bstride, vuint8mf4_t v0, vuint8mf4_t v1, vuint8mf4_t v2, vuint8mf4_t v3, size_t vl) {
  return vssseg4e8_v_u8mf4_m(mask, base, bstride, v0, v1, v2, v3, vl);
}

void test_vssseg4e8_v_u8mf2_m(vbool16_t mask, uint8_t *base, ptrdiff_t bstride, vuint8mf2_t v0, vuint8mf2_t v1, vuint8mf2_t v2, vuint8mf2_t v3, size_t vl) {
  return vssseg4e8_v_u8mf2_m(mask, base, bstride, v0, v1, v2, v3, vl);
}

void test_vssseg4e8_v_u8m1_m(vbool8_t mask, uint8_t *base, ptrdiff_t bstride, vuint8m1_t v0, vuint8m1_t v1, vuint8m1_t v2, vuint8m1_t v3, size_t vl) {
  return vssseg4e8_v_u8m1_m(mask, base, bstride, v0, v1, v2, v3, vl);
}

void test_vssseg4e8_v_u8m2_m(vbool4_t mask, uint8_t *base, ptrdiff_t bstride, vuint8m2_t v0, vuint8m2_t v1, vuint8m2_t v2, vuint8m2_t v3, size_t vl) {
  return vssseg4e8_v_u8m2_m(mask, base, bstride, v0, v1, v2, v3, vl);
}

