#include <stdint.h>
#include "rvv-v0p10-compatible-headers/non-policy.h"
#include "rvv-v0p10-compatible-headers/policy.h"
#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
void test_vlsseg7e8_v_i8mf8_tu(vint8mf8_t *v0, vint8mf8_t *v1, vint8mf8_t *v2, vint8mf8_t *v3, vint8mf8_t *v4, vint8mf8_t *v5, vint8mf8_t *v6, vint8mf8_t maskedoff0, vint8mf8_t maskedoff1, vint8mf8_t maskedoff2, vint8mf8_t maskedoff3, vint8mf8_t maskedoff4, vint8mf8_t maskedoff5, vint8mf8_t maskedoff6, const int8_t *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg7e8_v_i8mf8_tu(v0, v1, v2, v3, v4, v5, v6, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, base, bstride, vl);
}

void test_vlsseg7e8_v_i8mf4_tu(vint8mf4_t *v0, vint8mf4_t *v1, vint8mf4_t *v2, vint8mf4_t *v3, vint8mf4_t *v4, vint8mf4_t *v5, vint8mf4_t *v6, vint8mf4_t maskedoff0, vint8mf4_t maskedoff1, vint8mf4_t maskedoff2, vint8mf4_t maskedoff3, vint8mf4_t maskedoff4, vint8mf4_t maskedoff5, vint8mf4_t maskedoff6, const int8_t *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg7e8_v_i8mf4_tu(v0, v1, v2, v3, v4, v5, v6, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, base, bstride, vl);
}

void test_vlsseg7e8_v_i8mf2_tu(vint8mf2_t *v0, vint8mf2_t *v1, vint8mf2_t *v2, vint8mf2_t *v3, vint8mf2_t *v4, vint8mf2_t *v5, vint8mf2_t *v6, vint8mf2_t maskedoff0, vint8mf2_t maskedoff1, vint8mf2_t maskedoff2, vint8mf2_t maskedoff3, vint8mf2_t maskedoff4, vint8mf2_t maskedoff5, vint8mf2_t maskedoff6, const int8_t *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg7e8_v_i8mf2_tu(v0, v1, v2, v3, v4, v5, v6, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, base, bstride, vl);
}

void test_vlsseg7e8_v_i8m1_tu(vint8m1_t *v0, vint8m1_t *v1, vint8m1_t *v2, vint8m1_t *v3, vint8m1_t *v4, vint8m1_t *v5, vint8m1_t *v6, vint8m1_t maskedoff0, vint8m1_t maskedoff1, vint8m1_t maskedoff2, vint8m1_t maskedoff3, vint8m1_t maskedoff4, vint8m1_t maskedoff5, vint8m1_t maskedoff6, const int8_t *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg7e8_v_i8m1_tu(v0, v1, v2, v3, v4, v5, v6, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, base, bstride, vl);
}

void test_vlsseg7e8_v_u8mf8_tu(vuint8mf8_t *v0, vuint8mf8_t *v1, vuint8mf8_t *v2, vuint8mf8_t *v3, vuint8mf8_t *v4, vuint8mf8_t *v5, vuint8mf8_t *v6, vuint8mf8_t maskedoff0, vuint8mf8_t maskedoff1, vuint8mf8_t maskedoff2, vuint8mf8_t maskedoff3, vuint8mf8_t maskedoff4, vuint8mf8_t maskedoff5, vuint8mf8_t maskedoff6, const uint8_t *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg7e8_v_u8mf8_tu(v0, v1, v2, v3, v4, v5, v6, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, base, bstride, vl);
}

void test_vlsseg7e8_v_u8mf4_tu(vuint8mf4_t *v0, vuint8mf4_t *v1, vuint8mf4_t *v2, vuint8mf4_t *v3, vuint8mf4_t *v4, vuint8mf4_t *v5, vuint8mf4_t *v6, vuint8mf4_t maskedoff0, vuint8mf4_t maskedoff1, vuint8mf4_t maskedoff2, vuint8mf4_t maskedoff3, vuint8mf4_t maskedoff4, vuint8mf4_t maskedoff5, vuint8mf4_t maskedoff6, const uint8_t *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg7e8_v_u8mf4_tu(v0, v1, v2, v3, v4, v5, v6, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, base, bstride, vl);
}

