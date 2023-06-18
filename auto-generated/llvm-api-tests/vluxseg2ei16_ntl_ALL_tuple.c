// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -target-feature +zfh \
// RUN:   -target-feature +experimental-zvfh -disable-O0-optnone  \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

#include <riscv_ntlh.h>

vfloat16mf4x2_t test_vluxseg2ei16_v_f16mf4x2_ntl_ALL(const _Float16 *base, vuint16mf4_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei16_v_f16mf4x2_ntl(base, bindex, vl, __RISCV_NTLH_ALL);
}

vfloat16mf2x2_t test_vluxseg2ei16_v_f16mf2x2_ntl_ALL(const _Float16 *base, vuint16mf2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei16_v_f16mf2x2_ntl(base, bindex, vl, __RISCV_NTLH_ALL);
}

vfloat16m1x2_t test_vluxseg2ei16_v_f16m1x2_ntl_ALL(const _Float16 *base, vuint16m1_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei16_v_f16m1x2_ntl(base, bindex, vl, __RISCV_NTLH_ALL);
}

vfloat16m2x2_t test_vluxseg2ei16_v_f16m2x2_ntl_ALL(const _Float16 *base, vuint16m2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei16_v_f16m2x2_ntl(base, bindex, vl, __RISCV_NTLH_ALL);
}

vfloat16m4x2_t test_vluxseg2ei16_v_f16m4x2_ntl_ALL(const _Float16 *base, vuint16m4_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei16_v_f16m4x2_ntl(base, bindex, vl, __RISCV_NTLH_ALL);
}

vfloat32mf2x2_t test_vluxseg2ei16_v_f32mf2x2_ntl_ALL(const float *base, vuint16mf4_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei16_v_f32mf2x2_ntl(base, bindex, vl, __RISCV_NTLH_ALL);
}

vfloat32m1x2_t test_vluxseg2ei16_v_f32m1x2_ntl_ALL(const float *base, vuint16mf2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei16_v_f32m1x2_ntl(base, bindex, vl, __RISCV_NTLH_ALL);
}

vfloat32m2x2_t test_vluxseg2ei16_v_f32m2x2_ntl_ALL(const float *base, vuint16m1_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei16_v_f32m2x2_ntl(base, bindex, vl, __RISCV_NTLH_ALL);
}

vfloat32m4x2_t test_vluxseg2ei16_v_f32m4x2_ntl_ALL(const float *base, vuint16m2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei16_v_f32m4x2_ntl(base, bindex, vl, __RISCV_NTLH_ALL);
}

vfloat64m1x2_t test_vluxseg2ei16_v_f64m1x2_ntl_ALL(const double *base, vuint16mf4_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei16_v_f64m1x2_ntl(base, bindex, vl, __RISCV_NTLH_ALL);
}

vfloat64m2x2_t test_vluxseg2ei16_v_f64m2x2_ntl_ALL(const double *base, vuint16mf2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei16_v_f64m2x2_ntl(base, bindex, vl, __RISCV_NTLH_ALL);
}

vfloat64m4x2_t test_vluxseg2ei16_v_f64m4x2_ntl_ALL(const double *base, vuint16m1_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei16_v_f64m4x2_ntl(base, bindex, vl, __RISCV_NTLH_ALL);
}

vint8mf8x2_t test_vluxseg2ei16_v_i8mf8x2_ntl_ALL(const int8_t *base, vuint16mf4_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei16_v_i8mf8x2_ntl(base, bindex, vl, __RISCV_NTLH_ALL);
}

vint8mf4x2_t test_vluxseg2ei16_v_i8mf4x2_ntl_ALL(const int8_t *base, vuint16mf2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei16_v_i8mf4x2_ntl(base, bindex, vl, __RISCV_NTLH_ALL);
}

vint8mf2x2_t test_vluxseg2ei16_v_i8mf2x2_ntl_ALL(const int8_t *base, vuint16m1_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei16_v_i8mf2x2_ntl(base, bindex, vl, __RISCV_NTLH_ALL);
}

