/* { dg-do compile } */
/* { dg-options "-march=rv64gcv -mabi=lp64d -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
vint8mf8x2_t test_vlseg2e8ff_v_i8mf8x2_tu(vint8mf8x2_t maskedoff_tuple, const int8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e8ff_tu(maskedoff_tuple, base, new_vl, vl);
}

vint8mf4x2_t test_vlseg2e8ff_v_i8mf4x2_tu(vint8mf4x2_t maskedoff_tuple, const int8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e8ff_tu(maskedoff_tuple, base, new_vl, vl);
}

vint8mf2x2_t test_vlseg2e8ff_v_i8mf2x2_tu(vint8mf2x2_t maskedoff_tuple, const int8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e8ff_tu(maskedoff_tuple, base, new_vl, vl);
}

vint8m1x2_t test_vlseg2e8ff_v_i8m1x2_tu(vint8m1x2_t maskedoff_tuple, const int8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e8ff_tu(maskedoff_tuple, base, new_vl, vl);
}

vint8m2x2_t test_vlseg2e8ff_v_i8m2x2_tu(vint8m2x2_t maskedoff_tuple, const int8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e8ff_tu(maskedoff_tuple, base, new_vl, vl);
}

vint8m4x2_t test_vlseg2e8ff_v_i8m4x2_tu(vint8m4x2_t maskedoff_tuple, const int8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e8ff_tu(maskedoff_tuple, base, new_vl, vl);
}

vuint8mf8x2_t test_vlseg2e8ff_v_u8mf8x2_tu(vuint8mf8x2_t maskedoff_tuple, const uint8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e8ff_tu(maskedoff_tuple, base, new_vl, vl);
}

vuint8mf4x2_t test_vlseg2e8ff_v_u8mf4x2_tu(vuint8mf4x2_t maskedoff_tuple, const uint8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e8ff_tu(maskedoff_tuple, base, new_vl, vl);
}

vuint8mf2x2_t test_vlseg2e8ff_v_u8mf2x2_tu(vuint8mf2x2_t maskedoff_tuple, const uint8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e8ff_tu(maskedoff_tuple, base, new_vl, vl);
}

vuint8m1x2_t test_vlseg2e8ff_v_u8m1x2_tu(vuint8m1x2_t maskedoff_tuple, const uint8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e8ff_tu(maskedoff_tuple, base, new_vl, vl);
}

vuint8m2x2_t test_vlseg2e8ff_v_u8m2x2_tu(vuint8m2x2_t maskedoff_tuple, const uint8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e8ff_tu(maskedoff_tuple, base, new_vl, vl);
}

vuint8m4x2_t test_vlseg2e8ff_v_u8m4x2_tu(vuint8m4x2_t maskedoff_tuple, const uint8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e8ff_tu(maskedoff_tuple, base, new_vl, vl);
}

vint8mf8x2_t test_vlseg2e8ff_v_i8mf8x2_tum(vbool64_t mask, vint8mf8x2_t maskedoff_tuple, const int8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e8ff_tum(mask, maskedoff_tuple, base, new_vl, vl);
}

vint8mf4x2_t test_vlseg2e8ff_v_i8mf4x2_tum(vbool32_t mask, vint8mf4x2_t maskedoff_tuple, const int8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e8ff_tum(mask, maskedoff_tuple, base, new_vl, vl);
}

vint8mf2x2_t test_vlseg2e8ff_v_i8mf2x2_tum(vbool16_t mask, vint8mf2x2_t maskedoff_tuple, const int8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e8ff_tum(mask, maskedoff_tuple, base, new_vl, vl);
}

vint8m1x2_t test_vlseg2e8ff_v_i8m1x2_tum(vbool8_t mask, vint8m1x2_t maskedoff_tuple, const int8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e8ff_tum(mask, maskedoff_tuple, base, new_vl, vl);
}

vint8m2x2_t test_vlseg2e8ff_v_i8m2x2_tum(vbool4_t mask, vint8m2x2_t maskedoff_tuple, const int8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e8ff_tum(mask, maskedoff_tuple, base, new_vl, vl);
}

vint8m4x2_t test_vlseg2e8ff_v_i8m4x2_tum(vbool2_t mask, vint8m4x2_t maskedoff_tuple, const int8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e8ff_tum(mask, maskedoff_tuple, base, new_vl, vl);
}

vuint8mf8x2_t test_vlseg2e8ff_v_u8mf8x2_tum(vbool64_t mask, vuint8mf8x2_t maskedoff_tuple, const uint8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e8ff_tum(mask, maskedoff_tuple, base, new_vl, vl);
}

vuint8mf4x2_t test_vlseg2e8ff_v_u8mf4x2_tum(vbool32_t mask, vuint8mf4x2_t maskedoff_tuple, const uint8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e8ff_tum(mask, maskedoff_tuple, base, new_vl, vl);
}

vuint8mf2x2_t test_vlseg2e8ff_v_u8mf2x2_tum(vbool16_t mask, vuint8mf2x2_t maskedoff_tuple, const uint8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e8ff_tum(mask, maskedoff_tuple, base, new_vl, vl);
}

vuint8m1x2_t test_vlseg2e8ff_v_u8m1x2_tum(vbool8_t mask, vuint8m1x2_t maskedoff_tuple, const uint8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e8ff_tum(mask, maskedoff_tuple, base, new_vl, vl);
}

vuint8m2x2_t test_vlseg2e8ff_v_u8m2x2_tum(vbool4_t mask, vuint8m2x2_t maskedoff_tuple, const uint8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e8ff_tum(mask, maskedoff_tuple, base, new_vl, vl);
}

vuint8m4x2_t test_vlseg2e8ff_v_u8m4x2_tum(vbool2_t mask, vuint8m4x2_t maskedoff_tuple, const uint8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e8ff_tum(mask, maskedoff_tuple, base, new_vl, vl);
}

vint8mf8x2_t test_vlseg2e8ff_v_i8mf8x2_tumu(vbool64_t mask, vint8mf8x2_t maskedoff_tuple, const int8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e8ff_tumu(mask, maskedoff_tuple, base, new_vl, vl);
}

vint8mf4x2_t test_vlseg2e8ff_v_i8mf4x2_tumu(vbool32_t mask, vint8mf4x2_t maskedoff_tuple, const int8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e8ff_tumu(mask, maskedoff_tuple, base, new_vl, vl);
}

vint8mf2x2_t test_vlseg2e8ff_v_i8mf2x2_tumu(vbool16_t mask, vint8mf2x2_t maskedoff_tuple, const int8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e8ff_tumu(mask, maskedoff_tuple, base, new_vl, vl);
}

vint8m1x2_t test_vlseg2e8ff_v_i8m1x2_tumu(vbool8_t mask, vint8m1x2_t maskedoff_tuple, const int8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e8ff_tumu(mask, maskedoff_tuple, base, new_vl, vl);
}

vint8m2x2_t test_vlseg2e8ff_v_i8m2x2_tumu(vbool4_t mask, vint8m2x2_t maskedoff_tuple, const int8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e8ff_tumu(mask, maskedoff_tuple, base, new_vl, vl);
}

vint8m4x2_t test_vlseg2e8ff_v_i8m4x2_tumu(vbool2_t mask, vint8m4x2_t maskedoff_tuple, const int8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e8ff_tumu(mask, maskedoff_tuple, base, new_vl, vl);
}

vuint8mf8x2_t test_vlseg2e8ff_v_u8mf8x2_tumu(vbool64_t mask, vuint8mf8x2_t maskedoff_tuple, const uint8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e8ff_tumu(mask, maskedoff_tuple, base, new_vl, vl);
}

vuint8mf4x2_t test_vlseg2e8ff_v_u8mf4x2_tumu(vbool32_t mask, vuint8mf4x2_t maskedoff_tuple, const uint8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e8ff_tumu(mask, maskedoff_tuple, base, new_vl, vl);
}

vuint8mf2x2_t test_vlseg2e8ff_v_u8mf2x2_tumu(vbool16_t mask, vuint8mf2x2_t maskedoff_tuple, const uint8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e8ff_tumu(mask, maskedoff_tuple, base, new_vl, vl);
}

vuint8m1x2_t test_vlseg2e8ff_v_u8m1x2_tumu(vbool8_t mask, vuint8m1x2_t maskedoff_tuple, const uint8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e8ff_tumu(mask, maskedoff_tuple, base, new_vl, vl);
}

vuint8m2x2_t test_vlseg2e8ff_v_u8m2x2_tumu(vbool4_t mask, vuint8m2x2_t maskedoff_tuple, const uint8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e8ff_tumu(mask, maskedoff_tuple, base, new_vl, vl);
}

vuint8m4x2_t test_vlseg2e8ff_v_u8m4x2_tumu(vbool2_t mask, vuint8m4x2_t maskedoff_tuple, const uint8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e8ff_tumu(mask, maskedoff_tuple, base, new_vl, vl);
}

vint8mf8x2_t test_vlseg2e8ff_v_i8mf8x2_mu(vbool64_t mask, vint8mf8x2_t maskedoff_tuple, const int8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e8ff_mu(mask, maskedoff_tuple, base, new_vl, vl);
}

vint8mf4x2_t test_vlseg2e8ff_v_i8mf4x2_mu(vbool32_t mask, vint8mf4x2_t maskedoff_tuple, const int8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e8ff_mu(mask, maskedoff_tuple, base, new_vl, vl);
}

vint8mf2x2_t test_vlseg2e8ff_v_i8mf2x2_mu(vbool16_t mask, vint8mf2x2_t maskedoff_tuple, const int8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e8ff_mu(mask, maskedoff_tuple, base, new_vl, vl);
}

vint8m1x2_t test_vlseg2e8ff_v_i8m1x2_mu(vbool8_t mask, vint8m1x2_t maskedoff_tuple, const int8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e8ff_mu(mask, maskedoff_tuple, base, new_vl, vl);
}

vint8m2x2_t test_vlseg2e8ff_v_i8m2x2_mu(vbool4_t mask, vint8m2x2_t maskedoff_tuple, const int8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e8ff_mu(mask, maskedoff_tuple, base, new_vl, vl);
}

vint8m4x2_t test_vlseg2e8ff_v_i8m4x2_mu(vbool2_t mask, vint8m4x2_t maskedoff_tuple, const int8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e8ff_mu(mask, maskedoff_tuple, base, new_vl, vl);
}

vuint8mf8x2_t test_vlseg2e8ff_v_u8mf8x2_mu(vbool64_t mask, vuint8mf8x2_t maskedoff_tuple, const uint8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e8ff_mu(mask, maskedoff_tuple, base, new_vl, vl);
}

vuint8mf4x2_t test_vlseg2e8ff_v_u8mf4x2_mu(vbool32_t mask, vuint8mf4x2_t maskedoff_tuple, const uint8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e8ff_mu(mask, maskedoff_tuple, base, new_vl, vl);
}

vuint8mf2x2_t test_vlseg2e8ff_v_u8mf2x2_mu(vbool16_t mask, vuint8mf2x2_t maskedoff_tuple, const uint8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e8ff_mu(mask, maskedoff_tuple, base, new_vl, vl);
}

vuint8m1x2_t test_vlseg2e8ff_v_u8m1x2_mu(vbool8_t mask, vuint8m1x2_t maskedoff_tuple, const uint8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e8ff_mu(mask, maskedoff_tuple, base, new_vl, vl);
}

vuint8m2x2_t test_vlseg2e8ff_v_u8m2x2_mu(vbool4_t mask, vuint8m2x2_t maskedoff_tuple, const uint8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e8ff_mu(mask, maskedoff_tuple, base, new_vl, vl);
}

vuint8m4x2_t test_vlseg2e8ff_v_u8m4x2_mu(vbool2_t mask, vuint8m4x2_t maskedoff_tuple, const uint8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e8ff_mu(mask, maskedoff_tuple, base, new_vl, vl);
}

/* { dg-final { scan-assembler-times {vseti?vli\s+[a-z0-9]+,\s*[a-z0-9]+,\s*e[0-9]+,\s*mf?[1248],\s*t[au],\s*m[au]\s+vlseg2e8ff\.[ivxfswum.]+\s+} 48 } } */
