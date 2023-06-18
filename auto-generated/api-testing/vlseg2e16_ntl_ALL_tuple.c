#include <stdint.h>
#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
#include <riscv_ntlh.h>

vfloat16mf4x2_t test_vlseg2e16_v_f16mf4x2_ntl_ALL(const float16_t *base, size_t vl, int domain) {
  return __riscv_vlseg2e16_v_f16mf4x2_ntl(base, vl, __RISCV_NTLH_ALL);
}

vfloat16mf2x2_t test_vlseg2e16_v_f16mf2x2_ntl_ALL(const float16_t *base, size_t vl, int domain) {
  return __riscv_vlseg2e16_v_f16mf2x2_ntl(base, vl, __RISCV_NTLH_ALL);
}

vfloat16m1x2_t test_vlseg2e16_v_f16m1x2_ntl_ALL(const float16_t *base, size_t vl, int domain) {
  return __riscv_vlseg2e16_v_f16m1x2_ntl(base, vl, __RISCV_NTLH_ALL);
}

vfloat16m2x2_t test_vlseg2e16_v_f16m2x2_ntl_ALL(const float16_t *base, size_t vl, int domain) {
  return __riscv_vlseg2e16_v_f16m2x2_ntl(base, vl, __RISCV_NTLH_ALL);
}

vfloat16m4x2_t test_vlseg2e16_v_f16m4x2_ntl_ALL(const float16_t *base, size_t vl, int domain) {
  return __riscv_vlseg2e16_v_f16m4x2_ntl(base, vl, __RISCV_NTLH_ALL);
}

vint16mf4x2_t test_vlseg2e16_v_i16mf4x2_ntl_ALL(const int16_t *base, size_t vl, int domain) {
  return __riscv_vlseg2e16_v_i16mf4x2_ntl(base, vl, __RISCV_NTLH_ALL);
}

vint16mf2x2_t test_vlseg2e16_v_i16mf2x2_ntl_ALL(const int16_t *base, size_t vl, int domain) {
  return __riscv_vlseg2e16_v_i16mf2x2_ntl(base, vl, __RISCV_NTLH_ALL);
}

vint16m1x2_t test_vlseg2e16_v_i16m1x2_ntl_ALL(const int16_t *base, size_t vl, int domain) {
  return __riscv_vlseg2e16_v_i16m1x2_ntl(base, vl, __RISCV_NTLH_ALL);
}

vint16m2x2_t test_vlseg2e16_v_i16m2x2_ntl_ALL(const int16_t *base, size_t vl, int domain) {
  return __riscv_vlseg2e16_v_i16m2x2_ntl(base, vl, __RISCV_NTLH_ALL);
}

vint16m4x2_t test_vlseg2e16_v_i16m4x2_ntl_ALL(const int16_t *base, size_t vl, int domain) {
  return __riscv_vlseg2e16_v_i16m4x2_ntl(base, vl, __RISCV_NTLH_ALL);
}

vuint16mf4x2_t test_vlseg2e16_v_u16mf4x2_ntl_ALL(const uint16_t *base, size_t vl, int domain) {
  return __riscv_vlseg2e16_v_u16mf4x2_ntl(base, vl, __RISCV_NTLH_ALL);
}

vuint16mf2x2_t test_vlseg2e16_v_u16mf2x2_ntl_ALL(const uint16_t *base, size_t vl, int domain) {
  return __riscv_vlseg2e16_v_u16mf2x2_ntl(base, vl, __RISCV_NTLH_ALL);
}

vuint16m1x2_t test_vlseg2e16_v_u16m1x2_ntl_ALL(const uint16_t *base, size_t vl, int domain) {
  return __riscv_vlseg2e16_v_u16m1x2_ntl(base, vl, __RISCV_NTLH_ALL);
}

vuint16m2x2_t test_vlseg2e16_v_u16m2x2_ntl_ALL(const uint16_t *base, size_t vl, int domain) {
  return __riscv_vlseg2e16_v_u16m2x2_ntl(base, vl, __RISCV_NTLH_ALL);
}

vuint16m4x2_t test_vlseg2e16_v_u16m4x2_ntl_ALL(const uint16_t *base, size_t vl, int domain) {
  return __riscv_vlseg2e16_v_u16m4x2_ntl(base, vl, __RISCV_NTLH_ALL);
}

vfloat16mf4x2_t test_vlseg2e16_v_f16mf4x2_m_ntl_ALL(vbool64_t mask, const float16_t *base, size_t vl, int domain) {
  return __riscv_vlseg2e16_v_f16mf4x2_m_ntl(mask, base, vl, __RISCV_NTLH_ALL);
}

