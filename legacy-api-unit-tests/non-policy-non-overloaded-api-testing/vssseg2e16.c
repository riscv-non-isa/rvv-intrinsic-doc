#include <stdint.h>
#include "rvv-v0p10-compatible-headers/non-policy.h"
#include "rvv-v0p10-compatible-headers/policy.h"
#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
void test_vssseg2e16_v_f16mf4(float16_t *base, ptrdiff_t bstride, vfloat16mf4_t v0, vfloat16mf4_t v1, size_t vl) {
  return vssseg2e16_v_f16mf4(base, bstride, v0, v1, vl);
}

void test_vssseg2e16_v_f16mf2(float16_t *base, ptrdiff_t bstride, vfloat16mf2_t v0, vfloat16mf2_t v1, size_t vl) {
  return vssseg2e16_v_f16mf2(base, bstride, v0, v1, vl);
}

void test_vssseg2e16_v_f16m1(float16_t *base, ptrdiff_t bstride, vfloat16m1_t v0, vfloat16m1_t v1, size_t vl) {
  return vssseg2e16_v_f16m1(base, bstride, v0, v1, vl);
}

void test_vssseg2e16_v_f16m2(float16_t *base, ptrdiff_t bstride, vfloat16m2_t v0, vfloat16m2_t v1, size_t vl) {
  return vssseg2e16_v_f16m2(base, bstride, v0, v1, vl);
}

void test_vssseg2e16_v_f16m4(float16_t *base, ptrdiff_t bstride, vfloat16m4_t v0, vfloat16m4_t v1, size_t vl) {
  return vssseg2e16_v_f16m4(base, bstride, v0, v1, vl);
}

void test_vssseg2e16_v_i16mf4(int16_t *base, ptrdiff_t bstride, vint16mf4_t v0, vint16mf4_t v1, size_t vl) {
  return vssseg2e16_v_i16mf4(base, bstride, v0, v1, vl);
}

void test_vssseg2e16_v_i16mf2(int16_t *base, ptrdiff_t bstride, vint16mf2_t v0, vint16mf2_t v1, size_t vl) {
  return vssseg2e16_v_i16mf2(base, bstride, v0, v1, vl);
}

void test_vssseg2e16_v_i16m1(int16_t *base, ptrdiff_t bstride, vint16m1_t v0, vint16m1_t v1, size_t vl) {
  return vssseg2e16_v_i16m1(base, bstride, v0, v1, vl);
}

void test_vssseg2e16_v_i16m2(int16_t *base, ptrdiff_t bstride, vint16m2_t v0, vint16m2_t v1, size_t vl) {
  return vssseg2e16_v_i16m2(base, bstride, v0, v1, vl);
}

void test_vssseg2e16_v_i16m4(int16_t *base, ptrdiff_t bstride, vint16m4_t v0, vint16m4_t v1, size_t vl) {
  return vssseg2e16_v_i16m4(base, bstride, v0, v1, vl);
}

void test_vssseg2e16_v_u16mf4(uint16_t *base, ptrdiff_t bstride, vuint16mf4_t v0, vuint16mf4_t v1, size_t vl) {
  return vssseg2e16_v_u16mf4(base, bstride, v0, v1, vl);
}

void test_vssseg2e16_v_u16mf2(uint16_t *base, ptrdiff_t bstride, vuint16mf2_t v0, vuint16mf2_t v1, size_t vl) {
  return vssseg2e16_v_u16mf2(base, bstride, v0, v1, vl);
}

void test_vssseg2e16_v_u16m1(uint16_t *base, ptrdiff_t bstride, vuint16m1_t v0, vuint16m1_t v1, size_t vl) {
  return vssseg2e16_v_u16m1(base, bstride, v0, v1, vl);
}

void test_vssseg2e16_v_u16m2(uint16_t *base, ptrdiff_t bstride, vuint16m2_t v0, vuint16m2_t v1, size_t vl) {
  return vssseg2e16_v_u16m2(base, bstride, v0, v1, vl);
}

void test_vssseg2e16_v_u16m4(uint16_t *base, ptrdiff_t bstride, vuint16m4_t v0, vuint16m4_t v1, size_t vl) {
  return vssseg2e16_v_u16m4(base, bstride, v0, v1, vl);
}

