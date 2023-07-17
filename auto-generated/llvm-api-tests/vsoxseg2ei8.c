// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -target-feature +zfh \
// RUN:   -target-feature +experimental-zvfh -disable-O0-optnone  \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

void test_vsoxseg2ei8_v_f16mf4x2(_Float16 *base, vuint8mf8_t bindex, vfloat16mf4x2_t v_tuple, size_t vl) {
  return __riscv_vsoxseg2ei8_v_f16mf4x2(base, bindex, v_tuple, vl);
}

void test_vsoxseg2ei8_v_f16mf2x2(_Float16 *base, vuint8mf4_t bindex, vfloat16mf2x2_t v_tuple, size_t vl) {
  return __riscv_vsoxseg2ei8_v_f16mf2x2(base, bindex, v_tuple, vl);
}

void test_vsoxseg2ei8_v_f16m1x2(_Float16 *base, vuint8mf2_t bindex, vfloat16m1x2_t v_tuple, size_t vl) {
  return __riscv_vsoxseg2ei8_v_f16m1x2(base, bindex, v_tuple, vl);
}

void test_vsoxseg2ei8_v_f16m2x2(_Float16 *base, vuint8m1_t bindex, vfloat16m2x2_t v_tuple, size_t vl) {
  return __riscv_vsoxseg2ei8_v_f16m2x2(base, bindex, v_tuple, vl);
}

void test_vsoxseg2ei8_v_f16m4x2(_Float16 *base, vuint8m2_t bindex, vfloat16m4x2_t v_tuple, size_t vl) {
  return __riscv_vsoxseg2ei8_v_f16m4x2(base, bindex, v_tuple, vl);
}

void test_vsoxseg2ei8_v_f32mf2x2(float *base, vuint8mf8_t bindex, vfloat32mf2x2_t v_tuple, size_t vl) {
  return __riscv_vsoxseg2ei8_v_f32mf2x2(base, bindex, v_tuple, vl);
}

void test_vsoxseg2ei8_v_f32m1x2(float *base, vuint8mf4_t bindex, vfloat32m1x2_t v_tuple, size_t vl) {
  return __riscv_vsoxseg2ei8_v_f32m1x2(base, bindex, v_tuple, vl);
}

void test_vsoxseg2ei8_v_f32m2x2(float *base, vuint8mf2_t bindex, vfloat32m2x2_t v_tuple, size_t vl) {
  return __riscv_vsoxseg2ei8_v_f32m2x2(base, bindex, v_tuple, vl);
}

void test_vsoxseg2ei8_v_f32m4x2(float *base, vuint8m1_t bindex, vfloat32m4x2_t v_tuple, size_t vl) {
  return __riscv_vsoxseg2ei8_v_f32m4x2(base, bindex, v_tuple, vl);
}

void test_vsoxseg2ei8_v_f64m1x2(double *base, vuint8mf8_t bindex, vfloat64m1x2_t v_tuple, size_t vl) {
  return __riscv_vsoxseg2ei8_v_f64m1x2(base, bindex, v_tuple, vl);
}

void test_vsoxseg2ei8_v_f64m2x2(double *base, vuint8mf4_t bindex, vfloat64m2x2_t v_tuple, size_t vl) {
  return __riscv_vsoxseg2ei8_v_f64m2x2(base, bindex, v_tuple, vl);
}

void test_vsoxseg2ei8_v_f64m4x2(double *base, vuint8mf2_t bindex, vfloat64m4x2_t v_tuple, size_t vl) {
  return __riscv_vsoxseg2ei8_v_f64m4x2(base, bindex, v_tuple, vl);
}

void test_vsoxseg2ei8_v_i8mf8x2(int8_t *base, vuint8mf8_t bindex, vint8mf8x2_t v_tuple, size_t vl) {
  return __riscv_vsoxseg2ei8_v_i8mf8x2(base, bindex, v_tuple, vl);
}

void test_vsoxseg2ei8_v_i8mf4x2(int8_t *base, vuint8mf4_t bindex, vint8mf4x2_t v_tuple, size_t vl) {
  return __riscv_vsoxseg2ei8_v_i8mf4x2(base, bindex, v_tuple, vl);
}

