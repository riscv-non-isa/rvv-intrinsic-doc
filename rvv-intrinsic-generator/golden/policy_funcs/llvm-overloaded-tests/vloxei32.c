// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -target-feature +zfh \
// RUN:   -target-feature +experimental-zvfh -disable-O0-optnone  \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

vfloat16mf4_t test_vloxei32_v_f16mf4_tu(vfloat16mf4_t maskedoff, const _Float16 *base, vuint32mf2_t bindex, size_t vl) {
  return vloxei32_tu(maskedoff, base, bindex, vl);
}

vfloat16mf2_t test_vloxei32_v_f16mf2_tu(vfloat16mf2_t maskedoff, const _Float16 *base, vuint32m1_t bindex, size_t vl) {
  return vloxei32_tu(maskedoff, base, bindex, vl);
}

vfloat16m1_t test_vloxei32_v_f16m1_tu(vfloat16m1_t maskedoff, const _Float16 *base, vuint32m2_t bindex, size_t vl) {
  return vloxei32_tu(maskedoff, base, bindex, vl);
}

vfloat16m2_t test_vloxei32_v_f16m2_tu(vfloat16m2_t maskedoff, const _Float16 *base, vuint32m4_t bindex, size_t vl) {
  return vloxei32_tu(maskedoff, base, bindex, vl);
}

vfloat16m4_t test_vloxei32_v_f16m4_tu(vfloat16m4_t maskedoff, const _Float16 *base, vuint32m8_t bindex, size_t vl) {
  return vloxei32_tu(maskedoff, base, bindex, vl);
}

vfloat32mf2_t test_vloxei32_v_f32mf2_tu(vfloat32mf2_t maskedoff, const float *base, vuint32mf2_t bindex, size_t vl) {
  return vloxei32_tu(maskedoff, base, bindex, vl);
}

vfloat32m1_t test_vloxei32_v_f32m1_tu(vfloat32m1_t maskedoff, const float *base, vuint32m1_t bindex, size_t vl) {
  return vloxei32_tu(maskedoff, base, bindex, vl);
}

vfloat32m2_t test_vloxei32_v_f32m2_tu(vfloat32m2_t maskedoff, const float *base, vuint32m2_t bindex, size_t vl) {
  return vloxei32_tu(maskedoff, base, bindex, vl);
}

vfloat32m4_t test_vloxei32_v_f32m4_tu(vfloat32m4_t maskedoff, const float *base, vuint32m4_t bindex, size_t vl) {
  return vloxei32_tu(maskedoff, base, bindex, vl);
}

vfloat32m8_t test_vloxei32_v_f32m8_tu(vfloat32m8_t maskedoff, const float *base, vuint32m8_t bindex, size_t vl) {
  return vloxei32_tu(maskedoff, base, bindex, vl);
}

vfloat64m1_t test_vloxei32_v_f64m1_tu(vfloat64m1_t maskedoff, const double *base, vuint32mf2_t bindex, size_t vl) {
  return vloxei32_tu(maskedoff, base, bindex, vl);
}

vfloat64m2_t test_vloxei32_v_f64m2_tu(vfloat64m2_t maskedoff, const double *base, vuint32m1_t bindex, size_t vl) {
  return vloxei32_tu(maskedoff, base, bindex, vl);
}

vfloat64m4_t test_vloxei32_v_f64m4_tu(vfloat64m4_t maskedoff, const double *base, vuint32m2_t bindex, size_t vl) {
  return vloxei32_tu(maskedoff, base, bindex, vl);
}

vfloat64m8_t test_vloxei32_v_f64m8_tu(vfloat64m8_t maskedoff, const double *base, vuint32m4_t bindex, size_t vl) {
  return vloxei32_tu(maskedoff, base, bindex, vl);
}

vint8mf8_t test_vloxei32_v_i8mf8_tu(vint8mf8_t maskedoff, const int8_t *base, vuint32mf2_t bindex, size_t vl) {
  return vloxei32_tu(maskedoff, base, bindex, vl);
}

vint8mf4_t test_vloxei32_v_i8mf4_tu(vint8mf4_t maskedoff, const int8_t *base, vuint32m1_t bindex, size_t vl) {
  return vloxei32_tu(maskedoff, base, bindex, vl);
}

vint8mf2_t test_vloxei32_v_i8mf2_tu(vint8mf2_t maskedoff, const int8_t *base, vuint32m2_t bindex, size_t vl) {
  return vloxei32_tu(maskedoff, base, bindex, vl);
}

vint8m1_t test_vloxei32_v_i8m1_tu(vint8m1_t maskedoff, const int8_t *base, vuint32m4_t bindex, size_t vl) {
  return vloxei32_tu(maskedoff, base, bindex, vl);
}

vint8m2_t test_vloxei32_v_i8m2_tu(vint8m2_t maskedoff, const int8_t *base, vuint32m8_t bindex, size_t vl) {
  return vloxei32_tu(maskedoff, base, bindex, vl);
}

vint16mf4_t test_vloxei32_v_i16mf4_tu(vint16mf4_t maskedoff, const int16_t *base, vuint32mf2_t bindex, size_t vl) {
  return vloxei32_tu(maskedoff, base, bindex, vl);
}

vint16mf2_t test_vloxei32_v_i16mf2_tu(vint16mf2_t maskedoff, const int16_t *base, vuint32m1_t bindex, size_t vl) {
  return vloxei32_tu(maskedoff, base, bindex, vl);
}

vint16m1_t test_vloxei32_v_i16m1_tu(vint16m1_t maskedoff, const int16_t *base, vuint32m2_t bindex, size_t vl) {
  return vloxei32_tu(maskedoff, base, bindex, vl);
}

vint16m2_t test_vloxei32_v_i16m2_tu(vint16m2_t maskedoff, const int16_t *base, vuint32m4_t bindex, size_t vl) {
  return vloxei32_tu(maskedoff, base, bindex, vl);
}

vint16m4_t test_vloxei32_v_i16m4_tu(vint16m4_t maskedoff, const int16_t *base, vuint32m8_t bindex, size_t vl) {
  return vloxei32_tu(maskedoff, base, bindex, vl);
}

vint32mf2_t test_vloxei32_v_i32mf2_tu(vint32mf2_t maskedoff, const int32_t *base, vuint32mf2_t bindex, size_t vl) {
  return vloxei32_tu(maskedoff, base, bindex, vl);
}

vint32m1_t test_vloxei32_v_i32m1_tu(vint32m1_t maskedoff, const int32_t *base, vuint32m1_t bindex, size_t vl) {
  return vloxei32_tu(maskedoff, base, bindex, vl);
}

vint32m2_t test_vloxei32_v_i32m2_tu(vint32m2_t maskedoff, const int32_t *base, vuint32m2_t bindex, size_t vl) {
  return vloxei32_tu(maskedoff, base, bindex, vl);
}

vint32m4_t test_vloxei32_v_i32m4_tu(vint32m4_t maskedoff, const int32_t *base, vuint32m4_t bindex, size_t vl) {
  return vloxei32_tu(maskedoff, base, bindex, vl);
}

vint32m8_t test_vloxei32_v_i32m8_tu(vint32m8_t maskedoff, const int32_t *base, vuint32m8_t bindex, size_t vl) {
  return vloxei32_tu(maskedoff, base, bindex, vl);
}

vint64m1_t test_vloxei32_v_i64m1_tu(vint64m1_t maskedoff, const int64_t *base, vuint32mf2_t bindex, size_t vl) {
  return vloxei32_tu(maskedoff, base, bindex, vl);
}

vint64m2_t test_vloxei32_v_i64m2_tu(vint64m2_t maskedoff, const int64_t *base, vuint32m1_t bindex, size_t vl) {
  return vloxei32_tu(maskedoff, base, bindex, vl);
}

vint64m4_t test_vloxei32_v_i64m4_tu(vint64m4_t maskedoff, const int64_t *base, vuint32m2_t bindex, size_t vl) {
  return vloxei32_tu(maskedoff, base, bindex, vl);
}

vint64m8_t test_vloxei32_v_i64m8_tu(vint64m8_t maskedoff, const int64_t *base, vuint32m4_t bindex, size_t vl) {
  return vloxei32_tu(maskedoff, base, bindex, vl);
}

vuint8mf8_t test_vloxei32_v_u8mf8_tu(vuint8mf8_t maskedoff, const uint8_t *base, vuint32mf2_t bindex, size_t vl) {
  return vloxei32_tu(maskedoff, base, bindex, vl);
}

vuint8mf4_t test_vloxei32_v_u8mf4_tu(vuint8mf4_t maskedoff, const uint8_t *base, vuint32m1_t bindex, size_t vl) {
  return vloxei32_tu(maskedoff, base, bindex, vl);
}

vuint8mf2_t test_vloxei32_v_u8mf2_tu(vuint8mf2_t maskedoff, const uint8_t *base, vuint32m2_t bindex, size_t vl) {
  return vloxei32_tu(maskedoff, base, bindex, vl);
}

vuint8m1_t test_vloxei32_v_u8m1_tu(vuint8m1_t maskedoff, const uint8_t *base, vuint32m4_t bindex, size_t vl) {
  return vloxei32_tu(maskedoff, base, bindex, vl);
}

vuint8m2_t test_vloxei32_v_u8m2_tu(vuint8m2_t maskedoff, const uint8_t *base, vuint32m8_t bindex, size_t vl) {
  return vloxei32_tu(maskedoff, base, bindex, vl);
}

vuint16mf4_t test_vloxei32_v_u16mf4_tu(vuint16mf4_t maskedoff, const uint16_t *base, vuint32mf2_t bindex, size_t vl) {
  return vloxei32_tu(maskedoff, base, bindex, vl);
}

