#include <stdint.h>
#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
#include <riscv_ntlh.h>

vfloat16mf4x5_t test_vluxseg5ei32_v_f16mf4x5_ntl_PALL(const float16_t *base, vuint32mf2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg5ei32_ntl(base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vfloat16mf2x5_t test_vluxseg5ei32_v_f16mf2x5_ntl_PALL(const float16_t *base, vuint32m1_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg5ei32_ntl(base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vfloat16m1x5_t test_vluxseg5ei32_v_f16m1x5_ntl_PALL(const float16_t *base, vuint32m2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg5ei32_ntl(base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vfloat32mf2x5_t test_vluxseg5ei32_v_f32mf2x5_ntl_PALL(const float32_t *base, vuint32mf2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg5ei32_ntl(base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vfloat32m1x5_t test_vluxseg5ei32_v_f32m1x5_ntl_PALL(const float32_t *base, vuint32m1_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg5ei32_ntl(base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vfloat64m1x5_t test_vluxseg5ei32_v_f64m1x5_ntl_PALL(const float64_t *base, vuint32mf2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg5ei32_ntl(base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint8mf8x5_t test_vluxseg5ei32_v_i8mf8x5_ntl_PALL(const int8_t *base, vuint32mf2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg5ei32_ntl(base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint8mf4x5_t test_vluxseg5ei32_v_i8mf4x5_ntl_PALL(const int8_t *base, vuint32m1_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg5ei32_ntl(base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint8mf2x5_t test_vluxseg5ei32_v_i8mf2x5_ntl_PALL(const int8_t *base, vuint32m2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg5ei32_ntl(base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint8m1x5_t test_vluxseg5ei32_v_i8m1x5_ntl_PALL(const int8_t *base, vuint32m4_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg5ei32_ntl(base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint16mf4x5_t test_vluxseg5ei32_v_i16mf4x5_ntl_PALL(const int16_t *base, vuint32mf2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg5ei32_ntl(base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint16mf2x5_t test_vluxseg5ei32_v_i16mf2x5_ntl_PALL(const int16_t *base, vuint32m1_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg5ei32_ntl(base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint16m1x5_t test_vluxseg5ei32_v_i16m1x5_ntl_PALL(const int16_t *base, vuint32m2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg5ei32_ntl(base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint32mf2x5_t test_vluxseg5ei32_v_i32mf2x5_ntl_PALL(const int32_t *base, vuint32mf2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg5ei32_ntl(base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint32m1x5_t test_vluxseg5ei32_v_i32m1x5_ntl_PALL(const int32_t *base, vuint32m1_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg5ei32_ntl(base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint64m1x5_t test_vluxseg5ei32_v_i64m1x5_ntl_PALL(const int64_t *base, vuint32mf2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg5ei32_ntl(base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint8mf8x5_t test_vluxseg5ei32_v_u8mf8x5_ntl_PALL(const uint8_t *base, vuint32mf2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg5ei32_ntl(base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint8mf4x5_t test_vluxseg5ei32_v_u8mf4x5_ntl_PALL(const uint8_t *base, vuint32m1_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg5ei32_ntl(base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint8mf2x5_t test_vluxseg5ei32_v_u8mf2x5_ntl_PALL(const uint8_t *base, vuint32m2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg5ei32_ntl(base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint8m1x5_t test_vluxseg5ei32_v_u8m1x5_ntl_PALL(const uint8_t *base, vuint32m4_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg5ei32_ntl(base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint16mf4x5_t test_vluxseg5ei32_v_u16mf4x5_ntl_PALL(const uint16_t *base, vuint32mf2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg5ei32_ntl(base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint16mf2x5_t test_vluxseg5ei32_v_u16mf2x5_ntl_PALL(const uint16_t *base, vuint32m1_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg5ei32_ntl(base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint16m1x5_t test_vluxseg5ei32_v_u16m1x5_ntl_PALL(const uint16_t *base, vuint32m2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg5ei32_ntl(base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint32mf2x5_t test_vluxseg5ei32_v_u32mf2x5_ntl_PALL(const uint32_t *base, vuint32mf2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg5ei32_ntl(base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint32m1x5_t test_vluxseg5ei32_v_u32m1x5_ntl_PALL(const uint32_t *base, vuint32m1_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg5ei32_ntl(base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint64m1x5_t test_vluxseg5ei32_v_u64m1x5_ntl_PALL(const uint64_t *base, vuint32mf2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg5ei32_ntl(base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vfloat16mf4x5_t test_vluxseg5ei32_v_f16mf4x5_m_ntl_PALL(vbool64_t mask, const float16_t *base, vuint32mf2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg5ei32_ntl(mask, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vfloat16mf2x5_t test_vluxseg5ei32_v_f16mf2x5_m_ntl_PALL(vbool32_t mask, const float16_t *base, vuint32m1_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg5ei32_ntl(mask, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vfloat16m1x5_t test_vluxseg5ei32_v_f16m1x5_m_ntl_PALL(vbool16_t mask, const float16_t *base, vuint32m2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg5ei32_ntl(mask, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vfloat32mf2x5_t test_vluxseg5ei32_v_f32mf2x5_m_ntl_PALL(vbool64_t mask, const float32_t *base, vuint32mf2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg5ei32_ntl(mask, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vfloat32m1x5_t test_vluxseg5ei32_v_f32m1x5_m_ntl_PALL(vbool32_t mask, const float32_t *base, vuint32m1_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg5ei32_ntl(mask, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vfloat64m1x5_t test_vluxseg5ei32_v_f64m1x5_m_ntl_PALL(vbool64_t mask, const float64_t *base, vuint32mf2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg5ei32_ntl(mask, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint8mf8x5_t test_vluxseg5ei32_v_i8mf8x5_m_ntl_PALL(vbool64_t mask, const int8_t *base, vuint32mf2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg5ei32_ntl(mask, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint8mf4x5_t test_vluxseg5ei32_v_i8mf4x5_m_ntl_PALL(vbool32_t mask, const int8_t *base, vuint32m1_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg5ei32_ntl(mask, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint8mf2x5_t test_vluxseg5ei32_v_i8mf2x5_m_ntl_PALL(vbool16_t mask, const int8_t *base, vuint32m2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg5ei32_ntl(mask, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint8m1x5_t test_vluxseg5ei32_v_i8m1x5_m_ntl_PALL(vbool8_t mask, const int8_t *base, vuint32m4_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg5ei32_ntl(mask, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint16mf4x5_t test_vluxseg5ei32_v_i16mf4x5_m_ntl_PALL(vbool64_t mask, const int16_t *base, vuint32mf2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg5ei32_ntl(mask, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint16mf2x5_t test_vluxseg5ei32_v_i16mf2x5_m_ntl_PALL(vbool32_t mask, const int16_t *base, vuint32m1_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg5ei32_ntl(mask, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint16m1x5_t test_vluxseg5ei32_v_i16m1x5_m_ntl_PALL(vbool16_t mask, const int16_t *base, vuint32m2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg5ei32_ntl(mask, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint32mf2x5_t test_vluxseg5ei32_v_i32mf2x5_m_ntl_PALL(vbool64_t mask, const int32_t *base, vuint32mf2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg5ei32_ntl(mask, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint32m1x5_t test_vluxseg5ei32_v_i32m1x5_m_ntl_PALL(vbool32_t mask, const int32_t *base, vuint32m1_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg5ei32_ntl(mask, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint64m1x5_t test_vluxseg5ei32_v_i64m1x5_m_ntl_PALL(vbool64_t mask, const int64_t *base, vuint32mf2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg5ei32_ntl(mask, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint8mf8x5_t test_vluxseg5ei32_v_u8mf8x5_m_ntl_PALL(vbool64_t mask, const uint8_t *base, vuint32mf2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg5ei32_ntl(mask, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint8mf4x5_t test_vluxseg5ei32_v_u8mf4x5_m_ntl_PALL(vbool32_t mask, const uint8_t *base, vuint32m1_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg5ei32_ntl(mask, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint8mf2x5_t test_vluxseg5ei32_v_u8mf2x5_m_ntl_PALL(vbool16_t mask, const uint8_t *base, vuint32m2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg5ei32_ntl(mask, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint8m1x5_t test_vluxseg5ei32_v_u8m1x5_m_ntl_PALL(vbool8_t mask, const uint8_t *base, vuint32m4_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg5ei32_ntl(mask, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint16mf4x5_t test_vluxseg5ei32_v_u16mf4x5_m_ntl_PALL(vbool64_t mask, const uint16_t *base, vuint32mf2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg5ei32_ntl(mask, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint16mf2x5_t test_vluxseg5ei32_v_u16mf2x5_m_ntl_PALL(vbool32_t mask, const uint16_t *base, vuint32m1_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg5ei32_ntl(mask, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint16m1x5_t test_vluxseg5ei32_v_u16m1x5_m_ntl_PALL(vbool16_t mask, const uint16_t *base, vuint32m2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg5ei32_ntl(mask, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint32mf2x5_t test_vluxseg5ei32_v_u32mf2x5_m_ntl_PALL(vbool64_t mask, const uint32_t *base, vuint32mf2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg5ei32_ntl(mask, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint32m1x5_t test_vluxseg5ei32_v_u32m1x5_m_ntl_PALL(vbool32_t mask, const uint32_t *base, vuint32m1_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg5ei32_ntl(mask, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint64m1x5_t test_vluxseg5ei32_v_u64m1x5_m_ntl_PALL(vbool64_t mask, const uint64_t *base, vuint32mf2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg5ei32_ntl(mask, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

