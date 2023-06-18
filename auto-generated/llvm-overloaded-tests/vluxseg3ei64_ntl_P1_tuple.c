// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -target-feature +zfh \
// RUN:   -target-feature +experimental-zvfh -disable-O0-optnone  \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

#include <riscv_ntlh.h>

vfloat16mf4x3_t test_vluxseg3ei64_v_f16mf4x3_ntl_P1(const _Float16 *base, vuint64m1_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg3ei64_ntl(base, bindex, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vfloat16mf2x3_t test_vluxseg3ei64_v_f16mf2x3_ntl_P1(const _Float16 *base, vuint64m2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg3ei64_ntl(base, bindex, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vfloat16m1x3_t test_vluxseg3ei64_v_f16m1x3_ntl_P1(const _Float16 *base, vuint64m4_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg3ei64_ntl(base, bindex, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vfloat16m2x3_t test_vluxseg3ei64_v_f16m2x3_ntl_P1(const _Float16 *base, vuint64m8_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg3ei64_ntl(base, bindex, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vfloat32mf2x3_t test_vluxseg3ei64_v_f32mf2x3_ntl_P1(const float *base, vuint64m1_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg3ei64_ntl(base, bindex, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vfloat32m1x3_t test_vluxseg3ei64_v_f32m1x3_ntl_P1(const float *base, vuint64m2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg3ei64_ntl(base, bindex, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vfloat32m2x3_t test_vluxseg3ei64_v_f32m2x3_ntl_P1(const float *base, vuint64m4_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg3ei64_ntl(base, bindex, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vfloat64m1x3_t test_vluxseg3ei64_v_f64m1x3_ntl_P1(const double *base, vuint64m1_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg3ei64_ntl(base, bindex, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vfloat64m2x3_t test_vluxseg3ei64_v_f64m2x3_ntl_P1(const double *base, vuint64m2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg3ei64_ntl(base, bindex, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint8mf8x3_t test_vluxseg3ei64_v_i8mf8x3_ntl_P1(const int8_t *base, vuint64m1_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg3ei64_ntl(base, bindex, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint8mf4x3_t test_vluxseg3ei64_v_i8mf4x3_ntl_P1(const int8_t *base, vuint64m2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg3ei64_ntl(base, bindex, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint8mf2x3_t test_vluxseg3ei64_v_i8mf2x3_ntl_P1(const int8_t *base, vuint64m4_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg3ei64_ntl(base, bindex, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint8m1x3_t test_vluxseg3ei64_v_i8m1x3_ntl_P1(const int8_t *base, vuint64m8_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg3ei64_ntl(base, bindex, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint16mf4x3_t test_vluxseg3ei64_v_i16mf4x3_ntl_P1(const int16_t *base, vuint64m1_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg3ei64_ntl(base, bindex, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint16mf2x3_t test_vluxseg3ei64_v_i16mf2x3_ntl_P1(const int16_t *base, vuint64m2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg3ei64_ntl(base, bindex, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint16m1x3_t test_vluxseg3ei64_v_i16m1x3_ntl_P1(const int16_t *base, vuint64m4_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg3ei64_ntl(base, bindex, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint16m2x3_t test_vluxseg3ei64_v_i16m2x3_ntl_P1(const int16_t *base, vuint64m8_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg3ei64_ntl(base, bindex, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint32mf2x3_t test_vluxseg3ei64_v_i32mf2x3_ntl_P1(const int32_t *base, vuint64m1_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg3ei64_ntl(base, bindex, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint32m1x3_t test_vluxseg3ei64_v_i32m1x3_ntl_P1(const int32_t *base, vuint64m2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg3ei64_ntl(base, bindex, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint32m2x3_t test_vluxseg3ei64_v_i32m2x3_ntl_P1(const int32_t *base, vuint64m4_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg3ei64_ntl(base, bindex, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint64m1x3_t test_vluxseg3ei64_v_i64m1x3_ntl_P1(const int64_t *base, vuint64m1_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg3ei64_ntl(base, bindex, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint64m2x3_t test_vluxseg3ei64_v_i64m2x3_ntl_P1(const int64_t *base, vuint64m2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg3ei64_ntl(base, bindex, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint8mf8x3_t test_vluxseg3ei64_v_u8mf8x3_ntl_P1(const uint8_t *base, vuint64m1_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg3ei64_ntl(base, bindex, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint8mf4x3_t test_vluxseg3ei64_v_u8mf4x3_ntl_P1(const uint8_t *base, vuint64m2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg3ei64_ntl(base, bindex, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint8mf2x3_t test_vluxseg3ei64_v_u8mf2x3_ntl_P1(const uint8_t *base, vuint64m4_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg3ei64_ntl(base, bindex, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint8m1x3_t test_vluxseg3ei64_v_u8m1x3_ntl_P1(const uint8_t *base, vuint64m8_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg3ei64_ntl(base, bindex, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint16mf4x3_t test_vluxseg3ei64_v_u16mf4x3_ntl_P1(const uint16_t *base, vuint64m1_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg3ei64_ntl(base, bindex, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint16mf2x3_t test_vluxseg3ei64_v_u16mf2x3_ntl_P1(const uint16_t *base, vuint64m2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg3ei64_ntl(base, bindex, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint16m1x3_t test_vluxseg3ei64_v_u16m1x3_ntl_P1(const uint16_t *base, vuint64m4_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg3ei64_ntl(base, bindex, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint16m2x3_t test_vluxseg3ei64_v_u16m2x3_ntl_P1(const uint16_t *base, vuint64m8_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg3ei64_ntl(base, bindex, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint32mf2x3_t test_vluxseg3ei64_v_u32mf2x3_ntl_P1(const uint32_t *base, vuint64m1_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg3ei64_ntl(base, bindex, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint32m1x3_t test_vluxseg3ei64_v_u32m1x3_ntl_P1(const uint32_t *base, vuint64m2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg3ei64_ntl(base, bindex, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint32m2x3_t test_vluxseg3ei64_v_u32m2x3_ntl_P1(const uint32_t *base, vuint64m4_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg3ei64_ntl(base, bindex, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint64m1x3_t test_vluxseg3ei64_v_u64m1x3_ntl_P1(const uint64_t *base, vuint64m1_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg3ei64_ntl(base, bindex, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint64m2x3_t test_vluxseg3ei64_v_u64m2x3_ntl_P1(const uint64_t *base, vuint64m2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg3ei64_ntl(base, bindex, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vfloat16mf4x3_t test_vluxseg3ei64_v_f16mf4x3_m_ntl_P1(vbool64_t mask, const _Float16 *base, vuint64m1_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg3ei64_ntl(mask, base, bindex, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vfloat16mf2x3_t test_vluxseg3ei64_v_f16mf2x3_m_ntl_P1(vbool32_t mask, const _Float16 *base, vuint64m2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg3ei64_ntl(mask, base, bindex, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vfloat16m1x3_t test_vluxseg3ei64_v_f16m1x3_m_ntl_P1(vbool16_t mask, const _Float16 *base, vuint64m4_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg3ei64_ntl(mask, base, bindex, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vfloat16m2x3_t test_vluxseg3ei64_v_f16m2x3_m_ntl_P1(vbool8_t mask, const _Float16 *base, vuint64m8_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg3ei64_ntl(mask, base, bindex, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vfloat32mf2x3_t test_vluxseg3ei64_v_f32mf2x3_m_ntl_P1(vbool64_t mask, const float *base, vuint64m1_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg3ei64_ntl(mask, base, bindex, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vfloat32m1x3_t test_vluxseg3ei64_v_f32m1x3_m_ntl_P1(vbool32_t mask, const float *base, vuint64m2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg3ei64_ntl(mask, base, bindex, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vfloat32m2x3_t test_vluxseg3ei64_v_f32m2x3_m_ntl_P1(vbool16_t mask, const float *base, vuint64m4_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg3ei64_ntl(mask, base, bindex, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vfloat64m1x3_t test_vluxseg3ei64_v_f64m1x3_m_ntl_P1(vbool64_t mask, const double *base, vuint64m1_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg3ei64_ntl(mask, base, bindex, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vfloat64m2x3_t test_vluxseg3ei64_v_f64m2x3_m_ntl_P1(vbool32_t mask, const double *base, vuint64m2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg3ei64_ntl(mask, base, bindex, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint8mf8x3_t test_vluxseg3ei64_v_i8mf8x3_m_ntl_P1(vbool64_t mask, const int8_t *base, vuint64m1_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg3ei64_ntl(mask, base, bindex, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint8mf4x3_t test_vluxseg3ei64_v_i8mf4x3_m_ntl_P1(vbool32_t mask, const int8_t *base, vuint64m2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg3ei64_ntl(mask, base, bindex, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint8mf2x3_t test_vluxseg3ei64_v_i8mf2x3_m_ntl_P1(vbool16_t mask, const int8_t *base, vuint64m4_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg3ei64_ntl(mask, base, bindex, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint8m1x3_t test_vluxseg3ei64_v_i8m1x3_m_ntl_P1(vbool8_t mask, const int8_t *base, vuint64m8_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg3ei64_ntl(mask, base, bindex, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint16mf4x3_t test_vluxseg3ei64_v_i16mf4x3_m_ntl_P1(vbool64_t mask, const int16_t *base, vuint64m1_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg3ei64_ntl(mask, base, bindex, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint16mf2x3_t test_vluxseg3ei64_v_i16mf2x3_m_ntl_P1(vbool32_t mask, const int16_t *base, vuint64m2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg3ei64_ntl(mask, base, bindex, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint16m1x3_t test_vluxseg3ei64_v_i16m1x3_m_ntl_P1(vbool16_t mask, const int16_t *base, vuint64m4_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg3ei64_ntl(mask, base, bindex, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint16m2x3_t test_vluxseg3ei64_v_i16m2x3_m_ntl_P1(vbool8_t mask, const int16_t *base, vuint64m8_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg3ei64_ntl(mask, base, bindex, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint32mf2x3_t test_vluxseg3ei64_v_i32mf2x3_m_ntl_P1(vbool64_t mask, const int32_t *base, vuint64m1_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg3ei64_ntl(mask, base, bindex, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint32m1x3_t test_vluxseg3ei64_v_i32m1x3_m_ntl_P1(vbool32_t mask, const int32_t *base, vuint64m2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg3ei64_ntl(mask, base, bindex, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint32m2x3_t test_vluxseg3ei64_v_i32m2x3_m_ntl_P1(vbool16_t mask, const int32_t *base, vuint64m4_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg3ei64_ntl(mask, base, bindex, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint64m1x3_t test_vluxseg3ei64_v_i64m1x3_m_ntl_P1(vbool64_t mask, const int64_t *base, vuint64m1_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg3ei64_ntl(mask, base, bindex, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vint64m2x3_t test_vluxseg3ei64_v_i64m2x3_m_ntl_P1(vbool32_t mask, const int64_t *base, vuint64m2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg3ei64_ntl(mask, base, bindex, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint8mf8x3_t test_vluxseg3ei64_v_u8mf8x3_m_ntl_P1(vbool64_t mask, const uint8_t *base, vuint64m1_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg3ei64_ntl(mask, base, bindex, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint8mf4x3_t test_vluxseg3ei64_v_u8mf4x3_m_ntl_P1(vbool32_t mask, const uint8_t *base, vuint64m2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg3ei64_ntl(mask, base, bindex, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint8mf2x3_t test_vluxseg3ei64_v_u8mf2x3_m_ntl_P1(vbool16_t mask, const uint8_t *base, vuint64m4_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg3ei64_ntl(mask, base, bindex, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint8m1x3_t test_vluxseg3ei64_v_u8m1x3_m_ntl_P1(vbool8_t mask, const uint8_t *base, vuint64m8_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg3ei64_ntl(mask, base, bindex, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint16mf4x3_t test_vluxseg3ei64_v_u16mf4x3_m_ntl_P1(vbool64_t mask, const uint16_t *base, vuint64m1_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg3ei64_ntl(mask, base, bindex, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint16mf2x3_t test_vluxseg3ei64_v_u16mf2x3_m_ntl_P1(vbool32_t mask, const uint16_t *base, vuint64m2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg3ei64_ntl(mask, base, bindex, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint16m1x3_t test_vluxseg3ei64_v_u16m1x3_m_ntl_P1(vbool16_t mask, const uint16_t *base, vuint64m4_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg3ei64_ntl(mask, base, bindex, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint16m2x3_t test_vluxseg3ei64_v_u16m2x3_m_ntl_P1(vbool8_t mask, const uint16_t *base, vuint64m8_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg3ei64_ntl(mask, base, bindex, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint32mf2x3_t test_vluxseg3ei64_v_u32mf2x3_m_ntl_P1(vbool64_t mask, const uint32_t *base, vuint64m1_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg3ei64_ntl(mask, base, bindex, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint32m1x3_t test_vluxseg3ei64_v_u32m1x3_m_ntl_P1(vbool32_t mask, const uint32_t *base, vuint64m2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg3ei64_ntl(mask, base, bindex, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint32m2x3_t test_vluxseg3ei64_v_u32m2x3_m_ntl_P1(vbool16_t mask, const uint32_t *base, vuint64m4_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg3ei64_ntl(mask, base, bindex, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint64m1x3_t test_vluxseg3ei64_v_u64m1x3_m_ntl_P1(vbool64_t mask, const uint64_t *base, vuint64m1_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg3ei64_ntl(mask, base, bindex, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

vuint64m2x3_t test_vluxseg3ei64_v_u64m2x3_m_ntl_P1(vbool32_t mask, const uint64_t *base, vuint64m2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg3ei64_ntl(mask, base, bindex, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

