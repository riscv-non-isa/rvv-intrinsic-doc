// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -target-feature +zfh \
// RUN:   -target-feature +experimental-zvfh -disable-O0-optnone  \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

void test_vlseg3e8ff_v_i8mf8_tu(vint8mf8_t *v0, vint8mf8_t *v1, vint8mf8_t *v2, vint8mf8_t maskedoff0, vint8mf8_t maskedoff1, vint8mf8_t maskedoff2, const int8_t *base, size_t *new_vl, size_t vl) {
  return vlseg3e8ff_v_i8mf8_tu(v0, v1, v2, maskedoff0, maskedoff1, maskedoff2, base, new_vl, vl);
}

void test_vlseg3e8ff_v_i8mf4_tu(vint8mf4_t *v0, vint8mf4_t *v1, vint8mf4_t *v2, vint8mf4_t maskedoff0, vint8mf4_t maskedoff1, vint8mf4_t maskedoff2, const int8_t *base, size_t *new_vl, size_t vl) {
  return vlseg3e8ff_v_i8mf4_tu(v0, v1, v2, maskedoff0, maskedoff1, maskedoff2, base, new_vl, vl);
}

void test_vlseg3e8ff_v_i8mf2_tu(vint8mf2_t *v0, vint8mf2_t *v1, vint8mf2_t *v2, vint8mf2_t maskedoff0, vint8mf2_t maskedoff1, vint8mf2_t maskedoff2, const int8_t *base, size_t *new_vl, size_t vl) {
  return vlseg3e8ff_v_i8mf2_tu(v0, v1, v2, maskedoff0, maskedoff1, maskedoff2, base, new_vl, vl);
}

void test_vlseg3e8ff_v_i8m1_tu(vint8m1_t *v0, vint8m1_t *v1, vint8m1_t *v2, vint8m1_t maskedoff0, vint8m1_t maskedoff1, vint8m1_t maskedoff2, const int8_t *base, size_t *new_vl, size_t vl) {
  return vlseg3e8ff_v_i8m1_tu(v0, v1, v2, maskedoff0, maskedoff1, maskedoff2, base, new_vl, vl);
}

void test_vlseg3e8ff_v_i8m2_tu(vint8m2_t *v0, vint8m2_t *v1, vint8m2_t *v2, vint8m2_t maskedoff0, vint8m2_t maskedoff1, vint8m2_t maskedoff2, const int8_t *base, size_t *new_vl, size_t vl) {
  return vlseg3e8ff_v_i8m2_tu(v0, v1, v2, maskedoff0, maskedoff1, maskedoff2, base, new_vl, vl);
}

void test_vlseg3e8ff_v_u8mf8_tu(vuint8mf8_t *v0, vuint8mf8_t *v1, vuint8mf8_t *v2, vuint8mf8_t maskedoff0, vuint8mf8_t maskedoff1, vuint8mf8_t maskedoff2, const uint8_t *base, size_t *new_vl, size_t vl) {
  return vlseg3e8ff_v_u8mf8_tu(v0, v1, v2, maskedoff0, maskedoff1, maskedoff2, base, new_vl, vl);
}

void test_vlseg3e8ff_v_u8mf4_tu(vuint8mf4_t *v0, vuint8mf4_t *v1, vuint8mf4_t *v2, vuint8mf4_t maskedoff0, vuint8mf4_t maskedoff1, vuint8mf4_t maskedoff2, const uint8_t *base, size_t *new_vl, size_t vl) {
  return vlseg3e8ff_v_u8mf4_tu(v0, v1, v2, maskedoff0, maskedoff1, maskedoff2, base, new_vl, vl);
}

void test_vlseg3e8ff_v_u8mf2_tu(vuint8mf2_t *v0, vuint8mf2_t *v1, vuint8mf2_t *v2, vuint8mf2_t maskedoff0, vuint8mf2_t maskedoff1, vuint8mf2_t maskedoff2, const uint8_t *base, size_t *new_vl, size_t vl) {
  return vlseg3e8ff_v_u8mf2_tu(v0, v1, v2, maskedoff0, maskedoff1, maskedoff2, base, new_vl, vl);
}