void test_vlsseg7e8_v_u8mf2_tu(vuint8mf2_t *v0, vuint8mf2_t *v1, vuint8mf2_t *v2, vuint8mf2_t *v3, vuint8mf2_t *v4, vuint8mf2_t *v5, vuint8mf2_t *v6, vuint8mf2_t maskedoff0, vuint8mf2_t maskedoff1, vuint8mf2_t maskedoff2, vuint8mf2_t maskedoff3, vuint8mf2_t maskedoff4, vuint8mf2_t maskedoff5, vuint8mf2_t maskedoff6, const uint8_t *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg7e8_v_u8mf2_tu(v0, v1, v2, v3, v4, v5, v6, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, base, bstride, vl);
}

void test_vlsseg7e8_v_u8m1_tu(vuint8m1_t *v0, vuint8m1_t *v1, vuint8m1_t *v2, vuint8m1_t *v3, vuint8m1_t *v4, vuint8m1_t *v5, vuint8m1_t *v6, vuint8m1_t maskedoff0, vuint8m1_t maskedoff1, vuint8m1_t maskedoff2, vuint8m1_t maskedoff3, vuint8m1_t maskedoff4, vuint8m1_t maskedoff5, vuint8m1_t maskedoff6, const uint8_t *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg7e8_v_u8m1_tu(v0, v1, v2, v3, v4, v5, v6, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, base, bstride, vl);
}

void test_vlsseg7e8_v_i8mf8_ta(vint8mf8_t *v0, vint8mf8_t *v1, vint8mf8_t *v2, vint8mf8_t *v3, vint8mf8_t *v4, vint8mf8_t *v5, vint8mf8_t *v6, const int8_t *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg7e8_v_i8mf8_ta(v0, v1, v2, v3, v4, v5, v6, base, bstride, vl);
}

void test_vlsseg7e8_v_i8mf4_ta(vint8mf4_t *v0, vint8mf4_t *v1, vint8mf4_t *v2, vint8mf4_t *v3, vint8mf4_t *v4, vint8mf4_t *v5, vint8mf4_t *v6, const int8_t *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg7e8_v_i8mf4_ta(v0, v1, v2, v3, v4, v5, v6, base, bstride, vl);
}

void test_vlsseg7e8_v_i8mf2_ta(vint8mf2_t *v0, vint8mf2_t *v1, vint8mf2_t *v2, vint8mf2_t *v3, vint8mf2_t *v4, vint8mf2_t *v5, vint8mf2_t *v6, const int8_t *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg7e8_v_i8mf2_ta(v0, v1, v2, v3, v4, v5, v6, base, bstride, vl);
}

void test_vlsseg7e8_v_i8m1_ta(vint8m1_t *v0, vint8m1_t *v1, vint8m1_t *v2, vint8m1_t *v3, vint8m1_t *v4, vint8m1_t *v5, vint8m1_t *v6, const int8_t *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg7e8_v_i8m1_ta(v0, v1, v2, v3, v4, v5, v6, base, bstride, vl);
}

void test_vlsseg7e8_v_u8mf8_ta(vuint8mf8_t *v0, vuint8mf8_t *v1, vuint8mf8_t *v2, vuint8mf8_t *v3, vuint8mf8_t *v4, vuint8mf8_t *v5, vuint8mf8_t *v6, const uint8_t *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg7e8_v_u8mf8_ta(v0, v1, v2, v3, v4, v5, v6, base, bstride, vl);
}

void test_vlsseg7e8_v_u8mf4_ta(vuint8mf4_t *v0, vuint8mf4_t *v1, vuint8mf4_t *v2, vuint8mf4_t *v3, vuint8mf4_t *v4, vuint8mf4_t *v5, vuint8mf4_t *v6, const uint8_t *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg7e8_v_u8mf4_ta(v0, v1, v2, v3, v4, v5, v6, base, bstride, vl);
}

void test_vlsseg7e8_v_u8mf2_ta(vuint8mf2_t *v0, vuint8mf2_t *v1, vuint8mf2_t *v2, vuint8mf2_t *v3, vuint8mf2_t *v4, vuint8mf2_t *v5, vuint8mf2_t *v6, const uint8_t *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg7e8_v_u8mf2_ta(v0, v1, v2, v3, v4, v5, v6, base, bstride, vl);
}

