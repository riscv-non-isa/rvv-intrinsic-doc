#include <stdint.h>
#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
#include <riscv_ntlh.h>

vfloat32mf2x8_t test_vlsseg8e32_v_f32mf2x8_tu_ntl_P1(vfloat32mf2x8_t maskedoff_tuple, const float32_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg8e32_v_f32mf2x8_tu_ntl(maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vfloat32m1x8_t test_vlsseg8e32_v_f32m1x8_tu_ntl_P1(vfloat32m1x8_t maskedoff_tuple, const float32_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg8e32_v_f32m1x8_tu_ntl(maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint32mf2x8_t test_vlsseg8e32_v_i32mf2x8_tu_ntl_P1(vint32mf2x8_t maskedoff_tuple, const int32_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg8e32_v_i32mf2x8_tu_ntl(maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint32m1x8_t test_vlsseg8e32_v_i32m1x8_tu_ntl_P1(vint32m1x8_t maskedoff_tuple, const int32_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg8e32_v_i32m1x8_tu_ntl(maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint32mf2x8_t test_vlsseg8e32_v_u32mf2x8_tu_ntl_P1(vuint32mf2x8_t maskedoff_tuple, const uint32_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg8e32_v_u32mf2x8_tu_ntl(maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint32m1x8_t test_vlsseg8e32_v_u32m1x8_tu_ntl_P1(vuint32m1x8_t maskedoff_tuple, const uint32_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg8e32_v_u32m1x8_tu_ntl(maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vfloat32mf2x8_t test_vlsseg8e32_v_f32mf2x8_tum_ntl_P1(vbool64_t mask, vfloat32mf2x8_t maskedoff_tuple, const float32_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg8e32_v_f32mf2x8_tum_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vfloat32m1x8_t test_vlsseg8e32_v_f32m1x8_tum_ntl_P1(vbool32_t mask, vfloat32m1x8_t maskedoff_tuple, const float32_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg8e32_v_f32m1x8_tum_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint32mf2x8_t test_vlsseg8e32_v_i32mf2x8_tum_ntl_P1(vbool64_t mask, vint32mf2x8_t maskedoff_tuple, const int32_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg8e32_v_i32mf2x8_tum_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint32m1x8_t test_vlsseg8e32_v_i32m1x8_tum_ntl_P1(vbool32_t mask, vint32m1x8_t maskedoff_tuple, const int32_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg8e32_v_i32m1x8_tum_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint32mf2x8_t test_vlsseg8e32_v_u32mf2x8_tum_ntl_P1(vbool64_t mask, vuint32mf2x8_t maskedoff_tuple, const uint32_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg8e32_v_u32mf2x8_tum_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint32m1x8_t test_vlsseg8e32_v_u32m1x8_tum_ntl_P1(vbool32_t mask, vuint32m1x8_t maskedoff_tuple, const uint32_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg8e32_v_u32m1x8_tum_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vfloat32mf2x8_t test_vlsseg8e32_v_f32mf2x8_tumu_ntl_P1(vbool64_t mask, vfloat32mf2x8_t maskedoff_tuple, const float32_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg8e32_v_f32mf2x8_tumu_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vfloat32m1x8_t test_vlsseg8e32_v_f32m1x8_tumu_ntl_P1(vbool32_t mask, vfloat32m1x8_t maskedoff_tuple, const float32_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg8e32_v_f32m1x8_tumu_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint32mf2x8_t test_vlsseg8e32_v_i32mf2x8_tumu_ntl_P1(vbool64_t mask, vint32mf2x8_t maskedoff_tuple, const int32_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg8e32_v_i32mf2x8_tumu_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint32m1x8_t test_vlsseg8e32_v_i32m1x8_tumu_ntl_P1(vbool32_t mask, vint32m1x8_t maskedoff_tuple, const int32_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg8e32_v_i32m1x8_tumu_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint32mf2x8_t test_vlsseg8e32_v_u32mf2x8_tumu_ntl_P1(vbool64_t mask, vuint32mf2x8_t maskedoff_tuple, const uint32_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg8e32_v_u32mf2x8_tumu_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint32m1x8_t test_vlsseg8e32_v_u32m1x8_tumu_ntl_P1(vbool32_t mask, vuint32m1x8_t maskedoff_tuple, const uint32_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg8e32_v_u32m1x8_tumu_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vfloat32mf2x8_t test_vlsseg8e32_v_f32mf2x8_mu_ntl_P1(vbool64_t mask, vfloat32mf2x8_t maskedoff_tuple, const float32_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg8e32_v_f32mf2x8_mu_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vfloat32m1x8_t test_vlsseg8e32_v_f32m1x8_mu_ntl_P1(vbool32_t mask, vfloat32m1x8_t maskedoff_tuple, const float32_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg8e32_v_f32m1x8_mu_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint32mf2x8_t test_vlsseg8e32_v_i32mf2x8_mu_ntl_P1(vbool64_t mask, vint32mf2x8_t maskedoff_tuple, const int32_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg8e32_v_i32mf2x8_mu_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint32m1x8_t test_vlsseg8e32_v_i32m1x8_mu_ntl_P1(vbool32_t mask, vint32m1x8_t maskedoff_tuple, const int32_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg8e32_v_i32m1x8_mu_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint32mf2x8_t test_vlsseg8e32_v_u32mf2x8_mu_ntl_P1(vbool64_t mask, vuint32mf2x8_t maskedoff_tuple, const uint32_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg8e32_v_u32mf2x8_mu_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint32m1x8_t test_vlsseg8e32_v_u32m1x8_mu_ntl_P1(vbool32_t mask, vuint32m1x8_t maskedoff_tuple, const uint32_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg8e32_v_u32m1x8_mu_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

