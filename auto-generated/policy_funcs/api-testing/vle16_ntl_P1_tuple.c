#include <stdint.h>
#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
#include <riscv_ntlh.h>

vfloat16mf4_t test_vle16_v_f16mf4_tu_ntl_P1(vfloat16mf4_t maskedoff, const float16_t *base, size_t vl, int domain) {
  return __riscv_vle16_v_f16mf4_tu_ntl(maskedoff, base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vfloat16mf2_t test_vle16_v_f16mf2_tu_ntl_P1(vfloat16mf2_t maskedoff, const float16_t *base, size_t vl, int domain) {
  return __riscv_vle16_v_f16mf2_tu_ntl(maskedoff, base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vfloat16m1_t test_vle16_v_f16m1_tu_ntl_P1(vfloat16m1_t maskedoff, const float16_t *base, size_t vl, int domain) {
  return __riscv_vle16_v_f16m1_tu_ntl(maskedoff, base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vfloat16m2_t test_vle16_v_f16m2_tu_ntl_P1(vfloat16m2_t maskedoff, const float16_t *base, size_t vl, int domain) {
  return __riscv_vle16_v_f16m2_tu_ntl(maskedoff, base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vfloat16m4_t test_vle16_v_f16m4_tu_ntl_P1(vfloat16m4_t maskedoff, const float16_t *base, size_t vl, int domain) {
  return __riscv_vle16_v_f16m4_tu_ntl(maskedoff, base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vfloat16m8_t test_vle16_v_f16m8_tu_ntl_P1(vfloat16m8_t maskedoff, const float16_t *base, size_t vl, int domain) {
  return __riscv_vle16_v_f16m8_tu_ntl(maskedoff, base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint16mf4_t test_vle16_v_i16mf4_tu_ntl_P1(vint16mf4_t maskedoff, const int16_t *base, size_t vl, int domain) {
  return __riscv_vle16_v_i16mf4_tu_ntl(maskedoff, base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint16mf2_t test_vle16_v_i16mf2_tu_ntl_P1(vint16mf2_t maskedoff, const int16_t *base, size_t vl, int domain) {
  return __riscv_vle16_v_i16mf2_tu_ntl(maskedoff, base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint16m1_t test_vle16_v_i16m1_tu_ntl_P1(vint16m1_t maskedoff, const int16_t *base, size_t vl, int domain) {
  return __riscv_vle16_v_i16m1_tu_ntl(maskedoff, base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint16m2_t test_vle16_v_i16m2_tu_ntl_P1(vint16m2_t maskedoff, const int16_t *base, size_t vl, int domain) {
  return __riscv_vle16_v_i16m2_tu_ntl(maskedoff, base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint16m4_t test_vle16_v_i16m4_tu_ntl_P1(vint16m4_t maskedoff, const int16_t *base, size_t vl, int domain) {
  return __riscv_vle16_v_i16m4_tu_ntl(maskedoff, base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint16m8_t test_vle16_v_i16m8_tu_ntl_P1(vint16m8_t maskedoff, const int16_t *base, size_t vl, int domain) {
  return __riscv_vle16_v_i16m8_tu_ntl(maskedoff, base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint16mf4_t test_vle16_v_u16mf4_tu_ntl_P1(vuint16mf4_t maskedoff, const uint16_t *base, size_t vl, int domain) {
  return __riscv_vle16_v_u16mf4_tu_ntl(maskedoff, base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint16mf2_t test_vle16_v_u16mf2_tu_ntl_P1(vuint16mf2_t maskedoff, const uint16_t *base, size_t vl, int domain) {
  return __riscv_vle16_v_u16mf2_tu_ntl(maskedoff, base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint16m1_t test_vle16_v_u16m1_tu_ntl_P1(vuint16m1_t maskedoff, const uint16_t *base, size_t vl, int domain) {
  return __riscv_vle16_v_u16m1_tu_ntl(maskedoff, base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint16m2_t test_vle16_v_u16m2_tu_ntl_P1(vuint16m2_t maskedoff, const uint16_t *base, size_t vl, int domain) {
  return __riscv_vle16_v_u16m2_tu_ntl(maskedoff, base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint16m4_t test_vle16_v_u16m4_tu_ntl_P1(vuint16m4_t maskedoff, const uint16_t *base, size_t vl, int domain) {
  return __riscv_vle16_v_u16m4_tu_ntl(maskedoff, base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint16m8_t test_vle16_v_u16m8_tu_ntl_P1(vuint16m8_t maskedoff, const uint16_t *base, size_t vl, int domain) {
  return __riscv_vle16_v_u16m8_tu_ntl(maskedoff, base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vfloat16mf4_t test_vle16_v_f16mf4_tum_ntl_P1(vbool64_t mask, vfloat16mf4_t maskedoff, const float16_t *base, size_t vl, int domain) {
  return __riscv_vle16_v_f16mf4_tum_ntl(mask, maskedoff, base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vfloat16mf2_t test_vle16_v_f16mf2_tum_ntl_P1(vbool32_t mask, vfloat16mf2_t maskedoff, const float16_t *base, size_t vl, int domain) {
  return __riscv_vle16_v_f16mf2_tum_ntl(mask, maskedoff, base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vfloat16m1_t test_vle16_v_f16m1_tum_ntl_P1(vbool16_t mask, vfloat16m1_t maskedoff, const float16_t *base, size_t vl, int domain) {
  return __riscv_vle16_v_f16m1_tum_ntl(mask, maskedoff, base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vfloat16m2_t test_vle16_v_f16m2_tum_ntl_P1(vbool8_t mask, vfloat16m2_t maskedoff, const float16_t *base, size_t vl, int domain) {
  return __riscv_vle16_v_f16m2_tum_ntl(mask, maskedoff, base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vfloat16m4_t test_vle16_v_f16m4_tum_ntl_P1(vbool4_t mask, vfloat16m4_t maskedoff, const float16_t *base, size_t vl, int domain) {
  return __riscv_vle16_v_f16m4_tum_ntl(mask, maskedoff, base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vfloat16m8_t test_vle16_v_f16m8_tum_ntl_P1(vbool2_t mask, vfloat16m8_t maskedoff, const float16_t *base, size_t vl, int domain) {
  return __riscv_vle16_v_f16m8_tum_ntl(mask, maskedoff, base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint16mf4_t test_vle16_v_i16mf4_tum_ntl_P1(vbool64_t mask, vint16mf4_t maskedoff, const int16_t *base, size_t vl, int domain) {
  return __riscv_vle16_v_i16mf4_tum_ntl(mask, maskedoff, base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint16mf2_t test_vle16_v_i16mf2_tum_ntl_P1(vbool32_t mask, vint16mf2_t maskedoff, const int16_t *base, size_t vl, int domain) {
  return __riscv_vle16_v_i16mf2_tum_ntl(mask, maskedoff, base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint16m1_t test_vle16_v_i16m1_tum_ntl_P1(vbool16_t mask, vint16m1_t maskedoff, const int16_t *base, size_t vl, int domain) {
  return __riscv_vle16_v_i16m1_tum_ntl(mask, maskedoff, base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint16m2_t test_vle16_v_i16m2_tum_ntl_P1(vbool8_t mask, vint16m2_t maskedoff, const int16_t *base, size_t vl, int domain) {
  return __riscv_vle16_v_i16m2_tum_ntl(mask, maskedoff, base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint16m4_t test_vle16_v_i16m4_tum_ntl_P1(vbool4_t mask, vint16m4_t maskedoff, const int16_t *base, size_t vl, int domain) {
  return __riscv_vle16_v_i16m4_tum_ntl(mask, maskedoff, base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint16m8_t test_vle16_v_i16m8_tum_ntl_P1(vbool2_t mask, vint16m8_t maskedoff, const int16_t *base, size_t vl, int domain) {
  return __riscv_vle16_v_i16m8_tum_ntl(mask, maskedoff, base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint16mf4_t test_vle16_v_u16mf4_tum_ntl_P1(vbool64_t mask, vuint16mf4_t maskedoff, const uint16_t *base, size_t vl, int domain) {
  return __riscv_vle16_v_u16mf4_tum_ntl(mask, maskedoff, base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint16mf2_t test_vle16_v_u16mf2_tum_ntl_P1(vbool32_t mask, vuint16mf2_t maskedoff, const uint16_t *base, size_t vl, int domain) {
  return __riscv_vle16_v_u16mf2_tum_ntl(mask, maskedoff, base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint16m1_t test_vle16_v_u16m1_tum_ntl_P1(vbool16_t mask, vuint16m1_t maskedoff, const uint16_t *base, size_t vl, int domain) {
  return __riscv_vle16_v_u16m1_tum_ntl(mask, maskedoff, base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint16m2_t test_vle16_v_u16m2_tum_ntl_P1(vbool8_t mask, vuint16m2_t maskedoff, const uint16_t *base, size_t vl, int domain) {
  return __riscv_vle16_v_u16m2_tum_ntl(mask, maskedoff, base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint16m4_t test_vle16_v_u16m4_tum_ntl_P1(vbool4_t mask, vuint16m4_t maskedoff, const uint16_t *base, size_t vl, int domain) {
  return __riscv_vle16_v_u16m4_tum_ntl(mask, maskedoff, base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint16m8_t test_vle16_v_u16m8_tum_ntl_P1(vbool2_t mask, vuint16m8_t maskedoff, const uint16_t *base, size_t vl, int domain) {
  return __riscv_vle16_v_u16m8_tum_ntl(mask, maskedoff, base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vfloat16mf4_t test_vle16_v_f16mf4_tumu_ntl_P1(vbool64_t mask, vfloat16mf4_t maskedoff, const float16_t *base, size_t vl, int domain) {
  return __riscv_vle16_v_f16mf4_tumu_ntl(mask, maskedoff, base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vfloat16mf2_t test_vle16_v_f16mf2_tumu_ntl_P1(vbool32_t mask, vfloat16mf2_t maskedoff, const float16_t *base, size_t vl, int domain) {
  return __riscv_vle16_v_f16mf2_tumu_ntl(mask, maskedoff, base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vfloat16m1_t test_vle16_v_f16m1_tumu_ntl_P1(vbool16_t mask, vfloat16m1_t maskedoff, const float16_t *base, size_t vl, int domain) {
  return __riscv_vle16_v_f16m1_tumu_ntl(mask, maskedoff, base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vfloat16m2_t test_vle16_v_f16m2_tumu_ntl_P1(vbool8_t mask, vfloat16m2_t maskedoff, const float16_t *base, size_t vl, int domain) {
  return __riscv_vle16_v_f16m2_tumu_ntl(mask, maskedoff, base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vfloat16m4_t test_vle16_v_f16m4_tumu_ntl_P1(vbool4_t mask, vfloat16m4_t maskedoff, const float16_t *base, size_t vl, int domain) {
  return __riscv_vle16_v_f16m4_tumu_ntl(mask, maskedoff, base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vfloat16m8_t test_vle16_v_f16m8_tumu_ntl_P1(vbool2_t mask, vfloat16m8_t maskedoff, const float16_t *base, size_t vl, int domain) {
  return __riscv_vle16_v_f16m8_tumu_ntl(mask, maskedoff, base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint16mf4_t test_vle16_v_i16mf4_tumu_ntl_P1(vbool64_t mask, vint16mf4_t maskedoff, const int16_t *base, size_t vl, int domain) {
  return __riscv_vle16_v_i16mf4_tumu_ntl(mask, maskedoff, base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint16mf2_t test_vle16_v_i16mf2_tumu_ntl_P1(vbool32_t mask, vint16mf2_t maskedoff, const int16_t *base, size_t vl, int domain) {
  return __riscv_vle16_v_i16mf2_tumu_ntl(mask, maskedoff, base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint16m1_t test_vle16_v_i16m1_tumu_ntl_P1(vbool16_t mask, vint16m1_t maskedoff, const int16_t *base, size_t vl, int domain) {
  return __riscv_vle16_v_i16m1_tumu_ntl(mask, maskedoff, base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint16m2_t test_vle16_v_i16m2_tumu_ntl_P1(vbool8_t mask, vint16m2_t maskedoff, const int16_t *base, size_t vl, int domain) {
  return __riscv_vle16_v_i16m2_tumu_ntl(mask, maskedoff, base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint16m4_t test_vle16_v_i16m4_tumu_ntl_P1(vbool4_t mask, vint16m4_t maskedoff, const int16_t *base, size_t vl, int domain) {
  return __riscv_vle16_v_i16m4_tumu_ntl(mask, maskedoff, base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint16m8_t test_vle16_v_i16m8_tumu_ntl_P1(vbool2_t mask, vint16m8_t maskedoff, const int16_t *base, size_t vl, int domain) {
  return __riscv_vle16_v_i16m8_tumu_ntl(mask, maskedoff, base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint16mf4_t test_vle16_v_u16mf4_tumu_ntl_P1(vbool64_t mask, vuint16mf4_t maskedoff, const uint16_t *base, size_t vl, int domain) {
  return __riscv_vle16_v_u16mf4_tumu_ntl(mask, maskedoff, base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint16mf2_t test_vle16_v_u16mf2_tumu_ntl_P1(vbool32_t mask, vuint16mf2_t maskedoff, const uint16_t *base, size_t vl, int domain) {
  return __riscv_vle16_v_u16mf2_tumu_ntl(mask, maskedoff, base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint16m1_t test_vle16_v_u16m1_tumu_ntl_P1(vbool16_t mask, vuint16m1_t maskedoff, const uint16_t *base, size_t vl, int domain) {
  return __riscv_vle16_v_u16m1_tumu_ntl(mask, maskedoff, base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint16m2_t test_vle16_v_u16m2_tumu_ntl_P1(vbool8_t mask, vuint16m2_t maskedoff, const uint16_t *base, size_t vl, int domain) {
  return __riscv_vle16_v_u16m2_tumu_ntl(mask, maskedoff, base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint16m4_t test_vle16_v_u16m4_tumu_ntl_P1(vbool4_t mask, vuint16m4_t maskedoff, const uint16_t *base, size_t vl, int domain) {
  return __riscv_vle16_v_u16m4_tumu_ntl(mask, maskedoff, base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint16m8_t test_vle16_v_u16m8_tumu_ntl_P1(vbool2_t mask, vuint16m8_t maskedoff, const uint16_t *base, size_t vl, int domain) {
  return __riscv_vle16_v_u16m8_tumu_ntl(mask, maskedoff, base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vfloat16mf4_t test_vle16_v_f16mf4_mu_ntl_P1(vbool64_t mask, vfloat16mf4_t maskedoff, const float16_t *base, size_t vl, int domain) {
  return __riscv_vle16_v_f16mf4_mu_ntl(mask, maskedoff, base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vfloat16mf2_t test_vle16_v_f16mf2_mu_ntl_P1(vbool32_t mask, vfloat16mf2_t maskedoff, const float16_t *base, size_t vl, int domain) {
  return __riscv_vle16_v_f16mf2_mu_ntl(mask, maskedoff, base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vfloat16m1_t test_vle16_v_f16m1_mu_ntl_P1(vbool16_t mask, vfloat16m1_t maskedoff, const float16_t *base, size_t vl, int domain) {
  return __riscv_vle16_v_f16m1_mu_ntl(mask, maskedoff, base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vfloat16m2_t test_vle16_v_f16m2_mu_ntl_P1(vbool8_t mask, vfloat16m2_t maskedoff, const float16_t *base, size_t vl, int domain) {
  return __riscv_vle16_v_f16m2_mu_ntl(mask, maskedoff, base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vfloat16m4_t test_vle16_v_f16m4_mu_ntl_P1(vbool4_t mask, vfloat16m4_t maskedoff, const float16_t *base, size_t vl, int domain) {
  return __riscv_vle16_v_f16m4_mu_ntl(mask, maskedoff, base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vfloat16m8_t test_vle16_v_f16m8_mu_ntl_P1(vbool2_t mask, vfloat16m8_t maskedoff, const float16_t *base, size_t vl, int domain) {
  return __riscv_vle16_v_f16m8_mu_ntl(mask, maskedoff, base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint16mf4_t test_vle16_v_i16mf4_mu_ntl_P1(vbool64_t mask, vint16mf4_t maskedoff, const int16_t *base, size_t vl, int domain) {
  return __riscv_vle16_v_i16mf4_mu_ntl(mask, maskedoff, base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint16mf2_t test_vle16_v_i16mf2_mu_ntl_P1(vbool32_t mask, vint16mf2_t maskedoff, const int16_t *base, size_t vl, int domain) {
  return __riscv_vle16_v_i16mf2_mu_ntl(mask, maskedoff, base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint16m1_t test_vle16_v_i16m1_mu_ntl_P1(vbool16_t mask, vint16m1_t maskedoff, const int16_t *base, size_t vl, int domain) {
  return __riscv_vle16_v_i16m1_mu_ntl(mask, maskedoff, base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint16m2_t test_vle16_v_i16m2_mu_ntl_P1(vbool8_t mask, vint16m2_t maskedoff, const int16_t *base, size_t vl, int domain) {
  return __riscv_vle16_v_i16m2_mu_ntl(mask, maskedoff, base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint16m4_t test_vle16_v_i16m4_mu_ntl_P1(vbool4_t mask, vint16m4_t maskedoff, const int16_t *base, size_t vl, int domain) {
  return __riscv_vle16_v_i16m4_mu_ntl(mask, maskedoff, base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint16m8_t test_vle16_v_i16m8_mu_ntl_P1(vbool2_t mask, vint16m8_t maskedoff, const int16_t *base, size_t vl, int domain) {
  return __riscv_vle16_v_i16m8_mu_ntl(mask, maskedoff, base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint16mf4_t test_vle16_v_u16mf4_mu_ntl_P1(vbool64_t mask, vuint16mf4_t maskedoff, const uint16_t *base, size_t vl, int domain) {
  return __riscv_vle16_v_u16mf4_mu_ntl(mask, maskedoff, base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint16mf2_t test_vle16_v_u16mf2_mu_ntl_P1(vbool32_t mask, vuint16mf2_t maskedoff, const uint16_t *base, size_t vl, int domain) {
  return __riscv_vle16_v_u16mf2_mu_ntl(mask, maskedoff, base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint16m1_t test_vle16_v_u16m1_mu_ntl_P1(vbool16_t mask, vuint16m1_t maskedoff, const uint16_t *base, size_t vl, int domain) {
  return __riscv_vle16_v_u16m1_mu_ntl(mask, maskedoff, base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint16m2_t test_vle16_v_u16m2_mu_ntl_P1(vbool8_t mask, vuint16m2_t maskedoff, const uint16_t *base, size_t vl, int domain) {
  return __riscv_vle16_v_u16m2_mu_ntl(mask, maskedoff, base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint16m4_t test_vle16_v_u16m4_mu_ntl_P1(vbool4_t mask, vuint16m4_t maskedoff, const uint16_t *base, size_t vl, int domain) {
  return __riscv_vle16_v_u16m4_mu_ntl(mask, maskedoff, base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint16m8_t test_vle16_v_u16m8_mu_ntl_P1(vbool2_t mask, vuint16m8_t maskedoff, const uint16_t *base, size_t vl, int domain) {
  return __riscv_vle16_v_u16m8_mu_ntl(mask, maskedoff, base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

