#include <stdint.h>
#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
#include <riscv_ntlh.h>

void test_vssseg8e8_v_i8mf8x8_ntl_PALL(int8_t *base, ptrdiff_t bstride, vint8mf8x8_t v_tuple, size_t vl, int domain) {
  return __riscv_vssseg8e8_v_i8mf8x8_ntl(base, bstride, v_tuple, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vssseg8e8_v_i8mf4x8_ntl_PALL(int8_t *base, ptrdiff_t bstride, vint8mf4x8_t v_tuple, size_t vl, int domain) {
  return __riscv_vssseg8e8_v_i8mf4x8_ntl(base, bstride, v_tuple, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vssseg8e8_v_i8mf2x8_ntl_PALL(int8_t *base, ptrdiff_t bstride, vint8mf2x8_t v_tuple, size_t vl, int domain) {
  return __riscv_vssseg8e8_v_i8mf2x8_ntl(base, bstride, v_tuple, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vssseg8e8_v_i8m1x8_ntl_PALL(int8_t *base, ptrdiff_t bstride, vint8m1x8_t v_tuple, size_t vl, int domain) {
  return __riscv_vssseg8e8_v_i8m1x8_ntl(base, bstride, v_tuple, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vssseg8e8_v_u8mf8x8_ntl_PALL(uint8_t *base, ptrdiff_t bstride, vuint8mf8x8_t v_tuple, size_t vl, int domain) {
  return __riscv_vssseg8e8_v_u8mf8x8_ntl(base, bstride, v_tuple, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vssseg8e8_v_u8mf4x8_ntl_PALL(uint8_t *base, ptrdiff_t bstride, vuint8mf4x8_t v_tuple, size_t vl, int domain) {
  return __riscv_vssseg8e8_v_u8mf4x8_ntl(base, bstride, v_tuple, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vssseg8e8_v_u8mf2x8_ntl_PALL(uint8_t *base, ptrdiff_t bstride, vuint8mf2x8_t v_tuple, size_t vl, int domain) {
  return __riscv_vssseg8e8_v_u8mf2x8_ntl(base, bstride, v_tuple, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vssseg8e8_v_u8m1x8_ntl_PALL(uint8_t *base, ptrdiff_t bstride, vuint8m1x8_t v_tuple, size_t vl, int domain) {
  return __riscv_vssseg8e8_v_u8m1x8_ntl(base, bstride, v_tuple, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vssseg8e8_v_i8mf8x8_m_ntl_PALL(vbool64_t mask, int8_t *base, ptrdiff_t bstride, vint8mf8x8_t v_tuple, size_t vl, int domain) {
  return __riscv_vssseg8e8_v_i8mf8x8_m_ntl(mask, base, bstride, v_tuple, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vssseg8e8_v_i8mf4x8_m_ntl_PALL(vbool32_t mask, int8_t *base, ptrdiff_t bstride, vint8mf4x8_t v_tuple, size_t vl, int domain) {
  return __riscv_vssseg8e8_v_i8mf4x8_m_ntl(mask, base, bstride, v_tuple, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vssseg8e8_v_i8mf2x8_m_ntl_PALL(vbool16_t mask, int8_t *base, ptrdiff_t bstride, vint8mf2x8_t v_tuple, size_t vl, int domain) {
  return __riscv_vssseg8e8_v_i8mf2x8_m_ntl(mask, base, bstride, v_tuple, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vssseg8e8_v_i8m1x8_m_ntl_PALL(vbool8_t mask, int8_t *base, ptrdiff_t bstride, vint8m1x8_t v_tuple, size_t vl, int domain) {
  return __riscv_vssseg8e8_v_i8m1x8_m_ntl(mask, base, bstride, v_tuple, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vssseg8e8_v_u8mf8x8_m_ntl_PALL(vbool64_t mask, uint8_t *base, ptrdiff_t bstride, vuint8mf8x8_t v_tuple, size_t vl, int domain) {
  return __riscv_vssseg8e8_v_u8mf8x8_m_ntl(mask, base, bstride, v_tuple, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vssseg8e8_v_u8mf4x8_m_ntl_PALL(vbool32_t mask, uint8_t *base, ptrdiff_t bstride, vuint8mf4x8_t v_tuple, size_t vl, int domain) {
  return __riscv_vssseg8e8_v_u8mf4x8_m_ntl(mask, base, bstride, v_tuple, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vssseg8e8_v_u8mf2x8_m_ntl_PALL(vbool16_t mask, uint8_t *base, ptrdiff_t bstride, vuint8mf2x8_t v_tuple, size_t vl, int domain) {
  return __riscv_vssseg8e8_v_u8mf2x8_m_ntl(mask, base, bstride, v_tuple, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vssseg8e8_v_u8m1x8_m_ntl_PALL(vbool8_t mask, uint8_t *base, ptrdiff_t bstride, vuint8m1x8_t v_tuple, size_t vl, int domain) {
  return __riscv_vssseg8e8_v_u8m1x8_m_ntl(mask, base, bstride, v_tuple, vl, __RISCV_NTLH_ALL_PRIVATE);
}

