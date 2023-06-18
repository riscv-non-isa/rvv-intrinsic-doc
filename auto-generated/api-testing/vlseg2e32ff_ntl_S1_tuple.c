#include <stdint.h>
#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
#include <riscv_ntlh.h>

vfloat32mf2x2_t test_vlseg2e32ff_v_f32mf2x2_ntl_S1(const float32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg2e32ff_v_f32mf2x2_ntl(base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vfloat32m1x2_t test_vlseg2e32ff_v_f32m1x2_ntl_S1(const float32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg2e32ff_v_f32m1x2_ntl(base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vfloat32m2x2_t test_vlseg2e32ff_v_f32m2x2_ntl_S1(const float32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg2e32ff_v_f32m2x2_ntl(base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vfloat32m4x2_t test_vlseg2e32ff_v_f32m4x2_ntl_S1(const float32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg2e32ff_v_f32m4x2_ntl(base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint32mf2x2_t test_vlseg2e32ff_v_i32mf2x2_ntl_S1(const int32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg2e32ff_v_i32mf2x2_ntl(base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint32m1x2_t test_vlseg2e32ff_v_i32m1x2_ntl_S1(const int32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg2e32ff_v_i32m1x2_ntl(base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint32m2x2_t test_vlseg2e32ff_v_i32m2x2_ntl_S1(const int32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg2e32ff_v_i32m2x2_ntl(base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint32m4x2_t test_vlseg2e32ff_v_i32m4x2_ntl_S1(const int32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg2e32ff_v_i32m4x2_ntl(base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint32mf2x2_t test_vlseg2e32ff_v_u32mf2x2_ntl_S1(const uint32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg2e32ff_v_u32mf2x2_ntl(base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint32m1x2_t test_vlseg2e32ff_v_u32m1x2_ntl_S1(const uint32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg2e32ff_v_u32m1x2_ntl(base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint32m2x2_t test_vlseg2e32ff_v_u32m2x2_ntl_S1(const uint32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg2e32ff_v_u32m2x2_ntl(base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint32m4x2_t test_vlseg2e32ff_v_u32m4x2_ntl_S1(const uint32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg2e32ff_v_u32m4x2_ntl(base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vfloat32mf2x2_t test_vlseg2e32ff_v_f32mf2x2_m_ntl_S1(vbool64_t mask, const float32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg2e32ff_v_f32mf2x2_m_ntl(mask, base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vfloat32m1x2_t test_vlseg2e32ff_v_f32m1x2_m_ntl_S1(vbool32_t mask, const float32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg2e32ff_v_f32m1x2_m_ntl(mask, base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vfloat32m2x2_t test_vlseg2e32ff_v_f32m2x2_m_ntl_S1(vbool16_t mask, const float32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg2e32ff_v_f32m2x2_m_ntl(mask, base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vfloat32m4x2_t test_vlseg2e32ff_v_f32m4x2_m_ntl_S1(vbool8_t mask, const float32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg2e32ff_v_f32m4x2_m_ntl(mask, base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint32mf2x2_t test_vlseg2e32ff_v_i32mf2x2_m_ntl_S1(vbool64_t mask, const int32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg2e32ff_v_i32mf2x2_m_ntl(mask, base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint32m1x2_t test_vlseg2e32ff_v_i32m1x2_m_ntl_S1(vbool32_t mask, const int32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg2e32ff_v_i32m1x2_m_ntl(mask, base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint32m2x2_t test_vlseg2e32ff_v_i32m2x2_m_ntl_S1(vbool16_t mask, const int32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg2e32ff_v_i32m2x2_m_ntl(mask, base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint32m4x2_t test_vlseg2e32ff_v_i32m4x2_m_ntl_S1(vbool8_t mask, const int32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg2e32ff_v_i32m4x2_m_ntl(mask, base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint32mf2x2_t test_vlseg2e32ff_v_u32mf2x2_m_ntl_S1(vbool64_t mask, const uint32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg2e32ff_v_u32mf2x2_m_ntl(mask, base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint32m1x2_t test_vlseg2e32ff_v_u32m1x2_m_ntl_S1(vbool32_t mask, const uint32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg2e32ff_v_u32m1x2_m_ntl(mask, base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint32m2x2_t test_vlseg2e32ff_v_u32m2x2_m_ntl_S1(vbool16_t mask, const uint32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg2e32ff_v_u32m2x2_m_ntl(mask, base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint32m4x2_t test_vlseg2e32ff_v_u32m4x2_m_ntl_S1(vbool8_t mask, const uint32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vlseg2e32ff_v_u32m4x2_m_ntl(mask, base, new_vl, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

