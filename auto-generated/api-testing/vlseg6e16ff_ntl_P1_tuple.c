#include <stdint.h>
#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
#include <riscv_ntlh.h>

vfloat16mf4x6_t test_vlseg6e16ff_v_f16mf4x6_ntl_P1(const float16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg6e16ff_v_f16mf4x6_ntl(base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vfloat16mf2x6_t test_vlseg6e16ff_v_f16mf2x6_ntl_P1(const float16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg6e16ff_v_f16mf2x6_ntl(base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vfloat16m1x6_t test_vlseg6e16ff_v_f16m1x6_ntl_P1(const float16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg6e16ff_v_f16m1x6_ntl(base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint16mf4x6_t test_vlseg6e16ff_v_i16mf4x6_ntl_P1(const int16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg6e16ff_v_i16mf4x6_ntl(base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint16mf2x6_t test_vlseg6e16ff_v_i16mf2x6_ntl_P1(const int16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg6e16ff_v_i16mf2x6_ntl(base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint16m1x6_t test_vlseg6e16ff_v_i16m1x6_ntl_P1(const int16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg6e16ff_v_i16m1x6_ntl(base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint16mf4x6_t test_vlseg6e16ff_v_u16mf4x6_ntl_P1(const uint16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg6e16ff_v_u16mf4x6_ntl(base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint16mf2x6_t test_vlseg6e16ff_v_u16mf2x6_ntl_P1(const uint16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg6e16ff_v_u16mf2x6_ntl(base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint16m1x6_t test_vlseg6e16ff_v_u16m1x6_ntl_P1(const uint16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg6e16ff_v_u16m1x6_ntl(base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vfloat16mf4x6_t test_vlseg6e16ff_v_f16mf4x6_m_ntl_P1(vbool64_t mask, const float16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg6e16ff_v_f16mf4x6_m_ntl(mask, base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vfloat16mf2x6_t test_vlseg6e16ff_v_f16mf2x6_m_ntl_P1(vbool32_t mask, const float16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg6e16ff_v_f16mf2x6_m_ntl(mask, base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vfloat16m1x6_t test_vlseg6e16ff_v_f16m1x6_m_ntl_P1(vbool16_t mask, const float16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg6e16ff_v_f16m1x6_m_ntl(mask, base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint16mf4x6_t test_vlseg6e16ff_v_i16mf4x6_m_ntl_P1(vbool64_t mask, const int16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg6e16ff_v_i16mf4x6_m_ntl(mask, base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint16mf2x6_t test_vlseg6e16ff_v_i16mf2x6_m_ntl_P1(vbool32_t mask, const int16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg6e16ff_v_i16mf2x6_m_ntl(mask, base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint16m1x6_t test_vlseg6e16ff_v_i16m1x6_m_ntl_P1(vbool16_t mask, const int16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg6e16ff_v_i16m1x6_m_ntl(mask, base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint16mf4x6_t test_vlseg6e16ff_v_u16mf4x6_m_ntl_P1(vbool64_t mask, const uint16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg6e16ff_v_u16mf4x6_m_ntl(mask, base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint16mf2x6_t test_vlseg6e16ff_v_u16mf2x6_m_ntl_P1(vbool32_t mask, const uint16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg6e16ff_v_u16mf2x6_m_ntl(mask, base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint16m1x6_t test_vlseg6e16ff_v_u16m1x6_m_ntl_P1(vbool16_t mask, const uint16_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg6e16ff_v_u16m1x6_m_ntl(mask, base, new_vl, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

