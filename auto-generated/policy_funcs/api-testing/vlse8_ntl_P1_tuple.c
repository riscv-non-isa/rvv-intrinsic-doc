#include <stdint.h>
#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
#include <riscv_ntlh.h>

vint8mf8_t test_vlse8_v_i8mf8_tu_ntl_P1(vint8mf8_t maskedoff, const int8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlse8_v_i8mf8_tu_ntl(maskedoff, base, bstride, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint8mf4_t test_vlse8_v_i8mf4_tu_ntl_P1(vint8mf4_t maskedoff, const int8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlse8_v_i8mf4_tu_ntl(maskedoff, base, bstride, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint8mf2_t test_vlse8_v_i8mf2_tu_ntl_P1(vint8mf2_t maskedoff, const int8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlse8_v_i8mf2_tu_ntl(maskedoff, base, bstride, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint8m1_t test_vlse8_v_i8m1_tu_ntl_P1(vint8m1_t maskedoff, const int8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlse8_v_i8m1_tu_ntl(maskedoff, base, bstride, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint8m2_t test_vlse8_v_i8m2_tu_ntl_P1(vint8m2_t maskedoff, const int8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlse8_v_i8m2_tu_ntl(maskedoff, base, bstride, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint8m4_t test_vlse8_v_i8m4_tu_ntl_P1(vint8m4_t maskedoff, const int8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlse8_v_i8m4_tu_ntl(maskedoff, base, bstride, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint8m8_t test_vlse8_v_i8m8_tu_ntl_P1(vint8m8_t maskedoff, const int8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlse8_v_i8m8_tu_ntl(maskedoff, base, bstride, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint8mf8_t test_vlse8_v_u8mf8_tu_ntl_P1(vuint8mf8_t maskedoff, const uint8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlse8_v_u8mf8_tu_ntl(maskedoff, base, bstride, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint8mf4_t test_vlse8_v_u8mf4_tu_ntl_P1(vuint8mf4_t maskedoff, const uint8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlse8_v_u8mf4_tu_ntl(maskedoff, base, bstride, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint8mf2_t test_vlse8_v_u8mf2_tu_ntl_P1(vuint8mf2_t maskedoff, const uint8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlse8_v_u8mf2_tu_ntl(maskedoff, base, bstride, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint8m1_t test_vlse8_v_u8m1_tu_ntl_P1(vuint8m1_t maskedoff, const uint8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlse8_v_u8m1_tu_ntl(maskedoff, base, bstride, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint8m2_t test_vlse8_v_u8m2_tu_ntl_P1(vuint8m2_t maskedoff, const uint8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlse8_v_u8m2_tu_ntl(maskedoff, base, bstride, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint8m4_t test_vlse8_v_u8m4_tu_ntl_P1(vuint8m4_t maskedoff, const uint8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlse8_v_u8m4_tu_ntl(maskedoff, base, bstride, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint8m8_t test_vlse8_v_u8m8_tu_ntl_P1(vuint8m8_t maskedoff, const uint8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlse8_v_u8m8_tu_ntl(maskedoff, base, bstride, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint8mf8_t test_vlse8_v_i8mf8_tum_ntl_P1(vbool64_t mask, vint8mf8_t maskedoff, const int8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlse8_v_i8mf8_tum_ntl(mask, maskedoff, base, bstride, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint8mf4_t test_vlse8_v_i8mf4_tum_ntl_P1(vbool32_t mask, vint8mf4_t maskedoff, const int8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlse8_v_i8mf4_tum_ntl(mask, maskedoff, base, bstride, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint8mf2_t test_vlse8_v_i8mf2_tum_ntl_P1(vbool16_t mask, vint8mf2_t maskedoff, const int8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlse8_v_i8mf2_tum_ntl(mask, maskedoff, base, bstride, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint8m1_t test_vlse8_v_i8m1_tum_ntl_P1(vbool8_t mask, vint8m1_t maskedoff, const int8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlse8_v_i8m1_tum_ntl(mask, maskedoff, base, bstride, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint8m2_t test_vlse8_v_i8m2_tum_ntl_P1(vbool4_t mask, vint8m2_t maskedoff, const int8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlse8_v_i8m2_tum_ntl(mask, maskedoff, base, bstride, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint8m4_t test_vlse8_v_i8m4_tum_ntl_P1(vbool2_t mask, vint8m4_t maskedoff, const int8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlse8_v_i8m4_tum_ntl(mask, maskedoff, base, bstride, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint8m8_t test_vlse8_v_i8m8_tum_ntl_P1(vbool1_t mask, vint8m8_t maskedoff, const int8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlse8_v_i8m8_tum_ntl(mask, maskedoff, base, bstride, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint8mf8_t test_vlse8_v_u8mf8_tum_ntl_P1(vbool64_t mask, vuint8mf8_t maskedoff, const uint8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlse8_v_u8mf8_tum_ntl(mask, maskedoff, base, bstride, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint8mf4_t test_vlse8_v_u8mf4_tum_ntl_P1(vbool32_t mask, vuint8mf4_t maskedoff, const uint8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlse8_v_u8mf4_tum_ntl(mask, maskedoff, base, bstride, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint8mf2_t test_vlse8_v_u8mf2_tum_ntl_P1(vbool16_t mask, vuint8mf2_t maskedoff, const uint8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlse8_v_u8mf2_tum_ntl(mask, maskedoff, base, bstride, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint8m1_t test_vlse8_v_u8m1_tum_ntl_P1(vbool8_t mask, vuint8m1_t maskedoff, const uint8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlse8_v_u8m1_tum_ntl(mask, maskedoff, base, bstride, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint8m2_t test_vlse8_v_u8m2_tum_ntl_P1(vbool4_t mask, vuint8m2_t maskedoff, const uint8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlse8_v_u8m2_tum_ntl(mask, maskedoff, base, bstride, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint8m4_t test_vlse8_v_u8m4_tum_ntl_P1(vbool2_t mask, vuint8m4_t maskedoff, const uint8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlse8_v_u8m4_tum_ntl(mask, maskedoff, base, bstride, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint8m8_t test_vlse8_v_u8m8_tum_ntl_P1(vbool1_t mask, vuint8m8_t maskedoff, const uint8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlse8_v_u8m8_tum_ntl(mask, maskedoff, base, bstride, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint8mf8_t test_vlse8_v_i8mf8_tumu_ntl_P1(vbool64_t mask, vint8mf8_t maskedoff, const int8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlse8_v_i8mf8_tumu_ntl(mask, maskedoff, base, bstride, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint8mf4_t test_vlse8_v_i8mf4_tumu_ntl_P1(vbool32_t mask, vint8mf4_t maskedoff, const int8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlse8_v_i8mf4_tumu_ntl(mask, maskedoff, base, bstride, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint8mf2_t test_vlse8_v_i8mf2_tumu_ntl_P1(vbool16_t mask, vint8mf2_t maskedoff, const int8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlse8_v_i8mf2_tumu_ntl(mask, maskedoff, base, bstride, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint8m1_t test_vlse8_v_i8m1_tumu_ntl_P1(vbool8_t mask, vint8m1_t maskedoff, const int8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlse8_v_i8m1_tumu_ntl(mask, maskedoff, base, bstride, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint8m2_t test_vlse8_v_i8m2_tumu_ntl_P1(vbool4_t mask, vint8m2_t maskedoff, const int8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlse8_v_i8m2_tumu_ntl(mask, maskedoff, base, bstride, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint8m4_t test_vlse8_v_i8m4_tumu_ntl_P1(vbool2_t mask, vint8m4_t maskedoff, const int8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlse8_v_i8m4_tumu_ntl(mask, maskedoff, base, bstride, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint8m8_t test_vlse8_v_i8m8_tumu_ntl_P1(vbool1_t mask, vint8m8_t maskedoff, const int8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlse8_v_i8m8_tumu_ntl(mask, maskedoff, base, bstride, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint8mf8_t test_vlse8_v_u8mf8_tumu_ntl_P1(vbool64_t mask, vuint8mf8_t maskedoff, const uint8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlse8_v_u8mf8_tumu_ntl(mask, maskedoff, base, bstride, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint8mf4_t test_vlse8_v_u8mf4_tumu_ntl_P1(vbool32_t mask, vuint8mf4_t maskedoff, const uint8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlse8_v_u8mf4_tumu_ntl(mask, maskedoff, base, bstride, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint8mf2_t test_vlse8_v_u8mf2_tumu_ntl_P1(vbool16_t mask, vuint8mf2_t maskedoff, const uint8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlse8_v_u8mf2_tumu_ntl(mask, maskedoff, base, bstride, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint8m1_t test_vlse8_v_u8m1_tumu_ntl_P1(vbool8_t mask, vuint8m1_t maskedoff, const uint8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlse8_v_u8m1_tumu_ntl(mask, maskedoff, base, bstride, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint8m2_t test_vlse8_v_u8m2_tumu_ntl_P1(vbool4_t mask, vuint8m2_t maskedoff, const uint8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlse8_v_u8m2_tumu_ntl(mask, maskedoff, base, bstride, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint8m4_t test_vlse8_v_u8m4_tumu_ntl_P1(vbool2_t mask, vuint8m4_t maskedoff, const uint8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlse8_v_u8m4_tumu_ntl(mask, maskedoff, base, bstride, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint8m8_t test_vlse8_v_u8m8_tumu_ntl_P1(vbool1_t mask, vuint8m8_t maskedoff, const uint8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlse8_v_u8m8_tumu_ntl(mask, maskedoff, base, bstride, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint8mf8_t test_vlse8_v_i8mf8_mu_ntl_P1(vbool64_t mask, vint8mf8_t maskedoff, const int8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlse8_v_i8mf8_mu_ntl(mask, maskedoff, base, bstride, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint8mf4_t test_vlse8_v_i8mf4_mu_ntl_P1(vbool32_t mask, vint8mf4_t maskedoff, const int8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlse8_v_i8mf4_mu_ntl(mask, maskedoff, base, bstride, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint8mf2_t test_vlse8_v_i8mf2_mu_ntl_P1(vbool16_t mask, vint8mf2_t maskedoff, const int8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlse8_v_i8mf2_mu_ntl(mask, maskedoff, base, bstride, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint8m1_t test_vlse8_v_i8m1_mu_ntl_P1(vbool8_t mask, vint8m1_t maskedoff, const int8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlse8_v_i8m1_mu_ntl(mask, maskedoff, base, bstride, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint8m2_t test_vlse8_v_i8m2_mu_ntl_P1(vbool4_t mask, vint8m2_t maskedoff, const int8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlse8_v_i8m2_mu_ntl(mask, maskedoff, base, bstride, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint8m4_t test_vlse8_v_i8m4_mu_ntl_P1(vbool2_t mask, vint8m4_t maskedoff, const int8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlse8_v_i8m4_mu_ntl(mask, maskedoff, base, bstride, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint8m8_t test_vlse8_v_i8m8_mu_ntl_P1(vbool1_t mask, vint8m8_t maskedoff, const int8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlse8_v_i8m8_mu_ntl(mask, maskedoff, base, bstride, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint8mf8_t test_vlse8_v_u8mf8_mu_ntl_P1(vbool64_t mask, vuint8mf8_t maskedoff, const uint8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlse8_v_u8mf8_mu_ntl(mask, maskedoff, base, bstride, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint8mf4_t test_vlse8_v_u8mf4_mu_ntl_P1(vbool32_t mask, vuint8mf4_t maskedoff, const uint8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlse8_v_u8mf4_mu_ntl(mask, maskedoff, base, bstride, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint8mf2_t test_vlse8_v_u8mf2_mu_ntl_P1(vbool16_t mask, vuint8mf2_t maskedoff, const uint8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlse8_v_u8mf2_mu_ntl(mask, maskedoff, base, bstride, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint8m1_t test_vlse8_v_u8m1_mu_ntl_P1(vbool8_t mask, vuint8m1_t maskedoff, const uint8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlse8_v_u8m1_mu_ntl(mask, maskedoff, base, bstride, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint8m2_t test_vlse8_v_u8m2_mu_ntl_P1(vbool4_t mask, vuint8m2_t maskedoff, const uint8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlse8_v_u8m2_mu_ntl(mask, maskedoff, base, bstride, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint8m4_t test_vlse8_v_u8m4_mu_ntl_P1(vbool2_t mask, vuint8m4_t maskedoff, const uint8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlse8_v_u8m4_mu_ntl(mask, maskedoff, base, bstride, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint8m8_t test_vlse8_v_u8m8_mu_ntl_P1(vbool1_t mask, vuint8m8_t maskedoff, const uint8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlse8_v_u8m8_mu_ntl(mask, maskedoff, base, bstride, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

