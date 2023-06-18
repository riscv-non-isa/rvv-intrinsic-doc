#include <stdint.h>
#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
#include <riscv_ntlh.h>

vfloat16mf4x6_t test_vlsseg6e16_v_f16mf4x6_ntl_ALL(const float16_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg6e16_v_f16mf4x6_ntl(base, bstride, vl, __RISCV_NTLH_ALL);
}

vfloat16mf2x6_t test_vlsseg6e16_v_f16mf2x6_ntl_ALL(const float16_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg6e16_v_f16mf2x6_ntl(base, bstride, vl, __RISCV_NTLH_ALL);
}

vfloat16m1x6_t test_vlsseg6e16_v_f16m1x6_ntl_ALL(const float16_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg6e16_v_f16m1x6_ntl(base, bstride, vl, __RISCV_NTLH_ALL);
}

vint16mf4x6_t test_vlsseg6e16_v_i16mf4x6_ntl_ALL(const int16_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg6e16_v_i16mf4x6_ntl(base, bstride, vl, __RISCV_NTLH_ALL);
}

vint16mf2x6_t test_vlsseg6e16_v_i16mf2x6_ntl_ALL(const int16_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg6e16_v_i16mf2x6_ntl(base, bstride, vl, __RISCV_NTLH_ALL);
}

vint16m1x6_t test_vlsseg6e16_v_i16m1x6_ntl_ALL(const int16_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg6e16_v_i16m1x6_ntl(base, bstride, vl, __RISCV_NTLH_ALL);
}

vuint16mf4x6_t test_vlsseg6e16_v_u16mf4x6_ntl_ALL(const uint16_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg6e16_v_u16mf4x6_ntl(base, bstride, vl, __RISCV_NTLH_ALL);
}

vuint16mf2x6_t test_vlsseg6e16_v_u16mf2x6_ntl_ALL(const uint16_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg6e16_v_u16mf2x6_ntl(base, bstride, vl, __RISCV_NTLH_ALL);
}

vuint16m1x6_t test_vlsseg6e16_v_u16m1x6_ntl_ALL(const uint16_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg6e16_v_u16m1x6_ntl(base, bstride, vl, __RISCV_NTLH_ALL);
}

vfloat16mf4x6_t test_vlsseg6e16_v_f16mf4x6_m_ntl_ALL(vbool64_t mask, const float16_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg6e16_v_f16mf4x6_m_ntl(mask, base, bstride, vl, __RISCV_NTLH_ALL);
}

vfloat16mf2x6_t test_vlsseg6e16_v_f16mf2x6_m_ntl_ALL(vbool32_t mask, const float16_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg6e16_v_f16mf2x6_m_ntl(mask, base, bstride, vl, __RISCV_NTLH_ALL);
}

vfloat16m1x6_t test_vlsseg6e16_v_f16m1x6_m_ntl_ALL(vbool16_t mask, const float16_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg6e16_v_f16m1x6_m_ntl(mask, base, bstride, vl, __RISCV_NTLH_ALL);
}

vint16mf4x6_t test_vlsseg6e16_v_i16mf4x6_m_ntl_ALL(vbool64_t mask, const int16_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg6e16_v_i16mf4x6_m_ntl(mask, base, bstride, vl, __RISCV_NTLH_ALL);
}

vint16mf2x6_t test_vlsseg6e16_v_i16mf2x6_m_ntl_ALL(vbool32_t mask, const int16_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg6e16_v_i16mf2x6_m_ntl(mask, base, bstride, vl, __RISCV_NTLH_ALL);
}

vint16m1x6_t test_vlsseg6e16_v_i16m1x6_m_ntl_ALL(vbool16_t mask, const int16_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg6e16_v_i16m1x6_m_ntl(mask, base, bstride, vl, __RISCV_NTLH_ALL);
}

vuint16mf4x6_t test_vlsseg6e16_v_u16mf4x6_m_ntl_ALL(vbool64_t mask, const uint16_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg6e16_v_u16mf4x6_m_ntl(mask, base, bstride, vl, __RISCV_NTLH_ALL);
}

vuint16mf2x6_t test_vlsseg6e16_v_u16mf2x6_m_ntl_ALL(vbool32_t mask, const uint16_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg6e16_v_u16mf2x6_m_ntl(mask, base, bstride, vl, __RISCV_NTLH_ALL);
}

vuint16m1x6_t test_vlsseg6e16_v_u16m1x6_m_ntl_ALL(vbool16_t mask, const uint16_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg6e16_v_u16m1x6_m_ntl(mask, base, bstride, vl, __RISCV_NTLH_ALL);
}

