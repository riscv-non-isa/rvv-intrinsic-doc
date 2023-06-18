// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -target-feature +zfh \
// RUN:   -target-feature +experimental-zvfh -disable-O0-optnone  \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

#include <riscv_ntlh.h>

vfloat64m1_t test_vle64ff_v_f64m1_tu_ntl_PALL(vfloat64m1_t maskedoff, const double *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle64ff_v_f64m1_tu_ntl(maskedoff, base, new_vl, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vfloat64m2_t test_vle64ff_v_f64m2_tu_ntl_PALL(vfloat64m2_t maskedoff, const double *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle64ff_v_f64m2_tu_ntl(maskedoff, base, new_vl, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vfloat64m4_t test_vle64ff_v_f64m4_tu_ntl_PALL(vfloat64m4_t maskedoff, const double *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle64ff_v_f64m4_tu_ntl(maskedoff, base, new_vl, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vfloat64m8_t test_vle64ff_v_f64m8_tu_ntl_PALL(vfloat64m8_t maskedoff, const double *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle64ff_v_f64m8_tu_ntl(maskedoff, base, new_vl, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint64m1_t test_vle64ff_v_i64m1_tu_ntl_PALL(vint64m1_t maskedoff, const int64_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle64ff_v_i64m1_tu_ntl(maskedoff, base, new_vl, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint64m2_t test_vle64ff_v_i64m2_tu_ntl_PALL(vint64m2_t maskedoff, const int64_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle64ff_v_i64m2_tu_ntl(maskedoff, base, new_vl, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint64m4_t test_vle64ff_v_i64m4_tu_ntl_PALL(vint64m4_t maskedoff, const int64_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle64ff_v_i64m4_tu_ntl(maskedoff, base, new_vl, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint64m8_t test_vle64ff_v_i64m8_tu_ntl_PALL(vint64m8_t maskedoff, const int64_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle64ff_v_i64m8_tu_ntl(maskedoff, base, new_vl, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint64m1_t test_vle64ff_v_u64m1_tu_ntl_PALL(vuint64m1_t maskedoff, const uint64_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle64ff_v_u64m1_tu_ntl(maskedoff, base, new_vl, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint64m2_t test_vle64ff_v_u64m2_tu_ntl_PALL(vuint64m2_t maskedoff, const uint64_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle64ff_v_u64m2_tu_ntl(maskedoff, base, new_vl, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint64m4_t test_vle64ff_v_u64m4_tu_ntl_PALL(vuint64m4_t maskedoff, const uint64_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle64ff_v_u64m4_tu_ntl(maskedoff, base, new_vl, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint64m8_t test_vle64ff_v_u64m8_tu_ntl_PALL(vuint64m8_t maskedoff, const uint64_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle64ff_v_u64m8_tu_ntl(maskedoff, base, new_vl, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vfloat64m1_t test_vle64ff_v_f64m1_tum_ntl_PALL(vbool64_t mask, vfloat64m1_t maskedoff, const double *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle64ff_v_f64m1_tum_ntl(mask, maskedoff, base, new_vl, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vfloat64m2_t test_vle64ff_v_f64m2_tum_ntl_PALL(vbool32_t mask, vfloat64m2_t maskedoff, const double *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle64ff_v_f64m2_tum_ntl(mask, maskedoff, base, new_vl, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vfloat64m4_t test_vle64ff_v_f64m4_tum_ntl_PALL(vbool16_t mask, vfloat64m4_t maskedoff, const double *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle64ff_v_f64m4_tum_ntl(mask, maskedoff, base, new_vl, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vfloat64m8_t test_vle64ff_v_f64m8_tum_ntl_PALL(vbool8_t mask, vfloat64m8_t maskedoff, const double *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle64ff_v_f64m8_tum_ntl(mask, maskedoff, base, new_vl, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint64m1_t test_vle64ff_v_i64m1_tum_ntl_PALL(vbool64_t mask, vint64m1_t maskedoff, const int64_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle64ff_v_i64m1_tum_ntl(mask, maskedoff, base, new_vl, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint64m2_t test_vle64ff_v_i64m2_tum_ntl_PALL(vbool32_t mask, vint64m2_t maskedoff, const int64_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle64ff_v_i64m2_tum_ntl(mask, maskedoff, base, new_vl, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint64m4_t test_vle64ff_v_i64m4_tum_ntl_PALL(vbool16_t mask, vint64m4_t maskedoff, const int64_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle64ff_v_i64m4_tum_ntl(mask, maskedoff, base, new_vl, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint64m8_t test_vle64ff_v_i64m8_tum_ntl_PALL(vbool8_t mask, vint64m8_t maskedoff, const int64_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle64ff_v_i64m8_tum_ntl(mask, maskedoff, base, new_vl, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint64m1_t test_vle64ff_v_u64m1_tum_ntl_PALL(vbool64_t mask, vuint64m1_t maskedoff, const uint64_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle64ff_v_u64m1_tum_ntl(mask, maskedoff, base, new_vl, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint64m2_t test_vle64ff_v_u64m2_tum_ntl_PALL(vbool32_t mask, vuint64m2_t maskedoff, const uint64_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle64ff_v_u64m2_tum_ntl(mask, maskedoff, base, new_vl, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint64m4_t test_vle64ff_v_u64m4_tum_ntl_PALL(vbool16_t mask, vuint64m4_t maskedoff, const uint64_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle64ff_v_u64m4_tum_ntl(mask, maskedoff, base, new_vl, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint64m8_t test_vle64ff_v_u64m8_tum_ntl_PALL(vbool8_t mask, vuint64m8_t maskedoff, const uint64_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle64ff_v_u64m8_tum_ntl(mask, maskedoff, base, new_vl, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vfloat64m1_t test_vle64ff_v_f64m1_tumu_ntl_PALL(vbool64_t mask, vfloat64m1_t maskedoff, const double *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle64ff_v_f64m1_tumu_ntl(mask, maskedoff, base, new_vl, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vfloat64m2_t test_vle64ff_v_f64m2_tumu_ntl_PALL(vbool32_t mask, vfloat64m2_t maskedoff, const double *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle64ff_v_f64m2_tumu_ntl(mask, maskedoff, base, new_vl, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vfloat64m4_t test_vle64ff_v_f64m4_tumu_ntl_PALL(vbool16_t mask, vfloat64m4_t maskedoff, const double *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle64ff_v_f64m4_tumu_ntl(mask, maskedoff, base, new_vl, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vfloat64m8_t test_vle64ff_v_f64m8_tumu_ntl_PALL(vbool8_t mask, vfloat64m8_t maskedoff, const double *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle64ff_v_f64m8_tumu_ntl(mask, maskedoff, base, new_vl, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint64m1_t test_vle64ff_v_i64m1_tumu_ntl_PALL(vbool64_t mask, vint64m1_t maskedoff, const int64_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle64ff_v_i64m1_tumu_ntl(mask, maskedoff, base, new_vl, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint64m2_t test_vle64ff_v_i64m2_tumu_ntl_PALL(vbool32_t mask, vint64m2_t maskedoff, const int64_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle64ff_v_i64m2_tumu_ntl(mask, maskedoff, base, new_vl, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint64m4_t test_vle64ff_v_i64m4_tumu_ntl_PALL(vbool16_t mask, vint64m4_t maskedoff, const int64_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle64ff_v_i64m4_tumu_ntl(mask, maskedoff, base, new_vl, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint64m8_t test_vle64ff_v_i64m8_tumu_ntl_PALL(vbool8_t mask, vint64m8_t maskedoff, const int64_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle64ff_v_i64m8_tumu_ntl(mask, maskedoff, base, new_vl, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint64m1_t test_vle64ff_v_u64m1_tumu_ntl_PALL(vbool64_t mask, vuint64m1_t maskedoff, const uint64_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle64ff_v_u64m1_tumu_ntl(mask, maskedoff, base, new_vl, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint64m2_t test_vle64ff_v_u64m2_tumu_ntl_PALL(vbool32_t mask, vuint64m2_t maskedoff, const uint64_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle64ff_v_u64m2_tumu_ntl(mask, maskedoff, base, new_vl, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint64m4_t test_vle64ff_v_u64m4_tumu_ntl_PALL(vbool16_t mask, vuint64m4_t maskedoff, const uint64_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle64ff_v_u64m4_tumu_ntl(mask, maskedoff, base, new_vl, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint64m8_t test_vle64ff_v_u64m8_tumu_ntl_PALL(vbool8_t mask, vuint64m8_t maskedoff, const uint64_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle64ff_v_u64m8_tumu_ntl(mask, maskedoff, base, new_vl, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vfloat64m1_t test_vle64ff_v_f64m1_mu_ntl_PALL(vbool64_t mask, vfloat64m1_t maskedoff, const double *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle64ff_v_f64m1_mu_ntl(mask, maskedoff, base, new_vl, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vfloat64m2_t test_vle64ff_v_f64m2_mu_ntl_PALL(vbool32_t mask, vfloat64m2_t maskedoff, const double *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle64ff_v_f64m2_mu_ntl(mask, maskedoff, base, new_vl, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vfloat64m4_t test_vle64ff_v_f64m4_mu_ntl_PALL(vbool16_t mask, vfloat64m4_t maskedoff, const double *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle64ff_v_f64m4_mu_ntl(mask, maskedoff, base, new_vl, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vfloat64m8_t test_vle64ff_v_f64m8_mu_ntl_PALL(vbool8_t mask, vfloat64m8_t maskedoff, const double *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle64ff_v_f64m8_mu_ntl(mask, maskedoff, base, new_vl, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint64m1_t test_vle64ff_v_i64m1_mu_ntl_PALL(vbool64_t mask, vint64m1_t maskedoff, const int64_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle64ff_v_i64m1_mu_ntl(mask, maskedoff, base, new_vl, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint64m2_t test_vle64ff_v_i64m2_mu_ntl_PALL(vbool32_t mask, vint64m2_t maskedoff, const int64_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle64ff_v_i64m2_mu_ntl(mask, maskedoff, base, new_vl, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint64m4_t test_vle64ff_v_i64m4_mu_ntl_PALL(vbool16_t mask, vint64m4_t maskedoff, const int64_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle64ff_v_i64m4_mu_ntl(mask, maskedoff, base, new_vl, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint64m8_t test_vle64ff_v_i64m8_mu_ntl_PALL(vbool8_t mask, vint64m8_t maskedoff, const int64_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle64ff_v_i64m8_mu_ntl(mask, maskedoff, base, new_vl, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint64m1_t test_vle64ff_v_u64m1_mu_ntl_PALL(vbool64_t mask, vuint64m1_t maskedoff, const uint64_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle64ff_v_u64m1_mu_ntl(mask, maskedoff, base, new_vl, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint64m2_t test_vle64ff_v_u64m2_mu_ntl_PALL(vbool32_t mask, vuint64m2_t maskedoff, const uint64_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle64ff_v_u64m2_mu_ntl(mask, maskedoff, base, new_vl, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint64m4_t test_vle64ff_v_u64m4_mu_ntl_PALL(vbool16_t mask, vuint64m4_t maskedoff, const uint64_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle64ff_v_u64m4_mu_ntl(mask, maskedoff, base, new_vl, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint64m8_t test_vle64ff_v_u64m8_mu_ntl_PALL(vbool8_t mask, vuint64m8_t maskedoff, const uint64_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle64ff_v_u64m8_mu_ntl(mask, maskedoff, base, new_vl, vl, __RISCV_NTLH_ALL_PRIVATE);
}

