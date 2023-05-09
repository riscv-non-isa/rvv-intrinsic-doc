// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -target-feature +zfh \
// RUN:   -target-feature +experimental-zvfh -disable-O0-optnone  \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

vfloat32mf2_t test_vlse32_v_f32mf2_tu(vfloat32mf2_t maskedoff, const float *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse32_v_f32mf2_tu(maskedoff, base, bstride, vl);
}

vfloat32m1_t test_vlse32_v_f32m1_tu(vfloat32m1_t maskedoff, const float *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse32_v_f32m1_tu(maskedoff, base, bstride, vl);
}

vfloat32m2_t test_vlse32_v_f32m2_tu(vfloat32m2_t maskedoff, const float *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse32_v_f32m2_tu(maskedoff, base, bstride, vl);
}

vfloat32m4_t test_vlse32_v_f32m4_tu(vfloat32m4_t maskedoff, const float *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse32_v_f32m4_tu(maskedoff, base, bstride, vl);
}

vfloat32m8_t test_vlse32_v_f32m8_tu(vfloat32m8_t maskedoff, const float *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse32_v_f32m8_tu(maskedoff, base, bstride, vl);
}

vint32mf2_t test_vlse32_v_i32mf2_tu(vint32mf2_t maskedoff, const int32_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse32_v_i32mf2_tu(maskedoff, base, bstride, vl);
}

vint32m1_t test_vlse32_v_i32m1_tu(vint32m1_t maskedoff, const int32_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse32_v_i32m1_tu(maskedoff, base, bstride, vl);
}

vint32m2_t test_vlse32_v_i32m2_tu(vint32m2_t maskedoff, const int32_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse32_v_i32m2_tu(maskedoff, base, bstride, vl);
}

vint32m4_t test_vlse32_v_i32m4_tu(vint32m4_t maskedoff, const int32_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse32_v_i32m4_tu(maskedoff, base, bstride, vl);
}

vint32m8_t test_vlse32_v_i32m8_tu(vint32m8_t maskedoff, const int32_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse32_v_i32m8_tu(maskedoff, base, bstride, vl);
}

vuint32mf2_t test_vlse32_v_u32mf2_tu(vuint32mf2_t maskedoff, const uint32_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse32_v_u32mf2_tu(maskedoff, base, bstride, vl);
}

vuint32m1_t test_vlse32_v_u32m1_tu(vuint32m1_t maskedoff, const uint32_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse32_v_u32m1_tu(maskedoff, base, bstride, vl);
}

vuint32m2_t test_vlse32_v_u32m2_tu(vuint32m2_t maskedoff, const uint32_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse32_v_u32m2_tu(maskedoff, base, bstride, vl);
}

vuint32m4_t test_vlse32_v_u32m4_tu(vuint32m4_t maskedoff, const uint32_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse32_v_u32m4_tu(maskedoff, base, bstride, vl);
}

vuint32m8_t test_vlse32_v_u32m8_tu(vuint32m8_t maskedoff, const uint32_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse32_v_u32m8_tu(maskedoff, base, bstride, vl);
}

vfloat32mf2_t test_vlse32_v_f32mf2_tum(vbool64_t mask, vfloat32mf2_t maskedoff, const float *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse32_v_f32mf2_tum(mask, maskedoff, base, bstride, vl);
}

vfloat32m1_t test_vlse32_v_f32m1_tum(vbool32_t mask, vfloat32m1_t maskedoff, const float *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse32_v_f32m1_tum(mask, maskedoff, base, bstride, vl);
}

vfloat32m2_t test_vlse32_v_f32m2_tum(vbool16_t mask, vfloat32m2_t maskedoff, const float *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse32_v_f32m2_tum(mask, maskedoff, base, bstride, vl);
}

vfloat32m4_t test_vlse32_v_f32m4_tum(vbool8_t mask, vfloat32m4_t maskedoff, const float *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse32_v_f32m4_tum(mask, maskedoff, base, bstride, vl);
}

vfloat32m8_t test_vlse32_v_f32m8_tum(vbool4_t mask, vfloat32m8_t maskedoff, const float *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse32_v_f32m8_tum(mask, maskedoff, base, bstride, vl);
}

vint32mf2_t test_vlse32_v_i32mf2_tum(vbool64_t mask, vint32mf2_t maskedoff, const int32_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse32_v_i32mf2_tum(mask, maskedoff, base, bstride, vl);
}

