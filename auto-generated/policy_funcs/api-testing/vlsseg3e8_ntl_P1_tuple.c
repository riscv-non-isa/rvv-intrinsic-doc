#include <stdint.h>
#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
#include <riscv_ntlh.h>

vint8mf8x3_t test_vlsseg3e8_v_i8mf8x3_tu_ntl_P1(vint8mf8x3_t maskedoff_tuple, const int8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg3e8_v_i8mf8x3_tu_ntl(maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint8mf4x3_t test_vlsseg3e8_v_i8mf4x3_tu_ntl_P1(vint8mf4x3_t maskedoff_tuple, const int8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg3e8_v_i8mf4x3_tu_ntl(maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint8mf2x3_t test_vlsseg3e8_v_i8mf2x3_tu_ntl_P1(vint8mf2x3_t maskedoff_tuple, const int8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg3e8_v_i8mf2x3_tu_ntl(maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint8m1x3_t test_vlsseg3e8_v_i8m1x3_tu_ntl_P1(vint8m1x3_t maskedoff_tuple, const int8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg3e8_v_i8m1x3_tu_ntl(maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint8m2x3_t test_vlsseg3e8_v_i8m2x3_tu_ntl_P1(vint8m2x3_t maskedoff_tuple, const int8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg3e8_v_i8m2x3_tu_ntl(maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint8mf8x3_t test_vlsseg3e8_v_u8mf8x3_tu_ntl_P1(vuint8mf8x3_t maskedoff_tuple, const uint8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg3e8_v_u8mf8x3_tu_ntl(maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint8mf4x3_t test_vlsseg3e8_v_u8mf4x3_tu_ntl_P1(vuint8mf4x3_t maskedoff_tuple, const uint8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg3e8_v_u8mf4x3_tu_ntl(maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint8mf2x3_t test_vlsseg3e8_v_u8mf2x3_tu_ntl_P1(vuint8mf2x3_t maskedoff_tuple, const uint8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg3e8_v_u8mf2x3_tu_ntl(maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint8m1x3_t test_vlsseg3e8_v_u8m1x3_tu_ntl_P1(vuint8m1x3_t maskedoff_tuple, const uint8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg3e8_v_u8m1x3_tu_ntl(maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint8m2x3_t test_vlsseg3e8_v_u8m2x3_tu_ntl_P1(vuint8m2x3_t maskedoff_tuple, const uint8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg3e8_v_u8m2x3_tu_ntl(maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint8mf8x3_t test_vlsseg3e8_v_i8mf8x3_tum_ntl_P1(vbool64_t mask, vint8mf8x3_t maskedoff_tuple, const int8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg3e8_v_i8mf8x3_tum_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint8mf4x3_t test_vlsseg3e8_v_i8mf4x3_tum_ntl_P1(vbool32_t mask, vint8mf4x3_t maskedoff_tuple, const int8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg3e8_v_i8mf4x3_tum_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint8mf2x3_t test_vlsseg3e8_v_i8mf2x3_tum_ntl_P1(vbool16_t mask, vint8mf2x3_t maskedoff_tuple, const int8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg3e8_v_i8mf2x3_tum_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint8m1x3_t test_vlsseg3e8_v_i8m1x3_tum_ntl_P1(vbool8_t mask, vint8m1x3_t maskedoff_tuple, const int8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg3e8_v_i8m1x3_tum_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint8m2x3_t test_vlsseg3e8_v_i8m2x3_tum_ntl_P1(vbool4_t mask, vint8m2x3_t maskedoff_tuple, const int8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg3e8_v_i8m2x3_tum_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint8mf8x3_t test_vlsseg3e8_v_u8mf8x3_tum_ntl_P1(vbool64_t mask, vuint8mf8x3_t maskedoff_tuple, const uint8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg3e8_v_u8mf8x3_tum_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint8mf4x3_t test_vlsseg3e8_v_u8mf4x3_tum_ntl_P1(vbool32_t mask, vuint8mf4x3_t maskedoff_tuple, const uint8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg3e8_v_u8mf4x3_tum_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint8mf2x3_t test_vlsseg3e8_v_u8mf2x3_tum_ntl_P1(vbool16_t mask, vuint8mf2x3_t maskedoff_tuple, const uint8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg3e8_v_u8mf2x3_tum_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint8m1x3_t test_vlsseg3e8_v_u8m1x3_tum_ntl_P1(vbool8_t mask, vuint8m1x3_t maskedoff_tuple, const uint8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg3e8_v_u8m1x3_tum_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint8m2x3_t test_vlsseg3e8_v_u8m2x3_tum_ntl_P1(vbool4_t mask, vuint8m2x3_t maskedoff_tuple, const uint8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg3e8_v_u8m2x3_tum_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint8mf8x3_t test_vlsseg3e8_v_i8mf8x3_tumu_ntl_P1(vbool64_t mask, vint8mf8x3_t maskedoff_tuple, const int8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg3e8_v_i8mf8x3_tumu_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint8mf4x3_t test_vlsseg3e8_v_i8mf4x3_tumu_ntl_P1(vbool32_t mask, vint8mf4x3_t maskedoff_tuple, const int8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg3e8_v_i8mf4x3_tumu_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint8mf2x3_t test_vlsseg3e8_v_i8mf2x3_tumu_ntl_P1(vbool16_t mask, vint8mf2x3_t maskedoff_tuple, const int8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg3e8_v_i8mf2x3_tumu_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint8m1x3_t test_vlsseg3e8_v_i8m1x3_tumu_ntl_P1(vbool8_t mask, vint8m1x3_t maskedoff_tuple, const int8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg3e8_v_i8m1x3_tumu_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint8m2x3_t test_vlsseg3e8_v_i8m2x3_tumu_ntl_P1(vbool4_t mask, vint8m2x3_t maskedoff_tuple, const int8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg3e8_v_i8m2x3_tumu_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint8mf8x3_t test_vlsseg3e8_v_u8mf8x3_tumu_ntl_P1(vbool64_t mask, vuint8mf8x3_t maskedoff_tuple, const uint8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg3e8_v_u8mf8x3_tumu_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint8mf4x3_t test_vlsseg3e8_v_u8mf4x3_tumu_ntl_P1(vbool32_t mask, vuint8mf4x3_t maskedoff_tuple, const uint8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg3e8_v_u8mf4x3_tumu_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint8mf2x3_t test_vlsseg3e8_v_u8mf2x3_tumu_ntl_P1(vbool16_t mask, vuint8mf2x3_t maskedoff_tuple, const uint8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg3e8_v_u8mf2x3_tumu_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint8m1x3_t test_vlsseg3e8_v_u8m1x3_tumu_ntl_P1(vbool8_t mask, vuint8m1x3_t maskedoff_tuple, const uint8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg3e8_v_u8m1x3_tumu_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint8m2x3_t test_vlsseg3e8_v_u8m2x3_tumu_ntl_P1(vbool4_t mask, vuint8m2x3_t maskedoff_tuple, const uint8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg3e8_v_u8m2x3_tumu_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint8mf8x3_t test_vlsseg3e8_v_i8mf8x3_mu_ntl_P1(vbool64_t mask, vint8mf8x3_t maskedoff_tuple, const int8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg3e8_v_i8mf8x3_mu_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint8mf4x3_t test_vlsseg3e8_v_i8mf4x3_mu_ntl_P1(vbool32_t mask, vint8mf4x3_t maskedoff_tuple, const int8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg3e8_v_i8mf4x3_mu_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint8mf2x3_t test_vlsseg3e8_v_i8mf2x3_mu_ntl_P1(vbool16_t mask, vint8mf2x3_t maskedoff_tuple, const int8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg3e8_v_i8mf2x3_mu_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint8m1x3_t test_vlsseg3e8_v_i8m1x3_mu_ntl_P1(vbool8_t mask, vint8m1x3_t maskedoff_tuple, const int8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg3e8_v_i8m1x3_mu_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint8m2x3_t test_vlsseg3e8_v_i8m2x3_mu_ntl_P1(vbool4_t mask, vint8m2x3_t maskedoff_tuple, const int8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg3e8_v_i8m2x3_mu_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint8mf8x3_t test_vlsseg3e8_v_u8mf8x3_mu_ntl_P1(vbool64_t mask, vuint8mf8x3_t maskedoff_tuple, const uint8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg3e8_v_u8mf8x3_mu_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint8mf4x3_t test_vlsseg3e8_v_u8mf4x3_mu_ntl_P1(vbool32_t mask, vuint8mf4x3_t maskedoff_tuple, const uint8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg3e8_v_u8mf4x3_mu_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint8mf2x3_t test_vlsseg3e8_v_u8mf2x3_mu_ntl_P1(vbool16_t mask, vuint8mf2x3_t maskedoff_tuple, const uint8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg3e8_v_u8mf2x3_mu_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint8m1x3_t test_vlsseg3e8_v_u8m1x3_mu_ntl_P1(vbool8_t mask, vuint8m1x3_t maskedoff_tuple, const uint8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg3e8_v_u8m1x3_mu_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint8m2x3_t test_vlsseg3e8_v_u8m2x3_mu_ntl_P1(vbool4_t mask, vuint8m2x3_t maskedoff_tuple, const uint8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg3e8_v_u8m2x3_mu_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