void test_vlsseg7e8_v_u8m1_ta(vuint8m1_t *v0, vuint8m1_t *v1, vuint8m1_t *v2, vuint8m1_t *v3, vuint8m1_t *v4, vuint8m1_t *v5, vuint8m1_t *v6, const uint8_t *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg7e8_v_u8m1_ta(v0, v1, v2, v3, v4, v5, v6, base, bstride, vl);
}

void test_vlsseg7e8_v_i8mf8_tuma(vint8mf8_t *v0, vint8mf8_t *v1, vint8mf8_t *v2, vint8mf8_t *v3, vint8mf8_t *v4, vint8mf8_t *v5, vint8mf8_t *v6, vbool64_t mask, vint8mf8_t maskedoff0, vint8mf8_t maskedoff1, vint8mf8_t maskedoff2, vint8mf8_t maskedoff3, vint8mf8_t maskedoff4, vint8mf8_t maskedoff5, vint8mf8_t maskedoff6, const int8_t *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg7e8_v_i8mf8_tuma(v0, v1, v2, v3, v4, v5, v6, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, base, bstride, vl);
}

void test_vlsseg7e8_v_i8mf4_tuma(vint8mf4_t *v0, vint8mf4_t *v1, vint8mf4_t *v2, vint8mf4_t *v3, vint8mf4_t *v4, vint8mf4_t *v5, vint8mf4_t *v6, vbool32_t mask, vint8mf4_t maskedoff0, vint8mf4_t maskedoff1, vint8mf4_t maskedoff2, vint8mf4_t maskedoff3, vint8mf4_t maskedoff4, vint8mf4_t maskedoff5, vint8mf4_t maskedoff6, const int8_t *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg7e8_v_i8mf4_tuma(v0, v1, v2, v3, v4, v5, v6, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, base, bstride, vl);
}

void test_vlsseg7e8_v_i8mf2_tuma(vint8mf2_t *v0, vint8mf2_t *v1, vint8mf2_t *v2, vint8mf2_t *v3, vint8mf2_t *v4, vint8mf2_t *v5, vint8mf2_t *v6, vbool16_t mask, vint8mf2_t maskedoff0, vint8mf2_t maskedoff1, vint8mf2_t maskedoff2, vint8mf2_t maskedoff3, vint8mf2_t maskedoff4, vint8mf2_t maskedoff5, vint8mf2_t maskedoff6, const int8_t *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg7e8_v_i8mf2_tuma(v0, v1, v2, v3, v4, v5, v6, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, base, bstride, vl);
}

void test_vlsseg7e8_v_i8m1_tuma(vint8m1_t *v0, vint8m1_t *v1, vint8m1_t *v2, vint8m1_t *v3, vint8m1_t *v4, vint8m1_t *v5, vint8m1_t *v6, vbool8_t mask, vint8m1_t maskedoff0, vint8m1_t maskedoff1, vint8m1_t maskedoff2, vint8m1_t maskedoff3, vint8m1_t maskedoff4, vint8m1_t maskedoff5, vint8m1_t maskedoff6, const int8_t *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg7e8_v_i8m1_tuma(v0, v1, v2, v3, v4, v5, v6, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, base, bstride, vl);
}

void test_vlsseg7e8_v_u8mf8_tuma(vuint8mf8_t *v0, vuint8mf8_t *v1, vuint8mf8_t *v2, vuint8mf8_t *v3, vuint8mf8_t *v4, vuint8mf8_t *v5, vuint8mf8_t *v6, vbool64_t mask, vuint8mf8_t maskedoff0, vuint8mf8_t maskedoff1, vuint8mf8_t maskedoff2, vuint8mf8_t maskedoff3, vuint8mf8_t maskedoff4, vuint8mf8_t maskedoff5, vuint8mf8_t maskedoff6, const uint8_t *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg7e8_v_u8mf8_tuma(v0, v1, v2, v3, v4, v5, v6, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, base, bstride, vl);
}

