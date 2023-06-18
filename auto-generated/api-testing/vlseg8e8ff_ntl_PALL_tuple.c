#include <stdint.h>
#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
#include <riscv_ntlh.h>

vint8mf8x8_t test_vlseg8e8ff_v_i8mf8x8_ntl_PALL(const int8_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg8e8ff_v_i8mf8x8_ntl(base, new_vl, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint8mf4x8_t test_vlseg8e8ff_v_i8mf4x8_ntl_PALL(const int8_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg8e8ff_v_i8mf4x8_ntl(base, new_vl, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint8mf2x8_t test_vlseg8e8ff_v_i8mf2x8_ntl_PALL(const int8_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg8e8ff_v_i8mf2x8_ntl(base, new_vl, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint8m1x8_t test_vlseg8e8ff_v_i8m1x8_ntl_PALL(const int8_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg8e8ff_v_i8m1x8_ntl(base, new_vl, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint8mf8x8_t test_vlseg8e8ff_v_u8mf8x8_ntl_PALL(const uint8_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg8e8ff_v_u8mf8x8_ntl(base, new_vl, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint8mf4x8_t test_vlseg8e8ff_v_u8mf4x8_ntl_PALL(const uint8_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg8e8ff_v_u8mf4x8_ntl(base, new_vl, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint8mf2x8_t test_vlseg8e8ff_v_u8mf2x8_ntl_PALL(const uint8_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg8e8ff_v_u8mf2x8_ntl(base, new_vl, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint8m1x8_t test_vlseg8e8ff_v_u8m1x8_ntl_PALL(const uint8_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg8e8ff_v_u8m1x8_ntl(base, new_vl, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint8mf8x8_t test_vlseg8e8ff_v_i8mf8x8_m_ntl_PALL(vbool64_t mask, const int8_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg8e8ff_v_i8mf8x8_m_ntl(mask, base, new_vl, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint8mf4x8_t test_vlseg8e8ff_v_i8mf4x8_m_ntl_PALL(vbool32_t mask, const int8_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg8e8ff_v_i8mf4x8_m_ntl(mask, base, new_vl, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint8mf2x8_t test_vlseg8e8ff_v_i8mf2x8_m_ntl_PALL(vbool16_t mask, const int8_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg8e8ff_v_i8mf2x8_m_ntl(mask, base, new_vl, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint8m1x8_t test_vlseg8e8ff_v_i8m1x8_m_ntl_PALL(vbool8_t mask, const int8_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg8e8ff_v_i8m1x8_m_ntl(mask, base, new_vl, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint8mf8x8_t test_vlseg8e8ff_v_u8mf8x8_m_ntl_PALL(vbool64_t mask, const uint8_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg8e8ff_v_u8mf8x8_m_ntl(mask, base, new_vl, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint8mf4x8_t test_vlseg8e8ff_v_u8mf4x8_m_ntl_PALL(vbool32_t mask, const uint8_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg8e8ff_v_u8mf4x8_m_ntl(mask, base, new_vl, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint8mf2x8_t test_vlseg8e8ff_v_u8mf2x8_m_ntl_PALL(vbool16_t mask, const uint8_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg8e8ff_v_u8mf2x8_m_ntl(mask, base, new_vl, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint8m1x8_t test_vlseg8e8ff_v_u8m1x8_m_ntl_PALL(vbool8_t mask, const uint8_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg8e8ff_v_u8m1x8_m_ntl(mask, base, new_vl, vl, __RISCV_NTLH_ALL_PRIVATE);
}

