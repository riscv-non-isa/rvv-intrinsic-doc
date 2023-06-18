#include <stdint.h>
#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
#include <riscv_ntlh.h>

void test_vsseg5e64_v_f64m1x5_ntl_S1(float64_t *base, vfloat64m1x5_t v_tuple, size_t vl, int domain) {
  return __riscv_vsseg5e64_ntl(base, v_tuple, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vsseg5e64_v_i64m1x5_ntl_S1(int64_t *base, vint64m1x5_t v_tuple, size_t vl, int domain) {
  return __riscv_vsseg5e64_ntl(base, v_tuple, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vsseg5e64_v_u64m1x5_ntl_S1(uint64_t *base, vuint64m1x5_t v_tuple, size_t vl, int domain) {
  return __riscv_vsseg5e64_ntl(base, v_tuple, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vsseg5e64_v_f64m1x5_m_ntl_S1(vbool64_t mask, float64_t *base, vfloat64m1x5_t v_tuple, size_t vl, int domain) {
  return __riscv_vsseg5e64_ntl(mask, base, v_tuple, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vsseg5e64_v_i64m1x5_m_ntl_S1(vbool64_t mask, int64_t *base, vint64m1x5_t v_tuple, size_t vl, int domain) {
  return __riscv_vsseg5e64_ntl(mask, base, v_tuple, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vsseg5e64_v_u64m1x5_m_ntl_S1(vbool64_t mask, uint64_t *base, vuint64m1x5_t v_tuple, size_t vl, int domain) {
  return __riscv_vsseg5e64_ntl(mask, base, v_tuple, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

