// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -target-feature +zfh \
// RUN:   -target-feature +experimental-zvfh -disable-O0-optnone  \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

#include <riscv_ntlh.h>

vfloat16mf4x8_t test_vlseg8e16ff_v_f16mf4x8_tu_ntl_ALL(vfloat16mf4x8_t maskedoff_tuple, const _Float16 *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg8e16ff_v_f16mf4x8_tu_ntl(maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL);
}

vfloat16mf2x8_t test_vlseg8e16ff_v_f16mf2x8_tu_ntl_ALL(vfloat16mf2x8_t maskedoff_tuple, const _Float16 *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg8e16ff_v_f16mf2x8_tu_ntl(maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL);
}

vfloat16m1x8_t test_vlseg8e16ff_v_f16m1x8_tu_ntl_ALL(vfloat16m1x8_t maskedoff_tuple, const _Float16 *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg8e16ff_v_f16m1x8_tu_ntl(maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL);
}

vint16mf4x8_t test_vlseg8e16ff_v_i16mf4x8_tu_ntl_ALL(vint16mf4x8_t maskedoff_tuple, const int16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg8e16ff_v_i16mf4x8_tu_ntl(maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL);
}

vint16mf2x8_t test_vlseg8e16ff_v_i16mf2x8_tu_ntl_ALL(vint16mf2x8_t maskedoff_tuple, const int16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg8e16ff_v_i16mf2x8_tu_ntl(maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL);
}

vint16m1x8_t test_vlseg8e16ff_v_i16m1x8_tu_ntl_ALL(vint16m1x8_t maskedoff_tuple, const int16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg8e16ff_v_i16m1x8_tu_ntl(maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL);
}

vuint16mf4x8_t test_vlseg8e16ff_v_u16mf4x8_tu_ntl_ALL(vuint16mf4x8_t maskedoff_tuple, const uint16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg8e16ff_v_u16mf4x8_tu_ntl(maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL);
}

vuint16mf2x8_t test_vlseg8e16ff_v_u16mf2x8_tu_ntl_ALL(vuint16mf2x8_t maskedoff_tuple, const uint16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg8e16ff_v_u16mf2x8_tu_ntl(maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL);
}

vuint16m1x8_t test_vlseg8e16ff_v_u16m1x8_tu_ntl_ALL(vuint16m1x8_t maskedoff_tuple, const uint16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg8e16ff_v_u16m1x8_tu_ntl(maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL);
}

vfloat16mf4x8_t test_vlseg8e16ff_v_f16mf4x8_tum_ntl_ALL(vbool64_t mask, vfloat16mf4x8_t maskedoff_tuple, const _Float16 *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg8e16ff_v_f16mf4x8_tum_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL);
}

vfloat16mf2x8_t test_vlseg8e16ff_v_f16mf2x8_tum_ntl_ALL(vbool32_t mask, vfloat16mf2x8_t maskedoff_tuple, const _Float16 *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg8e16ff_v_f16mf2x8_tum_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL);
}

vfloat16m1x8_t test_vlseg8e16ff_v_f16m1x8_tum_ntl_ALL(vbool16_t mask, vfloat16m1x8_t maskedoff_tuple, const _Float16 *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg8e16ff_v_f16m1x8_tum_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL);
}

vint16mf4x8_t test_vlseg8e16ff_v_i16mf4x8_tum_ntl_ALL(vbool64_t mask, vint16mf4x8_t maskedoff_tuple, const int16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg8e16ff_v_i16mf4x8_tum_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL);
}

vint16mf2x8_t test_vlseg8e16ff_v_i16mf2x8_tum_ntl_ALL(vbool32_t mask, vint16mf2x8_t maskedoff_tuple, const int16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg8e16ff_v_i16mf2x8_tum_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL);
}

vint16m1x8_t test_vlseg8e16ff_v_i16m1x8_tum_ntl_ALL(vbool16_t mask, vint16m1x8_t maskedoff_tuple, const int16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg8e16ff_v_i16m1x8_tum_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL);
}

vuint16mf4x8_t test_vlseg8e16ff_v_u16mf4x8_tum_ntl_ALL(vbool64_t mask, vuint16mf4x8_t maskedoff_tuple, const uint16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg8e16ff_v_u16mf4x8_tum_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL);
}

vuint16mf2x8_t test_vlseg8e16ff_v_u16mf2x8_tum_ntl_ALL(vbool32_t mask, vuint16mf2x8_t maskedoff_tuple, const uint16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg8e16ff_v_u16mf2x8_tum_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL);
}

vuint16m1x8_t test_vlseg8e16ff_v_u16m1x8_tum_ntl_ALL(vbool16_t mask, vuint16m1x8_t maskedoff_tuple, const uint16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg8e16ff_v_u16m1x8_tum_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL);
}

