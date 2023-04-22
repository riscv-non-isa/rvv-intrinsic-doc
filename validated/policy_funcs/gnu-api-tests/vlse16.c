/* { dg-do compile } */
/* { dg-options "-march=rv64gcv -mabi=lp64d -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
vint16mf4_t test_vlse16_v_i16mf4_tu(vint16mf4_t maskedoff, const int16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse16_v_i16mf4_tu(maskedoff, base, bstride, vl);
}

vint16mf2_t test_vlse16_v_i16mf2_tu(vint16mf2_t maskedoff, const int16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse16_v_i16mf2_tu(maskedoff, base, bstride, vl);
}

vint16m1_t test_vlse16_v_i16m1_tu(vint16m1_t maskedoff, const int16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse16_v_i16m1_tu(maskedoff, base, bstride, vl);
}

vint16m2_t test_vlse16_v_i16m2_tu(vint16m2_t maskedoff, const int16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse16_v_i16m2_tu(maskedoff, base, bstride, vl);
}

vint16m4_t test_vlse16_v_i16m4_tu(vint16m4_t maskedoff, const int16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse16_v_i16m4_tu(maskedoff, base, bstride, vl);
}

vint16m8_t test_vlse16_v_i16m8_tu(vint16m8_t maskedoff, const int16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse16_v_i16m8_tu(maskedoff, base, bstride, vl);
}

vuint16mf4_t test_vlse16_v_u16mf4_tu(vuint16mf4_t maskedoff, const uint16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse16_v_u16mf4_tu(maskedoff, base, bstride, vl);
}

vuint16mf2_t test_vlse16_v_u16mf2_tu(vuint16mf2_t maskedoff, const uint16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse16_v_u16mf2_tu(maskedoff, base, bstride, vl);
}

vuint16m1_t test_vlse16_v_u16m1_tu(vuint16m1_t maskedoff, const uint16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse16_v_u16m1_tu(maskedoff, base, bstride, vl);
}

vuint16m2_t test_vlse16_v_u16m2_tu(vuint16m2_t maskedoff, const uint16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse16_v_u16m2_tu(maskedoff, base, bstride, vl);
}

vuint16m4_t test_vlse16_v_u16m4_tu(vuint16m4_t maskedoff, const uint16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse16_v_u16m4_tu(maskedoff, base, bstride, vl);
}

vuint16m8_t test_vlse16_v_u16m8_tu(vuint16m8_t maskedoff, const uint16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse16_v_u16m8_tu(maskedoff, base, bstride, vl);
}

vint16mf4_t test_vlse16_v_i16mf4_tum(vbool64_t mask, vint16mf4_t maskedoff, const int16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse16_v_i16mf4_tum(mask, maskedoff, base, bstride, vl);
}

vint16mf2_t test_vlse16_v_i16mf2_tum(vbool32_t mask, vint16mf2_t maskedoff, const int16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse16_v_i16mf2_tum(mask, maskedoff, base, bstride, vl);
}

vint16m1_t test_vlse16_v_i16m1_tum(vbool16_t mask, vint16m1_t maskedoff, const int16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse16_v_i16m1_tum(mask, maskedoff, base, bstride, vl);
}

vint16m2_t test_vlse16_v_i16m2_tum(vbool8_t mask, vint16m2_t maskedoff, const int16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse16_v_i16m2_tum(mask, maskedoff, base, bstride, vl);
}

vint16m4_t test_vlse16_v_i16m4_tum(vbool4_t mask, vint16m4_t maskedoff, const int16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse16_v_i16m4_tum(mask, maskedoff, base, bstride, vl);
}

vint16m8_t test_vlse16_v_i16m8_tum(vbool2_t mask, vint16m8_t maskedoff, const int16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse16_v_i16m8_tum(mask, maskedoff, base, bstride, vl);
}

vuint16mf4_t test_vlse16_v_u16mf4_tum(vbool64_t mask, vuint16mf4_t maskedoff, const uint16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse16_v_u16mf4_tum(mask, maskedoff, base, bstride, vl);
}

vuint16mf2_t test_vlse16_v_u16mf2_tum(vbool32_t mask, vuint16mf2_t maskedoff, const uint16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse16_v_u16mf2_tum(mask, maskedoff, base, bstride, vl);
}

vuint16m1_t test_vlse16_v_u16m1_tum(vbool16_t mask, vuint16m1_t maskedoff, const uint16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse16_v_u16m1_tum(mask, maskedoff, base, bstride, vl);
}

vuint16m2_t test_vlse16_v_u16m2_tum(vbool8_t mask, vuint16m2_t maskedoff, const uint16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse16_v_u16m2_tum(mask, maskedoff, base, bstride, vl);
}

vuint16m4_t test_vlse16_v_u16m4_tum(vbool4_t mask, vuint16m4_t maskedoff, const uint16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse16_v_u16m4_tum(mask, maskedoff, base, bstride, vl);
}

vuint16m8_t test_vlse16_v_u16m8_tum(vbool2_t mask, vuint16m8_t maskedoff, const uint16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse16_v_u16m8_tum(mask, maskedoff, base, bstride, vl);
}

vint16mf4_t test_vlse16_v_i16mf4_tumu(vbool64_t mask, vint16mf4_t maskedoff, const int16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse16_v_i16mf4_tumu(mask, maskedoff, base, bstride, vl);
}

vint16mf2_t test_vlse16_v_i16mf2_tumu(vbool32_t mask, vint16mf2_t maskedoff, const int16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse16_v_i16mf2_tumu(mask, maskedoff, base, bstride, vl);
}

vint16m1_t test_vlse16_v_i16m1_tumu(vbool16_t mask, vint16m1_t maskedoff, const int16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse16_v_i16m1_tumu(mask, maskedoff, base, bstride, vl);
}

vint16m2_t test_vlse16_v_i16m2_tumu(vbool8_t mask, vint16m2_t maskedoff, const int16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse16_v_i16m2_tumu(mask, maskedoff, base, bstride, vl);
}

vint16m4_t test_vlse16_v_i16m4_tumu(vbool4_t mask, vint16m4_t maskedoff, const int16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse16_v_i16m4_tumu(mask, maskedoff, base, bstride, vl);
}

vint16m8_t test_vlse16_v_i16m8_tumu(vbool2_t mask, vint16m8_t maskedoff, const int16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse16_v_i16m8_tumu(mask, maskedoff, base, bstride, vl);
}

vuint16mf4_t test_vlse16_v_u16mf4_tumu(vbool64_t mask, vuint16mf4_t maskedoff, const uint16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse16_v_u16mf4_tumu(mask, maskedoff, base, bstride, vl);
}

vuint16mf2_t test_vlse16_v_u16mf2_tumu(vbool32_t mask, vuint16mf2_t maskedoff, const uint16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse16_v_u16mf2_tumu(mask, maskedoff, base, bstride, vl);
}

vuint16m1_t test_vlse16_v_u16m1_tumu(vbool16_t mask, vuint16m1_t maskedoff, const uint16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse16_v_u16m1_tumu(mask, maskedoff, base, bstride, vl);
}

vuint16m2_t test_vlse16_v_u16m2_tumu(vbool8_t mask, vuint16m2_t maskedoff, const uint16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse16_v_u16m2_tumu(mask, maskedoff, base, bstride, vl);
}

vuint16m4_t test_vlse16_v_u16m4_tumu(vbool4_t mask, vuint16m4_t maskedoff, const uint16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse16_v_u16m4_tumu(mask, maskedoff, base, bstride, vl);
}

vuint16m8_t test_vlse16_v_u16m8_tumu(vbool2_t mask, vuint16m8_t maskedoff, const uint16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse16_v_u16m8_tumu(mask, maskedoff, base, bstride, vl);
}

vint16mf4_t test_vlse16_v_i16mf4_mu(vbool64_t mask, vint16mf4_t maskedoff, const int16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse16_v_i16mf4_mu(mask, maskedoff, base, bstride, vl);
}

vint16mf2_t test_vlse16_v_i16mf2_mu(vbool32_t mask, vint16mf2_t maskedoff, const int16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse16_v_i16mf2_mu(mask, maskedoff, base, bstride, vl);
}

vint16m1_t test_vlse16_v_i16m1_mu(vbool16_t mask, vint16m1_t maskedoff, const int16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse16_v_i16m1_mu(mask, maskedoff, base, bstride, vl);
}

vint16m2_t test_vlse16_v_i16m2_mu(vbool8_t mask, vint16m2_t maskedoff, const int16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse16_v_i16m2_mu(mask, maskedoff, base, bstride, vl);
}

vint16m4_t test_vlse16_v_i16m4_mu(vbool4_t mask, vint16m4_t maskedoff, const int16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse16_v_i16m4_mu(mask, maskedoff, base, bstride, vl);
}

vint16m8_t test_vlse16_v_i16m8_mu(vbool2_t mask, vint16m8_t maskedoff, const int16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse16_v_i16m8_mu(mask, maskedoff, base, bstride, vl);
}

vuint16mf4_t test_vlse16_v_u16mf4_mu(vbool64_t mask, vuint16mf4_t maskedoff, const uint16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse16_v_u16mf4_mu(mask, maskedoff, base, bstride, vl);
}

vuint16mf2_t test_vlse16_v_u16mf2_mu(vbool32_t mask, vuint16mf2_t maskedoff, const uint16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse16_v_u16mf2_mu(mask, maskedoff, base, bstride, vl);
}

vuint16m1_t test_vlse16_v_u16m1_mu(vbool16_t mask, vuint16m1_t maskedoff, const uint16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse16_v_u16m1_mu(mask, maskedoff, base, bstride, vl);
}

vuint16m2_t test_vlse16_v_u16m2_mu(vbool8_t mask, vuint16m2_t maskedoff, const uint16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse16_v_u16m2_mu(mask, maskedoff, base, bstride, vl);
}

vuint16m4_t test_vlse16_v_u16m4_mu(vbool4_t mask, vuint16m4_t maskedoff, const uint16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse16_v_u16m4_mu(mask, maskedoff, base, bstride, vl);
}

vuint16m8_t test_vlse16_v_u16m8_mu(vbool2_t mask, vuint16m8_t maskedoff, const uint16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse16_v_u16m8_mu(mask, maskedoff, base, bstride, vl);
}

/* { dg-final { scan-assembler-times {vseti?vli\s+[a-z0-9]+,\s*[a-z0-9]+,\s*e[0-9]+,\s*mf?[1248],\s*t[au],\s*m[au]\s+vlse16\.[ivxfswum.]+\s+} 48 } } */
