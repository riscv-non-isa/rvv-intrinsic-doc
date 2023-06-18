#include <stdint.h>
#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
#include <riscv_ntlh.h>

vfloat16mf4_t test_vloxei8_v_f16mf4_ntl_P1(const float16_t *base, vuint8mf8_t bindex, size_t vl, int domain) {
  return __riscv_vloxei8_ntl(base, bindex, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vfloat16mf2_t test_vloxei8_v_f16mf2_ntl_P1(const float16_t *base, vuint8mf4_t bindex, size_t vl, int domain) {
  return __riscv_vloxei8_ntl(base, bindex, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vfloat16m1_t test_vloxei8_v_f16m1_ntl_P1(const float16_t *base, vuint8mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei8_ntl(base, bindex, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vfloat16m2_t test_vloxei8_v_f16m2_ntl_P1(const float16_t *base, vuint8m1_t bindex, size_t vl, int domain) {
  return __riscv_vloxei8_ntl(base, bindex, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vfloat16m4_t test_vloxei8_v_f16m4_ntl_P1(const float16_t *base, vuint8m2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei8_ntl(base, bindex, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vfloat16m8_t test_vloxei8_v_f16m8_ntl_P1(const float16_t *base, vuint8m4_t bindex, size_t vl, int domain) {
  return __riscv_vloxei8_ntl(base, bindex, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vfloat32mf2_t test_vloxei8_v_f32mf2_ntl_P1(const float32_t *base, vuint8mf8_t bindex, size_t vl, int domain) {
  return __riscv_vloxei8_ntl(base, bindex, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vfloat32m1_t test_vloxei8_v_f32m1_ntl_P1(const float32_t *base, vuint8mf4_t bindex, size_t vl, int domain) {
  return __riscv_vloxei8_ntl(base, bindex, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vfloat32m2_t test_vloxei8_v_f32m2_ntl_P1(const float32_t *base, vuint8mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei8_ntl(base, bindex, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vfloat32m4_t test_vloxei8_v_f32m4_ntl_P1(const float32_t *base, vuint8m1_t bindex, size_t vl, int domain) {
  return __riscv_vloxei8_ntl(base, bindex, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vfloat32m8_t test_vloxei8_v_f32m8_ntl_P1(const float32_t *base, vuint8m2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei8_ntl(base, bindex, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vfloat64m1_t test_vloxei8_v_f64m1_ntl_P1(const float64_t *base, vuint8mf8_t bindex, size_t vl, int domain) {
  return __riscv_vloxei8_ntl(base, bindex, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vfloat64m2_t test_vloxei8_v_f64m2_ntl_P1(const float64_t *base, vuint8mf4_t bindex, size_t vl, int domain) {
  return __riscv_vloxei8_ntl(base, bindex, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vfloat64m4_t test_vloxei8_v_f64m4_ntl_P1(const float64_t *base, vuint8mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei8_ntl(base, bindex, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vfloat64m8_t test_vloxei8_v_f64m8_ntl_P1(const float64_t *base, vuint8m1_t bindex, size_t vl, int domain) {
  return __riscv_vloxei8_ntl(base, bindex, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint8mf8_t test_vloxei8_v_i8mf8_ntl_P1(const int8_t *base, vuint8mf8_t bindex, size_t vl, int domain) {
  return __riscv_vloxei8_ntl(base, bindex, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint8mf4_t test_vloxei8_v_i8mf4_ntl_P1(const int8_t *base, vuint8mf4_t bindex, size_t vl, int domain) {
  return __riscv_vloxei8_ntl(base, bindex, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint8mf2_t test_vloxei8_v_i8mf2_ntl_P1(const int8_t *base, vuint8mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei8_ntl(base, bindex, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint8m1_t test_vloxei8_v_i8m1_ntl_P1(const int8_t *base, vuint8m1_t bindex, size_t vl, int domain) {
  return __riscv_vloxei8_ntl(base, bindex, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint8m2_t test_vloxei8_v_i8m2_ntl_P1(const int8_t *base, vuint8m2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei8_ntl(base, bindex, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint8m4_t test_vloxei8_v_i8m4_ntl_P1(const int8_t *base, vuint8m4_t bindex, size_t vl, int domain) {
  return __riscv_vloxei8_ntl(base, bindex, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint8m8_t test_vloxei8_v_i8m8_ntl_P1(const int8_t *base, vuint8m8_t bindex, size_t vl, int domain) {
  return __riscv_vloxei8_ntl(base, bindex, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint16mf4_t test_vloxei8_v_i16mf4_ntl_P1(const int16_t *base, vuint8mf8_t bindex, size_t vl, int domain) {
  return __riscv_vloxei8_ntl(base, bindex, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint16mf2_t test_vloxei8_v_i16mf2_ntl_P1(const int16_t *base, vuint8mf4_t bindex, size_t vl, int domain) {
  return __riscv_vloxei8_ntl(base, bindex, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint16m1_t test_vloxei8_v_i16m1_ntl_P1(const int16_t *base, vuint8mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei8_ntl(base, bindex, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint16m2_t test_vloxei8_v_i16m2_ntl_P1(const int16_t *base, vuint8m1_t bindex, size_t vl, int domain) {
  return __riscv_vloxei8_ntl(base, bindex, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint16m4_t test_vloxei8_v_i16m4_ntl_P1(const int16_t *base, vuint8m2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei8_ntl(base, bindex, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint16m8_t test_vloxei8_v_i16m8_ntl_P1(const int16_t *base, vuint8m4_t bindex, size_t vl, int domain) {
  return __riscv_vloxei8_ntl(base, bindex, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint32mf2_t test_vloxei8_v_i32mf2_ntl_P1(const int32_t *base, vuint8mf8_t bindex, size_t vl, int domain) {
  return __riscv_vloxei8_ntl(base, bindex, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint32m1_t test_vloxei8_v_i32m1_ntl_P1(const int32_t *base, vuint8mf4_t bindex, size_t vl, int domain) {
  return __riscv_vloxei8_ntl(base, bindex, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint32m2_t test_vloxei8_v_i32m2_ntl_P1(const int32_t *base, vuint8mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei8_ntl(base, bindex, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint32m4_t test_vloxei8_v_i32m4_ntl_P1(const int32_t *base, vuint8m1_t bindex, size_t vl, int domain) {
  return __riscv_vloxei8_ntl(base, bindex, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint32m8_t test_vloxei8_v_i32m8_ntl_P1(const int32_t *base, vuint8m2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei8_ntl(base, bindex, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint64m1_t test_vloxei8_v_i64m1_ntl_P1(const int64_t *base, vuint8mf8_t bindex, size_t vl, int domain) {
  return __riscv_vloxei8_ntl(base, bindex, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint64m2_t test_vloxei8_v_i64m2_ntl_P1(const int64_t *base, vuint8mf4_t bindex, size_t vl, int domain) {
  return __riscv_vloxei8_ntl(base, bindex, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint64m4_t test_vloxei8_v_i64m4_ntl_P1(const int64_t *base, vuint8mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei8_ntl(base, bindex, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint64m8_t test_vloxei8_v_i64m8_ntl_P1(const int64_t *base, vuint8m1_t bindex, size_t vl, int domain) {
  return __riscv_vloxei8_ntl(base, bindex, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint8mf8_t test_vloxei8_v_u8mf8_ntl_P1(const uint8_t *base, vuint8mf8_t bindex, size_t vl, int domain) {
  return __riscv_vloxei8_ntl(base, bindex, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint8mf4_t test_vloxei8_v_u8mf4_ntl_P1(const uint8_t *base, vuint8mf4_t bindex, size_t vl, int domain) {
  return __riscv_vloxei8_ntl(base, bindex, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint8mf2_t test_vloxei8_v_u8mf2_ntl_P1(const uint8_t *base, vuint8mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei8_ntl(base, bindex, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint8m1_t test_vloxei8_v_u8m1_ntl_P1(const uint8_t *base, vuint8m1_t bindex, size_t vl, int domain) {
  return __riscv_vloxei8_ntl(base, bindex, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint8m2_t test_vloxei8_v_u8m2_ntl_P1(const uint8_t *base, vuint8m2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei8_ntl(base, bindex, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint8m4_t test_vloxei8_v_u8m4_ntl_P1(const uint8_t *base, vuint8m4_t bindex, size_t vl, int domain) {
  return __riscv_vloxei8_ntl(base, bindex, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint8m8_t test_vloxei8_v_u8m8_ntl_P1(const uint8_t *base, vuint8m8_t bindex, size_t vl, int domain) {
  return __riscv_vloxei8_ntl(base, bindex, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint16mf4_t test_vloxei8_v_u16mf4_ntl_P1(const uint16_t *base, vuint8mf8_t bindex, size_t vl, int domain) {
  return __riscv_vloxei8_ntl(base, bindex, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint16mf2_t test_vloxei8_v_u16mf2_ntl_P1(const uint16_t *base, vuint8mf4_t bindex, size_t vl, int domain) {
  return __riscv_vloxei8_ntl(base, bindex, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint16m1_t test_vloxei8_v_u16m1_ntl_P1(const uint16_t *base, vuint8mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei8_ntl(base, bindex, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint16m2_t test_vloxei8_v_u16m2_ntl_P1(const uint16_t *base, vuint8m1_t bindex, size_t vl, int domain) {
  return __riscv_vloxei8_ntl(base, bindex, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint16m4_t test_vloxei8_v_u16m4_ntl_P1(const uint16_t *base, vuint8m2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei8_ntl(base, bindex, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint16m8_t test_vloxei8_v_u16m8_ntl_P1(const uint16_t *base, vuint8m4_t bindex, size_t vl, int domain) {
  return __riscv_vloxei8_ntl(base, bindex, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint32mf2_t test_vloxei8_v_u32mf2_ntl_P1(const uint32_t *base, vuint8mf8_t bindex, size_t vl, int domain) {
  return __riscv_vloxei8_ntl(base, bindex, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint32m1_t test_vloxei8_v_u32m1_ntl_P1(const uint32_t *base, vuint8mf4_t bindex, size_t vl, int domain) {
  return __riscv_vloxei8_ntl(base, bindex, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint32m2_t test_vloxei8_v_u32m2_ntl_P1(const uint32_t *base, vuint8mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei8_ntl(base, bindex, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint32m4_t test_vloxei8_v_u32m4_ntl_P1(const uint32_t *base, vuint8m1_t bindex, size_t vl, int domain) {
  return __riscv_vloxei8_ntl(base, bindex, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint32m8_t test_vloxei8_v_u32m8_ntl_P1(const uint32_t *base, vuint8m2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei8_ntl(base, bindex, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint64m1_t test_vloxei8_v_u64m1_ntl_P1(const uint64_t *base, vuint8mf8_t bindex, size_t vl, int domain) {
  return __riscv_vloxei8_ntl(base, bindex, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint64m2_t test_vloxei8_v_u64m2_ntl_P1(const uint64_t *base, vuint8mf4_t bindex, size_t vl, int domain) {
  return __riscv_vloxei8_ntl(base, bindex, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint64m4_t test_vloxei8_v_u64m4_ntl_P1(const uint64_t *base, vuint8mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei8_ntl(base, bindex, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint64m8_t test_vloxei8_v_u64m8_ntl_P1(const uint64_t *base, vuint8m1_t bindex, size_t vl, int domain) {
  return __riscv_vloxei8_ntl(base, bindex, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vfloat16mf4_t test_vloxei8_v_f16mf4_m_ntl_P1(vbool64_t mask, const float16_t *base, vuint8mf8_t bindex, size_t vl, int domain) {
  return __riscv_vloxei8_ntl(mask, base, bindex, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vfloat16mf2_t test_vloxei8_v_f16mf2_m_ntl_P1(vbool32_t mask, const float16_t *base, vuint8mf4_t bindex, size_t vl, int domain) {
  return __riscv_vloxei8_ntl(mask, base, bindex, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vfloat16m1_t test_vloxei8_v_f16m1_m_ntl_P1(vbool16_t mask, const float16_t *base, vuint8mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei8_ntl(mask, base, bindex, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vfloat16m2_t test_vloxei8_v_f16m2_m_ntl_P1(vbool8_t mask, const float16_t *base, vuint8m1_t bindex, size_t vl, int domain) {
  return __riscv_vloxei8_ntl(mask, base, bindex, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vfloat16m4_t test_vloxei8_v_f16m4_m_ntl_P1(vbool4_t mask, const float16_t *base, vuint8m2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei8_ntl(mask, base, bindex, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vfloat16m8_t test_vloxei8_v_f16m8_m_ntl_P1(vbool2_t mask, const float16_t *base, vuint8m4_t bindex, size_t vl, int domain) {
  return __riscv_vloxei8_ntl(mask, base, bindex, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vfloat32mf2_t test_vloxei8_v_f32mf2_m_ntl_P1(vbool64_t mask, const float32_t *base, vuint8mf8_t bindex, size_t vl, int domain) {
  return __riscv_vloxei8_ntl(mask, base, bindex, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vfloat32m1_t test_vloxei8_v_f32m1_m_ntl_P1(vbool32_t mask, const float32_t *base, vuint8mf4_t bindex, size_t vl, int domain) {
  return __riscv_vloxei8_ntl(mask, base, bindex, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vfloat32m2_t test_vloxei8_v_f32m2_m_ntl_P1(vbool16_t mask, const float32_t *base, vuint8mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei8_ntl(mask, base, bindex, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vfloat32m4_t test_vloxei8_v_f32m4_m_ntl_P1(vbool8_t mask, const float32_t *base, vuint8m1_t bindex, size_t vl, int domain) {
  return __riscv_vloxei8_ntl(mask, base, bindex, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vfloat32m8_t test_vloxei8_v_f32m8_m_ntl_P1(vbool4_t mask, const float32_t *base, vuint8m2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei8_ntl(mask, base, bindex, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vfloat64m1_t test_vloxei8_v_f64m1_m_ntl_P1(vbool64_t mask, const float64_t *base, vuint8mf8_t bindex, size_t vl, int domain) {
  return __riscv_vloxei8_ntl(mask, base, bindex, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vfloat64m2_t test_vloxei8_v_f64m2_m_ntl_P1(vbool32_t mask, const float64_t *base, vuint8mf4_t bindex, size_t vl, int domain) {
  return __riscv_vloxei8_ntl(mask, base, bindex, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vfloat64m4_t test_vloxei8_v_f64m4_m_ntl_P1(vbool16_t mask, const float64_t *base, vuint8mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei8_ntl(mask, base, bindex, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vfloat64m8_t test_vloxei8_v_f64m8_m_ntl_P1(vbool8_t mask, const float64_t *base, vuint8m1_t bindex, size_t vl, int domain) {
  return __riscv_vloxei8_ntl(mask, base, bindex, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint8mf8_t test_vloxei8_v_i8mf8_m_ntl_P1(vbool64_t mask, const int8_t *base, vuint8mf8_t bindex, size_t vl, int domain) {
  return __riscv_vloxei8_ntl(mask, base, bindex, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint8mf4_t test_vloxei8_v_i8mf4_m_ntl_P1(vbool32_t mask, const int8_t *base, vuint8mf4_t bindex, size_t vl, int domain) {
  return __riscv_vloxei8_ntl(mask, base, bindex, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint8mf2_t test_vloxei8_v_i8mf2_m_ntl_P1(vbool16_t mask, const int8_t *base, vuint8mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei8_ntl(mask, base, bindex, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint8m1_t test_vloxei8_v_i8m1_m_ntl_P1(vbool8_t mask, const int8_t *base, vuint8m1_t bindex, size_t vl, int domain) {
  return __riscv_vloxei8_ntl(mask, base, bindex, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint8m2_t test_vloxei8_v_i8m2_m_ntl_P1(vbool4_t mask, const int8_t *base, vuint8m2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei8_ntl(mask, base, bindex, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint8m4_t test_vloxei8_v_i8m4_m_ntl_P1(vbool2_t mask, const int8_t *base, vuint8m4_t bindex, size_t vl, int domain) {
  return __riscv_vloxei8_ntl(mask, base, bindex, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint8m8_t test_vloxei8_v_i8m8_m_ntl_P1(vbool1_t mask, const int8_t *base, vuint8m8_t bindex, size_t vl, int domain) {
  return __riscv_vloxei8_ntl(mask, base, bindex, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint16mf4_t test_vloxei8_v_i16mf4_m_ntl_P1(vbool64_t mask, const int16_t *base, vuint8mf8_t bindex, size_t vl, int domain) {
  return __riscv_vloxei8_ntl(mask, base, bindex, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint16mf2_t test_vloxei8_v_i16mf2_m_ntl_P1(vbool32_t mask, const int16_t *base, vuint8mf4_t bindex, size_t vl, int domain) {
  return __riscv_vloxei8_ntl(mask, base, bindex, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint16m1_t test_vloxei8_v_i16m1_m_ntl_P1(vbool16_t mask, const int16_t *base, vuint8mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei8_ntl(mask, base, bindex, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint16m2_t test_vloxei8_v_i16m2_m_ntl_P1(vbool8_t mask, const int16_t *base, vuint8m1_t bindex, size_t vl, int domain) {
  return __riscv_vloxei8_ntl(mask, base, bindex, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint16m4_t test_vloxei8_v_i16m4_m_ntl_P1(vbool4_t mask, const int16_t *base, vuint8m2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei8_ntl(mask, base, bindex, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint16m8_t test_vloxei8_v_i16m8_m_ntl_P1(vbool2_t mask, const int16_t *base, vuint8m4_t bindex, size_t vl, int domain) {
  return __riscv_vloxei8_ntl(mask, base, bindex, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint32mf2_t test_vloxei8_v_i32mf2_m_ntl_P1(vbool64_t mask, const int32_t *base, vuint8mf8_t bindex, size_t vl, int domain) {
  return __riscv_vloxei8_ntl(mask, base, bindex, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint32m1_t test_vloxei8_v_i32m1_m_ntl_P1(vbool32_t mask, const int32_t *base, vuint8mf4_t bindex, size_t vl, int domain) {
  return __riscv_vloxei8_ntl(mask, base, bindex, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint32m2_t test_vloxei8_v_i32m2_m_ntl_P1(vbool16_t mask, const int32_t *base, vuint8mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei8_ntl(mask, base, bindex, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint32m4_t test_vloxei8_v_i32m4_m_ntl_P1(vbool8_t mask, const int32_t *base, vuint8m1_t bindex, size_t vl, int domain) {
  return __riscv_vloxei8_ntl(mask, base, bindex, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint32m8_t test_vloxei8_v_i32m8_m_ntl_P1(vbool4_t mask, const int32_t *base, vuint8m2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei8_ntl(mask, base, bindex, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint64m1_t test_vloxei8_v_i64m1_m_ntl_P1(vbool64_t mask, const int64_t *base, vuint8mf8_t bindex, size_t vl, int domain) {
  return __riscv_vloxei8_ntl(mask, base, bindex, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint64m2_t test_vloxei8_v_i64m2_m_ntl_P1(vbool32_t mask, const int64_t *base, vuint8mf4_t bindex, size_t vl, int domain) {
  return __riscv_vloxei8_ntl(mask, base, bindex, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint64m4_t test_vloxei8_v_i64m4_m_ntl_P1(vbool16_t mask, const int64_t *base, vuint8mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei8_ntl(mask, base, bindex, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint64m8_t test_vloxei8_v_i64m8_m_ntl_P1(vbool8_t mask, const int64_t *base, vuint8m1_t bindex, size_t vl, int domain) {
  return __riscv_vloxei8_ntl(mask, base, bindex, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint8mf8_t test_vloxei8_v_u8mf8_m_ntl_P1(vbool64_t mask, const uint8_t *base, vuint8mf8_t bindex, size_t vl, int domain) {
  return __riscv_vloxei8_ntl(mask, base, bindex, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint8mf4_t test_vloxei8_v_u8mf4_m_ntl_P1(vbool32_t mask, const uint8_t *base, vuint8mf4_t bindex, size_t vl, int domain) {
  return __riscv_vloxei8_ntl(mask, base, bindex, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint8mf2_t test_vloxei8_v_u8mf2_m_ntl_P1(vbool16_t mask, const uint8_t *base, vuint8mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei8_ntl(mask, base, bindex, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint8m1_t test_vloxei8_v_u8m1_m_ntl_P1(vbool8_t mask, const uint8_t *base, vuint8m1_t bindex, size_t vl, int domain) {
  return __riscv_vloxei8_ntl(mask, base, bindex, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint8m2_t test_vloxei8_v_u8m2_m_ntl_P1(vbool4_t mask, const uint8_t *base, vuint8m2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei8_ntl(mask, base, bindex, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint8m4_t test_vloxei8_v_u8m4_m_ntl_P1(vbool2_t mask, const uint8_t *base, vuint8m4_t bindex, size_t vl, int domain) {
  return __riscv_vloxei8_ntl(mask, base, bindex, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint8m8_t test_vloxei8_v_u8m8_m_ntl_P1(vbool1_t mask, const uint8_t *base, vuint8m8_t bindex, size_t vl, int domain) {
  return __riscv_vloxei8_ntl(mask, base, bindex, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint16mf4_t test_vloxei8_v_u16mf4_m_ntl_P1(vbool64_t mask, const uint16_t *base, vuint8mf8_t bindex, size_t vl, int domain) {
  return __riscv_vloxei8_ntl(mask, base, bindex, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint16mf2_t test_vloxei8_v_u16mf2_m_ntl_P1(vbool32_t mask, const uint16_t *base, vuint8mf4_t bindex, size_t vl, int domain) {
  return __riscv_vloxei8_ntl(mask, base, bindex, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint16m1_t test_vloxei8_v_u16m1_m_ntl_P1(vbool16_t mask, const uint16_t *base, vuint8mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei8_ntl(mask, base, bindex, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint16m2_t test_vloxei8_v_u16m2_m_ntl_P1(vbool8_t mask, const uint16_t *base, vuint8m1_t bindex, size_t vl, int domain) {
  return __riscv_vloxei8_ntl(mask, base, bindex, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint16m4_t test_vloxei8_v_u16m4_m_ntl_P1(vbool4_t mask, const uint16_t *base, vuint8m2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei8_ntl(mask, base, bindex, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint16m8_t test_vloxei8_v_u16m8_m_ntl_P1(vbool2_t mask, const uint16_t *base, vuint8m4_t bindex, size_t vl, int domain) {
  return __riscv_vloxei8_ntl(mask, base, bindex, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint32mf2_t test_vloxei8_v_u32mf2_m_ntl_P1(vbool64_t mask, const uint32_t *base, vuint8mf8_t bindex, size_t vl, int domain) {
  return __riscv_vloxei8_ntl(mask, base, bindex, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint32m1_t test_vloxei8_v_u32m1_m_ntl_P1(vbool32_t mask, const uint32_t *base, vuint8mf4_t bindex, size_t vl, int domain) {
  return __riscv_vloxei8_ntl(mask, base, bindex, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint32m2_t test_vloxei8_v_u32m2_m_ntl_P1(vbool16_t mask, const uint32_t *base, vuint8mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei8_ntl(mask, base, bindex, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint32m4_t test_vloxei8_v_u32m4_m_ntl_P1(vbool8_t mask, const uint32_t *base, vuint8m1_t bindex, size_t vl, int domain) {
  return __riscv_vloxei8_ntl(mask, base, bindex, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint32m8_t test_vloxei8_v_u32m8_m_ntl_P1(vbool4_t mask, const uint32_t *base, vuint8m2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei8_ntl(mask, base, bindex, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint64m1_t test_vloxei8_v_u64m1_m_ntl_P1(vbool64_t mask, const uint64_t *base, vuint8mf8_t bindex, size_t vl, int domain) {
  return __riscv_vloxei8_ntl(mask, base, bindex, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint64m2_t test_vloxei8_v_u64m2_m_ntl_P1(vbool32_t mask, const uint64_t *base, vuint8mf4_t bindex, size_t vl, int domain) {
  return __riscv_vloxei8_ntl(mask, base, bindex, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint64m4_t test_vloxei8_v_u64m4_m_ntl_P1(vbool16_t mask, const uint64_t *base, vuint8mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei8_ntl(mask, base, bindex, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint64m8_t test_vloxei8_v_u64m8_m_ntl_P1(vbool8_t mask, const uint64_t *base, vuint8m1_t bindex, size_t vl, int domain) {
  return __riscv_vloxei8_ntl(mask, base, bindex, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