vint32m1_t test_vlse32_v_i32m1_tum(vbool32_t mask, vint32m1_t maskedoff, const int32_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse32_v_i32m1_tum(mask, maskedoff, base, bstride, vl);
}

vint32m2_t test_vlse32_v_i32m2_tum(vbool16_t mask, vint32m2_t maskedoff, const int32_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse32_v_i32m2_tum(mask, maskedoff, base, bstride, vl);
}

vint32m4_t test_vlse32_v_i32m4_tum(vbool8_t mask, vint32m4_t maskedoff, const int32_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse32_v_i32m4_tum(mask, maskedoff, base, bstride, vl);
}

vint32m8_t test_vlse32_v_i32m8_tum(vbool4_t mask, vint32m8_t maskedoff, const int32_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse32_v_i32m8_tum(mask, maskedoff, base, bstride, vl);
}

vuint32mf2_t test_vlse32_v_u32mf2_tum(vbool64_t mask, vuint32mf2_t maskedoff, const uint32_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse32_v_u32mf2_tum(mask, maskedoff, base, bstride, vl);
}

vuint32m1_t test_vlse32_v_u32m1_tum(vbool32_t mask, vuint32m1_t maskedoff, const uint32_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse32_v_u32m1_tum(mask, maskedoff, base, bstride, vl);
}

vuint32m2_t test_vlse32_v_u32m2_tum(vbool16_t mask, vuint32m2_t maskedoff, const uint32_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse32_v_u32m2_tum(mask, maskedoff, base, bstride, vl);
}

vuint32m4_t test_vlse32_v_u32m4_tum(vbool8_t mask, vuint32m4_t maskedoff, const uint32_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse32_v_u32m4_tum(mask, maskedoff, base, bstride, vl);
}

vuint32m8_t test_vlse32_v_u32m8_tum(vbool4_t mask, vuint32m8_t maskedoff, const uint32_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse32_v_u32m8_tum(mask, maskedoff, base, bstride, vl);
}

vfloat32mf2_t test_vlse32_v_f32mf2_tumu(vbool64_t mask, vfloat32mf2_t maskedoff, const float *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse32_v_f32mf2_tumu(mask, maskedoff, base, bstride, vl);
}

vfloat32m1_t test_vlse32_v_f32m1_tumu(vbool32_t mask, vfloat32m1_t maskedoff, const float *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse32_v_f32m1_tumu(mask, maskedoff, base, bstride, vl);
}

vfloat32m2_t test_vlse32_v_f32m2_tumu(vbool16_t mask, vfloat32m2_t maskedoff, const float *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse32_v_f32m2_tumu(mask, maskedoff, base, bstride, vl);
}

vfloat32m4_t test_vlse32_v_f32m4_tumu(vbool8_t mask, vfloat32m4_t maskedoff, const float *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse32_v_f32m4_tumu(mask, maskedoff, base, bstride, vl);
}

vfloat32m8_t test_vlse32_v_f32m8_tumu(vbool4_t mask, vfloat32m8_t maskedoff, const float *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse32_v_f32m8_tumu(mask, maskedoff, base, bstride, vl);
}

vint32mf2_t test_vlse32_v_i32mf2_tumu(vbool64_t mask, vint32mf2_t maskedoff, const int32_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse32_v_i32mf2_tumu(mask, maskedoff, base, bstride, vl);
}

vint32m1_t test_vlse32_v_i32m1_tumu(vbool32_t mask, vint32m1_t maskedoff, const int32_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse32_v_i32m1_tumu(mask, maskedoff, base, bstride, vl);
}

vint32m2_t test_vlse32_v_i32m2_tumu(vbool16_t mask, vint32m2_t maskedoff, const int32_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse32_v_i32m2_tumu(mask, maskedoff, base, bstride, vl);
}

vint32m4_t test_vlse32_v_i32m4_tumu(vbool8_t mask, vint32m4_t maskedoff, const int32_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse32_v_i32m4_tumu(mask, maskedoff, base, bstride, vl);
}

vint32m8_t test_vlse32_v_i32m8_tumu(vbool4_t mask, vint32m8_t maskedoff, const int32_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse32_v_i32m8_tumu(mask, maskedoff, base, bstride, vl);
}

