#include <stdint.h>
#include "rvv-v0p10-compatible-headers/non-policy.h"
#include "rvv-v0p10-compatible-headers/policy.h"
#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
vfloat16mf4_t test_vlse16_v_f16mf4_tu(vfloat16mf4_t maskedoff, const float16_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse16_v_f16mf4_tu(maskedoff, base, bstride, vl);
}

vfloat16mf2_t test_vlse16_v_f16mf2_tu(vfloat16mf2_t maskedoff, const float16_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse16_v_f16mf2_tu(maskedoff, base, bstride, vl);
}

vfloat16m1_t test_vlse16_v_f16m1_tu(vfloat16m1_t maskedoff, const float16_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse16_v_f16m1_tu(maskedoff, base, bstride, vl);
}

vfloat16m2_t test_vlse16_v_f16m2_tu(vfloat16m2_t maskedoff, const float16_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse16_v_f16m2_tu(maskedoff, base, bstride, vl);
}

vfloat16m4_t test_vlse16_v_f16m4_tu(vfloat16m4_t maskedoff, const float16_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse16_v_f16m4_tu(maskedoff, base, bstride, vl);
}

vfloat16m8_t test_vlse16_v_f16m8_tu(vfloat16m8_t maskedoff, const float16_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse16_v_f16m8_tu(maskedoff, base, bstride, vl);
}

vint16mf4_t test_vlse16_v_i16mf4_tu(vint16mf4_t maskedoff, const int16_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse16_v_i16mf4_tu(maskedoff, base, bstride, vl);
}

vint16mf2_t test_vlse16_v_i16mf2_tu(vint16mf2_t maskedoff, const int16_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse16_v_i16mf2_tu(maskedoff, base, bstride, vl);
}

vint16m1_t test_vlse16_v_i16m1_tu(vint16m1_t maskedoff, const int16_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse16_v_i16m1_tu(maskedoff, base, bstride, vl);
}

vint16m2_t test_vlse16_v_i16m2_tu(vint16m2_t maskedoff, const int16_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse16_v_i16m2_tu(maskedoff, base, bstride, vl);
}

vint16m4_t test_vlse16_v_i16m4_tu(vint16m4_t maskedoff, const int16_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse16_v_i16m4_tu(maskedoff, base, bstride, vl);
}

vint16m8_t test_vlse16_v_i16m8_tu(vint16m8_t maskedoff, const int16_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse16_v_i16m8_tu(maskedoff, base, bstride, vl);
}

vuint16mf4_t test_vlse16_v_u16mf4_tu(vuint16mf4_t maskedoff, const uint16_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse16_v_u16mf4_tu(maskedoff, base, bstride, vl);
}

vuint16mf2_t test_vlse16_v_u16mf2_tu(vuint16mf2_t maskedoff, const uint16_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse16_v_u16mf2_tu(maskedoff, base, bstride, vl);
}

vuint16m1_t test_vlse16_v_u16m1_tu(vuint16m1_t maskedoff, const uint16_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse16_v_u16m1_tu(maskedoff, base, bstride, vl);
}

vuint16m2_t test_vlse16_v_u16m2_tu(vuint16m2_t maskedoff, const uint16_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse16_v_u16m2_tu(maskedoff, base, bstride, vl);
}

vuint16m4_t test_vlse16_v_u16m4_tu(vuint16m4_t maskedoff, const uint16_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse16_v_u16m4_tu(maskedoff, base, bstride, vl);
}

vuint16m8_t test_vlse16_v_u16m8_tu(vuint16m8_t maskedoff, const uint16_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse16_v_u16m8_tu(maskedoff, base, bstride, vl);
}

vfloat16mf4_t test_vlse16_v_f16mf4_ta(const float16_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse16_v_f16mf4_ta(base, bstride, vl);
}

vfloat16mf2_t test_vlse16_v_f16mf2_ta(const float16_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse16_v_f16mf2_ta(base, bstride, vl);
}

vfloat16m1_t test_vlse16_v_f16m1_ta(const float16_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse16_v_f16m1_ta(base, bstride, vl);
}

vfloat16m2_t test_vlse16_v_f16m2_ta(const float16_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse16_v_f16m2_ta(base, bstride, vl);
}

vfloat16m4_t test_vlse16_v_f16m4_ta(const float16_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse16_v_f16m4_ta(base, bstride, vl);
}

