// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -target-feature +zfh \
// RUN:   -target-feature +experimental-zvfh -disable-O0-optnone  \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

#include <riscv_ntlh.h>

void test_vsuxseg7ei8_v_f16mf4x7_ntl_P1(_Float16 *base, vuint8mf8_t bindex, vfloat16mf4x7_t v_tuple, size_t vl, int domain) {
  return __riscv_vsuxseg7ei8_ntl(base, bindex, v_tuple, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

void test_vsuxseg7ei8_v_f16mf2x7_ntl_P1(_Float16 *base, vuint8mf4_t bindex, vfloat16mf2x7_t v_tuple, size_t vl, int domain) {
  return __riscv_vsuxseg7ei8_ntl(base, bindex, v_tuple, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

void test_vsuxseg7ei8_v_f16m1x7_ntl_P1(_Float16 *base, vuint8mf2_t bindex, vfloat16m1x7_t v_tuple, size_t vl, int domain) {
  return __riscv_vsuxseg7ei8_ntl(base, bindex, v_tuple, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

void test_vsuxseg7ei8_v_f32mf2x7_ntl_P1(float *base, vuint8mf8_t bindex, vfloat32mf2x7_t v_tuple, size_t vl, int domain) {
  return __riscv_vsuxseg7ei8_ntl(base, bindex, v_tuple, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

void test_vsuxseg7ei8_v_f32m1x7_ntl_P1(float *base, vuint8mf4_t bindex, vfloat32m1x7_t v_tuple, size_t vl, int domain) {
  return __riscv_vsuxseg7ei8_ntl(base, bindex, v_tuple, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

void test_vsuxseg7ei8_v_f64m1x7_ntl_P1(double *base, vuint8mf8_t bindex, vfloat64m1x7_t v_tuple, size_t vl, int domain) {
  return __riscv_vsuxseg7ei8_ntl(base, bindex, v_tuple, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

void test_vsuxseg7ei8_v_i8mf8x7_ntl_P1(int8_t *base, vuint8mf8_t bindex, vint8mf8x7_t v_tuple, size_t vl, int domain) {
  return __riscv_vsuxseg7ei8_ntl(base, bindex, v_tuple, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

void test_vsuxseg7ei8_v_i8mf4x7_ntl_P1(int8_t *base, vuint8mf4_t bindex, vint8mf4x7_t v_tuple, size_t vl, int domain) {
  return __riscv_vsuxseg7ei8_ntl(base, bindex, v_tuple, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

void test_vsuxseg7ei8_v_i8mf2x7_ntl_P1(int8_t *base, vuint8mf2_t bindex, vint8mf2x7_t v_tuple, size_t vl, int domain) {
  return __riscv_vsuxseg7ei8_ntl(base, bindex, v_tuple, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

void test_vsuxseg7ei8_v_i8m1x7_ntl_P1(int8_t *base, vuint8m1_t bindex, vint8m1x7_t v_tuple, size_t vl, int domain) {
  return __riscv_vsuxseg7ei8_ntl(base, bindex, v_tuple, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

void test_vsuxseg7ei8_v_i16mf4x7_ntl_P1(int16_t *base, vuint8mf8_t bindex, vint16mf4x7_t v_tuple, size_t vl, int domain) {
  return __riscv_vsuxseg7ei8_ntl(base, bindex, v_tuple, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

void test_vsuxseg7ei8_v_i16mf2x7_ntl_P1(int16_t *base, vuint8mf4_t bindex, vint16mf2x7_t v_tuple, size_t vl, int domain) {
  return __riscv_vsuxseg7ei8_ntl(base, bindex, v_tuple, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

void test_vsuxseg7ei8_v_i16m1x7_ntl_P1(int16_t *base, vuint8mf2_t bindex, vint16m1x7_t v_tuple, size_t vl, int domain) {
  return __riscv_vsuxseg7ei8_ntl(base, bindex, v_tuple, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

void test_vsuxseg7ei8_v_i32mf2x7_ntl_P1(int32_t *base, vuint8mf8_t bindex, vint32mf2x7_t v_tuple, size_t vl, int domain) {
  return __riscv_vsuxseg7ei8_ntl(base, bindex, v_tuple, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

void test_vsuxseg7ei8_v_i32m1x7_ntl_P1(int32_t *base, vuint8mf4_t bindex, vint32m1x7_t v_tuple, size_t vl, int domain) {
  return __riscv_vsuxseg7ei8_ntl(base, bindex, v_tuple, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

void test_vsuxseg7ei8_v_i64m1x7_ntl_P1(int64_t *base, vuint8mf8_t bindex, vint64m1x7_t v_tuple, size_t vl, int domain) {
  return __riscv_vsuxseg7ei8_ntl(base, bindex, v_tuple, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

void test_vsuxseg7ei8_v_u8mf8x7_ntl_P1(uint8_t *base, vuint8mf8_t bindex, vuint8mf8x7_t v_tuple, size_t vl, int domain) {
  return __riscv_vsuxseg7ei8_ntl(base, bindex, v_tuple, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

void test_vsuxseg7ei8_v_u8mf4x7_ntl_P1(uint8_t *base, vuint8mf4_t bindex, vuint8mf4x7_t v_tuple, size_t vl, int domain) {
  return __riscv_vsuxseg7ei8_ntl(base, bindex, v_tuple, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

void test_vsuxseg7ei8_v_u8mf2x7_ntl_P1(uint8_t *base, vuint8mf2_t bindex, vuint8mf2x7_t v_tuple, size_t vl, int domain) {
  return __riscv_vsuxseg7ei8_ntl(base, bindex, v_tuple, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

void test_vsuxseg7ei8_v_u8m1x7_ntl_P1(uint8_t *base, vuint8m1_t bindex, vuint8m1x7_t v_tuple, size_t vl, int domain) {
  return __riscv_vsuxseg7ei8_ntl(base, bindex, v_tuple, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

void test_vsuxseg7ei8_v_u16mf4x7_ntl_P1(uint16_t *base, vuint8mf8_t bindex, vuint16mf4x7_t v_tuple, size_t vl, int domain) {
  return __riscv_vsuxseg7ei8_ntl(base, bindex, v_tuple, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

void test_vsuxseg7ei8_v_u16mf2x7_ntl_P1(uint16_t *base, vuint8mf4_t bindex, vuint16mf2x7_t v_tuple, size_t vl, int domain) {
  return __riscv_vsuxseg7ei8_ntl(base, bindex, v_tuple, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

void test_vsuxseg7ei8_v_u16m1x7_ntl_P1(uint16_t *base, vuint8mf2_t bindex, vuint16m1x7_t v_tuple, size_t vl, int domain) {
  return __riscv_vsuxseg7ei8_ntl(base, bindex, v_tuple, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

void test_vsuxseg7ei8_v_u32mf2x7_ntl_P1(uint32_t *base, vuint8mf8_t bindex, vuint32mf2x7_t v_tuple, size_t vl, int domain) {
  return __riscv_vsuxseg7ei8_ntl(base, bindex, v_tuple, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

void test_vsuxseg7ei8_v_u32m1x7_ntl_P1(uint32_t *base, vuint8mf4_t bindex, vuint32m1x7_t v_tuple, size_t vl, int domain) {
  return __riscv_vsuxseg7ei8_ntl(base, bindex, v_tuple, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

void test_vsuxseg7ei8_v_u64m1x7_ntl_P1(uint64_t *base, vuint8mf8_t bindex, vuint64m1x7_t v_tuple, size_t vl, int domain) {
  return __riscv_vsuxseg7ei8_ntl(base, bindex, v_tuple, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

void test_vsuxseg7ei8_v_f16mf4x7_m_ntl_P1(vbool64_t mask, _Float16 *base, vuint8mf8_t bindex, vfloat16mf4x7_t v_tuple, size_t vl, int domain) {
  return __riscv_vsuxseg7ei8_ntl(mask, base, bindex, v_tuple, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

void test_vsuxseg7ei8_v_f16mf2x7_m_ntl_P1(vbool32_t mask, _Float16 *base, vuint8mf4_t bindex, vfloat16mf2x7_t v_tuple, size_t vl, int domain) {
  return __riscv_vsuxseg7ei8_ntl(mask, base, bindex, v_tuple, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

void test_vsuxseg7ei8_v_f16m1x7_m_ntl_P1(vbool16_t mask, _Float16 *base, vuint8mf2_t bindex, vfloat16m1x7_t v_tuple, size_t vl, int domain) {
  return __riscv_vsuxseg7ei8_ntl(mask, base, bindex, v_tuple, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

void test_vsuxseg7ei8_v_f32mf2x7_m_ntl_P1(vbool64_t mask, float *base, vuint8mf8_t bindex, vfloat32mf2x7_t v_tuple, size_t vl, int domain) {
  return __riscv_vsuxseg7ei8_ntl(mask, base, bindex, v_tuple, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

void test_vsuxseg7ei8_v_f32m1x7_m_ntl_P1(vbool32_t mask, float *base, vuint8mf4_t bindex, vfloat32m1x7_t v_tuple, size_t vl, int domain) {
  return __riscv_vsuxseg7ei8_ntl(mask, base, bindex, v_tuple, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

void test_vsuxseg7ei8_v_f64m1x7_m_ntl_P1(vbool64_t mask, double *base, vuint8mf8_t bindex, vfloat64m1x7_t v_tuple, size_t vl, int domain) {
  return __riscv_vsuxseg7ei8_ntl(mask, base, bindex, v_tuple, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

void test_vsuxseg7ei8_v_i8mf8x7_m_ntl_P1(vbool64_t mask, int8_t *base, vuint8mf8_t bindex, vint8mf8x7_t v_tuple, size_t vl, int domain) {
  return __riscv_vsuxseg7ei8_ntl(mask, base, bindex, v_tuple, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

void test_vsuxseg7ei8_v_i8mf4x7_m_ntl_P1(vbool32_t mask, int8_t *base, vuint8mf4_t bindex, vint8mf4x7_t v_tuple, size_t vl, int domain) {
  return __riscv_vsuxseg7ei8_ntl(mask, base, bindex, v_tuple, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

void test_vsuxseg7ei8_v_i8mf2x7_m_ntl_P1(vbool16_t mask, int8_t *base, vuint8mf2_t bindex, vint8mf2x7_t v_tuple, size_t vl, int domain) {
  return __riscv_vsuxseg7ei8_ntl(mask, base, bindex, v_tuple, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

void test_vsuxseg7ei8_v_i8m1x7_m_ntl_P1(vbool8_t mask, int8_t *base, vuint8m1_t bindex, vint8m1x7_t v_tuple, size_t vl, int domain) {
  return __riscv_vsuxseg7ei8_ntl(mask, base, bindex, v_tuple, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

void test_vsuxseg7ei8_v_i16mf4x7_m_ntl_P1(vbool64_t mask, int16_t *base, vuint8mf8_t bindex, vint16mf4x7_t v_tuple, size_t vl, int domain) {
  return __riscv_vsuxseg7ei8_ntl(mask, base, bindex, v_tuple, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

void test_vsuxseg7ei8_v_i16mf2x7_m_ntl_P1(vbool32_t mask, int16_t *base, vuint8mf4_t bindex, vint16mf2x7_t v_tuple, size_t vl, int domain) {
  return __riscv_vsuxseg7ei8_ntl(mask, base, bindex, v_tuple, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

void test_vsuxseg7ei8_v_i16m1x7_m_ntl_P1(vbool16_t mask, int16_t *base, vuint8mf2_t bindex, vint16m1x7_t v_tuple, size_t vl, int domain) {
  return __riscv_vsuxseg7ei8_ntl(mask, base, bindex, v_tuple, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

void test_vsuxseg7ei8_v_i32mf2x7_m_ntl_P1(vbool64_t mask, int32_t *base, vuint8mf8_t bindex, vint32mf2x7_t v_tuple, size_t vl, int domain) {
  return __riscv_vsuxseg7ei8_ntl(mask, base, bindex, v_tuple, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

void test_vsuxseg7ei8_v_i32m1x7_m_ntl_P1(vbool32_t mask, int32_t *base, vuint8mf4_t bindex, vint32m1x7_t v_tuple, size_t vl, int domain) {
  return __riscv_vsuxseg7ei8_ntl(mask, base, bindex, v_tuple, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

void test_vsuxseg7ei8_v_i64m1x7_m_ntl_P1(vbool64_t mask, int64_t *base, vuint8mf8_t bindex, vint64m1x7_t v_tuple, size_t vl, int domain) {
  return __riscv_vsuxseg7ei8_ntl(mask, base, bindex, v_tuple, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

void test_vsuxseg7ei8_v_u8mf8x7_m_ntl_P1(vbool64_t mask, uint8_t *base, vuint8mf8_t bindex, vuint8mf8x7_t v_tuple, size_t vl, int domain) {
  return __riscv_vsuxseg7ei8_ntl(mask, base, bindex, v_tuple, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

void test_vsuxseg7ei8_v_u8mf4x7_m_ntl_P1(vbool32_t mask, uint8_t *base, vuint8mf4_t bindex, vuint8mf4x7_t v_tuple, size_t vl, int domain) {
  return __riscv_vsuxseg7ei8_ntl(mask, base, bindex, v_tuple, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

void test_vsuxseg7ei8_v_u8mf2x7_m_ntl_P1(vbool16_t mask, uint8_t *base, vuint8mf2_t bindex, vuint8mf2x7_t v_tuple, size_t vl, int domain) {
  return __riscv_vsuxseg7ei8_ntl(mask, base, bindex, v_tuple, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

void test_vsuxseg7ei8_v_u8m1x7_m_ntl_P1(vbool8_t mask, uint8_t *base, vuint8m1_t bindex, vuint8m1x7_t v_tuple, size_t vl, int domain) {
  return __riscv_vsuxseg7ei8_ntl(mask, base, bindex, v_tuple, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

void test_vsuxseg7ei8_v_u16mf4x7_m_ntl_P1(vbool64_t mask, uint16_t *base, vuint8mf8_t bindex, vuint16mf4x7_t v_tuple, size_t vl, int domain) {
  return __riscv_vsuxseg7ei8_ntl(mask, base, bindex, v_tuple, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

void test_vsuxseg7ei8_v_u16mf2x7_m_ntl_P1(vbool32_t mask, uint16_t *base, vuint8mf4_t bindex, vuint16mf2x7_t v_tuple, size_t vl, int domain) {
  return __riscv_vsuxseg7ei8_ntl(mask, base, bindex, v_tuple, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

void test_vsuxseg7ei8_v_u16m1x7_m_ntl_P1(vbool16_t mask, uint16_t *base, vuint8mf2_t bindex, vuint16m1x7_t v_tuple, size_t vl, int domain) {
  return __riscv_vsuxseg7ei8_ntl(mask, base, bindex, v_tuple, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

void test_vsuxseg7ei8_v_u32mf2x7_m_ntl_P1(vbool64_t mask, uint32_t *base, vuint8mf8_t bindex, vuint32mf2x7_t v_tuple, size_t vl, int domain) {
  return __riscv_vsuxseg7ei8_ntl(mask, base, bindex, v_tuple, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

void test_vsuxseg7ei8_v_u32m1x7_m_ntl_P1(vbool32_t mask, uint32_t *base, vuint8mf4_t bindex, vuint32m1x7_t v_tuple, size_t vl, int domain) {
  return __riscv_vsuxseg7ei8_ntl(mask, base, bindex, v_tuple, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

void test_vsuxseg7ei8_v_u64m1x7_m_ntl_P1(vbool64_t mask, uint64_t *base, vuint8mf8_t bindex, vuint64m1x7_t v_tuple, size_t vl, int domain) {
  return __riscv_vsuxseg7ei8_ntl(mask, base, bindex, v_tuple, vl, __RISCV_NTLH_INNERMOST_PRIVATE);
}

