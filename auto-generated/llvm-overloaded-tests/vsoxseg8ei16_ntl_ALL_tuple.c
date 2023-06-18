// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -target-feature +zfh \
// RUN:   -target-feature +experimental-zvfh -disable-O0-optnone  \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

#include <riscv_ntlh.h>

void test_vsoxseg8ei16_v_f16mf4x8_ntl_ALL(_Float16 *base, vuint16mf4_t bindex, vfloat16mf4x8_t v_tuple, size_t vl, int domain) {
  return __riscv_vsoxseg8ei16_ntl(base, bindex, v_tuple, vl, __RISCV_NTLH_ALL);
}

void test_vsoxseg8ei16_v_f16mf2x8_ntl_ALL(_Float16 *base, vuint16mf2_t bindex, vfloat16mf2x8_t v_tuple, size_t vl, int domain) {
  return __riscv_vsoxseg8ei16_ntl(base, bindex, v_tuple, vl, __RISCV_NTLH_ALL);
}

void test_vsoxseg8ei16_v_f16m1x8_ntl_ALL(_Float16 *base, vuint16m1_t bindex, vfloat16m1x8_t v_tuple, size_t vl, int domain) {
  return __riscv_vsoxseg8ei16_ntl(base, bindex, v_tuple, vl, __RISCV_NTLH_ALL);
}

void test_vsoxseg8ei16_v_f32mf2x8_ntl_ALL(float *base, vuint16mf4_t bindex, vfloat32mf2x8_t v_tuple, size_t vl, int domain) {
  return __riscv_vsoxseg8ei16_ntl(base, bindex, v_tuple, vl, __RISCV_NTLH_ALL);
}

void test_vsoxseg8ei16_v_f32m1x8_ntl_ALL(float *base, vuint16mf2_t bindex, vfloat32m1x8_t v_tuple, size_t vl, int domain) {
  return __riscv_vsoxseg8ei16_ntl(base, bindex, v_tuple, vl, __RISCV_NTLH_ALL);
}

void test_vsoxseg8ei16_v_f64m1x8_ntl_ALL(double *base, vuint16mf4_t bindex, vfloat64m1x8_t v_tuple, size_t vl, int domain) {
  return __riscv_vsoxseg8ei16_ntl(base, bindex, v_tuple, vl, __RISCV_NTLH_ALL);
}

void test_vsoxseg8ei16_v_i8mf8x8_ntl_ALL(int8_t *base, vuint16mf4_t bindex, vint8mf8x8_t v_tuple, size_t vl, int domain) {
  return __riscv_vsoxseg8ei16_ntl(base, bindex, v_tuple, vl, __RISCV_NTLH_ALL);
}

void test_vsoxseg8ei16_v_i8mf4x8_ntl_ALL(int8_t *base, vuint16mf2_t bindex, vint8mf4x8_t v_tuple, size_t vl, int domain) {
  return __riscv_vsoxseg8ei16_ntl(base, bindex, v_tuple, vl, __RISCV_NTLH_ALL);
}

void test_vsoxseg8ei16_v_i8mf2x8_ntl_ALL(int8_t *base, vuint16m1_t bindex, vint8mf2x8_t v_tuple, size_t vl, int domain) {
  return __riscv_vsoxseg8ei16_ntl(base, bindex, v_tuple, vl, __RISCV_NTLH_ALL);
}

void test_vsoxseg8ei16_v_i8m1x8_ntl_ALL(int8_t *base, vuint16m2_t bindex, vint8m1x8_t v_tuple, size_t vl, int domain) {
  return __riscv_vsoxseg8ei16_ntl(base, bindex, v_tuple, vl, __RISCV_NTLH_ALL);
}

void test_vsoxseg8ei16_v_i16mf4x8_ntl_ALL(int16_t *base, vuint16mf4_t bindex, vint16mf4x8_t v_tuple, size_t vl, int domain) {
  return __riscv_vsoxseg8ei16_ntl(base, bindex, v_tuple, vl, __RISCV_NTLH_ALL);
}

void test_vsoxseg8ei16_v_i16mf2x8_ntl_ALL(int16_t *base, vuint16mf2_t bindex, vint16mf2x8_t v_tuple, size_t vl, int domain) {
  return __riscv_vsoxseg8ei16_ntl(base, bindex, v_tuple, vl, __RISCV_NTLH_ALL);
}

void test_vsoxseg8ei16_v_i16m1x8_ntl_ALL(int16_t *base, vuint16m1_t bindex, vint16m1x8_t v_tuple, size_t vl, int domain) {
  return __riscv_vsoxseg8ei16_ntl(base, bindex, v_tuple, vl, __RISCV_NTLH_ALL);
}

