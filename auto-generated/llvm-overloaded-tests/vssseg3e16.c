// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -target-feature +zfh \
// RUN:   -target-feature +experimental-zvfh -disable-O0-optnone  \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

void test_vssseg3e16_v_f16mf4x3(_Float16 *base, ptrdiff_t bstride, vfloat16mf4x3_t v_tuple, size_t vl) {
  return __riscv_vssseg3e16(base, bstride, v_tuple, vl);
}

void test_vssseg3e16_v_f16mf2x3(_Float16 *base, ptrdiff_t bstride, vfloat16mf2x3_t v_tuple, size_t vl) {
  return __riscv_vssseg3e16(base, bstride, v_tuple, vl);
}

void test_vssseg3e16_v_f16m1x3(_Float16 *base, ptrdiff_t bstride, vfloat16m1x3_t v_tuple, size_t vl) {
  return __riscv_vssseg3e16(base, bstride, v_tuple, vl);
}

void test_vssseg3e16_v_f16m2x3(_Float16 *base, ptrdiff_t bstride, vfloat16m2x3_t v_tuple, size_t vl) {
  return __riscv_vssseg3e16(base, bstride, v_tuple, vl);
}

void test_vssseg3e16_v_i16mf4x3(int16_t *base, ptrdiff_t bstride, vint16mf4x3_t v_tuple, size_t vl) {
  return __riscv_vssseg3e16(base, bstride, v_tuple, vl);
}

void test_vssseg3e16_v_i16mf2x3(int16_t *base, ptrdiff_t bstride, vint16mf2x3_t v_tuple, size_t vl) {
  return __riscv_vssseg3e16(base, bstride, v_tuple, vl);
}

void test_vssseg3e16_v_i16m1x3(int16_t *base, ptrdiff_t bstride, vint16m1x3_t v_tuple, size_t vl) {
  return __riscv_vssseg3e16(base, bstride, v_tuple, vl);
}

void test_vssseg3e16_v_i16m2x3(int16_t *base, ptrdiff_t bstride, vint16m2x3_t v_tuple, size_t vl) {
  return __riscv_vssseg3e16(base, bstride, v_tuple, vl);
}

void test_vssseg3e16_v_u16mf4x3(uint16_t *base, ptrdiff_t bstride, vuint16mf4x3_t v_tuple, size_t vl) {
  return __riscv_vssseg3e16(base, bstride, v_tuple, vl);
}

void test_vssseg3e16_v_u16mf2x3(uint16_t *base, ptrdiff_t bstride, vuint16mf2x3_t v_tuple, size_t vl) {
  return __riscv_vssseg3e16(base, bstride, v_tuple, vl);
}

void test_vssseg3e16_v_u16m1x3(uint16_t *base, ptrdiff_t bstride, vuint16m1x3_t v_tuple, size_t vl) {
  return __riscv_vssseg3e16(base, bstride, v_tuple, vl);
}

void test_vssseg3e16_v_u16m2x3(uint16_t *base, ptrdiff_t bstride, vuint16m2x3_t v_tuple, size_t vl) {
  return __riscv_vssseg3e16(base, bstride, v_tuple, vl);
}

void test_vssseg3e16_v_f16mf4x3_m(vbool64_t mask, _Float16 *base, ptrdiff_t bstride, vfloat16mf4x3_t v_tuple, size_t vl) {
  return __riscv_vssseg3e16(mask, base, bstride, v_tuple, vl);
}

void test_vssseg3e16_v_f16mf2x3_m(vbool32_t mask, _Float16 *base, ptrdiff_t bstride, vfloat16mf2x3_t v_tuple, size_t vl) {
  return __riscv_vssseg3e16(mask, base, bstride, v_tuple, vl);
}

void test_vssseg3e16_v_f16m1x3_m(vbool16_t mask, _Float16 *base, ptrdiff_t bstride, vfloat16m1x3_t v_tuple, size_t vl) {
  return __riscv_vssseg3e16(mask, base, bstride, v_tuple, vl);
}

void test_vssseg3e16_v_f16m2x3_m(vbool8_t mask, _Float16 *base, ptrdiff_t bstride, vfloat16m2x3_t v_tuple, size_t vl) {
  return __riscv_vssseg3e16(mask, base, bstride, v_tuple, vl);
}

void test_vssseg3e16_v_i16mf4x3_m(vbool64_t mask, int16_t *base, ptrdiff_t bstride, vint16mf4x3_t v_tuple, size_t vl) {
  return __riscv_vssseg3e16(mask, base, bstride, v_tuple, vl);
}

void test_vssseg3e16_v_i16mf2x3_m(vbool32_t mask, int16_t *base, ptrdiff_t bstride, vint16mf2x3_t v_tuple, size_t vl) {
  return __riscv_vssseg3e16(mask, base, bstride, v_tuple, vl);
}

void test_vssseg3e16_v_i16m1x3_m(vbool16_t mask, int16_t *base, ptrdiff_t bstride, vint16m1x3_t v_tuple, size_t vl) {
  return __riscv_vssseg3e16(mask, base, bstride, v_tuple, vl);
}

void test_vssseg3e16_v_i16m2x3_m(vbool8_t mask, int16_t *base, ptrdiff_t bstride, vint16m2x3_t v_tuple, size_t vl) {
  return __riscv_vssseg3e16(mask, base, bstride, v_tuple, vl);
}

void test_vssseg3e16_v_u16mf4x3_m(vbool64_t mask, uint16_t *base, ptrdiff_t bstride, vuint16mf4x3_t v_tuple, size_t vl) {
  return __riscv_vssseg3e16(mask, base, bstride, v_tuple, vl);
}

void test_vssseg3e16_v_u16mf2x3_m(vbool32_t mask, uint16_t *base, ptrdiff_t bstride, vuint16mf2x3_t v_tuple, size_t vl) {
  return __riscv_vssseg3e16(mask, base, bstride, v_tuple, vl);
}

void test_vssseg3e16_v_u16m1x3_m(vbool16_t mask, uint16_t *base, ptrdiff_t bstride, vuint16m1x3_t v_tuple, size_t vl) {
  return __riscv_vssseg3e16(mask, base, bstride, v_tuple, vl);
}

void test_vssseg3e16_v_u16m2x3_m(vbool8_t mask, uint16_t *base, ptrdiff_t bstride, vuint16m2x3_t v_tuple, size_t vl) {
  return __riscv_vssseg3e16(mask, base, bstride, v_tuple, vl);
}

