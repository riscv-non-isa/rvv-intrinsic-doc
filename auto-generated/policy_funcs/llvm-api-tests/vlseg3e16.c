// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -target-feature +zfh \
// RUN:   -target-feature +experimental-zvfh -disable-O0-optnone  \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

vfloat16mf4x3_t test_vlseg3e16_v_f16mf4x3_tu(vfloat16mf4x3_t maskedoff_tuple, const _Float16 *base, size_t vl) {
  return __riscv_vlseg3e16_v_f16mf4x3_tu(maskedoff_tuple, base, vl);
}

vfloat16mf2x3_t test_vlseg3e16_v_f16mf2x3_tu(vfloat16mf2x3_t maskedoff_tuple, const _Float16 *base, size_t vl) {
  return __riscv_vlseg3e16_v_f16mf2x3_tu(maskedoff_tuple, base, vl);
}

vfloat16m1x3_t test_vlseg3e16_v_f16m1x3_tu(vfloat16m1x3_t maskedoff_tuple, const _Float16 *base, size_t vl) {
  return __riscv_vlseg3e16_v_f16m1x3_tu(maskedoff_tuple, base, vl);
}

vfloat16m2x3_t test_vlseg3e16_v_f16m2x3_tu(vfloat16m2x3_t maskedoff_tuple, const _Float16 *base, size_t vl) {
  return __riscv_vlseg3e16_v_f16m2x3_tu(maskedoff_tuple, base, vl);
}

vint16mf4x3_t test_vlseg3e16_v_i16mf4x3_tu(vint16mf4x3_t maskedoff_tuple, const int16_t *base, size_t vl) {
  return __riscv_vlseg3e16_v_i16mf4x3_tu(maskedoff_tuple, base, vl);
}

vint16mf2x3_t test_vlseg3e16_v_i16mf2x3_tu(vint16mf2x3_t maskedoff_tuple, const int16_t *base, size_t vl) {
  return __riscv_vlseg3e16_v_i16mf2x3_tu(maskedoff_tuple, base, vl);
}

vint16m1x3_t test_vlseg3e16_v_i16m1x3_tu(vint16m1x3_t maskedoff_tuple, const int16_t *base, size_t vl) {
  return __riscv_vlseg3e16_v_i16m1x3_tu(maskedoff_tuple, base, vl);
}

vint16m2x3_t test_vlseg3e16_v_i16m2x3_tu(vint16m2x3_t maskedoff_tuple, const int16_t *base, size_t vl) {
  return __riscv_vlseg3e16_v_i16m2x3_tu(maskedoff_tuple, base, vl);
}

vuint16mf4x3_t test_vlseg3e16_v_u16mf4x3_tu(vuint16mf4x3_t maskedoff_tuple, const uint16_t *base, size_t vl) {
  return __riscv_vlseg3e16_v_u16mf4x3_tu(maskedoff_tuple, base, vl);
}

vuint16mf2x3_t test_vlseg3e16_v_u16mf2x3_tu(vuint16mf2x3_t maskedoff_tuple, const uint16_t *base, size_t vl) {
  return __riscv_vlseg3e16_v_u16mf2x3_tu(maskedoff_tuple, base, vl);
}

vuint16m1x3_t test_vlseg3e16_v_u16m1x3_tu(vuint16m1x3_t maskedoff_tuple, const uint16_t *base, size_t vl) {
  return __riscv_vlseg3e16_v_u16m1x3_tu(maskedoff_tuple, base, vl);
}

vuint16m2x3_t test_vlseg3e16_v_u16m2x3_tu(vuint16m2x3_t maskedoff_tuple, const uint16_t *base, size_t vl) {
  return __riscv_vlseg3e16_v_u16m2x3_tu(maskedoff_tuple, base, vl);
}

vfloat16mf4x3_t test_vlseg3e16_v_f16mf4x3_tum(vbool64_t mask, vfloat16mf4x3_t maskedoff_tuple, const _Float16 *base, size_t vl) {
  return __riscv_vlseg3e16_v_f16mf4x3_tum(mask, maskedoff_tuple, base, vl);
}

vfloat16mf2x3_t test_vlseg3e16_v_f16mf2x3_tum(vbool32_t mask, vfloat16mf2x3_t maskedoff_tuple, const _Float16 *base, size_t vl) {
  return __riscv_vlseg3e16_v_f16mf2x3_tum(mask, maskedoff_tuple, base, vl);
}

vfloat16m1x3_t test_vlseg3e16_v_f16m1x3_tum(vbool16_t mask, vfloat16m1x3_t maskedoff_tuple, const _Float16 *base, size_t vl) {
  return __riscv_vlseg3e16_v_f16m1x3_tum(mask, maskedoff_tuple, base, vl);
}

vfloat16m2x3_t test_vlseg3e16_v_f16m2x3_tum(vbool8_t mask, vfloat16m2x3_t maskedoff_tuple, const _Float16 *base, size_t vl) {
  return __riscv_vlseg3e16_v_f16m2x3_tum(mask, maskedoff_tuple, base, vl);
}