void test_vsoxseg2ei8_v_i8mf2x2(int8_t *base, vuint8mf2_t bindex, vint8mf2x2_t v_tuple, size_t vl) {
  return __riscv_vsoxseg2ei8_v_i8mf2x2(base, bindex, v_tuple, vl);
}

void test_vsoxseg2ei8_v_i8m1x2(int8_t *base, vuint8m1_t bindex, vint8m1x2_t v_tuple, size_t vl) {
  return __riscv_vsoxseg2ei8_v_i8m1x2(base, bindex, v_tuple, vl);
}

void test_vsoxseg2ei8_v_i8m2x2(int8_t *base, vuint8m2_t bindex, vint8m2x2_t v_tuple, size_t vl) {
  return __riscv_vsoxseg2ei8_v_i8m2x2(base, bindex, v_tuple, vl);
}

void test_vsoxseg2ei8_v_i8m4x2(int8_t *base, vuint8m4_t bindex, vint8m4x2_t v_tuple, size_t vl) {
  return __riscv_vsoxseg2ei8_v_i8m4x2(base, bindex, v_tuple, vl);
}

void test_vsoxseg2ei8_v_i16mf4x2(int16_t *base, vuint8mf8_t bindex, vint16mf4x2_t v_tuple, size_t vl) {
  return __riscv_vsoxseg2ei8_v_i16mf4x2(base, bindex, v_tuple, vl);
}

void test_vsoxseg2ei8_v_i16mf2x2(int16_t *base, vuint8mf4_t bindex, vint16mf2x2_t v_tuple, size_t vl) {
  return __riscv_vsoxseg2ei8_v_i16mf2x2(base, bindex, v_tuple, vl);
}

void test_vsoxseg2ei8_v_i16m1x2(int16_t *base, vuint8mf2_t bindex, vint16m1x2_t v_tuple, size_t vl) {
  return __riscv_vsoxseg2ei8_v_i16m1x2(base, bindex, v_tuple, vl);
}

void test_vsoxseg2ei8_v_i16m2x2(int16_t *base, vuint8m1_t bindex, vint16m2x2_t v_tuple, size_t vl) {
  return __riscv_vsoxseg2ei8_v_i16m2x2(base, bindex, v_tuple, vl);
}

void test_vsoxseg2ei8_v_i16m4x2(int16_t *base, vuint8m2_t bindex, vint16m4x2_t v_tuple, size_t vl) {
  return __riscv_vsoxseg2ei8_v_i16m4x2(base, bindex, v_tuple, vl);
}

void test_vsoxseg2ei8_v_i32mf2x2(int32_t *base, vuint8mf8_t bindex, vint32mf2x2_t v_tuple, size_t vl) {
  return __riscv_vsoxseg2ei8_v_i32mf2x2(base, bindex, v_tuple, vl);
}

void test_vsoxseg2ei8_v_i32m1x2(int32_t *base, vuint8mf4_t bindex, vint32m1x2_t v_tuple, size_t vl) {
  return __riscv_vsoxseg2ei8_v_i32m1x2(base, bindex, v_tuple, vl);
}

void test_vsoxseg2ei8_v_i32m2x2(int32_t *base, vuint8mf2_t bindex, vint32m2x2_t v_tuple, size_t vl) {
  return __riscv_vsoxseg2ei8_v_i32m2x2(base, bindex, v_tuple, vl);
}

void test_vsoxseg2ei8_v_i32m4x2(int32_t *base, vuint8m1_t bindex, vint32m4x2_t v_tuple, size_t vl) {
  return __riscv_vsoxseg2ei8_v_i32m4x2(base, bindex, v_tuple, vl);
}

void test_vsoxseg2ei8_v_i64m1x2(int64_t *base, vuint8mf8_t bindex, vint64m1x2_t v_tuple, size_t vl) {
  return __riscv_vsoxseg2ei8_v_i64m1x2(base, bindex, v_tuple, vl);
}

void test_vsoxseg2ei8_v_i64m2x2(int64_t *base, vuint8mf4_t bindex, vint64m2x2_t v_tuple, size_t vl) {
  return __riscv_vsoxseg2ei8_v_i64m2x2(base, bindex, v_tuple, vl);
}

