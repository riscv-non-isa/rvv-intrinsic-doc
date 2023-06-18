#include <stdint.h>
#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
#include <riscv_ntlh.h>

vfloat64m1_t test_vle64_v_f64m1_tu_ntl_ALL(vfloat64m1_t maskedoff, const float64_t *base, size_t vl, int domain) {
  return __riscv_vle64_v_f64m1_tu_ntl(maskedoff, base, vl, __RISCV_NTLH_ALL);
}

vfloat64m2_t test_vle64_v_f64m2_tu_ntl_ALL(vfloat64m2_t maskedoff, const float64_t *base, size_t vl, int domain) {
  return __riscv_vle64_v_f64m2_tu_ntl(maskedoff, base, vl, __RISCV_NTLH_ALL);
}

vfloat64m4_t test_vle64_v_f64m4_tu_ntl_ALL(vfloat64m4_t maskedoff, const float64_t *base, size_t vl, int domain) {
  return __riscv_vle64_v_f64m4_tu_ntl(maskedoff, base, vl, __RISCV_NTLH_ALL);
}

vfloat64m8_t test_vle64_v_f64m8_tu_ntl_ALL(vfloat64m8_t maskedoff, const float64_t *base, size_t vl, int domain) {
  return __riscv_vle64_v_f64m8_tu_ntl(maskedoff, base, vl, __RISCV_NTLH_ALL);
}

vint64m1_t test_vle64_v_i64m1_tu_ntl_ALL(vint64m1_t maskedoff, const int64_t *base, size_t vl, int domain) {
  return __riscv_vle64_v_i64m1_tu_ntl(maskedoff, base, vl, __RISCV_NTLH_ALL);
}

vint64m2_t test_vle64_v_i64m2_tu_ntl_ALL(vint64m2_t maskedoff, const int64_t *base, size_t vl, int domain) {
  return __riscv_vle64_v_i64m2_tu_ntl(maskedoff, base, vl, __RISCV_NTLH_ALL);
}

vint64m4_t test_vle64_v_i64m4_tu_ntl_ALL(vint64m4_t maskedoff, const int64_t *base, size_t vl, int domain) {
  return __riscv_vle64_v_i64m4_tu_ntl(maskedoff, base, vl, __RISCV_NTLH_ALL);
}

vint64m8_t test_vle64_v_i64m8_tu_ntl_ALL(vint64m8_t maskedoff, const int64_t *base, size_t vl, int domain) {
  return __riscv_vle64_v_i64m8_tu_ntl(maskedoff, base, vl, __RISCV_NTLH_ALL);
}

vuint64m1_t test_vle64_v_u64m1_tu_ntl_ALL(vuint64m1_t maskedoff, const uint64_t *base, size_t vl, int domain) {
  return __riscv_vle64_v_u64m1_tu_ntl(maskedoff, base, vl, __RISCV_NTLH_ALL);
}

vuint64m2_t test_vle64_v_u64m2_tu_ntl_ALL(vuint64m2_t maskedoff, const uint64_t *base, size_t vl, int domain) {
  return __riscv_vle64_v_u64m2_tu_ntl(maskedoff, base, vl, __RISCV_NTLH_ALL);
}

vuint64m4_t test_vle64_v_u64m4_tu_ntl_ALL(vuint64m4_t maskedoff, const uint64_t *base, size_t vl, int domain) {
  return __riscv_vle64_v_u64m4_tu_ntl(maskedoff, base, vl, __RISCV_NTLH_ALL);
}

vuint64m8_t test_vle64_v_u64m8_tu_ntl_ALL(vuint64m8_t maskedoff, const uint64_t *base, size_t vl, int domain) {
  return __riscv_vle64_v_u64m8_tu_ntl(maskedoff, base, vl, __RISCV_NTLH_ALL);
}

vfloat64m1_t test_vle64_v_f64m1_tum_ntl_ALL(vbool64_t mask, vfloat64m1_t maskedoff, const float64_t *base, size_t vl, int domain) {
  return __riscv_vle64_v_f64m1_tum_ntl(mask, maskedoff, base, vl, __RISCV_NTLH_ALL);
}

