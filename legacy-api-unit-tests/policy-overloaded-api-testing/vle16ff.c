#include <stdint.h>
#include "rvv-v0p10-compatible-headers/overloaded-non-policy.h"
#include "rvv-v0p10-compatible-headers/overloaded-policy.h"
#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
vfloat16mf4_t test_vle16ff_v_f16mf4_tu(vfloat16mf4_t maskedoff, const float16_t *base, size_t *new_vl, size_t vl) {
  return vle16ff_tu(maskedoff, base, new_vl, vl);
}

vfloat16mf2_t test_vle16ff_v_f16mf2_tu(vfloat16mf2_t maskedoff, const float16_t *base, size_t *new_vl, size_t vl) {
  return vle16ff_tu(maskedoff, base, new_vl, vl);
}

vfloat16m1_t test_vle16ff_v_f16m1_tu(vfloat16m1_t maskedoff, const float16_t *base, size_t *new_vl, size_t vl) {
  return vle16ff_tu(maskedoff, base, new_vl, vl);
}

vfloat16m2_t test_vle16ff_v_f16m2_tu(vfloat16m2_t maskedoff, const float16_t *base, size_t *new_vl, size_t vl) {
  return vle16ff_tu(maskedoff, base, new_vl, vl);
}

vfloat16m4_t test_vle16ff_v_f16m4_tu(vfloat16m4_t maskedoff, const float16_t *base, size_t *new_vl, size_t vl) {
  return vle16ff_tu(maskedoff, base, new_vl, vl);
}

vfloat16m8_t test_vle16ff_v_f16m8_tu(vfloat16m8_t maskedoff, const float16_t *base, size_t *new_vl, size_t vl) {
  return vle16ff_tu(maskedoff, base, new_vl, vl);
}

vint16mf4_t test_vle16ff_v_i16mf4_tu(vint16mf4_t maskedoff, const int16_t *base, size_t *new_vl, size_t vl) {
  return vle16ff_tu(maskedoff, base, new_vl, vl);
}

vint16mf2_t test_vle16ff_v_i16mf2_tu(vint16mf2_t maskedoff, const int16_t *base, size_t *new_vl, size_t vl) {
  return vle16ff_tu(maskedoff, base, new_vl, vl);
}

vint16m1_t test_vle16ff_v_i16m1_tu(vint16m1_t maskedoff, const int16_t *base, size_t *new_vl, size_t vl) {
  return vle16ff_tu(maskedoff, base, new_vl, vl);
}

vint16m2_t test_vle16ff_v_i16m2_tu(vint16m2_t maskedoff, const int16_t *base, size_t *new_vl, size_t vl) {
  return vle16ff_tu(maskedoff, base, new_vl, vl);
}

vint16m4_t test_vle16ff_v_i16m4_tu(vint16m4_t maskedoff, const int16_t *base, size_t *new_vl, size_t vl) {
  return vle16ff_tu(maskedoff, base, new_vl, vl);
}

vint16m8_t test_vle16ff_v_i16m8_tu(vint16m8_t maskedoff, const int16_t *base, size_t *new_vl, size_t vl) {
  return vle16ff_tu(maskedoff, base, new_vl, vl);
}

vuint16mf4_t test_vle16ff_v_u16mf4_tu(vuint16mf4_t maskedoff, const uint16_t *base, size_t *new_vl, size_t vl) {
  return vle16ff_tu(maskedoff, base, new_vl, vl);
}

vuint16mf2_t test_vle16ff_v_u16mf2_tu(vuint16mf2_t maskedoff, const uint16_t *base, size_t *new_vl, size_t vl) {
  return vle16ff_tu(maskedoff, base, new_vl, vl);
}

vuint16m1_t test_vle16ff_v_u16m1_tu(vuint16m1_t maskedoff, const uint16_t *base, size_t *new_vl, size_t vl) {
  return vle16ff_tu(maskedoff, base, new_vl, vl);
}