vuint16mf2_t test_vloxei32_v_u16mf2_tu(vuint16mf2_t maskedoff, const uint16_t *base, vuint32m1_t bindex, size_t vl) {
  return vloxei32_tu(maskedoff, base, bindex, vl);
}

vuint16m1_t test_vloxei32_v_u16m1_tu(vuint16m1_t maskedoff, const uint16_t *base, vuint32m2_t bindex, size_t vl) {
  return vloxei32_tu(maskedoff, base, bindex, vl);
}

vuint16m2_t test_vloxei32_v_u16m2_tu(vuint16m2_t maskedoff, const uint16_t *base, vuint32m4_t bindex, size_t vl) {
  return vloxei32_tu(maskedoff, base, bindex, vl);
}

vuint16m4_t test_vloxei32_v_u16m4_tu(vuint16m4_t maskedoff, const uint16_t *base, vuint32m8_t bindex, size_t vl) {
  return vloxei32_tu(maskedoff, base, bindex, vl);
}

vuint32mf2_t test_vloxei32_v_u32mf2_tu(vuint32mf2_t maskedoff, const uint32_t *base, vuint32mf2_t bindex, size_t vl) {
  return vloxei32_tu(maskedoff, base, bindex, vl);
}

vuint32m1_t test_vloxei32_v_u32m1_tu(vuint32m1_t maskedoff, const uint32_t *base, vuint32m1_t bindex, size_t vl) {
  return vloxei32_tu(maskedoff, base, bindex, vl);
}

vuint32m2_t test_vloxei32_v_u32m2_tu(vuint32m2_t maskedoff, const uint32_t *base, vuint32m2_t bindex, size_t vl) {
  return vloxei32_tu(maskedoff, base, bindex, vl);
}

vuint32m4_t test_vloxei32_v_u32m4_tu(vuint32m4_t maskedoff, const uint32_t *base, vuint32m4_t bindex, size_t vl) {
  return vloxei32_tu(maskedoff, base, bindex, vl);
}

vuint32m8_t test_vloxei32_v_u32m8_tu(vuint32m8_t maskedoff, const uint32_t *base, vuint32m8_t bindex, size_t vl) {
  return vloxei32_tu(maskedoff, base, bindex, vl);
}

vuint64m1_t test_vloxei32_v_u64m1_tu(vuint64m1_t maskedoff, const uint64_t *base, vuint32mf2_t bindex, size_t vl) {
  return vloxei32_tu(maskedoff, base, bindex, vl);
}

vuint64m2_t test_vloxei32_v_u64m2_tu(vuint64m2_t maskedoff, const uint64_t *base, vuint32m1_t bindex, size_t vl) {
  return vloxei32_tu(maskedoff, base, bindex, vl);
}

vuint64m4_t test_vloxei32_v_u64m4_tu(vuint64m4_t maskedoff, const uint64_t *base, vuint32m2_t bindex, size_t vl) {
  return vloxei32_tu(maskedoff, base, bindex, vl);
}

vuint64m8_t test_vloxei32_v_u64m8_tu(vuint64m8_t maskedoff, const uint64_t *base, vuint32m4_t bindex, size_t vl) {
  return vloxei32_tu(maskedoff, base, bindex, vl);
}

vfloat16mf4_t test_vloxei32_v_f16mf4_ta(const _Float16 *base, vuint32mf2_t bindex, size_t vl) {
  return vloxei32_ta(base, bindex, vl);
}

vfloat16mf2_t test_vloxei32_v_f16mf2_ta(const _Float16 *base, vuint32m1_t bindex, size_t vl) {
  return vloxei32_ta(base, bindex, vl);
}

vfloat16m1_t test_vloxei32_v_f16m1_ta(const _Float16 *base, vuint32m2_t bindex, size_t vl) {
  return vloxei32_ta(base, bindex, vl);
}

vfloat16m2_t test_vloxei32_v_f16m2_ta(const _Float16 *base, vuint32m4_t bindex, size_t vl) {
  return vloxei32_ta(base, bindex, vl);
}

vfloat16m4_t test_vloxei32_v_f16m4_ta(const _Float16 *base, vuint32m8_t bindex, size_t vl) {
  return vloxei32_ta(base, bindex, vl);
}

vfloat32mf2_t test_vloxei32_v_f32mf2_ta(const float *base, vuint32mf2_t bindex, size_t vl) {
  return vloxei32_ta(base, bindex, vl);
}

vfloat32m1_t test_vloxei32_v_f32m1_ta(const float *base, vuint32m1_t bindex, size_t vl) {
  return vloxei32_ta(base, bindex, vl);
}

vfloat32m2_t test_vloxei32_v_f32m2_ta(const float *base, vuint32m2_t bindex, size_t vl) {
  return vloxei32_ta(base, bindex, vl);
}

vfloat32m4_t test_vloxei32_v_f32m4_ta(const float *base, vuint32m4_t bindex, size_t vl) {
  return vloxei32_ta(base, bindex, vl);
}

vfloat32m8_t test_vloxei32_v_f32m8_ta(const float *base, vuint32m8_t bindex, size_t vl) {
  return vloxei32_ta(base, bindex, vl);
}

vfloat64m1_t test_vloxei32_v_f64m1_ta(const double *base, vuint32mf2_t bindex, size_t vl) {
  return vloxei32_ta(base, bindex, vl);
}

vfloat64m2_t test_vloxei32_v_f64m2_ta(const double *base, vuint32m1_t bindex, size_t vl) {
  return vloxei32_ta(base, bindex, vl);
}

vfloat64m4_t test_vloxei32_v_f64m4_ta(const double *base, vuint32m2_t bindex, size_t vl) {
  return vloxei32_ta(base, bindex, vl);
}

vfloat64m8_t test_vloxei32_v_f64m8_ta(const double *base, vuint32m4_t bindex, size_t vl) {
  return vloxei32_ta(base, bindex, vl);
}

vint8mf8_t test_vloxei32_v_i8mf8_ta(const int8_t *base, vuint32mf2_t bindex, size_t vl) {
  return vloxei32_ta(base, bindex, vl);
}

vint8mf4_t test_vloxei32_v_i8mf4_ta(const int8_t *base, vuint32m1_t bindex, size_t vl) {
  return vloxei32_ta(base, bindex, vl);
}

vint8mf2_t test_vloxei32_v_i8mf2_ta(const int8_t *base, vuint32m2_t bindex, size_t vl) {
  return vloxei32_ta(base, bindex, vl);
}

vint8m1_t test_vloxei32_v_i8m1_ta(const int8_t *base, vuint32m4_t bindex, size_t vl) {
  return vloxei32_ta(base, bindex, vl);
}

vint8m2_t test_vloxei32_v_i8m2_ta(const int8_t *base, vuint32m8_t bindex, size_t vl) {
  return vloxei32_ta(base, bindex, vl);
}

vint16mf4_t test_vloxei32_v_i16mf4_ta(const int16_t *base, vuint32mf2_t bindex, size_t vl) {
  return vloxei32_ta(base, bindex, vl);
}

vint16mf2_t test_vloxei32_v_i16mf2_ta(const int16_t *base, vuint32m1_t bindex, size_t vl) {
  return vloxei32_ta(base, bindex, vl);
}

vint16m1_t test_vloxei32_v_i16m1_ta(const int16_t *base, vuint32m2_t bindex, size_t vl) {
  return vloxei32_ta(base, bindex, vl);
}

vint16m2_t test_vloxei32_v_i16m2_ta(const int16_t *base, vuint32m4_t bindex, size_t vl) {
  return vloxei32_ta(base, bindex, vl);
}

vint16m4_t test_vloxei32_v_i16m4_ta(const int16_t *base, vuint32m8_t bindex, size_t vl) {
  return vloxei32_ta(base, bindex, vl);
}

vint32mf2_t test_vloxei32_v_i32mf2_ta(const int32_t *base, vuint32mf2_t bindex, size_t vl) {
  return vloxei32_ta(base, bindex, vl);
}

vint32m1_t test_vloxei32_v_i32m1_ta(const int32_t *base, vuint32m1_t bindex, size_t vl) {
  return vloxei32_ta(base, bindex, vl);
}

vint32m2_t test_vloxei32_v_i32m2_ta(const int32_t *base, vuint32m2_t bindex, size_t vl) {
  return vloxei32_ta(base, bindex, vl);
}

vint32m4_t test_vloxei32_v_i32m4_ta(const int32_t *base, vuint32m4_t bindex, size_t vl) {
  return vloxei32_ta(base, bindex, vl);
}

vint32m8_t test_vloxei32_v_i32m8_ta(const int32_t *base, vuint32m8_t bindex, size_t vl) {
  return vloxei32_ta(base, bindex, vl);
}

vint64m1_t test_vloxei32_v_i64m1_ta(const int64_t *base, vuint32mf2_t bindex, size_t vl) {
  return vloxei32_ta(base, bindex, vl);
}

vint64m2_t test_vloxei32_v_i64m2_ta(const int64_t *base, vuint32m1_t bindex, size_t vl) {
  return vloxei32_ta(base, bindex, vl);
}

vint64m4_t test_vloxei32_v_i64m4_ta(const int64_t *base, vuint32m2_t bindex, size_t vl) {
  return vloxei32_ta(base, bindex, vl);
}

vint64m8_t test_vloxei32_v_i64m8_ta(const int64_t *base, vuint32m4_t bindex, size_t vl) {
  return vloxei32_ta(base, bindex, vl);
}

vuint8mf8_t test_vloxei32_v_u8mf8_ta(const uint8_t *base, vuint32mf2_t bindex, size_t vl) {
  return vloxei32_ta(base, bindex, vl);
}

