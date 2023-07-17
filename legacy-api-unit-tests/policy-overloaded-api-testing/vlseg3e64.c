#include <stdint.h>
#include "rvv-v0p10-compatible-headers/overloaded-non-policy.h"
#include "rvv-v0p10-compatible-headers/overloaded-policy.h"
#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
void test_vlseg3e64_v_f64m1_tu(vfloat64m1_t *v0, vfloat64m1_t *v1, vfloat64m1_t *v2, vfloat64m1_t maskedoff0, vfloat64m1_t maskedoff1, vfloat64m1_t maskedoff2, const float64_t *base, size_t vl) {
  return vlseg3e64_tu(v0, v1, v2, maskedoff0, maskedoff1, maskedoff2, base, vl);
}

void test_vlseg3e64_v_f64m2_tu(vfloat64m2_t *v0, vfloat64m2_t *v1, vfloat64m2_t *v2, vfloat64m2_t maskedoff0, vfloat64m2_t maskedoff1, vfloat64m2_t maskedoff2, const float64_t *base, size_t vl) {
  return vlseg3e64_tu(v0, v1, v2, maskedoff0, maskedoff1, maskedoff2, base, vl);
}

void test_vlseg3e64_v_i64m1_tu(vint64m1_t *v0, vint64m1_t *v1, vint64m1_t *v2, vint64m1_t maskedoff0, vint64m1_t maskedoff1, vint64m1_t maskedoff2, const int64_t *base, size_t vl) {
  return vlseg3e64_tu(v0, v1, v2, maskedoff0, maskedoff1, maskedoff2, base, vl);
}

void test_vlseg3e64_v_i64m2_tu(vint64m2_t *v0, vint64m2_t *v1, vint64m2_t *v2, vint64m2_t maskedoff0, vint64m2_t maskedoff1, vint64m2_t maskedoff2, const int64_t *base, size_t vl) {
  return vlseg3e64_tu(v0, v1, v2, maskedoff0, maskedoff1, maskedoff2, base, vl);
}

void test_vlseg3e64_v_u64m1_tu(vuint64m1_t *v0, vuint64m1_t *v1, vuint64m1_t *v2, vuint64m1_t maskedoff0, vuint64m1_t maskedoff1, vuint64m1_t maskedoff2, const uint64_t *base, size_t vl) {
  return vlseg3e64_tu(v0, v1, v2, maskedoff0, maskedoff1, maskedoff2, base, vl);
}

void test_vlseg3e64_v_u64m2_tu(vuint64m2_t *v0, vuint64m2_t *v1, vuint64m2_t *v2, vuint64m2_t maskedoff0, vuint64m2_t maskedoff1, vuint64m2_t maskedoff2, const uint64_t *base, size_t vl) {
  return vlseg3e64_tu(v0, v1, v2, maskedoff0, maskedoff1, maskedoff2, base, vl);
}

void test_vlseg3e64_v_f64m1_tuma(vfloat64m1_t *v0, vfloat64m1_t *v1, vfloat64m1_t *v2, vbool64_t mask, vfloat64m1_t maskedoff0, vfloat64m1_t maskedoff1, vfloat64m1_t maskedoff2, const float64_t *base, size_t vl) {
  return vlseg3e64_tuma(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, vl);
}

void test_vlseg3e64_v_f64m2_tuma(vfloat64m2_t *v0, vfloat64m2_t *v1, vfloat64m2_t *v2, vbool32_t mask, vfloat64m2_t maskedoff0, vfloat64m2_t maskedoff1, vfloat64m2_t maskedoff2, const float64_t *base, size_t vl) {
  return vlseg3e64_tuma(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, vl);
}

void test_vlseg3e64_v_i64m1_tuma(vint64m1_t *v0, vint64m1_t *v1, vint64m1_t *v2, vbool64_t mask, vint64m1_t maskedoff0, vint64m1_t maskedoff1, vint64m1_t maskedoff2, const int64_t *base, size_t vl) {
  return vlseg3e64_tuma(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, vl);
}

void test_vlseg3e64_v_i64m2_tuma(vint64m2_t *v0, vint64m2_t *v1, vint64m2_t *v2, vbool32_t mask, vint64m2_t maskedoff0, vint64m2_t maskedoff1, vint64m2_t maskedoff2, const int64_t *base, size_t vl) {
  return vlseg3e64_tuma(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, vl);
}

void test_vlseg3e64_v_u64m1_tuma(vuint64m1_t *v0, vuint64m1_t *v1, vuint64m1_t *v2, vbool64_t mask, vuint64m1_t maskedoff0, vuint64m1_t maskedoff1, vuint64m1_t maskedoff2, const uint64_t *base, size_t vl) {
  return vlseg3e64_tuma(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, vl);
}

