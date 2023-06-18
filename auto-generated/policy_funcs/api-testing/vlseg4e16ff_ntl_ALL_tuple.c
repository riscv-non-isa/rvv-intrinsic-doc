#include <stdint.h>
#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
#include <riscv_ntlh.h>

vfloat16mf4x4_t test_vlseg4e16ff_v_f16mf4x4_tu_ntl_ALL(vfloat16mf4x4_t maskedoff_tuple, const float16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg4e16ff_v_f16mf4x4_tu_ntl(maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL);
}

vfloat16mf2x4_t test_vlseg4e16ff_v_f16mf2x4_tu_ntl_ALL(vfloat16mf2x4_t maskedoff_tuple, const float16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg4e16ff_v_f16mf2x4_tu_ntl(maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL);
}

vfloat16m1x4_t test_vlseg4e16ff_v_f16m1x4_tu_ntl_ALL(vfloat16m1x4_t maskedoff_tuple, const float16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg4e16ff_v_f16m1x4_tu_ntl(maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL);
}

vfloat16m2x4_t test_vlseg4e16ff_v_f16m2x4_tu_ntl_ALL(vfloat16m2x4_t maskedoff_tuple, const float16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg4e16ff_v_f16m2x4_tu_ntl(maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL);
}

vint16mf4x4_t test_vlseg4e16ff_v_i16mf4x4_tu_ntl_ALL(vint16mf4x4_t maskedoff_tuple, const int16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg4e16ff_v_i16mf4x4_tu_ntl(maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL);
}

vint16mf2x4_t test_vlseg4e16ff_v_i16mf2x4_tu_ntl_ALL(vint16mf2x4_t maskedoff_tuple, const int16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg4e16ff_v_i16mf2x4_tu_ntl(maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL);
}

vint16m1x4_t test_vlseg4e16ff_v_i16m1x4_tu_ntl_ALL(vint16m1x4_t maskedoff_tuple, const int16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg4e16ff_v_i16m1x4_tu_ntl(maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL);
}

vint16m2x4_t test_vlseg4e16ff_v_i16m2x4_tu_ntl_ALL(vint16m2x4_t maskedoff_tuple, const int16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg4e16ff_v_i16m2x4_tu_ntl(maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL);
}

vuint16mf4x4_t test_vlseg4e16ff_v_u16mf4x4_tu_ntl_ALL(vuint16mf4x4_t maskedoff_tuple, const uint16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg4e16ff_v_u16mf4x4_tu_ntl(maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL);
}

vuint16mf2x4_t test_vlseg4e16ff_v_u16mf2x4_tu_ntl_ALL(vuint16mf2x4_t maskedoff_tuple, const uint16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg4e16ff_v_u16mf2x4_tu_ntl(maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL);
}

vuint16m1x4_t test_vlseg4e16ff_v_u16m1x4_tu_ntl_ALL(vuint16m1x4_t maskedoff_tuple, const uint16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg4e16ff_v_u16m1x4_tu_ntl(maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL);
}

vuint16m2x4_t test_vlseg4e16ff_v_u16m2x4_tu_ntl_ALL(vuint16m2x4_t maskedoff_tuple, const uint16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg4e16ff_v_u16m2x4_tu_ntl(maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL);
}

vfloat16mf4x4_t test_vlseg4e16ff_v_f16mf4x4_tum_ntl_ALL(vbool64_t mask, vfloat16mf4x4_t maskedoff_tuple, const float16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg4e16ff_v_f16mf4x4_tum_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL);
}

vfloat16mf2x4_t test_vlseg4e16ff_v_f16mf2x4_tum_ntl_ALL(vbool32_t mask, vfloat16mf2x4_t maskedoff_tuple, const float16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg4e16ff_v_f16mf2x4_tum_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL);
}

vfloat16m1x4_t test_vlseg4e16ff_v_f16m1x4_tum_ntl_ALL(vbool16_t mask, vfloat16m1x4_t maskedoff_tuple, const float16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg4e16ff_v_f16m1x4_tum_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL);
}

vfloat16m2x4_t test_vlseg4e16ff_v_f16m2x4_tum_ntl_ALL(vbool8_t mask, vfloat16m2x4_t maskedoff_tuple, const float16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg4e16ff_v_f16m2x4_tum_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL);
}

