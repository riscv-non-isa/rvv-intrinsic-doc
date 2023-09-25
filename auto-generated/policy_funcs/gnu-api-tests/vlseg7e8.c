/* { dg-do compile } */
/* { dg-options "-march=rv64gcv_zvfh -mabi=lp64d -Wno-psabi -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
vint8mf8x7_t test_vlseg7e8_v_i8mf8x7_tu(vint8mf8x7_t maskedoff_tuple, const int8_t *base, size_t vl) {
  return __riscv_vlseg7e8_v_i8mf8x7_tu(maskedoff_tuple, base, vl);
}

vint8mf4x7_t test_vlseg7e8_v_i8mf4x7_tu(vint8mf4x7_t maskedoff_tuple, const int8_t *base, size_t vl) {
  return __riscv_vlseg7e8_v_i8mf4x7_tu(maskedoff_tuple, base, vl);
}

vint8mf2x7_t test_vlseg7e8_v_i8mf2x7_tu(vint8mf2x7_t maskedoff_tuple, const int8_t *base, size_t vl) {
  return __riscv_vlseg7e8_v_i8mf2x7_tu(maskedoff_tuple, base, vl);
}

vint8m1x7_t test_vlseg7e8_v_i8m1x7_tu(vint8m1x7_t maskedoff_tuple, const int8_t *base, size_t vl) {
  return __riscv_vlseg7e8_v_i8m1x7_tu(maskedoff_tuple, base, vl);
}

vuint8mf8x7_t test_vlseg7e8_v_u8mf8x7_tu(vuint8mf8x7_t maskedoff_tuple, const uint8_t *base, size_t vl) {
  return __riscv_vlseg7e8_v_u8mf8x7_tu(maskedoff_tuple, base, vl);
}

vuint8mf4x7_t test_vlseg7e8_v_u8mf4x7_tu(vuint8mf4x7_t maskedoff_tuple, const uint8_t *base, size_t vl) {
  return __riscv_vlseg7e8_v_u8mf4x7_tu(maskedoff_tuple, base, vl);
}

vuint8mf2x7_t test_vlseg7e8_v_u8mf2x7_tu(vuint8mf2x7_t maskedoff_tuple, const uint8_t *base, size_t vl) {
  return __riscv_vlseg7e8_v_u8mf2x7_tu(maskedoff_tuple, base, vl);
}

vuint8m1x7_t test_vlseg7e8_v_u8m1x7_tu(vuint8m1x7_t maskedoff_tuple, const uint8_t *base, size_t vl) {
  return __riscv_vlseg7e8_v_u8m1x7_tu(maskedoff_tuple, base, vl);
}

vint8mf8x7_t test_vlseg7e8_v_i8mf8x7_tum(vbool64_t mask, vint8mf8x7_t maskedoff_tuple, const int8_t *base, size_t vl) {
  return __riscv_vlseg7e8_v_i8mf8x7_tum(mask, maskedoff_tuple, base, vl);
}

vint8mf4x7_t test_vlseg7e8_v_i8mf4x7_tum(vbool32_t mask, vint8mf4x7_t maskedoff_tuple, const int8_t *base, size_t vl) {
  return __riscv_vlseg7e8_v_i8mf4x7_tum(mask, maskedoff_tuple, base, vl);
}

vint8mf2x7_t test_vlseg7e8_v_i8mf2x7_tum(vbool16_t mask, vint8mf2x7_t maskedoff_tuple, const int8_t *base, size_t vl) {
  return __riscv_vlseg7e8_v_i8mf2x7_tum(mask, maskedoff_tuple, base, vl);
}

vint8m1x7_t test_vlseg7e8_v_i8m1x7_tum(vbool8_t mask, vint8m1x7_t maskedoff_tuple, const int8_t *base, size_t vl) {
  return __riscv_vlseg7e8_v_i8m1x7_tum(mask, maskedoff_tuple, base, vl);
}

vuint8mf8x7_t test_vlseg7e8_v_u8mf8x7_tum(vbool64_t mask, vuint8mf8x7_t maskedoff_tuple, const uint8_t *base, size_t vl) {
  return __riscv_vlseg7e8_v_u8mf8x7_tum(mask, maskedoff_tuple, base, vl);
}

vuint8mf4x7_t test_vlseg7e8_v_u8mf4x7_tum(vbool32_t mask, vuint8mf4x7_t maskedoff_tuple, const uint8_t *base, size_t vl) {
  return __riscv_vlseg7e8_v_u8mf4x7_tum(mask, maskedoff_tuple, base, vl);
}

vuint8mf2x7_t test_vlseg7e8_v_u8mf2x7_tum(vbool16_t mask, vuint8mf2x7_t maskedoff_tuple, const uint8_t *base, size_t vl) {
  return __riscv_vlseg7e8_v_u8mf2x7_tum(mask, maskedoff_tuple, base, vl);
}

vuint8m1x7_t test_vlseg7e8_v_u8m1x7_tum(vbool8_t mask, vuint8m1x7_t maskedoff_tuple, const uint8_t *base, size_t vl) {
  return __riscv_vlseg7e8_v_u8m1x7_tum(mask, maskedoff_tuple, base, vl);
}

vint8mf8x7_t test_vlseg7e8_v_i8mf8x7_tumu(vbool64_t mask, vint8mf8x7_t maskedoff_tuple, const int8_t *base, size_t vl) {
  return __riscv_vlseg7e8_v_i8mf8x7_tumu(mask, maskedoff_tuple, base, vl);
}

vint8mf4x7_t test_vlseg7e8_v_i8mf4x7_tumu(vbool32_t mask, vint8mf4x7_t maskedoff_tuple, const int8_t *base, size_t vl) {
  return __riscv_vlseg7e8_v_i8mf4x7_tumu(mask, maskedoff_tuple, base, vl);
}

vint8mf2x7_t test_vlseg7e8_v_i8mf2x7_tumu(vbool16_t mask, vint8mf2x7_t maskedoff_tuple, const int8_t *base, size_t vl) {
  return __riscv_vlseg7e8_v_i8mf2x7_tumu(mask, maskedoff_tuple, base, vl);
}

vint8m1x7_t test_vlseg7e8_v_i8m1x7_tumu(vbool8_t mask, vint8m1x7_t maskedoff_tuple, const int8_t *base, size_t vl) {
  return __riscv_vlseg7e8_v_i8m1x7_tumu(mask, maskedoff_tuple, base, vl);
}

vuint8mf8x7_t test_vlseg7e8_v_u8mf8x7_tumu(vbool64_t mask, vuint8mf8x7_t maskedoff_tuple, const uint8_t *base, size_t vl) {
  return __riscv_vlseg7e8_v_u8mf8x7_tumu(mask, maskedoff_tuple, base, vl);
}

vuint8mf4x7_t test_vlseg7e8_v_u8mf4x7_tumu(vbool32_t mask, vuint8mf4x7_t maskedoff_tuple, const uint8_t *base, size_t vl) {
  return __riscv_vlseg7e8_v_u8mf4x7_tumu(mask, maskedoff_tuple, base, vl);
}

vuint8mf2x7_t test_vlseg7e8_v_u8mf2x7_tumu(vbool16_t mask, vuint8mf2x7_t maskedoff_tuple, const uint8_t *base, size_t vl) {
  return __riscv_vlseg7e8_v_u8mf2x7_tumu(mask, maskedoff_tuple, base, vl);
}

vuint8m1x7_t test_vlseg7e8_v_u8m1x7_tumu(vbool8_t mask, vuint8m1x7_t maskedoff_tuple, const uint8_t *base, size_t vl) {
  return __riscv_vlseg7e8_v_u8m1x7_tumu(mask, maskedoff_tuple, base, vl);
}

vint8mf8x7_t test_vlseg7e8_v_i8mf8x7_mu(vbool64_t mask, vint8mf8x7_t maskedoff_tuple, const int8_t *base, size_t vl) {
  return __riscv_vlseg7e8_v_i8mf8x7_mu(mask, maskedoff_tuple, base, vl);
}

vint8mf4x7_t test_vlseg7e8_v_i8mf4x7_mu(vbool32_t mask, vint8mf4x7_t maskedoff_tuple, const int8_t *base, size_t vl) {
  return __riscv_vlseg7e8_v_i8mf4x7_mu(mask, maskedoff_tuple, base, vl);
}

vint8mf2x7_t test_vlseg7e8_v_i8mf2x7_mu(vbool16_t mask, vint8mf2x7_t maskedoff_tuple, const int8_t *base, size_t vl) {
  return __riscv_vlseg7e8_v_i8mf2x7_mu(mask, maskedoff_tuple, base, vl);
}

vint8m1x7_t test_vlseg7e8_v_i8m1x7_mu(vbool8_t mask, vint8m1x7_t maskedoff_tuple, const int8_t *base, size_t vl) {
  return __riscv_vlseg7e8_v_i8m1x7_mu(mask, maskedoff_tuple, base, vl);
}

vuint8mf8x7_t test_vlseg7e8_v_u8mf8x7_mu(vbool64_t mask, vuint8mf8x7_t maskedoff_tuple, const uint8_t *base, size_t vl) {
  return __riscv_vlseg7e8_v_u8mf8x7_mu(mask, maskedoff_tuple, base, vl);
}

vuint8mf4x7_t test_vlseg7e8_v_u8mf4x7_mu(vbool32_t mask, vuint8mf4x7_t maskedoff_tuple, const uint8_t *base, size_t vl) {
  return __riscv_vlseg7e8_v_u8mf4x7_mu(mask, maskedoff_tuple, base, vl);
}

vuint8mf2x7_t test_vlseg7e8_v_u8mf2x7_mu(vbool16_t mask, vuint8mf2x7_t maskedoff_tuple, const uint8_t *base, size_t vl) {
  return __riscv_vlseg7e8_v_u8mf2x7_mu(mask, maskedoff_tuple, base, vl);
}

vuint8m1x7_t test_vlseg7e8_v_u8m1x7_mu(vbool8_t mask, vuint8m1x7_t maskedoff_tuple, const uint8_t *base, size_t vl) {
  return __riscv_vlseg7e8_v_u8m1x7_mu(mask, maskedoff_tuple, base, vl);
}

/* { dg-final { scan-assembler-times {vseti?vli\s+[a-z0-9]+,\s*[a-z0-9]+,\s*e[0-9]+,\s*mf?[1248],\s*t[au],\s*m[au]\s+vlseg7e8\.[ivxfswum.]+\s+} 32 } } */
