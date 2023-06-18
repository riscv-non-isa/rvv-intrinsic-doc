#include <stdint.h>
#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
#include <riscv_ntlh.h>

void test_vsuxseg4ei64_v_f16mf4x4_ntl_S1(float16_t *base, vuint64m1_t bindex, vfloat16mf4x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vsuxseg4ei64_v_f16mf4x4_ntl(base, bindex, v_tuple, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vsuxseg4ei64_v_f16mf2x4_ntl_S1(float16_t *base, vuint64m2_t bindex, vfloat16mf2x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vsuxseg4ei64_v_f16mf2x4_ntl(base, bindex, v_tuple, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vsuxseg4ei64_v_f16m1x4_ntl_S1(float16_t *base, vuint64m4_t bindex, vfloat16m1x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vsuxseg4ei64_v_f16m1x4_ntl(base, bindex, v_tuple, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vsuxseg4ei64_v_f16m2x4_ntl_S1(float16_t *base, vuint64m8_t bindex, vfloat16m2x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vsuxseg4ei64_v_f16m2x4_ntl(base, bindex, v_tuple, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vsuxseg4ei64_v_f32mf2x4_ntl_S1(float32_t *base, vuint64m1_t bindex, vfloat32mf2x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vsuxseg4ei64_v_f32mf2x4_ntl(base, bindex, v_tuple, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vsuxseg4ei64_v_f32m1x4_ntl_S1(float32_t *base, vuint64m2_t bindex, vfloat32m1x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vsuxseg4ei64_v_f32m1x4_ntl(base, bindex, v_tuple, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vsuxseg4ei64_v_f32m2x4_ntl_S1(float32_t *base, vuint64m4_t bindex, vfloat32m2x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vsuxseg4ei64_v_f32m2x4_ntl(base, bindex, v_tuple, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vsuxseg4ei64_v_f64m1x4_ntl_S1(float64_t *base, vuint64m1_t bindex, vfloat64m1x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vsuxseg4ei64_v_f64m1x4_ntl(base, bindex, v_tuple, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vsuxseg4ei64_v_f64m2x4_ntl_S1(float64_t *base, vuint64m2_t bindex, vfloat64m2x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vsuxseg4ei64_v_f64m2x4_ntl(base, bindex, v_tuple, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vsuxseg4ei64_v_i8mf8x4_ntl_S1(int8_t *base, vuint64m1_t bindex, vint8mf8x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vsuxseg4ei64_v_i8mf8x4_ntl(base, bindex, v_tuple, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vsuxseg4ei64_v_i8mf4x4_ntl_S1(int8_t *base, vuint64m2_t bindex, vint8mf4x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vsuxseg4ei64_v_i8mf4x4_ntl(base, bindex, v_tuple, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vsuxseg4ei64_v_i8mf2x4_ntl_S1(int8_t *base, vuint64m4_t bindex, vint8mf2x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vsuxseg4ei64_v_i8mf2x4_ntl(base, bindex, v_tuple, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vsuxseg4ei64_v_i8m1x4_ntl_S1(int8_t *base, vuint64m8_t bindex, vint8m1x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vsuxseg4ei64_v_i8m1x4_ntl(base, bindex, v_tuple, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vsuxseg4ei64_v_i16mf4x4_ntl_S1(int16_t *base, vuint64m1_t bindex, vint16mf4x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vsuxseg4ei64_v_i16mf4x4_ntl(base, bindex, v_tuple, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vsuxseg4ei64_v_i16mf2x4_ntl_S1(int16_t *base, vuint64m2_t bindex, vint16mf2x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vsuxseg4ei64_v_i16mf2x4_ntl(base, bindex, v_tuple, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vsuxseg4ei64_v_i16m1x4_ntl_S1(int16_t *base, vuint64m4_t bindex, vint16m1x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vsuxseg4ei64_v_i16m1x4_ntl(base, bindex, v_tuple, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vsuxseg4ei64_v_i16m2x4_ntl_S1(int16_t *base, vuint64m8_t bindex, vint16m2x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vsuxseg4ei64_v_i16m2x4_ntl(base, bindex, v_tuple, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vsuxseg4ei64_v_i32mf2x4_ntl_S1(int32_t *base, vuint64m1_t bindex, vint32mf2x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vsuxseg4ei64_v_i32mf2x4_ntl(base, bindex, v_tuple, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vsuxseg4ei64_v_i32m1x4_ntl_S1(int32_t *base, vuint64m2_t bindex, vint32m1x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vsuxseg4ei64_v_i32m1x4_ntl(base, bindex, v_tuple, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vsuxseg4ei64_v_i32m2x4_ntl_S1(int32_t *base, vuint64m4_t bindex, vint32m2x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vsuxseg4ei64_v_i32m2x4_ntl(base, bindex, v_tuple, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vsuxseg4ei64_v_i64m1x4_ntl_S1(int64_t *base, vuint64m1_t bindex, vint64m1x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vsuxseg4ei64_v_i64m1x4_ntl(base, bindex, v_tuple, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vsuxseg4ei64_v_i64m2x4_ntl_S1(int64_t *base, vuint64m2_t bindex, vint64m2x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vsuxseg4ei64_v_i64m2x4_ntl(base, bindex, v_tuple, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vsuxseg4ei64_v_u8mf8x4_ntl_S1(uint8_t *base, vuint64m1_t bindex, vuint8mf8x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vsuxseg4ei64_v_u8mf8x4_ntl(base, bindex, v_tuple, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vsuxseg4ei64_v_u8mf4x4_ntl_S1(uint8_t *base, vuint64m2_t bindex, vuint8mf4x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vsuxseg4ei64_v_u8mf4x4_ntl(base, bindex, v_tuple, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vsuxseg4ei64_v_u8mf2x4_ntl_S1(uint8_t *base, vuint64m4_t bindex, vuint8mf2x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vsuxseg4ei64_v_u8mf2x4_ntl(base, bindex, v_tuple, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vsuxseg4ei64_v_u8m1x4_ntl_S1(uint8_t *base, vuint64m8_t bindex, vuint8m1x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vsuxseg4ei64_v_u8m1x4_ntl(base, bindex, v_tuple, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vsuxseg4ei64_v_u16mf4x4_ntl_S1(uint16_t *base, vuint64m1_t bindex, vuint16mf4x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vsuxseg4ei64_v_u16mf4x4_ntl(base, bindex, v_tuple, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vsuxseg4ei64_v_u16mf2x4_ntl_S1(uint16_t *base, vuint64m2_t bindex, vuint16mf2x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vsuxseg4ei64_v_u16mf2x4_ntl(base, bindex, v_tuple, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vsuxseg4ei64_v_u16m1x4_ntl_S1(uint16_t *base, vuint64m4_t bindex, vuint16m1x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vsuxseg4ei64_v_u16m1x4_ntl(base, bindex, v_tuple, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vsuxseg4ei64_v_u16m2x4_ntl_S1(uint16_t *base, vuint64m8_t bindex, vuint16m2x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vsuxseg4ei64_v_u16m2x4_ntl(base, bindex, v_tuple, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vsuxseg4ei64_v_u32mf2x4_ntl_S1(uint32_t *base, vuint64m1_t bindex, vuint32mf2x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vsuxseg4ei64_v_u32mf2x4_ntl(base, bindex, v_tuple, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vsuxseg4ei64_v_u32m1x4_ntl_S1(uint32_t *base, vuint64m2_t bindex, vuint32m1x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vsuxseg4ei64_v_u32m1x4_ntl(base, bindex, v_tuple, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vsuxseg4ei64_v_u32m2x4_ntl_S1(uint32_t *base, vuint64m4_t bindex, vuint32m2x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vsuxseg4ei64_v_u32m2x4_ntl(base, bindex, v_tuple, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vsuxseg4ei64_v_u64m1x4_ntl_S1(uint64_t *base, vuint64m1_t bindex, vuint64m1x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vsuxseg4ei64_v_u64m1x4_ntl(base, bindex, v_tuple, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vsuxseg4ei64_v_u64m2x4_ntl_S1(uint64_t *base, vuint64m2_t bindex, vuint64m2x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vsuxseg4ei64_v_u64m2x4_ntl(base, bindex, v_tuple, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vsuxseg4ei64_v_f16mf4x4_m_ntl_S1(vbool64_t mask, float16_t *base, vuint64m1_t bindex, vfloat16mf4x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vsuxseg4ei64_v_f16mf4x4_m_ntl(mask, base, bindex, v_tuple, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vsuxseg4ei64_v_f16mf2x4_m_ntl_S1(vbool32_t mask, float16_t *base, vuint64m2_t bindex, vfloat16mf2x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vsuxseg4ei64_v_f16mf2x4_m_ntl(mask, base, bindex, v_tuple, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vsuxseg4ei64_v_f16m1x4_m_ntl_S1(vbool16_t mask, float16_t *base, vuint64m4_t bindex, vfloat16m1x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vsuxseg4ei64_v_f16m1x4_m_ntl(mask, base, bindex, v_tuple, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vsuxseg4ei64_v_f16m2x4_m_ntl_S1(vbool8_t mask, float16_t *base, vuint64m8_t bindex, vfloat16m2x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vsuxseg4ei64_v_f16m2x4_m_ntl(mask, base, bindex, v_tuple, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vsuxseg4ei64_v_f32mf2x4_m_ntl_S1(vbool64_t mask, float32_t *base, vuint64m1_t bindex, vfloat32mf2x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vsuxseg4ei64_v_f32mf2x4_m_ntl(mask, base, bindex, v_tuple, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vsuxseg4ei64_v_f32m1x4_m_ntl_S1(vbool32_t mask, float32_t *base, vuint64m2_t bindex, vfloat32m1x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vsuxseg4ei64_v_f32m1x4_m_ntl(mask, base, bindex, v_tuple, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vsuxseg4ei64_v_f32m2x4_m_ntl_S1(vbool16_t mask, float32_t *base, vuint64m4_t bindex, vfloat32m2x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vsuxseg4ei64_v_f32m2x4_m_ntl(mask, base, bindex, v_tuple, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vsuxseg4ei64_v_f64m1x4_m_ntl_S1(vbool64_t mask, float64_t *base, vuint64m1_t bindex, vfloat64m1x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vsuxseg4ei64_v_f64m1x4_m_ntl(mask, base, bindex, v_tuple, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vsuxseg4ei64_v_f64m2x4_m_ntl_S1(vbool32_t mask, float64_t *base, vuint64m2_t bindex, vfloat64m2x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vsuxseg4ei64_v_f64m2x4_m_ntl(mask, base, bindex, v_tuple, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vsuxseg4ei64_v_i8mf8x4_m_ntl_S1(vbool64_t mask, int8_t *base, vuint64m1_t bindex, vint8mf8x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vsuxseg4ei64_v_i8mf8x4_m_ntl(mask, base, bindex, v_tuple, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vsuxseg4ei64_v_i8mf4x4_m_ntl_S1(vbool32_t mask, int8_t *base, vuint64m2_t bindex, vint8mf4x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vsuxseg4ei64_v_i8mf4x4_m_ntl(mask, base, bindex, v_tuple, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vsuxseg4ei64_v_i8mf2x4_m_ntl_S1(vbool16_t mask, int8_t *base, vuint64m4_t bindex, vint8mf2x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vsuxseg4ei64_v_i8mf2x4_m_ntl(mask, base, bindex, v_tuple, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vsuxseg4ei64_v_i8m1x4_m_ntl_S1(vbool8_t mask, int8_t *base, vuint64m8_t bindex, vint8m1x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vsuxseg4ei64_v_i8m1x4_m_ntl(mask, base, bindex, v_tuple, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vsuxseg4ei64_v_i16mf4x4_m_ntl_S1(vbool64_t mask, int16_t *base, vuint64m1_t bindex, vint16mf4x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vsuxseg4ei64_v_i16mf4x4_m_ntl(mask, base, bindex, v_tuple, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vsuxseg4ei64_v_i16mf2x4_m_ntl_S1(vbool32_t mask, int16_t *base, vuint64m2_t bindex, vint16mf2x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vsuxseg4ei64_v_i16mf2x4_m_ntl(mask, base, bindex, v_tuple, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vsuxseg4ei64_v_i16m1x4_m_ntl_S1(vbool16_t mask, int16_t *base, vuint64m4_t bindex, vint16m1x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vsuxseg4ei64_v_i16m1x4_m_ntl(mask, base, bindex, v_tuple, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vsuxseg4ei64_v_i16m2x4_m_ntl_S1(vbool8_t mask, int16_t *base, vuint64m8_t bindex, vint16m2x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vsuxseg4ei64_v_i16m2x4_m_ntl(mask, base, bindex, v_tuple, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vsuxseg4ei64_v_i32mf2x4_m_ntl_S1(vbool64_t mask, int32_t *base, vuint64m1_t bindex, vint32mf2x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vsuxseg4ei64_v_i32mf2x4_m_ntl(mask, base, bindex, v_tuple, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vsuxseg4ei64_v_i32m1x4_m_ntl_S1(vbool32_t mask, int32_t *base, vuint64m2_t bindex, vint32m1x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vsuxseg4ei64_v_i32m1x4_m_ntl(mask, base, bindex, v_tuple, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vsuxseg4ei64_v_i32m2x4_m_ntl_S1(vbool16_t mask, int32_t *base, vuint64m4_t bindex, vint32m2x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vsuxseg4ei64_v_i32m2x4_m_ntl(mask, base, bindex, v_tuple, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vsuxseg4ei64_v_i64m1x4_m_ntl_S1(vbool64_t mask, int64_t *base, vuint64m1_t bindex, vint64m1x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vsuxseg4ei64_v_i64m1x4_m_ntl(mask, base, bindex, v_tuple, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vsuxseg4ei64_v_i64m2x4_m_ntl_S1(vbool32_t mask, int64_t *base, vuint64m2_t bindex, vint64m2x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vsuxseg4ei64_v_i64m2x4_m_ntl(mask, base, bindex, v_tuple, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vsuxseg4ei64_v_u8mf8x4_m_ntl_S1(vbool64_t mask, uint8_t *base, vuint64m1_t bindex, vuint8mf8x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vsuxseg4ei64_v_u8mf8x4_m_ntl(mask, base, bindex, v_tuple, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vsuxseg4ei64_v_u8mf4x4_m_ntl_S1(vbool32_t mask, uint8_t *base, vuint64m2_t bindex, vuint8mf4x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vsuxseg4ei64_v_u8mf4x4_m_ntl(mask, base, bindex, v_tuple, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vsuxseg4ei64_v_u8mf2x4_m_ntl_S1(vbool16_t mask, uint8_t *base, vuint64m4_t bindex, vuint8mf2x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vsuxseg4ei64_v_u8mf2x4_m_ntl(mask, base, bindex, v_tuple, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vsuxseg4ei64_v_u8m1x4_m_ntl_S1(vbool8_t mask, uint8_t *base, vuint64m8_t bindex, vuint8m1x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vsuxseg4ei64_v_u8m1x4_m_ntl(mask, base, bindex, v_tuple, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vsuxseg4ei64_v_u16mf4x4_m_ntl_S1(vbool64_t mask, uint16_t *base, vuint64m1_t bindex, vuint16mf4x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vsuxseg4ei64_v_u16mf4x4_m_ntl(mask, base, bindex, v_tuple, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vsuxseg4ei64_v_u16mf2x4_m_ntl_S1(vbool32_t mask, uint16_t *base, vuint64m2_t bindex, vuint16mf2x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vsuxseg4ei64_v_u16mf2x4_m_ntl(mask, base, bindex, v_tuple, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vsuxseg4ei64_v_u16m1x4_m_ntl_S1(vbool16_t mask, uint16_t *base, vuint64m4_t bindex, vuint16m1x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vsuxseg4ei64_v_u16m1x4_m_ntl(mask, base, bindex, v_tuple, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vsuxseg4ei64_v_u16m2x4_m_ntl_S1(vbool8_t mask, uint16_t *base, vuint64m8_t bindex, vuint16m2x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vsuxseg4ei64_v_u16m2x4_m_ntl(mask, base, bindex, v_tuple, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vsuxseg4ei64_v_u32mf2x4_m_ntl_S1(vbool64_t mask, uint32_t *base, vuint64m1_t bindex, vuint32mf2x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vsuxseg4ei64_v_u32mf2x4_m_ntl(mask, base, bindex, v_tuple, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vsuxseg4ei64_v_u32m1x4_m_ntl_S1(vbool32_t mask, uint32_t *base, vuint64m2_t bindex, vuint32m1x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vsuxseg4ei64_v_u32m1x4_m_ntl(mask, base, bindex, v_tuple, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vsuxseg4ei64_v_u32m2x4_m_ntl_S1(vbool16_t mask, uint32_t *base, vuint64m4_t bindex, vuint32m2x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vsuxseg4ei64_v_u32m2x4_m_ntl(mask, base, bindex, v_tuple, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vsuxseg4ei64_v_u64m1x4_m_ntl_S1(vbool64_t mask, uint64_t *base, vuint64m1_t bindex, vuint64m1x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vsuxseg4ei64_v_u64m1x4_m_ntl(mask, base, bindex, v_tuple, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vsuxseg4ei64_v_u64m2x4_m_ntl_S1(vbool32_t mask, uint64_t *base, vuint64m2_t bindex, vuint64m2x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vsuxseg4ei64_v_u64m2x4_m_ntl(mask, base, bindex, v_tuple, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

