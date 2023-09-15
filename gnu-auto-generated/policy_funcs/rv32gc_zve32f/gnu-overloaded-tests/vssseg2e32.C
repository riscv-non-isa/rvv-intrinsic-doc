/* { dg-do compile } */
/* { dg-options "-march=rv32gc_zve32f -mabi=ilp32d -Wno-psabi -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include "riscv_vector.h"

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
void test_vssseg2e32_v_f32m1x2(float32_t *base, ptrdiff_t bstride, vfloat32m1x2_t v_tuple, size_t vl) {
  return __riscv_vssseg2e32(base, bstride, v_tuple, vl);
}

void test_vssseg2e32_v_f32m2x2(float32_t *base, ptrdiff_t bstride, vfloat32m2x2_t v_tuple, size_t vl) {
  return __riscv_vssseg2e32(base, bstride, v_tuple, vl);
}

void test_vssseg2e32_v_f32m4x2(float32_t *base, ptrdiff_t bstride, vfloat32m4x2_t v_tuple, size_t vl) {
  return __riscv_vssseg2e32(base, bstride, v_tuple, vl);
}

void test_vssseg2e32_v_i32m1x2(int32_t *base, ptrdiff_t bstride, vint32m1x2_t v_tuple, size_t vl) {
  return __riscv_vssseg2e32(base, bstride, v_tuple, vl);
}

void test_vssseg2e32_v_i32m2x2(int32_t *base, ptrdiff_t bstride, vint32m2x2_t v_tuple, size_t vl) {
  return __riscv_vssseg2e32(base, bstride, v_tuple, vl);
}

void test_vssseg2e32_v_i32m4x2(int32_t *base, ptrdiff_t bstride, vint32m4x2_t v_tuple, size_t vl) {
  return __riscv_vssseg2e32(base, bstride, v_tuple, vl);
}

void test_vssseg2e32_v_u32m1x2(uint32_t *base, ptrdiff_t bstride, vuint32m1x2_t v_tuple, size_t vl) {
  return __riscv_vssseg2e32(base, bstride, v_tuple, vl);
}

void test_vssseg2e32_v_u32m2x2(uint32_t *base, ptrdiff_t bstride, vuint32m2x2_t v_tuple, size_t vl) {
  return __riscv_vssseg2e32(base, bstride, v_tuple, vl);
}

void test_vssseg2e32_v_u32m4x2(uint32_t *base, ptrdiff_t bstride, vuint32m4x2_t v_tuple, size_t vl) {
  return __riscv_vssseg2e32(base, bstride, v_tuple, vl);
}

void test_vssseg2e32_v_f32m1x2_m(vbool32_t mask, float32_t *base, ptrdiff_t bstride, vfloat32m1x2_t v_tuple, size_t vl) {
  return __riscv_vssseg2e32(mask, base, bstride, v_tuple, vl);
}

void test_vssseg2e32_v_f32m2x2_m(vbool16_t mask, float32_t *base, ptrdiff_t bstride, vfloat32m2x2_t v_tuple, size_t vl) {
  return __riscv_vssseg2e32(mask, base, bstride, v_tuple, vl);
}

void test_vssseg2e32_v_f32m4x2_m(vbool8_t mask, float32_t *base, ptrdiff_t bstride, vfloat32m4x2_t v_tuple, size_t vl) {
  return __riscv_vssseg2e32(mask, base, bstride, v_tuple, vl);
}

void test_vssseg2e32_v_i32m1x2_m(vbool32_t mask, int32_t *base, ptrdiff_t bstride, vint32m1x2_t v_tuple, size_t vl) {
  return __riscv_vssseg2e32(mask, base, bstride, v_tuple, vl);
}

void test_vssseg2e32_v_i32m2x2_m(vbool16_t mask, int32_t *base, ptrdiff_t bstride, vint32m2x2_t v_tuple, size_t vl) {
  return __riscv_vssseg2e32(mask, base, bstride, v_tuple, vl);
}

void test_vssseg2e32_v_i32m4x2_m(vbool8_t mask, int32_t *base, ptrdiff_t bstride, vint32m4x2_t v_tuple, size_t vl) {
  return __riscv_vssseg2e32(mask, base, bstride, v_tuple, vl);
}

void test_vssseg2e32_v_u32m1x2_m(vbool32_t mask, uint32_t *base, ptrdiff_t bstride, vuint32m1x2_t v_tuple, size_t vl) {
  return __riscv_vssseg2e32(mask, base, bstride, v_tuple, vl);
}

void test_vssseg2e32_v_u32m2x2_m(vbool16_t mask, uint32_t *base, ptrdiff_t bstride, vuint32m2x2_t v_tuple, size_t vl) {
  return __riscv_vssseg2e32(mask, base, bstride, v_tuple, vl);
}

void test_vssseg2e32_v_u32m4x2_m(vbool8_t mask, uint32_t *base, ptrdiff_t bstride, vuint32m4x2_t v_tuple, size_t vl) {
  return __riscv_vssseg2e32(mask, base, bstride, v_tuple, vl);
}

/* { dg-final { scan-assembler-times {vseti?vli\s+[a-z0-9]+,\s*[a-z0-9]+,\s*e[0-9]+,\s*mf?[1248],\s*t[au],\s*m[au]\s+vssseg2e32\.[ivxfswum.]+\s+} 18 } } */
