/* { dg-do compile } */
/* { dg-options "-march=rv64gcv_zvfh -mabi=lp64d -Wno-psabi -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
vfloat32mf2x7_t test_vlsseg7e32_v_f32mf2x7_m(vbool64_t mask, const float32_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg7e32(mask, base, bstride, vl);
}

vfloat32m1x7_t test_vlsseg7e32_v_f32m1x7_m(vbool32_t mask, const float32_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg7e32(mask, base, bstride, vl);
}

vint32mf2x7_t test_vlsseg7e32_v_i32mf2x7_m(vbool64_t mask, const int32_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg7e32(mask, base, bstride, vl);
}

vint32m1x7_t test_vlsseg7e32_v_i32m1x7_m(vbool32_t mask, const int32_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg7e32(mask, base, bstride, vl);
}

vuint32mf2x7_t test_vlsseg7e32_v_u32mf2x7_m(vbool64_t mask, const uint32_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg7e32(mask, base, bstride, vl);
}

vuint32m1x7_t test_vlsseg7e32_v_u32m1x7_m(vbool32_t mask, const uint32_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg7e32(mask, base, bstride, vl);
}

