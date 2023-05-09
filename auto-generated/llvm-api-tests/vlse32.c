// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -target-feature +zfh \
// RUN:   -target-feature +experimental-zvfh -disable-O0-optnone  \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

vfloat32mf2_t test_vlse32_v_f32mf2(const float *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse32_v_f32mf2(base, bstride, vl);
}

vfloat32m1_t test_vlse32_v_f32m1(const float *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse32_v_f32m1(base, bstride, vl);
}

vfloat32m2_t test_vlse32_v_f32m2(const float *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse32_v_f32m2(base, bstride, vl);
}

vfloat32m4_t test_vlse32_v_f32m4(const float *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse32_v_f32m4(base, bstride, vl);
}

vfloat32m8_t test_vlse32_v_f32m8(const float *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse32_v_f32m8(base, bstride, vl);
}

vint32mf2_t test_vlse32_v_i32mf2(const int32_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse32_v_i32mf2(base, bstride, vl);
}

vint32m1_t test_vlse32_v_i32m1(const int32_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse32_v_i32m1(base, bstride, vl);
}

vint32m2_t test_vlse32_v_i32m2(const int32_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse32_v_i32m2(base, bstride, vl);
}

vint32m4_t test_vlse32_v_i32m4(const int32_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse32_v_i32m4(base, bstride, vl);
}

vint32m8_t test_vlse32_v_i32m8(const int32_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse32_v_i32m8(base, bstride, vl);
}

vuint32mf2_t test_vlse32_v_u32mf2(const uint32_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse32_v_u32mf2(base, bstride, vl);
}

vuint32m1_t test_vlse32_v_u32m1(const uint32_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse32_v_u32m1(base, bstride, vl);
}

vuint32m2_t test_vlse32_v_u32m2(const uint32_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse32_v_u32m2(base, bstride, vl);
}

vuint32m4_t test_vlse32_v_u32m4(const uint32_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse32_v_u32m4(base, bstride, vl);
}

vuint32m8_t test_vlse32_v_u32m8(const uint32_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse32_v_u32m8(base, bstride, vl);
}

vfloat32mf2_t test_vlse32_v_f32mf2_m(vbool64_t mask, const float *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse32_v_f32mf2_m(mask, base, bstride, vl);
}

vfloat32m1_t test_vlse32_v_f32m1_m(vbool32_t mask, const float *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse32_v_f32m1_m(mask, base, bstride, vl);
}

vfloat32m2_t test_vlse32_v_f32m2_m(vbool16_t mask, const float *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse32_v_f32m2_m(mask, base, bstride, vl);
}

vfloat32m4_t test_vlse32_v_f32m4_m(vbool8_t mask, const float *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse32_v_f32m4_m(mask, base, bstride, vl);
}

vfloat32m8_t test_vlse32_v_f32m8_m(vbool4_t mask, const float *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse32_v_f32m8_m(mask, base, bstride, vl);
}

vint32mf2_t test_vlse32_v_i32mf2_m(vbool64_t mask, const int32_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse32_v_i32mf2_m(mask, base, bstride, vl);
}

vint32m1_t test_vlse32_v_i32m1_m(vbool32_t mask, const int32_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse32_v_i32m1_m(mask, base, bstride, vl);
}

vint32m2_t test_vlse32_v_i32m2_m(vbool16_t mask, const int32_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse32_v_i32m2_m(mask, base, bstride, vl);
}

vint32m4_t test_vlse32_v_i32m4_m(vbool8_t mask, const int32_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse32_v_i32m4_m(mask, base, bstride, vl);
}

vint32m8_t test_vlse32_v_i32m8_m(vbool4_t mask, const int32_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse32_v_i32m8_m(mask, base, bstride, vl);
}

vuint32mf2_t test_vlse32_v_u32mf2_m(vbool64_t mask, const uint32_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse32_v_u32mf2_m(mask, base, bstride, vl);
}

vuint32m1_t test_vlse32_v_u32m1_m(vbool32_t mask, const uint32_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse32_v_u32m1_m(mask, base, bstride, vl);
}

vuint32m2_t test_vlse32_v_u32m2_m(vbool16_t mask, const uint32_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse32_v_u32m2_m(mask, base, bstride, vl);
}

vuint32m4_t test_vlse32_v_u32m4_m(vbool8_t mask, const uint32_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse32_v_u32m4_m(mask, base, bstride, vl);
}

vuint32m8_t test_vlse32_v_u32m8_m(vbool4_t mask, const uint32_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse32_v_u32m8_m(mask, base, bstride, vl);
}
