// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -target-feature +zfh \
// RUN:   -target-feature +experimental-zvfh -disable-O0-optnone  \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

#include <riscv_ntlh.h>

vfloat64m1_t test_vle64ff_v_f64m1_ntl_ALL(const double *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle64ff_v_f64m1_ntl(base, new_vl, vl, __RISCV_NTLH_ALL);
}

vfloat64m2_t test_vle64ff_v_f64m2_ntl_ALL(const double *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle64ff_v_f64m2_ntl(base, new_vl, vl, __RISCV_NTLH_ALL);
}

vfloat64m4_t test_vle64ff_v_f64m4_ntl_ALL(const double *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle64ff_v_f64m4_ntl(base, new_vl, vl, __RISCV_NTLH_ALL);
}

vfloat64m8_t test_vle64ff_v_f64m8_ntl_ALL(const double *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle64ff_v_f64m8_ntl(base, new_vl, vl, __RISCV_NTLH_ALL);
}

vint64m1_t test_vle64ff_v_i64m1_ntl_ALL(const int64_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle64ff_v_i64m1_ntl(base, new_vl, vl, __RISCV_NTLH_ALL);
}

vint64m2_t test_vle64ff_v_i64m2_ntl_ALL(const int64_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle64ff_v_i64m2_ntl(base, new_vl, vl, __RISCV_NTLH_ALL);
}

vint64m4_t test_vle64ff_v_i64m4_ntl_ALL(const int64_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle64ff_v_i64m4_ntl(base, new_vl, vl, __RISCV_NTLH_ALL);
}

vint64m8_t test_vle64ff_v_i64m8_ntl_ALL(const int64_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle64ff_v_i64m8_ntl(base, new_vl, vl, __RISCV_NTLH_ALL);
}

vuint64m1_t test_vle64ff_v_u64m1_ntl_ALL(const uint64_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle64ff_v_u64m1_ntl(base, new_vl, vl, __RISCV_NTLH_ALL);
}

vuint64m2_t test_vle64ff_v_u64m2_ntl_ALL(const uint64_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle64ff_v_u64m2_ntl(base, new_vl, vl, __RISCV_NTLH_ALL);
}

vuint64m4_t test_vle64ff_v_u64m4_ntl_ALL(const uint64_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle64ff_v_u64m4_ntl(base, new_vl, vl, __RISCV_NTLH_ALL);
}

vuint64m8_t test_vle64ff_v_u64m8_ntl_ALL(const uint64_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle64ff_v_u64m8_ntl(base, new_vl, vl, __RISCV_NTLH_ALL);
}

vfloat64m1_t test_vle64ff_v_f64m1_m_ntl_ALL(vbool64_t mask, const double *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle64ff_v_f64m1_m_ntl(mask, base, new_vl, vl, __RISCV_NTLH_ALL);
}

vfloat64m2_t test_vle64ff_v_f64m2_m_ntl_ALL(vbool32_t mask, const double *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle64ff_v_f64m2_m_ntl(mask, base, new_vl, vl, __RISCV_NTLH_ALL);
}

vfloat64m4_t test_vle64ff_v_f64m4_m_ntl_ALL(vbool16_t mask, const double *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle64ff_v_f64m4_m_ntl(mask, base, new_vl, vl, __RISCV_NTLH_ALL);
}

vfloat64m8_t test_vle64ff_v_f64m8_m_ntl_ALL(vbool8_t mask, const double *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle64ff_v_f64m8_m_ntl(mask, base, new_vl, vl, __RISCV_NTLH_ALL);
}

vint64m1_t test_vle64ff_v_i64m1_m_ntl_ALL(vbool64_t mask, const int64_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle64ff_v_i64m1_m_ntl(mask, base, new_vl, vl, __RISCV_NTLH_ALL);
}

vint64m2_t test_vle64ff_v_i64m2_m_ntl_ALL(vbool32_t mask, const int64_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle64ff_v_i64m2_m_ntl(mask, base, new_vl, vl, __RISCV_NTLH_ALL);
}

vint64m4_t test_vle64ff_v_i64m4_m_ntl_ALL(vbool16_t mask, const int64_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle64ff_v_i64m4_m_ntl(mask, base, new_vl, vl, __RISCV_NTLH_ALL);
}

vint64m8_t test_vle64ff_v_i64m8_m_ntl_ALL(vbool8_t mask, const int64_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle64ff_v_i64m8_m_ntl(mask, base, new_vl, vl, __RISCV_NTLH_ALL);
}

vuint64m1_t test_vle64ff_v_u64m1_m_ntl_ALL(vbool64_t mask, const uint64_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle64ff_v_u64m1_m_ntl(mask, base, new_vl, vl, __RISCV_NTLH_ALL);
}

vuint64m2_t test_vle64ff_v_u64m2_m_ntl_ALL(vbool32_t mask, const uint64_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle64ff_v_u64m2_m_ntl(mask, base, new_vl, vl, __RISCV_NTLH_ALL);
}

vuint64m4_t test_vle64ff_v_u64m4_m_ntl_ALL(vbool16_t mask, const uint64_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle64ff_v_u64m4_m_ntl(mask, base, new_vl, vl, __RISCV_NTLH_ALL);
}

vuint64m8_t test_vle64ff_v_u64m8_m_ntl_ALL(vbool8_t mask, const uint64_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle64ff_v_u64m8_m_ntl(mask, base, new_vl, vl, __RISCV_NTLH_ALL);
}

