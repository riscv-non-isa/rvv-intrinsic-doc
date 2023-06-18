#include <stdint.h>
#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
#include <riscv_ntlh.h>

void test_vssseg4e16_v_f16mf4x4_ntl_ALL(float16_t *base, ptrdiff_t bstride, vfloat16mf4x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vssseg4e16_v_f16mf4x4_ntl(base, bstride, v_tuple, vl, __RISCV_NTLH_ALL);
}

void test_vssseg4e16_v_f16mf2x4_ntl_ALL(float16_t *base, ptrdiff_t bstride, vfloat16mf2x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vssseg4e16_v_f16mf2x4_ntl(base, bstride, v_tuple, vl, __RISCV_NTLH_ALL);
}

void test_vssseg4e16_v_f16m1x4_ntl_ALL(float16_t *base, ptrdiff_t bstride, vfloat16m1x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vssseg4e16_v_f16m1x4_ntl(base, bstride, v_tuple, vl, __RISCV_NTLH_ALL);
}

void test_vssseg4e16_v_f16m2x4_ntl_ALL(float16_t *base, ptrdiff_t bstride, vfloat16m2x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vssseg4e16_v_f16m2x4_ntl(base, bstride, v_tuple, vl, __RISCV_NTLH_ALL);
}

void test_vssseg4e16_v_i16mf4x4_ntl_ALL(int16_t *base, ptrdiff_t bstride, vint16mf4x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vssseg4e16_v_i16mf4x4_ntl(base, bstride, v_tuple, vl, __RISCV_NTLH_ALL);
}

void test_vssseg4e16_v_i16mf2x4_ntl_ALL(int16_t *base, ptrdiff_t bstride, vint16mf2x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vssseg4e16_v_i16mf2x4_ntl(base, bstride, v_tuple, vl, __RISCV_NTLH_ALL);
}

void test_vssseg4e16_v_i16m1x4_ntl_ALL(int16_t *base, ptrdiff_t bstride, vint16m1x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vssseg4e16_v_i16m1x4_ntl(base, bstride, v_tuple, vl, __RISCV_NTLH_ALL);
}

void test_vssseg4e16_v_i16m2x4_ntl_ALL(int16_t *base, ptrdiff_t bstride, vint16m2x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vssseg4e16_v_i16m2x4_ntl(base, bstride, v_tuple, vl, __RISCV_NTLH_ALL);
}

void test_vssseg4e16_v_u16mf4x4_ntl_ALL(uint16_t *base, ptrdiff_t bstride, vuint16mf4x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vssseg4e16_v_u16mf4x4_ntl(base, bstride, v_tuple, vl, __RISCV_NTLH_ALL);
}

void test_vssseg4e16_v_u16mf2x4_ntl_ALL(uint16_t *base, ptrdiff_t bstride, vuint16mf2x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vssseg4e16_v_u16mf2x4_ntl(base, bstride, v_tuple, vl, __RISCV_NTLH_ALL);
}

void test_vssseg4e16_v_u16m1x4_ntl_ALL(uint16_t *base, ptrdiff_t bstride, vuint16m1x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vssseg4e16_v_u16m1x4_ntl(base, bstride, v_tuple, vl, __RISCV_NTLH_ALL);
}

void test_vssseg4e16_v_u16m2x4_ntl_ALL(uint16_t *base, ptrdiff_t bstride, vuint16m2x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vssseg4e16_v_u16m2x4_ntl(base, bstride, v_tuple, vl, __RISCV_NTLH_ALL);
}

void test_vssseg4e16_v_f16mf4x4_m_ntl_ALL(vbool64_t mask, float16_t *base, ptrdiff_t bstride, vfloat16mf4x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vssseg4e16_v_f16mf4x4_m_ntl(mask, base, bstride, v_tuple, vl, __RISCV_NTLH_ALL);
}

void test_vssseg4e16_v_f16mf2x4_m_ntl_ALL(vbool32_t mask, float16_t *base, ptrdiff_t bstride, vfloat16mf2x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vssseg4e16_v_f16mf2x4_m_ntl(mask, base, bstride, v_tuple, vl, __RISCV_NTLH_ALL);
}

void test_vssseg4e16_v_f16m1x4_m_ntl_ALL(vbool16_t mask, float16_t *base, ptrdiff_t bstride, vfloat16m1x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vssseg4e16_v_f16m1x4_m_ntl(mask, base, bstride, v_tuple, vl, __RISCV_NTLH_ALL);
}

void test_vssseg4e16_v_f16m2x4_m_ntl_ALL(vbool8_t mask, float16_t *base, ptrdiff_t bstride, vfloat16m2x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vssseg4e16_v_f16m2x4_m_ntl(mask, base, bstride, v_tuple, vl, __RISCV_NTLH_ALL);
}

void test_vssseg4e16_v_i16mf4x4_m_ntl_ALL(vbool64_t mask, int16_t *base, ptrdiff_t bstride, vint16mf4x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vssseg4e16_v_i16mf4x4_m_ntl(mask, base, bstride, v_tuple, vl, __RISCV_NTLH_ALL);
}

void test_vssseg4e16_v_i16mf2x4_m_ntl_ALL(vbool32_t mask, int16_t *base, ptrdiff_t bstride, vint16mf2x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vssseg4e16_v_i16mf2x4_m_ntl(mask, base, bstride, v_tuple, vl, __RISCV_NTLH_ALL);
}

void test_vssseg4e16_v_i16m1x4_m_ntl_ALL(vbool16_t mask, int16_t *base, ptrdiff_t bstride, vint16m1x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vssseg4e16_v_i16m1x4_m_ntl(mask, base, bstride, v_tuple, vl, __RISCV_NTLH_ALL);
}

void test_vssseg4e16_v_i16m2x4_m_ntl_ALL(vbool8_t mask, int16_t *base, ptrdiff_t bstride, vint16m2x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vssseg4e16_v_i16m2x4_m_ntl(mask, base, bstride, v_tuple, vl, __RISCV_NTLH_ALL);
}

void test_vssseg4e16_v_u16mf4x4_m_ntl_ALL(vbool64_t mask, uint16_t *base, ptrdiff_t bstride, vuint16mf4x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vssseg4e16_v_u16mf4x4_m_ntl(mask, base, bstride, v_tuple, vl, __RISCV_NTLH_ALL);
}

void test_vssseg4e16_v_u16mf2x4_m_ntl_ALL(vbool32_t mask, uint16_t *base, ptrdiff_t bstride, vuint16mf2x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vssseg4e16_v_u16mf2x4_m_ntl(mask, base, bstride, v_tuple, vl, __RISCV_NTLH_ALL);
}

void test_vssseg4e16_v_u16m1x4_m_ntl_ALL(vbool16_t mask, uint16_t *base, ptrdiff_t bstride, vuint16m1x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vssseg4e16_v_u16m1x4_m_ntl(mask, base, bstride, v_tuple, vl, __RISCV_NTLH_ALL);
}

void test_vssseg4e16_v_u16m2x4_m_ntl_ALL(vbool8_t mask, uint16_t *base, ptrdiff_t bstride, vuint16m2x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vssseg4e16_v_u16m2x4_m_ntl(mask, base, bstride, v_tuple, vl, __RISCV_NTLH_ALL);
}

