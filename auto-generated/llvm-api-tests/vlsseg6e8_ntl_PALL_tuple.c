// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -disable-O0-optnone \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

#include <riscv_ntlh.h>

vint8mf8x6_t test_vlsseg6e8_v_i8mf8x6_ntl_PALL(const int8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg6e8_v_i8mf8x6_ntl(base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint8mf4x6_t test_vlsseg6e8_v_i8mf4x6_ntl_PALL(const int8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg6e8_v_i8mf4x6_ntl(base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint8mf2x6_t test_vlsseg6e8_v_i8mf2x6_ntl_PALL(const int8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg6e8_v_i8mf2x6_ntl(base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint8m1x6_t test_vlsseg6e8_v_i8m1x6_ntl_PALL(const int8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg6e8_v_i8m1x6_ntl(base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint8mf8x6_t test_vlsseg6e8_v_u8mf8x6_ntl_PALL(const uint8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg6e8_v_u8mf8x6_ntl(base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint8mf4x6_t test_vlsseg6e8_v_u8mf4x6_ntl_PALL(const uint8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg6e8_v_u8mf4x6_ntl(base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint8mf2x6_t test_vlsseg6e8_v_u8mf2x6_ntl_PALL(const uint8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg6e8_v_u8mf2x6_ntl(base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint8m1x6_t test_vlsseg6e8_v_u8m1x6_ntl_PALL(const uint8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg6e8_v_u8m1x6_ntl(base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint8mf8x6_t test_vlsseg6e8_v_i8mf8x6_m_ntl_PALL(vbool64_t mask, const int8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg6e8_v_i8mf8x6_m_ntl(mask, base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint8mf4x6_t test_vlsseg6e8_v_i8mf4x6_m_ntl_PALL(vbool32_t mask, const int8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg6e8_v_i8mf4x6_m_ntl(mask, base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint8mf2x6_t test_vlsseg6e8_v_i8mf2x6_m_ntl_PALL(vbool16_t mask, const int8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg6e8_v_i8mf2x6_m_ntl(mask, base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint8m1x6_t test_vlsseg6e8_v_i8m1x6_m_ntl_PALL(vbool8_t mask, const int8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg6e8_v_i8m1x6_m_ntl(mask, base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint8mf8x6_t test_vlsseg6e8_v_u8mf8x6_m_ntl_PALL(vbool64_t mask, const uint8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg6e8_v_u8mf8x6_m_ntl(mask, base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint8mf4x6_t test_vlsseg6e8_v_u8mf4x6_m_ntl_PALL(vbool32_t mask, const uint8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg6e8_v_u8mf4x6_m_ntl(mask, base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint8mf2x6_t test_vlsseg6e8_v_u8mf2x6_m_ntl_PALL(vbool16_t mask, const uint8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg6e8_v_u8mf2x6_m_ntl(mask, base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint8m1x6_t test_vlsseg6e8_v_u8m1x6_m_ntl_PALL(vbool8_t mask, const uint8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg6e8_v_u8m1x6_m_ntl(mask, base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