vfloat16m8_t test_vlse16_v_f16m8_ta(const float16_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse16_v_f16m8_ta(base, bstride, vl);
}

vint16mf4_t test_vlse16_v_i16mf4_ta(const int16_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse16_v_i16mf4_ta(base, bstride, vl);
}

vint16mf2_t test_vlse16_v_i16mf2_ta(const int16_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse16_v_i16mf2_ta(base, bstride, vl);
}

vint16m1_t test_vlse16_v_i16m1_ta(const int16_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse16_v_i16m1_ta(base, bstride, vl);
}

vint16m2_t test_vlse16_v_i16m2_ta(const int16_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse16_v_i16m2_ta(base, bstride, vl);
}

vint16m4_t test_vlse16_v_i16m4_ta(const int16_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse16_v_i16m4_ta(base, bstride, vl);
}

vint16m8_t test_vlse16_v_i16m8_ta(const int16_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse16_v_i16m8_ta(base, bstride, vl);
}

vuint16mf4_t test_vlse16_v_u16mf4_ta(const uint16_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse16_v_u16mf4_ta(base, bstride, vl);
}

vuint16mf2_t test_vlse16_v_u16mf2_ta(const uint16_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse16_v_u16mf2_ta(base, bstride, vl);
}

vuint16m1_t test_vlse16_v_u16m1_ta(const uint16_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse16_v_u16m1_ta(base, bstride, vl);
}

vuint16m2_t test_vlse16_v_u16m2_ta(const uint16_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse16_v_u16m2_ta(base, bstride, vl);
}

vuint16m4_t test_vlse16_v_u16m4_ta(const uint16_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse16_v_u16m4_ta(base, bstride, vl);
}

vuint16m8_t test_vlse16_v_u16m8_ta(const uint16_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse16_v_u16m8_ta(base, bstride, vl);
}

vfloat16mf4_t test_vlse16_v_f16mf4_tuma(vbool64_t mask, vfloat16mf4_t maskedoff, const float16_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse16_v_f16mf4_tuma(mask, maskedoff, base, bstride, vl);
}

vfloat16mf2_t test_vlse16_v_f16mf2_tuma(vbool32_t mask, vfloat16mf2_t maskedoff, const float16_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse16_v_f16mf2_tuma(mask, maskedoff, base, bstride, vl);
}

vfloat16m1_t test_vlse16_v_f16m1_tuma(vbool16_t mask, vfloat16m1_t maskedoff, const float16_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse16_v_f16m1_tuma(mask, maskedoff, base, bstride, vl);
}

vfloat16m2_t test_vlse16_v_f16m2_tuma(vbool8_t mask, vfloat16m2_t maskedoff, const float16_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse16_v_f16m2_tuma(mask, maskedoff, base, bstride, vl);
}

vfloat16m4_t test_vlse16_v_f16m4_tuma(vbool4_t mask, vfloat16m4_t maskedoff, const float16_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse16_v_f16m4_tuma(mask, maskedoff, base, bstride, vl);
}

vfloat16m8_t test_vlse16_v_f16m8_tuma(vbool2_t mask, vfloat16m8_t maskedoff, const float16_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse16_v_f16m8_tuma(mask, maskedoff, base, bstride, vl);
}

vint16mf4_t test_vlse16_v_i16mf4_tuma(vbool64_t mask, vint16mf4_t maskedoff, const int16_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse16_v_i16mf4_tuma(mask, maskedoff, base, bstride, vl);
}

vint16mf2_t test_vlse16_v_i16mf2_tuma(vbool32_t mask, vint16mf2_t maskedoff, const int16_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse16_v_i16mf2_tuma(mask, maskedoff, base, bstride, vl);
}

vint16m1_t test_vlse16_v_i16m1_tuma(vbool16_t mask, vint16m1_t maskedoff, const int16_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse16_v_i16m1_tuma(mask, maskedoff, base, bstride, vl);
}

vint16m2_t test_vlse16_v_i16m2_tuma(vbool8_t mask, vint16m2_t maskedoff, const int16_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse16_v_i16m2_tuma(mask, maskedoff, base, bstride, vl);
}

vint16m4_t test_vlse16_v_i16m4_tuma(vbool4_t mask, vint16m4_t maskedoff, const int16_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse16_v_i16m4_tuma(mask, maskedoff, base, bstride, vl);
}