void test_vsoxseg2ei8_v_i64m4x2(int64_t *base, vuint8mf2_t bindex, vint64m4x2_t v_tuple, size_t vl) {
  return __riscv_vsoxseg2ei8_v_i64m4x2(base, bindex, v_tuple, vl);
}

void test_vsoxseg2ei8_v_u8mf8x2(uint8_t *base, vuint8mf8_t bindex, vuint8mf8x2_t v_tuple, size_t vl) {
  return __riscv_vsoxseg2ei8_v_u8mf8x2(base, bindex, v_tuple, vl);
}

void test_vsoxseg2ei8_v_u8mf4x2(uint8_t *base, vuint8mf4_t bindex, vuint8mf4x2_t v_tuple, size_t vl) {
  return __riscv_vsoxseg2ei8_v_u8mf4x2(base, bindex, v_tuple, vl);
}

void test_vsoxseg2ei8_v_u8mf2x2(uint8_t *base, vuint8mf2_t bindex, vuint8mf2x2_t v_tuple, size_t vl) {
  return __riscv_vsoxseg2ei8_v_u8mf2x2(base, bindex, v_tuple, vl);
}

void test_vsoxseg2ei8_v_u8m1x2(uint8_t *base, vuint8m1_t bindex, vuint8m1x2_t v_tuple, size_t vl) {
  return __riscv_vsoxseg2ei8_v_u8m1x2(base, bindex, v_tuple, vl);
}

void test_vsoxseg2ei8_v_u8m2x2(uint8_t *base, vuint8m2_t bindex, vuint8m2x2_t v_tuple, size_t vl) {
  return __riscv_vsoxseg2ei8_v_u8m2x2(base, bindex, v_tuple, vl);
}

void test_vsoxseg2ei8_v_u8m4x2(uint8_t *base, vuint8m4_t bindex, vuint8m4x2_t v_tuple, size_t vl) {
  return __riscv_vsoxseg2ei8_v_u8m4x2(base, bindex, v_tuple, vl);
}

void test_vsoxseg2ei8_v_u16mf4x2(uint16_t *base, vuint8mf8_t bindex, vuint16mf4x2_t v_tuple, size_t vl) {
  return __riscv_vsoxseg2ei8_v_u16mf4x2(base, bindex, v_tuple, vl);
}

void test_vsoxseg2ei8_v_u16mf2x2(uint16_t *base, vuint8mf4_t bindex, vuint16mf2x2_t v_tuple, size_t vl) {
  return __riscv_vsoxseg2ei8_v_u16mf2x2(base, bindex, v_tuple, vl);
}

void test_vsoxseg2ei8_v_u16m1x2(uint16_t *base, vuint8mf2_t bindex, vuint16m1x2_t v_tuple, size_t vl) {
  return __riscv_vsoxseg2ei8_v_u16m1x2(base, bindex, v_tuple, vl);
}

void test_vsoxseg2ei8_v_u16m2x2(uint16_t *base, vuint8m1_t bindex, vuint16m2x2_t v_tuple, size_t vl) {
  return __riscv_vsoxseg2ei8_v_u16m2x2(base, bindex, v_tuple, vl);
}

void test_vsoxseg2ei8_v_u16m4x2(uint16_t *base, vuint8m2_t bindex, vuint16m4x2_t v_tuple, size_t vl) {
  return __riscv_vsoxseg2ei8_v_u16m4x2(base, bindex, v_tuple, vl);
}

void test_vsoxseg2ei8_v_u32mf2x2(uint32_t *base, vuint8mf8_t bindex, vuint32mf2x2_t v_tuple, size_t vl) {
  return __riscv_vsoxseg2ei8_v_u32mf2x2(base, bindex, v_tuple, vl);
}

void test_vsoxseg2ei8_v_u32m1x2(uint32_t *base, vuint8mf4_t bindex, vuint32m1x2_t v_tuple, size_t vl) {
  return __riscv_vsoxseg2ei8_v_u32m1x2(base, bindex, v_tuple, vl);
}

void test_vsoxseg2ei8_v_u32m2x2(uint32_t *base, vuint8mf2_t bindex, vuint32m2x2_t v_tuple, size_t vl) {
  return __riscv_vsoxseg2ei8_v_u32m2x2(base, bindex, v_tuple, vl);
}

