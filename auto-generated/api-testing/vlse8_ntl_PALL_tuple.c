#include <stdint.h>
#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
#include <riscv_ntlh.h>

vint8mf8_t test_vlse8_v_i8mf8_ntl_PALL(const int8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlse8_v_i8mf8_ntl(base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint8mf4_t test_vlse8_v_i8mf4_ntl_PALL(const int8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlse8_v_i8mf4_ntl(base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint8mf2_t test_vlse8_v_i8mf2_ntl_PALL(const int8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlse8_v_i8mf2_ntl(base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint8m1_t test_vlse8_v_i8m1_ntl_PALL(const int8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlse8_v_i8m1_ntl(base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint8m2_t test_vlse8_v_i8m2_ntl_PALL(const int8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlse8_v_i8m2_ntl(base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint8m4_t test_vlse8_v_i8m4_ntl_PALL(const int8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlse8_v_i8m4_ntl(base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint8m8_t test_vlse8_v_i8m8_ntl_PALL(const int8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlse8_v_i8m8_ntl(base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint8mf8_t test_vlse8_v_u8mf8_ntl_PALL(const uint8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlse8_v_u8mf8_ntl(base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint8mf4_t test_vlse8_v_u8mf4_ntl_PALL(const uint8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlse8_v_u8mf4_ntl(base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint8mf2_t test_vlse8_v_u8mf2_ntl_PALL(const uint8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlse8_v_u8mf2_ntl(base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint8m1_t test_vlse8_v_u8m1_ntl_PALL(const uint8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlse8_v_u8m1_ntl(base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint8m2_t test_vlse8_v_u8m2_ntl_PALL(const uint8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlse8_v_u8m2_ntl(base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint8m4_t test_vlse8_v_u8m4_ntl_PALL(const uint8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlse8_v_u8m4_ntl(base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint8m8_t test_vlse8_v_u8m8_ntl_PALL(const uint8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlse8_v_u8m8_ntl(base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint8mf8_t test_vlse8_v_i8mf8_m_ntl_PALL(vbool64_t mask, const int8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlse8_v_i8mf8_m_ntl(mask, base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint8mf4_t test_vlse8_v_i8mf4_m_ntl_PALL(vbool32_t mask, const int8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlse8_v_i8mf4_m_ntl(mask, base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint8mf2_t test_vlse8_v_i8mf2_m_ntl_PALL(vbool16_t mask, const int8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlse8_v_i8mf2_m_ntl(mask, base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint8m1_t test_vlse8_v_i8m1_m_ntl_PALL(vbool8_t mask, const int8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlse8_v_i8m1_m_ntl(mask, base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint8m2_t test_vlse8_v_i8m2_m_ntl_PALL(vbool4_t mask, const int8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlse8_v_i8m2_m_ntl(mask, base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint8m4_t test_vlse8_v_i8m4_m_ntl_PALL(vbool2_t mask, const int8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlse8_v_i8m4_m_ntl(mask, base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint8m8_t test_vlse8_v_i8m8_m_ntl_PALL(vbool1_t mask, const int8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlse8_v_i8m8_m_ntl(mask, base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint8mf8_t test_vlse8_v_u8mf8_m_ntl_PALL(vbool64_t mask, const uint8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlse8_v_u8mf8_m_ntl(mask, base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint8mf4_t test_vlse8_v_u8mf4_m_ntl_PALL(vbool32_t mask, const uint8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlse8_v_u8mf4_m_ntl(mask, base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint8mf2_t test_vlse8_v_u8mf2_m_ntl_PALL(vbool16_t mask, const uint8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlse8_v_u8mf2_m_ntl(mask, base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint8m1_t test_vlse8_v_u8m1_m_ntl_PALL(vbool8_t mask, const uint8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlse8_v_u8m1_m_ntl(mask, base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint8m2_t test_vlse8_v_u8m2_m_ntl_PALL(vbool4_t mask, const uint8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlse8_v_u8m2_m_ntl(mask, base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint8m4_t test_vlse8_v_u8m4_m_ntl_PALL(vbool2_t mask, const uint8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlse8_v_u8m4_m_ntl(mask, base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint8m8_t test_vlse8_v_u8m8_m_ntl_PALL(vbool1_t mask, const uint8_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlse8_v_u8m8_m_ntl(mask, base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

