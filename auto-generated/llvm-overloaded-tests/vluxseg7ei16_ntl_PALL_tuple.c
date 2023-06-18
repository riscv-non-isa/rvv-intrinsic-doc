// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -target-feature +zfh \
// RUN:   -target-feature +experimental-zvfh -disable-O0-optnone  \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

#include <riscv_ntlh.h>

vfloat16mf4x7_t test_vluxseg7ei16_v_f16mf4x7_ntl_PALL(const _Float16 *base, vuint16mf4_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg7ei16_ntl(base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vfloat16mf2x7_t test_vluxseg7ei16_v_f16mf2x7_ntl_PALL(const _Float16 *base, vuint16mf2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg7ei16_ntl(base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vfloat16m1x7_t test_vluxseg7ei16_v_f16m1x7_ntl_PALL(const _Float16 *base, vuint16m1_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg7ei16_ntl(base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vfloat32mf2x7_t test_vluxseg7ei16_v_f32mf2x7_ntl_PALL(const float *base, vuint16mf4_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg7ei16_ntl(base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vfloat32m1x7_t test_vluxseg7ei16_v_f32m1x7_ntl_PALL(const float *base, vuint16mf2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg7ei16_ntl(base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vfloat64m1x7_t test_vluxseg7ei16_v_f64m1x7_ntl_PALL(const double *base, vuint16mf4_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg7ei16_ntl(base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint8mf8x7_t test_vluxseg7ei16_v_i8mf8x7_ntl_PALL(const int8_t *base, vuint16mf4_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg7ei16_ntl(base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint8mf4x7_t test_vluxseg7ei16_v_i8mf4x7_ntl_PALL(const int8_t *base, vuint16mf2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg7ei16_ntl(base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint8mf2x7_t test_vluxseg7ei16_v_i8mf2x7_ntl_PALL(const int8_t *base, vuint16m1_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg7ei16_ntl(base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint8m1x7_t test_vluxseg7ei16_v_i8m1x7_ntl_PALL(const int8_t *base, vuint16m2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg7ei16_ntl(base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint16mf4x7_t test_vluxseg7ei16_v_i16mf4x7_ntl_PALL(const int16_t *base, vuint16mf4_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg7ei16_ntl(base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint16mf2x7_t test_vluxseg7ei16_v_i16mf2x7_ntl_PALL(const int16_t *base, vuint16mf2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg7ei16_ntl(base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint16m1x7_t test_vluxseg7ei16_v_i16m1x7_ntl_PALL(const int16_t *base, vuint16m1_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg7ei16_ntl(base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint32mf2x7_t test_vluxseg7ei16_v_i32mf2x7_ntl_PALL(const int32_t *base, vuint16mf4_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg7ei16_ntl(base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint32m1x7_t test_vluxseg7ei16_v_i32m1x7_ntl_PALL(const int32_t *base, vuint16mf2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg7ei16_ntl(base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint64m1x7_t test_vluxseg7ei16_v_i64m1x7_ntl_PALL(const int64_t *base, vuint16mf4_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg7ei16_ntl(base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint8mf8x7_t test_vluxseg7ei16_v_u8mf8x7_ntl_PALL(const uint8_t *base, vuint16mf4_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg7ei16_ntl(base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint8mf4x7_t test_vluxseg7ei16_v_u8mf4x7_ntl_PALL(const uint8_t *base, vuint16mf2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg7ei16_ntl(base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint8mf2x7_t test_vluxseg7ei16_v_u8mf2x7_ntl_PALL(const uint8_t *base, vuint16m1_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg7ei16_ntl(base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint8m1x7_t test_vluxseg7ei16_v_u8m1x7_ntl_PALL(const uint8_t *base, vuint16m2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg7ei16_ntl(base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint16mf4x7_t test_vluxseg7ei16_v_u16mf4x7_ntl_PALL(const uint16_t *base, vuint16mf4_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg7ei16_ntl(base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint16mf2x7_t test_vluxseg7ei16_v_u16mf2x7_ntl_PALL(const uint16_t *base, vuint16mf2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg7ei16_ntl(base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint16m1x7_t test_vluxseg7ei16_v_u16m1x7_ntl_PALL(const uint16_t *base, vuint16m1_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg7ei16_ntl(base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint32mf2x7_t test_vluxseg7ei16_v_u32mf2x7_ntl_PALL(const uint32_t *base, vuint16mf4_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg7ei16_ntl(base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint32m1x7_t test_vluxseg7ei16_v_u32m1x7_ntl_PALL(const uint32_t *base, vuint16mf2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg7ei16_ntl(base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint64m1x7_t test_vluxseg7ei16_v_u64m1x7_ntl_PALL(const uint64_t *base, vuint16mf4_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg7ei16_ntl(base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vfloat16mf4x7_t test_vluxseg7ei16_v_f16mf4x7_m_ntl_PALL(vbool64_t mask, const _Float16 *base, vuint16mf4_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg7ei16_ntl(mask, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vfloat16mf2x7_t test_vluxseg7ei16_v_f16mf2x7_m_ntl_PALL(vbool32_t mask, const _Float16 *base, vuint16mf2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg7ei16_ntl(mask, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vfloat16m1x7_t test_vluxseg7ei16_v_f16m1x7_m_ntl_PALL(vbool16_t mask, const _Float16 *base, vuint16m1_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg7ei16_ntl(mask, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vfloat32mf2x7_t test_vluxseg7ei16_v_f32mf2x7_m_ntl_PALL(vbool64_t mask, const float *base, vuint16mf4_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg7ei16_ntl(mask, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vfloat32m1x7_t test_vluxseg7ei16_v_f32m1x7_m_ntl_PALL(vbool32_t mask, const float *base, vuint16mf2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg7ei16_ntl(mask, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vfloat64m1x7_t test_vluxseg7ei16_v_f64m1x7_m_ntl_PALL(vbool64_t mask, const double *base, vuint16mf4_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg7ei16_ntl(mask, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint8mf8x7_t test_vluxseg7ei16_v_i8mf8x7_m_ntl_PALL(vbool64_t mask, const int8_t *base, vuint16mf4_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg7ei16_ntl(mask, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint8mf4x7_t test_vluxseg7ei16_v_i8mf4x7_m_ntl_PALL(vbool32_t mask, const int8_t *base, vuint16mf2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg7ei16_ntl(mask, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint8mf2x7_t test_vluxseg7ei16_v_i8mf2x7_m_ntl_PALL(vbool16_t mask, const int8_t *base, vuint16m1_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg7ei16_ntl(mask, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint8m1x7_t test_vluxseg7ei16_v_i8m1x7_m_ntl_PALL(vbool8_t mask, const int8_t *base, vuint16m2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg7ei16_ntl(mask, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint16mf4x7_t test_vluxseg7ei16_v_i16mf4x7_m_ntl_PALL(vbool64_t mask, const int16_t *base, vuint16mf4_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg7ei16_ntl(mask, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint16mf2x7_t test_vluxseg7ei16_v_i16mf2x7_m_ntl_PALL(vbool32_t mask, const int16_t *base, vuint16mf2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg7ei16_ntl(mask, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint16m1x7_t test_vluxseg7ei16_v_i16m1x7_m_ntl_PALL(vbool16_t mask, const int16_t *base, vuint16m1_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg7ei16_ntl(mask, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint32mf2x7_t test_vluxseg7ei16_v_i32mf2x7_m_ntl_PALL(vbool64_t mask, const int32_t *base, vuint16mf4_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg7ei16_ntl(mask, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint32m1x7_t test_vluxseg7ei16_v_i32m1x7_m_ntl_PALL(vbool32_t mask, const int32_t *base, vuint16mf2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg7ei16_ntl(mask, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint64m1x7_t test_vluxseg7ei16_v_i64m1x7_m_ntl_PALL(vbool64_t mask, const int64_t *base, vuint16mf4_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg7ei16_ntl(mask, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint8mf8x7_t test_vluxseg7ei16_v_u8mf8x7_m_ntl_PALL(vbool64_t mask, const uint8_t *base, vuint16mf4_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg7ei16_ntl(mask, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint8mf4x7_t test_vluxseg7ei16_v_u8mf4x7_m_ntl_PALL(vbool32_t mask, const uint8_t *base, vuint16mf2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg7ei16_ntl(mask, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint8mf2x7_t test_vluxseg7ei16_v_u8mf2x7_m_ntl_PALL(vbool16_t mask, const uint8_t *base, vuint16m1_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg7ei16_ntl(mask, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint8m1x7_t test_vluxseg7ei16_v_u8m1x7_m_ntl_PALL(vbool8_t mask, const uint8_t *base, vuint16m2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg7ei16_ntl(mask, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint16mf4x7_t test_vluxseg7ei16_v_u16mf4x7_m_ntl_PALL(vbool64_t mask, const uint16_t *base, vuint16mf4_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg7ei16_ntl(mask, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint16mf2x7_t test_vluxseg7ei16_v_u16mf2x7_m_ntl_PALL(vbool32_t mask, const uint16_t *base, vuint16mf2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg7ei16_ntl(mask, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint16m1x7_t test_vluxseg7ei16_v_u16m1x7_m_ntl_PALL(vbool16_t mask, const uint16_t *base, vuint16m1_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg7ei16_ntl(mask, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint32mf2x7_t test_vluxseg7ei16_v_u32mf2x7_m_ntl_PALL(vbool64_t mask, const uint32_t *base, vuint16mf4_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg7ei16_ntl(mask, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint32m1x7_t test_vluxseg7ei16_v_u32m1x7_m_ntl_PALL(vbool32_t mask, const uint32_t *base, vuint16mf2_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg7ei16_ntl(mask, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint64m1x7_t test_vluxseg7ei16_v_u64m1x7_m_ntl_PALL(vbool64_t mask, const uint64_t *base, vuint16mf4_t bindex, size_t vl, int domain) {
  return __riscv_vluxseg7ei16_ntl(mask, base, bindex, vl, __RISCV_NTLH_ALL_PRIVATE);
}

