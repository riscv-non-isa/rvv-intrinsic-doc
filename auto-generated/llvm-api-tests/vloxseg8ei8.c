// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -target-feature +zfh \
// RUN:   -target-feature +experimental-zvfh -disable-O0-optnone  \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

vfloat16mf4x8_t test_vloxseg8ei8_v_f16mf4x8(const _Float16 *base, vuint8mf8_t bindex, size_t vl) {
  return __riscv_vloxseg8ei8_v_f16mf4x8(base, bindex, vl);
}

vfloat16mf2x8_t test_vloxseg8ei8_v_f16mf2x8(const _Float16 *base, vuint8mf4_t bindex, size_t vl) {
  return __riscv_vloxseg8ei8_v_f16mf2x8(base, bindex, vl);
}

vfloat16m1x8_t test_vloxseg8ei8_v_f16m1x8(const _Float16 *base, vuint8mf2_t bindex, size_t vl) {
  return __riscv_vloxseg8ei8_v_f16m1x8(base, bindex, vl);
}

vfloat32mf2x8_t test_vloxseg8ei8_v_f32mf2x8(const float *base, vuint8mf8_t bindex, size_t vl) {
  return __riscv_vloxseg8ei8_v_f32mf2x8(base, bindex, vl);
}

vfloat32m1x8_t test_vloxseg8ei8_v_f32m1x8(const float *base, vuint8mf4_t bindex, size_t vl) {
  return __riscv_vloxseg8ei8_v_f32m1x8(base, bindex, vl);
}

vfloat64m1x8_t test_vloxseg8ei8_v_f64m1x8(const double *base, vuint8mf8_t bindex, size_t vl) {
  return __riscv_vloxseg8ei8_v_f64m1x8(base, bindex, vl);
}

vint8mf8x8_t test_vloxseg8ei8_v_i8mf8x8(const int8_t *base, vuint8mf8_t bindex, size_t vl) {
  return __riscv_vloxseg8ei8_v_i8mf8x8(base, bindex, vl);
}

vint8mf4x8_t test_vloxseg8ei8_v_i8mf4x8(const int8_t *base, vuint8mf4_t bindex, size_t vl) {
  return __riscv_vloxseg8ei8_v_i8mf4x8(base, bindex, vl);
}

vint8mf2x8_t test_vloxseg8ei8_v_i8mf2x8(const int8_t *base, vuint8mf2_t bindex, size_t vl) {
  return __riscv_vloxseg8ei8_v_i8mf2x8(base, bindex, vl);
}

vint8m1x8_t test_vloxseg8ei8_v_i8m1x8(const int8_t *base, vuint8m1_t bindex, size_t vl) {
  return __riscv_vloxseg8ei8_v_i8m1x8(base, bindex, vl);
}

vint16mf4x8_t test_vloxseg8ei8_v_i16mf4x8(const int16_t *base, vuint8mf8_t bindex, size_t vl) {
  return __riscv_vloxseg8ei8_v_i16mf4x8(base, bindex, vl);
}

vint16mf2x8_t test_vloxseg8ei8_v_i16mf2x8(const int16_t *base, vuint8mf4_t bindex, size_t vl) {
  return __riscv_vloxseg8ei8_v_i16mf2x8(base, bindex, vl);
}

vint16m1x8_t test_vloxseg8ei8_v_i16m1x8(const int16_t *base, vuint8mf2_t bindex, size_t vl) {
  return __riscv_vloxseg8ei8_v_i16m1x8(base, bindex, vl);
}

vint32mf2x8_t test_vloxseg8ei8_v_i32mf2x8(const int32_t *base, vuint8mf8_t bindex, size_t vl) {
  return __riscv_vloxseg8ei8_v_i32mf2x8(base, bindex, vl);
}

vint32m1x8_t test_vloxseg8ei8_v_i32m1x8(const int32_t *base, vuint8mf4_t bindex, size_t vl) {
  return __riscv_vloxseg8ei8_v_i32m1x8(base, bindex, vl);
}

vint64m1x8_t test_vloxseg8ei8_v_i64m1x8(const int64_t *base, vuint8mf8_t bindex, size_t vl) {
  return __riscv_vloxseg8ei8_v_i64m1x8(base, bindex, vl);
}

vuint8mf8x8_t test_vloxseg8ei8_v_u8mf8x8(const uint8_t *base, vuint8mf8_t bindex, size_t vl) {
  return __riscv_vloxseg8ei8_v_u8mf8x8(base, bindex, vl);
}

vuint8mf4x8_t test_vloxseg8ei8_v_u8mf4x8(const uint8_t *base, vuint8mf4_t bindex, size_t vl) {
  return __riscv_vloxseg8ei8_v_u8mf4x8(base, bindex, vl);
}