void test_vlsseg7e8_v_u8mf4_tuma(vuint8mf4_t *v0, vuint8mf4_t *v1, vuint8mf4_t *v2, vuint8mf4_t *v3, vuint8mf4_t *v4, vuint8mf4_t *v5, vuint8mf4_t *v6, vbool32_t mask, vuint8mf4_t maskedoff0, vuint8mf4_t maskedoff1, vuint8mf4_t maskedoff2, vuint8mf4_t maskedoff3, vuint8mf4_t maskedoff4, vuint8mf4_t maskedoff5, vuint8mf4_t maskedoff6, const uint8_t *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg7e8_v_u8mf4_tuma(v0, v1, v2, v3, v4, v5, v6, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, base, bstride, vl);
}

void test_vlsseg7e8_v_u8mf2_tuma(vuint8mf2_t *v0, vuint8mf2_t *v1, vuint8mf2_t *v2, vuint8mf2_t *v3, vuint8mf2_t *v4, vuint8mf2_t *v5, vuint8mf2_t *v6, vbool16_t mask, vuint8mf2_t maskedoff0, vuint8mf2_t maskedoff1, vuint8mf2_t maskedoff2, vuint8mf2_t maskedoff3, vuint8mf2_t maskedoff4, vuint8mf2_t maskedoff5, vuint8mf2_t maskedoff6, const uint8_t *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg7e8_v_u8mf2_tuma(v0, v1, v2, v3, v4, v5, v6, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, base, bstride, vl);
}

void test_vlsseg7e8_v_u8m1_tuma(vuint8m1_t *v0, vuint8m1_t *v1, vuint8m1_t *v2, vuint8m1_t *v3, vuint8m1_t *v4, vuint8m1_t *v5, vuint8m1_t *v6, vbool8_t mask, vuint8m1_t maskedoff0, vuint8m1_t maskedoff1, vuint8m1_t maskedoff2, vuint8m1_t maskedoff3, vuint8m1_t maskedoff4, vuint8m1_t maskedoff5, vuint8m1_t maskedoff6, const uint8_t *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg7e8_v_u8m1_tuma(v0, v1, v2, v3, v4, v5, v6, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, base, bstride, vl);
}

void test_vlsseg7e8_v_i8mf8_tumu(vint8mf8_t *v0, vint8mf8_t *v1, vint8mf8_t *v2, vint8mf8_t *v3, vint8mf8_t *v4, vint8mf8_t *v5, vint8mf8_t *v6, vbool64_t mask, vint8mf8_t maskedoff0, vint8mf8_t maskedoff1, vint8mf8_t maskedoff2, vint8mf8_t maskedoff3, vint8mf8_t maskedoff4, vint8mf8_t maskedoff5, vint8mf8_t maskedoff6, const int8_t *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg7e8_v_i8mf8_tumu(v0, v1, v2, v3, v4, v5, v6, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, base, bstride, vl);
}

void test_vlsseg7e8_v_i8mf4_tumu(vint8mf4_t *v0, vint8mf4_t *v1, vint8mf4_t *v2, vint8mf4_t *v3, vint8mf4_t *v4, vint8mf4_t *v5, vint8mf4_t *v6, vbool32_t mask, vint8mf4_t maskedoff0, vint8mf4_t maskedoff1, vint8mf4_t maskedoff2, vint8mf4_t maskedoff3, vint8mf4_t maskedoff4, vint8mf4_t maskedoff5, vint8mf4_t maskedoff6, const int8_t *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg7e8_v_i8mf4_tumu(v0, v1, v2, v3, v4, v5, v6, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, base, bstride, vl);
}

void test_vlsseg7e8_v_i8mf2_tumu(vint8mf2_t *v0, vint8mf2_t *v1, vint8mf2_t *v2, vint8mf2_t *v3, vint8mf2_t *v4, vint8mf2_t *v5, vint8mf2_t *v6, vbool16_t mask, vint8mf2_t maskedoff0, vint8mf2_t maskedoff1, vint8mf2_t maskedoff2, vint8mf2_t maskedoff3, vint8mf2_t maskedoff4, vint8mf2_t maskedoff5, vint8mf2_t maskedoff6, const int8_t *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg7e8_v_i8mf2_tumu(v0, v1, v2, v3, v4, v5, v6, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, base, bstride, vl);
}

