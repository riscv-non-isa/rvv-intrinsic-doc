// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -target-feature +zfh \
// RUN:   -target-feature +experimental-zvfh -disable-O0-optnone  \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

#include <riscv_ntlh.h>

vint8mf8x5_t test_vlseg5e8_v_i8mf8x5_tu_ntl_ALL(vint8mf8x5_t maskedoff_tuple, const int8_t *base, size_t vl, int domain) {
  return __riscv_vlseg5e8_v_i8mf8x5_tu_ntl(maskedoff_tuple, base, vl, __RISCV_NTLH_ALL);
}

vint8mf4x5_t test_vlseg5e8_v_i8mf4x5_tu_ntl_ALL(vint8mf4x5_t maskedoff_tuple, const int8_t *base, size_t vl, int domain) {
  return __riscv_vlseg5e8_v_i8mf4x5_tu_ntl(maskedoff_tuple, base, vl, __RISCV_NTLH_ALL);
}

vint8mf2x5_t test_vlseg5e8_v_i8mf2x5_tu_ntl_ALL(vint8mf2x5_t maskedoff_tuple, const int8_t *base, size_t vl, int domain) {
  return __riscv_vlseg5e8_v_i8mf2x5_tu_ntl(maskedoff_tuple, base, vl, __RISCV_NTLH_ALL);
}

vint8m1x5_t test_vlseg5e8_v_i8m1x5_tu_ntl_ALL(vint8m1x5_t maskedoff_tuple, const int8_t *base, size_t vl, int domain) {
  return __riscv_vlseg5e8_v_i8m1x5_tu_ntl(maskedoff_tuple, base, vl, __RISCV_NTLH_ALL);
}

vuint8mf8x5_t test_vlseg5e8_v_u8mf8x5_tu_ntl_ALL(vuint8mf8x5_t maskedoff_tuple, const uint8_t *base, size_t vl, int domain) {
  return __riscv_vlseg5e8_v_u8mf8x5_tu_ntl(maskedoff_tuple, base, vl, __RISCV_NTLH_ALL);
}

vuint8mf4x5_t test_vlseg5e8_v_u8mf4x5_tu_ntl_ALL(vuint8mf4x5_t maskedoff_tuple, const uint8_t *base, size_t vl, int domain) {
  return __riscv_vlseg5e8_v_u8mf4x5_tu_ntl(maskedoff_tuple, base, vl, __RISCV_NTLH_ALL);
}

vuint8mf2x5_t test_vlseg5e8_v_u8mf2x5_tu_ntl_ALL(vuint8mf2x5_t maskedoff_tuple, const uint8_t *base, size_t vl, int domain) {
  return __riscv_vlseg5e8_v_u8mf2x5_tu_ntl(maskedoff_tuple, base, vl, __RISCV_NTLH_ALL);
}

vuint8m1x5_t test_vlseg5e8_v_u8m1x5_tu_ntl_ALL(vuint8m1x5_t maskedoff_tuple, const uint8_t *base, size_t vl, int domain) {
  return __riscv_vlseg5e8_v_u8m1x5_tu_ntl(maskedoff_tuple, base, vl, __RISCV_NTLH_ALL);
}

vint8mf8x5_t test_vlseg5e8_v_i8mf8x5_tum_ntl_ALL(vbool64_t mask, vint8mf8x5_t maskedoff_tuple, const int8_t *base, size_t vl, int domain) {
  return __riscv_vlseg5e8_v_i8mf8x5_tum_ntl(mask, maskedoff_tuple, base, vl, __RISCV_NTLH_ALL);
}

vint8mf4x5_t test_vlseg5e8_v_i8mf4x5_tum_ntl_ALL(vbool32_t mask, vint8mf4x5_t maskedoff_tuple, const int8_t *base, size_t vl, int domain) {
  return __riscv_vlseg5e8_v_i8mf4x5_tum_ntl(mask, maskedoff_tuple, base, vl, __RISCV_NTLH_ALL);
}

vint8mf2x5_t test_vlseg5e8_v_i8mf2x5_tum_ntl_ALL(vbool16_t mask, vint8mf2x5_t maskedoff_tuple, const int8_t *base, size_t vl, int domain) {
  return __riscv_vlseg5e8_v_i8mf2x5_tum_ntl(mask, maskedoff_tuple, base, vl, __RISCV_NTLH_ALL);
}