vint16mf4x4_t test_vlseg4e16ff_v_i16mf4x4_tum_ntl_ALL(vbool64_t mask, vint16mf4x4_t maskedoff_tuple, const int16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg4e16ff_v_i16mf4x4_tum_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL);
}

vint16mf2x4_t test_vlseg4e16ff_v_i16mf2x4_tum_ntl_ALL(vbool32_t mask, vint16mf2x4_t maskedoff_tuple, const int16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg4e16ff_v_i16mf2x4_tum_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL);
}

vint16m1x4_t test_vlseg4e16ff_v_i16m1x4_tum_ntl_ALL(vbool16_t mask, vint16m1x4_t maskedoff_tuple, const int16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg4e16ff_v_i16m1x4_tum_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL);
}

vint16m2x4_t test_vlseg4e16ff_v_i16m2x4_tum_ntl_ALL(vbool8_t mask, vint16m2x4_t maskedoff_tuple, const int16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg4e16ff_v_i16m2x4_tum_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL);
}

vuint16mf4x4_t test_vlseg4e16ff_v_u16mf4x4_tum_ntl_ALL(vbool64_t mask, vuint16mf4x4_t maskedoff_tuple, const uint16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg4e16ff_v_u16mf4x4_tum_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL);
}

vuint16mf2x4_t test_vlseg4e16ff_v_u16mf2x4_tum_ntl_ALL(vbool32_t mask, vuint16mf2x4_t maskedoff_tuple, const uint16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg4e16ff_v_u16mf2x4_tum_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL);
}

vuint16m1x4_t test_vlseg4e16ff_v_u16m1x4_tum_ntl_ALL(vbool16_t mask, vuint16m1x4_t maskedoff_tuple, const uint16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg4e16ff_v_u16m1x4_tum_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL);
}

vuint16m2x4_t test_vlseg4e16ff_v_u16m2x4_tum_ntl_ALL(vbool8_t mask, vuint16m2x4_t maskedoff_tuple, const uint16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg4e16ff_v_u16m2x4_tum_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL);
}

vfloat16mf4x4_t test_vlseg4e16ff_v_f16mf4x4_tumu_ntl_ALL(vbool64_t mask, vfloat16mf4x4_t maskedoff_tuple, const float16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg4e16ff_v_f16mf4x4_tumu_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL);
}

vfloat16mf2x4_t test_vlseg4e16ff_v_f16mf2x4_tumu_ntl_ALL(vbool32_t mask, vfloat16mf2x4_t maskedoff_tuple, const float16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg4e16ff_v_f16mf2x4_tumu_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL);
}

vfloat16m1x4_t test_vlseg4e16ff_v_f16m1x4_tumu_ntl_ALL(vbool16_t mask, vfloat16m1x4_t maskedoff_tuple, const float16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg4e16ff_v_f16m1x4_tumu_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL);
}

vfloat16m2x4_t test_vlseg4e16ff_v_f16m2x4_tumu_ntl_ALL(vbool8_t mask, vfloat16m2x4_t maskedoff_tuple, const float16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg4e16ff_v_f16m2x4_tumu_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL);
}

vint16mf4x4_t test_vlseg4e16ff_v_i16mf4x4_tumu_ntl_ALL(vbool64_t mask, vint16mf4x4_t maskedoff_tuple, const int16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg4e16ff_v_i16mf4x4_tumu_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL);
}

vint16mf2x4_t test_vlseg4e16ff_v_i16mf2x4_tumu_ntl_ALL(vbool32_t mask, vint16mf2x4_t maskedoff_tuple, const int16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg4e16ff_v_i16mf2x4_tumu_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL);
}

vint16m1x4_t test_vlseg4e16ff_v_i16m1x4_tumu_ntl_ALL(vbool16_t mask, vint16m1x4_t maskedoff_tuple, const int16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg4e16ff_v_i16m1x4_tumu_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL);
}

vint16m2x4_t test_vlseg4e16ff_v_i16m2x4_tumu_ntl_ALL(vbool8_t mask, vint16m2x4_t maskedoff_tuple, const int16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg4e16ff_v_i16m2x4_tumu_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL);
}

