// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -target-feature +zfh \
// RUN:   -target-feature +experimental-zvfh -disable-O0-optnone  \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

#include <riscv_ntlh.h>

vfloat16mf4x3_t test_vlsseg3e16_v_f16mf4x3_ntl_PALL(const _Float16 *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg3e16_v_f16mf4x3_ntl(base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vfloat16mf2x3_t test_vlsseg3e16_v_f16mf2x3_ntl_PALL(const _Float16 *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg3e16_v_f16mf2x3_ntl(base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vfloat16m1x3_t test_vlsseg3e16_v_f16m1x3_ntl_PALL(const _Float16 *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg3e16_v_f16m1x3_ntl(base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vfloat16m2x3_t test_vlsseg3e16_v_f16m2x3_ntl_PALL(const _Float16 *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg3e16_v_f16m2x3_ntl(base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint16mf4x3_t test_vlsseg3e16_v_i16mf4x3_ntl_PALL(const int16_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg3e16_v_i16mf4x3_ntl(base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint16mf2x3_t test_vlsseg3e16_v_i16mf2x3_ntl_PALL(const int16_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg3e16_v_i16mf2x3_ntl(base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint16m1x3_t test_vlsseg3e16_v_i16m1x3_ntl_PALL(const int16_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg3e16_v_i16m1x3_ntl(base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint16m2x3_t test_vlsseg3e16_v_i16m2x3_ntl_PALL(const int16_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg3e16_v_i16m2x3_ntl(base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint16mf4x3_t test_vlsseg3e16_v_u16mf4x3_ntl_PALL(const uint16_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg3e16_v_u16mf4x3_ntl(base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint16mf2x3_t test_vlsseg3e16_v_u16mf2x3_ntl_PALL(const uint16_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg3e16_v_u16mf2x3_ntl(base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint16m1x3_t test_vlsseg3e16_v_u16m1x3_ntl_PALL(const uint16_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg3e16_v_u16m1x3_ntl(base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint16m2x3_t test_vlsseg3e16_v_u16m2x3_ntl_PALL(const uint16_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg3e16_v_u16m2x3_ntl(base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vfloat16mf4x3_t test_vlsseg3e16_v_f16mf4x3_m_ntl_PALL(vbool64_t mask, const _Float16 *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg3e16_v_f16mf4x3_m_ntl(mask, base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vfloat16mf2x3_t test_vlsseg3e16_v_f16mf2x3_m_ntl_PALL(vbool32_t mask, const _Float16 *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg3e16_v_f16mf2x3_m_ntl(mask, base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vfloat16m1x3_t test_vlsseg3e16_v_f16m1x3_m_ntl_PALL(vbool16_t mask, const _Float16 *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg3e16_v_f16m1x3_m_ntl(mask, base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vfloat16m2x3_t test_vlsseg3e16_v_f16m2x3_m_ntl_PALL(vbool8_t mask, const _Float16 *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg3e16_v_f16m2x3_m_ntl(mask, base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint16mf4x3_t test_vlsseg3e16_v_i16mf4x3_m_ntl_PALL(vbool64_t mask, const int16_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg3e16_v_i16mf4x3_m_ntl(mask, base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint16mf2x3_t test_vlsseg3e16_v_i16mf2x3_m_ntl_PALL(vbool32_t mask, const int16_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg3e16_v_i16mf2x3_m_ntl(mask, base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint16m1x3_t test_vlsseg3e16_v_i16m1x3_m_ntl_PALL(vbool16_t mask, const int16_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg3e16_v_i16m1x3_m_ntl(mask, base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint16m2x3_t test_vlsseg3e16_v_i16m2x3_m_ntl_PALL(vbool8_t mask, const int16_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg3e16_v_i16m2x3_m_ntl(mask, base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint16mf4x3_t test_vlsseg3e16_v_u16mf4x3_m_ntl_PALL(vbool64_t mask, const uint16_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg3e16_v_u16mf4x3_m_ntl(mask, base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint16mf2x3_t test_vlsseg3e16_v_u16mf2x3_m_ntl_PALL(vbool32_t mask, const uint16_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg3e16_v_u16mf2x3_m_ntl(mask, base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint16m1x3_t test_vlsseg3e16_v_u16m1x3_m_ntl_PALL(vbool16_t mask, const uint16_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg3e16_v_u16m1x3_m_ntl(mask, base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint16m2x3_t test_vlsseg3e16_v_u16m2x3_m_ntl_PALL(vbool8_t mask, const uint16_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg3e16_v_u16m2x3_m_ntl(mask, base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

