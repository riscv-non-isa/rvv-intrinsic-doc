// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -disable-O0-optnone \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

vint8mf8x7_t test_vlsseg7e8_v_i8mf8x7_m(vbool64_t mask, const int8_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg7e8(mask, base, bstride, vl);
}

vint8mf4x7_t test_vlsseg7e8_v_i8mf4x7_m(vbool32_t mask, const int8_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg7e8(mask, base, bstride, vl);
}

vint8mf2x7_t test_vlsseg7e8_v_i8mf2x7_m(vbool16_t mask, const int8_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg7e8(mask, base, bstride, vl);
}

vint8m1x7_t test_vlsseg7e8_v_i8m1x7_m(vbool8_t mask, const int8_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg7e8(mask, base, bstride, vl);
}

vuint8mf8x7_t test_vlsseg7e8_v_u8mf8x7_m(vbool64_t mask, const uint8_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg7e8(mask, base, bstride, vl);
}

vuint8mf4x7_t test_vlsseg7e8_v_u8mf4x7_m(vbool32_t mask, const uint8_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg7e8(mask, base, bstride, vl);
}

vuint8mf2x7_t test_vlsseg7e8_v_u8mf2x7_m(vbool16_t mask, const uint8_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg7e8(mask, base, bstride, vl);
}

vuint8m1x7_t test_vlsseg7e8_v_u8m1x7_m(vbool8_t mask, const uint8_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg7e8(mask, base, bstride, vl);
}

