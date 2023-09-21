/* { dg-do compile } */
/* { dg-options "-march=rv64gcv_zvfh -mabi=lp64d -Wno-psabi -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
void test_vssseg2e16_v_f16mf4x2(float16_t *base, ptrdiff_t bstride, vfloat16mf4x2_t v_tuple, size_t vl) {
  return __riscv_vssseg2e16_v_f16mf4x2(base, bstride, v_tuple, vl);
}

void test_vssseg2e16_v_f16mf2x2(float16_t *base, ptrdiff_t bstride, vfloat16mf2x2_t v_tuple, size_t vl) {
  return __riscv_vssseg2e16_v_f16mf2x2(base, bstride, v_tuple, vl);
}

void test_vssseg2e16_v_f16m1x2(float16_t *base, ptrdiff_t bstride, vfloat16m1x2_t v_tuple, size_t vl) {
  return __riscv_vssseg2e16_v_f16m1x2(base, bstride, v_tuple, vl);
}

void test_vssseg2e16_v_f16m2x2(float16_t *base, ptrdiff_t bstride, vfloat16m2x2_t v_tuple, size_t vl) {
  return __riscv_vssseg2e16_v_f16m2x2(base, bstride, v_tuple, vl);
}

void test_vssseg2e16_v_f16m4x2(float16_t *base, ptrdiff_t bstride, vfloat16m4x2_t v_tuple, size_t vl) {
  return __riscv_vssseg2e16_v_f16m4x2(base, bstride, v_tuple, vl);
}

void test_vssseg2e16_v_i16mf4x2(int16_t *base, ptrdiff_t bstride, vint16mf4x2_t v_tuple, size_t vl) {
  return __riscv_vssseg2e16_v_i16mf4x2(base, bstride, v_tuple, vl);
}

void test_vssseg2e16_v_i16mf2x2(int16_t *base, ptrdiff_t bstride, vint16mf2x2_t v_tuple, size_t vl) {
  return __riscv_vssseg2e16_v_i16mf2x2(base, bstride, v_tuple, vl);
}

void test_vssseg2e16_v_i16m1x2(int16_t *base, ptrdiff_t bstride, vint16m1x2_t v_tuple, size_t vl) {
  return __riscv_vssseg2e16_v_i16m1x2(base, bstride, v_tuple, vl);
}

void test_vssseg2e16_v_i16m2x2(int16_t *base, ptrdiff_t bstride, vint16m2x2_t v_tuple, size_t vl) {
  return __riscv_vssseg2e16_v_i16m2x2(base, bstride, v_tuple, vl);
}

void test_vssseg2e16_v_i16m4x2(int16_t *base, ptrdiff_t bstride, vint16m4x2_t v_tuple, size_t vl) {
  return __riscv_vssseg2e16_v_i16m4x2(base, bstride, v_tuple, vl);
}

void test_vssseg2e16_v_u16mf4x2(uint16_t *base, ptrdiff_t bstride, vuint16mf4x2_t v_tuple, size_t vl) {
  return __riscv_vssseg2e16_v_u16mf4x2(base, bstride, v_tuple, vl);
}

void test_vssseg2e16_v_u16mf2x2(uint16_t *base, ptrdiff_t bstride, vuint16mf2x2_t v_tuple, size_t vl) {
  return __riscv_vssseg2e16_v_u16mf2x2(base, bstride, v_tuple, vl);
}

void test_vssseg2e16_v_u16m1x2(uint16_t *base, ptrdiff_t bstride, vuint16m1x2_t v_tuple, size_t vl) {
  return __riscv_vssseg2e16_v_u16m1x2(base, bstride, v_tuple, vl);
}

void test_vssseg2e16_v_u16m2x2(uint16_t *base, ptrdiff_t bstride, vuint16m2x2_t v_tuple, size_t vl) {
  return __riscv_vssseg2e16_v_u16m2x2(base, bstride, v_tuple, vl);
}

void test_vssseg2e16_v_u16m4x2(uint16_t *base, ptrdiff_t bstride, vuint16m4x2_t v_tuple, size_t vl) {
  return __riscv_vssseg2e16_v_u16m4x2(base, bstride, v_tuple, vl);
}

void test_vssseg2e16_v_f16mf4x2_m(vbool64_t mask, float16_t *base, ptrdiff_t bstride, vfloat16mf4x2_t v_tuple, size_t vl) {
  return __riscv_vssseg2e16_v_f16mf4x2_m(mask, base, bstride, v_tuple, vl);
}

void test_vssseg2e16_v_f16mf2x2_m(vbool32_t mask, float16_t *base, ptrdiff_t bstride, vfloat16mf2x2_t v_tuple, size_t vl) {
  return __riscv_vssseg2e16_v_f16mf2x2_m(mask, base, bstride, v_tuple, vl);
}

void test_vssseg2e16_v_f16m1x2_m(vbool16_t mask, float16_t *base, ptrdiff_t bstride, vfloat16m1x2_t v_tuple, size_t vl) {
  return __riscv_vssseg2e16_v_f16m1x2_m(mask, base, bstride, v_tuple, vl);
}

void test_vssseg2e16_v_f16m2x2_m(vbool8_t mask, float16_t *base, ptrdiff_t bstride, vfloat16m2x2_t v_tuple, size_t vl) {
  return __riscv_vssseg2e16_v_f16m2x2_m(mask, base, bstride, v_tuple, vl);
}

void test_vssseg2e16_v_f16m4x2_m(vbool4_t mask, float16_t *base, ptrdiff_t bstride, vfloat16m4x2_t v_tuple, size_t vl) {
  return __riscv_vssseg2e16_v_f16m4x2_m(mask, base, bstride, v_tuple, vl);
}

void test_vssseg2e16_v_i16mf4x2_m(vbool64_t mask, int16_t *base, ptrdiff_t bstride, vint16mf4x2_t v_tuple, size_t vl) {
  return __riscv_vssseg2e16_v_i16mf4x2_m(mask, base, bstride, v_tuple, vl);
}

void test_vssseg2e16_v_i16mf2x2_m(vbool32_t mask, int16_t *base, ptrdiff_t bstride, vint16mf2x2_t v_tuple, size_t vl) {
  return __riscv_vssseg2e16_v_i16mf2x2_m(mask, base, bstride, v_tuple, vl);
}

void test_vssseg2e16_v_i16m1x2_m(vbool16_t mask, int16_t *base, ptrdiff_t bstride, vint16m1x2_t v_tuple, size_t vl) {
  return __riscv_vssseg2e16_v_i16m1x2_m(mask, base, bstride, v_tuple, vl);
}

void test_vssseg2e16_v_i16m2x2_m(vbool8_t mask, int16_t *base, ptrdiff_t bstride, vint16m2x2_t v_tuple, size_t vl) {
  return __riscv_vssseg2e16_v_i16m2x2_m(mask, base, bstride, v_tuple, vl);
}

void test_vssseg2e16_v_i16m4x2_m(vbool4_t mask, int16_t *base, ptrdiff_t bstride, vint16m4x2_t v_tuple, size_t vl) {
  return __riscv_vssseg2e16_v_i16m4x2_m(mask, base, bstride, v_tuple, vl);
}

void test_vssseg2e16_v_u16mf4x2_m(vbool64_t mask, uint16_t *base, ptrdiff_t bstride, vuint16mf4x2_t v_tuple, size_t vl) {
  return __riscv_vssseg2e16_v_u16mf4x2_m(mask, base, bstride, v_tuple, vl);
}

void test_vssseg2e16_v_u16mf2x2_m(vbool32_t mask, uint16_t *base, ptrdiff_t bstride, vuint16mf2x2_t v_tuple, size_t vl) {
  return __riscv_vssseg2e16_v_u16mf2x2_m(mask, base, bstride, v_tuple, vl);
}

void test_vssseg2e16_v_u16m1x2_m(vbool16_t mask, uint16_t *base, ptrdiff_t bstride, vuint16m1x2_t v_tuple, size_t vl) {
  return __riscv_vssseg2e16_v_u16m1x2_m(mask, base, bstride, v_tuple, vl);
}

void test_vssseg2e16_v_u16m2x2_m(vbool8_t mask, uint16_t *base, ptrdiff_t bstride, vuint16m2x2_t v_tuple, size_t vl) {
  return __riscv_vssseg2e16_v_u16m2x2_m(mask, base, bstride, v_tuple, vl);
}

void test_vssseg2e16_v_u16m4x2_m(vbool4_t mask, uint16_t *base, ptrdiff_t bstride, vuint16m4x2_t v_tuple, size_t vl) {
  return __riscv_vssseg2e16_v_u16m4x2_m(mask, base, bstride, v_tuple, vl);
}

