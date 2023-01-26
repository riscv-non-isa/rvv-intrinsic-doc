// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -target-feature +zfh \
// RUN:   -target-feature +experimental-zvfh -disable-O0-optnone  \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

void test_vlseg2e8ff_v_i8mf8_m(vint8mf8_t *v0, vint8mf8_t *v1, vbool64_t mask, const int8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e8ff(v0, v1, mask, base, new_vl, vl);
}

void test_vlseg2e8ff_v_i8mf4_m(vint8mf4_t *v0, vint8mf4_t *v1, vbool32_t mask, const int8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e8ff(v0, v1, mask, base, new_vl, vl);
}

void test_vlseg2e8ff_v_i8mf2_m(vint8mf2_t *v0, vint8mf2_t *v1, vbool16_t mask, const int8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e8ff(v0, v1, mask, base, new_vl, vl);
}

void test_vlseg2e8ff_v_i8m1_m(vint8m1_t *v0, vint8m1_t *v1, vbool8_t mask, const int8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e8ff(v0, v1, mask, base, new_vl, vl);
}

void test_vlseg2e8ff_v_i8m2_m(vint8m2_t *v0, vint8m2_t *v1, vbool4_t mask, const int8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e8ff(v0, v1, mask, base, new_vl, vl);
}

void test_vlseg2e8ff_v_i8m4_m(vint8m4_t *v0, vint8m4_t *v1, vbool2_t mask, const int8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e8ff(v0, v1, mask, base, new_vl, vl);
}

void test_vlseg2e8ff_v_u8mf8_m(vuint8mf8_t *v0, vuint8mf8_t *v1, vbool64_t mask, const uint8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e8ff(v0, v1, mask, base, new_vl, vl);
}

void test_vlseg2e8ff_v_u8mf4_m(vuint8mf4_t *v0, vuint8mf4_t *v1, vbool32_t mask, const uint8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e8ff(v0, v1, mask, base, new_vl, vl);
}

void test_vlseg2e8ff_v_u8mf2_m(vuint8mf2_t *v0, vuint8mf2_t *v1, vbool16_t mask, const uint8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e8ff(v0, v1, mask, base, new_vl, vl);
}

void test_vlseg2e8ff_v_u8m1_m(vuint8m1_t *v0, vuint8m1_t *v1, vbool8_t mask, const uint8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e8ff(v0, v1, mask, base, new_vl, vl);
}

void test_vlseg2e8ff_v_u8m2_m(vuint8m2_t *v0, vuint8m2_t *v1, vbool4_t mask, const uint8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e8ff(v0, v1, mask, base, new_vl, vl);
}

void test_vlseg2e8ff_v_u8m4_m(vuint8m4_t *v0, vuint8m4_t *v1, vbool2_t mask, const uint8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e8ff(v0, v1, mask, base, new_vl, vl);
}

