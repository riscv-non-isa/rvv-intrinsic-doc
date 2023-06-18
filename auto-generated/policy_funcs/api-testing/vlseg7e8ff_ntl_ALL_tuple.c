#include <stdint.h>
#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
#include <riscv_ntlh.h>

vint8mf8x7_t test_vlseg7e8ff_v_i8mf8x7_tu_ntl_ALL(vint8mf8x7_t maskedoff_tuple, const int8_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg7e8ff_v_i8mf8x7_tu_ntl(maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL);
}

vint8mf4x7_t test_vlseg7e8ff_v_i8mf4x7_tu_ntl_ALL(vint8mf4x7_t maskedoff_tuple, const int8_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg7e8ff_v_i8mf4x7_tu_ntl(maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL);
}

vint8mf2x7_t test_vlseg7e8ff_v_i8mf2x7_tu_ntl_ALL(vint8mf2x7_t maskedoff_tuple, const int8_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg7e8ff_v_i8mf2x7_tu_ntl(maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL);
}

vint8m1x7_t test_vlseg7e8ff_v_i8m1x7_tu_ntl_ALL(vint8m1x7_t maskedoff_tuple, const int8_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg7e8ff_v_i8m1x7_tu_ntl(maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL);
}

vuint8mf8x7_t test_vlseg7e8ff_v_u8mf8x7_tu_ntl_ALL(vuint8mf8x7_t maskedoff_tuple, const uint8_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg7e8ff_v_u8mf8x7_tu_ntl(maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL);
}

vuint8mf4x7_t test_vlseg7e8ff_v_u8mf4x7_tu_ntl_ALL(vuint8mf4x7_t maskedoff_tuple, const uint8_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg7e8ff_v_u8mf4x7_tu_ntl(maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL);
}

vuint8mf2x7_t test_vlseg7e8ff_v_u8mf2x7_tu_ntl_ALL(vuint8mf2x7_t maskedoff_tuple, const uint8_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg7e8ff_v_u8mf2x7_tu_ntl(maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL);
}

vuint8m1x7_t test_vlseg7e8ff_v_u8m1x7_tu_ntl_ALL(vuint8m1x7_t maskedoff_tuple, const uint8_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg7e8ff_v_u8m1x7_tu_ntl(maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL);
}

vint8mf8x7_t test_vlseg7e8ff_v_i8mf8x7_tum_ntl_ALL(vbool64_t mask, vint8mf8x7_t maskedoff_tuple, const int8_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg7e8ff_v_i8mf8x7_tum_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL);
}

vint8mf4x7_t test_vlseg7e8ff_v_i8mf4x7_tum_ntl_ALL(vbool32_t mask, vint8mf4x7_t maskedoff_tuple, const int8_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg7e8ff_v_i8mf4x7_tum_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL);
}

vint8mf2x7_t test_vlseg7e8ff_v_i8mf2x7_tum_ntl_ALL(vbool16_t mask, vint8mf2x7_t maskedoff_tuple, const int8_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg7e8ff_v_i8mf2x7_tum_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL);
}

vint8m1x7_t test_vlseg7e8ff_v_i8m1x7_tum_ntl_ALL(vbool8_t mask, vint8m1x7_t maskedoff_tuple, const int8_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg7e8ff_v_i8m1x7_tum_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL);
}

vuint8mf8x7_t test_vlseg7e8ff_v_u8mf8x7_tum_ntl_ALL(vbool64_t mask, vuint8mf8x7_t maskedoff_tuple, const uint8_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg7e8ff_v_u8mf8x7_tum_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL);
}

vuint8mf4x7_t test_vlseg7e8ff_v_u8mf4x7_tum_ntl_ALL(vbool32_t mask, vuint8mf4x7_t maskedoff_tuple, const uint8_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg7e8ff_v_u8mf4x7_tum_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL);
}

vuint8mf2x7_t test_vlseg7e8ff_v_u8mf2x7_tum_ntl_ALL(vbool16_t mask, vuint8mf2x7_t maskedoff_tuple, const uint8_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg7e8ff_v_u8mf2x7_tum_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL);
}

vuint8m1x7_t test_vlseg7e8ff_v_u8m1x7_tum_ntl_ALL(vbool8_t mask, vuint8m1x7_t maskedoff_tuple, const uint8_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg7e8ff_v_u8m1x7_tum_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL);
}