void test_vsoxseg2ei8_v_u32m4x2(uint32_t *base, vuint8m1_t bindex, vuint32m4x2_t v_tuple, size_t vl) {
  return __riscv_vsoxseg2ei8_v_u32m4x2(base, bindex, v_tuple, vl);
}

void test_vsoxseg2ei8_v_u64m1x2(uint64_t *base, vuint8mf8_t bindex, vuint64m1x2_t v_tuple, size_t vl) {
  return __riscv_vsoxseg2ei8_v_u64m1x2(base, bindex, v_tuple, vl);
}

void test_vsoxseg2ei8_v_u64m2x2(uint64_t *base, vuint8mf4_t bindex, vuint64m2x2_t v_tuple, size_t vl) {
  return __riscv_vsoxseg2ei8_v_u64m2x2(base, bindex, v_tuple, vl);
}

void test_vsoxseg2ei8_v_u64m4x2(uint64_t *base, vuint8mf2_t bindex, vuint64m4x2_t v_tuple, size_t vl) {
  return __riscv_vsoxseg2ei8_v_u64m4x2(base, bindex, v_tuple, vl);
}

void test_vsoxseg2ei8_v_f16mf4x2_m(vbool64_t mask, _Float16 *base, vuint8mf8_t bindex, vfloat16mf4x2_t v_tuple, size_t vl) {
  return __riscv_vsoxseg2ei8_v_f16mf4x2_m(mask, base, bindex, v_tuple, vl);
}

void test_vsoxseg2ei8_v_f16mf2x2_m(vbool32_t mask, _Float16 *base, vuint8mf4_t bindex, vfloat16mf2x2_t v_tuple, size_t vl) {
  return __riscv_vsoxseg2ei8_v_f16mf2x2_m(mask, base, bindex, v_tuple, vl);
}

void test_vsoxseg2ei8_v_f16m1x2_m(vbool16_t mask, _Float16 *base, vuint8mf2_t bindex, vfloat16m1x2_t v_tuple, size_t vl) {
  return __riscv_vsoxseg2ei8_v_f16m1x2_m(mask, base, bindex, v_tuple, vl);
}

void test_vsoxseg2ei8_v_f16m2x2_m(vbool8_t mask, _Float16 *base, vuint8m1_t bindex, vfloat16m2x2_t v_tuple, size_t vl) {
  return __riscv_vsoxseg2ei8_v_f16m2x2_m(mask, base, bindex, v_tuple, vl);
}

void test_vsoxseg2ei8_v_f16m4x2_m(vbool4_t mask, _Float16 *base, vuint8m2_t bindex, vfloat16m4x2_t v_tuple, size_t vl) {
  return __riscv_vsoxseg2ei8_v_f16m4x2_m(mask, base, bindex, v_tuple, vl);
}

void test_vsoxseg2ei8_v_f32mf2x2_m(vbool64_t mask, float *base, vuint8mf8_t bindex, vfloat32mf2x2_t v_tuple, size_t vl) {
  return __riscv_vsoxseg2ei8_v_f32mf2x2_m(mask, base, bindex, v_tuple, vl);
}

void test_vsoxseg2ei8_v_f32m1x2_m(vbool32_t mask, float *base, vuint8mf4_t bindex, vfloat32m1x2_t v_tuple, size_t vl) {
  return __riscv_vsoxseg2ei8_v_f32m1x2_m(mask, base, bindex, v_tuple, vl);
}

void test_vsoxseg2ei8_v_f32m2x2_m(vbool16_t mask, float *base, vuint8mf2_t bindex, vfloat32m2x2_t v_tuple, size_t vl) {
  return __riscv_vsoxseg2ei8_v_f32m2x2_m(mask, base, bindex, v_tuple, vl);
}

void test_vsoxseg2ei8_v_f32m4x2_m(vbool8_t mask, float *base, vuint8m1_t bindex, vfloat32m4x2_t v_tuple, size_t vl) {
  return __riscv_vsoxseg2ei8_v_f32m4x2_m(mask, base, bindex, v_tuple, vl);
}

