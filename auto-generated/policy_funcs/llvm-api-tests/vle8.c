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

vint8mf8_t test_vle8_v_i8mf8_tum(vbool64_t mask, vint8mf8_t maskedoff, const int8_t *base, size_t vl) {
  return vle8_v_i8mf8_tum(mask, maskedoff, base, vl);
}

vint8mf4_t test_vle8_v_i8mf4_tum(vbool32_t mask, vint8mf4_t maskedoff, const int8_t *base, size_t vl) {
  return vle8_v_i8mf4_tum(mask, maskedoff, base, vl);
}

vint8mf2_t test_vle8_v_i8mf2_tum(vbool16_t mask, vint8mf2_t maskedoff, const int8_t *base, size_t vl) {
  return vle8_v_i8mf2_tum(mask, maskedoff, base, vl);
}

vint8m1_t test_vle8_v_i8m1_tum(vbool8_t mask, vint8m1_t maskedoff, const int8_t *base, size_t vl) {
  return vle8_v_i8m1_tum(mask, maskedoff, base, vl);
}

vint8m2_t test_vle8_v_i8m2_tum(vbool4_t mask, vint8m2_t maskedoff, const int8_t *base, size_t vl) {
  return vle8_v_i8m2_tum(mask, maskedoff, base, vl);
}

vint8m4_t test_vle8_v_i8m4_tum(vbool2_t mask, vint8m4_t maskedoff, const int8_t *base, size_t vl) {
  return vle8_v_i8m4_tum(mask, maskedoff, base, vl);
}

vint8m8_t test_vle8_v_i8m8_tum(vbool1_t mask, vint8m8_t maskedoff, const int8_t *base, size_t vl) {
  return vle8_v_i8m8_tum(mask, maskedoff, base, vl);
}

vuint8mf8_t test_vle8_v_u8mf8_tum(vbool64_t mask, vuint8mf8_t maskedoff, const uint8_t *base, size_t vl) {
  return vle8_v_u8mf8_tum(mask, maskedoff, base, vl);
}

vuint8mf4_t test_vle8_v_u8mf4_tum(vbool32_t mask, vuint8mf4_t maskedoff, const uint8_t *base, size_t vl) {
  return vle8_v_u8mf4_tum(mask, maskedoff, base, vl);
}

vuint8mf2_t test_vle8_v_u8mf2_tum(vbool16_t mask, vuint8mf2_t maskedoff, const uint8_t *base, size_t vl) {
  return vle8_v_u8mf2_tum(mask, maskedoff, base, vl);
}

vuint8m1_t test_vle8_v_u8m1_tum(vbool8_t mask, vuint8m1_t maskedoff, const uint8_t *base, size_t vl) {
  return vle8_v_u8m1_tum(mask, maskedoff, base, vl);
}

vuint8m2_t test_vle8_v_u8m2_tum(vbool4_t mask, vuint8m2_t maskedoff, const uint8_t *base, size_t vl) {
  return vle8_v_u8m2_tum(mask, maskedoff, base, vl);
}

vuint8m4_t test_vle8_v_u8m4_tum(vbool2_t mask, vuint8m4_t maskedoff, const uint8_t *base, size_t vl) {
  return vle8_v_u8m4_tum(mask, maskedoff, base, vl);
}

vuint8m8_t test_vle8_v_u8m8_tum(vbool1_t mask, vuint8m8_t maskedoff, const uint8_t *base, size_t vl) {
  return vle8_v_u8m8_tum(mask, maskedoff, base, vl);
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

vint8mf8_t test_vle8_v_i8mf8_mu(vbool64_t mask, vint8mf8_t maskedoff, const int8_t *base, size_t vl) {
  return vle8_v_i8mf8_mu(mask, maskedoff, base, vl);
}

vint8mf4_t test_vle8_v_i8mf4_mu(vbool32_t mask, vint8mf4_t maskedoff, const int8_t *base, size_t vl) {
  return vle8_v_i8mf4_mu(mask, maskedoff, base, vl);
}

vint8mf2_t test_vle8_v_i8mf2_mu(vbool16_t mask, vint8mf2_t maskedoff, const int8_t *base, size_t vl) {
  return vle8_v_i8mf2_mu(mask, maskedoff, base, vl);
}

vint8m1_t test_vle8_v_i8m1_mu(vbool8_t mask, vint8m1_t maskedoff, const int8_t *base, size_t vl) {
  return vle8_v_i8m1_mu(mask, maskedoff, base, vl);
}

vint8m2_t test_vle8_v_i8m2_mu(vbool4_t mask, vint8m2_t maskedoff, const int8_t *base, size_t vl) {
  return vle8_v_i8m2_mu(mask, maskedoff, base, vl);
}

vint8m4_t test_vle8_v_i8m4_mu(vbool2_t mask, vint8m4_t maskedoff, const int8_t *base, size_t vl) {
  return vle8_v_i8m4_mu(mask, maskedoff, base, vl);
}

vint8m8_t test_vle8_v_i8m8_mu(vbool1_t mask, vint8m8_t maskedoff, const int8_t *base, size_t vl) {
  return vle8_v_i8m8_mu(mask, maskedoff, base, vl);
}

vuint8mf8_t test_vle8_v_u8mf8_mu(vbool64_t mask, vuint8mf8_t maskedoff, const uint8_t *base, size_t vl) {
  return vle8_v_u8mf8_mu(mask, maskedoff, base, vl);
}

vuint8mf4_t test_vle8_v_u8mf4_mu(vbool32_t mask, vuint8mf4_t maskedoff, const uint8_t *base, size_t vl) {
  return vle8_v_u8mf4_mu(mask, maskedoff, base, vl);
}

vuint8mf2_t test_vle8_v_u8mf2_mu(vbool16_t mask, vuint8mf2_t maskedoff, const uint8_t *base, size_t vl) {
  return vle8_v_u8mf2_mu(mask, maskedoff, base, vl);
}

vuint8m1_t test_vle8_v_u8m1_mu(vbool8_t mask, vuint8m1_t maskedoff, const uint8_t *base, size_t vl) {
  return vle8_v_u8m1_mu(mask, maskedoff, base, vl);
}

vuint8m2_t test_vle8_v_u8m2_mu(vbool4_t mask, vuint8m2_t maskedoff, const uint8_t *base, size_t vl) {
  return vle8_v_u8m2_mu(mask, maskedoff, base, vl);
}

vuint8m4_t test_vle8_v_u8m4_mu(vbool2_t mask, vuint8m4_t maskedoff, const uint8_t *base, size_t vl) {
  return vle8_v_u8m4_mu(mask, maskedoff, base, vl);
}

vuint8m8_t test_vle8_v_u8m8_mu(vbool1_t mask, vuint8m8_t maskedoff, const uint8_t *base, size_t vl) {
  return vle8_v_u8m8_mu(mask, maskedoff, base, vl);
}

