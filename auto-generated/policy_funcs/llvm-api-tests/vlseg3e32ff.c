// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -target-feature +zfh \
// RUN:   -target-feature +experimental-zvfh -disable-O0-optnone  \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

void test_vlseg3e32ff_v_f32mf2_tu(vfloat32mf2_t *v0, vfloat32mf2_t *v1, vfloat32mf2_t *v2, vfloat32mf2_t maskedoff0, vfloat32mf2_t maskedoff1, vfloat32mf2_t maskedoff2, const float *base, size_t *new_vl, size_t vl) {
  return vlseg3e32ff_v_f32mf2_tu(v0, v1, v2, maskedoff0, maskedoff1, maskedoff2, base, new_vl, vl);
}

void test_vlseg3e32ff_v_f32m1_tu(vfloat32m1_t *v0, vfloat32m1_t *v1, vfloat32m1_t *v2, vfloat32m1_t maskedoff0, vfloat32m1_t maskedoff1, vfloat32m1_t maskedoff2, const float *base, size_t *new_vl, size_t vl) {
  return vlseg3e32ff_v_f32m1_tu(v0, v1, v2, maskedoff0, maskedoff1, maskedoff2, base, new_vl, vl);
}

void test_vlseg3e32ff_v_f32m2_tu(vfloat32m2_t *v0, vfloat32m2_t *v1, vfloat32m2_t *v2, vfloat32m2_t maskedoff0, vfloat32m2_t maskedoff1, vfloat32m2_t maskedoff2, const float *base, size_t *new_vl, size_t vl) {
  return vlseg3e32ff_v_f32m2_tu(v0, v1, v2, maskedoff0, maskedoff1, maskedoff2, base, new_vl, vl);
}

void test_vlseg3e32ff_v_i32mf2_tu(vint32mf2_t *v0, vint32mf2_t *v1, vint32mf2_t *v2, vint32mf2_t maskedoff0, vint32mf2_t maskedoff1, vint32mf2_t maskedoff2, const int32_t *base, size_t *new_vl, size_t vl) {
  return vlseg3e32ff_v_i32mf2_tu(v0, v1, v2, maskedoff0, maskedoff1, maskedoff2, base, new_vl, vl);
}

void test_vlseg3e32ff_v_i32m1_tu(vint32m1_t *v0, vint32m1_t *v1, vint32m1_t *v2, vint32m1_t maskedoff0, vint32m1_t maskedoff1, vint32m1_t maskedoff2, const int32_t *base, size_t *new_vl, size_t vl) {
  return vlseg3e32ff_v_i32m1_tu(v0, v1, v2, maskedoff0, maskedoff1, maskedoff2, base, new_vl, vl);
}

void test_vlseg3e32ff_v_i32m2_tu(vint32m2_t *v0, vint32m2_t *v1, vint32m2_t *v2, vint32m2_t maskedoff0, vint32m2_t maskedoff1, vint32m2_t maskedoff2, const int32_t *base, size_t *new_vl, size_t vl) {
  return vlseg3e32ff_v_i32m2_tu(v0, v1, v2, maskedoff0, maskedoff1, maskedoff2, base, new_vl, vl);
}

void test_vlseg3e32ff_v_u32mf2_tu(vuint32mf2_t *v0, vuint32mf2_t *v1, vuint32mf2_t *v2, vuint32mf2_t maskedoff0, vuint32mf2_t maskedoff1, vuint32mf2_t maskedoff2, const uint32_t *base, size_t *new_vl, size_t vl) {
  return vlseg3e32ff_v_u32mf2_tu(v0, v1, v2, maskedoff0, maskedoff1, maskedoff2, base, new_vl, vl);
}

void test_vlseg3e32ff_v_u32m1_tu(vuint32m1_t *v0, vuint32m1_t *v1, vuint32m1_t *v2, vuint32m1_t maskedoff0, vuint32m1_t maskedoff1, vuint32m1_t maskedoff2, const uint32_t *base, size_t *new_vl, size_t vl) {
  return vlseg3e32ff_v_u32m1_tu(v0, v1, v2, maskedoff0, maskedoff1, maskedoff2, base, new_vl, vl);
}

