/* { dg-do compile } */
/* { dg-options "-march=rv32gc_zve64x -mabi=ilp32d -Wno-psabi -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include "riscv_vector.h"

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
vint32mf2x5_t test_vlsseg5e32_v_i32mf2x5(const int32_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg5e32_v_i32mf2x5(base, bstride, vl);
}

vint32m1x5_t test_vlsseg5e32_v_i32m1x5(const int32_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg5e32_v_i32m1x5(base, bstride, vl);
}

vuint32mf2x5_t test_vlsseg5e32_v_u32mf2x5(const uint32_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg5e32_v_u32mf2x5(base, bstride, vl);
}

vuint32m1x5_t test_vlsseg5e32_v_u32m1x5(const uint32_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg5e32_v_u32m1x5(base, bstride, vl);
}

vint32mf2x5_t test_vlsseg5e32_v_i32mf2x5_m(vbool64_t mask, const int32_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg5e32_v_i32mf2x5_m(mask, base, bstride, vl);
}

vint32m1x5_t test_vlsseg5e32_v_i32m1x5_m(vbool32_t mask, const int32_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg5e32_v_i32m1x5_m(mask, base, bstride, vl);
}

vuint32mf2x5_t test_vlsseg5e32_v_u32mf2x5_m(vbool64_t mask, const uint32_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg5e32_v_u32mf2x5_m(mask, base, bstride, vl);
}

vuint32m1x5_t test_vlsseg5e32_v_u32m1x5_m(vbool32_t mask, const uint32_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg5e32_v_u32m1x5_m(mask, base, bstride, vl);
}

/* { dg-final { scan-assembler-times {vseti?vli\s+[a-z0-9]+,\s*[a-z0-9]+,\s*e[0-9]+,\s*mf?[1248],\s*t[au],\s*m[au]\s+vlsseg5e32\.[ivxfswum.]+\s+} 8 } } */