vint8mf8x7_t test_vlseg7e8ff_v_i8mf8x7_tumu_ntl_ALL(vbool64_t mask, vint8mf8x7_t maskedoff_tuple, const int8_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg7e8ff_v_i8mf8x7_tumu_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL);
}

vint8mf4x7_t test_vlseg7e8ff_v_i8mf4x7_tumu_ntl_ALL(vbool32_t mask, vint8mf4x7_t maskedoff_tuple, const int8_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg7e8ff_v_i8mf4x7_tumu_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL);
}

vint8mf2x7_t test_vlseg7e8ff_v_i8mf2x7_tumu_ntl_ALL(vbool16_t mask, vint8mf2x7_t maskedoff_tuple, const int8_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg7e8ff_v_i8mf2x7_tumu_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL);
}

vint8m1x7_t test_vlseg7e8ff_v_i8m1x7_tumu_ntl_ALL(vbool8_t mask, vint8m1x7_t maskedoff_tuple, const int8_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg7e8ff_v_i8m1x7_tumu_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL);
}

vuint8mf8x7_t test_vlseg7e8ff_v_u8mf8x7_tumu_ntl_ALL(vbool64_t mask, vuint8mf8x7_t maskedoff_tuple, const uint8_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg7e8ff_v_u8mf8x7_tumu_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL);
}

vuint8mf4x7_t test_vlseg7e8ff_v_u8mf4x7_tumu_ntl_ALL(vbool32_t mask, vuint8mf4x7_t maskedoff_tuple, const uint8_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg7e8ff_v_u8mf4x7_tumu_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL);
}

vuint8mf2x7_t test_vlseg7e8ff_v_u8mf2x7_tumu_ntl_ALL(vbool16_t mask, vuint8mf2x7_t maskedoff_tuple, const uint8_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg7e8ff_v_u8mf2x7_tumu_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL);
}

vuint8m1x7_t test_vlseg7e8ff_v_u8m1x7_tumu_ntl_ALL(vbool8_t mask, vuint8m1x7_t maskedoff_tuple, const uint8_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg7e8ff_v_u8m1x7_tumu_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL);
}

vint8mf8x7_t test_vlseg7e8ff_v_i8mf8x7_mu_ntl_ALL(vbool64_t mask, vint8mf8x7_t maskedoff_tuple, const int8_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg7e8ff_v_i8mf8x7_mu_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL);
}

vint8mf4x7_t test_vlseg7e8ff_v_i8mf4x7_mu_ntl_ALL(vbool32_t mask, vint8mf4x7_t maskedoff_tuple, const int8_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg7e8ff_v_i8mf4x7_mu_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL);
}

vint8mf2x7_t test_vlseg7e8ff_v_i8mf2x7_mu_ntl_ALL(vbool16_t mask, vint8mf2x7_t maskedoff_tuple, const int8_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg7e8ff_v_i8mf2x7_mu_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL);
}

vint8m1x7_t test_vlseg7e8ff_v_i8m1x7_mu_ntl_ALL(vbool8_t mask, vint8m1x7_t maskedoff_tuple, const int8_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg7e8ff_v_i8m1x7_mu_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL);
}

vuint8mf8x7_t test_vlseg7e8ff_v_u8mf8x7_mu_ntl_ALL(vbool64_t mask, vuint8mf8x7_t maskedoff_tuple, const uint8_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg7e8ff_v_u8mf8x7_mu_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL);
}

vuint8mf4x7_t test_vlseg7e8ff_v_u8mf4x7_mu_ntl_ALL(vbool32_t mask, vuint8mf4x7_t maskedoff_tuple, const uint8_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg7e8ff_v_u8mf4x7_mu_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL);
}

vuint8mf2x7_t test_vlseg7e8ff_v_u8mf2x7_mu_ntl_ALL(vbool16_t mask, vuint8mf2x7_t maskedoff_tuple, const uint8_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg7e8ff_v_u8mf2x7_mu_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL);
}

vuint8m1x7_t test_vlseg7e8ff_v_u8m1x7_mu_ntl_ALL(vbool8_t mask, vuint8m1x7_t maskedoff_tuple, const uint8_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg7e8ff_v_u8m1x7_mu_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL);
}

