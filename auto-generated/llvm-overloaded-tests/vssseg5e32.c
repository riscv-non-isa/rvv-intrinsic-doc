// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -target-feature +zfh \
// RUN:   -target-feature +experimental-zvfh -disable-O0-optnone  \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

void test_vssseg5e32_v_f32mf2(float *base, ptrdiff_t bstride, vfloat32mf2_t v0, vfloat32mf2_t v1, vfloat32mf2_t v2, vfloat32mf2_t v3, vfloat32mf2_t v4, size_t vl) {
  return __riscv_vssseg5e32(base, bstride, v0, v1, v2, v3, v4, vl);
}

void test_vssseg5e32_v_f32m1(float *base, ptrdiff_t bstride, vfloat32m1_t v0, vfloat32m1_t v1, vfloat32m1_t v2, vfloat32m1_t v3, vfloat32m1_t v4, size_t vl) {
  return __riscv_vssseg5e32(base, bstride, v0, v1, v2, v3, v4, vl);
}

void test_vssseg5e32_v_i32mf2(int32_t *base, ptrdiff_t bstride, vint32mf2_t v0, vint32mf2_t v1, vint32mf2_t v2, vint32mf2_t v3, vint32mf2_t v4, size_t vl) {
  return __riscv_vssseg5e32(base, bstride, v0, v1, v2, v3, v4, vl);
}

void test_vssseg5e32_v_i32m1(int32_t *base, ptrdiff_t bstride, vint32m1_t v0, vint32m1_t v1, vint32m1_t v2, vint32m1_t v3, vint32m1_t v4, size_t vl) {
  return __riscv_vssseg5e32(base, bstride, v0, v1, v2, v3, v4, vl);
}

void test_vssseg5e32_v_u32mf2(uint32_t *base, ptrdiff_t bstride, vuint32mf2_t v0, vuint32mf2_t v1, vuint32mf2_t v2, vuint32mf2_t v3, vuint32mf2_t v4, size_t vl) {
  return __riscv_vssseg5e32(base, bstride, v0, v1, v2, v3, v4, vl);
}

void test_vssseg5e32_v_u32m1(uint32_t *base, ptrdiff_t bstride, vuint32m1_t v0, vuint32m1_t v1, vuint32m1_t v2, vuint32m1_t v3, vuint32m1_t v4, size_t vl) {
  return __riscv_vssseg5e32(base, bstride, v0, v1, v2, v3, v4, vl);
}

void test_vssseg5e32_v_f32mf2_m(vbool64_t mask, float *base, ptrdiff_t bstride, vfloat32mf2_t v0, vfloat32mf2_t v1, vfloat32mf2_t v2, vfloat32mf2_t v3, vfloat32mf2_t v4, size_t vl) {
  return __riscv_vssseg5e32(mask, base, bstride, v0, v1, v2, v3, v4, vl);
}

void test_vssseg5e32_v_f32m1_m(vbool32_t mask, float *base, ptrdiff_t bstride, vfloat32m1_t v0, vfloat32m1_t v1, vfloat32m1_t v2, vfloat32m1_t v3, vfloat32m1_t v4, size_t vl) {
  return __riscv_vssseg5e32(mask, base, bstride, v0, v1, v2, v3, v4, vl);
}

void test_vssseg5e32_v_i32mf2_m(vbool64_t mask, int32_t *base, ptrdiff_t bstride, vint32mf2_t v0, vint32mf2_t v1, vint32mf2_t v2, vint32mf2_t v3, vint32mf2_t v4, size_t vl) {
  return __riscv_vssseg5e32(mask, base, bstride, v0, v1, v2, v3, v4, vl);
}

void test_vssseg5e32_v_i32m1_m(vbool32_t mask, int32_t *base, ptrdiff_t bstride, vint32m1_t v0, vint32m1_t v1, vint32m1_t v2, vint32m1_t v3, vint32m1_t v4, size_t vl) {
  return __riscv_vssseg5e32(mask, base, bstride, v0, v1, v2, v3, v4, vl);
}

void test_vssseg5e32_v_u32mf2_m(vbool64_t mask, uint32_t *base, ptrdiff_t bstride, vuint32mf2_t v0, vuint32mf2_t v1, vuint32mf2_t v2, vuint32mf2_t v3, vuint32mf2_t v4, size_t vl) {
  return __riscv_vssseg5e32(mask, base, bstride, v0, v1, v2, v3, v4, vl);
}

void test_vssseg5e32_v_u32m1_m(vbool32_t mask, uint32_t *base, ptrdiff_t bstride, vuint32m1_t v0, vuint32m1_t v1, vuint32m1_t v2, vuint32m1_t v3, vuint32m1_t v4, size_t vl) {
  return __riscv_vssseg5e32(mask, base, bstride, v0, v1, v2, v3, v4, vl);
}
