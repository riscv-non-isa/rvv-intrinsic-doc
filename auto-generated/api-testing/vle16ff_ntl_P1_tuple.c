#include <stdint.h>
#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
#include <riscv_ntlh.h>

vfloat16mf4_t test_vle16ff_v_f16mf4_ntl_P1(const float16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle16ff_v_f16mf4_ntl(base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vfloat16mf2_t test_vle16ff_v_f16mf2_ntl_P1(const float16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle16ff_v_f16mf2_ntl(base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vfloat16m1_t test_vle16ff_v_f16m1_ntl_P1(const float16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle16ff_v_f16m1_ntl(base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vfloat16m2_t test_vle16ff_v_f16m2_ntl_P1(const float16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle16ff_v_f16m2_ntl(base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vfloat16m4_t test_vle16ff_v_f16m4_ntl_P1(const float16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle16ff_v_f16m4_ntl(base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vfloat16m8_t test_vle16ff_v_f16m8_ntl_P1(const float16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle16ff_v_f16m8_ntl(base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint16mf4_t test_vle16ff_v_i16mf4_ntl_P1(const int16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle16ff_v_i16mf4_ntl(base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint16mf2_t test_vle16ff_v_i16mf2_ntl_P1(const int16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle16ff_v_i16mf2_ntl(base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint16m1_t test_vle16ff_v_i16m1_ntl_P1(const int16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle16ff_v_i16m1_ntl(base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint16m2_t test_vle16ff_v_i16m2_ntl_P1(const int16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle16ff_v_i16m2_ntl(base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint16m4_t test_vle16ff_v_i16m4_ntl_P1(const int16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle16ff_v_i16m4_ntl(base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint16m8_t test_vle16ff_v_i16m8_ntl_P1(const int16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle16ff_v_i16m8_ntl(base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint16mf4_t test_vle16ff_v_u16mf4_ntl_P1(const uint16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle16ff_v_u16mf4_ntl(base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint16mf2_t test_vle16ff_v_u16mf2_ntl_P1(const uint16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle16ff_v_u16mf2_ntl(base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint16m1_t test_vle16ff_v_u16m1_ntl_P1(const uint16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle16ff_v_u16m1_ntl(base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint16m2_t test_vle16ff_v_u16m2_ntl_P1(const uint16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle16ff_v_u16m2_ntl(base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint16m4_t test_vle16ff_v_u16m4_ntl_P1(const uint16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle16ff_v_u16m4_ntl(base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint16m8_t test_vle16ff_v_u16m8_ntl_P1(const uint16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle16ff_v_u16m8_ntl(base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vfloat16mf4_t test_vle16ff_v_f16mf4_m_ntl_P1(vbool64_t mask, const float16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle16ff_v_f16mf4_m_ntl(mask, base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vfloat16mf2_t test_vle16ff_v_f16mf2_m_ntl_P1(vbool32_t mask, const float16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle16ff_v_f16mf2_m_ntl(mask, base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vfloat16m1_t test_vle16ff_v_f16m1_m_ntl_P1(vbool16_t mask, const float16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle16ff_v_f16m1_m_ntl(mask, base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vfloat16m2_t test_vle16ff_v_f16m2_m_ntl_P1(vbool8_t mask, const float16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle16ff_v_f16m2_m_ntl(mask, base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vfloat16m4_t test_vle16ff_v_f16m4_m_ntl_P1(vbool4_t mask, const float16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle16ff_v_f16m4_m_ntl(mask, base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vfloat16m8_t test_vle16ff_v_f16m8_m_ntl_P1(vbool2_t mask, const float16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle16ff_v_f16m8_m_ntl(mask, base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint16mf4_t test_vle16ff_v_i16mf4_m_ntl_P1(vbool64_t mask, const int16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle16ff_v_i16mf4_m_ntl(mask, base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint16mf2_t test_vle16ff_v_i16mf2_m_ntl_P1(vbool32_t mask, const int16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle16ff_v_i16mf2_m_ntl(mask, base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint16m1_t test_vle16ff_v_i16m1_m_ntl_P1(vbool16_t mask, const int16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle16ff_v_i16m1_m_ntl(mask, base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint16m2_t test_vle16ff_v_i16m2_m_ntl_P1(vbool8_t mask, const int16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle16ff_v_i16m2_m_ntl(mask, base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint16m4_t test_vle16ff_v_i16m4_m_ntl_P1(vbool4_t mask, const int16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle16ff_v_i16m4_m_ntl(mask, base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint16m8_t test_vle16ff_v_i16m8_m_ntl_P1(vbool2_t mask, const int16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle16ff_v_i16m8_m_ntl(mask, base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint16mf4_t test_vle16ff_v_u16mf4_m_ntl_P1(vbool64_t mask, const uint16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle16ff_v_u16mf4_m_ntl(mask, base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint16mf2_t test_vle16ff_v_u16mf2_m_ntl_P1(vbool32_t mask, const uint16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle16ff_v_u16mf2_m_ntl(mask, base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint16m1_t test_vle16ff_v_u16m1_m_ntl_P1(vbool16_t mask, const uint16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle16ff_v_u16m1_m_ntl(mask, base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint16m2_t test_vle16ff_v_u16m2_m_ntl_P1(vbool8_t mask, const uint16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle16ff_v_u16m2_m_ntl(mask, base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint16m4_t test_vle16ff_v_u16m4_m_ntl_P1(vbool4_t mask, const uint16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle16ff_v_u16m4_m_ntl(mask, base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint16m8_t test_vle16ff_v_u16m8_m_ntl_P1(vbool2_t mask, const uint16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle16ff_v_u16m8_m_ntl(mask, base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

