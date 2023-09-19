// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -target-feature +zfh \
// RUN:   -target-feature +experimental-zvfh -disable-O0-optnone  \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

void test_vsseg2e8_v_i8mf8x2(int8_t *base, vint8mf8x2_t v_tuple, size_t vl) {
  return __riscv_vsseg2e8(base, v_tuple, vl);
}

void test_vsseg2e8_v_i8mf4x2(int8_t *base, vint8mf4x2_t v_tuple, size_t vl) {
  return __riscv_vsseg2e8(base, v_tuple, vl);
}

void test_vsseg2e8_v_i8mf2x2(int8_t *base, vint8mf2x2_t v_tuple, size_t vl) {
  return __riscv_vsseg2e8(base, v_tuple, vl);
}

void test_vsseg2e8_v_i8m1x2(int8_t *base, vint8m1x2_t v_tuple, size_t vl) {
  return __riscv_vsseg2e8(base, v_tuple, vl);
}

void test_vsseg2e8_v_i8m2x2(int8_t *base, vint8m2x2_t v_tuple, size_t vl) {
  return __riscv_vsseg2e8(base, v_tuple, vl);
}

void test_vsseg2e8_v_i8m4x2(int8_t *base, vint8m4x2_t v_tuple, size_t vl) {
  return __riscv_vsseg2e8(base, v_tuple, vl);
}

void test_vsseg2e8_v_u8mf8x2(uint8_t *base, vuint8mf8x2_t v_tuple, size_t vl) {
  return __riscv_vsseg2e8(base, v_tuple, vl);
}

void test_vsseg2e8_v_u8mf4x2(uint8_t *base, vuint8mf4x2_t v_tuple, size_t vl) {
  return __riscv_vsseg2e8(base, v_tuple, vl);
}

void test_vsseg2e8_v_u8mf2x2(uint8_t *base, vuint8mf2x2_t v_tuple, size_t vl) {
  return __riscv_vsseg2e8(base, v_tuple, vl);
}

void test_vsseg2e8_v_u8m1x2(uint8_t *base, vuint8m1x2_t v_tuple, size_t vl) {
  return __riscv_vsseg2e8(base, v_tuple, vl);
}

void test_vsseg2e8_v_u8m2x2(uint8_t *base, vuint8m2x2_t v_tuple, size_t vl) {
  return __riscv_vsseg2e8(base, v_tuple, vl);
}

void test_vsseg2e8_v_u8m4x2(uint8_t *base, vuint8m4x2_t v_tuple, size_t vl) {
  return __riscv_vsseg2e8(base, v_tuple, vl);
}

void test_vsseg2e8_v_i8mf8x2_m(vbool64_t mask, int8_t *base,
                               vint8mf8x2_t v_tuple, size_t vl) {
  return __riscv_vsseg2e8(mask, base, v_tuple, vl);
}

void test_vsseg2e8_v_i8mf4x2_m(vbool32_t mask, int8_t *base,
                               vint8mf4x2_t v_tuple, size_t vl) {
  return __riscv_vsseg2e8(mask, base, v_tuple, vl);
}

void test_vsseg2e8_v_i8mf2x2_m(vbool16_t mask, int8_t *base,
                               vint8mf2x2_t v_tuple, size_t vl) {
  return __riscv_vsseg2e8(mask, base, v_tuple, vl);
}

void test_vsseg2e8_v_i8m1x2_m(vbool8_t mask, int8_t *base, vint8m1x2_t v_tuple,
                              size_t vl) {
  return __riscv_vsseg2e8(mask, base, v_tuple, vl);
}

void test_vsseg2e8_v_i8m2x2_m(vbool4_t mask, int8_t *base, vint8m2x2_t v_tuple,
                              size_t vl) {
  return __riscv_vsseg2e8(mask, base, v_tuple, vl);
}

void test_vsseg2e8_v_i8m4x2_m(vbool2_t mask, int8_t *base, vint8m4x2_t v_tuple,
                              size_t vl) {
  return __riscv_vsseg2e8(mask, base, v_tuple, vl);
}

void test_vsseg2e8_v_u8mf8x2_m(vbool64_t mask, uint8_t *base,
                               vuint8mf8x2_t v_tuple, size_t vl) {
  return __riscv_vsseg2e8(mask, base, v_tuple, vl);
}

void test_vsseg2e8_v_u8mf4x2_m(vbool32_t mask, uint8_t *base,
                               vuint8mf4x2_t v_tuple, size_t vl) {
  return __riscv_vsseg2e8(mask, base, v_tuple, vl);
}

void test_vsseg2e8_v_u8mf2x2_m(vbool16_t mask, uint8_t *base,
                               vuint8mf2x2_t v_tuple, size_t vl) {
  return __riscv_vsseg2e8(mask, base, v_tuple, vl);
}

void test_vsseg2e8_v_u8m1x2_m(vbool8_t mask, uint8_t *base,
                              vuint8m1x2_t v_tuple, size_t vl) {
  return __riscv_vsseg2e8(mask, base, v_tuple, vl);
}

void test_vsseg2e8_v_u8m2x2_m(vbool4_t mask, uint8_t *base,
                              vuint8m2x2_t v_tuple, size_t vl) {
  return __riscv_vsseg2e8(mask, base, v_tuple, vl);
}

void test_vsseg2e8_v_u8m4x2_m(vbool2_t mask, uint8_t *base,
                              vuint8m4x2_t v_tuple, size_t vl) {
  return __riscv_vsseg2e8(mask, base, v_tuple, vl);
}