void test_vsoxseg2ei8_v_f64m1x2_m(vbool64_t mask, double *base, vuint8mf8_t bindex, vfloat64m1x2_t v_tuple, size_t vl) {
  return __riscv_vsoxseg2ei8_v_f64m1x2_m(mask, base, bindex, v_tuple, vl);
}

void test_vsoxseg2ei8_v_f64m2x2_m(vbool32_t mask, double *base, vuint8mf4_t bindex, vfloat64m2x2_t v_tuple, size_t vl) {
  return __riscv_vsoxseg2ei8_v_f64m2x2_m(mask, base, bindex, v_tuple, vl);
}

void test_vsoxseg2ei8_v_f64m4x2_m(vbool16_t mask, double *base, vuint8mf2_t bindex, vfloat64m4x2_t v_tuple, size_t vl) {
  return __riscv_vsoxseg2ei8_v_f64m4x2_m(mask, base, bindex, v_tuple, vl);
}

void test_vsoxseg2ei8_v_i8mf8x2_m(vbool64_t mask, int8_t *base, vuint8mf8_t bindex, vint8mf8x2_t v_tuple, size_t vl) {
  return __riscv_vsoxseg2ei8_v_i8mf8x2_m(mask, base, bindex, v_tuple, vl);
}

void test_vsoxseg2ei8_v_i8mf4x2_m(vbool32_t mask, int8_t *base, vuint8mf4_t bindex, vint8mf4x2_t v_tuple, size_t vl) {
  return __riscv_vsoxseg2ei8_v_i8mf4x2_m(mask, base, bindex, v_tuple, vl);
}

void test_vsoxseg2ei8_v_i8mf2x2_m(vbool16_t mask, int8_t *base, vuint8mf2_t bindex, vint8mf2x2_t v_tuple, size_t vl) {
  return __riscv_vsoxseg2ei8_v_i8mf2x2_m(mask, base, bindex, v_tuple, vl);
}

void test_vsoxseg2ei8_v_i8m1x2_m(vbool8_t mask, int8_t *base, vuint8m1_t bindex, vint8m1x2_t v_tuple, size_t vl) {
  return __riscv_vsoxseg2ei8_v_i8m1x2_m(mask, base, bindex, v_tuple, vl);
}

void test_vsoxseg2ei8_v_i8m2x2_m(vbool4_t mask, int8_t *base, vuint8m2_t bindex, vint8m2x2_t v_tuple, size_t vl) {
  return __riscv_vsoxseg2ei8_v_i8m2x2_m(mask, base, bindex, v_tuple, vl);
}

void test_vsoxseg2ei8_v_i8m4x2_m(vbool2_t mask, int8_t *base, vuint8m4_t bindex, vint8m4x2_t v_tuple, size_t vl) {
  return __riscv_vsoxseg2ei8_v_i8m4x2_m(mask, base, bindex, v_tuple, vl);
}

void test_vsoxseg2ei8_v_i16mf4x2_m(vbool64_t mask, int16_t *base, vuint8mf8_t bindex, vint16mf4x2_t v_tuple, size_t vl) {
  return __riscv_vsoxseg2ei8_v_i16mf4x2_m(mask, base, bindex, v_tuple, vl);
}

void test_vsoxseg2ei8_v_i16mf2x2_m(vbool32_t mask, int16_t *base, vuint8mf4_t bindex, vint16mf2x2_t v_tuple, size_t vl) {
  return __riscv_vsoxseg2ei8_v_i16mf2x2_m(mask, base, bindex, v_tuple, vl);
}

void test_vsoxseg2ei8_v_i16m1x2_m(vbool16_t mask, int16_t *base, vuint8mf2_t bindex, vint16m1x2_t v_tuple, size_t vl) {
  return __riscv_vsoxseg2ei8_v_i16m1x2_m(mask, base, bindex, v_tuple, vl);
}

void test_vsoxseg2ei8_v_i16m2x2_m(vbool8_t mask, int16_t *base, vuint8m1_t bindex, vint16m2x2_t v_tuple, size_t vl) {
  return __riscv_vsoxseg2ei8_v_i16m2x2_m(mask, base, bindex, v_tuple, vl);
}

