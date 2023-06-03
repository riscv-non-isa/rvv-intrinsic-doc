// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -target-feature +zfh \
// RUN:   -target-feature +experimental-zvfh -disable-O0-optnone  \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

vfloat64m1x5_t test_vlsseg5e64_v_f64m1x5(const double *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg5e64_v_f64m1x5(base, bstride, vl);
}

vint64m1x5_t test_vlsseg5e64_v_i64m1x5(const int64_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg5e64_v_i64m1x5(base, bstride, vl);
}

vuint64m1x5_t test_vlsseg5e64_v_u64m1x5(const uint64_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg5e64_v_u64m1x5(base, bstride, vl);
}

vfloat64m1x5_t test_vlsseg5e64_v_f64m1x5_m(vbool64_t mask, const double *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg5e64_v_f64m1x5_m(mask, base, bstride, vl);
}

vint64m1x5_t test_vlsseg5e64_v_i64m1x5_m(vbool64_t mask, const int64_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg5e64_v_i64m1x5_m(mask, base, bstride, vl);
}

vuint64m1x5_t test_vlsseg5e64_v_u64m1x5_m(vbool64_t mask, const uint64_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg5e64_v_u64m1x5_m(mask, base, bstride, vl);
}

