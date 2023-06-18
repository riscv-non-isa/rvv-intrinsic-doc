#include <stdint.h>
#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
#include <riscv_ntlh.h>

vfloat64m1x2_t test_vlsseg2e64_v_f64m1x2_ntl_PALL(const float64_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg2e64_v_f64m1x2_ntl(base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vfloat64m2x2_t test_vlsseg2e64_v_f64m2x2_ntl_PALL(const float64_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg2e64_v_f64m2x2_ntl(base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vfloat64m4x2_t test_vlsseg2e64_v_f64m4x2_ntl_PALL(const float64_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg2e64_v_f64m4x2_ntl(base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint64m1x2_t test_vlsseg2e64_v_i64m1x2_ntl_PALL(const int64_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg2e64_v_i64m1x2_ntl(base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint64m2x2_t test_vlsseg2e64_v_i64m2x2_ntl_PALL(const int64_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg2e64_v_i64m2x2_ntl(base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint64m4x2_t test_vlsseg2e64_v_i64m4x2_ntl_PALL(const int64_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg2e64_v_i64m4x2_ntl(base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint64m1x2_t test_vlsseg2e64_v_u64m1x2_ntl_PALL(const uint64_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg2e64_v_u64m1x2_ntl(base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint64m2x2_t test_vlsseg2e64_v_u64m2x2_ntl_PALL(const uint64_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg2e64_v_u64m2x2_ntl(base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint64m4x2_t test_vlsseg2e64_v_u64m4x2_ntl_PALL(const uint64_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg2e64_v_u64m4x2_ntl(base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vfloat64m1x2_t test_vlsseg2e64_v_f64m1x2_m_ntl_PALL(vbool64_t mask, const float64_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg2e64_v_f64m1x2_m_ntl(mask, base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vfloat64m2x2_t test_vlsseg2e64_v_f64m2x2_m_ntl_PALL(vbool32_t mask, const float64_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg2e64_v_f64m2x2_m_ntl(mask, base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vfloat64m4x2_t test_vlsseg2e64_v_f64m4x2_m_ntl_PALL(vbool16_t mask, const float64_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg2e64_v_f64m4x2_m_ntl(mask, base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint64m1x2_t test_vlsseg2e64_v_i64m1x2_m_ntl_PALL(vbool64_t mask, const int64_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg2e64_v_i64m1x2_m_ntl(mask, base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint64m2x2_t test_vlsseg2e64_v_i64m2x2_m_ntl_PALL(vbool32_t mask, const int64_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg2e64_v_i64m2x2_m_ntl(mask, base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint64m4x2_t test_vlsseg2e64_v_i64m4x2_m_ntl_PALL(vbool16_t mask, const int64_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg2e64_v_i64m4x2_m_ntl(mask, base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint64m1x2_t test_vlsseg2e64_v_u64m1x2_m_ntl_PALL(vbool64_t mask, const uint64_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg2e64_v_u64m1x2_m_ntl(mask, base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint64m2x2_t test_vlsseg2e64_v_u64m2x2_m_ntl_PALL(vbool32_t mask, const uint64_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg2e64_v_u64m2x2_m_ntl(mask, base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint64m4x2_t test_vlsseg2e64_v_u64m4x2_m_ntl_PALL(vbool16_t mask, const uint64_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg2e64_v_u64m4x2_m_ntl(mask, base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

