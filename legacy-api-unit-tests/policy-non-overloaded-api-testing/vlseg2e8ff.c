#include <stdint.h>
#include "rvv-v0p10-compatible-headers/non-policy.h"
#include "rvv-v0p10-compatible-headers/policy.h"
#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
void test_vlseg2e8ff_v_i8mf8_tu(vint8mf8_t *v0, vint8mf8_t *v1, vint8mf8_t maskedoff0, vint8mf8_t maskedoff1, const int8_t *base, size_t *new_vl, size_t vl) {
  return vlseg2e8ff_v_i8mf8_tu(v0, v1, maskedoff0, maskedoff1, base, new_vl, vl);
}

void test_vlseg2e8ff_v_i8mf4_tu(vint8mf4_t *v0, vint8mf4_t *v1, vint8mf4_t maskedoff0, vint8mf4_t maskedoff1, const int8_t *base, size_t *new_vl, size_t vl) {
  return vlseg2e8ff_v_i8mf4_tu(v0, v1, maskedoff0, maskedoff1, base, new_vl, vl);
}

void test_vlseg2e8ff_v_i8mf2_tu(vint8mf2_t *v0, vint8mf2_t *v1, vint8mf2_t maskedoff0, vint8mf2_t maskedoff1, const int8_t *base, size_t *new_vl, size_t vl) {
  return vlseg2e8ff_v_i8mf2_tu(v0, v1, maskedoff0, maskedoff1, base, new_vl, vl);
}

void test_vlseg2e8ff_v_i8m1_tu(vint8m1_t *v0, vint8m1_t *v1, vint8m1_t maskedoff0, vint8m1_t maskedoff1, const int8_t *base, size_t *new_vl, size_t vl) {
  return vlseg2e8ff_v_i8m1_tu(v0, v1, maskedoff0, maskedoff1, base, new_vl, vl);
}

void test_vlseg2e8ff_v_i8m2_tu(vint8m2_t *v0, vint8m2_t *v1, vint8m2_t maskedoff0, vint8m2_t maskedoff1, const int8_t *base, size_t *new_vl, size_t vl) {
  return vlseg2e8ff_v_i8m2_tu(v0, v1, maskedoff0, maskedoff1, base, new_vl, vl);
}

void test_vlseg2e8ff_v_i8m4_tu(vint8m4_t *v0, vint8m4_t *v1, vint8m4_t maskedoff0, vint8m4_t maskedoff1, const int8_t *base, size_t *new_vl, size_t vl) {
  return vlseg2e8ff_v_i8m4_tu(v0, v1, maskedoff0, maskedoff1, base, new_vl, vl);
}

void test_vlseg2e8ff_v_u8mf8_tu(vuint8mf8_t *v0, vuint8mf8_t *v1, vuint8mf8_t maskedoff0, vuint8mf8_t maskedoff1, const uint8_t *base, size_t *new_vl, size_t vl) {
  return vlseg2e8ff_v_u8mf8_tu(v0, v1, maskedoff0, maskedoff1, base, new_vl, vl);
}

void test_vlseg2e8ff_v_u8mf4_tu(vuint8mf4_t *v0, vuint8mf4_t *v1, vuint8mf4_t maskedoff0, vuint8mf4_t maskedoff1, const uint8_t *base, size_t *new_vl, size_t vl) {
  return vlseg2e8ff_v_u8mf4_tu(v0, v1, maskedoff0, maskedoff1, base, new_vl, vl);
}

void test_vlseg2e8ff_v_u8mf2_tu(vuint8mf2_t *v0, vuint8mf2_t *v1, vuint8mf2_t maskedoff0, vuint8mf2_t maskedoff1, const uint8_t *base, size_t *new_vl, size_t vl) {
  return vlseg2e8ff_v_u8mf2_tu(v0, v1, maskedoff0, maskedoff1, base, new_vl, vl);
}