void test_vsoxseg2ei8_v_i16m4x2_m(vbool4_t mask, int16_t *base, vuint8m2_t bindex, vint16m4x2_t v_tuple, size_t vl) {
  return __riscv_vsoxseg2ei8_v_i16m4x2_m(mask, base, bindex, v_tuple, vl);
}

void test_vsoxseg2ei8_v_i32mf2x2_m(vbool64_t mask, int32_t *base, vuint8mf8_t bindex, vint32mf2x2_t v_tuple, size_t vl) {
  return __riscv_vsoxseg2ei8_v_i32mf2x2_m(mask, base, bindex, v_tuple, vl);
}

void test_vsoxseg2ei8_v_i32m1x2_m(vbool32_t mask, int32_t *base, vuint8mf4_t bindex, vint32m1x2_t v_tuple, size_t vl) {
  return __riscv_vsoxseg2ei8_v_i32m1x2_m(mask, base, bindex, v_tuple, vl);
}

void test_vsoxseg2ei8_v_i32m2x2_m(vbool16_t mask, int32_t *base, vuint8mf2_t bindex, vint32m2x2_t v_tuple, size_t vl) {
  return __riscv_vsoxseg2ei8_v_i32m2x2_m(mask, base, bindex, v_tuple, vl);
}

void test_vsoxseg2ei8_v_i32m4x2_m(vbool8_t mask, int32_t *base, vuint8m1_t bindex, vint32m4x2_t v_tuple, size_t vl) {
  return __riscv_vsoxseg2ei8_v_i32m4x2_m(mask, base, bindex, v_tuple, vl);
}

void test_vsoxseg2ei8_v_i64m1x2_m(vbool64_t mask, int64_t *base, vuint8mf8_t bindex, vint64m1x2_t v_tuple, size_t vl) {
  return __riscv_vsoxseg2ei8_v_i64m1x2_m(mask, base, bindex, v_tuple, vl);
}

void test_vsoxseg2ei8_v_i64m2x2_m(vbool32_t mask, int64_t *base, vuint8mf4_t bindex, vint64m2x2_t v_tuple, size_t vl) {
  return __riscv_vsoxseg2ei8_v_i64m2x2_m(mask, base, bindex, v_tuple, vl);
}

void test_vsoxseg2ei8_v_i64m4x2_m(vbool16_t mask, int64_t *base, vuint8mf2_t bindex, vint64m4x2_t v_tuple, size_t vl) {
  return __riscv_vsoxseg2ei8_v_i64m4x2_m(mask, base, bindex, v_tuple, vl);
}

void test_vsoxseg2ei8_v_u8mf8x2_m(vbool64_t mask, uint8_t *base, vuint8mf8_t bindex, vuint8mf8x2_t v_tuple, size_t vl) {
  return __riscv_vsoxseg2ei8_v_u8mf8x2_m(mask, base, bindex, v_tuple, vl);
}

void test_vsoxseg2ei8_v_u8mf4x2_m(vbool32_t mask, uint8_t *base, vuint8mf4_t bindex, vuint8mf4x2_t v_tuple, size_t vl) {
  return __riscv_vsoxseg2ei8_v_u8mf4x2_m(mask, base, bindex, v_tuple, vl);
}

void test_vsoxseg2ei8_v_u8mf2x2_m(vbool16_t mask, uint8_t *base, vuint8mf2_t bindex, vuint8mf2x2_t v_tuple, size_t vl) {
  return __riscv_vsoxseg2ei8_v_u8mf2x2_m(mask, base, bindex, v_tuple, vl);
}

void test_vsoxseg2ei8_v_u8m1x2_m(vbool8_t mask, uint8_t *base, vuint8m1_t bindex, vuint8m1x2_t v_tuple, size_t vl) {
  return __riscv_vsoxseg2ei8_v_u8m1x2_m(mask, base, bindex, v_tuple, vl);
}

void test_vsoxseg2ei8_v_u8m2x2_m(vbool4_t mask, uint8_t *base, vuint8m2_t bindex, vuint8m2x2_t v_tuple, size_t vl) {
  return __riscv_vsoxseg2ei8_v_u8m2x2_m(mask, base, bindex, v_tuple, vl);
}

