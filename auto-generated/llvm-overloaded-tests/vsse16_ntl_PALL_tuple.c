// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -target-feature +zfh \
// RUN:   -target-feature +experimental-zvfh -disable-O0-optnone  \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

#include <riscv_ntlh.h>

void test_vsse16_v_f16mf4_ntl_PALL(_Float16 *base, ptrdiff_t bstride, vfloat16mf4_t value, size_t vl, int domain) {
  return __riscv_vsse16_ntl(base, bstride, value, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vsse16_v_f16mf2_ntl_PALL(_Float16 *base, ptrdiff_t bstride, vfloat16mf2_t value, size_t vl, int domain) {
  return __riscv_vsse16_ntl(base, bstride, value, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vsse16_v_f16m1_ntl_PALL(_Float16 *base, ptrdiff_t bstride, vfloat16m1_t value, size_t vl, int domain) {
  return __riscv_vsse16_ntl(base, bstride, value, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vsse16_v_f16m2_ntl_PALL(_Float16 *base, ptrdiff_t bstride, vfloat16m2_t value, size_t vl, int domain) {
  return __riscv_vsse16_ntl(base, bstride, value, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vsse16_v_f16m4_ntl_PALL(_Float16 *base, ptrdiff_t bstride, vfloat16m4_t value, size_t vl, int domain) {
  return __riscv_vsse16_ntl(base, bstride, value, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vsse16_v_f16m8_ntl_PALL(_Float16 *base, ptrdiff_t bstride, vfloat16m8_t value, size_t vl, int domain) {
  return __riscv_vsse16_ntl(base, bstride, value, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vsse16_v_i16mf4_ntl_PALL(int16_t *base, ptrdiff_t bstride, vint16mf4_t value, size_t vl, int domain) {
  return __riscv_vsse16_ntl(base, bstride, value, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vsse16_v_i16mf2_ntl_PALL(int16_t *base, ptrdiff_t bstride, vint16mf2_t value, size_t vl, int domain) {
  return __riscv_vsse16_ntl(base, bstride, value, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vsse16_v_i16m1_ntl_PALL(int16_t *base, ptrdiff_t bstride, vint16m1_t value, size_t vl, int domain) {
  return __riscv_vsse16_ntl(base, bstride, value, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vsse16_v_i16m2_ntl_PALL(int16_t *base, ptrdiff_t bstride, vint16m2_t value, size_t vl, int domain) {
  return __riscv_vsse16_ntl(base, bstride, value, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vsse16_v_i16m4_ntl_PALL(int16_t *base, ptrdiff_t bstride, vint16m4_t value, size_t vl, int domain) {
  return __riscv_vsse16_ntl(base, bstride, value, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vsse16_v_i16m8_ntl_PALL(int16_t *base, ptrdiff_t bstride, vint16m8_t value, size_t vl, int domain) {
  return __riscv_vsse16_ntl(base, bstride, value, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vsse16_v_u16mf4_ntl_PALL(uint16_t *base, ptrdiff_t bstride, vuint16mf4_t value, size_t vl, int domain) {
  return __riscv_vsse16_ntl(base, bstride, value, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vsse16_v_u16mf2_ntl_PALL(uint16_t *base, ptrdiff_t bstride, vuint16mf2_t value, size_t vl, int domain) {
  return __riscv_vsse16_ntl(base, bstride, value, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vsse16_v_u16m1_ntl_PALL(uint16_t *base, ptrdiff_t bstride, vuint16m1_t value, size_t vl, int domain) {
  return __riscv_vsse16_ntl(base, bstride, value, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vsse16_v_u16m2_ntl_PALL(uint16_t *base, ptrdiff_t bstride, vuint16m2_t value, size_t vl, int domain) {
  return __riscv_vsse16_ntl(base, bstride, value, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vsse16_v_u16m4_ntl_PALL(uint16_t *base, ptrdiff_t bstride, vuint16m4_t value, size_t vl, int domain) {
  return __riscv_vsse16_ntl(base, bstride, value, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vsse16_v_u16m8_ntl_PALL(uint16_t *base, ptrdiff_t bstride, vuint16m8_t value, size_t vl, int domain) {
  return __riscv_vsse16_ntl(base, bstride, value, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vsse16_v_f16mf4_m_ntl_PALL(vbool64_t mask, _Float16 *base, ptrdiff_t bstride, vfloat16mf4_t value, size_t vl, int domain) {
  return __riscv_vsse16_ntl(mask, base, bstride, value, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vsse16_v_f16mf2_m_ntl_PALL(vbool32_t mask, _Float16 *base, ptrdiff_t bstride, vfloat16mf2_t value, size_t vl, int domain) {
  return __riscv_vsse16_ntl(mask, base, bstride, value, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vsse16_v_f16m1_m_ntl_PALL(vbool16_t mask, _Float16 *base, ptrdiff_t bstride, vfloat16m1_t value, size_t vl, int domain) {
  return __riscv_vsse16_ntl(mask, base, bstride, value, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vsse16_v_f16m2_m_ntl_PALL(vbool8_t mask, _Float16 *base, ptrdiff_t bstride, vfloat16m2_t value, size_t vl, int domain) {
  return __riscv_vsse16_ntl(mask, base, bstride, value, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vsse16_v_f16m4_m_ntl_PALL(vbool4_t mask, _Float16 *base, ptrdiff_t bstride, vfloat16m4_t value, size_t vl, int domain) {
  return __riscv_vsse16_ntl(mask, base, bstride, value, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vsse16_v_f16m8_m_ntl_PALL(vbool2_t mask, _Float16 *base, ptrdiff_t bstride, vfloat16m8_t value, size_t vl, int domain) {
  return __riscv_vsse16_ntl(mask, base, bstride, value, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vsse16_v_i16mf4_m_ntl_PALL(vbool64_t mask, int16_t *base, ptrdiff_t bstride, vint16mf4_t value, size_t vl, int domain) {
  return __riscv_vsse16_ntl(mask, base, bstride, value, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vsse16_v_i16mf2_m_ntl_PALL(vbool32_t mask, int16_t *base, ptrdiff_t bstride, vint16mf2_t value, size_t vl, int domain) {
  return __riscv_vsse16_ntl(mask, base, bstride, value, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vsse16_v_i16m1_m_ntl_PALL(vbool16_t mask, int16_t *base, ptrdiff_t bstride, vint16m1_t value, size_t vl, int domain) {
  return __riscv_vsse16_ntl(mask, base, bstride, value, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vsse16_v_i16m2_m_ntl_PALL(vbool8_t mask, int16_t *base, ptrdiff_t bstride, vint16m2_t value, size_t vl, int domain) {
  return __riscv_vsse16_ntl(mask, base, bstride, value, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vsse16_v_i16m4_m_ntl_PALL(vbool4_t mask, int16_t *base, ptrdiff_t bstride, vint16m4_t value, size_t vl, int domain) {
  return __riscv_vsse16_ntl(mask, base, bstride, value, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vsse16_v_i16m8_m_ntl_PALL(vbool2_t mask, int16_t *base, ptrdiff_t bstride, vint16m8_t value, size_t vl, int domain) {
  return __riscv_vsse16_ntl(mask, base, bstride, value, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vsse16_v_u16mf4_m_ntl_PALL(vbool64_t mask, uint16_t *base, ptrdiff_t bstride, vuint16mf4_t value, size_t vl, int domain) {
  return __riscv_vsse16_ntl(mask, base, bstride, value, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vsse16_v_u16mf2_m_ntl_PALL(vbool32_t mask, uint16_t *base, ptrdiff_t bstride, vuint16mf2_t value, size_t vl, int domain) {
  return __riscv_vsse16_ntl(mask, base, bstride, value, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vsse16_v_u16m1_m_ntl_PALL(vbool16_t mask, uint16_t *base, ptrdiff_t bstride, vuint16m1_t value, size_t vl, int domain) {
  return __riscv_vsse16_ntl(mask, base, bstride, value, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vsse16_v_u16m2_m_ntl_PALL(vbool8_t mask, uint16_t *base, ptrdiff_t bstride, vuint16m2_t value, size_t vl, int domain) {
  return __riscv_vsse16_ntl(mask, base, bstride, value, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vsse16_v_u16m4_m_ntl_PALL(vbool4_t mask, uint16_t *base, ptrdiff_t bstride, vuint16m4_t value, size_t vl, int domain) {
  return __riscv_vsse16_ntl(mask, base, bstride, value, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vsse16_v_u16m8_m_ntl_PALL(vbool2_t mask, uint16_t *base, ptrdiff_t bstride, vuint16m8_t value, size_t vl, int domain) {
  return __riscv_vsse16_ntl(mask, base, bstride, value, vl, __RISCV_NTLH_ALL_PRIVATE);
}