void test_vlseg2e8ff_v_u8m1_tu(vuint8m1_t *v0, vuint8m1_t *v1, vuint8m1_t maskedoff0, vuint8m1_t maskedoff1, const uint8_t *base, size_t *new_vl, size_t vl) {
  return vlseg2e8ff_v_u8m1_tu(v0, v1, maskedoff0, maskedoff1, base, new_vl, vl);
}

void test_vlseg2e8ff_v_u8m2_tu(vuint8m2_t *v0, vuint8m2_t *v1, vuint8m2_t maskedoff0, vuint8m2_t maskedoff1, const uint8_t *base, size_t *new_vl, size_t vl) {
  return vlseg2e8ff_v_u8m2_tu(v0, v1, maskedoff0, maskedoff1, base, new_vl, vl);
}

void test_vlseg2e8ff_v_u8m4_tu(vuint8m4_t *v0, vuint8m4_t *v1, vuint8m4_t maskedoff0, vuint8m4_t maskedoff1, const uint8_t *base, size_t *new_vl, size_t vl) {
  return vlseg2e8ff_v_u8m4_tu(v0, v1, maskedoff0, maskedoff1, base, new_vl, vl);
}

void test_vlseg2e8ff_v_i8mf8_ta(vint8mf8_t *v0, vint8mf8_t *v1, const int8_t *base, size_t *new_vl, size_t vl) {
  return vlseg2e8ff_v_i8mf8_ta(v0, v1, base, new_vl, vl);
}

void test_vlseg2e8ff_v_i8mf4_ta(vint8mf4_t *v0, vint8mf4_t *v1, const int8_t *base, size_t *new_vl, size_t vl) {
  return vlseg2e8ff_v_i8mf4_ta(v0, v1, base, new_vl, vl);
}

void test_vlseg2e8ff_v_i8mf2_ta(vint8mf2_t *v0, vint8mf2_t *v1, const int8_t *base, size_t *new_vl, size_t vl) {
  return vlseg2e8ff_v_i8mf2_ta(v0, v1, base, new_vl, vl);
}

void test_vlseg2e8ff_v_i8m1_ta(vint8m1_t *v0, vint8m1_t *v1, const int8_t *base, size_t *new_vl, size_t vl) {
  return vlseg2e8ff_v_i8m1_ta(v0, v1, base, new_vl, vl);
}

void test_vlseg2e8ff_v_i8m2_ta(vint8m2_t *v0, vint8m2_t *v1, const int8_t *base, size_t *new_vl, size_t vl) {
  return vlseg2e8ff_v_i8m2_ta(v0, v1, base, new_vl, vl);
}

void test_vlseg2e8ff_v_i8m4_ta(vint8m4_t *v0, vint8m4_t *v1, const int8_t *base, size_t *new_vl, size_t vl) {
  return vlseg2e8ff_v_i8m4_ta(v0, v1, base, new_vl, vl);
}

void test_vlseg2e8ff_v_u8mf8_ta(vuint8mf8_t *v0, vuint8mf8_t *v1, const uint8_t *base, size_t *new_vl, size_t vl) {
  return vlseg2e8ff_v_u8mf8_ta(v0, v1, base, new_vl, vl);
}

void test_vlseg2e8ff_v_u8mf4_ta(vuint8mf4_t *v0, vuint8mf4_t *v1, const uint8_t *base, size_t *new_vl, size_t vl) {
  return vlseg2e8ff_v_u8mf4_ta(v0, v1, base, new_vl, vl);
}

void test_vlseg2e8ff_v_u8mf2_ta(vuint8mf2_t *v0, vuint8mf2_t *v1, const uint8_t *base, size_t *new_vl, size_t vl) {
  return vlseg2e8ff_v_u8mf2_ta(v0, v1, base, new_vl, vl);
}

void test_vlseg2e8ff_v_u8m1_ta(vuint8m1_t *v0, vuint8m1_t *v1, const uint8_t *base, size_t *new_vl, size_t vl) {
  return vlseg2e8ff_v_u8m1_ta(v0, v1, base, new_vl, vl);
}