void test_vlseg3e64_v_u64m2_tuma(vuint64m2_t *v0, vuint64m2_t *v1, vuint64m2_t *v2, vbool32_t mask, vuint64m2_t maskedoff0, vuint64m2_t maskedoff1, vuint64m2_t maskedoff2, const uint64_t *base, size_t vl) {
  return vlseg3e64_tuma(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, vl);
}

void test_vlseg3e64_v_f64m1_tumu(vfloat64m1_t *v0, vfloat64m1_t *v1, vfloat64m1_t *v2, vbool64_t mask, vfloat64m1_t maskedoff0, vfloat64m1_t maskedoff1, vfloat64m1_t maskedoff2, const float64_t *base, size_t vl) {
  return vlseg3e64_tumu(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, vl);
}

void test_vlseg3e64_v_f64m2_tumu(vfloat64m2_t *v0, vfloat64m2_t *v1, vfloat64m2_t *v2, vbool32_t mask, vfloat64m2_t maskedoff0, vfloat64m2_t maskedoff1, vfloat64m2_t maskedoff2, const float64_t *base, size_t vl) {
  return vlseg3e64_tumu(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, vl);
}

void test_vlseg3e64_v_i64m1_tumu(vint64m1_t *v0, vint64m1_t *v1, vint64m1_t *v2, vbool64_t mask, vint64m1_t maskedoff0, vint64m1_t maskedoff1, vint64m1_t maskedoff2, const int64_t *base, size_t vl) {
  return vlseg3e64_tumu(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, vl);
}

void test_vlseg3e64_v_i64m2_tumu(vint64m2_t *v0, vint64m2_t *v1, vint64m2_t *v2, vbool32_t mask, vint64m2_t maskedoff0, vint64m2_t maskedoff1, vint64m2_t maskedoff2, const int64_t *base, size_t vl) {
  return vlseg3e64_tumu(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, vl);
}

void test_vlseg3e64_v_u64m1_tumu(vuint64m1_t *v0, vuint64m1_t *v1, vuint64m1_t *v2, vbool64_t mask, vuint64m1_t maskedoff0, vuint64m1_t maskedoff1, vuint64m1_t maskedoff2, const uint64_t *base, size_t vl) {
  return vlseg3e64_tumu(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, vl);
}

void test_vlseg3e64_v_u64m2_tumu(vuint64m2_t *v0, vuint64m2_t *v1, vuint64m2_t *v2, vbool32_t mask, vuint64m2_t maskedoff0, vuint64m2_t maskedoff1, vuint64m2_t maskedoff2, const uint64_t *base, size_t vl) {
  return vlseg3e64_tumu(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, vl);
}

void test_vlseg3e64_v_f64m1_tamu(vfloat64m1_t *v0, vfloat64m1_t *v1, vfloat64m1_t *v2, vbool64_t mask, vfloat64m1_t maskedoff0, vfloat64m1_t maskedoff1, vfloat64m1_t maskedoff2, const float64_t *base, size_t vl) {
  return vlseg3e64_tamu(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, vl);
}

void test_vlseg3e64_v_f64m2_tamu(vfloat64m2_t *v0, vfloat64m2_t *v1, vfloat64m2_t *v2, vbool32_t mask, vfloat64m2_t maskedoff0, vfloat64m2_t maskedoff1, vfloat64m2_t maskedoff2, const float64_t *base, size_t vl) {
  return vlseg3e64_tamu(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, vl);
}

void test_vlseg3e64_v_i64m1_tamu(vint64m1_t *v0, vint64m1_t *v1, vint64m1_t *v2, vbool64_t mask, vint64m1_t maskedoff0, vint64m1_t maskedoff1, vint64m1_t maskedoff2, const int64_t *base, size_t vl) {
  return vlseg3e64_tamu(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, vl);
}

void test_vlseg3e64_v_i64m2_tamu(vint64m2_t *v0, vint64m2_t *v1, vint64m2_t *v2, vbool32_t mask, vint64m2_t maskedoff0, vint64m2_t maskedoff1, vint64m2_t maskedoff2, const int64_t *base, size_t vl) {
  return vlseg3e64_tamu(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, vl);
}

void test_vlseg3e64_v_u64m1_tamu(vuint64m1_t *v0, vuint64m1_t *v1, vuint64m1_t *v2, vbool64_t mask, vuint64m1_t maskedoff0, vuint64m1_t maskedoff1, vuint64m1_t maskedoff2, const uint64_t *base, size_t vl) {
  return vlseg3e64_tamu(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, vl);
}

void test_vlseg3e64_v_u64m2_tamu(vuint64m2_t *v0, vuint64m2_t *v1, vuint64m2_t *v2, vbool32_t mask, vuint64m2_t maskedoff0, vuint64m2_t maskedoff1, vuint64m2_t maskedoff2, const uint64_t *base, size_t vl) {
  return vlseg3e64_tamu(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, vl);
}

