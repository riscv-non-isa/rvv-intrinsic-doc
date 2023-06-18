// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -target-feature +zfh \
// RUN:   -target-feature +experimental-zvfh -disable-O0-optnone  \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

#include <riscv_ntlh.h>

void test_vsseg2e8_v_i8mf8x2_ntl_ALL(int8_t *base, vint8mf8x2_t v_tuple, size_t vl, int domain) {
  return __riscv_vsseg2e8_ntl(base, v_tuple, vl, __RISCV_NTLH_ALL);
}

void test_vsseg2e8_v_i8mf4x2_ntl_ALL(int8_t *base, vint8mf4x2_t v_tuple, size_t vl, int domain) {
  return __riscv_vsseg2e8_ntl(base, v_tuple, vl, __RISCV_NTLH_ALL);
}

void test_vsseg2e8_v_i8mf2x2_ntl_ALL(int8_t *base, vint8mf2x2_t v_tuple, size_t vl, int domain) {
  return __riscv_vsseg2e8_ntl(base, v_tuple, vl, __RISCV_NTLH_ALL);
}

void test_vsseg2e8_v_i8m1x2_ntl_ALL(int8_t *base, vint8m1x2_t v_tuple, size_t vl, int domain) {
  return __riscv_vsseg2e8_ntl(base, v_tuple, vl, __RISCV_NTLH_ALL);
}

void test_vsseg2e8_v_i8m2x2_ntl_ALL(int8_t *base, vint8m2x2_t v_tuple, size_t vl, int domain) {
  return __riscv_vsseg2e8_ntl(base, v_tuple, vl, __RISCV_NTLH_ALL);
}

void test_vsseg2e8_v_i8m4x2_ntl_ALL(int8_t *base, vint8m4x2_t v_tuple, size_t vl, int domain) {
  return __riscv_vsseg2e8_ntl(base, v_tuple, vl, __RISCV_NTLH_ALL);
}

void test_vsseg2e8_v_u8mf8x2_ntl_ALL(uint8_t *base, vuint8mf8x2_t v_tuple, size_t vl, int domain) {
  return __riscv_vsseg2e8_ntl(base, v_tuple, vl, __RISCV_NTLH_ALL);
}

void test_vsseg2e8_v_u8mf4x2_ntl_ALL(uint8_t *base, vuint8mf4x2_t v_tuple, size_t vl, int domain) {
  return __riscv_vsseg2e8_ntl(base, v_tuple, vl, __RISCV_NTLH_ALL);
}

void test_vsseg2e8_v_u8mf2x2_ntl_ALL(uint8_t *base, vuint8mf2x2_t v_tuple, size_t vl, int domain) {
  return __riscv_vsseg2e8_ntl(base, v_tuple, vl, __RISCV_NTLH_ALL);
}

void test_vsseg2e8_v_u8m1x2_ntl_ALL(uint8_t *base, vuint8m1x2_t v_tuple, size_t vl, int domain) {
  return __riscv_vsseg2e8_ntl(base, v_tuple, vl, __RISCV_NTLH_ALL);
}

void test_vsseg2e8_v_u8m2x2_ntl_ALL(uint8_t *base, vuint8m2x2_t v_tuple, size_t vl, int domain) {
  return __riscv_vsseg2e8_ntl(base, v_tuple, vl, __RISCV_NTLH_ALL);
}

void test_vsseg2e8_v_u8m4x2_ntl_ALL(uint8_t *base, vuint8m4x2_t v_tuple, size_t vl, int domain) {
  return __riscv_vsseg2e8_ntl(base, v_tuple, vl, __RISCV_NTLH_ALL);
}

void test_vsseg2e8_v_i8mf8x2_m_ntl_ALL(vbool64_t mask, int8_t *base, vint8mf8x2_t v_tuple, size_t vl, int domain) {
  return __riscv_vsseg2e8_ntl(mask, base, v_tuple, vl, __RISCV_NTLH_ALL);
}

void test_vsseg2e8_v_i8mf4x2_m_ntl_ALL(vbool32_t mask, int8_t *base, vint8mf4x2_t v_tuple, size_t vl, int domain) {
  return __riscv_vsseg2e8_ntl(mask, base, v_tuple, vl, __RISCV_NTLH_ALL);
}

void test_vsseg2e8_v_i8mf2x2_m_ntl_ALL(vbool16_t mask, int8_t *base, vint8mf2x2_t v_tuple, size_t vl, int domain) {
  return __riscv_vsseg2e8_ntl(mask, base, v_tuple, vl, __RISCV_NTLH_ALL);
}

void test_vsseg2e8_v_i8m1x2_m_ntl_ALL(vbool8_t mask, int8_t *base, vint8m1x2_t v_tuple, size_t vl, int domain) {
  return __riscv_vsseg2e8_ntl(mask, base, v_tuple, vl, __RISCV_NTLH_ALL);
}

void test_vsseg2e8_v_i8m2x2_m_ntl_ALL(vbool4_t mask, int8_t *base, vint8m2x2_t v_tuple, size_t vl, int domain) {
  return __riscv_vsseg2e8_ntl(mask, base, v_tuple, vl, __RISCV_NTLH_ALL);
}

void test_vsseg2e8_v_i8m4x2_m_ntl_ALL(vbool2_t mask, int8_t *base, vint8m4x2_t v_tuple, size_t vl, int domain) {
  return __riscv_vsseg2e8_ntl(mask, base, v_tuple, vl, __RISCV_NTLH_ALL);
}

void test_vsseg2e8_v_u8mf8x2_m_ntl_ALL(vbool64_t mask, uint8_t *base, vuint8mf8x2_t v_tuple, size_t vl, int domain) {
  return __riscv_vsseg2e8_ntl(mask, base, v_tuple, vl, __RISCV_NTLH_ALL);
}

void test_vsseg2e8_v_u8mf4x2_m_ntl_ALL(vbool32_t mask, uint8_t *base, vuint8mf4x2_t v_tuple, size_t vl, int domain) {
  return __riscv_vsseg2e8_ntl(mask, base, v_tuple, vl, __RISCV_NTLH_ALL);
}

void test_vsseg2e8_v_u8mf2x2_m_ntl_ALL(vbool16_t mask, uint8_t *base, vuint8mf2x2_t v_tuple, size_t vl, int domain) {
  return __riscv_vsseg2e8_ntl(mask, base, v_tuple, vl, __RISCV_NTLH_ALL);
}

void test_vsseg2e8_v_u8m1x2_m_ntl_ALL(vbool8_t mask, uint8_t *base, vuint8m1x2_t v_tuple, size_t vl, int domain) {
  return __riscv_vsseg2e8_ntl(mask, base, v_tuple, vl, __RISCV_NTLH_ALL);
}

void test_vsseg2e8_v_u8m2x2_m_ntl_ALL(vbool4_t mask, uint8_t *base, vuint8m2x2_t v_tuple, size_t vl, int domain) {
  return __riscv_vsseg2e8_ntl(mask, base, v_tuple, vl, __RISCV_NTLH_ALL);
}

void test_vsseg2e8_v_u8m4x2_m_ntl_ALL(vbool2_t mask, uint8_t *base, vuint8m4x2_t v_tuple, size_t vl, int domain) {
  return __riscv_vsseg2e8_ntl(mask, base, v_tuple, vl, __RISCV_NTLH_ALL);
}

