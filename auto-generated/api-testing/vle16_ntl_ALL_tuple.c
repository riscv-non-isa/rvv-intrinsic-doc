#include <stdint.h>
#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
#include <riscv_ntlh.h>

vfloat16mf4_t test_vle16_v_f16mf4_ntl_ALL(const float16_t *base, size_t vl, int domain) {
  return __riscv_vle16_v_f16mf4_ntl(base, vl, __RISCV_NTLH_ALL);
}

vfloat16mf2_t test_vle16_v_f16mf2_ntl_ALL(const float16_t *base, size_t vl, int domain) {
  return __riscv_vle16_v_f16mf2_ntl(base, vl, __RISCV_NTLH_ALL);
}

vfloat16m1_t test_vle16_v_f16m1_ntl_ALL(const float16_t *base, size_t vl, int domain) {
  return __riscv_vle16_v_f16m1_ntl(base, vl, __RISCV_NTLH_ALL);
}

vfloat16m2_t test_vle16_v_f16m2_ntl_ALL(const float16_t *base, size_t vl, int domain) {
  return __riscv_vle16_v_f16m2_ntl(base, vl, __RISCV_NTLH_ALL);
}

vfloat16m4_t test_vle16_v_f16m4_ntl_ALL(const float16_t *base, size_t vl, int domain) {
  return __riscv_vle16_v_f16m4_ntl(base, vl, __RISCV_NTLH_ALL);
}

vfloat16m8_t test_vle16_v_f16m8_ntl_ALL(const float16_t *base, size_t vl, int domain) {
  return __riscv_vle16_v_f16m8_ntl(base, vl, __RISCV_NTLH_ALL);
}

vint16mf4_t test_vle16_v_i16mf4_ntl_ALL(const int16_t *base, size_t vl, int domain) {
  return __riscv_vle16_v_i16mf4_ntl(base, vl, __RISCV_NTLH_ALL);
}

vint16mf2_t test_vle16_v_i16mf2_ntl_ALL(const int16_t *base, size_t vl, int domain) {
  return __riscv_vle16_v_i16mf2_ntl(base, vl, __RISCV_NTLH_ALL);
}

vint16m1_t test_vle16_v_i16m1_ntl_ALL(const int16_t *base, size_t vl, int domain) {
  return __riscv_vle16_v_i16m1_ntl(base, vl, __RISCV_NTLH_ALL);
}

vint16m2_t test_vle16_v_i16m2_ntl_ALL(const int16_t *base, size_t vl, int domain) {
  return __riscv_vle16_v_i16m2_ntl(base, vl, __RISCV_NTLH_ALL);
}

vint16m4_t test_vle16_v_i16m4_ntl_ALL(const int16_t *base, size_t vl, int domain) {
  return __riscv_vle16_v_i16m4_ntl(base, vl, __RISCV_NTLH_ALL);
}

vint16m8_t test_vle16_v_i16m8_ntl_ALL(const int16_t *base, size_t vl, int domain) {
  return __riscv_vle16_v_i16m8_ntl(base, vl, __RISCV_NTLH_ALL);
}

vuint16mf4_t test_vle16_v_u16mf4_ntl_ALL(const uint16_t *base, size_t vl, int domain) {
  return __riscv_vle16_v_u16mf4_ntl(base, vl, __RISCV_NTLH_ALL);
}

vuint16mf2_t test_vle16_v_u16mf2_ntl_ALL(const uint16_t *base, size_t vl, int domain) {
  return __riscv_vle16_v_u16mf2_ntl(base, vl, __RISCV_NTLH_ALL);
}

vuint16m1_t test_vle16_v_u16m1_ntl_ALL(const uint16_t *base, size_t vl, int domain) {
  return __riscv_vle16_v_u16m1_ntl(base, vl, __RISCV_NTLH_ALL);
}

vuint16m2_t test_vle16_v_u16m2_ntl_ALL(const uint16_t *base, size_t vl, int domain) {
  return __riscv_vle16_v_u16m2_ntl(base, vl, __RISCV_NTLH_ALL);
}

vuint16m4_t test_vle16_v_u16m4_ntl_ALL(const uint16_t *base, size_t vl, int domain) {
  return __riscv_vle16_v_u16m4_ntl(base, vl, __RISCV_NTLH_ALL);
}

vuint16m8_t test_vle16_v_u16m8_ntl_ALL(const uint16_t *base, size_t vl, int domain) {
  return __riscv_vle16_v_u16m8_ntl(base, vl, __RISCV_NTLH_ALL);
}

vfloat16mf4_t test_vle16_v_f16mf4_m_ntl_ALL(vbool64_t mask, const float16_t *base, size_t vl, int domain) {
  return __riscv_vle16_v_f16mf4_m_ntl(mask, base, vl, __RISCV_NTLH_ALL);
}

