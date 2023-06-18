#include <stdint.h>
#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
#include <riscv_ntlh.h>

void test_vsseg7e32_v_f32mf2x7_ntl_S1(float32_t *base, vfloat32mf2x7_t v_tuple, size_t vl, int domain) {
  return __riscv_vsseg7e32_v_f32mf2x7_ntl(base, v_tuple, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vsseg7e32_v_f32m1x7_ntl_S1(float32_t *base, vfloat32m1x7_t v_tuple, size_t vl, int domain) {
  return __riscv_vsseg7e32_v_f32m1x7_ntl(base, v_tuple, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vsseg7e32_v_i32mf2x7_ntl_S1(int32_t *base, vint32mf2x7_t v_tuple, size_t vl, int domain) {
  return __riscv_vsseg7e32_v_i32mf2x7_ntl(base, v_tuple, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vsseg7e32_v_i32m1x7_ntl_S1(int32_t *base, vint32m1x7_t v_tuple, size_t vl, int domain) {
  return __riscv_vsseg7e32_v_i32m1x7_ntl(base, v_tuple, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vsseg7e32_v_u32mf2x7_ntl_S1(uint32_t *base, vuint32mf2x7_t v_tuple, size_t vl, int domain) {
  return __riscv_vsseg7e32_v_u32mf2x7_ntl(base, v_tuple, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vsseg7e32_v_u32m1x7_ntl_S1(uint32_t *base, vuint32m1x7_t v_tuple, size_t vl, int domain) {
  return __riscv_vsseg7e32_v_u32m1x7_ntl(base, v_tuple, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vsseg7e32_v_f32mf2x7_m_ntl_S1(vbool64_t mask, float32_t *base, vfloat32mf2x7_t v_tuple, size_t vl, int domain) {
  return __riscv_vsseg7e32_v_f32mf2x7_m_ntl(mask, base, v_tuple, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vsseg7e32_v_f32m1x7_m_ntl_S1(vbool32_t mask, float32_t *base, vfloat32m1x7_t v_tuple, size_t vl, int domain) {
  return __riscv_vsseg7e32_v_f32m1x7_m_ntl(mask, base, v_tuple, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vsseg7e32_v_i32mf2x7_m_ntl_S1(vbool64_t mask, int32_t *base, vint32mf2x7_t v_tuple, size_t vl, int domain) {
  return __riscv_vsseg7e32_v_i32mf2x7_m_ntl(mask, base, v_tuple, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vsseg7e32_v_i32m1x7_m_ntl_S1(vbool32_t mask, int32_t *base, vint32m1x7_t v_tuple, size_t vl, int domain) {
  return __riscv_vsseg7e32_v_i32m1x7_m_ntl(mask, base, v_tuple, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vsseg7e32_v_u32mf2x7_m_ntl_S1(vbool64_t mask, uint32_t *base, vuint32mf2x7_t v_tuple, size_t vl, int domain) {
  return __riscv_vsseg7e32_v_u32mf2x7_m_ntl(mask, base, v_tuple, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vsseg7e32_v_u32m1x7_m_ntl_S1(vbool32_t mask, uint32_t *base, vuint32m1x7_t v_tuple, size_t vl, int domain) {
  return __riscv_vsseg7e32_v_u32m1x7_m_ntl(mask, base, v_tuple, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

