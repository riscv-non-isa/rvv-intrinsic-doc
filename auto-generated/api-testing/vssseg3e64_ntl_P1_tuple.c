#include <stdint.h>
#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
#include <riscv_ntlh.h>

void test_vssseg3e64_v_f64m1x3_ntl_P1(float64_t *base, ptrdiff_t bstride, vfloat64m1x3_t v_tuple, size_t vl, int domain) {
  return __riscv_vssseg3e64_v_f64m1x3_ntl(base, bstride, v_tuple, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

void test_vssseg3e64_v_f64m2x3_ntl_P1(float64_t *base, ptrdiff_t bstride, vfloat64m2x3_t v_tuple, size_t vl, int domain) {
  return __riscv_vssseg3e64_v_f64m2x3_ntl(base, bstride, v_tuple, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

void test_vssseg3e64_v_i64m1x3_ntl_P1(int64_t *base, ptrdiff_t bstride, vint64m1x3_t v_tuple, size_t vl, int domain) {
  return __riscv_vssseg3e64_v_i64m1x3_ntl(base, bstride, v_tuple, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

void test_vssseg3e64_v_i64m2x3_ntl_P1(int64_t *base, ptrdiff_t bstride, vint64m2x3_t v_tuple, size_t vl, int domain) {
  return __riscv_vssseg3e64_v_i64m2x3_ntl(base, bstride, v_tuple, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

void test_vssseg3e64_v_u64m1x3_ntl_P1(uint64_t *base, ptrdiff_t bstride, vuint64m1x3_t v_tuple, size_t vl, int domain) {
  return __riscv_vssseg3e64_v_u64m1x3_ntl(base, bstride, v_tuple, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

void test_vssseg3e64_v_u64m2x3_ntl_P1(uint64_t *base, ptrdiff_t bstride, vuint64m2x3_t v_tuple, size_t vl, int domain) {
  return __riscv_vssseg3e64_v_u64m2x3_ntl(base, bstride, v_tuple, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

void test_vssseg3e64_v_f64m1x3_m_ntl_P1(vbool64_t mask, float64_t *base, ptrdiff_t bstride, vfloat64m1x3_t v_tuple, size_t vl, int domain) {
  return __riscv_vssseg3e64_v_f64m1x3_m_ntl(mask, base, bstride, v_tuple, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

void test_vssseg3e64_v_f64m2x3_m_ntl_P1(vbool32_t mask, float64_t *base, ptrdiff_t bstride, vfloat64m2x3_t v_tuple, size_t vl, int domain) {
  return __riscv_vssseg3e64_v_f64m2x3_m_ntl(mask, base, bstride, v_tuple, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

void test_vssseg3e64_v_i64m1x3_m_ntl_P1(vbool64_t mask, int64_t *base, ptrdiff_t bstride, vint64m1x3_t v_tuple, size_t vl, int domain) {
  return __riscv_vssseg3e64_v_i64m1x3_m_ntl(mask, base, bstride, v_tuple, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

void test_vssseg3e64_v_i64m2x3_m_ntl_P1(vbool32_t mask, int64_t *base, ptrdiff_t bstride, vint64m2x3_t v_tuple, size_t vl, int domain) {
  return __riscv_vssseg3e64_v_i64m2x3_m_ntl(mask, base, bstride, v_tuple, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

void test_vssseg3e64_v_u64m1x3_m_ntl_P1(vbool64_t mask, uint64_t *base, ptrdiff_t bstride, vuint64m1x3_t v_tuple, size_t vl, int domain) {
  return __riscv_vssseg3e64_v_u64m1x3_m_ntl(mask, base, bstride, v_tuple, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

void test_vssseg3e64_v_u64m2x3_m_ntl_P1(vbool32_t mask, uint64_t *base, ptrdiff_t bstride, vuint64m2x3_t v_tuple, size_t vl, int domain) {
  return __riscv_vssseg3e64_v_u64m2x3_m_ntl(mask, base, bstride, v_tuple, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

