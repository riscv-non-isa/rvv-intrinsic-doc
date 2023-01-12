// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -target-feature +zfh \
// RUN:   -target-feature +experimental-zvfh -disable-O0-optnone  \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

vint8mf8_t test_vle8_v_i8mf8_tu(vint8mf8_t maskedoff, const int8_t *base, size_t vl) {
  return vle8_v_i8mf8_tu(maskedoff, base, vl);
}

vint8mf4_t test_vle8_v_i8mf4_tu(vint8mf4_t maskedoff, const int8_t *base, size_t vl) {
  return vle8_v_i8mf4_tu(maskedoff, base, vl);
}

vint8mf2_t test_vle8_v_i8mf2_tu(vint8mf2_t maskedoff, const int8_t *base, size_t vl) {
  return vle8_v_i8mf2_tu(maskedoff, base, vl);
}

vint8m1_t test_vle8_v_i8m1_tu(vint8m1_t maskedoff, const int8_t *base, size_t vl) {
  return vle8_v_i8m1_tu(maskedoff, base, vl);
}

vint8m2_t test_vle8_v_i8m2_tu(vint8m2_t maskedoff, const int8_t *base, size_t vl) {
  return vle8_v_i8m2_tu(maskedoff, base, vl);
}

vint8m4_t test_vle8_v_i8m4_tu(vint8m4_t maskedoff, const int8_t *base, size_t vl) {
  return vle8_v_i8m4_tu(maskedoff, base, vl);
}

vint8m8_t test_vle8_v_i8m8_tu(vint8m8_t maskedoff, const int8_t *base, size_t vl) {
  return vle8_v_i8m8_tu(maskedoff, base, vl);
}

vuint8mf8_t test_vle8_v_u8mf8_tu(vuint8mf8_t maskedoff, const uint8_t *base, size_t vl) {
  return vle8_v_u8mf8_tu(maskedoff, base, vl);
}

vuint8mf4_t test_vle8_v_u8mf4_tu(vuint8mf4_t maskedoff, const uint8_t *base, size_t vl) {
  return vle8_v_u8mf4_tu(maskedoff, base, vl);
}

vuint8mf2_t test_vle8_v_u8mf2_tu(vuint8mf2_t maskedoff, const uint8_t *base, size_t vl) {
  return vle8_v_u8mf2_tu(maskedoff, base, vl);
}

vuint8m1_t test_vle8_v_u8m1_tu(vuint8m1_t maskedoff, const uint8_t *base, size_t vl) {
  return vle8_v_u8m1_tu(maskedoff, base, vl);
}

vuint8m2_t test_vle8_v_u8m2_tu(vuint8m2_t maskedoff, const uint8_t *base, size_t vl) {
  return vle8_v_u8m2_tu(maskedoff, base, vl);
}

vuint8m4_t test_vle8_v_u8m4_tu(vuint8m4_t maskedoff, const uint8_t *base, size_t vl) {
  return vle8_v_u8m4_tu(maskedoff, base, vl);
}

vuint8m8_t test_vle8_v_u8m8_tu(vuint8m8_t maskedoff, const uint8_t *base, size_t vl) {
  return vle8_v_u8m8_tu(maskedoff, base, vl);
}

vint8mf8_t test_vle8_v_i8mf8_ta(const int8_t *base, size_t vl) {
  return vle8_v_i8mf8_ta(base, vl);
}

vint8mf4_t test_vle8_v_i8mf4_ta(const int8_t *base, size_t vl) {
  return vle8_v_i8mf4_ta(base, vl);
}

vint8mf2_t test_vle8_v_i8mf2_ta(const int8_t *base, size_t vl) {
  return vle8_v_i8mf2_ta(base, vl);
}

vint8m1_t test_vle8_v_i8m1_ta(const int8_t *base, size_t vl) {
  return vle8_v_i8m1_ta(base, vl);
}

vint8m2_t test_vle8_v_i8m2_ta(const int8_t *base, size_t vl) {
  return vle8_v_i8m2_ta(base, vl);
}

vint8m4_t test_vle8_v_i8m4_ta(const int8_t *base, size_t vl) {
  return vle8_v_i8m4_ta(base, vl);
}

vint8m8_t test_vle8_v_i8m8_ta(const int8_t *base, size_t vl) {
  return vle8_v_i8m8_ta(base, vl);
}

vuint8mf8_t test_vle8_v_u8mf8_ta(const uint8_t *base, size_t vl) {
  return vle8_v_u8mf8_ta(base, vl);
}

vuint8mf4_t test_vle8_v_u8mf4_ta(const uint8_t *base, size_t vl) {
  return vle8_v_u8mf4_ta(base, vl);
}

