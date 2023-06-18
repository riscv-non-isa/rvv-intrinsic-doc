// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -target-feature +zfh \
// RUN:   -target-feature +experimental-zvfh -disable-O0-optnone  \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

#include <riscv_ntlh.h>

vfloat64m1_t test_vlse64_v_f64m1_ntl_P1(const double *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlse64_v_f64m1_ntl(base, bstride, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vfloat64m2_t test_vlse64_v_f64m2_ntl_P1(const double *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlse64_v_f64m2_ntl(base, bstride, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vfloat64m4_t test_vlse64_v_f64m4_ntl_P1(const double *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlse64_v_f64m4_ntl(base, bstride, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vfloat64m8_t test_vlse64_v_f64m8_ntl_P1(const double *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlse64_v_f64m8_ntl(base, bstride, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint64m1_t test_vlse64_v_i64m1_ntl_P1(const int64_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlse64_v_i64m1_ntl(base, bstride, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint64m2_t test_vlse64_v_i64m2_ntl_P1(const int64_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlse64_v_i64m2_ntl(base, bstride, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint64m4_t test_vlse64_v_i64m4_ntl_P1(const int64_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlse64_v_i64m4_ntl(base, bstride, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint64m8_t test_vlse64_v_i64m8_ntl_P1(const int64_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlse64_v_i64m8_ntl(base, bstride, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint64m1_t test_vlse64_v_u64m1_ntl_P1(const uint64_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlse64_v_u64m1_ntl(base, bstride, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint64m2_t test_vlse64_v_u64m2_ntl_P1(const uint64_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlse64_v_u64m2_ntl(base, bstride, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint64m4_t test_vlse64_v_u64m4_ntl_P1(const uint64_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlse64_v_u64m4_ntl(base, bstride, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint64m8_t test_vlse64_v_u64m8_ntl_P1(const uint64_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlse64_v_u64m8_ntl(base, bstride, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vfloat64m1_t test_vlse64_v_f64m1_m_ntl_P1(vbool64_t mask, const double *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlse64_v_f64m1_m_ntl(mask, base, bstride, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vfloat64m2_t test_vlse64_v_f64m2_m_ntl_P1(vbool32_t mask, const double *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlse64_v_f64m2_m_ntl(mask, base, bstride, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vfloat64m4_t test_vlse64_v_f64m4_m_ntl_P1(vbool16_t mask, const double *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlse64_v_f64m4_m_ntl(mask, base, bstride, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vfloat64m8_t test_vlse64_v_f64m8_m_ntl_P1(vbool8_t mask, const double *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlse64_v_f64m8_m_ntl(mask, base, bstride, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint64m1_t test_vlse64_v_i64m1_m_ntl_P1(vbool64_t mask, const int64_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlse64_v_i64m1_m_ntl(mask, base, bstride, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint64m2_t test_vlse64_v_i64m2_m_ntl_P1(vbool32_t mask, const int64_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlse64_v_i64m2_m_ntl(mask, base, bstride, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint64m4_t test_vlse64_v_i64m4_m_ntl_P1(vbool16_t mask, const int64_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlse64_v_i64m4_m_ntl(mask, base, bstride, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint64m8_t test_vlse64_v_i64m8_m_ntl_P1(vbool8_t mask, const int64_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlse64_v_i64m8_m_ntl(mask, base, bstride, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint64m1_t test_vlse64_v_u64m1_m_ntl_P1(vbool64_t mask, const uint64_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlse64_v_u64m1_m_ntl(mask, base, bstride, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint64m2_t test_vlse64_v_u64m2_m_ntl_P1(vbool32_t mask, const uint64_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlse64_v_u64m2_m_ntl(mask, base, bstride, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint64m4_t test_vlse64_v_u64m4_m_ntl_P1(vbool16_t mask, const uint64_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlse64_v_u64m4_m_ntl(mask, base, bstride, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint64m8_t test_vlse64_v_u64m8_m_ntl_P1(vbool8_t mask, const uint64_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlse64_v_u64m8_m_ntl(mask, base, bstride, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

