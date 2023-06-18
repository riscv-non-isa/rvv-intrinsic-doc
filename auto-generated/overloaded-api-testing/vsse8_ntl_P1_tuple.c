#include <stdint.h>
#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
#include <riscv_ntlh.h>

void test_vsse8_v_i8mf8_ntl_P1(int8_t *base, ptrdiff_t bstride, vint8mf8_t value, size_t vl, int domain) {
  return __riscv_vsse8_ntl(base, bstride, value, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

void test_vsse8_v_i8mf4_ntl_P1(int8_t *base, ptrdiff_t bstride, vint8mf4_t value, size_t vl, int domain) {
  return __riscv_vsse8_ntl(base, bstride, value, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

void test_vsse8_v_i8mf2_ntl_P1(int8_t *base, ptrdiff_t bstride, vint8mf2_t value, size_t vl, int domain) {
  return __riscv_vsse8_ntl(base, bstride, value, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

void test_vsse8_v_i8m1_ntl_P1(int8_t *base, ptrdiff_t bstride, vint8m1_t value, size_t vl, int domain) {
  return __riscv_vsse8_ntl(base, bstride, value, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

void test_vsse8_v_i8m2_ntl_P1(int8_t *base, ptrdiff_t bstride, vint8m2_t value, size_t vl, int domain) {
  return __riscv_vsse8_ntl(base, bstride, value, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

void test_vsse8_v_i8m4_ntl_P1(int8_t *base, ptrdiff_t bstride, vint8m4_t value, size_t vl, int domain) {
  return __riscv_vsse8_ntl(base, bstride, value, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

void test_vsse8_v_i8m8_ntl_P1(int8_t *base, ptrdiff_t bstride, vint8m8_t value, size_t vl, int domain) {
  return __riscv_vsse8_ntl(base, bstride, value, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

void test_vsse8_v_u8mf8_ntl_P1(uint8_t *base, ptrdiff_t bstride, vuint8mf8_t value, size_t vl, int domain) {
  return __riscv_vsse8_ntl(base, bstride, value, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

void test_vsse8_v_u8mf4_ntl_P1(uint8_t *base, ptrdiff_t bstride, vuint8mf4_t value, size_t vl, int domain) {
  return __riscv_vsse8_ntl(base, bstride, value, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

void test_vsse8_v_u8mf2_ntl_P1(uint8_t *base, ptrdiff_t bstride, vuint8mf2_t value, size_t vl, int domain) {
  return __riscv_vsse8_ntl(base, bstride, value, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

void test_vsse8_v_u8m1_ntl_P1(uint8_t *base, ptrdiff_t bstride, vuint8m1_t value, size_t vl, int domain) {
  return __riscv_vsse8_ntl(base, bstride, value, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

void test_vsse8_v_u8m2_ntl_P1(uint8_t *base, ptrdiff_t bstride, vuint8m2_t value, size_t vl, int domain) {
  return __riscv_vsse8_ntl(base, bstride, value, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

void test_vsse8_v_u8m4_ntl_P1(uint8_t *base, ptrdiff_t bstride, vuint8m4_t value, size_t vl, int domain) {
  return __riscv_vsse8_ntl(base, bstride, value, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

void test_vsse8_v_u8m8_ntl_P1(uint8_t *base, ptrdiff_t bstride, vuint8m8_t value, size_t vl, int domain) {
  return __riscv_vsse8_ntl(base, bstride, value, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

void test_vsse8_v_i8mf8_m_ntl_P1(vbool64_t mask, int8_t *base, ptrdiff_t bstride, vint8mf8_t value, size_t vl, int domain) {
  return __riscv_vsse8_ntl(mask, base, bstride, value, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

void test_vsse8_v_i8mf4_m_ntl_P1(vbool32_t mask, int8_t *base, ptrdiff_t bstride, vint8mf4_t value, size_t vl, int domain) {
  return __riscv_vsse8_ntl(mask, base, bstride, value, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

void test_vsse8_v_i8mf2_m_ntl_P1(vbool16_t mask, int8_t *base, ptrdiff_t bstride, vint8mf2_t value, size_t vl, int domain) {
  return __riscv_vsse8_ntl(mask, base, bstride, value, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

void test_vsse8_v_i8m1_m_ntl_P1(vbool8_t mask, int8_t *base, ptrdiff_t bstride, vint8m1_t value, size_t vl, int domain) {
  return __riscv_vsse8_ntl(mask, base, bstride, value, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

void test_vsse8_v_i8m2_m_ntl_P1(vbool4_t mask, int8_t *base, ptrdiff_t bstride, vint8m2_t value, size_t vl, int domain) {
  return __riscv_vsse8_ntl(mask, base, bstride, value, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

void test_vsse8_v_i8m4_m_ntl_P1(vbool2_t mask, int8_t *base, ptrdiff_t bstride, vint8m4_t value, size_t vl, int domain) {
  return __riscv_vsse8_ntl(mask, base, bstride, value, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

void test_vsse8_v_i8m8_m_ntl_P1(vbool1_t mask, int8_t *base, ptrdiff_t bstride, vint8m8_t value, size_t vl, int domain) {
  return __riscv_vsse8_ntl(mask, base, bstride, value, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

void test_vsse8_v_u8mf8_m_ntl_P1(vbool64_t mask, uint8_t *base, ptrdiff_t bstride, vuint8mf8_t value, size_t vl, int domain) {
  return __riscv_vsse8_ntl(mask, base, bstride, value, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

void test_vsse8_v_u8mf4_m_ntl_P1(vbool32_t mask, uint8_t *base, ptrdiff_t bstride, vuint8mf4_t value, size_t vl, int domain) {
  return __riscv_vsse8_ntl(mask, base, bstride, value, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

void test_vsse8_v_u8mf2_m_ntl_P1(vbool16_t mask, uint8_t *base, ptrdiff_t bstride, vuint8mf2_t value, size_t vl, int domain) {
  return __riscv_vsse8_ntl(mask, base, bstride, value, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

void test_vsse8_v_u8m1_m_ntl_P1(vbool8_t mask, uint8_t *base, ptrdiff_t bstride, vuint8m1_t value, size_t vl, int domain) {
  return __riscv_vsse8_ntl(mask, base, bstride, value, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

void test_vsse8_v_u8m2_m_ntl_P1(vbool4_t mask, uint8_t *base, ptrdiff_t bstride, vuint8m2_t value, size_t vl, int domain) {
  return __riscv_vsse8_ntl(mask, base, bstride, value, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

void test_vsse8_v_u8m4_m_ntl_P1(vbool2_t mask, uint8_t *base, ptrdiff_t bstride, vuint8m4_t value, size_t vl, int domain) {
  return __riscv_vsse8_ntl(mask, base, bstride, value, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

void test_vsse8_v_u8m8_m_ntl_P1(vbool1_t mask, uint8_t *base, ptrdiff_t bstride, vuint8m8_t value, size_t vl, int domain) {
  return __riscv_vsse8_ntl(mask, base, bstride, value, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

