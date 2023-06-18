// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -target-feature +zfh \
// RUN:   -target-feature +experimental-zvfh -disable-O0-optnone  \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

#include <riscv_ntlh.h>

void test_vsseg5e32_v_f32mf2x5_ntl_S1(float *base, vfloat32mf2x5_t v_tuple, size_t vl, int domain) {
  return __riscv_vsseg5e32_ntl(base, v_tuple, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vsseg5e32_v_f32m1x5_ntl_S1(float *base, vfloat32m1x5_t v_tuple, size_t vl, int domain) {
  return __riscv_vsseg5e32_ntl(base, v_tuple, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vsseg5e32_v_i32mf2x5_ntl_S1(int32_t *base, vint32mf2x5_t v_tuple, size_t vl, int domain) {
  return __riscv_vsseg5e32_ntl(base, v_tuple, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vsseg5e32_v_i32m1x5_ntl_S1(int32_t *base, vint32m1x5_t v_tuple, size_t vl, int domain) {
  return __riscv_vsseg5e32_ntl(base, v_tuple, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vsseg5e32_v_u32mf2x5_ntl_S1(uint32_t *base, vuint32mf2x5_t v_tuple, size_t vl, int domain) {
  return __riscv_vsseg5e32_ntl(base, v_tuple, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vsseg5e32_v_u32m1x5_ntl_S1(uint32_t *base, vuint32m1x5_t v_tuple, size_t vl, int domain) {
  return __riscv_vsseg5e32_ntl(base, v_tuple, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vsseg5e32_v_f32mf2x5_m_ntl_S1(vbool64_t mask, float *base, vfloat32mf2x5_t v_tuple, size_t vl, int domain) {
  return __riscv_vsseg5e32_ntl(mask, base, v_tuple, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vsseg5e32_v_f32m1x5_m_ntl_S1(vbool32_t mask, float *base, vfloat32m1x5_t v_tuple, size_t vl, int domain) {
  return __riscv_vsseg5e32_ntl(mask, base, v_tuple, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vsseg5e32_v_i32mf2x5_m_ntl_S1(vbool64_t mask, int32_t *base, vint32mf2x5_t v_tuple, size_t vl, int domain) {
  return __riscv_vsseg5e32_ntl(mask, base, v_tuple, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vsseg5e32_v_i32m1x5_m_ntl_S1(vbool32_t mask, int32_t *base, vint32m1x5_t v_tuple, size_t vl, int domain) {
  return __riscv_vsseg5e32_ntl(mask, base, v_tuple, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vsseg5e32_v_u32mf2x5_m_ntl_S1(vbool64_t mask, uint32_t *base, vuint32mf2x5_t v_tuple, size_t vl, int domain) {
  return __riscv_vsseg5e32_ntl(mask, base, v_tuple, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vsseg5e32_v_u32m1x5_m_ntl_S1(vbool32_t mask, uint32_t *base, vuint32m1x5_t v_tuple, size_t vl, int domain) {
  return __riscv_vsseg5e32_ntl(mask, base, v_tuple, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