vfloat16mf2x2_t test_vlseg2e16_v_f16mf2x2_m_ntl_ALL(vbool32_t mask, const float16_t *base, size_t vl, int domain) {
  return __riscv_vlseg2e16_v_f16mf2x2_m_ntl(mask, base, vl, __RISCV_NTLH_ALL);
}

vfloat16m1x2_t test_vlseg2e16_v_f16m1x2_m_ntl_ALL(vbool16_t mask, const float16_t *base, size_t vl, int domain) {
  return __riscv_vlseg2e16_v_f16m1x2_m_ntl(mask, base, vl, __RISCV_NTLH_ALL);
}

vfloat16m2x2_t test_vlseg2e16_v_f16m2x2_m_ntl_ALL(vbool8_t mask, const float16_t *base, size_t vl, int domain) {
  return __riscv_vlseg2e16_v_f16m2x2_m_ntl(mask, base, vl, __RISCV_NTLH_ALL);
}

vfloat16m4x2_t test_vlseg2e16_v_f16m4x2_m_ntl_ALL(vbool4_t mask, const float16_t *base, size_t vl, int domain) {
  return __riscv_vlseg2e16_v_f16m4x2_m_ntl(mask, base, vl, __RISCV_NTLH_ALL);
}

vint16mf4x2_t test_vlseg2e16_v_i16mf4x2_m_ntl_ALL(vbool64_t mask, const int16_t *base, size_t vl, int domain) {
  return __riscv_vlseg2e16_v_i16mf4x2_m_ntl(mask, base, vl, __RISCV_NTLH_ALL);
}

vint16mf2x2_t test_vlseg2e16_v_i16mf2x2_m_ntl_ALL(vbool32_t mask, const int16_t *base, size_t vl, int domain) {
  return __riscv_vlseg2e16_v_i16mf2x2_m_ntl(mask, base, vl, __RISCV_NTLH_ALL);
}

vint16m1x2_t test_vlseg2e16_v_i16m1x2_m_ntl_ALL(vbool16_t mask, const int16_t *base, size_t vl, int domain) {
  return __riscv_vlseg2e16_v_i16m1x2_m_ntl(mask, base, vl, __RISCV_NTLH_ALL);
}

vint16m2x2_t test_vlseg2e16_v_i16m2x2_m_ntl_ALL(vbool8_t mask, const int16_t *base, size_t vl, int domain) {
  return __riscv_vlseg2e16_v_i16m2x2_m_ntl(mask, base, vl, __RISCV_NTLH_ALL);
}

vint16m4x2_t test_vlseg2e16_v_i16m4x2_m_ntl_ALL(vbool4_t mask, const int16_t *base, size_t vl, int domain) {
  return __riscv_vlseg2e16_v_i16m4x2_m_ntl(mask, base, vl, __RISCV_NTLH_ALL);
}

vuint16mf4x2_t test_vlseg2e16_v_u16mf4x2_m_ntl_ALL(vbool64_t mask, const uint16_t *base, size_t vl, int domain) {
  return __riscv_vlseg2e16_v_u16mf4x2_m_ntl(mask, base, vl, __RISCV_NTLH_ALL);
}

vuint16mf2x2_t test_vlseg2e16_v_u16mf2x2_m_ntl_ALL(vbool32_t mask, const uint16_t *base, size_t vl, int domain) {
  return __riscv_vlseg2e16_v_u16mf2x2_m_ntl(mask, base, vl, __RISCV_NTLH_ALL);
}

vuint16m1x2_t test_vlseg2e16_v_u16m1x2_m_ntl_ALL(vbool16_t mask, const uint16_t *base, size_t vl, int domain) {
  return __riscv_vlseg2e16_v_u16m1x2_m_ntl(mask, base, vl, __RISCV_NTLH_ALL);
}

vuint16m2x2_t test_vlseg2e16_v_u16m2x2_m_ntl_ALL(vbool8_t mask, const uint16_t *base, size_t vl, int domain) {
  return __riscv_vlseg2e16_v_u16m2x2_m_ntl(mask, base, vl, __RISCV_NTLH_ALL);
}

vuint16m4x2_t test_vlseg2e16_v_u16m4x2_m_ntl_ALL(vbool4_t mask, const uint16_t *base, size_t vl, int domain) {
  return __riscv_vlseg2e16_v_u16m4x2_m_ntl(mask, base, vl, __RISCV_NTLH_ALL);
}