vint16m8_t test_vlse16_v_i16m8_tuma(vbool2_t mask, vint16m8_t maskedoff, const int16_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse16_v_i16m8_tuma(mask, maskedoff, base, bstride, vl);
}

vuint16mf4_t test_vlse16_v_u16mf4_tuma(vbool64_t mask, vuint16mf4_t maskedoff, const uint16_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse16_v_u16mf4_tuma(mask, maskedoff, base, bstride, vl);
}

vuint16mf2_t test_vlse16_v_u16mf2_tuma(vbool32_t mask, vuint16mf2_t maskedoff, const uint16_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse16_v_u16mf2_tuma(mask, maskedoff, base, bstride, vl);
}

vuint16m1_t test_vlse16_v_u16m1_tuma(vbool16_t mask, vuint16m1_t maskedoff, const uint16_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse16_v_u16m1_tuma(mask, maskedoff, base, bstride, vl);
}

vuint16m2_t test_vlse16_v_u16m2_tuma(vbool8_t mask, vuint16m2_t maskedoff, const uint16_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse16_v_u16m2_tuma(mask, maskedoff, base, bstride, vl);
}

vuint16m4_t test_vlse16_v_u16m4_tuma(vbool4_t mask, vuint16m4_t maskedoff, const uint16_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse16_v_u16m4_tuma(mask, maskedoff, base, bstride, vl);
}

vuint16m8_t test_vlse16_v_u16m8_tuma(vbool2_t mask, vuint16m8_t maskedoff, const uint16_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse16_v_u16m8_tuma(mask, maskedoff, base, bstride, vl);
}

vfloat16mf4_t test_vlse16_v_f16mf4_tumu(vbool64_t mask, vfloat16mf4_t maskedoff, const float16_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse16_v_f16mf4_tumu(mask, maskedoff, base, bstride, vl);
}

vfloat16mf2_t test_vlse16_v_f16mf2_tumu(vbool32_t mask, vfloat16mf2_t maskedoff, const float16_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse16_v_f16mf2_tumu(mask, maskedoff, base, bstride, vl);
}

vfloat16m1_t test_vlse16_v_f16m1_tumu(vbool16_t mask, vfloat16m1_t maskedoff, const float16_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse16_v_f16m1_tumu(mask, maskedoff, base, bstride, vl);
}

vfloat16m2_t test_vlse16_v_f16m2_tumu(vbool8_t mask, vfloat16m2_t maskedoff, const float16_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse16_v_f16m2_tumu(mask, maskedoff, base, bstride, vl);
}

vfloat16m4_t test_vlse16_v_f16m4_tumu(vbool4_t mask, vfloat16m4_t maskedoff, const float16_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse16_v_f16m4_tumu(mask, maskedoff, base, bstride, vl);
}

vfloat16m8_t test_vlse16_v_f16m8_tumu(vbool2_t mask, vfloat16m8_t maskedoff, const float16_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse16_v_f16m8_tumu(mask, maskedoff, base, bstride, vl);
}

vint16mf4_t test_vlse16_v_i16mf4_tumu(vbool64_t mask, vint16mf4_t maskedoff, const int16_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse16_v_i16mf4_tumu(mask, maskedoff, base, bstride, vl);
}

vint16mf2_t test_vlse16_v_i16mf2_tumu(vbool32_t mask, vint16mf2_t maskedoff, const int16_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse16_v_i16mf2_tumu(mask, maskedoff, base, bstride, vl);
}

vint16m1_t test_vlse16_v_i16m1_tumu(vbool16_t mask, vint16m1_t maskedoff, const int16_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse16_v_i16m1_tumu(mask, maskedoff, base, bstride, vl);
}

vint16m2_t test_vlse16_v_i16m2_tumu(vbool8_t mask, vint16m2_t maskedoff, const int16_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse16_v_i16m2_tumu(mask, maskedoff, base, bstride, vl);
}

vint16m4_t test_vlse16_v_i16m4_tumu(vbool4_t mask, vint16m4_t maskedoff, const int16_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse16_v_i16m4_tumu(mask, maskedoff, base, bstride, vl);
}

vint16m8_t test_vlse16_v_i16m8_tumu(vbool2_t mask, vint16m8_t maskedoff, const int16_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse16_v_i16m8_tumu(mask, maskedoff, base, bstride, vl);
}