void test_vsoxseg8ei16_v_i32mf2x8_ntl_ALL(int32_t *base, vuint16mf4_t bindex, vint32mf2x8_t v_tuple, size_t vl, int domain) {
  return __riscv_vsoxseg8ei16_ntl(base, bindex, v_tuple, vl, __RISCV_NTLH_ALL);
}

void test_vsoxseg8ei16_v_i32m1x8_ntl_ALL(int32_t *base, vuint16mf2_t bindex, vint32m1x8_t v_tuple, size_t vl, int domain) {
  return __riscv_vsoxseg8ei16_ntl(base, bindex, v_tuple, vl, __RISCV_NTLH_ALL);
}

void test_vsoxseg8ei16_v_i64m1x8_ntl_ALL(int64_t *base, vuint16mf4_t bindex, vint64m1x8_t v_tuple, size_t vl, int domain) {
  return __riscv_vsoxseg8ei16_ntl(base, bindex, v_tuple, vl, __RISCV_NTLH_ALL);
}

void test_vsoxseg8ei16_v_u8mf8x8_ntl_ALL(uint8_t *base, vuint16mf4_t bindex, vuint8mf8x8_t v_tuple, size_t vl, int domain) {
  return __riscv_vsoxseg8ei16_ntl(base, bindex, v_tuple, vl, __RISCV_NTLH_ALL);
}

void test_vsoxseg8ei16_v_u8mf4x8_ntl_ALL(uint8_t *base, vuint16mf2_t bindex, vuint8mf4x8_t v_tuple, size_t vl, int domain) {
  return __riscv_vsoxseg8ei16_ntl(base, bindex, v_tuple, vl, __RISCV_NTLH_ALL);
}

void test_vsoxseg8ei16_v_u8mf2x8_ntl_ALL(uint8_t *base, vuint16m1_t bindex, vuint8mf2x8_t v_tuple, size_t vl, int domain) {
  return __riscv_vsoxseg8ei16_ntl(base, bindex, v_tuple, vl, __RISCV_NTLH_ALL);
}

void test_vsoxseg8ei16_v_u8m1x8_ntl_ALL(uint8_t *base, vuint16m2_t bindex, vuint8m1x8_t v_tuple, size_t vl, int domain) {
  return __riscv_vsoxseg8ei16_ntl(base, bindex, v_tuple, vl, __RISCV_NTLH_ALL);
}

void test_vsoxseg8ei16_v_u16mf4x8_ntl_ALL(uint16_t *base, vuint16mf4_t bindex, vuint16mf4x8_t v_tuple, size_t vl, int domain) {
  return __riscv_vsoxseg8ei16_ntl(base, bindex, v_tuple, vl, __RISCV_NTLH_ALL);
}

void test_vsoxseg8ei16_v_u16mf2x8_ntl_ALL(uint16_t *base, vuint16mf2_t bindex, vuint16mf2x8_t v_tuple, size_t vl, int domain) {
  return __riscv_vsoxseg8ei16_ntl(base, bindex, v_tuple, vl, __RISCV_NTLH_ALL);
}

void test_vsoxseg8ei16_v_u16m1x8_ntl_ALL(uint16_t *base, vuint16m1_t bindex, vuint16m1x8_t v_tuple, size_t vl, int domain) {
  return __riscv_vsoxseg8ei16_ntl(base, bindex, v_tuple, vl, __RISCV_NTLH_ALL);
}

void test_vsoxseg8ei16_v_u32mf2x8_ntl_ALL(uint32_t *base, vuint16mf4_t bindex, vuint32mf2x8_t v_tuple, size_t vl, int domain) {
  return __riscv_vsoxseg8ei16_ntl(base, bindex, v_tuple, vl, __RISCV_NTLH_ALL);
}

void test_vsoxseg8ei16_v_u32m1x8_ntl_ALL(uint32_t *base, vuint16mf2_t bindex, vuint32m1x8_t v_tuple, size_t vl, int domain) {
  return __riscv_vsoxseg8ei16_ntl(base, bindex, v_tuple, vl, __RISCV_NTLH_ALL);
}

void test_vsoxseg8ei16_v_u64m1x8_ntl_ALL(uint64_t *base, vuint16mf4_t bindex, vuint64m1x8_t v_tuple, size_t vl, int domain) {
  return __riscv_vsoxseg8ei16_ntl(base, bindex, v_tuple, vl, __RISCV_NTLH_ALL);
}

void test_vsoxseg8ei16_v_f16mf4x8_m_ntl_ALL(vbool64_t mask, _Float16 *base, vuint16mf4_t bindex, vfloat16mf4x8_t v_tuple, size_t vl, int domain) {
  return __riscv_vsoxseg8ei16_ntl(mask, base, bindex, v_tuple, vl, __RISCV_NTLH_ALL);
}