void test_vlseg2e8ff_v_u8m2_ta(vuint8m2_t *v0, vuint8m2_t *v1, const uint8_t *base, size_t *new_vl, size_t vl) {
  return vlseg2e8ff_v_u8m2_ta(v0, v1, base, new_vl, vl);
}

void test_vlseg2e8ff_v_u8m4_ta(vuint8m4_t *v0, vuint8m4_t *v1, const uint8_t *base, size_t *new_vl, size_t vl) {
  return vlseg2e8ff_v_u8m4_ta(v0, v1, base, new_vl, vl);
}

void test_vlseg2e8ff_v_i8mf8_tuma(vint8mf8_t *v0, vint8mf8_t *v1, vbool64_t mask, vint8mf8_t maskedoff0, vint8mf8_t maskedoff1, const int8_t *base, size_t *new_vl, size_t vl) {
  return vlseg2e8ff_v_i8mf8_tuma(v0, v1, mask, maskedoff0, maskedoff1, base, new_vl, vl);
}

void test_vlseg2e8ff_v_i8mf4_tuma(vint8mf4_t *v0, vint8mf4_t *v1, vbool32_t mask, vint8mf4_t maskedoff0, vint8mf4_t maskedoff1, const int8_t *base, size_t *new_vl, size_t vl) {
  return vlseg2e8ff_v_i8mf4_tuma(v0, v1, mask, maskedoff0, maskedoff1, base, new_vl, vl);
}

void test_vlseg2e8ff_v_i8mf2_tuma(vint8mf2_t *v0, vint8mf2_t *v1, vbool16_t mask, vint8mf2_t maskedoff0, vint8mf2_t maskedoff1, const int8_t *base, size_t *new_vl, size_t vl) {
  return vlseg2e8ff_v_i8mf2_tuma(v0, v1, mask, maskedoff0, maskedoff1, base, new_vl, vl);
}

void test_vlseg2e8ff_v_i8m1_tuma(vint8m1_t *v0, vint8m1_t *v1, vbool8_t mask, vint8m1_t maskedoff0, vint8m1_t maskedoff1, const int8_t *base, size_t *new_vl, size_t vl) {
  return vlseg2e8ff_v_i8m1_tuma(v0, v1, mask, maskedoff0, maskedoff1, base, new_vl, vl);
}

void test_vlseg2e8ff_v_i8m2_tuma(vint8m2_t *v0, vint8m2_t *v1, vbool4_t mask, vint8m2_t maskedoff0, vint8m2_t maskedoff1, const int8_t *base, size_t *new_vl, size_t vl) {
  return vlseg2e8ff_v_i8m2_tuma(v0, v1, mask, maskedoff0, maskedoff1, base, new_vl, vl);
}

void test_vlseg2e8ff_v_i8m4_tuma(vint8m4_t *v0, vint8m4_t *v1, vbool2_t mask, vint8m4_t maskedoff0, vint8m4_t maskedoff1, const int8_t *base, size_t *new_vl, size_t vl) {
  return vlseg2e8ff_v_i8m4_tuma(v0, v1, mask, maskedoff0, maskedoff1, base, new_vl, vl);
}

void test_vlseg2e8ff_v_u8mf8_tuma(vuint8mf8_t *v0, vuint8mf8_t *v1, vbool64_t mask, vuint8mf8_t maskedoff0, vuint8mf8_t maskedoff1, const uint8_t *base, size_t *new_vl, size_t vl) {
  return vlseg2e8ff_v_u8mf8_tuma(v0, v1, mask, maskedoff0, maskedoff1, base, new_vl, vl);
}

void test_vlseg2e8ff_v_u8mf4_tuma(vuint8mf4_t *v0, vuint8mf4_t *v1, vbool32_t mask, vuint8mf4_t maskedoff0, vuint8mf4_t maskedoff1, const uint8_t *base, size_t *new_vl, size_t vl) {
  return vlseg2e8ff_v_u8mf4_tuma(v0, v1, mask, maskedoff0, maskedoff1, base, new_vl, vl);
}

