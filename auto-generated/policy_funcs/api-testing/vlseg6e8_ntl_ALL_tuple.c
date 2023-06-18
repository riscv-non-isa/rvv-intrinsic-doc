#include <stdint.h>
#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
#include <riscv_ntlh.h>

vint8mf8x6_t test_vlseg6e8_v_i8mf8x6_tu_ntl_ALL(vint8mf8x6_t maskedoff_tuple, const int8_t *base, size_t vl, int domain) {
  return __riscv_vlseg6e8_v_i8mf8x6_tu_ntl(maskedoff_tuple, base, vl, __RISCV_NTLH_ALL);
}

vint8mf4x6_t test_vlseg6e8_v_i8mf4x6_tu_ntl_ALL(vint8mf4x6_t maskedoff_tuple, const int8_t *base, size_t vl, int domain) {
  return __riscv_vlseg6e8_v_i8mf4x6_tu_ntl(maskedoff_tuple, base, vl, __RISCV_NTLH_ALL);
}

vint8mf2x6_t test_vlseg6e8_v_i8mf2x6_tu_ntl_ALL(vint8mf2x6_t maskedoff_tuple, const int8_t *base, size_t vl, int domain) {
  return __riscv_vlseg6e8_v_i8mf2x6_tu_ntl(maskedoff_tuple, base, vl, __RISCV_NTLH_ALL);
}

vint8m1x6_t test_vlseg6e8_v_i8m1x6_tu_ntl_ALL(vint8m1x6_t maskedoff_tuple, const int8_t *base, size_t vl, int domain) {
  return __riscv_vlseg6e8_v_i8m1x6_tu_ntl(maskedoff_tuple, base, vl, __RISCV_NTLH_ALL);
}

vuint8mf8x6_t test_vlseg6e8_v_u8mf8x6_tu_ntl_ALL(vuint8mf8x6_t maskedoff_tuple, const uint8_t *base, size_t vl, int domain) {
  return __riscv_vlseg6e8_v_u8mf8x6_tu_ntl(maskedoff_tuple, base, vl, __RISCV_NTLH_ALL);
}

vuint8mf4x6_t test_vlseg6e8_v_u8mf4x6_tu_ntl_ALL(vuint8mf4x6_t maskedoff_tuple, const uint8_t *base, size_t vl, int domain) {
  return __riscv_vlseg6e8_v_u8mf4x6_tu_ntl(maskedoff_tuple, base, vl, __RISCV_NTLH_ALL);
}

vuint8mf2x6_t test_vlseg6e8_v_u8mf2x6_tu_ntl_ALL(vuint8mf2x6_t maskedoff_tuple, const uint8_t *base, size_t vl, int domain) {
  return __riscv_vlseg6e8_v_u8mf2x6_tu_ntl(maskedoff_tuple, base, vl, __RISCV_NTLH_ALL);
}

vuint8m1x6_t test_vlseg6e8_v_u8m1x6_tu_ntl_ALL(vuint8m1x6_t maskedoff_tuple, const uint8_t *base, size_t vl, int domain) {
  return __riscv_vlseg6e8_v_u8m1x6_tu_ntl(maskedoff_tuple, base, vl, __RISCV_NTLH_ALL);
}

vint8mf8x6_t test_vlseg6e8_v_i8mf8x6_tum_ntl_ALL(vbool64_t mask, vint8mf8x6_t maskedoff_tuple, const int8_t *base, size_t vl, int domain) {
  return __riscv_vlseg6e8_v_i8mf8x6_tum_ntl(mask, maskedoff_tuple, base, vl, __RISCV_NTLH_ALL);
}

vint8mf4x6_t test_vlseg6e8_v_i8mf4x6_tum_ntl_ALL(vbool32_t mask, vint8mf4x6_t maskedoff_tuple, const int8_t *base, size_t vl, int domain) {
  return __riscv_vlseg6e8_v_i8mf4x6_tum_ntl(mask, maskedoff_tuple, base, vl, __RISCV_NTLH_ALL);
}

vint8mf2x6_t test_vlseg6e8_v_i8mf2x6_tum_ntl_ALL(vbool16_t mask, vint8mf2x6_t maskedoff_tuple, const int8_t *base, size_t vl, int domain) {
  return __riscv_vlseg6e8_v_i8mf2x6_tum_ntl(mask, maskedoff_tuple, base, vl, __RISCV_NTLH_ALL);
}

