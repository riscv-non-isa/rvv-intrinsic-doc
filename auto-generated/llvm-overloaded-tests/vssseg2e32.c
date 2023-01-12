// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -target-feature +zfh \
// RUN:   -target-feature +experimental-zvfh -disable-O0-optnone  \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

void test_vssseg2e32_v_f32mf2(float *base, ptrdiff_t bstride, vfloat32mf2_t v0, vfloat32mf2_t v1, size_t vl) {
  return vssseg2e32(base, bstride, v0, v1, vl);
}

void test_vssseg2e32_v_f32m1(float *base, ptrdiff_t bstride, vfloat32m1_t v0, vfloat32m1_t v1, size_t vl) {
  return vssseg2e32(base, bstride, v0, v1, vl);
}

void test_vssseg2e32_v_f32m2(float *base, ptrdiff_t bstride, vfloat32m2_t v0, vfloat32m2_t v1, size_t vl) {
  return vssseg2e32(base, bstride, v0, v1, vl);
}

void test_vssseg2e32_v_f32m4(float *base, ptrdiff_t bstride, vfloat32m4_t v0, vfloat32m4_t v1, size_t vl) {
  return vssseg2e32(base, bstride, v0, v1, vl);
}

void test_vssseg2e32_v_i32mf2(int32_t *base, ptrdiff_t bstride, vint32mf2_t v0, vint32mf2_t v1, size_t vl) {
  return vssseg2e32(base, bstride, v0, v1, vl);
}

void test_vssseg2e32_v_i32m1(int32_t *base, ptrdiff_t bstride, vint32m1_t v0, vint32m1_t v1, size_t vl) {
  return vssseg2e32(base, bstride, v0, v1, vl);
}

void test_vssseg2e32_v_i32m2(int32_t *base, ptrdiff_t bstride, vint32m2_t v0, vint32m2_t v1, size_t vl) {
  return vssseg2e32(base, bstride, v0, v1, vl);
}

void test_vssseg2e32_v_i32m4(int32_t *base, ptrdiff_t bstride, vint32m4_t v0, vint32m4_t v1, size_t vl) {
  return vssseg2e32(base, bstride, v0, v1, vl);
}

void test_vssseg2e32_v_u32mf2(uint32_t *base, ptrdiff_t bstride, vuint32mf2_t v0, vuint32mf2_t v1, size_t vl) {
  return vssseg2e32(base, bstride, v0, v1, vl);
}

void test_vssseg2e32_v_u32m1(uint32_t *base, ptrdiff_t bstride, vuint32m1_t v0, vuint32m1_t v1, size_t vl) {
  return vssseg2e32(base, bstride, v0, v1, vl);
}

void test_vssseg2e32_v_u32m2(uint32_t *base, ptrdiff_t bstride, vuint32m2_t v0, vuint32m2_t v1, size_t vl) {
  return vssseg2e32(base, bstride, v0, v1, vl);
}

void test_vssseg2e32_v_u32m4(uint32_t *base, ptrdiff_t bstride, vuint32m4_t v0, vuint32m4_t v1, size_t vl) {
  return vssseg2e32(base, bstride, v0, v1, vl);
}

void test_vssseg2e32_v_f32mf2_m(vbool64_t mask, float *base, ptrdiff_t bstride, vfloat32mf2_t v0, vfloat32mf2_t v1, size_t vl) {
  return vssseg2e32(mask, base, bstride, v0, v1, vl);
}

void test_vssseg2e32_v_f32m1_m(vbool32_t mask, float *base, ptrdiff_t bstride, vfloat32m1_t v0, vfloat32m1_t v1, size_t vl) {
  return vssseg2e32(mask, base, bstride, v0, v1, vl);
}

void test_vssseg2e32_v_f32m2_m(vbool16_t mask, float *base, ptrdiff_t bstride, vfloat32m2_t v0, vfloat32m2_t v1, size_t vl) {
  return vssseg2e32(mask, base, bstride, v0, v1, vl);
}

void test_vssseg2e32_v_f32m4_m(vbool8_t mask, float *base, ptrdiff_t bstride, vfloat32m4_t v0, vfloat32m4_t v1, size_t vl) {
  return vssseg2e32(mask, base, bstride, v0, v1, vl);
}

void test_vssseg2e32_v_i32mf2_m(vbool64_t mask, int32_t *base, ptrdiff_t bstride, vint32mf2_t v0, vint32mf2_t v1, size_t vl) {
  return vssseg2e32(mask, base, bstride, v0, v1, vl);
}

void test_vssseg2e32_v_i32m1_m(vbool32_t mask, int32_t *base, ptrdiff_t bstride, vint32m1_t v0, vint32m1_t v1, size_t vl) {
  return vssseg2e32(mask, base, bstride, v0, v1, vl);
}

void test_vssseg2e32_v_i32m2_m(vbool16_t mask, int32_t *base, ptrdiff_t bstride, vint32m2_t v0, vint32m2_t v1, size_t vl) {
  return vssseg2e32(mask, base, bstride, v0, v1, vl);
}

void test_vssseg2e32_v_i32m4_m(vbool8_t mask, int32_t *base, ptrdiff_t bstride, vint32m4_t v0, vint32m4_t v1, size_t vl) {
  return vssseg2e32(mask, base, bstride, v0, v1, vl);
}

void test_vssseg2e32_v_u32mf2_m(vbool64_t mask, uint32_t *base, ptrdiff_t bstride, vuint32mf2_t v0, vuint32mf2_t v1, size_t vl) {
  return vssseg2e32(mask, base, bstride, v0, v1, vl);
}

void test_vssseg2e32_v_u32m1_m(vbool32_t mask, uint32_t *base, ptrdiff_t bstride, vuint32m1_t v0, vuint32m1_t v1, size_t vl) {
  return vssseg2e32(mask, base, bstride, v0, v1, vl);
}

void test_vssseg2e32_v_u32m2_m(vbool16_t mask, uint32_t *base, ptrdiff_t bstride, vuint32m2_t v0, vuint32m2_t v1, size_t vl) {
  return vssseg2e32(mask, base, bstride, v0, v1, vl);
}

void test_vssseg2e32_v_u32m4_m(vbool8_t mask, uint32_t *base, ptrdiff_t bstride, vuint32m4_t v0, vuint32m4_t v1, size_t vl) {
  return vssseg2e32(mask, base, bstride, v0, v1, vl);
}

