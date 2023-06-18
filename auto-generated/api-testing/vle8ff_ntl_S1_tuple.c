#include <stdint.h>
#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
#include <riscv_ntlh.h>

vint8mf8_t test_vle8ff_v_i8mf8_ntl_S1(const int8_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle8ff_v_i8mf8_ntl(base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint8mf4_t test_vle8ff_v_i8mf4_ntl_S1(const int8_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle8ff_v_i8mf4_ntl(base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint8mf2_t test_vle8ff_v_i8mf2_ntl_S1(const int8_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle8ff_v_i8mf2_ntl(base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint8m1_t test_vle8ff_v_i8m1_ntl_S1(const int8_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle8ff_v_i8m1_ntl(base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint8m2_t test_vle8ff_v_i8m2_ntl_S1(const int8_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle8ff_v_i8m2_ntl(base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint8m4_t test_vle8ff_v_i8m4_ntl_S1(const int8_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle8ff_v_i8m4_ntl(base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint8m8_t test_vle8ff_v_i8m8_ntl_S1(const int8_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle8ff_v_i8m8_ntl(base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint8mf8_t test_vle8ff_v_u8mf8_ntl_S1(const uint8_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle8ff_v_u8mf8_ntl(base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint8mf4_t test_vle8ff_v_u8mf4_ntl_S1(const uint8_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle8ff_v_u8mf4_ntl(base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint8mf2_t test_vle8ff_v_u8mf2_ntl_S1(const uint8_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle8ff_v_u8mf2_ntl(base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint8m1_t test_vle8ff_v_u8m1_ntl_S1(const uint8_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle8ff_v_u8m1_ntl(base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint8m2_t test_vle8ff_v_u8m2_ntl_S1(const uint8_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle8ff_v_u8m2_ntl(base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint8m4_t test_vle8ff_v_u8m4_ntl_S1(const uint8_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle8ff_v_u8m4_ntl(base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint8m8_t test_vle8ff_v_u8m8_ntl_S1(const uint8_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle8ff_v_u8m8_ntl(base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint8mf8_t test_vle8ff_v_i8mf8_m_ntl_S1(vbool64_t mask, const int8_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle8ff_v_i8mf8_m_ntl(mask, base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint8mf4_t test_vle8ff_v_i8mf4_m_ntl_S1(vbool32_t mask, const int8_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle8ff_v_i8mf4_m_ntl(mask, base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint8mf2_t test_vle8ff_v_i8mf2_m_ntl_S1(vbool16_t mask, const int8_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle8ff_v_i8mf2_m_ntl(mask, base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint8m1_t test_vle8ff_v_i8m1_m_ntl_S1(vbool8_t mask, const int8_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle8ff_v_i8m1_m_ntl(mask, base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint8m2_t test_vle8ff_v_i8m2_m_ntl_S1(vbool4_t mask, const int8_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle8ff_v_i8m2_m_ntl(mask, base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint8m4_t test_vle8ff_v_i8m4_m_ntl_S1(vbool2_t mask, const int8_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle8ff_v_i8m4_m_ntl(mask, base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint8m8_t test_vle8ff_v_i8m8_m_ntl_S1(vbool1_t mask, const int8_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle8ff_v_i8m8_m_ntl(mask, base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint8mf8_t test_vle8ff_v_u8mf8_m_ntl_S1(vbool64_t mask, const uint8_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle8ff_v_u8mf8_m_ntl(mask, base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint8mf4_t test_vle8ff_v_u8mf4_m_ntl_S1(vbool32_t mask, const uint8_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle8ff_v_u8mf4_m_ntl(mask, base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint8mf2_t test_vle8ff_v_u8mf2_m_ntl_S1(vbool16_t mask, const uint8_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle8ff_v_u8mf2_m_ntl(mask, base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint8m1_t test_vle8ff_v_u8m1_m_ntl_S1(vbool8_t mask, const uint8_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle8ff_v_u8m1_m_ntl(mask, base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint8m2_t test_vle8ff_v_u8m2_m_ntl_S1(vbool4_t mask, const uint8_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle8ff_v_u8m2_m_ntl(mask, base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint8m4_t test_vle8ff_v_u8m4_m_ntl_S1(vbool2_t mask, const uint8_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle8ff_v_u8m4_m_ntl(mask, base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint8m8_t test_vle8ff_v_u8m8_m_ntl_S1(vbool1_t mask, const uint8_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle8ff_v_u8m8_m_ntl(mask, base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

