/* { dg-do compile } */
/* { dg-options "-march=rv32gc_zve32f -mabi=ilp32d -Wno-psabi -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include "riscv_vector.h"

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
vfloat32m1_t test_vlse32_v_f32m1(const float32_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse32_v_f32m1(base, bstride, vl);
}

vfloat32m2_t test_vlse32_v_f32m2(const float32_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse32_v_f32m2(base, bstride, vl);
}

vfloat32m4_t test_vlse32_v_f32m4(const float32_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse32_v_f32m4(base, bstride, vl);
}

vfloat32m8_t test_vlse32_v_f32m8(const float32_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse32_v_f32m8(base, bstride, vl);
}

vint32m1_t test_vlse32_v_i32m1(const int32_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse32_v_i32m1(base, bstride, vl);
}

vint32m2_t test_vlse32_v_i32m2(const int32_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse32_v_i32m2(base, bstride, vl);
}

vint32m4_t test_vlse32_v_i32m4(const int32_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse32_v_i32m4(base, bstride, vl);
}

vint32m8_t test_vlse32_v_i32m8(const int32_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse32_v_i32m8(base, bstride, vl);
}

vuint32m1_t test_vlse32_v_u32m1(const uint32_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse32_v_u32m1(base, bstride, vl);
}

vuint32m2_t test_vlse32_v_u32m2(const uint32_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse32_v_u32m2(base, bstride, vl);
}

vuint32m4_t test_vlse32_v_u32m4(const uint32_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse32_v_u32m4(base, bstride, vl);
}

vuint32m8_t test_vlse32_v_u32m8(const uint32_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse32_v_u32m8(base, bstride, vl);
}

vfloat32m1_t test_vlse32_v_f32m1_m(vbool32_t mask, const float32_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse32_v_f32m1_m(mask, base, bstride, vl);
}

vfloat32m2_t test_vlse32_v_f32m2_m(vbool16_t mask, const float32_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse32_v_f32m2_m(mask, base, bstride, vl);
}

vfloat32m4_t test_vlse32_v_f32m4_m(vbool8_t mask, const float32_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse32_v_f32m4_m(mask, base, bstride, vl);
}

vfloat32m8_t test_vlse32_v_f32m8_m(vbool4_t mask, const float32_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse32_v_f32m8_m(mask, base, bstride, vl);
}

vint32m1_t test_vlse32_v_i32m1_m(vbool32_t mask, const int32_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse32_v_i32m1_m(mask, base, bstride, vl);
}

vint32m2_t test_vlse32_v_i32m2_m(vbool16_t mask, const int32_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse32_v_i32m2_m(mask, base, bstride, vl);
}

vint32m4_t test_vlse32_v_i32m4_m(vbool8_t mask, const int32_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse32_v_i32m4_m(mask, base, bstride, vl);
}

vint32m8_t test_vlse32_v_i32m8_m(vbool4_t mask, const int32_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse32_v_i32m8_m(mask, base, bstride, vl);
}

vuint32m1_t test_vlse32_v_u32m1_m(vbool32_t mask, const uint32_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse32_v_u32m1_m(mask, base, bstride, vl);
}

vuint32m2_t test_vlse32_v_u32m2_m(vbool16_t mask, const uint32_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse32_v_u32m2_m(mask, base, bstride, vl);
}

vuint32m4_t test_vlse32_v_u32m4_m(vbool8_t mask, const uint32_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse32_v_u32m4_m(mask, base, bstride, vl);
}

vuint32m8_t test_vlse32_v_u32m8_m(vbool4_t mask, const uint32_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse32_v_u32m8_m(mask, base, bstride, vl);
}

/* { dg-final { scan-assembler-times {vseti?vli\s+[a-z0-9]+,\s*[a-z0-9]+,\s*e[0-9]+,\s*mf?[1248],\s*t[au],\s*m[au]\s+vlse32\.[ivxfswum.]+\s+} 24 } } */