vuint8mf4_t test_vloxei32_v_u8mf4_ta(const uint8_t *base, vuint32m1_t bindex, size_t vl) {
  return vloxei32_ta(base, bindex, vl);
}

vuint8mf2_t test_vloxei32_v_u8mf2_ta(const uint8_t *base, vuint32m2_t bindex, size_t vl) {
  return vloxei32_ta(base, bindex, vl);
}

vuint8m1_t test_vloxei32_v_u8m1_ta(const uint8_t *base, vuint32m4_t bindex, size_t vl) {
  return vloxei32_ta(base, bindex, vl);
}

vuint8m2_t test_vloxei32_v_u8m2_ta(const uint8_t *base, vuint32m8_t bindex, size_t vl) {
  return vloxei32_ta(base, bindex, vl);
}

vuint16mf4_t test_vloxei32_v_u16mf4_ta(const uint16_t *base, vuint32mf2_t bindex, size_t vl) {
  return vloxei32_ta(base, bindex, vl);
}

vuint16mf2_t test_vloxei32_v_u16mf2_ta(const uint16_t *base, vuint32m1_t bindex, size_t vl) {
  return vloxei32_ta(base, bindex, vl);
}

vuint16m1_t test_vloxei32_v_u16m1_ta(const uint16_t *base, vuint32m2_t bindex, size_t vl) {
  return vloxei32_ta(base, bindex, vl);
}

vuint16m2_t test_vloxei32_v_u16m2_ta(const uint16_t *base, vuint32m4_t bindex, size_t vl) {
  return vloxei32_ta(base, bindex, vl);
}

vuint16m4_t test_vloxei32_v_u16m4_ta(const uint16_t *base, vuint32m8_t bindex, size_t vl) {
  return vloxei32_ta(base, bindex, vl);
}

vuint32mf2_t test_vloxei32_v_u32mf2_ta(const uint32_t *base, vuint32mf2_t bindex, size_t vl) {
  return vloxei32_ta(base, bindex, vl);
}

vuint32m1_t test_vloxei32_v_u32m1_ta(const uint32_t *base, vuint32m1_t bindex, size_t vl) {
  return vloxei32_ta(base, bindex, vl);
}

vuint32m2_t test_vloxei32_v_u32m2_ta(const uint32_t *base, vuint32m2_t bindex, size_t vl) {
  return vloxei32_ta(base, bindex, vl);
}

vuint32m4_t test_vloxei32_v_u32m4_ta(const uint32_t *base, vuint32m4_t bindex, size_t vl) {
  return vloxei32_ta(base, bindex, vl);
}

vuint32m8_t test_vloxei32_v_u32m8_ta(const uint32_t *base, vuint32m8_t bindex, size_t vl) {
  return vloxei32_ta(base, bindex, vl);
}

vuint64m1_t test_vloxei32_v_u64m1_ta(const uint64_t *base, vuint32mf2_t bindex, size_t vl) {
  return vloxei32_ta(base, bindex, vl);
}

vuint64m2_t test_vloxei32_v_u64m2_ta(const uint64_t *base, vuint32m1_t bindex, size_t vl) {
  return vloxei32_ta(base, bindex, vl);
}

vuint64m4_t test_vloxei32_v_u64m4_ta(const uint64_t *base, vuint32m2_t bindex, size_t vl) {
  return vloxei32_ta(base, bindex, vl);
}

vuint64m8_t test_vloxei32_v_u64m8_ta(const uint64_t *base, vuint32m4_t bindex, size_t vl) {
  return vloxei32_ta(base, bindex, vl);
}

vfloat16mf4_t test_vloxei32_v_f16mf4_tuma(vbool64_t mask, vfloat16mf4_t maskedoff, const _Float16 *base, vuint32mf2_t bindex, size_t vl) {
  return vloxei32_tuma(mask, maskedoff, base, bindex, vl);
}

vfloat16mf2_t test_vloxei32_v_f16mf2_tuma(vbool32_t mask, vfloat16mf2_t maskedoff, const _Float16 *base, vuint32m1_t bindex, size_t vl) {
  return vloxei32_tuma(mask, maskedoff, base, bindex, vl);
}

vfloat16m1_t test_vloxei32_v_f16m1_tuma(vbool16_t mask, vfloat16m1_t maskedoff, const _Float16 *base, vuint32m2_t bindex, size_t vl) {
  return vloxei32_tuma(mask, maskedoff, base, bindex, vl);
}

vfloat16m2_t test_vloxei32_v_f16m2_tuma(vbool8_t mask, vfloat16m2_t maskedoff, const _Float16 *base, vuint32m4_t bindex, size_t vl) {
  return vloxei32_tuma(mask, maskedoff, base, bindex, vl);
}

vfloat16m4_t test_vloxei32_v_f16m4_tuma(vbool4_t mask, vfloat16m4_t maskedoff, const _Float16 *base, vuint32m8_t bindex, size_t vl) {
  return vloxei32_tuma(mask, maskedoff, base, bindex, vl);
}

vfloat32mf2_t test_vloxei32_v_f32mf2_tuma(vbool64_t mask, vfloat32mf2_t maskedoff, const float *base, vuint32mf2_t bindex, size_t vl) {
  return vloxei32_tuma(mask, maskedoff, base, bindex, vl);
}

vfloat32m1_t test_vloxei32_v_f32m1_tuma(vbool32_t mask, vfloat32m1_t maskedoff, const float *base, vuint32m1_t bindex, size_t vl) {
  return vloxei32_tuma(mask, maskedoff, base, bindex, vl);
}

vfloat32m2_t test_vloxei32_v_f32m2_tuma(vbool16_t mask, vfloat32m2_t maskedoff, const float *base, vuint32m2_t bindex, size_t vl) {
  return vloxei32_tuma(mask, maskedoff, base, bindex, vl);
}

vfloat32m4_t test_vloxei32_v_f32m4_tuma(vbool8_t mask, vfloat32m4_t maskedoff, const float *base, vuint32m4_t bindex, size_t vl) {
  return vloxei32_tuma(mask, maskedoff, base, bindex, vl);
}

vfloat32m8_t test_vloxei32_v_f32m8_tuma(vbool4_t mask, vfloat32m8_t maskedoff, const float *base, vuint32m8_t bindex, size_t vl) {
  return vloxei32_tuma(mask, maskedoff, base, bindex, vl);
}

vfloat64m1_t test_vloxei32_v_f64m1_tuma(vbool64_t mask, vfloat64m1_t maskedoff, const double *base, vuint32mf2_t bindex, size_t vl) {
  return vloxei32_tuma(mask, maskedoff, base, bindex, vl);
}

vfloat64m2_t test_vloxei32_v_f64m2_tuma(vbool32_t mask, vfloat64m2_t maskedoff, const double *base, vuint32m1_t bindex, size_t vl) {
  return vloxei32_tuma(mask, maskedoff, base, bindex, vl);
}

vfloat64m4_t test_vloxei32_v_f64m4_tuma(vbool16_t mask, vfloat64m4_t maskedoff, const double *base, vuint32m2_t bindex, size_t vl) {
  return vloxei32_tuma(mask, maskedoff, base, bindex, vl);
}

vfloat64m8_t test_vloxei32_v_f64m8_tuma(vbool8_t mask, vfloat64m8_t maskedoff, const double *base, vuint32m4_t bindex, size_t vl) {
  return vloxei32_tuma(mask, maskedoff, base, bindex, vl);
}

vint8mf8_t test_vloxei32_v_i8mf8_tuma(vbool64_t mask, vint8mf8_t maskedoff, const int8_t *base, vuint32mf2_t bindex, size_t vl) {
  return vloxei32_tuma(mask, maskedoff, base, bindex, vl);
}

vint8mf4_t test_vloxei32_v_i8mf4_tuma(vbool32_t mask, vint8mf4_t maskedoff, const int8_t *base, vuint32m1_t bindex, size_t vl) {
  return vloxei32_tuma(mask, maskedoff, base, bindex, vl);
}

vint8mf2_t test_vloxei32_v_i8mf2_tuma(vbool16_t mask, vint8mf2_t maskedoff, const int8_t *base, vuint32m2_t bindex, size_t vl) {
  return vloxei32_tuma(mask, maskedoff, base, bindex, vl);
}

vint8m1_t test_vloxei32_v_i8m1_tuma(vbool8_t mask, vint8m1_t maskedoff, const int8_t *base, vuint32m4_t bindex, size_t vl) {
  return vloxei32_tuma(mask, maskedoff, base, bindex, vl);
}

vint8m2_t test_vloxei32_v_i8m2_tuma(vbool4_t mask, vint8m2_t maskedoff, const int8_t *base, vuint32m8_t bindex, size_t vl) {
  return vloxei32_tuma(mask, maskedoff, base, bindex, vl);
}

vint16mf4_t test_vloxei32_v_i16mf4_tuma(vbool64_t mask, vint16mf4_t maskedoff, const int16_t *base, vuint32mf2_t bindex, size_t vl) {
  return vloxei32_tuma(mask, maskedoff, base, bindex, vl);
}

vint16mf2_t test_vloxei32_v_i16mf2_tuma(vbool32_t mask, vint16mf2_t maskedoff, const int16_t *base, vuint32m1_t bindex, size_t vl) {
  return vloxei32_tuma(mask, maskedoff, base, bindex, vl);
}

vint16m1_t test_vloxei32_v_i16m1_tuma(vbool16_t mask, vint16m1_t maskedoff, const int16_t *base, vuint32m2_t bindex, size_t vl) {
  return vloxei32_tuma(mask, maskedoff, base, bindex, vl);
}