void test_vlseg2e8ff_v_u8mf2_tuma(vuint8mf2_t *v0, vuint8mf2_t *v1, vbool16_t mask, vuint8mf2_t maskedoff0, vuint8mf2_t maskedoff1, const uint8_t *base, size_t *new_vl, size_t vl) {
  return vlseg2e8ff_v_u8mf2_tuma(v0, v1, mask, maskedoff0, maskedoff1, base, new_vl, vl);
}

void test_vlseg2e8ff_v_u8m1_tuma(vuint8m1_t *v0, vuint8m1_t *v1, vbool8_t mask, vuint8m1_t maskedoff0, vuint8m1_t maskedoff1, const uint8_t *base, size_t *new_vl, size_t vl) {
  return vlseg2e8ff_v_u8m1_tuma(v0, v1, mask, maskedoff0, maskedoff1, base, new_vl, vl);
}

void test_vlseg2e8ff_v_u8m2_tuma(vuint8m2_t *v0, vuint8m2_t *v1, vbool4_t mask, vuint8m2_t maskedoff0, vuint8m2_t maskedoff1, const uint8_t *base, size_t *new_vl, size_t vl) {
  return vlseg2e8ff_v_u8m2_tuma(v0, v1, mask, maskedoff0, maskedoff1, base, new_vl, vl);
}

void test_vlseg2e8ff_v_u8m4_tuma(vuint8m4_t *v0, vuint8m4_t *v1, vbool2_t mask, vuint8m4_t maskedoff0, vuint8m4_t maskedoff1, const uint8_t *base, size_t *new_vl, size_t vl) {
  return vlseg2e8ff_v_u8m4_tuma(v0, v1, mask, maskedoff0, maskedoff1, base, new_vl, vl);
}

void test_vlseg2e8ff_v_i8mf8_tumu(vint8mf8_t *v0, vint8mf8_t *v1, vbool64_t mask, vint8mf8_t maskedoff0, vint8mf8_t maskedoff1, const int8_t *base, size_t *new_vl, size_t vl) {
  return vlseg2e8ff_v_i8mf8_tumu(v0, v1, mask, maskedoff0, maskedoff1, base, new_vl, vl);
}

void test_vlseg2e8ff_v_i8mf4_tumu(vint8mf4_t *v0, vint8mf4_t *v1, vbool32_t mask, vint8mf4_t maskedoff0, vint8mf4_t maskedoff1, const int8_t *base, size_t *new_vl, size_t vl) {
  return vlseg2e8ff_v_i8mf4_tumu(v0, v1, mask, maskedoff0, maskedoff1, base, new_vl, vl);
}

void test_vlseg2e8ff_v_i8mf2_tumu(vint8mf2_t *v0, vint8mf2_t *v1, vbool16_t mask, vint8mf2_t maskedoff0, vint8mf2_t maskedoff1, const int8_t *base, size_t *new_vl, size_t vl) {
  return vlseg2e8ff_v_i8mf2_tumu(v0, v1, mask, maskedoff0, maskedoff1, base, new_vl, vl);
}

void test_vlseg2e8ff_v_i8m1_tumu(vint8m1_t *v0, vint8m1_t *v1, vbool8_t mask, vint8m1_t maskedoff0, vint8m1_t maskedoff1, const int8_t *base, size_t *new_vl, size_t vl) {
  return vlseg2e8ff_v_i8m1_tumu(v0, v1, mask, maskedoff0, maskedoff1, base, new_vl, vl);
}

void test_vlseg2e8ff_v_i8m2_tumu(vint8m2_t *v0, vint8m2_t *v1, vbool4_t mask, vint8m2_t maskedoff0, vint8m2_t maskedoff1, const int8_t *base, size_t *new_vl, size_t vl) {
  return vlseg2e8ff_v_i8m2_tumu(v0, v1, mask, maskedoff0, maskedoff1, base, new_vl, vl);
}

