#include <stdint.h>
#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
#include <riscv_ntlh.h>

void test_vssseg7e64_v_f64m1x7_ntl_S1(float64_t *base, ptrdiff_t bstride, vfloat64m1x7_t v_tuple, size_t vl, int domain) {
  return __riscv_vssseg7e64_ntl(base, bstride, v_tuple, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vssseg7e64_v_i64m1x7_ntl_S1(int64_t *base, ptrdiff_t bstride, vint64m1x7_t v_tuple, size_t vl, int domain) {
  return __riscv_vssseg7e64_ntl(base, bstride, v_tuple, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vssseg7e64_v_u64m1x7_ntl_S1(uint64_t *base, ptrdiff_t bstride, vuint64m1x7_t v_tuple, size_t vl, int domain) {
  return __riscv_vssseg7e64_ntl(base, bstride, v_tuple, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vssseg7e64_v_f64m1x7_m_ntl_S1(vbool64_t mask, float64_t *base, ptrdiff_t bstride, vfloat64m1x7_t v_tuple, size_t vl, int domain) {
  return __riscv_vssseg7e64_ntl(mask, base, bstride, v_tuple, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vssseg7e64_v_i64m1x7_m_ntl_S1(vbool64_t mask, int64_t *base, ptrdiff_t bstride, vint64m1x7_t v_tuple, size_t vl, int domain) {
  return __riscv_vssseg7e64_ntl(mask, base, bstride, v_tuple, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vssseg7e64_v_u64m1x7_m_ntl_S1(vbool64_t mask, uint64_t *base, ptrdiff_t bstride, vuint64m1x7_t v_tuple, size_t vl, int domain) {
  return __riscv_vssseg7e64_ntl(mask, base, bstride, v_tuple, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

