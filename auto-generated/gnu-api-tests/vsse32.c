/* { dg-do compile } */
/* { dg-options "-march=rv64gcv -mabi=lp64d -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include <riscv_vector.h>

void test_vsse32_v_f32mf2(float32_t *base, ptrdiff_t bstride, vfloat32mf2_t value, size_t vl) {
  return __riscv_vsse32_v_f32mf2(base, bstride, value, vl);
}

void test_vsse32_v_f32m1(float32_t *base, ptrdiff_t bstride, vfloat32m1_t value, size_t vl) {
  return __riscv_vsse32_v_f32m1(base, bstride, value, vl);
}

void test_vsse32_v_f32m2(float32_t *base, ptrdiff_t bstride, vfloat32m2_t value, size_t vl) {
  return __riscv_vsse32_v_f32m2(base, bstride, value, vl);
}

void test_vsse32_v_f32m4(float32_t *base, ptrdiff_t bstride, vfloat32m4_t value, size_t vl) {
  return __riscv_vsse32_v_f32m4(base, bstride, value, vl);
}

void test_vsse32_v_f32m8(float32_t *base, ptrdiff_t bstride, vfloat32m8_t value, size_t vl) {
  return __riscv_vsse32_v_f32m8(base, bstride, value, vl);
}

void test_vsse32_v_i32mf2(int32_t *base, ptrdiff_t bstride, vint32mf2_t value, size_t vl) {
  return __riscv_vsse32_v_i32mf2(base, bstride, value, vl);
}

void test_vsse32_v_i32m1(int32_t *base, ptrdiff_t bstride, vint32m1_t value, size_t vl) {
  return __riscv_vsse32_v_i32m1(base, bstride, value, vl);
}

void test_vsse32_v_i32m2(int32_t *base, ptrdiff_t bstride, vint32m2_t value, size_t vl) {
  return __riscv_vsse32_v_i32m2(base, bstride, value, vl);
}

void test_vsse32_v_i32m4(int32_t *base, ptrdiff_t bstride, vint32m4_t value, size_t vl) {
  return __riscv_vsse32_v_i32m4(base, bstride, value, vl);
}

void test_vsse32_v_i32m8(int32_t *base, ptrdiff_t bstride, vint32m8_t value, size_t vl) {
  return __riscv_vsse32_v_i32m8(base, bstride, value, vl);
}

void test_vsse32_v_u32mf2(uint32_t *base, ptrdiff_t bstride, vuint32mf2_t value, size_t vl) {
  return __riscv_vsse32_v_u32mf2(base, bstride, value, vl);
}

void test_vsse32_v_u32m1(uint32_t *base, ptrdiff_t bstride, vuint32m1_t value, size_t vl) {
  return __riscv_vsse32_v_u32m1(base, bstride, value, vl);
}

void test_vsse32_v_u32m2(uint32_t *base, ptrdiff_t bstride, vuint32m2_t value, size_t vl) {
  return __riscv_vsse32_v_u32m2(base, bstride, value, vl);
}

void test_vsse32_v_u32m4(uint32_t *base, ptrdiff_t bstride, vuint32m4_t value, size_t vl) {
  return __riscv_vsse32_v_u32m4(base, bstride, value, vl);
}

void test_vsse32_v_u32m8(uint32_t *base, ptrdiff_t bstride, vuint32m8_t value, size_t vl) {
  return __riscv_vsse32_v_u32m8(base, bstride, value, vl);
}

void test_vsse32_v_f32mf2_m(vbool64_t mask, float32_t *base, ptrdiff_t bstride, vfloat32mf2_t value, size_t vl) {
  return __riscv_vsse32_v_f32mf2_m(mask, base, bstride, value, vl);
}

void test_vsse32_v_f32m1_m(vbool32_t mask, float32_t *base, ptrdiff_t bstride, vfloat32m1_t value, size_t vl) {
  return __riscv_vsse32_v_f32m1_m(mask, base, bstride, value, vl);
}

void test_vsse32_v_f32m2_m(vbool16_t mask, float32_t *base, ptrdiff_t bstride, vfloat32m2_t value, size_t vl) {
  return __riscv_vsse32_v_f32m2_m(mask, base, bstride, value, vl);
}

void test_vsse32_v_f32m4_m(vbool8_t mask, float32_t *base, ptrdiff_t bstride, vfloat32m4_t value, size_t vl) {
  return __riscv_vsse32_v_f32m4_m(mask, base, bstride, value, vl);
}

void test_vsse32_v_f32m8_m(vbool4_t mask, float32_t *base, ptrdiff_t bstride, vfloat32m8_t value, size_t vl) {
  return __riscv_vsse32_v_f32m8_m(mask, base, bstride, value, vl);
}

void test_vsse32_v_i32mf2_m(vbool64_t mask, int32_t *base, ptrdiff_t bstride, vint32mf2_t value, size_t vl) {
  return __riscv_vsse32_v_i32mf2_m(mask, base, bstride, value, vl);
}

void test_vsse32_v_i32m1_m(vbool32_t mask, int32_t *base, ptrdiff_t bstride, vint32m1_t value, size_t vl) {
  return __riscv_vsse32_v_i32m1_m(mask, base, bstride, value, vl);
}

void test_vsse32_v_i32m2_m(vbool16_t mask, int32_t *base, ptrdiff_t bstride, vint32m2_t value, size_t vl) {
  return __riscv_vsse32_v_i32m2_m(mask, base, bstride, value, vl);
}

void test_vsse32_v_i32m4_m(vbool8_t mask, int32_t *base, ptrdiff_t bstride, vint32m4_t value, size_t vl) {
  return __riscv_vsse32_v_i32m4_m(mask, base, bstride, value, vl);
}

void test_vsse32_v_i32m8_m(vbool4_t mask, int32_t *base, ptrdiff_t bstride, vint32m8_t value, size_t vl) {
  return __riscv_vsse32_v_i32m8_m(mask, base, bstride, value, vl);
}

void test_vsse32_v_u32mf2_m(vbool64_t mask, uint32_t *base, ptrdiff_t bstride, vuint32mf2_t value, size_t vl) {
  return __riscv_vsse32_v_u32mf2_m(mask, base, bstride, value, vl);
}

void test_vsse32_v_u32m1_m(vbool32_t mask, uint32_t *base, ptrdiff_t bstride, vuint32m1_t value, size_t vl) {
  return __riscv_vsse32_v_u32m1_m(mask, base, bstride, value, vl);
}

void test_vsse32_v_u32m2_m(vbool16_t mask, uint32_t *base, ptrdiff_t bstride, vuint32m2_t value, size_t vl) {
  return __riscv_vsse32_v_u32m2_m(mask, base, bstride, value, vl);
}

void test_vsse32_v_u32m4_m(vbool8_t mask, uint32_t *base, ptrdiff_t bstride, vuint32m4_t value, size_t vl) {
  return __riscv_vsse32_v_u32m4_m(mask, base, bstride, value, vl);
}

void test_vsse32_v_u32m8_m(vbool4_t mask, uint32_t *base, ptrdiff_t bstride, vuint32m8_t value, size_t vl) {
  return __riscv_vsse32_v_u32m8_m(mask, base, bstride, value, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*[a-x0-9]+,\s*e[0-9]+,\s*m[f]?[1248],\s*t[au],\s*m[au]\s+vsse32\.[, a-x0-9()]+} 30 } } */
