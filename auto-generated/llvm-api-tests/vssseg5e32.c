// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -target-feature +zfh \
// RUN:   -target-feature +experimental-zvfh -disable-O0-optnone  \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

void test_vssseg5e32_v_f32mf2x5(float *base, ptrdiff_t bstride, vfloat32mf2x5_t v_tuple, size_t vl) {
  return __riscv_vssseg5e32_v_f32mf2x5(base, bstride, v_tuple, vl);
}

void test_vssseg5e32_v_f32m1x5(float *base, ptrdiff_t bstride, vfloat32m1x5_t v_tuple, size_t vl) {
  return __riscv_vssseg5e32_v_f32m1x5(base, bstride, v_tuple, vl);
}

void test_vssseg5e32_v_i32mf2x5(int32_t *base, ptrdiff_t bstride, vint32mf2x5_t v_tuple, size_t vl) {
  return __riscv_vssseg5e32_v_i32mf2x5(base, bstride, v_tuple, vl);
}

void test_vssseg5e32_v_i32m1x5(int32_t *base, ptrdiff_t bstride, vint32m1x5_t v_tuple, size_t vl) {
  return __riscv_vssseg5e32_v_i32m1x5(base, bstride, v_tuple, vl);
}

void test_vssseg5e32_v_u32mf2x5(uint32_t *base, ptrdiff_t bstride, vuint32mf2x5_t v_tuple, size_t vl) {
  return __riscv_vssseg5e32_v_u32mf2x5(base, bstride, v_tuple, vl);
}

void test_vssseg5e32_v_u32m1x5(uint32_t *base, ptrdiff_t bstride, vuint32m1x5_t v_tuple, size_t vl) {
  return __riscv_vssseg5e32_v_u32m1x5(base, bstride, v_tuple, vl);
}

void test_vssseg5e32_v_f32mf2x5_m(vbool64_t mask, float *base, ptrdiff_t bstride, vfloat32mf2x5_t v_tuple, size_t vl) {
  return __riscv_vssseg5e32_v_f32mf2x5_m(mask, base, bstride, v_tuple, vl);
}

void test_vssseg5e32_v_f32m1x5_m(vbool32_t mask, float *base, ptrdiff_t bstride, vfloat32m1x5_t v_tuple, size_t vl) {
  return __riscv_vssseg5e32_v_f32m1x5_m(mask, base, bstride, v_tuple, vl);
}

void test_vssseg5e32_v_i32mf2x5_m(vbool64_t mask, int32_t *base, ptrdiff_t bstride, vint32mf2x5_t v_tuple, size_t vl) {
  return __riscv_vssseg5e32_v_i32mf2x5_m(mask, base, bstride, v_tuple, vl);
}

void test_vssseg5e32_v_i32m1x5_m(vbool32_t mask, int32_t *base, ptrdiff_t bstride, vint32m1x5_t v_tuple, size_t vl) {
  return __riscv_vssseg5e32_v_i32m1x5_m(mask, base, bstride, v_tuple, vl);
}

void test_vssseg5e32_v_u32mf2x5_m(vbool64_t mask, uint32_t *base, ptrdiff_t bstride, vuint32mf2x5_t v_tuple, size_t vl) {
  return __riscv_vssseg5e32_v_u32mf2x5_m(mask, base, bstride, v_tuple, vl);
}

void test_vssseg5e32_v_u32m1x5_m(vbool32_t mask, uint32_t *base, ptrdiff_t bstride, vuint32m1x5_t v_tuple, size_t vl) {
  return __riscv_vssseg5e32_v_u32m1x5_m(mask, base, bstride, v_tuple, vl);
}