void test_vlseg3e32ff_v_u32m2_tu(vuint32m2_t *v0, vuint32m2_t *v1, vuint32m2_t *v2, vuint32m2_t maskedoff0, vuint32m2_t maskedoff1, vuint32m2_t maskedoff2, const uint32_t *base, size_t *new_vl, size_t vl) {
  return vlseg3e32ff_v_u32m2_tu(v0, v1, v2, maskedoff0, maskedoff1, maskedoff2, base, new_vl, vl);
}

void test_vlseg3e32ff_v_f32mf2_tum(vfloat32mf2_t *v0, vfloat32mf2_t *v1, vfloat32mf2_t *v2, vbool64_t mask, vfloat32mf2_t maskedoff0, vfloat32mf2_t maskedoff1, vfloat32mf2_t maskedoff2, const float *base, size_t *new_vl, size_t vl) {
  return vlseg3e32ff_v_f32mf2_tum(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, new_vl, vl);
}

void test_vlseg3e32ff_v_f32m1_tum(vfloat32m1_t *v0, vfloat32m1_t *v1, vfloat32m1_t *v2, vbool32_t mask, vfloat32m1_t maskedoff0, vfloat32m1_t maskedoff1, vfloat32m1_t maskedoff2, const float *base, size_t *new_vl, size_t vl) {
  return vlseg3e32ff_v_f32m1_tum(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, new_vl, vl);
}

void test_vlseg3e32ff_v_f32m2_tum(vfloat32m2_t *v0, vfloat32m2_t *v1, vfloat32m2_t *v2, vbool16_t mask, vfloat32m2_t maskedoff0, vfloat32m2_t maskedoff1, vfloat32m2_t maskedoff2, const float *base, size_t *new_vl, size_t vl) {
  return vlseg3e32ff_v_f32m2_tum(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, new_vl, vl);
}

void test_vlseg3e32ff_v_i32mf2_tum(vint32mf2_t *v0, vint32mf2_t *v1, vint32mf2_t *v2, vbool64_t mask, vint32mf2_t maskedoff0, vint32mf2_t maskedoff1, vint32mf2_t maskedoff2, const int32_t *base, size_t *new_vl, size_t vl) {
  return vlseg3e32ff_v_i32mf2_tum(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, new_vl, vl);
}

void test_vlseg3e32ff_v_i32m1_tum(vint32m1_t *v0, vint32m1_t *v1, vint32m1_t *v2, vbool32_t mask, vint32m1_t maskedoff0, vint32m1_t maskedoff1, vint32m1_t maskedoff2, const int32_t *base, size_t *new_vl, size_t vl) {
  return vlseg3e32ff_v_i32m1_tum(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, new_vl, vl);
}

void test_vlseg3e32ff_v_i32m2_tum(vint32m2_t *v0, vint32m2_t *v1, vint32m2_t *v2, vbool16_t mask, vint32m2_t maskedoff0, vint32m2_t maskedoff1, vint32m2_t maskedoff2, const int32_t *base, size_t *new_vl, size_t vl) {
  return vlseg3e32ff_v_i32m2_tum(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, new_vl, vl);
}

void test_vlseg3e32ff_v_u32mf2_tum(vuint32mf2_t *v0, vuint32mf2_t *v1, vuint32mf2_t *v2, vbool64_t mask, vuint32mf2_t maskedoff0, vuint32mf2_t maskedoff1, vuint32mf2_t maskedoff2, const uint32_t *base, size_t *new_vl, size_t vl) {
  return vlseg3e32ff_v_u32mf2_tum(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, new_vl, vl);
}

void test_vlseg3e32ff_v_u32m1_tum(vuint32m1_t *v0, vuint32m1_t *v1, vuint32m1_t *v2, vbool32_t mask, vuint32m1_t maskedoff0, vuint32m1_t maskedoff1, vuint32m1_t maskedoff2, const uint32_t *base, size_t *new_vl, size_t vl) {
  return vlseg3e32ff_v_u32m1_tum(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, new_vl, vl);
}

