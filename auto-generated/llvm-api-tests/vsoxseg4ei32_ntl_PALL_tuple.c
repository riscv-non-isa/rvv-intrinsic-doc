// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -target-feature +zfh \
// RUN:   -target-feature +experimental-zvfh -disable-O0-optnone  \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

#include <riscv_ntlh.h>

void test_vsoxseg4ei32_v_f16mf4x4_ntl_PALL(_Float16 *base, vuint32mf2_t bindex, vfloat16mf4x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vsoxseg4ei32_v_f16mf4x4_ntl(base, bindex, v_tuple, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vsoxseg4ei32_v_f16mf2x4_ntl_PALL(_Float16 *base, vuint32m1_t bindex, vfloat16mf2x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vsoxseg4ei32_v_f16mf2x4_ntl(base, bindex, v_tuple, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vsoxseg4ei32_v_f16m1x4_ntl_PALL(_Float16 *base, vuint32m2_t bindex, vfloat16m1x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vsoxseg4ei32_v_f16m1x4_ntl(base, bindex, v_tuple, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vsoxseg4ei32_v_f16m2x4_ntl_PALL(_Float16 *base, vuint32m4_t bindex, vfloat16m2x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vsoxseg4ei32_v_f16m2x4_ntl(base, bindex, v_tuple, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vsoxseg4ei32_v_f32mf2x4_ntl_PALL(float *base, vuint32mf2_t bindex, vfloat32mf2x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vsoxseg4ei32_v_f32mf2x4_ntl(base, bindex, v_tuple, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vsoxseg4ei32_v_f32m1x4_ntl_PALL(float *base, vuint32m1_t bindex, vfloat32m1x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vsoxseg4ei32_v_f32m1x4_ntl(base, bindex, v_tuple, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vsoxseg4ei32_v_f32m2x4_ntl_PALL(float *base, vuint32m2_t bindex, vfloat32m2x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vsoxseg4ei32_v_f32m2x4_ntl(base, bindex, v_tuple, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vsoxseg4ei32_v_f64m1x4_ntl_PALL(double *base, vuint32mf2_t bindex, vfloat64m1x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vsoxseg4ei32_v_f64m1x4_ntl(base, bindex, v_tuple, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vsoxseg4ei32_v_f64m2x4_ntl_PALL(double *base, vuint32m1_t bindex, vfloat64m2x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vsoxseg4ei32_v_f64m2x4_ntl(base, bindex, v_tuple, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vsoxseg4ei32_v_i8mf8x4_ntl_PALL(int8_t *base, vuint32mf2_t bindex, vint8mf8x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vsoxseg4ei32_v_i8mf8x4_ntl(base, bindex, v_tuple, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vsoxseg4ei32_v_i8mf4x4_ntl_PALL(int8_t *base, vuint32m1_t bindex, vint8mf4x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vsoxseg4ei32_v_i8mf4x4_ntl(base, bindex, v_tuple, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vsoxseg4ei32_v_i8mf2x4_ntl_PALL(int8_t *base, vuint32m2_t bindex, vint8mf2x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vsoxseg4ei32_v_i8mf2x4_ntl(base, bindex, v_tuple, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vsoxseg4ei32_v_i8m1x4_ntl_PALL(int8_t *base, vuint32m4_t bindex, vint8m1x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vsoxseg4ei32_v_i8m1x4_ntl(base, bindex, v_tuple, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vsoxseg4ei32_v_i8m2x4_ntl_PALL(int8_t *base, vuint32m8_t bindex, vint8m2x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vsoxseg4ei32_v_i8m2x4_ntl(base, bindex, v_tuple, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vsoxseg4ei32_v_i16mf4x4_ntl_PALL(int16_t *base, vuint32mf2_t bindex, vint16mf4x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vsoxseg4ei32_v_i16mf4x4_ntl(base, bindex, v_tuple, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vsoxseg4ei32_v_i16mf2x4_ntl_PALL(int16_t *base, vuint32m1_t bindex, vint16mf2x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vsoxseg4ei32_v_i16mf2x4_ntl(base, bindex, v_tuple, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vsoxseg4ei32_v_i16m1x4_ntl_PALL(int16_t *base, vuint32m2_t bindex, vint16m1x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vsoxseg4ei32_v_i16m1x4_ntl(base, bindex, v_tuple, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vsoxseg4ei32_v_i16m2x4_ntl_PALL(int16_t *base, vuint32m4_t bindex, vint16m2x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vsoxseg4ei32_v_i16m2x4_ntl(base, bindex, v_tuple, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vsoxseg4ei32_v_i32mf2x4_ntl_PALL(int32_t *base, vuint32mf2_t bindex, vint32mf2x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vsoxseg4ei32_v_i32mf2x4_ntl(base, bindex, v_tuple, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vsoxseg4ei32_v_i32m1x4_ntl_PALL(int32_t *base, vuint32m1_t bindex, vint32m1x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vsoxseg4ei32_v_i32m1x4_ntl(base, bindex, v_tuple, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vsoxseg4ei32_v_i32m2x4_ntl_PALL(int32_t *base, vuint32m2_t bindex, vint32m2x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vsoxseg4ei32_v_i32m2x4_ntl(base, bindex, v_tuple, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vsoxseg4ei32_v_i64m1x4_ntl_PALL(int64_t *base, vuint32mf2_t bindex, vint64m1x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vsoxseg4ei32_v_i64m1x4_ntl(base, bindex, v_tuple, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vsoxseg4ei32_v_i64m2x4_ntl_PALL(int64_t *base, vuint32m1_t bindex, vint64m2x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vsoxseg4ei32_v_i64m2x4_ntl(base, bindex, v_tuple, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vsoxseg4ei32_v_u8mf8x4_ntl_PALL(uint8_t *base, vuint32mf2_t bindex, vuint8mf8x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vsoxseg4ei32_v_u8mf8x4_ntl(base, bindex, v_tuple, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vsoxseg4ei32_v_u8mf4x4_ntl_PALL(uint8_t *base, vuint32m1_t bindex, vuint8mf4x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vsoxseg4ei32_v_u8mf4x4_ntl(base, bindex, v_tuple, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vsoxseg4ei32_v_u8mf2x4_ntl_PALL(uint8_t *base, vuint32m2_t bindex, vuint8mf2x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vsoxseg4ei32_v_u8mf2x4_ntl(base, bindex, v_tuple, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vsoxseg4ei32_v_u8m1x4_ntl_PALL(uint8_t *base, vuint32m4_t bindex, vuint8m1x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vsoxseg4ei32_v_u8m1x4_ntl(base, bindex, v_tuple, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vsoxseg4ei32_v_u8m2x4_ntl_PALL(uint8_t *base, vuint32m8_t bindex, vuint8m2x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vsoxseg4ei32_v_u8m2x4_ntl(base, bindex, v_tuple, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vsoxseg4ei32_v_u16mf4x4_ntl_PALL(uint16_t *base, vuint32mf2_t bindex, vuint16mf4x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vsoxseg4ei32_v_u16mf4x4_ntl(base, bindex, v_tuple, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vsoxseg4ei32_v_u16mf2x4_ntl_PALL(uint16_t *base, vuint32m1_t bindex, vuint16mf2x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vsoxseg4ei32_v_u16mf2x4_ntl(base, bindex, v_tuple, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vsoxseg4ei32_v_u16m1x4_ntl_PALL(uint16_t *base, vuint32m2_t bindex, vuint16m1x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vsoxseg4ei32_v_u16m1x4_ntl(base, bindex, v_tuple, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vsoxseg4ei32_v_u16m2x4_ntl_PALL(uint16_t *base, vuint32m4_t bindex, vuint16m2x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vsoxseg4ei32_v_u16m2x4_ntl(base, bindex, v_tuple, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vsoxseg4ei32_v_u32mf2x4_ntl_PALL(uint32_t *base, vuint32mf2_t bindex, vuint32mf2x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vsoxseg4ei32_v_u32mf2x4_ntl(base, bindex, v_tuple, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vsoxseg4ei32_v_u32m1x4_ntl_PALL(uint32_t *base, vuint32m1_t bindex, vuint32m1x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vsoxseg4ei32_v_u32m1x4_ntl(base, bindex, v_tuple, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vsoxseg4ei32_v_u32m2x4_ntl_PALL(uint32_t *base, vuint32m2_t bindex, vuint32m2x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vsoxseg4ei32_v_u32m2x4_ntl(base, bindex, v_tuple, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vsoxseg4ei32_v_u64m1x4_ntl_PALL(uint64_t *base, vuint32mf2_t bindex, vuint64m1x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vsoxseg4ei32_v_u64m1x4_ntl(base, bindex, v_tuple, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vsoxseg4ei32_v_u64m2x4_ntl_PALL(uint64_t *base, vuint32m1_t bindex, vuint64m2x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vsoxseg4ei32_v_u64m2x4_ntl(base, bindex, v_tuple, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vsoxseg4ei32_v_f16mf4x4_m_ntl_PALL(vbool64_t mask, _Float16 *base, vuint32mf2_t bindex, vfloat16mf4x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vsoxseg4ei32_v_f16mf4x4_m_ntl(mask, base, bindex, v_tuple, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vsoxseg4ei32_v_f16mf2x4_m_ntl_PALL(vbool32_t mask, _Float16 *base, vuint32m1_t bindex, vfloat16mf2x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vsoxseg4ei32_v_f16mf2x4_m_ntl(mask, base, bindex, v_tuple, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vsoxseg4ei32_v_f16m1x4_m_ntl_PALL(vbool16_t mask, _Float16 *base, vuint32m2_t bindex, vfloat16m1x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vsoxseg4ei32_v_f16m1x4_m_ntl(mask, base, bindex, v_tuple, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vsoxseg4ei32_v_f16m2x4_m_ntl_PALL(vbool8_t mask, _Float16 *base, vuint32m4_t bindex, vfloat16m2x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vsoxseg4ei32_v_f16m2x4_m_ntl(mask, base, bindex, v_tuple, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vsoxseg4ei32_v_f32mf2x4_m_ntl_PALL(vbool64_t mask, float *base, vuint32mf2_t bindex, vfloat32mf2x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vsoxseg4ei32_v_f32mf2x4_m_ntl(mask, base, bindex, v_tuple, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vsoxseg4ei32_v_f32m1x4_m_ntl_PALL(vbool32_t mask, float *base, vuint32m1_t bindex, vfloat32m1x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vsoxseg4ei32_v_f32m1x4_m_ntl(mask, base, bindex, v_tuple, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vsoxseg4ei32_v_f32m2x4_m_ntl_PALL(vbool16_t mask, float *base, vuint32m2_t bindex, vfloat32m2x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vsoxseg4ei32_v_f32m2x4_m_ntl(mask, base, bindex, v_tuple, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vsoxseg4ei32_v_f64m1x4_m_ntl_PALL(vbool64_t mask, double *base, vuint32mf2_t bindex, vfloat64m1x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vsoxseg4ei32_v_f64m1x4_m_ntl(mask, base, bindex, v_tuple, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vsoxseg4ei32_v_f64m2x4_m_ntl_PALL(vbool32_t mask, double *base, vuint32m1_t bindex, vfloat64m2x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vsoxseg4ei32_v_f64m2x4_m_ntl(mask, base, bindex, v_tuple, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vsoxseg4ei32_v_i8mf8x4_m_ntl_PALL(vbool64_t mask, int8_t *base, vuint32mf2_t bindex, vint8mf8x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vsoxseg4ei32_v_i8mf8x4_m_ntl(mask, base, bindex, v_tuple, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vsoxseg4ei32_v_i8mf4x4_m_ntl_PALL(vbool32_t mask, int8_t *base, vuint32m1_t bindex, vint8mf4x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vsoxseg4ei32_v_i8mf4x4_m_ntl(mask, base, bindex, v_tuple, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vsoxseg4ei32_v_i8mf2x4_m_ntl_PALL(vbool16_t mask, int8_t *base, vuint32m2_t bindex, vint8mf2x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vsoxseg4ei32_v_i8mf2x4_m_ntl(mask, base, bindex, v_tuple, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vsoxseg4ei32_v_i8m1x4_m_ntl_PALL(vbool8_t mask, int8_t *base, vuint32m4_t bindex, vint8m1x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vsoxseg4ei32_v_i8m1x4_m_ntl(mask, base, bindex, v_tuple, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vsoxseg4ei32_v_i8m2x4_m_ntl_PALL(vbool4_t mask, int8_t *base, vuint32m8_t bindex, vint8m2x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vsoxseg4ei32_v_i8m2x4_m_ntl(mask, base, bindex, v_tuple, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vsoxseg4ei32_v_i16mf4x4_m_ntl_PALL(vbool64_t mask, int16_t *base, vuint32mf2_t bindex, vint16mf4x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vsoxseg4ei32_v_i16mf4x4_m_ntl(mask, base, bindex, v_tuple, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vsoxseg4ei32_v_i16mf2x4_m_ntl_PALL(vbool32_t mask, int16_t *base, vuint32m1_t bindex, vint16mf2x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vsoxseg4ei32_v_i16mf2x4_m_ntl(mask, base, bindex, v_tuple, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vsoxseg4ei32_v_i16m1x4_m_ntl_PALL(vbool16_t mask, int16_t *base, vuint32m2_t bindex, vint16m1x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vsoxseg4ei32_v_i16m1x4_m_ntl(mask, base, bindex, v_tuple, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vsoxseg4ei32_v_i16m2x4_m_ntl_PALL(vbool8_t mask, int16_t *base, vuint32m4_t bindex, vint16m2x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vsoxseg4ei32_v_i16m2x4_m_ntl(mask, base, bindex, v_tuple, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vsoxseg4ei32_v_i32mf2x4_m_ntl_PALL(vbool64_t mask, int32_t *base, vuint32mf2_t bindex, vint32mf2x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vsoxseg4ei32_v_i32mf2x4_m_ntl(mask, base, bindex, v_tuple, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vsoxseg4ei32_v_i32m1x4_m_ntl_PALL(vbool32_t mask, int32_t *base, vuint32m1_t bindex, vint32m1x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vsoxseg4ei32_v_i32m1x4_m_ntl(mask, base, bindex, v_tuple, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vsoxseg4ei32_v_i32m2x4_m_ntl_PALL(vbool16_t mask, int32_t *base, vuint32m2_t bindex, vint32m2x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vsoxseg4ei32_v_i32m2x4_m_ntl(mask, base, bindex, v_tuple, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vsoxseg4ei32_v_i64m1x4_m_ntl_PALL(vbool64_t mask, int64_t *base, vuint32mf2_t bindex, vint64m1x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vsoxseg4ei32_v_i64m1x4_m_ntl(mask, base, bindex, v_tuple, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vsoxseg4ei32_v_i64m2x4_m_ntl_PALL(vbool32_t mask, int64_t *base, vuint32m1_t bindex, vint64m2x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vsoxseg4ei32_v_i64m2x4_m_ntl(mask, base, bindex, v_tuple, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vsoxseg4ei32_v_u8mf8x4_m_ntl_PALL(vbool64_t mask, uint8_t *base, vuint32mf2_t bindex, vuint8mf8x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vsoxseg4ei32_v_u8mf8x4_m_ntl(mask, base, bindex, v_tuple, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vsoxseg4ei32_v_u8mf4x4_m_ntl_PALL(vbool32_t mask, uint8_t *base, vuint32m1_t bindex, vuint8mf4x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vsoxseg4ei32_v_u8mf4x4_m_ntl(mask, base, bindex, v_tuple, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vsoxseg4ei32_v_u8mf2x4_m_ntl_PALL(vbool16_t mask, uint8_t *base, vuint32m2_t bindex, vuint8mf2x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vsoxseg4ei32_v_u8mf2x4_m_ntl(mask, base, bindex, v_tuple, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vsoxseg4ei32_v_u8m1x4_m_ntl_PALL(vbool8_t mask, uint8_t *base, vuint32m4_t bindex, vuint8m1x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vsoxseg4ei32_v_u8m1x4_m_ntl(mask, base, bindex, v_tuple, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vsoxseg4ei32_v_u8m2x4_m_ntl_PALL(vbool4_t mask, uint8_t *base, vuint32m8_t bindex, vuint8m2x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vsoxseg4ei32_v_u8m2x4_m_ntl(mask, base, bindex, v_tuple, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vsoxseg4ei32_v_u16mf4x4_m_ntl_PALL(vbool64_t mask, uint16_t *base, vuint32mf2_t bindex, vuint16mf4x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vsoxseg4ei32_v_u16mf4x4_m_ntl(mask, base, bindex, v_tuple, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vsoxseg4ei32_v_u16mf2x4_m_ntl_PALL(vbool32_t mask, uint16_t *base, vuint32m1_t bindex, vuint16mf2x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vsoxseg4ei32_v_u16mf2x4_m_ntl(mask, base, bindex, v_tuple, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vsoxseg4ei32_v_u16m1x4_m_ntl_PALL(vbool16_t mask, uint16_t *base, vuint32m2_t bindex, vuint16m1x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vsoxseg4ei32_v_u16m1x4_m_ntl(mask, base, bindex, v_tuple, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vsoxseg4ei32_v_u16m2x4_m_ntl_PALL(vbool8_t mask, uint16_t *base, vuint32m4_t bindex, vuint16m2x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vsoxseg4ei32_v_u16m2x4_m_ntl(mask, base, bindex, v_tuple, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vsoxseg4ei32_v_u32mf2x4_m_ntl_PALL(vbool64_t mask, uint32_t *base, vuint32mf2_t bindex, vuint32mf2x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vsoxseg4ei32_v_u32mf2x4_m_ntl(mask, base, bindex, v_tuple, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vsoxseg4ei32_v_u32m1x4_m_ntl_PALL(vbool32_t mask, uint32_t *base, vuint32m1_t bindex, vuint32m1x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vsoxseg4ei32_v_u32m1x4_m_ntl(mask, base, bindex, v_tuple, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vsoxseg4ei32_v_u32m2x4_m_ntl_PALL(vbool16_t mask, uint32_t *base, vuint32m2_t bindex, vuint32m2x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vsoxseg4ei32_v_u32m2x4_m_ntl(mask, base, bindex, v_tuple, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vsoxseg4ei32_v_u64m1x4_m_ntl_PALL(vbool64_t mask, uint64_t *base, vuint32mf2_t bindex, vuint64m1x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vsoxseg4ei32_v_u64m1x4_m_ntl(mask, base, bindex, v_tuple, vl, __RISCV_NTLH_ALL_PRIVATE);
}

void test_vsoxseg4ei32_v_u64m2x4_m_ntl_PALL(vbool32_t mask, uint64_t *base, vuint32m1_t bindex, vuint64m2x4_t v_tuple, size_t vl, int domain) {
  return __riscv_vsoxseg4ei32_v_u64m2x4_m_ntl(mask, base, bindex, v_tuple, vl, __RISCV_NTLH_ALL_PRIVATE);
}

