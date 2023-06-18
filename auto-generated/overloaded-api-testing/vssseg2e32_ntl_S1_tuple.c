#include <stdint.h>
#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
#include <riscv_ntlh.h>

void test_vssseg2e32_v_f32mf2x2_ntl_S1(float32_t *base, ptrdiff_t bstride, vfloat32mf2x2_t v_tuple, size_t vl, int domain) {
  return __riscv_vssseg2e32_ntl(base, bstride, v_tuple, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vssseg2e32_v_f32m1x2_ntl_S1(float32_t *base, ptrdiff_t bstride, vfloat32m1x2_t v_tuple, size_t vl, int domain) {
  return __riscv_vssseg2e32_ntl(base, bstride, v_tuple, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vssseg2e32_v_f32m2x2_ntl_S1(float32_t *base, ptrdiff_t bstride, vfloat32m2x2_t v_tuple, size_t vl, int domain) {
  return __riscv_vssseg2e32_ntl(base, bstride, v_tuple, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vssseg2e32_v_f32m4x2_ntl_S1(float32_t *base, ptrdiff_t bstride, vfloat32m4x2_t v_tuple, size_t vl, int domain) {
  return __riscv_vssseg2e32_ntl(base, bstride, v_tuple, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vssseg2e32_v_i32mf2x2_ntl_S1(int32_t *base, ptrdiff_t bstride, vint32mf2x2_t v_tuple, size_t vl, int domain) {
  return __riscv_vssseg2e32_ntl(base, bstride, v_tuple, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vssseg2e32_v_i32m1x2_ntl_S1(int32_t *base, ptrdiff_t bstride, vint32m1x2_t v_tuple, size_t vl, int domain) {
  return __riscv_vssseg2e32_ntl(base, bstride, v_tuple, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vssseg2e32_v_i32m2x2_ntl_S1(int32_t *base, ptrdiff_t bstride, vint32m2x2_t v_tuple, size_t vl, int domain) {
  return __riscv_vssseg2e32_ntl(base, bstride, v_tuple, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vssseg2e32_v_i32m4x2_ntl_S1(int32_t *base, ptrdiff_t bstride, vint32m4x2_t v_tuple, size_t vl, int domain) {
  return __riscv_vssseg2e32_ntl(base, bstride, v_tuple, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vssseg2e32_v_u32mf2x2_ntl_S1(uint32_t *base, ptrdiff_t bstride, vuint32mf2x2_t v_tuple, size_t vl, int domain) {
  return __riscv_vssseg2e32_ntl(base, bstride, v_tuple, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vssseg2e32_v_u32m1x2_ntl_S1(uint32_t *base, ptrdiff_t bstride, vuint32m1x2_t v_tuple, size_t vl, int domain) {
  return __riscv_vssseg2e32_ntl(base, bstride, v_tuple, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vssseg2e32_v_u32m2x2_ntl_S1(uint32_t *base, ptrdiff_t bstride, vuint32m2x2_t v_tuple, size_t vl, int domain) {
  return __riscv_vssseg2e32_ntl(base, bstride, v_tuple, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vssseg2e32_v_u32m4x2_ntl_S1(uint32_t *base, ptrdiff_t bstride, vuint32m4x2_t v_tuple, size_t vl, int domain) {
  return __riscv_vssseg2e32_ntl(base, bstride, v_tuple, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vssseg2e32_v_f32mf2x2_m_ntl_S1(vbool64_t mask, float32_t *base, ptrdiff_t bstride, vfloat32mf2x2_t v_tuple, size_t vl, int domain) {
  return __riscv_vssseg2e32_ntl(mask, base, bstride, v_tuple, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vssseg2e32_v_f32m1x2_m_ntl_S1(vbool32_t mask, float32_t *base, ptrdiff_t bstride, vfloat32m1x2_t v_tuple, size_t vl, int domain) {
  return __riscv_vssseg2e32_ntl(mask, base, bstride, v_tuple, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vssseg2e32_v_f32m2x2_m_ntl_S1(vbool16_t mask, float32_t *base, ptrdiff_t bstride, vfloat32m2x2_t v_tuple, size_t vl, int domain) {
  return __riscv_vssseg2e32_ntl(mask, base, bstride, v_tuple, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vssseg2e32_v_f32m4x2_m_ntl_S1(vbool8_t mask, float32_t *base, ptrdiff_t bstride, vfloat32m4x2_t v_tuple, size_t vl, int domain) {
  return __riscv_vssseg2e32_ntl(mask, base, bstride, v_tuple, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vssseg2e32_v_i32mf2x2_m_ntl_S1(vbool64_t mask, int32_t *base, ptrdiff_t bstride, vint32mf2x2_t v_tuple, size_t vl, int domain) {
  return __riscv_vssseg2e32_ntl(mask, base, bstride, v_tuple, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vssseg2e32_v_i32m1x2_m_ntl_S1(vbool32_t mask, int32_t *base, ptrdiff_t bstride, vint32m1x2_t v_tuple, size_t vl, int domain) {
  return __riscv_vssseg2e32_ntl(mask, base, bstride, v_tuple, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vssseg2e32_v_i32m2x2_m_ntl_S1(vbool16_t mask, int32_t *base, ptrdiff_t bstride, vint32m2x2_t v_tuple, size_t vl, int domain) {
  return __riscv_vssseg2e32_ntl(mask, base, bstride, v_tuple, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vssseg2e32_v_i32m4x2_m_ntl_S1(vbool8_t mask, int32_t *base, ptrdiff_t bstride, vint32m4x2_t v_tuple, size_t vl, int domain) {
  return __riscv_vssseg2e32_ntl(mask, base, bstride, v_tuple, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vssseg2e32_v_u32mf2x2_m_ntl_S1(vbool64_t mask, uint32_t *base, ptrdiff_t bstride, vuint32mf2x2_t v_tuple, size_t vl, int domain) {
  return __riscv_vssseg2e32_ntl(mask, base, bstride, v_tuple, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vssseg2e32_v_u32m1x2_m_ntl_S1(vbool32_t mask, uint32_t *base, ptrdiff_t bstride, vuint32m1x2_t v_tuple, size_t vl, int domain) {
  return __riscv_vssseg2e32_ntl(mask, base, bstride, v_tuple, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vssseg2e32_v_u32m2x2_m_ntl_S1(vbool16_t mask, uint32_t *base, ptrdiff_t bstride, vuint32m2x2_t v_tuple, size_t vl, int domain) {
  return __riscv_vssseg2e32_ntl(mask, base, bstride, v_tuple, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vssseg2e32_v_u32m4x2_m_ntl_S1(vbool8_t mask, uint32_t *base, ptrdiff_t bstride, vuint32m4x2_t v_tuple, size_t vl, int domain) {
  return __riscv_vssseg2e32_ntl(mask, base, bstride, v_tuple, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