void test_vlseg3e8ff_v_u8m1_tu(vuint8m1_t *v0, vuint8m1_t *v1, vuint8m1_t *v2, vuint8m1_t maskedoff0, vuint8m1_t maskedoff1, vuint8m1_t maskedoff2, const uint8_t *base, size_t *new_vl, size_t vl) {
  return vlseg3e8ff_v_u8m1_tu(v0, v1, v2, maskedoff0, maskedoff1, maskedoff2, base, new_vl, vl);
}

void test_vlseg3e8ff_v_u8m2_tu(vuint8m2_t *v0, vuint8m2_t *v1, vuint8m2_t *v2, vuint8m2_t maskedoff0, vuint8m2_t maskedoff1, vuint8m2_t maskedoff2, const uint8_t *base, size_t *new_vl, size_t vl) {
  return vlseg3e8ff_v_u8m2_tu(v0, v1, v2, maskedoff0, maskedoff1, maskedoff2, base, new_vl, vl);
}

void test_vlseg3e8ff_v_i8mf8_ta(vint8mf8_t *v0, vint8mf8_t *v1, vint8mf8_t *v2, const int8_t *base, size_t *new_vl, size_t vl) {
  return vlseg3e8ff_v_i8mf8_ta(v0, v1, v2, base, new_vl, vl);
}

void test_vlseg3e8ff_v_i8mf4_ta(vint8mf4_t *v0, vint8mf4_t *v1, vint8mf4_t *v2, const int8_t *base, size_t *new_vl, size_t vl) {
  return vlseg3e8ff_v_i8mf4_ta(v0, v1, v2, base, new_vl, vl);
}

void test_vlseg3e8ff_v_i8mf2_ta(vint8mf2_t *v0, vint8mf2_t *v1, vint8mf2_t *v2, const int8_t *base, size_t *new_vl, size_t vl) {
  return vlseg3e8ff_v_i8mf2_ta(v0, v1, v2, base, new_vl, vl);
}

void test_vlseg3e8ff_v_i8m1_ta(vint8m1_t *v0, vint8m1_t *v1, vint8m1_t *v2, const int8_t *base, size_t *new_vl, size_t vl) {
  return vlseg3e8ff_v_i8m1_ta(v0, v1, v2, base, new_vl, vl);
}

void test_vlseg3e8ff_v_i8m2_ta(vint8m2_t *v0, vint8m2_t *v1, vint8m2_t *v2, const int8_t *base, size_t *new_vl, size_t vl) {
  return vlseg3e8ff_v_i8m2_ta(v0, v1, v2, base, new_vl, vl);
}

void test_vlseg3e8ff_v_u8mf8_ta(vuint8mf8_t *v0, vuint8mf8_t *v1, vuint8mf8_t *v2, const uint8_t *base, size_t *new_vl, size_t vl) {
  return vlseg3e8ff_v_u8mf8_ta(v0, v1, v2, base, new_vl, vl);
}

void test_vlseg3e8ff_v_u8mf4_ta(vuint8mf4_t *v0, vuint8mf4_t *v1, vuint8mf4_t *v2, const uint8_t *base, size_t *new_vl, size_t vl) {
  return vlseg3e8ff_v_u8mf4_ta(v0, v1, v2, base, new_vl, vl);
}

void test_vlseg3e8ff_v_u8mf2_ta(vuint8mf2_t *v0, vuint8mf2_t *v1, vuint8mf2_t *v2, const uint8_t *base, size_t *new_vl, size_t vl) {
  return vlseg3e8ff_v_u8mf2_ta(v0, v1, v2, base, new_vl, vl);
}

void test_vlseg3e8ff_v_u8m1_ta(vuint8m1_t *v0, vuint8m1_t *v1, vuint8m1_t *v2, const uint8_t *base, size_t *new_vl, size_t vl) {
  return vlseg3e8ff_v_u8m1_ta(v0, v1, v2, base, new_vl, vl);
}

void test_vlseg3e8ff_v_u8m2_ta(vuint8m2_t *v0, vuint8m2_t *v1, vuint8m2_t *v2, const uint8_t *base, size_t *new_vl, size_t vl) {
  return vlseg3e8ff_v_u8m2_ta(v0, v1, v2, base, new_vl, vl);
}