void test_vsoxseg8ei16_v_f16mf2x8_m_ntl_ALL(vbool32_t mask, _Float16 *base, vuint16mf2_t bindex, vfloat16mf2x8_t v_tuple, size_t vl, int domain) {
  return __riscv_vsoxseg8ei16_ntl(mask, base, bindex, v_tuple, vl, __RISCV_NTLH_ALL);
}

void test_vsoxseg8ei16_v_f16m1x8_m_ntl_ALL(vbool16_t mask, _Float16 *base, vuint16m1_t bindex, vfloat16m1x8_t v_tuple, size_t vl, int domain) {
  return __riscv_vsoxseg8ei16_ntl(mask, base, bindex, v_tuple, vl, __RISCV_NTLH_ALL);
}

void test_vsoxseg8ei16_v_f32mf2x8_m_ntl_ALL(vbool64_t mask, float *base, vuint16mf4_t bindex, vfloat32mf2x8_t v_tuple, size_t vl, int domain) {
  return __riscv_vsoxseg8ei16_ntl(mask, base, bindex, v_tuple, vl, __RISCV_NTLH_ALL);
}

void test_vsoxseg8ei16_v_f32m1x8_m_ntl_ALL(vbool32_t mask, float *base, vuint16mf2_t bindex, vfloat32m1x8_t v_tuple, size_t vl, int domain) {
  return __riscv_vsoxseg8ei16_ntl(mask, base, bindex, v_tuple, vl, __RISCV_NTLH_ALL);
}

void test_vsoxseg8ei16_v_f64m1x8_m_ntl_ALL(vbool64_t mask, double *base, vuint16mf4_t bindex, vfloat64m1x8_t v_tuple, size_t vl, int domain) {
  return __riscv_vsoxseg8ei16_ntl(mask, base, bindex, v_tuple, vl, __RISCV_NTLH_ALL);
}

void test_vsoxseg8ei16_v_i8mf8x8_m_ntl_ALL(vbool64_t mask, int8_t *base, vuint16mf4_t bindex, vint8mf8x8_t v_tuple, size_t vl, int domain) {
  return __riscv_vsoxseg8ei16_ntl(mask, base, bindex, v_tuple, vl, __RISCV_NTLH_ALL);
}

void test_vsoxseg8ei16_v_i8mf4x8_m_ntl_ALL(vbool32_t mask, int8_t *base, vuint16mf2_t bindex, vint8mf4x8_t v_tuple, size_t vl, int domain) {
  return __riscv_vsoxseg8ei16_ntl(mask, base, bindex, v_tuple, vl, __RISCV_NTLH_ALL);
}

void test_vsoxseg8ei16_v_i8mf2x8_m_ntl_ALL(vbool16_t mask, int8_t *base, vuint16m1_t bindex, vint8mf2x8_t v_tuple, size_t vl, int domain) {
  return __riscv_vsoxseg8ei16_ntl(mask, base, bindex, v_tuple, vl, __RISCV_NTLH_ALL);
}

void test_vsoxseg8ei16_v_i8m1x8_m_ntl_ALL(vbool8_t mask, int8_t *base, vuint16m2_t bindex, vint8m1x8_t v_tuple, size_t vl, int domain) {
  return __riscv_vsoxseg8ei16_ntl(mask, base, bindex, v_tuple, vl, __RISCV_NTLH_ALL);
}

void test_vsoxseg8ei16_v_i16mf4x8_m_ntl_ALL(vbool64_t mask, int16_t *base, vuint16mf4_t bindex, vint16mf4x8_t v_tuple, size_t vl, int domain) {
  return __riscv_vsoxseg8ei16_ntl(mask, base, bindex, v_tuple, vl, __RISCV_NTLH_ALL);
}

void test_vsoxseg8ei16_v_i16mf2x8_m_ntl_ALL(vbool32_t mask, int16_t *base, vuint16mf2_t bindex, vint16mf2x8_t v_tuple, size_t vl, int domain) {
  return __riscv_vsoxseg8ei16_ntl(mask, base, bindex, v_tuple, vl, __RISCV_NTLH_ALL);
}

void test_vsoxseg8ei16_v_i16m1x8_m_ntl_ALL(vbool16_t mask, int16_t *base, vuint16m1_t bindex, vint16m1x8_t v_tuple, size_t vl, int domain) {
  return __riscv_vsoxseg8ei16_ntl(mask, base, bindex, v_tuple, vl, __RISCV_NTLH_ALL);
}

