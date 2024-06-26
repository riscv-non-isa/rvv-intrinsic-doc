#include <stdint.h>
#include "rvv-v0p10-compatible-headers/non-policy.h"
#include "rvv-v0p10-compatible-headers/policy.h"
#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
vfloat32mf2_t test_vlse32_v_f32mf2_tu(vfloat32mf2_t maskedoff, const float32_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse32_v_f32mf2_tu(maskedoff, base, bstride, vl);
}

vfloat32m1_t test_vlse32_v_f32m1_tu(vfloat32m1_t maskedoff, const float32_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse32_v_f32m1_tu(maskedoff, base, bstride, vl);
}

vfloat32m2_t test_vlse32_v_f32m2_tu(vfloat32m2_t maskedoff, const float32_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse32_v_f32m2_tu(maskedoff, base, bstride, vl);
}

vfloat32m4_t test_vlse32_v_f32m4_tu(vfloat32m4_t maskedoff, const float32_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse32_v_f32m4_tu(maskedoff, base, bstride, vl);
}

vfloat32m8_t test_vlse32_v_f32m8_tu(vfloat32m8_t maskedoff, const float32_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse32_v_f32m8_tu(maskedoff, base, bstride, vl);
}

vint32mf2_t test_vlse32_v_i32mf2_tu(vint32mf2_t maskedoff, const int32_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse32_v_i32mf2_tu(maskedoff, base, bstride, vl);
}

vint32m1_t test_vlse32_v_i32m1_tu(vint32m1_t maskedoff, const int32_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse32_v_i32m1_tu(maskedoff, base, bstride, vl);
}

vint32m2_t test_vlse32_v_i32m2_tu(vint32m2_t maskedoff, const int32_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse32_v_i32m2_tu(maskedoff, base, bstride, vl);
}

vint32m4_t test_vlse32_v_i32m4_tu(vint32m4_t maskedoff, const int32_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse32_v_i32m4_tu(maskedoff, base, bstride, vl);
}

vint32m8_t test_vlse32_v_i32m8_tu(vint32m8_t maskedoff, const int32_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse32_v_i32m8_tu(maskedoff, base, bstride, vl);
}

vuint32mf2_t test_vlse32_v_u32mf2_tu(vuint32mf2_t maskedoff, const uint32_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse32_v_u32mf2_tu(maskedoff, base, bstride, vl);
}

vuint32m1_t test_vlse32_v_u32m1_tu(vuint32m1_t maskedoff, const uint32_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse32_v_u32m1_tu(maskedoff, base, bstride, vl);
}

vuint32m2_t test_vlse32_v_u32m2_tu(vuint32m2_t maskedoff, const uint32_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse32_v_u32m2_tu(maskedoff, base, bstride, vl);
}

vuint32m4_t test_vlse32_v_u32m4_tu(vuint32m4_t maskedoff, const uint32_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse32_v_u32m4_tu(maskedoff, base, bstride, vl);
}

vuint32m8_t test_vlse32_v_u32m8_tu(vuint32m8_t maskedoff, const uint32_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse32_v_u32m8_tu(maskedoff, base, bstride, vl);
}

vfloat32mf2_t test_vlse32_v_f32mf2_ta(const float32_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse32_v_f32mf2_ta(base, bstride, vl);
}

vfloat32m1_t test_vlse32_v_f32m1_ta(const float32_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse32_v_f32m1_ta(base, bstride, vl);
}

vfloat32m2_t test_vlse32_v_f32m2_ta(const float32_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse32_v_f32m2_ta(base, bstride, vl);
}

vfloat32m4_t test_vlse32_v_f32m4_ta(const float32_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse32_v_f32m4_ta(base, bstride, vl);
}

vfloat32m8_t test_vlse32_v_f32m8_ta(const float32_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse32_v_f32m8_ta(base, bstride, vl);
}

vint32mf2_t test_vlse32_v_i32mf2_ta(const int32_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse32_v_i32mf2_ta(base, bstride, vl);
}

vint32m1_t test_vlse32_v_i32m1_ta(const int32_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse32_v_i32m1_ta(base, bstride, vl);
}

vint32m2_t test_vlse32_v_i32m2_ta(const int32_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse32_v_i32m2_ta(base, bstride, vl);
}

vint32m4_t test_vlse32_v_i32m4_ta(const int32_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse32_v_i32m4_ta(base, bstride, vl);
}

vint32m8_t test_vlse32_v_i32m8_ta(const int32_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse32_v_i32m8_ta(base, bstride, vl);
}