vuint16m2_t test_vle16ff_v_u16m2_tu(vuint16m2_t maskedoff, const uint16_t *base, size_t *new_vl, size_t vl) {
  return vle16ff_tu(maskedoff, base, new_vl, vl);
}

vuint16m4_t test_vle16ff_v_u16m4_tu(vuint16m4_t maskedoff, const uint16_t *base, size_t *new_vl, size_t vl) {
  return vle16ff_tu(maskedoff, base, new_vl, vl);
}

vuint16m8_t test_vle16ff_v_u16m8_tu(vuint16m8_t maskedoff, const uint16_t *base, size_t *new_vl, size_t vl) {
  return vle16ff_tu(maskedoff, base, new_vl, vl);
}

vfloat16mf4_t test_vle16ff_v_f16mf4_tuma(vbool64_t mask, vfloat16mf4_t maskedoff, const float16_t *base, size_t *new_vl, size_t vl) {
  return vle16ff_tuma(mask, maskedoff, base, new_vl, vl);
}

vfloat16mf2_t test_vle16ff_v_f16mf2_tuma(vbool32_t mask, vfloat16mf2_t maskedoff, const float16_t *base, size_t *new_vl, size_t vl) {
  return vle16ff_tuma(mask, maskedoff, base, new_vl, vl);
}

vfloat16m1_t test_vle16ff_v_f16m1_tuma(vbool16_t mask, vfloat16m1_t maskedoff, const float16_t *base, size_t *new_vl, size_t vl) {
  return vle16ff_tuma(mask, maskedoff, base, new_vl, vl);
}

vfloat16m2_t test_vle16ff_v_f16m2_tuma(vbool8_t mask, vfloat16m2_t maskedoff, const float16_t *base, size_t *new_vl, size_t vl) {
  return vle16ff_tuma(mask, maskedoff, base, new_vl, vl);
}

vfloat16m4_t test_vle16ff_v_f16m4_tuma(vbool4_t mask, vfloat16m4_t maskedoff, const float16_t *base, size_t *new_vl, size_t vl) {
  return vle16ff_tuma(mask, maskedoff, base, new_vl, vl);
}

vfloat16m8_t test_vle16ff_v_f16m8_tuma(vbool2_t mask, vfloat16m8_t maskedoff, const float16_t *base, size_t *new_vl, size_t vl) {
  return vle16ff_tuma(mask, maskedoff, base, new_vl, vl);
}

vint16mf4_t test_vle16ff_v_i16mf4_tuma(vbool64_t mask, vint16mf4_t maskedoff, const int16_t *base, size_t *new_vl, size_t vl) {
  return vle16ff_tuma(mask, maskedoff, base, new_vl, vl);
}

vint16mf2_t test_vle16ff_v_i16mf2_tuma(vbool32_t mask, vint16mf2_t maskedoff, const int16_t *base, size_t *new_vl, size_t vl) {
  return vle16ff_tuma(mask, maskedoff, base, new_vl, vl);
}

vint16m1_t test_vle16ff_v_i16m1_tuma(vbool16_t mask, vint16m1_t maskedoff, const int16_t *base, size_t *new_vl, size_t vl) {
  return vle16ff_tuma(mask, maskedoff, base, new_vl, vl);
}

vint16m2_t test_vle16ff_v_i16m2_tuma(vbool8_t mask, vint16m2_t maskedoff, const int16_t *base, size_t *new_vl, size_t vl) {
  return vle16ff_tuma(mask, maskedoff, base, new_vl, vl);
}

vint16m4_t test_vle16ff_v_i16m4_tuma(vbool4_t mask, vint16m4_t maskedoff, const int16_t *base, size_t *new_vl, size_t vl) {
  return vle16ff_tuma(mask, maskedoff, base, new_vl, vl);
}

vint16m8_t test_vle16ff_v_i16m8_tuma(vbool2_t mask, vint16m8_t maskedoff, const int16_t *base, size_t *new_vl, size_t vl) {
  return vle16ff_tuma(mask, maskedoff, base, new_vl, vl);
}

