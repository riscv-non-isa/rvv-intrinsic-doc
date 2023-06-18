#include <stdint.h>
#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
#include <riscv_ntlh.h>

vint8mf8x5_t test_vlsseg5e8_v_i8mf8x5_tu_ntl_S1(vint8mf8x5_t maskedoff_tuple, const int8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg5e8_v_i8mf8x5_tu_ntl(maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint8mf4x5_t test_vlsseg5e8_v_i8mf4x5_tu_ntl_S1(vint8mf4x5_t maskedoff_tuple, const int8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg5e8_v_i8mf4x5_tu_ntl(maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint8mf2x5_t test_vlsseg5e8_v_i8mf2x5_tu_ntl_S1(vint8mf2x5_t maskedoff_tuple, const int8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg5e8_v_i8mf2x5_tu_ntl(maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint8m1x5_t test_vlsseg5e8_v_i8m1x5_tu_ntl_S1(vint8m1x5_t maskedoff_tuple, const int8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg5e8_v_i8m1x5_tu_ntl(maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint8mf8x5_t test_vlsseg5e8_v_u8mf8x5_tu_ntl_S1(vuint8mf8x5_t maskedoff_tuple, const uint8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg5e8_v_u8mf8x5_tu_ntl(maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint8mf4x5_t test_vlsseg5e8_v_u8mf4x5_tu_ntl_S1(vuint8mf4x5_t maskedoff_tuple, const uint8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg5e8_v_u8mf4x5_tu_ntl(maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint8mf2x5_t test_vlsseg5e8_v_u8mf2x5_tu_ntl_S1(vuint8mf2x5_t maskedoff_tuple, const uint8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg5e8_v_u8mf2x5_tu_ntl(maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint8m1x5_t test_vlsseg5e8_v_u8m1x5_tu_ntl_S1(vuint8m1x5_t maskedoff_tuple, const uint8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg5e8_v_u8m1x5_tu_ntl(maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint8mf8x5_t test_vlsseg5e8_v_i8mf8x5_tum_ntl_S1(vbool64_t mask, vint8mf8x5_t maskedoff_tuple, const int8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg5e8_v_i8mf8x5_tum_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint8mf4x5_t test_vlsseg5e8_v_i8mf4x5_tum_ntl_S1(vbool32_t mask, vint8mf4x5_t maskedoff_tuple, const int8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg5e8_v_i8mf4x5_tum_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint8mf2x5_t test_vlsseg5e8_v_i8mf2x5_tum_ntl_S1(vbool16_t mask, vint8mf2x5_t maskedoff_tuple, const int8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg5e8_v_i8mf2x5_tum_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint8m1x5_t test_vlsseg5e8_v_i8m1x5_tum_ntl_S1(vbool8_t mask, vint8m1x5_t maskedoff_tuple, const int8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg5e8_v_i8m1x5_tum_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint8mf8x5_t test_vlsseg5e8_v_u8mf8x5_tum_ntl_S1(vbool64_t mask, vuint8mf8x5_t maskedoff_tuple, const uint8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg5e8_v_u8mf8x5_tum_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint8mf4x5_t test_vlsseg5e8_v_u8mf4x5_tum_ntl_S1(vbool32_t mask, vuint8mf4x5_t maskedoff_tuple, const uint8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg5e8_v_u8mf4x5_tum_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint8mf2x5_t test_vlsseg5e8_v_u8mf2x5_tum_ntl_S1(vbool16_t mask, vuint8mf2x5_t maskedoff_tuple, const uint8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg5e8_v_u8mf2x5_tum_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint8m1x5_t test_vlsseg5e8_v_u8m1x5_tum_ntl_S1(vbool8_t mask, vuint8m1x5_t maskedoff_tuple, const uint8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg5e8_v_u8m1x5_tum_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint8mf8x5_t test_vlsseg5e8_v_i8mf8x5_tumu_ntl_S1(vbool64_t mask, vint8mf8x5_t maskedoff_tuple, const int8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg5e8_v_i8mf8x5_tumu_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint8mf4x5_t test_vlsseg5e8_v_i8mf4x5_tumu_ntl_S1(vbool32_t mask, vint8mf4x5_t maskedoff_tuple, const int8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg5e8_v_i8mf4x5_tumu_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint8mf2x5_t test_vlsseg5e8_v_i8mf2x5_tumu_ntl_S1(vbool16_t mask, vint8mf2x5_t maskedoff_tuple, const int8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg5e8_v_i8mf2x5_tumu_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint8m1x5_t test_vlsseg5e8_v_i8m1x5_tumu_ntl_S1(vbool8_t mask, vint8m1x5_t maskedoff_tuple, const int8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg5e8_v_i8m1x5_tumu_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint8mf8x5_t test_vlsseg5e8_v_u8mf8x5_tumu_ntl_S1(vbool64_t mask, vuint8mf8x5_t maskedoff_tuple, const uint8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg5e8_v_u8mf8x5_tumu_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint8mf4x5_t test_vlsseg5e8_v_u8mf4x5_tumu_ntl_S1(vbool32_t mask, vuint8mf4x5_t maskedoff_tuple, const uint8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg5e8_v_u8mf4x5_tumu_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint8mf2x5_t test_vlsseg5e8_v_u8mf2x5_tumu_ntl_S1(vbool16_t mask, vuint8mf2x5_t maskedoff_tuple, const uint8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg5e8_v_u8mf2x5_tumu_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint8m1x5_t test_vlsseg5e8_v_u8m1x5_tumu_ntl_S1(vbool8_t mask, vuint8m1x5_t maskedoff_tuple, const uint8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg5e8_v_u8m1x5_tumu_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint8mf8x5_t test_vlsseg5e8_v_i8mf8x5_mu_ntl_S1(vbool64_t mask, vint8mf8x5_t maskedoff_tuple, const int8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg5e8_v_i8mf8x5_mu_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint8mf4x5_t test_vlsseg5e8_v_i8mf4x5_mu_ntl_S1(vbool32_t mask, vint8mf4x5_t maskedoff_tuple, const int8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg5e8_v_i8mf4x5_mu_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint8mf2x5_t test_vlsseg5e8_v_i8mf2x5_mu_ntl_S1(vbool16_t mask, vint8mf2x5_t maskedoff_tuple, const int8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg5e8_v_i8mf2x5_mu_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint8m1x5_t test_vlsseg5e8_v_i8m1x5_mu_ntl_S1(vbool8_t mask, vint8m1x5_t maskedoff_tuple, const int8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg5e8_v_i8m1x5_mu_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint8mf8x5_t test_vlsseg5e8_v_u8mf8x5_mu_ntl_S1(vbool64_t mask, vuint8mf8x5_t maskedoff_tuple, const uint8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg5e8_v_u8mf8x5_mu_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint8mf4x5_t test_vlsseg5e8_v_u8mf4x5_mu_ntl_S1(vbool32_t mask, vuint8mf4x5_t maskedoff_tuple, const uint8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg5e8_v_u8mf4x5_mu_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint8mf2x5_t test_vlsseg5e8_v_u8mf2x5_mu_ntl_S1(vbool16_t mask, vuint8mf2x5_t maskedoff_tuple, const uint8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg5e8_v_u8mf2x5_mu_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint8m1x5_t test_vlsseg5e8_v_u8m1x5_mu_ntl_S1(vbool8_t mask, vuint8m1x5_t maskedoff_tuple, const uint8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg5e8_v_u8m1x5_mu_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

