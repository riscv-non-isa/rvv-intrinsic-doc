// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -target-feature +zfh \
// RUN:   -target-feature +experimental-zvfh -disable-O0-optnone  \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

vfloat64m1_t test_vle64_v_f64m1_tu(vfloat64m1_t maskedoff, const double *base, size_t vl) {
  return vle64_v_f64m1_tu(maskedoff, base, vl);
}

vfloat64m2_t test_vle64_v_f64m2_tu(vfloat64m2_t maskedoff, const double *base, size_t vl) {
  return vle64_v_f64m2_tu(maskedoff, base, vl);
}

vfloat64m4_t test_vle64_v_f64m4_tu(vfloat64m4_t maskedoff, const double *base, size_t vl) {
  return vle64_v_f64m4_tu(maskedoff, base, vl);
}

vfloat64m8_t test_vle64_v_f64m8_tu(vfloat64m8_t maskedoff, const double *base, size_t vl) {
  return vle64_v_f64m8_tu(maskedoff, base, vl);
}

vint64m1_t test_vle64_v_i64m1_tu(vint64m1_t maskedoff, const int64_t *base, size_t vl) {
  return vle64_v_i64m1_tu(maskedoff, base, vl);
}

vint64m2_t test_vle64_v_i64m2_tu(vint64m2_t maskedoff, const int64_t *base, size_t vl) {
  return vle64_v_i64m2_tu(maskedoff, base, vl);
}

vint64m4_t test_vle64_v_i64m4_tu(vint64m4_t maskedoff, const int64_t *base, size_t vl) {
  return vle64_v_i64m4_tu(maskedoff, base, vl);
}

vint64m8_t test_vle64_v_i64m8_tu(vint64m8_t maskedoff, const int64_t *base, size_t vl) {
  return vle64_v_i64m8_tu(maskedoff, base, vl);
}

vuint64m1_t test_vle64_v_u64m1_tu(vuint64m1_t maskedoff, const uint64_t *base, size_t vl) {
  return vle64_v_u64m1_tu(maskedoff, base, vl);
}

vuint64m2_t test_vle64_v_u64m2_tu(vuint64m2_t maskedoff, const uint64_t *base, size_t vl) {
  return vle64_v_u64m2_tu(maskedoff, base, vl);
}

vuint64m4_t test_vle64_v_u64m4_tu(vuint64m4_t maskedoff, const uint64_t *base, size_t vl) {
  return vle64_v_u64m4_tu(maskedoff, base, vl);
}

vuint64m8_t test_vle64_v_u64m8_tu(vuint64m8_t maskedoff, const uint64_t *base, size_t vl) {
  return vle64_v_u64m8_tu(maskedoff, base, vl);
}

vfloat64m1_t test_vle64_v_f64m1_tum(vbool64_t mask, vfloat64m1_t maskedoff, const double *base, size_t vl) {
  return vle64_v_f64m1_tum(mask, maskedoff, base, vl);
}

vfloat64m2_t test_vle64_v_f64m2_tum(vbool32_t mask, vfloat64m2_t maskedoff, const double *base, size_t vl) {
  return vle64_v_f64m2_tum(mask, maskedoff, base, vl);
}

vfloat64m4_t test_vle64_v_f64m4_tum(vbool16_t mask, vfloat64m4_t maskedoff, const double *base, size_t vl) {
  return vle64_v_f64m4_tum(mask, maskedoff, base, vl);
}

vfloat64m8_t test_vle64_v_f64m8_tum(vbool8_t mask, vfloat64m8_t maskedoff, const double *base, size_t vl) {
  return vle64_v_f64m8_tum(mask, maskedoff, base, vl);
}

vint64m1_t test_vle64_v_i64m1_tum(vbool64_t mask, vint64m1_t maskedoff, const int64_t *base, size_t vl) {
  return vle64_v_i64m1_tum(mask, maskedoff, base, vl);
}

vint64m2_t test_vle64_v_i64m2_tum(vbool32_t mask, vint64m2_t maskedoff, const int64_t *base, size_t vl) {
  return vle64_v_i64m2_tum(mask, maskedoff, base, vl);
}

vint64m4_t test_vle64_v_i64m4_tum(vbool16_t mask, vint64m4_t maskedoff, const int64_t *base, size_t vl) {
  return vle64_v_i64m4_tum(mask, maskedoff, base, vl);
}

vint64m8_t test_vle64_v_i64m8_tum(vbool8_t mask, vint64m8_t maskedoff, const int64_t *base, size_t vl) {
  return vle64_v_i64m8_tum(mask, maskedoff, base, vl);
}

vuint64m1_t test_vle64_v_u64m1_tum(vbool64_t mask, vuint64m1_t maskedoff, const uint64_t *base, size_t vl) {
  return vle64_v_u64m1_tum(mask, maskedoff, base, vl);
}

vuint64m2_t test_vle64_v_u64m2_tum(vbool32_t mask, vuint64m2_t maskedoff, const uint64_t *base, size_t vl) {
  return vle64_v_u64m2_tum(mask, maskedoff, base, vl);
}

vuint64m4_t test_vle64_v_u64m4_tum(vbool16_t mask, vuint64m4_t maskedoff, const uint64_t *base, size_t vl) {
  return vle64_v_u64m4_tum(mask, maskedoff, base, vl);
}

vuint64m8_t test_vle64_v_u64m8_tum(vbool8_t mask, vuint64m8_t maskedoff, const uint64_t *base, size_t vl) {
  return vle64_v_u64m8_tum(mask, maskedoff, base, vl);
}

