// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -target-feature +zfh \
// RUN:   -target-feature +experimental-zvfh -disable-O0-optnone  \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

#include <riscv_ntlh.h>

vfloat32mf2x2_t test_vlseg2e32_v_f32mf2x2_tu_ntl_ALL(vfloat32mf2x2_t maskedoff_tuple, const float *base, size_t vl, int domain) {
  return __riscv_vlseg2e32_v_f32mf2x2_tu_ntl(maskedoff_tuple, base, vl, __RISCV_NTLH_ALL);
}

vfloat32m1x2_t test_vlseg2e32_v_f32m1x2_tu_ntl_ALL(vfloat32m1x2_t maskedoff_tuple, const float *base, size_t vl, int domain) {
  return __riscv_vlseg2e32_v_f32m1x2_tu_ntl(maskedoff_tuple, base, vl, __RISCV_NTLH_ALL);
}

vfloat32m2x2_t test_vlseg2e32_v_f32m2x2_tu_ntl_ALL(vfloat32m2x2_t maskedoff_tuple, const float *base, size_t vl, int domain) {
  return __riscv_vlseg2e32_v_f32m2x2_tu_ntl(maskedoff_tuple, base, vl, __RISCV_NTLH_ALL);
}

vfloat32m4x2_t test_vlseg2e32_v_f32m4x2_tu_ntl_ALL(vfloat32m4x2_t maskedoff_tuple, const float *base, size_t vl, int domain) {
  return __riscv_vlseg2e32_v_f32m4x2_tu_ntl(maskedoff_tuple, base, vl, __RISCV_NTLH_ALL);
}

vint32mf2x2_t test_vlseg2e32_v_i32mf2x2_tu_ntl_ALL(vint32mf2x2_t maskedoff_tuple, const int32_t *base, size_t vl, int domain) {
  return __riscv_vlseg2e32_v_i32mf2x2_tu_ntl(maskedoff_tuple, base, vl, __RISCV_NTLH_ALL);
}

vint32m1x2_t test_vlseg2e32_v_i32m1x2_tu_ntl_ALL(vint32m1x2_t maskedoff_tuple, const int32_t *base, size_t vl, int domain) {
  return __riscv_vlseg2e32_v_i32m1x2_tu_ntl(maskedoff_tuple, base, vl, __RISCV_NTLH_ALL);
}

vint32m2x2_t test_vlseg2e32_v_i32m2x2_tu_ntl_ALL(vint32m2x2_t maskedoff_tuple, const int32_t *base, size_t vl, int domain) {
  return __riscv_vlseg2e32_v_i32m2x2_tu_ntl(maskedoff_tuple, base, vl, __RISCV_NTLH_ALL);
}

vint32m4x2_t test_vlseg2e32_v_i32m4x2_tu_ntl_ALL(vint32m4x2_t maskedoff_tuple, const int32_t *base, size_t vl, int domain) {
  return __riscv_vlseg2e32_v_i32m4x2_tu_ntl(maskedoff_tuple, base, vl, __RISCV_NTLH_ALL);
}

vuint32mf2x2_t test_vlseg2e32_v_u32mf2x2_tu_ntl_ALL(vuint32mf2x2_t maskedoff_tuple, const uint32_t *base, size_t vl, int domain) {
  return __riscv_vlseg2e32_v_u32mf2x2_tu_ntl(maskedoff_tuple, base, vl, __RISCV_NTLH_ALL);
}

vuint32m1x2_t test_vlseg2e32_v_u32m1x2_tu_ntl_ALL(vuint32m1x2_t maskedoff_tuple, const uint32_t *base, size_t vl, int domain) {
  return __riscv_vlseg2e32_v_u32m1x2_tu_ntl(maskedoff_tuple, base, vl, __RISCV_NTLH_ALL);
}

vuint32m2x2_t test_vlseg2e32_v_u32m2x2_tu_ntl_ALL(vuint32m2x2_t maskedoff_tuple, const uint32_t *base, size_t vl, int domain) {
  return __riscv_vlseg2e32_v_u32m2x2_tu_ntl(maskedoff_tuple, base, vl, __RISCV_NTLH_ALL);
}

vuint32m4x2_t test_vlseg2e32_v_u32m4x2_tu_ntl_ALL(vuint32m4x2_t maskedoff_tuple, const uint32_t *base, size_t vl, int domain) {
  return __riscv_vlseg2e32_v_u32m4x2_tu_ntl(maskedoff_tuple, base, vl, __RISCV_NTLH_ALL);
}

