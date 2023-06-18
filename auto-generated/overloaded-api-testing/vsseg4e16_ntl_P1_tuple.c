#include <stdint.h>
#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
#include <riscv_ntlh.h>

void test_vsseg4e16_v_f16mf4x4_ntl_P1(float16_t *base, vfloat16mf4x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vsseg4e16_ntl(base, v_tuple, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

void test_vsseg4e16_v_f16mf2x4_ntl_P1(float16_t *base, vfloat16mf2x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vsseg4e16_ntl(base, v_tuple, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

void test_vsseg4e16_v_f16m1x4_ntl_P1(float16_t *base, vfloat16m1x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vsseg4e16_ntl(base, v_tuple, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

void test_vsseg4e16_v_f16m2x4_ntl_P1(float16_t *base, vfloat16m2x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vsseg4e16_ntl(base, v_tuple, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

void test_vsseg4e16_v_i16mf4x4_ntl_P1(int16_t *base, vint16mf4x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vsseg4e16_ntl(base, v_tuple, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

void test_vsseg4e16_v_i16mf2x4_ntl_P1(int16_t *base, vint16mf2x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vsseg4e16_ntl(base, v_tuple, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

void test_vsseg4e16_v_i16m1x4_ntl_P1(int16_t *base, vint16m1x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vsseg4e16_ntl(base, v_tuple, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

void test_vsseg4e16_v_i16m2x4_ntl_P1(int16_t *base, vint16m2x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vsseg4e16_ntl(base, v_tuple, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

void test_vsseg4e16_v_u16mf4x4_ntl_P1(uint16_t *base, vuint16mf4x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vsseg4e16_ntl(base, v_tuple, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

void test_vsseg4e16_v_u16mf2x4_ntl_P1(uint16_t *base, vuint16mf2x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vsseg4e16_ntl(base, v_tuple, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

void test_vsseg4e16_v_u16m1x4_ntl_P1(uint16_t *base, vuint16m1x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vsseg4e16_ntl(base, v_tuple, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

void test_vsseg4e16_v_u16m2x4_ntl_P1(uint16_t *base, vuint16m2x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vsseg4e16_ntl(base, v_tuple, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

void test_vsseg4e16_v_f16mf4x4_m_ntl_P1(vbool64_t mask, float16_t *base, vfloat16mf4x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vsseg4e16_ntl(mask, base, v_tuple, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

void test_vsseg4e16_v_f16mf2x4_m_ntl_P1(vbool32_t mask, float16_t *base, vfloat16mf2x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vsseg4e16_ntl(mask, base, v_tuple, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

void test_vsseg4e16_v_f16m1x4_m_ntl_P1(vbool16_t mask, float16_t *base, vfloat16m1x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vsseg4e16_ntl(mask, base, v_tuple, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

void test_vsseg4e16_v_f16m2x4_m_ntl_P1(vbool8_t mask, float16_t *base, vfloat16m2x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vsseg4e16_ntl(mask, base, v_tuple, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

void test_vsseg4e16_v_i16mf4x4_m_ntl_P1(vbool64_t mask, int16_t *base, vint16mf4x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vsseg4e16_ntl(mask, base, v_tuple, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

void test_vsseg4e16_v_i16mf2x4_m_ntl_P1(vbool32_t mask, int16_t *base, vint16mf2x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vsseg4e16_ntl(mask, base, v_tuple, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

void test_vsseg4e16_v_i16m1x4_m_ntl_P1(vbool16_t mask, int16_t *base, vint16m1x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vsseg4e16_ntl(mask, base, v_tuple, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

void test_vsseg4e16_v_i16m2x4_m_ntl_P1(vbool8_t mask, int16_t *base, vint16m2x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vsseg4e16_ntl(mask, base, v_tuple, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

void test_vsseg4e16_v_u16mf4x4_m_ntl_P1(vbool64_t mask, uint16_t *base, vuint16mf4x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vsseg4e16_ntl(mask, base, v_tuple, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

void test_vsseg4e16_v_u16mf2x4_m_ntl_P1(vbool32_t mask, uint16_t *base, vuint16mf2x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vsseg4e16_ntl(mask, base, v_tuple, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

void test_vsseg4e16_v_u16m1x4_m_ntl_P1(vbool16_t mask, uint16_t *base, vuint16m1x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vsseg4e16_ntl(mask, base, v_tuple, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

void test_vsseg4e16_v_u16m2x4_m_ntl_P1(vbool8_t mask, uint16_t *base, vuint16m2x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vsseg4e16_ntl(mask, base, v_tuple, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