vint16mf4x3_t test_vlseg3e16_v_i16mf4x3_tum(vbool64_t mask, vint16mf4x3_t maskedoff_tuple, const int16_t *base, size_t vl) {
  return __riscv_vlseg3e16_v_i16mf4x3_tum(mask, maskedoff_tuple, base, vl);
}

vint16mf2x3_t test_vlseg3e16_v_i16mf2x3_tum(vbool32_t mask, vint16mf2x3_t maskedoff_tuple, const int16_t *base, size_t vl) {
  return __riscv_vlseg3e16_v_i16mf2x3_tum(mask, maskedoff_tuple, base, vl);
}

vint16m1x3_t test_vlseg3e16_v_i16m1x3_tum(vbool16_t mask, vint16m1x3_t maskedoff_tuple, const int16_t *base, size_t vl) {
  return __riscv_vlseg3e16_v_i16m1x3_tum(mask, maskedoff_tuple, base, vl);
}

vint16m2x3_t test_vlseg3e16_v_i16m2x3_tum(vbool8_t mask, vint16m2x3_t maskedoff_tuple, const int16_t *base, size_t vl) {
  return __riscv_vlseg3e16_v_i16m2x3_tum(mask, maskedoff_tuple, base, vl);
}

vuint16mf4x3_t test_vlseg3e16_v_u16mf4x3_tum(vbool64_t mask, vuint16mf4x3_t maskedoff_tuple, const uint16_t *base, size_t vl) {
  return __riscv_vlseg3e16_v_u16mf4x3_tum(mask, maskedoff_tuple, base, vl);
}

vuint16mf2x3_t test_vlseg3e16_v_u16mf2x3_tum(vbool32_t mask, vuint16mf2x3_t maskedoff_tuple, const uint16_t *base, size_t vl) {
  return __riscv_vlseg3e16_v_u16mf2x3_tum(mask, maskedoff_tuple, base, vl);
}

vuint16m1x3_t test_vlseg3e16_v_u16m1x3_tum(vbool16_t mask, vuint16m1x3_t maskedoff_tuple, const uint16_t *base, size_t vl) {
  return __riscv_vlseg3e16_v_u16m1x3_tum(mask, maskedoff_tuple, base, vl);
}

vuint16m2x3_t test_vlseg3e16_v_u16m2x3_tum(vbool8_t mask, vuint16m2x3_t maskedoff_tuple, const uint16_t *base, size_t vl) {
  return __riscv_vlseg3e16_v_u16m2x3_tum(mask, maskedoff_tuple, base, vl);
}

vfloat16mf4x3_t test_vlseg3e16_v_f16mf4x3_tumu(vbool64_t mask, vfloat16mf4x3_t maskedoff_tuple, const _Float16 *base, size_t vl) {
  return __riscv_vlseg3e16_v_f16mf4x3_tumu(mask, maskedoff_tuple, base, vl);
}

vfloat16mf2x3_t test_vlseg3e16_v_f16mf2x3_tumu(vbool32_t mask, vfloat16mf2x3_t maskedoff_tuple, const _Float16 *base, size_t vl) {
  return __riscv_vlseg3e16_v_f16mf2x3_tumu(mask, maskedoff_tuple, base, vl);
}

vfloat16m1x3_t test_vlseg3e16_v_f16m1x3_tumu(vbool16_t mask, vfloat16m1x3_t maskedoff_tuple, const _Float16 *base, size_t vl) {
  return __riscv_vlseg3e16_v_f16m1x3_tumu(mask, maskedoff_tuple, base, vl);
}

vfloat16m2x3_t test_vlseg3e16_v_f16m2x3_tumu(vbool8_t mask, vfloat16m2x3_t maskedoff_tuple, const _Float16 *base, size_t vl) {
  return __riscv_vlseg3e16_v_f16m2x3_tumu(mask, maskedoff_tuple, base, vl);
}

vint16mf4x3_t test_vlseg3e16_v_i16mf4x3_tumu(vbool64_t mask, vint16mf4x3_t maskedoff_tuple, const int16_t *base, size_t vl) {
  return __riscv_vlseg3e16_v_i16mf4x3_tumu(mask, maskedoff_tuple, base, vl);
}

vint16mf2x3_t test_vlseg3e16_v_i16mf2x3_tumu(vbool32_t mask, vint16mf2x3_t maskedoff_tuple, const int16_t *base, size_t vl) {
  return __riscv_vlseg3e16_v_i16mf2x3_tumu(mask, maskedoff_tuple, base, vl);
}

vint16m1x3_t test_vlseg3e16_v_i16m1x3_tumu(vbool16_t mask, vint16m1x3_t maskedoff_tuple, const int16_t *base, size_t vl) {
  return __riscv_vlseg3e16_v_i16m1x3_tumu(mask, maskedoff_tuple, base, vl);
}

vint16m2x3_t test_vlseg3e16_v_i16m2x3_tumu(vbool8_t mask, vint16m2x3_t maskedoff_tuple, const int16_t *base, size_t vl) {
  return __riscv_vlseg3e16_v_i16m2x3_tumu(mask, maskedoff_tuple, base, vl);
}

