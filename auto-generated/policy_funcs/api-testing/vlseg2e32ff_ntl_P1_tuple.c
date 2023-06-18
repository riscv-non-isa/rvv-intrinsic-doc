#include <stdint.h>
#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
#include <riscv_ntlh.h>

vfloat32mf2x2_t test_vlseg2e32ff_v_f32mf2x2_tu_ntl_P1(vfloat32mf2x2_t maskedoff_tuple, const float32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg2e32ff_v_f32mf2x2_tu_ntl(maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vfloat32m1x2_t test_vlseg2e32ff_v_f32m1x2_tu_ntl_P1(vfloat32m1x2_t maskedoff_tuple, const float32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg2e32ff_v_f32m1x2_tu_ntl(maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vfloat32m2x2_t test_vlseg2e32ff_v_f32m2x2_tu_ntl_P1(vfloat32m2x2_t maskedoff_tuple, const float32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg2e32ff_v_f32m2x2_tu_ntl(maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vfloat32m4x2_t test_vlseg2e32ff_v_f32m4x2_tu_ntl_P1(vfloat32m4x2_t maskedoff_tuple, const float32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg2e32ff_v_f32m4x2_tu_ntl(maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint32mf2x2_t test_vlseg2e32ff_v_i32mf2x2_tu_ntl_P1(vint32mf2x2_t maskedoff_tuple, const int32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg2e32ff_v_i32mf2x2_tu_ntl(maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint32m1x2_t test_vlseg2e32ff_v_i32m1x2_tu_ntl_P1(vint32m1x2_t maskedoff_tuple, const int32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg2e32ff_v_i32m1x2_tu_ntl(maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint32m2x2_t test_vlseg2e32ff_v_i32m2x2_tu_ntl_P1(vint32m2x2_t maskedoff_tuple, const int32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg2e32ff_v_i32m2x2_tu_ntl(maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint32m4x2_t test_vlseg2e32ff_v_i32m4x2_tu_ntl_P1(vint32m4x2_t maskedoff_tuple, const int32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg2e32ff_v_i32m4x2_tu_ntl(maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint32mf2x2_t test_vlseg2e32ff_v_u32mf2x2_tu_ntl_P1(vuint32mf2x2_t maskedoff_tuple, const uint32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg2e32ff_v_u32mf2x2_tu_ntl(maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint32m1x2_t test_vlseg2e32ff_v_u32m1x2_tu_ntl_P1(vuint32m1x2_t maskedoff_tuple, const uint32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg2e32ff_v_u32m1x2_tu_ntl(maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint32m2x2_t test_vlseg2e32ff_v_u32m2x2_tu_ntl_P1(vuint32m2x2_t maskedoff_tuple, const uint32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg2e32ff_v_u32m2x2_tu_ntl(maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint32m4x2_t test_vlseg2e32ff_v_u32m4x2_tu_ntl_P1(vuint32m4x2_t maskedoff_tuple, const uint32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg2e32ff_v_u32m4x2_tu_ntl(maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vfloat32mf2x2_t test_vlseg2e32ff_v_f32mf2x2_tum_ntl_P1(vbool64_t mask, vfloat32mf2x2_t maskedoff_tuple, const float32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg2e32ff_v_f32mf2x2_tum_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vfloat32m1x2_t test_vlseg2e32ff_v_f32m1x2_tum_ntl_P1(vbool32_t mask, vfloat32m1x2_t maskedoff_tuple, const float32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg2e32ff_v_f32m1x2_tum_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vfloat32m2x2_t test_vlseg2e32ff_v_f32m2x2_tum_ntl_P1(vbool16_t mask, vfloat32m2x2_t maskedoff_tuple, const float32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg2e32ff_v_f32m2x2_tum_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vfloat32m4x2_t test_vlseg2e32ff_v_f32m4x2_tum_ntl_P1(vbool8_t mask, vfloat32m4x2_t maskedoff_tuple, const float32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg2e32ff_v_f32m4x2_tum_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint32mf2x2_t test_vlseg2e32ff_v_i32mf2x2_tum_ntl_P1(vbool64_t mask, vint32mf2x2_t maskedoff_tuple, const int32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg2e32ff_v_i32mf2x2_tum_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint32m1x2_t test_vlseg2e32ff_v_i32m1x2_tum_ntl_P1(vbool32_t mask, vint32m1x2_t maskedoff_tuple, const int32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg2e32ff_v_i32m1x2_tum_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint32m2x2_t test_vlseg2e32ff_v_i32m2x2_tum_ntl_P1(vbool16_t mask, vint32m2x2_t maskedoff_tuple, const int32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg2e32ff_v_i32m2x2_tum_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint32m4x2_t test_vlseg2e32ff_v_i32m4x2_tum_ntl_P1(vbool8_t mask, vint32m4x2_t maskedoff_tuple, const int32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg2e32ff_v_i32m4x2_tum_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint32mf2x2_t test_vlseg2e32ff_v_u32mf2x2_tum_ntl_P1(vbool64_t mask, vuint32mf2x2_t maskedoff_tuple, const uint32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg2e32ff_v_u32mf2x2_tum_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint32m1x2_t test_vlseg2e32ff_v_u32m1x2_tum_ntl_P1(vbool32_t mask, vuint32m1x2_t maskedoff_tuple, const uint32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg2e32ff_v_u32m1x2_tum_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint32m2x2_t test_vlseg2e32ff_v_u32m2x2_tum_ntl_P1(vbool16_t mask, vuint32m2x2_t maskedoff_tuple, const uint32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg2e32ff_v_u32m2x2_tum_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint32m4x2_t test_vlseg2e32ff_v_u32m4x2_tum_ntl_P1(vbool8_t mask, vuint32m4x2_t maskedoff_tuple, const uint32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg2e32ff_v_u32m4x2_tum_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vfloat32mf2x2_t test_vlseg2e32ff_v_f32mf2x2_tumu_ntl_P1(vbool64_t mask, vfloat32mf2x2_t maskedoff_tuple, const float32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg2e32ff_v_f32mf2x2_tumu_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vfloat32m1x2_t test_vlseg2e32ff_v_f32m1x2_tumu_ntl_P1(vbool32_t mask, vfloat32m1x2_t maskedoff_tuple, const float32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg2e32ff_v_f32m1x2_tumu_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vfloat32m2x2_t test_vlseg2e32ff_v_f32m2x2_tumu_ntl_P1(vbool16_t mask, vfloat32m2x2_t maskedoff_tuple, const float32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg2e32ff_v_f32m2x2_tumu_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vfloat32m4x2_t test_vlseg2e32ff_v_f32m4x2_tumu_ntl_P1(vbool8_t mask, vfloat32m4x2_t maskedoff_tuple, const float32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg2e32ff_v_f32m4x2_tumu_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint32mf2x2_t test_vlseg2e32ff_v_i32mf2x2_tumu_ntl_P1(vbool64_t mask, vint32mf2x2_t maskedoff_tuple, const int32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg2e32ff_v_i32mf2x2_tumu_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint32m1x2_t test_vlseg2e32ff_v_i32m1x2_tumu_ntl_P1(vbool32_t mask, vint32m1x2_t maskedoff_tuple, const int32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg2e32ff_v_i32m1x2_tumu_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint32m2x2_t test_vlseg2e32ff_v_i32m2x2_tumu_ntl_P1(vbool16_t mask, vint32m2x2_t maskedoff_tuple, const int32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg2e32ff_v_i32m2x2_tumu_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint32m4x2_t test_vlseg2e32ff_v_i32m4x2_tumu_ntl_P1(vbool8_t mask, vint32m4x2_t maskedoff_tuple, const int32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg2e32ff_v_i32m4x2_tumu_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint32mf2x2_t test_vlseg2e32ff_v_u32mf2x2_tumu_ntl_P1(vbool64_t mask, vuint32mf2x2_t maskedoff_tuple, const uint32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg2e32ff_v_u32mf2x2_tumu_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint32m1x2_t test_vlseg2e32ff_v_u32m1x2_tumu_ntl_P1(vbool32_t mask, vuint32m1x2_t maskedoff_tuple, const uint32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg2e32ff_v_u32m1x2_tumu_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint32m2x2_t test_vlseg2e32ff_v_u32m2x2_tumu_ntl_P1(vbool16_t mask, vuint32m2x2_t maskedoff_tuple, const uint32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg2e32ff_v_u32m2x2_tumu_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint32m4x2_t test_vlseg2e32ff_v_u32m4x2_tumu_ntl_P1(vbool8_t mask, vuint32m4x2_t maskedoff_tuple, const uint32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg2e32ff_v_u32m4x2_tumu_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vfloat32mf2x2_t test_vlseg2e32ff_v_f32mf2x2_mu_ntl_P1(vbool64_t mask, vfloat32mf2x2_t maskedoff_tuple, const float32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg2e32ff_v_f32mf2x2_mu_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vfloat32m1x2_t test_vlseg2e32ff_v_f32m1x2_mu_ntl_P1(vbool32_t mask, vfloat32m1x2_t maskedoff_tuple, const float32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg2e32ff_v_f32m1x2_mu_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vfloat32m2x2_t test_vlseg2e32ff_v_f32m2x2_mu_ntl_P1(vbool16_t mask, vfloat32m2x2_t maskedoff_tuple, const float32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg2e32ff_v_f32m2x2_mu_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vfloat32m4x2_t test_vlseg2e32ff_v_f32m4x2_mu_ntl_P1(vbool8_t mask, vfloat32m4x2_t maskedoff_tuple, const float32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg2e32ff_v_f32m4x2_mu_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint32mf2x2_t test_vlseg2e32ff_v_i32mf2x2_mu_ntl_P1(vbool64_t mask, vint32mf2x2_t maskedoff_tuple, const int32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg2e32ff_v_i32mf2x2_mu_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint32m1x2_t test_vlseg2e32ff_v_i32m1x2_mu_ntl_P1(vbool32_t mask, vint32m1x2_t maskedoff_tuple, const int32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg2e32ff_v_i32m1x2_mu_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint32m2x2_t test_vlseg2e32ff_v_i32m2x2_mu_ntl_P1(vbool16_t mask, vint32m2x2_t maskedoff_tuple, const int32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg2e32ff_v_i32m2x2_mu_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint32m4x2_t test_vlseg2e32ff_v_i32m4x2_mu_ntl_P1(vbool8_t mask, vint32m4x2_t maskedoff_tuple, const int32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg2e32ff_v_i32m4x2_mu_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint32mf2x2_t test_vlseg2e32ff_v_u32mf2x2_mu_ntl_P1(vbool64_t mask, vuint32mf2x2_t maskedoff_tuple, const uint32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg2e32ff_v_u32mf2x2_mu_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint32m1x2_t test_vlseg2e32ff_v_u32m1x2_mu_ntl_P1(vbool32_t mask, vuint32m1x2_t maskedoff_tuple, const uint32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg2e32ff_v_u32m1x2_mu_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint32m2x2_t test_vlseg2e32ff_v_u32m2x2_mu_ntl_P1(vbool16_t mask, vuint32m2x2_t maskedoff_tuple, const uint32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg2e32ff_v_u32m2x2_mu_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint32m4x2_t test_vlseg2e32ff_v_u32m4x2_mu_ntl_P1(vbool8_t mask, vuint32m4x2_t maskedoff_tuple, const uint32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg2e32ff_v_u32m4x2_mu_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