vint8m1x5_t test_vlseg5e8_v_i8m1x5_tum_ntl_ALL(vbool8_t mask, vint8m1x5_t maskedoff_tuple, const int8_t *base, size_t vl, int domain) {
  return __riscv_vlseg5e8_v_i8m1x5_tum_ntl(mask, maskedoff_tuple, base, vl, __RISCV_NTLH_ALL);
}

vuint8mf8x5_t test_vlseg5e8_v_u8mf8x5_tum_ntl_ALL(vbool64_t mask, vuint8mf8x5_t maskedoff_tuple, const uint8_t *base, size_t vl, int domain) {
  return __riscv_vlseg5e8_v_u8mf8x5_tum_ntl(mask, maskedoff_tuple, base, vl, __RISCV_NTLH_ALL);
}

vuint8mf4x5_t test_vlseg5e8_v_u8mf4x5_tum_ntl_ALL(vbool32_t mask, vuint8mf4x5_t maskedoff_tuple, const uint8_t *base, size_t vl, int domain) {
  return __riscv_vlseg5e8_v_u8mf4x5_tum_ntl(mask, maskedoff_tuple, base, vl, __RISCV_NTLH_ALL);
}

vuint8mf2x5_t test_vlseg5e8_v_u8mf2x5_tum_ntl_ALL(vbool16_t mask, vuint8mf2x5_t maskedoff_tuple, const uint8_t *base, size_t vl, int domain) {
  return __riscv_vlseg5e8_v_u8mf2x5_tum_ntl(mask, maskedoff_tuple, base, vl, __RISCV_NTLH_ALL);
}

vuint8m1x5_t test_vlseg5e8_v_u8m1x5_tum_ntl_ALL(vbool8_t mask, vuint8m1x5_t maskedoff_tuple, const uint8_t *base, size_t vl, int domain) {
  return __riscv_vlseg5e8_v_u8m1x5_tum_ntl(mask, maskedoff_tuple, base, vl, __RISCV_NTLH_ALL);
}

vint8mf8x5_t test_vlseg5e8_v_i8mf8x5_tumu_ntl_ALL(vbool64_t mask, vint8mf8x5_t maskedoff_tuple, const int8_t *base, size_t vl, int domain) {
  return __riscv_vlseg5e8_v_i8mf8x5_tumu_ntl(mask, maskedoff_tuple, base, vl, __RISCV_NTLH_ALL);
}

vint8mf4x5_t test_vlseg5e8_v_i8mf4x5_tumu_ntl_ALL(vbool32_t mask, vint8mf4x5_t maskedoff_tuple, const int8_t *base, size_t vl, int domain) {
  return __riscv_vlseg5e8_v_i8mf4x5_tumu_ntl(mask, maskedoff_tuple, base, vl, __RISCV_NTLH_ALL);
}

vint8mf2x5_t test_vlseg5e8_v_i8mf2x5_tumu_ntl_ALL(vbool16_t mask, vint8mf2x5_t maskedoff_tuple, const int8_t *base, size_t vl, int domain) {
  return __riscv_vlseg5e8_v_i8mf2x5_tumu_ntl(mask, maskedoff_tuple, base, vl, __RISCV_NTLH_ALL);
}

vint8m1x5_t test_vlseg5e8_v_i8m1x5_tumu_ntl_ALL(vbool8_t mask, vint8m1x5_t maskedoff_tuple, const int8_t *base, size_t vl, int domain) {
  return __riscv_vlseg5e8_v_i8m1x5_tumu_ntl(mask, maskedoff_tuple, base, vl, __RISCV_NTLH_ALL);
}

vuint8mf8x5_t test_vlseg5e8_v_u8mf8x5_tumu_ntl_ALL(vbool64_t mask, vuint8mf8x5_t maskedoff_tuple, const uint8_t *base, size_t vl, int domain) {
  return __riscv_vlseg5e8_v_u8mf8x5_tumu_ntl(mask, maskedoff_tuple, base, vl, __RISCV_NTLH_ALL);
}

