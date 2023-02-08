#include <stdint.h>
#include "rvv-v0p10-compatible-headers/non-policy.h"
#include "rvv-v0p10-compatible-headers/policy.h"
#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
void test_vlsseg3e8_v_i8mf8(vint8mf8_t *v0, vint8mf8_t *v1, vint8mf8_t *v2, const int8_t *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg3e8_v_i8mf8(v0, v1, v2, base, bstride, vl);
}

void test_vlsseg3e8_v_i8mf4(vint8mf4_t *v0, vint8mf4_t *v1, vint8mf4_t *v2, const int8_t *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg3e8_v_i8mf4(v0, v1, v2, base, bstride, vl);
}

void test_vlsseg3e8_v_i8mf2(vint8mf2_t *v0, vint8mf2_t *v1, vint8mf2_t *v2, const int8_t *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg3e8_v_i8mf2(v0, v1, v2, base, bstride, vl);
}

void test_vlsseg3e8_v_i8m1(vint8m1_t *v0, vint8m1_t *v1, vint8m1_t *v2, const int8_t *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg3e8_v_i8m1(v0, v1, v2, base, bstride, vl);
}

void test_vlsseg3e8_v_i8m2(vint8m2_t *v0, vint8m2_t *v1, vint8m2_t *v2, const int8_t *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg3e8_v_i8m2(v0, v1, v2, base, bstride, vl);
}

void test_vlsseg3e8_v_u8mf8(vuint8mf8_t *v0, vuint8mf8_t *v1, vuint8mf8_t *v2, const uint8_t *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg3e8_v_u8mf8(v0, v1, v2, base, bstride, vl);
}

void test_vlsseg3e8_v_u8mf4(vuint8mf4_t *v0, vuint8mf4_t *v1, vuint8mf4_t *v2, const uint8_t *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg3e8_v_u8mf4(v0, v1, v2, base, bstride, vl);
}

void test_vlsseg3e8_v_u8mf2(vuint8mf2_t *v0, vuint8mf2_t *v1, vuint8mf2_t *v2, const uint8_t *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg3e8_v_u8mf2(v0, v1, v2, base, bstride, vl);
}

void test_vlsseg3e8_v_u8m1(vuint8m1_t *v0, vuint8m1_t *v1, vuint8m1_t *v2, const uint8_t *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg3e8_v_u8m1(v0, v1, v2, base, bstride, vl);
}

void test_vlsseg3e8_v_u8m2(vuint8m2_t *v0, vuint8m2_t *v1, vuint8m2_t *v2, const uint8_t *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg3e8_v_u8m2(v0, v1, v2, base, bstride, vl);
}

void test_vlsseg3e8_v_i8mf8_m(vint8mf8_t *v0, vint8mf8_t *v1, vint8mf8_t *v2, vbool64_t mask, vint8mf8_t maskedoff0, vint8mf8_t maskedoff1, vint8mf8_t maskedoff2, const int8_t *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg3e8_v_i8mf8_m(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, bstride, vl);
}

void test_vlsseg3e8_v_i8mf4_m(vint8mf4_t *v0, vint8mf4_t *v1, vint8mf4_t *v2, vbool32_t mask, vint8mf4_t maskedoff0, vint8mf4_t maskedoff1, vint8mf4_t maskedoff2, const int8_t *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg3e8_v_i8mf4_m(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, bstride, vl);
}

void test_vlsseg3e8_v_i8mf2_m(vint8mf2_t *v0, vint8mf2_t *v1, vint8mf2_t *v2, vbool16_t mask, vint8mf2_t maskedoff0, vint8mf2_t maskedoff1, vint8mf2_t maskedoff2, const int8_t *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg3e8_v_i8mf2_m(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, bstride, vl);
}

void test_vlsseg3e8_v_i8m1_m(vint8m1_t *v0, vint8m1_t *v1, vint8m1_t *v2, vbool8_t mask, vint8m1_t maskedoff0, vint8m1_t maskedoff1, vint8m1_t maskedoff2, const int8_t *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg3e8_v_i8m1_m(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, bstride, vl);
}

void test_vlsseg3e8_v_i8m2_m(vint8m2_t *v0, vint8m2_t *v1, vint8m2_t *v2, vbool4_t mask, vint8m2_t maskedoff0, vint8m2_t maskedoff1, vint8m2_t maskedoff2, const int8_t *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg3e8_v_i8m2_m(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, bstride, vl);
}

void test_vlsseg3e8_v_u8mf8_m(vuint8mf8_t *v0, vuint8mf8_t *v1, vuint8mf8_t *v2, vbool64_t mask, vuint8mf8_t maskedoff0, vuint8mf8_t maskedoff1, vuint8mf8_t maskedoff2, const uint8_t *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg3e8_v_u8mf8_m(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, bstride, vl);
}

void test_vlsseg3e8_v_u8mf4_m(vuint8mf4_t *v0, vuint8mf4_t *v1, vuint8mf4_t *v2, vbool32_t mask, vuint8mf4_t maskedoff0, vuint8mf4_t maskedoff1, vuint8mf4_t maskedoff2, const uint8_t *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg3e8_v_u8mf4_m(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, bstride, vl);
}

void test_vlsseg3e8_v_u8mf2_m(vuint8mf2_t *v0, vuint8mf2_t *v1, vuint8mf2_t *v2, vbool16_t mask, vuint8mf2_t maskedoff0, vuint8mf2_t maskedoff1, vuint8mf2_t maskedoff2, const uint8_t *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg3e8_v_u8mf2_m(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, bstride, vl);
}

void test_vlsseg3e8_v_u8m1_m(vuint8m1_t *v0, vuint8m1_t *v1, vuint8m1_t *v2, vbool8_t mask, vuint8m1_t maskedoff0, vuint8m1_t maskedoff1, vuint8m1_t maskedoff2, const uint8_t *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg3e8_v_u8m1_m(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, bstride, vl);
}

void test_vlsseg3e8_v_u8m2_m(vuint8m2_t *v0, vuint8m2_t *v1, vuint8m2_t *v2, vbool4_t mask, vuint8m2_t maskedoff0, vuint8m2_t maskedoff1, vuint8m2_t maskedoff2, const uint8_t *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg3e8_v_u8m2_m(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, bstride, vl);
}

