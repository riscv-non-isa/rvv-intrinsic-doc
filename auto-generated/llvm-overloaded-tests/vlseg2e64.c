// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -target-feature +zfh \
// RUN:   -target-feature +experimental-zvfh -disable-O0-optnone  \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

void test_vlseg2e64_v_f64m1_m(vfloat64m1_t *v0, vfloat64m1_t *v1, vbool64_t mask, vfloat64m1_t maskedoff0, vfloat64m1_t maskedoff1, const double *base, size_t vl) {
  return vlseg2e64(v0, v1, mask, maskedoff0, maskedoff1, base, vl);
}

void test_vlseg2e64_v_f64m2_m(vfloat64m2_t *v0, vfloat64m2_t *v1, vbool32_t mask, vfloat64m2_t maskedoff0, vfloat64m2_t maskedoff1, const double *base, size_t vl) {
  return vlseg2e64(v0, v1, mask, maskedoff0, maskedoff1, base, vl);
}

void test_vlseg2e64_v_f64m4_m(vfloat64m4_t *v0, vfloat64m4_t *v1, vbool16_t mask, vfloat64m4_t maskedoff0, vfloat64m4_t maskedoff1, const double *base, size_t vl) {
  return vlseg2e64(v0, v1, mask, maskedoff0, maskedoff1, base, vl);
}

void test_vlseg2e64_v_i64m1_m(vint64m1_t *v0, vint64m1_t *v1, vbool64_t mask, vint64m1_t maskedoff0, vint64m1_t maskedoff1, const int64_t *base, size_t vl) {
  return vlseg2e64(v0, v1, mask, maskedoff0, maskedoff1, base, vl);
}

void test_vlseg2e64_v_i64m2_m(vint64m2_t *v0, vint64m2_t *v1, vbool32_t mask, vint64m2_t maskedoff0, vint64m2_t maskedoff1, const int64_t *base, size_t vl) {
  return vlseg2e64(v0, v1, mask, maskedoff0, maskedoff1, base, vl);
}

void test_vlseg2e64_v_i64m4_m(vint64m4_t *v0, vint64m4_t *v1, vbool16_t mask, vint64m4_t maskedoff0, vint64m4_t maskedoff1, const int64_t *base, size_t vl) {
  return vlseg2e64(v0, v1, mask, maskedoff0, maskedoff1, base, vl);
}

void test_vlseg2e64_v_u64m1_m(vuint64m1_t *v0, vuint64m1_t *v1, vbool64_t mask, vuint64m1_t maskedoff0, vuint64m1_t maskedoff1, const uint64_t *base, size_t vl) {
  return vlseg2e64(v0, v1, mask, maskedoff0, maskedoff1, base, vl);
}

void test_vlseg2e64_v_u64m2_m(vuint64m2_t *v0, vuint64m2_t *v1, vbool32_t mask, vuint64m2_t maskedoff0, vuint64m2_t maskedoff1, const uint64_t *base, size_t vl) {
  return vlseg2e64(v0, v1, mask, maskedoff0, maskedoff1, base, vl);
}

void test_vlseg2e64_v_u64m4_m(vuint64m4_t *v0, vuint64m4_t *v1, vbool16_t mask, vuint64m4_t maskedoff0, vuint64m4_t maskedoff1, const uint64_t *base, size_t vl) {
  return vlseg2e64(v0, v1, mask, maskedoff0, maskedoff1, base, vl);
}