void test_vlsseg7e8_v_i8m1_tumu(vint8m1_t *v0, vint8m1_t *v1, vint8m1_t *v2, vint8m1_t *v3, vint8m1_t *v4, vint8m1_t *v5, vint8m1_t *v6, vbool8_t mask, vint8m1_t maskedoff0, vint8m1_t maskedoff1, vint8m1_t maskedoff2, vint8m1_t maskedoff3, vint8m1_t maskedoff4, vint8m1_t maskedoff5, vint8m1_t maskedoff6, const int8_t *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg7e8_v_i8m1_tumu(v0, v1, v2, v3, v4, v5, v6, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, base, bstride, vl);
}

void test_vlsseg7e8_v_u8mf8_tumu(vuint8mf8_t *v0, vuint8mf8_t *v1, vuint8mf8_t *v2, vuint8mf8_t *v3, vuint8mf8_t *v4, vuint8mf8_t *v5, vuint8mf8_t *v6, vbool64_t mask, vuint8mf8_t maskedoff0, vuint8mf8_t maskedoff1, vuint8mf8_t maskedoff2, vuint8mf8_t maskedoff3, vuint8mf8_t maskedoff4, vuint8mf8_t maskedoff5, vuint8mf8_t maskedoff6, const uint8_t *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg7e8_v_u8mf8_tumu(v0, v1, v2, v3, v4, v5, v6, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, base, bstride, vl);
}

void test_vlsseg7e8_v_u8mf4_tumu(vuint8mf4_t *v0, vuint8mf4_t *v1, vuint8mf4_t *v2, vuint8mf4_t *v3, vuint8mf4_t *v4, vuint8mf4_t *v5, vuint8mf4_t *v6, vbool32_t mask, vuint8mf4_t maskedoff0, vuint8mf4_t maskedoff1, vuint8mf4_t maskedoff2, vuint8mf4_t maskedoff3, vuint8mf4_t maskedoff4, vuint8mf4_t maskedoff5, vuint8mf4_t maskedoff6, const uint8_t *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg7e8_v_u8mf4_tumu(v0, v1, v2, v3, v4, v5, v6, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, base, bstride, vl);
}

void test_vlsseg7e8_v_u8mf2_tumu(vuint8mf2_t *v0, vuint8mf2_t *v1, vuint8mf2_t *v2, vuint8mf2_t *v3, vuint8mf2_t *v4, vuint8mf2_t *v5, vuint8mf2_t *v6, vbool16_t mask, vuint8mf2_t maskedoff0, vuint8mf2_t maskedoff1, vuint8mf2_t maskedoff2, vuint8mf2_t maskedoff3, vuint8mf2_t maskedoff4, vuint8mf2_t maskedoff5, vuint8mf2_t maskedoff6, const uint8_t *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg7e8_v_u8mf2_tumu(v0, v1, v2, v3, v4, v5, v6, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, base, bstride, vl);
}

void test_vlsseg7e8_v_u8m1_tumu(vuint8m1_t *v0, vuint8m1_t *v1, vuint8m1_t *v2, vuint8m1_t *v3, vuint8m1_t *v4, vuint8m1_t *v5, vuint8m1_t *v6, vbool8_t mask, vuint8m1_t maskedoff0, vuint8m1_t maskedoff1, vuint8m1_t maskedoff2, vuint8m1_t maskedoff3, vuint8m1_t maskedoff4, vuint8m1_t maskedoff5, vuint8m1_t maskedoff6, const uint8_t *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg7e8_v_u8m1_tumu(v0, v1, v2, v3, v4, v5, v6, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, base, bstride, vl);
}

void test_vlsseg7e8_v_i8mf8_tama(vint8mf8_t *v0, vint8mf8_t *v1, vint8mf8_t *v2, vint8mf8_t *v3, vint8mf8_t *v4, vint8mf8_t *v5, vint8mf8_t *v6, vbool64_t mask, const int8_t *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg7e8_v_i8mf8_tama(v0, v1, v2, v3, v4, v5, v6, mask, base, bstride, vl);
}

void test_vlsseg7e8_v_i8mf4_tama(vint8mf4_t *v0, vint8mf4_t *v1, vint8mf4_t *v2, vint8mf4_t *v3, vint8mf4_t *v4, vint8mf4_t *v5, vint8mf4_t *v6, vbool32_t mask, const int8_t *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg7e8_v_i8mf4_tama(v0, v1, v2, v3, v4, v5, v6, mask, base, bstride, vl);
}

