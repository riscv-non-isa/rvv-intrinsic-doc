#include <stdint.h>
#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
#include <riscv_ntlh.h>

vfloat32mf2_t test_vle32ff_v_f32mf2_ntl_ALL(const float32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle32ff_v_f32mf2_ntl(base, new_vl, vl, __RISCV_NTLH_ALL);
}

vfloat32m1_t test_vle32ff_v_f32m1_ntl_ALL(const float32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle32ff_v_f32m1_ntl(base, new_vl, vl, __RISCV_NTLH_ALL);
}

vfloat32m2_t test_vle32ff_v_f32m2_ntl_ALL(const float32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle32ff_v_f32m2_ntl(base, new_vl, vl, __RISCV_NTLH_ALL);
}

vfloat32m4_t test_vle32ff_v_f32m4_ntl_ALL(const float32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle32ff_v_f32m4_ntl(base, new_vl, vl, __RISCV_NTLH_ALL);
}

vfloat32m8_t test_vle32ff_v_f32m8_ntl_ALL(const float32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle32ff_v_f32m8_ntl(base, new_vl, vl, __RISCV_NTLH_ALL);
}

vint32mf2_t test_vle32ff_v_i32mf2_ntl_ALL(const int32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle32ff_v_i32mf2_ntl(base, new_vl, vl, __RISCV_NTLH_ALL);
}

vint32m1_t test_vle32ff_v_i32m1_ntl_ALL(const int32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle32ff_v_i32m1_ntl(base, new_vl, vl, __RISCV_NTLH_ALL);
}

vint32m2_t test_vle32ff_v_i32m2_ntl_ALL(const int32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle32ff_v_i32m2_ntl(base, new_vl, vl, __RISCV_NTLH_ALL);
}

vint32m4_t test_vle32ff_v_i32m4_ntl_ALL(const int32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle32ff_v_i32m4_ntl(base, new_vl, vl, __RISCV_NTLH_ALL);
}

vint32m8_t test_vle32ff_v_i32m8_ntl_ALL(const int32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle32ff_v_i32m8_ntl(base, new_vl, vl, __RISCV_NTLH_ALL);
}

vuint32mf2_t test_vle32ff_v_u32mf2_ntl_ALL(const uint32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle32ff_v_u32mf2_ntl(base, new_vl, vl, __RISCV_NTLH_ALL);
}

vuint32m1_t test_vle32ff_v_u32m1_ntl_ALL(const uint32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle32ff_v_u32m1_ntl(base, new_vl, vl, __RISCV_NTLH_ALL);
}

vuint32m2_t test_vle32ff_v_u32m2_ntl_ALL(const uint32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle32ff_v_u32m2_ntl(base, new_vl, vl, __RISCV_NTLH_ALL);
}

vuint32m4_t test_vle32ff_v_u32m4_ntl_ALL(const uint32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle32ff_v_u32m4_ntl(base, new_vl, vl, __RISCV_NTLH_ALL);
}

vuint32m8_t test_vle32ff_v_u32m8_ntl_ALL(const uint32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle32ff_v_u32m8_ntl(base, new_vl, vl, __RISCV_NTLH_ALL);
}

vfloat32mf2_t test_vle32ff_v_f32mf2_m_ntl_ALL(vbool64_t mask, const float32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle32ff_v_f32mf2_m_ntl(mask, base, new_vl, vl, __RISCV_NTLH_ALL);
}

vfloat32m1_t test_vle32ff_v_f32m1_m_ntl_ALL(vbool32_t mask, const float32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle32ff_v_f32m1_m_ntl(mask, base, new_vl, vl, __RISCV_NTLH_ALL);
}

vfloat32m2_t test_vle32ff_v_f32m2_m_ntl_ALL(vbool16_t mask, const float32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle32ff_v_f32m2_m_ntl(mask, base, new_vl, vl, __RISCV_NTLH_ALL);
}

vfloat32m4_t test_vle32ff_v_f32m4_m_ntl_ALL(vbool8_t mask, const float32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle32ff_v_f32m4_m_ntl(mask, base, new_vl, vl, __RISCV_NTLH_ALL);
}

vfloat32m8_t test_vle32ff_v_f32m8_m_ntl_ALL(vbool4_t mask, const float32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle32ff_v_f32m8_m_ntl(mask, base, new_vl, vl, __RISCV_NTLH_ALL);
}

vint32mf2_t test_vle32ff_v_i32mf2_m_ntl_ALL(vbool64_t mask, const int32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle32ff_v_i32mf2_m_ntl(mask, base, new_vl, vl, __RISCV_NTLH_ALL);
}

vint32m1_t test_vle32ff_v_i32m1_m_ntl_ALL(vbool32_t mask, const int32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle32ff_v_i32m1_m_ntl(mask, base, new_vl, vl, __RISCV_NTLH_ALL);
}

vint32m2_t test_vle32ff_v_i32m2_m_ntl_ALL(vbool16_t mask, const int32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle32ff_v_i32m2_m_ntl(mask, base, new_vl, vl, __RISCV_NTLH_ALL);
}

vint32m4_t test_vle32ff_v_i32m4_m_ntl_ALL(vbool8_t mask, const int32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle32ff_v_i32m4_m_ntl(mask, base, new_vl, vl, __RISCV_NTLH_ALL);
}

vint32m8_t test_vle32ff_v_i32m8_m_ntl_ALL(vbool4_t mask, const int32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle32ff_v_i32m8_m_ntl(mask, base, new_vl, vl, __RISCV_NTLH_ALL);
}

vuint32mf2_t test_vle32ff_v_u32mf2_m_ntl_ALL(vbool64_t mask, const uint32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle32ff_v_u32mf2_m_ntl(mask, base, new_vl, vl, __RISCV_NTLH_ALL);
}

vuint32m1_t test_vle32ff_v_u32m1_m_ntl_ALL(vbool32_t mask, const uint32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle32ff_v_u32m1_m_ntl(mask, base, new_vl, vl, __RISCV_NTLH_ALL);
}

vuint32m2_t test_vle32ff_v_u32m2_m_ntl_ALL(vbool16_t mask, const uint32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle32ff_v_u32m2_m_ntl(mask, base, new_vl, vl, __RISCV_NTLH_ALL);
}

vuint32m4_t test_vle32ff_v_u32m4_m_ntl_ALL(vbool8_t mask, const uint32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle32ff_v_u32m4_m_ntl(mask, base, new_vl, vl, __RISCV_NTLH_ALL);
}

vuint32m8_t test_vle32ff_v_u32m8_m_ntl_ALL(vbool4_t mask, const uint32_t *base, size_t *new_vl, size_t vl, int domain) {
  return __riscv_vle32ff_v_u32m8_m_ntl(mask, base, new_vl, vl, __RISCV_NTLH_ALL);
}

