// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -target-feature +zfh \
// RUN:   -target-feature +experimental-zvfh -disable-O0-optnone  \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

#include <riscv_ntlh.h>

vfloat16mf4x4_t test_vlsseg4e16_v_f16mf4x4_ntl_S1(const _Float16 *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg4e16_v_f16mf4x4_ntl(base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vfloat16mf2x4_t test_vlsseg4e16_v_f16mf2x4_ntl_S1(const _Float16 *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg4e16_v_f16mf2x4_ntl(base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vfloat16m1x4_t test_vlsseg4e16_v_f16m1x4_ntl_S1(const _Float16 *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg4e16_v_f16m1x4_ntl(base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vfloat16m2x4_t test_vlsseg4e16_v_f16m2x4_ntl_S1(const _Float16 *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg4e16_v_f16m2x4_ntl(base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint16mf4x4_t test_vlsseg4e16_v_i16mf4x4_ntl_S1(const int16_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg4e16_v_i16mf4x4_ntl(base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint16mf2x4_t test_vlsseg4e16_v_i16mf2x4_ntl_S1(const int16_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg4e16_v_i16mf2x4_ntl(base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint16m1x4_t test_vlsseg4e16_v_i16m1x4_ntl_S1(const int16_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg4e16_v_i16m1x4_ntl(base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint16m2x4_t test_vlsseg4e16_v_i16m2x4_ntl_S1(const int16_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg4e16_v_i16m2x4_ntl(base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint16mf4x4_t test_vlsseg4e16_v_u16mf4x4_ntl_S1(const uint16_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg4e16_v_u16mf4x4_ntl(base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint16mf2x4_t test_vlsseg4e16_v_u16mf2x4_ntl_S1(const uint16_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg4e16_v_u16mf2x4_ntl(base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint16m1x4_t test_vlsseg4e16_v_u16m1x4_ntl_S1(const uint16_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg4e16_v_u16m1x4_ntl(base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint16m2x4_t test_vlsseg4e16_v_u16m2x4_ntl_S1(const uint16_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg4e16_v_u16m2x4_ntl(base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vfloat16mf4x4_t test_vlsseg4e16_v_f16mf4x4_m_ntl_S1(vbool64_t mask, const _Float16 *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg4e16_v_f16mf4x4_m_ntl(mask, base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vfloat16mf2x4_t test_vlsseg4e16_v_f16mf2x4_m_ntl_S1(vbool32_t mask, const _Float16 *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg4e16_v_f16mf2x4_m_ntl(mask, base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vfloat16m1x4_t test_vlsseg4e16_v_f16m1x4_m_ntl_S1(vbool16_t mask, const _Float16 *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg4e16_v_f16m1x4_m_ntl(mask, base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vfloat16m2x4_t test_vlsseg4e16_v_f16m2x4_m_ntl_S1(vbool8_t mask, const _Float16 *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg4e16_v_f16m2x4_m_ntl(mask, base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint16mf4x4_t test_vlsseg4e16_v_i16mf4x4_m_ntl_S1(vbool64_t mask, const int16_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg4e16_v_i16mf4x4_m_ntl(mask, base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint16mf2x4_t test_vlsseg4e16_v_i16mf2x4_m_ntl_S1(vbool32_t mask, const int16_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg4e16_v_i16mf2x4_m_ntl(mask, base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint16m1x4_t test_vlsseg4e16_v_i16m1x4_m_ntl_S1(vbool16_t mask, const int16_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg4e16_v_i16m1x4_m_ntl(mask, base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint16m2x4_t test_vlsseg4e16_v_i16m2x4_m_ntl_S1(vbool8_t mask, const int16_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg4e16_v_i16m2x4_m_ntl(mask, base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint16mf4x4_t test_vlsseg4e16_v_u16mf4x4_m_ntl_S1(vbool64_t mask, const uint16_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg4e16_v_u16mf4x4_m_ntl(mask, base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint16mf2x4_t test_vlsseg4e16_v_u16mf2x4_m_ntl_S1(vbool32_t mask, const uint16_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg4e16_v_u16mf2x4_m_ntl(mask, base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint16m1x4_t test_vlsseg4e16_v_u16m1x4_m_ntl_S1(vbool16_t mask, const uint16_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg4e16_v_u16m1x4_m_ntl(mask, base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint16m2x4_t test_vlsseg4e16_v_u16m2x4_m_ntl_S1(vbool8_t mask, const uint16_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg4e16_v_u16m2x4_m_ntl(mask, base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

