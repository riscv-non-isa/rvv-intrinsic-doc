// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -target-feature +zfh \
// RUN:   -target-feature +experimental-zvfh -disable-O0-optnone  \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

void test_vsseg6e32_v_f32mf2x6(float *base, vfloat32mf2x6_t v_tuple, size_t vl) {
  return __riscv_vsseg6e32_v_f32mf2x6(base, v_tuple, vl);
}

void test_vsseg6e32_v_f32m1x6(float *base, vfloat32m1x6_t v_tuple, size_t vl) {
  return __riscv_vsseg6e32_v_f32m1x6(base, v_tuple, vl);
}

void test_vsseg6e32_v_i32mf2x6(int32_t *base, vint32mf2x6_t v_tuple, size_t vl) {
  return __riscv_vsseg6e32_v_i32mf2x6(base, v_tuple, vl);
}

void test_vsseg6e32_v_i32m1x6(int32_t *base, vint32m1x6_t v_tuple, size_t vl) {
  return __riscv_vsseg6e32_v_i32m1x6(base, v_tuple, vl);
}

void test_vsseg6e32_v_u32mf2x6(uint32_t *base, vuint32mf2x6_t v_tuple, size_t vl) {
  return __riscv_vsseg6e32_v_u32mf2x6(base, v_tuple, vl);
}

void test_vsseg6e32_v_u32m1x6(uint32_t *base, vuint32m1x6_t v_tuple, size_t vl) {
  return __riscv_vsseg6e32_v_u32m1x6(base, v_tuple, vl);
}

void test_vsseg6e32_v_f32mf2x6_m(vbool64_t mask, float *base, vfloat32mf2x6_t v_tuple, size_t vl) {
  return __riscv_vsseg6e32_v_f32mf2x6_m(mask, base, v_tuple, vl);
}

void test_vsseg6e32_v_f32m1x6_m(vbool32_t mask, float *base, vfloat32m1x6_t v_tuple, size_t vl) {
  return __riscv_vsseg6e32_v_f32m1x6_m(mask, base, v_tuple, vl);
}

void test_vsseg6e32_v_i32mf2x6_m(vbool64_t mask, int32_t *base, vint32mf2x6_t v_tuple, size_t vl) {
  return __riscv_vsseg6e32_v_i32mf2x6_m(mask, base, v_tuple, vl);
}

void test_vsseg6e32_v_i32m1x6_m(vbool32_t mask, int32_t *base, vint32m1x6_t v_tuple, size_t vl) {
  return __riscv_vsseg6e32_v_i32m1x6_m(mask, base, v_tuple, vl);
}

void test_vsseg6e32_v_u32mf2x6_m(vbool64_t mask, uint32_t *base, vuint32mf2x6_t v_tuple, size_t vl) {
  return __riscv_vsseg6e32_v_u32mf2x6_m(mask, base, v_tuple, vl);
}

void test_vsseg6e32_v_u32m1x6_m(vbool32_t mask, uint32_t *base, vuint32m1x6_t v_tuple, size_t vl) {
  return __riscv_vsseg6e32_v_u32m1x6_m(mask, base, v_tuple, vl);
}