vuint32mf2_t test_vlse32_v_u32mf2_ta(const uint32_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse32_v_u32mf2_ta(base, bstride, vl);
}

vuint32m1_t test_vlse32_v_u32m1_ta(const uint32_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse32_v_u32m1_ta(base, bstride, vl);
}

vuint32m2_t test_vlse32_v_u32m2_ta(const uint32_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse32_v_u32m2_ta(base, bstride, vl);
}

vuint32m4_t test_vlse32_v_u32m4_ta(const uint32_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse32_v_u32m4_ta(base, bstride, vl);
}

vuint32m8_t test_vlse32_v_u32m8_ta(const uint32_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse32_v_u32m8_ta(base, bstride, vl);
}

vfloat32mf2_t test_vlse32_v_f32mf2_tuma(vbool64_t mask, vfloat32mf2_t maskedoff, const float32_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse32_v_f32mf2_tuma(mask, maskedoff, base, bstride, vl);
}

vfloat32m1_t test_vlse32_v_f32m1_tuma(vbool32_t mask, vfloat32m1_t maskedoff, const float32_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse32_v_f32m1_tuma(mask, maskedoff, base, bstride, vl);
}

vfloat32m2_t test_vlse32_v_f32m2_tuma(vbool16_t mask, vfloat32m2_t maskedoff, const float32_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse32_v_f32m2_tuma(mask, maskedoff, base, bstride, vl);
}

vfloat32m4_t test_vlse32_v_f32m4_tuma(vbool8_t mask, vfloat32m4_t maskedoff, const float32_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse32_v_f32m4_tuma(mask, maskedoff, base, bstride, vl);
}

vfloat32m8_t test_vlse32_v_f32m8_tuma(vbool4_t mask, vfloat32m8_t maskedoff, const float32_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse32_v_f32m8_tuma(mask, maskedoff, base, bstride, vl);
}

vint32mf2_t test_vlse32_v_i32mf2_tuma(vbool64_t mask, vint32mf2_t maskedoff, const int32_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse32_v_i32mf2_tuma(mask, maskedoff, base, bstride, vl);
}

vint32m1_t test_vlse32_v_i32m1_tuma(vbool32_t mask, vint32m1_t maskedoff, const int32_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse32_v_i32m1_tuma(mask, maskedoff, base, bstride, vl);
}

vint32m2_t test_vlse32_v_i32m2_tuma(vbool16_t mask, vint32m2_t maskedoff, const int32_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse32_v_i32m2_tuma(mask, maskedoff, base, bstride, vl);
}

vint32m4_t test_vlse32_v_i32m4_tuma(vbool8_t mask, vint32m4_t maskedoff, const int32_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse32_v_i32m4_tuma(mask, maskedoff, base, bstride, vl);
}

vint32m8_t test_vlse32_v_i32m8_tuma(vbool4_t mask, vint32m8_t maskedoff, const int32_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse32_v_i32m8_tuma(mask, maskedoff, base, bstride, vl);
}

vuint32mf2_t test_vlse32_v_u32mf2_tuma(vbool64_t mask, vuint32mf2_t maskedoff, const uint32_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse32_v_u32mf2_tuma(mask, maskedoff, base, bstride, vl);
}

vuint32m1_t test_vlse32_v_u32m1_tuma(vbool32_t mask, vuint32m1_t maskedoff, const uint32_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse32_v_u32m1_tuma(mask, maskedoff, base, bstride, vl);
}

vuint32m2_t test_vlse32_v_u32m2_tuma(vbool16_t mask, vuint32m2_t maskedoff, const uint32_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse32_v_u32m2_tuma(mask, maskedoff, base, bstride, vl);
}

vuint32m4_t test_vlse32_v_u32m4_tuma(vbool8_t mask, vuint32m4_t maskedoff, const uint32_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse32_v_u32m4_tuma(mask, maskedoff, base, bstride, vl);
}

vuint32m8_t test_vlse32_v_u32m8_tuma(vbool4_t mask, vuint32m8_t maskedoff, const uint32_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse32_v_u32m8_tuma(mask, maskedoff, base, bstride, vl);
}

vfloat32mf2_t test_vlse32_v_f32mf2_tumu(vbool64_t mask, vfloat32mf2_t maskedoff, const float32_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse32_v_f32mf2_tumu(mask, maskedoff, base, bstride, vl);
}

vfloat32m1_t test_vlse32_v_f32m1_tumu(vbool32_t mask, vfloat32m1_t maskedoff, const float32_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse32_v_f32m1_tumu(mask, maskedoff, base, bstride, vl);
}

