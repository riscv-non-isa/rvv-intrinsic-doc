// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -target-feature +zfh \
// RUN:   -target-feature +experimental-zvfh -disable-O0-optnone  \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

void test_vlseg3e64_v_f64m1_tu(vfloat64m1_t *v0, vfloat64m1_t *v1, vfloat64m1_t *v2, vfloat64m1_t maskedoff0, vfloat64m1_t maskedoff1, vfloat64m1_t maskedoff2, const double *base, size_t vl) {
  return vlseg3e64_v_f64m1_tu(v0, v1, v2, maskedoff0, maskedoff1, maskedoff2, base, vl);
}

void test_vlseg3e64_v_f64m2_tu(vfloat64m2_t *v0, vfloat64m2_t *v1, vfloat64m2_t *v2, vfloat64m2_t maskedoff0, vfloat64m2_t maskedoff1, vfloat64m2_t maskedoff2, const double *base, size_t vl) {
  return vlseg3e64_v_f64m2_tu(v0, v1, v2, maskedoff0, maskedoff1, maskedoff2, base, vl);
}

void test_vlseg3e64_v_i64m1_tu(vint64m1_t *v0, vint64m1_t *v1, vint64m1_t *v2, vint64m1_t maskedoff0, vint64m1_t maskedoff1, vint64m1_t maskedoff2, const int64_t *base, size_t vl) {
  return vlseg3e64_v_i64m1_tu(v0, v1, v2, maskedoff0, maskedoff1, maskedoff2, base, vl);
}

void test_vlseg3e64_v_i64m2_tu(vint64m2_t *v0, vint64m2_t *v1, vint64m2_t *v2, vint64m2_t maskedoff0, vint64m2_t maskedoff1, vint64m2_t maskedoff2, const int64_t *base, size_t vl) {
  return vlseg3e64_v_i64m2_tu(v0, v1, v2, maskedoff0, maskedoff1, maskedoff2, base, vl);
}

void test_vlseg3e64_v_u64m1_tu(vuint64m1_t *v0, vuint64m1_t *v1, vuint64m1_t *v2, vuint64m1_t maskedoff0, vuint64m1_t maskedoff1, vuint64m1_t maskedoff2, const uint64_t *base, size_t vl) {
  return vlseg3e64_v_u64m1_tu(v0, v1, v2, maskedoff0, maskedoff1, maskedoff2, base, vl);
}

void test_vlseg3e64_v_u64m2_tu(vuint64m2_t *v0, vuint64m2_t *v1, vuint64m2_t *v2, vuint64m2_t maskedoff0, vuint64m2_t maskedoff1, vuint64m2_t maskedoff2, const uint64_t *base, size_t vl) {
  return vlseg3e64_v_u64m2_tu(v0, v1, v2, maskedoff0, maskedoff1, maskedoff2, base, vl);
}

void test_vlseg3e64_v_f64m1_ta(vfloat64m1_t *v0, vfloat64m1_t *v1, vfloat64m1_t *v2, const double *base, size_t vl) {
  return vlseg3e64_v_f64m1_ta(v0, v1, v2, base, vl);
}

void test_vlseg3e64_v_f64m2_ta(vfloat64m2_t *v0, vfloat64m2_t *v1, vfloat64m2_t *v2, const double *base, size_t vl) {
  return vlseg3e64_v_f64m2_ta(v0, v1, v2, base, vl);
}

void test_vlseg3e64_v_i64m1_ta(vint64m1_t *v0, vint64m1_t *v1, vint64m1_t *v2, const int64_t *base, size_t vl) {
  return vlseg3e64_v_i64m1_ta(v0, v1, v2, base, vl);
}

void test_vlseg3e64_v_i64m2_ta(vint64m2_t *v0, vint64m2_t *v1, vint64m2_t *v2, const int64_t *base, size_t vl) {
  return vlseg3e64_v_i64m2_ta(v0, v1, v2, base, vl);
}

void test_vlseg3e64_v_u64m1_ta(vuint64m1_t *v0, vuint64m1_t *v1, vuint64m1_t *v2, const uint64_t *base, size_t vl) {
  return vlseg3e64_v_u64m1_ta(v0, v1, v2, base, vl);
}

void test_vlseg3e64_v_u64m2_ta(vuint64m2_t *v0, vuint64m2_t *v1, vuint64m2_t *v2, const uint64_t *base, size_t vl) {
  return vlseg3e64_v_u64m2_ta(v0, v1, v2, base, vl);
}

