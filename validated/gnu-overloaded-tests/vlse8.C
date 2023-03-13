/* { dg-do compile } */
/* { dg-options "-march=rv64gcv -mabi=lp64d -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
vint8mf8_t test_vlse8_v_i8mf8_m(vbool64_t mask, const int8_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse8(mask, base, bstride, vl);
}

vint8mf4_t test_vlse8_v_i8mf4_m(vbool32_t mask, const int8_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse8(mask, base, bstride, vl);
}

vint8mf2_t test_vlse8_v_i8mf2_m(vbool16_t mask, const int8_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse8(mask, base, bstride, vl);
}

vint8m1_t test_vlse8_v_i8m1_m(vbool8_t mask, const int8_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse8(mask, base, bstride, vl);
}

vint8m2_t test_vlse8_v_i8m2_m(vbool4_t mask, const int8_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse8(mask, base, bstride, vl);
}

vint8m4_t test_vlse8_v_i8m4_m(vbool2_t mask, const int8_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse8(mask, base, bstride, vl);
}

vint8m8_t test_vlse8_v_i8m8_m(vbool1_t mask, const int8_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse8(mask, base, bstride, vl);
}

vuint8mf8_t test_vlse8_v_u8mf8_m(vbool64_t mask, const uint8_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse8(mask, base, bstride, vl);
}

vuint8mf4_t test_vlse8_v_u8mf4_m(vbool32_t mask, const uint8_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse8(mask, base, bstride, vl);
}

vuint8mf2_t test_vlse8_v_u8mf2_m(vbool16_t mask, const uint8_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse8(mask, base, bstride, vl);
}

vuint8m1_t test_vlse8_v_u8m1_m(vbool8_t mask, const uint8_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse8(mask, base, bstride, vl);
}

vuint8m2_t test_vlse8_v_u8m2_m(vbool4_t mask, const uint8_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse8(mask, base, bstride, vl);
}

vuint8m4_t test_vlse8_v_u8m4_m(vbool2_t mask, const uint8_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse8(mask, base, bstride, vl);
}

vuint8m8_t test_vlse8_v_u8m8_m(vbool1_t mask, const uint8_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse8(mask, base, bstride, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*[a-x0-9]+,\s*e[0-9]+,\s*m[f]?[1248],\s*t[au],\s*m[au]\s+vlse8\.[,\sa-x0-9()]+} 14 } } */
