// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -target-feature +zfh \
// RUN:   -target-feature +experimental-zvfh -disable-O0-optnone  \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

void test_vssseg6e8_v_i8mf8x6(int8_t *base, ptrdiff_t bstride,
                              vint8mf8x6_t v_tuple, size_t vl) {
  return __riscv_vssseg6e8_v_i8mf8x6(base, bstride, v_tuple, vl);
}

void test_vssseg6e8_v_i8mf4x6(int8_t *base, ptrdiff_t bstride,
                              vint8mf4x6_t v_tuple, size_t vl) {
  return __riscv_vssseg6e8_v_i8mf4x6(base, bstride, v_tuple, vl);
}

void test_vssseg6e8_v_i8mf2x6(int8_t *base, ptrdiff_t bstride,
                              vint8mf2x6_t v_tuple, size_t vl) {
  return __riscv_vssseg6e8_v_i8mf2x6(base, bstride, v_tuple, vl);
}

void test_vssseg6e8_v_i8m1x6(int8_t *base, ptrdiff_t bstride,
                             vint8m1x6_t v_tuple, size_t vl) {
  return __riscv_vssseg6e8_v_i8m1x6(base, bstride, v_tuple, vl);
}

void test_vssseg6e8_v_u8mf8x6(uint8_t *base, ptrdiff_t bstride,
                              vuint8mf8x6_t v_tuple, size_t vl) {
  return __riscv_vssseg6e8_v_u8mf8x6(base, bstride, v_tuple, vl);
}

void test_vssseg6e8_v_u8mf4x6(uint8_t *base, ptrdiff_t bstride,
                              vuint8mf4x6_t v_tuple, size_t vl) {
  return __riscv_vssseg6e8_v_u8mf4x6(base, bstride, v_tuple, vl);
}

void test_vssseg6e8_v_u8mf2x6(uint8_t *base, ptrdiff_t bstride,
                              vuint8mf2x6_t v_tuple, size_t vl) {
  return __riscv_vssseg6e8_v_u8mf2x6(base, bstride, v_tuple, vl);
}

void test_vssseg6e8_v_u8m1x6(uint8_t *base, ptrdiff_t bstride,
                             vuint8m1x6_t v_tuple, size_t vl) {
  return __riscv_vssseg6e8_v_u8m1x6(base, bstride, v_tuple, vl);
}

void test_vssseg6e8_v_i8mf8x6_m(vbool64_t mask, int8_t *base, ptrdiff_t bstride,
                                vint8mf8x6_t v_tuple, size_t vl) {
  return __riscv_vssseg6e8_v_i8mf8x6_m(mask, base, bstride, v_tuple, vl);
}

void test_vssseg6e8_v_i8mf4x6_m(vbool32_t mask, int8_t *base, ptrdiff_t bstride,
                                vint8mf4x6_t v_tuple, size_t vl) {
  return __riscv_vssseg6e8_v_i8mf4x6_m(mask, base, bstride, v_tuple, vl);
}

void test_vssseg6e8_v_i8mf2x6_m(vbool16_t mask, int8_t *base, ptrdiff_t bstride,
                                vint8mf2x6_t v_tuple, size_t vl) {
  return __riscv_vssseg6e8_v_i8mf2x6_m(mask, base, bstride, v_tuple, vl);
}

void test_vssseg6e8_v_i8m1x6_m(vbool8_t mask, int8_t *base, ptrdiff_t bstride,
                               vint8m1x6_t v_tuple, size_t vl) {
  return __riscv_vssseg6e8_v_i8m1x6_m(mask, base, bstride, v_tuple, vl);
}

void test_vssseg6e8_v_u8mf8x6_m(vbool64_t mask, uint8_t *base,
                                ptrdiff_t bstride, vuint8mf8x6_t v_tuple,
                                size_t vl) {
  return __riscv_vssseg6e8_v_u8mf8x6_m(mask, base, bstride, v_tuple, vl);
}

void test_vssseg6e8_v_u8mf4x6_m(vbool32_t mask, uint8_t *base,
                                ptrdiff_t bstride, vuint8mf4x6_t v_tuple,
                                size_t vl) {
  return __riscv_vssseg6e8_v_u8mf4x6_m(mask, base, bstride, v_tuple, vl);
}

void test_vssseg6e8_v_u8mf2x6_m(vbool16_t mask, uint8_t *base,
                                ptrdiff_t bstride, vuint8mf2x6_t v_tuple,
                                size_t vl) {
  return __riscv_vssseg6e8_v_u8mf2x6_m(mask, base, bstride, v_tuple, vl);
}

void test_vssseg6e8_v_u8m1x6_m(vbool8_t mask, uint8_t *base, ptrdiff_t bstride,
                               vuint8m1x6_t v_tuple, size_t vl) {
  return __riscv_vssseg6e8_v_u8m1x6_m(mask, base, bstride, v_tuple, vl);
}
