#include <stdint.h>
#include "rvv-v0p10-compatible-headers/non-policy.h"
#include "rvv-v0p10-compatible-headers/policy.h"
#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
vfloat32mf2_t test_vlse32_v_f32mf2(const float32_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse32_v_f32mf2(base, bstride, vl);
}

vfloat32m1_t test_vlse32_v_f32m1(const float32_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse32_v_f32m1(base, bstride, vl);
}

vfloat32m2_t test_vlse32_v_f32m2(const float32_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse32_v_f32m2(base, bstride, vl);
}

vfloat32m4_t test_vlse32_v_f32m4(const float32_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse32_v_f32m4(base, bstride, vl);
}

vfloat32m8_t test_vlse32_v_f32m8(const float32_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse32_v_f32m8(base, bstride, vl);
}

vint32mf2_t test_vlse32_v_i32mf2(const int32_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse32_v_i32mf2(base, bstride, vl);
}

vint32m1_t test_vlse32_v_i32m1(const int32_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse32_v_i32m1(base, bstride, vl);
}

vint32m2_t test_vlse32_v_i32m2(const int32_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse32_v_i32m2(base, bstride, vl);
}

vint32m4_t test_vlse32_v_i32m4(const int32_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse32_v_i32m4(base, bstride, vl);
}

vint32m8_t test_vlse32_v_i32m8(const int32_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse32_v_i32m8(base, bstride, vl);
}

vuint32mf2_t test_vlse32_v_u32mf2(const uint32_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse32_v_u32mf2(base, bstride, vl);
}

vuint32m1_t test_vlse32_v_u32m1(const uint32_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse32_v_u32m1(base, bstride, vl);
}

vuint32m2_t test_vlse32_v_u32m2(const uint32_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse32_v_u32m2(base, bstride, vl);
}

vuint32m4_t test_vlse32_v_u32m4(const uint32_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse32_v_u32m4(base, bstride, vl);
}

vuint32m8_t test_vlse32_v_u32m8(const uint32_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse32_v_u32m8(base, bstride, vl);
}

vfloat32mf2_t test_vlse32_v_f32mf2_m(vbool64_t mask, vfloat32mf2_t maskedoff, const float32_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse32_v_f32mf2_m(mask, maskedoff, base, bstride, vl);
}

vfloat32m1_t test_vlse32_v_f32m1_m(vbool32_t mask, vfloat32m1_t maskedoff, const float32_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse32_v_f32m1_m(mask, maskedoff, base, bstride, vl);
}

vfloat32m2_t test_vlse32_v_f32m2_m(vbool16_t mask, vfloat32m2_t maskedoff, const float32_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse32_v_f32m2_m(mask, maskedoff, base, bstride, vl);
}

vfloat32m4_t test_vlse32_v_f32m4_m(vbool8_t mask, vfloat32m4_t maskedoff, const float32_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse32_v_f32m4_m(mask, maskedoff, base, bstride, vl);
}

vfloat32m8_t test_vlse32_v_f32m8_m(vbool4_t mask, vfloat32m8_t maskedoff, const float32_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse32_v_f32m8_m(mask, maskedoff, base, bstride, vl);
}

vint32mf2_t test_vlse32_v_i32mf2_m(vbool64_t mask, vint32mf2_t maskedoff, const int32_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse32_v_i32mf2_m(mask, maskedoff, base, bstride, vl);
}

vint32m1_t test_vlse32_v_i32m1_m(vbool32_t mask, vint32m1_t maskedoff, const int32_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse32_v_i32m1_m(mask, maskedoff, base, bstride, vl);
}

vint32m2_t test_vlse32_v_i32m2_m(vbool16_t mask, vint32m2_t maskedoff, const int32_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse32_v_i32m2_m(mask, maskedoff, base, bstride, vl);
}

vint32m4_t test_vlse32_v_i32m4_m(vbool8_t mask, vint32m4_t maskedoff, const int32_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse32_v_i32m4_m(mask, maskedoff, base, bstride, vl);
}

vint32m8_t test_vlse32_v_i32m8_m(vbool4_t mask, vint32m8_t maskedoff, const int32_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse32_v_i32m8_m(mask, maskedoff, base, bstride, vl);
}

vuint32mf2_t test_vlse32_v_u32mf2_m(vbool64_t mask, vuint32mf2_t maskedoff, const uint32_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse32_v_u32mf2_m(mask, maskedoff, base, bstride, vl);
}

vuint32m1_t test_vlse32_v_u32m1_m(vbool32_t mask, vuint32m1_t maskedoff, const uint32_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse32_v_u32m1_m(mask, maskedoff, base, bstride, vl);
}

vuint32m2_t test_vlse32_v_u32m2_m(vbool16_t mask, vuint32m2_t maskedoff, const uint32_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse32_v_u32m2_m(mask, maskedoff, base, bstride, vl);
}

vuint32m4_t test_vlse32_v_u32m4_m(vbool8_t mask, vuint32m4_t maskedoff, const uint32_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse32_v_u32m4_m(mask, maskedoff, base, bstride, vl);
}

vuint32m8_t test_vlse32_v_u32m8_m(vbool4_t mask, vuint32m8_t maskedoff, const uint32_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse32_v_u32m8_m(mask, maskedoff, base, bstride, vl);
}