vfloat64m2_t test_vle64_v_f64m2_tum_ntl_ALL(vbool32_t mask, vfloat64m2_t maskedoff, const float64_t *base, size_t vl, int domain) {
  return __riscv_vle64_v_f64m2_tum_ntl(mask, maskedoff, base, vl, __RISCV_NTLH_ALL);
}

vfloat64m4_t test_vle64_v_f64m4_tum_ntl_ALL(vbool16_t mask, vfloat64m4_t maskedoff, const float64_t *base, size_t vl, int domain) {
  return __riscv_vle64_v_f64m4_tum_ntl(mask, maskedoff, base, vl, __RISCV_NTLH_ALL);
}

vfloat64m8_t test_vle64_v_f64m8_tum_ntl_ALL(vbool8_t mask, vfloat64m8_t maskedoff, const float64_t *base, size_t vl, int domain) {
  return __riscv_vle64_v_f64m8_tum_ntl(mask, maskedoff, base, vl, __RISCV_NTLH_ALL);
}

vint64m1_t test_vle64_v_i64m1_tum_ntl_ALL(vbool64_t mask, vint64m1_t maskedoff, const int64_t *base, size_t vl, int domain) {
  return __riscv_vle64_v_i64m1_tum_ntl(mask, maskedoff, base, vl, __RISCV_NTLH_ALL);
}

vint64m2_t test_vle64_v_i64m2_tum_ntl_ALL(vbool32_t mask, vint64m2_t maskedoff, const int64_t *base, size_t vl, int domain) {
  return __riscv_vle64_v_i64m2_tum_ntl(mask, maskedoff, base, vl, __RISCV_NTLH_ALL);
}

vint64m4_t test_vle64_v_i64m4_tum_ntl_ALL(vbool16_t mask, vint64m4_t maskedoff, const int64_t *base, size_t vl, int domain) {
  return __riscv_vle64_v_i64m4_tum_ntl(mask, maskedoff, base, vl, __RISCV_NTLH_ALL);
}

vint64m8_t test_vle64_v_i64m8_tum_ntl_ALL(vbool8_t mask, vint64m8_t maskedoff, const int64_t *base, size_t vl, int domain) {
  return __riscv_vle64_v_i64m8_tum_ntl(mask, maskedoff, base, vl, __RISCV_NTLH_ALL);
}

vuint64m1_t test_vle64_v_u64m1_tum_ntl_ALL(vbool64_t mask, vuint64m1_t maskedoff, const uint64_t *base, size_t vl, int domain) {
  return __riscv_vle64_v_u64m1_tum_ntl(mask, maskedoff, base, vl, __RISCV_NTLH_ALL);
}

vuint64m2_t test_vle64_v_u64m2_tum_ntl_ALL(vbool32_t mask, vuint64m2_t maskedoff, const uint64_t *base, size_t vl, int domain) {
  return __riscv_vle64_v_u64m2_tum_ntl(mask, maskedoff, base, vl, __RISCV_NTLH_ALL);
}

vuint64m4_t test_vle64_v_u64m4_tum_ntl_ALL(vbool16_t mask, vuint64m4_t maskedoff, const uint64_t *base, size_t vl, int domain) {
  return __riscv_vle64_v_u64m4_tum_ntl(mask, maskedoff, base, vl, __RISCV_NTLH_ALL);
}

vuint64m8_t test_vle64_v_u64m8_tum_ntl_ALL(vbool8_t mask, vuint64m8_t maskedoff, const uint64_t *base, size_t vl, int domain) {
  return __riscv_vle64_v_u64m8_tum_ntl(mask, maskedoff, base, vl, __RISCV_NTLH_ALL);
}