vfloat32m2_t test_vlse32_v_f32m2_tumu(vbool16_t mask, vfloat32m2_t maskedoff, const float32_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse32_v_f32m2_tumu(mask, maskedoff, base, bstride, vl);
}

vfloat32m4_t test_vlse32_v_f32m4_tumu(vbool8_t mask, vfloat32m4_t maskedoff, const float32_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse32_v_f32m4_tumu(mask, maskedoff, base, bstride, vl);
}

vfloat32m8_t test_vlse32_v_f32m8_tumu(vbool4_t mask, vfloat32m8_t maskedoff, const float32_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse32_v_f32m8_tumu(mask, maskedoff, base, bstride, vl);
}

vint32mf2_t test_vlse32_v_i32mf2_tumu(vbool64_t mask, vint32mf2_t maskedoff, const int32_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse32_v_i32mf2_tumu(mask, maskedoff, base, bstride, vl);
}

vint32m1_t test_vlse32_v_i32m1_tumu(vbool32_t mask, vint32m1_t maskedoff, const int32_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse32_v_i32m1_tumu(mask, maskedoff, base, bstride, vl);
}

vint32m2_t test_vlse32_v_i32m2_tumu(vbool16_t mask, vint32m2_t maskedoff, const int32_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse32_v_i32m2_tumu(mask, maskedoff, base, bstride, vl);
}

vint32m4_t test_vlse32_v_i32m4_tumu(vbool8_t mask, vint32m4_t maskedoff, const int32_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse32_v_i32m4_tumu(mask, maskedoff, base, bstride, vl);
}

vint32m8_t test_vlse32_v_i32m8_tumu(vbool4_t mask, vint32m8_t maskedoff, const int32_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse32_v_i32m8_tumu(mask, maskedoff, base, bstride, vl);
}

vuint32mf2_t test_vlse32_v_u32mf2_tumu(vbool64_t mask, vuint32mf2_t maskedoff, const uint32_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse32_v_u32mf2_tumu(mask, maskedoff, base, bstride, vl);
}

vuint32m1_t test_vlse32_v_u32m1_tumu(vbool32_t mask, vuint32m1_t maskedoff, const uint32_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse32_v_u32m1_tumu(mask, maskedoff, base, bstride, vl);
}

vuint32m2_t test_vlse32_v_u32m2_tumu(vbool16_t mask, vuint32m2_t maskedoff, const uint32_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse32_v_u32m2_tumu(mask, maskedoff, base, bstride, vl);
}

vuint32m4_t test_vlse32_v_u32m4_tumu(vbool8_t mask, vuint32m4_t maskedoff, const uint32_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse32_v_u32m4_tumu(mask, maskedoff, base, bstride, vl);
}

vuint32m8_t test_vlse32_v_u32m8_tumu(vbool4_t mask, vuint32m8_t maskedoff, const uint32_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse32_v_u32m8_tumu(mask, maskedoff, base, bstride, vl);
}

vfloat32mf2_t test_vlse32_v_f32mf2_tama(vbool64_t mask, const float32_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse32_v_f32mf2_tama(mask, base, bstride, vl);
}

vfloat32m1_t test_vlse32_v_f32m1_tama(vbool32_t mask, const float32_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse32_v_f32m1_tama(mask, base, bstride, vl);
}

vfloat32m2_t test_vlse32_v_f32m2_tama(vbool16_t mask, const float32_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse32_v_f32m2_tama(mask, base, bstride, vl);
}

vfloat32m4_t test_vlse32_v_f32m4_tama(vbool8_t mask, const float32_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse32_v_f32m4_tama(mask, base, bstride, vl);
}

vfloat32m8_t test_vlse32_v_f32m8_tama(vbool4_t mask, const float32_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse32_v_f32m8_tama(mask, base, bstride, vl);
}

vint32mf2_t test_vlse32_v_i32mf2_tama(vbool64_t mask, const int32_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse32_v_i32mf2_tama(mask, base, bstride, vl);
}

vint32m1_t test_vlse32_v_i32m1_tama(vbool32_t mask, const int32_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse32_v_i32m1_tama(mask, base, bstride, vl);
}

vint32m2_t test_vlse32_v_i32m2_tama(vbool16_t mask, const int32_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse32_v_i32m2_tama(mask, base, bstride, vl);
}

vint32m4_t test_vlse32_v_i32m4_tama(vbool8_t mask, const int32_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse32_v_i32m4_tama(mask, base, bstride, vl);
}