void test_vsoxseg8ei16_v_i32mf2x8_m_ntl_ALL(vbool64_t mask, int32_t *base, vuint16mf4_t bindex, vint32mf2x8_t v_tuple, size_t vl, int domain) {
  return __riscv_vsoxseg8ei16_ntl(mask, base, bindex, v_tuple, vl, __RISCV_NTLH_ALL);
}

void test_vsoxseg8ei16_v_i32m1x8_m_ntl_ALL(vbool32_t mask, int32_t *base, vuint16mf2_t bindex, vint32m1x8_t v_tuple, size_t vl, int domain) {
  return __riscv_vsoxseg8ei16_ntl(mask, base, bindex, v_tuple, vl, __RISCV_NTLH_ALL);
}

void test_vsoxseg8ei16_v_i64m1x8_m_ntl_ALL(vbool64_t mask, int64_t *base, vuint16mf4_t bindex, vint64m1x8_t v_tuple, size_t vl, int domain) {
  return __riscv_vsoxseg8ei16_ntl(mask, base, bindex, v_tuple, vl, __RISCV_NTLH_ALL);
}

void test_vsoxseg8ei16_v_u8mf8x8_m_ntl_ALL(vbool64_t mask, uint8_t *base, vuint16mf4_t bindex, vuint8mf8x8_t v_tuple, size_t vl, int domain) {
  return __riscv_vsoxseg8ei16_ntl(mask, base, bindex, v_tuple, vl, __RISCV_NTLH_ALL);
}

void test_vsoxseg8ei16_v_u8mf4x8_m_ntl_ALL(vbool32_t mask, uint8_t *base, vuint16mf2_t bindex, vuint8mf4x8_t v_tuple, size_t vl, int domain) {
  return __riscv_vsoxseg8ei16_ntl(mask, base, bindex, v_tuple, vl, __RISCV_NTLH_ALL);
}

void test_vsoxseg8ei16_v_u8mf2x8_m_ntl_ALL(vbool16_t mask, uint8_t *base, vuint16m1_t bindex, vuint8mf2x8_t v_tuple, size_t vl, int domain) {
  return __riscv_vsoxseg8ei16_ntl(mask, base, bindex, v_tuple, vl, __RISCV_NTLH_ALL);
}

void test_vsoxseg8ei16_v_u8m1x8_m_ntl_ALL(vbool8_t mask, uint8_t *base, vuint16m2_t bindex, vuint8m1x8_t v_tuple, size_t vl, int domain) {
  return __riscv_vsoxseg8ei16_ntl(mask, base, bindex, v_tuple, vl, __RISCV_NTLH_ALL);
}

void test_vsoxseg8ei16_v_u16mf4x8_m_ntl_ALL(vbool64_t mask, uint16_t *base, vuint16mf4_t bindex, vuint16mf4x8_t v_tuple, size_t vl, int domain) {
  return __riscv_vsoxseg8ei16_ntl(mask, base, bindex, v_tuple, vl, __RISCV_NTLH_ALL);
}

void test_vsoxseg8ei16_v_u16mf2x8_m_ntl_ALL(vbool32_t mask, uint16_t *base, vuint16mf2_t bindex, vuint16mf2x8_t v_tuple, size_t vl, int domain) {
  return __riscv_vsoxseg8ei16_ntl(mask, base, bindex, v_tuple, vl, __RISCV_NTLH_ALL);
}

void test_vsoxseg8ei16_v_u16m1x8_m_ntl_ALL(vbool16_t mask, uint16_t *base, vuint16m1_t bindex, vuint16m1x8_t v_tuple, size_t vl, int domain) {
  return __riscv_vsoxseg8ei16_ntl(mask, base, bindex, v_tuple, vl, __RISCV_NTLH_ALL);
}

void test_vsoxseg8ei16_v_u32mf2x8_m_ntl_ALL(vbool64_t mask, uint32_t *base, vuint16mf4_t bindex, vuint32mf2x8_t v_tuple, size_t vl, int domain) {
  return __riscv_vsoxseg8ei16_ntl(mask, base, bindex, v_tuple, vl, __RISCV_NTLH_ALL);
}

void test_vsoxseg8ei16_v_u32m1x8_m_ntl_ALL(vbool32_t mask, uint32_t *base, vuint16mf2_t bindex, vuint32m1x8_t v_tuple, size_t vl, int domain) {
  return __riscv_vsoxseg8ei16_ntl(mask, base, bindex, v_tuple, vl, __RISCV_NTLH_ALL);
}

void test_vsoxseg8ei16_v_u64m1x8_m_ntl_ALL(vbool64_t mask, uint64_t *base, vuint16mf4_t bindex, vuint64m1x8_t v_tuple, size_t vl, int domain) {
  return __riscv_vsoxseg8ei16_ntl(mask, base, bindex, v_tuple, vl, __RISCV_NTLH_ALL);
}

