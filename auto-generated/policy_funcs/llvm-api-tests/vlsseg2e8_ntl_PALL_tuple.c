// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -target-feature +zfh \
// RUN:   -target-feature +experimental-zvfh -disable-O0-optnone  \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

#include <riscv_ntlh.h>

vint8mf8x2_t test_vlsseg2e8_v_i8mf8x2_tu_ntl_PALL(vint8mf8x2_t maskedoff_tuple, const int8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg2e8_v_i8mf8x2_tu_ntl(maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint8mf4x2_t test_vlsseg2e8_v_i8mf4x2_tu_ntl_PALL(vint8mf4x2_t maskedoff_tuple, const int8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg2e8_v_i8mf4x2_tu_ntl(maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint8mf2x2_t test_vlsseg2e8_v_i8mf2x2_tu_ntl_PALL(vint8mf2x2_t maskedoff_tuple, const int8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg2e8_v_i8mf2x2_tu_ntl(maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint8m1x2_t test_vlsseg2e8_v_i8m1x2_tu_ntl_PALL(vint8m1x2_t maskedoff_tuple, const int8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg2e8_v_i8m1x2_tu_ntl(maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint8m2x2_t test_vlsseg2e8_v_i8m2x2_tu_ntl_PALL(vint8m2x2_t maskedoff_tuple, const int8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg2e8_v_i8m2x2_tu_ntl(maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint8m4x2_t test_vlsseg2e8_v_i8m4x2_tu_ntl_PALL(vint8m4x2_t maskedoff_tuple, const int8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg2e8_v_i8m4x2_tu_ntl(maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint8mf8x2_t test_vlsseg2e8_v_u8mf8x2_tu_ntl_PALL(vuint8mf8x2_t maskedoff_tuple, const uint8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg2e8_v_u8mf8x2_tu_ntl(maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint8mf4x2_t test_vlsseg2e8_v_u8mf4x2_tu_ntl_PALL(vuint8mf4x2_t maskedoff_tuple, const uint8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg2e8_v_u8mf4x2_tu_ntl(maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint8mf2x2_t test_vlsseg2e8_v_u8mf2x2_tu_ntl_PALL(vuint8mf2x2_t maskedoff_tuple, const uint8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg2e8_v_u8mf2x2_tu_ntl(maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint8m1x2_t test_vlsseg2e8_v_u8m1x2_tu_ntl_PALL(vuint8m1x2_t maskedoff_tuple, const uint8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg2e8_v_u8m1x2_tu_ntl(maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint8m2x2_t test_vlsseg2e8_v_u8m2x2_tu_ntl_PALL(vuint8m2x2_t maskedoff_tuple, const uint8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg2e8_v_u8m2x2_tu_ntl(maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint8m4x2_t test_vlsseg2e8_v_u8m4x2_tu_ntl_PALL(vuint8m4x2_t maskedoff_tuple, const uint8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg2e8_v_u8m4x2_tu_ntl(maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint8mf8x2_t test_vlsseg2e8_v_i8mf8x2_tum_ntl_PALL(vbool64_t mask, vint8mf8x2_t maskedoff_tuple, const int8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg2e8_v_i8mf8x2_tum_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint8mf4x2_t test_vlsseg2e8_v_i8mf4x2_tum_ntl_PALL(vbool32_t mask, vint8mf4x2_t maskedoff_tuple, const int8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg2e8_v_i8mf4x2_tum_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint8mf2x2_t test_vlsseg2e8_v_i8mf2x2_tum_ntl_PALL(vbool16_t mask, vint8mf2x2_t maskedoff_tuple, const int8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg2e8_v_i8mf2x2_tum_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint8m1x2_t test_vlsseg2e8_v_i8m1x2_tum_ntl_PALL(vbool8_t mask, vint8m1x2_t maskedoff_tuple, const int8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg2e8_v_i8m1x2_tum_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint8m2x2_t test_vlsseg2e8_v_i8m2x2_tum_ntl_PALL(vbool4_t mask, vint8m2x2_t maskedoff_tuple, const int8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg2e8_v_i8m2x2_tum_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint8m4x2_t test_vlsseg2e8_v_i8m4x2_tum_ntl_PALL(vbool2_t mask, vint8m4x2_t maskedoff_tuple, const int8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg2e8_v_i8m4x2_tum_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint8mf8x2_t test_vlsseg2e8_v_u8mf8x2_tum_ntl_PALL(vbool64_t mask, vuint8mf8x2_t maskedoff_tuple, const uint8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg2e8_v_u8mf8x2_tum_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint8mf4x2_t test_vlsseg2e8_v_u8mf4x2_tum_ntl_PALL(vbool32_t mask, vuint8mf4x2_t maskedoff_tuple, const uint8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg2e8_v_u8mf4x2_tum_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint8mf2x2_t test_vlsseg2e8_v_u8mf2x2_tum_ntl_PALL(vbool16_t mask, vuint8mf2x2_t maskedoff_tuple, const uint8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg2e8_v_u8mf2x2_tum_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint8m1x2_t test_vlsseg2e8_v_u8m1x2_tum_ntl_PALL(vbool8_t mask, vuint8m1x2_t maskedoff_tuple, const uint8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg2e8_v_u8m1x2_tum_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint8m2x2_t test_vlsseg2e8_v_u8m2x2_tum_ntl_PALL(vbool4_t mask, vuint8m2x2_t maskedoff_tuple, const uint8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg2e8_v_u8m2x2_tum_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint8m4x2_t test_vlsseg2e8_v_u8m4x2_tum_ntl_PALL(vbool2_t mask, vuint8m4x2_t maskedoff_tuple, const uint8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg2e8_v_u8m4x2_tum_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint8mf8x2_t test_vlsseg2e8_v_i8mf8x2_tumu_ntl_PALL(vbool64_t mask, vint8mf8x2_t maskedoff_tuple, const int8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg2e8_v_i8mf8x2_tumu_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint8mf4x2_t test_vlsseg2e8_v_i8mf4x2_tumu_ntl_PALL(vbool32_t mask, vint8mf4x2_t maskedoff_tuple, const int8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg2e8_v_i8mf4x2_tumu_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint8mf2x2_t test_vlsseg2e8_v_i8mf2x2_tumu_ntl_PALL(vbool16_t mask, vint8mf2x2_t maskedoff_tuple, const int8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg2e8_v_i8mf2x2_tumu_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint8m1x2_t test_vlsseg2e8_v_i8m1x2_tumu_ntl_PALL(vbool8_t mask, vint8m1x2_t maskedoff_tuple, const int8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg2e8_v_i8m1x2_tumu_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint8m2x2_t test_vlsseg2e8_v_i8m2x2_tumu_ntl_PALL(vbool4_t mask, vint8m2x2_t maskedoff_tuple, const int8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg2e8_v_i8m2x2_tumu_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint8m4x2_t test_vlsseg2e8_v_i8m4x2_tumu_ntl_PALL(vbool2_t mask, vint8m4x2_t maskedoff_tuple, const int8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg2e8_v_i8m4x2_tumu_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint8mf8x2_t test_vlsseg2e8_v_u8mf8x2_tumu_ntl_PALL(vbool64_t mask, vuint8mf8x2_t maskedoff_tuple, const uint8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg2e8_v_u8mf8x2_tumu_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint8mf4x2_t test_vlsseg2e8_v_u8mf4x2_tumu_ntl_PALL(vbool32_t mask, vuint8mf4x2_t maskedoff_tuple, const uint8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg2e8_v_u8mf4x2_tumu_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint8mf2x2_t test_vlsseg2e8_v_u8mf2x2_tumu_ntl_PALL(vbool16_t mask, vuint8mf2x2_t maskedoff_tuple, const uint8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg2e8_v_u8mf2x2_tumu_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint8m1x2_t test_vlsseg2e8_v_u8m1x2_tumu_ntl_PALL(vbool8_t mask, vuint8m1x2_t maskedoff_tuple, const uint8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg2e8_v_u8m1x2_tumu_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint8m2x2_t test_vlsseg2e8_v_u8m2x2_tumu_ntl_PALL(vbool4_t mask, vuint8m2x2_t maskedoff_tuple, const uint8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg2e8_v_u8m2x2_tumu_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint8m4x2_t test_vlsseg2e8_v_u8m4x2_tumu_ntl_PALL(vbool2_t mask, vuint8m4x2_t maskedoff_tuple, const uint8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg2e8_v_u8m4x2_tumu_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint8mf8x2_t test_vlsseg2e8_v_i8mf8x2_mu_ntl_PALL(vbool64_t mask, vint8mf8x2_t maskedoff_tuple, const int8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg2e8_v_i8mf8x2_mu_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint8mf4x2_t test_vlsseg2e8_v_i8mf4x2_mu_ntl_PALL(vbool32_t mask, vint8mf4x2_t maskedoff_tuple, const int8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg2e8_v_i8mf4x2_mu_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint8mf2x2_t test_vlsseg2e8_v_i8mf2x2_mu_ntl_PALL(vbool16_t mask, vint8mf2x2_t maskedoff_tuple, const int8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg2e8_v_i8mf2x2_mu_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint8m1x2_t test_vlsseg2e8_v_i8m1x2_mu_ntl_PALL(vbool8_t mask, vint8m1x2_t maskedoff_tuple, const int8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg2e8_v_i8m1x2_mu_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint8m2x2_t test_vlsseg2e8_v_i8m2x2_mu_ntl_PALL(vbool4_t mask, vint8m2x2_t maskedoff_tuple, const int8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg2e8_v_i8m2x2_mu_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint8m4x2_t test_vlsseg2e8_v_i8m4x2_mu_ntl_PALL(vbool2_t mask, vint8m4x2_t maskedoff_tuple, const int8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg2e8_v_i8m4x2_mu_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint8mf8x2_t test_vlsseg2e8_v_u8mf8x2_mu_ntl_PALL(vbool64_t mask, vuint8mf8x2_t maskedoff_tuple, const uint8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg2e8_v_u8mf8x2_mu_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint8mf4x2_t test_vlsseg2e8_v_u8mf4x2_mu_ntl_PALL(vbool32_t mask, vuint8mf4x2_t maskedoff_tuple, const uint8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg2e8_v_u8mf4x2_mu_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint8mf2x2_t test_vlsseg2e8_v_u8mf2x2_mu_ntl_PALL(vbool16_t mask, vuint8mf2x2_t maskedoff_tuple, const uint8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg2e8_v_u8mf2x2_mu_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint8m1x2_t test_vlsseg2e8_v_u8m1x2_mu_ntl_PALL(vbool8_t mask, vuint8m1x2_t maskedoff_tuple, const uint8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg2e8_v_u8m1x2_mu_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint8m2x2_t test_vlsseg2e8_v_u8m2x2_mu_ntl_PALL(vbool4_t mask, vuint8m2x2_t maskedoff_tuple, const uint8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg2e8_v_u8m2x2_mu_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint8m4x2_t test_vlsseg2e8_v_u8m4x2_mu_ntl_PALL(vbool2_t mask, vuint8m4x2_t maskedoff_tuple, const uint8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg2e8_v_u8m4x2_mu_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