void test_vlseg3e8ff_v_i8mf8_tuma(vint8mf8_t *v0, vint8mf8_t *v1, vint8mf8_t *v2, vbool64_t mask, vint8mf8_t maskedoff0, vint8mf8_t maskedoff1, vint8mf8_t maskedoff2, const int8_t *base, size_t *new_vl, size_t vl) {
  return vlseg3e8ff_v_i8mf8_tuma(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, new_vl, vl);
}

void test_vlseg3e8ff_v_i8mf4_tuma(vint8mf4_t *v0, vint8mf4_t *v1, vint8mf4_t *v2, vbool32_t mask, vint8mf4_t maskedoff0, vint8mf4_t maskedoff1, vint8mf4_t maskedoff2, const int8_t *base, size_t *new_vl, size_t vl) {
  return vlseg3e8ff_v_i8mf4_tuma(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, new_vl, vl);
}

void test_vlseg3e8ff_v_i8mf2_tuma(vint8mf2_t *v0, vint8mf2_t *v1, vint8mf2_t *v2, vbool16_t mask, vint8mf2_t maskedoff0, vint8mf2_t maskedoff1, vint8mf2_t maskedoff2, const int8_t *base, size_t *new_vl, size_t vl) {
  return vlseg3e8ff_v_i8mf2_tuma(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, new_vl, vl);
}

void test_vlseg3e8ff_v_i8m1_tuma(vint8m1_t *v0, vint8m1_t *v1, vint8m1_t *v2, vbool8_t mask, vint8m1_t maskedoff0, vint8m1_t maskedoff1, vint8m1_t maskedoff2, const int8_t *base, size_t *new_vl, size_t vl) {
  return vlseg3e8ff_v_i8m1_tuma(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, new_vl, vl);
}

void test_vlseg3e8ff_v_i8m2_tuma(vint8m2_t *v0, vint8m2_t *v1, vint8m2_t *v2, vbool4_t mask, vint8m2_t maskedoff0, vint8m2_t maskedoff1, vint8m2_t maskedoff2, const int8_t *base, size_t *new_vl, size_t vl) {
  return vlseg3e8ff_v_i8m2_tuma(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, new_vl, vl);
}

void test_vlseg3e8ff_v_u8mf8_tuma(vuint8mf8_t *v0, vuint8mf8_t *v1, vuint8mf8_t *v2, vbool64_t mask, vuint8mf8_t maskedoff0, vuint8mf8_t maskedoff1, vuint8mf8_t maskedoff2, const uint8_t *base, size_t *new_vl, size_t vl) {
  return vlseg3e8ff_v_u8mf8_tuma(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, new_vl, vl);
}

void test_vlseg3e8ff_v_u8mf4_tuma(vuint8mf4_t *v0, vuint8mf4_t *v1, vuint8mf4_t *v2, vbool32_t mask, vuint8mf4_t maskedoff0, vuint8mf4_t maskedoff1, vuint8mf4_t maskedoff2, const uint8_t *base, size_t *new_vl, size_t vl) {
  return vlseg3e8ff_v_u8mf4_tuma(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, new_vl, vl);
}

void test_vlseg3e8ff_v_u8mf2_tuma(vuint8mf2_t *v0, vuint8mf2_t *v1, vuint8mf2_t *v2, vbool16_t mask, vuint8mf2_t maskedoff0, vuint8mf2_t maskedoff1, vuint8mf2_t maskedoff2, const uint8_t *base, size_t *new_vl, size_t vl) {
  return vlseg3e8ff_v_u8mf2_tuma(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, new_vl, vl);
}

void test_vlseg3e8ff_v_u8m1_tuma(vuint8m1_t *v0, vuint8m1_t *v1, vuint8m1_t *v2, vbool8_t mask, vuint8m1_t maskedoff0, vuint8m1_t maskedoff1, vuint8m1_t maskedoff2, const uint8_t *base, size_t *new_vl, size_t vl) {
  return vlseg3e8ff_v_u8m1_tuma(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, new_vl, vl);
}

void test_vlseg3e8ff_v_u8m2_tuma(vuint8m2_t *v0, vuint8m2_t *v1, vuint8m2_t *v2, vbool4_t mask, vuint8m2_t maskedoff0, vuint8m2_t maskedoff1, vuint8m2_t maskedoff2, const uint8_t *base, size_t *new_vl, size_t vl) {
  return vlseg3e8ff_v_u8m2_tuma(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, new_vl, vl);
}