void test_vlseg2e8ff_v_i8m4_tumu(vint8m4_t *v0, vint8m4_t *v1, vbool2_t mask, vint8m4_t maskedoff0, vint8m4_t maskedoff1, const int8_t *base, size_t *new_vl, size_t vl) {
  return vlseg2e8ff_v_i8m4_tumu(v0, v1, mask, maskedoff0, maskedoff1, base, new_vl, vl);
}

void test_vlseg2e8ff_v_u8mf8_tumu(vuint8mf8_t *v0, vuint8mf8_t *v1, vbool64_t mask, vuint8mf8_t maskedoff0, vuint8mf8_t maskedoff1, const uint8_t *base, size_t *new_vl, size_t vl) {
  return vlseg2e8ff_v_u8mf8_tumu(v0, v1, mask, maskedoff0, maskedoff1, base, new_vl, vl);
}

void test_vlseg2e8ff_v_u8mf4_tumu(vuint8mf4_t *v0, vuint8mf4_t *v1, vbool32_t mask, vuint8mf4_t maskedoff0, vuint8mf4_t maskedoff1, const uint8_t *base, size_t *new_vl, size_t vl) {
  return vlseg2e8ff_v_u8mf4_tumu(v0, v1, mask, maskedoff0, maskedoff1, base, new_vl, vl);
}

void test_vlseg2e8ff_v_u8mf2_tumu(vuint8mf2_t *v0, vuint8mf2_t *v1, vbool16_t mask, vuint8mf2_t maskedoff0, vuint8mf2_t maskedoff1, const uint8_t *base, size_t *new_vl, size_t vl) {
  return vlseg2e8ff_v_u8mf2_tumu(v0, v1, mask, maskedoff0, maskedoff1, base, new_vl, vl);
}

void test_vlseg2e8ff_v_u8m1_tumu(vuint8m1_t *v0, vuint8m1_t *v1, vbool8_t mask, vuint8m1_t maskedoff0, vuint8m1_t maskedoff1, const uint8_t *base, size_t *new_vl, size_t vl) {
  return vlseg2e8ff_v_u8m1_tumu(v0, v1, mask, maskedoff0, maskedoff1, base, new_vl, vl);
}

void test_vlseg2e8ff_v_u8m2_tumu(vuint8m2_t *v0, vuint8m2_t *v1, vbool4_t mask, vuint8m2_t maskedoff0, vuint8m2_t maskedoff1, const uint8_t *base, size_t *new_vl, size_t vl) {
  return vlseg2e8ff_v_u8m2_tumu(v0, v1, mask, maskedoff0, maskedoff1, base, new_vl, vl);
}

void test_vlseg2e8ff_v_u8m4_tumu(vuint8m4_t *v0, vuint8m4_t *v1, vbool2_t mask, vuint8m4_t maskedoff0, vuint8m4_t maskedoff1, const uint8_t *base, size_t *new_vl, size_t vl) {
  return vlseg2e8ff_v_u8m4_tumu(v0, v1, mask, maskedoff0, maskedoff1, base, new_vl, vl);
}

void test_vlseg2e8ff_v_i8mf8_tama(vint8mf8_t *v0, vint8mf8_t *v1, vbool64_t mask, const int8_t *base, size_t *new_vl, size_t vl) {
  return vlseg2e8ff_v_i8mf8_tama(v0, v1, mask, base, new_vl, vl);
}

void test_vlseg2e8ff_v_i8mf4_tama(vint8mf4_t *v0, vint8mf4_t *v1, vbool32_t mask, const int8_t *base, size_t *new_vl, size_t vl) {
  return vlseg2e8ff_v_i8mf4_tama(v0, v1, mask, base, new_vl, vl);
}

void test_vlseg2e8ff_v_i8mf2_tama(vint8mf2_t *v0, vint8mf2_t *v1, vbool16_t mask, const int8_t *base, size_t *new_vl, size_t vl) {
  return vlseg2e8ff_v_i8mf2_tama(v0, v1, mask, base, new_vl, vl);
}

