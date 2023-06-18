// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -target-feature +zfh \
// RUN:   -target-feature +experimental-zvfh -disable-O0-optnone  \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

#include <riscv_ntlh.h>

vfloat64m1x7_t test_vlseg7e64_v_f64m1x7_ntl_ALL(const double *base, size_t vl, int domain) {
  return __riscv_vlseg7e64_v_f64m1x7_ntl(base, vl, __RISCV_NTLH_ALL);
}

vint64m1x7_t test_vlseg7e64_v_i64m1x7_ntl_ALL(const int64_t *base, size_t vl, int domain) {
  return __riscv_vlseg7e64_v_i64m1x7_ntl(base, vl, __RISCV_NTLH_ALL);
}

vuint64m1x7_t test_vlseg7e64_v_u64m1x7_ntl_ALL(const uint64_t *base, size_t vl, int domain) {
  return __riscv_vlseg7e64_v_u64m1x7_ntl(base, vl, __RISCV_NTLH_ALL);
}

vfloat64m1x7_t test_vlseg7e64_v_f64m1x7_m_ntl_ALL(vbool64_t mask, const double *base, size_t vl, int domain) {
  return __riscv_vlseg7e64_v_f64m1x7_m_ntl(mask, base, vl, __RISCV_NTLH_ALL);
}

vint64m1x7_t test_vlseg7e64_v_i64m1x7_m_ntl_ALL(vbool64_t mask, const int64_t *base, size_t vl, int domain) {
  return __riscv_vlseg7e64_v_i64m1x7_m_ntl(mask, base, vl, __RISCV_NTLH_ALL);
}

vuint64m1x7_t test_vlseg7e64_v_u64m1x7_m_ntl_ALL(vbool64_t mask, const uint64_t *base, size_t vl, int domain) {
  return __riscv_vlseg7e64_v_u64m1x7_m_ntl(mask, base, vl, __RISCV_NTLH_ALL);
}

