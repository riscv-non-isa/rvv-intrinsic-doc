// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -target-feature +zfh \
// RUN:   -target-feature +experimental-zvfh -disable-O0-optnone  \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

void test_vsseg5e64_v_f64m1(double *base, vfloat64m1_t v0, vfloat64m1_t v1, vfloat64m1_t v2, vfloat64m1_t v3, vfloat64m1_t v4, size_t vl) {
  return __riscv_vsseg5e64(base, v0, v1, v2, v3, v4, vl);
}

void test_vsseg5e64_v_i64m1(int64_t *base, vint64m1_t v0, vint64m1_t v1, vint64m1_t v2, vint64m1_t v3, vint64m1_t v4, size_t vl) {
  return __riscv_vsseg5e64(base, v0, v1, v2, v3, v4, vl);
}

void test_vsseg5e64_v_u64m1(uint64_t *base, vuint64m1_t v0, vuint64m1_t v1, vuint64m1_t v2, vuint64m1_t v3, vuint64m1_t v4, size_t vl) {
  return __riscv_vsseg5e64(base, v0, v1, v2, v3, v4, vl);
}

void test_vsseg5e64_v_f64m1_m(vbool64_t mask, double *base, vfloat64m1_t v0, vfloat64m1_t v1, vfloat64m1_t v2, vfloat64m1_t v3, vfloat64m1_t v4, size_t vl) {
  return __riscv_vsseg5e64(mask, base, v0, v1, v2, v3, v4, vl);
}

void test_vsseg5e64_v_i64m1_m(vbool64_t mask, int64_t *base, vint64m1_t v0, vint64m1_t v1, vint64m1_t v2, vint64m1_t v3, vint64m1_t v4, size_t vl) {
  return __riscv_vsseg5e64(mask, base, v0, v1, v2, v3, v4, vl);
}

void test_vsseg5e64_v_u64m1_m(vbool64_t mask, uint64_t *base, vuint64m1_t v0, vuint64m1_t v1, vuint64m1_t v2, vuint64m1_t v3, vuint64m1_t v4, size_t vl) {
  return __riscv_vsseg5e64(mask, base, v0, v1, v2, v3, v4, vl);
}