vfloat32mf2x2_t test_vlseg2e32_v_f32mf2x2_tum_ntl_ALL(vbool64_t mask, vfloat32mf2x2_t maskedoff_tuple, const float *base, size_t vl, int domain) {
  return __riscv_vlseg2e32_v_f32mf2x2_tum_ntl(mask, maskedoff_tuple, base, vl, __RISCV_NTLH_ALL);
}

vfloat32m1x2_t test_vlseg2e32_v_f32m1x2_tum_ntl_ALL(vbool32_t mask, vfloat32m1x2_t maskedoff_tuple, const float *base, size_t vl, int domain) {
  return __riscv_vlseg2e32_v_f32m1x2_tum_ntl(mask, maskedoff_tuple, base, vl, __RISCV_NTLH_ALL);
}

vfloat32m2x2_t test_vlseg2e32_v_f32m2x2_tum_ntl_ALL(vbool16_t mask, vfloat32m2x2_t maskedoff_tuple, const float *base, size_t vl, int domain) {
  return __riscv_vlseg2e32_v_f32m2x2_tum_ntl(mask, maskedoff_tuple, base, vl, __RISCV_NTLH_ALL);
}

vfloat32m4x2_t test_vlseg2e32_v_f32m4x2_tum_ntl_ALL(vbool8_t mask, vfloat32m4x2_t maskedoff_tuple, const float *base, size_t vl, int domain) {
  return __riscv_vlseg2e32_v_f32m4x2_tum_ntl(mask, maskedoff_tuple, base, vl, __RISCV_NTLH_ALL);
}

vint32mf2x2_t test_vlseg2e32_v_i32mf2x2_tum_ntl_ALL(vbool64_t mask, vint32mf2x2_t maskedoff_tuple, const int32_t *base, size_t vl, int domain) {
  return __riscv_vlseg2e32_v_i32mf2x2_tum_ntl(mask, maskedoff_tuple, base, vl, __RISCV_NTLH_ALL);
}

vint32m1x2_t test_vlseg2e32_v_i32m1x2_tum_ntl_ALL(vbool32_t mask, vint32m1x2_t maskedoff_tuple, const int32_t *base, size_t vl, int domain) {
  return __riscv_vlseg2e32_v_i32m1x2_tum_ntl(mask, maskedoff_tuple, base, vl, __RISCV_NTLH_ALL);
}

vint32m2x2_t test_vlseg2e32_v_i32m2x2_tum_ntl_ALL(vbool16_t mask, vint32m2x2_t maskedoff_tuple, const int32_t *base, size_t vl, int domain) {
  return __riscv_vlseg2e32_v_i32m2x2_tum_ntl(mask, maskedoff_tuple, base, vl, __RISCV_NTLH_ALL);
}

vint32m4x2_t test_vlseg2e32_v_i32m4x2_tum_ntl_ALL(vbool8_t mask, vint32m4x2_t maskedoff_tuple, const int32_t *base, size_t vl, int domain) {
  return __riscv_vlseg2e32_v_i32m4x2_tum_ntl(mask, maskedoff_tuple, base, vl, __RISCV_NTLH_ALL);
}

vuint32mf2x2_t test_vlseg2e32_v_u32mf2x2_tum_ntl_ALL(vbool64_t mask, vuint32mf2x2_t maskedoff_tuple, const uint32_t *base, size_t vl, int domain) {
  return __riscv_vlseg2e32_v_u32mf2x2_tum_ntl(mask, maskedoff_tuple, base, vl, __RISCV_NTLH_ALL);
}

vuint32m1x2_t test_vlseg2e32_v_u32m1x2_tum_ntl_ALL(vbool32_t mask, vuint32m1x2_t maskedoff_tuple, const uint32_t *base, size_t vl, int domain) {
  return __riscv_vlseg2e32_v_u32m1x2_tum_ntl(mask, maskedoff_tuple, base, vl, __RISCV_NTLH_ALL);
}

vuint32m2x2_t test_vlseg2e32_v_u32m2x2_tum_ntl_ALL(vbool16_t mask, vuint32m2x2_t maskedoff_tuple, const uint32_t *base, size_t vl, int domain) {
  return __riscv_vlseg2e32_v_u32m2x2_tum_ntl(mask, maskedoff_tuple, base, vl, __RISCV_NTLH_ALL);
}

vuint32m4x2_t test_vlseg2e32_v_u32m4x2_tum_ntl_ALL(vbool8_t mask, vuint32m4x2_t maskedoff_tuple, const uint32_t *base, size_t vl, int domain) {
  return __riscv_vlseg2e32_v_u32m4x2_tum_ntl(mask, maskedoff_tuple, base, vl, __RISCV_NTLH_ALL);
}