void test_vlseg2e8ff_v_i8m1_tama(vint8m1_t *v0, vint8m1_t *v1, vbool8_t mask, const int8_t *base, size_t *new_vl, size_t vl) {
  return vlseg2e8ff_v_i8m1_tama(v0, v1, mask, base, new_vl, vl);
}

void test_vlseg2e8ff_v_i8m2_tama(vint8m2_t *v0, vint8m2_t *v1, vbool4_t mask, const int8_t *base, size_t *new_vl, size_t vl) {
  return vlseg2e8ff_v_i8m2_tama(v0, v1, mask, base, new_vl, vl);
}

void test_vlseg2e8ff_v_i8m4_tama(vint8m4_t *v0, vint8m4_t *v1, vbool2_t mask, const int8_t *base, size_t *new_vl, size_t vl) {
  return vlseg2e8ff_v_i8m4_tama(v0, v1, mask, base, new_vl, vl);
}

void test_vlseg2e8ff_v_u8mf8_tama(vuint8mf8_t *v0, vuint8mf8_t *v1, vbool64_t mask, const uint8_t *base, size_t *new_vl, size_t vl) {
  return vlseg2e8ff_v_u8mf8_tama(v0, v1, mask, base, new_vl, vl);
}

void test_vlseg2e8ff_v_u8mf4_tama(vuint8mf4_t *v0, vuint8mf4_t *v1, vbool32_t mask, const uint8_t *base, size_t *new_vl, size_t vl) {
  return vlseg2e8ff_v_u8mf4_tama(v0, v1, mask, base, new_vl, vl);
}

void test_vlseg2e8ff_v_u8mf2_tama(vuint8mf2_t *v0, vuint8mf2_t *v1, vbool16_t mask, const uint8_t *base, size_t *new_vl, size_t vl) {
  return vlseg2e8ff_v_u8mf2_tama(v0, v1, mask, base, new_vl, vl);
}

void test_vlseg2e8ff_v_u8m1_tama(vuint8m1_t *v0, vuint8m1_t *v1, vbool8_t mask, const uint8_t *base, size_t *new_vl, size_t vl) {
  return vlseg2e8ff_v_u8m1_tama(v0, v1, mask, base, new_vl, vl);
}

void test_vlseg2e8ff_v_u8m2_tama(vuint8m2_t *v0, vuint8m2_t *v1, vbool4_t mask, const uint8_t *base, size_t *new_vl, size_t vl) {
  return vlseg2e8ff_v_u8m2_tama(v0, v1, mask, base, new_vl, vl);
}

void test_vlseg2e8ff_v_u8m4_tama(vuint8m4_t *v0, vuint8m4_t *v1, vbool2_t mask, const uint8_t *base, size_t *new_vl, size_t vl) {
  return vlseg2e8ff_v_u8m4_tama(v0, v1, mask, base, new_vl, vl);
}

void test_vlseg2e8ff_v_i8mf8_tamu(vint8mf8_t *v0, vint8mf8_t *v1, vbool64_t mask, vint8mf8_t maskedoff0, vint8mf8_t maskedoff1, const int8_t *base, size_t *new_vl, size_t vl) {
  return vlseg2e8ff_v_i8mf8_tamu(v0, v1, mask, maskedoff0, maskedoff1, base, new_vl, vl);
}

void test_vlseg2e8ff_v_i8mf4_tamu(vint8mf4_t *v0, vint8mf4_t *v1, vbool32_t mask, vint8mf4_t maskedoff0, vint8mf4_t maskedoff1, const int8_t *base, size_t *new_vl, size_t vl) {
  return vlseg2e8ff_v_i8mf4_tamu(v0, v1, mask, maskedoff0, maskedoff1, base, new_vl, vl);
}

void test_vlseg2e8ff_v_i8mf2_tamu(vint8mf2_t *v0, vint8mf2_t *v1, vbool16_t mask, vint8mf2_t maskedoff0, vint8mf2_t maskedoff1, const int8_t *base, size_t *new_vl, size_t vl) {
  return vlseg2e8ff_v_i8mf2_tamu(v0, v1, mask, maskedoff0, maskedoff1, base, new_vl, vl);
}