vuint16mf4_t test_vlse16_v_u16mf4_tumu(vbool64_t mask, vuint16mf4_t maskedoff, const uint16_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse16_v_u16mf4_tumu(mask, maskedoff, base, bstride, vl);
}

vuint16mf2_t test_vlse16_v_u16mf2_tumu(vbool32_t mask, vuint16mf2_t maskedoff, const uint16_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse16_v_u16mf2_tumu(mask, maskedoff, base, bstride, vl);
}

vuint16m1_t test_vlse16_v_u16m1_tumu(vbool16_t mask, vuint16m1_t maskedoff, const uint16_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse16_v_u16m1_tumu(mask, maskedoff, base, bstride, vl);
}

vuint16m2_t test_vlse16_v_u16m2_tumu(vbool8_t mask, vuint16m2_t maskedoff, const uint16_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse16_v_u16m2_tumu(mask, maskedoff, base, bstride, vl);
}

vuint16m4_t test_vlse16_v_u16m4_tumu(vbool4_t mask, vuint16m4_t maskedoff, const uint16_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse16_v_u16m4_tumu(mask, maskedoff, base, bstride, vl);
}

vuint16m8_t test_vlse16_v_u16m8_tumu(vbool2_t mask, vuint16m8_t maskedoff, const uint16_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse16_v_u16m8_tumu(mask, maskedoff, base, bstride, vl);
}

vfloat16mf4_t test_vlse16_v_f16mf4_tama(vbool64_t mask, const float16_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse16_v_f16mf4_tama(mask, base, bstride, vl);
}

vfloat16mf2_t test_vlse16_v_f16mf2_tama(vbool32_t mask, const float16_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse16_v_f16mf2_tama(mask, base, bstride, vl);
}

vfloat16m1_t test_vlse16_v_f16m1_tama(vbool16_t mask, const float16_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse16_v_f16m1_tama(mask, base, bstride, vl);
}

vfloat16m2_t test_vlse16_v_f16m2_tama(vbool8_t mask, const float16_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse16_v_f16m2_tama(mask, base, bstride, vl);
}

vfloat16m4_t test_vlse16_v_f16m4_tama(vbool4_t mask, const float16_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse16_v_f16m4_tama(mask, base, bstride, vl);
}

vfloat16m8_t test_vlse16_v_f16m8_tama(vbool2_t mask, const float16_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse16_v_f16m8_tama(mask, base, bstride, vl);
}

vint16mf4_t test_vlse16_v_i16mf4_tama(vbool64_t mask, const int16_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse16_v_i16mf4_tama(mask, base, bstride, vl);
}

vint16mf2_t test_vlse16_v_i16mf2_tama(vbool32_t mask, const int16_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse16_v_i16mf2_tama(mask, base, bstride, vl);
}

vint16m1_t test_vlse16_v_i16m1_tama(vbool16_t mask, const int16_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse16_v_i16m1_tama(mask, base, bstride, vl);
}

vint16m2_t test_vlse16_v_i16m2_tama(vbool8_t mask, const int16_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse16_v_i16m2_tama(mask, base, bstride, vl);
}

vint16m4_t test_vlse16_v_i16m4_tama(vbool4_t mask, const int16_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse16_v_i16m4_tama(mask, base, bstride, vl);
}

vint16m8_t test_vlse16_v_i16m8_tama(vbool2_t mask, const int16_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse16_v_i16m8_tama(mask, base, bstride, vl);
}

vuint16mf4_t test_vlse16_v_u16mf4_tama(vbool64_t mask, const uint16_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse16_v_u16mf4_tama(mask, base, bstride, vl);
}

vuint16mf2_t test_vlse16_v_u16mf2_tama(vbool32_t mask, const uint16_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse16_v_u16mf2_tama(mask, base, bstride, vl);
}

vuint16m1_t test_vlse16_v_u16m1_tama(vbool16_t mask, const uint16_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse16_v_u16m1_tama(mask, base, bstride, vl);
}

vuint16m2_t test_vlse16_v_u16m2_tama(vbool8_t mask, const uint16_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse16_v_u16m2_tama(mask, base, bstride, vl);
}

vuint16m4_t test_vlse16_v_u16m4_tama(vbool4_t mask, const uint16_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse16_v_u16m4_tama(mask, base, bstride, vl);
}