vuint16mf4x3_t test_vlseg3e16_v_u16mf4x3_tumu(vbool64_t mask, vuint16mf4x3_t maskedoff_tuple, const uint16_t *base, size_t vl) {
  return __riscv_vlseg3e16_v_u16mf4x3_tumu(mask, maskedoff_tuple, base, vl);
}

vuint16mf2x3_t test_vlseg3e16_v_u16mf2x3_tumu(vbool32_t mask, vuint16mf2x3_t maskedoff_tuple, const uint16_t *base, size_t vl) {
  return __riscv_vlseg3e16_v_u16mf2x3_tumu(mask, maskedoff_tuple, base, vl);
}

vuint16m1x3_t test_vlseg3e16_v_u16m1x3_tumu(vbool16_t mask, vuint16m1x3_t maskedoff_tuple, const uint16_t *base, size_t vl) {
  return __riscv_vlseg3e16_v_u16m1x3_tumu(mask, maskedoff_tuple, base, vl);
}

vuint16m2x3_t test_vlseg3e16_v_u16m2x3_tumu(vbool8_t mask, vuint16m2x3_t maskedoff_tuple, const uint16_t *base, size_t vl) {
  return __riscv_vlseg3e16_v_u16m2x3_tumu(mask, maskedoff_tuple, base, vl);
}

vfloat16mf4x3_t test_vlseg3e16_v_f16mf4x3_mu(vbool64_t mask, vfloat16mf4x3_t maskedoff_tuple, const _Float16 *base, size_t vl) {
  return __riscv_vlseg3e16_v_f16mf4x3_mu(mask, maskedoff_tuple, base, vl);
}

vfloat16mf2x3_t test_vlseg3e16_v_f16mf2x3_mu(vbool32_t mask, vfloat16mf2x3_t maskedoff_tuple, const _Float16 *base, size_t vl) {
  return __riscv_vlseg3e16_v_f16mf2x3_mu(mask, maskedoff_tuple, base, vl);
}

vfloat16m1x3_t test_vlseg3e16_v_f16m1x3_mu(vbool16_t mask, vfloat16m1x3_t maskedoff_tuple, const _Float16 *base, size_t vl) {
  return __riscv_vlseg3e16_v_f16m1x3_mu(mask, maskedoff_tuple, base, vl);
}

vfloat16m2x3_t test_vlseg3e16_v_f16m2x3_mu(vbool8_t mask, vfloat16m2x3_t maskedoff_tuple, const _Float16 *base, size_t vl) {
  return __riscv_vlseg3e16_v_f16m2x3_mu(mask, maskedoff_tuple, base, vl);
}

vint16mf4x3_t test_vlseg3e16_v_i16mf4x3_mu(vbool64_t mask, vint16mf4x3_t maskedoff_tuple, const int16_t *base, size_t vl) {
  return __riscv_vlseg3e16_v_i16mf4x3_mu(mask, maskedoff_tuple, base, vl);
}

vint16mf2x3_t test_vlseg3e16_v_i16mf2x3_mu(vbool32_t mask, vint16mf2x3_t maskedoff_tuple, const int16_t *base, size_t vl) {
  return __riscv_vlseg3e16_v_i16mf2x3_mu(mask, maskedoff_tuple, base, vl);
}

vint16m1x3_t test_vlseg3e16_v_i16m1x3_mu(vbool16_t mask, vint16m1x3_t maskedoff_tuple, const int16_t *base, size_t vl) {
  return __riscv_vlseg3e16_v_i16m1x3_mu(mask, maskedoff_tuple, base, vl);
}

vint16m2x3_t test_vlseg3e16_v_i16m2x3_mu(vbool8_t mask, vint16m2x3_t maskedoff_tuple, const int16_t *base, size_t vl) {
  return __riscv_vlseg3e16_v_i16m2x3_mu(mask, maskedoff_tuple, base, vl);
}

vuint16mf4x3_t test_vlseg3e16_v_u16mf4x3_mu(vbool64_t mask, vuint16mf4x3_t maskedoff_tuple, const uint16_t *base, size_t vl) {
  return __riscv_vlseg3e16_v_u16mf4x3_mu(mask, maskedoff_tuple, base, vl);
}

vuint16mf2x3_t test_vlseg3e16_v_u16mf2x3_mu(vbool32_t mask, vuint16mf2x3_t maskedoff_tuple, const uint16_t *base, size_t vl) {
  return __riscv_vlseg3e16_v_u16mf2x3_mu(mask, maskedoff_tuple, base, vl);
}

vuint16m1x3_t test_vlseg3e16_v_u16m1x3_mu(vbool16_t mask, vuint16m1x3_t maskedoff_tuple, const uint16_t *base, size_t vl) {
  return __riscv_vlseg3e16_v_u16m1x3_mu(mask, maskedoff_tuple, base, vl);
}

vuint16m2x3_t test_vlseg3e16_v_u16m2x3_mu(vbool8_t mask, vuint16m2x3_t maskedoff_tuple, const uint16_t *base, size_t vl) {
  return __riscv_vlseg3e16_v_u16m2x3_mu(mask, maskedoff_tuple, base, vl);
}