void test_vlseg3e32ff_v_u32m2_tum(vuint32m2_t *v0, vuint32m2_t *v1, vuint32m2_t *v2, vbool16_t mask, vuint32m2_t maskedoff0, vuint32m2_t maskedoff1, vuint32m2_t maskedoff2, const uint32_t *base, size_t *new_vl, size_t vl) {
  return vlseg3e32ff_v_u32m2_tum(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, new_vl, vl);
}

void test_vlseg3e32ff_v_f32mf2_tumu(vfloat32mf2_t *v0, vfloat32mf2_t *v1, vfloat32mf2_t *v2, vbool64_t mask, vfloat32mf2_t maskedoff0, vfloat32mf2_t maskedoff1, vfloat32mf2_t maskedoff2, const float *base, size_t *new_vl, size_t vl) {
  return vlseg3e32ff_v_f32mf2_tumu(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, new_vl, vl);
}

void test_vlseg3e32ff_v_f32m1_tumu(vfloat32m1_t *v0, vfloat32m1_t *v1, vfloat32m1_t *v2, vbool32_t mask, vfloat32m1_t maskedoff0, vfloat32m1_t maskedoff1, vfloat32m1_t maskedoff2, const float *base, size_t *new_vl, size_t vl) {
  return vlseg3e32ff_v_f32m1_tumu(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, new_vl, vl);
}

void test_vlseg3e32ff_v_f32m2_tumu(vfloat32m2_t *v0, vfloat32m2_t *v1, vfloat32m2_t *v2, vbool16_t mask, vfloat32m2_t maskedoff0, vfloat32m2_t maskedoff1, vfloat32m2_t maskedoff2, const float *base, size_t *new_vl, size_t vl) {
  return vlseg3e32ff_v_f32m2_tumu(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, new_vl, vl);
}

void test_vlseg3e32ff_v_i32mf2_tumu(vint32mf2_t *v0, vint32mf2_t *v1, vint32mf2_t *v2, vbool64_t mask, vint32mf2_t maskedoff0, vint32mf2_t maskedoff1, vint32mf2_t maskedoff2, const int32_t *base, size_t *new_vl, size_t vl) {
  return vlseg3e32ff_v_i32mf2_tumu(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, new_vl, vl);
}

void test_vlseg3e32ff_v_i32m1_tumu(vint32m1_t *v0, vint32m1_t *v1, vint32m1_t *v2, vbool32_t mask, vint32m1_t maskedoff0, vint32m1_t maskedoff1, vint32m1_t maskedoff2, const int32_t *base, size_t *new_vl, size_t vl) {
  return vlseg3e32ff_v_i32m1_tumu(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, new_vl, vl);
}

void test_vlseg3e32ff_v_i32m2_tumu(vint32m2_t *v0, vint32m2_t *v1, vint32m2_t *v2, vbool16_t mask, vint32m2_t maskedoff0, vint32m2_t maskedoff1, vint32m2_t maskedoff2, const int32_t *base, size_t *new_vl, size_t vl) {
  return vlseg3e32ff_v_i32m2_tumu(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, new_vl, vl);
}

void test_vlseg3e32ff_v_u32mf2_tumu(vuint32mf2_t *v0, vuint32mf2_t *v1, vuint32mf2_t *v2, vbool64_t mask, vuint32mf2_t maskedoff0, vuint32mf2_t maskedoff1, vuint32mf2_t maskedoff2, const uint32_t *base, size_t *new_vl, size_t vl) {
  return vlseg3e32ff_v_u32mf2_tumu(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, new_vl, vl);
}

void test_vlseg3e32ff_v_u32m1_tumu(vuint32m1_t *v0, vuint32m1_t *v1, vuint32m1_t *v2, vbool32_t mask, vuint32m1_t maskedoff0, vuint32m1_t maskedoff1, vuint32m1_t maskedoff2, const uint32_t *base, size_t *new_vl, size_t vl) {
  return vlseg3e32ff_v_u32m1_tumu(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, new_vl, vl);
}

void test_vlseg3e32ff_v_u32m2_tumu(vuint32m2_t *v0, vuint32m2_t *v1, vuint32m2_t *v2, vbool16_t mask, vuint32m2_t maskedoff0, vuint32m2_t maskedoff1, vuint32m2_t maskedoff2, const uint32_t *base, size_t *new_vl, size_t vl) {
  return vlseg3e32ff_v_u32m2_tumu(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, new_vl, vl);
}

