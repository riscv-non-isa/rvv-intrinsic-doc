/* { dg-do compile } */
/* { dg-options "-march=rv32gc_zve64d -mabi=ilp32d -Wno-psabi -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include "riscv_vector.h"

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
vint16mf4x4_t test_vlsseg4e16_v_i16mf4x4_m(vbool64_t mask, const int16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg4e16(mask, base, bstride, vl);
}

vint16mf2x4_t test_vlsseg4e16_v_i16mf2x4_m(vbool32_t mask, const int16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg4e16(mask, base, bstride, vl);
}

vint16m1x4_t test_vlsseg4e16_v_i16m1x4_m(vbool16_t mask, const int16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg4e16(mask, base, bstride, vl);
}

vint16m2x4_t test_vlsseg4e16_v_i16m2x4_m(vbool8_t mask, const int16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg4e16(mask, base, bstride, vl);
}

vuint16mf4x4_t test_vlsseg4e16_v_u16mf4x4_m(vbool64_t mask, const uint16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg4e16(mask, base, bstride, vl);
}

vuint16mf2x4_t test_vlsseg4e16_v_u16mf2x4_m(vbool32_t mask, const uint16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg4e16(mask, base, bstride, vl);
}

vuint16m1x4_t test_vlsseg4e16_v_u16m1x4_m(vbool16_t mask, const uint16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg4e16(mask, base, bstride, vl);
}

vuint16m2x4_t test_vlsseg4e16_v_u16m2x4_m(vbool8_t mask, const uint16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg4e16(mask, base, bstride, vl);
}

/* { dg-final { scan-assembler-times {vseti?vli\s+[a-z0-9]+,\s*[a-z0-9]+,\s*e[0-9]+,\s*mf?[1248],\s*t[au],\s*m[au]\s+vlsseg4e16\.[ivxfswum.]+\s+} 8 } } */
