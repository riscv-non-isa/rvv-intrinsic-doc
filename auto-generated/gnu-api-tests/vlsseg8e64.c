/* { dg-do compile } */
/* { dg-options "-march=rv64gcv -mabi=lp64d -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
vfloat64m1x8_t test_vlsseg8e64_v_f64m1x8(const float64_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg8e64_v_f64m1x8(base, bstride, vl);
}

vint64m1x8_t test_vlsseg8e64_v_i64m1x8(const int64_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg8e64_v_i64m1x8(base, bstride, vl);
}

vuint64m1x8_t test_vlsseg8e64_v_u64m1x8(const uint64_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg8e64_v_u64m1x8(base, bstride, vl);
}

vfloat64m1x8_t test_vlsseg8e64_v_f64m1x8_m(vbool64_t mask, const float64_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg8e64_v_f64m1x8_m(mask, base, bstride, vl);
}

vint64m1x8_t test_vlsseg8e64_v_i64m1x8_m(vbool64_t mask, const int64_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg8e64_v_i64m1x8_m(mask, base, bstride, vl);
}

vuint64m1x8_t test_vlsseg8e64_v_u64m1x8_m(vbool64_t mask, const uint64_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg8e64_v_u64m1x8_m(mask, base, bstride, vl);
}

/* { dg-final { scan-assembler-times {vseti?vli\s+[a-z0-9]+,\s*[a-z0-9]+,\s*e[0-9]+,\s*mf?[1248],\s*t[au],\s*m[au]\s+vlsseg8e64\.[ivxfswum.]+\s+} 6 } } */