vfloat16mf4x8_t test_vlseg8e16ff_v_f16mf4x8_tumu_ntl_ALL(vbool64_t mask, vfloat16mf4x8_t maskedoff_tuple, const _Float16 *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg8e16ff_v_f16mf4x8_tumu_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL);
}

vfloat16mf2x8_t test_vlseg8e16ff_v_f16mf2x8_tumu_ntl_ALL(vbool32_t mask, vfloat16mf2x8_t maskedoff_tuple, const _Float16 *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg8e16ff_v_f16mf2x8_tumu_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL);
}

vfloat16m1x8_t test_vlseg8e16ff_v_f16m1x8_tumu_ntl_ALL(vbool16_t mask, vfloat16m1x8_t maskedoff_tuple, const _Float16 *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg8e16ff_v_f16m1x8_tumu_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL);
}

vint16mf4x8_t test_vlseg8e16ff_v_i16mf4x8_tumu_ntl_ALL(vbool64_t mask, vint16mf4x8_t maskedoff_tuple, const int16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg8e16ff_v_i16mf4x8_tumu_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL);
}

vint16mf2x8_t test_vlseg8e16ff_v_i16mf2x8_tumu_ntl_ALL(vbool32_t mask, vint16mf2x8_t maskedoff_tuple, const int16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg8e16ff_v_i16mf2x8_tumu_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL);
}

vint16m1x8_t test_vlseg8e16ff_v_i16m1x8_tumu_ntl_ALL(vbool16_t mask, vint16m1x8_t maskedoff_tuple, const int16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg8e16ff_v_i16m1x8_tumu_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL);
}

vuint16mf4x8_t test_vlseg8e16ff_v_u16mf4x8_tumu_ntl_ALL(vbool64_t mask, vuint16mf4x8_t maskedoff_tuple, const uint16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg8e16ff_v_u16mf4x8_tumu_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL);
}

vuint16mf2x8_t test_vlseg8e16ff_v_u16mf2x8_tumu_ntl_ALL(vbool32_t mask, vuint16mf2x8_t maskedoff_tuple, const uint16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg8e16ff_v_u16mf2x8_tumu_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL);
}

vuint16m1x8_t test_vlseg8e16ff_v_u16m1x8_tumu_ntl_ALL(vbool16_t mask, vuint16m1x8_t maskedoff_tuple, const uint16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg8e16ff_v_u16m1x8_tumu_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL);
}

vfloat16mf4x8_t test_vlseg8e16ff_v_f16mf4x8_mu_ntl_ALL(vbool64_t mask, vfloat16mf4x8_t maskedoff_tuple, const _Float16 *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg8e16ff_v_f16mf4x8_mu_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL);
}

vfloat16mf2x8_t test_vlseg8e16ff_v_f16mf2x8_mu_ntl_ALL(vbool32_t mask, vfloat16mf2x8_t maskedoff_tuple, const _Float16 *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg8e16ff_v_f16mf2x8_mu_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL);
}

vfloat16m1x8_t test_vlseg8e16ff_v_f16m1x8_mu_ntl_ALL(vbool16_t mask, vfloat16m1x8_t maskedoff_tuple, const _Float16 *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg8e16ff_v_f16m1x8_mu_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL);
}

vint16mf4x8_t test_vlseg8e16ff_v_i16mf4x8_mu_ntl_ALL(vbool64_t mask, vint16mf4x8_t maskedoff_tuple, const int16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg8e16ff_v_i16mf4x8_mu_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL);
}

vint16mf2x8_t test_vlseg8e16ff_v_i16mf2x8_mu_ntl_ALL(vbool32_t mask, vint16mf2x8_t maskedoff_tuple, const int16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg8e16ff_v_i16mf2x8_mu_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL);
}

vint16m1x8_t test_vlseg8e16ff_v_i16m1x8_mu_ntl_ALL(vbool16_t mask, vint16m1x8_t maskedoff_tuple, const int16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg8e16ff_v_i16m1x8_mu_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL);
}

vuint16mf4x8_t test_vlseg8e16ff_v_u16mf4x8_mu_ntl_ALL(vbool64_t mask, vuint16mf4x8_t maskedoff_tuple, const uint16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg8e16ff_v_u16mf4x8_mu_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL);
}

vuint16mf2x8_t test_vlseg8e16ff_v_u16mf2x8_mu_ntl_ALL(vbool32_t mask, vuint16mf2x8_t maskedoff_tuple, const uint16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg8e16ff_v_u16mf2x8_mu_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL);
}

vuint16m1x8_t test_vlseg8e16ff_v_u16m1x8_mu_ntl_ALL(vbool16_t mask, vuint16m1x8_t maskedoff_tuple, const uint16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg8e16ff_v_u16m1x8_mu_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL);
}