void test_vssseg2e16_v_f16mf4_m(vbool64_t mask, float16_t *base, ptrdiff_t bstride, vfloat16mf4_t v0, vfloat16mf4_t v1, size_t vl) {
  return vssseg2e16_v_f16mf4_m(mask, base, bstride, v0, v1, vl);
}

void test_vssseg2e16_v_f16mf2_m(vbool32_t mask, float16_t *base, ptrdiff_t bstride, vfloat16mf2_t v0, vfloat16mf2_t v1, size_t vl) {
  return vssseg2e16_v_f16mf2_m(mask, base, bstride, v0, v1, vl);
}

void test_vssseg2e16_v_f16m1_m(vbool16_t mask, float16_t *base, ptrdiff_t bstride, vfloat16m1_t v0, vfloat16m1_t v1, size_t vl) {
  return vssseg2e16_v_f16m1_m(mask, base, bstride, v0, v1, vl);
}

void test_vssseg2e16_v_f16m2_m(vbool8_t mask, float16_t *base, ptrdiff_t bstride, vfloat16m2_t v0, vfloat16m2_t v1, size_t vl) {
  return vssseg2e16_v_f16m2_m(mask, base, bstride, v0, v1, vl);
}

void test_vssseg2e16_v_f16m4_m(vbool4_t mask, float16_t *base, ptrdiff_t bstride, vfloat16m4_t v0, vfloat16m4_t v1, size_t vl) {
  return vssseg2e16_v_f16m4_m(mask, base, bstride, v0, v1, vl);
}

void test_vssseg2e16_v_i16mf4_m(vbool64_t mask, int16_t *base, ptrdiff_t bstride, vint16mf4_t v0, vint16mf4_t v1, size_t vl) {
  return vssseg2e16_v_i16mf4_m(mask, base, bstride, v0, v1, vl);
}

void test_vssseg2e16_v_i16mf2_m(vbool32_t mask, int16_t *base, ptrdiff_t bstride, vint16mf2_t v0, vint16mf2_t v1, size_t vl) {
  return vssseg2e16_v_i16mf2_m(mask, base, bstride, v0, v1, vl);
}

void test_vssseg2e16_v_i16m1_m(vbool16_t mask, int16_t *base, ptrdiff_t bstride, vint16m1_t v0, vint16m1_t v1, size_t vl) {
  return vssseg2e16_v_i16m1_m(mask, base, bstride, v0, v1, vl);
}

void test_vssseg2e16_v_i16m2_m(vbool8_t mask, int16_t *base, ptrdiff_t bstride, vint16m2_t v0, vint16m2_t v1, size_t vl) {
  return vssseg2e16_v_i16m2_m(mask, base, bstride, v0, v1, vl);
}

void test_vssseg2e16_v_i16m4_m(vbool4_t mask, int16_t *base, ptrdiff_t bstride, vint16m4_t v0, vint16m4_t v1, size_t vl) {
  return vssseg2e16_v_i16m4_m(mask, base, bstride, v0, v1, vl);
}

void test_vssseg2e16_v_u16mf4_m(vbool64_t mask, uint16_t *base, ptrdiff_t bstride, vuint16mf4_t v0, vuint16mf4_t v1, size_t vl) {
  return vssseg2e16_v_u16mf4_m(mask, base, bstride, v0, v1, vl);
}

void test_vssseg2e16_v_u16mf2_m(vbool32_t mask, uint16_t *base, ptrdiff_t bstride, vuint16mf2_t v0, vuint16mf2_t v1, size_t vl) {
  return vssseg2e16_v_u16mf2_m(mask, base, bstride, v0, v1, vl);
}

void test_vssseg2e16_v_u16m1_m(vbool16_t mask, uint16_t *base, ptrdiff_t bstride, vuint16m1_t v0, vuint16m1_t v1, size_t vl) {
  return vssseg2e16_v_u16m1_m(mask, base, bstride, v0, v1, vl);
}

void test_vssseg2e16_v_u16m2_m(vbool8_t mask, uint16_t *base, ptrdiff_t bstride, vuint16m2_t v0, vuint16m2_t v1, size_t vl) {
  return vssseg2e16_v_u16m2_m(mask, base, bstride, v0, v1, vl);
}

void test_vssseg2e16_v_u16m4_m(vbool4_t mask, uint16_t *base, ptrdiff_t bstride, vuint16m4_t v0, vuint16m4_t v1, size_t vl) {
  return vssseg2e16_v_u16m4_m(mask, base, bstride, v0, v1, vl);
}

