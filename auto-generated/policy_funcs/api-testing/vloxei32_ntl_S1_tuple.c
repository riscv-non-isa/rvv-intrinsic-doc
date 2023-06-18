#include <stdint.h>
#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
#include <riscv_ntlh.h>

vfloat16mf4_t test_vloxei32_v_f16mf4_tu_ntl_S1(vfloat16mf4_t maskedoff, const float16_t *base, vuint32mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_v_f16mf4_tu_ntl(maskedoff, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vfloat16mf2_t test_vloxei32_v_f16mf2_tu_ntl_S1(vfloat16mf2_t maskedoff, const float16_t *base, vuint32m1_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_v_f16mf2_tu_ntl(maskedoff, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vfloat16m1_t test_vloxei32_v_f16m1_tu_ntl_S1(vfloat16m1_t maskedoff, const float16_t *base, vuint32m2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_v_f16m1_tu_ntl(maskedoff, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vfloat16m2_t test_vloxei32_v_f16m2_tu_ntl_S1(vfloat16m2_t maskedoff, const float16_t *base, vuint32m4_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_v_f16m2_tu_ntl(maskedoff, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vfloat16m4_t test_vloxei32_v_f16m4_tu_ntl_S1(vfloat16m4_t maskedoff, const float16_t *base, vuint32m8_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_v_f16m4_tu_ntl(maskedoff, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vfloat32mf2_t test_vloxei32_v_f32mf2_tu_ntl_S1(vfloat32mf2_t maskedoff, const float32_t *base, vuint32mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_v_f32mf2_tu_ntl(maskedoff, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vfloat32m1_t test_vloxei32_v_f32m1_tu_ntl_S1(vfloat32m1_t maskedoff, const float32_t *base, vuint32m1_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_v_f32m1_tu_ntl(maskedoff, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vfloat32m2_t test_vloxei32_v_f32m2_tu_ntl_S1(vfloat32m2_t maskedoff, const float32_t *base, vuint32m2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_v_f32m2_tu_ntl(maskedoff, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vfloat32m4_t test_vloxei32_v_f32m4_tu_ntl_S1(vfloat32m4_t maskedoff, const float32_t *base, vuint32m4_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_v_f32m4_tu_ntl(maskedoff, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vfloat32m8_t test_vloxei32_v_f32m8_tu_ntl_S1(vfloat32m8_t maskedoff, const float32_t *base, vuint32m8_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_v_f32m8_tu_ntl(maskedoff, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vfloat64m1_t test_vloxei32_v_f64m1_tu_ntl_S1(vfloat64m1_t maskedoff, const float64_t *base, vuint32mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_v_f64m1_tu_ntl(maskedoff, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vfloat64m2_t test_vloxei32_v_f64m2_tu_ntl_S1(vfloat64m2_t maskedoff, const float64_t *base, vuint32m1_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_v_f64m2_tu_ntl(maskedoff, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vfloat64m4_t test_vloxei32_v_f64m4_tu_ntl_S1(vfloat64m4_t maskedoff, const float64_t *base, vuint32m2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_v_f64m4_tu_ntl(maskedoff, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vfloat64m8_t test_vloxei32_v_f64m8_tu_ntl_S1(vfloat64m8_t maskedoff, const float64_t *base, vuint32m4_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_v_f64m8_tu_ntl(maskedoff, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint8mf8_t test_vloxei32_v_i8mf8_tu_ntl_S1(vint8mf8_t maskedoff, const int8_t *base, vuint32mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_v_i8mf8_tu_ntl(maskedoff, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint8mf4_t test_vloxei32_v_i8mf4_tu_ntl_S1(vint8mf4_t maskedoff, const int8_t *base, vuint32m1_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_v_i8mf4_tu_ntl(maskedoff, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint8mf2_t test_vloxei32_v_i8mf2_tu_ntl_S1(vint8mf2_t maskedoff, const int8_t *base, vuint32m2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_v_i8mf2_tu_ntl(maskedoff, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint8m1_t test_vloxei32_v_i8m1_tu_ntl_S1(vint8m1_t maskedoff, const int8_t *base, vuint32m4_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_v_i8m1_tu_ntl(maskedoff, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint8m2_t test_vloxei32_v_i8m2_tu_ntl_S1(vint8m2_t maskedoff, const int8_t *base, vuint32m8_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_v_i8m2_tu_ntl(maskedoff, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint16mf4_t test_vloxei32_v_i16mf4_tu_ntl_S1(vint16mf4_t maskedoff, const int16_t *base, vuint32mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_v_i16mf4_tu_ntl(maskedoff, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint16mf2_t test_vloxei32_v_i16mf2_tu_ntl_S1(vint16mf2_t maskedoff, const int16_t *base, vuint32m1_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_v_i16mf2_tu_ntl(maskedoff, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint16m1_t test_vloxei32_v_i16m1_tu_ntl_S1(vint16m1_t maskedoff, const int16_t *base, vuint32m2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_v_i16m1_tu_ntl(maskedoff, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint16m2_t test_vloxei32_v_i16m2_tu_ntl_S1(vint16m2_t maskedoff, const int16_t *base, vuint32m4_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_v_i16m2_tu_ntl(maskedoff, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint16m4_t test_vloxei32_v_i16m4_tu_ntl_S1(vint16m4_t maskedoff, const int16_t *base, vuint32m8_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_v_i16m4_tu_ntl(maskedoff, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint32mf2_t test_vloxei32_v_i32mf2_tu_ntl_S1(vint32mf2_t maskedoff, const int32_t *base, vuint32mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_v_i32mf2_tu_ntl(maskedoff, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint32m1_t test_vloxei32_v_i32m1_tu_ntl_S1(vint32m1_t maskedoff, const int32_t *base, vuint32m1_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_v_i32m1_tu_ntl(maskedoff, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint32m2_t test_vloxei32_v_i32m2_tu_ntl_S1(vint32m2_t maskedoff, const int32_t *base, vuint32m2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_v_i32m2_tu_ntl(maskedoff, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint32m4_t test_vloxei32_v_i32m4_tu_ntl_S1(vint32m4_t maskedoff, const int32_t *base, vuint32m4_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_v_i32m4_tu_ntl(maskedoff, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint32m8_t test_vloxei32_v_i32m8_tu_ntl_S1(vint32m8_t maskedoff, const int32_t *base, vuint32m8_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_v_i32m8_tu_ntl(maskedoff, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint64m1_t test_vloxei32_v_i64m1_tu_ntl_S1(vint64m1_t maskedoff, const int64_t *base, vuint32mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_v_i64m1_tu_ntl(maskedoff, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint64m2_t test_vloxei32_v_i64m2_tu_ntl_S1(vint64m2_t maskedoff, const int64_t *base, vuint32m1_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_v_i64m2_tu_ntl(maskedoff, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint64m4_t test_vloxei32_v_i64m4_tu_ntl_S1(vint64m4_t maskedoff, const int64_t *base, vuint32m2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_v_i64m4_tu_ntl(maskedoff, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint64m8_t test_vloxei32_v_i64m8_tu_ntl_S1(vint64m8_t maskedoff, const int64_t *base, vuint32m4_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_v_i64m8_tu_ntl(maskedoff, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint8mf8_t test_vloxei32_v_u8mf8_tu_ntl_S1(vuint8mf8_t maskedoff, const uint8_t *base, vuint32mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_v_u8mf8_tu_ntl(maskedoff, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint8mf4_t test_vloxei32_v_u8mf4_tu_ntl_S1(vuint8mf4_t maskedoff, const uint8_t *base, vuint32m1_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_v_u8mf4_tu_ntl(maskedoff, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint8mf2_t test_vloxei32_v_u8mf2_tu_ntl_S1(vuint8mf2_t maskedoff, const uint8_t *base, vuint32m2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_v_u8mf2_tu_ntl(maskedoff, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint8m1_t test_vloxei32_v_u8m1_tu_ntl_S1(vuint8m1_t maskedoff, const uint8_t *base, vuint32m4_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_v_u8m1_tu_ntl(maskedoff, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint8m2_t test_vloxei32_v_u8m2_tu_ntl_S1(vuint8m2_t maskedoff, const uint8_t *base, vuint32m8_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_v_u8m2_tu_ntl(maskedoff, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint16mf4_t test_vloxei32_v_u16mf4_tu_ntl_S1(vuint16mf4_t maskedoff, const uint16_t *base, vuint32mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_v_u16mf4_tu_ntl(maskedoff, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint16mf2_t test_vloxei32_v_u16mf2_tu_ntl_S1(vuint16mf2_t maskedoff, const uint16_t *base, vuint32m1_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_v_u16mf2_tu_ntl(maskedoff, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint16m1_t test_vloxei32_v_u16m1_tu_ntl_S1(vuint16m1_t maskedoff, const uint16_t *base, vuint32m2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_v_u16m1_tu_ntl(maskedoff, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint16m2_t test_vloxei32_v_u16m2_tu_ntl_S1(vuint16m2_t maskedoff, const uint16_t *base, vuint32m4_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_v_u16m2_tu_ntl(maskedoff, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint16m4_t test_vloxei32_v_u16m4_tu_ntl_S1(vuint16m4_t maskedoff, const uint16_t *base, vuint32m8_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_v_u16m4_tu_ntl(maskedoff, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint32mf2_t test_vloxei32_v_u32mf2_tu_ntl_S1(vuint32mf2_t maskedoff, const uint32_t *base, vuint32mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_v_u32mf2_tu_ntl(maskedoff, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint32m1_t test_vloxei32_v_u32m1_tu_ntl_S1(vuint32m1_t maskedoff, const uint32_t *base, vuint32m1_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_v_u32m1_tu_ntl(maskedoff, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint32m2_t test_vloxei32_v_u32m2_tu_ntl_S1(vuint32m2_t maskedoff, const uint32_t *base, vuint32m2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_v_u32m2_tu_ntl(maskedoff, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint32m4_t test_vloxei32_v_u32m4_tu_ntl_S1(vuint32m4_t maskedoff, const uint32_t *base, vuint32m4_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_v_u32m4_tu_ntl(maskedoff, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint32m8_t test_vloxei32_v_u32m8_tu_ntl_S1(vuint32m8_t maskedoff, const uint32_t *base, vuint32m8_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_v_u32m8_tu_ntl(maskedoff, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint64m1_t test_vloxei32_v_u64m1_tu_ntl_S1(vuint64m1_t maskedoff, const uint64_t *base, vuint32mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_v_u64m1_tu_ntl(maskedoff, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint64m2_t test_vloxei32_v_u64m2_tu_ntl_S1(vuint64m2_t maskedoff, const uint64_t *base, vuint32m1_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_v_u64m2_tu_ntl(maskedoff, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint64m4_t test_vloxei32_v_u64m4_tu_ntl_S1(vuint64m4_t maskedoff, const uint64_t *base, vuint32m2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_v_u64m4_tu_ntl(maskedoff, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint64m8_t test_vloxei32_v_u64m8_tu_ntl_S1(vuint64m8_t maskedoff, const uint64_t *base, vuint32m4_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_v_u64m8_tu_ntl(maskedoff, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vfloat16mf4_t test_vloxei32_v_f16mf4_tum_ntl_S1(vbool64_t mask, vfloat16mf4_t maskedoff, const float16_t *base, vuint32mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_v_f16mf4_tum_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vfloat16mf2_t test_vloxei32_v_f16mf2_tum_ntl_S1(vbool32_t mask, vfloat16mf2_t maskedoff, const float16_t *base, vuint32m1_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_v_f16mf2_tum_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vfloat16m1_t test_vloxei32_v_f16m1_tum_ntl_S1(vbool16_t mask, vfloat16m1_t maskedoff, const float16_t *base, vuint32m2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_v_f16m1_tum_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vfloat16m2_t test_vloxei32_v_f16m2_tum_ntl_S1(vbool8_t mask, vfloat16m2_t maskedoff, const float16_t *base, vuint32m4_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_v_f16m2_tum_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vfloat16m4_t test_vloxei32_v_f16m4_tum_ntl_S1(vbool4_t mask, vfloat16m4_t maskedoff, const float16_t *base, vuint32m8_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_v_f16m4_tum_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vfloat32mf2_t test_vloxei32_v_f32mf2_tum_ntl_S1(vbool64_t mask, vfloat32mf2_t maskedoff, const float32_t *base, vuint32mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_v_f32mf2_tum_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vfloat32m1_t test_vloxei32_v_f32m1_tum_ntl_S1(vbool32_t mask, vfloat32m1_t maskedoff, const float32_t *base, vuint32m1_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_v_f32m1_tum_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vfloat32m2_t test_vloxei32_v_f32m2_tum_ntl_S1(vbool16_t mask, vfloat32m2_t maskedoff, const float32_t *base, vuint32m2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_v_f32m2_tum_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vfloat32m4_t test_vloxei32_v_f32m4_tum_ntl_S1(vbool8_t mask, vfloat32m4_t maskedoff, const float32_t *base, vuint32m4_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_v_f32m4_tum_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vfloat32m8_t test_vloxei32_v_f32m8_tum_ntl_S1(vbool4_t mask, vfloat32m8_t maskedoff, const float32_t *base, vuint32m8_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_v_f32m8_tum_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vfloat64m1_t test_vloxei32_v_f64m1_tum_ntl_S1(vbool64_t mask, vfloat64m1_t maskedoff, const float64_t *base, vuint32mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_v_f64m1_tum_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vfloat64m2_t test_vloxei32_v_f64m2_tum_ntl_S1(vbool32_t mask, vfloat64m2_t maskedoff, const float64_t *base, vuint32m1_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_v_f64m2_tum_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vfloat64m4_t test_vloxei32_v_f64m4_tum_ntl_S1(vbool16_t mask, vfloat64m4_t maskedoff, const float64_t *base, vuint32m2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_v_f64m4_tum_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vfloat64m8_t test_vloxei32_v_f64m8_tum_ntl_S1(vbool8_t mask, vfloat64m8_t maskedoff, const float64_t *base, vuint32m4_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_v_f64m8_tum_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint8mf8_t test_vloxei32_v_i8mf8_tum_ntl_S1(vbool64_t mask, vint8mf8_t maskedoff, const int8_t *base, vuint32mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_v_i8mf8_tum_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint8mf4_t test_vloxei32_v_i8mf4_tum_ntl_S1(vbool32_t mask, vint8mf4_t maskedoff, const int8_t *base, vuint32m1_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_v_i8mf4_tum_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint8mf2_t test_vloxei32_v_i8mf2_tum_ntl_S1(vbool16_t mask, vint8mf2_t maskedoff, const int8_t *base, vuint32m2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_v_i8mf2_tum_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint8m1_t test_vloxei32_v_i8m1_tum_ntl_S1(vbool8_t mask, vint8m1_t maskedoff, const int8_t *base, vuint32m4_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_v_i8m1_tum_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint8m2_t test_vloxei32_v_i8m2_tum_ntl_S1(vbool4_t mask, vint8m2_t maskedoff, const int8_t *base, vuint32m8_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_v_i8m2_tum_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint16mf4_t test_vloxei32_v_i16mf4_tum_ntl_S1(vbool64_t mask, vint16mf4_t maskedoff, const int16_t *base, vuint32mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_v_i16mf4_tum_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint16mf2_t test_vloxei32_v_i16mf2_tum_ntl_S1(vbool32_t mask, vint16mf2_t maskedoff, const int16_t *base, vuint32m1_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_v_i16mf2_tum_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint16m1_t test_vloxei32_v_i16m1_tum_ntl_S1(vbool16_t mask, vint16m1_t maskedoff, const int16_t *base, vuint32m2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_v_i16m1_tum_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint16m2_t test_vloxei32_v_i16m2_tum_ntl_S1(vbool8_t mask, vint16m2_t maskedoff, const int16_t *base, vuint32m4_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_v_i16m2_tum_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint16m4_t test_vloxei32_v_i16m4_tum_ntl_S1(vbool4_t mask, vint16m4_t maskedoff, const int16_t *base, vuint32m8_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_v_i16m4_tum_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint32mf2_t test_vloxei32_v_i32mf2_tum_ntl_S1(vbool64_t mask, vint32mf2_t maskedoff, const int32_t *base, vuint32mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_v_i32mf2_tum_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint32m1_t test_vloxei32_v_i32m1_tum_ntl_S1(vbool32_t mask, vint32m1_t maskedoff, const int32_t *base, vuint32m1_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_v_i32m1_tum_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint32m2_t test_vloxei32_v_i32m2_tum_ntl_S1(vbool16_t mask, vint32m2_t maskedoff, const int32_t *base, vuint32m2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_v_i32m2_tum_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint32m4_t test_vloxei32_v_i32m4_tum_ntl_S1(vbool8_t mask, vint32m4_t maskedoff, const int32_t *base, vuint32m4_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_v_i32m4_tum_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint32m8_t test_vloxei32_v_i32m8_tum_ntl_S1(vbool4_t mask, vint32m8_t maskedoff, const int32_t *base, vuint32m8_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_v_i32m8_tum_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint64m1_t test_vloxei32_v_i64m1_tum_ntl_S1(vbool64_t mask, vint64m1_t maskedoff, const int64_t *base, vuint32mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_v_i64m1_tum_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint64m2_t test_vloxei32_v_i64m2_tum_ntl_S1(vbool32_t mask, vint64m2_t maskedoff, const int64_t *base, vuint32m1_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_v_i64m2_tum_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint64m4_t test_vloxei32_v_i64m4_tum_ntl_S1(vbool16_t mask, vint64m4_t maskedoff, const int64_t *base, vuint32m2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_v_i64m4_tum_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint64m8_t test_vloxei32_v_i64m8_tum_ntl_S1(vbool8_t mask, vint64m8_t maskedoff, const int64_t *base, vuint32m4_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_v_i64m8_tum_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint8mf8_t test_vloxei32_v_u8mf8_tum_ntl_S1(vbool64_t mask, vuint8mf8_t maskedoff, const uint8_t *base, vuint32mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_v_u8mf8_tum_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint8mf4_t test_vloxei32_v_u8mf4_tum_ntl_S1(vbool32_t mask, vuint8mf4_t maskedoff, const uint8_t *base, vuint32m1_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_v_u8mf4_tum_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint8mf2_t test_vloxei32_v_u8mf2_tum_ntl_S1(vbool16_t mask, vuint8mf2_t maskedoff, const uint8_t *base, vuint32m2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_v_u8mf2_tum_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint8m1_t test_vloxei32_v_u8m1_tum_ntl_S1(vbool8_t mask, vuint8m1_t maskedoff, const uint8_t *base, vuint32m4_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_v_u8m1_tum_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint8m2_t test_vloxei32_v_u8m2_tum_ntl_S1(vbool4_t mask, vuint8m2_t maskedoff, const uint8_t *base, vuint32m8_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_v_u8m2_tum_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint16mf4_t test_vloxei32_v_u16mf4_tum_ntl_S1(vbool64_t mask, vuint16mf4_t maskedoff, const uint16_t *base, vuint32mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_v_u16mf4_tum_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint16mf2_t test_vloxei32_v_u16mf2_tum_ntl_S1(vbool32_t mask, vuint16mf2_t maskedoff, const uint16_t *base, vuint32m1_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_v_u16mf2_tum_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint16m1_t test_vloxei32_v_u16m1_tum_ntl_S1(vbool16_t mask, vuint16m1_t maskedoff, const uint16_t *base, vuint32m2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_v_u16m1_tum_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint16m2_t test_vloxei32_v_u16m2_tum_ntl_S1(vbool8_t mask, vuint16m2_t maskedoff, const uint16_t *base, vuint32m4_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_v_u16m2_tum_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint16m4_t test_vloxei32_v_u16m4_tum_ntl_S1(vbool4_t mask, vuint16m4_t maskedoff, const uint16_t *base, vuint32m8_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_v_u16m4_tum_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint32mf2_t test_vloxei32_v_u32mf2_tum_ntl_S1(vbool64_t mask, vuint32mf2_t maskedoff, const uint32_t *base, vuint32mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_v_u32mf2_tum_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint32m1_t test_vloxei32_v_u32m1_tum_ntl_S1(vbool32_t mask, vuint32m1_t maskedoff, const uint32_t *base, vuint32m1_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_v_u32m1_tum_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint32m2_t test_vloxei32_v_u32m2_tum_ntl_S1(vbool16_t mask, vuint32m2_t maskedoff, const uint32_t *base, vuint32m2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_v_u32m2_tum_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint32m4_t test_vloxei32_v_u32m4_tum_ntl_S1(vbool8_t mask, vuint32m4_t maskedoff, const uint32_t *base, vuint32m4_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_v_u32m4_tum_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint32m8_t test_vloxei32_v_u32m8_tum_ntl_S1(vbool4_t mask, vuint32m8_t maskedoff, const uint32_t *base, vuint32m8_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_v_u32m8_tum_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint64m1_t test_vloxei32_v_u64m1_tum_ntl_S1(vbool64_t mask, vuint64m1_t maskedoff, const uint64_t *base, vuint32mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_v_u64m1_tum_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint64m2_t test_vloxei32_v_u64m2_tum_ntl_S1(vbool32_t mask, vuint64m2_t maskedoff, const uint64_t *base, vuint32m1_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_v_u64m2_tum_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint64m4_t test_vloxei32_v_u64m4_tum_ntl_S1(vbool16_t mask, vuint64m4_t maskedoff, const uint64_t *base, vuint32m2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_v_u64m4_tum_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint64m8_t test_vloxei32_v_u64m8_tum_ntl_S1(vbool8_t mask, vuint64m8_t maskedoff, const uint64_t *base, vuint32m4_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_v_u64m8_tum_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vfloat16mf4_t test_vloxei32_v_f16mf4_tumu_ntl_S1(vbool64_t mask, vfloat16mf4_t maskedoff, const float16_t *base, vuint32mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_v_f16mf4_tumu_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vfloat16mf2_t test_vloxei32_v_f16mf2_tumu_ntl_S1(vbool32_t mask, vfloat16mf2_t maskedoff, const float16_t *base, vuint32m1_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_v_f16mf2_tumu_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vfloat16m1_t test_vloxei32_v_f16m1_tumu_ntl_S1(vbool16_t mask, vfloat16m1_t maskedoff, const float16_t *base, vuint32m2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_v_f16m1_tumu_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vfloat16m2_t test_vloxei32_v_f16m2_tumu_ntl_S1(vbool8_t mask, vfloat16m2_t maskedoff, const float16_t *base, vuint32m4_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_v_f16m2_tumu_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vfloat16m4_t test_vloxei32_v_f16m4_tumu_ntl_S1(vbool4_t mask, vfloat16m4_t maskedoff, const float16_t *base, vuint32m8_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_v_f16m4_tumu_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vfloat32mf2_t test_vloxei32_v_f32mf2_tumu_ntl_S1(vbool64_t mask, vfloat32mf2_t maskedoff, const float32_t *base, vuint32mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_v_f32mf2_tumu_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vfloat32m1_t test_vloxei32_v_f32m1_tumu_ntl_S1(vbool32_t mask, vfloat32m1_t maskedoff, const float32_t *base, vuint32m1_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_v_f32m1_tumu_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vfloat32m2_t test_vloxei32_v_f32m2_tumu_ntl_S1(vbool16_t mask, vfloat32m2_t maskedoff, const float32_t *base, vuint32m2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_v_f32m2_tumu_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vfloat32m4_t test_vloxei32_v_f32m4_tumu_ntl_S1(vbool8_t mask, vfloat32m4_t maskedoff, const float32_t *base, vuint32m4_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_v_f32m4_tumu_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vfloat32m8_t test_vloxei32_v_f32m8_tumu_ntl_S1(vbool4_t mask, vfloat32m8_t maskedoff, const float32_t *base, vuint32m8_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_v_f32m8_tumu_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vfloat64m1_t test_vloxei32_v_f64m1_tumu_ntl_S1(vbool64_t mask, vfloat64m1_t maskedoff, const float64_t *base, vuint32mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_v_f64m1_tumu_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vfloat64m2_t test_vloxei32_v_f64m2_tumu_ntl_S1(vbool32_t mask, vfloat64m2_t maskedoff, const float64_t *base, vuint32m1_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_v_f64m2_tumu_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vfloat64m4_t test_vloxei32_v_f64m4_tumu_ntl_S1(vbool16_t mask, vfloat64m4_t maskedoff, const float64_t *base, vuint32m2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_v_f64m4_tumu_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vfloat64m8_t test_vloxei32_v_f64m8_tumu_ntl_S1(vbool8_t mask, vfloat64m8_t maskedoff, const float64_t *base, vuint32m4_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_v_f64m8_tumu_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint8mf8_t test_vloxei32_v_i8mf8_tumu_ntl_S1(vbool64_t mask, vint8mf8_t maskedoff, const int8_t *base, vuint32mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_v_i8mf8_tumu_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint8mf4_t test_vloxei32_v_i8mf4_tumu_ntl_S1(vbool32_t mask, vint8mf4_t maskedoff, const int8_t *base, vuint32m1_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_v_i8mf4_tumu_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint8mf2_t test_vloxei32_v_i8mf2_tumu_ntl_S1(vbool16_t mask, vint8mf2_t maskedoff, const int8_t *base, vuint32m2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_v_i8mf2_tumu_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint8m1_t test_vloxei32_v_i8m1_tumu_ntl_S1(vbool8_t mask, vint8m1_t maskedoff, const int8_t *base, vuint32m4_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_v_i8m1_tumu_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint8m2_t test_vloxei32_v_i8m2_tumu_ntl_S1(vbool4_t mask, vint8m2_t maskedoff, const int8_t *base, vuint32m8_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_v_i8m2_tumu_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint16mf4_t test_vloxei32_v_i16mf4_tumu_ntl_S1(vbool64_t mask, vint16mf4_t maskedoff, const int16_t *base, vuint32mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_v_i16mf4_tumu_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint16mf2_t test_vloxei32_v_i16mf2_tumu_ntl_S1(vbool32_t mask, vint16mf2_t maskedoff, const int16_t *base, vuint32m1_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_v_i16mf2_tumu_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint16m1_t test_vloxei32_v_i16m1_tumu_ntl_S1(vbool16_t mask, vint16m1_t maskedoff, const int16_t *base, vuint32m2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_v_i16m1_tumu_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint16m2_t test_vloxei32_v_i16m2_tumu_ntl_S1(vbool8_t mask, vint16m2_t maskedoff, const int16_t *base, vuint32m4_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_v_i16m2_tumu_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint16m4_t test_vloxei32_v_i16m4_tumu_ntl_S1(vbool4_t mask, vint16m4_t maskedoff, const int16_t *base, vuint32m8_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_v_i16m4_tumu_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint32mf2_t test_vloxei32_v_i32mf2_tumu_ntl_S1(vbool64_t mask, vint32mf2_t maskedoff, const int32_t *base, vuint32mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_v_i32mf2_tumu_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint32m1_t test_vloxei32_v_i32m1_tumu_ntl_S1(vbool32_t mask, vint32m1_t maskedoff, const int32_t *base, vuint32m1_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_v_i32m1_tumu_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint32m2_t test_vloxei32_v_i32m2_tumu_ntl_S1(vbool16_t mask, vint32m2_t maskedoff, const int32_t *base, vuint32m2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_v_i32m2_tumu_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint32m4_t test_vloxei32_v_i32m4_tumu_ntl_S1(vbool8_t mask, vint32m4_t maskedoff, const int32_t *base, vuint32m4_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_v_i32m4_tumu_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint32m8_t test_vloxei32_v_i32m8_tumu_ntl_S1(vbool4_t mask, vint32m8_t maskedoff, const int32_t *base, vuint32m8_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_v_i32m8_tumu_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint64m1_t test_vloxei32_v_i64m1_tumu_ntl_S1(vbool64_t mask, vint64m1_t maskedoff, const int64_t *base, vuint32mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_v_i64m1_tumu_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint64m2_t test_vloxei32_v_i64m2_tumu_ntl_S1(vbool32_t mask, vint64m2_t maskedoff, const int64_t *base, vuint32m1_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_v_i64m2_tumu_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint64m4_t test_vloxei32_v_i64m4_tumu_ntl_S1(vbool16_t mask, vint64m4_t maskedoff, const int64_t *base, vuint32m2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_v_i64m4_tumu_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint64m8_t test_vloxei32_v_i64m8_tumu_ntl_S1(vbool8_t mask, vint64m8_t maskedoff, const int64_t *base, vuint32m4_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_v_i64m8_tumu_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint8mf8_t test_vloxei32_v_u8mf8_tumu_ntl_S1(vbool64_t mask, vuint8mf8_t maskedoff, const uint8_t *base, vuint32mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_v_u8mf8_tumu_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint8mf4_t test_vloxei32_v_u8mf4_tumu_ntl_S1(vbool32_t mask, vuint8mf4_t maskedoff, const uint8_t *base, vuint32m1_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_v_u8mf4_tumu_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint8mf2_t test_vloxei32_v_u8mf2_tumu_ntl_S1(vbool16_t mask, vuint8mf2_t maskedoff, const uint8_t *base, vuint32m2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_v_u8mf2_tumu_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint8m1_t test_vloxei32_v_u8m1_tumu_ntl_S1(vbool8_t mask, vuint8m1_t maskedoff, const uint8_t *base, vuint32m4_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_v_u8m1_tumu_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint8m2_t test_vloxei32_v_u8m2_tumu_ntl_S1(vbool4_t mask, vuint8m2_t maskedoff, const uint8_t *base, vuint32m8_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_v_u8m2_tumu_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint16mf4_t test_vloxei32_v_u16mf4_tumu_ntl_S1(vbool64_t mask, vuint16mf4_t maskedoff, const uint16_t *base, vuint32mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_v_u16mf4_tumu_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint16mf2_t test_vloxei32_v_u16mf2_tumu_ntl_S1(vbool32_t mask, vuint16mf2_t maskedoff, const uint16_t *base, vuint32m1_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_v_u16mf2_tumu_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint16m1_t test_vloxei32_v_u16m1_tumu_ntl_S1(vbool16_t mask, vuint16m1_t maskedoff, const uint16_t *base, vuint32m2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_v_u16m1_tumu_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint16m2_t test_vloxei32_v_u16m2_tumu_ntl_S1(vbool8_t mask, vuint16m2_t maskedoff, const uint16_t *base, vuint32m4_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_v_u16m2_tumu_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint16m4_t test_vloxei32_v_u16m4_tumu_ntl_S1(vbool4_t mask, vuint16m4_t maskedoff, const uint16_t *base, vuint32m8_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_v_u16m4_tumu_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint32mf2_t test_vloxei32_v_u32mf2_tumu_ntl_S1(vbool64_t mask, vuint32mf2_t maskedoff, const uint32_t *base, vuint32mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_v_u32mf2_tumu_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint32m1_t test_vloxei32_v_u32m1_tumu_ntl_S1(vbool32_t mask, vuint32m1_t maskedoff, const uint32_t *base, vuint32m1_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_v_u32m1_tumu_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint32m2_t test_vloxei32_v_u32m2_tumu_ntl_S1(vbool16_t mask, vuint32m2_t maskedoff, const uint32_t *base, vuint32m2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_v_u32m2_tumu_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint32m4_t test_vloxei32_v_u32m4_tumu_ntl_S1(vbool8_t mask, vuint32m4_t maskedoff, const uint32_t *base, vuint32m4_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_v_u32m4_tumu_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint32m8_t test_vloxei32_v_u32m8_tumu_ntl_S1(vbool4_t mask, vuint32m8_t maskedoff, const uint32_t *base, vuint32m8_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_v_u32m8_tumu_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint64m1_t test_vloxei32_v_u64m1_tumu_ntl_S1(vbool64_t mask, vuint64m1_t maskedoff, const uint64_t *base, vuint32mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_v_u64m1_tumu_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint64m2_t test_vloxei32_v_u64m2_tumu_ntl_S1(vbool32_t mask, vuint64m2_t maskedoff, const uint64_t *base, vuint32m1_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_v_u64m2_tumu_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint64m4_t test_vloxei32_v_u64m4_tumu_ntl_S1(vbool16_t mask, vuint64m4_t maskedoff, const uint64_t *base, vuint32m2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_v_u64m4_tumu_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint64m8_t test_vloxei32_v_u64m8_tumu_ntl_S1(vbool8_t mask, vuint64m8_t maskedoff, const uint64_t *base, vuint32m4_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_v_u64m8_tumu_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vfloat16mf4_t test_vloxei32_v_f16mf4_mu_ntl_S1(vbool64_t mask, vfloat16mf4_t maskedoff, const float16_t *base, vuint32mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_v_f16mf4_mu_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vfloat16mf2_t test_vloxei32_v_f16mf2_mu_ntl_S1(vbool32_t mask, vfloat16mf2_t maskedoff, const float16_t *base, vuint32m1_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_v_f16mf2_mu_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vfloat16m1_t test_vloxei32_v_f16m1_mu_ntl_S1(vbool16_t mask, vfloat16m1_t maskedoff, const float16_t *base, vuint32m2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_v_f16m1_mu_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vfloat16m2_t test_vloxei32_v_f16m2_mu_ntl_S1(vbool8_t mask, vfloat16m2_t maskedoff, const float16_t *base, vuint32m4_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_v_f16m2_mu_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vfloat16m4_t test_vloxei32_v_f16m4_mu_ntl_S1(vbool4_t mask, vfloat16m4_t maskedoff, const float16_t *base, vuint32m8_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_v_f16m4_mu_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vfloat32mf2_t test_vloxei32_v_f32mf2_mu_ntl_S1(vbool64_t mask, vfloat32mf2_t maskedoff, const float32_t *base, vuint32mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_v_f32mf2_mu_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vfloat32m1_t test_vloxei32_v_f32m1_mu_ntl_S1(vbool32_t mask, vfloat32m1_t maskedoff, const float32_t *base, vuint32m1_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_v_f32m1_mu_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vfloat32m2_t test_vloxei32_v_f32m2_mu_ntl_S1(vbool16_t mask, vfloat32m2_t maskedoff, const float32_t *base, vuint32m2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_v_f32m2_mu_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vfloat32m4_t test_vloxei32_v_f32m4_mu_ntl_S1(vbool8_t mask, vfloat32m4_t maskedoff, const float32_t *base, vuint32m4_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_v_f32m4_mu_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vfloat32m8_t test_vloxei32_v_f32m8_mu_ntl_S1(vbool4_t mask, vfloat32m8_t maskedoff, const float32_t *base, vuint32m8_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_v_f32m8_mu_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vfloat64m1_t test_vloxei32_v_f64m1_mu_ntl_S1(vbool64_t mask, vfloat64m1_t maskedoff, const float64_t *base, vuint32mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_v_f64m1_mu_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vfloat64m2_t test_vloxei32_v_f64m2_mu_ntl_S1(vbool32_t mask, vfloat64m2_t maskedoff, const float64_t *base, vuint32m1_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_v_f64m2_mu_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vfloat64m4_t test_vloxei32_v_f64m4_mu_ntl_S1(vbool16_t mask, vfloat64m4_t maskedoff, const float64_t *base, vuint32m2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_v_f64m4_mu_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vfloat64m8_t test_vloxei32_v_f64m8_mu_ntl_S1(vbool8_t mask, vfloat64m8_t maskedoff, const float64_t *base, vuint32m4_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_v_f64m8_mu_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint8mf8_t test_vloxei32_v_i8mf8_mu_ntl_S1(vbool64_t mask, vint8mf8_t maskedoff, const int8_t *base, vuint32mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_v_i8mf8_mu_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint8mf4_t test_vloxei32_v_i8mf4_mu_ntl_S1(vbool32_t mask, vint8mf4_t maskedoff, const int8_t *base, vuint32m1_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_v_i8mf4_mu_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint8mf2_t test_vloxei32_v_i8mf2_mu_ntl_S1(vbool16_t mask, vint8mf2_t maskedoff, const int8_t *base, vuint32m2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_v_i8mf2_mu_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint8m1_t test_vloxei32_v_i8m1_mu_ntl_S1(vbool8_t mask, vint8m1_t maskedoff, const int8_t *base, vuint32m4_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_v_i8m1_mu_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint8m2_t test_vloxei32_v_i8m2_mu_ntl_S1(vbool4_t mask, vint8m2_t maskedoff, const int8_t *base, vuint32m8_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_v_i8m2_mu_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint16mf4_t test_vloxei32_v_i16mf4_mu_ntl_S1(vbool64_t mask, vint16mf4_t maskedoff, const int16_t *base, vuint32mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_v_i16mf4_mu_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint16mf2_t test_vloxei32_v_i16mf2_mu_ntl_S1(vbool32_t mask, vint16mf2_t maskedoff, const int16_t *base, vuint32m1_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_v_i16mf2_mu_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint16m1_t test_vloxei32_v_i16m1_mu_ntl_S1(vbool16_t mask, vint16m1_t maskedoff, const int16_t *base, vuint32m2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_v_i16m1_mu_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint16m2_t test_vloxei32_v_i16m2_mu_ntl_S1(vbool8_t mask, vint16m2_t maskedoff, const int16_t *base, vuint32m4_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_v_i16m2_mu_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint16m4_t test_vloxei32_v_i16m4_mu_ntl_S1(vbool4_t mask, vint16m4_t maskedoff, const int16_t *base, vuint32m8_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_v_i16m4_mu_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint32mf2_t test_vloxei32_v_i32mf2_mu_ntl_S1(vbool64_t mask, vint32mf2_t maskedoff, const int32_t *base, vuint32mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_v_i32mf2_mu_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint32m1_t test_vloxei32_v_i32m1_mu_ntl_S1(vbool32_t mask, vint32m1_t maskedoff, const int32_t *base, vuint32m1_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_v_i32m1_mu_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint32m2_t test_vloxei32_v_i32m2_mu_ntl_S1(vbool16_t mask, vint32m2_t maskedoff, const int32_t *base, vuint32m2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_v_i32m2_mu_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint32m4_t test_vloxei32_v_i32m4_mu_ntl_S1(vbool8_t mask, vint32m4_t maskedoff, const int32_t *base, vuint32m4_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_v_i32m4_mu_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint32m8_t test_vloxei32_v_i32m8_mu_ntl_S1(vbool4_t mask, vint32m8_t maskedoff, const int32_t *base, vuint32m8_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_v_i32m8_mu_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint64m1_t test_vloxei32_v_i64m1_mu_ntl_S1(vbool64_t mask, vint64m1_t maskedoff, const int64_t *base, vuint32mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_v_i64m1_mu_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint64m2_t test_vloxei32_v_i64m2_mu_ntl_S1(vbool32_t mask, vint64m2_t maskedoff, const int64_t *base, vuint32m1_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_v_i64m2_mu_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint64m4_t test_vloxei32_v_i64m4_mu_ntl_S1(vbool16_t mask, vint64m4_t maskedoff, const int64_t *base, vuint32m2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_v_i64m4_mu_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vint64m8_t test_vloxei32_v_i64m8_mu_ntl_S1(vbool8_t mask, vint64m8_t maskedoff, const int64_t *base, vuint32m4_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_v_i64m8_mu_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint8mf8_t test_vloxei32_v_u8mf8_mu_ntl_S1(vbool64_t mask, vuint8mf8_t maskedoff, const uint8_t *base, vuint32mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_v_u8mf8_mu_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint8mf4_t test_vloxei32_v_u8mf4_mu_ntl_S1(vbool32_t mask, vuint8mf4_t maskedoff, const uint8_t *base, vuint32m1_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_v_u8mf4_mu_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint8mf2_t test_vloxei32_v_u8mf2_mu_ntl_S1(vbool16_t mask, vuint8mf2_t maskedoff, const uint8_t *base, vuint32m2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_v_u8mf2_mu_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint8m1_t test_vloxei32_v_u8m1_mu_ntl_S1(vbool8_t mask, vuint8m1_t maskedoff, const uint8_t *base, vuint32m4_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_v_u8m1_mu_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint8m2_t test_vloxei32_v_u8m2_mu_ntl_S1(vbool4_t mask, vuint8m2_t maskedoff, const uint8_t *base, vuint32m8_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_v_u8m2_mu_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint16mf4_t test_vloxei32_v_u16mf4_mu_ntl_S1(vbool64_t mask, vuint16mf4_t maskedoff, const uint16_t *base, vuint32mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_v_u16mf4_mu_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint16mf2_t test_vloxei32_v_u16mf2_mu_ntl_S1(vbool32_t mask, vuint16mf2_t maskedoff, const uint16_t *base, vuint32m1_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_v_u16mf2_mu_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint16m1_t test_vloxei32_v_u16m1_mu_ntl_S1(vbool16_t mask, vuint16m1_t maskedoff, const uint16_t *base, vuint32m2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_v_u16m1_mu_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint16m2_t test_vloxei32_v_u16m2_mu_ntl_S1(vbool8_t mask, vuint16m2_t maskedoff, const uint16_t *base, vuint32m4_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_v_u16m2_mu_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint16m4_t test_vloxei32_v_u16m4_mu_ntl_S1(vbool4_t mask, vuint16m4_t maskedoff, const uint16_t *base, vuint32m8_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_v_u16m4_mu_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint32mf2_t test_vloxei32_v_u32mf2_mu_ntl_S1(vbool64_t mask, vuint32mf2_t maskedoff, const uint32_t *base, vuint32mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_v_u32mf2_mu_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint32m1_t test_vloxei32_v_u32m1_mu_ntl_S1(vbool32_t mask, vuint32m1_t maskedoff, const uint32_t *base, vuint32m1_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_v_u32m1_mu_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint32m2_t test_vloxei32_v_u32m2_mu_ntl_S1(vbool16_t mask, vuint32m2_t maskedoff, const uint32_t *base, vuint32m2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_v_u32m2_mu_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint32m4_t test_vloxei32_v_u32m4_mu_ntl_S1(vbool8_t mask, vuint32m4_t maskedoff, const uint32_t *base, vuint32m4_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_v_u32m4_mu_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint32m8_t test_vloxei32_v_u32m8_mu_ntl_S1(vbool4_t mask, vuint32m8_t maskedoff, const uint32_t *base, vuint32m8_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_v_u32m8_mu_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint64m1_t test_vloxei32_v_u64m1_mu_ntl_S1(vbool64_t mask, vuint64m1_t maskedoff, const uint64_t *base, vuint32mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_v_u64m1_mu_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint64m2_t test_vloxei32_v_u64m2_mu_ntl_S1(vbool32_t mask, vuint64m2_t maskedoff, const uint64_t *base, vuint32m1_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_v_u64m2_mu_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint64m4_t test_vloxei32_v_u64m4_mu_ntl_S1(vbool16_t mask, vuint64m4_t maskedoff, const uint64_t *base, vuint32m2_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_v_u64m4_mu_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

vuint64m8_t test_vloxei32_v_u64m8_mu_ntl_S1(vbool8_t mask, vuint64m8_t maskedoff, const uint64_t *base, vuint32m4_t bindex, size_t vl, int domain) {
  return __riscv_vloxei32_v_u64m8_mu_ntl(mask, maskedoff, base, bindex, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

