// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -target-feature +zfh \
// RUN:   -target-feature +experimental-zvfh -disable-O0-optnone  \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

#include <riscv_ntlh.h>

vfloat32mf2x7_t test_vlseg7e32ff_v_f32mf2x7_tu_ntl_ALL(vfloat32mf2x7_t maskedoff_tuple, const float *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg7e32ff_v_f32mf2x7_tu_ntl(maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL);
}

vfloat32m1x7_t test_vlseg7e32ff_v_f32m1x7_tu_ntl_ALL(vfloat32m1x7_t maskedoff_tuple, const float *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg7e32ff_v_f32m1x7_tu_ntl(maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL);
}

vint32mf2x7_t test_vlseg7e32ff_v_i32mf2x7_tu_ntl_ALL(vint32mf2x7_t maskedoff_tuple, const int32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg7e32ff_v_i32mf2x7_tu_ntl(maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL);
}

vint32m1x7_t test_vlseg7e32ff_v_i32m1x7_tu_ntl_ALL(vint32m1x7_t maskedoff_tuple, const int32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg7e32ff_v_i32m1x7_tu_ntl(maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL);
}

vuint32mf2x7_t test_vlseg7e32ff_v_u32mf2x7_tu_ntl_ALL(vuint32mf2x7_t maskedoff_tuple, const uint32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg7e32ff_v_u32mf2x7_tu_ntl(maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL);
}

vuint32m1x7_t test_vlseg7e32ff_v_u32m1x7_tu_ntl_ALL(vuint32m1x7_t maskedoff_tuple, const uint32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg7e32ff_v_u32m1x7_tu_ntl(maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL);
}

vfloat32mf2x7_t test_vlseg7e32ff_v_f32mf2x7_tum_ntl_ALL(vbool64_t mask, vfloat32mf2x7_t maskedoff_tuple, const float *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg7e32ff_v_f32mf2x7_tum_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL);
}

vfloat32m1x7_t test_vlseg7e32ff_v_f32m1x7_tum_ntl_ALL(vbool32_t mask, vfloat32m1x7_t maskedoff_tuple, const float *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg7e32ff_v_f32m1x7_tum_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL);
}

vint32mf2x7_t test_vlseg7e32ff_v_i32mf2x7_tum_ntl_ALL(vbool64_t mask, vint32mf2x7_t maskedoff_tuple, const int32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg7e32ff_v_i32mf2x7_tum_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL);
}

vint32m1x7_t test_vlseg7e32ff_v_i32m1x7_tum_ntl_ALL(vbool32_t mask, vint32m1x7_t maskedoff_tuple, const int32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg7e32ff_v_i32m1x7_tum_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL);
}

vuint32mf2x7_t test_vlseg7e32ff_v_u32mf2x7_tum_ntl_ALL(vbool64_t mask, vuint32mf2x7_t maskedoff_tuple, const uint32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg7e32ff_v_u32mf2x7_tum_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL);
}

vuint32m1x7_t test_vlseg7e32ff_v_u32m1x7_tum_ntl_ALL(vbool32_t mask, vuint32m1x7_t maskedoff_tuple, const uint32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg7e32ff_v_u32m1x7_tum_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL);
}

vfloat32mf2x7_t test_vlseg7e32ff_v_f32mf2x7_tumu_ntl_ALL(vbool64_t mask, vfloat32mf2x7_t maskedoff_tuple, const float *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg7e32ff_v_f32mf2x7_tumu_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL);
}

vfloat32m1x7_t test_vlseg7e32ff_v_f32m1x7_tumu_ntl_ALL(vbool32_t mask, vfloat32m1x7_t maskedoff_tuple, const float *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg7e32ff_v_f32m1x7_tumu_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL);
}

vint32mf2x7_t test_vlseg7e32ff_v_i32mf2x7_tumu_ntl_ALL(vbool64_t mask, vint32mf2x7_t maskedoff_tuple, const int32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg7e32ff_v_i32mf2x7_tumu_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL);
}

vint32m1x7_t test_vlseg7e32ff_v_i32m1x7_tumu_ntl_ALL(vbool32_t mask, vint32m1x7_t maskedoff_tuple, const int32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg7e32ff_v_i32m1x7_tumu_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL);
}

vuint32mf2x7_t test_vlseg7e32ff_v_u32mf2x7_tumu_ntl_ALL(vbool64_t mask, vuint32mf2x7_t maskedoff_tuple, const uint32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg7e32ff_v_u32mf2x7_tumu_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL);
}

vuint32m1x7_t test_vlseg7e32ff_v_u32m1x7_tumu_ntl_ALL(vbool32_t mask, vuint32m1x7_t maskedoff_tuple, const uint32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg7e32ff_v_u32m1x7_tumu_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL);
}

vfloat32mf2x7_t test_vlseg7e32ff_v_f32mf2x7_mu_ntl_ALL(vbool64_t mask, vfloat32mf2x7_t maskedoff_tuple, const float *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg7e32ff_v_f32mf2x7_mu_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL);
}

vfloat32m1x7_t test_vlseg7e32ff_v_f32m1x7_mu_ntl_ALL(vbool32_t mask, vfloat32m1x7_t maskedoff_tuple, const float *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg7e32ff_v_f32m1x7_mu_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL);
}

vint32mf2x7_t test_vlseg7e32ff_v_i32mf2x7_mu_ntl_ALL(vbool64_t mask, vint32mf2x7_t maskedoff_tuple, const int32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg7e32ff_v_i32mf2x7_mu_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL);
}

vint32m1x7_t test_vlseg7e32ff_v_i32m1x7_mu_ntl_ALL(vbool32_t mask, vint32m1x7_t maskedoff_tuple, const int32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg7e32ff_v_i32m1x7_mu_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL);
}

vuint32mf2x7_t test_vlseg7e32ff_v_u32mf2x7_mu_ntl_ALL(vbool64_t mask, vuint32mf2x7_t maskedoff_tuple, const uint32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg7e32ff_v_u32mf2x7_mu_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL);
}

vuint32m1x7_t test_vlseg7e32ff_v_u32m1x7_mu_ntl_ALL(vbool32_t mask, vuint32m1x7_t maskedoff_tuple, const uint32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg7e32ff_v_u32m1x7_mu_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL);
}

