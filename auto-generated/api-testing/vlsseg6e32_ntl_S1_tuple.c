#include <stdint.h>
#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
#include <riscv_ntlh.h>

vfloat32mf2x6_t test_vlsseg6e32_v_f32mf2x6_ntl_S1(const float32_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg6e32_v_f32mf2x6_ntl(base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vfloat32m1x6_t test_vlsseg6e32_v_f32m1x6_ntl_S1(const float32_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg6e32_v_f32m1x6_ntl(base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint32mf2x6_t test_vlsseg6e32_v_i32mf2x6_ntl_S1(const int32_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg6e32_v_i32mf2x6_ntl(base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint32m1x6_t test_vlsseg6e32_v_i32m1x6_ntl_S1(const int32_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg6e32_v_i32m1x6_ntl(base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint32mf2x6_t test_vlsseg6e32_v_u32mf2x6_ntl_S1(const uint32_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg6e32_v_u32mf2x6_ntl(base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint32m1x6_t test_vlsseg6e32_v_u32m1x6_ntl_S1(const uint32_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg6e32_v_u32m1x6_ntl(base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vfloat32mf2x6_t test_vlsseg6e32_v_f32mf2x6_m_ntl_S1(vbool64_t mask, const float32_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg6e32_v_f32mf2x6_m_ntl(mask, base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vfloat32m1x6_t test_vlsseg6e32_v_f32m1x6_m_ntl_S1(vbool32_t mask, const float32_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg6e32_v_f32m1x6_m_ntl(mask, base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint32mf2x6_t test_vlsseg6e32_v_i32mf2x6_m_ntl_S1(vbool64_t mask, const int32_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg6e32_v_i32mf2x6_m_ntl(mask, base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint32m1x6_t test_vlsseg6e32_v_i32m1x6_m_ntl_S1(vbool32_t mask, const int32_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg6e32_v_i32m1x6_m_ntl(mask, base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint32mf2x6_t test_vlsseg6e32_v_u32mf2x6_m_ntl_S1(vbool64_t mask, const uint32_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg6e32_v_u32mf2x6_m_ntl(mask, base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint32m1x6_t test_vlsseg6e32_v_u32m1x6_m_ntl_S1(vbool32_t mask, const uint32_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg6e32_v_u32m1x6_m_ntl(mask, base, bstride, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

