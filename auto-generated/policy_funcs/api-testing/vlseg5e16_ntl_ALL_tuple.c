#include <stdint.h>
#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
#include <riscv_ntlh.h>

vfloat16mf4x5_t test_vlseg5e16_v_f16mf4x5_tu_ntl_ALL(vfloat16mf4x5_t maskedoff_tuple, const float16_t *base, size_t vl, int domain) {
  return __riscv_vlseg5e16_v_f16mf4x5_tu_ntl(maskedoff_tuple, base, vl, __RISCV_NTLH_ALL);
}

vfloat16mf2x5_t test_vlseg5e16_v_f16mf2x5_tu_ntl_ALL(vfloat16mf2x5_t maskedoff_tuple, const float16_t *base, size_t vl, int domain) {
  return __riscv_vlseg5e16_v_f16mf2x5_tu_ntl(maskedoff_tuple, base, vl, __RISCV_NTLH_ALL);
}

vfloat16m1x5_t test_vlseg5e16_v_f16m1x5_tu_ntl_ALL(vfloat16m1x5_t maskedoff_tuple, const float16_t *base, size_t vl, int domain) {
  return __riscv_vlseg5e16_v_f16m1x5_tu_ntl(maskedoff_tuple, base, vl, __RISCV_NTLH_ALL);
}

vint16mf4x5_t test_vlseg5e16_v_i16mf4x5_tu_ntl_ALL(vint16mf4x5_t maskedoff_tuple, const int16_t *base, size_t vl, int domain) {
  return __riscv_vlseg5e16_v_i16mf4x5_tu_ntl(maskedoff_tuple, base, vl, __RISCV_NTLH_ALL);
}

vint16mf2x5_t test_vlseg5e16_v_i16mf2x5_tu_ntl_ALL(vint16mf2x5_t maskedoff_tuple, const int16_t *base, size_t vl, int domain) {
  return __riscv_vlseg5e16_v_i16mf2x5_tu_ntl(maskedoff_tuple, base, vl, __RISCV_NTLH_ALL);
}

vint16m1x5_t test_vlseg5e16_v_i16m1x5_tu_ntl_ALL(vint16m1x5_t maskedoff_tuple, const int16_t *base, size_t vl, int domain) {
  return __riscv_vlseg5e16_v_i16m1x5_tu_ntl(maskedoff_tuple, base, vl, __RISCV_NTLH_ALL);
}

vuint16mf4x5_t test_vlseg5e16_v_u16mf4x5_tu_ntl_ALL(vuint16mf4x5_t maskedoff_tuple, const uint16_t *base, size_t vl, int domain) {
  return __riscv_vlseg5e16_v_u16mf4x5_tu_ntl(maskedoff_tuple, base, vl, __RISCV_NTLH_ALL);
}

vuint16mf2x5_t test_vlseg5e16_v_u16mf2x5_tu_ntl_ALL(vuint16mf2x5_t maskedoff_tuple, const uint16_t *base, size_t vl, int domain) {
  return __riscv_vlseg5e16_v_u16mf2x5_tu_ntl(maskedoff_tuple, base, vl, __RISCV_NTLH_ALL);
}

vuint16m1x5_t test_vlseg5e16_v_u16m1x5_tu_ntl_ALL(vuint16m1x5_t maskedoff_tuple, const uint16_t *base, size_t vl, int domain) {
  return __riscv_vlseg5e16_v_u16m1x5_tu_ntl(maskedoff_tuple, base, vl, __RISCV_NTLH_ALL);
}

vfloat16mf4x5_t test_vlseg5e16_v_f16mf4x5_tum_ntl_ALL(vbool64_t mask, vfloat16mf4x5_t maskedoff_tuple, const float16_t *base, size_t vl, int domain) {
  return __riscv_vlseg5e16_v_f16mf4x5_tum_ntl(mask, maskedoff_tuple, base, vl, __RISCV_NTLH_ALL);
}

vfloat16mf2x5_t test_vlseg5e16_v_f16mf2x5_tum_ntl_ALL(vbool32_t mask, vfloat16mf2x5_t maskedoff_tuple, const float16_t *base, size_t vl, int domain) {
  return __riscv_vlseg5e16_v_f16mf2x5_tum_ntl(mask, maskedoff_tuple, base, vl, __RISCV_NTLH_ALL);
}

vfloat16m1x5_t test_vlseg5e16_v_f16m1x5_tum_ntl_ALL(vbool16_t mask, vfloat16m1x5_t maskedoff_tuple, const float16_t *base, size_t vl, int domain) {
  return __riscv_vlseg5e16_v_f16m1x5_tum_ntl(mask, maskedoff_tuple, base, vl, __RISCV_NTLH_ALL);
}

