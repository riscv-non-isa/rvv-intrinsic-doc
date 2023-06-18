// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -target-feature +zfh \
// RUN:   -target-feature +experimental-zvfh -disable-O0-optnone  \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

#include <riscv_ntlh.h>

void test_vsse32_v_f32mf2_ntl_S1(float *base, ptrdiff_t bstride, vfloat32mf2_t value, size_t vl, int domain) {
  return __riscv_vsse32_ntl(base, bstride, value, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vsse32_v_f32m1_ntl_S1(float *base, ptrdiff_t bstride, vfloat32m1_t value, size_t vl, int domain) {
  return __riscv_vsse32_ntl(base, bstride, value, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vsse32_v_f32m2_ntl_S1(float *base, ptrdiff_t bstride, vfloat32m2_t value, size_t vl, int domain) {
  return __riscv_vsse32_ntl(base, bstride, value, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vsse32_v_f32m4_ntl_S1(float *base, ptrdiff_t bstride, vfloat32m4_t value, size_t vl, int domain) {
  return __riscv_vsse32_ntl(base, bstride, value, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vsse32_v_f32m8_ntl_S1(float *base, ptrdiff_t bstride, vfloat32m8_t value, size_t vl, int domain) {
  return __riscv_vsse32_ntl(base, bstride, value, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vsse32_v_i32mf2_ntl_S1(int32_t *base, ptrdiff_t bstride, vint32mf2_t value, size_t vl, int domain) {
  return __riscv_vsse32_ntl(base, bstride, value, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vsse32_v_i32m1_ntl_S1(int32_t *base, ptrdiff_t bstride, vint32m1_t value, size_t vl, int domain) {
  return __riscv_vsse32_ntl(base, bstride, value, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vsse32_v_i32m2_ntl_S1(int32_t *base, ptrdiff_t bstride, vint32m2_t value, size_t vl, int domain) {
  return __riscv_vsse32_ntl(base, bstride, value, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vsse32_v_i32m4_ntl_S1(int32_t *base, ptrdiff_t bstride, vint32m4_t value, size_t vl, int domain) {
  return __riscv_vsse32_ntl(base, bstride, value, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vsse32_v_i32m8_ntl_S1(int32_t *base, ptrdiff_t bstride, vint32m8_t value, size_t vl, int domain) {
  return __riscv_vsse32_ntl(base, bstride, value, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vsse32_v_u32mf2_ntl_S1(uint32_t *base, ptrdiff_t bstride, vuint32mf2_t value, size_t vl, int domain) {
  return __riscv_vsse32_ntl(base, bstride, value, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vsse32_v_u32m1_ntl_S1(uint32_t *base, ptrdiff_t bstride, vuint32m1_t value, size_t vl, int domain) {
  return __riscv_vsse32_ntl(base, bstride, value, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vsse32_v_u32m2_ntl_S1(uint32_t *base, ptrdiff_t bstride, vuint32m2_t value, size_t vl, int domain) {
  return __riscv_vsse32_ntl(base, bstride, value, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vsse32_v_u32m4_ntl_S1(uint32_t *base, ptrdiff_t bstride, vuint32m4_t value, size_t vl, int domain) {
  return __riscv_vsse32_ntl(base, bstride, value, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vsse32_v_u32m8_ntl_S1(uint32_t *base, ptrdiff_t bstride, vuint32m8_t value, size_t vl, int domain) {
  return __riscv_vsse32_ntl(base, bstride, value, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vsse32_v_f32mf2_m_ntl_S1(vbool64_t mask, float *base, ptrdiff_t bstride, vfloat32mf2_t value, size_t vl, int domain) {
  return __riscv_vsse32_ntl(mask, base, bstride, value, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vsse32_v_f32m1_m_ntl_S1(vbool32_t mask, float *base, ptrdiff_t bstride, vfloat32m1_t value, size_t vl, int domain) {
  return __riscv_vsse32_ntl(mask, base, bstride, value, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vsse32_v_f32m2_m_ntl_S1(vbool16_t mask, float *base, ptrdiff_t bstride, vfloat32m2_t value, size_t vl, int domain) {
  return __riscv_vsse32_ntl(mask, base, bstride, value, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vsse32_v_f32m4_m_ntl_S1(vbool8_t mask, float *base, ptrdiff_t bstride, vfloat32m4_t value, size_t vl, int domain) {
  return __riscv_vsse32_ntl(mask, base, bstride, value, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vsse32_v_f32m8_m_ntl_S1(vbool4_t mask, float *base, ptrdiff_t bstride, vfloat32m8_t value, size_t vl, int domain) {
  return __riscv_vsse32_ntl(mask, base, bstride, value, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vsse32_v_i32mf2_m_ntl_S1(vbool64_t mask, int32_t *base, ptrdiff_t bstride, vint32mf2_t value, size_t vl, int domain) {
  return __riscv_vsse32_ntl(mask, base, bstride, value, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vsse32_v_i32m1_m_ntl_S1(vbool32_t mask, int32_t *base, ptrdiff_t bstride, vint32m1_t value, size_t vl, int domain) {
  return __riscv_vsse32_ntl(mask, base, bstride, value, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vsse32_v_i32m2_m_ntl_S1(vbool16_t mask, int32_t *base, ptrdiff_t bstride, vint32m2_t value, size_t vl, int domain) {
  return __riscv_vsse32_ntl(mask, base, bstride, value, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vsse32_v_i32m4_m_ntl_S1(vbool8_t mask, int32_t *base, ptrdiff_t bstride, vint32m4_t value, size_t vl, int domain) {
  return __riscv_vsse32_ntl(mask, base, bstride, value, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vsse32_v_i32m8_m_ntl_S1(vbool4_t mask, int32_t *base, ptrdiff_t bstride, vint32m8_t value, size_t vl, int domain) {
  return __riscv_vsse32_ntl(mask, base, bstride, value, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vsse32_v_u32mf2_m_ntl_S1(vbool64_t mask, uint32_t *base, ptrdiff_t bstride, vuint32mf2_t value, size_t vl, int domain) {
  return __riscv_vsse32_ntl(mask, base, bstride, value, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vsse32_v_u32m1_m_ntl_S1(vbool32_t mask, uint32_t *base, ptrdiff_t bstride, vuint32m1_t value, size_t vl, int domain) {
  return __riscv_vsse32_ntl(mask, base, bstride, value, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vsse32_v_u32m2_m_ntl_S1(vbool16_t mask, uint32_t *base, ptrdiff_t bstride, vuint32m2_t value, size_t vl, int domain) {
  return __riscv_vsse32_ntl(mask, base, bstride, value, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vsse32_v_u32m4_m_ntl_S1(vbool8_t mask, uint32_t *base, ptrdiff_t bstride, vuint32m4_t value, size_t vl, int domain) {
  return __riscv_vsse32_ntl(mask, base, bstride, value, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vsse32_v_u32m8_m_ntl_S1(vbool4_t mask, uint32_t *base, ptrdiff_t bstride, vuint32m8_t value, size_t vl, int domain) {
  return __riscv_vsse32_ntl(mask, base, bstride, value, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

