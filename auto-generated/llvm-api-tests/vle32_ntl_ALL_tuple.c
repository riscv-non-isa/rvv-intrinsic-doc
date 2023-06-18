// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -target-feature +zfh \
// RUN:   -target-feature +experimental-zvfh -disable-O0-optnone  \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

#include <riscv_ntlh.h>

vfloat32mf2_t test_vle32_v_f32mf2_ntl_ALL(const float *base, size_t vl, int domain) {
  return __riscv_vle32_v_f32mf2_ntl(base, vl, __RISCV_NTLH_ALL);
}

vfloat32m1_t test_vle32_v_f32m1_ntl_ALL(const float *base, size_t vl, int domain) {
  return __riscv_vle32_v_f32m1_ntl(base, vl, __RISCV_NTLH_ALL);
}

vfloat32m2_t test_vle32_v_f32m2_ntl_ALL(const float *base, size_t vl, int domain) {
  return __riscv_vle32_v_f32m2_ntl(base, vl, __RISCV_NTLH_ALL);
}

vfloat32m4_t test_vle32_v_f32m4_ntl_ALL(const float *base, size_t vl, int domain) {
  return __riscv_vle32_v_f32m4_ntl(base, vl, __RISCV_NTLH_ALL);
}

vfloat32m8_t test_vle32_v_f32m8_ntl_ALL(const float *base, size_t vl, int domain) {
  return __riscv_vle32_v_f32m8_ntl(base, vl, __RISCV_NTLH_ALL);
}

vint32mf2_t test_vle32_v_i32mf2_ntl_ALL(const int32_t *base, size_t vl, int domain) {
  return __riscv_vle32_v_i32mf2_ntl(base, vl, __RISCV_NTLH_ALL);
}

vint32m1_t test_vle32_v_i32m1_ntl_ALL(const int32_t *base, size_t vl, int domain) {
  return __riscv_vle32_v_i32m1_ntl(base, vl, __RISCV_NTLH_ALL);
}

vint32m2_t test_vle32_v_i32m2_ntl_ALL(const int32_t *base, size_t vl, int domain) {
  return __riscv_vle32_v_i32m2_ntl(base, vl, __RISCV_NTLH_ALL);
}

vint32m4_t test_vle32_v_i32m4_ntl_ALL(const int32_t *base, size_t vl, int domain) {
  return __riscv_vle32_v_i32m4_ntl(base, vl, __RISCV_NTLH_ALL);
}

vint32m8_t test_vle32_v_i32m8_ntl_ALL(const int32_t *base, size_t vl, int domain) {
  return __riscv_vle32_v_i32m8_ntl(base, vl, __RISCV_NTLH_ALL);
}

vuint32mf2_t test_vle32_v_u32mf2_ntl_ALL(const uint32_t *base, size_t vl, int domain) {
  return __riscv_vle32_v_u32mf2_ntl(base, vl, __RISCV_NTLH_ALL);
}

vuint32m1_t test_vle32_v_u32m1_ntl_ALL(const uint32_t *base, size_t vl, int domain) {
  return __riscv_vle32_v_u32m1_ntl(base, vl, __RISCV_NTLH_ALL);
}

vuint32m2_t test_vle32_v_u32m2_ntl_ALL(const uint32_t *base, size_t vl, int domain) {
  return __riscv_vle32_v_u32m2_ntl(base, vl, __RISCV_NTLH_ALL);
}

vuint32m4_t test_vle32_v_u32m4_ntl_ALL(const uint32_t *base, size_t vl, int domain) {
  return __riscv_vle32_v_u32m4_ntl(base, vl, __RISCV_NTLH_ALL);
}

vuint32m8_t test_vle32_v_u32m8_ntl_ALL(const uint32_t *base, size_t vl, int domain) {
  return __riscv_vle32_v_u32m8_ntl(base, vl, __RISCV_NTLH_ALL);
}