vint16m2_t test_vloxei32_v_i16m2_tuma(vbool8_t mask, vint16m2_t maskedoff, const int16_t *base, vuint32m4_t bindex, size_t vl) {
  return vloxei32_tuma(mask, maskedoff, base, bindex, vl);
}

vint16m4_t test_vloxei32_v_i16m4_tuma(vbool4_t mask, vint16m4_t maskedoff, const int16_t *base, vuint32m8_t bindex, size_t vl) {
  return vloxei32_tuma(mask, maskedoff, base, bindex, vl);
}

vint32mf2_t test_vloxei32_v_i32mf2_tuma(vbool64_t mask, vint32mf2_t maskedoff, const int32_t *base, vuint32mf2_t bindex, size_t vl) {
  return vloxei32_tuma(mask, maskedoff, base, bindex, vl);
}

vint32m1_t test_vloxei32_v_i32m1_tuma(vbool32_t mask, vint32m1_t maskedoff, const int32_t *base, vuint32m1_t bindex, size_t vl) {
  return vloxei32_tuma(mask, maskedoff, base, bindex, vl);
}

vint32m2_t test_vloxei32_v_i32m2_tuma(vbool16_t mask, vint32m2_t maskedoff, const int32_t *base, vuint32m2_t bindex, size_t vl) {
  return vloxei32_tuma(mask, maskedoff, base, bindex, vl);
}

vint32m4_t test_vloxei32_v_i32m4_tuma(vbool8_t mask, vint32m4_t maskedoff, const int32_t *base, vuint32m4_t bindex, size_t vl) {
  return vloxei32_tuma(mask, maskedoff, base, bindex, vl);
}

vint32m8_t test_vloxei32_v_i32m8_tuma(vbool4_t mask, vint32m8_t maskedoff, const int32_t *base, vuint32m8_t bindex, size_t vl) {
  return vloxei32_tuma(mask, maskedoff, base, bindex, vl);
}

vint64m1_t test_vloxei32_v_i64m1_tuma(vbool64_t mask, vint64m1_t maskedoff, const int64_t *base, vuint32mf2_t bindex, size_t vl) {
  return vloxei32_tuma(mask, maskedoff, base, bindex, vl);
}

vint64m2_t test_vloxei32_v_i64m2_tuma(vbool32_t mask, vint64m2_t maskedoff, const int64_t *base, vuint32m1_t bindex, size_t vl) {
  return vloxei32_tuma(mask, maskedoff, base, bindex, vl);
}

vint64m4_t test_vloxei32_v_i64m4_tuma(vbool16_t mask, vint64m4_t maskedoff, const int64_t *base, vuint32m2_t bindex, size_t vl) {
  return vloxei32_tuma(mask, maskedoff, base, bindex, vl);
}

vint64m8_t test_vloxei32_v_i64m8_tuma(vbool8_t mask, vint64m8_t maskedoff, const int64_t *base, vuint32m4_t bindex, size_t vl) {
  return vloxei32_tuma(mask, maskedoff, base, bindex, vl);
}

vuint8mf8_t test_vloxei32_v_u8mf8_tuma(vbool64_t mask, vuint8mf8_t maskedoff, const uint8_t *base, vuint32mf2_t bindex, size_t vl) {
  return vloxei32_tuma(mask, maskedoff, base, bindex, vl);
}

vuint8mf4_t test_vloxei32_v_u8mf4_tuma(vbool32_t mask, vuint8mf4_t maskedoff, const uint8_t *base, vuint32m1_t bindex, size_t vl) {
  return vloxei32_tuma(mask, maskedoff, base, bindex, vl);
}

vuint8mf2_t test_vloxei32_v_u8mf2_tuma(vbool16_t mask, vuint8mf2_t maskedoff, const uint8_t *base, vuint32m2_t bindex, size_t vl) {
  return vloxei32_tuma(mask, maskedoff, base, bindex, vl);
}

vuint8m1_t test_vloxei32_v_u8m1_tuma(vbool8_t mask, vuint8m1_t maskedoff, const uint8_t *base, vuint32m4_t bindex, size_t vl) {
  return vloxei32_tuma(mask, maskedoff, base, bindex, vl);
}

vuint8m2_t test_vloxei32_v_u8m2_tuma(vbool4_t mask, vuint8m2_t maskedoff, const uint8_t *base, vuint32m8_t bindex, size_t vl) {
  return vloxei32_tuma(mask, maskedoff, base, bindex, vl);
}

vuint16mf4_t test_vloxei32_v_u16mf4_tuma(vbool64_t mask, vuint16mf4_t maskedoff, const uint16_t *base, vuint32mf2_t bindex, size_t vl) {
  return vloxei32_tuma(mask, maskedoff, base, bindex, vl);
}

vuint16mf2_t test_vloxei32_v_u16mf2_tuma(vbool32_t mask, vuint16mf2_t maskedoff, const uint16_t *base, vuint32m1_t bindex, size_t vl) {
  return vloxei32_tuma(mask, maskedoff, base, bindex, vl);
}

vuint16m1_t test_vloxei32_v_u16m1_tuma(vbool16_t mask, vuint16m1_t maskedoff, const uint16_t *base, vuint32m2_t bindex, size_t vl) {
  return vloxei32_tuma(mask, maskedoff, base, bindex, vl);
}

vuint16m2_t test_vloxei32_v_u16m2_tuma(vbool8_t mask, vuint16m2_t maskedoff, const uint16_t *base, vuint32m4_t bindex, size_t vl) {
  return vloxei32_tuma(mask, maskedoff, base, bindex, vl);
}

vuint16m4_t test_vloxei32_v_u16m4_tuma(vbool4_t mask, vuint16m4_t maskedoff, const uint16_t *base, vuint32m8_t bindex, size_t vl) {
  return vloxei32_tuma(mask, maskedoff, base, bindex, vl);
}

vuint32mf2_t test_vloxei32_v_u32mf2_tuma(vbool64_t mask, vuint32mf2_t maskedoff, const uint32_t *base, vuint32mf2_t bindex, size_t vl) {
  return vloxei32_tuma(mask, maskedoff, base, bindex, vl);
}

vuint32m1_t test_vloxei32_v_u32m1_tuma(vbool32_t mask, vuint32m1_t maskedoff, const uint32_t *base, vuint32m1_t bindex, size_t vl) {
  return vloxei32_tuma(mask, maskedoff, base, bindex, vl);
}

vuint32m2_t test_vloxei32_v_u32m2_tuma(vbool16_t mask, vuint32m2_t maskedoff, const uint32_t *base, vuint32m2_t bindex, size_t vl) {
  return vloxei32_tuma(mask, maskedoff, base, bindex, vl);
}

vuint32m4_t test_vloxei32_v_u32m4_tuma(vbool8_t mask, vuint32m4_t maskedoff, const uint32_t *base, vuint32m4_t bindex, size_t vl) {
  return vloxei32_tuma(mask, maskedoff, base, bindex, vl);
}

vuint32m8_t test_vloxei32_v_u32m8_tuma(vbool4_t mask, vuint32m8_t maskedoff, const uint32_t *base, vuint32m8_t bindex, size_t vl) {
  return vloxei32_tuma(mask, maskedoff, base, bindex, vl);
}

vuint64m1_t test_vloxei32_v_u64m1_tuma(vbool64_t mask, vuint64m1_t maskedoff, const uint64_t *base, vuint32mf2_t bindex, size_t vl) {
  return vloxei32_tuma(mask, maskedoff, base, bindex, vl);
}

vuint64m2_t test_vloxei32_v_u64m2_tuma(vbool32_t mask, vuint64m2_t maskedoff, const uint64_t *base, vuint32m1_t bindex, size_t vl) {
  return vloxei32_tuma(mask, maskedoff, base, bindex, vl);
}

vuint64m4_t test_vloxei32_v_u64m4_tuma(vbool16_t mask, vuint64m4_t maskedoff, const uint64_t *base, vuint32m2_t bindex, size_t vl) {
  return vloxei32_tuma(mask, maskedoff, base, bindex, vl);
}

vuint64m8_t test_vloxei32_v_u64m8_tuma(vbool8_t mask, vuint64m8_t maskedoff, const uint64_t *base, vuint32m4_t bindex, size_t vl) {
  return vloxei32_tuma(mask, maskedoff, base, bindex, vl);
}

vfloat16mf4_t test_vloxei32_v_f16mf4_tumu(vbool64_t mask, vfloat16mf4_t maskedoff, const _Float16 *base, vuint32mf2_t bindex, size_t vl) {
  return vloxei32_tumu(mask, maskedoff, base, bindex, vl);
}

vfloat16mf2_t test_vloxei32_v_f16mf2_tumu(vbool32_t mask, vfloat16mf2_t maskedoff, const _Float16 *base, vuint32m1_t bindex, size_t vl) {
  return vloxei32_tumu(mask, maskedoff, base, bindex, vl);
}

vfloat16m1_t test_vloxei32_v_f16m1_tumu(vbool16_t mask, vfloat16m1_t maskedoff, const _Float16 *base, vuint32m2_t bindex, size_t vl) {
  return vloxei32_tumu(mask, maskedoff, base, bindex, vl);
}

vfloat16m2_t test_vloxei32_v_f16m2_tumu(vbool8_t mask, vfloat16m2_t maskedoff, const _Float16 *base, vuint32m4_t bindex, size_t vl) {
  return vloxei32_tumu(mask, maskedoff, base, bindex, vl);
}

vfloat16m4_t test_vloxei32_v_f16m4_tumu(vbool4_t mask, vfloat16m4_t maskedoff, const _Float16 *base, vuint32m8_t bindex, size_t vl) {
  return vloxei32_tumu(mask, maskedoff, base, bindex, vl);
}