vfloat64m1_t test_vle64_v_f64m1_tumu_ntl_ALL(vbool64_t mask, vfloat64m1_t maskedoff, const float64_t *base, size_t vl, int domain) {
  return __riscv_vle64_v_f64m1_tumu_ntl(mask, maskedoff, base, vl, __RISCV_NTLH_ALL);
}

vfloat64m2_t test_vle64_v_f64m2_tumu_ntl_ALL(vbool32_t mask, vfloat64m2_t maskedoff, const float64_t *base, size_t vl, int domain) {
  return __riscv_vle64_v_f64m2_tumu_ntl(mask, maskedoff, base, vl, __RISCV_NTLH_ALL);
}

vfloat64m4_t test_vle64_v_f64m4_tumu_ntl_ALL(vbool16_t mask, vfloat64m4_t maskedoff, const float64_t *base, size_t vl, int domain) {
  return __riscv_vle64_v_f64m4_tumu_ntl(mask, maskedoff, base, vl, __RISCV_NTLH_ALL);
}

vfloat64m8_t test_vle64_v_f64m8_tumu_ntl_ALL(vbool8_t mask, vfloat64m8_t maskedoff, const float64_t *base, size_t vl, int domain) {
  return __riscv_vle64_v_f64m8_tumu_ntl(mask, maskedoff, base, vl, __RISCV_NTLH_ALL);
}

vint64m1_t test_vle64_v_i64m1_tumu_ntl_ALL(vbool64_t mask, vint64m1_t maskedoff, const int64_t *base, size_t vl, int domain) {
  return __riscv_vle64_v_i64m1_tumu_ntl(mask, maskedoff, base, vl, __RISCV_NTLH_ALL);
}

vint64m2_t test_vle64_v_i64m2_tumu_ntl_ALL(vbool32_t mask, vint64m2_t maskedoff, const int64_t *base, size_t vl, int domain) {
  return __riscv_vle64_v_i64m2_tumu_ntl(mask, maskedoff, base, vl, __RISCV_NTLH_ALL);
}

vint64m4_t test_vle64_v_i64m4_tumu_ntl_ALL(vbool16_t mask, vint64m4_t maskedoff, const int64_t *base, size_t vl, int domain) {
  return __riscv_vle64_v_i64m4_tumu_ntl(mask, maskedoff, base, vl, __RISCV_NTLH_ALL);
}

vint64m8_t test_vle64_v_i64m8_tumu_ntl_ALL(vbool8_t mask, vint64m8_t maskedoff, const int64_t *base, size_t vl, int domain) {
  return __riscv_vle64_v_i64m8_tumu_ntl(mask, maskedoff, base, vl, __RISCV_NTLH_ALL);
}

vuint64m1_t test_vle64_v_u64m1_tumu_ntl_ALL(vbool64_t mask, vuint64m1_t maskedoff, const uint64_t *base, size_t vl, int domain) {
  return __riscv_vle64_v_u64m1_tumu_ntl(mask, maskedoff, base, vl, __RISCV_NTLH_ALL);
}

vuint64m2_t test_vle64_v_u64m2_tumu_ntl_ALL(vbool32_t mask, vuint64m2_t maskedoff, const uint64_t *base, size_t vl, int domain) {
  return __riscv_vle64_v_u64m2_tumu_ntl(mask, maskedoff, base, vl, __RISCV_NTLH_ALL);
}

vuint64m4_t test_vle64_v_u64m4_tumu_ntl_ALL(vbool16_t mask, vuint64m4_t maskedoff, const uint64_t *base, size_t vl, int domain) {
  return __riscv_vle64_v_u64m4_tumu_ntl(mask, maskedoff, base, vl, __RISCV_NTLH_ALL);
}

vuint64m8_t test_vle64_v_u64m8_tumu_ntl_ALL(vbool8_t mask, vuint64m8_t maskedoff, const uint64_t *base, size_t vl, int domain) {
  return __riscv_vle64_v_u64m8_tumu_ntl(mask, maskedoff, base, vl, __RISCV_NTLH_ALL);
}

