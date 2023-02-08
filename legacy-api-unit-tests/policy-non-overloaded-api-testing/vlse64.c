#include <stdint.h>
#include "rvv-v0p10-compatible-headers/non-policy.h"
#include "rvv-v0p10-compatible-headers/policy.h"
#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
vfloat64m1_t test_vlse64_v_f64m1_tu(vfloat64m1_t maskedoff, const float64_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse64_v_f64m1_tu(maskedoff, base, bstride, vl);
}

vfloat64m2_t test_vlse64_v_f64m2_tu(vfloat64m2_t maskedoff, const float64_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse64_v_f64m2_tu(maskedoff, base, bstride, vl);
}

vfloat64m4_t test_vlse64_v_f64m4_tu(vfloat64m4_t maskedoff, const float64_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse64_v_f64m4_tu(maskedoff, base, bstride, vl);
}

vfloat64m8_t test_vlse64_v_f64m8_tu(vfloat64m8_t maskedoff, const float64_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse64_v_f64m8_tu(maskedoff, base, bstride, vl);
}

vint64m1_t test_vlse64_v_i64m1_tu(vint64m1_t maskedoff, const int64_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse64_v_i64m1_tu(maskedoff, base, bstride, vl);
}

vint64m2_t test_vlse64_v_i64m2_tu(vint64m2_t maskedoff, const int64_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse64_v_i64m2_tu(maskedoff, base, bstride, vl);
}

vint64m4_t test_vlse64_v_i64m4_tu(vint64m4_t maskedoff, const int64_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse64_v_i64m4_tu(maskedoff, base, bstride, vl);
}

vint64m8_t test_vlse64_v_i64m8_tu(vint64m8_t maskedoff, const int64_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse64_v_i64m8_tu(maskedoff, base, bstride, vl);
}

vuint64m1_t test_vlse64_v_u64m1_tu(vuint64m1_t maskedoff, const uint64_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse64_v_u64m1_tu(maskedoff, base, bstride, vl);
}

vuint64m2_t test_vlse64_v_u64m2_tu(vuint64m2_t maskedoff, const uint64_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse64_v_u64m2_tu(maskedoff, base, bstride, vl);
}

vuint64m4_t test_vlse64_v_u64m4_tu(vuint64m4_t maskedoff, const uint64_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse64_v_u64m4_tu(maskedoff, base, bstride, vl);
}

vuint64m8_t test_vlse64_v_u64m8_tu(vuint64m8_t maskedoff, const uint64_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse64_v_u64m8_tu(maskedoff, base, bstride, vl);
}

vfloat64m1_t test_vlse64_v_f64m1_ta(const float64_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse64_v_f64m1_ta(base, bstride, vl);
}

vfloat64m2_t test_vlse64_v_f64m2_ta(const float64_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse64_v_f64m2_ta(base, bstride, vl);
}

vfloat64m4_t test_vlse64_v_f64m4_ta(const float64_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse64_v_f64m4_ta(base, bstride, vl);
}

vfloat64m8_t test_vlse64_v_f64m8_ta(const float64_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse64_v_f64m8_ta(base, bstride, vl);
}

vint64m1_t test_vlse64_v_i64m1_ta(const int64_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse64_v_i64m1_ta(base, bstride, vl);
}

vint64m2_t test_vlse64_v_i64m2_ta(const int64_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse64_v_i64m2_ta(base, bstride, vl);
}

vint64m4_t test_vlse64_v_i64m4_ta(const int64_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse64_v_i64m4_ta(base, bstride, vl);
}

vint64m8_t test_vlse64_v_i64m8_ta(const int64_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse64_v_i64m8_ta(base, bstride, vl);
}

vuint64m1_t test_vlse64_v_u64m1_ta(const uint64_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse64_v_u64m1_ta(base, bstride, vl);
}

vuint64m2_t test_vlse64_v_u64m2_ta(const uint64_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse64_v_u64m2_ta(base, bstride, vl);
}

vuint64m4_t test_vlse64_v_u64m4_ta(const uint64_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse64_v_u64m4_ta(base, bstride, vl);
}

vuint64m8_t test_vlse64_v_u64m8_ta(const uint64_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse64_v_u64m8_ta(base, bstride, vl);
}

vfloat64m1_t test_vlse64_v_f64m1_tuma(vbool64_t mask, vfloat64m1_t maskedoff, const float64_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse64_v_f64m1_tuma(mask, maskedoff, base, bstride, vl);
}

vfloat64m2_t test_vlse64_v_f64m2_tuma(vbool32_t mask, vfloat64m2_t maskedoff, const float64_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse64_v_f64m2_tuma(mask, maskedoff, base, bstride, vl);
}

