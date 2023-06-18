#include <stdint.h>
#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
#include <riscv_ntlh.h>

void test_vsse16_v_f16mf4_ntl_ALL(float16_t *base, ptrdiff_t bstride, vfloat16mf4_t value, size_t vl, int domain) {
  return __riscv_vsse16_v_f16mf4_ntl(base, bstride, value, vl, __RISCV_NTLH_ALL);
}

void test_vsse16_v_f16mf2_ntl_ALL(float16_t *base, ptrdiff_t bstride, vfloat16mf2_t value, size_t vl, int domain) {
  return __riscv_vsse16_v_f16mf2_ntl(base, bstride, value, vl, __RISCV_NTLH_ALL);
}

void test_vsse16_v_f16m1_ntl_ALL(float16_t *base, ptrdiff_t bstride, vfloat16m1_t value, size_t vl, int domain) {
  return __riscv_vsse16_v_f16m1_ntl(base, bstride, value, vl, __RISCV_NTLH_ALL);
}

void test_vsse16_v_f16m2_ntl_ALL(float16_t *base, ptrdiff_t bstride, vfloat16m2_t value, size_t vl, int domain) {
  return __riscv_vsse16_v_f16m2_ntl(base, bstride, value, vl, __RISCV_NTLH_ALL);
}

void test_vsse16_v_f16m4_ntl_ALL(float16_t *base, ptrdiff_t bstride, vfloat16m4_t value, size_t vl, int domain) {
  return __riscv_vsse16_v_f16m4_ntl(base, bstride, value, vl, __RISCV_NTLH_ALL);
}

void test_vsse16_v_f16m8_ntl_ALL(float16_t *base, ptrdiff_t bstride, vfloat16m8_t value, size_t vl, int domain) {
  return __riscv_vsse16_v_f16m8_ntl(base, bstride, value, vl, __RISCV_NTLH_ALL);
}

void test_vsse16_v_i16mf4_ntl_ALL(int16_t *base, ptrdiff_t bstride, vint16mf4_t value, size_t vl, int domain) {
  return __riscv_vsse16_v_i16mf4_ntl(base, bstride, value, vl, __RISCV_NTLH_ALL);
}

void test_vsse16_v_i16mf2_ntl_ALL(int16_t *base, ptrdiff_t bstride, vint16mf2_t value, size_t vl, int domain) {
  return __riscv_vsse16_v_i16mf2_ntl(base, bstride, value, vl, __RISCV_NTLH_ALL);
}

void test_vsse16_v_i16m1_ntl_ALL(int16_t *base, ptrdiff_t bstride, vint16m1_t value, size_t vl, int domain) {
  return __riscv_vsse16_v_i16m1_ntl(base, bstride, value, vl, __RISCV_NTLH_ALL);
}

void test_vsse16_v_i16m2_ntl_ALL(int16_t *base, ptrdiff_t bstride, vint16m2_t value, size_t vl, int domain) {
  return __riscv_vsse16_v_i16m2_ntl(base, bstride, value, vl, __RISCV_NTLH_ALL);
}

void test_vsse16_v_i16m4_ntl_ALL(int16_t *base, ptrdiff_t bstride, vint16m4_t value, size_t vl, int domain) {
  return __riscv_vsse16_v_i16m4_ntl(base, bstride, value, vl, __RISCV_NTLH_ALL);
}

void test_vsse16_v_i16m8_ntl_ALL(int16_t *base, ptrdiff_t bstride, vint16m8_t value, size_t vl, int domain) {
  return __riscv_vsse16_v_i16m8_ntl(base, bstride, value, vl, __RISCV_NTLH_ALL);
}

void test_vsse16_v_u16mf4_ntl_ALL(uint16_t *base, ptrdiff_t bstride, vuint16mf4_t value, size_t vl, int domain) {
  return __riscv_vsse16_v_u16mf4_ntl(base, bstride, value, vl, __RISCV_NTLH_ALL);
}

void test_vsse16_v_u16mf2_ntl_ALL(uint16_t *base, ptrdiff_t bstride, vuint16mf2_t value, size_t vl, int domain) {
  return __riscv_vsse16_v_u16mf2_ntl(base, bstride, value, vl, __RISCV_NTLH_ALL);
}

void test_vsse16_v_u16m1_ntl_ALL(uint16_t *base, ptrdiff_t bstride, vuint16m1_t value, size_t vl, int domain) {
  return __riscv_vsse16_v_u16m1_ntl(base, bstride, value, vl, __RISCV_NTLH_ALL);
}

void test_vsse16_v_u16m2_ntl_ALL(uint16_t *base, ptrdiff_t bstride, vuint16m2_t value, size_t vl, int domain) {
  return __riscv_vsse16_v_u16m2_ntl(base, bstride, value, vl, __RISCV_NTLH_ALL);
}

void test_vsse16_v_u16m4_ntl_ALL(uint16_t *base, ptrdiff_t bstride, vuint16m4_t value, size_t vl, int domain) {
  return __riscv_vsse16_v_u16m4_ntl(base, bstride, value, vl, __RISCV_NTLH_ALL);
}

void test_vsse16_v_u16m8_ntl_ALL(uint16_t *base, ptrdiff_t bstride, vuint16m8_t value, size_t vl, int domain) {
  return __riscv_vsse16_v_u16m8_ntl(base, bstride, value, vl, __RISCV_NTLH_ALL);
}

void test_vsse16_v_f16mf4_m_ntl_ALL(vbool64_t mask, float16_t *base, ptrdiff_t bstride, vfloat16mf4_t value, size_t vl, int domain) {
  return __riscv_vsse16_v_f16mf4_m_ntl(mask, base, bstride, value, vl, __RISCV_NTLH_ALL);
}

