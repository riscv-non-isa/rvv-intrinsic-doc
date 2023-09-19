// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -target-feature +zfh \
// RUN:   -target-feature +experimental-zvfh -disable-O0-optnone  \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

vfloat64m1x2_t test_vlsseg2e64_v_f64m1x2(const double *base, ptrdiff_t bstride,
                                         size_t vl) {
  return __riscv_vlsseg2e64_v_f64m1x2(base, bstride, vl);
}

vfloat64m2x2_t test_vlsseg2e64_v_f64m2x2(const double *base, ptrdiff_t bstride,
                                         size_t vl) {
  return __riscv_vlsseg2e64_v_f64m2x2(base, bstride, vl);
}

vfloat64m4x2_t test_vlsseg2e64_v_f64m4x2(const double *base, ptrdiff_t bstride,
                                         size_t vl) {
  return __riscv_vlsseg2e64_v_f64m4x2(base, bstride, vl);
}

vint64m1x2_t test_vlsseg2e64_v_i64m1x2(const int64_t *base, ptrdiff_t bstride,
                                       size_t vl) {
  return __riscv_vlsseg2e64_v_i64m1x2(base, bstride, vl);
}

vint64m2x2_t test_vlsseg2e64_v_i64m2x2(const int64_t *base, ptrdiff_t bstride,
                                       size_t vl) {
  return __riscv_vlsseg2e64_v_i64m2x2(base, bstride, vl);
}

vint64m4x2_t test_vlsseg2e64_v_i64m4x2(const int64_t *base, ptrdiff_t bstride,
                                       size_t vl) {
  return __riscv_vlsseg2e64_v_i64m4x2(base, bstride, vl);
}

vuint64m1x2_t test_vlsseg2e64_v_u64m1x2(const uint64_t *base, ptrdiff_t bstride,
                                        size_t vl) {
  return __riscv_vlsseg2e64_v_u64m1x2(base, bstride, vl);
}

vuint64m2x2_t test_vlsseg2e64_v_u64m2x2(const uint64_t *base, ptrdiff_t bstride,
                                        size_t vl) {
  return __riscv_vlsseg2e64_v_u64m2x2(base, bstride, vl);
}

vuint64m4x2_t test_vlsseg2e64_v_u64m4x2(const uint64_t *base, ptrdiff_t bstride,
                                        size_t vl) {
  return __riscv_vlsseg2e64_v_u64m4x2(base, bstride, vl);
}

vfloat64m1x2_t test_vlsseg2e64_v_f64m1x2_m(vbool64_t mask, const double *base,
                                           ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg2e64_v_f64m1x2_m(mask, base, bstride, vl);
}

vfloat64m2x2_t test_vlsseg2e64_v_f64m2x2_m(vbool32_t mask, const double *base,
                                           ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg2e64_v_f64m2x2_m(mask, base, bstride, vl);
}

vfloat64m4x2_t test_vlsseg2e64_v_f64m4x2_m(vbool16_t mask, const double *base,
                                           ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg2e64_v_f64m4x2_m(mask, base, bstride, vl);
}

vint64m1x2_t test_vlsseg2e64_v_i64m1x2_m(vbool64_t mask, const int64_t *base,
                                         ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg2e64_v_i64m1x2_m(mask, base, bstride, vl);
}

vint64m2x2_t test_vlsseg2e64_v_i64m2x2_m(vbool32_t mask, const int64_t *base,
                                         ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg2e64_v_i64m2x2_m(mask, base, bstride, vl);
}

vint64m4x2_t test_vlsseg2e64_v_i64m4x2_m(vbool16_t mask, const int64_t *base,
                                         ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg2e64_v_i64m4x2_m(mask, base, bstride, vl);
}

vuint64m1x2_t test_vlsseg2e64_v_u64m1x2_m(vbool64_t mask, const uint64_t *base,
                                          ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg2e64_v_u64m1x2_m(mask, base, bstride, vl);
}

vuint64m2x2_t test_vlsseg2e64_v_u64m2x2_m(vbool32_t mask, const uint64_t *base,
                                          ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg2e64_v_u64m2x2_m(mask, base, bstride, vl);
}

vuint64m4x2_t test_vlsseg2e64_v_u64m4x2_m(vbool16_t mask, const uint64_t *base,
                                          ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg2e64_v_u64m4x2_m(mask, base, bstride, vl);
}