vuint16mf4_t test_vle16ff_v_u16mf4_tuma(vbool64_t mask, vuint16mf4_t maskedoff, const uint16_t *base, size_t *new_vl, size_t vl) {
  return vle16ff_tuma(mask, maskedoff, base, new_vl, vl);
}

vuint16mf2_t test_vle16ff_v_u16mf2_tuma(vbool32_t mask, vuint16mf2_t maskedoff, const uint16_t *base, size_t *new_vl, size_t vl) {
  return vle16ff_tuma(mask, maskedoff, base, new_vl, vl);
}

vuint16m1_t test_vle16ff_v_u16m1_tuma(vbool16_t mask, vuint16m1_t maskedoff, const uint16_t *base, size_t *new_vl, size_t vl) {
  return vle16ff_tuma(mask, maskedoff, base, new_vl, vl);
}

vuint16m2_t test_vle16ff_v_u16m2_tuma(vbool8_t mask, vuint16m2_t maskedoff, const uint16_t *base, size_t *new_vl, size_t vl) {
  return vle16ff_tuma(mask, maskedoff, base, new_vl, vl);
}

vuint16m4_t test_vle16ff_v_u16m4_tuma(vbool4_t mask, vuint16m4_t maskedoff, const uint16_t *base, size_t *new_vl, size_t vl) {
  return vle16ff_tuma(mask, maskedoff, base, new_vl, vl);
}

vuint16m8_t test_vle16ff_v_u16m8_tuma(vbool2_t mask, vuint16m8_t maskedoff, const uint16_t *base, size_t *new_vl, size_t vl) {
  return vle16ff_tuma(mask, maskedoff, base, new_vl, vl);
}

vfloat16mf4_t test_vle16ff_v_f16mf4_tumu(vbool64_t mask, vfloat16mf4_t maskedoff, const float16_t *base, size_t *new_vl, size_t vl) {
  return vle16ff_tumu(mask, maskedoff, base, new_vl, vl);
}

vfloat16mf2_t test_vle16ff_v_f16mf2_tumu(vbool32_t mask, vfloat16mf2_t maskedoff, const float16_t *base, size_t *new_vl, size_t vl) {
  return vle16ff_tumu(mask, maskedoff, base, new_vl, vl);
}

vfloat16m1_t test_vle16ff_v_f16m1_tumu(vbool16_t mask, vfloat16m1_t maskedoff, const float16_t *base, size_t *new_vl, size_t vl) {
  return vle16ff_tumu(mask, maskedoff, base, new_vl, vl);
}

vfloat16m2_t test_vle16ff_v_f16m2_tumu(vbool8_t mask, vfloat16m2_t maskedoff, const float16_t *base, size_t *new_vl, size_t vl) {
  return vle16ff_tumu(mask, maskedoff, base, new_vl, vl);
}

vfloat16m4_t test_vle16ff_v_f16m4_tumu(vbool4_t mask, vfloat16m4_t maskedoff, const float16_t *base, size_t *new_vl, size_t vl) {
  return vle16ff_tumu(mask, maskedoff, base, new_vl, vl);
}

vfloat16m8_t test_vle16ff_v_f16m8_tumu(vbool2_t mask, vfloat16m8_t maskedoff, const float16_t *base, size_t *new_vl, size_t vl) {
  return vle16ff_tumu(mask, maskedoff, base, new_vl, vl);
}

vint16mf4_t test_vle16ff_v_i16mf4_tumu(vbool64_t mask, vint16mf4_t maskedoff, const int16_t *base, size_t *new_vl, size_t vl) {
  return vle16ff_tumu(mask, maskedoff, base, new_vl, vl);
}

vint16mf2_t test_vle16ff_v_i16mf2_tumu(vbool32_t mask, vint16mf2_t maskedoff, const int16_t *base, size_t *new_vl, size_t vl) {
  return vle16ff_tumu(mask, maskedoff, base, new_vl, vl);
}