vfloat32mf2x2_t test_vlseg2e32_v_f32mf2x2_tumu_ntl_ALL(vbool64_t mask, vfloat32mf2x2_t maskedoff_tuple, const float *base, size_t vl, int domain) {
  return __riscv_vlseg2e32_v_f32mf2x2_tumu_ntl(mask, maskedoff_tuple, base, vl, __RISCV_NTLH_ALL);
}

vfloat32m1x2_t test_vlseg2e32_v_f32m1x2_tumu_ntl_ALL(vbool32_t mask, vfloat32m1x2_t maskedoff_tuple, const float *base, size_t vl, int domain) {
  return __riscv_vlseg2e32_v_f32m1x2_tumu_ntl(mask, maskedoff_tuple, base, vl, __RISCV_NTLH_ALL);
}

vfloat32m2x2_t test_vlseg2e32_v_f32m2x2_tumu_ntl_ALL(vbool16_t mask, vfloat32m2x2_t maskedoff_tuple, const float *base, size_t vl, int domain) {
  return __riscv_vlseg2e32_v_f32m2x2_tumu_ntl(mask, maskedoff_tuple, base, vl, __RISCV_NTLH_ALL);
}

vfloat32m4x2_t test_vlseg2e32_v_f32m4x2_tumu_ntl_ALL(vbool8_t mask, vfloat32m4x2_t maskedoff_tuple, const float *base, size_t vl, int domain) {
  return __riscv_vlseg2e32_v_f32m4x2_tumu_ntl(mask, maskedoff_tuple, base, vl, __RISCV_NTLH_ALL);
}

vint32mf2x2_t test_vlseg2e32_v_i32mf2x2_tumu_ntl_ALL(vbool64_t mask, vint32mf2x2_t maskedoff_tuple, const int32_t *base, size_t vl, int domain) {
  return __riscv_vlseg2e32_v_i32mf2x2_tumu_ntl(mask, maskedoff_tuple, base, vl, __RISCV_NTLH_ALL);
}

vint32m1x2_t test_vlseg2e32_v_i32m1x2_tumu_ntl_ALL(vbool32_t mask, vint32m1x2_t maskedoff_tuple, const int32_t *base, size_t vl, int domain) {
  return __riscv_vlseg2e32_v_i32m1x2_tumu_ntl(mask, maskedoff_tuple, base, vl, __RISCV_NTLH_ALL);
}

vint32m2x2_t test_vlseg2e32_v_i32m2x2_tumu_ntl_ALL(vbool16_t mask, vint32m2x2_t maskedoff_tuple, const int32_t *base, size_t vl, int domain) {
  return __riscv_vlseg2e32_v_i32m2x2_tumu_ntl(mask, maskedoff_tuple, base, vl, __RISCV_NTLH_ALL);
}

vint32m4x2_t test_vlseg2e32_v_i32m4x2_tumu_ntl_ALL(vbool8_t mask, vint32m4x2_t maskedoff_tuple, const int32_t *base, size_t vl, int domain) {
  return __riscv_vlseg2e32_v_i32m4x2_tumu_ntl(mask, maskedoff_tuple, base, vl, __RISCV_NTLH_ALL);
}

vuint32mf2x2_t test_vlseg2e32_v_u32mf2x2_tumu_ntl_ALL(vbool64_t mask, vuint32mf2x2_t maskedoff_tuple, const uint32_t *base, size_t vl, int domain) {
  return __riscv_vlseg2e32_v_u32mf2x2_tumu_ntl(mask, maskedoff_tuple, base, vl, __RISCV_NTLH_ALL);
}

vuint32m1x2_t test_vlseg2e32_v_u32m1x2_tumu_ntl_ALL(vbool32_t mask, vuint32m1x2_t maskedoff_tuple, const uint32_t *base, size_t vl, int domain) {
  return __riscv_vlseg2e32_v_u32m1x2_tumu_ntl(mask, maskedoff_tuple, base, vl, __RISCV_NTLH_ALL);
}

vuint32m2x2_t test_vlseg2e32_v_u32m2x2_tumu_ntl_ALL(vbool16_t mask, vuint32m2x2_t maskedoff_tuple, const uint32_t *base, size_t vl, int domain) {
  return __riscv_vlseg2e32_v_u32m2x2_tumu_ntl(mask, maskedoff_tuple, base, vl, __RISCV_NTLH_ALL);
}

vuint32m4x2_t test_vlseg2e32_v_u32m4x2_tumu_ntl_ALL(vbool8_t mask, vuint32m4x2_t maskedoff_tuple, const uint32_t *base, size_t vl, int domain) {
  return __riscv_vlseg2e32_v_u32m4x2_tumu_ntl(mask, maskedoff_tuple, base, vl, __RISCV_NTLH_ALL);
}