vint32m8_t test_vlse32_v_i32m8_tama(vbool4_t mask, const int32_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse32_v_i32m8_tama(mask, base, bstride, vl);
}

vuint32mf2_t test_vlse32_v_u32mf2_tama(vbool64_t mask, const uint32_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse32_v_u32mf2_tama(mask, base, bstride, vl);
}

vuint32m1_t test_vlse32_v_u32m1_tama(vbool32_t mask, const uint32_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse32_v_u32m1_tama(mask, base, bstride, vl);
}

vuint32m2_t test_vlse32_v_u32m2_tama(vbool16_t mask, const uint32_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse32_v_u32m2_tama(mask, base, bstride, vl);
}

vuint32m4_t test_vlse32_v_u32m4_tama(vbool8_t mask, const uint32_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse32_v_u32m4_tama(mask, base, bstride, vl);
}

vuint32m8_t test_vlse32_v_u32m8_tama(vbool4_t mask, const uint32_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse32_v_u32m8_tama(mask, base, bstride, vl);
}

vfloat32mf2_t test_vlse32_v_f32mf2_tamu(vbool64_t mask, vfloat32mf2_t maskedoff, const float32_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse32_v_f32mf2_tamu(mask, maskedoff, base, bstride, vl);
}

vfloat32m1_t test_vlse32_v_f32m1_tamu(vbool32_t mask, vfloat32m1_t maskedoff, const float32_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse32_v_f32m1_tamu(mask, maskedoff, base, bstride, vl);
}

vfloat32m2_t test_vlse32_v_f32m2_tamu(vbool16_t mask, vfloat32m2_t maskedoff, const float32_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse32_v_f32m2_tamu(mask, maskedoff, base, bstride, vl);
}

vfloat32m4_t test_vlse32_v_f32m4_tamu(vbool8_t mask, vfloat32m4_t maskedoff, const float32_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse32_v_f32m4_tamu(mask, maskedoff, base, bstride, vl);
}

vfloat32m8_t test_vlse32_v_f32m8_tamu(vbool4_t mask, vfloat32m8_t maskedoff, const float32_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse32_v_f32m8_tamu(mask, maskedoff, base, bstride, vl);
}

vint32mf2_t test_vlse32_v_i32mf2_tamu(vbool64_t mask, vint32mf2_t maskedoff, const int32_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse32_v_i32mf2_tamu(mask, maskedoff, base, bstride, vl);
}

vint32m1_t test_vlse32_v_i32m1_tamu(vbool32_t mask, vint32m1_t maskedoff, const int32_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse32_v_i32m1_tamu(mask, maskedoff, base, bstride, vl);
}

vint32m2_t test_vlse32_v_i32m2_tamu(vbool16_t mask, vint32m2_t maskedoff, const int32_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse32_v_i32m2_tamu(mask, maskedoff, base, bstride, vl);
}

vint32m4_t test_vlse32_v_i32m4_tamu(vbool8_t mask, vint32m4_t maskedoff, const int32_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse32_v_i32m4_tamu(mask, maskedoff, base, bstride, vl);
}

vint32m8_t test_vlse32_v_i32m8_tamu(vbool4_t mask, vint32m8_t maskedoff, const int32_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse32_v_i32m8_tamu(mask, maskedoff, base, bstride, vl);
}

vuint32mf2_t test_vlse32_v_u32mf2_tamu(vbool64_t mask, vuint32mf2_t maskedoff, const uint32_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse32_v_u32mf2_tamu(mask, maskedoff, base, bstride, vl);
}

vuint32m1_t test_vlse32_v_u32m1_tamu(vbool32_t mask, vuint32m1_t maskedoff, const uint32_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse32_v_u32m1_tamu(mask, maskedoff, base, bstride, vl);
}

vuint32m2_t test_vlse32_v_u32m2_tamu(vbool16_t mask, vuint32m2_t maskedoff, const uint32_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse32_v_u32m2_tamu(mask, maskedoff, base, bstride, vl);
}

vuint32m4_t test_vlse32_v_u32m4_tamu(vbool8_t mask, vuint32m4_t maskedoff, const uint32_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse32_v_u32m4_tamu(mask, maskedoff, base, bstride, vl);
}

vuint32m8_t test_vlse32_v_u32m8_tamu(vbool4_t mask, vuint32m8_t maskedoff, const uint32_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse32_v_u32m8_tamu(mask, maskedoff, base, bstride, vl);
}

