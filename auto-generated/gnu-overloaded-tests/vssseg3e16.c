/* { dg-do compile } */
/* { dg-options "-march=rv64gcv_zvfh -mabi=lp64d -Wno-psabi -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
void test_vssseg3e16_v_f16mf4x3(float16_t *base, ptrdiff_t bstride, vfloat16mf4x3_t v_tuple, size_t vl) {
  return __riscv_vssseg3e16(base, bstride, v_tuple, vl);
}

void test_vssseg3e16_v_f16mf2x3(float16_t *base, ptrdiff_t bstride, vfloat16mf2x3_t v_tuple, size_t vl) {
  return __riscv_vssseg3e16(base, bstride, v_tuple, vl);
}

void test_vssseg3e16_v_f16m1x3(float16_t *base, ptrdiff_t bstride, vfloat16m1x3_t v_tuple, size_t vl) {
  return __riscv_vssseg3e16(base, bstride, v_tuple, vl);
}

void test_vssseg3e16_v_f16m2x3(float16_t *base, ptrdiff_t bstride, vfloat16m2x3_t v_tuple, size_t vl) {
  return __riscv_vssseg3e16(base, bstride, v_tuple, vl);
}

void test_vssseg3e16_v_i16mf4x3(int16_t *base, ptrdiff_t bstride, vint16mf4x3_t v_tuple, size_t vl) {
  return __riscv_vssseg3e16(base, bstride, v_tuple, vl);
}

void test_vssseg3e16_v_i16mf2x3(int16_t *base, ptrdiff_t bstride, vint16mf2x3_t v_tuple, size_t vl) {
  return __riscv_vssseg3e16(base, bstride, v_tuple, vl);
}

void test_vssseg3e16_v_i16m1x3(int16_t *base, ptrdiff_t bstride, vint16m1x3_t v_tuple, size_t vl) {
  return __riscv_vssseg3e16(base, bstride, v_tuple, vl);
}

void test_vssseg3e16_v_i16m2x3(int16_t *base, ptrdiff_t bstride, vint16m2x3_t v_tuple, size_t vl) {
  return __riscv_vssseg3e16(base, bstride, v_tuple, vl);
}

void test_vssseg3e16_v_u16mf4x3(uint16_t *base, ptrdiff_t bstride, vuint16mf4x3_t v_tuple, size_t vl) {
  return __riscv_vssseg3e16(base, bstride, v_tuple, vl);
}

void test_vssseg3e16_v_u16mf2x3(uint16_t *base, ptrdiff_t bstride, vuint16mf2x3_t v_tuple, size_t vl) {
  return __riscv_vssseg3e16(base, bstride, v_tuple, vl);
}

void test_vssseg3e16_v_u16m1x3(uint16_t *base, ptrdiff_t bstride, vuint16m1x3_t v_tuple, size_t vl) {
  return __riscv_vssseg3e16(base, bstride, v_tuple, vl);
}

void test_vssseg3e16_v_u16m2x3(uint16_t *base, ptrdiff_t bstride, vuint16m2x3_t v_tuple, size_t vl) {
  return __riscv_vssseg3e16(base, bstride, v_tuple, vl);
}

void test_vssseg3e16_v_f16mf4x3_m(vbool64_t mask, float16_t *base, ptrdiff_t bstride, vfloat16mf4x3_t v_tuple, size_t vl) {
  return __riscv_vssseg3e16(mask, base, bstride, v_tuple, vl);
}

void test_vssseg3e16_v_f16mf2x3_m(vbool32_t mask, float16_t *base, ptrdiff_t bstride, vfloat16mf2x3_t v_tuple, size_t vl) {
  return __riscv_vssseg3e16(mask, base, bstride, v_tuple, vl);
}

void test_vssseg3e16_v_f16m1x3_m(vbool16_t mask, float16_t *base, ptrdiff_t bstride, vfloat16m1x3_t v_tuple, size_t vl) {
  return __riscv_vssseg3e16(mask, base, bstride, v_tuple, vl);
}

void test_vssseg3e16_v_f16m2x3_m(vbool8_t mask, float16_t *base, ptrdiff_t bstride, vfloat16m2x3_t v_tuple, size_t vl) {
  return __riscv_vssseg3e16(mask, base, bstride, v_tuple, vl);
}

void test_vssseg3e16_v_i16mf4x3_m(vbool64_t mask, int16_t *base, ptrdiff_t bstride, vint16mf4x3_t v_tuple, size_t vl) {
  return __riscv_vssseg3e16(mask, base, bstride, v_tuple, vl);
}

void test_vssseg3e16_v_i16mf2x3_m(vbool32_t mask, int16_t *base, ptrdiff_t bstride, vint16mf2x3_t v_tuple, size_t vl) {
  return __riscv_vssseg3e16(mask, base, bstride, v_tuple, vl);
}

void test_vssseg3e16_v_i16m1x3_m(vbool16_t mask, int16_t *base, ptrdiff_t bstride, vint16m1x3_t v_tuple, size_t vl) {
  return __riscv_vssseg3e16(mask, base, bstride, v_tuple, vl);
}

void test_vssseg3e16_v_i16m2x3_m(vbool8_t mask, int16_t *base, ptrdiff_t bstride, vint16m2x3_t v_tuple, size_t vl) {
  return __riscv_vssseg3e16(mask, base, bstride, v_tuple, vl);
}

void test_vssseg3e16_v_u16mf4x3_m(vbool64_t mask, uint16_t *base, ptrdiff_t bstride, vuint16mf4x3_t v_tuple, size_t vl) {
  return __riscv_vssseg3e16(mask, base, bstride, v_tuple, vl);
}

void test_vssseg3e16_v_u16mf2x3_m(vbool32_t mask, uint16_t *base, ptrdiff_t bstride, vuint16mf2x3_t v_tuple, size_t vl) {
  return __riscv_vssseg3e16(mask, base, bstride, v_tuple, vl);
}

void test_vssseg3e16_v_u16m1x3_m(vbool16_t mask, uint16_t *base, ptrdiff_t bstride, vuint16m1x3_t v_tuple, size_t vl) {
  return __riscv_vssseg3e16(mask, base, bstride, v_tuple, vl);
}

void test_vssseg3e16_v_u16m2x3_m(vbool8_t mask, uint16_t *base, ptrdiff_t bstride, vuint16m2x3_t v_tuple, size_t vl) {
  return __riscv_vssseg3e16(mask, base, bstride, v_tuple, vl);
}

