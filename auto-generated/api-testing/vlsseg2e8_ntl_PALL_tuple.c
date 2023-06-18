#include <stdint.h>
#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
#include <riscv_ntlh.h>

vint8mf8x2_t test_vlsseg2e8_v_i8mf8x2_ntl_PALL(const int8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg2e8_v_i8mf8x2_ntl(base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint8mf4x2_t test_vlsseg2e8_v_i8mf4x2_ntl_PALL(const int8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg2e8_v_i8mf4x2_ntl(base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint8mf2x2_t test_vlsseg2e8_v_i8mf2x2_ntl_PALL(const int8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg2e8_v_i8mf2x2_ntl(base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint8m1x2_t test_vlsseg2e8_v_i8m1x2_ntl_PALL(const int8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg2e8_v_i8m1x2_ntl(base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint8m2x2_t test_vlsseg2e8_v_i8m2x2_ntl_PALL(const int8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg2e8_v_i8m2x2_ntl(base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint8m4x2_t test_vlsseg2e8_v_i8m4x2_ntl_PALL(const int8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg2e8_v_i8m4x2_ntl(base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint8mf8x2_t test_vlsseg2e8_v_u8mf8x2_ntl_PALL(const uint8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg2e8_v_u8mf8x2_ntl(base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint8mf4x2_t test_vlsseg2e8_v_u8mf4x2_ntl_PALL(const uint8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg2e8_v_u8mf4x2_ntl(base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint8mf2x2_t test_vlsseg2e8_v_u8mf2x2_ntl_PALL(const uint8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg2e8_v_u8mf2x2_ntl(base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint8m1x2_t test_vlsseg2e8_v_u8m1x2_ntl_PALL(const uint8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg2e8_v_u8m1x2_ntl(base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint8m2x2_t test_vlsseg2e8_v_u8m2x2_ntl_PALL(const uint8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg2e8_v_u8m2x2_ntl(base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint8m4x2_t test_vlsseg2e8_v_u8m4x2_ntl_PALL(const uint8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg2e8_v_u8m4x2_ntl(base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint8mf8x2_t test_vlsseg2e8_v_i8mf8x2_m_ntl_PALL(vbool64_t mask, const int8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg2e8_v_i8mf8x2_m_ntl(mask, base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint8mf4x2_t test_vlsseg2e8_v_i8mf4x2_m_ntl_PALL(vbool32_t mask, const int8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg2e8_v_i8mf4x2_m_ntl(mask, base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint8mf2x2_t test_vlsseg2e8_v_i8mf2x2_m_ntl_PALL(vbool16_t mask, const int8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg2e8_v_i8mf2x2_m_ntl(mask, base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint8m1x2_t test_vlsseg2e8_v_i8m1x2_m_ntl_PALL(vbool8_t mask, const int8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg2e8_v_i8m1x2_m_ntl(mask, base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint8m2x2_t test_vlsseg2e8_v_i8m2x2_m_ntl_PALL(vbool4_t mask, const int8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg2e8_v_i8m2x2_m_ntl(mask, base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint8m4x2_t test_vlsseg2e8_v_i8m4x2_m_ntl_PALL(vbool2_t mask, const int8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg2e8_v_i8m4x2_m_ntl(mask, base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint8mf8x2_t test_vlsseg2e8_v_u8mf8x2_m_ntl_PALL(vbool64_t mask, const uint8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg2e8_v_u8mf8x2_m_ntl(mask, base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint8mf4x2_t test_vlsseg2e8_v_u8mf4x2_m_ntl_PALL(vbool32_t mask, const uint8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg2e8_v_u8mf4x2_m_ntl(mask, base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint8mf2x2_t test_vlsseg2e8_v_u8mf2x2_m_ntl_PALL(vbool16_t mask, const uint8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg2e8_v_u8mf2x2_m_ntl(mask, base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint8m1x2_t test_vlsseg2e8_v_u8m1x2_m_ntl_PALL(vbool8_t mask, const uint8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg2e8_v_u8m1x2_m_ntl(mask, base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint8m2x2_t test_vlsseg2e8_v_u8m2x2_m_ntl_PALL(vbool4_t mask, const uint8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg2e8_v_u8m2x2_m_ntl(mask, base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint8m4x2_t test_vlsseg2e8_v_u8m4x2_m_ntl_PALL(vbool2_t mask, const uint8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg2e8_v_u8m4x2_m_ntl(mask, base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

