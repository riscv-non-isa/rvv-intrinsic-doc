// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -target-feature +zfh \
// RUN:   -target-feature +experimental-zvfh -disable-O0-optnone  \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

#include <riscv_ntlh.h>

void test_vssseg6e16_v_f16mf4x6_ntl_S1(_Float16 *base, ptrdiff_t bstride, vfloat16mf4x6_t v_tuple, size_t vl, int domain) {
  return __riscv_vssseg6e16_ntl(base, bstride, v_tuple, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vssseg6e16_v_f16mf2x6_ntl_S1(_Float16 *base, ptrdiff_t bstride, vfloat16mf2x6_t v_tuple, size_t vl, int domain) {
  return __riscv_vssseg6e16_ntl(base, bstride, v_tuple, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vssseg6e16_v_f16m1x6_ntl_S1(_Float16 *base, ptrdiff_t bstride, vfloat16m1x6_t v_tuple, size_t vl, int domain) {
  return __riscv_vssseg6e16_ntl(base, bstride, v_tuple, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vssseg6e16_v_i16mf4x6_ntl_S1(int16_t *base, ptrdiff_t bstride, vint16mf4x6_t v_tuple, size_t vl, int domain) {
  return __riscv_vssseg6e16_ntl(base, bstride, v_tuple, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vssseg6e16_v_i16mf2x6_ntl_S1(int16_t *base, ptrdiff_t bstride, vint16mf2x6_t v_tuple, size_t vl, int domain) {
  return __riscv_vssseg6e16_ntl(base, bstride, v_tuple, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vssseg6e16_v_i16m1x6_ntl_S1(int16_t *base, ptrdiff_t bstride, vint16m1x6_t v_tuple, size_t vl, int domain) {
  return __riscv_vssseg6e16_ntl(base, bstride, v_tuple, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vssseg6e16_v_u16mf4x6_ntl_S1(uint16_t *base, ptrdiff_t bstride, vuint16mf4x6_t v_tuple, size_t vl, int domain) {
  return __riscv_vssseg6e16_ntl(base, bstride, v_tuple, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vssseg6e16_v_u16mf2x6_ntl_S1(uint16_t *base, ptrdiff_t bstride, vuint16mf2x6_t v_tuple, size_t vl, int domain) {
  return __riscv_vssseg6e16_ntl(base, bstride, v_tuple, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vssseg6e16_v_u16m1x6_ntl_S1(uint16_t *base, ptrdiff_t bstride, vuint16m1x6_t v_tuple, size_t vl, int domain) {
  return __riscv_vssseg6e16_ntl(base, bstride, v_tuple, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vssseg6e16_v_f16mf4x6_m_ntl_S1(vbool64_t mask, _Float16 *base, ptrdiff_t bstride, vfloat16mf4x6_t v_tuple, size_t vl, int domain) {
  return __riscv_vssseg6e16_ntl(mask, base, bstride, v_tuple, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vssseg6e16_v_f16mf2x6_m_ntl_S1(vbool32_t mask, _Float16 *base, ptrdiff_t bstride, vfloat16mf2x6_t v_tuple, size_t vl, int domain) {
  return __riscv_vssseg6e16_ntl(mask, base, bstride, v_tuple, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vssseg6e16_v_f16m1x6_m_ntl_S1(vbool16_t mask, _Float16 *base, ptrdiff_t bstride, vfloat16m1x6_t v_tuple, size_t vl, int domain) {
  return __riscv_vssseg6e16_ntl(mask, base, bstride, v_tuple, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vssseg6e16_v_i16mf4x6_m_ntl_S1(vbool64_t mask, int16_t *base, ptrdiff_t bstride, vint16mf4x6_t v_tuple, size_t vl, int domain) {
  return __riscv_vssseg6e16_ntl(mask, base, bstride, v_tuple, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vssseg6e16_v_i16mf2x6_m_ntl_S1(vbool32_t mask, int16_t *base, ptrdiff_t bstride, vint16mf2x6_t v_tuple, size_t vl, int domain) {
  return __riscv_vssseg6e16_ntl(mask, base, bstride, v_tuple, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vssseg6e16_v_i16m1x6_m_ntl_S1(vbool16_t mask, int16_t *base, ptrdiff_t bstride, vint16m1x6_t v_tuple, size_t vl, int domain) {
  return __riscv_vssseg6e16_ntl(mask, base, bstride, v_tuple, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vssseg6e16_v_u16mf4x6_m_ntl_S1(vbool64_t mask, uint16_t *base, ptrdiff_t bstride, vuint16mf4x6_t v_tuple, size_t vl, int domain) {
  return __riscv_vssseg6e16_ntl(mask, base, bstride, v_tuple, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vssseg6e16_v_u16mf2x6_m_ntl_S1(vbool32_t mask, uint16_t *base, ptrdiff_t bstride, vuint16mf2x6_t v_tuple, size_t vl, int domain) {
  return __riscv_vssseg6e16_ntl(mask, base, bstride, v_tuple, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vssseg6e16_v_u16m1x6_m_ntl_S1(vbool16_t mask, uint16_t *base, ptrdiff_t bstride, vuint16m1x6_t v_tuple, size_t vl, int domain) {
  return __riscv_vssseg6e16_ntl(mask, base, bstride, v_tuple, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

