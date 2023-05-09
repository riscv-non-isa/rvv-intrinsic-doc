// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -target-feature +zfh \
// RUN:   -target-feature +experimental-zvfh -disable-O0-optnone  \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

void test_vlsseg2e64_v_f64m1_tu(vfloat64m1_t *v0, vfloat64m1_t *v1, vfloat64m1_t maskedoff0, vfloat64m1_t maskedoff1, const double *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg2e64_tu(v0, v1, maskedoff0, maskedoff1, base, bstride, vl);
}

void test_vlsseg2e64_v_f64m2_tu(vfloat64m2_t *v0, vfloat64m2_t *v1, vfloat64m2_t maskedoff0, vfloat64m2_t maskedoff1, const double *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg2e64_tu(v0, v1, maskedoff0, maskedoff1, base, bstride, vl);
}

void test_vlsseg2e64_v_f64m4_tu(vfloat64m4_t *v0, vfloat64m4_t *v1, vfloat64m4_t maskedoff0, vfloat64m4_t maskedoff1, const double *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg2e64_tu(v0, v1, maskedoff0, maskedoff1, base, bstride, vl);
}

void test_vlsseg2e64_v_i64m1_tu(vint64m1_t *v0, vint64m1_t *v1, vint64m1_t maskedoff0, vint64m1_t maskedoff1, const int64_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg2e64_tu(v0, v1, maskedoff0, maskedoff1, base, bstride, vl);
}

void test_vlsseg2e64_v_i64m2_tu(vint64m2_t *v0, vint64m2_t *v1, vint64m2_t maskedoff0, vint64m2_t maskedoff1, const int64_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg2e64_tu(v0, v1, maskedoff0, maskedoff1, base, bstride, vl);
}

void test_vlsseg2e64_v_i64m4_tu(vint64m4_t *v0, vint64m4_t *v1, vint64m4_t maskedoff0, vint64m4_t maskedoff1, const int64_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg2e64_tu(v0, v1, maskedoff0, maskedoff1, base, bstride, vl);
}

void test_vlsseg2e64_v_u64m1_tu(vuint64m1_t *v0, vuint64m1_t *v1, vuint64m1_t maskedoff0, vuint64m1_t maskedoff1, const uint64_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg2e64_tu(v0, v1, maskedoff0, maskedoff1, base, bstride, vl);
}

void test_vlsseg2e64_v_u64m2_tu(vuint64m2_t *v0, vuint64m2_t *v1, vuint64m2_t maskedoff0, vuint64m2_t maskedoff1, const uint64_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg2e64_tu(v0, v1, maskedoff0, maskedoff1, base, bstride, vl);
}

void test_vlsseg2e64_v_u64m4_tu(vuint64m4_t *v0, vuint64m4_t *v1, vuint64m4_t maskedoff0, vuint64m4_t maskedoff1, const uint64_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg2e64_tu(v0, v1, maskedoff0, maskedoff1, base, bstride, vl);
}

void test_vlsseg2e64_v_f64m1_tum(vfloat64m1_t *v0, vfloat64m1_t *v1, vbool64_t mask, vfloat64m1_t maskedoff0, vfloat64m1_t maskedoff1, const double *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg2e64_tum(v0, v1, mask, maskedoff0, maskedoff1, base, bstride, vl);
}

void test_vlsseg2e64_v_f64m2_tum(vfloat64m2_t *v0, vfloat64m2_t *v1, vbool32_t mask, vfloat64m2_t maskedoff0, vfloat64m2_t maskedoff1, const double *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg2e64_tum(v0, v1, mask, maskedoff0, maskedoff1, base, bstride, vl);
}

void test_vlsseg2e64_v_f64m4_tum(vfloat64m4_t *v0, vfloat64m4_t *v1, vbool16_t mask, vfloat64m4_t maskedoff0, vfloat64m4_t maskedoff1, const double *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg2e64_tum(v0, v1, mask, maskedoff0, maskedoff1, base, bstride, vl);
}

void test_vlsseg2e64_v_i64m1_tum(vint64m1_t *v0, vint64m1_t *v1, vbool64_t mask, vint64m1_t maskedoff0, vint64m1_t maskedoff1, const int64_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg2e64_tum(v0, v1, mask, maskedoff0, maskedoff1, base, bstride, vl);
}

void test_vlsseg2e64_v_i64m2_tum(vint64m2_t *v0, vint64m2_t *v1, vbool32_t mask, vint64m2_t maskedoff0, vint64m2_t maskedoff1, const int64_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg2e64_tum(v0, v1, mask, maskedoff0, maskedoff1, base, bstride, vl);
}

