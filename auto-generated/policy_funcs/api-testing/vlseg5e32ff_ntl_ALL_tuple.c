#include <stdint.h>
#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
#include <riscv_ntlh.h>

vfloat32mf2x5_t test_vlseg5e32ff_v_f32mf2x5_tu_ntl_ALL(vfloat32mf2x5_t maskedoff_tuple, const float32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg5e32ff_v_f32mf2x5_tu_ntl(maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL);
}

vfloat32m1x5_t test_vlseg5e32ff_v_f32m1x5_tu_ntl_ALL(vfloat32m1x5_t maskedoff_tuple, const float32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg5e32ff_v_f32m1x5_tu_ntl(maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL);
}

vint32mf2x5_t test_vlseg5e32ff_v_i32mf2x5_tu_ntl_ALL(vint32mf2x5_t maskedoff_tuple, const int32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg5e32ff_v_i32mf2x5_tu_ntl(maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL);
}

vint32m1x5_t test_vlseg5e32ff_v_i32m1x5_tu_ntl_ALL(vint32m1x5_t maskedoff_tuple, const int32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg5e32ff_v_i32m1x5_tu_ntl(maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL);
}

vuint32mf2x5_t test_vlseg5e32ff_v_u32mf2x5_tu_ntl_ALL(vuint32mf2x5_t maskedoff_tuple, const uint32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg5e32ff_v_u32mf2x5_tu_ntl(maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL);
}

vuint32m1x5_t test_vlseg5e32ff_v_u32m1x5_tu_ntl_ALL(vuint32m1x5_t maskedoff_tuple, const uint32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg5e32ff_v_u32m1x5_tu_ntl(maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL);
}

vfloat32mf2x5_t test_vlseg5e32ff_v_f32mf2x5_tum_ntl_ALL(vbool64_t mask, vfloat32mf2x5_t maskedoff_tuple, const float32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg5e32ff_v_f32mf2x5_tum_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL);
}

vfloat32m1x5_t test_vlseg5e32ff_v_f32m1x5_tum_ntl_ALL(vbool32_t mask, vfloat32m1x5_t maskedoff_tuple, const float32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg5e32ff_v_f32m1x5_tum_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL);
}

vint32mf2x5_t test_vlseg5e32ff_v_i32mf2x5_tum_ntl_ALL(vbool64_t mask, vint32mf2x5_t maskedoff_tuple, const int32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg5e32ff_v_i32mf2x5_tum_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL);
}

vint32m1x5_t test_vlseg5e32ff_v_i32m1x5_tum_ntl_ALL(vbool32_t mask, vint32m1x5_t maskedoff_tuple, const int32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg5e32ff_v_i32m1x5_tum_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL);
}

vuint32mf2x5_t test_vlseg5e32ff_v_u32mf2x5_tum_ntl_ALL(vbool64_t mask, vuint32mf2x5_t maskedoff_tuple, const uint32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg5e32ff_v_u32mf2x5_tum_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL);
}

vuint32m1x5_t test_vlseg5e32ff_v_u32m1x5_tum_ntl_ALL(vbool32_t mask, vuint32m1x5_t maskedoff_tuple, const uint32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg5e32ff_v_u32m1x5_tum_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL);
}

vfloat32mf2x5_t test_vlseg5e32ff_v_f32mf2x5_tumu_ntl_ALL(vbool64_t mask, vfloat32mf2x5_t maskedoff_tuple, const float32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg5e32ff_v_f32mf2x5_tumu_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL);
}

vfloat32m1x5_t test_vlseg5e32ff_v_f32m1x5_tumu_ntl_ALL(vbool32_t mask, vfloat32m1x5_t maskedoff_tuple, const float32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg5e32ff_v_f32m1x5_tumu_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL);
}

vint32mf2x5_t test_vlseg5e32ff_v_i32mf2x5_tumu_ntl_ALL(vbool64_t mask, vint32mf2x5_t maskedoff_tuple, const int32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg5e32ff_v_i32mf2x5_tumu_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL);
}

vint32m1x5_t test_vlseg5e32ff_v_i32m1x5_tumu_ntl_ALL(vbool32_t mask, vint32m1x5_t maskedoff_tuple, const int32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg5e32ff_v_i32m1x5_tumu_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL);
}

vuint32mf2x5_t test_vlseg5e32ff_v_u32mf2x5_tumu_ntl_ALL(vbool64_t mask, vuint32mf2x5_t maskedoff_tuple, const uint32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg5e32ff_v_u32mf2x5_tumu_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL);
}

vuint32m1x5_t test_vlseg5e32ff_v_u32m1x5_tumu_ntl_ALL(vbool32_t mask, vuint32m1x5_t maskedoff_tuple, const uint32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg5e32ff_v_u32m1x5_tumu_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL);
}

vfloat32mf2x5_t test_vlseg5e32ff_v_f32mf2x5_mu_ntl_ALL(vbool64_t mask, vfloat32mf2x5_t maskedoff_tuple, const float32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg5e32ff_v_f32mf2x5_mu_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL);
}

vfloat32m1x5_t test_vlseg5e32ff_v_f32m1x5_mu_ntl_ALL(vbool32_t mask, vfloat32m1x5_t maskedoff_tuple, const float32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg5e32ff_v_f32m1x5_mu_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL);
}

vint32mf2x5_t test_vlseg5e32ff_v_i32mf2x5_mu_ntl_ALL(vbool64_t mask, vint32mf2x5_t maskedoff_tuple, const int32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg5e32ff_v_i32mf2x5_mu_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL);
}

vint32m1x5_t test_vlseg5e32ff_v_i32m1x5_mu_ntl_ALL(vbool32_t mask, vint32m1x5_t maskedoff_tuple, const int32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg5e32ff_v_i32m1x5_mu_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL);
}

vuint32mf2x5_t test_vlseg5e32ff_v_u32mf2x5_mu_ntl_ALL(vbool64_t mask, vuint32mf2x5_t maskedoff_tuple, const uint32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg5e32ff_v_u32mf2x5_mu_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL);
}

vuint32m1x5_t test_vlseg5e32ff_v_u32m1x5_mu_ntl_ALL(vbool32_t mask, vuint32m1x5_t maskedoff_tuple, const uint32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg5e32ff_v_u32m1x5_mu_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL);
}

