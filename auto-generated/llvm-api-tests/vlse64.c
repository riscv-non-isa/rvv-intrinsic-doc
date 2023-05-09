// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -target-feature +zfh \
// RUN:   -target-feature +experimental-zvfh -disable-O0-optnone  \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

vfloat64m1_t test_vlse64_v_f64m1(const double *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse64_v_f64m1(base, bstride, vl);
}

vfloat64m2_t test_vlse64_v_f64m2(const double *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse64_v_f64m2(base, bstride, vl);
}

vfloat64m4_t test_vlse64_v_f64m4(const double *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse64_v_f64m4(base, bstride, vl);
}

vfloat64m8_t test_vlse64_v_f64m8(const double *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse64_v_f64m8(base, bstride, vl);
}

vint64m1_t test_vlse64_v_i64m1(const int64_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse64_v_i64m1(base, bstride, vl);
}

vint64m2_t test_vlse64_v_i64m2(const int64_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse64_v_i64m2(base, bstride, vl);
}

vint64m4_t test_vlse64_v_i64m4(const int64_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse64_v_i64m4(base, bstride, vl);
}

vint64m8_t test_vlse64_v_i64m8(const int64_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse64_v_i64m8(base, bstride, vl);
}

vuint64m1_t test_vlse64_v_u64m1(const uint64_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse64_v_u64m1(base, bstride, vl);
}

vuint64m2_t test_vlse64_v_u64m2(const uint64_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse64_v_u64m2(base, bstride, vl);
}

vuint64m4_t test_vlse64_v_u64m4(const uint64_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse64_v_u64m4(base, bstride, vl);
}

vuint64m8_t test_vlse64_v_u64m8(const uint64_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse64_v_u64m8(base, bstride, vl);
}

vfloat64m1_t test_vlse64_v_f64m1_m(vbool64_t mask, const double *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse64_v_f64m1_m(mask, base, bstride, vl);
}

vfloat64m2_t test_vlse64_v_f64m2_m(vbool32_t mask, const double *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse64_v_f64m2_m(mask, base, bstride, vl);
}

vfloat64m4_t test_vlse64_v_f64m4_m(vbool16_t mask, const double *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse64_v_f64m4_m(mask, base, bstride, vl);
}

vfloat64m8_t test_vlse64_v_f64m8_m(vbool8_t mask, const double *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse64_v_f64m8_m(mask, base, bstride, vl);
}

vint64m1_t test_vlse64_v_i64m1_m(vbool64_t mask, const int64_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse64_v_i64m1_m(mask, base, bstride, vl);
}

vint64m2_t test_vlse64_v_i64m2_m(vbool32_t mask, const int64_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse64_v_i64m2_m(mask, base, bstride, vl);
}

vint64m4_t test_vlse64_v_i64m4_m(vbool16_t mask, const int64_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse64_v_i64m4_m(mask, base, bstride, vl);
}

vint64m8_t test_vlse64_v_i64m8_m(vbool8_t mask, const int64_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse64_v_i64m8_m(mask, base, bstride, vl);
}

vuint64m1_t test_vlse64_v_u64m1_m(vbool64_t mask, const uint64_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse64_v_u64m1_m(mask, base, bstride, vl);
}

vuint64m2_t test_vlse64_v_u64m2_m(vbool32_t mask, const uint64_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse64_v_u64m2_m(mask, base, bstride, vl);
}

vuint64m4_t test_vlse64_v_u64m4_m(vbool16_t mask, const uint64_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse64_v_u64m4_m(mask, base, bstride, vl);
}

vuint64m8_t test_vlse64_v_u64m8_m(vbool8_t mask, const uint64_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse64_v_u64m8_m(mask, base, bstride, vl);
}
