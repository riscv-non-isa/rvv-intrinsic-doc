// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -target-feature +zfh \
// RUN:   -target-feature +experimental-zvfh -disable-O0-optnone  \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

#include <riscv_ntlh.h>

void test_vssseg7e8_v_i8mf8x7_ntl_P1(int8_t *base, ptrdiff_t bstride, vint8mf8x7_t v_tuple, size_t vl, int domain) {
  return __riscv_vssseg7e8_ntl(base, bstride, v_tuple, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

void test_vssseg7e8_v_i8mf4x7_ntl_P1(int8_t *base, ptrdiff_t bstride, vint8mf4x7_t v_tuple, size_t vl, int domain) {
  return __riscv_vssseg7e8_ntl(base, bstride, v_tuple, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

void test_vssseg7e8_v_i8mf2x7_ntl_P1(int8_t *base, ptrdiff_t bstride, vint8mf2x7_t v_tuple, size_t vl, int domain) {
  return __riscv_vssseg7e8_ntl(base, bstride, v_tuple, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

void test_vssseg7e8_v_i8m1x7_ntl_P1(int8_t *base, ptrdiff_t bstride, vint8m1x7_t v_tuple, size_t vl, int domain) {
  return __riscv_vssseg7e8_ntl(base, bstride, v_tuple, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

void test_vssseg7e8_v_u8mf8x7_ntl_P1(uint8_t *base, ptrdiff_t bstride, vuint8mf8x7_t v_tuple, size_t vl, int domain) {
  return __riscv_vssseg7e8_ntl(base, bstride, v_tuple, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

void test_vssseg7e8_v_u8mf4x7_ntl_P1(uint8_t *base, ptrdiff_t bstride, vuint8mf4x7_t v_tuple, size_t vl, int domain) {
  return __riscv_vssseg7e8_ntl(base, bstride, v_tuple, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

void test_vssseg7e8_v_u8mf2x7_ntl_P1(uint8_t *base, ptrdiff_t bstride, vuint8mf2x7_t v_tuple, size_t vl, int domain) {
  return __riscv_vssseg7e8_ntl(base, bstride, v_tuple, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

void test_vssseg7e8_v_u8m1x7_ntl_P1(uint8_t *base, ptrdiff_t bstride, vuint8m1x7_t v_tuple, size_t vl, int domain) {
  return __riscv_vssseg7e8_ntl(base, bstride, v_tuple, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

void test_vssseg7e8_v_i8mf8x7_m_ntl_P1(vbool64_t mask, int8_t *base, ptrdiff_t bstride, vint8mf8x7_t v_tuple, size_t vl, int domain) {
  return __riscv_vssseg7e8_ntl(mask, base, bstride, v_tuple, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

void test_vssseg7e8_v_i8mf4x7_m_ntl_P1(vbool32_t mask, int8_t *base, ptrdiff_t bstride, vint8mf4x7_t v_tuple, size_t vl, int domain) {
  return __riscv_vssseg7e8_ntl(mask, base, bstride, v_tuple, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

void test_vssseg7e8_v_i8mf2x7_m_ntl_P1(vbool16_t mask, int8_t *base, ptrdiff_t bstride, vint8mf2x7_t v_tuple, size_t vl, int domain) {
  return __riscv_vssseg7e8_ntl(mask, base, bstride, v_tuple, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

void test_vssseg7e8_v_i8m1x7_m_ntl_P1(vbool8_t mask, int8_t *base, ptrdiff_t bstride, vint8m1x7_t v_tuple, size_t vl, int domain) {
  return __riscv_vssseg7e8_ntl(mask, base, bstride, v_tuple, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

void test_vssseg7e8_v_u8mf8x7_m_ntl_P1(vbool64_t mask, uint8_t *base, ptrdiff_t bstride, vuint8mf8x7_t v_tuple, size_t vl, int domain) {
  return __riscv_vssseg7e8_ntl(mask, base, bstride, v_tuple, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

void test_vssseg7e8_v_u8mf4x7_m_ntl_P1(vbool32_t mask, uint8_t *base, ptrdiff_t bstride, vuint8mf4x7_t v_tuple, size_t vl, int domain) {
  return __riscv_vssseg7e8_ntl(mask, base, bstride, v_tuple, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

void test_vssseg7e8_v_u8mf2x7_m_ntl_P1(vbool16_t mask, uint8_t *base, ptrdiff_t bstride, vuint8mf2x7_t v_tuple, size_t vl, int domain) {
  return __riscv_vssseg7e8_ntl(mask, base, bstride, v_tuple, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

void test_vssseg7e8_v_u8m1x7_m_ntl_P1(vbool8_t mask, uint8_t *base, ptrdiff_t bstride, vuint8m1x7_t v_tuple, size_t vl, int domain) {
  return __riscv_vssseg7e8_ntl(mask, base, bstride, v_tuple, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