vuint16mf4x4_t test_vlseg4e16ff_v_u16mf4x4_tumu_ntl_ALL(vbool64_t mask, vuint16mf4x4_t maskedoff_tuple, const uint16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg4e16ff_v_u16mf4x4_tumu_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL);
}

vuint16mf2x4_t test_vlseg4e16ff_v_u16mf2x4_tumu_ntl_ALL(vbool32_t mask, vuint16mf2x4_t maskedoff_tuple, const uint16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg4e16ff_v_u16mf2x4_tumu_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL);
}

vuint16m1x4_t test_vlseg4e16ff_v_u16m1x4_tumu_ntl_ALL(vbool16_t mask, vuint16m1x4_t maskedoff_tuple, const uint16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg4e16ff_v_u16m1x4_tumu_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL);
}

vuint16m2x4_t test_vlseg4e16ff_v_u16m2x4_tumu_ntl_ALL(vbool8_t mask, vuint16m2x4_t maskedoff_tuple, const uint16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg4e16ff_v_u16m2x4_tumu_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL);
}

vfloat16mf4x4_t test_vlseg4e16ff_v_f16mf4x4_mu_ntl_ALL(vbool64_t mask, vfloat16mf4x4_t maskedoff_tuple, const float16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg4e16ff_v_f16mf4x4_mu_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL);
}

vfloat16mf2x4_t test_vlseg4e16ff_v_f16mf2x4_mu_ntl_ALL(vbool32_t mask, vfloat16mf2x4_t maskedoff_tuple, const float16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg4e16ff_v_f16mf2x4_mu_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL);
}

vfloat16m1x4_t test_vlseg4e16ff_v_f16m1x4_mu_ntl_ALL(vbool16_t mask, vfloat16m1x4_t maskedoff_tuple, const float16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg4e16ff_v_f16m1x4_mu_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL);
}

vfloat16m2x4_t test_vlseg4e16ff_v_f16m2x4_mu_ntl_ALL(vbool8_t mask, vfloat16m2x4_t maskedoff_tuple, const float16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg4e16ff_v_f16m2x4_mu_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL);
}

vint16mf4x4_t test_vlseg4e16ff_v_i16mf4x4_mu_ntl_ALL(vbool64_t mask, vint16mf4x4_t maskedoff_tuple, const int16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg4e16ff_v_i16mf4x4_mu_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL);
}

vint16mf2x4_t test_vlseg4e16ff_v_i16mf2x4_mu_ntl_ALL(vbool32_t mask, vint16mf2x4_t maskedoff_tuple, const int16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg4e16ff_v_i16mf2x4_mu_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL);
}

vint16m1x4_t test_vlseg4e16ff_v_i16m1x4_mu_ntl_ALL(vbool16_t mask, vint16m1x4_t maskedoff_tuple, const int16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg4e16ff_v_i16m1x4_mu_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL);
}

vint16m2x4_t test_vlseg4e16ff_v_i16m2x4_mu_ntl_ALL(vbool8_t mask, vint16m2x4_t maskedoff_tuple, const int16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg4e16ff_v_i16m2x4_mu_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL);
}

vuint16mf4x4_t test_vlseg4e16ff_v_u16mf4x4_mu_ntl_ALL(vbool64_t mask, vuint16mf4x4_t maskedoff_tuple, const uint16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg4e16ff_v_u16mf4x4_mu_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL);
}

vuint16mf2x4_t test_vlseg4e16ff_v_u16mf2x4_mu_ntl_ALL(vbool32_t mask, vuint16mf2x4_t maskedoff_tuple, const uint16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg4e16ff_v_u16mf2x4_mu_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL);
}

vuint16m1x4_t test_vlseg4e16ff_v_u16m1x4_mu_ntl_ALL(vbool16_t mask, vuint16m1x4_t maskedoff_tuple, const uint16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg4e16ff_v_u16m1x4_mu_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL);
}

vuint16m2x4_t test_vlseg4e16ff_v_u16m2x4_mu_ntl_ALL(vbool8_t mask, vuint16m2x4_t maskedoff_tuple, const uint16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg4e16ff_v_u16m2x4_mu_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL);
}

