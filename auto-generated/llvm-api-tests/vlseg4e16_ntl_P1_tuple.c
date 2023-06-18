// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -target-feature +zfh \
// RUN:   -target-feature +experimental-zvfh -disable-O0-optnone  \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

#include <riscv_ntlh.h>

vfloat16mf4x4_t test_vlseg4e16_v_f16mf4x4_ntl_P1(const _Float16 *base, size_t vl, int domain) {
  return __riscv_vlseg4e16_v_f16mf4x4_ntl(base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vfloat16mf2x4_t test_vlseg4e16_v_f16mf2x4_ntl_P1(const _Float16 *base, size_t vl, int domain) {
  return __riscv_vlseg4e16_v_f16mf2x4_ntl(base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vfloat16m1x4_t test_vlseg4e16_v_f16m1x4_ntl_P1(const _Float16 *base, size_t vl, int domain) {
  return __riscv_vlseg4e16_v_f16m1x4_ntl(base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vfloat16m2x4_t test_vlseg4e16_v_f16m2x4_ntl_P1(const _Float16 *base, size_t vl, int domain) {
  return __riscv_vlseg4e16_v_f16m2x4_ntl(base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint16mf4x4_t test_vlseg4e16_v_i16mf4x4_ntl_P1(const int16_t *base, size_t vl, int domain) {
  return __riscv_vlseg4e16_v_i16mf4x4_ntl(base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint16mf2x4_t test_vlseg4e16_v_i16mf2x4_ntl_P1(const int16_t *base, size_t vl, int domain) {
  return __riscv_vlseg4e16_v_i16mf2x4_ntl(base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint16m1x4_t test_vlseg4e16_v_i16m1x4_ntl_P1(const int16_t *base, size_t vl, int domain) {
  return __riscv_vlseg4e16_v_i16m1x4_ntl(base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint16m2x4_t test_vlseg4e16_v_i16m2x4_ntl_P1(const int16_t *base, size_t vl, int domain) {
  return __riscv_vlseg4e16_v_i16m2x4_ntl(base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint16mf4x4_t test_vlseg4e16_v_u16mf4x4_ntl_P1(const uint16_t *base, size_t vl, int domain) {
  return __riscv_vlseg4e16_v_u16mf4x4_ntl(base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint16mf2x4_t test_vlseg4e16_v_u16mf2x4_ntl_P1(const uint16_t *base, size_t vl, int domain) {
  return __riscv_vlseg4e16_v_u16mf2x4_ntl(base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint16m1x4_t test_vlseg4e16_v_u16m1x4_ntl_P1(const uint16_t *base, size_t vl, int domain) {
  return __riscv_vlseg4e16_v_u16m1x4_ntl(base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint16m2x4_t test_vlseg4e16_v_u16m2x4_ntl_P1(const uint16_t *base, size_t vl, int domain) {
  return __riscv_vlseg4e16_v_u16m2x4_ntl(base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vfloat16mf4x4_t test_vlseg4e16_v_f16mf4x4_m_ntl_P1(vbool64_t mask, const _Float16 *base, size_t vl, int domain) {
  return __riscv_vlseg4e16_v_f16mf4x4_m_ntl(mask, base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vfloat16mf2x4_t test_vlseg4e16_v_f16mf2x4_m_ntl_P1(vbool32_t mask, const _Float16 *base, size_t vl, int domain) {
  return __riscv_vlseg4e16_v_f16mf2x4_m_ntl(mask, base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vfloat16m1x4_t test_vlseg4e16_v_f16m1x4_m_ntl_P1(vbool16_t mask, const _Float16 *base, size_t vl, int domain) {
  return __riscv_vlseg4e16_v_f16m1x4_m_ntl(mask, base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vfloat16m2x4_t test_vlseg4e16_v_f16m2x4_m_ntl_P1(vbool8_t mask, const _Float16 *base, size_t vl, int domain) {
  return __riscv_vlseg4e16_v_f16m2x4_m_ntl(mask, base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint16mf4x4_t test_vlseg4e16_v_i16mf4x4_m_ntl_P1(vbool64_t mask, const int16_t *base, size_t vl, int domain) {
  return __riscv_vlseg4e16_v_i16mf4x4_m_ntl(mask, base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint16mf2x4_t test_vlseg4e16_v_i16mf2x4_m_ntl_P1(vbool32_t mask, const int16_t *base, size_t vl, int domain) {
  return __riscv_vlseg4e16_v_i16mf2x4_m_ntl(mask, base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint16m1x4_t test_vlseg4e16_v_i16m1x4_m_ntl_P1(vbool16_t mask, const int16_t *base, size_t vl, int domain) {
  return __riscv_vlseg4e16_v_i16m1x4_m_ntl(mask, base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint16m2x4_t test_vlseg4e16_v_i16m2x4_m_ntl_P1(vbool8_t mask, const int16_t *base, size_t vl, int domain) {
  return __riscv_vlseg4e16_v_i16m2x4_m_ntl(mask, base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint16mf4x4_t test_vlseg4e16_v_u16mf4x4_m_ntl_P1(vbool64_t mask, const uint16_t *base, size_t vl, int domain) {
  return __riscv_vlseg4e16_v_u16mf4x4_m_ntl(mask, base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint16mf2x4_t test_vlseg4e16_v_u16mf2x4_m_ntl_P1(vbool32_t mask, const uint16_t *base, size_t vl, int domain) {
  return __riscv_vlseg4e16_v_u16mf2x4_m_ntl(mask, base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint16m1x4_t test_vlseg4e16_v_u16m1x4_m_ntl_P1(vbool16_t mask, const uint16_t *base, size_t vl, int domain) {
  return __riscv_vlseg4e16_v_u16m1x4_m_ntl(mask, base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint16m2x4_t test_vlseg4e16_v_u16m2x4_m_ntl_P1(vbool8_t mask, const uint16_t *base, size_t vl, int domain) {
  return __riscv_vlseg4e16_v_u16m2x4_m_ntl(mask, base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