vfloat32mf2_t test_vloxei32_v_f32mf2_tumu(vbool64_t mask, vfloat32mf2_t maskedoff, const float *base, vuint32mf2_t bindex, size_t vl) {
  return vloxei32_tumu(mask, maskedoff, base, bindex, vl);
}

vfloat32m1_t test_vloxei32_v_f32m1_tumu(vbool32_t mask, vfloat32m1_t maskedoff, const float *base, vuint32m1_t bindex, size_t vl) {
  return vloxei32_tumu(mask, maskedoff, base, bindex, vl);
}

vfloat32m2_t test_vloxei32_v_f32m2_tumu(vbool16_t mask, vfloat32m2_t maskedoff, const float *base, vuint32m2_t bindex, size_t vl) {
  return vloxei32_tumu(mask, maskedoff, base, bindex, vl);
}

vfloat32m4_t test_vloxei32_v_f32m4_tumu(vbool8_t mask, vfloat32m4_t maskedoff, const float *base, vuint32m4_t bindex, size_t vl) {
  return vloxei32_tumu(mask, maskedoff, base, bindex, vl);
}

vfloat32m8_t test_vloxei32_v_f32m8_tumu(vbool4_t mask, vfloat32m8_t maskedoff, const float *base, vuint32m8_t bindex, size_t vl) {
  return vloxei32_tumu(mask, maskedoff, base, bindex, vl);
}

vfloat64m1_t test_vloxei32_v_f64m1_tumu(vbool64_t mask, vfloat64m1_t maskedoff, const double *base, vuint32mf2_t bindex, size_t vl) {
  return vloxei32_tumu(mask, maskedoff, base, bindex, vl);
}

vfloat64m2_t test_vloxei32_v_f64m2_tumu(vbool32_t mask, vfloat64m2_t maskedoff, const double *base, vuint32m1_t bindex, size_t vl) {
  return vloxei32_tumu(mask, maskedoff, base, bindex, vl);
}

vfloat64m4_t test_vloxei32_v_f64m4_tumu(vbool16_t mask, vfloat64m4_t maskedoff, const double *base, vuint32m2_t bindex, size_t vl) {
  return vloxei32_tumu(mask, maskedoff, base, bindex, vl);
}

vfloat64m8_t test_vloxei32_v_f64m8_tumu(vbool8_t mask, vfloat64m8_t maskedoff, const double *base, vuint32m4_t bindex, size_t vl) {
  return vloxei32_tumu(mask, maskedoff, base, bindex, vl);
}

vint8mf8_t test_vloxei32_v_i8mf8_tumu(vbool64_t mask, vint8mf8_t maskedoff, const int8_t *base, vuint32mf2_t bindex, size_t vl) {
  return vloxei32_tumu(mask, maskedoff, base, bindex, vl);
}

vint8mf4_t test_vloxei32_v_i8mf4_tumu(vbool32_t mask, vint8mf4_t maskedoff, const int8_t *base, vuint32m1_t bindex, size_t vl) {
  return vloxei32_tumu(mask, maskedoff, base, bindex, vl);
}

vint8mf2_t test_vloxei32_v_i8mf2_tumu(vbool16_t mask, vint8mf2_t maskedoff, const int8_t *base, vuint32m2_t bindex, size_t vl) {
  return vloxei32_tumu(mask, maskedoff, base, bindex, vl);
}

vint8m1_t test_vloxei32_v_i8m1_tumu(vbool8_t mask, vint8m1_t maskedoff, const int8_t *base, vuint32m4_t bindex, size_t vl) {
  return vloxei32_tumu(mask, maskedoff, base, bindex, vl);
}

vint8m2_t test_vloxei32_v_i8m2_tumu(vbool4_t mask, vint8m2_t maskedoff, const int8_t *base, vuint32m8_t bindex, size_t vl) {
  return vloxei32_tumu(mask, maskedoff, base, bindex, vl);
}

vint16mf4_t test_vloxei32_v_i16mf4_tumu(vbool64_t mask, vint16mf4_t maskedoff, const int16_t *base, vuint32mf2_t bindex, size_t vl) {
  return vloxei32_tumu(mask, maskedoff, base, bindex, vl);
}

vint16mf2_t test_vloxei32_v_i16mf2_tumu(vbool32_t mask, vint16mf2_t maskedoff, const int16_t *base, vuint32m1_t bindex, size_t vl) {
  return vloxei32_tumu(mask, maskedoff, base, bindex, vl);
}

vint16m1_t test_vloxei32_v_i16m1_tumu(vbool16_t mask, vint16m1_t maskedoff, const int16_t *base, vuint32m2_t bindex, size_t vl) {
  return vloxei32_tumu(mask, maskedoff, base, bindex, vl);
}

vint16m2_t test_vloxei32_v_i16m2_tumu(vbool8_t mask, vint16m2_t maskedoff, const int16_t *base, vuint32m4_t bindex, size_t vl) {
  return vloxei32_tumu(mask, maskedoff, base, bindex, vl);
}

vint16m4_t test_vloxei32_v_i16m4_tumu(vbool4_t mask, vint16m4_t maskedoff, const int16_t *base, vuint32m8_t bindex, size_t vl) {
  return vloxei32_tumu(mask, maskedoff, base, bindex, vl);
}

vint32mf2_t test_vloxei32_v_i32mf2_tumu(vbool64_t mask, vint32mf2_t maskedoff, const int32_t *base, vuint32mf2_t bindex, size_t vl) {
  return vloxei32_tumu(mask, maskedoff, base, bindex, vl);
}

vint32m1_t test_vloxei32_v_i32m1_tumu(vbool32_t mask, vint32m1_t maskedoff, const int32_t *base, vuint32m1_t bindex, size_t vl) {
  return vloxei32_tumu(mask, maskedoff, base, bindex, vl);
}

vint32m2_t test_vloxei32_v_i32m2_tumu(vbool16_t mask, vint32m2_t maskedoff, const int32_t *base, vuint32m2_t bindex, size_t vl) {
  return vloxei32_tumu(mask, maskedoff, base, bindex, vl);
}

vint32m4_t test_vloxei32_v_i32m4_tumu(vbool8_t mask, vint32m4_t maskedoff, const int32_t *base, vuint32m4_t bindex, size_t vl) {
  return vloxei32_tumu(mask, maskedoff, base, bindex, vl);
}

vint32m8_t test_vloxei32_v_i32m8_tumu(vbool4_t mask, vint32m8_t maskedoff, const int32_t *base, vuint32m8_t bindex, size_t vl) {
  return vloxei32_tumu(mask, maskedoff, base, bindex, vl);
}

vint64m1_t test_vloxei32_v_i64m1_tumu(vbool64_t mask, vint64m1_t maskedoff, const int64_t *base, vuint32mf2_t bindex, size_t vl) {
  return vloxei32_tumu(mask, maskedoff, base, bindex, vl);
}

vint64m2_t test_vloxei32_v_i64m2_tumu(vbool32_t mask, vint64m2_t maskedoff, const int64_t *base, vuint32m1_t bindex, size_t vl) {
  return vloxei32_tumu(mask, maskedoff, base, bindex, vl);
}

vint64m4_t test_vloxei32_v_i64m4_tumu(vbool16_t mask, vint64m4_t maskedoff, const int64_t *base, vuint32m2_t bindex, size_t vl) {
  return vloxei32_tumu(mask, maskedoff, base, bindex, vl);
}

vint64m8_t test_vloxei32_v_i64m8_tumu(vbool8_t mask, vint64m8_t maskedoff, const int64_t *base, vuint32m4_t bindex, size_t vl) {
  return vloxei32_tumu(mask, maskedoff, base, bindex, vl);
}

vuint8mf8_t test_vloxei32_v_u8mf8_tumu(vbool64_t mask, vuint8mf8_t maskedoff, const uint8_t *base, vuint32mf2_t bindex, size_t vl) {
  return vloxei32_tumu(mask, maskedoff, base, bindex, vl);
}

vuint8mf4_t test_vloxei32_v_u8mf4_tumu(vbool32_t mask, vuint8mf4_t maskedoff, const uint8_t *base, vuint32m1_t bindex, size_t vl) {
  return vloxei32_tumu(mask, maskedoff, base, bindex, vl);
}

vuint8mf2_t test_vloxei32_v_u8mf2_tumu(vbool16_t mask, vuint8mf2_t maskedoff, const uint8_t *base, vuint32m2_t bindex, size_t vl) {
  return vloxei32_tumu(mask, maskedoff, base, bindex, vl);
}

vuint8m1_t test_vloxei32_v_u8m1_tumu(vbool8_t mask, vuint8m1_t maskedoff, const uint8_t *base, vuint32m4_t bindex, size_t vl) {
  return vloxei32_tumu(mask, maskedoff, base, bindex, vl);
}

vuint8m2_t test_vloxei32_v_u8m2_tumu(vbool4_t mask, vuint8m2_t maskedoff, const uint8_t *base, vuint32m8_t bindex, size_t vl) {
  return vloxei32_tumu(mask, maskedoff, base, bindex, vl);
}

vuint16mf4_t test_vloxei32_v_u16mf4_tumu(vbool64_t mask, vuint16mf4_t maskedoff, const uint16_t *base, vuint32mf2_t bindex, size_t vl) {
  return vloxei32_tumu(mask, maskedoff, base, bindex, vl);
}

vuint16mf2_t test_vloxei32_v_u16mf2_tumu(vbool32_t mask, vuint16mf2_t maskedoff, const uint16_t *base, vuint32m1_t bindex, size_t vl) {
  return vloxei32_tumu(mask, maskedoff, base, bindex, vl);
}

vuint16m1_t test_vloxei32_v_u16m1_tumu(vbool16_t mask, vuint16m1_t maskedoff, const uint16_t *base, vuint32m2_t bindex, size_t vl) {
  return vloxei32_tumu(mask, maskedoff, base, bindex, vl);
}

