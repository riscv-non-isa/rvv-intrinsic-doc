/* { dg-do compile } */
/* { dg-options "-march=rv64gc_zve64d -mabi=lp64d -Wno-psabi -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include "riscv_vector.h"

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
vfloat64m1_t test_vlse64_v_f64m1_m(vbool64_t mask, const float64_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse64(mask, base, bstride, vl);
}

vfloat64m2_t test_vlse64_v_f64m2_m(vbool32_t mask, const float64_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse64(mask, base, bstride, vl);
}

vfloat64m4_t test_vlse64_v_f64m4_m(vbool16_t mask, const float64_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse64(mask, base, bstride, vl);
}

vfloat64m8_t test_vlse64_v_f64m8_m(vbool8_t mask, const float64_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse64(mask, base, bstride, vl);
}

vint64m1_t test_vlse64_v_i64m1_m(vbool64_t mask, const int64_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse64(mask, base, bstride, vl);
}

vint64m2_t test_vlse64_v_i64m2_m(vbool32_t mask, const int64_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse64(mask, base, bstride, vl);
}

vint64m4_t test_vlse64_v_i64m4_m(vbool16_t mask, const int64_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse64(mask, base, bstride, vl);
}

vint64m8_t test_vlse64_v_i64m8_m(vbool8_t mask, const int64_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse64(mask, base, bstride, vl);
}

vuint64m1_t test_vlse64_v_u64m1_m(vbool64_t mask, const uint64_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse64(mask, base, bstride, vl);
}

vuint64m2_t test_vlse64_v_u64m2_m(vbool32_t mask, const uint64_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse64(mask, base, bstride, vl);
}

vuint64m4_t test_vlse64_v_u64m4_m(vbool16_t mask, const uint64_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse64(mask, base, bstride, vl);
}

vuint64m8_t test_vlse64_v_u64m8_m(vbool8_t mask, const uint64_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse64(mask, base, bstride, vl);
}

/* { dg-final { scan-assembler-times {vseti?vli\s+[a-z0-9]+,\s*[a-z0-9]+,\s*e[0-9]+,\s*mf?[1248],\s*t[au],\s*m[au]\s+vlse64\.[ivxfswum.]+\s+} 12 } } */
