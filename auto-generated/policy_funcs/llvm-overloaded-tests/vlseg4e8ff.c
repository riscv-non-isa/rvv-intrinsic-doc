// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -target-feature +zfh \
// RUN:   -target-feature +experimental-zvfh -disable-O0-optnone  \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

vint8mf8x4_t test_vlseg4e8ff_v_i8mf8x4_tu(vint8mf8x4_t maskedoff_tuple, const int8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg4e8ff_tu(maskedoff_tuple, base, new_vl, vl);
}

vint8mf4x4_t test_vlseg4e8ff_v_i8mf4x4_tu(vint8mf4x4_t maskedoff_tuple, const int8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg4e8ff_tu(maskedoff_tuple, base, new_vl, vl);
}

vint8mf2x4_t test_vlseg4e8ff_v_i8mf2x4_tu(vint8mf2x4_t maskedoff_tuple, const int8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg4e8ff_tu(maskedoff_tuple, base, new_vl, vl);
}

vint8m1x4_t test_vlseg4e8ff_v_i8m1x4_tu(vint8m1x4_t maskedoff_tuple, const int8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg4e8ff_tu(maskedoff_tuple, base, new_vl, vl);
}

vint8m2x4_t test_vlseg4e8ff_v_i8m2x4_tu(vint8m2x4_t maskedoff_tuple, const int8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg4e8ff_tu(maskedoff_tuple, base, new_vl, vl);
}

vuint8mf8x4_t test_vlseg4e8ff_v_u8mf8x4_tu(vuint8mf8x4_t maskedoff_tuple, const uint8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg4e8ff_tu(maskedoff_tuple, base, new_vl, vl);
}

vuint8mf4x4_t test_vlseg4e8ff_v_u8mf4x4_tu(vuint8mf4x4_t maskedoff_tuple, const uint8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg4e8ff_tu(maskedoff_tuple, base, new_vl, vl);
}

vuint8mf2x4_t test_vlseg4e8ff_v_u8mf2x4_tu(vuint8mf2x4_t maskedoff_tuple, const uint8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg4e8ff_tu(maskedoff_tuple, base, new_vl, vl);
}

vuint8m1x4_t test_vlseg4e8ff_v_u8m1x4_tu(vuint8m1x4_t maskedoff_tuple, const uint8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg4e8ff_tu(maskedoff_tuple, base, new_vl, vl);
}

vuint8m2x4_t test_vlseg4e8ff_v_u8m2x4_tu(vuint8m2x4_t maskedoff_tuple, const uint8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg4e8ff_tu(maskedoff_tuple, base, new_vl, vl);
}

vint8mf8x4_t test_vlseg4e8ff_v_i8mf8x4_tum(vbool64_t mask, vint8mf8x4_t maskedoff_tuple, const int8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg4e8ff_tum(mask, maskedoff_tuple, base, new_vl, vl);
}

vint8mf4x4_t test_vlseg4e8ff_v_i8mf4x4_tum(vbool32_t mask, vint8mf4x4_t maskedoff_tuple, const int8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg4e8ff_tum(mask, maskedoff_tuple, base, new_vl, vl);
}

vint8mf2x4_t test_vlseg4e8ff_v_i8mf2x4_tum(vbool16_t mask, vint8mf2x4_t maskedoff_tuple, const int8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg4e8ff_tum(mask, maskedoff_tuple, base, new_vl, vl);
}

vint8m1x4_t test_vlseg4e8ff_v_i8m1x4_tum(vbool8_t mask, vint8m1x4_t maskedoff_tuple, const int8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg4e8ff_tum(mask, maskedoff_tuple, base, new_vl, vl);
}

vint8m2x4_t test_vlseg4e8ff_v_i8m2x4_tum(vbool4_t mask, vint8m2x4_t maskedoff_tuple, const int8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg4e8ff_tum(mask, maskedoff_tuple, base, new_vl, vl);
}

vuint8mf8x4_t test_vlseg4e8ff_v_u8mf8x4_tum(vbool64_t mask, vuint8mf8x4_t maskedoff_tuple, const uint8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg4e8ff_tum(mask, maskedoff_tuple, base, new_vl, vl);
}

vuint8mf4x4_t test_vlseg4e8ff_v_u8mf4x4_tum(vbool32_t mask, vuint8mf4x4_t maskedoff_tuple, const uint8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg4e8ff_tum(mask, maskedoff_tuple, base, new_vl, vl);
}

vuint8mf2x4_t test_vlseg4e8ff_v_u8mf2x4_tum(vbool16_t mask, vuint8mf2x4_t maskedoff_tuple, const uint8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg4e8ff_tum(mask, maskedoff_tuple, base, new_vl, vl);
}

vuint8m1x4_t test_vlseg4e8ff_v_u8m1x4_tum(vbool8_t mask, vuint8m1x4_t maskedoff_tuple, const uint8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg4e8ff_tum(mask, maskedoff_tuple, base, new_vl, vl);
}

vuint8m2x4_t test_vlseg4e8ff_v_u8m2x4_tum(vbool4_t mask, vuint8m2x4_t maskedoff_tuple, const uint8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg4e8ff_tum(mask, maskedoff_tuple, base, new_vl, vl);
}