vint8m1x6_t test_vlseg6e8_v_i8m1x6_tum_ntl_ALL(vbool8_t mask, vint8m1x6_t maskedoff_tuple, const int8_t *base, size_t vl, int domain) {
  return __riscv_vlseg6e8_v_i8m1x6_tum_ntl(mask, maskedoff_tuple, base, vl, __RISCV_NTLH_ALL);
}

vuint8mf8x6_t test_vlseg6e8_v_u8mf8x6_tum_ntl_ALL(vbool64_t mask, vuint8mf8x6_t maskedoff_tuple, const uint8_t *base, size_t vl, int domain) {
  return __riscv_vlseg6e8_v_u8mf8x6_tum_ntl(mask, maskedoff_tuple, base, vl, __RISCV_NTLH_ALL);
}

vuint8mf4x6_t test_vlseg6e8_v_u8mf4x6_tum_ntl_ALL(vbool32_t mask, vuint8mf4x6_t maskedoff_tuple, const uint8_t *base, size_t vl, int domain) {
  return __riscv_vlseg6e8_v_u8mf4x6_tum_ntl(mask, maskedoff_tuple, base, vl, __RISCV_NTLH_ALL);
}

vuint8mf2x6_t test_vlseg6e8_v_u8mf2x6_tum_ntl_ALL(vbool16_t mask, vuint8mf2x6_t maskedoff_tuple, const uint8_t *base, size_t vl, int domain) {
  return __riscv_vlseg6e8_v_u8mf2x6_tum_ntl(mask, maskedoff_tuple, base, vl, __RISCV_NTLH_ALL);
}

vuint8m1x6_t test_vlseg6e8_v_u8m1x6_tum_ntl_ALL(vbool8_t mask, vuint8m1x6_t maskedoff_tuple, const uint8_t *base, size_t vl, int domain) {
  return __riscv_vlseg6e8_v_u8m1x6_tum_ntl(mask, maskedoff_tuple, base, vl, __RISCV_NTLH_ALL);
}

vint8mf8x6_t test_vlseg6e8_v_i8mf8x6_tumu_ntl_ALL(vbool64_t mask, vint8mf8x6_t maskedoff_tuple, const int8_t *base, size_t vl, int domain) {
  return __riscv_vlseg6e8_v_i8mf8x6_tumu_ntl(mask, maskedoff_tuple, base, vl, __RISCV_NTLH_ALL);
}

vint8mf4x6_t test_vlseg6e8_v_i8mf4x6_tumu_ntl_ALL(vbool32_t mask, vint8mf4x6_t maskedoff_tuple, const int8_t *base, size_t vl, int domain) {
  return __riscv_vlseg6e8_v_i8mf4x6_tumu_ntl(mask, maskedoff_tuple, base, vl, __RISCV_NTLH_ALL);
}

vint8mf2x6_t test_vlseg6e8_v_i8mf2x6_tumu_ntl_ALL(vbool16_t mask, vint8mf2x6_t maskedoff_tuple, const int8_t *base, size_t vl, int domain) {
  return __riscv_vlseg6e8_v_i8mf2x6_tumu_ntl(mask, maskedoff_tuple, base, vl, __RISCV_NTLH_ALL);
}

vint8m1x6_t test_vlseg6e8_v_i8m1x6_tumu_ntl_ALL(vbool8_t mask, vint8m1x6_t maskedoff_tuple, const int8_t *base, size_t vl, int domain) {
  return __riscv_vlseg6e8_v_i8m1x6_tumu_ntl(mask, maskedoff_tuple, base, vl, __RISCV_NTLH_ALL);
}

vuint8mf8x6_t test_vlseg6e8_v_u8mf8x6_tumu_ntl_ALL(vbool64_t mask, vuint8mf8x6_t maskedoff_tuple, const uint8_t *base, size_t vl, int domain) {
  return __riscv_vlseg6e8_v_u8mf8x6_tumu_ntl(mask, maskedoff_tuple, base, vl, __RISCV_NTLH_ALL);
}