vuint8mf4x5_t test_vlseg5e8_v_u8mf4x5_tumu_ntl_ALL(vbool32_t mask, vuint8mf4x5_t maskedoff_tuple, const uint8_t *base, size_t vl, int domain) {
  return __riscv_vlseg5e8_v_u8mf4x5_tumu_ntl(mask, maskedoff_tuple, base, vl, __RISCV_NTLH_ALL);
}

vuint8mf2x5_t test_vlseg5e8_v_u8mf2x5_tumu_ntl_ALL(vbool16_t mask, vuint8mf2x5_t maskedoff_tuple, const uint8_t *base, size_t vl, int domain) {
  return __riscv_vlseg5e8_v_u8mf2x5_tumu_ntl(mask, maskedoff_tuple, base, vl, __RISCV_NTLH_ALL);
}

vuint8m1x5_t test_vlseg5e8_v_u8m1x5_tumu_ntl_ALL(vbool8_t mask, vuint8m1x5_t maskedoff_tuple, const uint8_t *base, size_t vl, int domain) {
  return __riscv_vlseg5e8_v_u8m1x5_tumu_ntl(mask, maskedoff_tuple, base, vl, __RISCV_NTLH_ALL);
}

vint8mf8x5_t test_vlseg5e8_v_i8mf8x5_mu_ntl_ALL(vbool64_t mask, vint8mf8x5_t maskedoff_tuple, const int8_t *base, size_t vl, int domain) {
  return __riscv_vlseg5e8_v_i8mf8x5_mu_ntl(mask, maskedoff_tuple, base, vl, __RISCV_NTLH_ALL);
}

vint8mf4x5_t test_vlseg5e8_v_i8mf4x5_mu_ntl_ALL(vbool32_t mask, vint8mf4x5_t maskedoff_tuple, const int8_t *base, size_t vl, int domain) {
  return __riscv_vlseg5e8_v_i8mf4x5_mu_ntl(mask, maskedoff_tuple, base, vl, __RISCV_NTLH_ALL);
}

vint8mf2x5_t test_vlseg5e8_v_i8mf2x5_mu_ntl_ALL(vbool16_t mask, vint8mf2x5_t maskedoff_tuple, const int8_t *base, size_t vl, int domain) {
  return __riscv_vlseg5e8_v_i8mf2x5_mu_ntl(mask, maskedoff_tuple, base, vl, __RISCV_NTLH_ALL);
}

vint8m1x5_t test_vlseg5e8_v_i8m1x5_mu_ntl_ALL(vbool8_t mask, vint8m1x5_t maskedoff_tuple, const int8_t *base, size_t vl, int domain) {
  return __riscv_vlseg5e8_v_i8m1x5_mu_ntl(mask, maskedoff_tuple, base, vl, __RISCV_NTLH_ALL);
}

vuint8mf8x5_t test_vlseg5e8_v_u8mf8x5_mu_ntl_ALL(vbool64_t mask, vuint8mf8x5_t maskedoff_tuple, const uint8_t *base, size_t vl, int domain) {
  return __riscv_vlseg5e8_v_u8mf8x5_mu_ntl(mask, maskedoff_tuple, base, vl, __RISCV_NTLH_ALL);
}

vuint8mf4x5_t test_vlseg5e8_v_u8mf4x5_mu_ntl_ALL(vbool32_t mask, vuint8mf4x5_t maskedoff_tuple, const uint8_t *base, size_t vl, int domain) {
  return __riscv_vlseg5e8_v_u8mf4x5_mu_ntl(mask, maskedoff_tuple, base, vl, __RISCV_NTLH_ALL);
}

vuint8mf2x5_t test_vlseg5e8_v_u8mf2x5_mu_ntl_ALL(vbool16_t mask, vuint8mf2x5_t maskedoff_tuple, const uint8_t *base, size_t vl, int domain) {
  return __riscv_vlseg5e8_v_u8mf2x5_mu_ntl(mask, maskedoff_tuple, base, vl, __RISCV_NTLH_ALL);
}

vuint8m1x5_t test_vlseg5e8_v_u8m1x5_mu_ntl_ALL(vbool8_t mask, vuint8m1x5_t maskedoff_tuple, const uint8_t *base, size_t vl, int domain) {
  return __riscv_vlseg5e8_v_u8m1x5_mu_ntl(mask, maskedoff_tuple, base, vl, __RISCV_NTLH_ALL);
}