vuint16m8_t test_vlse16_v_u16m8_tama(vbool2_t mask, const uint16_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse16_v_u16m8_tama(mask, base, bstride, vl);
}

vfloat16mf4_t test_vlse16_v_f16mf4_tamu(vbool64_t mask, vfloat16mf4_t maskedoff, const float16_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse16_v_f16mf4_tamu(mask, maskedoff, base, bstride, vl);
}

vfloat16mf2_t test_vlse16_v_f16mf2_tamu(vbool32_t mask, vfloat16mf2_t maskedoff, const float16_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse16_v_f16mf2_tamu(mask, maskedoff, base, bstride, vl);
}

vfloat16m1_t test_vlse16_v_f16m1_tamu(vbool16_t mask, vfloat16m1_t maskedoff, const float16_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse16_v_f16m1_tamu(mask, maskedoff, base, bstride, vl);
}

vfloat16m2_t test_vlse16_v_f16m2_tamu(vbool8_t mask, vfloat16m2_t maskedoff, const float16_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse16_v_f16m2_tamu(mask, maskedoff, base, bstride, vl);
}

vfloat16m4_t test_vlse16_v_f16m4_tamu(vbool4_t mask, vfloat16m4_t maskedoff, const float16_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse16_v_f16m4_tamu(mask, maskedoff, base, bstride, vl);
}

vfloat16m8_t test_vlse16_v_f16m8_tamu(vbool2_t mask, vfloat16m8_t maskedoff, const float16_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse16_v_f16m8_tamu(mask, maskedoff, base, bstride, vl);
}

vint16mf4_t test_vlse16_v_i16mf4_tamu(vbool64_t mask, vint16mf4_t maskedoff, const int16_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse16_v_i16mf4_tamu(mask, maskedoff, base, bstride, vl);
}

vint16mf2_t test_vlse16_v_i16mf2_tamu(vbool32_t mask, vint16mf2_t maskedoff, const int16_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse16_v_i16mf2_tamu(mask, maskedoff, base, bstride, vl);
}

vint16m1_t test_vlse16_v_i16m1_tamu(vbool16_t mask, vint16m1_t maskedoff, const int16_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse16_v_i16m1_tamu(mask, maskedoff, base, bstride, vl);
}

vint16m2_t test_vlse16_v_i16m2_tamu(vbool8_t mask, vint16m2_t maskedoff, const int16_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse16_v_i16m2_tamu(mask, maskedoff, base, bstride, vl);
}

vint16m4_t test_vlse16_v_i16m4_tamu(vbool4_t mask, vint16m4_t maskedoff, const int16_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse16_v_i16m4_tamu(mask, maskedoff, base, bstride, vl);
}

vint16m8_t test_vlse16_v_i16m8_tamu(vbool2_t mask, vint16m8_t maskedoff, const int16_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse16_v_i16m8_tamu(mask, maskedoff, base, bstride, vl);
}

vuint16mf4_t test_vlse16_v_u16mf4_tamu(vbool64_t mask, vuint16mf4_t maskedoff, const uint16_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse16_v_u16mf4_tamu(mask, maskedoff, base, bstride, vl);
}

vuint16mf2_t test_vlse16_v_u16mf2_tamu(vbool32_t mask, vuint16mf2_t maskedoff, const uint16_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse16_v_u16mf2_tamu(mask, maskedoff, base, bstride, vl);
}

vuint16m1_t test_vlse16_v_u16m1_tamu(vbool16_t mask, vuint16m1_t maskedoff, const uint16_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse16_v_u16m1_tamu(mask, maskedoff, base, bstride, vl);
}

vuint16m2_t test_vlse16_v_u16m2_tamu(vbool8_t mask, vuint16m2_t maskedoff, const uint16_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse16_v_u16m2_tamu(mask, maskedoff, base, bstride, vl);
}

vuint16m4_t test_vlse16_v_u16m4_tamu(vbool4_t mask, vuint16m4_t maskedoff, const uint16_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse16_v_u16m4_tamu(mask, maskedoff, base, bstride, vl);
}

vuint16m8_t test_vlse16_v_u16m8_tamu(vbool2_t mask, vuint16m8_t maskedoff, const uint16_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse16_v_u16m8_tamu(mask, maskedoff, base, bstride, vl);
}

