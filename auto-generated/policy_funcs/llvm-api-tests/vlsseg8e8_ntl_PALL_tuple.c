// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -target-feature +zfh \
// RUN:   -target-feature +experimental-zvfh -disable-O0-optnone  \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

#include <riscv_ntlh.h>

vint8mf8x8_t test_vlsseg8e8_v_i8mf8x8_tu_ntl_PALL(vint8mf8x8_t maskedoff_tuple, const int8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg8e8_v_i8mf8x8_tu_ntl(maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint8mf4x8_t test_vlsseg8e8_v_i8mf4x8_tu_ntl_PALL(vint8mf4x8_t maskedoff_tuple, const int8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg8e8_v_i8mf4x8_tu_ntl(maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint8mf2x8_t test_vlsseg8e8_v_i8mf2x8_tu_ntl_PALL(vint8mf2x8_t maskedoff_tuple, const int8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg8e8_v_i8mf2x8_tu_ntl(maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint8m1x8_t test_vlsseg8e8_v_i8m1x8_tu_ntl_PALL(vint8m1x8_t maskedoff_tuple, const int8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg8e8_v_i8m1x8_tu_ntl(maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint8mf8x8_t test_vlsseg8e8_v_u8mf8x8_tu_ntl_PALL(vuint8mf8x8_t maskedoff_tuple, const uint8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg8e8_v_u8mf8x8_tu_ntl(maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint8mf4x8_t test_vlsseg8e8_v_u8mf4x8_tu_ntl_PALL(vuint8mf4x8_t maskedoff_tuple, const uint8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg8e8_v_u8mf4x8_tu_ntl(maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint8mf2x8_t test_vlsseg8e8_v_u8mf2x8_tu_ntl_PALL(vuint8mf2x8_t maskedoff_tuple, const uint8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg8e8_v_u8mf2x8_tu_ntl(maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint8m1x8_t test_vlsseg8e8_v_u8m1x8_tu_ntl_PALL(vuint8m1x8_t maskedoff_tuple, const uint8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg8e8_v_u8m1x8_tu_ntl(maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint8mf8x8_t test_vlsseg8e8_v_i8mf8x8_tum_ntl_PALL(vbool64_t mask, vint8mf8x8_t maskedoff_tuple, const int8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg8e8_v_i8mf8x8_tum_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint8mf4x8_t test_vlsseg8e8_v_i8mf4x8_tum_ntl_PALL(vbool32_t mask, vint8mf4x8_t maskedoff_tuple, const int8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg8e8_v_i8mf4x8_tum_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint8mf2x8_t test_vlsseg8e8_v_i8mf2x8_tum_ntl_PALL(vbool16_t mask, vint8mf2x8_t maskedoff_tuple, const int8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg8e8_v_i8mf2x8_tum_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint8m1x8_t test_vlsseg8e8_v_i8m1x8_tum_ntl_PALL(vbool8_t mask, vint8m1x8_t maskedoff_tuple, const int8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg8e8_v_i8m1x8_tum_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint8mf8x8_t test_vlsseg8e8_v_u8mf8x8_tum_ntl_PALL(vbool64_t mask, vuint8mf8x8_t maskedoff_tuple, const uint8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg8e8_v_u8mf8x8_tum_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint8mf4x8_t test_vlsseg8e8_v_u8mf4x8_tum_ntl_PALL(vbool32_t mask, vuint8mf4x8_t maskedoff_tuple, const uint8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg8e8_v_u8mf4x8_tum_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint8mf2x8_t test_vlsseg8e8_v_u8mf2x8_tum_ntl_PALL(vbool16_t mask, vuint8mf2x8_t maskedoff_tuple, const uint8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg8e8_v_u8mf2x8_tum_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint8m1x8_t test_vlsseg8e8_v_u8m1x8_tum_ntl_PALL(vbool8_t mask, vuint8m1x8_t maskedoff_tuple, const uint8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg8e8_v_u8m1x8_tum_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint8mf8x8_t test_vlsseg8e8_v_i8mf8x8_tumu_ntl_PALL(vbool64_t mask, vint8mf8x8_t maskedoff_tuple, const int8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg8e8_v_i8mf8x8_tumu_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint8mf4x8_t test_vlsseg8e8_v_i8mf4x8_tumu_ntl_PALL(vbool32_t mask, vint8mf4x8_t maskedoff_tuple, const int8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg8e8_v_i8mf4x8_tumu_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint8mf2x8_t test_vlsseg8e8_v_i8mf2x8_tumu_ntl_PALL(vbool16_t mask, vint8mf2x8_t maskedoff_tuple, const int8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg8e8_v_i8mf2x8_tumu_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint8m1x8_t test_vlsseg8e8_v_i8m1x8_tumu_ntl_PALL(vbool8_t mask, vint8m1x8_t maskedoff_tuple, const int8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg8e8_v_i8m1x8_tumu_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint8mf8x8_t test_vlsseg8e8_v_u8mf8x8_tumu_ntl_PALL(vbool64_t mask, vuint8mf8x8_t maskedoff_tuple, const uint8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg8e8_v_u8mf8x8_tumu_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint8mf4x8_t test_vlsseg8e8_v_u8mf4x8_tumu_ntl_PALL(vbool32_t mask, vuint8mf4x8_t maskedoff_tuple, const uint8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg8e8_v_u8mf4x8_tumu_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint8mf2x8_t test_vlsseg8e8_v_u8mf2x8_tumu_ntl_PALL(vbool16_t mask, vuint8mf2x8_t maskedoff_tuple, const uint8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg8e8_v_u8mf2x8_tumu_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint8m1x8_t test_vlsseg8e8_v_u8m1x8_tumu_ntl_PALL(vbool8_t mask, vuint8m1x8_t maskedoff_tuple, const uint8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg8e8_v_u8m1x8_tumu_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint8mf8x8_t test_vlsseg8e8_v_i8mf8x8_mu_ntl_PALL(vbool64_t mask, vint8mf8x8_t maskedoff_tuple, const int8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg8e8_v_i8mf8x8_mu_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint8mf4x8_t test_vlsseg8e8_v_i8mf4x8_mu_ntl_PALL(vbool32_t mask, vint8mf4x8_t maskedoff_tuple, const int8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg8e8_v_i8mf4x8_mu_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint8mf2x8_t test_vlsseg8e8_v_i8mf2x8_mu_ntl_PALL(vbool16_t mask, vint8mf2x8_t maskedoff_tuple, const int8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg8e8_v_i8mf2x8_mu_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint8m1x8_t test_vlsseg8e8_v_i8m1x8_mu_ntl_PALL(vbool8_t mask, vint8m1x8_t maskedoff_tuple, const int8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg8e8_v_i8m1x8_mu_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint8mf8x8_t test_vlsseg8e8_v_u8mf8x8_mu_ntl_PALL(vbool64_t mask, vuint8mf8x8_t maskedoff_tuple, const uint8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg8e8_v_u8mf8x8_mu_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint8mf4x8_t test_vlsseg8e8_v_u8mf4x8_mu_ntl_PALL(vbool32_t mask, vuint8mf4x8_t maskedoff_tuple, const uint8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg8e8_v_u8mf4x8_mu_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint8mf2x8_t test_vlsseg8e8_v_u8mf2x8_mu_ntl_PALL(vbool16_t mask, vuint8mf2x8_t maskedoff_tuple, const uint8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg8e8_v_u8mf2x8_mu_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint8m1x8_t test_vlsseg8e8_v_u8m1x8_mu_ntl_PALL(vbool8_t mask, vuint8m1x8_t maskedoff_tuple, const uint8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg8e8_v_u8m1x8_mu_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

