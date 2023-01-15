// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -target-feature +zfh \
// RUN:   -target-feature +experimental-zvfh -disable-O0-optnone  \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

void test_vlseg4e32_v_f32mf2(vfloat32mf2_t *v0, vfloat32mf2_t *v1, vfloat32mf2_t *v2, vfloat32mf2_t *v3, const float *base, size_t vl) {
  return vlseg4e32_v_f32mf2(v0, v1, v2, v3, base, vl);
}

void test_vlseg4e32_v_f32m1(vfloat32m1_t *v0, vfloat32m1_t *v1, vfloat32m1_t *v2, vfloat32m1_t *v3, const float *base, size_t vl) {
  return vlseg4e32_v_f32m1(v0, v1, v2, v3, base, vl);
}

void test_vlseg4e32_v_f32m2(vfloat32m2_t *v0, vfloat32m2_t *v1, vfloat32m2_t *v2, vfloat32m2_t *v3, const float *base, size_t vl) {
  return vlseg4e32_v_f32m2(v0, v1, v2, v3, base, vl);
}

void test_vlseg4e32_v_i32mf2(vint32mf2_t *v0, vint32mf2_t *v1, vint32mf2_t *v2, vint32mf2_t *v3, const int32_t *base, size_t vl) {
  return vlseg4e32_v_i32mf2(v0, v1, v2, v3, base, vl);
}

void test_vlseg4e32_v_i32m1(vint32m1_t *v0, vint32m1_t *v1, vint32m1_t *v2, vint32m1_t *v3, const int32_t *base, size_t vl) {
  return vlseg4e32_v_i32m1(v0, v1, v2, v3, base, vl);
}

void test_vlseg4e32_v_i32m2(vint32m2_t *v0, vint32m2_t *v1, vint32m2_t *v2, vint32m2_t *v3, const int32_t *base, size_t vl) {
  return vlseg4e32_v_i32m2(v0, v1, v2, v3, base, vl);
}

void test_vlseg4e32_v_u32mf2(vuint32mf2_t *v0, vuint32mf2_t *v1, vuint32mf2_t *v2, vuint32mf2_t *v3, const uint32_t *base, size_t vl) {
  return vlseg4e32_v_u32mf2(v0, v1, v2, v3, base, vl);
}

void test_vlseg4e32_v_u32m1(vuint32m1_t *v0, vuint32m1_t *v1, vuint32m1_t *v2, vuint32m1_t *v3, const uint32_t *base, size_t vl) {
  return vlseg4e32_v_u32m1(v0, v1, v2, v3, base, vl);
}

void test_vlseg4e32_v_u32m2(vuint32m2_t *v0, vuint32m2_t *v1, vuint32m2_t *v2, vuint32m2_t *v3, const uint32_t *base, size_t vl) {
  return vlseg4e32_v_u32m2(v0, v1, v2, v3, base, vl);
}

void test_vlseg4e32_v_f32mf2_m(vfloat32mf2_t *v0, vfloat32mf2_t *v1, vfloat32mf2_t *v2, vfloat32mf2_t *v3, vbool64_t mask, const float *base, size_t vl) {
  return vlseg4e32_v_f32mf2_m(v0, v1, v2, v3, mask, base, vl);
}

void test_vlseg4e32_v_f32m1_m(vfloat32m1_t *v0, vfloat32m1_t *v1, vfloat32m1_t *v2, vfloat32m1_t *v3, vbool32_t mask, const float *base, size_t vl) {
  return vlseg4e32_v_f32m1_m(v0, v1, v2, v3, mask, base, vl);
}

void test_vlseg4e32_v_f32m2_m(vfloat32m2_t *v0, vfloat32m2_t *v1, vfloat32m2_t *v2, vfloat32m2_t *v3, vbool16_t mask, const float *base, size_t vl) {
  return vlseg4e32_v_f32m2_m(v0, v1, v2, v3, mask, base, vl);
}

void test_vlseg4e32_v_i32mf2_m(vint32mf2_t *v0, vint32mf2_t *v1, vint32mf2_t *v2, vint32mf2_t *v3, vbool64_t mask, const int32_t *base, size_t vl) {
  return vlseg4e32_v_i32mf2_m(v0, v1, v2, v3, mask, base, vl);
}

void test_vlseg4e32_v_i32m1_m(vint32m1_t *v0, vint32m1_t *v1, vint32m1_t *v2, vint32m1_t *v3, vbool32_t mask, const int32_t *base, size_t vl) {
  return vlseg4e32_v_i32m1_m(v0, v1, v2, v3, mask, base, vl);
}

void test_vlseg4e32_v_i32m2_m(vint32m2_t *v0, vint32m2_t *v1, vint32m2_t *v2, vint32m2_t *v3, vbool16_t mask, const int32_t *base, size_t vl) {
  return vlseg4e32_v_i32m2_m(v0, v1, v2, v3, mask, base, vl);
}

void test_vlseg4e32_v_u32mf2_m(vuint32mf2_t *v0, vuint32mf2_t *v1, vuint32mf2_t *v2, vuint32mf2_t *v3, vbool64_t mask, const uint32_t *base, size_t vl) {
  return vlseg4e32_v_u32mf2_m(v0, v1, v2, v3, mask, base, vl);
}

void test_vlseg4e32_v_u32m1_m(vuint32m1_t *v0, vuint32m1_t *v1, vuint32m1_t *v2, vuint32m1_t *v3, vbool32_t mask, const uint32_t *base, size_t vl) {
  return vlseg4e32_v_u32m1_m(v0, v1, v2, v3, mask, base, vl);
}

void test_vlseg4e32_v_u32m2_m(vuint32m2_t *v0, vuint32m2_t *v1, vuint32m2_t *v2, vuint32m2_t *v3, vbool16_t mask, const uint32_t *base, size_t vl) {
  return vlseg4e32_v_u32m2_m(v0, v1, v2, v3, mask, base, vl);
}