vuint16m2_t test_vloxei32_v_u16m2_tumu(vbool8_t mask, vuint16m2_t maskedoff, const uint16_t *base, vuint32m4_t bindex, size_t vl) {
  return vloxei32_tumu(mask, maskedoff, base, bindex, vl);
}

vuint16m4_t test_vloxei32_v_u16m4_tumu(vbool4_t mask, vuint16m4_t maskedoff, const uint16_t *base, vuint32m8_t bindex, size_t vl) {
  return vloxei32_tumu(mask, maskedoff, base, bindex, vl);
}

vuint32mf2_t test_vloxei32_v_u32mf2_tumu(vbool64_t mask, vuint32mf2_t maskedoff, const uint32_t *base, vuint32mf2_t bindex, size_t vl) {
  return vloxei32_tumu(mask, maskedoff, base, bindex, vl);
}

vuint32m1_t test_vloxei32_v_u32m1_tumu(vbool32_t mask, vuint32m1_t maskedoff, const uint32_t *base, vuint32m1_t bindex, size_t vl) {
  return vloxei32_tumu(mask, maskedoff, base, bindex, vl);
}

vuint32m2_t test_vloxei32_v_u32m2_tumu(vbool16_t mask, vuint32m2_t maskedoff, const uint32_t *base, vuint32m2_t bindex, size_t vl) {
  return vloxei32_tumu(mask, maskedoff, base, bindex, vl);
}

vuint32m4_t test_vloxei32_v_u32m4_tumu(vbool8_t mask, vuint32m4_t maskedoff, const uint32_t *base, vuint32m4_t bindex, size_t vl) {
  return vloxei32_tumu(mask, maskedoff, base, bindex, vl);
}

vuint32m8_t test_vloxei32_v_u32m8_tumu(vbool4_t mask, vuint32m8_t maskedoff, const uint32_t *base, vuint32m8_t bindex, size_t vl) {
  return vloxei32_tumu(mask, maskedoff, base, bindex, vl);
}

vuint64m1_t test_vloxei32_v_u64m1_tumu(vbool64_t mask, vuint64m1_t maskedoff, const uint64_t *base, vuint32mf2_t bindex, size_t vl) {
  return vloxei32_tumu(mask, maskedoff, base, bindex, vl);
}

vuint64m2_t test_vloxei32_v_u64m2_tumu(vbool32_t mask, vuint64m2_t maskedoff, const uint64_t *base, vuint32m1_t bindex, size_t vl) {
  return vloxei32_tumu(mask, maskedoff, base, bindex, vl);
}

vuint64m4_t test_vloxei32_v_u64m4_tumu(vbool16_t mask, vuint64m4_t maskedoff, const uint64_t *base, vuint32m2_t bindex, size_t vl) {
  return vloxei32_tumu(mask, maskedoff, base, bindex, vl);
}

vuint64m8_t test_vloxei32_v_u64m8_tumu(vbool8_t mask, vuint64m8_t maskedoff, const uint64_t *base, vuint32m4_t bindex, size_t vl) {
  return vloxei32_tumu(mask, maskedoff, base, bindex, vl);
}

vfloat16mf4_t test_vloxei32_v_f16mf4_tama(vbool64_t mask, const _Float16 *base, vuint32mf2_t bindex, size_t vl) {
  return vloxei32_tama(mask, base, bindex, vl);
}

vfloat16mf2_t test_vloxei32_v_f16mf2_tama(vbool32_t mask, const _Float16 *base, vuint32m1_t bindex, size_t vl) {
  return vloxei32_tama(mask, base, bindex, vl);
}

vfloat16m1_t test_vloxei32_v_f16m1_tama(vbool16_t mask, const _Float16 *base, vuint32m2_t bindex, size_t vl) {
  return vloxei32_tama(mask, base, bindex, vl);
}

vfloat16m2_t test_vloxei32_v_f16m2_tama(vbool8_t mask, const _Float16 *base, vuint32m4_t bindex, size_t vl) {
  return vloxei32_tama(mask, base, bindex, vl);
}

vfloat16m4_t test_vloxei32_v_f16m4_tama(vbool4_t mask, const _Float16 *base, vuint32m8_t bindex, size_t vl) {
  return vloxei32_tama(mask, base, bindex, vl);
}

vfloat32mf2_t test_vloxei32_v_f32mf2_tama(vbool64_t mask, const float *base, vuint32mf2_t bindex, size_t vl) {
  return vloxei32_tama(mask, base, bindex, vl);
}

vfloat32m1_t test_vloxei32_v_f32m1_tama(vbool32_t mask, const float *base, vuint32m1_t bindex, size_t vl) {
  return vloxei32_tama(mask, base, bindex, vl);
}

vfloat32m2_t test_vloxei32_v_f32m2_tama(vbool16_t mask, const float *base, vuint32m2_t bindex, size_t vl) {
  return vloxei32_tama(mask, base, bindex, vl);
}

vfloat32m4_t test_vloxei32_v_f32m4_tama(vbool8_t mask, const float *base, vuint32m4_t bindex, size_t vl) {
  return vloxei32_tama(mask, base, bindex, vl);
}

vfloat32m8_t test_vloxei32_v_f32m8_tama(vbool4_t mask, const float *base, vuint32m8_t bindex, size_t vl) {
  return vloxei32_tama(mask, base, bindex, vl);
}

vfloat64m1_t test_vloxei32_v_f64m1_tama(vbool64_t mask, const double *base, vuint32mf2_t bindex, size_t vl) {
  return vloxei32_tama(mask, base, bindex, vl);
}

vfloat64m2_t test_vloxei32_v_f64m2_tama(vbool32_t mask, const double *base, vuint32m1_t bindex, size_t vl) {
  return vloxei32_tama(mask, base, bindex, vl);
}

vfloat64m4_t test_vloxei32_v_f64m4_tama(vbool16_t mask, const double *base, vuint32m2_t bindex, size_t vl) {
  return vloxei32_tama(mask, base, bindex, vl);
}

vfloat64m8_t test_vloxei32_v_f64m8_tama(vbool8_t mask, const double *base, vuint32m4_t bindex, size_t vl) {
  return vloxei32_tama(mask, base, bindex, vl);
}

vint8mf8_t test_vloxei32_v_i8mf8_tama(vbool64_t mask, const int8_t *base, vuint32mf2_t bindex, size_t vl) {
  return vloxei32_tama(mask, base, bindex, vl);
}

vint8mf4_t test_vloxei32_v_i8mf4_tama(vbool32_t mask, const int8_t *base, vuint32m1_t bindex, size_t vl) {
  return vloxei32_tama(mask, base, bindex, vl);
}

vint8mf2_t test_vloxei32_v_i8mf2_tama(vbool16_t mask, const int8_t *base, vuint32m2_t bindex, size_t vl) {
  return vloxei32_tama(mask, base, bindex, vl);
}

vint8m1_t test_vloxei32_v_i8m1_tama(vbool8_t mask, const int8_t *base, vuint32m4_t bindex, size_t vl) {
  return vloxei32_tama(mask, base, bindex, vl);
}

vint8m2_t test_vloxei32_v_i8m2_tama(vbool4_t mask, const int8_t *base, vuint32m8_t bindex, size_t vl) {
  return vloxei32_tama(mask, base, bindex, vl);
}

vint16mf4_t test_vloxei32_v_i16mf4_tama(vbool64_t mask, const int16_t *base, vuint32mf2_t bindex, size_t vl) {
  return vloxei32_tama(mask, base, bindex, vl);
}

vint16mf2_t test_vloxei32_v_i16mf2_tama(vbool32_t mask, const int16_t *base, vuint32m1_t bindex, size_t vl) {
  return vloxei32_tama(mask, base, bindex, vl);
}

vint16m1_t test_vloxei32_v_i16m1_tama(vbool16_t mask, const int16_t *base, vuint32m2_t bindex, size_t vl) {
  return vloxei32_tama(mask, base, bindex, vl);
}

vint16m2_t test_vloxei32_v_i16m2_tama(vbool8_t mask, const int16_t *base, vuint32m4_t bindex, size_t vl) {
  return vloxei32_tama(mask, base, bindex, vl);
}

vint16m4_t test_vloxei32_v_i16m4_tama(vbool4_t mask, const int16_t *base, vuint32m8_t bindex, size_t vl) {
  return vloxei32_tama(mask, base, bindex, vl);
}

vint32mf2_t test_vloxei32_v_i32mf2_tama(vbool64_t mask, const int32_t *base, vuint32mf2_t bindex, size_t vl) {
  return vloxei32_tama(mask, base, bindex, vl);
}

vint32m1_t test_vloxei32_v_i32m1_tama(vbool32_t mask, const int32_t *base, vuint32m1_t bindex, size_t vl) {
  return vloxei32_tama(mask, base, bindex, vl);
}

vint32m2_t test_vloxei32_v_i32m2_tama(vbool16_t mask, const int32_t *base, vuint32m2_t bindex, size_t vl) {
  return vloxei32_tama(mask, base, bindex, vl);
}

vint32m4_t test_vloxei32_v_i32m4_tama(vbool8_t mask, const int32_t *base, vuint32m4_t bindex, size_t vl) {
  return vloxei32_tama(mask, base, bindex, vl);
}

vint32m8_t test_vloxei32_v_i32m8_tama(vbool4_t mask, const int32_t *base, vuint32m8_t bindex, size_t vl) {
  return vloxei32_tama(mask, base, bindex, vl);
}

vint64m1_t test_vloxei32_v_i64m1_tama(vbool64_t mask, const int64_t *base, vuint32mf2_t bindex, size_t vl) {
  return vloxei32_tama(mask, base, bindex, vl);
}

