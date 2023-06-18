#include <stdint.h>
#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
#include <riscv_ntlh.h>

void test_vsseg7e8_v_i8mf8x7_ntl_PALL(int8_t *base, vint8mf8x7_t v_tuple, size_t vl, int domain) {
  return __riscv_vsseg7e8_v_i8mf8x7_ntl(base, v_tuple, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vsseg7e8_v_i8mf4x7_ntl_PALL(int8_t *base, vint8mf4x7_t v_tuple, size_t vl, int domain) {
  return __riscv_vsseg7e8_v_i8mf4x7_ntl(base, v_tuple, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vsseg7e8_v_i8mf2x7_ntl_PALL(int8_t *base, vint8mf2x7_t v_tuple, size_t vl, int domain) {
  return __riscv_vsseg7e8_v_i8mf2x7_ntl(base, v_tuple, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vsseg7e8_v_i8m1x7_ntl_PALL(int8_t *base, vint8m1x7_t v_tuple, size_t vl, int domain) {
  return __riscv_vsseg7e8_v_i8m1x7_ntl(base, v_tuple, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vsseg7e8_v_u8mf8x7_ntl_PALL(uint8_t *base, vuint8mf8x7_t v_tuple, size_t vl, int domain) {
  return __riscv_vsseg7e8_v_u8mf8x7_ntl(base, v_tuple, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vsseg7e8_v_u8mf4x7_ntl_PALL(uint8_t *base, vuint8mf4x7_t v_tuple, size_t vl, int domain) {
  return __riscv_vsseg7e8_v_u8mf4x7_ntl(base, v_tuple, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vsseg7e8_v_u8mf2x7_ntl_PALL(uint8_t *base, vuint8mf2x7_t v_tuple, size_t vl, int domain) {
  return __riscv_vsseg7e8_v_u8mf2x7_ntl(base, v_tuple, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vsseg7e8_v_u8m1x7_ntl_PALL(uint8_t *base, vuint8m1x7_t v_tuple, size_t vl, int domain) {
  return __riscv_vsseg7e8_v_u8m1x7_ntl(base, v_tuple, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vsseg7e8_v_i8mf8x7_m_ntl_PALL(vbool64_t mask, int8_t *base, vint8mf8x7_t v_tuple, size_t vl, int domain) {
  return __riscv_vsseg7e8_v_i8mf8x7_m_ntl(mask, base, v_tuple, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vsseg7e8_v_i8mf4x7_m_ntl_PALL(vbool32_t mask, int8_t *base, vint8mf4x7_t v_tuple, size_t vl, int domain) {
  return __riscv_vsseg7e8_v_i8mf4x7_m_ntl(mask, base, v_tuple, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vsseg7e8_v_i8mf2x7_m_ntl_PALL(vbool16_t mask, int8_t *base, vint8mf2x7_t v_tuple, size_t vl, int domain) {
  return __riscv_vsseg7e8_v_i8mf2x7_m_ntl(mask, base, v_tuple, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vsseg7e8_v_i8m1x7_m_ntl_PALL(vbool8_t mask, int8_t *base, vint8m1x7_t v_tuple, size_t vl, int domain) {
  return __riscv_vsseg7e8_v_i8m1x7_m_ntl(mask, base, v_tuple, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vsseg7e8_v_u8mf8x7_m_ntl_PALL(vbool64_t mask, uint8_t *base, vuint8mf8x7_t v_tuple, size_t vl, int domain) {
  return __riscv_vsseg7e8_v_u8mf8x7_m_ntl(mask, base, v_tuple, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vsseg7e8_v_u8mf4x7_m_ntl_PALL(vbool32_t mask, uint8_t *base, vuint8mf4x7_t v_tuple, size_t vl, int domain) {
  return __riscv_vsseg7e8_v_u8mf4x7_m_ntl(mask, base, v_tuple, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vsseg7e8_v_u8mf2x7_m_ntl_PALL(vbool16_t mask, uint8_t *base, vuint8mf2x7_t v_tuple, size_t vl, int domain) {
  return __riscv_vsseg7e8_v_u8mf2x7_m_ntl(mask, base, v_tuple, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vsseg7e8_v_u8m1x7_m_ntl_PALL(vbool8_t mask, uint8_t *base, vuint8m1x7_t v_tuple, size_t vl, int domain) {
  return __riscv_vsseg7e8_v_u8m1x7_m_ntl(mask, base, v_tuple, vl, __RISCV_NTLH_ALL_PRIVATE);
}

