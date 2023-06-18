// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -target-feature +zfh \
// RUN:   -target-feature +experimental-zvfh -disable-O0-optnone  \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

#include <riscv_ntlh.h>

vfloat64m1x7_t test_vlseg7e64_v_f64m1x7_tu_ntl_PALL(vfloat64m1x7_t maskedoff_tuple, const double *base, size_t vl, int domain) {
  return __riscv_vlseg7e64_v_f64m1x7_tu_ntl(maskedoff_tuple, base, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint64m1x7_t test_vlseg7e64_v_i64m1x7_tu_ntl_PALL(vint64m1x7_t maskedoff_tuple, const int64_t *base, size_t vl, int domain) {
  return __riscv_vlseg7e64_v_i64m1x7_tu_ntl(maskedoff_tuple, base, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint64m1x7_t test_vlseg7e64_v_u64m1x7_tu_ntl_PALL(vuint64m1x7_t maskedoff_tuple, const uint64_t *base, size_t vl, int domain) {
  return __riscv_vlseg7e64_v_u64m1x7_tu_ntl(maskedoff_tuple, base, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vfloat64m1x7_t test_vlseg7e64_v_f64m1x7_tum_ntl_PALL(vbool64_t mask, vfloat64m1x7_t maskedoff_tuple, const double *base, size_t vl, int domain) {
  return __riscv_vlseg7e64_v_f64m1x7_tum_ntl(mask, maskedoff_tuple, base, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint64m1x7_t test_vlseg7e64_v_i64m1x7_tum_ntl_PALL(vbool64_t mask, vint64m1x7_t maskedoff_tuple, const int64_t *base, size_t vl, int domain) {
  return __riscv_vlseg7e64_v_i64m1x7_tum_ntl(mask, maskedoff_tuple, base, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint64m1x7_t test_vlseg7e64_v_u64m1x7_tum_ntl_PALL(vbool64_t mask, vuint64m1x7_t maskedoff_tuple, const uint64_t *base, size_t vl, int domain) {
  return __riscv_vlseg7e64_v_u64m1x7_tum_ntl(mask, maskedoff_tuple, base, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vfloat64m1x7_t test_vlseg7e64_v_f64m1x7_tumu_ntl_PALL(vbool64_t mask, vfloat64m1x7_t maskedoff_tuple, const double *base, size_t vl, int domain) {
  return __riscv_vlseg7e64_v_f64m1x7_tumu_ntl(mask, maskedoff_tuple, base, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint64m1x7_t test_vlseg7e64_v_i64m1x7_tumu_ntl_PALL(vbool64_t mask, vint64m1x7_t maskedoff_tuple, const int64_t *base, size_t vl, int domain) {
  return __riscv_vlseg7e64_v_i64m1x7_tumu_ntl(mask, maskedoff_tuple, base, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint64m1x7_t test_vlseg7e64_v_u64m1x7_tumu_ntl_PALL(vbool64_t mask, vuint64m1x7_t maskedoff_tuple, const uint64_t *base, size_t vl, int domain) {
  return __riscv_vlseg7e64_v_u64m1x7_tumu_ntl(mask, maskedoff_tuple, base, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vfloat64m1x7_t test_vlseg7e64_v_f64m1x7_mu_ntl_PALL(vbool64_t mask, vfloat64m1x7_t maskedoff_tuple, const double *base, size_t vl, int domain) {
  return __riscv_vlseg7e64_v_f64m1x7_mu_ntl(mask, maskedoff_tuple, base, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint64m1x7_t test_vlseg7e64_v_i64m1x7_mu_ntl_PALL(vbool64_t mask, vint64m1x7_t maskedoff_tuple, const int64_t *base, size_t vl, int domain) {
  return __riscv_vlseg7e64_v_i64m1x7_mu_ntl(mask, maskedoff_tuple, base, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint64m1x7_t test_vlseg7e64_v_u64m1x7_mu_ntl_PALL(vbool64_t mask, vuint64m1x7_t maskedoff_tuple, const uint64_t *base, size_t vl, int domain) {
  return __riscv_vlseg7e64_v_u64m1x7_mu_ntl(mask, maskedoff_tuple, base, vl, __RISCV_NTLH_ALL_PRIVATE);
}