vuint32mf2_t test_vlse32_v_u32mf2_tumu(vbool64_t mask, vuint32mf2_t maskedoff, const uint32_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse32_v_u32mf2_tumu(mask, maskedoff, base, bstride, vl);
}

vuint32m1_t test_vlse32_v_u32m1_tumu(vbool32_t mask, vuint32m1_t maskedoff, const uint32_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse32_v_u32m1_tumu(mask, maskedoff, base, bstride, vl);
}

vuint32m2_t test_vlse32_v_u32m2_tumu(vbool16_t mask, vuint32m2_t maskedoff, const uint32_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse32_v_u32m2_tumu(mask, maskedoff, base, bstride, vl);
}

vuint32m4_t test_vlse32_v_u32m4_tumu(vbool8_t mask, vuint32m4_t maskedoff, const uint32_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse32_v_u32m4_tumu(mask, maskedoff, base, bstride, vl);
}

vuint32m8_t test_vlse32_v_u32m8_tumu(vbool4_t mask, vuint32m8_t maskedoff, const uint32_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse32_v_u32m8_tumu(mask, maskedoff, base, bstride, vl);
}

vfloat32mf2_t test_vlse32_v_f32mf2_mu(vbool64_t mask, vfloat32mf2_t maskedoff, const float *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse32_v_f32mf2_mu(mask, maskedoff, base, bstride, vl);
}

vfloat32m1_t test_vlse32_v_f32m1_mu(vbool32_t mask, vfloat32m1_t maskedoff, const float *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse32_v_f32m1_mu(mask, maskedoff, base, bstride, vl);
}

vfloat32m2_t test_vlse32_v_f32m2_mu(vbool16_t mask, vfloat32m2_t maskedoff, const float *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse32_v_f32m2_mu(mask, maskedoff, base, bstride, vl);
}

vfloat32m4_t test_vlse32_v_f32m4_mu(vbool8_t mask, vfloat32m4_t maskedoff, const float *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse32_v_f32m4_mu(mask, maskedoff, base, bstride, vl);
}

vfloat32m8_t test_vlse32_v_f32m8_mu(vbool4_t mask, vfloat32m8_t maskedoff, const float *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse32_v_f32m8_mu(mask, maskedoff, base, bstride, vl);
}

vint32mf2_t test_vlse32_v_i32mf2_mu(vbool64_t mask, vint32mf2_t maskedoff, const int32_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse32_v_i32mf2_mu(mask, maskedoff, base, bstride, vl);
}

vint32m1_t test_vlse32_v_i32m1_mu(vbool32_t mask, vint32m1_t maskedoff, const int32_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse32_v_i32m1_mu(mask, maskedoff, base, bstride, vl);
}

vint32m2_t test_vlse32_v_i32m2_mu(vbool16_t mask, vint32m2_t maskedoff, const int32_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse32_v_i32m2_mu(mask, maskedoff, base, bstride, vl);
}

vint32m4_t test_vlse32_v_i32m4_mu(vbool8_t mask, vint32m4_t maskedoff, const int32_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse32_v_i32m4_mu(mask, maskedoff, base, bstride, vl);
}

vint32m8_t test_vlse32_v_i32m8_mu(vbool4_t mask, vint32m8_t maskedoff, const int32_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse32_v_i32m8_mu(mask, maskedoff, base, bstride, vl);
}

vuint32mf2_t test_vlse32_v_u32mf2_mu(vbool64_t mask, vuint32mf2_t maskedoff, const uint32_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse32_v_u32mf2_mu(mask, maskedoff, base, bstride, vl);
}

vuint32m1_t test_vlse32_v_u32m1_mu(vbool32_t mask, vuint32m1_t maskedoff, const uint32_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse32_v_u32m1_mu(mask, maskedoff, base, bstride, vl);
}

vuint32m2_t test_vlse32_v_u32m2_mu(vbool16_t mask, vuint32m2_t maskedoff, const uint32_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse32_v_u32m2_mu(mask, maskedoff, base, bstride, vl);
}

vuint32m4_t test_vlse32_v_u32m4_mu(vbool8_t mask, vuint32m4_t maskedoff, const uint32_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse32_v_u32m4_mu(mask, maskedoff, base, bstride, vl);
}

vuint32m8_t test_vlse32_v_u32m8_mu(vbool4_t mask, vuint32m8_t maskedoff, const uint32_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse32_v_u32m8_mu(mask, maskedoff, base, bstride, vl);
}