vuint8mf4x6_t test_vlseg6e8_v_u8mf4x6_tumu_ntl_ALL(vbool32_t mask, vuint8mf4x6_t maskedoff_tuple, const uint8_t *base, size_t vl, int domain) {
  return __riscv_vlseg6e8_v_u8mf4x6_tumu_ntl(mask, maskedoff_tuple, base, vl, __RISCV_NTLH_ALL);
}

vuint8mf2x6_t test_vlseg6e8_v_u8mf2x6_tumu_ntl_ALL(vbool16_t mask, vuint8mf2x6_t maskedoff_tuple, const uint8_t *base, size_t vl, int domain) {
  return __riscv_vlseg6e8_v_u8mf2x6_tumu_ntl(mask, maskedoff_tuple, base, vl, __RISCV_NTLH_ALL);
}

vuint8m1x6_t test_vlseg6e8_v_u8m1x6_tumu_ntl_ALL(vbool8_t mask, vuint8m1x6_t maskedoff_tuple, const uint8_t *base, size_t vl, int domain) {
  return __riscv_vlseg6e8_v_u8m1x6_tumu_ntl(mask, maskedoff_tuple, base, vl, __RISCV_NTLH_ALL);
}

vint8mf8x6_t test_vlseg6e8_v_i8mf8x6_mu_ntl_ALL(vbool64_t mask, vint8mf8x6_t maskedoff_tuple, const int8_t *base, size_t vl, int domain) {
  return __riscv_vlseg6e8_v_i8mf8x6_mu_ntl(mask, maskedoff_tuple, base, vl, __RISCV_NTLH_ALL);
}

vint8mf4x6_t test_vlseg6e8_v_i8mf4x6_mu_ntl_ALL(vbool32_t mask, vint8mf4x6_t maskedoff_tuple, const int8_t *base, size_t vl, int domain) {
  return __riscv_vlseg6e8_v_i8mf4x6_mu_ntl(mask, maskedoff_tuple, base, vl, __RISCV_NTLH_ALL);
}

vint8mf2x6_t test_vlseg6e8_v_i8mf2x6_mu_ntl_ALL(vbool16_t mask, vint8mf2x6_t maskedoff_tuple, const int8_t *base, size_t vl, int domain) {
  return __riscv_vlseg6e8_v_i8mf2x6_mu_ntl(mask, maskedoff_tuple, base, vl, __RISCV_NTLH_ALL);
}

vint8m1x6_t test_vlseg6e8_v_i8m1x6_mu_ntl_ALL(vbool8_t mask, vint8m1x6_t maskedoff_tuple, const int8_t *base, size_t vl, int domain) {
  return __riscv_vlseg6e8_v_i8m1x6_mu_ntl(mask, maskedoff_tuple, base, vl, __RISCV_NTLH_ALL);
}

vuint8mf8x6_t test_vlseg6e8_v_u8mf8x6_mu_ntl_ALL(vbool64_t mask, vuint8mf8x6_t maskedoff_tuple, const uint8_t *base, size_t vl, int domain) {
  return __riscv_vlseg6e8_v_u8mf8x6_mu_ntl(mask, maskedoff_tuple, base, vl, __RISCV_NTLH_ALL);
}

vuint8mf4x6_t test_vlseg6e8_v_u8mf4x6_mu_ntl_ALL(vbool32_t mask, vuint8mf4x6_t maskedoff_tuple, const uint8_t *base, size_t vl, int domain) {
  return __riscv_vlseg6e8_v_u8mf4x6_mu_ntl(mask, maskedoff_tuple, base, vl, __RISCV_NTLH_ALL);
}

vuint8mf2x6_t test_vlseg6e8_v_u8mf2x6_mu_ntl_ALL(vbool16_t mask, vuint8mf2x6_t maskedoff_tuple, const uint8_t *base, size_t vl, int domain) {
  return __riscv_vlseg6e8_v_u8mf2x6_mu_ntl(mask, maskedoff_tuple, base, vl, __RISCV_NTLH_ALL);
}

vuint8m1x6_t test_vlseg6e8_v_u8m1x6_mu_ntl_ALL(vbool8_t mask, vuint8m1x6_t maskedoff_tuple, const uint8_t *base, size_t vl, int domain) {
  return __riscv_vlseg6e8_v_u8m1x6_mu_ntl(mask, maskedoff_tuple, base, vl, __RISCV_NTLH_ALL);
}

