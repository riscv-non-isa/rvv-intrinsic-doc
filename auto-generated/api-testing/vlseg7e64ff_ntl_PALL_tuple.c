#include <stdint.h>
#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
#include <riscv_ntlh.h>

vfloat64m1x7_t test_vlseg7e64ff_v_f64m1x7_ntl_PALL(const float64_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg7e64ff_v_f64m1x7_ntl(base, new_vl, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint64m1x7_t test_vlseg7e64ff_v_i64m1x7_ntl_PALL(const int64_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg7e64ff_v_i64m1x7_ntl(base, new_vl, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint64m1x7_t test_vlseg7e64ff_v_u64m1x7_ntl_PALL(const uint64_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg7e64ff_v_u64m1x7_ntl(base, new_vl, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vfloat64m1x7_t test_vlseg7e64ff_v_f64m1x7_m_ntl_PALL(vbool64_t mask, const float64_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg7e64ff_v_f64m1x7_m_ntl(mask, base, new_vl, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint64m1x7_t test_vlseg7e64ff_v_i64m1x7_m_ntl_PALL(vbool64_t mask, const int64_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg7e64ff_v_i64m1x7_m_ntl(mask, base, new_vl, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint64m1x7_t test_vlseg7e64ff_v_u64m1x7_m_ntl_PALL(vbool64_t mask, const uint64_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg7e64ff_v_u64m1x7_m_ntl(mask, base, new_vl, vl, __RISCV_NTLH_ALL_PRIVATE);
}

