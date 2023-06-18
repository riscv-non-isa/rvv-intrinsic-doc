#include <stdint.h>
#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
#include <riscv_ntlh.h>

vint8mf8x5_t test_vlsseg5e8_v_i8mf8x5_ntl_ALL(const int8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg5e8_v_i8mf8x5_ntl(base, bstride, vl, __RISCV_NTLH_ALL);
}

vint8mf4x5_t test_vlsseg5e8_v_i8mf4x5_ntl_ALL(const int8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg5e8_v_i8mf4x5_ntl(base, bstride, vl, __RISCV_NTLH_ALL);
}

vint8mf2x5_t test_vlsseg5e8_v_i8mf2x5_ntl_ALL(const int8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg5e8_v_i8mf2x5_ntl(base, bstride, vl, __RISCV_NTLH_ALL);
}

vint8m1x5_t test_vlsseg5e8_v_i8m1x5_ntl_ALL(const int8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg5e8_v_i8m1x5_ntl(base, bstride, vl, __RISCV_NTLH_ALL);
}

vuint8mf8x5_t test_vlsseg5e8_v_u8mf8x5_ntl_ALL(const uint8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg5e8_v_u8mf8x5_ntl(base, bstride, vl, __RISCV_NTLH_ALL);
}

vuint8mf4x5_t test_vlsseg5e8_v_u8mf4x5_ntl_ALL(const uint8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg5e8_v_u8mf4x5_ntl(base, bstride, vl, __RISCV_NTLH_ALL);
}

vuint8mf2x5_t test_vlsseg5e8_v_u8mf2x5_ntl_ALL(const uint8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg5e8_v_u8mf2x5_ntl(base, bstride, vl, __RISCV_NTLH_ALL);
}

vuint8m1x5_t test_vlsseg5e8_v_u8m1x5_ntl_ALL(const uint8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg5e8_v_u8m1x5_ntl(base, bstride, vl, __RISCV_NTLH_ALL);
}

vint8mf8x5_t test_vlsseg5e8_v_i8mf8x5_m_ntl_ALL(vbool64_t mask, const int8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg5e8_v_i8mf8x5_m_ntl(mask, base, bstride, vl, __RISCV_NTLH_ALL);
}

vint8mf4x5_t test_vlsseg5e8_v_i8mf4x5_m_ntl_ALL(vbool32_t mask, const int8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg5e8_v_i8mf4x5_m_ntl(mask, base, bstride, vl, __RISCV_NTLH_ALL);
}

vint8mf2x5_t test_vlsseg5e8_v_i8mf2x5_m_ntl_ALL(vbool16_t mask, const int8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg5e8_v_i8mf2x5_m_ntl(mask, base, bstride, vl, __RISCV_NTLH_ALL);
}

vint8m1x5_t test_vlsseg5e8_v_i8m1x5_m_ntl_ALL(vbool8_t mask, const int8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg5e8_v_i8m1x5_m_ntl(mask, base, bstride, vl, __RISCV_NTLH_ALL);
}

vuint8mf8x5_t test_vlsseg5e8_v_u8mf8x5_m_ntl_ALL(vbool64_t mask, const uint8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg5e8_v_u8mf8x5_m_ntl(mask, base, bstride, vl, __RISCV_NTLH_ALL);
}

vuint8mf4x5_t test_vlsseg5e8_v_u8mf4x5_m_ntl_ALL(vbool32_t mask, const uint8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg5e8_v_u8mf4x5_m_ntl(mask, base, bstride, vl, __RISCV_NTLH_ALL);
}

vuint8mf2x5_t test_vlsseg5e8_v_u8mf2x5_m_ntl_ALL(vbool16_t mask, const uint8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg5e8_v_u8mf2x5_m_ntl(mask, base, bstride, vl, __RISCV_NTLH_ALL);
}

vuint8m1x5_t test_vlsseg5e8_v_u8m1x5_m_ntl_ALL(vbool8_t mask, const uint8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg5e8_v_u8m1x5_m_ntl(mask, base, bstride, vl, __RISCV_NTLH_ALL);
}