vint64m2_t test_vloxei32_v_i64m2_tama(vbool32_t mask, const int64_t *base, vuint32m1_t bindex, size_t vl) {
  return vloxei32_tama(mask, base, bindex, vl);
}

vint64m4_t test_vloxei32_v_i64m4_tama(vbool16_t mask, const int64_t *base, vuint32m2_t bindex, size_t vl) {
  return vloxei32_tama(mask, base, bindex, vl);
}

vint64m8_t test_vloxei32_v_i64m8_tama(vbool8_t mask, const int64_t *base, vuint32m4_t bindex, size_t vl) {
  return vloxei32_tama(mask, base, bindex, vl);
}

vuint8mf8_t test_vloxei32_v_u8mf8_tama(vbool64_t mask, const uint8_t *base, vuint32mf2_t bindex, size_t vl) {
  return vloxei32_tama(mask, base, bindex, vl);
}

vuint8mf4_t test_vloxei32_v_u8mf4_tama(vbool32_t mask, const uint8_t *base, vuint32m1_t bindex, size_t vl) {
  return vloxei32_tama(mask, base, bindex, vl);
}

vuint8mf2_t test_vloxei32_v_u8mf2_tama(vbool16_t mask, const uint8_t *base, vuint32m2_t bindex, size_t vl) {
  return vloxei32_tama(mask, base, bindex, vl);
}

vuint8m1_t test_vloxei32_v_u8m1_tama(vbool8_t mask, const uint8_t *base, vuint32m4_t bindex, size_t vl) {
  return vloxei32_tama(mask, base, bindex, vl);
}

vuint8m2_t test_vloxei32_v_u8m2_tama(vbool4_t mask, const uint8_t *base, vuint32m8_t bindex, size_t vl) {
  return vloxei32_tama(mask, base, bindex, vl);
}

vuint16mf4_t test_vloxei32_v_u16mf4_tama(vbool64_t mask, const uint16_t *base, vuint32mf2_t bindex, size_t vl) {
  return vloxei32_tama(mask, base, bindex, vl);
}

vuint16mf2_t test_vloxei32_v_u16mf2_tama(vbool32_t mask, const uint16_t *base, vuint32m1_t bindex, size_t vl) {
  return vloxei32_tama(mask, base, bindex, vl);
}

vuint16m1_t test_vloxei32_v_u16m1_tama(vbool16_t mask, const uint16_t *base, vuint32m2_t bindex, size_t vl) {
  return vloxei32_tama(mask, base, bindex, vl);
}

vuint16m2_t test_vloxei32_v_u16m2_tama(vbool8_t mask, const uint16_t *base, vuint32m4_t bindex, size_t vl) {
  return vloxei32_tama(mask, base, bindex, vl);
}

vuint16m4_t test_vloxei32_v_u16m4_tama(vbool4_t mask, const uint16_t *base, vuint32m8_t bindex, size_t vl) {
  return vloxei32_tama(mask, base, bindex, vl);
}

vuint32mf2_t test_vloxei32_v_u32mf2_tama(vbool64_t mask, const uint32_t *base, vuint32mf2_t bindex, size_t vl) {
  return vloxei32_tama(mask, base, bindex, vl);
}

vuint32m1_t test_vloxei32_v_u32m1_tama(vbool32_t mask, const uint32_t *base, vuint32m1_t bindex, size_t vl) {
  return vloxei32_tama(mask, base, bindex, vl);
}

vuint32m2_t test_vloxei32_v_u32m2_tama(vbool16_t mask, const uint32_t *base, vuint32m2_t bindex, size_t vl) {
  return vloxei32_tama(mask, base, bindex, vl);
}

vuint32m4_t test_vloxei32_v_u32m4_tama(vbool8_t mask, const uint32_t *base, vuint32m4_t bindex, size_t vl) {
  return vloxei32_tama(mask, base, bindex, vl);
}

vuint32m8_t test_vloxei32_v_u32m8_tama(vbool4_t mask, const uint32_t *base, vuint32m8_t bindex, size_t vl) {
  return vloxei32_tama(mask, base, bindex, vl);
}

vuint64m1_t test_vloxei32_v_u64m1_tama(vbool64_t mask, const uint64_t *base, vuint32mf2_t bindex, size_t vl) {
  return vloxei32_tama(mask, base, bindex, vl);
}

vuint64m2_t test_vloxei32_v_u64m2_tama(vbool32_t mask, const uint64_t *base, vuint32m1_t bindex, size_t vl) {
  return vloxei32_tama(mask, base, bindex, vl);
}

vuint64m4_t test_vloxei32_v_u64m4_tama(vbool16_t mask, const uint64_t *base, vuint32m2_t bindex, size_t vl) {
  return vloxei32_tama(mask, base, bindex, vl);
}

vuint64m8_t test_vloxei32_v_u64m8_tama(vbool8_t mask, const uint64_t *base, vuint32m4_t bindex, size_t vl) {
  return vloxei32_tama(mask, base, bindex, vl);
}

vfloat16mf4_t test_vloxei32_v_f16mf4_tamu(vbool64_t mask, vfloat16mf4_t maskedoff, const _Float16 *base, vuint32mf2_t bindex, size_t vl) {
  return vloxei32_tamu(mask, maskedoff, base, bindex, vl);
}

vfloat16mf2_t test_vloxei32_v_f16mf2_tamu(vbool32_t mask, vfloat16mf2_t maskedoff, const _Float16 *base, vuint32m1_t bindex, size_t vl) {
  return vloxei32_tamu(mask, maskedoff, base, bindex, vl);
}

vfloat16m1_t test_vloxei32_v_f16m1_tamu(vbool16_t mask, vfloat16m1_t maskedoff, const _Float16 *base, vuint32m2_t bindex, size_t vl) {
  return vloxei32_tamu(mask, maskedoff, base, bindex, vl);
}

vfloat16m2_t test_vloxei32_v_f16m2_tamu(vbool8_t mask, vfloat16m2_t maskedoff, const _Float16 *base, vuint32m4_t bindex, size_t vl) {
  return vloxei32_tamu(mask, maskedoff, base, bindex, vl);
}

vfloat16m4_t test_vloxei32_v_f16m4_tamu(vbool4_t mask, vfloat16m4_t maskedoff, const _Float16 *base, vuint32m8_t bindex, size_t vl) {
  return vloxei32_tamu(mask, maskedoff, base, bindex, vl);
}

vfloat32mf2_t test_vloxei32_v_f32mf2_tamu(vbool64_t mask, vfloat32mf2_t maskedoff, const float *base, vuint32mf2_t bindex, size_t vl) {
  return vloxei32_tamu(mask, maskedoff, base, bindex, vl);
}

vfloat32m1_t test_vloxei32_v_f32m1_tamu(vbool32_t mask, vfloat32m1_t maskedoff, const float *base, vuint32m1_t bindex, size_t vl) {
  return vloxei32_tamu(mask, maskedoff, base, bindex, vl);
}

vfloat32m2_t test_vloxei32_v_f32m2_tamu(vbool16_t mask, vfloat32m2_t maskedoff, const float *base, vuint32m2_t bindex, size_t vl) {
  return vloxei32_tamu(mask, maskedoff, base, bindex, vl);
}

vfloat32m4_t test_vloxei32_v_f32m4_tamu(vbool8_t mask, vfloat32m4_t maskedoff, const float *base, vuint32m4_t bindex, size_t vl) {
  return vloxei32_tamu(mask, maskedoff, base, bindex, vl);
}

vfloat32m8_t test_vloxei32_v_f32m8_tamu(vbool4_t mask, vfloat32m8_t maskedoff, const float *base, vuint32m8_t bindex, size_t vl) {
  return vloxei32_tamu(mask, maskedoff, base, bindex, vl);
}

vfloat64m1_t test_vloxei32_v_f64m1_tamu(vbool64_t mask, vfloat64m1_t maskedoff, const double *base, vuint32mf2_t bindex, size_t vl) {
  return vloxei32_tamu(mask, maskedoff, base, bindex, vl);
}

vfloat64m2_t test_vloxei32_v_f64m2_tamu(vbool32_t mask, vfloat64m2_t maskedoff, const double *base, vuint32m1_t bindex, size_t vl) {
  return vloxei32_tamu(mask, maskedoff, base, bindex, vl);
}

vfloat64m4_t test_vloxei32_v_f64m4_tamu(vbool16_t mask, vfloat64m4_t maskedoff, const double *base, vuint32m2_t bindex, size_t vl) {
  return vloxei32_tamu(mask, maskedoff, base, bindex, vl);
}

vfloat64m8_t test_vloxei32_v_f64m8_tamu(vbool8_t mask, vfloat64m8_t maskedoff, const double *base, vuint32m4_t bindex, size_t vl) {
  return vloxei32_tamu(mask, maskedoff, base, bindex, vl);
}

vint8mf8_t test_vloxei32_v_i8mf8_tamu(vbool64_t mask, vint8mf8_t maskedoff, const int8_t *base, vuint32mf2_t bindex, size_t vl) {
  return vloxei32_tamu(mask, maskedoff, base, bindex, vl);
}

vint8mf4_t test_vloxei32_v_i8mf4_tamu(vbool32_t mask, vint8mf4_t maskedoff, const int8_t *base, vuint32m1_t bindex, size_t vl) {
  return vloxei32_tamu(mask, maskedoff, base, bindex, vl);
}

vint8mf2_t test_vloxei32_v_i8mf2_tamu(vbool16_t mask, vint8mf2_t maskedoff, const int8_t *base, vuint32m2_t bindex, size_t vl) {
  return vloxei32_tamu(mask, maskedoff, base, bindex, vl);
}

