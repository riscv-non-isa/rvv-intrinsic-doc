#include <stdint.h>
#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
#include <riscv_ntlh.h>

void test_vsseg5e32_v_f32mf2x5_ntl_ALL(float32_t *base, vfloat32mf2x5_t v_tuple, size_t vl, int domain) {
  return __riscv_vsseg5e32_ntl(base, v_tuple, vl, __RISCV_NTLH_ALL);
}

void test_vsseg5e32_v_f32m1x5_ntl_ALL(float32_t *base, vfloat32m1x5_t v_tuple, size_t vl, int domain) {
  return __riscv_vsseg5e32_ntl(base, v_tuple, vl, __RISCV_NTLH_ALL);
}

void test_vsseg5e32_v_i32mf2x5_ntl_ALL(int32_t *base, vint32mf2x5_t v_tuple, size_t vl, int domain) {
  return __riscv_vsseg5e32_ntl(base, v_tuple, vl, __RISCV_NTLH_ALL);
}

void test_vsseg5e32_v_i32m1x5_ntl_ALL(int32_t *base, vint32m1x5_t v_tuple, size_t vl, int domain) {
  return __riscv_vsseg5e32_ntl(base, v_tuple, vl, __RISCV_NTLH_ALL);
}

void test_vsseg5e32_v_u32mf2x5_ntl_ALL(uint32_t *base, vuint32mf2x5_t v_tuple, size_t vl, int domain) {
  return __riscv_vsseg5e32_ntl(base, v_tuple, vl, __RISCV_NTLH_ALL);
}

void test_vsseg5e32_v_u32m1x5_ntl_ALL(uint32_t *base, vuint32m1x5_t v_tuple, size_t vl, int domain) {
  return __riscv_vsseg5e32_ntl(base, v_tuple, vl, __RISCV_NTLH_ALL);
}

void test_vsseg5e32_v_f32mf2x5_m_ntl_ALL(vbool64_t mask, float32_t *base, vfloat32mf2x5_t v_tuple, size_t vl, int domain) {
  return __riscv_vsseg5e32_ntl(mask, base, v_tuple, vl, __RISCV_NTLH_ALL);
}

void test_vsseg5e32_v_f32m1x5_m_ntl_ALL(vbool32_t mask, float32_t *base, vfloat32m1x5_t v_tuple, size_t vl, int domain) {
  return __riscv_vsseg5e32_ntl(mask, base, v_tuple, vl, __RISCV_NTLH_ALL);
}

void test_vsseg5e32_v_i32mf2x5_m_ntl_ALL(vbool64_t mask, int32_t *base, vint32mf2x5_t v_tuple, size_t vl, int domain) {
  return __riscv_vsseg5e32_ntl(mask, base, v_tuple, vl, __RISCV_NTLH_ALL);
}

void test_vsseg5e32_v_i32m1x5_m_ntl_ALL(vbool32_t mask, int32_t *base, vint32m1x5_t v_tuple, size_t vl, int domain) {
  return __riscv_vsseg5e32_ntl(mask, base, v_tuple, vl, __RISCV_NTLH_ALL);
}

void test_vsseg5e32_v_u32mf2x5_m_ntl_ALL(vbool64_t mask, uint32_t *base, vuint32mf2x5_t v_tuple, size_t vl, int domain) {
  return __riscv_vsseg5e32_ntl(mask, base, v_tuple, vl, __RISCV_NTLH_ALL);
}

void test_vsseg5e32_v_u32m1x5_m_ntl_ALL(vbool32_t mask, uint32_t *base, vuint32m1x5_t v_tuple, size_t vl, int domain) {
  return __riscv_vsseg5e32_ntl(mask, base, v_tuple, vl, __RISCV_NTLH_ALL);
}

