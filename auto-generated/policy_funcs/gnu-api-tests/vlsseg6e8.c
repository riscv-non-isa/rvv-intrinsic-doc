/* { dg-do compile } */
/* { dg-options "-march=rv64gcv -mabi=lp64d -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
vint8mf8x6_t test_vlsseg6e8_v_i8mf8x6_tu(vint8mf8x6_t maskedoff_tuple, const int8_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg6e8_v_i8mf8x6_tu(maskedoff_tuple, base, bstride, vl);
}

vint8mf4x6_t test_vlsseg6e8_v_i8mf4x6_tu(vint8mf4x6_t maskedoff_tuple, const int8_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg6e8_v_i8mf4x6_tu(maskedoff_tuple, base, bstride, vl);
}

vint8mf2x6_t test_vlsseg6e8_v_i8mf2x6_tu(vint8mf2x6_t maskedoff_tuple, const int8_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg6e8_v_i8mf2x6_tu(maskedoff_tuple, base, bstride, vl);
}

vint8m1x6_t test_vlsseg6e8_v_i8m1x6_tu(vint8m1x6_t maskedoff_tuple, const int8_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg6e8_v_i8m1x6_tu(maskedoff_tuple, base, bstride, vl);
}

vuint8mf8x6_t test_vlsseg6e8_v_u8mf8x6_tu(vuint8mf8x6_t maskedoff_tuple, const uint8_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg6e8_v_u8mf8x6_tu(maskedoff_tuple, base, bstride, vl);
}

vuint8mf4x6_t test_vlsseg6e8_v_u8mf4x6_tu(vuint8mf4x6_t maskedoff_tuple, const uint8_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg6e8_v_u8mf4x6_tu(maskedoff_tuple, base, bstride, vl);
}

vuint8mf2x6_t test_vlsseg6e8_v_u8mf2x6_tu(vuint8mf2x6_t maskedoff_tuple, const uint8_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg6e8_v_u8mf2x6_tu(maskedoff_tuple, base, bstride, vl);
}

vuint8m1x6_t test_vlsseg6e8_v_u8m1x6_tu(vuint8m1x6_t maskedoff_tuple, const uint8_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg6e8_v_u8m1x6_tu(maskedoff_tuple, base, bstride, vl);
}

vint8mf8x6_t test_vlsseg6e8_v_i8mf8x6_tum(vbool64_t mask, vint8mf8x6_t maskedoff_tuple, const int8_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg6e8_v_i8mf8x6_tum(mask, maskedoff_tuple, base, bstride, vl);
}

vint8mf4x6_t test_vlsseg6e8_v_i8mf4x6_tum(vbool32_t mask, vint8mf4x6_t maskedoff_tuple, const int8_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg6e8_v_i8mf4x6_tum(mask, maskedoff_tuple, base, bstride, vl);
}

vint8mf2x6_t test_vlsseg6e8_v_i8mf2x6_tum(vbool16_t mask, vint8mf2x6_t maskedoff_tuple, const int8_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg6e8_v_i8mf2x6_tum(mask, maskedoff_tuple, base, bstride, vl);
}

vint8m1x6_t test_vlsseg6e8_v_i8m1x6_tum(vbool8_t mask, vint8m1x6_t maskedoff_tuple, const int8_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg6e8_v_i8m1x6_tum(mask, maskedoff_tuple, base, bstride, vl);
}

vuint8mf8x6_t test_vlsseg6e8_v_u8mf8x6_tum(vbool64_t mask, vuint8mf8x6_t maskedoff_tuple, const uint8_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg6e8_v_u8mf8x6_tum(mask, maskedoff_tuple, base, bstride, vl);
}

vuint8mf4x6_t test_vlsseg6e8_v_u8mf4x6_tum(vbool32_t mask, vuint8mf4x6_t maskedoff_tuple, const uint8_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg6e8_v_u8mf4x6_tum(mask, maskedoff_tuple, base, bstride, vl);
}

vuint8mf2x6_t test_vlsseg6e8_v_u8mf2x6_tum(vbool16_t mask, vuint8mf2x6_t maskedoff_tuple, const uint8_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg6e8_v_u8mf2x6_tum(mask, maskedoff_tuple, base, bstride, vl);
}

vuint8m1x6_t test_vlsseg6e8_v_u8m1x6_tum(vbool8_t mask, vuint8m1x6_t maskedoff_tuple, const uint8_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg6e8_v_u8m1x6_tum(mask, maskedoff_tuple, base, bstride, vl);
}

vint8mf8x6_t test_vlsseg6e8_v_i8mf8x6_tumu(vbool64_t mask, vint8mf8x6_t maskedoff_tuple, const int8_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg6e8_v_i8mf8x6_tumu(mask, maskedoff_tuple, base, bstride, vl);
}

vint8mf4x6_t test_vlsseg6e8_v_i8mf4x6_tumu(vbool32_t mask, vint8mf4x6_t maskedoff_tuple, const int8_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg6e8_v_i8mf4x6_tumu(mask, maskedoff_tuple, base, bstride, vl);
}

vint8mf2x6_t test_vlsseg6e8_v_i8mf2x6_tumu(vbool16_t mask, vint8mf2x6_t maskedoff_tuple, const int8_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg6e8_v_i8mf2x6_tumu(mask, maskedoff_tuple, base, bstride, vl);
}

vint8m1x6_t test_vlsseg6e8_v_i8m1x6_tumu(vbool8_t mask, vint8m1x6_t maskedoff_tuple, const int8_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg6e8_v_i8m1x6_tumu(mask, maskedoff_tuple, base, bstride, vl);
}

vuint8mf8x6_t test_vlsseg6e8_v_u8mf8x6_tumu(vbool64_t mask, vuint8mf8x6_t maskedoff_tuple, const uint8_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg6e8_v_u8mf8x6_tumu(mask, maskedoff_tuple, base, bstride, vl);
}

vuint8mf4x6_t test_vlsseg6e8_v_u8mf4x6_tumu(vbool32_t mask, vuint8mf4x6_t maskedoff_tuple, const uint8_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg6e8_v_u8mf4x6_tumu(mask, maskedoff_tuple, base, bstride, vl);
}

vuint8mf2x6_t test_vlsseg6e8_v_u8mf2x6_tumu(vbool16_t mask, vuint8mf2x6_t maskedoff_tuple, const uint8_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg6e8_v_u8mf2x6_tumu(mask, maskedoff_tuple, base, bstride, vl);
}

vuint8m1x6_t test_vlsseg6e8_v_u8m1x6_tumu(vbool8_t mask, vuint8m1x6_t maskedoff_tuple, const uint8_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg6e8_v_u8m1x6_tumu(mask, maskedoff_tuple, base, bstride, vl);
}

vint8mf8x6_t test_vlsseg6e8_v_i8mf8x6_mu(vbool64_t mask, vint8mf8x6_t maskedoff_tuple, const int8_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg6e8_v_i8mf8x6_mu(mask, maskedoff_tuple, base, bstride, vl);
}

vint8mf4x6_t test_vlsseg6e8_v_i8mf4x6_mu(vbool32_t mask, vint8mf4x6_t maskedoff_tuple, const int8_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg6e8_v_i8mf4x6_mu(mask, maskedoff_tuple, base, bstride, vl);
}

vint8mf2x6_t test_vlsseg6e8_v_i8mf2x6_mu(vbool16_t mask, vint8mf2x6_t maskedoff_tuple, const int8_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg6e8_v_i8mf2x6_mu(mask, maskedoff_tuple, base, bstride, vl);
}

vint8m1x6_t test_vlsseg6e8_v_i8m1x6_mu(vbool8_t mask, vint8m1x6_t maskedoff_tuple, const int8_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg6e8_v_i8m1x6_mu(mask, maskedoff_tuple, base, bstride, vl);
}

vuint8mf8x6_t test_vlsseg6e8_v_u8mf8x6_mu(vbool64_t mask, vuint8mf8x6_t maskedoff_tuple, const uint8_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg6e8_v_u8mf8x6_mu(mask, maskedoff_tuple, base, bstride, vl);
}

vuint8mf4x6_t test_vlsseg6e8_v_u8mf4x6_mu(vbool32_t mask, vuint8mf4x6_t maskedoff_tuple, const uint8_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg6e8_v_u8mf4x6_mu(mask, maskedoff_tuple, base, bstride, vl);
}

vuint8mf2x6_t test_vlsseg6e8_v_u8mf2x6_mu(vbool16_t mask, vuint8mf2x6_t maskedoff_tuple, const uint8_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg6e8_v_u8mf2x6_mu(mask, maskedoff_tuple, base, bstride, vl);
}

vuint8m1x6_t test_vlsseg6e8_v_u8m1x6_mu(vbool8_t mask, vuint8m1x6_t maskedoff_tuple, const uint8_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg6e8_v_u8m1x6_mu(mask, maskedoff_tuple, base, bstride, vl);
}

/* { dg-final { scan-assembler-times {vseti?vli\s+[a-z0-9]+,\s*[a-z0-9]+,\s*e[0-9]+,\s*mf?[1248],\s*t[au],\s*m[au]\s+vlsseg6e8\.[ivxfswum.]+\s+} 32 } } */