void test_vlseg3e32ff_v_f32mf2_mu(vfloat32mf2_t *v0, vfloat32mf2_t *v1, vfloat32mf2_t *v2, vbool64_t mask, vfloat32mf2_t maskedoff0, vfloat32mf2_t maskedoff1, vfloat32mf2_t maskedoff2, const float *base, size_t *new_vl, size_t vl) {
  return vlseg3e32ff_v_f32mf2_mu(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, new_vl, vl);
}

void test_vlseg3e32ff_v_f32m1_mu(vfloat32m1_t *v0, vfloat32m1_t *v1, vfloat32m1_t *v2, vbool32_t mask, vfloat32m1_t maskedoff0, vfloat32m1_t maskedoff1, vfloat32m1_t maskedoff2, const float *base, size_t *new_vl, size_t vl) {
  return vlseg3e32ff_v_f32m1_mu(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, new_vl, vl);
}

void test_vlseg3e32ff_v_f32m2_mu(vfloat32m2_t *v0, vfloat32m2_t *v1, vfloat32m2_t *v2, vbool16_t mask, vfloat32m2_t maskedoff0, vfloat32m2_t maskedoff1, vfloat32m2_t maskedoff2, const float *base, size_t *new_vl, size_t vl) {
  return vlseg3e32ff_v_f32m2_mu(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, new_vl, vl);
}

void test_vlseg3e32ff_v_i32mf2_mu(vint32mf2_t *v0, vint32mf2_t *v1, vint32mf2_t *v2, vbool64_t mask, vint32mf2_t maskedoff0, vint32mf2_t maskedoff1, vint32mf2_t maskedoff2, const int32_t *base, size_t *new_vl, size_t vl) {
  return vlseg3e32ff_v_i32mf2_mu(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, new_vl, vl);
}

void test_vlseg3e32ff_v_i32m1_mu(vint32m1_t *v0, vint32m1_t *v1, vint32m1_t *v2, vbool32_t mask, vint32m1_t maskedoff0, vint32m1_t maskedoff1, vint32m1_t maskedoff2, const int32_t *base, size_t *new_vl, size_t vl) {
  return vlseg3e32ff_v_i32m1_mu(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, new_vl, vl);
}

void test_vlseg3e32ff_v_i32m2_mu(vint32m2_t *v0, vint32m2_t *v1, vint32m2_t *v2, vbool16_t mask, vint32m2_t maskedoff0, vint32m2_t maskedoff1, vint32m2_t maskedoff2, const int32_t *base, size_t *new_vl, size_t vl) {
  return vlseg3e32ff_v_i32m2_mu(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, new_vl, vl);
}

void test_vlseg3e32ff_v_u32mf2_mu(vuint32mf2_t *v0, vuint32mf2_t *v1, vuint32mf2_t *v2, vbool64_t mask, vuint32mf2_t maskedoff0, vuint32mf2_t maskedoff1, vuint32mf2_t maskedoff2, const uint32_t *base, size_t *new_vl, size_t vl) {
  return vlseg3e32ff_v_u32mf2_mu(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, new_vl, vl);
}

void test_vlseg3e32ff_v_u32m1_mu(vuint32m1_t *v0, vuint32m1_t *v1, vuint32m1_t *v2, vbool32_t mask, vuint32m1_t maskedoff0, vuint32m1_t maskedoff1, vuint32m1_t maskedoff2, const uint32_t *base, size_t *new_vl, size_t vl) {
  return vlseg3e32ff_v_u32m1_mu(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, new_vl, vl);
}

void test_vlseg3e32ff_v_u32m2_mu(vuint32m2_t *v0, vuint32m2_t *v1, vuint32m2_t *v2, vbool16_t mask, vuint32m2_t maskedoff0, vuint32m2_t maskedoff1, vuint32m2_t maskedoff2, const uint32_t *base, size_t *new_vl, size_t vl) {
  return vlseg3e32ff_v_u32m2_mu(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, new_vl, vl);
}

