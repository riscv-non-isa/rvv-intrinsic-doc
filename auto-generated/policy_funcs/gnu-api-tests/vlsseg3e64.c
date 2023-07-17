/* { dg-do compile } */
/* { dg-options "-march=rv64gcv -mabi=lp64d -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
vfloat64m1x3_t test_vlsseg3e64_v_f64m1x3_tu(vfloat64m1x3_t maskedoff_tuple, const float64_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg3e64_v_f64m1x3_tu(maskedoff_tuple, base, bstride, vl);
}

vfloat64m2x3_t test_vlsseg3e64_v_f64m2x3_tu(vfloat64m2x3_t maskedoff_tuple, const float64_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg3e64_v_f64m2x3_tu(maskedoff_tuple, base, bstride, vl);
}

vint64m1x3_t test_vlsseg3e64_v_i64m1x3_tu(vint64m1x3_t maskedoff_tuple, const int64_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg3e64_v_i64m1x3_tu(maskedoff_tuple, base, bstride, vl);
}

vint64m2x3_t test_vlsseg3e64_v_i64m2x3_tu(vint64m2x3_t maskedoff_tuple, const int64_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg3e64_v_i64m2x3_tu(maskedoff_tuple, base, bstride, vl);
}

vuint64m1x3_t test_vlsseg3e64_v_u64m1x3_tu(vuint64m1x3_t maskedoff_tuple, const uint64_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg3e64_v_u64m1x3_tu(maskedoff_tuple, base, bstride, vl);
}

vuint64m2x3_t test_vlsseg3e64_v_u64m2x3_tu(vuint64m2x3_t maskedoff_tuple, const uint64_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg3e64_v_u64m2x3_tu(maskedoff_tuple, base, bstride, vl);
}

vfloat64m1x3_t test_vlsseg3e64_v_f64m1x3_tum(vbool64_t mask, vfloat64m1x3_t maskedoff_tuple, const float64_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg3e64_v_f64m1x3_tum(mask, maskedoff_tuple, base, bstride, vl);
}

vfloat64m2x3_t test_vlsseg3e64_v_f64m2x3_tum(vbool32_t mask, vfloat64m2x3_t maskedoff_tuple, const float64_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg3e64_v_f64m2x3_tum(mask, maskedoff_tuple, base, bstride, vl);
}

vint64m1x3_t test_vlsseg3e64_v_i64m1x3_tum(vbool64_t mask, vint64m1x3_t maskedoff_tuple, const int64_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg3e64_v_i64m1x3_tum(mask, maskedoff_tuple, base, bstride, vl);
}

vint64m2x3_t test_vlsseg3e64_v_i64m2x3_tum(vbool32_t mask, vint64m2x3_t maskedoff_tuple, const int64_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg3e64_v_i64m2x3_tum(mask, maskedoff_tuple, base, bstride, vl);
}

vuint64m1x3_t test_vlsseg3e64_v_u64m1x3_tum(vbool64_t mask, vuint64m1x3_t maskedoff_tuple, const uint64_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg3e64_v_u64m1x3_tum(mask, maskedoff_tuple, base, bstride, vl);
}

vuint64m2x3_t test_vlsseg3e64_v_u64m2x3_tum(vbool32_t mask, vuint64m2x3_t maskedoff_tuple, const uint64_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg3e64_v_u64m2x3_tum(mask, maskedoff_tuple, base, bstride, vl);
}

vfloat64m1x3_t test_vlsseg3e64_v_f64m1x3_tumu(vbool64_t mask, vfloat64m1x3_t maskedoff_tuple, const float64_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg3e64_v_f64m1x3_tumu(mask, maskedoff_tuple, base, bstride, vl);
}

vfloat64m2x3_t test_vlsseg3e64_v_f64m2x3_tumu(vbool32_t mask, vfloat64m2x3_t maskedoff_tuple, const float64_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg3e64_v_f64m2x3_tumu(mask, maskedoff_tuple, base, bstride, vl);
}

vint64m1x3_t test_vlsseg3e64_v_i64m1x3_tumu(vbool64_t mask, vint64m1x3_t maskedoff_tuple, const int64_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg3e64_v_i64m1x3_tumu(mask, maskedoff_tuple, base, bstride, vl);
}

vint64m2x3_t test_vlsseg3e64_v_i64m2x3_tumu(vbool32_t mask, vint64m2x3_t maskedoff_tuple, const int64_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg3e64_v_i64m2x3_tumu(mask, maskedoff_tuple, base, bstride, vl);
}

vuint64m1x3_t test_vlsseg3e64_v_u64m1x3_tumu(vbool64_t mask, vuint64m1x3_t maskedoff_tuple, const uint64_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg3e64_v_u64m1x3_tumu(mask, maskedoff_tuple, base, bstride, vl);
}

vuint64m2x3_t test_vlsseg3e64_v_u64m2x3_tumu(vbool32_t mask, vuint64m2x3_t maskedoff_tuple, const uint64_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg3e64_v_u64m2x3_tumu(mask, maskedoff_tuple, base, bstride, vl);
}

vfloat64m1x3_t test_vlsseg3e64_v_f64m1x3_mu(vbool64_t mask, vfloat64m1x3_t maskedoff_tuple, const float64_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg3e64_v_f64m1x3_mu(mask, maskedoff_tuple, base, bstride, vl);
}

vfloat64m2x3_t test_vlsseg3e64_v_f64m2x3_mu(vbool32_t mask, vfloat64m2x3_t maskedoff_tuple, const float64_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg3e64_v_f64m2x3_mu(mask, maskedoff_tuple, base, bstride, vl);
}

vint64m1x3_t test_vlsseg3e64_v_i64m1x3_mu(vbool64_t mask, vint64m1x3_t maskedoff_tuple, const int64_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg3e64_v_i64m1x3_mu(mask, maskedoff_tuple, base, bstride, vl);
}

vint64m2x3_t test_vlsseg3e64_v_i64m2x3_mu(vbool32_t mask, vint64m2x3_t maskedoff_tuple, const int64_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg3e64_v_i64m2x3_mu(mask, maskedoff_tuple, base, bstride, vl);
}

vuint64m1x3_t test_vlsseg3e64_v_u64m1x3_mu(vbool64_t mask, vuint64m1x3_t maskedoff_tuple, const uint64_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg3e64_v_u64m1x3_mu(mask, maskedoff_tuple, base, bstride, vl);
}

vuint64m2x3_t test_vlsseg3e64_v_u64m2x3_mu(vbool32_t mask, vuint64m2x3_t maskedoff_tuple, const uint64_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg3e64_v_u64m2x3_mu(mask, maskedoff_tuple, base, bstride, vl);
}

/* { dg-final { scan-assembler-times {vseti?vli\s+[a-z0-9]+,\s*[a-z0-9]+,\s*e[0-9]+,\s*mf?[1248],\s*t[au],\s*m[au]\s+vlsseg3e64\.[ivxfswum.]+\s+} 24 } } */