void test_vlsseg7e8_v_i8mf2_tama(vint8mf2_t *v0, vint8mf2_t *v1, vint8mf2_t *v2, vint8mf2_t *v3, vint8mf2_t *v4, vint8mf2_t *v5, vint8mf2_t *v6, vbool16_t mask, const int8_t *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg7e8_v_i8mf2_tama(v0, v1, v2, v3, v4, v5, v6, mask, base, bstride, vl);
}

void test_vlsseg7e8_v_i8m1_tama(vint8m1_t *v0, vint8m1_t *v1, vint8m1_t *v2, vint8m1_t *v3, vint8m1_t *v4, vint8m1_t *v5, vint8m1_t *v6, vbool8_t mask, const int8_t *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg7e8_v_i8m1_tama(v0, v1, v2, v3, v4, v5, v6, mask, base, bstride, vl);
}

void test_vlsseg7e8_v_u8mf8_tama(vuint8mf8_t *v0, vuint8mf8_t *v1, vuint8mf8_t *v2, vuint8mf8_t *v3, vuint8mf8_t *v4, vuint8mf8_t *v5, vuint8mf8_t *v6, vbool64_t mask, const uint8_t *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg7e8_v_u8mf8_tama(v0, v1, v2, v3, v4, v5, v6, mask, base, bstride, vl);
}

void test_vlsseg7e8_v_u8mf4_tama(vuint8mf4_t *v0, vuint8mf4_t *v1, vuint8mf4_t *v2, vuint8mf4_t *v3, vuint8mf4_t *v4, vuint8mf4_t *v5, vuint8mf4_t *v6, vbool32_t mask, const uint8_t *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg7e8_v_u8mf4_tama(v0, v1, v2, v3, v4, v5, v6, mask, base, bstride, vl);
}

void test_vlsseg7e8_v_u8mf2_tama(vuint8mf2_t *v0, vuint8mf2_t *v1, vuint8mf2_t *v2, vuint8mf2_t *v3, vuint8mf2_t *v4, vuint8mf2_t *v5, vuint8mf2_t *v6, vbool16_t mask, const uint8_t *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg7e8_v_u8mf2_tama(v0, v1, v2, v3, v4, v5, v6, mask, base, bstride, vl);
}

void test_vlsseg7e8_v_u8m1_tama(vuint8m1_t *v0, vuint8m1_t *v1, vuint8m1_t *v2, vuint8m1_t *v3, vuint8m1_t *v4, vuint8m1_t *v5, vuint8m1_t *v6, vbool8_t mask, const uint8_t *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg7e8_v_u8m1_tama(v0, v1, v2, v3, v4, v5, v6, mask, base, bstride, vl);
}

void test_vlsseg7e8_v_i8mf8_tamu(vint8mf8_t *v0, vint8mf8_t *v1, vint8mf8_t *v2, vint8mf8_t *v3, vint8mf8_t *v4, vint8mf8_t *v5, vint8mf8_t *v6, vbool64_t mask, vint8mf8_t maskedoff0, vint8mf8_t maskedoff1, vint8mf8_t maskedoff2, vint8mf8_t maskedoff3, vint8mf8_t maskedoff4, vint8mf8_t maskedoff5, vint8mf8_t maskedoff6, const int8_t *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg7e8_v_i8mf8_tamu(v0, v1, v2, v3, v4, v5, v6, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, base, bstride, vl);
}

void test_vlsseg7e8_v_i8mf4_tamu(vint8mf4_t *v0, vint8mf4_t *v1, vint8mf4_t *v2, vint8mf4_t *v3, vint8mf4_t *v4, vint8mf4_t *v5, vint8mf4_t *v6, vbool32_t mask, vint8mf4_t maskedoff0, vint8mf4_t maskedoff1, vint8mf4_t maskedoff2, vint8mf4_t maskedoff3, vint8mf4_t maskedoff4, vint8mf4_t maskedoff5, vint8mf4_t maskedoff6, const int8_t *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg7e8_v_i8mf4_tamu(v0, v1, v2, v3, v4, v5, v6, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, base, bstride, vl);
}