vint16m1_t test_vle16ff_v_i16m1_tumu(vbool16_t mask, vint16m1_t maskedoff, const int16_t *base, size_t *new_vl, size_t vl) {
  return vle16ff_tumu(mask, maskedoff, base, new_vl, vl);
}

vint16m2_t test_vle16ff_v_i16m2_tumu(vbool8_t mask, vint16m2_t maskedoff, const int16_t *base, size_t *new_vl, size_t vl) {
  return vle16ff_tumu(mask, maskedoff, base, new_vl, vl);
}

vint16m4_t test_vle16ff_v_i16m4_tumu(vbool4_t mask, vint16m4_t maskedoff, const int16_t *base, size_t *new_vl, size_t vl) {
  return vle16ff_tumu(mask, maskedoff, base, new_vl, vl);
}

vint16m8_t test_vle16ff_v_i16m8_tumu(vbool2_t mask, vint16m8_t maskedoff, const int16_t *base, size_t *new_vl, size_t vl) {
  return vle16ff_tumu(mask, maskedoff, base, new_vl, vl);
}

vuint16mf4_t test_vle16ff_v_u16mf4_tumu(vbool64_t mask, vuint16mf4_t maskedoff, const uint16_t *base, size_t *new_vl, size_t vl) {
  return vle16ff_tumu(mask, maskedoff, base, new_vl, vl);
}

vuint16mf2_t test_vle16ff_v_u16mf2_tumu(vbool32_t mask, vuint16mf2_t maskedoff, const uint16_t *base, size_t *new_vl, size_t vl) {
  return vle16ff_tumu(mask, maskedoff, base, new_vl, vl);
}

vuint16m1_t test_vle16ff_v_u16m1_tumu(vbool16_t mask, vuint16m1_t maskedoff, const uint16_t *base, size_t *new_vl, size_t vl) {
  return vle16ff_tumu(mask, maskedoff, base, new_vl, vl);
}

vuint16m2_t test_vle16ff_v_u16m2_tumu(vbool8_t mask, vuint16m2_t maskedoff, const uint16_t *base, size_t *new_vl, size_t vl) {
  return vle16ff_tumu(mask, maskedoff, base, new_vl, vl);
}

vuint16m4_t test_vle16ff_v_u16m4_tumu(vbool4_t mask, vuint16m4_t maskedoff, const uint16_t *base, size_t *new_vl, size_t vl) {
  return vle16ff_tumu(mask, maskedoff, base, new_vl, vl);
}

vuint16m8_t test_vle16ff_v_u16m8_tumu(vbool2_t mask, vuint16m8_t maskedoff, const uint16_t *base, size_t *new_vl, size_t vl) {
  return vle16ff_tumu(mask, maskedoff, base, new_vl, vl);
}

vfloat16mf4_t test_vle16ff_v_f16mf4_tamu(vbool64_t mask, vfloat16mf4_t maskedoff, const float16_t *base, size_t *new_vl, size_t vl) {
  return vle16ff_tamu(mask, maskedoff, base, new_vl, vl);
}

vfloat16mf2_t test_vle16ff_v_f16mf2_tamu(vbool32_t mask, vfloat16mf2_t maskedoff, const float16_t *base, size_t *new_vl, size_t vl) {
  return vle16ff_tamu(mask, maskedoff, base, new_vl, vl);
}

vfloat16m1_t test_vle16ff_v_f16m1_tamu(vbool16_t mask, vfloat16m1_t maskedoff, const float16_t *base, size_t *new_vl, size_t vl) {
  return vle16ff_tamu(mask, maskedoff, base, new_vl, vl);
}

vfloat16m2_t test_vle16ff_v_f16m2_tamu(vbool8_t mask, vfloat16m2_t maskedoff, const float16_t *base, size_t *new_vl, size_t vl) {
  return vle16ff_tamu(mask, maskedoff, base, new_vl, vl);
}

