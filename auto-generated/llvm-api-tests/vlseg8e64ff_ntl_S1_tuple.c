// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -target-feature +zfh \
// RUN:   -target-feature +experimental-zvfh -disable-O0-optnone  \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

#include <riscv_ntlh.h>

vfloat64m1x8_t test_vlseg8e64ff_v_f64m1x8_ntl_S1(const double *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg8e64ff_v_f64m1x8_ntl(base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint64m1x8_t test_vlseg8e64ff_v_i64m1x8_ntl_S1(const int64_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg8e64ff_v_i64m1x8_ntl(base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint64m1x8_t test_vlseg8e64ff_v_u64m1x8_ntl_S1(const uint64_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg8e64ff_v_u64m1x8_ntl(base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vfloat64m1x8_t test_vlseg8e64ff_v_f64m1x8_m_ntl_S1(vbool64_t mask, const double *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg8e64ff_v_f64m1x8_m_ntl(mask, base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint64m1x8_t test_vlseg8e64ff_v_i64m1x8_m_ntl_S1(vbool64_t mask, const int64_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg8e64ff_v_i64m1x8_m_ntl(mask, base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint64m1x8_t test_vlseg8e64ff_v_u64m1x8_m_ntl_S1(vbool64_t mask, const uint64_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg8e64ff_v_u64m1x8_m_ntl(mask, base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

