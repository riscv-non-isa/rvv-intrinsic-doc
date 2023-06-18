#include <stdint.h>
#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
#include <riscv_ntlh.h>

vfloat32mf2x2_t test_vlseg2e32_v_f32mf2x2_ntl_ALL(const float32_t *base, size_t vl, int domain) {
  return __riscv_vlseg2e32_v_f32mf2x2_ntl(base, vl, __RISCV_NTLH_ALL);
}

vfloat32m1x2_t test_vlseg2e32_v_f32m1x2_ntl_ALL(const float32_t *base, size_t vl, int domain) {
  return __riscv_vlseg2e32_v_f32m1x2_ntl(base, vl, __RISCV_NTLH_ALL);
}

vfloat32m2x2_t test_vlseg2e32_v_f32m2x2_ntl_ALL(const float32_t *base, size_t vl, int domain) {
  return __riscv_vlseg2e32_v_f32m2x2_ntl(base, vl, __RISCV_NTLH_ALL);
}

vfloat32m4x2_t test_vlseg2e32_v_f32m4x2_ntl_ALL(const float32_t *base, size_t vl, int domain) {
  return __riscv_vlseg2e32_v_f32m4x2_ntl(base, vl, __RISCV_NTLH_ALL);
}

vint32mf2x2_t test_vlseg2e32_v_i32mf2x2_ntl_ALL(const int32_t *base, size_t vl, int domain) {
  return __riscv_vlseg2e32_v_i32mf2x2_ntl(base, vl, __RISCV_NTLH_ALL);
}

vint32m1x2_t test_vlseg2e32_v_i32m1x2_ntl_ALL(const int32_t *base, size_t vl, int domain) {
  return __riscv_vlseg2e32_v_i32m1x2_ntl(base, vl, __RISCV_NTLH_ALL);
}

vint32m2x2_t test_vlseg2e32_v_i32m2x2_ntl_ALL(const int32_t *base, size_t vl, int domain) {
  return __riscv_vlseg2e32_v_i32m2x2_ntl(base, vl, __RISCV_NTLH_ALL);
}

vint32m4x2_t test_vlseg2e32_v_i32m4x2_ntl_ALL(const int32_t *base, size_t vl, int domain) {
  return __riscv_vlseg2e32_v_i32m4x2_ntl(base, vl, __RISCV_NTLH_ALL);
}

vuint32mf2x2_t test_vlseg2e32_v_u32mf2x2_ntl_ALL(const uint32_t *base, size_t vl, int domain) {
  return __riscv_vlseg2e32_v_u32mf2x2_ntl(base, vl, __RISCV_NTLH_ALL);
}

vuint32m1x2_t test_vlseg2e32_v_u32m1x2_ntl_ALL(const uint32_t *base, size_t vl, int domain) {
  return __riscv_vlseg2e32_v_u32m1x2_ntl(base, vl, __RISCV_NTLH_ALL);
}

vuint32m2x2_t test_vlseg2e32_v_u32m2x2_ntl_ALL(const uint32_t *base, size_t vl, int domain) {
  return __riscv_vlseg2e32_v_u32m2x2_ntl(base, vl, __RISCV_NTLH_ALL);
}

vuint32m4x2_t test_vlseg2e32_v_u32m4x2_ntl_ALL(const uint32_t *base, size_t vl, int domain) {
  return __riscv_vlseg2e32_v_u32m4x2_ntl(base, vl, __RISCV_NTLH_ALL);
}

vfloat32mf2x2_t test_vlseg2e32_v_f32mf2x2_m_ntl_ALL(vbool64_t mask, const float32_t *base, size_t vl, int domain) {
  return __riscv_vlseg2e32_v_f32mf2x2_m_ntl(mask, base, vl, __RISCV_NTLH_ALL);
}

vfloat32m1x2_t test_vlseg2e32_v_f32m1x2_m_ntl_ALL(vbool32_t mask, const float32_t *base, size_t vl, int domain) {
  return __riscv_vlseg2e32_v_f32m1x2_m_ntl(mask, base, vl, __RISCV_NTLH_ALL);
}

vfloat32m2x2_t test_vlseg2e32_v_f32m2x2_m_ntl_ALL(vbool16_t mask, const float32_t *base, size_t vl, int domain) {
  return __riscv_vlseg2e32_v_f32m2x2_m_ntl(mask, base, vl, __RISCV_NTLH_ALL);
}

vfloat32m4x2_t test_vlseg2e32_v_f32m4x2_m_ntl_ALL(vbool8_t mask, const float32_t *base, size_t vl, int domain) {
  return __riscv_vlseg2e32_v_f32m4x2_m_ntl(mask, base, vl, __RISCV_NTLH_ALL);
}

vint32mf2x2_t test_vlseg2e32_v_i32mf2x2_m_ntl_ALL(vbool64_t mask, const int32_t *base, size_t vl, int domain) {
  return __riscv_vlseg2e32_v_i32mf2x2_m_ntl(mask, base, vl, __RISCV_NTLH_ALL);
}

vint32m1x2_t test_vlseg2e32_v_i32m1x2_m_ntl_ALL(vbool32_t mask, const int32_t *base, size_t vl, int domain) {
  return __riscv_vlseg2e32_v_i32m1x2_m_ntl(mask, base, vl, __RISCV_NTLH_ALL);
}

vint32m2x2_t test_vlseg2e32_v_i32m2x2_m_ntl_ALL(vbool16_t mask, const int32_t *base, size_t vl, int domain) {
  return __riscv_vlseg2e32_v_i32m2x2_m_ntl(mask, base, vl, __RISCV_NTLH_ALL);
}

vint32m4x2_t test_vlseg2e32_v_i32m4x2_m_ntl_ALL(vbool8_t mask, const int32_t *base, size_t vl, int domain) {
  return __riscv_vlseg2e32_v_i32m4x2_m_ntl(mask, base, vl, __RISCV_NTLH_ALL);
}

vuint32mf2x2_t test_vlseg2e32_v_u32mf2x2_m_ntl_ALL(vbool64_t mask, const uint32_t *base, size_t vl, int domain) {
  return __riscv_vlseg2e32_v_u32mf2x2_m_ntl(mask, base, vl, __RISCV_NTLH_ALL);
}

vuint32m1x2_t test_vlseg2e32_v_u32m1x2_m_ntl_ALL(vbool32_t mask, const uint32_t *base, size_t vl, int domain) {
  return __riscv_vlseg2e32_v_u32m1x2_m_ntl(mask, base, vl, __RISCV_NTLH_ALL);
}

vuint32m2x2_t test_vlseg2e32_v_u32m2x2_m_ntl_ALL(vbool16_t mask, const uint32_t *base, size_t vl, int domain) {
  return __riscv_vlseg2e32_v_u32m2x2_m_ntl(mask, base, vl, __RISCV_NTLH_ALL);
}

vuint32m4x2_t test_vlseg2e32_v_u32m4x2_m_ntl_ALL(vbool8_t mask, const uint32_t *base, size_t vl, int domain) {
  return __riscv_vlseg2e32_v_u32m4x2_m_ntl(mask, base, vl, __RISCV_NTLH_ALL);
}

