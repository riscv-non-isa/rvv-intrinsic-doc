// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -target-feature +zfh \
// RUN:   -target-feature +experimental-zvfh -disable-O0-optnone  \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

#include <riscv_ntlh.h>

void test_vssseg8e64_v_f64m1x8_ntl_S1(double *base, ptrdiff_t bstride, vfloat64m1x8_t v_tuple, size_t vl, int domain) {
  return __riscv_vssseg8e64_v_f64m1x8_ntl(base, bstride, v_tuple, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vssseg8e64_v_i64m1x8_ntl_S1(int64_t *base, ptrdiff_t bstride, vint64m1x8_t v_tuple, size_t vl, int domain) {
  return __riscv_vssseg8e64_v_i64m1x8_ntl(base, bstride, v_tuple, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vssseg8e64_v_u64m1x8_ntl_S1(uint64_t *base, ptrdiff_t bstride, vuint64m1x8_t v_tuple, size_t vl, int domain) {
  return __riscv_vssseg8e64_v_u64m1x8_ntl(base, bstride, v_tuple, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vssseg8e64_v_f64m1x8_m_ntl_S1(vbool64_t mask, double *base, ptrdiff_t bstride, vfloat64m1x8_t v_tuple, size_t vl, int domain) {
  return __riscv_vssseg8e64_v_f64m1x8_m_ntl(mask, base, bstride, v_tuple, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vssseg8e64_v_i64m1x8_m_ntl_S1(vbool64_t mask, int64_t *base, ptrdiff_t bstride, vint64m1x8_t v_tuple, size_t vl, int domain) {
  return __riscv_vssseg8e64_v_i64m1x8_m_ntl(mask, base, bstride, v_tuple, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vssseg8e64_v_u64m1x8_m_ntl_S1(vbool64_t mask, uint64_t *base, ptrdiff_t bstride, vuint64m1x8_t v_tuple, size_t vl, int domain) {
  return __riscv_vssseg8e64_v_u64m1x8_m_ntl(mask, base, bstride, v_tuple, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

