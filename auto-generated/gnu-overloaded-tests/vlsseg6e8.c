/* { dg-do compile } */
/* { dg-options "-march=rv64gcv_zvfh -mabi=lp64d -Wno-psabi -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
vint8mf8x6_t test_vlsseg6e8_v_i8mf8x6_m(vbool64_t mask, const int8_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg6e8(mask, base, bstride, vl);
}

vint8mf4x6_t test_vlsseg6e8_v_i8mf4x6_m(vbool32_t mask, const int8_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg6e8(mask, base, bstride, vl);
}

vint8mf2x6_t test_vlsseg6e8_v_i8mf2x6_m(vbool16_t mask, const int8_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg6e8(mask, base, bstride, vl);
}

vint8m1x6_t test_vlsseg6e8_v_i8m1x6_m(vbool8_t mask, const int8_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg6e8(mask, base, bstride, vl);
}

vuint8mf8x6_t test_vlsseg6e8_v_u8mf8x6_m(vbool64_t mask, const uint8_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg6e8(mask, base, bstride, vl);
}

vuint8mf4x6_t test_vlsseg6e8_v_u8mf4x6_m(vbool32_t mask, const uint8_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg6e8(mask, base, bstride, vl);
}

vuint8mf2x6_t test_vlsseg6e8_v_u8mf2x6_m(vbool16_t mask, const uint8_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg6e8(mask, base, bstride, vl);
}

vuint8m1x6_t test_vlsseg6e8_v_u8m1x6_m(vbool8_t mask, const uint8_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg6e8(mask, base, bstride, vl);
}