vint16mf4x5_t test_vlseg5e16_v_i16mf4x5_tum_ntl_ALL(vbool64_t mask, vint16mf4x5_t maskedoff_tuple, const int16_t *base, size_t vl, int domain) {
  return __riscv_vlseg5e16_v_i16mf4x5_tum_ntl(mask, maskedoff_tuple, base, vl, __RISCV_NTLH_ALL);
}

vint16mf2x5_t test_vlseg5e16_v_i16mf2x5_tum_ntl_ALL(vbool32_t mask, vint16mf2x5_t maskedoff_tuple, const int16_t *base, size_t vl, int domain) {
  return __riscv_vlseg5e16_v_i16mf2x5_tum_ntl(mask, maskedoff_tuple, base, vl, __RISCV_NTLH_ALL);
}

vint16m1x5_t test_vlseg5e16_v_i16m1x5_tum_ntl_ALL(vbool16_t mask, vint16m1x5_t maskedoff_tuple, const int16_t *base, size_t vl, int domain) {
  return __riscv_vlseg5e16_v_i16m1x5_tum_ntl(mask, maskedoff_tuple, base, vl, __RISCV_NTLH_ALL);
}

vuint16mf4x5_t test_vlseg5e16_v_u16mf4x5_tum_ntl_ALL(vbool64_t mask, vuint16mf4x5_t maskedoff_tuple, const uint16_t *base, size_t vl, int domain) {
  return __riscv_vlseg5e16_v_u16mf4x5_tum_ntl(mask, maskedoff_tuple, base, vl, __RISCV_NTLH_ALL);
}

vuint16mf2x5_t test_vlseg5e16_v_u16mf2x5_tum_ntl_ALL(vbool32_t mask, vuint16mf2x5_t maskedoff_tuple, const uint16_t *base, size_t vl, int domain) {
  return __riscv_vlseg5e16_v_u16mf2x5_tum_ntl(mask, maskedoff_tuple, base, vl, __RISCV_NTLH_ALL);
}

vuint16m1x5_t test_vlseg5e16_v_u16m1x5_tum_ntl_ALL(vbool16_t mask, vuint16m1x5_t maskedoff_tuple, const uint16_t *base, size_t vl, int domain) {
  return __riscv_vlseg5e16_v_u16m1x5_tum_ntl(mask, maskedoff_tuple, base, vl, __RISCV_NTLH_ALL);
}

vfloat16mf4x5_t test_vlseg5e16_v_f16mf4x5_tumu_ntl_ALL(vbool64_t mask, vfloat16mf4x5_t maskedoff_tuple, const float16_t *base, size_t vl, int domain) {
  return __riscv_vlseg5e16_v_f16mf4x5_tumu_ntl(mask, maskedoff_tuple, base, vl, __RISCV_NTLH_ALL);
}

vfloat16mf2x5_t test_vlseg5e16_v_f16mf2x5_tumu_ntl_ALL(vbool32_t mask, vfloat16mf2x5_t maskedoff_tuple, const float16_t *base, size_t vl, int domain) {
  return __riscv_vlseg5e16_v_f16mf2x5_tumu_ntl(mask, maskedoff_tuple, base, vl, __RISCV_NTLH_ALL);
}

vfloat16m1x5_t test_vlseg5e16_v_f16m1x5_tumu_ntl_ALL(vbool16_t mask, vfloat16m1x5_t maskedoff_tuple, const float16_t *base, size_t vl, int domain) {
  return __riscv_vlseg5e16_v_f16m1x5_tumu_ntl(mask, maskedoff_tuple, base, vl, __RISCV_NTLH_ALL);
}

vint16mf4x5_t test_vlseg5e16_v_i16mf4x5_tumu_ntl_ALL(vbool64_t mask, vint16mf4x5_t maskedoff_tuple, const int16_t *base, size_t vl, int domain) {
  return __riscv_vlseg5e16_v_i16mf4x5_tumu_ntl(mask, maskedoff_tuple, base, vl, __RISCV_NTLH_ALL);
}

vint16mf2x5_t test_vlseg5e16_v_i16mf2x5_tumu_ntl_ALL(vbool32_t mask, vint16mf2x5_t maskedoff_tuple, const int16_t *base, size_t vl, int domain) {
  return __riscv_vlseg5e16_v_i16mf2x5_tumu_ntl(mask, maskedoff_tuple, base, vl, __RISCV_NTLH_ALL);
}

vint16m1x5_t test_vlseg5e16_v_i16m1x5_tumu_ntl_ALL(vbool16_t mask, vint16m1x5_t maskedoff_tuple, const int16_t *base, size_t vl, int domain) {
  return __riscv_vlseg5e16_v_i16m1x5_tumu_ntl(mask, maskedoff_tuple, base, vl, __RISCV_NTLH_ALL);
}

