// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -target-feature +zfh \
// RUN:   -target-feature +experimental-zvfh -disable-O0-optnone  \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

#include <riscv_ntlh.h>

vfloat32mf2x4_t test_vlseg4e32ff_v_f32mf2x4_ntl_ALL(const float *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg4e32ff_v_f32mf2x4_ntl(base, new_vl, vl, __RISCV_NTLH_ALL);
}

vfloat32m1x4_t test_vlseg4e32ff_v_f32m1x4_ntl_ALL(const float *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg4e32ff_v_f32m1x4_ntl(base, new_vl, vl, __RISCV_NTLH_ALL);
}

vfloat32m2x4_t test_vlseg4e32ff_v_f32m2x4_ntl_ALL(const float *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg4e32ff_v_f32m2x4_ntl(base, new_vl, vl, __RISCV_NTLH_ALL);
}

vint32mf2x4_t test_vlseg4e32ff_v_i32mf2x4_ntl_ALL(const int32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg4e32ff_v_i32mf2x4_ntl(base, new_vl, vl, __RISCV_NTLH_ALL);
}

vint32m1x4_t test_vlseg4e32ff_v_i32m1x4_ntl_ALL(const int32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg4e32ff_v_i32m1x4_ntl(base, new_vl, vl, __RISCV_NTLH_ALL);
}

vint32m2x4_t test_vlseg4e32ff_v_i32m2x4_ntl_ALL(const int32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg4e32ff_v_i32m2x4_ntl(base, new_vl, vl, __RISCV_NTLH_ALL);
}

vuint32mf2x4_t test_vlseg4e32ff_v_u32mf2x4_ntl_ALL(const uint32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg4e32ff_v_u32mf2x4_ntl(base, new_vl, vl, __RISCV_NTLH_ALL);
}

vuint32m1x4_t test_vlseg4e32ff_v_u32m1x4_ntl_ALL(const uint32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg4e32ff_v_u32m1x4_ntl(base, new_vl, vl, __RISCV_NTLH_ALL);
}

vuint32m2x4_t test_vlseg4e32ff_v_u32m2x4_ntl_ALL(const uint32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg4e32ff_v_u32m2x4_ntl(base, new_vl, vl, __RISCV_NTLH_ALL);
}

vfloat32mf2x4_t test_vlseg4e32ff_v_f32mf2x4_m_ntl_ALL(vbool64_t mask, const float *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg4e32ff_v_f32mf2x4_m_ntl(mask, base, new_vl, vl, __RISCV_NTLH_ALL);
}

vfloat32m1x4_t test_vlseg4e32ff_v_f32m1x4_m_ntl_ALL(vbool32_t mask, const float *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg4e32ff_v_f32m1x4_m_ntl(mask, base, new_vl, vl, __RISCV_NTLH_ALL);
}

vfloat32m2x4_t test_vlseg4e32ff_v_f32m2x4_m_ntl_ALL(vbool16_t mask, const float *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg4e32ff_v_f32m2x4_m_ntl(mask, base, new_vl, vl, __RISCV_NTLH_ALL);
}

vint32mf2x4_t test_vlseg4e32ff_v_i32mf2x4_m_ntl_ALL(vbool64_t mask, const int32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg4e32ff_v_i32mf2x4_m_ntl(mask, base, new_vl, vl, __RISCV_NTLH_ALL);
}

vint32m1x4_t test_vlseg4e32ff_v_i32m1x4_m_ntl_ALL(vbool32_t mask, const int32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg4e32ff_v_i32m1x4_m_ntl(mask, base, new_vl, vl, __RISCV_NTLH_ALL);
}

vint32m2x4_t test_vlseg4e32ff_v_i32m2x4_m_ntl_ALL(vbool16_t mask, const int32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg4e32ff_v_i32m2x4_m_ntl(mask, base, new_vl, vl, __RISCV_NTLH_ALL);
}

vuint32mf2x4_t test_vlseg4e32ff_v_u32mf2x4_m_ntl_ALL(vbool64_t mask, const uint32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg4e32ff_v_u32mf2x4_m_ntl(mask, base, new_vl, vl, __RISCV_NTLH_ALL);
}

vuint32m1x4_t test_vlseg4e32ff_v_u32m1x4_m_ntl_ALL(vbool32_t mask, const uint32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg4e32ff_v_u32m1x4_m_ntl(mask, base, new_vl, vl, __RISCV_NTLH_ALL);
}

vuint32m2x4_t test_vlseg4e32ff_v_u32m2x4_m_ntl_ALL(vbool16_t mask, const uint32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg4e32ff_v_u32m2x4_m_ntl(mask, base, new_vl, vl, __RISCV_NTLH_ALL);
}