vfloat64m1_t test_vle64_v_f64m1_tumu(vbool64_t mask, vfloat64m1_t maskedoff, const double *base, size_t vl) {
  return vle64_v_f64m1_tumu(mask, maskedoff, base, vl);
}

vfloat64m2_t test_vle64_v_f64m2_tumu(vbool32_t mask, vfloat64m2_t maskedoff, const double *base, size_t vl) {
  return vle64_v_f64m2_tumu(mask, maskedoff, base, vl);
}

vfloat64m4_t test_vle64_v_f64m4_tumu(vbool16_t mask, vfloat64m4_t maskedoff, const double *base, size_t vl) {
  return vle64_v_f64m4_tumu(mask, maskedoff, base, vl);
}

vfloat64m8_t test_vle64_v_f64m8_tumu(vbool8_t mask, vfloat64m8_t maskedoff, const double *base, size_t vl) {
  return vle64_v_f64m8_tumu(mask, maskedoff, base, vl);
}

vint64m1_t test_vle64_v_i64m1_tumu(vbool64_t mask, vint64m1_t maskedoff, const int64_t *base, size_t vl) {
  return vle64_v_i64m1_tumu(mask, maskedoff, base, vl);
}

vint64m2_t test_vle64_v_i64m2_tumu(vbool32_t mask, vint64m2_t maskedoff, const int64_t *base, size_t vl) {
  return vle64_v_i64m2_tumu(mask, maskedoff, base, vl);
}

vint64m4_t test_vle64_v_i64m4_tumu(vbool16_t mask, vint64m4_t maskedoff, const int64_t *base, size_t vl) {
  return vle64_v_i64m4_tumu(mask, maskedoff, base, vl);
}

vint64m8_t test_vle64_v_i64m8_tumu(vbool8_t mask, vint64m8_t maskedoff, const int64_t *base, size_t vl) {
  return vle64_v_i64m8_tumu(mask, maskedoff, base, vl);
}

vuint64m1_t test_vle64_v_u64m1_tumu(vbool64_t mask, vuint64m1_t maskedoff, const uint64_t *base, size_t vl) {
  return vle64_v_u64m1_tumu(mask, maskedoff, base, vl);
}

vuint64m2_t test_vle64_v_u64m2_tumu(vbool32_t mask, vuint64m2_t maskedoff, const uint64_t *base, size_t vl) {
  return vle64_v_u64m2_tumu(mask, maskedoff, base, vl);
}

vuint64m4_t test_vle64_v_u64m4_tumu(vbool16_t mask, vuint64m4_t maskedoff, const uint64_t *base, size_t vl) {
  return vle64_v_u64m4_tumu(mask, maskedoff, base, vl);
}

vuint64m8_t test_vle64_v_u64m8_tumu(vbool8_t mask, vuint64m8_t maskedoff, const uint64_t *base, size_t vl) {
  return vle64_v_u64m8_tumu(mask, maskedoff, base, vl);
}

vfloat64m1_t test_vle64_v_f64m1_mu(vbool64_t mask, vfloat64m1_t maskedoff, const double *base, size_t vl) {
  return vle64_v_f64m1_mu(mask, maskedoff, base, vl);
}

vfloat64m2_t test_vle64_v_f64m2_mu(vbool32_t mask, vfloat64m2_t maskedoff, const double *base, size_t vl) {
  return vle64_v_f64m2_mu(mask, maskedoff, base, vl);
}

vfloat64m4_t test_vle64_v_f64m4_mu(vbool16_t mask, vfloat64m4_t maskedoff, const double *base, size_t vl) {
  return vle64_v_f64m4_mu(mask, maskedoff, base, vl);
}

vfloat64m8_t test_vle64_v_f64m8_mu(vbool8_t mask, vfloat64m8_t maskedoff, const double *base, size_t vl) {
  return vle64_v_f64m8_mu(mask, maskedoff, base, vl);
}

vint64m1_t test_vle64_v_i64m1_mu(vbool64_t mask, vint64m1_t maskedoff, const int64_t *base, size_t vl) {
  return vle64_v_i64m1_mu(mask, maskedoff, base, vl);
}

vint64m2_t test_vle64_v_i64m2_mu(vbool32_t mask, vint64m2_t maskedoff, const int64_t *base, size_t vl) {
  return vle64_v_i64m2_mu(mask, maskedoff, base, vl);
}

vint64m4_t test_vle64_v_i64m4_mu(vbool16_t mask, vint64m4_t maskedoff, const int64_t *base, size_t vl) {
  return vle64_v_i64m4_mu(mask, maskedoff, base, vl);
}

vint64m8_t test_vle64_v_i64m8_mu(vbool8_t mask, vint64m8_t maskedoff, const int64_t *base, size_t vl) {
  return vle64_v_i64m8_mu(mask, maskedoff, base, vl);
}

vuint64m1_t test_vle64_v_u64m1_mu(vbool64_t mask, vuint64m1_t maskedoff, const uint64_t *base, size_t vl) {
  return vle64_v_u64m1_mu(mask, maskedoff, base, vl);
}

vuint64m2_t test_vle64_v_u64m2_mu(vbool32_t mask, vuint64m2_t maskedoff, const uint64_t *base, size_t vl) {
  return vle64_v_u64m2_mu(mask, maskedoff, base, vl);
}

vuint64m4_t test_vle64_v_u64m4_mu(vbool16_t mask, vuint64m4_t maskedoff, const uint64_t *base, size_t vl) {
  return vle64_v_u64m4_mu(mask, maskedoff, base, vl);
}

vuint64m8_t test_vle64_v_u64m8_mu(vbool8_t mask, vuint64m8_t maskedoff, const uint64_t *base, size_t vl) {
  return vle64_v_u64m8_mu(mask, maskedoff, base, vl);
}

