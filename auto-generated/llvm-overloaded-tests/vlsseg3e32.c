// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -target-feature +zfh \
// RUN:   -target-feature +experimental-zvfh -disable-O0-optnone  \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

void test_vlsseg3e32_v_f32mf2_m(vfloat32mf2_t *v0, vfloat32mf2_t *v1, vfloat32mf2_t *v2, vbool64_t mask, const float *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg3e32(v0, v1, v2, mask, base, bstride, vl);
}

void test_vlsseg3e32_v_f32m1_m(vfloat32m1_t *v0, vfloat32m1_t *v1, vfloat32m1_t *v2, vbool32_t mask, const float *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg3e32(v0, v1, v2, mask, base, bstride, vl);
}

void test_vlsseg3e32_v_f32m2_m(vfloat32m2_t *v0, vfloat32m2_t *v1, vfloat32m2_t *v2, vbool16_t mask, const float *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg3e32(v0, v1, v2, mask, base, bstride, vl);
}

void test_vlsseg3e32_v_i32mf2_m(vint32mf2_t *v0, vint32mf2_t *v1, vint32mf2_t *v2, vbool64_t mask, const int32_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg3e32(v0, v1, v2, mask, base, bstride, vl);
}

void test_vlsseg3e32_v_i32m1_m(vint32m1_t *v0, vint32m1_t *v1, vint32m1_t *v2, vbool32_t mask, const int32_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg3e32(v0, v1, v2, mask, base, bstride, vl);
}

void test_vlsseg3e32_v_i32m2_m(vint32m2_t *v0, vint32m2_t *v1, vint32m2_t *v2, vbool16_t mask, const int32_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg3e32(v0, v1, v2, mask, base, bstride, vl);
}

void test_vlsseg3e32_v_u32mf2_m(vuint32mf2_t *v0, vuint32mf2_t *v1, vuint32mf2_t *v2, vbool64_t mask, const uint32_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg3e32(v0, v1, v2, mask, base, bstride, vl);
}

void test_vlsseg3e32_v_u32m1_m(vuint32m1_t *v0, vuint32m1_t *v1, vuint32m1_t *v2, vbool32_t mask, const uint32_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg3e32(v0, v1, v2, mask, base, bstride, vl);
}

void test_vlsseg3e32_v_u32m2_m(vuint32m2_t *v0, vuint32m2_t *v1, vuint32m2_t *v2, vbool16_t mask, const uint32_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg3e32(v0, v1, v2, mask, base, bstride, vl);
}
