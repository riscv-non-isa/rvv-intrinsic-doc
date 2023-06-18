#include <stdint.h>
#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
#include <riscv_ntlh.h>

vfloat16mf4x4_t test_vloxseg4ei32_v_f16mf4x4_ntl_ALL(const float16_t *base, vuint32mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg4ei32_ntl(base, bindex, vl, __RISCV_NTLH_ALL);
}

vfloat16mf2x4_t test_vloxseg4ei32_v_f16mf2x4_ntl_ALL(const float16_t *base, vuint32m1_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg4ei32_ntl(base, bindex, vl, __RISCV_NTLH_ALL);
}

vfloat16m1x4_t test_vloxseg4ei32_v_f16m1x4_ntl_ALL(const float16_t *base, vuint32m2_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg4ei32_ntl(base, bindex, vl, __RISCV_NTLH_ALL);
}

vfloat16m2x4_t test_vloxseg4ei32_v_f16m2x4_ntl_ALL(const float16_t *base, vuint32m4_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg4ei32_ntl(base, bindex, vl, __RISCV_NTLH_ALL);
}

vfloat32mf2x4_t test_vloxseg4ei32_v_f32mf2x4_ntl_ALL(const float32_t *base, vuint32mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg4ei32_ntl(base, bindex, vl, __RISCV_NTLH_ALL);
}

vfloat32m1x4_t test_vloxseg4ei32_v_f32m1x4_ntl_ALL(const float32_t *base, vuint32m1_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg4ei32_ntl(base, bindex, vl, __RISCV_NTLH_ALL);
}

vfloat32m2x4_t test_vloxseg4ei32_v_f32m2x4_ntl_ALL(const float32_t *base, vuint32m2_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg4ei32_ntl(base, bindex, vl, __RISCV_NTLH_ALL);
}

vfloat64m1x4_t test_vloxseg4ei32_v_f64m1x4_ntl_ALL(const float64_t *base, vuint32mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg4ei32_ntl(base, bindex, vl, __RISCV_NTLH_ALL);
}

vfloat64m2x4_t test_vloxseg4ei32_v_f64m2x4_ntl_ALL(const float64_t *base, vuint32m1_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg4ei32_ntl(base, bindex, vl, __RISCV_NTLH_ALL);
}

vint8mf8x4_t test_vloxseg4ei32_v_i8mf8x4_ntl_ALL(const int8_t *base, vuint32mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg4ei32_ntl(base, bindex, vl, __RISCV_NTLH_ALL);
}

vint8mf4x4_t test_vloxseg4ei32_v_i8mf4x4_ntl_ALL(const int8_t *base, vuint32m1_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg4ei32_ntl(base, bindex, vl, __RISCV_NTLH_ALL);
}

vint8mf2x4_t test_vloxseg4ei32_v_i8mf2x4_ntl_ALL(const int8_t *base, vuint32m2_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg4ei32_ntl(base, bindex, vl, __RISCV_NTLH_ALL);
}

vint8m1x4_t test_vloxseg4ei32_v_i8m1x4_ntl_ALL(const int8_t *base, vuint32m4_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg4ei32_ntl(base, bindex, vl, __RISCV_NTLH_ALL);
}

vint8m2x4_t test_vloxseg4ei32_v_i8m2x4_ntl_ALL(const int8_t *base, vuint32m8_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg4ei32_ntl(base, bindex, vl, __RISCV_NTLH_ALL);
}

vint16mf4x4_t test_vloxseg4ei32_v_i16mf4x4_ntl_ALL(const int16_t *base, vuint32mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg4ei32_ntl(base, bindex, vl, __RISCV_NTLH_ALL);
}

vint16mf2x4_t test_vloxseg4ei32_v_i16mf2x4_ntl_ALL(const int16_t *base, vuint32m1_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg4ei32_ntl(base, bindex, vl, __RISCV_NTLH_ALL);
}

vint16m1x4_t test_vloxseg4ei32_v_i16m1x4_ntl_ALL(const int16_t *base, vuint32m2_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg4ei32_ntl(base, bindex, vl, __RISCV_NTLH_ALL);
}