vint8mf8x4_t test_vlseg4e8ff_v_i8mf8x4_tumu(vbool64_t mask, vint8mf8x4_t maskedoff_tuple, const int8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg4e8ff_tumu(mask, maskedoff_tuple, base, new_vl, vl);
}

vint8mf4x4_t test_vlseg4e8ff_v_i8mf4x4_tumu(vbool32_t mask, vint8mf4x4_t maskedoff_tuple, const int8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg4e8ff_tumu(mask, maskedoff_tuple, base, new_vl, vl);
}

vint8mf2x4_t test_vlseg4e8ff_v_i8mf2x4_tumu(vbool16_t mask, vint8mf2x4_t maskedoff_tuple, const int8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg4e8ff_tumu(mask, maskedoff_tuple, base, new_vl, vl);
}

vint8m1x4_t test_vlseg4e8ff_v_i8m1x4_tumu(vbool8_t mask, vint8m1x4_t maskedoff_tuple, const int8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg4e8ff_tumu(mask, maskedoff_tuple, base, new_vl, vl);
}

vint8m2x4_t test_vlseg4e8ff_v_i8m2x4_tumu(vbool4_t mask, vint8m2x4_t maskedoff_tuple, const int8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg4e8ff_tumu(mask, maskedoff_tuple, base, new_vl, vl);
}

vuint8mf8x4_t test_vlseg4e8ff_v_u8mf8x4_tumu(vbool64_t mask, vuint8mf8x4_t maskedoff_tuple, const uint8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg4e8ff_tumu(mask, maskedoff_tuple, base, new_vl, vl);
}

vuint8mf4x4_t test_vlseg4e8ff_v_u8mf4x4_tumu(vbool32_t mask, vuint8mf4x4_t maskedoff_tuple, const uint8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg4e8ff_tumu(mask, maskedoff_tuple, base, new_vl, vl);
}

vuint8mf2x4_t test_vlseg4e8ff_v_u8mf2x4_tumu(vbool16_t mask, vuint8mf2x4_t maskedoff_tuple, const uint8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg4e8ff_tumu(mask, maskedoff_tuple, base, new_vl, vl);
}

vuint8m1x4_t test_vlseg4e8ff_v_u8m1x4_tumu(vbool8_t mask, vuint8m1x4_t maskedoff_tuple, const uint8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg4e8ff_tumu(mask, maskedoff_tuple, base, new_vl, vl);
}

vuint8m2x4_t test_vlseg4e8ff_v_u8m2x4_tumu(vbool4_t mask, vuint8m2x4_t maskedoff_tuple, const uint8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg4e8ff_tumu(mask, maskedoff_tuple, base, new_vl, vl);
}

vint8mf8x4_t test_vlseg4e8ff_v_i8mf8x4_mu(vbool64_t mask, vint8mf8x4_t maskedoff_tuple, const int8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg4e8ff_mu(mask, maskedoff_tuple, base, new_vl, vl);
}

vint8mf4x4_t test_vlseg4e8ff_v_i8mf4x4_mu(vbool32_t mask, vint8mf4x4_t maskedoff_tuple, const int8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg4e8ff_mu(mask, maskedoff_tuple, base, new_vl, vl);
}

vint8mf2x4_t test_vlseg4e8ff_v_i8mf2x4_mu(vbool16_t mask, vint8mf2x4_t maskedoff_tuple, const int8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg4e8ff_mu(mask, maskedoff_tuple, base, new_vl, vl);
}

vint8m1x4_t test_vlseg4e8ff_v_i8m1x4_mu(vbool8_t mask, vint8m1x4_t maskedoff_tuple, const int8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg4e8ff_mu(mask, maskedoff_tuple, base, new_vl, vl);
}

vint8m2x4_t test_vlseg4e8ff_v_i8m2x4_mu(vbool4_t mask, vint8m2x4_t maskedoff_tuple, const int8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg4e8ff_mu(mask, maskedoff_tuple, base, new_vl, vl);
}

vuint8mf8x4_t test_vlseg4e8ff_v_u8mf8x4_mu(vbool64_t mask, vuint8mf8x4_t maskedoff_tuple, const uint8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg4e8ff_mu(mask, maskedoff_tuple, base, new_vl, vl);
}

vuint8mf4x4_t test_vlseg4e8ff_v_u8mf4x4_mu(vbool32_t mask, vuint8mf4x4_t maskedoff_tuple, const uint8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg4e8ff_mu(mask, maskedoff_tuple, base, new_vl, vl);
}

vuint8mf2x4_t test_vlseg4e8ff_v_u8mf2x4_mu(vbool16_t mask, vuint8mf2x4_t maskedoff_tuple, const uint8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg4e8ff_mu(mask, maskedoff_tuple, base, new_vl, vl);
}

vuint8m1x4_t test_vlseg4e8ff_v_u8m1x4_mu(vbool8_t mask, vuint8m1x4_t maskedoff_tuple, const uint8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg4e8ff_mu(mask, maskedoff_tuple, base, new_vl, vl);
}

vuint8m2x4_t test_vlseg4e8ff_v_u8m2x4_mu(vbool4_t mask, vuint8m2x4_t maskedoff_tuple, const uint8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg4e8ff_mu(mask, maskedoff_tuple, base, new_vl, vl);
}

