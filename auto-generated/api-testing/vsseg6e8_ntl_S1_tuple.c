#include <stdint.h>
#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
#include <riscv_ntlh.h>

void test_vsseg6e8_v_i8mf8x6_ntl_S1(int8_t *base, vint8mf8x6_t v_tuple, size_t vl, int domain) {
  return __riscv_vsseg6e8_v_i8mf8x6_ntl(base, v_tuple, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vsseg6e8_v_i8mf4x6_ntl_S1(int8_t *base, vint8mf4x6_t v_tuple, size_t vl, int domain) {
  return __riscv_vsseg6e8_v_i8mf4x6_ntl(base, v_tuple, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vsseg6e8_v_i8mf2x6_ntl_S1(int8_t *base, vint8mf2x6_t v_tuple, size_t vl, int domain) {
  return __riscv_vsseg6e8_v_i8mf2x6_ntl(base, v_tuple, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vsseg6e8_v_i8m1x6_ntl_S1(int8_t *base, vint8m1x6_t v_tuple, size_t vl, int domain) {
  return __riscv_vsseg6e8_v_i8m1x6_ntl(base, v_tuple, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vsseg6e8_v_u8mf8x6_ntl_S1(uint8_t *base, vuint8mf8x6_t v_tuple, size_t vl, int domain) {
  return __riscv_vsseg6e8_v_u8mf8x6_ntl(base, v_tuple, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vsseg6e8_v_u8mf4x6_ntl_S1(uint8_t *base, vuint8mf4x6_t v_tuple, size_t vl, int domain) {
  return __riscv_vsseg6e8_v_u8mf4x6_ntl(base, v_tuple, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vsseg6e8_v_u8mf2x6_ntl_S1(uint8_t *base, vuint8mf2x6_t v_tuple, size_t vl, int domain) {
  return __riscv_vsseg6e8_v_u8mf2x6_ntl(base, v_tuple, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vsseg6e8_v_u8m1x6_ntl_S1(uint8_t *base, vuint8m1x6_t v_tuple, size_t vl, int domain) {
  return __riscv_vsseg6e8_v_u8m1x6_ntl(base, v_tuple, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vsseg6e8_v_i8mf8x6_m_ntl_S1(vbool64_t mask, int8_t *base, vint8mf8x6_t v_tuple, size_t vl, int domain) {
  return __riscv_vsseg6e8_v_i8mf8x6_m_ntl(mask, base, v_tuple, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vsseg6e8_v_i8mf4x6_m_ntl_S1(vbool32_t mask, int8_t *base, vint8mf4x6_t v_tuple, size_t vl, int domain) {
  return __riscv_vsseg6e8_v_i8mf4x6_m_ntl(mask, base, v_tuple, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vsseg6e8_v_i8mf2x6_m_ntl_S1(vbool16_t mask, int8_t *base, vint8mf2x6_t v_tuple, size_t vl, int domain) {
  return __riscv_vsseg6e8_v_i8mf2x6_m_ntl(mask, base, v_tuple, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vsseg6e8_v_i8m1x6_m_ntl_S1(vbool8_t mask, int8_t *base, vint8m1x6_t v_tuple, size_t vl, int domain) {
  return __riscv_vsseg6e8_v_i8m1x6_m_ntl(mask, base, v_tuple, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vsseg6e8_v_u8mf8x6_m_ntl_S1(vbool64_t mask, uint8_t *base, vuint8mf8x6_t v_tuple, size_t vl, int domain) {
  return __riscv_vsseg6e8_v_u8mf8x6_m_ntl(mask, base, v_tuple, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vsseg6e8_v_u8mf4x6_m_ntl_S1(vbool32_t mask, uint8_t *base, vuint8mf4x6_t v_tuple, size_t vl, int domain) {
  return __riscv_vsseg6e8_v_u8mf4x6_m_ntl(mask, base, v_tuple, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vsseg6e8_v_u8mf2x6_m_ntl_S1(vbool16_t mask, uint8_t *base, vuint8mf2x6_t v_tuple, size_t vl, int domain) {
  return __riscv_vsseg6e8_v_u8mf2x6_m_ntl(mask, base, v_tuple, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vsseg6e8_v_u8m1x6_m_ntl_S1(vbool8_t mask, uint8_t *base, vuint8m1x6_t v_tuple, size_t vl, int domain) {
  return __riscv_vsseg6e8_v_u8m1x6_m_ntl(mask, base, v_tuple, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