vuint8mf2_t test_vle8_v_u8mf2_ta(const uint8_t *base, size_t vl) {
  return vle8_v_u8mf2_ta(base, vl);
}

vuint8m1_t test_vle8_v_u8m1_ta(const uint8_t *base, size_t vl) {
  return vle8_v_u8m1_ta(base, vl);
}

vuint8m2_t test_vle8_v_u8m2_ta(const uint8_t *base, size_t vl) {
  return vle8_v_u8m2_ta(base, vl);
}

vuint8m4_t test_vle8_v_u8m4_ta(const uint8_t *base, size_t vl) {
  return vle8_v_u8m4_ta(base, vl);
}

vuint8m8_t test_vle8_v_u8m8_ta(const uint8_t *base, size_t vl) {
  return vle8_v_u8m8_ta(base, vl);
}

vint8mf8_t test_vle8_v_i8mf8_tuma(vbool64_t mask, vint8mf8_t maskedoff, const int8_t *base, size_t vl) {
  return vle8_v_i8mf8_tuma(mask, maskedoff, base, vl);
}

vint8mf4_t test_vle8_v_i8mf4_tuma(vbool32_t mask, vint8mf4_t maskedoff, const int8_t *base, size_t vl) {
  return vle8_v_i8mf4_tuma(mask, maskedoff, base, vl);
}

vint8mf2_t test_vle8_v_i8mf2_tuma(vbool16_t mask, vint8mf2_t maskedoff, const int8_t *base, size_t vl) {
  return vle8_v_i8mf2_tuma(mask, maskedoff, base, vl);
}

vint8m1_t test_vle8_v_i8m1_tuma(vbool8_t mask, vint8m1_t maskedoff, const int8_t *base, size_t vl) {
  return vle8_v_i8m1_tuma(mask, maskedoff, base, vl);
}

vint8m2_t test_vle8_v_i8m2_tuma(vbool4_t mask, vint8m2_t maskedoff, const int8_t *base, size_t vl) {
  return vle8_v_i8m2_tuma(mask, maskedoff, base, vl);
}

vint8m4_t test_vle8_v_i8m4_tuma(vbool2_t mask, vint8m4_t maskedoff, const int8_t *base, size_t vl) {
  return vle8_v_i8m4_tuma(mask, maskedoff, base, vl);
}

vint8m8_t test_vle8_v_i8m8_tuma(vbool1_t mask, vint8m8_t maskedoff, const int8_t *base, size_t vl) {
  return vle8_v_i8m8_tuma(mask, maskedoff, base, vl);
}

vuint8mf8_t test_vle8_v_u8mf8_tuma(vbool64_t mask, vuint8mf8_t maskedoff, const uint8_t *base, size_t vl) {
  return vle8_v_u8mf8_tuma(mask, maskedoff, base, vl);
}

vuint8mf4_t test_vle8_v_u8mf4_tuma(vbool32_t mask, vuint8mf4_t maskedoff, const uint8_t *base, size_t vl) {
  return vle8_v_u8mf4_tuma(mask, maskedoff, base, vl);
}

vuint8mf2_t test_vle8_v_u8mf2_tuma(vbool16_t mask, vuint8mf2_t maskedoff, const uint8_t *base, size_t vl) {
  return vle8_v_u8mf2_tuma(mask, maskedoff, base, vl);
}

vuint8m1_t test_vle8_v_u8m1_tuma(vbool8_t mask, vuint8m1_t maskedoff, const uint8_t *base, size_t vl) {
  return vle8_v_u8m1_tuma(mask, maskedoff, base, vl);
}

vuint8m2_t test_vle8_v_u8m2_tuma(vbool4_t mask, vuint8m2_t maskedoff, const uint8_t *base, size_t vl) {
  return vle8_v_u8m2_tuma(mask, maskedoff, base, vl);
}

vuint8m4_t test_vle8_v_u8m4_tuma(vbool2_t mask, vuint8m4_t maskedoff, const uint8_t *base, size_t vl) {
  return vle8_v_u8m4_tuma(mask, maskedoff, base, vl);
}

vuint8m8_t test_vle8_v_u8m8_tuma(vbool1_t mask, vuint8m8_t maskedoff, const uint8_t *base, size_t vl) {
  return vle8_v_u8m8_tuma(mask, maskedoff, base, vl);
}

vint8mf8_t test_vle8_v_i8mf8_tumu(vbool64_t mask, vint8mf8_t maskedoff, const int8_t *base, size_t vl) {
  return vle8_v_i8mf8_tumu(mask, maskedoff, base, vl);
}

