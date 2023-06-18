#include <stdint.h>
#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
#include <riscv_ntlh.h>

vfloat32mf2_t test_vlse32_v_f32mf2_tu_ntl_S1(vfloat32mf2_t maskedoff, const float32_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlse32_v_f32mf2_tu_ntl(maskedoff, base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vfloat32m1_t test_vlse32_v_f32m1_tu_ntl_S1(vfloat32m1_t maskedoff, const float32_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlse32_v_f32m1_tu_ntl(maskedoff, base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vfloat32m2_t test_vlse32_v_f32m2_tu_ntl_S1(vfloat32m2_t maskedoff, const float32_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlse32_v_f32m2_tu_ntl(maskedoff, base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vfloat32m4_t test_vlse32_v_f32m4_tu_ntl_S1(vfloat32m4_t maskedoff, const float32_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlse32_v_f32m4_tu_ntl(maskedoff, base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vfloat32m8_t test_vlse32_v_f32m8_tu_ntl_S1(vfloat32m8_t maskedoff, const float32_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlse32_v_f32m8_tu_ntl(maskedoff, base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint32mf2_t test_vlse32_v_i32mf2_tu_ntl_S1(vint32mf2_t maskedoff, const int32_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlse32_v_i32mf2_tu_ntl(maskedoff, base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint32m1_t test_vlse32_v_i32m1_tu_ntl_S1(vint32m1_t maskedoff, const int32_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlse32_v_i32m1_tu_ntl(maskedoff, base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint32m2_t test_vlse32_v_i32m2_tu_ntl_S1(vint32m2_t maskedoff, const int32_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlse32_v_i32m2_tu_ntl(maskedoff, base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint32m4_t test_vlse32_v_i32m4_tu_ntl_S1(vint32m4_t maskedoff, const int32_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlse32_v_i32m4_tu_ntl(maskedoff, base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint32m8_t test_vlse32_v_i32m8_tu_ntl_S1(vint32m8_t maskedoff, const int32_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlse32_v_i32m8_tu_ntl(maskedoff, base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint32mf2_t test_vlse32_v_u32mf2_tu_ntl_S1(vuint32mf2_t maskedoff, const uint32_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlse32_v_u32mf2_tu_ntl(maskedoff, base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint32m1_t test_vlse32_v_u32m1_tu_ntl_S1(vuint32m1_t maskedoff, const uint32_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlse32_v_u32m1_tu_ntl(maskedoff, base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint32m2_t test_vlse32_v_u32m2_tu_ntl_S1(vuint32m2_t maskedoff, const uint32_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlse32_v_u32m2_tu_ntl(maskedoff, base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint32m4_t test_vlse32_v_u32m4_tu_ntl_S1(vuint32m4_t maskedoff, const uint32_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlse32_v_u32m4_tu_ntl(maskedoff, base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint32m8_t test_vlse32_v_u32m8_tu_ntl_S1(vuint32m8_t maskedoff, const uint32_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlse32_v_u32m8_tu_ntl(maskedoff, base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vfloat32mf2_t test_vlse32_v_f32mf2_tum_ntl_S1(vbool64_t mask, vfloat32mf2_t maskedoff, const float32_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlse32_v_f32mf2_tum_ntl(mask, maskedoff, base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vfloat32m1_t test_vlse32_v_f32m1_tum_ntl_S1(vbool32_t mask, vfloat32m1_t maskedoff, const float32_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlse32_v_f32m1_tum_ntl(mask, maskedoff, base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vfloat32m2_t test_vlse32_v_f32m2_tum_ntl_S1(vbool16_t mask, vfloat32m2_t maskedoff, const float32_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlse32_v_f32m2_tum_ntl(mask, maskedoff, base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vfloat32m4_t test_vlse32_v_f32m4_tum_ntl_S1(vbool8_t mask, vfloat32m4_t maskedoff, const float32_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlse32_v_f32m4_tum_ntl(mask, maskedoff, base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vfloat32m8_t test_vlse32_v_f32m8_tum_ntl_S1(vbool4_t mask, vfloat32m8_t maskedoff, const float32_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlse32_v_f32m8_tum_ntl(mask, maskedoff, base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint32mf2_t test_vlse32_v_i32mf2_tum_ntl_S1(vbool64_t mask, vint32mf2_t maskedoff, const int32_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlse32_v_i32mf2_tum_ntl(mask, maskedoff, base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint32m1_t test_vlse32_v_i32m1_tum_ntl_S1(vbool32_t mask, vint32m1_t maskedoff, const int32_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlse32_v_i32m1_tum_ntl(mask, maskedoff, base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint32m2_t test_vlse32_v_i32m2_tum_ntl_S1(vbool16_t mask, vint32m2_t maskedoff, const int32_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlse32_v_i32m2_tum_ntl(mask, maskedoff, base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint32m4_t test_vlse32_v_i32m4_tum_ntl_S1(vbool8_t mask, vint32m4_t maskedoff, const int32_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlse32_v_i32m4_tum_ntl(mask, maskedoff, base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint32m8_t test_vlse32_v_i32m8_tum_ntl_S1(vbool4_t mask, vint32m8_t maskedoff, const int32_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlse32_v_i32m8_tum_ntl(mask, maskedoff, base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint32mf2_t test_vlse32_v_u32mf2_tum_ntl_S1(vbool64_t mask, vuint32mf2_t maskedoff, const uint32_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlse32_v_u32mf2_tum_ntl(mask, maskedoff, base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint32m1_t test_vlse32_v_u32m1_tum_ntl_S1(vbool32_t mask, vuint32m1_t maskedoff, const uint32_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlse32_v_u32m1_tum_ntl(mask, maskedoff, base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint32m2_t test_vlse32_v_u32m2_tum_ntl_S1(vbool16_t mask, vuint32m2_t maskedoff, const uint32_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlse32_v_u32m2_tum_ntl(mask, maskedoff, base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint32m4_t test_vlse32_v_u32m4_tum_ntl_S1(vbool8_t mask, vuint32m4_t maskedoff, const uint32_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlse32_v_u32m4_tum_ntl(mask, maskedoff, base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint32m8_t test_vlse32_v_u32m8_tum_ntl_S1(vbool4_t mask, vuint32m8_t maskedoff, const uint32_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlse32_v_u32m8_tum_ntl(mask, maskedoff, base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vfloat32mf2_t test_vlse32_v_f32mf2_tumu_ntl_S1(vbool64_t mask, vfloat32mf2_t maskedoff, const float32_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlse32_v_f32mf2_tumu_ntl(mask, maskedoff, base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vfloat32m1_t test_vlse32_v_f32m1_tumu_ntl_S1(vbool32_t mask, vfloat32m1_t maskedoff, const float32_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlse32_v_f32m1_tumu_ntl(mask, maskedoff, base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vfloat32m2_t test_vlse32_v_f32m2_tumu_ntl_S1(vbool16_t mask, vfloat32m2_t maskedoff, const float32_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlse32_v_f32m2_tumu_ntl(mask, maskedoff, base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vfloat32m4_t test_vlse32_v_f32m4_tumu_ntl_S1(vbool8_t mask, vfloat32m4_t maskedoff, const float32_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlse32_v_f32m4_tumu_ntl(mask, maskedoff, base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vfloat32m8_t test_vlse32_v_f32m8_tumu_ntl_S1(vbool4_t mask, vfloat32m8_t maskedoff, const float32_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlse32_v_f32m8_tumu_ntl(mask, maskedoff, base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint32mf2_t test_vlse32_v_i32mf2_tumu_ntl_S1(vbool64_t mask, vint32mf2_t maskedoff, const int32_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlse32_v_i32mf2_tumu_ntl(mask, maskedoff, base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint32m1_t test_vlse32_v_i32m1_tumu_ntl_S1(vbool32_t mask, vint32m1_t maskedoff, const int32_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlse32_v_i32m1_tumu_ntl(mask, maskedoff, base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint32m2_t test_vlse32_v_i32m2_tumu_ntl_S1(vbool16_t mask, vint32m2_t maskedoff, const int32_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlse32_v_i32m2_tumu_ntl(mask, maskedoff, base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint32m4_t test_vlse32_v_i32m4_tumu_ntl_S1(vbool8_t mask, vint32m4_t maskedoff, const int32_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlse32_v_i32m4_tumu_ntl(mask, maskedoff, base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint32m8_t test_vlse32_v_i32m8_tumu_ntl_S1(vbool4_t mask, vint32m8_t maskedoff, const int32_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlse32_v_i32m8_tumu_ntl(mask, maskedoff, base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint32mf2_t test_vlse32_v_u32mf2_tumu_ntl_S1(vbool64_t mask, vuint32mf2_t maskedoff, const uint32_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlse32_v_u32mf2_tumu_ntl(mask, maskedoff, base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint32m1_t test_vlse32_v_u32m1_tumu_ntl_S1(vbool32_t mask, vuint32m1_t maskedoff, const uint32_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlse32_v_u32m1_tumu_ntl(mask, maskedoff, base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint32m2_t test_vlse32_v_u32m2_tumu_ntl_S1(vbool16_t mask, vuint32m2_t maskedoff, const uint32_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlse32_v_u32m2_tumu_ntl(mask, maskedoff, base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint32m4_t test_vlse32_v_u32m4_tumu_ntl_S1(vbool8_t mask, vuint32m4_t maskedoff, const uint32_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlse32_v_u32m4_tumu_ntl(mask, maskedoff, base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint32m8_t test_vlse32_v_u32m8_tumu_ntl_S1(vbool4_t mask, vuint32m8_t maskedoff, const uint32_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlse32_v_u32m8_tumu_ntl(mask, maskedoff, base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vfloat32mf2_t test_vlse32_v_f32mf2_mu_ntl_S1(vbool64_t mask, vfloat32mf2_t maskedoff, const float32_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlse32_v_f32mf2_mu_ntl(mask, maskedoff, base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vfloat32m1_t test_vlse32_v_f32m1_mu_ntl_S1(vbool32_t mask, vfloat32m1_t maskedoff, const float32_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlse32_v_f32m1_mu_ntl(mask, maskedoff, base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vfloat32m2_t test_vlse32_v_f32m2_mu_ntl_S1(vbool16_t mask, vfloat32m2_t maskedoff, const float32_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlse32_v_f32m2_mu_ntl(mask, maskedoff, base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vfloat32m4_t test_vlse32_v_f32m4_mu_ntl_S1(vbool8_t mask, vfloat32m4_t maskedoff, const float32_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlse32_v_f32m4_mu_ntl(mask, maskedoff, base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vfloat32m8_t test_vlse32_v_f32m8_mu_ntl_S1(vbool4_t mask, vfloat32m8_t maskedoff, const float32_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlse32_v_f32m8_mu_ntl(mask, maskedoff, base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint32mf2_t test_vlse32_v_i32mf2_mu_ntl_S1(vbool64_t mask, vint32mf2_t maskedoff, const int32_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlse32_v_i32mf2_mu_ntl(mask, maskedoff, base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint32m1_t test_vlse32_v_i32m1_mu_ntl_S1(vbool32_t mask, vint32m1_t maskedoff, const int32_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlse32_v_i32m1_mu_ntl(mask, maskedoff, base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint32m2_t test_vlse32_v_i32m2_mu_ntl_S1(vbool16_t mask, vint32m2_t maskedoff, const int32_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlse32_v_i32m2_mu_ntl(mask, maskedoff, base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint32m4_t test_vlse32_v_i32m4_mu_ntl_S1(vbool8_t mask, vint32m4_t maskedoff, const int32_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlse32_v_i32m4_mu_ntl(mask, maskedoff, base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint32m8_t test_vlse32_v_i32m8_mu_ntl_S1(vbool4_t mask, vint32m8_t maskedoff, const int32_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlse32_v_i32m8_mu_ntl(mask, maskedoff, base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint32mf2_t test_vlse32_v_u32mf2_mu_ntl_S1(vbool64_t mask, vuint32mf2_t maskedoff, const uint32_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlse32_v_u32mf2_mu_ntl(mask, maskedoff, base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint32m1_t test_vlse32_v_u32m1_mu_ntl_S1(vbool32_t mask, vuint32m1_t maskedoff, const uint32_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlse32_v_u32m1_mu_ntl(mask, maskedoff, base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint32m2_t test_vlse32_v_u32m2_mu_ntl_S1(vbool16_t mask, vuint32m2_t maskedoff, const uint32_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlse32_v_u32m2_mu_ntl(mask, maskedoff, base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint32m4_t test_vlse32_v_u32m4_mu_ntl_S1(vbool8_t mask, vuint32m4_t maskedoff, const uint32_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlse32_v_u32m4_mu_ntl(mask, maskedoff, base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint32m8_t test_vlse32_v_u32m8_mu_ntl_S1(vbool4_t mask, vuint32m8_t maskedoff, const uint32_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlse32_v_u32m8_mu_ntl(mask, maskedoff, base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