vfloat16mf2_t test_vle16_v_f16mf2_m_ntl_ALL(vbool32_t mask, const float16_t *base, size_t vl, int domain) {
  return __riscv_vle16_v_f16mf2_m_ntl(mask, base, vl, __RISCV_NTLH_ALL);
}

vfloat16m1_t test_vle16_v_f16m1_m_ntl_ALL(vbool16_t mask, const float16_t *base, size_t vl, int domain) {
  return __riscv_vle16_v_f16m1_m_ntl(mask, base, vl, __RISCV_NTLH_ALL);
}

vfloat16m2_t test_vle16_v_f16m2_m_ntl_ALL(vbool8_t mask, const float16_t *base, size_t vl, int domain) {
  return __riscv_vle16_v_f16m2_m_ntl(mask, base, vl, __RISCV_NTLH_ALL);
}

vfloat16m4_t test_vle16_v_f16m4_m_ntl_ALL(vbool4_t mask, const float16_t *base, size_t vl, int domain) {
  return __riscv_vle16_v_f16m4_m_ntl(mask, base, vl, __RISCV_NTLH_ALL);
}

vfloat16m8_t test_vle16_v_f16m8_m_ntl_ALL(vbool2_t mask, const float16_t *base, size_t vl, int domain) {
  return __riscv_vle16_v_f16m8_m_ntl(mask, base, vl, __RISCV_NTLH_ALL);
}

vint16mf4_t test_vle16_v_i16mf4_m_ntl_ALL(vbool64_t mask, const int16_t *base, size_t vl, int domain) {
  return __riscv_vle16_v_i16mf4_m_ntl(mask, base, vl, __RISCV_NTLH_ALL);
}

vint16mf2_t test_vle16_v_i16mf2_m_ntl_ALL(vbool32_t mask, const int16_t *base, size_t vl, int domain) {
  return __riscv_vle16_v_i16mf2_m_ntl(mask, base, vl, __RISCV_NTLH_ALL);
}

vint16m1_t test_vle16_v_i16m1_m_ntl_ALL(vbool16_t mask, const int16_t *base, size_t vl, int domain) {
  return __riscv_vle16_v_i16m1_m_ntl(mask, base, vl, __RISCV_NTLH_ALL);
}

vint16m2_t test_vle16_v_i16m2_m_ntl_ALL(vbool8_t mask, const int16_t *base, size_t vl, int domain) {
  return __riscv_vle16_v_i16m2_m_ntl(mask, base, vl, __RISCV_NTLH_ALL);
}

vint16m4_t test_vle16_v_i16m4_m_ntl_ALL(vbool4_t mask, const int16_t *base, size_t vl, int domain) {
  return __riscv_vle16_v_i16m4_m_ntl(mask, base, vl, __RISCV_NTLH_ALL);
}

vint16m8_t test_vle16_v_i16m8_m_ntl_ALL(vbool2_t mask, const int16_t *base, size_t vl, int domain) {
  return __riscv_vle16_v_i16m8_m_ntl(mask, base, vl, __RISCV_NTLH_ALL);
}

vuint16mf4_t test_vle16_v_u16mf4_m_ntl_ALL(vbool64_t mask, const uint16_t *base, size_t vl, int domain) {
  return __riscv_vle16_v_u16mf4_m_ntl(mask, base, vl, __RISCV_NTLH_ALL);
}

vuint16mf2_t test_vle16_v_u16mf2_m_ntl_ALL(vbool32_t mask, const uint16_t *base, size_t vl, int domain) {
  return __riscv_vle16_v_u16mf2_m_ntl(mask, base, vl, __RISCV_NTLH_ALL);
}

vuint16m1_t test_vle16_v_u16m1_m_ntl_ALL(vbool16_t mask, const uint16_t *base, size_t vl, int domain) {
  return __riscv_vle16_v_u16m1_m_ntl(mask, base, vl, __RISCV_NTLH_ALL);
}

vuint16m2_t test_vle16_v_u16m2_m_ntl_ALL(vbool8_t mask, const uint16_t *base, size_t vl, int domain) {
  return __riscv_vle16_v_u16m2_m_ntl(mask, base, vl, __RISCV_NTLH_ALL);
}

vuint16m4_t test_vle16_v_u16m4_m_ntl_ALL(vbool4_t mask, const uint16_t *base, size_t vl, int domain) {
  return __riscv_vle16_v_u16m4_m_ntl(mask, base, vl, __RISCV_NTLH_ALL);
}

vuint16m8_t test_vle16_v_u16m8_m_ntl_ALL(vbool2_t mask, const uint16_t *base, size_t vl, int domain) {
  return __riscv_vle16_v_u16m8_m_ntl(mask, base, vl, __RISCV_NTLH_ALL);
}

