#include <stdint.h>
#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
#include <riscv_ntlh.h>

vfloat64m1x4_t test_vlsseg4e64_v_f64m1x4_tu_ntl_ALL(vfloat64m1x4_t maskedoff_tuple, const float64_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg4e64_v_f64m1x4_tu_ntl(maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_ALL);
}

vfloat64m2x4_t test_vlsseg4e64_v_f64m2x4_tu_ntl_ALL(vfloat64m2x4_t maskedoff_tuple, const float64_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg4e64_v_f64m2x4_tu_ntl(maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_ALL);
}

vint64m1x4_t test_vlsseg4e64_v_i64m1x4_tu_ntl_ALL(vint64m1x4_t maskedoff_tuple, const int64_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg4e64_v_i64m1x4_tu_ntl(maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_ALL);
}

vint64m2x4_t test_vlsseg4e64_v_i64m2x4_tu_ntl_ALL(vint64m2x4_t maskedoff_tuple, const int64_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg4e64_v_i64m2x4_tu_ntl(maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_ALL);
}

vuint64m1x4_t test_vlsseg4e64_v_u64m1x4_tu_ntl_ALL(vuint64m1x4_t maskedoff_tuple, const uint64_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg4e64_v_u64m1x4_tu_ntl(maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_ALL);
}

vuint64m2x4_t test_vlsseg4e64_v_u64m2x4_tu_ntl_ALL(vuint64m2x4_t maskedoff_tuple, const uint64_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg4e64_v_u64m2x4_tu_ntl(maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_ALL);
}

vfloat64m1x4_t test_vlsseg4e64_v_f64m1x4_tum_ntl_ALL(vbool64_t mask, vfloat64m1x4_t maskedoff_tuple, const float64_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg4e64_v_f64m1x4_tum_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_ALL);
}

vfloat64m2x4_t test_vlsseg4e64_v_f64m2x4_tum_ntl_ALL(vbool32_t mask, vfloat64m2x4_t maskedoff_tuple, const float64_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg4e64_v_f64m2x4_tum_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_ALL);
}

vint64m1x4_t test_vlsseg4e64_v_i64m1x4_tum_ntl_ALL(vbool64_t mask, vint64m1x4_t maskedoff_tuple, const int64_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg4e64_v_i64m1x4_tum_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_ALL);
}

vint64m2x4_t test_vlsseg4e64_v_i64m2x4_tum_ntl_ALL(vbool32_t mask, vint64m2x4_t maskedoff_tuple, const int64_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg4e64_v_i64m2x4_tum_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_ALL);
}

vuint64m1x4_t test_vlsseg4e64_v_u64m1x4_tum_ntl_ALL(vbool64_t mask, vuint64m1x4_t maskedoff_tuple, const uint64_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg4e64_v_u64m1x4_tum_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_ALL);
}

vuint64m2x4_t test_vlsseg4e64_v_u64m2x4_tum_ntl_ALL(vbool32_t mask, vuint64m2x4_t maskedoff_tuple, const uint64_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg4e64_v_u64m2x4_tum_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_ALL);
}

vfloat64m1x4_t test_vlsseg4e64_v_f64m1x4_tumu_ntl_ALL(vbool64_t mask, vfloat64m1x4_t maskedoff_tuple, const float64_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg4e64_v_f64m1x4_tumu_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_ALL);
}

vfloat64m2x4_t test_vlsseg4e64_v_f64m2x4_tumu_ntl_ALL(vbool32_t mask, vfloat64m2x4_t maskedoff_tuple, const float64_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg4e64_v_f64m2x4_tumu_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_ALL);
}

vint64m1x4_t test_vlsseg4e64_v_i64m1x4_tumu_ntl_ALL(vbool64_t mask, vint64m1x4_t maskedoff_tuple, const int64_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg4e64_v_i64m1x4_tumu_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_ALL);
}

vint64m2x4_t test_vlsseg4e64_v_i64m2x4_tumu_ntl_ALL(vbool32_t mask, vint64m2x4_t maskedoff_tuple, const int64_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg4e64_v_i64m2x4_tumu_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_ALL);
}

vuint64m1x4_t test_vlsseg4e64_v_u64m1x4_tumu_ntl_ALL(vbool64_t mask, vuint64m1x4_t maskedoff_tuple, const uint64_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg4e64_v_u64m1x4_tumu_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_ALL);
}

vuint64m2x4_t test_vlsseg4e64_v_u64m2x4_tumu_ntl_ALL(vbool32_t mask, vuint64m2x4_t maskedoff_tuple, const uint64_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg4e64_v_u64m2x4_tumu_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_ALL);
}

vfloat64m1x4_t test_vlsseg4e64_v_f64m1x4_mu_ntl_ALL(vbool64_t mask, vfloat64m1x4_t maskedoff_tuple, const float64_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg4e64_v_f64m1x4_mu_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_ALL);
}

vfloat64m2x4_t test_vlsseg4e64_v_f64m2x4_mu_ntl_ALL(vbool32_t mask, vfloat64m2x4_t maskedoff_tuple, const float64_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg4e64_v_f64m2x4_mu_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_ALL);
}

vint64m1x4_t test_vlsseg4e64_v_i64m1x4_mu_ntl_ALL(vbool64_t mask, vint64m1x4_t maskedoff_tuple, const int64_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg4e64_v_i64m1x4_mu_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_ALL);
}

vint64m2x4_t test_vlsseg4e64_v_i64m2x4_mu_ntl_ALL(vbool32_t mask, vint64m2x4_t maskedoff_tuple, const int64_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg4e64_v_i64m2x4_mu_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_ALL);
}

vuint64m1x4_t test_vlsseg4e64_v_u64m1x4_mu_ntl_ALL(vbool64_t mask, vuint64m1x4_t maskedoff_tuple, const uint64_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg4e64_v_u64m1x4_mu_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_ALL);
}

vuint64m2x4_t test_vlsseg4e64_v_u64m2x4_mu_ntl_ALL(vbool32_t mask, vuint64m2x4_t maskedoff_tuple, const uint64_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg4e64_v_u64m2x4_mu_ntl(mask, maskedoff_tuple, base, bstride, vl, __RISCV_NTLH_ALL);
}

