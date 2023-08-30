/* { dg-do compile } */
/* { dg-options "-march=rv32gc_zve32f -mabi=ilp32d -Wno-psabi -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include "riscv_vector.h"

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
void test_vssseg4e16_v_i16mf2x4(int16_t *base, ptrdiff_t bstride, vint16mf2x4_t v_tuple, size_t vl) {
  return __riscv_vssseg4e16_v_i16mf2x4(base, bstride, v_tuple, vl);
}

void test_vssseg4e16_v_i16m1x4(int16_t *base, ptrdiff_t bstride, vint16m1x4_t v_tuple, size_t vl) {
  return __riscv_vssseg4e16_v_i16m1x4(base, bstride, v_tuple, vl);
}

void test_vssseg4e16_v_i16m2x4(int16_t *base, ptrdiff_t bstride, vint16m2x4_t v_tuple, size_t vl) {
  return __riscv_vssseg4e16_v_i16m2x4(base, bstride, v_tuple, vl);
}

void test_vssseg4e16_v_u16mf2x4(uint16_t *base, ptrdiff_t bstride, vuint16mf2x4_t v_tuple, size_t vl) {
  return __riscv_vssseg4e16_v_u16mf2x4(base, bstride, v_tuple, vl);
}

void test_vssseg4e16_v_u16m1x4(uint16_t *base, ptrdiff_t bstride, vuint16m1x4_t v_tuple, size_t vl) {
  return __riscv_vssseg4e16_v_u16m1x4(base, bstride, v_tuple, vl);
}

void test_vssseg4e16_v_u16m2x4(uint16_t *base, ptrdiff_t bstride, vuint16m2x4_t v_tuple, size_t vl) {
  return __riscv_vssseg4e16_v_u16m2x4(base, bstride, v_tuple, vl);
}

void test_vssseg4e16_v_i16mf2x4_m(vbool32_t mask, int16_t *base, ptrdiff_t bstride, vint16mf2x4_t v_tuple, size_t vl) {
  return __riscv_vssseg4e16_v_i16mf2x4_m(mask, base, bstride, v_tuple, vl);
}

void test_vssseg4e16_v_i16m1x4_m(vbool16_t mask, int16_t *base, ptrdiff_t bstride, vint16m1x4_t v_tuple, size_t vl) {
  return __riscv_vssseg4e16_v_i16m1x4_m(mask, base, bstride, v_tuple, vl);
}

void test_vssseg4e16_v_i16m2x4_m(vbool8_t mask, int16_t *base, ptrdiff_t bstride, vint16m2x4_t v_tuple, size_t vl) {
  return __riscv_vssseg4e16_v_i16m2x4_m(mask, base, bstride, v_tuple, vl);
}

void test_vssseg4e16_v_u16mf2x4_m(vbool32_t mask, uint16_t *base, ptrdiff_t bstride, vuint16mf2x4_t v_tuple, size_t vl) {
  return __riscv_vssseg4e16_v_u16mf2x4_m(mask, base, bstride, v_tuple, vl);
}

void test_vssseg4e16_v_u16m1x4_m(vbool16_t mask, uint16_t *base, ptrdiff_t bstride, vuint16m1x4_t v_tuple, size_t vl) {
  return __riscv_vssseg4e16_v_u16m1x4_m(mask, base, bstride, v_tuple, vl);
}

void test_vssseg4e16_v_u16m2x4_m(vbool8_t mask, uint16_t *base, ptrdiff_t bstride, vuint16m2x4_t v_tuple, size_t vl) {
  return __riscv_vssseg4e16_v_u16m2x4_m(mask, base, bstride, v_tuple, vl);
}

/* { dg-final { scan-assembler-times {vseti?vli\s+[a-z0-9]+,\s*[a-z0-9]+,\s*e[0-9]+,\s*mf?[1248],\s*t[au],\s*m[au]\s+vssseg4e16\.[ivxfswum.]+\s+} 12 } } */
