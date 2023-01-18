// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -target-feature +zfh \
// RUN:   -target-feature +experimental-zvfh -disable-O0-optnone  \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

vfloat16mf4_t test_vle16_v_f16mf4_tu(vfloat16mf4_t maskedoff, const _Float16 *base, size_t vl) {
  return vle16_tu(maskedoff, base, vl);
}

vfloat16mf2_t test_vle16_v_f16mf2_tu(vfloat16mf2_t maskedoff, const _Float16 *base, size_t vl) {
  return vle16_tu(maskedoff, base, vl);
}

vfloat16m1_t test_vle16_v_f16m1_tu(vfloat16m1_t maskedoff, const _Float16 *base, size_t vl) {
  return vle16_tu(maskedoff, base, vl);
}

vfloat16m2_t test_vle16_v_f16m2_tu(vfloat16m2_t maskedoff, const _Float16 *base, size_t vl) {
  return vle16_tu(maskedoff, base, vl);
}

vfloat16m4_t test_vle16_v_f16m4_tu(vfloat16m4_t maskedoff, const _Float16 *base, size_t vl) {
  return vle16_tu(maskedoff, base, vl);
}

vfloat16m8_t test_vle16_v_f16m8_tu(vfloat16m8_t maskedoff, const _Float16 *base, size_t vl) {
  return vle16_tu(maskedoff, base, vl);
}

vint16mf4_t test_vle16_v_i16mf4_tu(vint16mf4_t maskedoff, const int16_t *base, size_t vl) {
  return vle16_tu(maskedoff, base, vl);
}

vint16mf2_t test_vle16_v_i16mf2_tu(vint16mf2_t maskedoff, const int16_t *base, size_t vl) {
  return vle16_tu(maskedoff, base, vl);
}

vint16m1_t test_vle16_v_i16m1_tu(vint16m1_t maskedoff, const int16_t *base, size_t vl) {
  return vle16_tu(maskedoff, base, vl);
}

vint16m2_t test_vle16_v_i16m2_tu(vint16m2_t maskedoff, const int16_t *base, size_t vl) {
  return vle16_tu(maskedoff, base, vl);
}

vint16m4_t test_vle16_v_i16m4_tu(vint16m4_t maskedoff, const int16_t *base, size_t vl) {
  return vle16_tu(maskedoff, base, vl);
}

vint16m8_t test_vle16_v_i16m8_tu(vint16m8_t maskedoff, const int16_t *base, size_t vl) {
  return vle16_tu(maskedoff, base, vl);
}

vuint16mf4_t test_vle16_v_u16mf4_tu(vuint16mf4_t maskedoff, const uint16_t *base, size_t vl) {
  return vle16_tu(maskedoff, base, vl);
}

vuint16mf2_t test_vle16_v_u16mf2_tu(vuint16mf2_t maskedoff, const uint16_t *base, size_t vl) {
  return vle16_tu(maskedoff, base, vl);
}

vuint16m1_t test_vle16_v_u16m1_tu(vuint16m1_t maskedoff, const uint16_t *base, size_t vl) {
  return vle16_tu(maskedoff, base, vl);
}

vuint16m2_t test_vle16_v_u16m2_tu(vuint16m2_t maskedoff, const uint16_t *base, size_t vl) {
  return vle16_tu(maskedoff, base, vl);
}

vuint16m4_t test_vle16_v_u16m4_tu(vuint16m4_t maskedoff, const uint16_t *base, size_t vl) {
  return vle16_tu(maskedoff, base, vl);
}

vuint16m8_t test_vle16_v_u16m8_tu(vuint16m8_t maskedoff, const uint16_t *base, size_t vl) {
  return vle16_tu(maskedoff, base, vl);
}

vfloat16mf4_t test_vle16_v_f16mf4_tum(vbool64_t mask, vfloat16mf4_t maskedoff, const _Float16 *base, size_t vl) {
  return vle16_tum(mask, maskedoff, base, vl);
}

