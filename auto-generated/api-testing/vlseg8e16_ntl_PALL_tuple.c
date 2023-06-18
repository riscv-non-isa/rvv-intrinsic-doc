#include <stdint.h>
#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
#include <riscv_ntlh.h>

vfloat16mf4x8_t test_vlseg8e16_v_f16mf4x8_ntl_PALL(const float16_t *base, size_t vl, int domain) {
  return __riscv_vlseg8e16_v_f16mf4x8_ntl(base, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vfloat16mf2x8_t test_vlseg8e16_v_f16mf2x8_ntl_PALL(const float16_t *base, size_t vl, int domain) {
  return __riscv_vlseg8e16_v_f16mf2x8_ntl(base, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vfloat16m1x8_t test_vlseg8e16_v_f16m1x8_ntl_PALL(const float16_t *base, size_t vl, int domain) {
  return __riscv_vlseg8e16_v_f16m1x8_ntl(base, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint16mf4x8_t test_vlseg8e16_v_i16mf4x8_ntl_PALL(const int16_t *base, size_t vl, int domain) {
  return __riscv_vlseg8e16_v_i16mf4x8_ntl(base, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint16mf2x8_t test_vlseg8e16_v_i16mf2x8_ntl_PALL(const int16_t *base, size_t vl, int domain) {
  return __riscv_vlseg8e16_v_i16mf2x8_ntl(base, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint16m1x8_t test_vlseg8e16_v_i16m1x8_ntl_PALL(const int16_t *base, size_t vl, int domain) {
  return __riscv_vlseg8e16_v_i16m1x8_ntl(base, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint16mf4x8_t test_vlseg8e16_v_u16mf4x8_ntl_PALL(const uint16_t *base, size_t vl, int domain) {
  return __riscv_vlseg8e16_v_u16mf4x8_ntl(base, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint16mf2x8_t test_vlseg8e16_v_u16mf2x8_ntl_PALL(const uint16_t *base, size_t vl, int domain) {
  return __riscv_vlseg8e16_v_u16mf2x8_ntl(base, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint16m1x8_t test_vlseg8e16_v_u16m1x8_ntl_PALL(const uint16_t *base, size_t vl, int domain) {
  return __riscv_vlseg8e16_v_u16m1x8_ntl(base, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vfloat16mf4x8_t test_vlseg8e16_v_f16mf4x8_m_ntl_PALL(vbool64_t mask, const float16_t *base, size_t vl, int domain) {
  return __riscv_vlseg8e16_v_f16mf4x8_m_ntl(mask, base, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vfloat16mf2x8_t test_vlseg8e16_v_f16mf2x8_m_ntl_PALL(vbool32_t mask, const float16_t *base, size_t vl, int domain) {
  return __riscv_vlseg8e16_v_f16mf2x8_m_ntl(mask, base, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vfloat16m1x8_t test_vlseg8e16_v_f16m1x8_m_ntl_PALL(vbool16_t mask, const float16_t *base, size_t vl, int domain) {
  return __riscv_vlseg8e16_v_f16m1x8_m_ntl(mask, base, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint16mf4x8_t test_vlseg8e16_v_i16mf4x8_m_ntl_PALL(vbool64_t mask, const int16_t *base, size_t vl, int domain) {
  return __riscv_vlseg8e16_v_i16mf4x8_m_ntl(mask, base, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint16mf2x8_t test_vlseg8e16_v_i16mf2x8_m_ntl_PALL(vbool32_t mask, const int16_t *base, size_t vl, int domain) {
  return __riscv_vlseg8e16_v_i16mf2x8_m_ntl(mask, base, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint16m1x8_t test_vlseg8e16_v_i16m1x8_m_ntl_PALL(vbool16_t mask, const int16_t *base, size_t vl, int domain) {
  return __riscv_vlseg8e16_v_i16m1x8_m_ntl(mask, base, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint16mf4x8_t test_vlseg8e16_v_u16mf4x8_m_ntl_PALL(vbool64_t mask, const uint16_t *base, size_t vl, int domain) {
  return __riscv_vlseg8e16_v_u16mf4x8_m_ntl(mask, base, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint16mf2x8_t test_vlseg8e16_v_u16mf2x8_m_ntl_PALL(vbool32_t mask, const uint16_t *base, size_t vl, int domain) {
  return __riscv_vlseg8e16_v_u16mf2x8_m_ntl(mask, base, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint16m1x8_t test_vlseg8e16_v_u16m1x8_m_ntl_PALL(vbool16_t mask, const uint16_t *base, size_t vl, int domain) {
  return __riscv_vlseg8e16_v_u16m1x8_m_ntl(mask, base, vl, __RISCV_NTLH_ALL_PRIVATE);
}