void test_vsse16_v_f16mf2_m_ntl_ALL(vbool32_t mask, float16_t *base, ptrdiff_t bstride, vfloat16mf2_t value, size_t vl, int domain) {
  return __riscv_vsse16_v_f16mf2_m_ntl(mask, base, bstride, value, vl, __RISCV_NTLH_ALL);
}

void test_vsse16_v_f16m1_m_ntl_ALL(vbool16_t mask, float16_t *base, ptrdiff_t bstride, vfloat16m1_t value, size_t vl, int domain) {
  return __riscv_vsse16_v_f16m1_m_ntl(mask, base, bstride, value, vl, __RISCV_NTLH_ALL);
}

void test_vsse16_v_f16m2_m_ntl_ALL(vbool8_t mask, float16_t *base, ptrdiff_t bstride, vfloat16m2_t value, size_t vl, int domain) {
  return __riscv_vsse16_v_f16m2_m_ntl(mask, base, bstride, value, vl, __RISCV_NTLH_ALL);
}

void test_vsse16_v_f16m4_m_ntl_ALL(vbool4_t mask, float16_t *base, ptrdiff_t bstride, vfloat16m4_t value, size_t vl, int domain) {
  return __riscv_vsse16_v_f16m4_m_ntl(mask, base, bstride, value, vl, __RISCV_NTLH_ALL);
}

void test_vsse16_v_f16m8_m_ntl_ALL(vbool2_t mask, float16_t *base, ptrdiff_t bstride, vfloat16m8_t value, size_t vl, int domain) {
  return __riscv_vsse16_v_f16m8_m_ntl(mask, base, bstride, value, vl, __RISCV_NTLH_ALL);
}

void test_vsse16_v_i16mf4_m_ntl_ALL(vbool64_t mask, int16_t *base, ptrdiff_t bstride, vint16mf4_t value, size_t vl, int domain) {
  return __riscv_vsse16_v_i16mf4_m_ntl(mask, base, bstride, value, vl, __RISCV_NTLH_ALL);
}

void test_vsse16_v_i16mf2_m_ntl_ALL(vbool32_t mask, int16_t *base, ptrdiff_t bstride, vint16mf2_t value, size_t vl, int domain) {
  return __riscv_vsse16_v_i16mf2_m_ntl(mask, base, bstride, value, vl, __RISCV_NTLH_ALL);
}

void test_vsse16_v_i16m1_m_ntl_ALL(vbool16_t mask, int16_t *base, ptrdiff_t bstride, vint16m1_t value, size_t vl, int domain) {
  return __riscv_vsse16_v_i16m1_m_ntl(mask, base, bstride, value, vl, __RISCV_NTLH_ALL);
}

void test_vsse16_v_i16m2_m_ntl_ALL(vbool8_t mask, int16_t *base, ptrdiff_t bstride, vint16m2_t value, size_t vl, int domain) {
  return __riscv_vsse16_v_i16m2_m_ntl(mask, base, bstride, value, vl, __RISCV_NTLH_ALL);
}

void test_vsse16_v_i16m4_m_ntl_ALL(vbool4_t mask, int16_t *base, ptrdiff_t bstride, vint16m4_t value, size_t vl, int domain) {
  return __riscv_vsse16_v_i16m4_m_ntl(mask, base, bstride, value, vl, __RISCV_NTLH_ALL);
}

void test_vsse16_v_i16m8_m_ntl_ALL(vbool2_t mask, int16_t *base, ptrdiff_t bstride, vint16m8_t value, size_t vl, int domain) {
  return __riscv_vsse16_v_i16m8_m_ntl(mask, base, bstride, value, vl, __RISCV_NTLH_ALL);
}

void test_vsse16_v_u16mf4_m_ntl_ALL(vbool64_t mask, uint16_t *base, ptrdiff_t bstride, vuint16mf4_t value, size_t vl, int domain) {
  return __riscv_vsse16_v_u16mf4_m_ntl(mask, base, bstride, value, vl, __RISCV_NTLH_ALL);
}

void test_vsse16_v_u16mf2_m_ntl_ALL(vbool32_t mask, uint16_t *base, ptrdiff_t bstride, vuint16mf2_t value, size_t vl, int domain) {
  return __riscv_vsse16_v_u16mf2_m_ntl(mask, base, bstride, value, vl, __RISCV_NTLH_ALL);
}

void test_vsse16_v_u16m1_m_ntl_ALL(vbool16_t mask, uint16_t *base, ptrdiff_t bstride, vuint16m1_t value, size_t vl, int domain) {
  return __riscv_vsse16_v_u16m1_m_ntl(mask, base, bstride, value, vl, __RISCV_NTLH_ALL);
}

void test_vsse16_v_u16m2_m_ntl_ALL(vbool8_t mask, uint16_t *base, ptrdiff_t bstride, vuint16m2_t value, size_t vl, int domain) {
  return __riscv_vsse16_v_u16m2_m_ntl(mask, base, bstride, value, vl, __RISCV_NTLH_ALL);
}

void test_vsse16_v_u16m4_m_ntl_ALL(vbool4_t mask, uint16_t *base, ptrdiff_t bstride, vuint16m4_t value, size_t vl, int domain) {
  return __riscv_vsse16_v_u16m4_m_ntl(mask, base, bstride, value, vl, __RISCV_NTLH_ALL);
}

void test_vsse16_v_u16m8_m_ntl_ALL(vbool2_t mask, uint16_t *base, ptrdiff_t bstride, vuint16m8_t value, size_t vl, int domain) {
  return __riscv_vsse16_v_u16m8_m_ntl(mask, base, bstride, value, vl, __RISCV_NTLH_ALL);
}