void test_vlseg3e64_v_f64m1_tuma(vfloat64m1_t *v0, vfloat64m1_t *v1, vfloat64m1_t *v2, vbool64_t mask, vfloat64m1_t maskedoff0, vfloat64m1_t maskedoff1, vfloat64m1_t maskedoff2, const double *base, size_t vl) {
  return vlseg3e64_v_f64m1_tuma(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, vl);
}

void test_vlseg3e64_v_f64m2_tuma(vfloat64m2_t *v0, vfloat64m2_t *v1, vfloat64m2_t *v2, vbool32_t mask, vfloat64m2_t maskedoff0, vfloat64m2_t maskedoff1, vfloat64m2_t maskedoff2, const double *base, size_t vl) {
  return vlseg3e64_v_f64m2_tuma(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, vl);
}

void test_vlseg3e64_v_i64m1_tuma(vint64m1_t *v0, vint64m1_t *v1, vint64m1_t *v2, vbool64_t mask, vint64m1_t maskedoff0, vint64m1_t maskedoff1, vint64m1_t maskedoff2, const int64_t *base, size_t vl) {
  return vlseg3e64_v_i64m1_tuma(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, vl);
}

void test_vlseg3e64_v_i64m2_tuma(vint64m2_t *v0, vint64m2_t *v1, vint64m2_t *v2, vbool32_t mask, vint64m2_t maskedoff0, vint64m2_t maskedoff1, vint64m2_t maskedoff2, const int64_t *base, size_t vl) {
  return vlseg3e64_v_i64m2_tuma(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, vl);
}

void test_vlseg3e64_v_u64m1_tuma(vuint64m1_t *v0, vuint64m1_t *v1, vuint64m1_t *v2, vbool64_t mask, vuint64m1_t maskedoff0, vuint64m1_t maskedoff1, vuint64m1_t maskedoff2, const uint64_t *base, size_t vl) {
  return vlseg3e64_v_u64m1_tuma(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, vl);
}

void test_vlseg3e64_v_u64m2_tuma(vuint64m2_t *v0, vuint64m2_t *v1, vuint64m2_t *v2, vbool32_t mask, vuint64m2_t maskedoff0, vuint64m2_t maskedoff1, vuint64m2_t maskedoff2, const uint64_t *base, size_t vl) {
  return vlseg3e64_v_u64m2_tuma(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, vl);
}

void test_vlseg3e64_v_f64m1_tumu(vfloat64m1_t *v0, vfloat64m1_t *v1, vfloat64m1_t *v2, vbool64_t mask, vfloat64m1_t maskedoff0, vfloat64m1_t maskedoff1, vfloat64m1_t maskedoff2, const double *base, size_t vl) {
  return vlseg3e64_v_f64m1_tumu(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, vl);
}

void test_vlseg3e64_v_f64m2_tumu(vfloat64m2_t *v0, vfloat64m2_t *v1, vfloat64m2_t *v2, vbool32_t mask, vfloat64m2_t maskedoff0, vfloat64m2_t maskedoff1, vfloat64m2_t maskedoff2, const double *base, size_t vl) {
  return vlseg3e64_v_f64m2_tumu(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, vl);
}

void test_vlseg3e64_v_i64m1_tumu(vint64m1_t *v0, vint64m1_t *v1, vint64m1_t *v2, vbool64_t mask, vint64m1_t maskedoff0, vint64m1_t maskedoff1, vint64m1_t maskedoff2, const int64_t *base, size_t vl) {
  return vlseg3e64_v_i64m1_tumu(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, vl);
}

void test_vlseg3e64_v_i64m2_tumu(vint64m2_t *v0, vint64m2_t *v1, vint64m2_t *v2, vbool32_t mask, vint64m2_t maskedoff0, vint64m2_t maskedoff1, vint64m2_t maskedoff2, const int64_t *base, size_t vl) {
  return vlseg3e64_v_i64m2_tumu(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, vl);
}

void test_vlseg3e64_v_u64m1_tumu(vuint64m1_t *v0, vuint64m1_t *v1, vuint64m1_t *v2, vbool64_t mask, vuint64m1_t maskedoff0, vuint64m1_t maskedoff1, vuint64m1_t maskedoff2, const uint64_t *base, size_t vl) {
  return vlseg3e64_v_u64m1_tumu(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, vl);
}

