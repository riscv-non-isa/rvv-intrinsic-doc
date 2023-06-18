// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -target-feature +zfh \
// RUN:   -target-feature +experimental-zvfh -disable-O0-optnone  \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

#include <riscv_ntlh.h>

void test_vsseg3e32_v_f32mf2x3_ntl_ALL(float *base, vfloat32mf2x3_t v_tuple, size_t vl, int domain) {
  return __riscv_vsseg3e32_v_f32mf2x3_ntl(base, v_tuple, vl, __RISCV_NTLH_ALL);
}

void test_vsseg3e32_v_f32m1x3_ntl_ALL(float *base, vfloat32m1x3_t v_tuple, size_t vl, int domain) {
  return __riscv_vsseg3e32_v_f32m1x3_ntl(base, v_tuple, vl, __RISCV_NTLH_ALL);
}

void test_vsseg3e32_v_f32m2x3_ntl_ALL(float *base, vfloat32m2x3_t v_tuple, size_t vl, int domain) {
  return __riscv_vsseg3e32_v_f32m2x3_ntl(base, v_tuple, vl, __RISCV_NTLH_ALL);
}

void test_vsseg3e32_v_i32mf2x3_ntl_ALL(int32_t *base, vint32mf2x3_t v_tuple, size_t vl, int domain) {
  return __riscv_vsseg3e32_v_i32mf2x3_ntl(base, v_tuple, vl, __RISCV_NTLH_ALL);
}

void test_vsseg3e32_v_i32m1x3_ntl_ALL(int32_t *base, vint32m1x3_t v_tuple, size_t vl, int domain) {
  return __riscv_vsseg3e32_v_i32m1x3_ntl(base, v_tuple, vl, __RISCV_NTLH_ALL);
}

void test_vsseg3e32_v_i32m2x3_ntl_ALL(int32_t *base, vint32m2x3_t v_tuple, size_t vl, int domain) {
  return __riscv_vsseg3e32_v_i32m2x3_ntl(base, v_tuple, vl, __RISCV_NTLH_ALL);
}

void test_vsseg3e32_v_u32mf2x3_ntl_ALL(uint32_t *base, vuint32mf2x3_t v_tuple, size_t vl, int domain) {
  return __riscv_vsseg3e32_v_u32mf2x3_ntl(base, v_tuple, vl, __RISCV_NTLH_ALL);
}

void test_vsseg3e32_v_u32m1x3_ntl_ALL(uint32_t *base, vuint32m1x3_t v_tuple, size_t vl, int domain) {
  return __riscv_vsseg3e32_v_u32m1x3_ntl(base, v_tuple, vl, __RISCV_NTLH_ALL);
}

void test_vsseg3e32_v_u32m2x3_ntl_ALL(uint32_t *base, vuint32m2x3_t v_tuple, size_t vl, int domain) {
  return __riscv_vsseg3e32_v_u32m2x3_ntl(base, v_tuple, vl, __RISCV_NTLH_ALL);
}

void test_vsseg3e32_v_f32mf2x3_m_ntl_ALL(vbool64_t mask, float *base, vfloat32mf2x3_t v_tuple, size_t vl, int domain) {
  return __riscv_vsseg3e32_v_f32mf2x3_m_ntl(mask, base, v_tuple, vl, __RISCV_NTLH_ALL);
}

void test_vsseg3e32_v_f32m1x3_m_ntl_ALL(vbool32_t mask, float *base, vfloat32m1x3_t v_tuple, size_t vl, int domain) {
  return __riscv_vsseg3e32_v_f32m1x3_m_ntl(mask, base, v_tuple, vl, __RISCV_NTLH_ALL);
}

void test_vsseg3e32_v_f32m2x3_m_ntl_ALL(vbool16_t mask, float *base, vfloat32m2x3_t v_tuple, size_t vl, int domain) {
  return __riscv_vsseg3e32_v_f32m2x3_m_ntl(mask, base, v_tuple, vl, __RISCV_NTLH_ALL);
}

void test_vsseg3e32_v_i32mf2x3_m_ntl_ALL(vbool64_t mask, int32_t *base, vint32mf2x3_t v_tuple, size_t vl, int domain) {
  return __riscv_vsseg3e32_v_i32mf2x3_m_ntl(mask, base, v_tuple, vl, __RISCV_NTLH_ALL);
}

void test_vsseg3e32_v_i32m1x3_m_ntl_ALL(vbool32_t mask, int32_t *base, vint32m1x3_t v_tuple, size_t vl, int domain) {
  return __riscv_vsseg3e32_v_i32m1x3_m_ntl(mask, base, v_tuple, vl, __RISCV_NTLH_ALL);
}

void test_vsseg3e32_v_i32m2x3_m_ntl_ALL(vbool16_t mask, int32_t *base, vint32m2x3_t v_tuple, size_t vl, int domain) {
  return __riscv_vsseg3e32_v_i32m2x3_m_ntl(mask, base, v_tuple, vl, __RISCV_NTLH_ALL);
}

void test_vsseg3e32_v_u32mf2x3_m_ntl_ALL(vbool64_t mask, uint32_t *base, vuint32mf2x3_t v_tuple, size_t vl, int domain) {
  return __riscv_vsseg3e32_v_u32mf2x3_m_ntl(mask, base, v_tuple, vl, __RISCV_NTLH_ALL);
}

void test_vsseg3e32_v_u32m1x3_m_ntl_ALL(vbool32_t mask, uint32_t *base, vuint32m1x3_t v_tuple, size_t vl, int domain) {
  return __riscv_vsseg3e32_v_u32m1x3_m_ntl(mask, base, v_tuple, vl, __RISCV_NTLH_ALL);
}

void test_vsseg3e32_v_u32m2x3_m_ntl_ALL(vbool16_t mask, uint32_t *base, vuint32m2x3_t v_tuple, size_t vl, int domain) {
  return __riscv_vsseg3e32_v_u32m2x3_m_ntl(mask, base, v_tuple, vl, __RISCV_NTLH_ALL);
}