vint8mf4_t test_vle8_v_i8mf4_tumu(vbool32_t mask, vint8mf4_t maskedoff, const int8_t *base, size_t vl) {
  return vle8_v_i8mf4_tumu(mask, maskedoff, base, vl);
}

vint8mf2_t test_vle8_v_i8mf2_tumu(vbool16_t mask, vint8mf2_t maskedoff, const int8_t *base, size_t vl) {
  return vle8_v_i8mf2_tumu(mask, maskedoff, base, vl);
}

vint8m1_t test_vle8_v_i8m1_tumu(vbool8_t mask, vint8m1_t maskedoff, const int8_t *base, size_t vl) {
  return vle8_v_i8m1_tumu(mask, maskedoff, base, vl);
}

vint8m2_t test_vle8_v_i8m2_tumu(vbool4_t mask, vint8m2_t maskedoff, const int8_t *base, size_t vl) {
  return vle8_v_i8m2_tumu(mask, maskedoff, base, vl);
}

vint8m4_t test_vle8_v_i8m4_tumu(vbool2_t mask, vint8m4_t maskedoff, const int8_t *base, size_t vl) {
  return vle8_v_i8m4_tumu(mask, maskedoff, base, vl);
}

vint8m8_t test_vle8_v_i8m8_tumu(vbool1_t mask, vint8m8_t maskedoff, const int8_t *base, size_t vl) {
  return vle8_v_i8m8_tumu(mask, maskedoff, base, vl);
}

vuint8mf8_t test_vle8_v_u8mf8_tumu(vbool64_t mask, vuint8mf8_t maskedoff, const uint8_t *base, size_t vl) {
  return vle8_v_u8mf8_tumu(mask, maskedoff, base, vl);
}

vuint8mf4_t test_vle8_v_u8mf4_tumu(vbool32_t mask, vuint8mf4_t maskedoff, const uint8_t *base, size_t vl) {
  return vle8_v_u8mf4_tumu(mask, maskedoff, base, vl);
}

vuint8mf2_t test_vle8_v_u8mf2_tumu(vbool16_t mask, vuint8mf2_t maskedoff, const uint8_t *base, size_t vl) {
  return vle8_v_u8mf2_tumu(mask, maskedoff, base, vl);
}

vuint8m1_t test_vle8_v_u8m1_tumu(vbool8_t mask, vuint8m1_t maskedoff, const uint8_t *base, size_t vl) {
  return vle8_v_u8m1_tumu(mask, maskedoff, base, vl);
}

vuint8m2_t test_vle8_v_u8m2_tumu(vbool4_t mask, vuint8m2_t maskedoff, const uint8_t *base, size_t vl) {
  return vle8_v_u8m2_tumu(mask, maskedoff, base, vl);
}

vuint8m4_t test_vle8_v_u8m4_tumu(vbool2_t mask, vuint8m4_t maskedoff, const uint8_t *base, size_t vl) {
  return vle8_v_u8m4_tumu(mask, maskedoff, base, vl);
}

vuint8m8_t test_vle8_v_u8m8_tumu(vbool1_t mask, vuint8m8_t maskedoff, const uint8_t *base, size_t vl) {
  return vle8_v_u8m8_tumu(mask, maskedoff, base, vl);
}

vint8mf8_t test_vle8_v_i8mf8_tama(vbool64_t mask, const int8_t *base, size_t vl) {
  return vle8_v_i8mf8_tama(mask, base, vl);
}

vint8mf4_t test_vle8_v_i8mf4_tama(vbool32_t mask, const int8_t *base, size_t vl) {
  return vle8_v_i8mf4_tama(mask, base, vl);
}

vint8mf2_t test_vle8_v_i8mf2_tama(vbool16_t mask, const int8_t *base, size_t vl) {
  return vle8_v_i8mf2_tama(mask, base, vl);
}

vint8m1_t test_vle8_v_i8m1_tama(vbool8_t mask, const int8_t *base, size_t vl) {
  return vle8_v_i8m1_tama(mask, base, vl);
}

vint8m2_t test_vle8_v_i8m2_tama(vbool4_t mask, const int8_t *base, size_t vl) {
  return vle8_v_i8m2_tama(mask, base, vl);
}

vint8m4_t test_vle8_v_i8m4_tama(vbool2_t mask, const int8_t *base, size_t vl) {
  return vle8_v_i8m4_tama(mask, base, vl);
}

vint8m8_t test_vle8_v_i8m8_tama(vbool1_t mask, const int8_t *base, size_t vl) {
  return vle8_v_i8m8_tama(mask, base, vl);
}

vuint8mf8_t test_vle8_v_u8mf8_tama(vbool64_t mask, const uint8_t *base, size_t vl) {
  return vle8_v_u8mf8_tama(mask, base, vl);
}

