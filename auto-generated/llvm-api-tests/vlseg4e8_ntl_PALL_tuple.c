// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -disable-O0-optnone \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

#include <riscv_ntlh.h>

vint8mf8x4_t test_vlseg4e8_v_i8mf8x4_ntl_PALL(const int8_t *base, size_t vl, int domain) {
  return __riscv_vlseg4e8_v_i8mf8x4_ntl(base, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint8mf4x4_t test_vlseg4e8_v_i8mf4x4_ntl_PALL(const int8_t *base, size_t vl, int domain) {
  return __riscv_vlseg4e8_v_i8mf4x4_ntl(base, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint8mf2x4_t test_vlseg4e8_v_i8mf2x4_ntl_PALL(const int8_t *base, size_t vl, int domain) {
  return __riscv_vlseg4e8_v_i8mf2x4_ntl(base, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint8m1x4_t test_vlseg4e8_v_i8m1x4_ntl_PALL(const int8_t *base, size_t vl, int domain) {
  return __riscv_vlseg4e8_v_i8m1x4_ntl(base, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint8m2x4_t test_vlseg4e8_v_i8m2x4_ntl_PALL(const int8_t *base, size_t vl, int domain) {
  return __riscv_vlseg4e8_v_i8m2x4_ntl(base, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint8mf8x4_t test_vlseg4e8_v_u8mf8x4_ntl_PALL(const uint8_t *base, size_t vl, int domain) {
  return __riscv_vlseg4e8_v_u8mf8x4_ntl(base, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint8mf4x4_t test_vlseg4e8_v_u8mf4x4_ntl_PALL(const uint8_t *base, size_t vl, int domain) {
  return __riscv_vlseg4e8_v_u8mf4x4_ntl(base, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint8mf2x4_t test_vlseg4e8_v_u8mf2x4_ntl_PALL(const uint8_t *base, size_t vl, int domain) {
  return __riscv_vlseg4e8_v_u8mf2x4_ntl(base, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint8m1x4_t test_vlseg4e8_v_u8m1x4_ntl_PALL(const uint8_t *base, size_t vl, int domain) {
  return __riscv_vlseg4e8_v_u8m1x4_ntl(base, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint8m2x4_t test_vlseg4e8_v_u8m2x4_ntl_PALL(const uint8_t *base, size_t vl, int domain) {
  return __riscv_vlseg4e8_v_u8m2x4_ntl(base, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint8mf8x4_t test_vlseg4e8_v_i8mf8x4_m_ntl_PALL(vbool64_t mask, const int8_t *base, size_t vl, int domain) {
  return __riscv_vlseg4e8_v_i8mf8x4_m_ntl(mask, base, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint8mf4x4_t test_vlseg4e8_v_i8mf4x4_m_ntl_PALL(vbool32_t mask, const int8_t *base, size_t vl, int domain) {
  return __riscv_vlseg4e8_v_i8mf4x4_m_ntl(mask, base, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint8mf2x4_t test_vlseg4e8_v_i8mf2x4_m_ntl_PALL(vbool16_t mask, const int8_t *base, size_t vl, int domain) {
  return __riscv_vlseg4e8_v_i8mf2x4_m_ntl(mask, base, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint8m1x4_t test_vlseg4e8_v_i8m1x4_m_ntl_PALL(vbool8_t mask, const int8_t *base, size_t vl, int domain) {
  return __riscv_vlseg4e8_v_i8m1x4_m_ntl(mask, base, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint8m2x4_t test_vlseg4e8_v_i8m2x4_m_ntl_PALL(vbool4_t mask, const int8_t *base, size_t vl, int domain) {
  return __riscv_vlseg4e8_v_i8m2x4_m_ntl(mask, base, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint8mf8x4_t test_vlseg4e8_v_u8mf8x4_m_ntl_PALL(vbool64_t mask, const uint8_t *base, size_t vl, int domain) {
  return __riscv_vlseg4e8_v_u8mf8x4_m_ntl(mask, base, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint8mf4x4_t test_vlseg4e8_v_u8mf4x4_m_ntl_PALL(vbool32_t mask, const uint8_t *base, size_t vl, int domain) {
  return __riscv_vlseg4e8_v_u8mf4x4_m_ntl(mask, base, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint8mf2x4_t test_vlseg4e8_v_u8mf2x4_m_ntl_PALL(vbool16_t mask, const uint8_t *base, size_t vl, int domain) {
  return __riscv_vlseg4e8_v_u8mf2x4_m_ntl(mask, base, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint8m1x4_t test_vlseg4e8_v_u8m1x4_m_ntl_PALL(vbool8_t mask, const uint8_t *base, size_t vl, int domain) {
  return __riscv_vlseg4e8_v_u8m1x4_m_ntl(mask, base, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint8m2x4_t test_vlseg4e8_v_u8m2x4_m_ntl_PALL(vbool4_t mask, const uint8_t *base, size_t vl, int domain) {
  return __riscv_vlseg4e8_v_u8m2x4_m_ntl(mask, base, vl, __RISCV_NTLH_ALL_PRIVATE);
}