void test_vlseg3e8ff_v_i8mf8_tumu(vint8mf8_t *v0, vint8mf8_t *v1, vint8mf8_t *v2, vbool64_t mask, vint8mf8_t maskedoff0, vint8mf8_t maskedoff1, vint8mf8_t maskedoff2, const int8_t *base, size_t *new_vl, size_t vl) {
  return vlseg3e8ff_v_i8mf8_tumu(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, new_vl, vl);
}

void test_vlseg3e8ff_v_i8mf4_tumu(vint8mf4_t *v0, vint8mf4_t *v1, vint8mf4_t *v2, vbool32_t mask, vint8mf4_t maskedoff0, vint8mf4_t maskedoff1, vint8mf4_t maskedoff2, const int8_t *base, size_t *new_vl, size_t vl) {
  return vlseg3e8ff_v_i8mf4_tumu(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, new_vl, vl);
}

void test_vlseg3e8ff_v_i8mf2_tumu(vint8mf2_t *v0, vint8mf2_t *v1, vint8mf2_t *v2, vbool16_t mask, vint8mf2_t maskedoff0, vint8mf2_t maskedoff1, vint8mf2_t maskedoff2, const int8_t *base, size_t *new_vl, size_t vl) {
  return vlseg3e8ff_v_i8mf2_tumu(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, new_vl, vl);
}

void test_vlseg3e8ff_v_i8m1_tumu(vint8m1_t *v0, vint8m1_t *v1, vint8m1_t *v2, vbool8_t mask, vint8m1_t maskedoff0, vint8m1_t maskedoff1, vint8m1_t maskedoff2, const int8_t *base, size_t *new_vl, size_t vl) {
  return vlseg3e8ff_v_i8m1_tumu(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, new_vl, vl);
}

void test_vlseg3e8ff_v_i8m2_tumu(vint8m2_t *v0, vint8m2_t *v1, vint8m2_t *v2, vbool4_t mask, vint8m2_t maskedoff0, vint8m2_t maskedoff1, vint8m2_t maskedoff2, const int8_t *base, size_t *new_vl, size_t vl) {
  return vlseg3e8ff_v_i8m2_tumu(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, new_vl, vl);
}

void test_vlseg3e8ff_v_u8mf8_tumu(vuint8mf8_t *v0, vuint8mf8_t *v1, vuint8mf8_t *v2, vbool64_t mask, vuint8mf8_t maskedoff0, vuint8mf8_t maskedoff1, vuint8mf8_t maskedoff2, const uint8_t *base, size_t *new_vl, size_t vl) {
  return vlseg3e8ff_v_u8mf8_tumu(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, new_vl, vl);
}

void test_vlseg3e8ff_v_u8mf4_tumu(vuint8mf4_t *v0, vuint8mf4_t *v1, vuint8mf4_t *v2, vbool32_t mask, vuint8mf4_t maskedoff0, vuint8mf4_t maskedoff1, vuint8mf4_t maskedoff2, const uint8_t *base, size_t *new_vl, size_t vl) {
  return vlseg3e8ff_v_u8mf4_tumu(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, new_vl, vl);
}

void test_vlseg3e8ff_v_u8mf2_tumu(vuint8mf2_t *v0, vuint8mf2_t *v1, vuint8mf2_t *v2, vbool16_t mask, vuint8mf2_t maskedoff0, vuint8mf2_t maskedoff1, vuint8mf2_t maskedoff2, const uint8_t *base, size_t *new_vl, size_t vl) {
  return vlseg3e8ff_v_u8mf2_tumu(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, new_vl, vl);
}

void test_vlseg3e8ff_v_u8m1_tumu(vuint8m1_t *v0, vuint8m1_t *v1, vuint8m1_t *v2, vbool8_t mask, vuint8m1_t maskedoff0, vuint8m1_t maskedoff1, vuint8m1_t maskedoff2, const uint8_t *base, size_t *new_vl, size_t vl) {
  return vlseg3e8ff_v_u8m1_tumu(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, new_vl, vl);
}

