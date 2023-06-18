// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -target-feature +zfh \
// RUN:   -target-feature +experimental-zvfh -disable-O0-optnone  \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

#include <riscv_ntlh.h>

vfloat16mf4x4_t test_vluxseg4ei32_v_f16mf4x4_tu_ntl_ALL(vfloat16mf4x4_t maskedoff_tuple, const _Float16 *base, vuint32mf2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg4ei32_tu_ntl(maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vfloat16mf2x4_t test_vluxseg4ei32_v_f16mf2x4_tu_ntl_ALL(vfloat16mf2x4_t maskedoff_tuple, const _Float16 *base, vuint32m1_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg4ei32_tu_ntl(maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vfloat16m1x4_t test_vluxseg4ei32_v_f16m1x4_tu_ntl_ALL(vfloat16m1x4_t maskedoff_tuple, const _Float16 *base, vuint32m2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg4ei32_tu_ntl(maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vfloat16m2x4_t test_vluxseg4ei32_v_f16m2x4_tu_ntl_ALL(vfloat16m2x4_t maskedoff_tuple, const _Float16 *base, vuint32m4_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg4ei32_tu_ntl(maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vfloat32mf2x4_t test_vluxseg4ei32_v_f32mf2x4_tu_ntl_ALL(vfloat32mf2x4_t maskedoff_tuple, const float *base, vuint32mf2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg4ei32_tu_ntl(maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vfloat32m1x4_t test_vluxseg4ei32_v_f32m1x4_tu_ntl_ALL(vfloat32m1x4_t maskedoff_tuple, const float *base, vuint32m1_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg4ei32_tu_ntl(maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vfloat32m2x4_t test_vluxseg4ei32_v_f32m2x4_tu_ntl_ALL(vfloat32m2x4_t maskedoff_tuple, const float *base, vuint32m2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg4ei32_tu_ntl(maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vfloat64m1x4_t test_vluxseg4ei32_v_f64m1x4_tu_ntl_ALL(vfloat64m1x4_t maskedoff_tuple, const double *base, vuint32mf2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg4ei32_tu_ntl(maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vfloat64m2x4_t test_vluxseg4ei32_v_f64m2x4_tu_ntl_ALL(vfloat64m2x4_t maskedoff_tuple, const double *base, vuint32m1_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg4ei32_tu_ntl(maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vint8mf8x4_t test_vluxseg4ei32_v_i8mf8x4_tu_ntl_ALL(vint8mf8x4_t maskedoff_tuple, const int8_t *base, vuint32mf2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg4ei32_tu_ntl(maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vint8mf4x4_t test_vluxseg4ei32_v_i8mf4x4_tu_ntl_ALL(vint8mf4x4_t maskedoff_tuple, const int8_t *base, vuint32m1_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg4ei32_tu_ntl(maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vint8mf2x4_t test_vluxseg4ei32_v_i8mf2x4_tu_ntl_ALL(vint8mf2x4_t maskedoff_tuple, const int8_t *base, vuint32m2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg4ei32_tu_ntl(maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vint8m1x4_t test_vluxseg4ei32_v_i8m1x4_tu_ntl_ALL(vint8m1x4_t maskedoff_tuple, const int8_t *base, vuint32m4_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg4ei32_tu_ntl(maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vint8m2x4_t test_vluxseg4ei32_v_i8m2x4_tu_ntl_ALL(vint8m2x4_t maskedoff_tuple, const int8_t *base, vuint32m8_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg4ei32_tu_ntl(maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vint16mf4x4_t test_vluxseg4ei32_v_i16mf4x4_tu_ntl_ALL(vint16mf4x4_t maskedoff_tuple, const int16_t *base, vuint32mf2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg4ei32_tu_ntl(maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vint16mf2x4_t test_vluxseg4ei32_v_i16mf2x4_tu_ntl_ALL(vint16mf2x4_t maskedoff_tuple, const int16_t *base, vuint32m1_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg4ei32_tu_ntl(maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vint16m1x4_t test_vluxseg4ei32_v_i16m1x4_tu_ntl_ALL(vint16m1x4_t maskedoff_tuple, const int16_t *base, vuint32m2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg4ei32_tu_ntl(maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vint16m2x4_t test_vluxseg4ei32_v_i16m2x4_tu_ntl_ALL(vint16m2x4_t maskedoff_tuple, const int16_t *base, vuint32m4_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg4ei32_tu_ntl(maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vint32mf2x4_t test_vluxseg4ei32_v_i32mf2x4_tu_ntl_ALL(vint32mf2x4_t maskedoff_tuple, const int32_t *base, vuint32mf2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg4ei32_tu_ntl(maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vint32m1x4_t test_vluxseg4ei32_v_i32m1x4_tu_ntl_ALL(vint32m1x4_t maskedoff_tuple, const int32_t *base, vuint32m1_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg4ei32_tu_ntl(maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vint32m2x4_t test_vluxseg4ei32_v_i32m2x4_tu_ntl_ALL(vint32m2x4_t maskedoff_tuple, const int32_t *base, vuint32m2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg4ei32_tu_ntl(maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vint64m1x4_t test_vluxseg4ei32_v_i64m1x4_tu_ntl_ALL(vint64m1x4_t maskedoff_tuple, const int64_t *base, vuint32mf2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg4ei32_tu_ntl(maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vint64m2x4_t test_vluxseg4ei32_v_i64m2x4_tu_ntl_ALL(vint64m2x4_t maskedoff_tuple, const int64_t *base, vuint32m1_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg4ei32_tu_ntl(maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint8mf8x4_t test_vluxseg4ei32_v_u8mf8x4_tu_ntl_ALL(vuint8mf8x4_t maskedoff_tuple, const uint8_t *base, vuint32mf2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg4ei32_tu_ntl(maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint8mf4x4_t test_vluxseg4ei32_v_u8mf4x4_tu_ntl_ALL(vuint8mf4x4_t maskedoff_tuple, const uint8_t *base, vuint32m1_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg4ei32_tu_ntl(maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint8mf2x4_t test_vluxseg4ei32_v_u8mf2x4_tu_ntl_ALL(vuint8mf2x4_t maskedoff_tuple, const uint8_t *base, vuint32m2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg4ei32_tu_ntl(maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint8m1x4_t test_vluxseg4ei32_v_u8m1x4_tu_ntl_ALL(vuint8m1x4_t maskedoff_tuple, const uint8_t *base, vuint32m4_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg4ei32_tu_ntl(maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint8m2x4_t test_vluxseg4ei32_v_u8m2x4_tu_ntl_ALL(vuint8m2x4_t maskedoff_tuple, const uint8_t *base, vuint32m8_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg4ei32_tu_ntl(maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint16mf4x4_t test_vluxseg4ei32_v_u16mf4x4_tu_ntl_ALL(vuint16mf4x4_t maskedoff_tuple, const uint16_t *base, vuint32mf2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg4ei32_tu_ntl(maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint16mf2x4_t test_vluxseg4ei32_v_u16mf2x4_tu_ntl_ALL(vuint16mf2x4_t maskedoff_tuple, const uint16_t *base, vuint32m1_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg4ei32_tu_ntl(maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint16m1x4_t test_vluxseg4ei32_v_u16m1x4_tu_ntl_ALL(vuint16m1x4_t maskedoff_tuple, const uint16_t *base, vuint32m2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg4ei32_tu_ntl(maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint16m2x4_t test_vluxseg4ei32_v_u16m2x4_tu_ntl_ALL(vuint16m2x4_t maskedoff_tuple, const uint16_t *base, vuint32m4_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg4ei32_tu_ntl(maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint32mf2x4_t test_vluxseg4ei32_v_u32mf2x4_tu_ntl_ALL(vuint32mf2x4_t maskedoff_tuple, const uint32_t *base, vuint32mf2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg4ei32_tu_ntl(maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint32m1x4_t test_vluxseg4ei32_v_u32m1x4_tu_ntl_ALL(vuint32m1x4_t maskedoff_tuple, const uint32_t *base, vuint32m1_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg4ei32_tu_ntl(maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint32m2x4_t test_vluxseg4ei32_v_u32m2x4_tu_ntl_ALL(vuint32m2x4_t maskedoff_tuple, const uint32_t *base, vuint32m2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg4ei32_tu_ntl(maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint64m1x4_t test_vluxseg4ei32_v_u64m1x4_tu_ntl_ALL(vuint64m1x4_t maskedoff_tuple, const uint64_t *base, vuint32mf2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg4ei32_tu_ntl(maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint64m2x4_t test_vluxseg4ei32_v_u64m2x4_tu_ntl_ALL(vuint64m2x4_t maskedoff_tuple, const uint64_t *base, vuint32m1_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg4ei32_tu_ntl(maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vfloat16mf4x4_t test_vluxseg4ei32_v_f16mf4x4_tum_ntl_ALL(vbool64_t mask, vfloat16mf4x4_t maskedoff_tuple, const _Float16 *base, vuint32mf2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg4ei32_tum_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vfloat16mf2x4_t test_vluxseg4ei32_v_f16mf2x4_tum_ntl_ALL(vbool32_t mask, vfloat16mf2x4_t maskedoff_tuple, const _Float16 *base, vuint32m1_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg4ei32_tum_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vfloat16m1x4_t test_vluxseg4ei32_v_f16m1x4_tum_ntl_ALL(vbool16_t mask, vfloat16m1x4_t maskedoff_tuple, const _Float16 *base, vuint32m2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg4ei32_tum_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vfloat16m2x4_t test_vluxseg4ei32_v_f16m2x4_tum_ntl_ALL(vbool8_t mask, vfloat16m2x4_t maskedoff_tuple, const _Float16 *base, vuint32m4_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg4ei32_tum_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vfloat32mf2x4_t test_vluxseg4ei32_v_f32mf2x4_tum_ntl_ALL(vbool64_t mask, vfloat32mf2x4_t maskedoff_tuple, const float *base, vuint32mf2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg4ei32_tum_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vfloat32m1x4_t test_vluxseg4ei32_v_f32m1x4_tum_ntl_ALL(vbool32_t mask, vfloat32m1x4_t maskedoff_tuple, const float *base, vuint32m1_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg4ei32_tum_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vfloat32m2x4_t test_vluxseg4ei32_v_f32m2x4_tum_ntl_ALL(vbool16_t mask, vfloat32m2x4_t maskedoff_tuple, const float *base, vuint32m2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg4ei32_tum_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vfloat64m1x4_t test_vluxseg4ei32_v_f64m1x4_tum_ntl_ALL(vbool64_t mask, vfloat64m1x4_t maskedoff_tuple, const double *base, vuint32mf2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg4ei32_tum_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vfloat64m2x4_t test_vluxseg4ei32_v_f64m2x4_tum_ntl_ALL(vbool32_t mask, vfloat64m2x4_t maskedoff_tuple, const double *base, vuint32m1_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg4ei32_tum_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vint8mf8x4_t test_vluxseg4ei32_v_i8mf8x4_tum_ntl_ALL(vbool64_t mask, vint8mf8x4_t maskedoff_tuple, const int8_t *base, vuint32mf2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg4ei32_tum_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vint8mf4x4_t test_vluxseg4ei32_v_i8mf4x4_tum_ntl_ALL(vbool32_t mask, vint8mf4x4_t maskedoff_tuple, const int8_t *base, vuint32m1_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg4ei32_tum_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vint8mf2x4_t test_vluxseg4ei32_v_i8mf2x4_tum_ntl_ALL(vbool16_t mask, vint8mf2x4_t maskedoff_tuple, const int8_t *base, vuint32m2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg4ei32_tum_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vint8m1x4_t test_vluxseg4ei32_v_i8m1x4_tum_ntl_ALL(vbool8_t mask, vint8m1x4_t maskedoff_tuple, const int8_t *base, vuint32m4_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg4ei32_tum_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vint8m2x4_t test_vluxseg4ei32_v_i8m2x4_tum_ntl_ALL(vbool4_t mask, vint8m2x4_t maskedoff_tuple, const int8_t *base, vuint32m8_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg4ei32_tum_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vint16mf4x4_t test_vluxseg4ei32_v_i16mf4x4_tum_ntl_ALL(vbool64_t mask, vint16mf4x4_t maskedoff_tuple, const int16_t *base, vuint32mf2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg4ei32_tum_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vint16mf2x4_t test_vluxseg4ei32_v_i16mf2x4_tum_ntl_ALL(vbool32_t mask, vint16mf2x4_t maskedoff_tuple, const int16_t *base, vuint32m1_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg4ei32_tum_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vint16m1x4_t test_vluxseg4ei32_v_i16m1x4_tum_ntl_ALL(vbool16_t mask, vint16m1x4_t maskedoff_tuple, const int16_t *base, vuint32m2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg4ei32_tum_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vint16m2x4_t test_vluxseg4ei32_v_i16m2x4_tum_ntl_ALL(vbool8_t mask, vint16m2x4_t maskedoff_tuple, const int16_t *base, vuint32m4_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg4ei32_tum_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vint32mf2x4_t test_vluxseg4ei32_v_i32mf2x4_tum_ntl_ALL(vbool64_t mask, vint32mf2x4_t maskedoff_tuple, const int32_t *base, vuint32mf2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg4ei32_tum_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vint32m1x4_t test_vluxseg4ei32_v_i32m1x4_tum_ntl_ALL(vbool32_t mask, vint32m1x4_t maskedoff_tuple, const int32_t *base, vuint32m1_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg4ei32_tum_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vint32m2x4_t test_vluxseg4ei32_v_i32m2x4_tum_ntl_ALL(vbool16_t mask, vint32m2x4_t maskedoff_tuple, const int32_t *base, vuint32m2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg4ei32_tum_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vint64m1x4_t test_vluxseg4ei32_v_i64m1x4_tum_ntl_ALL(vbool64_t mask, vint64m1x4_t maskedoff_tuple, const int64_t *base, vuint32mf2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg4ei32_tum_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vint64m2x4_t test_vluxseg4ei32_v_i64m2x4_tum_ntl_ALL(vbool32_t mask, vint64m2x4_t maskedoff_tuple, const int64_t *base, vuint32m1_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg4ei32_tum_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint8mf8x4_t test_vluxseg4ei32_v_u8mf8x4_tum_ntl_ALL(vbool64_t mask, vuint8mf8x4_t maskedoff_tuple, const uint8_t *base, vuint32mf2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg4ei32_tum_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint8mf4x4_t test_vluxseg4ei32_v_u8mf4x4_tum_ntl_ALL(vbool32_t mask, vuint8mf4x4_t maskedoff_tuple, const uint8_t *base, vuint32m1_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg4ei32_tum_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint8mf2x4_t test_vluxseg4ei32_v_u8mf2x4_tum_ntl_ALL(vbool16_t mask, vuint8mf2x4_t maskedoff_tuple, const uint8_t *base, vuint32m2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg4ei32_tum_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint8m1x4_t test_vluxseg4ei32_v_u8m1x4_tum_ntl_ALL(vbool8_t mask, vuint8m1x4_t maskedoff_tuple, const uint8_t *base, vuint32m4_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg4ei32_tum_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint8m2x4_t test_vluxseg4ei32_v_u8m2x4_tum_ntl_ALL(vbool4_t mask, vuint8m2x4_t maskedoff_tuple, const uint8_t *base, vuint32m8_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg4ei32_tum_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint16mf4x4_t test_vluxseg4ei32_v_u16mf4x4_tum_ntl_ALL(vbool64_t mask, vuint16mf4x4_t maskedoff_tuple, const uint16_t *base, vuint32mf2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg4ei32_tum_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint16mf2x4_t test_vluxseg4ei32_v_u16mf2x4_tum_ntl_ALL(vbool32_t mask, vuint16mf2x4_t maskedoff_tuple, const uint16_t *base, vuint32m1_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg4ei32_tum_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint16m1x4_t test_vluxseg4ei32_v_u16m1x4_tum_ntl_ALL(vbool16_t mask, vuint16m1x4_t maskedoff_tuple, const uint16_t *base, vuint32m2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg4ei32_tum_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint16m2x4_t test_vluxseg4ei32_v_u16m2x4_tum_ntl_ALL(vbool8_t mask, vuint16m2x4_t maskedoff_tuple, const uint16_t *base, vuint32m4_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg4ei32_tum_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint32mf2x4_t test_vluxseg4ei32_v_u32mf2x4_tum_ntl_ALL(vbool64_t mask, vuint32mf2x4_t maskedoff_tuple, const uint32_t *base, vuint32mf2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg4ei32_tum_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint32m1x4_t test_vluxseg4ei32_v_u32m1x4_tum_ntl_ALL(vbool32_t mask, vuint32m1x4_t maskedoff_tuple, const uint32_t *base, vuint32m1_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg4ei32_tum_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint32m2x4_t test_vluxseg4ei32_v_u32m2x4_tum_ntl_ALL(vbool16_t mask, vuint32m2x4_t maskedoff_tuple, const uint32_t *base, vuint32m2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg4ei32_tum_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint64m1x4_t test_vluxseg4ei32_v_u64m1x4_tum_ntl_ALL(vbool64_t mask, vuint64m1x4_t maskedoff_tuple, const uint64_t *base, vuint32mf2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg4ei32_tum_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint64m2x4_t test_vluxseg4ei32_v_u64m2x4_tum_ntl_ALL(vbool32_t mask, vuint64m2x4_t maskedoff_tuple, const uint64_t *base, vuint32m1_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg4ei32_tum_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vfloat16mf4x4_t test_vluxseg4ei32_v_f16mf4x4_tumu_ntl_ALL(vbool64_t mask, vfloat16mf4x4_t maskedoff_tuple, const _Float16 *base, vuint32mf2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg4ei32_tumu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vfloat16mf2x4_t test_vluxseg4ei32_v_f16mf2x4_tumu_ntl_ALL(vbool32_t mask, vfloat16mf2x4_t maskedoff_tuple, const _Float16 *base, vuint32m1_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg4ei32_tumu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vfloat16m1x4_t test_vluxseg4ei32_v_f16m1x4_tumu_ntl_ALL(vbool16_t mask, vfloat16m1x4_t maskedoff_tuple, const _Float16 *base, vuint32m2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg4ei32_tumu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vfloat16m2x4_t test_vluxseg4ei32_v_f16m2x4_tumu_ntl_ALL(vbool8_t mask, vfloat16m2x4_t maskedoff_tuple, const _Float16 *base, vuint32m4_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg4ei32_tumu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vfloat32mf2x4_t test_vluxseg4ei32_v_f32mf2x4_tumu_ntl_ALL(vbool64_t mask, vfloat32mf2x4_t maskedoff_tuple, const float *base, vuint32mf2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg4ei32_tumu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vfloat32m1x4_t test_vluxseg4ei32_v_f32m1x4_tumu_ntl_ALL(vbool32_t mask, vfloat32m1x4_t maskedoff_tuple, const float *base, vuint32m1_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg4ei32_tumu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vfloat32m2x4_t test_vluxseg4ei32_v_f32m2x4_tumu_ntl_ALL(vbool16_t mask, vfloat32m2x4_t maskedoff_tuple, const float *base, vuint32m2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg4ei32_tumu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vfloat64m1x4_t test_vluxseg4ei32_v_f64m1x4_tumu_ntl_ALL(vbool64_t mask, vfloat64m1x4_t maskedoff_tuple, const double *base, vuint32mf2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg4ei32_tumu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vfloat64m2x4_t test_vluxseg4ei32_v_f64m2x4_tumu_ntl_ALL(vbool32_t mask, vfloat64m2x4_t maskedoff_tuple, const double *base, vuint32m1_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg4ei32_tumu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vint8mf8x4_t test_vluxseg4ei32_v_i8mf8x4_tumu_ntl_ALL(vbool64_t mask, vint8mf8x4_t maskedoff_tuple, const int8_t *base, vuint32mf2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg4ei32_tumu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vint8mf4x4_t test_vluxseg4ei32_v_i8mf4x4_tumu_ntl_ALL(vbool32_t mask, vint8mf4x4_t maskedoff_tuple, const int8_t *base, vuint32m1_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg4ei32_tumu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vint8mf2x4_t test_vluxseg4ei32_v_i8mf2x4_tumu_ntl_ALL(vbool16_t mask, vint8mf2x4_t maskedoff_tuple, const int8_t *base, vuint32m2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg4ei32_tumu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vint8m1x4_t test_vluxseg4ei32_v_i8m1x4_tumu_ntl_ALL(vbool8_t mask, vint8m1x4_t maskedoff_tuple, const int8_t *base, vuint32m4_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg4ei32_tumu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vint8m2x4_t test_vluxseg4ei32_v_i8m2x4_tumu_ntl_ALL(vbool4_t mask, vint8m2x4_t maskedoff_tuple, const int8_t *base, vuint32m8_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg4ei32_tumu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vint16mf4x4_t test_vluxseg4ei32_v_i16mf4x4_tumu_ntl_ALL(vbool64_t mask, vint16mf4x4_t maskedoff_tuple, const int16_t *base, vuint32mf2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg4ei32_tumu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vint16mf2x4_t test_vluxseg4ei32_v_i16mf2x4_tumu_ntl_ALL(vbool32_t mask, vint16mf2x4_t maskedoff_tuple, const int16_t *base, vuint32m1_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg4ei32_tumu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vint16m1x4_t test_vluxseg4ei32_v_i16m1x4_tumu_ntl_ALL(vbool16_t mask, vint16m1x4_t maskedoff_tuple, const int16_t *base, vuint32m2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg4ei32_tumu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vint16m2x4_t test_vluxseg4ei32_v_i16m2x4_tumu_ntl_ALL(vbool8_t mask, vint16m2x4_t maskedoff_tuple, const int16_t *base, vuint32m4_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg4ei32_tumu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vint32mf2x4_t test_vluxseg4ei32_v_i32mf2x4_tumu_ntl_ALL(vbool64_t mask, vint32mf2x4_t maskedoff_tuple, const int32_t *base, vuint32mf2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg4ei32_tumu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vint32m1x4_t test_vluxseg4ei32_v_i32m1x4_tumu_ntl_ALL(vbool32_t mask, vint32m1x4_t maskedoff_tuple, const int32_t *base, vuint32m1_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg4ei32_tumu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vint32m2x4_t test_vluxseg4ei32_v_i32m2x4_tumu_ntl_ALL(vbool16_t mask, vint32m2x4_t maskedoff_tuple, const int32_t *base, vuint32m2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg4ei32_tumu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vint64m1x4_t test_vluxseg4ei32_v_i64m1x4_tumu_ntl_ALL(vbool64_t mask, vint64m1x4_t maskedoff_tuple, const int64_t *base, vuint32mf2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg4ei32_tumu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vint64m2x4_t test_vluxseg4ei32_v_i64m2x4_tumu_ntl_ALL(vbool32_t mask, vint64m2x4_t maskedoff_tuple, const int64_t *base, vuint32m1_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg4ei32_tumu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint8mf8x4_t test_vluxseg4ei32_v_u8mf8x4_tumu_ntl_ALL(vbool64_t mask, vuint8mf8x4_t maskedoff_tuple, const uint8_t *base, vuint32mf2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg4ei32_tumu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint8mf4x4_t test_vluxseg4ei32_v_u8mf4x4_tumu_ntl_ALL(vbool32_t mask, vuint8mf4x4_t maskedoff_tuple, const uint8_t *base, vuint32m1_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg4ei32_tumu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint8mf2x4_t test_vluxseg4ei32_v_u8mf2x4_tumu_ntl_ALL(vbool16_t mask, vuint8mf2x4_t maskedoff_tuple, const uint8_t *base, vuint32m2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg4ei32_tumu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint8m1x4_t test_vluxseg4ei32_v_u8m1x4_tumu_ntl_ALL(vbool8_t mask, vuint8m1x4_t maskedoff_tuple, const uint8_t *base, vuint32m4_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg4ei32_tumu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint8m2x4_t test_vluxseg4ei32_v_u8m2x4_tumu_ntl_ALL(vbool4_t mask, vuint8m2x4_t maskedoff_tuple, const uint8_t *base, vuint32m8_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg4ei32_tumu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint16mf4x4_t test_vluxseg4ei32_v_u16mf4x4_tumu_ntl_ALL(vbool64_t mask, vuint16mf4x4_t maskedoff_tuple, const uint16_t *base, vuint32mf2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg4ei32_tumu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint16mf2x4_t test_vluxseg4ei32_v_u16mf2x4_tumu_ntl_ALL(vbool32_t mask, vuint16mf2x4_t maskedoff_tuple, const uint16_t *base, vuint32m1_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg4ei32_tumu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint16m1x4_t test_vluxseg4ei32_v_u16m1x4_tumu_ntl_ALL(vbool16_t mask, vuint16m1x4_t maskedoff_tuple, const uint16_t *base, vuint32m2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg4ei32_tumu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint16m2x4_t test_vluxseg4ei32_v_u16m2x4_tumu_ntl_ALL(vbool8_t mask, vuint16m2x4_t maskedoff_tuple, const uint16_t *base, vuint32m4_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg4ei32_tumu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint32mf2x4_t test_vluxseg4ei32_v_u32mf2x4_tumu_ntl_ALL(vbool64_t mask, vuint32mf2x4_t maskedoff_tuple, const uint32_t *base, vuint32mf2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg4ei32_tumu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint32m1x4_t test_vluxseg4ei32_v_u32m1x4_tumu_ntl_ALL(vbool32_t mask, vuint32m1x4_t maskedoff_tuple, const uint32_t *base, vuint32m1_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg4ei32_tumu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint32m2x4_t test_vluxseg4ei32_v_u32m2x4_tumu_ntl_ALL(vbool16_t mask, vuint32m2x4_t maskedoff_tuple, const uint32_t *base, vuint32m2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg4ei32_tumu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint64m1x4_t test_vluxseg4ei32_v_u64m1x4_tumu_ntl_ALL(vbool64_t mask, vuint64m1x4_t maskedoff_tuple, const uint64_t *base, vuint32mf2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg4ei32_tumu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint64m2x4_t test_vluxseg4ei32_v_u64m2x4_tumu_ntl_ALL(vbool32_t mask, vuint64m2x4_t maskedoff_tuple, const uint64_t *base, vuint32m1_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg4ei32_tumu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vfloat16mf4x4_t test_vluxseg4ei32_v_f16mf4x4_mu_ntl_ALL(vbool64_t mask, vfloat16mf4x4_t maskedoff_tuple, const _Float16 *base, vuint32mf2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg4ei32_mu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vfloat16mf2x4_t test_vluxseg4ei32_v_f16mf2x4_mu_ntl_ALL(vbool32_t mask, vfloat16mf2x4_t maskedoff_tuple, const _Float16 *base, vuint32m1_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg4ei32_mu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vfloat16m1x4_t test_vluxseg4ei32_v_f16m1x4_mu_ntl_ALL(vbool16_t mask, vfloat16m1x4_t maskedoff_tuple, const _Float16 *base, vuint32m2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg4ei32_mu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vfloat16m2x4_t test_vluxseg4ei32_v_f16m2x4_mu_ntl_ALL(vbool8_t mask, vfloat16m2x4_t maskedoff_tuple, const _Float16 *base, vuint32m4_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg4ei32_mu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vfloat32mf2x4_t test_vluxseg4ei32_v_f32mf2x4_mu_ntl_ALL(vbool64_t mask, vfloat32mf2x4_t maskedoff_tuple, const float *base, vuint32mf2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg4ei32_mu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vfloat32m1x4_t test_vluxseg4ei32_v_f32m1x4_mu_ntl_ALL(vbool32_t mask, vfloat32m1x4_t maskedoff_tuple, const float *base, vuint32m1_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg4ei32_mu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vfloat32m2x4_t test_vluxseg4ei32_v_f32m2x4_mu_ntl_ALL(vbool16_t mask, vfloat32m2x4_t maskedoff_tuple, const float *base, vuint32m2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg4ei32_mu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vfloat64m1x4_t test_vluxseg4ei32_v_f64m1x4_mu_ntl_ALL(vbool64_t mask, vfloat64m1x4_t maskedoff_tuple, const double *base, vuint32mf2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg4ei32_mu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vfloat64m2x4_t test_vluxseg4ei32_v_f64m2x4_mu_ntl_ALL(vbool32_t mask, vfloat64m2x4_t maskedoff_tuple, const double *base, vuint32m1_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg4ei32_mu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vint8mf8x4_t test_vluxseg4ei32_v_i8mf8x4_mu_ntl_ALL(vbool64_t mask, vint8mf8x4_t maskedoff_tuple, const int8_t *base, vuint32mf2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg4ei32_mu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vint8mf4x4_t test_vluxseg4ei32_v_i8mf4x4_mu_ntl_ALL(vbool32_t mask, vint8mf4x4_t maskedoff_tuple, const int8_t *base, vuint32m1_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg4ei32_mu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vint8mf2x4_t test_vluxseg4ei32_v_i8mf2x4_mu_ntl_ALL(vbool16_t mask, vint8mf2x4_t maskedoff_tuple, const int8_t *base, vuint32m2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg4ei32_mu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vint8m1x4_t test_vluxseg4ei32_v_i8m1x4_mu_ntl_ALL(vbool8_t mask, vint8m1x4_t maskedoff_tuple, const int8_t *base, vuint32m4_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg4ei32_mu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vint8m2x4_t test_vluxseg4ei32_v_i8m2x4_mu_ntl_ALL(vbool4_t mask, vint8m2x4_t maskedoff_tuple, const int8_t *base, vuint32m8_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg4ei32_mu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vint16mf4x4_t test_vluxseg4ei32_v_i16mf4x4_mu_ntl_ALL(vbool64_t mask, vint16mf4x4_t maskedoff_tuple, const int16_t *base, vuint32mf2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg4ei32_mu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vint16mf2x4_t test_vluxseg4ei32_v_i16mf2x4_mu_ntl_ALL(vbool32_t mask, vint16mf2x4_t maskedoff_tuple, const int16_t *base, vuint32m1_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg4ei32_mu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vint16m1x4_t test_vluxseg4ei32_v_i16m1x4_mu_ntl_ALL(vbool16_t mask, vint16m1x4_t maskedoff_tuple, const int16_t *base, vuint32m2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg4ei32_mu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vint16m2x4_t test_vluxseg4ei32_v_i16m2x4_mu_ntl_ALL(vbool8_t mask, vint16m2x4_t maskedoff_tuple, const int16_t *base, vuint32m4_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg4ei32_mu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vint32mf2x4_t test_vluxseg4ei32_v_i32mf2x4_mu_ntl_ALL(vbool64_t mask, vint32mf2x4_t maskedoff_tuple, const int32_t *base, vuint32mf2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg4ei32_mu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vint32m1x4_t test_vluxseg4ei32_v_i32m1x4_mu_ntl_ALL(vbool32_t mask, vint32m1x4_t maskedoff_tuple, const int32_t *base, vuint32m1_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg4ei32_mu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vint32m2x4_t test_vluxseg4ei32_v_i32m2x4_mu_ntl_ALL(vbool16_t mask, vint32m2x4_t maskedoff_tuple, const int32_t *base, vuint32m2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg4ei32_mu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vint64m1x4_t test_vluxseg4ei32_v_i64m1x4_mu_ntl_ALL(vbool64_t mask, vint64m1x4_t maskedoff_tuple, const int64_t *base, vuint32mf2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg4ei32_mu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vint64m2x4_t test_vluxseg4ei32_v_i64m2x4_mu_ntl_ALL(vbool32_t mask, vint64m2x4_t maskedoff_tuple, const int64_t *base, vuint32m1_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg4ei32_mu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint8mf8x4_t test_vluxseg4ei32_v_u8mf8x4_mu_ntl_ALL(vbool64_t mask, vuint8mf8x4_t maskedoff_tuple, const uint8_t *base, vuint32mf2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg4ei32_mu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint8mf4x4_t test_vluxseg4ei32_v_u8mf4x4_mu_ntl_ALL(vbool32_t mask, vuint8mf4x4_t maskedoff_tuple, const uint8_t *base, vuint32m1_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg4ei32_mu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint8mf2x4_t test_vluxseg4ei32_v_u8mf2x4_mu_ntl_ALL(vbool16_t mask, vuint8mf2x4_t maskedoff_tuple, const uint8_t *base, vuint32m2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg4ei32_mu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint8m1x4_t test_vluxseg4ei32_v_u8m1x4_mu_ntl_ALL(vbool8_t mask, vuint8m1x4_t maskedoff_tuple, const uint8_t *base, vuint32m4_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg4ei32_mu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint8m2x4_t test_vluxseg4ei32_v_u8m2x4_mu_ntl_ALL(vbool4_t mask, vuint8m2x4_t maskedoff_tuple, const uint8_t *base, vuint32m8_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg4ei32_mu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint16mf4x4_t test_vluxseg4ei32_v_u16mf4x4_mu_ntl_ALL(vbool64_t mask, vuint16mf4x4_t maskedoff_tuple, const uint16_t *base, vuint32mf2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg4ei32_mu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint16mf2x4_t test_vluxseg4ei32_v_u16mf2x4_mu_ntl_ALL(vbool32_t mask, vuint16mf2x4_t maskedoff_tuple, const uint16_t *base, vuint32m1_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg4ei32_mu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint16m1x4_t test_vluxseg4ei32_v_u16m1x4_mu_ntl_ALL(vbool16_t mask, vuint16m1x4_t maskedoff_tuple, const uint16_t *base, vuint32m2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg4ei32_mu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint16m2x4_t test_vluxseg4ei32_v_u16m2x4_mu_ntl_ALL(vbool8_t mask, vuint16m2x4_t maskedoff_tuple, const uint16_t *base, vuint32m4_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg4ei32_mu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint32mf2x4_t test_vluxseg4ei32_v_u32mf2x4_mu_ntl_ALL(vbool64_t mask, vuint32mf2x4_t maskedoff_tuple, const uint32_t *base, vuint32mf2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg4ei32_mu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint32m1x4_t test_vluxseg4ei32_v_u32m1x4_mu_ntl_ALL(vbool32_t mask, vuint32m1x4_t maskedoff_tuple, const uint32_t *base, vuint32m1_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg4ei32_mu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint32m2x4_t test_vluxseg4ei32_v_u32m2x4_mu_ntl_ALL(vbool16_t mask, vuint32m2x4_t maskedoff_tuple, const uint32_t *base, vuint32m2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg4ei32_mu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint64m1x4_t test_vluxseg4ei32_v_u64m1x4_mu_ntl_ALL(vbool64_t mask, vuint64m1x4_t maskedoff_tuple, const uint64_t *base, vuint32mf2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg4ei32_mu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint64m2x4_t test_vluxseg4ei32_v_u64m2x4_mu_ntl_ALL(vbool32_t mask, vuint64m2x4_t maskedoff_tuple, const uint64_t *base, vuint32m1_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg4ei32_mu_ntl(mask, maskedoff_tuple, base, bindex, vl, __RISCV_NTLH_ALL);
}