void test_vlsseg7e8_v_i8mf2_tamu(vint8mf2_t *v0, vint8mf2_t *v1, vint8mf2_t *v2, vint8mf2_t *v3, vint8mf2_t *v4, vint8mf2_t *v5, vint8mf2_t *v6, vbool16_t mask, vint8mf2_t maskedoff0, vint8mf2_t maskedoff1, vint8mf2_t maskedoff2, vint8mf2_t maskedoff3, vint8mf2_t maskedoff4, vint8mf2_t maskedoff5, vint8mf2_t maskedoff6, const int8_t *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg7e8_v_i8mf2_tamu(v0, v1, v2, v3, v4, v5, v6, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, base, bstride, vl);
}

void test_vlsseg7e8_v_i8m1_tamu(vint8m1_t *v0, vint8m1_t *v1, vint8m1_t *v2, vint8m1_t *v3, vint8m1_t *v4, vint8m1_t *v5, vint8m1_t *v6, vbool8_t mask, vint8m1_t maskedoff0, vint8m1_t maskedoff1, vint8m1_t maskedoff2, vint8m1_t maskedoff3, vint8m1_t maskedoff4, vint8m1_t maskedoff5, vint8m1_t maskedoff6, const int8_t *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg7e8_v_i8m1_tamu(v0, v1, v2, v3, v4, v5, v6, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, base, bstride, vl);
}

void test_vlsseg7e8_v_u8mf8_tamu(vuint8mf8_t *v0, vuint8mf8_t *v1, vuint8mf8_t *v2, vuint8mf8_t *v3, vuint8mf8_t *v4, vuint8mf8_t *v5, vuint8mf8_t *v6, vbool64_t mask, vuint8mf8_t maskedoff0, vuint8mf8_t maskedoff1, vuint8mf8_t maskedoff2, vuint8mf8_t maskedoff3, vuint8mf8_t maskedoff4, vuint8mf8_t maskedoff5, vuint8mf8_t maskedoff6, const uint8_t *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg7e8_v_u8mf8_tamu(v0, v1, v2, v3, v4, v5, v6, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, base, bstride, vl);
}

void test_vlsseg7e8_v_u8mf4_tamu(vuint8mf4_t *v0, vuint8mf4_t *v1, vuint8mf4_t *v2, vuint8mf4_t *v3, vuint8mf4_t *v4, vuint8mf4_t *v5, vuint8mf4_t *v6, vbool32_t mask, vuint8mf4_t maskedoff0, vuint8mf4_t maskedoff1, vuint8mf4_t maskedoff2, vuint8mf4_t maskedoff3, vuint8mf4_t maskedoff4, vuint8mf4_t maskedoff5, vuint8mf4_t maskedoff6, const uint8_t *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg7e8_v_u8mf4_tamu(v0, v1, v2, v3, v4, v5, v6, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, base, bstride, vl);
}

void test_vlsseg7e8_v_u8mf2_tamu(vuint8mf2_t *v0, vuint8mf2_t *v1, vuint8mf2_t *v2, vuint8mf2_t *v3, vuint8mf2_t *v4, vuint8mf2_t *v5, vuint8mf2_t *v6, vbool16_t mask, vuint8mf2_t maskedoff0, vuint8mf2_t maskedoff1, vuint8mf2_t maskedoff2, vuint8mf2_t maskedoff3, vuint8mf2_t maskedoff4, vuint8mf2_t maskedoff5, vuint8mf2_t maskedoff6, const uint8_t *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg7e8_v_u8mf2_tamu(v0, v1, v2, v3, v4, v5, v6, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, base, bstride, vl);
}

void test_vlsseg7e8_v_u8m1_tamu(vuint8m1_t *v0, vuint8m1_t *v1, vuint8m1_t *v2, vuint8m1_t *v3, vuint8m1_t *v4, vuint8m1_t *v5, vuint8m1_t *v6, vbool8_t mask, vuint8m1_t maskedoff0, vuint8m1_t maskedoff1, vuint8m1_t maskedoff2, vuint8m1_t maskedoff3, vuint8m1_t maskedoff4, vuint8m1_t maskedoff5, vuint8m1_t maskedoff6, const uint8_t *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg7e8_v_u8m1_tamu(v0, v1, v2, v3, v4, v5, v6, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, base, bstride, vl);
}