vint8m1x2_t test_vluxseg2ei16_v_i8m1x2_ntl_ALL(const int8_t *base, vuint16m2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei16_v_i8m1x2_ntl(base, bindex, vl, __RISCV_NTLH_ALL);
}

vint8m2x2_t test_vluxseg2ei16_v_i8m2x2_ntl_ALL(const int8_t *base, vuint16m4_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei16_v_i8m2x2_ntl(base, bindex, vl, __RISCV_NTLH_ALL);
}

vint8m4x2_t test_vluxseg2ei16_v_i8m4x2_ntl_ALL(const int8_t *base, vuint16m8_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei16_v_i8m4x2_ntl(base, bindex, vl, __RISCV_NTLH_ALL);
}

vint16mf4x2_t test_vluxseg2ei16_v_i16mf4x2_ntl_ALL(const int16_t *base, vuint16mf4_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei16_v_i16mf4x2_ntl(base, bindex, vl, __RISCV_NTLH_ALL);
}

vint16mf2x2_t test_vluxseg2ei16_v_i16mf2x2_ntl_ALL(const int16_t *base, vuint16mf2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei16_v_i16mf2x2_ntl(base, bindex, vl, __RISCV_NTLH_ALL);
}

vint16m1x2_t test_vluxseg2ei16_v_i16m1x2_ntl_ALL(const int16_t *base, vuint16m1_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei16_v_i16m1x2_ntl(base, bindex, vl, __RISCV_NTLH_ALL);
}

vint16m2x2_t test_vluxseg2ei16_v_i16m2x2_ntl_ALL(const int16_t *base, vuint16m2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei16_v_i16m2x2_ntl(base, bindex, vl, __RISCV_NTLH_ALL);
}

vint16m4x2_t test_vluxseg2ei16_v_i16m4x2_ntl_ALL(const int16_t *base, vuint16m4_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei16_v_i16m4x2_ntl(base, bindex, vl, __RISCV_NTLH_ALL);
}

vint32mf2x2_t test_vluxseg2ei16_v_i32mf2x2_ntl_ALL(const int32_t *base, vuint16mf4_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei16_v_i32mf2x2_ntl(base, bindex, vl, __RISCV_NTLH_ALL);
}

vint32m1x2_t test_vluxseg2ei16_v_i32m1x2_ntl_ALL(const int32_t *base, vuint16mf2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei16_v_i32m1x2_ntl(base, bindex, vl, __RISCV_NTLH_ALL);
}

vint32m2x2_t test_vluxseg2ei16_v_i32m2x2_ntl_ALL(const int32_t *base, vuint16m1_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei16_v_i32m2x2_ntl(base, bindex, vl, __RISCV_NTLH_ALL);
}

vint32m4x2_t test_vluxseg2ei16_v_i32m4x2_ntl_ALL(const int32_t *base, vuint16m2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei16_v_i32m4x2_ntl(base, bindex, vl, __RISCV_NTLH_ALL);
}

vint64m1x2_t test_vluxseg2ei16_v_i64m1x2_ntl_ALL(const int64_t *base, vuint16mf4_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei16_v_i64m1x2_ntl(base, bindex, vl, __RISCV_NTLH_ALL);
}

vint64m2x2_t test_vluxseg2ei16_v_i64m2x2_ntl_ALL(const int64_t *base, vuint16mf2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei16_v_i64m2x2_ntl(base, bindex, vl, __RISCV_NTLH_ALL);
}

