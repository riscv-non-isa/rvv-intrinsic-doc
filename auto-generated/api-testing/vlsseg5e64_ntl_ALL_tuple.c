#include <stdint.h>
#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
#include <riscv_ntlh.h>

vfloat64m1x5_t test_vlsseg5e64_v_f64m1x5_ntl_ALL(const float64_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg5e64_v_f64m1x5_ntl(base, bstride, vl, __RISCV_NTLH_ALL);
}

vint64m1x5_t test_vlsseg5e64_v_i64m1x5_ntl_ALL(const int64_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg5e64_v_i64m1x5_ntl(base, bstride, vl, __RISCV_NTLH_ALL);
}

vuint64m1x5_t test_vlsseg5e64_v_u64m1x5_ntl_ALL(const uint64_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg5e64_v_u64m1x5_ntl(base, bstride, vl, __RISCV_NTLH_ALL);
}

vfloat64m1x5_t test_vlsseg5e64_v_f64m1x5_m_ntl_ALL(vbool64_t mask, const float64_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg5e64_v_f64m1x5_m_ntl(mask, base, bstride, vl, __RISCV_NTLH_ALL);
}

vint64m1x5_t test_vlsseg5e64_v_i64m1x5_m_ntl_ALL(vbool64_t mask, const int64_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg5e64_v_i64m1x5_m_ntl(mask, base, bstride, vl, __RISCV_NTLH_ALL);
}

vuint64m1x5_t test_vlsseg5e64_v_u64m1x5_m_ntl_ALL(vbool64_t mask, const uint64_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg5e64_v_u64m1x5_m_ntl(mask, base, bstride, vl, __RISCV_NTLH_ALL);
}

