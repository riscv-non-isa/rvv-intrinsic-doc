#include <stdint.h>
#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
#include <riscv_ntlh.h>

vfloat16mf4x6_t test_vloxseg6ei32_v_f16mf4x6_tu_ntl_PALL(vfloat16mf4x6_t maskedoff_tuple, const float16_t *base, vuint32mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg6ei32_tu_ntl(maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vfloat16mf2x6_t test_vloxseg6ei32_v_f16mf2x6_tu_ntl_PALL(vfloat16mf2x6_t maskedoff_tuple, const float16_t *base, vuint32m1_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg6ei32_tu_ntl(maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vfloat16m1x6_t test_vloxseg6ei32_v_f16m1x6_tu_ntl_PALL(vfloat16m1x6_t maskedoff_tuple, const float16_t *base, vuint32m2_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg6ei32_tu_ntl(maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vfloat32mf2x6_t test_vloxseg6ei32_v_f32mf2x6_tu_ntl_PALL(vfloat32mf2x6_t maskedoff_tuple, const float32_t *base, vuint32mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg6ei32_tu_ntl(maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vfloat32m1x6_t test_vloxseg6ei32_v_f32m1x6_tu_ntl_PALL(vfloat32m1x6_t maskedoff_tuple, const float32_t *base, vuint32m1_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg6ei32_tu_ntl(maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vfloat64m1x6_t test_vloxseg6ei32_v_f64m1x6_tu_ntl_PALL(vfloat64m1x6_t maskedoff_tuple, const float64_t *base, vuint32mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg6ei32_tu_ntl(maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint8mf8x6_t test_vloxseg6ei32_v_i8mf8x6_tu_ntl_PALL(vint8mf8x6_t maskedoff_tuple, const int8_t *base, vuint32mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg6ei32_tu_ntl(maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint8mf4x6_t test_vloxseg6ei32_v_i8mf4x6_tu_ntl_PALL(vint8mf4x6_t maskedoff_tuple, const int8_t *base, vuint32m1_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg6ei32_tu_ntl(maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint8mf2x6_t test_vloxseg6ei32_v_i8mf2x6_tu_ntl_PALL(vint8mf2x6_t maskedoff_tuple, const int8_t *base, vuint32m2_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg6ei32_tu_ntl(maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint8m1x6_t test_vloxseg6ei32_v_i8m1x6_tu_ntl_PALL(vint8m1x6_t maskedoff_tuple, const int8_t *base, vuint32m4_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg6ei32_tu_ntl(maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint16mf4x6_t test_vloxseg6ei32_v_i16mf4x6_tu_ntl_PALL(vint16mf4x6_t maskedoff_tuple, const int16_t *base, vuint32mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg6ei32_tu_ntl(maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint16mf2x6_t test_vloxseg6ei32_v_i16mf2x6_tu_ntl_PALL(vint16mf2x6_t maskedoff_tuple, const int16_t *base, vuint32m1_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg6ei32_tu_ntl(maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint16m1x6_t test_vloxseg6ei32_v_i16m1x6_tu_ntl_PALL(vint16m1x6_t maskedoff_tuple, const int16_t *base, vuint32m2_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg6ei32_tu_ntl(maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint32mf2x6_t test_vloxseg6ei32_v_i32mf2x6_tu_ntl_PALL(vint32mf2x6_t maskedoff_tuple, const int32_t *base, vuint32mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg6ei32_tu_ntl(maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint32m1x6_t test_vloxseg6ei32_v_i32m1x6_tu_ntl_PALL(vint32m1x6_t maskedoff_tuple, const int32_t *base, vuint32m1_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg6ei32_tu_ntl(maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint64m1x6_t test_vloxseg6ei32_v_i64m1x6_tu_ntl_PALL(vint64m1x6_t maskedoff_tuple, const int64_t *base, vuint32mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg6ei32_tu_ntl(maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint8mf8x6_t test_vloxseg6ei32_v_u8mf8x6_tu_ntl_PALL(vuint8mf8x6_t maskedoff_tuple, const uint8_t *base, vuint32mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg6ei32_tu_ntl(maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint8mf4x6_t test_vloxseg6ei32_v_u8mf4x6_tu_ntl_PALL(vuint8mf4x6_t maskedoff_tuple, const uint8_t *base, vuint32m1_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg6ei32_tu_ntl(maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint8mf2x6_t test_vloxseg6ei32_v_u8mf2x6_tu_ntl_PALL(vuint8mf2x6_t maskedoff_tuple, const uint8_t *base, vuint32m2_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg6ei32_tu_ntl(maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint8m1x6_t test_vloxseg6ei32_v_u8m1x6_tu_ntl_PALL(vuint8m1x6_t maskedoff_tuple, const uint8_t *base, vuint32m4_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg6ei32_tu_ntl(maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint16mf4x6_t test_vloxseg6ei32_v_u16mf4x6_tu_ntl_PALL(vuint16mf4x6_t maskedoff_tuple, const uint16_t *base, vuint32mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg6ei32_tu_ntl(maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint16mf2x6_t test_vloxseg6ei32_v_u16mf2x6_tu_ntl_PALL(vuint16mf2x6_t maskedoff_tuple, const uint16_t *base, vuint32m1_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg6ei32_tu_ntl(maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint16m1x6_t test_vloxseg6ei32_v_u16m1x6_tu_ntl_PALL(vuint16m1x6_t maskedoff_tuple, const uint16_t *base, vuint32m2_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg6ei32_tu_ntl(maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint32mf2x6_t test_vloxseg6ei32_v_u32mf2x6_tu_ntl_PALL(vuint32mf2x6_t maskedoff_tuple, const uint32_t *base, vuint32mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg6ei32_tu_ntl(maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint32m1x6_t test_vloxseg6ei32_v_u32m1x6_tu_ntl_PALL(vuint32m1x6_t maskedoff_tuple, const uint32_t *base, vuint32m1_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg6ei32_tu_ntl(maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint64m1x6_t test_vloxseg6ei32_v_u64m1x6_tu_ntl_PALL(vuint64m1x6_t maskedoff_tuple, const uint64_t *base, vuint32mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg6ei32_tu_ntl(maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vfloat16mf4x6_t test_vloxseg6ei32_v_f16mf4x6_tum_ntl_PALL(vbool64_t mask, vfloat16mf4x6_t maskedoff_tuple, const float16_t *base, vuint32mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg6ei32_tum_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vfloat16mf2x6_t test_vloxseg6ei32_v_f16mf2x6_tum_ntl_PALL(vbool32_t mask, vfloat16mf2x6_t maskedoff_tuple, const float16_t *base, vuint32m1_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg6ei32_tum_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vfloat16m1x6_t test_vloxseg6ei32_v_f16m1x6_tum_ntl_PALL(vbool16_t mask, vfloat16m1x6_t maskedoff_tuple, const float16_t *base, vuint32m2_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg6ei32_tum_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vfloat32mf2x6_t test_vloxseg6ei32_v_f32mf2x6_tum_ntl_PALL(vbool64_t mask, vfloat32mf2x6_t maskedoff_tuple, const float32_t *base, vuint32mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg6ei32_tum_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vfloat32m1x6_t test_vloxseg6ei32_v_f32m1x6_tum_ntl_PALL(vbool32_t mask, vfloat32m1x6_t maskedoff_tuple, const float32_t *base, vuint32m1_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg6ei32_tum_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vfloat64m1x6_t test_vloxseg6ei32_v_f64m1x6_tum_ntl_PALL(vbool64_t mask, vfloat64m1x6_t maskedoff_tuple, const float64_t *base, vuint32mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg6ei32_tum_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint8mf8x6_t test_vloxseg6ei32_v_i8mf8x6_tum_ntl_PALL(vbool64_t mask, vint8mf8x6_t maskedoff_tuple, const int8_t *base, vuint32mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg6ei32_tum_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint8mf4x6_t test_vloxseg6ei32_v_i8mf4x6_tum_ntl_PALL(vbool32_t mask, vint8mf4x6_t maskedoff_tuple, const int8_t *base, vuint32m1_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg6ei32_tum_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint8mf2x6_t test_vloxseg6ei32_v_i8mf2x6_tum_ntl_PALL(vbool16_t mask, vint8mf2x6_t maskedoff_tuple, const int8_t *base, vuint32m2_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg6ei32_tum_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint8m1x6_t test_vloxseg6ei32_v_i8m1x6_tum_ntl_PALL(vbool8_t mask, vint8m1x6_t maskedoff_tuple, const int8_t *base, vuint32m4_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg6ei32_tum_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint16mf4x6_t test_vloxseg6ei32_v_i16mf4x6_tum_ntl_PALL(vbool64_t mask, vint16mf4x6_t maskedoff_tuple, const int16_t *base, vuint32mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg6ei32_tum_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint16mf2x6_t test_vloxseg6ei32_v_i16mf2x6_tum_ntl_PALL(vbool32_t mask, vint16mf2x6_t maskedoff_tuple, const int16_t *base, vuint32m1_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg6ei32_tum_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint16m1x6_t test_vloxseg6ei32_v_i16m1x6_tum_ntl_PALL(vbool16_t mask, vint16m1x6_t maskedoff_tuple, const int16_t *base, vuint32m2_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg6ei32_tum_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint32mf2x6_t test_vloxseg6ei32_v_i32mf2x6_tum_ntl_PALL(vbool64_t mask, vint32mf2x6_t maskedoff_tuple, const int32_t *base, vuint32mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg6ei32_tum_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint32m1x6_t test_vloxseg6ei32_v_i32m1x6_tum_ntl_PALL(vbool32_t mask, vint32m1x6_t maskedoff_tuple, const int32_t *base, vuint32m1_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg6ei32_tum_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint64m1x6_t test_vloxseg6ei32_v_i64m1x6_tum_ntl_PALL(vbool64_t mask, vint64m1x6_t maskedoff_tuple, const int64_t *base, vuint32mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg6ei32_tum_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint8mf8x6_t test_vloxseg6ei32_v_u8mf8x6_tum_ntl_PALL(vbool64_t mask, vuint8mf8x6_t maskedoff_tuple, const uint8_t *base, vuint32mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg6ei32_tum_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint8mf4x6_t test_vloxseg6ei32_v_u8mf4x6_tum_ntl_PALL(vbool32_t mask, vuint8mf4x6_t maskedoff_tuple, const uint8_t *base, vuint32m1_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg6ei32_tum_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint8mf2x6_t test_vloxseg6ei32_v_u8mf2x6_tum_ntl_PALL(vbool16_t mask, vuint8mf2x6_t maskedoff_tuple, const uint8_t *base, vuint32m2_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg6ei32_tum_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint8m1x6_t test_vloxseg6ei32_v_u8m1x6_tum_ntl_PALL(vbool8_t mask, vuint8m1x6_t maskedoff_tuple, const uint8_t *base, vuint32m4_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg6ei32_tum_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint16mf4x6_t test_vloxseg6ei32_v_u16mf4x6_tum_ntl_PALL(vbool64_t mask, vuint16mf4x6_t maskedoff_tuple, const uint16_t *base, vuint32mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg6ei32_tum_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint16mf2x6_t test_vloxseg6ei32_v_u16mf2x6_tum_ntl_PALL(vbool32_t mask, vuint16mf2x6_t maskedoff_tuple, const uint16_t *base, vuint32m1_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg6ei32_tum_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint16m1x6_t test_vloxseg6ei32_v_u16m1x6_tum_ntl_PALL(vbool16_t mask, vuint16m1x6_t maskedoff_tuple, const uint16_t *base, vuint32m2_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg6ei32_tum_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint32mf2x6_t test_vloxseg6ei32_v_u32mf2x6_tum_ntl_PALL(vbool64_t mask, vuint32mf2x6_t maskedoff_tuple, const uint32_t *base, vuint32mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg6ei32_tum_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint32m1x6_t test_vloxseg6ei32_v_u32m1x6_tum_ntl_PALL(vbool32_t mask, vuint32m1x6_t maskedoff_tuple, const uint32_t *base, vuint32m1_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg6ei32_tum_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint64m1x6_t test_vloxseg6ei32_v_u64m1x6_tum_ntl_PALL(vbool64_t mask, vuint64m1x6_t maskedoff_tuple, const uint64_t *base, vuint32mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg6ei32_tum_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vfloat16mf4x6_t test_vloxseg6ei32_v_f16mf4x6_tumu_ntl_PALL(vbool64_t mask, vfloat16mf4x6_t maskedoff_tuple, const float16_t *base, vuint32mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg6ei32_tumu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vfloat16mf2x6_t test_vloxseg6ei32_v_f16mf2x6_tumu_ntl_PALL(vbool32_t mask, vfloat16mf2x6_t maskedoff_tuple, const float16_t *base, vuint32m1_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg6ei32_tumu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vfloat16m1x6_t test_vloxseg6ei32_v_f16m1x6_tumu_ntl_PALL(vbool16_t mask, vfloat16m1x6_t maskedoff_tuple, const float16_t *base, vuint32m2_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg6ei32_tumu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vfloat32mf2x6_t test_vloxseg6ei32_v_f32mf2x6_tumu_ntl_PALL(vbool64_t mask, vfloat32mf2x6_t maskedoff_tuple, const float32_t *base, vuint32mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg6ei32_tumu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vfloat32m1x6_t test_vloxseg6ei32_v_f32m1x6_tumu_ntl_PALL(vbool32_t mask, vfloat32m1x6_t maskedoff_tuple, const float32_t *base, vuint32m1_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg6ei32_tumu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vfloat64m1x6_t test_vloxseg6ei32_v_f64m1x6_tumu_ntl_PALL(vbool64_t mask, vfloat64m1x6_t maskedoff_tuple, const float64_t *base, vuint32mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg6ei32_tumu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint8mf8x6_t test_vloxseg6ei32_v_i8mf8x6_tumu_ntl_PALL(vbool64_t mask, vint8mf8x6_t maskedoff_tuple, const int8_t *base, vuint32mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg6ei32_tumu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint8mf4x6_t test_vloxseg6ei32_v_i8mf4x6_tumu_ntl_PALL(vbool32_t mask, vint8mf4x6_t maskedoff_tuple, const int8_t *base, vuint32m1_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg6ei32_tumu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint8mf2x6_t test_vloxseg6ei32_v_i8mf2x6_tumu_ntl_PALL(vbool16_t mask, vint8mf2x6_t maskedoff_tuple, const int8_t *base, vuint32m2_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg6ei32_tumu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint8m1x6_t test_vloxseg6ei32_v_i8m1x6_tumu_ntl_PALL(vbool8_t mask, vint8m1x6_t maskedoff_tuple, const int8_t *base, vuint32m4_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg6ei32_tumu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint16mf4x6_t test_vloxseg6ei32_v_i16mf4x6_tumu_ntl_PALL(vbool64_t mask, vint16mf4x6_t maskedoff_tuple, const int16_t *base, vuint32mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg6ei32_tumu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint16mf2x6_t test_vloxseg6ei32_v_i16mf2x6_tumu_ntl_PALL(vbool32_t mask, vint16mf2x6_t maskedoff_tuple, const int16_t *base, vuint32m1_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg6ei32_tumu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint16m1x6_t test_vloxseg6ei32_v_i16m1x6_tumu_ntl_PALL(vbool16_t mask, vint16m1x6_t maskedoff_tuple, const int16_t *base, vuint32m2_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg6ei32_tumu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint32mf2x6_t test_vloxseg6ei32_v_i32mf2x6_tumu_ntl_PALL(vbool64_t mask, vint32mf2x6_t maskedoff_tuple, const int32_t *base, vuint32mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg6ei32_tumu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint32m1x6_t test_vloxseg6ei32_v_i32m1x6_tumu_ntl_PALL(vbool32_t mask, vint32m1x6_t maskedoff_tuple, const int32_t *base, vuint32m1_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg6ei32_tumu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint64m1x6_t test_vloxseg6ei32_v_i64m1x6_tumu_ntl_PALL(vbool64_t mask, vint64m1x6_t maskedoff_tuple, const int64_t *base, vuint32mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg6ei32_tumu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint8mf8x6_t test_vloxseg6ei32_v_u8mf8x6_tumu_ntl_PALL(vbool64_t mask, vuint8mf8x6_t maskedoff_tuple, const uint8_t *base, vuint32mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg6ei32_tumu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint8mf4x6_t test_vloxseg6ei32_v_u8mf4x6_tumu_ntl_PALL(vbool32_t mask, vuint8mf4x6_t maskedoff_tuple, const uint8_t *base, vuint32m1_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg6ei32_tumu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint8mf2x6_t test_vloxseg6ei32_v_u8mf2x6_tumu_ntl_PALL(vbool16_t mask, vuint8mf2x6_t maskedoff_tuple, const uint8_t *base, vuint32m2_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg6ei32_tumu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint8m1x6_t test_vloxseg6ei32_v_u8m1x6_tumu_ntl_PALL(vbool8_t mask, vuint8m1x6_t maskedoff_tuple, const uint8_t *base, vuint32m4_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg6ei32_tumu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint16mf4x6_t test_vloxseg6ei32_v_u16mf4x6_tumu_ntl_PALL(vbool64_t mask, vuint16mf4x6_t maskedoff_tuple, const uint16_t *base, vuint32mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg6ei32_tumu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint16mf2x6_t test_vloxseg6ei32_v_u16mf2x6_tumu_ntl_PALL(vbool32_t mask, vuint16mf2x6_t maskedoff_tuple, const uint16_t *base, vuint32m1_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg6ei32_tumu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint16m1x6_t test_vloxseg6ei32_v_u16m1x6_tumu_ntl_PALL(vbool16_t mask, vuint16m1x6_t maskedoff_tuple, const uint16_t *base, vuint32m2_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg6ei32_tumu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint32mf2x6_t test_vloxseg6ei32_v_u32mf2x6_tumu_ntl_PALL(vbool64_t mask, vuint32mf2x6_t maskedoff_tuple, const uint32_t *base, vuint32mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg6ei32_tumu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint32m1x6_t test_vloxseg6ei32_v_u32m1x6_tumu_ntl_PALL(vbool32_t mask, vuint32m1x6_t maskedoff_tuple, const uint32_t *base, vuint32m1_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg6ei32_tumu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint64m1x6_t test_vloxseg6ei32_v_u64m1x6_tumu_ntl_PALL(vbool64_t mask, vuint64m1x6_t maskedoff_tuple, const uint64_t *base, vuint32mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg6ei32_tumu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vfloat16mf4x6_t test_vloxseg6ei32_v_f16mf4x6_mu_ntl_PALL(vbool64_t mask, vfloat16mf4x6_t maskedoff_tuple, const float16_t *base, vuint32mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg6ei32_mu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vfloat16mf2x6_t test_vloxseg6ei32_v_f16mf2x6_mu_ntl_PALL(vbool32_t mask, vfloat16mf2x6_t maskedoff_tuple, const float16_t *base, vuint32m1_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg6ei32_mu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vfloat16m1x6_t test_vloxseg6ei32_v_f16m1x6_mu_ntl_PALL(vbool16_t mask, vfloat16m1x6_t maskedoff_tuple, const float16_t *base, vuint32m2_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg6ei32_mu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vfloat32mf2x6_t test_vloxseg6ei32_v_f32mf2x6_mu_ntl_PALL(vbool64_t mask, vfloat32mf2x6_t maskedoff_tuple, const float32_t *base, vuint32mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg6ei32_mu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vfloat32m1x6_t test_vloxseg6ei32_v_f32m1x6_mu_ntl_PALL(vbool32_t mask, vfloat32m1x6_t maskedoff_tuple, const float32_t *base, vuint32m1_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg6ei32_mu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vfloat64m1x6_t test_vloxseg6ei32_v_f64m1x6_mu_ntl_PALL(vbool64_t mask, vfloat64m1x6_t maskedoff_tuple, const float64_t *base, vuint32mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg6ei32_mu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint8mf8x6_t test_vloxseg6ei32_v_i8mf8x6_mu_ntl_PALL(vbool64_t mask, vint8mf8x6_t maskedoff_tuple, const int8_t *base, vuint32mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg6ei32_mu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint8mf4x6_t test_vloxseg6ei32_v_i8mf4x6_mu_ntl_PALL(vbool32_t mask, vint8mf4x6_t maskedoff_tuple, const int8_t *base, vuint32m1_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg6ei32_mu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint8mf2x6_t test_vloxseg6ei32_v_i8mf2x6_mu_ntl_PALL(vbool16_t mask, vint8mf2x6_t maskedoff_tuple, const int8_t *base, vuint32m2_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg6ei32_mu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint8m1x6_t test_vloxseg6ei32_v_i8m1x6_mu_ntl_PALL(vbool8_t mask, vint8m1x6_t maskedoff_tuple, const int8_t *base, vuint32m4_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg6ei32_mu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint16mf4x6_t test_vloxseg6ei32_v_i16mf4x6_mu_ntl_PALL(vbool64_t mask, vint16mf4x6_t maskedoff_tuple, const int16_t *base, vuint32mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg6ei32_mu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint16mf2x6_t test_vloxseg6ei32_v_i16mf2x6_mu_ntl_PALL(vbool32_t mask, vint16mf2x6_t maskedoff_tuple, const int16_t *base, vuint32m1_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg6ei32_mu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint16m1x6_t test_vloxseg6ei32_v_i16m1x6_mu_ntl_PALL(vbool16_t mask, vint16m1x6_t maskedoff_tuple, const int16_t *base, vuint32m2_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg6ei32_mu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint32mf2x6_t test_vloxseg6ei32_v_i32mf2x6_mu_ntl_PALL(vbool64_t mask, vint32mf2x6_t maskedoff_tuple, const int32_t *base, vuint32mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg6ei32_mu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint32m1x6_t test_vloxseg6ei32_v_i32m1x6_mu_ntl_PALL(vbool32_t mask, vint32m1x6_t maskedoff_tuple, const int32_t *base, vuint32m1_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg6ei32_mu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint64m1x6_t test_vloxseg6ei32_v_i64m1x6_mu_ntl_PALL(vbool64_t mask, vint64m1x6_t maskedoff_tuple, const int64_t *base, vuint32mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg6ei32_mu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint8mf8x6_t test_vloxseg6ei32_v_u8mf8x6_mu_ntl_PALL(vbool64_t mask, vuint8mf8x6_t maskedoff_tuple, const uint8_t *base, vuint32mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg6ei32_mu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint8mf4x6_t test_vloxseg6ei32_v_u8mf4x6_mu_ntl_PALL(vbool32_t mask, vuint8mf4x6_t maskedoff_tuple, const uint8_t *base, vuint32m1_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg6ei32_mu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint8mf2x6_t test_vloxseg6ei32_v_u8mf2x6_mu_ntl_PALL(vbool16_t mask, vuint8mf2x6_t maskedoff_tuple, const uint8_t *base, vuint32m2_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg6ei32_mu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint8m1x6_t test_vloxseg6ei32_v_u8m1x6_mu_ntl_PALL(vbool8_t mask, vuint8m1x6_t maskedoff_tuple, const uint8_t *base, vuint32m4_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg6ei32_mu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint16mf4x6_t test_vloxseg6ei32_v_u16mf4x6_mu_ntl_PALL(vbool64_t mask, vuint16mf4x6_t maskedoff_tuple, const uint16_t *base, vuint32mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg6ei32_mu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint16mf2x6_t test_vloxseg6ei32_v_u16mf2x6_mu_ntl_PALL(vbool32_t mask, vuint16mf2x6_t maskedoff_tuple, const uint16_t *base, vuint32m1_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg6ei32_mu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint16m1x6_t test_vloxseg6ei32_v_u16m1x6_mu_ntl_PALL(vbool16_t mask, vuint16m1x6_t maskedoff_tuple, const uint16_t *base, vuint32m2_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg6ei32_mu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint32mf2x6_t test_vloxseg6ei32_v_u32mf2x6_mu_ntl_PALL(vbool64_t mask, vuint32mf2x6_t maskedoff_tuple, const uint32_t *base, vuint32mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg6ei32_mu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint32m1x6_t test_vloxseg6ei32_v_u32m1x6_mu_ntl_PALL(vbool32_t mask, vuint32m1x6_t maskedoff_tuple, const uint32_t *base, vuint32m1_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg6ei32_mu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint64m1x6_t test_vloxseg6ei32_v_u64m1x6_mu_ntl_PALL(vbool64_t mask, vuint64m1x6_t maskedoff_tuple, const uint64_t *base, vuint32mf2_t bindex, size_t vl, int domain) {
  return __riscv_vloxseg6ei32_mu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

