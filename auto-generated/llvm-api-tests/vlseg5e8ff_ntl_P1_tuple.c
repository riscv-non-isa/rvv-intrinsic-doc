// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -target-feature +zfh \
// RUN:   -target-feature +experimental-zvfh -disable-O0-optnone  \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

#include <riscv_ntlh.h>

vint8mf8x5_t test_vlseg5e8ff_v_i8mf8x5_ntl_P1(const int8_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg5e8ff_v_i8mf8x5_ntl(base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint8mf4x5_t test_vlseg5e8ff_v_i8mf4x5_ntl_P1(const int8_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg5e8ff_v_i8mf4x5_ntl(base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint8mf2x5_t test_vlseg5e8ff_v_i8mf2x5_ntl_P1(const int8_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg5e8ff_v_i8mf2x5_ntl(base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint8m1x5_t test_vlseg5e8ff_v_i8m1x5_ntl_P1(const int8_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg5e8ff_v_i8m1x5_ntl(base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint8mf8x5_t test_vlseg5e8ff_v_u8mf8x5_ntl_P1(const uint8_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg5e8ff_v_u8mf8x5_ntl(base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint8mf4x5_t test_vlseg5e8ff_v_u8mf4x5_ntl_P1(const uint8_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg5e8ff_v_u8mf4x5_ntl(base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint8mf2x5_t test_vlseg5e8ff_v_u8mf2x5_ntl_P1(const uint8_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg5e8ff_v_u8mf2x5_ntl(base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint8m1x5_t test_vlseg5e8ff_v_u8m1x5_ntl_P1(const uint8_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg5e8ff_v_u8m1x5_ntl(base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint8mf8x5_t test_vlseg5e8ff_v_i8mf8x5_m_ntl_P1(vbool64_t mask, const int8_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg5e8ff_v_i8mf8x5_m_ntl(mask, base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint8mf4x5_t test_vlseg5e8ff_v_i8mf4x5_m_ntl_P1(vbool32_t mask, const int8_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg5e8ff_v_i8mf4x5_m_ntl(mask, base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint8mf2x5_t test_vlseg5e8ff_v_i8mf2x5_m_ntl_P1(vbool16_t mask, const int8_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg5e8ff_v_i8mf2x5_m_ntl(mask, base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint8m1x5_t test_vlseg5e8ff_v_i8m1x5_m_ntl_P1(vbool8_t mask, const int8_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg5e8ff_v_i8m1x5_m_ntl(mask, base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint8mf8x5_t test_vlseg5e8ff_v_u8mf8x5_m_ntl_P1(vbool64_t mask, const uint8_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg5e8ff_v_u8mf8x5_m_ntl(mask, base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint8mf4x5_t test_vlseg5e8ff_v_u8mf4x5_m_ntl_P1(vbool32_t mask, const uint8_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg5e8ff_v_u8mf4x5_m_ntl(mask, base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint8mf2x5_t test_vlseg5e8ff_v_u8mf2x5_m_ntl_P1(vbool16_t mask, const uint8_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg5e8ff_v_u8mf2x5_m_ntl(mask, base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint8m1x5_t test_vlseg5e8ff_v_u8m1x5_m_ntl_P1(vbool8_t mask, const uint8_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg5e8ff_v_u8m1x5_m_ntl(mask, base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

