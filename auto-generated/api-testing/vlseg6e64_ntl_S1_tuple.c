#include <stdint.h>
#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
#include <riscv_ntlh.h>

vfloat64m1x6_t test_vlseg6e64_v_f64m1x6_ntl_S1(const float64_t *base, size_t vl, int domain) {
  return __riscv_vlseg6e64_v_f64m1x6_ntl(base, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint64m1x6_t test_vlseg6e64_v_i64m1x6_ntl_S1(const int64_t *base, size_t vl, int domain) {
  return __riscv_vlseg6e64_v_i64m1x6_ntl(base, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint64m1x6_t test_vlseg6e64_v_u64m1x6_ntl_S1(const uint64_t *base, size_t vl, int domain) {
  return __riscv_vlseg6e64_v_u64m1x6_ntl(base, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vfloat64m1x6_t test_vlseg6e64_v_f64m1x6_m_ntl_S1(vbool64_t mask, const float64_t *base, size_t vl, int domain) {
  return __riscv_vlseg6e64_v_f64m1x6_m_ntl(mask, base, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint64m1x6_t test_vlseg6e64_v_i64m1x6_m_ntl_S1(vbool64_t mask, const int64_t *base, size_t vl, int domain) {
  return __riscv_vlseg6e64_v_i64m1x6_m_ntl(mask, base, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint64m1x6_t test_vlseg6e64_v_u64m1x6_m_ntl_S1(vbool64_t mask, const uint64_t *base, size_t vl, int domain) {
  return __riscv_vlseg6e64_v_u64m1x6_m_ntl(mask, base, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

