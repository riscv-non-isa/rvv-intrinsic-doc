#include <stdint.h>
#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
#include <riscv_ntlh.h>

vfloat16mf4x6_t test_vlseg6e16_v_f16mf4x6_tu_ntl_P1(vfloat16mf4x6_t maskedoff_tuple, const float16_t *base, size_t vl, int domain) {
  return __riscv_vlseg6e16_v_f16mf4x6_tu_ntl(maskedoff_tuple, base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vfloat16mf2x6_t test_vlseg6e16_v_f16mf2x6_tu_ntl_P1(vfloat16mf2x6_t maskedoff_tuple, const float16_t *base, size_t vl, int domain) {
  return __riscv_vlseg6e16_v_f16mf2x6_tu_ntl(maskedoff_tuple, base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vfloat16m1x6_t test_vlseg6e16_v_f16m1x6_tu_ntl_P1(vfloat16m1x6_t maskedoff_tuple, const float16_t *base, size_t vl, int domain) {
  return __riscv_vlseg6e16_v_f16m1x6_tu_ntl(maskedoff_tuple, base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint16mf4x6_t test_vlseg6e16_v_i16mf4x6_tu_ntl_P1(vint16mf4x6_t maskedoff_tuple, const int16_t *base, size_t vl, int domain) {
  return __riscv_vlseg6e16_v_i16mf4x6_tu_ntl(maskedoff_tuple, base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint16mf2x6_t test_vlseg6e16_v_i16mf2x6_tu_ntl_P1(vint16mf2x6_t maskedoff_tuple, const int16_t *base, size_t vl, int domain) {
  return __riscv_vlseg6e16_v_i16mf2x6_tu_ntl(maskedoff_tuple, base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint16m1x6_t test_vlseg6e16_v_i16m1x6_tu_ntl_P1(vint16m1x6_t maskedoff_tuple, const int16_t *base, size_t vl, int domain) {
  return __riscv_vlseg6e16_v_i16m1x6_tu_ntl(maskedoff_tuple, base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint16mf4x6_t test_vlseg6e16_v_u16mf4x6_tu_ntl_P1(vuint16mf4x6_t maskedoff_tuple, const uint16_t *base, size_t vl, int domain) {
  return __riscv_vlseg6e16_v_u16mf4x6_tu_ntl(maskedoff_tuple, base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint16mf2x6_t test_vlseg6e16_v_u16mf2x6_tu_ntl_P1(vuint16mf2x6_t maskedoff_tuple, const uint16_t *base, size_t vl, int domain) {
  return __riscv_vlseg6e16_v_u16mf2x6_tu_ntl(maskedoff_tuple, base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint16m1x6_t test_vlseg6e16_v_u16m1x6_tu_ntl_P1(vuint16m1x6_t maskedoff_tuple, const uint16_t *base, size_t vl, int domain) {
  return __riscv_vlseg6e16_v_u16m1x6_tu_ntl(maskedoff_tuple, base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vfloat16mf4x6_t test_vlseg6e16_v_f16mf4x6_tum_ntl_P1(vbool64_t mask, vfloat16mf4x6_t maskedoff_tuple, const float16_t *base, size_t vl, int domain) {
  return __riscv_vlseg6e16_v_f16mf4x6_tum_ntl(mask, maskedoff_tuple, base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vfloat16mf2x6_t test_vlseg6e16_v_f16mf2x6_tum_ntl_P1(vbool32_t mask, vfloat16mf2x6_t maskedoff_tuple, const float16_t *base, size_t vl, int domain) {
  return __riscv_vlseg6e16_v_f16mf2x6_tum_ntl(mask, maskedoff_tuple, base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vfloat16m1x6_t test_vlseg6e16_v_f16m1x6_tum_ntl_P1(vbool16_t mask, vfloat16m1x6_t maskedoff_tuple, const float16_t *base, size_t vl, int domain) {
  return __riscv_vlseg6e16_v_f16m1x6_tum_ntl(mask, maskedoff_tuple, base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint16mf4x6_t test_vlseg6e16_v_i16mf4x6_tum_ntl_P1(vbool64_t mask, vint16mf4x6_t maskedoff_tuple, const int16_t *base, size_t vl, int domain) {
  return __riscv_vlseg6e16_v_i16mf4x6_tum_ntl(mask, maskedoff_tuple, base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint16mf2x6_t test_vlseg6e16_v_i16mf2x6_tum_ntl_P1(vbool32_t mask, vint16mf2x6_t maskedoff_tuple, const int16_t *base, size_t vl, int domain) {
  return __riscv_vlseg6e16_v_i16mf2x6_tum_ntl(mask, maskedoff_tuple, base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint16m1x6_t test_vlseg6e16_v_i16m1x6_tum_ntl_P1(vbool16_t mask, vint16m1x6_t maskedoff_tuple, const int16_t *base, size_t vl, int domain) {
  return __riscv_vlseg6e16_v_i16m1x6_tum_ntl(mask, maskedoff_tuple, base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint16mf4x6_t test_vlseg6e16_v_u16mf4x6_tum_ntl_P1(vbool64_t mask, vuint16mf4x6_t maskedoff_tuple, const uint16_t *base, size_t vl, int domain) {
  return __riscv_vlseg6e16_v_u16mf4x6_tum_ntl(mask, maskedoff_tuple, base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint16mf2x6_t test_vlseg6e16_v_u16mf2x6_tum_ntl_P1(vbool32_t mask, vuint16mf2x6_t maskedoff_tuple, const uint16_t *base, size_t vl, int domain) {
  return __riscv_vlseg6e16_v_u16mf2x6_tum_ntl(mask, maskedoff_tuple, base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint16m1x6_t test_vlseg6e16_v_u16m1x6_tum_ntl_P1(vbool16_t mask, vuint16m1x6_t maskedoff_tuple, const uint16_t *base, size_t vl, int domain) {
  return __riscv_vlseg6e16_v_u16m1x6_tum_ntl(mask, maskedoff_tuple, base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vfloat16mf4x6_t test_vlseg6e16_v_f16mf4x6_tumu_ntl_P1(vbool64_t mask, vfloat16mf4x6_t maskedoff_tuple, const float16_t *base, size_t vl, int domain) {
  return __riscv_vlseg6e16_v_f16mf4x6_tumu_ntl(mask, maskedoff_tuple, base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vfloat16mf2x6_t test_vlseg6e16_v_f16mf2x6_tumu_ntl_P1(vbool32_t mask, vfloat16mf2x6_t maskedoff_tuple, const float16_t *base, size_t vl, int domain) {
  return __riscv_vlseg6e16_v_f16mf2x6_tumu_ntl(mask, maskedoff_tuple, base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vfloat16m1x6_t test_vlseg6e16_v_f16m1x6_tumu_ntl_P1(vbool16_t mask, vfloat16m1x6_t maskedoff_tuple, const float16_t *base, size_t vl, int domain) {
  return __riscv_vlseg6e16_v_f16m1x6_tumu_ntl(mask, maskedoff_tuple, base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint16mf4x6_t test_vlseg6e16_v_i16mf4x6_tumu_ntl_P1(vbool64_t mask, vint16mf4x6_t maskedoff_tuple, const int16_t *base, size_t vl, int domain) {
  return __riscv_vlseg6e16_v_i16mf4x6_tumu_ntl(mask, maskedoff_tuple, base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint16mf2x6_t test_vlseg6e16_v_i16mf2x6_tumu_ntl_P1(vbool32_t mask, vint16mf2x6_t maskedoff_tuple, const int16_t *base, size_t vl, int domain) {
  return __riscv_vlseg6e16_v_i16mf2x6_tumu_ntl(mask, maskedoff_tuple, base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint16m1x6_t test_vlseg6e16_v_i16m1x6_tumu_ntl_P1(vbool16_t mask, vint16m1x6_t maskedoff_tuple, const int16_t *base, size_t vl, int domain) {
  return __riscv_vlseg6e16_v_i16m1x6_tumu_ntl(mask, maskedoff_tuple, base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint16mf4x6_t test_vlseg6e16_v_u16mf4x6_tumu_ntl_P1(vbool64_t mask, vuint16mf4x6_t maskedoff_tuple, const uint16_t *base, size_t vl, int domain) {
  return __riscv_vlseg6e16_v_u16mf4x6_tumu_ntl(mask, maskedoff_tuple, base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint16mf2x6_t test_vlseg6e16_v_u16mf2x6_tumu_ntl_P1(vbool32_t mask, vuint16mf2x6_t maskedoff_tuple, const uint16_t *base, size_t vl, int domain) {
  return __riscv_vlseg6e16_v_u16mf2x6_tumu_ntl(mask, maskedoff_tuple, base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint16m1x6_t test_vlseg6e16_v_u16m1x6_tumu_ntl_P1(vbool16_t mask, vuint16m1x6_t maskedoff_tuple, const uint16_t *base, size_t vl, int domain) {
  return __riscv_vlseg6e16_v_u16m1x6_tumu_ntl(mask, maskedoff_tuple, base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vfloat16mf4x6_t test_vlseg6e16_v_f16mf4x6_mu_ntl_P1(vbool64_t mask, vfloat16mf4x6_t maskedoff_tuple, const float16_t *base, size_t vl, int domain) {
  return __riscv_vlseg6e16_v_f16mf4x6_mu_ntl(mask, maskedoff_tuple, base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vfloat16mf2x6_t test_vlseg6e16_v_f16mf2x6_mu_ntl_P1(vbool32_t mask, vfloat16mf2x6_t maskedoff_tuple, const float16_t *base, size_t vl, int domain) {
  return __riscv_vlseg6e16_v_f16mf2x6_mu_ntl(mask, maskedoff_tuple, base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vfloat16m1x6_t test_vlseg6e16_v_f16m1x6_mu_ntl_P1(vbool16_t mask, vfloat16m1x6_t maskedoff_tuple, const float16_t *base, size_t vl, int domain) {
  return __riscv_vlseg6e16_v_f16m1x6_mu_ntl(mask, maskedoff_tuple, base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint16mf4x6_t test_vlseg6e16_v_i16mf4x6_mu_ntl_P1(vbool64_t mask, vint16mf4x6_t maskedoff_tuple, const int16_t *base, size_t vl, int domain) {
  return __riscv_vlseg6e16_v_i16mf4x6_mu_ntl(mask, maskedoff_tuple, base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint16mf2x6_t test_vlseg6e16_v_i16mf2x6_mu_ntl_P1(vbool32_t mask, vint16mf2x6_t maskedoff_tuple, const int16_t *base, size_t vl, int domain) {
  return __riscv_vlseg6e16_v_i16mf2x6_mu_ntl(mask, maskedoff_tuple, base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint16m1x6_t test_vlseg6e16_v_i16m1x6_mu_ntl_P1(vbool16_t mask, vint16m1x6_t maskedoff_tuple, const int16_t *base, size_t vl, int domain) {
  return __riscv_vlseg6e16_v_i16m1x6_mu_ntl(mask, maskedoff_tuple, base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint16mf4x6_t test_vlseg6e16_v_u16mf4x6_mu_ntl_P1(vbool64_t mask, vuint16mf4x6_t maskedoff_tuple, const uint16_t *base, size_t vl, int domain) {
  return __riscv_vlseg6e16_v_u16mf4x6_mu_ntl(mask, maskedoff_tuple, base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint16mf2x6_t test_vlseg6e16_v_u16mf2x6_mu_ntl_P1(vbool32_t mask, vuint16mf2x6_t maskedoff_tuple, const uint16_t *base, size_t vl, int domain) {
  return __riscv_vlseg6e16_v_u16mf2x6_mu_ntl(mask, maskedoff_tuple, base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint16m1x6_t test_vlseg6e16_v_u16m1x6_mu_ntl_P1(vbool16_t mask, vuint16m1x6_t maskedoff_tuple, const uint16_t *base, size_t vl, int domain) {
  return __riscv_vlseg6e16_v_u16m1x6_mu_ntl(mask, maskedoff_tuple, base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