vuint16mf4x5_t test_vlseg5e16_v_u16mf4x5_tumu_ntl_ALL(vbool64_t mask, vuint16mf4x5_t maskedoff_tuple, const uint16_t *base, size_t vl, int domain) {
  return __riscv_vlseg5e16_v_u16mf4x5_tumu_ntl(mask, maskedoff_tuple, base, vl, __RISCV_NTLH_ALL);
}

vuint16mf2x5_t test_vlseg5e16_v_u16mf2x5_tumu_ntl_ALL(vbool32_t mask, vuint16mf2x5_t maskedoff_tuple, const uint16_t *base, size_t vl, int domain) {
  return __riscv_vlseg5e16_v_u16mf2x5_tumu_ntl(mask, maskedoff_tuple, base, vl, __RISCV_NTLH_ALL);
}

vuint16m1x5_t test_vlseg5e16_v_u16m1x5_tumu_ntl_ALL(vbool16_t mask, vuint16m1x5_t maskedoff_tuple, const uint16_t *base, size_t vl, int domain) {
  return __riscv_vlseg5e16_v_u16m1x5_tumu_ntl(mask, maskedoff_tuple, base, vl, __RISCV_NTLH_ALL);
}

vfloat16mf4x5_t test_vlseg5e16_v_f16mf4x5_mu_ntl_ALL(vbool64_t mask, vfloat16mf4x5_t maskedoff_tuple, const float16_t *base, size_t vl, int domain) {
  return __riscv_vlseg5e16_v_f16mf4x5_mu_ntl(mask, maskedoff_tuple, base, vl, __RISCV_NTLH_ALL);
}

vfloat16mf2x5_t test_vlseg5e16_v_f16mf2x5_mu_ntl_ALL(vbool32_t mask, vfloat16mf2x5_t maskedoff_tuple, const float16_t *base, size_t vl, int domain) {
  return __riscv_vlseg5e16_v_f16mf2x5_mu_ntl(mask, maskedoff_tuple, base, vl, __RISCV_NTLH_ALL);
}

vfloat16m1x5_t test_vlseg5e16_v_f16m1x5_mu_ntl_ALL(vbool16_t mask, vfloat16m1x5_t maskedoff_tuple, const float16_t *base, size_t vl, int domain) {
  return __riscv_vlseg5e16_v_f16m1x5_mu_ntl(mask, maskedoff_tuple, base, vl, __RISCV_NTLH_ALL);
}

vint16mf4x5_t test_vlseg5e16_v_i16mf4x5_mu_ntl_ALL(vbool64_t mask, vint16mf4x5_t maskedoff_tuple, const int16_t *base, size_t vl, int domain) {
  return __riscv_vlseg5e16_v_i16mf4x5_mu_ntl(mask, maskedoff_tuple, base, vl, __RISCV_NTLH_ALL);
}

vint16mf2x5_t test_vlseg5e16_v_i16mf2x5_mu_ntl_ALL(vbool32_t mask, vint16mf2x5_t maskedoff_tuple, const int16_t *base, size_t vl, int domain) {
  return __riscv_vlseg5e16_v_i16mf2x5_mu_ntl(mask, maskedoff_tuple, base, vl, __RISCV_NTLH_ALL);
}

vint16m1x5_t test_vlseg5e16_v_i16m1x5_mu_ntl_ALL(vbool16_t mask, vint16m1x5_t maskedoff_tuple, const int16_t *base, size_t vl, int domain) {
  return __riscv_vlseg5e16_v_i16m1x5_mu_ntl(mask, maskedoff_tuple, base, vl, __RISCV_NTLH_ALL);
}

vuint16mf4x5_t test_vlseg5e16_v_u16mf4x5_mu_ntl_ALL(vbool64_t mask, vuint16mf4x5_t maskedoff_tuple, const uint16_t *base, size_t vl, int domain) {
  return __riscv_vlseg5e16_v_u16mf4x5_mu_ntl(mask, maskedoff_tuple, base, vl, __RISCV_NTLH_ALL);
}

vuint16mf2x5_t test_vlseg5e16_v_u16mf2x5_mu_ntl_ALL(vbool32_t mask, vuint16mf2x5_t maskedoff_tuple, const uint16_t *base, size_t vl, int domain) {
  return __riscv_vlseg5e16_v_u16mf2x5_mu_ntl(mask, maskedoff_tuple, base, vl, __RISCV_NTLH_ALL);
}

vuint16m1x5_t test_vlseg5e16_v_u16m1x5_mu_ntl_ALL(vbool16_t mask, vuint16m1x5_t maskedoff_tuple, const uint16_t *base, size_t vl, int domain) {
  return __riscv_vlseg5e16_v_u16m1x5_mu_ntl(mask, maskedoff_tuple, base, vl, __RISCV_NTLH_ALL);
}

