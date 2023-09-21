/* { dg-do compile } */
/* { dg-options "-march=rv64gcv_zvfh -mabi=lp64d -Wno-psabi -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
vfloat64m1x6_t test_vlsseg6e64_v_f64m1x6(const float64_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg6e64_v_f64m1x6(base, bstride, vl);
}

vint64m1x6_t test_vlsseg6e64_v_i64m1x6(const int64_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg6e64_v_i64m1x6(base, bstride, vl);
}

vuint64m1x6_t test_vlsseg6e64_v_u64m1x6(const uint64_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg6e64_v_u64m1x6(base, bstride, vl);
}

vfloat64m1x6_t test_vlsseg6e64_v_f64m1x6_m(vbool64_t mask, const float64_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg6e64_v_f64m1x6_m(mask, base, bstride, vl);
}

vint64m1x6_t test_vlsseg6e64_v_i64m1x6_m(vbool64_t mask, const int64_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg6e64_v_i64m1x6_m(mask, base, bstride, vl);
}

vuint64m1x6_t test_vlsseg6e64_v_u64m1x6_m(vbool64_t mask, const uint64_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg6e64_v_u64m1x6_m(mask, base, bstride, vl);
}

