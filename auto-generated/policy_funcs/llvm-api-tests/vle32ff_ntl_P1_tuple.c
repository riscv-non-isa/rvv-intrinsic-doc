// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -target-feature +zfh \
// RUN:   -target-feature +experimental-zvfh -disable-O0-optnone  \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

#include <riscv_ntlh.h>

vfloat32mf2_t test_vle32ff_v_f32mf2_tu_ntl_P1(vfloat32mf2_t maskedoff, const float *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle32ff_v_f32mf2_tu_ntl(maskedoff, base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vfloat32m1_t test_vle32ff_v_f32m1_tu_ntl_P1(vfloat32m1_t maskedoff, const float *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle32ff_v_f32m1_tu_ntl(maskedoff, base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vfloat32m2_t test_vle32ff_v_f32m2_tu_ntl_P1(vfloat32m2_t maskedoff, const float *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle32ff_v_f32m2_tu_ntl(maskedoff, base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vfloat32m4_t test_vle32ff_v_f32m4_tu_ntl_P1(vfloat32m4_t maskedoff, const float *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle32ff_v_f32m4_tu_ntl(maskedoff, base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vfloat32m8_t test_vle32ff_v_f32m8_tu_ntl_P1(vfloat32m8_t maskedoff, const float *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle32ff_v_f32m8_tu_ntl(maskedoff, base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint32mf2_t test_vle32ff_v_i32mf2_tu_ntl_P1(vint32mf2_t maskedoff, const int32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle32ff_v_i32mf2_tu_ntl(maskedoff, base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint32m1_t test_vle32ff_v_i32m1_tu_ntl_P1(vint32m1_t maskedoff, const int32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle32ff_v_i32m1_tu_ntl(maskedoff, base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint32m2_t test_vle32ff_v_i32m2_tu_ntl_P1(vint32m2_t maskedoff, const int32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle32ff_v_i32m2_tu_ntl(maskedoff, base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint32m4_t test_vle32ff_v_i32m4_tu_ntl_P1(vint32m4_t maskedoff, const int32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle32ff_v_i32m4_tu_ntl(maskedoff, base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint32m8_t test_vle32ff_v_i32m8_tu_ntl_P1(vint32m8_t maskedoff, const int32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle32ff_v_i32m8_tu_ntl(maskedoff, base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint32mf2_t test_vle32ff_v_u32mf2_tu_ntl_P1(vuint32mf2_t maskedoff, const uint32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle32ff_v_u32mf2_tu_ntl(maskedoff, base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint32m1_t test_vle32ff_v_u32m1_tu_ntl_P1(vuint32m1_t maskedoff, const uint32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle32ff_v_u32m1_tu_ntl(maskedoff, base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint32m2_t test_vle32ff_v_u32m2_tu_ntl_P1(vuint32m2_t maskedoff, const uint32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle32ff_v_u32m2_tu_ntl(maskedoff, base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint32m4_t test_vle32ff_v_u32m4_tu_ntl_P1(vuint32m4_t maskedoff, const uint32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle32ff_v_u32m4_tu_ntl(maskedoff, base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint32m8_t test_vle32ff_v_u32m8_tu_ntl_P1(vuint32m8_t maskedoff, const uint32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle32ff_v_u32m8_tu_ntl(maskedoff, base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vfloat32mf2_t test_vle32ff_v_f32mf2_tum_ntl_P1(vbool64_t mask, vfloat32mf2_t maskedoff, const float *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle32ff_v_f32mf2_tum_ntl(mask, maskedoff, base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vfloat32m1_t test_vle32ff_v_f32m1_tum_ntl_P1(vbool32_t mask, vfloat32m1_t maskedoff, const float *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle32ff_v_f32m1_tum_ntl(mask, maskedoff, base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vfloat32m2_t test_vle32ff_v_f32m2_tum_ntl_P1(vbool16_t mask, vfloat32m2_t maskedoff, const float *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle32ff_v_f32m2_tum_ntl(mask, maskedoff, base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vfloat32m4_t test_vle32ff_v_f32m4_tum_ntl_P1(vbool8_t mask, vfloat32m4_t maskedoff, const float *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle32ff_v_f32m4_tum_ntl(mask, maskedoff, base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vfloat32m8_t test_vle32ff_v_f32m8_tum_ntl_P1(vbool4_t mask, vfloat32m8_t maskedoff, const float *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle32ff_v_f32m8_tum_ntl(mask, maskedoff, base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint32mf2_t test_vle32ff_v_i32mf2_tum_ntl_P1(vbool64_t mask, vint32mf2_t maskedoff, const int32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle32ff_v_i32mf2_tum_ntl(mask, maskedoff, base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint32m1_t test_vle32ff_v_i32m1_tum_ntl_P1(vbool32_t mask, vint32m1_t maskedoff, const int32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle32ff_v_i32m1_tum_ntl(mask, maskedoff, base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint32m2_t test_vle32ff_v_i32m2_tum_ntl_P1(vbool16_t mask, vint32m2_t maskedoff, const int32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle32ff_v_i32m2_tum_ntl(mask, maskedoff, base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint32m4_t test_vle32ff_v_i32m4_tum_ntl_P1(vbool8_t mask, vint32m4_t maskedoff, const int32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle32ff_v_i32m4_tum_ntl(mask, maskedoff, base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint32m8_t test_vle32ff_v_i32m8_tum_ntl_P1(vbool4_t mask, vint32m8_t maskedoff, const int32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle32ff_v_i32m8_tum_ntl(mask, maskedoff, base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint32mf2_t test_vle32ff_v_u32mf2_tum_ntl_P1(vbool64_t mask, vuint32mf2_t maskedoff, const uint32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle32ff_v_u32mf2_tum_ntl(mask, maskedoff, base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint32m1_t test_vle32ff_v_u32m1_tum_ntl_P1(vbool32_t mask, vuint32m1_t maskedoff, const uint32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle32ff_v_u32m1_tum_ntl(mask, maskedoff, base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint32m2_t test_vle32ff_v_u32m2_tum_ntl_P1(vbool16_t mask, vuint32m2_t maskedoff, const uint32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle32ff_v_u32m2_tum_ntl(mask, maskedoff, base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint32m4_t test_vle32ff_v_u32m4_tum_ntl_P1(vbool8_t mask, vuint32m4_t maskedoff, const uint32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle32ff_v_u32m4_tum_ntl(mask, maskedoff, base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint32m8_t test_vle32ff_v_u32m8_tum_ntl_P1(vbool4_t mask, vuint32m8_t maskedoff, const uint32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle32ff_v_u32m8_tum_ntl(mask, maskedoff, base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vfloat32mf2_t test_vle32ff_v_f32mf2_tumu_ntl_P1(vbool64_t mask, vfloat32mf2_t maskedoff, const float *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle32ff_v_f32mf2_tumu_ntl(mask, maskedoff, base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vfloat32m1_t test_vle32ff_v_f32m1_tumu_ntl_P1(vbool32_t mask, vfloat32m1_t maskedoff, const float *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle32ff_v_f32m1_tumu_ntl(mask, maskedoff, base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vfloat32m2_t test_vle32ff_v_f32m2_tumu_ntl_P1(vbool16_t mask, vfloat32m2_t maskedoff, const float *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle32ff_v_f32m2_tumu_ntl(mask, maskedoff, base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vfloat32m4_t test_vle32ff_v_f32m4_tumu_ntl_P1(vbool8_t mask, vfloat32m4_t maskedoff, const float *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle32ff_v_f32m4_tumu_ntl(mask, maskedoff, base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vfloat32m8_t test_vle32ff_v_f32m8_tumu_ntl_P1(vbool4_t mask, vfloat32m8_t maskedoff, const float *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle32ff_v_f32m8_tumu_ntl(mask, maskedoff, base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint32mf2_t test_vle32ff_v_i32mf2_tumu_ntl_P1(vbool64_t mask, vint32mf2_t maskedoff, const int32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle32ff_v_i32mf2_tumu_ntl(mask, maskedoff, base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint32m1_t test_vle32ff_v_i32m1_tumu_ntl_P1(vbool32_t mask, vint32m1_t maskedoff, const int32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle32ff_v_i32m1_tumu_ntl(mask, maskedoff, base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint32m2_t test_vle32ff_v_i32m2_tumu_ntl_P1(vbool16_t mask, vint32m2_t maskedoff, const int32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle32ff_v_i32m2_tumu_ntl(mask, maskedoff, base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint32m4_t test_vle32ff_v_i32m4_tumu_ntl_P1(vbool8_t mask, vint32m4_t maskedoff, const int32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle32ff_v_i32m4_tumu_ntl(mask, maskedoff, base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint32m8_t test_vle32ff_v_i32m8_tumu_ntl_P1(vbool4_t mask, vint32m8_t maskedoff, const int32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle32ff_v_i32m8_tumu_ntl(mask, maskedoff, base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint32mf2_t test_vle32ff_v_u32mf2_tumu_ntl_P1(vbool64_t mask, vuint32mf2_t maskedoff, const uint32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle32ff_v_u32mf2_tumu_ntl(mask, maskedoff, base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint32m1_t test_vle32ff_v_u32m1_tumu_ntl_P1(vbool32_t mask, vuint32m1_t maskedoff, const uint32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle32ff_v_u32m1_tumu_ntl(mask, maskedoff, base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint32m2_t test_vle32ff_v_u32m2_tumu_ntl_P1(vbool16_t mask, vuint32m2_t maskedoff, const uint32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle32ff_v_u32m2_tumu_ntl(mask, maskedoff, base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint32m4_t test_vle32ff_v_u32m4_tumu_ntl_P1(vbool8_t mask, vuint32m4_t maskedoff, const uint32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle32ff_v_u32m4_tumu_ntl(mask, maskedoff, base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint32m8_t test_vle32ff_v_u32m8_tumu_ntl_P1(vbool4_t mask, vuint32m8_t maskedoff, const uint32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle32ff_v_u32m8_tumu_ntl(mask, maskedoff, base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vfloat32mf2_t test_vle32ff_v_f32mf2_mu_ntl_P1(vbool64_t mask, vfloat32mf2_t maskedoff, const float *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle32ff_v_f32mf2_mu_ntl(mask, maskedoff, base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vfloat32m1_t test_vle32ff_v_f32m1_mu_ntl_P1(vbool32_t mask, vfloat32m1_t maskedoff, const float *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle32ff_v_f32m1_mu_ntl(mask, maskedoff, base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vfloat32m2_t test_vle32ff_v_f32m2_mu_ntl_P1(vbool16_t mask, vfloat32m2_t maskedoff, const float *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle32ff_v_f32m2_mu_ntl(mask, maskedoff, base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vfloat32m4_t test_vle32ff_v_f32m4_mu_ntl_P1(vbool8_t mask, vfloat32m4_t maskedoff, const float *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle32ff_v_f32m4_mu_ntl(mask, maskedoff, base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vfloat32m8_t test_vle32ff_v_f32m8_mu_ntl_P1(vbool4_t mask, vfloat32m8_t maskedoff, const float *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle32ff_v_f32m8_mu_ntl(mask, maskedoff, base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint32mf2_t test_vle32ff_v_i32mf2_mu_ntl_P1(vbool64_t mask, vint32mf2_t maskedoff, const int32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle32ff_v_i32mf2_mu_ntl(mask, maskedoff, base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint32m1_t test_vle32ff_v_i32m1_mu_ntl_P1(vbool32_t mask, vint32m1_t maskedoff, const int32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle32ff_v_i32m1_mu_ntl(mask, maskedoff, base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint32m2_t test_vle32ff_v_i32m2_mu_ntl_P1(vbool16_t mask, vint32m2_t maskedoff, const int32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle32ff_v_i32m2_mu_ntl(mask, maskedoff, base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint32m4_t test_vle32ff_v_i32m4_mu_ntl_P1(vbool8_t mask, vint32m4_t maskedoff, const int32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle32ff_v_i32m4_mu_ntl(mask, maskedoff, base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint32m8_t test_vle32ff_v_i32m8_mu_ntl_P1(vbool4_t mask, vint32m8_t maskedoff, const int32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle32ff_v_i32m8_mu_ntl(mask, maskedoff, base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint32mf2_t test_vle32ff_v_u32mf2_mu_ntl_P1(vbool64_t mask, vuint32mf2_t maskedoff, const uint32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle32ff_v_u32mf2_mu_ntl(mask, maskedoff, base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint32m1_t test_vle32ff_v_u32m1_mu_ntl_P1(vbool32_t mask, vuint32m1_t maskedoff, const uint32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle32ff_v_u32m1_mu_ntl(mask, maskedoff, base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint32m2_t test_vle32ff_v_u32m2_mu_ntl_P1(vbool16_t mask, vuint32m2_t maskedoff, const uint32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle32ff_v_u32m2_mu_ntl(mask, maskedoff, base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint32m4_t test_vle32ff_v_u32m4_mu_ntl_P1(vbool8_t mask, vuint32m4_t maskedoff, const uint32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle32ff_v_u32m4_mu_ntl(mask, maskedoff, base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint32m8_t test_vle32ff_v_u32m8_mu_ntl_P1(vbool4_t mask, vuint32m8_t maskedoff, const uint32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle32ff_v_u32m8_mu_ntl(mask, maskedoff, base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

