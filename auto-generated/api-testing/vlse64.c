#include <stdint.h>
#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
vfloat64m1_t test_vlse64_v_f64m1(const float64_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse64_v_f64m1(base, bstride, vl);
}

vfloat64m2_t test_vlse64_v_f64m2(const float64_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse64_v_f64m2(base, bstride, vl);
}

vfloat64m4_t test_vlse64_v_f64m4(const float64_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse64_v_f64m4(base, bstride, vl);
}

vfloat64m8_t test_vlse64_v_f64m8(const float64_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse64_v_f64m8(base, bstride, vl);
}

vint64m1_t test_vlse64_v_i64m1(const int64_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse64_v_i64m1(base, bstride, vl);
}

vint64m2_t test_vlse64_v_i64m2(const int64_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse64_v_i64m2(base, bstride, vl);
}

vint64m4_t test_vlse64_v_i64m4(const int64_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse64_v_i64m4(base, bstride, vl);
}

vint64m8_t test_vlse64_v_i64m8(const int64_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse64_v_i64m8(base, bstride, vl);
}

vuint64m1_t test_vlse64_v_u64m1(const uint64_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse64_v_u64m1(base, bstride, vl);
}

vuint64m2_t test_vlse64_v_u64m2(const uint64_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse64_v_u64m2(base, bstride, vl);
}

vuint64m4_t test_vlse64_v_u64m4(const uint64_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse64_v_u64m4(base, bstride, vl);
}

vuint64m8_t test_vlse64_v_u64m8(const uint64_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse64_v_u64m8(base, bstride, vl);
}

vfloat64m1_t test_vlse64_v_f64m1_m(vbool64_t mask, vfloat64m1_t maskedoff, const float64_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse64_v_f64m1_m(mask, maskedoff, base, bstride, vl);
}

vfloat64m2_t test_vlse64_v_f64m2_m(vbool32_t mask, vfloat64m2_t maskedoff, const float64_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse64_v_f64m2_m(mask, maskedoff, base, bstride, vl);
}

vfloat64m4_t test_vlse64_v_f64m4_m(vbool16_t mask, vfloat64m4_t maskedoff, const float64_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse64_v_f64m4_m(mask, maskedoff, base, bstride, vl);
}

vfloat64m8_t test_vlse64_v_f64m8_m(vbool8_t mask, vfloat64m8_t maskedoff, const float64_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse64_v_f64m8_m(mask, maskedoff, base, bstride, vl);
}

vint64m1_t test_vlse64_v_i64m1_m(vbool64_t mask, vint64m1_t maskedoff, const int64_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse64_v_i64m1_m(mask, maskedoff, base, bstride, vl);
}

vint64m2_t test_vlse64_v_i64m2_m(vbool32_t mask, vint64m2_t maskedoff, const int64_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse64_v_i64m2_m(mask, maskedoff, base, bstride, vl);
}

vint64m4_t test_vlse64_v_i64m4_m(vbool16_t mask, vint64m4_t maskedoff, const int64_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse64_v_i64m4_m(mask, maskedoff, base, bstride, vl);
}

vint64m8_t test_vlse64_v_i64m8_m(vbool8_t mask, vint64m8_t maskedoff, const int64_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse64_v_i64m8_m(mask, maskedoff, base, bstride, vl);
}

vuint64m1_t test_vlse64_v_u64m1_m(vbool64_t mask, vuint64m1_t maskedoff, const uint64_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse64_v_u64m1_m(mask, maskedoff, base, bstride, vl);
}

vuint64m2_t test_vlse64_v_u64m2_m(vbool32_t mask, vuint64m2_t maskedoff, const uint64_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse64_v_u64m2_m(mask, maskedoff, base, bstride, vl);
}

vuint64m4_t test_vlse64_v_u64m4_m(vbool16_t mask, vuint64m4_t maskedoff, const uint64_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse64_v_u64m4_m(mask, maskedoff, base, bstride, vl);
}

vuint64m8_t test_vlse64_v_u64m8_m(vbool8_t mask, vuint64m8_t maskedoff, const uint64_t *base, ptrdiff_t bstride, size_t vl) {
  return vlse64_v_u64m8_m(mask, maskedoff, base, bstride, vl);
}