vuint8mf2x8_t test_vloxseg8ei8_v_u8mf2x8(const uint8_t *base, vuint8mf2_t bindex, size_t vl) {
  return __riscv_vloxseg8ei8_v_u8mf2x8(base, bindex, vl);
}

vuint8m1x8_t test_vloxseg8ei8_v_u8m1x8(const uint8_t *base, vuint8m1_t bindex, size_t vl) {
  return __riscv_vloxseg8ei8_v_u8m1x8(base, bindex, vl);
}

vuint16mf4x8_t test_vloxseg8ei8_v_u16mf4x8(const uint16_t *base, vuint8mf8_t bindex, size_t vl) {
  return __riscv_vloxseg8ei8_v_u16mf4x8(base, bindex, vl);
}

vuint16mf2x8_t test_vloxseg8ei8_v_u16mf2x8(const uint16_t *base, vuint8mf4_t bindex, size_t vl) {
  return __riscv_vloxseg8ei8_v_u16mf2x8(base, bindex, vl);
}

vuint16m1x8_t test_vloxseg8ei8_v_u16m1x8(const uint16_t *base, vuint8mf2_t bindex, size_t vl) {
  return __riscv_vloxseg8ei8_v_u16m1x8(base, bindex, vl);
}

vuint32mf2x8_t test_vloxseg8ei8_v_u32mf2x8(const uint32_t *base, vuint8mf8_t bindex, size_t vl) {
  return __riscv_vloxseg8ei8_v_u32mf2x8(base, bindex, vl);
}

vuint32m1x8_t test_vloxseg8ei8_v_u32m1x8(const uint32_t *base, vuint8mf4_t bindex, size_t vl) {
  return __riscv_vloxseg8ei8_v_u32m1x8(base, bindex, vl);
}

vuint64m1x8_t test_vloxseg8ei8_v_u64m1x8(const uint64_t *base, vuint8mf8_t bindex, size_t vl) {
  return __riscv_vloxseg8ei8_v_u64m1x8(base, bindex, vl);
}

vfloat16mf4x8_t test_vloxseg8ei8_v_f16mf4x8_m(vbool64_t mask, const _Float16 *base, vuint8mf8_t bindex, size_t vl) {
  return __riscv_vloxseg8ei8_v_f16mf4x8_m(mask, base, bindex, vl);
}

vfloat16mf2x8_t test_vloxseg8ei8_v_f16mf2x8_m(vbool32_t mask, const _Float16 *base, vuint8mf4_t bindex, size_t vl) {
  return __riscv_vloxseg8ei8_v_f16mf2x8_m(mask, base, bindex, vl);
}

vfloat16m1x8_t test_vloxseg8ei8_v_f16m1x8_m(vbool16_t mask, const _Float16 *base, vuint8mf2_t bindex, size_t vl) {
  return __riscv_vloxseg8ei8_v_f16m1x8_m(mask, base, bindex, vl);
}

vfloat32mf2x8_t test_vloxseg8ei8_v_f32mf2x8_m(vbool64_t mask, const float *base, vuint8mf8_t bindex, size_t vl) {
  return __riscv_vloxseg8ei8_v_f32mf2x8_m(mask, base, bindex, vl);
}

vfloat32m1x8_t test_vloxseg8ei8_v_f32m1x8_m(vbool32_t mask, const float *base, vuint8mf4_t bindex, size_t vl) {
  return __riscv_vloxseg8ei8_v_f32m1x8_m(mask, base, bindex, vl);
}

vfloat64m1x8_t test_vloxseg8ei8_v_f64m1x8_m(vbool64_t mask, const double *base, vuint8mf8_t bindex, size_t vl) {
  return __riscv_vloxseg8ei8_v_f64m1x8_m(mask, base, bindex, vl);
}

vint8mf8x8_t test_vloxseg8ei8_v_i8mf8x8_m(vbool64_t mask, const int8_t *base, vuint8mf8_t bindex, size_t vl) {
  return __riscv_vloxseg8ei8_v_i8mf8x8_m(mask, base, bindex, vl);
}

vint8mf4x8_t test_vloxseg8ei8_v_i8mf4x8_m(vbool32_t mask, const int8_t *base, vuint8mf4_t bindex, size_t vl) {
  return __riscv_vloxseg8ei8_v_i8mf4x8_m(mask, base, bindex, vl);
}

vint8mf2x8_t test_vloxseg8ei8_v_i8mf2x8_m(vbool16_t mask, const int8_t *base, vuint8mf2_t bindex, size_t vl) {
  return __riscv_vloxseg8ei8_v_i8mf2x8_m(mask, base, bindex, vl);
}

vint8m1x8_t test_vloxseg8ei8_v_i8m1x8_m(vbool8_t mask, const int8_t *base, vuint8m1_t bindex, size_t vl) {
  return __riscv_vloxseg8ei8_v_i8m1x8_m(mask, base, bindex, vl);
}