void test_vlseg3e8ff_v_u8m2_tumu(vuint8m2_t *v0, vuint8m2_t *v1, vuint8m2_t *v2, vbool4_t mask, vuint8m2_t maskedoff0, vuint8m2_t maskedoff1, vuint8m2_t maskedoff2, const uint8_t *base, size_t *new_vl, size_t vl) {
  return vlseg3e8ff_v_u8m2_tumu(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, new_vl, vl);
}

void test_vlseg3e8ff_v_i8mf8_tama(vint8mf8_t *v0, vint8mf8_t *v1, vint8mf8_t *v2, vbool64_t mask, const int8_t *base, size_t *new_vl, size_t vl) {
  return vlseg3e8ff_v_i8mf8_tama(v0, v1, v2, mask, base, new_vl, vl);
}

void test_vlseg3e8ff_v_i8mf4_tama(vint8mf4_t *v0, vint8mf4_t *v1, vint8mf4_t *v2, vbool32_t mask, const int8_t *base, size_t *new_vl, size_t vl) {
  return vlseg3e8ff_v_i8mf4_tama(v0, v1, v2, mask, base, new_vl, vl);
}

void test_vlseg3e8ff_v_i8mf2_tama(vint8mf2_t *v0, vint8mf2_t *v1, vint8mf2_t *v2, vbool16_t mask, const int8_t *base, size_t *new_vl, size_t vl) {
  return vlseg3e8ff_v_i8mf2_tama(v0, v1, v2, mask, base, new_vl, vl);
}

void test_vlseg3e8ff_v_i8m1_tama(vint8m1_t *v0, vint8m1_t *v1, vint8m1_t *v2, vbool8_t mask, const int8_t *base, size_t *new_vl, size_t vl) {
  return vlseg3e8ff_v_i8m1_tama(v0, v1, v2, mask, base, new_vl, vl);
}

void test_vlseg3e8ff_v_i8m2_tama(vint8m2_t *v0, vint8m2_t *v1, vint8m2_t *v2, vbool4_t mask, const int8_t *base, size_t *new_vl, size_t vl) {
  return vlseg3e8ff_v_i8m2_tama(v0, v1, v2, mask, base, new_vl, vl);
}

void test_vlseg3e8ff_v_u8mf8_tama(vuint8mf8_t *v0, vuint8mf8_t *v1, vuint8mf8_t *v2, vbool64_t mask, const uint8_t *base, size_t *new_vl, size_t vl) {
  return vlseg3e8ff_v_u8mf8_tama(v0, v1, v2, mask, base, new_vl, vl);
}

void test_vlseg3e8ff_v_u8mf4_tama(vuint8mf4_t *v0, vuint8mf4_t *v1, vuint8mf4_t *v2, vbool32_t mask, const uint8_t *base, size_t *new_vl, size_t vl) {
  return vlseg3e8ff_v_u8mf4_tama(v0, v1, v2, mask, base, new_vl, vl);
}

void test_vlseg3e8ff_v_u8mf2_tama(vuint8mf2_t *v0, vuint8mf2_t *v1, vuint8mf2_t *v2, vbool16_t mask, const uint8_t *base, size_t *new_vl, size_t vl) {
  return vlseg3e8ff_v_u8mf2_tama(v0, v1, v2, mask, base, new_vl, vl);
}

void test_vlseg3e8ff_v_u8m1_tama(vuint8m1_t *v0, vuint8m1_t *v1, vuint8m1_t *v2, vbool8_t mask, const uint8_t *base, size_t *new_vl, size_t vl) {
  return vlseg3e8ff_v_u8m1_tama(v0, v1, v2, mask, base, new_vl, vl);
}

void test_vlseg3e8ff_v_u8m2_tama(vuint8m2_t *v0, vuint8m2_t *v1, vuint8m2_t *v2, vbool4_t mask, const uint8_t *base, size_t *new_vl, size_t vl) {
  return vlseg3e8ff_v_u8m2_tama(v0, v1, v2, mask, base, new_vl, vl);
}

void test_vlseg3e8ff_v_i8mf8_tamu(vint8mf8_t *v0, vint8mf8_t *v1, vint8mf8_t *v2, vbool64_t mask, vint8mf8_t maskedoff0, vint8mf8_t maskedoff1, vint8mf8_t maskedoff2, const int8_t *base, size_t *new_vl, size_t vl) {
  return vlseg3e8ff_v_i8mf8_tamu(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, new_vl, vl);
}

