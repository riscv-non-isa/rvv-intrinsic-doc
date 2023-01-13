// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -target-feature +zfh \
// RUN:   -target-feature +experimental-zvfh -disable-O0-optnone  \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

void test_vlseg5e8ff_v_i8mf8_m(vint8mf8_t *v0, vint8mf8_t *v1, vint8mf8_t *v2, vint8mf8_t *v3, vint8mf8_t *v4, vbool64_t mask, const int8_t *base, size_t *new_vl, size_t vl) {
  return vlseg5e8ff(v0, v1, v2, v3, v4, mask, base, new_vl, vl);
}

void test_vlseg5e8ff_v_i8mf4_m(vint8mf4_t *v0, vint8mf4_t *v1, vint8mf4_t *v2, vint8mf4_t *v3, vint8mf4_t *v4, vbool32_t mask, const int8_t *base, size_t *new_vl, size_t vl) {
  return vlseg5e8ff(v0, v1, v2, v3, v4, mask, base, new_vl, vl);
}

void test_vlseg5e8ff_v_i8mf2_m(vint8mf2_t *v0, vint8mf2_t *v1, vint8mf2_t *v2, vint8mf2_t *v3, vint8mf2_t *v4, vbool16_t mask, const int8_t *base, size_t *new_vl, size_t vl) {
  return vlseg5e8ff(v0, v1, v2, v3, v4, mask, base, new_vl, vl);
}

void test_vlseg5e8ff_v_i8m1_m(vint8m1_t *v0, vint8m1_t *v1, vint8m1_t *v2, vint8m1_t *v3, vint8m1_t *v4, vbool8_t mask, const int8_t *base, size_t *new_vl, size_t vl) {
  return vlseg5e8ff(v0, v1, v2, v3, v4, mask, base, new_vl, vl);
}

void test_vlseg5e8ff_v_u8mf8_m(vuint8mf8_t *v0, vuint8mf8_t *v1, vuint8mf8_t *v2, vuint8mf8_t *v3, vuint8mf8_t *v4, vbool64_t mask, const uint8_t *base, size_t *new_vl, size_t vl) {
  return vlseg5e8ff(v0, v1, v2, v3, v4, mask, base, new_vl, vl);
}

void test_vlseg5e8ff_v_u8mf4_m(vuint8mf4_t *v0, vuint8mf4_t *v1, vuint8mf4_t *v2, vuint8mf4_t *v3, vuint8mf4_t *v4, vbool32_t mask, const uint8_t *base, size_t *new_vl, size_t vl) {
  return vlseg5e8ff(v0, v1, v2, v3, v4, mask, base, new_vl, vl);
}

void test_vlseg5e8ff_v_u8mf2_m(vuint8mf2_t *v0, vuint8mf2_t *v1, vuint8mf2_t *v2, vuint8mf2_t *v3, vuint8mf2_t *v4, vbool16_t mask, const uint8_t *base, size_t *new_vl, size_t vl) {
  return vlseg5e8ff(v0, v1, v2, v3, v4, mask, base, new_vl, vl);
}

void test_vlseg5e8ff_v_u8m1_m(vuint8m1_t *v0, vuint8m1_t *v1, vuint8m1_t *v2, vuint8m1_t *v3, vuint8m1_t *v4, vbool8_t mask, const uint8_t *base, size_t *new_vl, size_t vl) {
  return vlseg5e8ff(v0, v1, v2, v3, v4, mask, base, new_vl, vl);
}