void test_vlsseg2e64_v_i64m4_tum(vint64m4_t *v0, vint64m4_t *v1, vbool16_t mask, vint64m4_t maskedoff0, vint64m4_t maskedoff1, const int64_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg2e64_tum(v0, v1, mask, maskedoff0, maskedoff1, base, bstride, vl);
}

void test_vlsseg2e64_v_u64m1_tum(vuint64m1_t *v0, vuint64m1_t *v1, vbool64_t mask, vuint64m1_t maskedoff0, vuint64m1_t maskedoff1, const uint64_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg2e64_tum(v0, v1, mask, maskedoff0, maskedoff1, base, bstride, vl);
}

void test_vlsseg2e64_v_u64m2_tum(vuint64m2_t *v0, vuint64m2_t *v1, vbool32_t mask, vuint64m2_t maskedoff0, vuint64m2_t maskedoff1, const uint64_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg2e64_tum(v0, v1, mask, maskedoff0, maskedoff1, base, bstride, vl);
}

void test_vlsseg2e64_v_u64m4_tum(vuint64m4_t *v0, vuint64m4_t *v1, vbool16_t mask, vuint64m4_t maskedoff0, vuint64m4_t maskedoff1, const uint64_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg2e64_tum(v0, v1, mask, maskedoff0, maskedoff1, base, bstride, vl);
}

void test_vlsseg2e64_v_f64m1_tumu(vfloat64m1_t *v0, vfloat64m1_t *v1, vbool64_t mask, vfloat64m1_t maskedoff0, vfloat64m1_t maskedoff1, const double *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg2e64_tumu(v0, v1, mask, maskedoff0, maskedoff1, base, bstride, vl);
}

void test_vlsseg2e64_v_f64m2_tumu(vfloat64m2_t *v0, vfloat64m2_t *v1, vbool32_t mask, vfloat64m2_t maskedoff0, vfloat64m2_t maskedoff1, const double *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg2e64_tumu(v0, v1, mask, maskedoff0, maskedoff1, base, bstride, vl);
}

void test_vlsseg2e64_v_f64m4_tumu(vfloat64m4_t *v0, vfloat64m4_t *v1, vbool16_t mask, vfloat64m4_t maskedoff0, vfloat64m4_t maskedoff1, const double *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg2e64_tumu(v0, v1, mask, maskedoff0, maskedoff1, base, bstride, vl);
}

void test_vlsseg2e64_v_i64m1_tumu(vint64m1_t *v0, vint64m1_t *v1, vbool64_t mask, vint64m1_t maskedoff0, vint64m1_t maskedoff1, const int64_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg2e64_tumu(v0, v1, mask, maskedoff0, maskedoff1, base, bstride, vl);
}

void test_vlsseg2e64_v_i64m2_tumu(vint64m2_t *v0, vint64m2_t *v1, vbool32_t mask, vint64m2_t maskedoff0, vint64m2_t maskedoff1, const int64_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg2e64_tumu(v0, v1, mask, maskedoff0, maskedoff1, base, bstride, vl);
}

void test_vlsseg2e64_v_i64m4_tumu(vint64m4_t *v0, vint64m4_t *v1, vbool16_t mask, vint64m4_t maskedoff0, vint64m4_t maskedoff1, const int64_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg2e64_tumu(v0, v1, mask, maskedoff0, maskedoff1, base, bstride, vl);
}

void test_vlsseg2e64_v_u64m1_tumu(vuint64m1_t *v0, vuint64m1_t *v1, vbool64_t mask, vuint64m1_t maskedoff0, vuint64m1_t maskedoff1, const uint64_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg2e64_tumu(v0, v1, mask, maskedoff0, maskedoff1, base, bstride, vl);
}

void test_vlsseg2e64_v_u64m2_tumu(vuint64m2_t *v0, vuint64m2_t *v1, vbool32_t mask, vuint64m2_t maskedoff0, vuint64m2_t maskedoff1, const uint64_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg2e64_tumu(v0, v1, mask, maskedoff0, maskedoff1, base, bstride, vl);
}

void test_vlsseg2e64_v_u64m4_tumu(vuint64m4_t *v0, vuint64m4_t *v1, vbool16_t mask, vuint64m4_t maskedoff0, vuint64m4_t maskedoff1, const uint64_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg2e64_tumu(v0, v1, mask, maskedoff0, maskedoff1, base, bstride, vl);
}
