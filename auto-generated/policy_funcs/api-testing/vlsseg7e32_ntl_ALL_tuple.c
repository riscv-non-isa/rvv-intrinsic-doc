#include <stdint.h>
#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
#include <riscv_ntlh.h>

vfloat32mf2x7_t test_vlsseg7e32_v_f32mf2x7_tu_ntl_ALL(vfloat32mf2x7_t maskedoff_tuple, const float32_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg7e32_v_f32mf2x7_tu_ntl(maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_ALL);
}

vfloat32m1x7_t test_vlsseg7e32_v_f32m1x7_tu_ntl_ALL(vfloat32m1x7_t maskedoff_tuple, const float32_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg7e32_v_f32m1x7_tu_ntl(maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_ALL);
}

vint32mf2x7_t test_vlsseg7e32_v_i32mf2x7_tu_ntl_ALL(vint32mf2x7_t maskedoff_tuple, const int32_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg7e32_v_i32mf2x7_tu_ntl(maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_ALL);
}

vint32m1x7_t test_vlsseg7e32_v_i32m1x7_tu_ntl_ALL(vint32m1x7_t maskedoff_tuple, const int32_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg7e32_v_i32m1x7_tu_ntl(maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_ALL);
}

vuint32mf2x7_t test_vlsseg7e32_v_u32mf2x7_tu_ntl_ALL(vuint32mf2x7_t maskedoff_tuple, const uint32_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg7e32_v_u32mf2x7_tu_ntl(maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_ALL);
}

vuint32m1x7_t test_vlsseg7e32_v_u32m1x7_tu_ntl_ALL(vuint32m1x7_t maskedoff_tuple, const uint32_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg7e32_v_u32m1x7_tu_ntl(maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_ALL);
}

vfloat32mf2x7_t test_vlsseg7e32_v_f32mf2x7_tum_ntl_ALL(vbool64_t mask, vfloat32mf2x7_t maskedoff_tuple, const float32_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg7e32_v_f32mf2x7_tum_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_ALL);
}

vfloat32m1x7_t test_vlsseg7e32_v_f32m1x7_tum_ntl_ALL(vbool32_t mask, vfloat32m1x7_t maskedoff_tuple, const float32_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg7e32_v_f32m1x7_tum_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_ALL);
}

vint32mf2x7_t test_vlsseg7e32_v_i32mf2x7_tum_ntl_ALL(vbool64_t mask, vint32mf2x7_t maskedoff_tuple, const int32_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg7e32_v_i32mf2x7_tum_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_ALL);
}

vint32m1x7_t test_vlsseg7e32_v_i32m1x7_tum_ntl_ALL(vbool32_t mask, vint32m1x7_t maskedoff_tuple, const int32_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg7e32_v_i32m1x7_tum_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_ALL);
}

vuint32mf2x7_t test_vlsseg7e32_v_u32mf2x7_tum_ntl_ALL(vbool64_t mask, vuint32mf2x7_t maskedoff_tuple, const uint32_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg7e32_v_u32mf2x7_tum_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_ALL);
}

vuint32m1x7_t test_vlsseg7e32_v_u32m1x7_tum_ntl_ALL(vbool32_t mask, vuint32m1x7_t maskedoff_tuple, const uint32_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg7e32_v_u32m1x7_tum_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_ALL);
}

vfloat32mf2x7_t test_vlsseg7e32_v_f32mf2x7_tumu_ntl_ALL(vbool64_t mask, vfloat32mf2x7_t maskedoff_tuple, const float32_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg7e32_v_f32mf2x7_tumu_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_ALL);
}

vfloat32m1x7_t test_vlsseg7e32_v_f32m1x7_tumu_ntl_ALL(vbool32_t mask, vfloat32m1x7_t maskedoff_tuple, const float32_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg7e32_v_f32m1x7_tumu_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_ALL);
}

vint32mf2x7_t test_vlsseg7e32_v_i32mf2x7_tumu_ntl_ALL(vbool64_t mask, vint32mf2x7_t maskedoff_tuple, const int32_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg7e32_v_i32mf2x7_tumu_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_ALL);
}

vint32m1x7_t test_vlsseg7e32_v_i32m1x7_tumu_ntl_ALL(vbool32_t mask, vint32m1x7_t maskedoff_tuple, const int32_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg7e32_v_i32m1x7_tumu_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_ALL);
}

vuint32mf2x7_t test_vlsseg7e32_v_u32mf2x7_tumu_ntl_ALL(vbool64_t mask, vuint32mf2x7_t maskedoff_tuple, const uint32_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg7e32_v_u32mf2x7_tumu_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_ALL);
}

vuint32m1x7_t test_vlsseg7e32_v_u32m1x7_tumu_ntl_ALL(vbool32_t mask, vuint32m1x7_t maskedoff_tuple, const uint32_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg7e32_v_u32m1x7_tumu_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_ALL);
}

vfloat32mf2x7_t test_vlsseg7e32_v_f32mf2x7_mu_ntl_ALL(vbool64_t mask, vfloat32mf2x7_t maskedoff_tuple, const float32_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg7e32_v_f32mf2x7_mu_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_ALL);
}

vfloat32m1x7_t test_vlsseg7e32_v_f32m1x7_mu_ntl_ALL(vbool32_t mask, vfloat32m1x7_t maskedoff_tuple, const float32_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg7e32_v_f32m1x7_mu_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_ALL);
}

vint32mf2x7_t test_vlsseg7e32_v_i32mf2x7_mu_ntl_ALL(vbool64_t mask, vint32mf2x7_t maskedoff_tuple, const int32_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg7e32_v_i32mf2x7_mu_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_ALL);
}

vint32m1x7_t test_vlsseg7e32_v_i32m1x7_mu_ntl_ALL(vbool32_t mask, vint32m1x7_t maskedoff_tuple, const int32_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg7e32_v_i32m1x7_mu_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_ALL);
}

vuint32mf2x7_t test_vlsseg7e32_v_u32mf2x7_mu_ntl_ALL(vbool64_t mask, vuint32mf2x7_t maskedoff_tuple, const uint32_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg7e32_v_u32mf2x7_mu_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_ALL);
}

vuint32m1x7_t test_vlsseg7e32_v_u32m1x7_mu_ntl_ALL(vbool32_t mask, vuint32m1x7_t maskedoff_tuple, const uint32_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg7e32_v_u32m1x7_mu_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_ALL);
}

