#include <stdint.h>
#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
#include <riscv_ntlh.h>

void test_vse8_v_i8mf8_ntl_S1(int8_t *base, vint8mf8_t value, size_t vl, int domain) {
  return __riscv_vse8_v_i8mf8_ntl(base, value, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vse8_v_i8mf4_ntl_S1(int8_t *base, vint8mf4_t value, size_t vl, int domain) {
  return __riscv_vse8_v_i8mf4_ntl(base, value, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vse8_v_i8mf2_ntl_S1(int8_t *base, vint8mf2_t value, size_t vl, int domain) {
  return __riscv_vse8_v_i8mf2_ntl(base, value, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vse8_v_i8m1_ntl_S1(int8_t *base, vint8m1_t value, size_t vl, int domain) {
  return __riscv_vse8_v_i8m1_ntl(base, value, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vse8_v_i8m2_ntl_S1(int8_t *base, vint8m2_t value, size_t vl, int domain) {
  return __riscv_vse8_v_i8m2_ntl(base, value, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vse8_v_i8m4_ntl_S1(int8_t *base, vint8m4_t value, size_t vl, int domain) {
  return __riscv_vse8_v_i8m4_ntl(base, value, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vse8_v_i8m8_ntl_S1(int8_t *base, vint8m8_t value, size_t vl, int domain) {
  return __riscv_vse8_v_i8m8_ntl(base, value, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vse8_v_u8mf8_ntl_S1(uint8_t *base, vuint8mf8_t value, size_t vl, int domain) {
  return __riscv_vse8_v_u8mf8_ntl(base, value, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vse8_v_u8mf4_ntl_S1(uint8_t *base, vuint8mf4_t value, size_t vl, int domain) {
  return __riscv_vse8_v_u8mf4_ntl(base, value, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vse8_v_u8mf2_ntl_S1(uint8_t *base, vuint8mf2_t value, size_t vl, int domain) {
  return __riscv_vse8_v_u8mf2_ntl(base, value, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vse8_v_u8m1_ntl_S1(uint8_t *base, vuint8m1_t value, size_t vl, int domain) {
  return __riscv_vse8_v_u8m1_ntl(base, value, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vse8_v_u8m2_ntl_S1(uint8_t *base, vuint8m2_t value, size_t vl, int domain) {
  return __riscv_vse8_v_u8m2_ntl(base, value, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vse8_v_u8m4_ntl_S1(uint8_t *base, vuint8m4_t value, size_t vl, int domain) {
  return __riscv_vse8_v_u8m4_ntl(base, value, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vse8_v_u8m8_ntl_S1(uint8_t *base, vuint8m8_t value, size_t vl, int domain) {
  return __riscv_vse8_v_u8m8_ntl(base, value, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vse8_v_i8mf8_m_ntl_S1(vbool64_t mask, int8_t *base, vint8mf8_t value, size_t vl, int domain) {
  return __riscv_vse8_v_i8mf8_m_ntl(mask, base, value, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vse8_v_i8mf4_m_ntl_S1(vbool32_t mask, int8_t *base, vint8mf4_t value, size_t vl, int domain) {
  return __riscv_vse8_v_i8mf4_m_ntl(mask, base, value, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vse8_v_i8mf2_m_ntl_S1(vbool16_t mask, int8_t *base, vint8mf2_t value, size_t vl, int domain) {
  return __riscv_vse8_v_i8mf2_m_ntl(mask, base, value, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vse8_v_i8m1_m_ntl_S1(vbool8_t mask, int8_t *base, vint8m1_t value, size_t vl, int domain) {
  return __riscv_vse8_v_i8m1_m_ntl(mask, base, value, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vse8_v_i8m2_m_ntl_S1(vbool4_t mask, int8_t *base, vint8m2_t value, size_t vl, int domain) {
  return __riscv_vse8_v_i8m2_m_ntl(mask, base, value, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vse8_v_i8m4_m_ntl_S1(vbool2_t mask, int8_t *base, vint8m4_t value, size_t vl, int domain) {
  return __riscv_vse8_v_i8m4_m_ntl(mask, base, value, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vse8_v_i8m8_m_ntl_S1(vbool1_t mask, int8_t *base, vint8m8_t value, size_t vl, int domain) {
  return __riscv_vse8_v_i8m8_m_ntl(mask, base, value, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vse8_v_u8mf8_m_ntl_S1(vbool64_t mask, uint8_t *base, vuint8mf8_t value, size_t vl, int domain) {
  return __riscv_vse8_v_u8mf8_m_ntl(mask, base, value, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vse8_v_u8mf4_m_ntl_S1(vbool32_t mask, uint8_t *base, vuint8mf4_t value, size_t vl, int domain) {
  return __riscv_vse8_v_u8mf4_m_ntl(mask, base, value, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vse8_v_u8mf2_m_ntl_S1(vbool16_t mask, uint8_t *base, vuint8mf2_t value, size_t vl, int domain) {
  return __riscv_vse8_v_u8mf2_m_ntl(mask, base, value, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vse8_v_u8m1_m_ntl_S1(vbool8_t mask, uint8_t *base, vuint8m1_t value, size_t vl, int domain) {
  return __riscv_vse8_v_u8m1_m_ntl(mask, base, value, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vse8_v_u8m2_m_ntl_S1(vbool4_t mask, uint8_t *base, vuint8m2_t value, size_t vl, int domain) {
  return __riscv_vse8_v_u8m2_m_ntl(mask, base, value, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vse8_v_u8m4_m_ntl_S1(vbool2_t mask, uint8_t *base, vuint8m4_t value, size_t vl, int domain) {
  return __riscv_vse8_v_u8m4_m_ntl(mask, base, value, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vse8_v_u8m8_m_ntl_S1(vbool1_t mask, uint8_t *base, vuint8m8_t value, size_t vl, int domain) {
  return __riscv_vse8_v_u8m8_m_ntl(mask, base, value, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

