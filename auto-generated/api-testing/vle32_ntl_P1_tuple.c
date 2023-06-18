#include <stdint.h>
#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
#include <riscv_ntlh.h>

vfloat32mf2_t test_vle32_v_f32mf2_ntl_P1(const float32_t *base, size_t vl, int domain) {
  return __riscv_vle32_v_f32mf2_ntl(base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vfloat32m1_t test_vle32_v_f32m1_ntl_P1(const float32_t *base, size_t vl, int domain) {
  return __riscv_vle32_v_f32m1_ntl(base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vfloat32m2_t test_vle32_v_f32m2_ntl_P1(const float32_t *base, size_t vl, int domain) {
  return __riscv_vle32_v_f32m2_ntl(base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vfloat32m4_t test_vle32_v_f32m4_ntl_P1(const float32_t *base, size_t vl, int domain) {
  return __riscv_vle32_v_f32m4_ntl(base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vfloat32m8_t test_vle32_v_f32m8_ntl_P1(const float32_t *base, size_t vl, int domain) {
  return __riscv_vle32_v_f32m8_ntl(base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint32mf2_t test_vle32_v_i32mf2_ntl_P1(const int32_t *base, size_t vl, int domain) {
  return __riscv_vle32_v_i32mf2_ntl(base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint32m1_t test_vle32_v_i32m1_ntl_P1(const int32_t *base, size_t vl, int domain) {
  return __riscv_vle32_v_i32m1_ntl(base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint32m2_t test_vle32_v_i32m2_ntl_P1(const int32_t *base, size_t vl, int domain) {
  return __riscv_vle32_v_i32m2_ntl(base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint32m4_t test_vle32_v_i32m4_ntl_P1(const int32_t *base, size_t vl, int domain) {
  return __riscv_vle32_v_i32m4_ntl(base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint32m8_t test_vle32_v_i32m8_ntl_P1(const int32_t *base, size_t vl, int domain) {
  return __riscv_vle32_v_i32m8_ntl(base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint32mf2_t test_vle32_v_u32mf2_ntl_P1(const uint32_t *base, size_t vl, int domain) {
  return __riscv_vle32_v_u32mf2_ntl(base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint32m1_t test_vle32_v_u32m1_ntl_P1(const uint32_t *base, size_t vl, int domain) {
  return __riscv_vle32_v_u32m1_ntl(base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint32m2_t test_vle32_v_u32m2_ntl_P1(const uint32_t *base, size_t vl, int domain) {
  return __riscv_vle32_v_u32m2_ntl(base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint32m4_t test_vle32_v_u32m4_ntl_P1(const uint32_t *base, size_t vl, int domain) {
  return __riscv_vle32_v_u32m4_ntl(base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint32m8_t test_vle32_v_u32m8_ntl_P1(const uint32_t *base, size_t vl, int domain) {
  return __riscv_vle32_v_u32m8_ntl(base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vfloat32mf2_t test_vle32_v_f32mf2_m_ntl_P1(vbool64_t mask, const float32_t *base, size_t vl, int domain) {
  return __riscv_vle32_v_f32mf2_m_ntl(mask, base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vfloat32m1_t test_vle32_v_f32m1_m_ntl_P1(vbool32_t mask, const float32_t *base, size_t vl, int domain) {
  return __riscv_vle32_v_f32m1_m_ntl(mask, base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vfloat32m2_t test_vle32_v_f32m2_m_ntl_P1(vbool16_t mask, const float32_t *base, size_t vl, int domain) {
  return __riscv_vle32_v_f32m2_m_ntl(mask, base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vfloat32m4_t test_vle32_v_f32m4_m_ntl_P1(vbool8_t mask, const float32_t *base, size_t vl, int domain) {
  return __riscv_vle32_v_f32m4_m_ntl(mask, base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vfloat32m8_t test_vle32_v_f32m8_m_ntl_P1(vbool4_t mask, const float32_t *base, size_t vl, int domain) {
  return __riscv_vle32_v_f32m8_m_ntl(mask, base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint32mf2_t test_vle32_v_i32mf2_m_ntl_P1(vbool64_t mask, const int32_t *base, size_t vl, int domain) {
  return __riscv_vle32_v_i32mf2_m_ntl(mask, base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint32m1_t test_vle32_v_i32m1_m_ntl_P1(vbool32_t mask, const int32_t *base, size_t vl, int domain) {
  return __riscv_vle32_v_i32m1_m_ntl(mask, base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint32m2_t test_vle32_v_i32m2_m_ntl_P1(vbool16_t mask, const int32_t *base, size_t vl, int domain) {
  return __riscv_vle32_v_i32m2_m_ntl(mask, base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint32m4_t test_vle32_v_i32m4_m_ntl_P1(vbool8_t mask, const int32_t *base, size_t vl, int domain) {
  return __riscv_vle32_v_i32m4_m_ntl(mask, base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint32m8_t test_vle32_v_i32m8_m_ntl_P1(vbool4_t mask, const int32_t *base, size_t vl, int domain) {
  return __riscv_vle32_v_i32m8_m_ntl(mask, base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint32mf2_t test_vle32_v_u32mf2_m_ntl_P1(vbool64_t mask, const uint32_t *base, size_t vl, int domain) {
  return __riscv_vle32_v_u32mf2_m_ntl(mask, base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint32m1_t test_vle32_v_u32m1_m_ntl_P1(vbool32_t mask, const uint32_t *base, size_t vl, int domain) {
  return __riscv_vle32_v_u32m1_m_ntl(mask, base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint32m2_t test_vle32_v_u32m2_m_ntl_P1(vbool16_t mask, const uint32_t *base, size_t vl, int domain) {
  return __riscv_vle32_v_u32m2_m_ntl(mask, base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint32m4_t test_vle32_v_u32m4_m_ntl_P1(vbool8_t mask, const uint32_t *base, size_t vl, int domain) {
  return __riscv_vle32_v_u32m4_m_ntl(mask, base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint32m8_t test_vle32_v_u32m8_m_ntl_P1(vbool4_t mask, const uint32_t *base, size_t vl, int domain) {
  return __riscv_vle32_v_u32m8_m_ntl(mask, base, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

