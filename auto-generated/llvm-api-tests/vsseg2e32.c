// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -target-feature +zfh \
// RUN:   -target-feature +experimental-zvfh -disable-O0-optnone  \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

void test_vsseg2e32_v_f32mf2x2(float *base, vfloat32mf2x2_t v_tuple, size_t vl) {
  return __riscv_vsseg2e32_v_f32mf2x2(base, v_tuple, vl);
}

void test_vsseg2e32_v_f32m1x2(float *base, vfloat32m1x2_t v_tuple, size_t vl) {
  return __riscv_vsseg2e32_v_f32m1x2(base, v_tuple, vl);
}

void test_vsseg2e32_v_f32m2x2(float *base, vfloat32m2x2_t v_tuple, size_t vl) {
  return __riscv_vsseg2e32_v_f32m2x2(base, v_tuple, vl);
}

void test_vsseg2e32_v_f32m4x2(float *base, vfloat32m4x2_t v_tuple, size_t vl) {
  return __riscv_vsseg2e32_v_f32m4x2(base, v_tuple, vl);
}

void test_vsseg2e32_v_i32mf2x2(int32_t *base, vint32mf2x2_t v_tuple, size_t vl) {
  return __riscv_vsseg2e32_v_i32mf2x2(base, v_tuple, vl);
}

void test_vsseg2e32_v_i32m1x2(int32_t *base, vint32m1x2_t v_tuple, size_t vl) {
  return __riscv_vsseg2e32_v_i32m1x2(base, v_tuple, vl);
}

void test_vsseg2e32_v_i32m2x2(int32_t *base, vint32m2x2_t v_tuple, size_t vl) {
  return __riscv_vsseg2e32_v_i32m2x2(base, v_tuple, vl);
}

void test_vsseg2e32_v_i32m4x2(int32_t *base, vint32m4x2_t v_tuple, size_t vl) {
  return __riscv_vsseg2e32_v_i32m4x2(base, v_tuple, vl);
}

void test_vsseg2e32_v_u32mf2x2(uint32_t *base, vuint32mf2x2_t v_tuple, size_t vl) {
  return __riscv_vsseg2e32_v_u32mf2x2(base, v_tuple, vl);
}

void test_vsseg2e32_v_u32m1x2(uint32_t *base, vuint32m1x2_t v_tuple, size_t vl) {
  return __riscv_vsseg2e32_v_u32m1x2(base, v_tuple, vl);
}

void test_vsseg2e32_v_u32m2x2(uint32_t *base, vuint32m2x2_t v_tuple, size_t vl) {
  return __riscv_vsseg2e32_v_u32m2x2(base, v_tuple, vl);
}

void test_vsseg2e32_v_u32m4x2(uint32_t *base, vuint32m4x2_t v_tuple, size_t vl) {
  return __riscv_vsseg2e32_v_u32m4x2(base, v_tuple, vl);
}

void test_vsseg2e32_v_f32mf2x2_m(vbool64_t mask, float *base, vfloat32mf2x2_t v_tuple, size_t vl) {
  return __riscv_vsseg2e32_v_f32mf2x2_m(mask, base, v_tuple, vl);
}

void test_vsseg2e32_v_f32m1x2_m(vbool32_t mask, float *base, vfloat32m1x2_t v_tuple, size_t vl) {
  return __riscv_vsseg2e32_v_f32m1x2_m(mask, base, v_tuple, vl);
}

void test_vsseg2e32_v_f32m2x2_m(vbool16_t mask, float *base, vfloat32m2x2_t v_tuple, size_t vl) {
  return __riscv_vsseg2e32_v_f32m2x2_m(mask, base, v_tuple, vl);
}

void test_vsseg2e32_v_f32m4x2_m(vbool8_t mask, float *base, vfloat32m4x2_t v_tuple, size_t vl) {
  return __riscv_vsseg2e32_v_f32m4x2_m(mask, base, v_tuple, vl);
}

void test_vsseg2e32_v_i32mf2x2_m(vbool64_t mask, int32_t *base, vint32mf2x2_t v_tuple, size_t vl) {
  return __riscv_vsseg2e32_v_i32mf2x2_m(mask, base, v_tuple, vl);
}

void test_vsseg2e32_v_i32m1x2_m(vbool32_t mask, int32_t *base, vint32m1x2_t v_tuple, size_t vl) {
  return __riscv_vsseg2e32_v_i32m1x2_m(mask, base, v_tuple, vl);
}

void test_vsseg2e32_v_i32m2x2_m(vbool16_t mask, int32_t *base, vint32m2x2_t v_tuple, size_t vl) {
  return __riscv_vsseg2e32_v_i32m2x2_m(mask, base, v_tuple, vl);
}

void test_vsseg2e32_v_i32m4x2_m(vbool8_t mask, int32_t *base, vint32m4x2_t v_tuple, size_t vl) {
  return __riscv_vsseg2e32_v_i32m4x2_m(mask, base, v_tuple, vl);
}

void test_vsseg2e32_v_u32mf2x2_m(vbool64_t mask, uint32_t *base, vuint32mf2x2_t v_tuple, size_t vl) {
  return __riscv_vsseg2e32_v_u32mf2x2_m(mask, base, v_tuple, vl);
}

void test_vsseg2e32_v_u32m1x2_m(vbool32_t mask, uint32_t *base, vuint32m1x2_t v_tuple, size_t vl) {
  return __riscv_vsseg2e32_v_u32m1x2_m(mask, base, v_tuple, vl);
}

void test_vsseg2e32_v_u32m2x2_m(vbool16_t mask, uint32_t *base, vuint32m2x2_t v_tuple, size_t vl) {
  return __riscv_vsseg2e32_v_u32m2x2_m(mask, base, v_tuple, vl);
}

void test_vsseg2e32_v_u32m4x2_m(vbool8_t mask, uint32_t *base, vuint32m4x2_t v_tuple, size_t vl) {
  return __riscv_vsseg2e32_v_u32m4x2_m(mask, base, v_tuple, vl);
}

