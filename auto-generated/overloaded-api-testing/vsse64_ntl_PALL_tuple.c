#include <stdint.h>
#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
#include <riscv_ntlh.h>

void test_vsse64_v_f64m1_ntl_PALL(float64_t *base, ptrdiff_t bstride, vfloat64m1_t value, size_t vl, int domain) {
  return __riscv_vsse64_ntl(base, bstride, value, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vsse64_v_f64m2_ntl_PALL(float64_t *base, ptrdiff_t bstride, vfloat64m2_t value, size_t vl, int domain) {
  return __riscv_vsse64_ntl(base, bstride, value, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vsse64_v_f64m4_ntl_PALL(float64_t *base, ptrdiff_t bstride, vfloat64m4_t value, size_t vl, int domain) {
  return __riscv_vsse64_ntl(base, bstride, value, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vsse64_v_f64m8_ntl_PALL(float64_t *base, ptrdiff_t bstride, vfloat64m8_t value, size_t vl, int domain) {
  return __riscv_vsse64_ntl(base, bstride, value, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vsse64_v_i64m1_ntl_PALL(int64_t *base, ptrdiff_t bstride, vint64m1_t value, size_t vl, int domain) {
  return __riscv_vsse64_ntl(base, bstride, value, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vsse64_v_i64m2_ntl_PALL(int64_t *base, ptrdiff_t bstride, vint64m2_t value, size_t vl, int domain) {
  return __riscv_vsse64_ntl(base, bstride, value, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vsse64_v_i64m4_ntl_PALL(int64_t *base, ptrdiff_t bstride, vint64m4_t value, size_t vl, int domain) {
  return __riscv_vsse64_ntl(base, bstride, value, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vsse64_v_i64m8_ntl_PALL(int64_t *base, ptrdiff_t bstride, vint64m8_t value, size_t vl, int domain) {
  return __riscv_vsse64_ntl(base, bstride, value, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vsse64_v_u64m1_ntl_PALL(uint64_t *base, ptrdiff_t bstride, vuint64m1_t value, size_t vl, int domain) {
  return __riscv_vsse64_ntl(base, bstride, value, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vsse64_v_u64m2_ntl_PALL(uint64_t *base, ptrdiff_t bstride, vuint64m2_t value, size_t vl, int domain) {
  return __riscv_vsse64_ntl(base, bstride, value, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vsse64_v_u64m4_ntl_PALL(uint64_t *base, ptrdiff_t bstride, vuint64m4_t value, size_t vl, int domain) {
  return __riscv_vsse64_ntl(base, bstride, value, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vsse64_v_u64m8_ntl_PALL(uint64_t *base, ptrdiff_t bstride, vuint64m8_t value, size_t vl, int domain) {
  return __riscv_vsse64_ntl(base, bstride, value, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vsse64_v_f64m1_m_ntl_PALL(vbool64_t mask, float64_t *base, ptrdiff_t bstride, vfloat64m1_t value, size_t vl, int domain) {
  return __riscv_vsse64_ntl(mask, base, bstride, value, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vsse64_v_f64m2_m_ntl_PALL(vbool32_t mask, float64_t *base, ptrdiff_t bstride, vfloat64m2_t value, size_t vl, int domain) {
  return __riscv_vsse64_ntl(mask, base, bstride, value, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vsse64_v_f64m4_m_ntl_PALL(vbool16_t mask, float64_t *base, ptrdiff_t bstride, vfloat64m4_t value, size_t vl, int domain) {
  return __riscv_vsse64_ntl(mask, base, bstride, value, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vsse64_v_f64m8_m_ntl_PALL(vbool8_t mask, float64_t *base, ptrdiff_t bstride, vfloat64m8_t value, size_t vl, int domain) {
  return __riscv_vsse64_ntl(mask, base, bstride, value, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vsse64_v_i64m1_m_ntl_PALL(vbool64_t mask, int64_t *base, ptrdiff_t bstride, vint64m1_t value, size_t vl, int domain) {
  return __riscv_vsse64_ntl(mask, base, bstride, value, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vsse64_v_i64m2_m_ntl_PALL(vbool32_t mask, int64_t *base, ptrdiff_t bstride, vint64m2_t value, size_t vl, int domain) {
  return __riscv_vsse64_ntl(mask, base, bstride, value, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vsse64_v_i64m4_m_ntl_PALL(vbool16_t mask, int64_t *base, ptrdiff_t bstride, vint64m4_t value, size_t vl, int domain) {
  return __riscv_vsse64_ntl(mask, base, bstride, value, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vsse64_v_i64m8_m_ntl_PALL(vbool8_t mask, int64_t *base, ptrdiff_t bstride, vint64m8_t value, size_t vl, int domain) {
  return __riscv_vsse64_ntl(mask, base, bstride, value, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vsse64_v_u64m1_m_ntl_PALL(vbool64_t mask, uint64_t *base, ptrdiff_t bstride, vuint64m1_t value, size_t vl, int domain) {
  return __riscv_vsse64_ntl(mask, base, bstride, value, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vsse64_v_u64m2_m_ntl_PALL(vbool32_t mask, uint64_t *base, ptrdiff_t bstride, vuint64m2_t value, size_t vl, int domain) {
  return __riscv_vsse64_ntl(mask, base, bstride, value, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vsse64_v_u64m4_m_ntl_PALL(vbool16_t mask, uint64_t *base, ptrdiff_t bstride, vuint64m4_t value, size_t vl, int domain) {
  return __riscv_vsse64_ntl(mask, base, bstride, value, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vsse64_v_u64m8_m_ntl_PALL(vbool8_t mask, uint64_t *base, ptrdiff_t bstride, vuint64m8_t value, size_t vl, int domain) {
  return __riscv_vsse64_ntl(mask, base, bstride, value, vl, __RISCV_NTLH_ALL_PRIVATE);
}

