// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -target-feature +zfh \
// RUN:   -target-feature +experimental-zvfh -disable-O0-optnone  \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

vint8mf8_t test_vle8ff_v_i8mf8(const int8_t *base, size_t *new_vl, size_t vl) {
  return vle8ff_v_i8mf8(base, new_vl, vl);
}

vint8mf4_t test_vle8ff_v_i8mf4(const int8_t *base, size_t *new_vl, size_t vl) {
  return vle8ff_v_i8mf4(base, new_vl, vl);
}

vint8mf2_t test_vle8ff_v_i8mf2(const int8_t *base, size_t *new_vl, size_t vl) {
  return vle8ff_v_i8mf2(base, new_vl, vl);
}

vint8m1_t test_vle8ff_v_i8m1(const int8_t *base, size_t *new_vl, size_t vl) {
  return vle8ff_v_i8m1(base, new_vl, vl);
}

vint8m2_t test_vle8ff_v_i8m2(const int8_t *base, size_t *new_vl, size_t vl) {
  return vle8ff_v_i8m2(base, new_vl, vl);
}

vint8m4_t test_vle8ff_v_i8m4(const int8_t *base, size_t *new_vl, size_t vl) {
  return vle8ff_v_i8m4(base, new_vl, vl);
}

vint8m8_t test_vle8ff_v_i8m8(const int8_t *base, size_t *new_vl, size_t vl) {
  return vle8ff_v_i8m8(base, new_vl, vl);
}

vuint8mf8_t test_vle8ff_v_u8mf8(const uint8_t *base, size_t *new_vl, size_t vl) {
  return vle8ff_v_u8mf8(base, new_vl, vl);
}

vuint8mf4_t test_vle8ff_v_u8mf4(const uint8_t *base, size_t *new_vl, size_t vl) {
  return vle8ff_v_u8mf4(base, new_vl, vl);
}

vuint8mf2_t test_vle8ff_v_u8mf2(const uint8_t *base, size_t *new_vl, size_t vl) {
  return vle8ff_v_u8mf2(base, new_vl, vl);
}

vuint8m1_t test_vle8ff_v_u8m1(const uint8_t *base, size_t *new_vl, size_t vl) {
  return vle8ff_v_u8m1(base, new_vl, vl);
}

vuint8m2_t test_vle8ff_v_u8m2(const uint8_t *base, size_t *new_vl, size_t vl) {
  return vle8ff_v_u8m2(base, new_vl, vl);
}

vuint8m4_t test_vle8ff_v_u8m4(const uint8_t *base, size_t *new_vl, size_t vl) {
  return vle8ff_v_u8m4(base, new_vl, vl);
}

vuint8m8_t test_vle8ff_v_u8m8(const uint8_t *base, size_t *new_vl, size_t vl) {
  return vle8ff_v_u8m8(base, new_vl, vl);
}

vint8mf8_t test_vle8ff_v_i8mf8_m(vbool64_t mask, vint8mf8_t maskedoff, const int8_t *base, size_t *new_vl, size_t vl) {
  return vle8ff_v_i8mf8_m(mask, maskedoff, base, new_vl, vl);
}

vint8mf4_t test_vle8ff_v_i8mf4_m(vbool32_t mask, vint8mf4_t maskedoff, const int8_t *base, size_t *new_vl, size_t vl) {
  return vle8ff_v_i8mf4_m(mask, maskedoff, base, new_vl, vl);
}

vint8mf2_t test_vle8ff_v_i8mf2_m(vbool16_t mask, vint8mf2_t maskedoff, const int8_t *base, size_t *new_vl, size_t vl) {
  return vle8ff_v_i8mf2_m(mask, maskedoff, base, new_vl, vl);
}

vint8m1_t test_vle8ff_v_i8m1_m(vbool8_t mask, vint8m1_t maskedoff, const int8_t *base, size_t *new_vl, size_t vl) {
  return vle8ff_v_i8m1_m(mask, maskedoff, base, new_vl, vl);
}

vint8m2_t test_vle8ff_v_i8m2_m(vbool4_t mask, vint8m2_t maskedoff, const int8_t *base, size_t *new_vl, size_t vl) {
  return vle8ff_v_i8m2_m(mask, maskedoff, base, new_vl, vl);
}

vint8m4_t test_vle8ff_v_i8m4_m(vbool2_t mask, vint8m4_t maskedoff, const int8_t *base, size_t *new_vl, size_t vl) {
  return vle8ff_v_i8m4_m(mask, maskedoff, base, new_vl, vl);
}

vint8m8_t test_vle8ff_v_i8m8_m(vbool1_t mask, vint8m8_t maskedoff, const int8_t *base, size_t *new_vl, size_t vl) {
  return vle8ff_v_i8m8_m(mask, maskedoff, base, new_vl, vl);
}

vuint8mf8_t test_vle8ff_v_u8mf8_m(vbool64_t mask, vuint8mf8_t maskedoff, const uint8_t *base, size_t *new_vl, size_t vl) {
  return vle8ff_v_u8mf8_m(mask, maskedoff, base, new_vl, vl);
}

vuint8mf4_t test_vle8ff_v_u8mf4_m(vbool32_t mask, vuint8mf4_t maskedoff, const uint8_t *base, size_t *new_vl, size_t vl) {
  return vle8ff_v_u8mf4_m(mask, maskedoff, base, new_vl, vl);
}

vuint8mf2_t test_vle8ff_v_u8mf2_m(vbool16_t mask, vuint8mf2_t maskedoff, const uint8_t *base, size_t *new_vl, size_t vl) {
  return vle8ff_v_u8mf2_m(mask, maskedoff, base, new_vl, vl);
}

vuint8m1_t test_vle8ff_v_u8m1_m(vbool8_t mask, vuint8m1_t maskedoff, const uint8_t *base, size_t *new_vl, size_t vl) {
  return vle8ff_v_u8m1_m(mask, maskedoff, base, new_vl, vl);
}

vuint8m2_t test_vle8ff_v_u8m2_m(vbool4_t mask, vuint8m2_t maskedoff, const uint8_t *base, size_t *new_vl, size_t vl) {
  return vle8ff_v_u8m2_m(mask, maskedoff, base, new_vl, vl);
}

vuint8m4_t test_vle8ff_v_u8m4_m(vbool2_t mask, vuint8m4_t maskedoff, const uint8_t *base, size_t *new_vl, size_t vl) {
  return vle8ff_v_u8m4_m(mask, maskedoff, base, new_vl, vl);
}

vuint8m8_t test_vle8ff_v_u8m8_m(vbool1_t mask, vuint8m8_t maskedoff, const uint8_t *base, size_t *new_vl, size_t vl) {
  return vle8ff_v_u8m8_m(mask, maskedoff, base, new_vl, vl);
}