vint16m2x4_t test_vloxseg4ei32_v_i16m2x4_ntl_ALL(const int16_t *base, vuint32m4_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg4ei32_ntl(base, bindex, vl, __RISCV_NTLH_ALL);
}

vint32mf2x4_t test_vloxseg4ei32_v_i32mf2x4_ntl_ALL(const int32_t *base, vuint32mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg4ei32_ntl(base, bindex, vl, __RISCV_NTLH_ALL);
}

vint32m1x4_t test_vloxseg4ei32_v_i32m1x4_ntl_ALL(const int32_t *base, vuint32m1_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg4ei32_ntl(base, bindex, vl, __RISCV_NTLH_ALL);
}

vint32m2x4_t test_vloxseg4ei32_v_i32m2x4_ntl_ALL(const int32_t *base, vuint32m2_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg4ei32_ntl(base, bindex, vl, __RISCV_NTLH_ALL);
}

vint64m1x4_t test_vloxseg4ei32_v_i64m1x4_ntl_ALL(const int64_t *base, vuint32mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg4ei32_ntl(base, bindex, vl, __RISCV_NTLH_ALL);
}

vint64m2x4_t test_vloxseg4ei32_v_i64m2x4_ntl_ALL(const int64_t *base, vuint32m1_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg4ei32_ntl(base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint8mf8x4_t test_vloxseg4ei32_v_u8mf8x4_ntl_ALL(const uint8_t *base, vuint32mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg4ei32_ntl(base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint8mf4x4_t test_vloxseg4ei32_v_u8mf4x4_ntl_ALL(const uint8_t *base, vuint32m1_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg4ei32_ntl(base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint8mf2x4_t test_vloxseg4ei32_v_u8mf2x4_ntl_ALL(const uint8_t *base, vuint32m2_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg4ei32_ntl(base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint8m1x4_t test_vloxseg4ei32_v_u8m1x4_ntl_ALL(const uint8_t *base, vuint32m4_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg4ei32_ntl(base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint8m2x4_t test_vloxseg4ei32_v_u8m2x4_ntl_ALL(const uint8_t *base, vuint32m8_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg4ei32_ntl(base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint16mf4x4_t test_vloxseg4ei32_v_u16mf4x4_ntl_ALL(const uint16_t *base, vuint32mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg4ei32_ntl(base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint16mf2x4_t test_vloxseg4ei32_v_u16mf2x4_ntl_ALL(const uint16_t *base, vuint32m1_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg4ei32_ntl(base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint16m1x4_t test_vloxseg4ei32_v_u16m1x4_ntl_ALL(const uint16_t *base, vuint32m2_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg4ei32_ntl(base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint16m2x4_t test_vloxseg4ei32_v_u16m2x4_ntl_ALL(const uint16_t *base, vuint32m4_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg4ei32_ntl(base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint32mf2x4_t test_vloxseg4ei32_v_u32mf2x4_ntl_ALL(const uint32_t *base, vuint32mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg4ei32_ntl(base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint32m1x4_t test_vloxseg4ei32_v_u32m1x4_ntl_ALL(const uint32_t *base, vuint32m1_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg4ei32_ntl(base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint32m2x4_t test_vloxseg4ei32_v_u32m2x4_ntl_ALL(const uint32_t *base, vuint32m2_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg4ei32_ntl(base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint64m1x4_t test_vloxseg4ei32_v_u64m1x4_ntl_ALL(const uint64_t *base, vuint32mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg4ei32_ntl(base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint64m2x4_t test_vloxseg4ei32_v_u64m2x4_ntl_ALL(const uint64_t *base, vuint32m1_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg4ei32_ntl(base, bindex, vl, __RISCV_NTLH_ALL);
}

vfloat16mf4x4_t test_vloxseg4ei32_v_f16mf4x4_m_ntl_ALL(vbool64_t mask, const float16_t *base, vuint32mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg4ei32_ntl(mask, base, bindex, vl, __RISCV_NTLH_ALL);
}

vfloat16mf2x4_t test_vloxseg4ei32_v_f16mf2x4_m_ntl_ALL(vbool32_t mask, const float16_t *base, vuint32m1_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg4ei32_ntl(mask, base, bindex, vl, __RISCV_NTLH_ALL);
}

vfloat16m1x4_t test_vloxseg4ei32_v_f16m1x4_m_ntl_ALL(vbool16_t mask, const float16_t *base, vuint32m2_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg4ei32_ntl(mask, base, bindex, vl, __RISCV_NTLH_ALL);
}

vfloat16m2x4_t test_vloxseg4ei32_v_f16m2x4_m_ntl_ALL(vbool8_t mask, const float16_t *base, vuint32m4_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg4ei32_ntl(mask, base, bindex, vl, __RISCV_NTLH_ALL);
}

vfloat32mf2x4_t test_vloxseg4ei32_v_f32mf2x4_m_ntl_ALL(vbool64_t mask, const float32_t *base, vuint32mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg4ei32_ntl(mask, base, bindex, vl, __RISCV_NTLH_ALL);
}

vfloat32m1x4_t test_vloxseg4ei32_v_f32m1x4_m_ntl_ALL(vbool32_t mask, const float32_t *base, vuint32m1_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg4ei32_ntl(mask, base, bindex, vl, __RISCV_NTLH_ALL);
}

vfloat32m2x4_t test_vloxseg4ei32_v_f32m2x4_m_ntl_ALL(vbool16_t mask, const float32_t *base, vuint32m2_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg4ei32_ntl(mask, base, bindex, vl, __RISCV_NTLH_ALL);
}

vfloat64m1x4_t test_vloxseg4ei32_v_f64m1x4_m_ntl_ALL(vbool64_t mask, const float64_t *base, vuint32mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg4ei32_ntl(mask, base, bindex, vl, __RISCV_NTLH_ALL);
}

vfloat64m2x4_t test_vloxseg4ei32_v_f64m2x4_m_ntl_ALL(vbool32_t mask, const float64_t *base, vuint32m1_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg4ei32_ntl(mask, base, bindex, vl, __RISCV_NTLH_ALL);
}

vint8mf8x4_t test_vloxseg4ei32_v_i8mf8x4_m_ntl_ALL(vbool64_t mask, const int8_t *base, vuint32mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg4ei32_ntl(mask, base, bindex, vl, __RISCV_NTLH_ALL);
}

vint8mf4x4_t test_vloxseg4ei32_v_i8mf4x4_m_ntl_ALL(vbool32_t mask, const int8_t *base, vuint32m1_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg4ei32_ntl(mask, base, bindex, vl, __RISCV_NTLH_ALL);
}

vint8mf2x4_t test_vloxseg4ei32_v_i8mf2x4_m_ntl_ALL(vbool16_t mask, const int8_t *base, vuint32m2_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg4ei32_ntl(mask, base, bindex, vl, __RISCV_NTLH_ALL);
}

vint8m1x4_t test_vloxseg4ei32_v_i8m1x4_m_ntl_ALL(vbool8_t mask, const int8_t *base, vuint32m4_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg4ei32_ntl(mask, base, bindex, vl, __RISCV_NTLH_ALL);
}

vint8m2x4_t test_vloxseg4ei32_v_i8m2x4_m_ntl_ALL(vbool4_t mask, const int8_t *base, vuint32m8_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg4ei32_ntl(mask, base, bindex, vl, __RISCV_NTLH_ALL);
}

vint16mf4x4_t test_vloxseg4ei32_v_i16mf4x4_m_ntl_ALL(vbool64_t mask, const int16_t *base, vuint32mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg4ei32_ntl(mask, base, bindex, vl, __RISCV_NTLH_ALL);
}

vint16mf2x4_t test_vloxseg4ei32_v_i16mf2x4_m_ntl_ALL(vbool32_t mask, const int16_t *base, vuint32m1_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg4ei32_ntl(mask, base, bindex, vl, __RISCV_NTLH_ALL);
}

vint16m1x4_t test_vloxseg4ei32_v_i16m1x4_m_ntl_ALL(vbool16_t mask, const int16_t *base, vuint32m2_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg4ei32_ntl(mask, base, bindex, vl, __RISCV_NTLH_ALL);
}

vint16m2x4_t test_vloxseg4ei32_v_i16m2x4_m_ntl_ALL(vbool8_t mask, const int16_t *base, vuint32m4_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg4ei32_ntl(mask, base, bindex, vl, __RISCV_NTLH_ALL);
}

vint32mf2x4_t test_vloxseg4ei32_v_i32mf2x4_m_ntl_ALL(vbool64_t mask, const int32_t *base, vuint32mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg4ei32_ntl(mask, base, bindex, vl, __RISCV_NTLH_ALL);
}

vint32m1x4_t test_vloxseg4ei32_v_i32m1x4_m_ntl_ALL(vbool32_t mask, const int32_t *base, vuint32m1_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg4ei32_ntl(mask, base, bindex, vl, __RISCV_NTLH_ALL);
}

vint32m2x4_t test_vloxseg4ei32_v_i32m2x4_m_ntl_ALL(vbool16_t mask, const int32_t *base, vuint32m2_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg4ei32_ntl(mask, base, bindex, vl, __RISCV_NTLH_ALL);
}

vint64m1x4_t test_vloxseg4ei32_v_i64m1x4_m_ntl_ALL(vbool64_t mask, const int64_t *base, vuint32mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg4ei32_ntl(mask, base, bindex, vl, __RISCV_NTLH_ALL);
}

vint64m2x4_t test_vloxseg4ei32_v_i64m2x4_m_ntl_ALL(vbool32_t mask, const int64_t *base, vuint32m1_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg4ei32_ntl(mask, base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint8mf8x4_t test_vloxseg4ei32_v_u8mf8x4_m_ntl_ALL(vbool64_t mask, const uint8_t *base, vuint32mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg4ei32_ntl(mask, base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint8mf4x4_t test_vloxseg4ei32_v_u8mf4x4_m_ntl_ALL(vbool32_t mask, const uint8_t *base, vuint32m1_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg4ei32_ntl(mask, base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint8mf2x4_t test_vloxseg4ei32_v_u8mf2x4_m_ntl_ALL(vbool16_t mask, const uint8_t *base, vuint32m2_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg4ei32_ntl(mask, base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint8m1x4_t test_vloxseg4ei32_v_u8m1x4_m_ntl_ALL(vbool8_t mask, const uint8_t *base, vuint32m4_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg4ei32_ntl(mask, base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint8m2x4_t test_vloxseg4ei32_v_u8m2x4_m_ntl_ALL(vbool4_t mask, const uint8_t *base, vuint32m8_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg4ei32_ntl(mask, base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint16mf4x4_t test_vloxseg4ei32_v_u16mf4x4_m_ntl_ALL(vbool64_t mask, const uint16_t *base, vuint32mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg4ei32_ntl(mask, base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint16mf2x4_t test_vloxseg4ei32_v_u16mf2x4_m_ntl_ALL(vbool32_t mask, const uint16_t *base, vuint32m1_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg4ei32_ntl(mask, base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint16m1x4_t test_vloxseg4ei32_v_u16m1x4_m_ntl_ALL(vbool16_t mask, const uint16_t *base, vuint32m2_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg4ei32_ntl(mask, base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint16m2x4_t test_vloxseg4ei32_v_u16m2x4_m_ntl_ALL(vbool8_t mask, const uint16_t *base, vuint32m4_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg4ei32_ntl(mask, base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint32mf2x4_t test_vloxseg4ei32_v_u32mf2x4_m_ntl_ALL(vbool64_t mask, const uint32_t *base, vuint32mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg4ei32_ntl(mask, base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint32m1x4_t test_vloxseg4ei32_v_u32m1x4_m_ntl_ALL(vbool32_t mask, const uint32_t *base, vuint32m1_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg4ei32_ntl(mask, base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint32m2x4_t test_vloxseg4ei32_v_u32m2x4_m_ntl_ALL(vbool16_t mask, const uint32_t *base, vuint32m2_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg4ei32_ntl(mask, base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint64m1x4_t test_vloxseg4ei32_v_u64m1x4_m_ntl_ALL(vbool64_t mask, const uint64_t *base, vuint32mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg4ei32_ntl(mask, base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint64m2x4_t test_vloxseg4ei32_v_u64m2x4_m_ntl_ALL(vbool32_t mask, const uint64_t *base, vuint32m1_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg4ei32_ntl(mask, base, bindex, vl, __RISCV_NTLH_ALL);
}