vfloat32mf2x2_t test_vlseg2e32_v_f32mf2x2_mu_ntl_ALL(vbool64_t mask, vfloat32mf2x2_t maskedoff_tuple, const float *base, size_t vl, int domain) {
  return __riscv_vlseg2e32_v_f32mf2x2_mu_ntl(mask, maskedoff_tuple, base, vl, __RISCV_NTLH_ALL);
}

vfloat32m1x2_t test_vlseg2e32_v_f32m1x2_mu_ntl_ALL(vbool32_t mask, vfloat32m1x2_t maskedoff_tuple, const float *base, size_t vl, int domain) {
  return __riscv_vlseg2e32_v_f32m1x2_mu_ntl(mask, maskedoff_tuple, base, vl, __RISCV_NTLH_ALL);
}

vfloat32m2x2_t test_vlseg2e32_v_f32m2x2_mu_ntl_ALL(vbool16_t mask, vfloat32m2x2_t maskedoff_tuple, const float *base, size_t vl, int domain) {
  return __riscv_vlseg2e32_v_f32m2x2_mu_ntl(mask, maskedoff_tuple, base, vl, __RISCV_NTLH_ALL);
}

vfloat32m4x2_t test_vlseg2e32_v_f32m4x2_mu_ntl_ALL(vbool8_t mask, vfloat32m4x2_t maskedoff_tuple, const float *base, size_t vl, int domain) {
  return __riscv_vlseg2e32_v_f32m4x2_mu_ntl(mask, maskedoff_tuple, base, vl, __RISCV_NTLH_ALL);
}

vint32mf2x2_t test_vlseg2e32_v_i32mf2x2_mu_ntl_ALL(vbool64_t mask, vint32mf2x2_t maskedoff_tuple, const int32_t *base, size_t vl, int domain) {
  return __riscv_vlseg2e32_v_i32mf2x2_mu_ntl(mask, maskedoff_tuple, base, vl, __RISCV_NTLH_ALL);
}

vint32m1x2_t test_vlseg2e32_v_i32m1x2_mu_ntl_ALL(vbool32_t mask, vint32m1x2_t maskedoff_tuple, const int32_t *base, size_t vl, int domain) {
  return __riscv_vlseg2e32_v_i32m1x2_mu_ntl(mask, maskedoff_tuple, base, vl, __RISCV_NTLH_ALL);
}

vint32m2x2_t test_vlseg2e32_v_i32m2x2_mu_ntl_ALL(vbool16_t mask, vint32m2x2_t maskedoff_tuple, const int32_t *base, size_t vl, int domain) {
  return __riscv_vlseg2e32_v_i32m2x2_mu_ntl(mask, maskedoff_tuple, base, vl, __RISCV_NTLH_ALL);
}

vint32m4x2_t test_vlseg2e32_v_i32m4x2_mu_ntl_ALL(vbool8_t mask, vint32m4x2_t maskedoff_tuple, const int32_t *base, size_t vl, int domain) {
  return __riscv_vlseg2e32_v_i32m4x2_mu_ntl(mask, maskedoff_tuple, base, vl, __RISCV_NTLH_ALL);
}

vuint32mf2x2_t test_vlseg2e32_v_u32mf2x2_mu_ntl_ALL(vbool64_t mask, vuint32mf2x2_t maskedoff_tuple, const uint32_t *base, size_t vl, int domain) {
  return __riscv_vlseg2e32_v_u32mf2x2_mu_ntl(mask, maskedoff_tuple, base, vl, __RISCV_NTLH_ALL);
}

vuint32m1x2_t test_vlseg2e32_v_u32m1x2_mu_ntl_ALL(vbool32_t mask, vuint32m1x2_t maskedoff_tuple, const uint32_t *base, size_t vl, int domain) {
  return __riscv_vlseg2e32_v_u32m1x2_mu_ntl(mask, maskedoff_tuple, base, vl, __RISCV_NTLH_ALL);
}

vuint32m2x2_t test_vlseg2e32_v_u32m2x2_mu_ntl_ALL(vbool16_t mask, vuint32m2x2_t maskedoff_tuple, const uint32_t *base, size_t vl, int domain) {
  return __riscv_vlseg2e32_v_u32m2x2_mu_ntl(mask, maskedoff_tuple, base, vl, __RISCV_NTLH_ALL);
}

vuint32m4x2_t test_vlseg2e32_v_u32m4x2_mu_ntl_ALL(vbool8_t mask, vuint32m4x2_t maskedoff_tuple, const uint32_t *base, size_t vl, int domain) {
  return __riscv_vlseg2e32_v_u32m4x2_mu_ntl(mask, maskedoff_tuple, base, vl, __RISCV_NTLH_ALL);
}