void test_vlseg2e8ff_v_i8m1_tamu(vint8m1_t *v0, vint8m1_t *v1, vbool8_t mask, vint8m1_t maskedoff0, vint8m1_t maskedoff1, const int8_t *base, size_t *new_vl, size_t vl) {
  return vlseg2e8ff_v_i8m1_tamu(v0, v1, mask, maskedoff0, maskedoff1, base, new_vl, vl);
}

void test_vlseg2e8ff_v_i8m2_tamu(vint8m2_t *v0, vint8m2_t *v1, vbool4_t mask, vint8m2_t maskedoff0, vint8m2_t maskedoff1, const int8_t *base, size_t *new_vl, size_t vl) {
  return vlseg2e8ff_v_i8m2_tamu(v0, v1, mask, maskedoff0, maskedoff1, base, new_vl, vl);
}

void test_vlseg2e8ff_v_i8m4_tamu(vint8m4_t *v0, vint8m4_t *v1, vbool2_t mask, vint8m4_t maskedoff0, vint8m4_t maskedoff1, const int8_t *base, size_t *new_vl, size_t vl) {
  return vlseg2e8ff_v_i8m4_tamu(v0, v1, mask, maskedoff0, maskedoff1, base, new_vl, vl);
}

void test_vlseg2e8ff_v_u8mf8_tamu(vuint8mf8_t *v0, vuint8mf8_t *v1, vbool64_t mask, vuint8mf8_t maskedoff0, vuint8mf8_t maskedoff1, const uint8_t *base, size_t *new_vl, size_t vl) {
  return vlseg2e8ff_v_u8mf8_tamu(v0, v1, mask, maskedoff0, maskedoff1, base, new_vl, vl);
}

void test_vlseg2e8ff_v_u8mf4_tamu(vuint8mf4_t *v0, vuint8mf4_t *v1, vbool32_t mask, vuint8mf4_t maskedoff0, vuint8mf4_t maskedoff1, const uint8_t *base, size_t *new_vl, size_t vl) {
  return vlseg2e8ff_v_u8mf4_tamu(v0, v1, mask, maskedoff0, maskedoff1, base, new_vl, vl);
}

void test_vlseg2e8ff_v_u8mf2_tamu(vuint8mf2_t *v0, vuint8mf2_t *v1, vbool16_t mask, vuint8mf2_t maskedoff0, vuint8mf2_t maskedoff1, const uint8_t *base, size_t *new_vl, size_t vl) {
  return vlseg2e8ff_v_u8mf2_tamu(v0, v1, mask, maskedoff0, maskedoff1, base, new_vl, vl);
}

void test_vlseg2e8ff_v_u8m1_tamu(vuint8m1_t *v0, vuint8m1_t *v1, vbool8_t mask, vuint8m1_t maskedoff0, vuint8m1_t maskedoff1, const uint8_t *base, size_t *new_vl, size_t vl) {
  return vlseg2e8ff_v_u8m1_tamu(v0, v1, mask, maskedoff0, maskedoff1, base, new_vl, vl);
}

void test_vlseg2e8ff_v_u8m2_tamu(vuint8m2_t *v0, vuint8m2_t *v1, vbool4_t mask, vuint8m2_t maskedoff0, vuint8m2_t maskedoff1, const uint8_t *base, size_t *new_vl, size_t vl) {
  return vlseg2e8ff_v_u8m2_tamu(v0, v1, mask, maskedoff0, maskedoff1, base, new_vl, vl);
}

void test_vlseg2e8ff_v_u8m4_tamu(vuint8m4_t *v0, vuint8m4_t *v1, vbool2_t mask, vuint8m4_t maskedoff0, vuint8m4_t maskedoff1, const uint8_t *base, size_t *new_vl, size_t vl) {
  return vlseg2e8ff_v_u8m4_tamu(v0, v1, mask, maskedoff0, maskedoff1, base, new_vl, vl);
}

