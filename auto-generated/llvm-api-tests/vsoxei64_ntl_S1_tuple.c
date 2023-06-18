// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -target-feature +zfh \
// RUN:   -target-feature +experimental-zvfh -disable-O0-optnone  \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

#include <riscv_ntlh.h>

void test_vsoxei64_v_f16mf4_ntl_S1(_Float16 *base, vuint64m1_t bindex, vfloat16mf4_t value, size_t vl, int domain) {
  return __riscv_vsoxei64_v_f16mf4_ntl(base, bindex, value, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vsoxei64_v_f16mf2_ntl_S1(_Float16 *base, vuint64m2_t bindex, vfloat16mf2_t value, size_t vl, int domain) {
  return __riscv_vsoxei64_v_f16mf2_ntl(base, bindex, value, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vsoxei64_v_f16m1_ntl_S1(_Float16 *base, vuint64m4_t bindex, vfloat16m1_t value, size_t vl, int domain) {
  return __riscv_vsoxei64_v_f16m1_ntl(base, bindex, value, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vsoxei64_v_f16m2_ntl_S1(_Float16 *base, vuint64m8_t bindex, vfloat16m2_t value, size_t vl, int domain) {
  return __riscv_vsoxei64_v_f16m2_ntl(base, bindex, value, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vsoxei64_v_f32mf2_ntl_S1(float *base, vuint64m1_t bindex, vfloat32mf2_t value, size_t vl, int domain) {
  return __riscv_vsoxei64_v_f32mf2_ntl(base, bindex, value, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vsoxei64_v_f32m1_ntl_S1(float *base, vuint64m2_t bindex, vfloat32m1_t value, size_t vl, int domain) {
  return __riscv_vsoxei64_v_f32m1_ntl(base, bindex, value, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vsoxei64_v_f32m2_ntl_S1(float *base, vuint64m4_t bindex, vfloat32m2_t value, size_t vl, int domain) {
  return __riscv_vsoxei64_v_f32m2_ntl(base, bindex, value, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vsoxei64_v_f32m4_ntl_S1(float *base, vuint64m8_t bindex, vfloat32m4_t value, size_t vl, int domain) {
  return __riscv_vsoxei64_v_f32m4_ntl(base, bindex, value, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vsoxei64_v_f64m1_ntl_S1(double *base, vuint64m1_t bindex, vfloat64m1_t value, size_t vl, int domain) {
  return __riscv_vsoxei64_v_f64m1_ntl(base, bindex, value, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vsoxei64_v_f64m2_ntl_S1(double *base, vuint64m2_t bindex, vfloat64m2_t value, size_t vl, int domain) {
  return __riscv_vsoxei64_v_f64m2_ntl(base, bindex, value, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vsoxei64_v_f64m4_ntl_S1(double *base, vuint64m4_t bindex, vfloat64m4_t value, size_t vl, int domain) {
  return __riscv_vsoxei64_v_f64m4_ntl(base, bindex, value, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vsoxei64_v_f64m8_ntl_S1(double *base, vuint64m8_t bindex, vfloat64m8_t value, size_t vl, int domain) {
  return __riscv_vsoxei64_v_f64m8_ntl(base, bindex, value, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vsoxei64_v_i8mf8_ntl_S1(int8_t *base, vuint64m1_t bindex, vint8mf8_t value, size_t vl, int domain) {
  return __riscv_vsoxei64_v_i8mf8_ntl(base, bindex, value, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vsoxei64_v_i8mf4_ntl_S1(int8_t *base, vuint64m2_t bindex, vint8mf4_t value, size_t vl, int domain) {
  return __riscv_vsoxei64_v_i8mf4_ntl(base, bindex, value, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vsoxei64_v_i8mf2_ntl_S1(int8_t *base, vuint64m4_t bindex, vint8mf2_t value, size_t vl, int domain) {
  return __riscv_vsoxei64_v_i8mf2_ntl(base, bindex, value, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vsoxei64_v_i8m1_ntl_S1(int8_t *base, vuint64m8_t bindex, vint8m1_t value, size_t vl, int domain) {
  return __riscv_vsoxei64_v_i8m1_ntl(base, bindex, value, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vsoxei64_v_i16mf4_ntl_S1(int16_t *base, vuint64m1_t bindex, vint16mf4_t value, size_t vl, int domain) {
  return __riscv_vsoxei64_v_i16mf4_ntl(base, bindex, value, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vsoxei64_v_i16mf2_ntl_S1(int16_t *base, vuint64m2_t bindex, vint16mf2_t value, size_t vl, int domain) {
  return __riscv_vsoxei64_v_i16mf2_ntl(base, bindex, value, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vsoxei64_v_i16m1_ntl_S1(int16_t *base, vuint64m4_t bindex, vint16m1_t value, size_t vl, int domain) {
  return __riscv_vsoxei64_v_i16m1_ntl(base, bindex, value, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vsoxei64_v_i16m2_ntl_S1(int16_t *base, vuint64m8_t bindex, vint16m2_t value, size_t vl, int domain) {
  return __riscv_vsoxei64_v_i16m2_ntl(base, bindex, value, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vsoxei64_v_i32mf2_ntl_S1(int32_t *base, vuint64m1_t bindex, vint32mf2_t value, size_t vl, int domain) {
  return __riscv_vsoxei64_v_i32mf2_ntl(base, bindex, value, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vsoxei64_v_i32m1_ntl_S1(int32_t *base, vuint64m2_t bindex, vint32m1_t value, size_t vl, int domain) {
  return __riscv_vsoxei64_v_i32m1_ntl(base, bindex, value, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vsoxei64_v_i32m2_ntl_S1(int32_t *base, vuint64m4_t bindex, vint32m2_t value, size_t vl, int domain) {
  return __riscv_vsoxei64_v_i32m2_ntl(base, bindex, value, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vsoxei64_v_i32m4_ntl_S1(int32_t *base, vuint64m8_t bindex, vint32m4_t value, size_t vl, int domain) {
  return __riscv_vsoxei64_v_i32m4_ntl(base, bindex, value, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vsoxei64_v_i64m1_ntl_S1(int64_t *base, vuint64m1_t bindex, vint64m1_t value, size_t vl, int domain) {
  return __riscv_vsoxei64_v_i64m1_ntl(base, bindex, value, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vsoxei64_v_i64m2_ntl_S1(int64_t *base, vuint64m2_t bindex, vint64m2_t value, size_t vl, int domain) {
  return __riscv_vsoxei64_v_i64m2_ntl(base, bindex, value, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vsoxei64_v_i64m4_ntl_S1(int64_t *base, vuint64m4_t bindex, vint64m4_t value, size_t vl, int domain) {
  return __riscv_vsoxei64_v_i64m4_ntl(base, bindex, value, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vsoxei64_v_i64m8_ntl_S1(int64_t *base, vuint64m8_t bindex, vint64m8_t value, size_t vl, int domain) {
  return __riscv_vsoxei64_v_i64m8_ntl(base, bindex, value, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vsoxei64_v_u8mf8_ntl_S1(uint8_t *base, vuint64m1_t bindex, vuint8mf8_t value, size_t vl, int domain) {
  return __riscv_vsoxei64_v_u8mf8_ntl(base, bindex, value, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vsoxei64_v_u8mf4_ntl_S1(uint8_t *base, vuint64m2_t bindex, vuint8mf4_t value, size_t vl, int domain) {
  return __riscv_vsoxei64_v_u8mf4_ntl(base, bindex, value, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vsoxei64_v_u8mf2_ntl_S1(uint8_t *base, vuint64m4_t bindex, vuint8mf2_t value, size_t vl, int domain) {
  return __riscv_vsoxei64_v_u8mf2_ntl(base, bindex, value, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vsoxei64_v_u8m1_ntl_S1(uint8_t *base, vuint64m8_t bindex, vuint8m1_t value, size_t vl, int domain) {
  return __riscv_vsoxei64_v_u8m1_ntl(base, bindex, value, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vsoxei64_v_u16mf4_ntl_S1(uint16_t *base, vuint64m1_t bindex, vuint16mf4_t value, size_t vl, int domain) {
  return __riscv_vsoxei64_v_u16mf4_ntl(base, bindex, value, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vsoxei64_v_u16mf2_ntl_S1(uint16_t *base, vuint64m2_t bindex, vuint16mf2_t value, size_t vl, int domain) {
  return __riscv_vsoxei64_v_u16mf2_ntl(base, bindex, value, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vsoxei64_v_u16m1_ntl_S1(uint16_t *base, vuint64m4_t bindex, vuint16m1_t value, size_t vl, int domain) {
  return __riscv_vsoxei64_v_u16m1_ntl(base, bindex, value, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vsoxei64_v_u16m2_ntl_S1(uint16_t *base, vuint64m8_t bindex, vuint16m2_t value, size_t vl, int domain) {
  return __riscv_vsoxei64_v_u16m2_ntl(base, bindex, value, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vsoxei64_v_u32mf2_ntl_S1(uint32_t *base, vuint64m1_t bindex, vuint32mf2_t value, size_t vl, int domain) {
  return __riscv_vsoxei64_v_u32mf2_ntl(base, bindex, value, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vsoxei64_v_u32m1_ntl_S1(uint32_t *base, vuint64m2_t bindex, vuint32m1_t value, size_t vl, int domain) {
  return __riscv_vsoxei64_v_u32m1_ntl(base, bindex, value, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vsoxei64_v_u32m2_ntl_S1(uint32_t *base, vuint64m4_t bindex, vuint32m2_t value, size_t vl, int domain) {
  return __riscv_vsoxei64_v_u32m2_ntl(base, bindex, value, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vsoxei64_v_u32m4_ntl_S1(uint32_t *base, vuint64m8_t bindex, vuint32m4_t value, size_t vl, int domain) {
  return __riscv_vsoxei64_v_u32m4_ntl(base, bindex, value, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vsoxei64_v_u64m1_ntl_S1(uint64_t *base, vuint64m1_t bindex, vuint64m1_t value, size_t vl, int domain) {
  return __riscv_vsoxei64_v_u64m1_ntl(base, bindex, value, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vsoxei64_v_u64m2_ntl_S1(uint64_t *base, vuint64m2_t bindex, vuint64m2_t value, size_t vl, int domain) {
  return __riscv_vsoxei64_v_u64m2_ntl(base, bindex, value, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vsoxei64_v_u64m4_ntl_S1(uint64_t *base, vuint64m4_t bindex, vuint64m4_t value, size_t vl, int domain) {
  return __riscv_vsoxei64_v_u64m4_ntl(base, bindex, value, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vsoxei64_v_u64m8_ntl_S1(uint64_t *base, vuint64m8_t bindex, vuint64m8_t value, size_t vl, int domain) {
  return __riscv_vsoxei64_v_u64m8_ntl(base, bindex, value, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vsoxei64_v_f16mf4_m_ntl_S1(vbool64_t mask, _Float16 *base, vuint64m1_t bindex, vfloat16mf4_t value, size_t vl, int domain) {
  return __riscv_vsoxei64_v_f16mf4_m_ntl(mask, base, bindex, value, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vsoxei64_v_f16mf2_m_ntl_S1(vbool32_t mask, _Float16 *base, vuint64m2_t bindex, vfloat16mf2_t value, size_t vl, int domain) {
  return __riscv_vsoxei64_v_f16mf2_m_ntl(mask, base, bindex, value, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vsoxei64_v_f16m1_m_ntl_S1(vbool16_t mask, _Float16 *base, vuint64m4_t bindex, vfloat16m1_t value, size_t vl, int domain) {
  return __riscv_vsoxei64_v_f16m1_m_ntl(mask, base, bindex, value, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vsoxei64_v_f16m2_m_ntl_S1(vbool8_t mask, _Float16 *base, vuint64m8_t bindex, vfloat16m2_t value, size_t vl, int domain) {
  return __riscv_vsoxei64_v_f16m2_m_ntl(mask, base, bindex, value, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vsoxei64_v_f32mf2_m_ntl_S1(vbool64_t mask, float *base, vuint64m1_t bindex, vfloat32mf2_t value, size_t vl, int domain) {
  return __riscv_vsoxei64_v_f32mf2_m_ntl(mask, base, bindex, value, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vsoxei64_v_f32m1_m_ntl_S1(vbool32_t mask, float *base, vuint64m2_t bindex, vfloat32m1_t value, size_t vl, int domain) {
  return __riscv_vsoxei64_v_f32m1_m_ntl(mask, base, bindex, value, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vsoxei64_v_f32m2_m_ntl_S1(vbool16_t mask, float *base, vuint64m4_t bindex, vfloat32m2_t value, size_t vl, int domain) {
  return __riscv_vsoxei64_v_f32m2_m_ntl(mask, base, bindex, value, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vsoxei64_v_f32m4_m_ntl_S1(vbool8_t mask, float *base, vuint64m8_t bindex, vfloat32m4_t value, size_t vl, int domain) {
  return __riscv_vsoxei64_v_f32m4_m_ntl(mask, base, bindex, value, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vsoxei64_v_f64m1_m_ntl_S1(vbool64_t mask, double *base, vuint64m1_t bindex, vfloat64m1_t value, size_t vl, int domain) {
  return __riscv_vsoxei64_v_f64m1_m_ntl(mask, base, bindex, value, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vsoxei64_v_f64m2_m_ntl_S1(vbool32_t mask, double *base, vuint64m2_t bindex, vfloat64m2_t value, size_t vl, int domain) {
  return __riscv_vsoxei64_v_f64m2_m_ntl(mask, base, bindex, value, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vsoxei64_v_f64m4_m_ntl_S1(vbool16_t mask, double *base, vuint64m4_t bindex, vfloat64m4_t value, size_t vl, int domain) {
  return __riscv_vsoxei64_v_f64m4_m_ntl(mask, base, bindex, value, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vsoxei64_v_f64m8_m_ntl_S1(vbool8_t mask, double *base, vuint64m8_t bindex, vfloat64m8_t value, size_t vl, int domain) {
  return __riscv_vsoxei64_v_f64m8_m_ntl(mask, base, bindex, value, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vsoxei64_v_i8mf8_m_ntl_S1(vbool64_t mask, int8_t *base, vuint64m1_t bindex, vint8mf8_t value, size_t vl, int domain) {
  return __riscv_vsoxei64_v_i8mf8_m_ntl(mask, base, bindex, value, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vsoxei64_v_i8mf4_m_ntl_S1(vbool32_t mask, int8_t *base, vuint64m2_t bindex, vint8mf4_t value, size_t vl, int domain) {
  return __riscv_vsoxei64_v_i8mf4_m_ntl(mask, base, bindex, value, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vsoxei64_v_i8mf2_m_ntl_S1(vbool16_t mask, int8_t *base, vuint64m4_t bindex, vint8mf2_t value, size_t vl, int domain) {
  return __riscv_vsoxei64_v_i8mf2_m_ntl(mask, base, bindex, value, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vsoxei64_v_i8m1_m_ntl_S1(vbool8_t mask, int8_t *base, vuint64m8_t bindex, vint8m1_t value, size_t vl, int domain) {
  return __riscv_vsoxei64_v_i8m1_m_ntl(mask, base, bindex, value, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vsoxei64_v_i16mf4_m_ntl_S1(vbool64_t mask, int16_t *base, vuint64m1_t bindex, vint16mf4_t value, size_t vl, int domain) {
  return __riscv_vsoxei64_v_i16mf4_m_ntl(mask, base, bindex, value, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vsoxei64_v_i16mf2_m_ntl_S1(vbool32_t mask, int16_t *base, vuint64m2_t bindex, vint16mf2_t value, size_t vl, int domain) {
  return __riscv_vsoxei64_v_i16mf2_m_ntl(mask, base, bindex, value, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vsoxei64_v_i16m1_m_ntl_S1(vbool16_t mask, int16_t *base, vuint64m4_t bindex, vint16m1_t value, size_t vl, int domain) {
  return __riscv_vsoxei64_v_i16m1_m_ntl(mask, base, bindex, value, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vsoxei64_v_i16m2_m_ntl_S1(vbool8_t mask, int16_t *base, vuint64m8_t bindex, vint16m2_t value, size_t vl, int domain) {
  return __riscv_vsoxei64_v_i16m2_m_ntl(mask, base, bindex, value, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vsoxei64_v_i32mf2_m_ntl_S1(vbool64_t mask, int32_t *base, vuint64m1_t bindex, vint32mf2_t value, size_t vl, int domain) {
  return __riscv_vsoxei64_v_i32mf2_m_ntl(mask, base, bindex, value, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vsoxei64_v_i32m1_m_ntl_S1(vbool32_t mask, int32_t *base, vuint64m2_t bindex, vint32m1_t value, size_t vl, int domain) {
  return __riscv_vsoxei64_v_i32m1_m_ntl(mask, base, bindex, value, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vsoxei64_v_i32m2_m_ntl_S1(vbool16_t mask, int32_t *base, vuint64m4_t bindex, vint32m2_t value, size_t vl, int domain) {
  return __riscv_vsoxei64_v_i32m2_m_ntl(mask, base, bindex, value, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vsoxei64_v_i32m4_m_ntl_S1(vbool8_t mask, int32_t *base, vuint64m8_t bindex, vint32m4_t value, size_t vl, int domain) {
  return __riscv_vsoxei64_v_i32m4_m_ntl(mask, base, bindex, value, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vsoxei64_v_i64m1_m_ntl_S1(vbool64_t mask, int64_t *base, vuint64m1_t bindex, vint64m1_t value, size_t vl, int domain) {
  return __riscv_vsoxei64_v_i64m1_m_ntl(mask, base, bindex, value, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vsoxei64_v_i64m2_m_ntl_S1(vbool32_t mask, int64_t *base, vuint64m2_t bindex, vint64m2_t value, size_t vl, int domain) {
  return __riscv_vsoxei64_v_i64m2_m_ntl(mask, base, bindex, value, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vsoxei64_v_i64m4_m_ntl_S1(vbool16_t mask, int64_t *base, vuint64m4_t bindex, vint64m4_t value, size_t vl, int domain) {
  return __riscv_vsoxei64_v_i64m4_m_ntl(mask, base, bindex, value, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vsoxei64_v_i64m8_m_ntl_S1(vbool8_t mask, int64_t *base, vuint64m8_t bindex, vint64m8_t value, size_t vl, int domain) {
  return __riscv_vsoxei64_v_i64m8_m_ntl(mask, base, bindex, value, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vsoxei64_v_u8mf8_m_ntl_S1(vbool64_t mask, uint8_t *base, vuint64m1_t bindex, vuint8mf8_t value, size_t vl, int domain) {
  return __riscv_vsoxei64_v_u8mf8_m_ntl(mask, base, bindex, value, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vsoxei64_v_u8mf4_m_ntl_S1(vbool32_t mask, uint8_t *base, vuint64m2_t bindex, vuint8mf4_t value, size_t vl, int domain) {
  return __riscv_vsoxei64_v_u8mf4_m_ntl(mask, base, bindex, value, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vsoxei64_v_u8mf2_m_ntl_S1(vbool16_t mask, uint8_t *base, vuint64m4_t bindex, vuint8mf2_t value, size_t vl, int domain) {
  return __riscv_vsoxei64_v_u8mf2_m_ntl(mask, base, bindex, value, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vsoxei64_v_u8m1_m_ntl_S1(vbool8_t mask, uint8_t *base, vuint64m8_t bindex, vuint8m1_t value, size_t vl, int domain) {
  return __riscv_vsoxei64_v_u8m1_m_ntl(mask, base, bindex, value, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vsoxei64_v_u16mf4_m_ntl_S1(vbool64_t mask, uint16_t *base, vuint64m1_t bindex, vuint16mf4_t value, size_t vl, int domain) {
  return __riscv_vsoxei64_v_u16mf4_m_ntl(mask, base, bindex, value, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vsoxei64_v_u16mf2_m_ntl_S1(vbool32_t mask, uint16_t *base, vuint64m2_t bindex, vuint16mf2_t value, size_t vl, int domain) {
  return __riscv_vsoxei64_v_u16mf2_m_ntl(mask, base, bindex, value, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vsoxei64_v_u16m1_m_ntl_S1(vbool16_t mask, uint16_t *base, vuint64m4_t bindex, vuint16m1_t value, size_t vl, int domain) {
  return __riscv_vsoxei64_v_u16m1_m_ntl(mask, base, bindex, value, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vsoxei64_v_u16m2_m_ntl_S1(vbool8_t mask, uint16_t *base, vuint64m8_t bindex, vuint16m2_t value, size_t vl, int domain) {
  return __riscv_vsoxei64_v_u16m2_m_ntl(mask, base, bindex, value, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vsoxei64_v_u32mf2_m_ntl_S1(vbool64_t mask, uint32_t *base, vuint64m1_t bindex, vuint32mf2_t value, size_t vl, int domain) {
  return __riscv_vsoxei64_v_u32mf2_m_ntl(mask, base, bindex, value, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vsoxei64_v_u32m1_m_ntl_S1(vbool32_t mask, uint32_t *base, vuint64m2_t bindex, vuint32m1_t value, size_t vl, int domain) {
  return __riscv_vsoxei64_v_u32m1_m_ntl(mask, base, bindex, value, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vsoxei64_v_u32m2_m_ntl_S1(vbool16_t mask, uint32_t *base, vuint64m4_t bindex, vuint32m2_t value, size_t vl, int domain) {
  return __riscv_vsoxei64_v_u32m2_m_ntl(mask, base, bindex, value, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vsoxei64_v_u32m4_m_ntl_S1(vbool8_t mask, uint32_t *base, vuint64m8_t bindex, vuint32m4_t value, size_t vl, int domain) {
  return __riscv_vsoxei64_v_u32m4_m_ntl(mask, base, bindex, value, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vsoxei64_v_u64m1_m_ntl_S1(vbool64_t mask, uint64_t *base, vuint64m1_t bindex, vuint64m1_t value, size_t vl, int domain) {
  return __riscv_vsoxei64_v_u64m1_m_ntl(mask, base, bindex, value, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vsoxei64_v_u64m2_m_ntl_S1(vbool32_t mask, uint64_t *base, vuint64m2_t bindex, vuint64m2_t value, size_t vl, int domain) {
  return __riscv_vsoxei64_v_u64m2_m_ntl(mask, base, bindex, value, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vsoxei64_v_u64m4_m_ntl_S1(vbool16_t mask, uint64_t *base, vuint64m4_t bindex, vuint64m4_t value, size_t vl, int domain) {
  return __riscv_vsoxei64_v_u64m4_m_ntl(mask, base, bindex, value, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

void test_vsoxei64_v_u64m8_m_ntl_S1(vbool8_t mask, uint64_t *base, vuint64m8_t bindex, vuint64m8_t value, size_t vl, int domain) {
  return __riscv_vsoxei64_v_u64m8_m_ntl(mask, base, bindex, value, vl, __RISCV_NTLH_INNERMOST_SHARED);
}

