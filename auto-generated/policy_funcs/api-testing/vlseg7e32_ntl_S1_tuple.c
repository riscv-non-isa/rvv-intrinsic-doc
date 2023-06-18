#include <stdint.h>
#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
#include <riscv_ntlh.h>

vfloat32mf2x7_t test_vlseg7e32_v_f32mf2x7_tu_ntl_S1(vfloat32mf2x7_t maskedoff_tuple, const float32_t *base, size_t vl, int domain) {
  return __riscv_vlseg7e32_v_f32mf2x7_tu_ntl(maskedoff_tuple, base, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vfloat32m1x7_t test_vlseg7e32_v_f32m1x7_tu_ntl_S1(vfloat32m1x7_t maskedoff_tuple, const float32_t *base, size_t vl, int domain) {
  return __riscv_vlseg7e32_v_f32m1x7_tu_ntl(maskedoff_tuple, base, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint32mf2x7_t test_vlseg7e32_v_i32mf2x7_tu_ntl_S1(vint32mf2x7_t maskedoff_tuple, const int32_t *base, size_t vl, int domain) {
  return __riscv_vlseg7e32_v_i32mf2x7_tu_ntl(maskedoff_tuple, base, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint32m1x7_t test_vlseg7e32_v_i32m1x7_tu_ntl_S1(vint32m1x7_t maskedoff_tuple, const int32_t *base, size_t vl, int domain) {
  return __riscv_vlseg7e32_v_i32m1x7_tu_ntl(maskedoff_tuple, base, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint32mf2x7_t test_vlseg7e32_v_u32mf2x7_tu_ntl_S1(vuint32mf2x7_t maskedoff_tuple, const uint32_t *base, size_t vl, int domain) {
  return __riscv_vlseg7e32_v_u32mf2x7_tu_ntl(maskedoff_tuple, base, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint32m1x7_t test_vlseg7e32_v_u32m1x7_tu_ntl_S1(vuint32m1x7_t maskedoff_tuple, const uint32_t *base, size_t vl, int domain) {
  return __riscv_vlseg7e32_v_u32m1x7_tu_ntl(maskedoff_tuple, base, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vfloat32mf2x7_t test_vlseg7e32_v_f32mf2x7_tum_ntl_S1(vbool64_t mask, vfloat32mf2x7_t maskedoff_tuple, const float32_t *base, size_t vl, int domain) {
  return __riscv_vlseg7e32_v_f32mf2x7_tum_ntl(mask, maskedoff_tuple, base, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vfloat32m1x7_t test_vlseg7e32_v_f32m1x7_tum_ntl_S1(vbool32_t mask, vfloat32m1x7_t maskedoff_tuple, const float32_t *base, size_t vl, int domain) {
  return __riscv_vlseg7e32_v_f32m1x7_tum_ntl(mask, maskedoff_tuple, base, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint32mf2x7_t test_vlseg7e32_v_i32mf2x7_tum_ntl_S1(vbool64_t mask, vint32mf2x7_t maskedoff_tuple, const int32_t *base, size_t vl, int domain) {
  return __riscv_vlseg7e32_v_i32mf2x7_tum_ntl(mask, maskedoff_tuple, base, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint32m1x7_t test_vlseg7e32_v_i32m1x7_tum_ntl_S1(vbool32_t mask, vint32m1x7_t maskedoff_tuple, const int32_t *base, size_t vl, int domain) {
  return __riscv_vlseg7e32_v_i32m1x7_tum_ntl(mask, maskedoff_tuple, base, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint32mf2x7_t test_vlseg7e32_v_u32mf2x7_tum_ntl_S1(vbool64_t mask, vuint32mf2x7_t maskedoff_tuple, const uint32_t *base, size_t vl, int domain) {
  return __riscv_vlseg7e32_v_u32mf2x7_tum_ntl(mask, maskedoff_tuple, base, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint32m1x7_t test_vlseg7e32_v_u32m1x7_tum_ntl_S1(vbool32_t mask, vuint32m1x7_t maskedoff_tuple, const uint32_t *base, size_t vl, int domain) {
  return __riscv_vlseg7e32_v_u32m1x7_tum_ntl(mask, maskedoff_tuple, base, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vfloat32mf2x7_t test_vlseg7e32_v_f32mf2x7_tumu_ntl_S1(vbool64_t mask, vfloat32mf2x7_t maskedoff_tuple, const float32_t *base, size_t vl, int domain) {
  return __riscv_vlseg7e32_v_f32mf2x7_tumu_ntl(mask, maskedoff_tuple, base, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vfloat32m1x7_t test_vlseg7e32_v_f32m1x7_tumu_ntl_S1(vbool32_t mask, vfloat32m1x7_t maskedoff_tuple, const float32_t *base, size_t vl, int domain) {
  return __riscv_vlseg7e32_v_f32m1x7_tumu_ntl(mask, maskedoff_tuple, base, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint32mf2x7_t test_vlseg7e32_v_i32mf2x7_tumu_ntl_S1(vbool64_t mask, vint32mf2x7_t maskedoff_tuple, const int32_t *base, size_t vl, int domain) {
  return __riscv_vlseg7e32_v_i32mf2x7_tumu_ntl(mask, maskedoff_tuple, base, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint32m1x7_t test_vlseg7e32_v_i32m1x7_tumu_ntl_S1(vbool32_t mask, vint32m1x7_t maskedoff_tuple, const int32_t *base, size_t vl, int domain) {
  return __riscv_vlseg7e32_v_i32m1x7_tumu_ntl(mask, maskedoff_tuple, base, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint32mf2x7_t test_vlseg7e32_v_u32mf2x7_tumu_ntl_S1(vbool64_t mask, vuint32mf2x7_t maskedoff_tuple, const uint32_t *base, size_t vl, int domain) {
  return __riscv_vlseg7e32_v_u32mf2x7_tumu_ntl(mask, maskedoff_tuple, base, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint32m1x7_t test_vlseg7e32_v_u32m1x7_tumu_ntl_S1(vbool32_t mask, vuint32m1x7_t maskedoff_tuple, const uint32_t *base, size_t vl, int domain) {
  return __riscv_vlseg7e32_v_u32m1x7_tumu_ntl(mask, maskedoff_tuple, base, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vfloat32mf2x7_t test_vlseg7e32_v_f32mf2x7_mu_ntl_S1(vbool64_t mask, vfloat32mf2x7_t maskedoff_tuple, const float32_t *base, size_t vl, int domain) {
  return __riscv_vlseg7e32_v_f32mf2x7_mu_ntl(mask, maskedoff_tuple, base, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vfloat32m1x7_t test_vlseg7e32_v_f32m1x7_mu_ntl_S1(vbool32_t mask, vfloat32m1x7_t maskedoff_tuple, const float32_t *base, size_t vl, int domain) {
  return __riscv_vlseg7e32_v_f32m1x7_mu_ntl(mask, maskedoff_tuple, base, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint32mf2x7_t test_vlseg7e32_v_i32mf2x7_mu_ntl_S1(vbool64_t mask, vint32mf2x7_t maskedoff_tuple, const int32_t *base, size_t vl, int domain) {
  return __riscv_vlseg7e32_v_i32mf2x7_mu_ntl(mask, maskedoff_tuple, base, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint32m1x7_t test_vlseg7e32_v_i32m1x7_mu_ntl_S1(vbool32_t mask, vint32m1x7_t maskedoff_tuple, const int32_t *base, size_t vl, int domain) {
  return __riscv_vlseg7e32_v_i32m1x7_mu_ntl(mask, maskedoff_tuple, base, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint32mf2x7_t test_vlseg7e32_v_u32mf2x7_mu_ntl_S1(vbool64_t mask, vuint32mf2x7_t maskedoff_tuple, const uint32_t *base, size_t vl, int domain) {
  return __riscv_vlseg7e32_v_u32mf2x7_mu_ntl(mask, maskedoff_tuple, base, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint32m1x7_t test_vlseg7e32_v_u32m1x7_mu_ntl_S1(vbool32_t mask, vuint32m1x7_t maskedoff_tuple, const uint32_t *base, size_t vl, int domain) {
  return __riscv_vlseg7e32_v_u32m1x7_mu_ntl(mask, maskedoff_tuple, base, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