void test_vlseg3e8ff_v_i8mf4_tamu(vint8mf4_t *v0, vint8mf4_t *v1, vint8mf4_t *v2, vbool32_t mask, vint8mf4_t maskedoff0, vint8mf4_t maskedoff1, vint8mf4_t maskedoff2, const int8_t *base, size_t *new_vl, size_t vl) {
  return vlseg3e8ff_v_i8mf4_tamu(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, new_vl, vl);
}

void test_vlseg3e8ff_v_i8mf2_tamu(vint8mf2_t *v0, vint8mf2_t *v1, vint8mf2_t *v2, vbool16_t mask, vint8mf2_t maskedoff0, vint8mf2_t maskedoff1, vint8mf2_t maskedoff2, const int8_t *base, size_t *new_vl, size_t vl) {
  return vlseg3e8ff_v_i8mf2_tamu(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, new_vl, vl);
}

void test_vlseg3e8ff_v_i8m1_tamu(vint8m1_t *v0, vint8m1_t *v1, vint8m1_t *v2, vbool8_t mask, vint8m1_t maskedoff0, vint8m1_t maskedoff1, vint8m1_t maskedoff2, const int8_t *base, size_t *new_vl, size_t vl) {
  return vlseg3e8ff_v_i8m1_tamu(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, new_vl, vl);
}

void test_vlseg3e8ff_v_i8m2_tamu(vint8m2_t *v0, vint8m2_t *v1, vint8m2_t *v2, vbool4_t mask, vint8m2_t maskedoff0, vint8m2_t maskedoff1, vint8m2_t maskedoff2, const int8_t *base, size_t *new_vl, size_t vl) {
  return vlseg3e8ff_v_i8m2_tamu(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, new_vl, vl);
}

void test_vlseg3e8ff_v_u8mf8_tamu(vuint8mf8_t *v0, vuint8mf8_t *v1, vuint8mf8_t *v2, vbool64_t mask, vuint8mf8_t maskedoff0, vuint8mf8_t maskedoff1, vuint8mf8_t maskedoff2, const uint8_t *base, size_t *new_vl, size_t vl) {
  return vlseg3e8ff_v_u8mf8_tamu(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, new_vl, vl);
}

void test_vlseg3e8ff_v_u8mf4_tamu(vuint8mf4_t *v0, vuint8mf4_t *v1, vuint8mf4_t *v2, vbool32_t mask, vuint8mf4_t maskedoff0, vuint8mf4_t maskedoff1, vuint8mf4_t maskedoff2, const uint8_t *base, size_t *new_vl, size_t vl) {
  return vlseg3e8ff_v_u8mf4_tamu(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, new_vl, vl);
}

void test_vlseg3e8ff_v_u8mf2_tamu(vuint8mf2_t *v0, vuint8mf2_t *v1, vuint8mf2_t *v2, vbool16_t mask, vuint8mf2_t maskedoff0, vuint8mf2_t maskedoff1, vuint8mf2_t maskedoff2, const uint8_t *base, size_t *new_vl, size_t vl) {
  return vlseg3e8ff_v_u8mf2_tamu(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, new_vl, vl);
}

void test_vlseg3e8ff_v_u8m1_tamu(vuint8m1_t *v0, vuint8m1_t *v1, vuint8m1_t *v2, vbool8_t mask, vuint8m1_t maskedoff0, vuint8m1_t maskedoff1, vuint8m1_t maskedoff2, const uint8_t *base, size_t *new_vl, size_t vl) {
  return vlseg3e8ff_v_u8m1_tamu(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, new_vl, vl);
}

void test_vlseg3e8ff_v_u8m2_tamu(vuint8m2_t *v0, vuint8m2_t *v1, vuint8m2_t *v2, vbool4_t mask, vuint8m2_t maskedoff0, vuint8m2_t maskedoff1, vuint8m2_t maskedoff2, const uint8_t *base, size_t *new_vl, size_t vl) {
  return vlseg3e8ff_v_u8m2_tamu(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, new_vl, vl);
}

