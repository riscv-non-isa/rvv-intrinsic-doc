// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -target-feature +zfh \
// RUN:   -target-feature +experimental-zvfh -disable-O0-optnone  \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

#include <riscv_ntlh.h>

vfloat32mf2x3_t test_vlseg3e32ff_v_f32mf2x3_tu_ntl_S1(vfloat32mf2x3_t maskedoff_tuple, const float *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg3e32ff_v_f32mf2x3_tu_ntl(maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vfloat32m1x3_t test_vlseg3e32ff_v_f32m1x3_tu_ntl_S1(vfloat32m1x3_t maskedoff_tuple, const float *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg3e32ff_v_f32m1x3_tu_ntl(maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vfloat32m2x3_t test_vlseg3e32ff_v_f32m2x3_tu_ntl_S1(vfloat32m2x3_t maskedoff_tuple, const float *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg3e32ff_v_f32m2x3_tu_ntl(maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint32mf2x3_t test_vlseg3e32ff_v_i32mf2x3_tu_ntl_S1(vint32mf2x3_t maskedoff_tuple, const int32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg3e32ff_v_i32mf2x3_tu_ntl(maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint32m1x3_t test_vlseg3e32ff_v_i32m1x3_tu_ntl_S1(vint32m1x3_t maskedoff_tuple, const int32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg3e32ff_v_i32m1x3_tu_ntl(maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint32m2x3_t test_vlseg3e32ff_v_i32m2x3_tu_ntl_S1(vint32m2x3_t maskedoff_tuple, const int32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg3e32ff_v_i32m2x3_tu_ntl(maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint32mf2x3_t test_vlseg3e32ff_v_u32mf2x3_tu_ntl_S1(vuint32mf2x3_t maskedoff_tuple, const uint32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg3e32ff_v_u32mf2x3_tu_ntl(maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint32m1x3_t test_vlseg3e32ff_v_u32m1x3_tu_ntl_S1(vuint32m1x3_t maskedoff_tuple, const uint32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg3e32ff_v_u32m1x3_tu_ntl(maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint32m2x3_t test_vlseg3e32ff_v_u32m2x3_tu_ntl_S1(vuint32m2x3_t maskedoff_tuple, const uint32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg3e32ff_v_u32m2x3_tu_ntl(maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vfloat32mf2x3_t test_vlseg3e32ff_v_f32mf2x3_tum_ntl_S1(vbool64_t mask, vfloat32mf2x3_t maskedoff_tuple, const float *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg3e32ff_v_f32mf2x3_tum_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vfloat32m1x3_t test_vlseg3e32ff_v_f32m1x3_tum_ntl_S1(vbool32_t mask, vfloat32m1x3_t maskedoff_tuple, const float *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg3e32ff_v_f32m1x3_tum_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vfloat32m2x3_t test_vlseg3e32ff_v_f32m2x3_tum_ntl_S1(vbool16_t mask, vfloat32m2x3_t maskedoff_tuple, const float *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg3e32ff_v_f32m2x3_tum_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint32mf2x3_t test_vlseg3e32ff_v_i32mf2x3_tum_ntl_S1(vbool64_t mask, vint32mf2x3_t maskedoff_tuple, const int32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg3e32ff_v_i32mf2x3_tum_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint32m1x3_t test_vlseg3e32ff_v_i32m1x3_tum_ntl_S1(vbool32_t mask, vint32m1x3_t maskedoff_tuple, const int32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg3e32ff_v_i32m1x3_tum_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint32m2x3_t test_vlseg3e32ff_v_i32m2x3_tum_ntl_S1(vbool16_t mask, vint32m2x3_t maskedoff_tuple, const int32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg3e32ff_v_i32m2x3_tum_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint32mf2x3_t test_vlseg3e32ff_v_u32mf2x3_tum_ntl_S1(vbool64_t mask, vuint32mf2x3_t maskedoff_tuple, const uint32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg3e32ff_v_u32mf2x3_tum_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint32m1x3_t test_vlseg3e32ff_v_u32m1x3_tum_ntl_S1(vbool32_t mask, vuint32m1x3_t maskedoff_tuple, const uint32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg3e32ff_v_u32m1x3_tum_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint32m2x3_t test_vlseg3e32ff_v_u32m2x3_tum_ntl_S1(vbool16_t mask, vuint32m2x3_t maskedoff_tuple, const uint32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg3e32ff_v_u32m2x3_tum_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vfloat32mf2x3_t test_vlseg3e32ff_v_f32mf2x3_tumu_ntl_S1(vbool64_t mask, vfloat32mf2x3_t maskedoff_tuple, const float *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg3e32ff_v_f32mf2x3_tumu_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vfloat32m1x3_t test_vlseg3e32ff_v_f32m1x3_tumu_ntl_S1(vbool32_t mask, vfloat32m1x3_t maskedoff_tuple, const float *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg3e32ff_v_f32m1x3_tumu_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vfloat32m2x3_t test_vlseg3e32ff_v_f32m2x3_tumu_ntl_S1(vbool16_t mask, vfloat32m2x3_t maskedoff_tuple, const float *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg3e32ff_v_f32m2x3_tumu_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint32mf2x3_t test_vlseg3e32ff_v_i32mf2x3_tumu_ntl_S1(vbool64_t mask, vint32mf2x3_t maskedoff_tuple, const int32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg3e32ff_v_i32mf2x3_tumu_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint32m1x3_t test_vlseg3e32ff_v_i32m1x3_tumu_ntl_S1(vbool32_t mask, vint32m1x3_t maskedoff_tuple, const int32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg3e32ff_v_i32m1x3_tumu_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint32m2x3_t test_vlseg3e32ff_v_i32m2x3_tumu_ntl_S1(vbool16_t mask, vint32m2x3_t maskedoff_tuple, const int32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg3e32ff_v_i32m2x3_tumu_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint32mf2x3_t test_vlseg3e32ff_v_u32mf2x3_tumu_ntl_S1(vbool64_t mask, vuint32mf2x3_t maskedoff_tuple, const uint32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg3e32ff_v_u32mf2x3_tumu_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint32m1x3_t test_vlseg3e32ff_v_u32m1x3_tumu_ntl_S1(vbool32_t mask, vuint32m1x3_t maskedoff_tuple, const uint32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg3e32ff_v_u32m1x3_tumu_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint32m2x3_t test_vlseg3e32ff_v_u32m2x3_tumu_ntl_S1(vbool16_t mask, vuint32m2x3_t maskedoff_tuple, const uint32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg3e32ff_v_u32m2x3_tumu_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vfloat32mf2x3_t test_vlseg3e32ff_v_f32mf2x3_mu_ntl_S1(vbool64_t mask, vfloat32mf2x3_t maskedoff_tuple, const float *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg3e32ff_v_f32mf2x3_mu_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vfloat32m1x3_t test_vlseg3e32ff_v_f32m1x3_mu_ntl_S1(vbool32_t mask, vfloat32m1x3_t maskedoff_tuple, const float *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg3e32ff_v_f32m1x3_mu_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vfloat32m2x3_t test_vlseg3e32ff_v_f32m2x3_mu_ntl_S1(vbool16_t mask, vfloat32m2x3_t maskedoff_tuple, const float *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg3e32ff_v_f32m2x3_mu_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint32mf2x3_t test_vlseg3e32ff_v_i32mf2x3_mu_ntl_S1(vbool64_t mask, vint32mf2x3_t maskedoff_tuple, const int32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg3e32ff_v_i32mf2x3_mu_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint32m1x3_t test_vlseg3e32ff_v_i32m1x3_mu_ntl_S1(vbool32_t mask, vint32m1x3_t maskedoff_tuple, const int32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg3e32ff_v_i32m1x3_mu_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint32m2x3_t test_vlseg3e32ff_v_i32m2x3_mu_ntl_S1(vbool16_t mask, vint32m2x3_t maskedoff_tuple, const int32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg3e32ff_v_i32m2x3_mu_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint32mf2x3_t test_vlseg3e32ff_v_u32mf2x3_mu_ntl_S1(vbool64_t mask, vuint32mf2x3_t maskedoff_tuple, const uint32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg3e32ff_v_u32mf2x3_mu_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint32m1x3_t test_vlseg3e32ff_v_u32m1x3_mu_ntl_S1(vbool32_t mask, vuint32m1x3_t maskedoff_tuple, const uint32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg3e32ff_v_u32m1x3_mu_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint32m2x3_t test_vlseg3e32ff_v_u32m2x3_mu_ntl_S1(vbool16_t mask, vuint32m2x3_t maskedoff_tuple, const uint32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg3e32ff_v_u32m2x3_mu_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