void test_vsoxseg2ei8_v_u8m4x2_m(vbool2_t mask, uint8_t *base, vuint8m4_t bindex, vuint8m4x2_t v_tuple, size_t vl) {
  return __riscv_vsoxseg2ei8_v_u8m4x2_m(mask, base, bindex, v_tuple, vl);
}

void test_vsoxseg2ei8_v_u16mf4x2_m(vbool64_t mask, uint16_t *base, vuint8mf8_t bindex, vuint16mf4x2_t v_tuple, size_t vl) {
  return __riscv_vsoxseg2ei8_v_u16mf4x2_m(mask, base, bindex, v_tuple, vl);
}

void test_vsoxseg2ei8_v_u16mf2x2_m(vbool32_t mask, uint16_t *base, vuint8mf4_t bindex, vuint16mf2x2_t v_tuple, size_t vl) {
  return __riscv_vsoxseg2ei8_v_u16mf2x2_m(mask, base, bindex, v_tuple, vl);
}

void test_vsoxseg2ei8_v_u16m1x2_m(vbool16_t mask, uint16_t *base, vuint8mf2_t bindex, vuint16m1x2_t v_tuple, size_t vl) {
  return __riscv_vsoxseg2ei8_v_u16m1x2_m(mask, base, bindex, v_tuple, vl);
}

void test_vsoxseg2ei8_v_u16m2x2_m(vbool8_t mask, uint16_t *base, vuint8m1_t bindex, vuint16m2x2_t v_tuple, size_t vl) {
  return __riscv_vsoxseg2ei8_v_u16m2x2_m(mask, base, bindex, v_tuple, vl);
}

void test_vsoxseg2ei8_v_u16m4x2_m(vbool4_t mask, uint16_t *base, vuint8m2_t bindex, vuint16m4x2_t v_tuple, size_t vl) {
  return __riscv_vsoxseg2ei8_v_u16m4x2_m(mask, base, bindex, v_tuple, vl);
}

void test_vsoxseg2ei8_v_u32mf2x2_m(vbool64_t mask, uint32_t *base, vuint8mf8_t bindex, vuint32mf2x2_t v_tuple, size_t vl) {
  return __riscv_vsoxseg2ei8_v_u32mf2x2_m(mask, base, bindex, v_tuple, vl);
}

void test_vsoxseg2ei8_v_u32m1x2_m(vbool32_t mask, uint32_t *base, vuint8mf4_t bindex, vuint32m1x2_t v_tuple, size_t vl) {
  return __riscv_vsoxseg2ei8_v_u32m1x2_m(mask, base, bindex, v_tuple, vl);
}

void test_vsoxseg2ei8_v_u32m2x2_m(vbool16_t mask, uint32_t *base, vuint8mf2_t bindex, vuint32m2x2_t v_tuple, size_t vl) {
  return __riscv_vsoxseg2ei8_v_u32m2x2_m(mask, base, bindex, v_tuple, vl);
}

void test_vsoxseg2ei8_v_u32m4x2_m(vbool8_t mask, uint32_t *base, vuint8m1_t bindex, vuint32m4x2_t v_tuple, size_t vl) {
  return __riscv_vsoxseg2ei8_v_u32m4x2_m(mask, base, bindex, v_tuple, vl);
}

void test_vsoxseg2ei8_v_u64m1x2_m(vbool64_t mask, uint64_t *base, vuint8mf8_t bindex, vuint64m1x2_t v_tuple, size_t vl) {
  return __riscv_vsoxseg2ei8_v_u64m1x2_m(mask, base, bindex, v_tuple, vl);
}

void test_vsoxseg2ei8_v_u64m2x2_m(vbool32_t mask, uint64_t *base, vuint8mf4_t bindex, vuint64m2x2_t v_tuple, size_t vl) {
  return __riscv_vsoxseg2ei8_v_u64m2x2_m(mask, base, bindex, v_tuple, vl);
}

void test_vsoxseg2ei8_v_u64m4x2_m(vbool16_t mask, uint64_t *base, vuint8mf2_t bindex, vuint64m4x2_t v_tuple, size_t vl) {
  return __riscv_vsoxseg2ei8_v_u64m4x2_m(mask, base, bindex, v_tuple, vl);
}

