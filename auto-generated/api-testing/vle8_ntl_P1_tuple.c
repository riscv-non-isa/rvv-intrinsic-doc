#include <stdint.h>
#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
#include <riscv_ntlh.h>

vint8mf8_t test_vle8_v_i8mf8_ntl_P1(const int8_t *base, size_t vl, int domain) {
  return __riscv_vle8_v_i8mf8_ntl(base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint8mf4_t test_vle8_v_i8mf4_ntl_P1(const int8_t *base, size_t vl, int domain) {
  return __riscv_vle8_v_i8mf4_ntl(base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint8mf2_t test_vle8_v_i8mf2_ntl_P1(const int8_t *base, size_t vl, int domain) {
  return __riscv_vle8_v_i8mf2_ntl(base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint8m1_t test_vle8_v_i8m1_ntl_P1(const int8_t *base, size_t vl, int domain) {
  return __riscv_vle8_v_i8m1_ntl(base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint8m2_t test_vle8_v_i8m2_ntl_P1(const int8_t *base, size_t vl, int domain) {
  return __riscv_vle8_v_i8m2_ntl(base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint8m4_t test_vle8_v_i8m4_ntl_P1(const int8_t *base, size_t vl, int domain) {
  return __riscv_vle8_v_i8m4_ntl(base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint8m8_t test_vle8_v_i8m8_ntl_P1(const int8_t *base, size_t vl, int domain) {
  return __riscv_vle8_v_i8m8_ntl(base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint8mf8_t test_vle8_v_u8mf8_ntl_P1(const uint8_t *base, size_t vl, int domain) {
  return __riscv_vle8_v_u8mf8_ntl(base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint8mf4_t test_vle8_v_u8mf4_ntl_P1(const uint8_t *base, size_t vl, int domain) {
  return __riscv_vle8_v_u8mf4_ntl(base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint8mf2_t test_vle8_v_u8mf2_ntl_P1(const uint8_t *base, size_t vl, int domain) {
  return __riscv_vle8_v_u8mf2_ntl(base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint8m1_t test_vle8_v_u8m1_ntl_P1(const uint8_t *base, size_t vl, int domain) {
  return __riscv_vle8_v_u8m1_ntl(base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint8m2_t test_vle8_v_u8m2_ntl_P1(const uint8_t *base, size_t vl, int domain) {
  return __riscv_vle8_v_u8m2_ntl(base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint8m4_t test_vle8_v_u8m4_ntl_P1(const uint8_t *base, size_t vl, int domain) {
  return __riscv_vle8_v_u8m4_ntl(base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint8m8_t test_vle8_v_u8m8_ntl_P1(const uint8_t *base, size_t vl, int domain) {
  return __riscv_vle8_v_u8m8_ntl(base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint8mf8_t test_vle8_v_i8mf8_m_ntl_P1(vbool64_t mask, const int8_t *base, size_t vl, int domain) {
  return __riscv_vle8_v_i8mf8_m_ntl(mask, base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint8mf4_t test_vle8_v_i8mf4_m_ntl_P1(vbool32_t mask, const int8_t *base, size_t vl, int domain) {
  return __riscv_vle8_v_i8mf4_m_ntl(mask, base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint8mf2_t test_vle8_v_i8mf2_m_ntl_P1(vbool16_t mask, const int8_t *base, size_t vl, int domain) {
  return __riscv_vle8_v_i8mf2_m_ntl(mask, base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint8m1_t test_vle8_v_i8m1_m_ntl_P1(vbool8_t mask, const int8_t *base, size_t vl, int domain) {
  return __riscv_vle8_v_i8m1_m_ntl(mask, base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint8m2_t test_vle8_v_i8m2_m_ntl_P1(vbool4_t mask, const int8_t *base, size_t vl, int domain) {
  return __riscv_vle8_v_i8m2_m_ntl(mask, base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint8m4_t test_vle8_v_i8m4_m_ntl_P1(vbool2_t mask, const int8_t *base, size_t vl, int domain) {
  return __riscv_vle8_v_i8m4_m_ntl(mask, base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint8m8_t test_vle8_v_i8m8_m_ntl_P1(vbool1_t mask, const int8_t *base, size_t vl, int domain) {
  return __riscv_vle8_v_i8m8_m_ntl(mask, base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint8mf8_t test_vle8_v_u8mf8_m_ntl_P1(vbool64_t mask, const uint8_t *base, size_t vl, int domain) {
  return __riscv_vle8_v_u8mf8_m_ntl(mask, base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint8mf4_t test_vle8_v_u8mf4_m_ntl_P1(vbool32_t mask, const uint8_t *base, size_t vl, int domain) {
  return __riscv_vle8_v_u8mf4_m_ntl(mask, base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint8mf2_t test_vle8_v_u8mf2_m_ntl_P1(vbool16_t mask, const uint8_t *base, size_t vl, int domain) {
  return __riscv_vle8_v_u8mf2_m_ntl(mask, base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint8m1_t test_vle8_v_u8m1_m_ntl_P1(vbool8_t mask, const uint8_t *base, size_t vl, int domain) {
  return __riscv_vle8_v_u8m1_m_ntl(mask, base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint8m2_t test_vle8_v_u8m2_m_ntl_P1(vbool4_t mask, const uint8_t *base, size_t vl, int domain) {
  return __riscv_vle8_v_u8m2_m_ntl(mask, base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint8m4_t test_vle8_v_u8m4_m_ntl_P1(vbool2_t mask, const uint8_t *base, size_t vl, int domain) {
  return __riscv_vle8_v_u8m4_m_ntl(mask, base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint8m8_t test_vle8_v_u8m8_m_ntl_P1(vbool1_t mask, const uint8_t *base, size_t vl, int domain) {
  return __riscv_vle8_v_u8m8_m_ntl(mask, base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