vfloat16mf2_t test_vle16_v_f16mf2_tum(vbool32_t mask, vfloat16mf2_t maskedoff, const _Float16 *base, size_t vl) {
  return vle16_tum(mask, maskedoff, base, vl);
}

vfloat16m1_t test_vle16_v_f16m1_tum(vbool16_t mask, vfloat16m1_t maskedoff, const _Float16 *base, size_t vl) {
  return vle16_tum(mask, maskedoff, base, vl);
}

vfloat16m2_t test_vle16_v_f16m2_tum(vbool8_t mask, vfloat16m2_t maskedoff, const _Float16 *base, size_t vl) {
  return vle16_tum(mask, maskedoff, base, vl);
}

vfloat16m4_t test_vle16_v_f16m4_tum(vbool4_t mask, vfloat16m4_t maskedoff, const _Float16 *base, size_t vl) {
  return vle16_tum(mask, maskedoff, base, vl);
}

vfloat16m8_t test_vle16_v_f16m8_tum(vbool2_t mask, vfloat16m8_t maskedoff, const _Float16 *base, size_t vl) {
  return vle16_tum(mask, maskedoff, base, vl);
}

vint16mf4_t test_vle16_v_i16mf4_tum(vbool64_t mask, vint16mf4_t maskedoff, const int16_t *base, size_t vl) {
  return vle16_tum(mask, maskedoff, base, vl);
}

vint16mf2_t test_vle16_v_i16mf2_tum(vbool32_t mask, vint16mf2_t maskedoff, const int16_t *base, size_t vl) {
  return vle16_tum(mask, maskedoff, base, vl);
}

vint16m1_t test_vle16_v_i16m1_tum(vbool16_t mask, vint16m1_t maskedoff, const int16_t *base, size_t vl) {
  return vle16_tum(mask, maskedoff, base, vl);
}

vint16m2_t test_vle16_v_i16m2_tum(vbool8_t mask, vint16m2_t maskedoff, const int16_t *base, size_t vl) {
  return vle16_tum(mask, maskedoff, base, vl);
}

vint16m4_t test_vle16_v_i16m4_tum(vbool4_t mask, vint16m4_t maskedoff, const int16_t *base, size_t vl) {
  return vle16_tum(mask, maskedoff, base, vl);
}

vint16m8_t test_vle16_v_i16m8_tum(vbool2_t mask, vint16m8_t maskedoff, const int16_t *base, size_t vl) {
  return vle16_tum(mask, maskedoff, base, vl);
}

vuint16mf4_t test_vle16_v_u16mf4_tum(vbool64_t mask, vuint16mf4_t maskedoff, const uint16_t *base, size_t vl) {
  return vle16_tum(mask, maskedoff, base, vl);
}

vuint16mf2_t test_vle16_v_u16mf2_tum(vbool32_t mask, vuint16mf2_t maskedoff, const uint16_t *base, size_t vl) {
  return vle16_tum(mask, maskedoff, base, vl);
}

vuint16m1_t test_vle16_v_u16m1_tum(vbool16_t mask, vuint16m1_t maskedoff, const uint16_t *base, size_t vl) {
  return vle16_tum(mask, maskedoff, base, vl);
}

vuint16m2_t test_vle16_v_u16m2_tum(vbool8_t mask, vuint16m2_t maskedoff, const uint16_t *base, size_t vl) {
  return vle16_tum(mask, maskedoff, base, vl);
}

vuint16m4_t test_vle16_v_u16m4_tum(vbool4_t mask, vuint16m4_t maskedoff, const uint16_t *base, size_t vl) {
  return vle16_tum(mask, maskedoff, base, vl);
}

vuint16m8_t test_vle16_v_u16m8_tum(vbool2_t mask, vuint16m8_t maskedoff, const uint16_t *base, size_t vl) {
  return vle16_tum(mask, maskedoff, base, vl);
}

vfloat16mf4_t test_vle16_v_f16mf4_tumu(vbool64_t mask, vfloat16mf4_t maskedoff, const _Float16 *base, size_t vl) {
  return vle16_tumu(mask, maskedoff, base, vl);
}