vfloat64m4_t test_vlse64_v_f64m4_tuma(vbool16_t mask, vfloat64m4_t maskedoff, const float64_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse64_v_f64m4_tuma(mask, maskedoff, base, bstride, vl);
}

vfloat64m8_t test_vlse64_v_f64m8_tuma(vbool8_t mask, vfloat64m8_t maskedoff, const float64_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse64_v_f64m8_tuma(mask, maskedoff, base, bstride, vl);
}

vint64m1_t test_vlse64_v_i64m1_tuma(vbool64_t mask, vint64m1_t maskedoff, const int64_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse64_v_i64m1_tuma(mask, maskedoff, base, bstride, vl);
}

vint64m2_t test_vlse64_v_i64m2_tuma(vbool32_t mask, vint64m2_t maskedoff, const int64_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse64_v_i64m2_tuma(mask, maskedoff, base, bstride, vl);
}

vint64m4_t test_vlse64_v_i64m4_tuma(vbool16_t mask, vint64m4_t maskedoff, const int64_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse64_v_i64m4_tuma(mask, maskedoff, base, bstride, vl);
}

vint64m8_t test_vlse64_v_i64m8_tuma(vbool8_t mask, vint64m8_t maskedoff, const int64_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse64_v_i64m8_tuma(mask, maskedoff, base, bstride, vl);
}

vuint64m1_t test_vlse64_v_u64m1_tuma(vbool64_t mask, vuint64m1_t maskedoff, const uint64_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse64_v_u64m1_tuma(mask, maskedoff, base, bstride, vl);
}

vuint64m2_t test_vlse64_v_u64m2_tuma(vbool32_t mask, vuint64m2_t maskedoff, const uint64_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse64_v_u64m2_tuma(mask, maskedoff, base, bstride, vl);
}

vuint64m4_t test_vlse64_v_u64m4_tuma(vbool16_t mask, vuint64m4_t maskedoff, const uint64_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse64_v_u64m4_tuma(mask, maskedoff, base, bstride, vl);
}

vuint64m8_t test_vlse64_v_u64m8_tuma(vbool8_t mask, vuint64m8_t maskedoff, const uint64_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse64_v_u64m8_tuma(mask, maskedoff, base, bstride, vl);
}

vfloat64m1_t test_vlse64_v_f64m1_tumu(vbool64_t mask, vfloat64m1_t maskedoff, const float64_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse64_v_f64m1_tumu(mask, maskedoff, base, bstride, vl);
}

vfloat64m2_t test_vlse64_v_f64m2_tumu(vbool32_t mask, vfloat64m2_t maskedoff, const float64_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse64_v_f64m2_tumu(mask, maskedoff, base, bstride, vl);
}

vfloat64m4_t test_vlse64_v_f64m4_tumu(vbool16_t mask, vfloat64m4_t maskedoff, const float64_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse64_v_f64m4_tumu(mask, maskedoff, base, bstride, vl);
}

vfloat64m8_t test_vlse64_v_f64m8_tumu(vbool8_t mask, vfloat64m8_t maskedoff, const float64_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse64_v_f64m8_tumu(mask, maskedoff, base, bstride, vl);
}

vint64m1_t test_vlse64_v_i64m1_tumu(vbool64_t mask, vint64m1_t maskedoff, const int64_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse64_v_i64m1_tumu(mask, maskedoff, base, bstride, vl);
}

vint64m2_t test_vlse64_v_i64m2_tumu(vbool32_t mask, vint64m2_t maskedoff, const int64_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse64_v_i64m2_tumu(mask, maskedoff, base, bstride, vl);
}

vint64m4_t test_vlse64_v_i64m4_tumu(vbool16_t mask, vint64m4_t maskedoff, const int64_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse64_v_i64m4_tumu(mask, maskedoff, base, bstride, vl);
}

vint64m8_t test_vlse64_v_i64m8_tumu(vbool8_t mask, vint64m8_t maskedoff, const int64_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse64_v_i64m8_tumu(mask, maskedoff, base, bstride, vl);
}

vuint64m1_t test_vlse64_v_u64m1_tumu(vbool64_t mask, vuint64m1_t maskedoff, const uint64_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse64_v_u64m1_tumu(mask, maskedoff, base, bstride, vl);
}

vuint64m2_t test_vlse64_v_u64m2_tumu(vbool32_t mask, vuint64m2_t maskedoff, const uint64_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse64_v_u64m2_tumu(mask, maskedoff, base, bstride, vl);
}

vuint64m4_t test_vlse64_v_u64m4_tumu(vbool16_t mask, vuint64m4_t maskedoff, const uint64_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse64_v_u64m4_tumu(mask, maskedoff, base, bstride, vl);
}

vuint64m8_t test_vlse64_v_u64m8_tumu(vbool8_t mask, vuint64m8_t maskedoff, const uint64_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse64_v_u64m8_tumu(mask, maskedoff, base, bstride, vl);
}

