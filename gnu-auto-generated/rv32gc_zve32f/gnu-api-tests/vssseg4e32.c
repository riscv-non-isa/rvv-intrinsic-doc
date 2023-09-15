/* { dg-do compile } */
/* { dg-options "-march=rv32gc_zve32f -mabi=ilp32d -Wno-psabi -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include "riscv_vector.h"

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
void test_vssseg4e32_v_f32m1x4(float32_t *base, ptrdiff_t bstride, vfloat32m1x4_t v_tuple, size_t vl) {
  return __riscv_vssseg4e32_v_f32m1x4(base, bstride, v_tuple, vl);
}

void test_vssseg4e32_v_f32m2x4(float32_t *base, ptrdiff_t bstride, vfloat32m2x4_t v_tuple, size_t vl) {
  return __riscv_vssseg4e32_v_f32m2x4(base, bstride, v_tuple, vl);
}

void test_vssseg4e32_v_i32m1x4(int32_t *base, ptrdiff_t bstride, vint32m1x4_t v_tuple, size_t vl) {
  return __riscv_vssseg4e32_v_i32m1x4(base, bstride, v_tuple, vl);
}

void test_vssseg4e32_v_i32m2x4(int32_t *base, ptrdiff_t bstride, vint32m2x4_t v_tuple, size_t vl) {
  return __riscv_vssseg4e32_v_i32m2x4(base, bstride, v_tuple, vl);
}

void test_vssseg4e32_v_u32m1x4(uint32_t *base, ptrdiff_t bstride, vuint32m1x4_t v_tuple, size_t vl) {
  return __riscv_vssseg4e32_v_u32m1x4(base, bstride, v_tuple, vl);
}

void test_vssseg4e32_v_u32m2x4(uint32_t *base, ptrdiff_t bstride, vuint32m2x4_t v_tuple, size_t vl) {
  return __riscv_vssseg4e32_v_u32m2x4(base, bstride, v_tuple, vl);
}

void test_vssseg4e32_v_f32m1x4_m(vbool32_t mask, float32_t *base, ptrdiff_t bstride, vfloat32m1x4_t v_tuple, size_t vl) {
  return __riscv_vssseg4e32_v_f32m1x4_m(mask, base, bstride, v_tuple, vl);
}

void test_vssseg4e32_v_f32m2x4_m(vbool16_t mask, float32_t *base, ptrdiff_t bstride, vfloat32m2x4_t v_tuple, size_t vl) {
  return __riscv_vssseg4e32_v_f32m2x4_m(mask, base, bstride, v_tuple, vl);
}

void test_vssseg4e32_v_i32m1x4_m(vbool32_t mask, int32_t *base, ptrdiff_t bstride, vint32m1x4_t v_tuple, size_t vl) {
  return __riscv_vssseg4e32_v_i32m1x4_m(mask, base, bstride, v_tuple, vl);
}

void test_vssseg4e32_v_i32m2x4_m(vbool16_t mask, int32_t *base, ptrdiff_t bstride, vint32m2x4_t v_tuple, size_t vl) {
  return __riscv_vssseg4e32_v_i32m2x4_m(mask, base, bstride, v_tuple, vl);
}

void test_vssseg4e32_v_u32m1x4_m(vbool32_t mask, uint32_t *base, ptrdiff_t bstride, vuint32m1x4_t v_tuple, size_t vl) {
  return __riscv_vssseg4e32_v_u32m1x4_m(mask, base, bstride, v_tuple, vl);
}

void test_vssseg4e32_v_u32m2x4_m(vbool16_t mask, uint32_t *base, ptrdiff_t bstride, vuint32m2x4_t v_tuple, size_t vl) {
  return __riscv_vssseg4e32_v_u32m2x4_m(mask, base, bstride, v_tuple, vl);
}

/* { dg-final { scan-assembler-times {vseti?vli\s+[a-z0-9]+,\s*[a-z0-9]+,\s*e[0-9]+,\s*mf?[1248],\s*t[au],\s*m[au]\s+vssseg4e32\.[ivxfswum.]+\s+} 12 } } */
