// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -disable-O0-optnone \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

#include <riscv_ntlh.h>

vint8mf8x4_t test_vlsseg4e8_v_i8mf8x4_ntl_ALL(const int8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg4e8_v_i8mf8x4_ntl(base, bstride, vl, __RISCV_NTLH_ALL);
}

vint8mf4x4_t test_vlsseg4e8_v_i8mf4x4_ntl_ALL(const int8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg4e8_v_i8mf4x4_ntl(base, bstride, vl, __RISCV_NTLH_ALL);
}

vint8mf2x4_t test_vlsseg4e8_v_i8mf2x4_ntl_ALL(const int8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg4e8_v_i8mf2x4_ntl(base, bstride, vl, __RISCV_NTLH_ALL);
}

vint8m1x4_t test_vlsseg4e8_v_i8m1x4_ntl_ALL(const int8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg4e8_v_i8m1x4_ntl(base, bstride, vl, __RISCV_NTLH_ALL);
}

vint8m2x4_t test_vlsseg4e8_v_i8m2x4_ntl_ALL(const int8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg4e8_v_i8m2x4_ntl(base, bstride, vl, __RISCV_NTLH_ALL);
}

vuint8mf8x4_t test_vlsseg4e8_v_u8mf8x4_ntl_ALL(const uint8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg4e8_v_u8mf8x4_ntl(base, bstride, vl, __RISCV_NTLH_ALL);
}

vuint8mf4x4_t test_vlsseg4e8_v_u8mf4x4_ntl_ALL(const uint8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg4e8_v_u8mf4x4_ntl(base, bstride, vl, __RISCV_NTLH_ALL);
}

vuint8mf2x4_t test_vlsseg4e8_v_u8mf2x4_ntl_ALL(const uint8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg4e8_v_u8mf2x4_ntl(base, bstride, vl, __RISCV_NTLH_ALL);
}

vuint8m1x4_t test_vlsseg4e8_v_u8m1x4_ntl_ALL(const uint8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg4e8_v_u8m1x4_ntl(base, bstride, vl, __RISCV_NTLH_ALL);
}

vuint8m2x4_t test_vlsseg4e8_v_u8m2x4_ntl_ALL(const uint8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg4e8_v_u8m2x4_ntl(base, bstride, vl, __RISCV_NTLH_ALL);
}

vint8mf8x4_t test_vlsseg4e8_v_i8mf8x4_m_ntl_ALL(vbool64_t mask, const int8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg4e8_v_i8mf8x4_m_ntl(mask, base, bstride, vl, __RISCV_NTLH_ALL);
}

vint8mf4x4_t test_vlsseg4e8_v_i8mf4x4_m_ntl_ALL(vbool32_t mask, const int8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg4e8_v_i8mf4x4_m_ntl(mask, base, bstride, vl, __RISCV_NTLH_ALL);
}

vint8mf2x4_t test_vlsseg4e8_v_i8mf2x4_m_ntl_ALL(vbool16_t mask, const int8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg4e8_v_i8mf2x4_m_ntl(mask, base, bstride, vl, __RISCV_NTLH_ALL);
}

vint8m1x4_t test_vlsseg4e8_v_i8m1x4_m_ntl_ALL(vbool8_t mask, const int8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg4e8_v_i8m1x4_m_ntl(mask, base, bstride, vl, __RISCV_NTLH_ALL);
}

vint8m2x4_t test_vlsseg4e8_v_i8m2x4_m_ntl_ALL(vbool4_t mask, const int8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg4e8_v_i8m2x4_m_ntl(mask, base, bstride, vl, __RISCV_NTLH_ALL);
}

vuint8mf8x4_t test_vlsseg4e8_v_u8mf8x4_m_ntl_ALL(vbool64_t mask, const uint8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg4e8_v_u8mf8x4_m_ntl(mask, base, bstride, vl, __RISCV_NTLH_ALL);
}

vuint8mf4x4_t test_vlsseg4e8_v_u8mf4x4_m_ntl_ALL(vbool32_t mask, const uint8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg4e8_v_u8mf4x4_m_ntl(mask, base, bstride, vl, __RISCV_NTLH_ALL);
}

vuint8mf2x4_t test_vlsseg4e8_v_u8mf2x4_m_ntl_ALL(vbool16_t mask, const uint8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg4e8_v_u8mf2x4_m_ntl(mask, base, bstride, vl, __RISCV_NTLH_ALL);
}

vuint8m1x4_t test_vlsseg4e8_v_u8m1x4_m_ntl_ALL(vbool8_t mask, const uint8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg4e8_v_u8m1x4_m_ntl(mask, base, bstride, vl, __RISCV_NTLH_ALL);
}

vuint8m2x4_t test_vlsseg4e8_v_u8m2x4_m_ntl_ALL(vbool4_t mask, const uint8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg4e8_v_u8m2x4_m_ntl(mask, base, bstride, vl, __RISCV_NTLH_ALL);
}