vfloat32mf2_t test_vle32_v_f32mf2_m_ntl_ALL(vbool64_t mask, const float *base, size_t vl, int domain) {
  return __riscv_vle32_v_f32mf2_m_ntl(mask, base, vl, __RISCV_NTLH_ALL);
}

vfloat32m1_t test_vle32_v_f32m1_m_ntl_ALL(vbool32_t mask, const float *base, size_t vl, int domain) {
  return __riscv_vle32_v_f32m1_m_ntl(mask, base, vl, __RISCV_NTLH_ALL);
}

vfloat32m2_t test_vle32_v_f32m2_m_ntl_ALL(vbool16_t mask, const float *base, size_t vl, int domain) {
  return __riscv_vle32_v_f32m2_m_ntl(mask, base, vl, __RISCV_NTLH_ALL);
}

vfloat32m4_t test_vle32_v_f32m4_m_ntl_ALL(vbool8_t mask, const float *base, size_t vl, int domain) {
  return __riscv_vle32_v_f32m4_m_ntl(mask, base, vl, __RISCV_NTLH_ALL);
}

vfloat32m8_t test_vle32_v_f32m8_m_ntl_ALL(vbool4_t mask, const float *base, size_t vl, int domain) {
  return __riscv_vle32_v_f32m8_m_ntl(mask, base, vl, __RISCV_NTLH_ALL);
}

vint32mf2_t test_vle32_v_i32mf2_m_ntl_ALL(vbool64_t mask, const int32_t *base, size_t vl, int domain) {
  return __riscv_vle32_v_i32mf2_m_ntl(mask, base, vl, __RISCV_NTLH_ALL);
}

vint32m1_t test_vle32_v_i32m1_m_ntl_ALL(vbool32_t mask, const int32_t *base, size_t vl, int domain) {
  return __riscv_vle32_v_i32m1_m_ntl(mask, base, vl, __RISCV_NTLH_ALL);
}

vint32m2_t test_vle32_v_i32m2_m_ntl_ALL(vbool16_t mask, const int32_t *base, size_t vl, int domain) {
  return __riscv_vle32_v_i32m2_m_ntl(mask, base, vl, __RISCV_NTLH_ALL);
}

vint32m4_t test_vle32_v_i32m4_m_ntl_ALL(vbool8_t mask, const int32_t *base, size_t vl, int domain) {
  return __riscv_vle32_v_i32m4_m_ntl(mask, base, vl, __RISCV_NTLH_ALL);
}

vint32m8_t test_vle32_v_i32m8_m_ntl_ALL(vbool4_t mask, const int32_t *base, size_t vl, int domain) {
  return __riscv_vle32_v_i32m8_m_ntl(mask, base, vl, __RISCV_NTLH_ALL);
}

vuint32mf2_t test_vle32_v_u32mf2_m_ntl_ALL(vbool64_t mask, const uint32_t *base, size_t vl, int domain) {
  return __riscv_vle32_v_u32mf2_m_ntl(mask, base, vl, __RISCV_NTLH_ALL);
}

vuint32m1_t test_vle32_v_u32m1_m_ntl_ALL(vbool32_t mask, const uint32_t *base, size_t vl, int domain) {
  return __riscv_vle32_v_u32m1_m_ntl(mask, base, vl, __RISCV_NTLH_ALL);
}

vuint32m2_t test_vle32_v_u32m2_m_ntl_ALL(vbool16_t mask, const uint32_t *base, size_t vl, int domain) {
  return __riscv_vle32_v_u32m2_m_ntl(mask, base, vl, __RISCV_NTLH_ALL);
}

vuint32m4_t test_vle32_v_u32m4_m_ntl_ALL(vbool8_t mask, const uint32_t *base, size_t vl, int domain) {
  return __riscv_vle32_v_u32m4_m_ntl(mask, base, vl, __RISCV_NTLH_ALL);
}

vuint32m8_t test_vle32_v_u32m8_m_ntl_ALL(vbool4_t mask, const uint32_t *base, size_t vl, int domain) {
  return __riscv_vle32_v_u32m8_m_ntl(mask, base, vl, __RISCV_NTLH_ALL);
}