vint64m4x2_t test_vluxseg2ei16_v_i64m4x2_ntl_ALL(const int64_t *base, vuint16m1_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei16_v_i64m4x2_ntl(base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint8mf8x2_t test_vluxseg2ei16_v_u8mf8x2_ntl_ALL(const uint8_t *base, vuint16mf4_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei16_v_u8mf8x2_ntl(base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint8mf4x2_t test_vluxseg2ei16_v_u8mf4x2_ntl_ALL(const uint8_t *base, vuint16mf2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei16_v_u8mf4x2_ntl(base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint8mf2x2_t test_vluxseg2ei16_v_u8mf2x2_ntl_ALL(const uint8_t *base, vuint16m1_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei16_v_u8mf2x2_ntl(base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint8m1x2_t test_vluxseg2ei16_v_u8m1x2_ntl_ALL(const uint8_t *base, vuint16m2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei16_v_u8m1x2_ntl(base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint8m2x2_t test_vluxseg2ei16_v_u8m2x2_ntl_ALL(const uint8_t *base, vuint16m4_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei16_v_u8m2x2_ntl(base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint8m4x2_t test_vluxseg2ei16_v_u8m4x2_ntl_ALL(const uint8_t *base, vuint16m8_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei16_v_u8m4x2_ntl(base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint16mf4x2_t test_vluxseg2ei16_v_u16mf4x2_ntl_ALL(const uint16_t *base, vuint16mf4_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei16_v_u16mf4x2_ntl(base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint16mf2x2_t test_vluxseg2ei16_v_u16mf2x2_ntl_ALL(const uint16_t *base, vuint16mf2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei16_v_u16mf2x2_ntl(base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint16m1x2_t test_vluxseg2ei16_v_u16m1x2_ntl_ALL(const uint16_t *base, vuint16m1_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei16_v_u16m1x2_ntl(base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint16m2x2_t test_vluxseg2ei16_v_u16m2x2_ntl_ALL(const uint16_t *base, vuint16m2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei16_v_u16m2x2_ntl(base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint16m4x2_t test_vluxseg2ei16_v_u16m4x2_ntl_ALL(const uint16_t *base, vuint16m4_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei16_v_u16m4x2_ntl(base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint32mf2x2_t test_vluxseg2ei16_v_u32mf2x2_ntl_ALL(const uint32_t *base, vuint16mf4_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei16_v_u32mf2x2_ntl(base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint32m1x2_t test_vluxseg2ei16_v_u32m1x2_ntl_ALL(const uint32_t *base, vuint16mf2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei16_v_u32m1x2_ntl(base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint32m2x2_t test_vluxseg2ei16_v_u32m2x2_ntl_ALL(const uint32_t *base, vuint16m1_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei16_v_u32m2x2_ntl(base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint32m4x2_t test_vluxseg2ei16_v_u32m4x2_ntl_ALL(const uint32_t *base, vuint16m2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei16_v_u32m4x2_ntl(base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint64m1x2_t test_vluxseg2ei16_v_u64m1x2_ntl_ALL(const uint64_t *base, vuint16mf4_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei16_v_u64m1x2_ntl(base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint64m2x2_t test_vluxseg2ei16_v_u64m2x2_ntl_ALL(const uint64_t *base, vuint16mf2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei16_v_u64m2x2_ntl(base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint64m4x2_t test_vluxseg2ei16_v_u64m4x2_ntl_ALL(const uint64_t *base, vuint16m1_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei16_v_u64m4x2_ntl(base, bindex, vl, __RISCV_NTLH_ALL);
}

vfloat16mf4x2_t test_vluxseg2ei16_v_f16mf4x2_m_ntl_ALL(vbool64_t mask, const _Float16 *base, vuint16mf4_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei16_v_f16mf4x2_m_ntl(mask, base, bindex, vl, __RISCV_NTLH_ALL);
}

vfloat16mf2x2_t test_vluxseg2ei16_v_f16mf2x2_m_ntl_ALL(vbool32_t mask, const _Float16 *base, vuint16mf2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei16_v_f16mf2x2_m_ntl(mask, base, bindex, vl, __RISCV_NTLH_ALL);
}

vfloat16m1x2_t test_vluxseg2ei16_v_f16m1x2_m_ntl_ALL(vbool16_t mask, const _Float16 *base, vuint16m1_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei16_v_f16m1x2_m_ntl(mask, base, bindex, vl, __RISCV_NTLH_ALL);
}

vfloat16m2x2_t test_vluxseg2ei16_v_f16m2x2_m_ntl_ALL(vbool8_t mask, const _Float16 *base, vuint16m2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei16_v_f16m2x2_m_ntl(mask, base, bindex, vl, __RISCV_NTLH_ALL);
}

vfloat16m4x2_t test_vluxseg2ei16_v_f16m4x2_m_ntl_ALL(vbool4_t mask, const _Float16 *base, vuint16m4_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei16_v_f16m4x2_m_ntl(mask, base, bindex, vl, __RISCV_NTLH_ALL);
}

vfloat32mf2x2_t test_vluxseg2ei16_v_f32mf2x2_m_ntl_ALL(vbool64_t mask, const float *base, vuint16mf4_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei16_v_f32mf2x2_m_ntl(mask, base, bindex, vl, __RISCV_NTLH_ALL);
}

vfloat32m1x2_t test_vluxseg2ei16_v_f32m1x2_m_ntl_ALL(vbool32_t mask, const float *base, vuint16mf2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei16_v_f32m1x2_m_ntl(mask, base, bindex, vl, __RISCV_NTLH_ALL);
}

vfloat32m2x2_t test_vluxseg2ei16_v_f32m2x2_m_ntl_ALL(vbool16_t mask, const float *base, vuint16m1_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei16_v_f32m2x2_m_ntl(mask, base, bindex, vl, __RISCV_NTLH_ALL);
}

vfloat32m4x2_t test_vluxseg2ei16_v_f32m4x2_m_ntl_ALL(vbool8_t mask, const float *base, vuint16m2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei16_v_f32m4x2_m_ntl(mask, base, bindex, vl, __RISCV_NTLH_ALL);
}

vfloat64m1x2_t test_vluxseg2ei16_v_f64m1x2_m_ntl_ALL(vbool64_t mask, const double *base, vuint16mf4_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei16_v_f64m1x2_m_ntl(mask, base, bindex, vl, __RISCV_NTLH_ALL);
}

vfloat64m2x2_t test_vluxseg2ei16_v_f64m2x2_m_ntl_ALL(vbool32_t mask, const double *base, vuint16mf2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei16_v_f64m2x2_m_ntl(mask, base, bindex, vl, __RISCV_NTLH_ALL);
}

vfloat64m4x2_t test_vluxseg2ei16_v_f64m4x2_m_ntl_ALL(vbool16_t mask, const double *base, vuint16m1_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei16_v_f64m4x2_m_ntl(mask, base, bindex, vl, __RISCV_NTLH_ALL);
}

vint8mf8x2_t test_vluxseg2ei16_v_i8mf8x2_m_ntl_ALL(vbool64_t mask, const int8_t *base, vuint16mf4_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei16_v_i8mf8x2_m_ntl(mask, base, bindex, vl, __RISCV_NTLH_ALL);
}

vint8mf4x2_t test_vluxseg2ei16_v_i8mf4x2_m_ntl_ALL(vbool32_t mask, const int8_t *base, vuint16mf2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei16_v_i8mf4x2_m_ntl(mask, base, bindex, vl, __RISCV_NTLH_ALL);
}

vint8mf2x2_t test_vluxseg2ei16_v_i8mf2x2_m_ntl_ALL(vbool16_t mask, const int8_t *base, vuint16m1_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei16_v_i8mf2x2_m_ntl(mask, base, bindex, vl, __RISCV_NTLH_ALL);
}

vint8m1x2_t test_vluxseg2ei16_v_i8m1x2_m_ntl_ALL(vbool8_t mask, const int8_t *base, vuint16m2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei16_v_i8m1x2_m_ntl(mask, base, bindex, vl, __RISCV_NTLH_ALL);
}

vint8m2x2_t test_vluxseg2ei16_v_i8m2x2_m_ntl_ALL(vbool4_t mask, const int8_t *base, vuint16m4_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei16_v_i8m2x2_m_ntl(mask, base, bindex, vl, __RISCV_NTLH_ALL);
}

vint8m4x2_t test_vluxseg2ei16_v_i8m4x2_m_ntl_ALL(vbool2_t mask, const int8_t *base, vuint16m8_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei16_v_i8m4x2_m_ntl(mask, base, bindex, vl, __RISCV_NTLH_ALL);
}

vint16mf4x2_t test_vluxseg2ei16_v_i16mf4x2_m_ntl_ALL(vbool64_t mask, const int16_t *base, vuint16mf4_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei16_v_i16mf4x2_m_ntl(mask, base, bindex, vl, __RISCV_NTLH_ALL);
}

vint16mf2x2_t test_vluxseg2ei16_v_i16mf2x2_m_ntl_ALL(vbool32_t mask, const int16_t *base, vuint16mf2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei16_v_i16mf2x2_m_ntl(mask, base, bindex, vl, __RISCV_NTLH_ALL);
}

vint16m1x2_t test_vluxseg2ei16_v_i16m1x2_m_ntl_ALL(vbool16_t mask, const int16_t *base, vuint16m1_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei16_v_i16m1x2_m_ntl(mask, base, bindex, vl, __RISCV_NTLH_ALL);
}

vint16m2x2_t test_vluxseg2ei16_v_i16m2x2_m_ntl_ALL(vbool8_t mask, const int16_t *base, vuint16m2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei16_v_i16m2x2_m_ntl(mask, base, bindex, vl, __RISCV_NTLH_ALL);
}

vint16m4x2_t test_vluxseg2ei16_v_i16m4x2_m_ntl_ALL(vbool4_t mask, const int16_t *base, vuint16m4_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei16_v_i16m4x2_m_ntl(mask, base, bindex, vl, __RISCV_NTLH_ALL);
}

vint32mf2x2_t test_vluxseg2ei16_v_i32mf2x2_m_ntl_ALL(vbool64_t mask, const int32_t *base, vuint16mf4_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei16_v_i32mf2x2_m_ntl(mask, base, bindex, vl, __RISCV_NTLH_ALL);
}

vint32m1x2_t test_vluxseg2ei16_v_i32m1x2_m_ntl_ALL(vbool32_t mask, const int32_t *base, vuint16mf2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei16_v_i32m1x2_m_ntl(mask, base, bindex, vl, __RISCV_NTLH_ALL);
}

vint32m2x2_t test_vluxseg2ei16_v_i32m2x2_m_ntl_ALL(vbool16_t mask, const int32_t *base, vuint16m1_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei16_v_i32m2x2_m_ntl(mask, base, bindex, vl, __RISCV_NTLH_ALL);
}

vint32m4x2_t test_vluxseg2ei16_v_i32m4x2_m_ntl_ALL(vbool8_t mask, const int32_t *base, vuint16m2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei16_v_i32m4x2_m_ntl(mask, base, bindex, vl, __RISCV_NTLH_ALL);
}

vint64m1x2_t test_vluxseg2ei16_v_i64m1x2_m_ntl_ALL(vbool64_t mask, const int64_t *base, vuint16mf4_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei16_v_i64m1x2_m_ntl(mask, base, bindex, vl, __RISCV_NTLH_ALL);
}

vint64m2x2_t test_vluxseg2ei16_v_i64m2x2_m_ntl_ALL(vbool32_t mask, const int64_t *base, vuint16mf2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei16_v_i64m2x2_m_ntl(mask, base, bindex, vl, __RISCV_NTLH_ALL);
}

vint64m4x2_t test_vluxseg2ei16_v_i64m4x2_m_ntl_ALL(vbool16_t mask, const int64_t *base, vuint16m1_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei16_v_i64m4x2_m_ntl(mask, base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint8mf8x2_t test_vluxseg2ei16_v_u8mf8x2_m_ntl_ALL(vbool64_t mask, const uint8_t *base, vuint16mf4_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei16_v_u8mf8x2_m_ntl(mask, base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint8mf4x2_t test_vluxseg2ei16_v_u8mf4x2_m_ntl_ALL(vbool32_t mask, const uint8_t *base, vuint16mf2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei16_v_u8mf4x2_m_ntl(mask, base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint8mf2x2_t test_vluxseg2ei16_v_u8mf2x2_m_ntl_ALL(vbool16_t mask, const uint8_t *base, vuint16m1_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei16_v_u8mf2x2_m_ntl(mask, base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint8m1x2_t test_vluxseg2ei16_v_u8m1x2_m_ntl_ALL(vbool8_t mask, const uint8_t *base, vuint16m2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei16_v_u8m1x2_m_ntl(mask, base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint8m2x2_t test_vluxseg2ei16_v_u8m2x2_m_ntl_ALL(vbool4_t mask, const uint8_t *base, vuint16m4_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei16_v_u8m2x2_m_ntl(mask, base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint8m4x2_t test_vluxseg2ei16_v_u8m4x2_m_ntl_ALL(vbool2_t mask, const uint8_t *base, vuint16m8_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei16_v_u8m4x2_m_ntl(mask, base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint16mf4x2_t test_vluxseg2ei16_v_u16mf4x2_m_ntl_ALL(vbool64_t mask, const uint16_t *base, vuint16mf4_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei16_v_u16mf4x2_m_ntl(mask, base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint16mf2x2_t test_vluxseg2ei16_v_u16mf2x2_m_ntl_ALL(vbool32_t mask, const uint16_t *base, vuint16mf2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei16_v_u16mf2x2_m_ntl(mask, base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint16m1x2_t test_vluxseg2ei16_v_u16m1x2_m_ntl_ALL(vbool16_t mask, const uint16_t *base, vuint16m1_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei16_v_u16m1x2_m_ntl(mask, base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint16m2x2_t test_vluxseg2ei16_v_u16m2x2_m_ntl_ALL(vbool8_t mask, const uint16_t *base, vuint16m2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei16_v_u16m2x2_m_ntl(mask, base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint16m4x2_t test_vluxseg2ei16_v_u16m4x2_m_ntl_ALL(vbool4_t mask, const uint16_t *base, vuint16m4_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei16_v_u16m4x2_m_ntl(mask, base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint32mf2x2_t test_vluxseg2ei16_v_u32mf2x2_m_ntl_ALL(vbool64_t mask, const uint32_t *base, vuint16mf4_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei16_v_u32mf2x2_m_ntl(mask, base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint32m1x2_t test_vluxseg2ei16_v_u32m1x2_m_ntl_ALL(vbool32_t mask, const uint32_t *base, vuint16mf2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei16_v_u32m1x2_m_ntl(mask, base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint32m2x2_t test_vluxseg2ei16_v_u32m2x2_m_ntl_ALL(vbool16_t mask, const uint32_t *base, vuint16m1_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei16_v_u32m2x2_m_ntl(mask, base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint32m4x2_t test_vluxseg2ei16_v_u32m4x2_m_ntl_ALL(vbool8_t mask, const uint32_t *base, vuint16m2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei16_v_u32m4x2_m_ntl(mask, base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint64m1x2_t test_vluxseg2ei16_v_u64m1x2_m_ntl_ALL(vbool64_t mask, const uint64_t *base, vuint16mf4_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei16_v_u64m1x2_m_ntl(mask, base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint64m2x2_t test_vluxseg2ei16_v_u64m2x2_m_ntl_ALL(vbool32_t mask, const uint64_t *base, vuint16mf2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei16_v_u64m2x2_m_ntl(mask, base, bindex, vl, __RISCV_NTLH_ALL);
}

vuint64m4x2_t test_vluxseg2ei16_v_u64m4x2_m_ntl_ALL(vbool16_t mask, const uint64_t *base, vuint16m1_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg2ei16_v_u64m4x2_m_ntl(mask, base, bindex, vl, __RISCV_NTLH_ALL);
}