void test_vlseg3e64_v_u64m2_tumu(vuint64m2_t *v0, vuint64m2_t *v1, vuint64m2_t *v2, vbool32_t mask, vuint64m2_t maskedoff0, vuint64m2_t maskedoff1, vuint64m2_t maskedoff2, const uint64_t *base, size_t vl) {
  return vlseg3e64_v_u64m2_tumu(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, vl);
}

void test_vlseg3e64_v_f64m1_tama(vfloat64m1_t *v0, vfloat64m1_t *v1, vfloat64m1_t *v2, vbool64_t mask, const double *base, size_t vl) {
  return vlseg3e64_v_f64m1_tama(v0, v1, v2, mask, base, vl);
}

void test_vlseg3e64_v_f64m2_tama(vfloat64m2_t *v0, vfloat64m2_t *v1, vfloat64m2_t *v2, vbool32_t mask, const double *base, size_t vl) {
  return vlseg3e64_v_f64m2_tama(v0, v1, v2, mask, base, vl);
}

void test_vlseg3e64_v_i64m1_tama(vint64m1_t *v0, vint64m1_t *v1, vint64m1_t *v2, vbool64_t mask, const int64_t *base, size_t vl) {
  return vlseg3e64_v_i64m1_tama(v0, v1, v2, mask, base, vl);
}

void test_vlseg3e64_v_i64m2_tama(vint64m2_t *v0, vint64m2_t *v1, vint64m2_t *v2, vbool32_t mask, const int64_t *base, size_t vl) {
  return vlseg3e64_v_i64m2_tama(v0, v1, v2, mask, base, vl);
}

void test_vlseg3e64_v_u64m1_tama(vuint64m1_t *v0, vuint64m1_t *v1, vuint64m1_t *v2, vbool64_t mask, const uint64_t *base, size_t vl) {
  return vlseg3e64_v_u64m1_tama(v0, v1, v2, mask, base, vl);
}

void test_vlseg3e64_v_u64m2_tama(vuint64m2_t *v0, vuint64m2_t *v1, vuint64m2_t *v2, vbool32_t mask, const uint64_t *base, size_t vl) {
  return vlseg3e64_v_u64m2_tama(v0, v1, v2, mask, base, vl);
}

void test_vlseg3e64_v_f64m1_tamu(vfloat64m1_t *v0, vfloat64m1_t *v1, vfloat64m1_t *v2, vbool64_t mask, vfloat64m1_t maskedoff0, vfloat64m1_t maskedoff1, vfloat64m1_t maskedoff2, const double *base, size_t vl) {
  return vlseg3e64_v_f64m1_tamu(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, vl);
}

void test_vlseg3e64_v_f64m2_tamu(vfloat64m2_t *v0, vfloat64m2_t *v1, vfloat64m2_t *v2, vbool32_t mask, vfloat64m2_t maskedoff0, vfloat64m2_t maskedoff1, vfloat64m2_t maskedoff2, const double *base, size_t vl) {
  return vlseg3e64_v_f64m2_tamu(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, vl);
}

void test_vlseg3e64_v_i64m1_tamu(vint64m1_t *v0, vint64m1_t *v1, vint64m1_t *v2, vbool64_t mask, vint64m1_t maskedoff0, vint64m1_t maskedoff1, vint64m1_t maskedoff2, const int64_t *base, size_t vl) {
  return vlseg3e64_v_i64m1_tamu(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, vl);
}

void test_vlseg3e64_v_i64m2_tamu(vint64m2_t *v0, vint64m2_t *v1, vint64m2_t *v2, vbool32_t mask, vint64m2_t maskedoff0, vint64m2_t maskedoff1, vint64m2_t maskedoff2, const int64_t *base, size_t vl) {
  return vlseg3e64_v_i64m2_tamu(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, vl);
}

void test_vlseg3e64_v_u64m1_tamu(vuint64m1_t *v0, vuint64m1_t *v1, vuint64m1_t *v2, vbool64_t mask, vuint64m1_t maskedoff0, vuint64m1_t maskedoff1, vuint64m1_t maskedoff2, const uint64_t *base, size_t vl) {
  return vlseg3e64_v_u64m1_tamu(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, vl);
}

void test_vlseg3e64_v_u64m2_tamu(vuint64m2_t *v0, vuint64m2_t *v1, vuint64m2_t *v2, vbool32_t mask, vuint64m2_t maskedoff0, vuint64m2_t maskedoff1, vuint64m2_t maskedoff2, const uint64_t *base, size_t vl) {
  return vlseg3e64_v_u64m2_tamu(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, vl);
}