vfloat64m1_t test_vle64_v_f64m1_mu_ntl_ALL(vbool64_t mask, vfloat64m1_t maskedoff, const float64_t *base, size_t vl, int domain) {
  return __riscv_vle64_v_f64m1_mu_ntl(mask, maskedoff, base, vl, __RISCV_NTLH_ALL);
}

vfloat64m2_t test_vle64_v_f64m2_mu_ntl_ALL(vbool32_t mask, vfloat64m2_t maskedoff, const float64_t *base, size_t vl, int domain) {
  return __riscv_vle64_v_f64m2_mu_ntl(mask, maskedoff, base, vl, __RISCV_NTLH_ALL);
}

vfloat64m4_t test_vle64_v_f64m4_mu_ntl_ALL(vbool16_t mask, vfloat64m4_t maskedoff, const float64_t *base, size_t vl, int domain) {
  return __riscv_vle64_v_f64m4_mu_ntl(mask, maskedoff, base, vl, __RISCV_NTLH_ALL);
}

vfloat64m8_t test_vle64_v_f64m8_mu_ntl_ALL(vbool8_t mask, vfloat64m8_t maskedoff, const float64_t *base, size_t vl, int domain) {
  return __riscv_vle64_v_f64m8_mu_ntl(mask, maskedoff, base, vl, __RISCV_NTLH_ALL);
}

vint64m1_t test_vle64_v_i64m1_mu_ntl_ALL(vbool64_t mask, vint64m1_t maskedoff, const int64_t *base, size_t vl, int domain) {
  return __riscv_vle64_v_i64m1_mu_ntl(mask, maskedoff, base, vl, __RISCV_NTLH_ALL);
}

vint64m2_t test_vle64_v_i64m2_mu_ntl_ALL(vbool32_t mask, vint64m2_t maskedoff, const int64_t *base, size_t vl, int domain) {
  return __riscv_vle64_v_i64m2_mu_ntl(mask, maskedoff, base, vl, __RISCV_NTLH_ALL);
}

vint64m4_t test_vle64_v_i64m4_mu_ntl_ALL(vbool16_t mask, vint64m4_t maskedoff, const int64_t *base, size_t vl, int domain) {
  return __riscv_vle64_v_i64m4_mu_ntl(mask, maskedoff, base, vl, __RISCV_NTLH_ALL);
}

vint64m8_t test_vle64_v_i64m8_mu_ntl_ALL(vbool8_t mask, vint64m8_t maskedoff, const int64_t *base, size_t vl, int domain) {
  return __riscv_vle64_v_i64m8_mu_ntl(mask, maskedoff, base, vl, __RISCV_NTLH_ALL);
}

vuint64m1_t test_vle64_v_u64m1_mu_ntl_ALL(vbool64_t mask, vuint64m1_t maskedoff, const uint64_t *base, size_t vl, int domain) {
  return __riscv_vle64_v_u64m1_mu_ntl(mask, maskedoff, base, vl, __RISCV_NTLH_ALL);
}

vuint64m2_t test_vle64_v_u64m2_mu_ntl_ALL(vbool32_t mask, vuint64m2_t maskedoff, const uint64_t *base, size_t vl, int domain) {
  return __riscv_vle64_v_u64m2_mu_ntl(mask, maskedoff, base, vl, __RISCV_NTLH_ALL);
}

vuint64m4_t test_vle64_v_u64m4_mu_ntl_ALL(vbool16_t mask, vuint64m4_t maskedoff, const uint64_t *base, size_t vl, int domain) {
  return __riscv_vle64_v_u64m4_mu_ntl(mask, maskedoff, base, vl, __RISCV_NTLH_ALL);
}

vuint64m8_t test_vle64_v_u64m8_mu_ntl_ALL(vbool8_t mask, vuint64m8_t maskedoff, const uint64_t *base, size_t vl, int domain) {
  return __riscv_vle64_v_u64m8_mu_ntl(mask, maskedoff, base, vl, __RISCV_NTLH_ALL);
}