vfloat64m1_t test_vlse64_v_f64m1_tama(vbool64_t mask, const float64_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse64_v_f64m1_tama(mask, base, bstride, vl);
}

vfloat64m2_t test_vlse64_v_f64m2_tama(vbool32_t mask, const float64_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse64_v_f64m2_tama(mask, base, bstride, vl);
}

vfloat64m4_t test_vlse64_v_f64m4_tama(vbool16_t mask, const float64_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse64_v_f64m4_tama(mask, base, bstride, vl);
}

vfloat64m8_t test_vlse64_v_f64m8_tama(vbool8_t mask, const float64_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse64_v_f64m8_tama(mask, base, bstride, vl);
}

vint64m1_t test_vlse64_v_i64m1_tama(vbool64_t mask, const int64_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse64_v_i64m1_tama(mask, base, bstride, vl);
}

vint64m2_t test_vlse64_v_i64m2_tama(vbool32_t mask, const int64_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse64_v_i64m2_tama(mask, base, bstride, vl);
}

vint64m4_t test_vlse64_v_i64m4_tama(vbool16_t mask, const int64_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse64_v_i64m4_tama(mask, base, bstride, vl);
}

vint64m8_t test_vlse64_v_i64m8_tama(vbool8_t mask, const int64_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse64_v_i64m8_tama(mask, base, bstride, vl);
}

vuint64m1_t test_vlse64_v_u64m1_tama(vbool64_t mask, const uint64_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse64_v_u64m1_tama(mask, base, bstride, vl);
}

vuint64m2_t test_vlse64_v_u64m2_tama(vbool32_t mask, const uint64_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse64_v_u64m2_tama(mask, base, bstride, vl);
}

vuint64m4_t test_vlse64_v_u64m4_tama(vbool16_t mask, const uint64_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse64_v_u64m4_tama(mask, base, bstride, vl);
}

vuint64m8_t test_vlse64_v_u64m8_tama(vbool8_t mask, const uint64_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse64_v_u64m8_tama(mask, base, bstride, vl);
}

vfloat64m1_t test_vlse64_v_f64m1_tamu(vbool64_t mask, vfloat64m1_t maskedoff, const float64_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse64_v_f64m1_tamu(mask, maskedoff, base, bstride, vl);
}

vfloat64m2_t test_vlse64_v_f64m2_tamu(vbool32_t mask, vfloat64m2_t maskedoff, const float64_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse64_v_f64m2_tamu(mask, maskedoff, base, bstride, vl);
}

vfloat64m4_t test_vlse64_v_f64m4_tamu(vbool16_t mask, vfloat64m4_t maskedoff, const float64_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse64_v_f64m4_tamu(mask, maskedoff, base, bstride, vl);
}

vfloat64m8_t test_vlse64_v_f64m8_tamu(vbool8_t mask, vfloat64m8_t maskedoff, const float64_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse64_v_f64m8_tamu(mask, maskedoff, base, bstride, vl);
}

vint64m1_t test_vlse64_v_i64m1_tamu(vbool64_t mask, vint64m1_t maskedoff, const int64_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse64_v_i64m1_tamu(mask, maskedoff, base, bstride, vl);
}

vint64m2_t test_vlse64_v_i64m2_tamu(vbool32_t mask, vint64m2_t maskedoff, const int64_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse64_v_i64m2_tamu(mask, maskedoff, base, bstride, vl);
}

vint64m4_t test_vlse64_v_i64m4_tamu(vbool16_t mask, vint64m4_t maskedoff, const int64_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse64_v_i64m4_tamu(mask, maskedoff, base, bstride, vl);
}

vint64m8_t test_vlse64_v_i64m8_tamu(vbool8_t mask, vint64m8_t maskedoff, const int64_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse64_v_i64m8_tamu(mask, maskedoff, base, bstride, vl);
}

vuint64m1_t test_vlse64_v_u64m1_tamu(vbool64_t mask, vuint64m1_t maskedoff, const uint64_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse64_v_u64m1_tamu(mask, maskedoff, base, bstride, vl);
}

vuint64m2_t test_vlse64_v_u64m2_tamu(vbool32_t mask, vuint64m2_t maskedoff, const uint64_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse64_v_u64m2_tamu(mask, maskedoff, base, bstride, vl);
}

vuint64m4_t test_vlse64_v_u64m4_tamu(vbool16_t mask, vuint64m4_t maskedoff, const uint64_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse64_v_u64m4_tamu(mask, maskedoff, base, bstride, vl);
}

vuint64m8_t test_vlse64_v_u64m8_tamu(vbool8_t mask, vuint64m8_t maskedoff, const uint64_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse64_v_u64m8_tamu(mask, maskedoff, base, bstride, vl);
}

