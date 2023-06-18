#include <stdint.h>
#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
#include <riscv_ntlh.h>

vfloat32mf2x5_t test_vlsseg5e32_v_f32mf2x5_ntl_PALL(const float32_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg5e32_v_f32mf2x5_ntl(base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vfloat32m1x5_t test_vlsseg5e32_v_f32m1x5_ntl_PALL(const float32_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg5e32_v_f32m1x5_ntl(base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint32mf2x5_t test_vlsseg5e32_v_i32mf2x5_ntl_PALL(const int32_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg5e32_v_i32mf2x5_ntl(base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint32m1x5_t test_vlsseg5e32_v_i32m1x5_ntl_PALL(const int32_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg5e32_v_i32m1x5_ntl(base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint32mf2x5_t test_vlsseg5e32_v_u32mf2x5_ntl_PALL(const uint32_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg5e32_v_u32mf2x5_ntl(base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint32m1x5_t test_vlsseg5e32_v_u32m1x5_ntl_PALL(const uint32_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg5e32_v_u32m1x5_ntl(base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vfloat32mf2x5_t test_vlsseg5e32_v_f32mf2x5_m_ntl_PALL(vbool64_t mask, const float32_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg5e32_v_f32mf2x5_m_ntl(mask, base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vfloat32m1x5_t test_vlsseg5e32_v_f32m1x5_m_ntl_PALL(vbool32_t mask, const float32_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg5e32_v_f32m1x5_m_ntl(mask, base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint32mf2x5_t test_vlsseg5e32_v_i32mf2x5_m_ntl_PALL(vbool64_t mask, const int32_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg5e32_v_i32mf2x5_m_ntl(mask, base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint32m1x5_t test_vlsseg5e32_v_i32m1x5_m_ntl_PALL(vbool32_t mask, const int32_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg5e32_v_i32m1x5_m_ntl(mask, base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint32mf2x5_t test_vlsseg5e32_v_u32mf2x5_m_ntl_PALL(vbool64_t mask, const uint32_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg5e32_v_u32mf2x5_m_ntl(mask, base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint32m1x5_t test_vlsseg5e32_v_u32m1x5_m_ntl_PALL(vbool32_t mask, const uint32_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg5e32_v_u32m1x5_m_ntl(mask, base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

