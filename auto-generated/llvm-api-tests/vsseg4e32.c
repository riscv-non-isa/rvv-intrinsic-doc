// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -target-feature +zfh \
// RUN:   -target-feature +experimental-zvfh -disable-O0-optnone  \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

void test_vsseg4e32_v_f32mf2(float *base, vfloat32mf2_t v0, vfloat32mf2_t v1, vfloat32mf2_t v2, vfloat32mf2_t v3, size_t vl) {
  return __riscv_vsseg4e32_v_f32mf2(base, v0, v1, v2, v3, vl);
}

void test_vsseg4e32_v_f32m1(float *base, vfloat32m1_t v0, vfloat32m1_t v1, vfloat32m1_t v2, vfloat32m1_t v3, size_t vl) {
  return __riscv_vsseg4e32_v_f32m1(base, v0, v1, v2, v3, vl);
}

void test_vsseg4e32_v_f32m2(float *base, vfloat32m2_t v0, vfloat32m2_t v1, vfloat32m2_t v2, vfloat32m2_t v3, size_t vl) {
  return __riscv_vsseg4e32_v_f32m2(base, v0, v1, v2, v3, vl);
}

void test_vsseg4e32_v_i32mf2(int32_t *base, vint32mf2_t v0, vint32mf2_t v1, vint32mf2_t v2, vint32mf2_t v3, size_t vl) {
  return __riscv_vsseg4e32_v_i32mf2(base, v0, v1, v2, v3, vl);
}

void test_vsseg4e32_v_i32m1(int32_t *base, vint32m1_t v0, vint32m1_t v1, vint32m1_t v2, vint32m1_t v3, size_t vl) {
  return __riscv_vsseg4e32_v_i32m1(base, v0, v1, v2, v3, vl);
}

void test_vsseg4e32_v_i32m2(int32_t *base, vint32m2_t v0, vint32m2_t v1, vint32m2_t v2, vint32m2_t v3, size_t vl) {
  return __riscv_vsseg4e32_v_i32m2(base, v0, v1, v2, v3, vl);
}

void test_vsseg4e32_v_u32mf2(uint32_t *base, vuint32mf2_t v0, vuint32mf2_t v1, vuint32mf2_t v2, vuint32mf2_t v3, size_t vl) {
  return __riscv_vsseg4e32_v_u32mf2(base, v0, v1, v2, v3, vl);
}

void test_vsseg4e32_v_u32m1(uint32_t *base, vuint32m1_t v0, vuint32m1_t v1, vuint32m1_t v2, vuint32m1_t v3, size_t vl) {
  return __riscv_vsseg4e32_v_u32m1(base, v0, v1, v2, v3, vl);
}

void test_vsseg4e32_v_u32m2(uint32_t *base, vuint32m2_t v0, vuint32m2_t v1, vuint32m2_t v2, vuint32m2_t v3, size_t vl) {
  return __riscv_vsseg4e32_v_u32m2(base, v0, v1, v2, v3, vl);
}

void test_vsseg4e32_v_f32mf2_m(vbool64_t mask, float *base, vfloat32mf2_t v0, vfloat32mf2_t v1, vfloat32mf2_t v2, vfloat32mf2_t v3, size_t vl) {
  return __riscv_vsseg4e32_v_f32mf2_m(mask, base, v0, v1, v2, v3, vl);
}

void test_vsseg4e32_v_f32m1_m(vbool32_t mask, float *base, vfloat32m1_t v0, vfloat32m1_t v1, vfloat32m1_t v2, vfloat32m1_t v3, size_t vl) {
  return __riscv_vsseg4e32_v_f32m1_m(mask, base, v0, v1, v2, v3, vl);
}

void test_vsseg4e32_v_f32m2_m(vbool16_t mask, float *base, vfloat32m2_t v0, vfloat32m2_t v1, vfloat32m2_t v2, vfloat32m2_t v3, size_t vl) {
  return __riscv_vsseg4e32_v_f32m2_m(mask, base, v0, v1, v2, v3, vl);
}

void test_vsseg4e32_v_i32mf2_m(vbool64_t mask, int32_t *base, vint32mf2_t v0, vint32mf2_t v1, vint32mf2_t v2, vint32mf2_t v3, size_t vl) {
  return __riscv_vsseg4e32_v_i32mf2_m(mask, base, v0, v1, v2, v3, vl);
}

void test_vsseg4e32_v_i32m1_m(vbool32_t mask, int32_t *base, vint32m1_t v0, vint32m1_t v1, vint32m1_t v2, vint32m1_t v3, size_t vl) {
  return __riscv_vsseg4e32_v_i32m1_m(mask, base, v0, v1, v2, v3, vl);
}

void test_vsseg4e32_v_i32m2_m(vbool16_t mask, int32_t *base, vint32m2_t v0, vint32m2_t v1, vint32m2_t v2, vint32m2_t v3, size_t vl) {
  return __riscv_vsseg4e32_v_i32m2_m(mask, base, v0, v1, v2, v3, vl);
}

void test_vsseg4e32_v_u32mf2_m(vbool64_t mask, uint32_t *base, vuint32mf2_t v0, vuint32mf2_t v1, vuint32mf2_t v2, vuint32mf2_t v3, size_t vl) {
  return __riscv_vsseg4e32_v_u32mf2_m(mask, base, v0, v1, v2, v3, vl);
}

void test_vsseg4e32_v_u32m1_m(vbool32_t mask, uint32_t *base, vuint32m1_t v0, vuint32m1_t v1, vuint32m1_t v2, vuint32m1_t v3, size_t vl) {
  return __riscv_vsseg4e32_v_u32m1_m(mask, base, v0, v1, v2, v3, vl);
}

void test_vsseg4e32_v_u32m2_m(vbool16_t mask, uint32_t *base, vuint32m2_t v0, vuint32m2_t v1, vuint32m2_t v2, vuint32m2_t v3, size_t vl) {
  return __riscv_vsseg4e32_v_u32m2_m(mask, base, v0, v1, v2, v3, vl);
}

