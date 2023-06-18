// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -target-feature +zfh \
// RUN:   -target-feature +experimental-zvfh -disable-O0-optnone  \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

#include <riscv_ntlh.h>

vfloat16mf4x5_t test_vlseg5e16ff_v_f16mf4x5_ntl_ALL(const _Float16 *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg5e16ff_v_f16mf4x5_ntl(base, new_vl, vl, __RISCV_NTLH_ALL);
}

vfloat16mf2x5_t test_vlseg5e16ff_v_f16mf2x5_ntl_ALL(const _Float16 *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg5e16ff_v_f16mf2x5_ntl(base, new_vl, vl, __RISCV_NTLH_ALL);
}

vfloat16m1x5_t test_vlseg5e16ff_v_f16m1x5_ntl_ALL(const _Float16 *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg5e16ff_v_f16m1x5_ntl(base, new_vl, vl, __RISCV_NTLH_ALL);
}

vint16mf4x5_t test_vlseg5e16ff_v_i16mf4x5_ntl_ALL(const int16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg5e16ff_v_i16mf4x5_ntl(base, new_vl, vl, __RISCV_NTLH_ALL);
}

vint16mf2x5_t test_vlseg5e16ff_v_i16mf2x5_ntl_ALL(const int16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg5e16ff_v_i16mf2x5_ntl(base, new_vl, vl, __RISCV_NTLH_ALL);
}

vint16m1x5_t test_vlseg5e16ff_v_i16m1x5_ntl_ALL(const int16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg5e16ff_v_i16m1x5_ntl(base, new_vl, vl, __RISCV_NTLH_ALL);
}

vuint16mf4x5_t test_vlseg5e16ff_v_u16mf4x5_ntl_ALL(const uint16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg5e16ff_v_u16mf4x5_ntl(base, new_vl, vl, __RISCV_NTLH_ALL);
}

vuint16mf2x5_t test_vlseg5e16ff_v_u16mf2x5_ntl_ALL(const uint16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg5e16ff_v_u16mf2x5_ntl(base, new_vl, vl, __RISCV_NTLH_ALL);
}

vuint16m1x5_t test_vlseg5e16ff_v_u16m1x5_ntl_ALL(const uint16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg5e16ff_v_u16m1x5_ntl(base, new_vl, vl, __RISCV_NTLH_ALL);
}

vfloat16mf4x5_t test_vlseg5e16ff_v_f16mf4x5_m_ntl_ALL(vbool64_t mask, const _Float16 *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg5e16ff_v_f16mf4x5_m_ntl(mask, base, new_vl, vl, __RISCV_NTLH_ALL);
}

vfloat16mf2x5_t test_vlseg5e16ff_v_f16mf2x5_m_ntl_ALL(vbool32_t mask, const _Float16 *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg5e16ff_v_f16mf2x5_m_ntl(mask, base, new_vl, vl, __RISCV_NTLH_ALL);
}

vfloat16m1x5_t test_vlseg5e16ff_v_f16m1x5_m_ntl_ALL(vbool16_t mask, const _Float16 *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg5e16ff_v_f16m1x5_m_ntl(mask, base, new_vl, vl, __RISCV_NTLH_ALL);
}

vint16mf4x5_t test_vlseg5e16ff_v_i16mf4x5_m_ntl_ALL(vbool64_t mask, const int16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg5e16ff_v_i16mf4x5_m_ntl(mask, base, new_vl, vl, __RISCV_NTLH_ALL);
}

vint16mf2x5_t test_vlseg5e16ff_v_i16mf2x5_m_ntl_ALL(vbool32_t mask, const int16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg5e16ff_v_i16mf2x5_m_ntl(mask, base, new_vl, vl, __RISCV_NTLH_ALL);
}

vint16m1x5_t test_vlseg5e16ff_v_i16m1x5_m_ntl_ALL(vbool16_t mask, const int16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg5e16ff_v_i16m1x5_m_ntl(mask, base, new_vl, vl, __RISCV_NTLH_ALL);
}

vuint16mf4x5_t test_vlseg5e16ff_v_u16mf4x5_m_ntl_ALL(vbool64_t mask, const uint16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg5e16ff_v_u16mf4x5_m_ntl(mask, base, new_vl, vl, __RISCV_NTLH_ALL);
}

vuint16mf2x5_t test_vlseg5e16ff_v_u16mf2x5_m_ntl_ALL(vbool32_t mask, const uint16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg5e16ff_v_u16mf2x5_m_ntl(mask, base, new_vl, vl, __RISCV_NTLH_ALL);
}

vuint16m1x5_t test_vlseg5e16ff_v_u16m1x5_m_ntl_ALL(vbool16_t mask, const uint16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg5e16ff_v_u16m1x5_m_ntl(mask, base, new_vl, vl, __RISCV_NTLH_ALL);
}

