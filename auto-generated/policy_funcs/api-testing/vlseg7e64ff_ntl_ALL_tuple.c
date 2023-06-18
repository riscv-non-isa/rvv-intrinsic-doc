#include <stdint.h>
#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
#include <riscv_ntlh.h>

vfloat64m1x7_t test_vlseg7e64ff_v_f64m1x7_tu_ntl_ALL(vfloat64m1x7_t maskedoff_tuple, const float64_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg7e64ff_v_f64m1x7_tu_ntl(maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL);
}

vint64m1x7_t test_vlseg7e64ff_v_i64m1x7_tu_ntl_ALL(vint64m1x7_t maskedoff_tuple, const int64_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg7e64ff_v_i64m1x7_tu_ntl(maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL);
}

vuint64m1x7_t test_vlseg7e64ff_v_u64m1x7_tu_ntl_ALL(vuint64m1x7_t maskedoff_tuple, const uint64_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg7e64ff_v_u64m1x7_tu_ntl(maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL);
}

vfloat64m1x7_t test_vlseg7e64ff_v_f64m1x7_tum_ntl_ALL(vbool64_t mask, vfloat64m1x7_t maskedoff_tuple, const float64_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg7e64ff_v_f64m1x7_tum_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL);
}

vint64m1x7_t test_vlseg7e64ff_v_i64m1x7_tum_ntl_ALL(vbool64_t mask, vint64m1x7_t maskedoff_tuple, const int64_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg7e64ff_v_i64m1x7_tum_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL);
}

vuint64m1x7_t test_vlseg7e64ff_v_u64m1x7_tum_ntl_ALL(vbool64_t mask, vuint64m1x7_t maskedoff_tuple, const uint64_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg7e64ff_v_u64m1x7_tum_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL);
}

vfloat64m1x7_t test_vlseg7e64ff_v_f64m1x7_tumu_ntl_ALL(vbool64_t mask, vfloat64m1x7_t maskedoff_tuple, const float64_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg7e64ff_v_f64m1x7_tumu_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL);
}

vint64m1x7_t test_vlseg7e64ff_v_i64m1x7_tumu_ntl_ALL(vbool64_t mask, vint64m1x7_t maskedoff_tuple, const int64_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg7e64ff_v_i64m1x7_tumu_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL);
}

vuint64m1x7_t test_vlseg7e64ff_v_u64m1x7_tumu_ntl_ALL(vbool64_t mask, vuint64m1x7_t maskedoff_tuple, const uint64_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg7e64ff_v_u64m1x7_tumu_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL);
}

vfloat64m1x7_t test_vlseg7e64ff_v_f64m1x7_mu_ntl_ALL(vbool64_t mask, vfloat64m1x7_t maskedoff_tuple, const float64_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg7e64ff_v_f64m1x7_mu_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL);
}

vint64m1x7_t test_vlseg7e64ff_v_i64m1x7_mu_ntl_ALL(vbool64_t mask, vint64m1x7_t maskedoff_tuple, const int64_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg7e64ff_v_i64m1x7_mu_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL);
}

vuint64m1x7_t test_vlseg7e64ff_v_u64m1x7_mu_ntl_ALL(vbool64_t mask, vuint64m1x7_t maskedoff_tuple, const uint64_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg7e64ff_v_u64m1x7_mu_ntl(mask, maskedoff_tuple, base, new_vl, vl, __RISCV_NTLH_ALL);
}