vfloat16mf2_t test_vle16_v_f16mf2_tumu(vbool32_t mask, vfloat16mf2_t maskedoff, const _Float16 *base, size_t vl) {
  return vle16_tumu(mask, maskedoff, base, vl);
}

vfloat16m1_t test_vle16_v_f16m1_tumu(vbool16_t mask, vfloat16m1_t maskedoff, const _Float16 *base, size_t vl) {
  return vle16_tumu(mask, maskedoff, base, vl);
}

vfloat16m2_t test_vle16_v_f16m2_tumu(vbool8_t mask, vfloat16m2_t maskedoff, const _Float16 *base, size_t vl) {
  return vle16_tumu(mask, maskedoff, base, vl);
}

vfloat16m4_t test_vle16_v_f16m4_tumu(vbool4_t mask, vfloat16m4_t maskedoff, const _Float16 *base, size_t vl) {
  return vle16_tumu(mask, maskedoff, base, vl);
}

vfloat16m8_t test_vle16_v_f16m8_tumu(vbool2_t mask, vfloat16m8_t maskedoff, const _Float16 *base, size_t vl) {
  return vle16_tumu(mask, maskedoff, base, vl);
}

vint16mf4_t test_vle16_v_i16mf4_tumu(vbool64_t mask, vint16mf4_t maskedoff, const int16_t *base, size_t vl) {
  return vle16_tumu(mask, maskedoff, base, vl);
}

vint16mf2_t test_vle16_v_i16mf2_tumu(vbool32_t mask, vint16mf2_t maskedoff, const int16_t *base, size_t vl) {
  return vle16_tumu(mask, maskedoff, base, vl);
}

vint16m1_t test_vle16_v_i16m1_tumu(vbool16_t mask, vint16m1_t maskedoff, const int16_t *base, size_t vl) {
  return vle16_tumu(mask, maskedoff, base, vl);
}

vint16m2_t test_vle16_v_i16m2_tumu(vbool8_t mask, vint16m2_t maskedoff, const int16_t *base, size_t vl) {
  return vle16_tumu(mask, maskedoff, base, vl);
}

vint16m4_t test_vle16_v_i16m4_tumu(vbool4_t mask, vint16m4_t maskedoff, const int16_t *base, size_t vl) {
  return vle16_tumu(mask, maskedoff, base, vl);
}

vint16m8_t test_vle16_v_i16m8_tumu(vbool2_t mask, vint16m8_t maskedoff, const int16_t *base, size_t vl) {
  return vle16_tumu(mask, maskedoff, base, vl);
}

vuint16mf4_t test_vle16_v_u16mf4_tumu(vbool64_t mask, vuint16mf4_t maskedoff, const uint16_t *base, size_t vl) {
  return vle16_tumu(mask, maskedoff, base, vl);
}

vuint16mf2_t test_vle16_v_u16mf2_tumu(vbool32_t mask, vuint16mf2_t maskedoff, const uint16_t *base, size_t vl) {
  return vle16_tumu(mask, maskedoff, base, vl);
}

vuint16m1_t test_vle16_v_u16m1_tumu(vbool16_t mask, vuint16m1_t maskedoff, const uint16_t *base, size_t vl) {
  return vle16_tumu(mask, maskedoff, base, vl);
}

vuint16m2_t test_vle16_v_u16m2_tumu(vbool8_t mask, vuint16m2_t maskedoff, const uint16_t *base, size_t vl) {
  return vle16_tumu(mask, maskedoff, base, vl);
}

vuint16m4_t test_vle16_v_u16m4_tumu(vbool4_t mask, vuint16m4_t maskedoff, const uint16_t *base, size_t vl) {
  return vle16_tumu(mask, maskedoff, base, vl);
}

vuint16m8_t test_vle16_v_u16m8_tumu(vbool2_t mask, vuint16m8_t maskedoff, const uint16_t *base, size_t vl) {
  return vle16_tumu(mask, maskedoff, base, vl);
}