vuint8mf4_t test_vle8_v_u8mf4_tama(vbool32_t mask, const uint8_t *base, size_t vl) {
  return vle8_v_u8mf4_tama(mask, base, vl);
}

vuint8mf2_t test_vle8_v_u8mf2_tama(vbool16_t mask, const uint8_t *base, size_t vl) {
  return vle8_v_u8mf2_tama(mask, base, vl);
}

vuint8m1_t test_vle8_v_u8m1_tama(vbool8_t mask, const uint8_t *base, size_t vl) {
  return vle8_v_u8m1_tama(mask, base, vl);
}

vuint8m2_t test_vle8_v_u8m2_tama(vbool4_t mask, const uint8_t *base, size_t vl) {
  return vle8_v_u8m2_tama(mask, base, vl);
}

vuint8m4_t test_vle8_v_u8m4_tama(vbool2_t mask, const uint8_t *base, size_t vl) {
  return vle8_v_u8m4_tama(mask, base, vl);
}

vuint8m8_t test_vle8_v_u8m8_tama(vbool1_t mask, const uint8_t *base, size_t vl) {
  return vle8_v_u8m8_tama(mask, base, vl);
}

vint8mf8_t test_vle8_v_i8mf8_tamu(vbool64_t mask, vint8mf8_t maskedoff, const int8_t *base, size_t vl) {
  return vle8_v_i8mf8_tamu(mask, maskedoff, base, vl);
}

vint8mf4_t test_vle8_v_i8mf4_tamu(vbool32_t mask, vint8mf4_t maskedoff, const int8_t *base, size_t vl) {
  return vle8_v_i8mf4_tamu(mask, maskedoff, base, vl);
}

vint8mf2_t test_vle8_v_i8mf2_tamu(vbool16_t mask, vint8mf2_t maskedoff, const int8_t *base, size_t vl) {
  return vle8_v_i8mf2_tamu(mask, maskedoff, base, vl);
}

vint8m1_t test_vle8_v_i8m1_tamu(vbool8_t mask, vint8m1_t maskedoff, const int8_t *base, size_t vl) {
  return vle8_v_i8m1_tamu(mask, maskedoff, base, vl);
}

vint8m2_t test_vle8_v_i8m2_tamu(vbool4_t mask, vint8m2_t maskedoff, const int8_t *base, size_t vl) {
  return vle8_v_i8m2_tamu(mask, maskedoff, base, vl);
}

vint8m4_t test_vle8_v_i8m4_tamu(vbool2_t mask, vint8m4_t maskedoff, const int8_t *base, size_t vl) {
  return vle8_v_i8m4_tamu(mask, maskedoff, base, vl);
}

vint8m8_t test_vle8_v_i8m8_tamu(vbool1_t mask, vint8m8_t maskedoff, const int8_t *base, size_t vl) {
  return vle8_v_i8m8_tamu(mask, maskedoff, base, vl);
}

vuint8mf8_t test_vle8_v_u8mf8_tamu(vbool64_t mask, vuint8mf8_t maskedoff, const uint8_t *base, size_t vl) {
  return vle8_v_u8mf8_tamu(mask, maskedoff, base, vl);
}

vuint8mf4_t test_vle8_v_u8mf4_tamu(vbool32_t mask, vuint8mf4_t maskedoff, const uint8_t *base, size_t vl) {
  return vle8_v_u8mf4_tamu(mask, maskedoff, base, vl);
}

vuint8mf2_t test_vle8_v_u8mf2_tamu(vbool16_t mask, vuint8mf2_t maskedoff, const uint8_t *base, size_t vl) {
  return vle8_v_u8mf2_tamu(mask, maskedoff, base, vl);
}

vuint8m1_t test_vle8_v_u8m1_tamu(vbool8_t mask, vuint8m1_t maskedoff, const uint8_t *base, size_t vl) {
  return vle8_v_u8m1_tamu(mask, maskedoff, base, vl);
}

vuint8m2_t test_vle8_v_u8m2_tamu(vbool4_t mask, vuint8m2_t maskedoff, const uint8_t *base, size_t vl) {
  return vle8_v_u8m2_tamu(mask, maskedoff, base, vl);
}

vuint8m4_t test_vle8_v_u8m4_tamu(vbool2_t mask, vuint8m4_t maskedoff, const uint8_t *base, size_t vl) {
  return vle8_v_u8m4_tamu(mask, maskedoff, base, vl);
}

vuint8m8_t test_vle8_v_u8m8_tamu(vbool1_t mask, vuint8m8_t maskedoff, const uint8_t *base, size_t vl) {
  return vle8_v_u8m8_tamu(mask, maskedoff, base, vl);
}

