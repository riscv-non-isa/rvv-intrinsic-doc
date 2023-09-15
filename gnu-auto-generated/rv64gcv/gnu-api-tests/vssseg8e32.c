/* { dg-do compile } */
/* { dg-options "-march=rv64gcv -mabi=lp64d -Wno-psabi -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include "riscv_vector.h"

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
void test_vssseg8e32_v_f32mf2x8(float32_t *base, ptrdiff_t bstride, vfloat32mf2x8_t v_tuple, size_t vl) {
  return __riscv_vssseg8e32_v_f32mf2x8(base, bstride, v_tuple, vl);
}

void test_vssseg8e32_v_f32m1x8(float32_t *base, ptrdiff_t bstride, vfloat32m1x8_t v_tuple, size_t vl) {
  return __riscv_vssseg8e32_v_f32m1x8(base, bstride, v_tuple, vl);
}

void test_vssseg8e32_v_i32mf2x8(int32_t *base, ptrdiff_t bstride, vint32mf2x8_t v_tuple, size_t vl) {
  return __riscv_vssseg8e32_v_i32mf2x8(base, bstride, v_tuple, vl);
}

void test_vssseg8e32_v_i32m1x8(int32_t *base, ptrdiff_t bstride, vint32m1x8_t v_tuple, size_t vl) {
  return __riscv_vssseg8e32_v_i32m1x8(base, bstride, v_tuple, vl);
}

void test_vssseg8e32_v_u32mf2x8(uint32_t *base, ptrdiff_t bstride, vuint32mf2x8_t v_tuple, size_t vl) {
  return __riscv_vssseg8e32_v_u32mf2x8(base, bstride, v_tuple, vl);
}

void test_vssseg8e32_v_u32m1x8(uint32_t *base, ptrdiff_t bstride, vuint32m1x8_t v_tuple, size_t vl) {
  return __riscv_vssseg8e32_v_u32m1x8(base, bstride, v_tuple, vl);
}

void test_vssseg8e32_v_f32mf2x8_m(vbool64_t mask, float32_t *base, ptrdiff_t bstride, vfloat32mf2x8_t v_tuple, size_t vl) {
  return __riscv_vssseg8e32_v_f32mf2x8_m(mask, base, bstride, v_tuple, vl);
}

void test_vssseg8e32_v_f32m1x8_m(vbool32_t mask, float32_t *base, ptrdiff_t bstride, vfloat32m1x8_t v_tuple, size_t vl) {
  return __riscv_vssseg8e32_v_f32m1x8_m(mask, base, bstride, v_tuple, vl);
}

void test_vssseg8e32_v_i32mf2x8_m(vbool64_t mask, int32_t *base, ptrdiff_t bstride, vint32mf2x8_t v_tuple, size_t vl) {
  return __riscv_vssseg8e32_v_i32mf2x8_m(mask, base, bstride, v_tuple, vl);
}

void test_vssseg8e32_v_i32m1x8_m(vbool32_t mask, int32_t *base, ptrdiff_t bstride, vint32m1x8_t v_tuple, size_t vl) {
  return __riscv_vssseg8e32_v_i32m1x8_m(mask, base, bstride, v_tuple, vl);
}

void test_vssseg8e32_v_u32mf2x8_m(vbool64_t mask, uint32_t *base, ptrdiff_t bstride, vuint32mf2x8_t v_tuple, size_t vl) {
  return __riscv_vssseg8e32_v_u32mf2x8_m(mask, base, bstride, v_tuple, vl);
}

void test_vssseg8e32_v_u32m1x8_m(vbool32_t mask, uint32_t *base, ptrdiff_t bstride, vuint32m1x8_t v_tuple, size_t vl) {
  return __riscv_vssseg8e32_v_u32m1x8_m(mask, base, bstride, v_tuple, vl);
}

/* { dg-final { scan-assembler-times {vseti?vli\s+[a-z0-9]+,\s*[a-z0-9]+,\s*e[0-9]+,\s*mf?[1248],\s*t[au],\s*m[au]\s+vssseg8e32\.[ivxfswum.]+\s+} 12 } } */