vint8m1_t test_vloxei32_v_i8m1_tamu(vbool8_t mask, vint8m1_t maskedoff, const int8_t *base, vuint32m4_t bindex, size_t vl) {
  return vloxei32_tamu(mask, maskedoff, base, bindex, vl);
}

vint8m2_t test_vloxei32_v_i8m2_tamu(vbool4_t mask, vint8m2_t maskedoff, const int8_t *base, vuint32m8_t bindex, size_t vl) {
  return vloxei32_tamu(mask, maskedoff, base, bindex, vl);
}

vint16mf4_t test_vloxei32_v_i16mf4_tamu(vbool64_t mask, vint16mf4_t maskedoff, const int16_t *base, vuint32mf2_t bindex, size_t vl) {
  return vloxei32_tamu(mask, maskedoff, base, bindex, vl);
}

vint16mf2_t test_vloxei32_v_i16mf2_tamu(vbool32_t mask, vint16mf2_t maskedoff, const int16_t *base, vuint32m1_t bindex, size_t vl) {
  return vloxei32_tamu(mask, maskedoff, base, bindex, vl);
}

vint16m1_t test_vloxei32_v_i16m1_tamu(vbool16_t mask, vint16m1_t maskedoff, const int16_t *base, vuint32m2_t bindex, size_t vl) {
  return vloxei32_tamu(mask, maskedoff, base, bindex, vl);
}

vint16m2_t test_vloxei32_v_i16m2_tamu(vbool8_t mask, vint16m2_t maskedoff, const int16_t *base, vuint32m4_t bindex, size_t vl) {
  return vloxei32_tamu(mask, maskedoff, base, bindex, vl);
}

vint16m4_t test_vloxei32_v_i16m4_tamu(vbool4_t mask, vint16m4_t maskedoff, const int16_t *base, vuint32m8_t bindex, size_t vl) {
  return vloxei32_tamu(mask, maskedoff, base, bindex, vl);
}

vint32mf2_t test_vloxei32_v_i32mf2_tamu(vbool64_t mask, vint32mf2_t maskedoff, const int32_t *base, vuint32mf2_t bindex, size_t vl) {
  return vloxei32_tamu(mask, maskedoff, base, bindex, vl);
}

vint32m1_t test_vloxei32_v_i32m1_tamu(vbool32_t mask, vint32m1_t maskedoff, const int32_t *base, vuint32m1_t bindex, size_t vl) {
  return vloxei32_tamu(mask, maskedoff, base, bindex, vl);
}

vint32m2_t test_vloxei32_v_i32m2_tamu(vbool16_t mask, vint32m2_t maskedoff, const int32_t *base, vuint32m2_t bindex, size_t vl) {
  return vloxei32_tamu(mask, maskedoff, base, bindex, vl);
}

vint32m4_t test_vloxei32_v_i32m4_tamu(vbool8_t mask, vint32m4_t maskedoff, const int32_t *base, vuint32m4_t bindex, size_t vl) {
  return vloxei32_tamu(mask, maskedoff, base, bindex, vl);
}

vint32m8_t test_vloxei32_v_i32m8_tamu(vbool4_t mask, vint32m8_t maskedoff, const int32_t *base, vuint32m8_t bindex, size_t vl) {
  return vloxei32_tamu(mask, maskedoff, base, bindex, vl);
}

vint64m1_t test_vloxei32_v_i64m1_tamu(vbool64_t mask, vint64m1_t maskedoff, const int64_t *base, vuint32mf2_t bindex, size_t vl) {
  return vloxei32_tamu(mask, maskedoff, base, bindex, vl);
}

vint64m2_t test_vloxei32_v_i64m2_tamu(vbool32_t mask, vint64m2_t maskedoff, const int64_t *base, vuint32m1_t bindex, size_t vl) {
  return vloxei32_tamu(mask, maskedoff, base, bindex, vl);
}

vint64m4_t test_vloxei32_v_i64m4_tamu(vbool16_t mask, vint64m4_t maskedoff, const int64_t *base, vuint32m2_t bindex, size_t vl) {
  return vloxei32_tamu(mask, maskedoff, base, bindex, vl);
}

vint64m8_t test_vloxei32_v_i64m8_tamu(vbool8_t mask, vint64m8_t maskedoff, const int64_t *base, vuint32m4_t bindex, size_t vl) {
  return vloxei32_tamu(mask, maskedoff, base, bindex, vl);
}

vuint8mf8_t test_vloxei32_v_u8mf8_tamu(vbool64_t mask, vuint8mf8_t maskedoff, const uint8_t *base, vuint32mf2_t bindex, size_t vl) {
  return vloxei32_tamu(mask, maskedoff, base, bindex, vl);
}

vuint8mf4_t test_vloxei32_v_u8mf4_tamu(vbool32_t mask, vuint8mf4_t maskedoff, const uint8_t *base, vuint32m1_t bindex, size_t vl) {
  return vloxei32_tamu(mask, maskedoff, base, bindex, vl);
}

vuint8mf2_t test_vloxei32_v_u8mf2_tamu(vbool16_t mask, vuint8mf2_t maskedoff, const uint8_t *base, vuint32m2_t bindex, size_t vl) {
  return vloxei32_tamu(mask, maskedoff, base, bindex, vl);
}

vuint8m1_t test_vloxei32_v_u8m1_tamu(vbool8_t mask, vuint8m1_t maskedoff, const uint8_t *base, vuint32m4_t bindex, size_t vl) {
  return vloxei32_tamu(mask, maskedoff, base, bindex, vl);
}

vuint8m2_t test_vloxei32_v_u8m2_tamu(vbool4_t mask, vuint8m2_t maskedoff, const uint8_t *base, vuint32m8_t bindex, size_t vl) {
  return vloxei32_tamu(mask, maskedoff, base, bindex, vl);
}

vuint16mf4_t test_vloxei32_v_u16mf4_tamu(vbool64_t mask, vuint16mf4_t maskedoff, const uint16_t *base, vuint32mf2_t bindex, size_t vl) {
  return vloxei32_tamu(mask, maskedoff, base, bindex, vl);
}

vuint16mf2_t test_vloxei32_v_u16mf2_tamu(vbool32_t mask, vuint16mf2_t maskedoff, const uint16_t *base, vuint32m1_t bindex, size_t vl) {
  return vloxei32_tamu(mask, maskedoff, base, bindex, vl);
}

vuint16m1_t test_vloxei32_v_u16m1_tamu(vbool16_t mask, vuint16m1_t maskedoff, const uint16_t *base, vuint32m2_t bindex, size_t vl) {
  return vloxei32_tamu(mask, maskedoff, base, bindex, vl);
}

vuint16m2_t test_vloxei32_v_u16m2_tamu(vbool8_t mask, vuint16m2_t maskedoff, const uint16_t *base, vuint32m4_t bindex, size_t vl) {
  return vloxei32_tamu(mask, maskedoff, base, bindex, vl);
}

vuint16m4_t test_vloxei32_v_u16m4_tamu(vbool4_t mask, vuint16m4_t maskedoff, const uint16_t *base, vuint32m8_t bindex, size_t vl) {
  return vloxei32_tamu(mask, maskedoff, base, bindex, vl);
}

vuint32mf2_t test_vloxei32_v_u32mf2_tamu(vbool64_t mask, vuint32mf2_t maskedoff, const uint32_t *base, vuint32mf2_t bindex, size_t vl) {
  return vloxei32_tamu(mask, maskedoff, base, bindex, vl);
}

vuint32m1_t test_vloxei32_v_u32m1_tamu(vbool32_t mask, vuint32m1_t maskedoff, const uint32_t *base, vuint32m1_t bindex, size_t vl) {
  return vloxei32_tamu(mask, maskedoff, base, bindex, vl);
}

vuint32m2_t test_vloxei32_v_u32m2_tamu(vbool16_t mask, vuint32m2_t maskedoff, const uint32_t *base, vuint32m2_t bindex, size_t vl) {
  return vloxei32_tamu(mask, maskedoff, base, bindex, vl);
}

vuint32m4_t test_vloxei32_v_u32m4_tamu(vbool8_t mask, vuint32m4_t maskedoff, const uint32_t *base, vuint32m4_t bindex, size_t vl) {
  return vloxei32_tamu(mask, maskedoff, base, bindex, vl);
}

vuint32m8_t test_vloxei32_v_u32m8_tamu(vbool4_t mask, vuint32m8_t maskedoff, const uint32_t *base, vuint32m8_t bindex, size_t vl) {
  return vloxei32_tamu(mask, maskedoff, base, bindex, vl);
}

vuint64m1_t test_vloxei32_v_u64m1_tamu(vbool64_t mask, vuint64m1_t maskedoff, const uint64_t *base, vuint32mf2_t bindex, size_t vl) {
  return vloxei32_tamu(mask, maskedoff, base, bindex, vl);
}

vuint64m2_t test_vloxei32_v_u64m2_tamu(vbool32_t mask, vuint64m2_t maskedoff, const uint64_t *base, vuint32m1_t bindex, size_t vl) {
  return vloxei32_tamu(mask, maskedoff, base, bindex, vl);
}

vuint64m4_t test_vloxei32_v_u64m4_tamu(vbool16_t mask, vuint64m4_t maskedoff, const uint64_t *base, vuint32m2_t bindex, size_t vl) {
  return vloxei32_tamu(mask, maskedoff, base, bindex, vl);
}

vuint64m8_t test_vloxei32_v_u64m8_tamu(vbool8_t mask, vuint64m8_t maskedoff, const uint64_t *base, vuint32m4_t bindex, size_t vl) {
  return vloxei32_tamu(mask, maskedoff, base, bindex, vl);
}