vint16mf4x8_t test_vloxseg8ei8_v_i16mf4x8_m(vbool64_t mask, const int16_t *base, vuint8mf8_t bindex, size_t vl) {
  return __riscv_vloxseg8ei8_v_i16mf4x8_m(mask, base, bindex, vl);
}

vint16mf2x8_t test_vloxseg8ei8_v_i16mf2x8_m(vbool32_t mask, const int16_t *base, vuint8mf4_t bindex, size_t vl) {
  return __riscv_vloxseg8ei8_v_i16mf2x8_m(mask, base, bindex, vl);
}

vint16m1x8_t test_vloxseg8ei8_v_i16m1x8_m(vbool16_t mask, const int16_t *base, vuint8mf2_t bindex, size_t vl) {
  return __riscv_vloxseg8ei8_v_i16m1x8_m(mask, base, bindex, vl);
}

vint32mf2x8_t test_vloxseg8ei8_v_i32mf2x8_m(vbool64_t mask, const int32_t *base, vuint8mf8_t bindex, size_t vl) {
  return __riscv_vloxseg8ei8_v_i32mf2x8_m(mask, base, bindex, vl);
}

vint32m1x8_t test_vloxseg8ei8_v_i32m1x8_m(vbool32_t mask, const int32_t *base, vuint8mf4_t bindex, size_t vl) {
  return __riscv_vloxseg8ei8_v_i32m1x8_m(mask, base, bindex, vl);
}

vint64m1x8_t test_vloxseg8ei8_v_i64m1x8_m(vbool64_t mask, const int64_t *base, vuint8mf8_t bindex, size_t vl) {
  return __riscv_vloxseg8ei8_v_i64m1x8_m(mask, base, bindex, vl);
}

vuint8mf8x8_t test_vloxseg8ei8_v_u8mf8x8_m(vbool64_t mask, const uint8_t *base, vuint8mf8_t bindex, size_t vl) {
  return __riscv_vloxseg8ei8_v_u8mf8x8_m(mask, base, bindex, vl);
}

vuint8mf4x8_t test_vloxseg8ei8_v_u8mf4x8_m(vbool32_t mask, const uint8_t *base, vuint8mf4_t bindex, size_t vl) {
  return __riscv_vloxseg8ei8_v_u8mf4x8_m(mask, base, bindex, vl);
}

vuint8mf2x8_t test_vloxseg8ei8_v_u8mf2x8_m(vbool16_t mask, const uint8_t *base, vuint8mf2_t bindex, size_t vl) {
  return __riscv_vloxseg8ei8_v_u8mf2x8_m(mask, base, bindex, vl);
}

vuint8m1x8_t test_vloxseg8ei8_v_u8m1x8_m(vbool8_t mask, const uint8_t *base, vuint8m1_t bindex, size_t vl) {
  return __riscv_vloxseg8ei8_v_u8m1x8_m(mask, base, bindex, vl);
}

vuint16mf4x8_t test_vloxseg8ei8_v_u16mf4x8_m(vbool64_t mask, const uint16_t *base, vuint8mf8_t bindex, size_t vl) {
  return __riscv_vloxseg8ei8_v_u16mf4x8_m(mask, base, bindex, vl);
}

vuint16mf2x8_t test_vloxseg8ei8_v_u16mf2x8_m(vbool32_t mask, const uint16_t *base, vuint8mf4_t bindex, size_t vl) {
  return __riscv_vloxseg8ei8_v_u16mf2x8_m(mask, base, bindex, vl);
}

vuint16m1x8_t test_vloxseg8ei8_v_u16m1x8_m(vbool16_t mask, const uint16_t *base, vuint8mf2_t bindex, size_t vl) {
  return __riscv_vloxseg8ei8_v_u16m1x8_m(mask, base, bindex, vl);
}

vuint32mf2x8_t test_vloxseg8ei8_v_u32mf2x8_m(vbool64_t mask, const uint32_t *base, vuint8mf8_t bindex, size_t vl) {
  return __riscv_vloxseg8ei8_v_u32mf2x8_m(mask, base, bindex, vl);
}

vuint32m1x8_t test_vloxseg8ei8_v_u32m1x8_m(vbool32_t mask, const uint32_t *base, vuint8mf4_t bindex, size_t vl) {
  return __riscv_vloxseg8ei8_v_u32m1x8_m(mask, base, bindex, vl);
}

vuint64m1x8_t test_vloxseg8ei8_v_u64m1x8_m(vbool64_t mask, const uint64_t *base, vuint8mf8_t bindex, size_t vl) {
  return __riscv_vloxseg8ei8_v_u64m1x8_m(mask, base, bindex, vl);
}