vfloat16m4_t test_vle16ff_v_f16m4_tamu(vbool4_t mask, vfloat16m4_t maskedoff, const float16_t *base, size_t *new_vl, size_t vl) {
  return vle16ff_tamu(mask, maskedoff, base, new_vl, vl);
}

vfloat16m8_t test_vle16ff_v_f16m8_tamu(vbool2_t mask, vfloat16m8_t maskedoff, const float16_t *base, size_t *new_vl, size_t vl) {
  return vle16ff_tamu(mask, maskedoff, base, new_vl, vl);
}

vint16mf4_t test_vle16ff_v_i16mf4_tamu(vbool64_t mask, vint16mf4_t maskedoff, const int16_t *base, size_t *new_vl, size_t vl) {
  return vle16ff_tamu(mask, maskedoff, base, new_vl, vl);
}

vint16mf2_t test_vle16ff_v_i16mf2_tamu(vbool32_t mask, vint16mf2_t maskedoff, const int16_t *base, size_t *new_vl, size_t vl) {
  return vle16ff_tamu(mask, maskedoff, base, new_vl, vl);
}

vint16m1_t test_vle16ff_v_i16m1_tamu(vbool16_t mask, vint16m1_t maskedoff, const int16_t *base, size_t *new_vl, size_t vl) {
  return vle16ff_tamu(mask, maskedoff, base, new_vl, vl);
}

vint16m2_t test_vle16ff_v_i16m2_tamu(vbool8_t mask, vint16m2_t maskedoff, const int16_t *base, size_t *new_vl, size_t vl) {
  return vle16ff_tamu(mask, maskedoff, base, new_vl, vl);
}

vint16m4_t test_vle16ff_v_i16m4_tamu(vbool4_t mask, vint16m4_t maskedoff, const int16_t *base, size_t *new_vl, size_t vl) {
  return vle16ff_tamu(mask, maskedoff, base, new_vl, vl);
}

vint16m8_t test_vle16ff_v_i16m8_tamu(vbool2_t mask, vint16m8_t maskedoff, const int16_t *base, size_t *new_vl, size_t vl) {
  return vle16ff_tamu(mask, maskedoff, base, new_vl, vl);
}

vuint16mf4_t test_vle16ff_v_u16mf4_tamu(vbool64_t mask, vuint16mf4_t maskedoff, const uint16_t *base, size_t *new_vl, size_t vl) {
  return vle16ff_tamu(mask, maskedoff, base, new_vl, vl);
}

vuint16mf2_t test_vle16ff_v_u16mf2_tamu(vbool32_t mask, vuint16mf2_t maskedoff, const uint16_t *base, size_t *new_vl, size_t vl) {
  return vle16ff_tamu(mask, maskedoff, base, new_vl, vl);
}

vuint16m1_t test_vle16ff_v_u16m1_tamu(vbool16_t mask, vuint16m1_t maskedoff, const uint16_t *base, size_t *new_vl, size_t vl) {
  return vle16ff_tamu(mask, maskedoff, base, new_vl, vl);
}

vuint16m2_t test_vle16ff_v_u16m2_tamu(vbool8_t mask, vuint16m2_t maskedoff, const uint16_t *base, size_t *new_vl, size_t vl) {
  return vle16ff_tamu(mask, maskedoff, base, new_vl, vl);
}

vuint16m4_t test_vle16ff_v_u16m4_tamu(vbool4_t mask, vuint16m4_t maskedoff, const uint16_t *base, size_t *new_vl, size_t vl) {
  return vle16ff_tamu(mask, maskedoff, base, new_vl, vl);
}

vuint16m8_t test_vle16ff_v_u16m8_tamu(vbool2_t mask, vuint16m8_t maskedoff, const uint16_t *base, size_t *new_vl, size_t vl) {
  return vle16ff_tamu(mask, maskedoff, base, new_vl, vl);
}

