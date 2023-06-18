#include <stdint.h>
#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
#include <riscv_ntlh.h>

void test_vsseg2e64_v_f64m1x2_ntl_ALL(float64_t *base, vfloat64m1x2_t v_tuple, size_t vl, int domain) {
  return __riscv_vsseg2e64_ntl(base, v_tuple, vl, __RISCV_NTLH_ALL);
}

void test_vsseg2e64_v_f64m2x2_ntl_ALL(float64_t *base, vfloat64m2x2_t v_tuple, size_t vl, int domain) {
  return __riscv_vsseg2e64_ntl(base, v_tuple, vl, __RISCV_NTLH_ALL);
}

void test_vsseg2e64_v_f64m4x2_ntl_ALL(float64_t *base, vfloat64m4x2_t v_tuple, size_t vl, int domain) {
  return __riscv_vsseg2e64_ntl(base, v_tuple, vl, __RISCV_NTLH_ALL);
}

void test_vsseg2e64_v_i64m1x2_ntl_ALL(int64_t *base, vint64m1x2_t v_tuple, size_t vl, int domain) {
  return __riscv_vsseg2e64_ntl(base, v_tuple, vl, __RISCV_NTLH_ALL);
}

void test_vsseg2e64_v_i64m2x2_ntl_ALL(int64_t *base, vint64m2x2_t v_tuple, size_t vl, int domain) {
  return __riscv_vsseg2e64_ntl(base, v_tuple, vl, __RISCV_NTLH_ALL);
}

void test_vsseg2e64_v_i64m4x2_ntl_ALL(int64_t *base, vint64m4x2_t v_tuple, size_t vl, int domain) {
  return __riscv_vsseg2e64_ntl(base, v_tuple, vl, __RISCV_NTLH_ALL);
}

void test_vsseg2e64_v_u64m1x2_ntl_ALL(uint64_t *base, vuint64m1x2_t v_tuple, size_t vl, int domain) {
  return __riscv_vsseg2e64_ntl(base, v_tuple, vl, __RISCV_NTLH_ALL);
}

void test_vsseg2e64_v_u64m2x2_ntl_ALL(uint64_t *base, vuint64m2x2_t v_tuple, size_t vl, int domain) {
  return __riscv_vsseg2e64_ntl(base, v_tuple, vl, __RISCV_NTLH_ALL);
}

void test_vsseg2e64_v_u64m4x2_ntl_ALL(uint64_t *base, vuint64m4x2_t v_tuple, size_t vl, int domain) {
  return __riscv_vsseg2e64_ntl(base, v_tuple, vl, __RISCV_NTLH_ALL);
}

void test_vsseg2e64_v_f64m1x2_m_ntl_ALL(vbool64_t mask, float64_t *base, vfloat64m1x2_t v_tuple, size_t vl, int domain) {
  return __riscv_vsseg2e64_ntl(mask, base, v_tuple, vl, __RISCV_NTLH_ALL);
}

void test_vsseg2e64_v_f64m2x2_m_ntl_ALL(vbool32_t mask, float64_t *base, vfloat64m2x2_t v_tuple, size_t vl, int domain) {
  return __riscv_vsseg2e64_ntl(mask, base, v_tuple, vl, __RISCV_NTLH_ALL);
}

void test_vsseg2e64_v_f64m4x2_m_ntl_ALL(vbool16_t mask, float64_t *base, vfloat64m4x2_t v_tuple, size_t vl, int domain) {
  return __riscv_vsseg2e64_ntl(mask, base, v_tuple, vl, __RISCV_NTLH_ALL);
}

void test_vsseg2e64_v_i64m1x2_m_ntl_ALL(vbool64_t mask, int64_t *base, vint64m1x2_t v_tuple, size_t vl, int domain) {
  return __riscv_vsseg2e64_ntl(mask, base, v_tuple, vl, __RISCV_NTLH_ALL);
}

void test_vsseg2e64_v_i64m2x2_m_ntl_ALL(vbool32_t mask, int64_t *base, vint64m2x2_t v_tuple, size_t vl, int domain) {
  return __riscv_vsseg2e64_ntl(mask, base, v_tuple, vl, __RISCV_NTLH_ALL);
}

void test_vsseg2e64_v_i64m4x2_m_ntl_ALL(vbool16_t mask, int64_t *base, vint64m4x2_t v_tuple, size_t vl, int domain) {
  return __riscv_vsseg2e64_ntl(mask, base, v_tuple, vl, __RISCV_NTLH_ALL);
}

void test_vsseg2e64_v_u64m1x2_m_ntl_ALL(vbool64_t mask, uint64_t *base, vuint64m1x2_t v_tuple, size_t vl, int domain) {
  return __riscv_vsseg2e64_ntl(mask, base, v_tuple, vl, __RISCV_NTLH_ALL);
}

void test_vsseg2e64_v_u64m2x2_m_ntl_ALL(vbool32_t mask, uint64_t *base, vuint64m2x2_t v_tuple, size_t vl, int domain) {
  return __riscv_vsseg2e64_ntl(mask, base, v_tuple, vl, __RISCV_NTLH_ALL);
}

void test_vsseg2e64_v_u64m4x2_m_ntl_ALL(vbool16_t mask, uint64_t *base, vuint64m4x2_t v_tuple, size_t vl, int domain) {
  return __riscv_vsseg2e64_ntl(mask, base, v_tuple, vl, __RISCV_NTLH_ALL);
}

