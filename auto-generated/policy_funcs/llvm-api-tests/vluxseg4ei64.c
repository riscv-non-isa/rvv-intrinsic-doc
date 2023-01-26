// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -target-feature +zfh \
// RUN:   -target-feature +experimental-zvfh -disable-O0-optnone  \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

void test_vluxseg4ei64_v_f16mf4_tu(vfloat16mf4_t *v0, vfloat16mf4_t *v1, vfloat16mf4_t *v2, vfloat16mf4_t *v3, vfloat16mf4_t maskedoff0, vfloat16mf4_t maskedoff1, vfloat16mf4_t maskedoff2, vfloat16mf4_t maskedoff3, const _Float16 *base, vuint64m1_t bindex, size_t vl) {
  return __riscv_vluxseg4ei64_v_f16mf4_tu(v0, v1, v2, v3, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, bindex, vl);
}

void test_vluxseg4ei64_v_f16mf2_tu(vfloat16mf2_t *v0, vfloat16mf2_t *v1, vfloat16mf2_t *v2, vfloat16mf2_t *v3, vfloat16mf2_t maskedoff0, vfloat16mf2_t maskedoff1, vfloat16mf2_t maskedoff2, vfloat16mf2_t maskedoff3, const _Float16 *base, vuint64m2_t bindex, size_t vl) {
  return __riscv_vluxseg4ei64_v_f16mf2_tu(v0, v1, v2, v3, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, bindex, vl);
}

void test_vluxseg4ei64_v_f16m1_tu(vfloat16m1_t *v0, vfloat16m1_t *v1, vfloat16m1_t *v2, vfloat16m1_t *v3, vfloat16m1_t maskedoff0, vfloat16m1_t maskedoff1, vfloat16m1_t maskedoff2, vfloat16m1_t maskedoff3, const _Float16 *base, vuint64m4_t bindex, size_t vl) {
  return __riscv_vluxseg4ei64_v_f16m1_tu(v0, v1, v2, v3, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, bindex, vl);
}

void test_vluxseg4ei64_v_f16m2_tu(vfloat16m2_t *v0, vfloat16m2_t *v1, vfloat16m2_t *v2, vfloat16m2_t *v3, vfloat16m2_t maskedoff0, vfloat16m2_t maskedoff1, vfloat16m2_t maskedoff2, vfloat16m2_t maskedoff3, const _Float16 *base, vuint64m8_t bindex, size_t vl) {
  return __riscv_vluxseg4ei64_v_f16m2_tu(v0, v1, v2, v3, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, bindex, vl);
}

void test_vluxseg4ei64_v_f32mf2_tu(vfloat32mf2_t *v0, vfloat32mf2_t *v1, vfloat32mf2_t *v2, vfloat32mf2_t *v3, vfloat32mf2_t maskedoff0, vfloat32mf2_t maskedoff1, vfloat32mf2_t maskedoff2, vfloat32mf2_t maskedoff3, const float *base, vuint64m1_t bindex, size_t vl) {
  return __riscv_vluxseg4ei64_v_f32mf2_tu(v0, v1, v2, v3, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, bindex, vl);
}

void test_vluxseg4ei64_v_f32m1_tu(vfloat32m1_t *v0, vfloat32m1_t *v1, vfloat32m1_t *v2, vfloat32m1_t *v3, vfloat32m1_t maskedoff0, vfloat32m1_t maskedoff1, vfloat32m1_t maskedoff2, vfloat32m1_t maskedoff3, const float *base, vuint64m2_t bindex, size_t vl) {
  return __riscv_vluxseg4ei64_v_f32m1_tu(v0, v1, v2, v3, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, bindex, vl);
}

void test_vluxseg4ei64_v_f32m2_tu(vfloat32m2_t *v0, vfloat32m2_t *v1, vfloat32m2_t *v2, vfloat32m2_t *v3, vfloat32m2_t maskedoff0, vfloat32m2_t maskedoff1, vfloat32m2_t maskedoff2, vfloat32m2_t maskedoff3, const float *base, vuint64m4_t bindex, size_t vl) {
  return __riscv_vluxseg4ei64_v_f32m2_tu(v0, v1, v2, v3, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, bindex, vl);
}

void test_vluxseg4ei64_v_f64m1_tu(vfloat64m1_t *v0, vfloat64m1_t *v1, vfloat64m1_t *v2, vfloat64m1_t *v3, vfloat64m1_t maskedoff0, vfloat64m1_t maskedoff1, vfloat64m1_t maskedoff2, vfloat64m1_t maskedoff3, const double *base, vuint64m1_t bindex, size_t vl) {
  return __riscv_vluxseg4ei64_v_f64m1_tu(v0, v1, v2, v3, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, bindex, vl);
}

void test_vluxseg4ei64_v_f64m2_tu(vfloat64m2_t *v0, vfloat64m2_t *v1, vfloat64m2_t *v2, vfloat64m2_t *v3, vfloat64m2_t maskedoff0, vfloat64m2_t maskedoff1, vfloat64m2_t maskedoff2, vfloat64m2_t maskedoff3, const double *base, vuint64m2_t bindex, size_t vl) {
  return __riscv_vluxseg4ei64_v_f64m2_tu(v0, v1, v2, v3, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, bindex, vl);
}

void test_vluxseg4ei64_v_i8mf8_tu(vint8mf8_t *v0, vint8mf8_t *v1, vint8mf8_t *v2, vint8mf8_t *v3, vint8mf8_t maskedoff0, vint8mf8_t maskedoff1, vint8mf8_t maskedoff2, vint8mf8_t maskedoff3, const int8_t *base, vuint64m1_t bindex, size_t vl) {
  return __riscv_vluxseg4ei64_v_i8mf8_tu(v0, v1, v2, v3, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, bindex, vl);
}

void test_vluxseg4ei64_v_i8mf4_tu(vint8mf4_t *v0, vint8mf4_t *v1, vint8mf4_t *v2, vint8mf4_t *v3, vint8mf4_t maskedoff0, vint8mf4_t maskedoff1, vint8mf4_t maskedoff2, vint8mf4_t maskedoff3, const int8_t *base, vuint64m2_t bindex, size_t vl) {
  return __riscv_vluxseg4ei64_v_i8mf4_tu(v0, v1, v2, v3, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, bindex, vl);
}

void test_vluxseg4ei64_v_i8mf2_tu(vint8mf2_t *v0, vint8mf2_t *v1, vint8mf2_t *v2, vint8mf2_t *v3, vint8mf2_t maskedoff0, vint8mf2_t maskedoff1, vint8mf2_t maskedoff2, vint8mf2_t maskedoff3, const int8_t *base, vuint64m4_t bindex, size_t vl) {
  return __riscv_vluxseg4ei64_v_i8mf2_tu(v0, v1, v2, v3, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, bindex, vl);
}

void test_vluxseg4ei64_v_i8m1_tu(vint8m1_t *v0, vint8m1_t *v1, vint8m1_t *v2, vint8m1_t *v3, vint8m1_t maskedoff0, vint8m1_t maskedoff1, vint8m1_t maskedoff2, vint8m1_t maskedoff3, const int8_t *base, vuint64m8_t bindex, size_t vl) {
  return __riscv_vluxseg4ei64_v_i8m1_tu(v0, v1, v2, v3, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, bindex, vl);
}

void test_vluxseg4ei64_v_i16mf4_tu(vint16mf4_t *v0, vint16mf4_t *v1, vint16mf4_t *v2, vint16mf4_t *v3, vint16mf4_t maskedoff0, vint16mf4_t maskedoff1, vint16mf4_t maskedoff2, vint16mf4_t maskedoff3, const int16_t *base, vuint64m1_t bindex, size_t vl) {
  return __riscv_vluxseg4ei64_v_i16mf4_tu(v0, v1, v2, v3, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, bindex, vl);
}

void test_vluxseg4ei64_v_i16mf2_tu(vint16mf2_t *v0, vint16mf2_t *v1, vint16mf2_t *v2, vint16mf2_t *v3, vint16mf2_t maskedoff0, vint16mf2_t maskedoff1, vint16mf2_t maskedoff2, vint16mf2_t maskedoff3, const int16_t *base, vuint64m2_t bindex, size_t vl) {
  return __riscv_vluxseg4ei64_v_i16mf2_tu(v0, v1, v2, v3, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, bindex, vl);
}

void test_vluxseg4ei64_v_i16m1_tu(vint16m1_t *v0, vint16m1_t *v1, vint16m1_t *v2, vint16m1_t *v3, vint16m1_t maskedoff0, vint16m1_t maskedoff1, vint16m1_t maskedoff2, vint16m1_t maskedoff3, const int16_t *base, vuint64m4_t bindex, size_t vl) {
  return __riscv_vluxseg4ei64_v_i16m1_tu(v0, v1, v2, v3, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, bindex, vl);
}

void test_vluxseg4ei64_v_i16m2_tu(vint16m2_t *v0, vint16m2_t *v1, vint16m2_t *v2, vint16m2_t *v3, vint16m2_t maskedoff0, vint16m2_t maskedoff1, vint16m2_t maskedoff2, vint16m2_t maskedoff3, const int16_t *base, vuint64m8_t bindex, size_t vl) {
  return __riscv_vluxseg4ei64_v_i16m2_tu(v0, v1, v2, v3, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, bindex, vl);
}

void test_vluxseg4ei64_v_i32mf2_tu(vint32mf2_t *v0, vint32mf2_t *v1, vint32mf2_t *v2, vint32mf2_t *v3, vint32mf2_t maskedoff0, vint32mf2_t maskedoff1, vint32mf2_t maskedoff2, vint32mf2_t maskedoff3, const int32_t *base, vuint64m1_t bindex, size_t vl) {
  return __riscv_vluxseg4ei64_v_i32mf2_tu(v0, v1, v2, v3, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, bindex, vl);
}

void test_vluxseg4ei64_v_i32m1_tu(vint32m1_t *v0, vint32m1_t *v1, vint32m1_t *v2, vint32m1_t *v3, vint32m1_t maskedoff0, vint32m1_t maskedoff1, vint32m1_t maskedoff2, vint32m1_t maskedoff3, const int32_t *base, vuint64m2_t bindex, size_t vl) {
  return __riscv_vluxseg4ei64_v_i32m1_tu(v0, v1, v2, v3, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, bindex, vl);
}

void test_vluxseg4ei64_v_i32m2_tu(vint32m2_t *v0, vint32m2_t *v1, vint32m2_t *v2, vint32m2_t *v3, vint32m2_t maskedoff0, vint32m2_t maskedoff1, vint32m2_t maskedoff2, vint32m2_t maskedoff3, const int32_t *base, vuint64m4_t bindex, size_t vl) {
  return __riscv_vluxseg4ei64_v_i32m2_tu(v0, v1, v2, v3, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, bindex, vl);
}

void test_vluxseg4ei64_v_i64m1_tu(vint64m1_t *v0, vint64m1_t *v1, vint64m1_t *v2, vint64m1_t *v3, vint64m1_t maskedoff0, vint64m1_t maskedoff1, vint64m1_t maskedoff2, vint64m1_t maskedoff3, const int64_t *base, vuint64m1_t bindex, size_t vl) {
  return __riscv_vluxseg4ei64_v_i64m1_tu(v0, v1, v2, v3, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, bindex, vl);
}

void test_vluxseg4ei64_v_i64m2_tu(vint64m2_t *v0, vint64m2_t *v1, vint64m2_t *v2, vint64m2_t *v3, vint64m2_t maskedoff0, vint64m2_t maskedoff1, vint64m2_t maskedoff2, vint64m2_t maskedoff3, const int64_t *base, vuint64m2_t bindex, size_t vl) {
  return __riscv_vluxseg4ei64_v_i64m2_tu(v0, v1, v2, v3, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, bindex, vl);
}

void test_vluxseg4ei64_v_u8mf8_tu(vuint8mf8_t *v0, vuint8mf8_t *v1, vuint8mf8_t *v2, vuint8mf8_t *v3, vuint8mf8_t maskedoff0, vuint8mf8_t maskedoff1, vuint8mf8_t maskedoff2, vuint8mf8_t maskedoff3, const uint8_t *base, vuint64m1_t bindex, size_t vl) {
  return __riscv_vluxseg4ei64_v_u8mf8_tu(v0, v1, v2, v3, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, bindex, vl);
}

void test_vluxseg4ei64_v_u8mf4_tu(vuint8mf4_t *v0, vuint8mf4_t *v1, vuint8mf4_t *v2, vuint8mf4_t *v3, vuint8mf4_t maskedoff0, vuint8mf4_t maskedoff1, vuint8mf4_t maskedoff2, vuint8mf4_t maskedoff3, const uint8_t *base, vuint64m2_t bindex, size_t vl) {
  return __riscv_vluxseg4ei64_v_u8mf4_tu(v0, v1, v2, v3, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, bindex, vl);
}

void test_vluxseg4ei64_v_u8mf2_tu(vuint8mf2_t *v0, vuint8mf2_t *v1, vuint8mf2_t *v2, vuint8mf2_t *v3, vuint8mf2_t maskedoff0, vuint8mf2_t maskedoff1, vuint8mf2_t maskedoff2, vuint8mf2_t maskedoff3, const uint8_t *base, vuint64m4_t bindex, size_t vl) {
  return __riscv_vluxseg4ei64_v_u8mf2_tu(v0, v1, v2, v3, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, bindex, vl);
}

void test_vluxseg4ei64_v_u8m1_tu(vuint8m1_t *v0, vuint8m1_t *v1, vuint8m1_t *v2, vuint8m1_t *v3, vuint8m1_t maskedoff0, vuint8m1_t maskedoff1, vuint8m1_t maskedoff2, vuint8m1_t maskedoff3, const uint8_t *base, vuint64m8_t bindex, size_t vl) {
  return __riscv_vluxseg4ei64_v_u8m1_tu(v0, v1, v2, v3, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, bindex, vl);
}

void test_vluxseg4ei64_v_u16mf4_tu(vuint16mf4_t *v0, vuint16mf4_t *v1, vuint16mf4_t *v2, vuint16mf4_t *v3, vuint16mf4_t maskedoff0, vuint16mf4_t maskedoff1, vuint16mf4_t maskedoff2, vuint16mf4_t maskedoff3, const uint16_t *base, vuint64m1_t bindex, size_t vl) {
  return __riscv_vluxseg4ei64_v_u16mf4_tu(v0, v1, v2, v3, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, bindex, vl);
}

void test_vluxseg4ei64_v_u16mf2_tu(vuint16mf2_t *v0, vuint16mf2_t *v1, vuint16mf2_t *v2, vuint16mf2_t *v3, vuint16mf2_t maskedoff0, vuint16mf2_t maskedoff1, vuint16mf2_t maskedoff2, vuint16mf2_t maskedoff3, const uint16_t *base, vuint64m2_t bindex, size_t vl) {
  return __riscv_vluxseg4ei64_v_u16mf2_tu(v0, v1, v2, v3, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, bindex, vl);
}

void test_vluxseg4ei64_v_u16m1_tu(vuint16m1_t *v0, vuint16m1_t *v1, vuint16m1_t *v2, vuint16m1_t *v3, vuint16m1_t maskedoff0, vuint16m1_t maskedoff1, vuint16m1_t maskedoff2, vuint16m1_t maskedoff3, const uint16_t *base, vuint64m4_t bindex, size_t vl) {
  return __riscv_vluxseg4ei64_v_u16m1_tu(v0, v1, v2, v3, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, bindex, vl);
}

void test_vluxseg4ei64_v_u16m2_tu(vuint16m2_t *v0, vuint16m2_t *v1, vuint16m2_t *v2, vuint16m2_t *v3, vuint16m2_t maskedoff0, vuint16m2_t maskedoff1, vuint16m2_t maskedoff2, vuint16m2_t maskedoff3, const uint16_t *base, vuint64m8_t bindex, size_t vl) {
  return __riscv_vluxseg4ei64_v_u16m2_tu(v0, v1, v2, v3, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, bindex, vl);
}

void test_vluxseg4ei64_v_u32mf2_tu(vuint32mf2_t *v0, vuint32mf2_t *v1, vuint32mf2_t *v2, vuint32mf2_t *v3, vuint32mf2_t maskedoff0, vuint32mf2_t maskedoff1, vuint32mf2_t maskedoff2, vuint32mf2_t maskedoff3, const uint32_t *base, vuint64m1_t bindex, size_t vl) {
  return __riscv_vluxseg4ei64_v_u32mf2_tu(v0, v1, v2, v3, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, bindex, vl);
}

void test_vluxseg4ei64_v_u32m1_tu(vuint32m1_t *v0, vuint32m1_t *v1, vuint32m1_t *v2, vuint32m1_t *v3, vuint32m1_t maskedoff0, vuint32m1_t maskedoff1, vuint32m1_t maskedoff2, vuint32m1_t maskedoff3, const uint32_t *base, vuint64m2_t bindex, size_t vl) {
  return __riscv_vluxseg4ei64_v_u32m1_tu(v0, v1, v2, v3, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, bindex, vl);
}

void test_vluxseg4ei64_v_u32m2_tu(vuint32m2_t *v0, vuint32m2_t *v1, vuint32m2_t *v2, vuint32m2_t *v3, vuint32m2_t maskedoff0, vuint32m2_t maskedoff1, vuint32m2_t maskedoff2, vuint32m2_t maskedoff3, const uint32_t *base, vuint64m4_t bindex, size_t vl) {
  return __riscv_vluxseg4ei64_v_u32m2_tu(v0, v1, v2, v3, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, bindex, vl);
}

void test_vluxseg4ei64_v_u64m1_tu(vuint64m1_t *v0, vuint64m1_t *v1, vuint64m1_t *v2, vuint64m1_t *v3, vuint64m1_t maskedoff0, vuint64m1_t maskedoff1, vuint64m1_t maskedoff2, vuint64m1_t maskedoff3, const uint64_t *base, vuint64m1_t bindex, size_t vl) {
  return __riscv_vluxseg4ei64_v_u64m1_tu(v0, v1, v2, v3, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, bindex, vl);
}

void test_vluxseg4ei64_v_u64m2_tu(vuint64m2_t *v0, vuint64m2_t *v1, vuint64m2_t *v2, vuint64m2_t *v3, vuint64m2_t maskedoff0, vuint64m2_t maskedoff1, vuint64m2_t maskedoff2, vuint64m2_t maskedoff3, const uint64_t *base, vuint64m2_t bindex, size_t vl) {
  return __riscv_vluxseg4ei64_v_u64m2_tu(v0, v1, v2, v3, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, bindex, vl);
}

void test_vluxseg4ei64_v_f16mf4_tum(vfloat16mf4_t *v0, vfloat16mf4_t *v1, vfloat16mf4_t *v2, vfloat16mf4_t *v3, vbool64_t mask, vfloat16mf4_t maskedoff0, vfloat16mf4_t maskedoff1, vfloat16mf4_t maskedoff2, vfloat16mf4_t maskedoff3, const _Float16 *base, vuint64m1_t bindex, size_t vl) {
  return __riscv_vluxseg4ei64_v_f16mf4_tum(v0, v1, v2, v3, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, bindex, vl);
}

void test_vluxseg4ei64_v_f16mf2_tum(vfloat16mf2_t *v0, vfloat16mf2_t *v1, vfloat16mf2_t *v2, vfloat16mf2_t *v3, vbool32_t mask, vfloat16mf2_t maskedoff0, vfloat16mf2_t maskedoff1, vfloat16mf2_t maskedoff2, vfloat16mf2_t maskedoff3, const _Float16 *base, vuint64m2_t bindex, size_t vl) {
  return __riscv_vluxseg4ei64_v_f16mf2_tum(v0, v1, v2, v3, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, bindex, vl);
}

void test_vluxseg4ei64_v_f16m1_tum(vfloat16m1_t *v0, vfloat16m1_t *v1, vfloat16m1_t *v2, vfloat16m1_t *v3, vbool16_t mask, vfloat16m1_t maskedoff0, vfloat16m1_t maskedoff1, vfloat16m1_t maskedoff2, vfloat16m1_t maskedoff3, const _Float16 *base, vuint64m4_t bindex, size_t vl) {
  return __riscv_vluxseg4ei64_v_f16m1_tum(v0, v1, v2, v3, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, bindex, vl);
}

void test_vluxseg4ei64_v_f16m2_tum(vfloat16m2_t *v0, vfloat16m2_t *v1, vfloat16m2_t *v2, vfloat16m2_t *v3, vbool8_t mask, vfloat16m2_t maskedoff0, vfloat16m2_t maskedoff1, vfloat16m2_t maskedoff2, vfloat16m2_t maskedoff3, const _Float16 *base, vuint64m8_t bindex, size_t vl) {
  return __riscv_vluxseg4ei64_v_f16m2_tum(v0, v1, v2, v3, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, bindex, vl);
}

void test_vluxseg4ei64_v_f32mf2_tum(vfloat32mf2_t *v0, vfloat32mf2_t *v1, vfloat32mf2_t *v2, vfloat32mf2_t *v3, vbool64_t mask, vfloat32mf2_t maskedoff0, vfloat32mf2_t maskedoff1, vfloat32mf2_t maskedoff2, vfloat32mf2_t maskedoff3, const float *base, vuint64m1_t bindex, size_t vl) {
  return __riscv_vluxseg4ei64_v_f32mf2_tum(v0, v1, v2, v3, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, bindex, vl);
}

void test_vluxseg4ei64_v_f32m1_tum(vfloat32m1_t *v0, vfloat32m1_t *v1, vfloat32m1_t *v2, vfloat32m1_t *v3, vbool32_t mask, vfloat32m1_t maskedoff0, vfloat32m1_t maskedoff1, vfloat32m1_t maskedoff2, vfloat32m1_t maskedoff3, const float *base, vuint64m2_t bindex, size_t vl) {
  return __riscv_vluxseg4ei64_v_f32m1_tum(v0, v1, v2, v3, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, bindex, vl);
}

void test_vluxseg4ei64_v_f32m2_tum(vfloat32m2_t *v0, vfloat32m2_t *v1, vfloat32m2_t *v2, vfloat32m2_t *v3, vbool16_t mask, vfloat32m2_t maskedoff0, vfloat32m2_t maskedoff1, vfloat32m2_t maskedoff2, vfloat32m2_t maskedoff3, const float *base, vuint64m4_t bindex, size_t vl) {
  return __riscv_vluxseg4ei64_v_f32m2_tum(v0, v1, v2, v3, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, bindex, vl);
}

void test_vluxseg4ei64_v_f64m1_tum(vfloat64m1_t *v0, vfloat64m1_t *v1, vfloat64m1_t *v2, vfloat64m1_t *v3, vbool64_t mask, vfloat64m1_t maskedoff0, vfloat64m1_t maskedoff1, vfloat64m1_t maskedoff2, vfloat64m1_t maskedoff3, const double *base, vuint64m1_t bindex, size_t vl) {
  return __riscv_vluxseg4ei64_v_f64m1_tum(v0, v1, v2, v3, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, bindex, vl);
}

void test_vluxseg4ei64_v_f64m2_tum(vfloat64m2_t *v0, vfloat64m2_t *v1, vfloat64m2_t *v2, vfloat64m2_t *v3, vbool32_t mask, vfloat64m2_t maskedoff0, vfloat64m2_t maskedoff1, vfloat64m2_t maskedoff2, vfloat64m2_t maskedoff3, const double *base, vuint64m2_t bindex, size_t vl) {
  return __riscv_vluxseg4ei64_v_f64m2_tum(v0, v1, v2, v3, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, bindex, vl);
}

void test_vluxseg4ei64_v_i8mf8_tum(vint8mf8_t *v0, vint8mf8_t *v1, vint8mf8_t *v2, vint8mf8_t *v3, vbool64_t mask, vint8mf8_t maskedoff0, vint8mf8_t maskedoff1, vint8mf8_t maskedoff2, vint8mf8_t maskedoff3, const int8_t *base, vuint64m1_t bindex, size_t vl) {
  return __riscv_vluxseg4ei64_v_i8mf8_tum(v0, v1, v2, v3, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, bindex, vl);
}

void test_vluxseg4ei64_v_i8mf4_tum(vint8mf4_t *v0, vint8mf4_t *v1, vint8mf4_t *v2, vint8mf4_t *v3, vbool32_t mask, vint8mf4_t maskedoff0, vint8mf4_t maskedoff1, vint8mf4_t maskedoff2, vint8mf4_t maskedoff3, const int8_t *base, vuint64m2_t bindex, size_t vl) {
  return __riscv_vluxseg4ei64_v_i8mf4_tum(v0, v1, v2, v3, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, bindex, vl);
}

void test_vluxseg4ei64_v_i8mf2_tum(vint8mf2_t *v0, vint8mf2_t *v1, vint8mf2_t *v2, vint8mf2_t *v3, vbool16_t mask, vint8mf2_t maskedoff0, vint8mf2_t maskedoff1, vint8mf2_t maskedoff2, vint8mf2_t maskedoff3, const int8_t *base, vuint64m4_t bindex, size_t vl) {
  return __riscv_vluxseg4ei64_v_i8mf2_tum(v0, v1, v2, v3, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, bindex, vl);
}

void test_vluxseg4ei64_v_i8m1_tum(vint8m1_t *v0, vint8m1_t *v1, vint8m1_t *v2, vint8m1_t *v3, vbool8_t mask, vint8m1_t maskedoff0, vint8m1_t maskedoff1, vint8m1_t maskedoff2, vint8m1_t maskedoff3, const int8_t *base, vuint64m8_t bindex, size_t vl) {
  return __riscv_vluxseg4ei64_v_i8m1_tum(v0, v1, v2, v3, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, bindex, vl);
}

void test_vluxseg4ei64_v_i16mf4_tum(vint16mf4_t *v0, vint16mf4_t *v1, vint16mf4_t *v2, vint16mf4_t *v3, vbool64_t mask, vint16mf4_t maskedoff0, vint16mf4_t maskedoff1, vint16mf4_t maskedoff2, vint16mf4_t maskedoff3, const int16_t *base, vuint64m1_t bindex, size_t vl) {
  return __riscv_vluxseg4ei64_v_i16mf4_tum(v0, v1, v2, v3, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, bindex, vl);
}

void test_vluxseg4ei64_v_i16mf2_tum(vint16mf2_t *v0, vint16mf2_t *v1, vint16mf2_t *v2, vint16mf2_t *v3, vbool32_t mask, vint16mf2_t maskedoff0, vint16mf2_t maskedoff1, vint16mf2_t maskedoff2, vint16mf2_t maskedoff3, const int16_t *base, vuint64m2_t bindex, size_t vl) {
  return __riscv_vluxseg4ei64_v_i16mf2_tum(v0, v1, v2, v3, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, bindex, vl);
}

void test_vluxseg4ei64_v_i16m1_tum(vint16m1_t *v0, vint16m1_t *v1, vint16m1_t *v2, vint16m1_t *v3, vbool16_t mask, vint16m1_t maskedoff0, vint16m1_t maskedoff1, vint16m1_t maskedoff2, vint16m1_t maskedoff3, const int16_t *base, vuint64m4_t bindex, size_t vl) {
  return __riscv_vluxseg4ei64_v_i16m1_tum(v0, v1, v2, v3, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, bindex, vl);
}

void test_vluxseg4ei64_v_i16m2_tum(vint16m2_t *v0, vint16m2_t *v1, vint16m2_t *v2, vint16m2_t *v3, vbool8_t mask, vint16m2_t maskedoff0, vint16m2_t maskedoff1, vint16m2_t maskedoff2, vint16m2_t maskedoff3, const int16_t *base, vuint64m8_t bindex, size_t vl) {
  return __riscv_vluxseg4ei64_v_i16m2_tum(v0, v1, v2, v3, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, bindex, vl);
}

void test_vluxseg4ei64_v_i32mf2_tum(vint32mf2_t *v0, vint32mf2_t *v1, vint32mf2_t *v2, vint32mf2_t *v3, vbool64_t mask, vint32mf2_t maskedoff0, vint32mf2_t maskedoff1, vint32mf2_t maskedoff2, vint32mf2_t maskedoff3, const int32_t *base, vuint64m1_t bindex, size_t vl) {
  return __riscv_vluxseg4ei64_v_i32mf2_tum(v0, v1, v2, v3, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, bindex, vl);
}

void test_vluxseg4ei64_v_i32m1_tum(vint32m1_t *v0, vint32m1_t *v1, vint32m1_t *v2, vint32m1_t *v3, vbool32_t mask, vint32m1_t maskedoff0, vint32m1_t maskedoff1, vint32m1_t maskedoff2, vint32m1_t maskedoff3, const int32_t *base, vuint64m2_t bindex, size_t vl) {
  return __riscv_vluxseg4ei64_v_i32m1_tum(v0, v1, v2, v3, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, bindex, vl);
}

void test_vluxseg4ei64_v_i32m2_tum(vint32m2_t *v0, vint32m2_t *v1, vint32m2_t *v2, vint32m2_t *v3, vbool16_t mask, vint32m2_t maskedoff0, vint32m2_t maskedoff1, vint32m2_t maskedoff2, vint32m2_t maskedoff3, const int32_t *base, vuint64m4_t bindex, size_t vl) {
  return __riscv_vluxseg4ei64_v_i32m2_tum(v0, v1, v2, v3, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, bindex, vl);
}

void test_vluxseg4ei64_v_i64m1_tum(vint64m1_t *v0, vint64m1_t *v1, vint64m1_t *v2, vint64m1_t *v3, vbool64_t mask, vint64m1_t maskedoff0, vint64m1_t maskedoff1, vint64m1_t maskedoff2, vint64m1_t maskedoff3, const int64_t *base, vuint64m1_t bindex, size_t vl) {
  return __riscv_vluxseg4ei64_v_i64m1_tum(v0, v1, v2, v3, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, bindex, vl);
}

void test_vluxseg4ei64_v_i64m2_tum(vint64m2_t *v0, vint64m2_t *v1, vint64m2_t *v2, vint64m2_t *v3, vbool32_t mask, vint64m2_t maskedoff0, vint64m2_t maskedoff1, vint64m2_t maskedoff2, vint64m2_t maskedoff3, const int64_t *base, vuint64m2_t bindex, size_t vl) {
  return __riscv_vluxseg4ei64_v_i64m2_tum(v0, v1, v2, v3, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, bindex, vl);
}

void test_vluxseg4ei64_v_u8mf8_tum(vuint8mf8_t *v0, vuint8mf8_t *v1, vuint8mf8_t *v2, vuint8mf8_t *v3, vbool64_t mask, vuint8mf8_t maskedoff0, vuint8mf8_t maskedoff1, vuint8mf8_t maskedoff2, vuint8mf8_t maskedoff3, const uint8_t *base, vuint64m1_t bindex, size_t vl) {
  return __riscv_vluxseg4ei64_v_u8mf8_tum(v0, v1, v2, v3, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, bindex, vl);
}

void test_vluxseg4ei64_v_u8mf4_tum(vuint8mf4_t *v0, vuint8mf4_t *v1, vuint8mf4_t *v2, vuint8mf4_t *v3, vbool32_t mask, vuint8mf4_t maskedoff0, vuint8mf4_t maskedoff1, vuint8mf4_t maskedoff2, vuint8mf4_t maskedoff3, const uint8_t *base, vuint64m2_t bindex, size_t vl) {
  return __riscv_vluxseg4ei64_v_u8mf4_tum(v0, v1, v2, v3, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, bindex, vl);
}

void test_vluxseg4ei64_v_u8mf2_tum(vuint8mf2_t *v0, vuint8mf2_t *v1, vuint8mf2_t *v2, vuint8mf2_t *v3, vbool16_t mask, vuint8mf2_t maskedoff0, vuint8mf2_t maskedoff1, vuint8mf2_t maskedoff2, vuint8mf2_t maskedoff3, const uint8_t *base, vuint64m4_t bindex, size_t vl) {
  return __riscv_vluxseg4ei64_v_u8mf2_tum(v0, v1, v2, v3, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, bindex, vl);
}

void test_vluxseg4ei64_v_u8m1_tum(vuint8m1_t *v0, vuint8m1_t *v1, vuint8m1_t *v2, vuint8m1_t *v3, vbool8_t mask, vuint8m1_t maskedoff0, vuint8m1_t maskedoff1, vuint8m1_t maskedoff2, vuint8m1_t maskedoff3, const uint8_t *base, vuint64m8_t bindex, size_t vl) {
  return __riscv_vluxseg4ei64_v_u8m1_tum(v0, v1, v2, v3, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, bindex, vl);
}

void test_vluxseg4ei64_v_u16mf4_tum(vuint16mf4_t *v0, vuint16mf4_t *v1, vuint16mf4_t *v2, vuint16mf4_t *v3, vbool64_t mask, vuint16mf4_t maskedoff0, vuint16mf4_t maskedoff1, vuint16mf4_t maskedoff2, vuint16mf4_t maskedoff3, const uint16_t *base, vuint64m1_t bindex, size_t vl) {
  return __riscv_vluxseg4ei64_v_u16mf4_tum(v0, v1, v2, v3, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, bindex, vl);
}

void test_vluxseg4ei64_v_u16mf2_tum(vuint16mf2_t *v0, vuint16mf2_t *v1, vuint16mf2_t *v2, vuint16mf2_t *v3, vbool32_t mask, vuint16mf2_t maskedoff0, vuint16mf2_t maskedoff1, vuint16mf2_t maskedoff2, vuint16mf2_t maskedoff3, const uint16_t *base, vuint64m2_t bindex, size_t vl) {
  return __riscv_vluxseg4ei64_v_u16mf2_tum(v0, v1, v2, v3, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, bindex, vl);
}

void test_vluxseg4ei64_v_u16m1_tum(vuint16m1_t *v0, vuint16m1_t *v1, vuint16m1_t *v2, vuint16m1_t *v3, vbool16_t mask, vuint16m1_t maskedoff0, vuint16m1_t maskedoff1, vuint16m1_t maskedoff2, vuint16m1_t maskedoff3, const uint16_t *base, vuint64m4_t bindex, size_t vl) {
  return __riscv_vluxseg4ei64_v_u16m1_tum(v0, v1, v2, v3, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, bindex, vl);
}

void test_vluxseg4ei64_v_u16m2_tum(vuint16m2_t *v0, vuint16m2_t *v1, vuint16m2_t *v2, vuint16m2_t *v3, vbool8_t mask, vuint16m2_t maskedoff0, vuint16m2_t maskedoff1, vuint16m2_t maskedoff2, vuint16m2_t maskedoff3, const uint16_t *base, vuint64m8_t bindex, size_t vl) {
  return __riscv_vluxseg4ei64_v_u16m2_tum(v0, v1, v2, v3, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, bindex, vl);
}

void test_vluxseg4ei64_v_u32mf2_tum(vuint32mf2_t *v0, vuint32mf2_t *v1, vuint32mf2_t *v2, vuint32mf2_t *v3, vbool64_t mask, vuint32mf2_t maskedoff0, vuint32mf2_t maskedoff1, vuint32mf2_t maskedoff2, vuint32mf2_t maskedoff3, const uint32_t *base, vuint64m1_t bindex, size_t vl) {
  return __riscv_vluxseg4ei64_v_u32mf2_tum(v0, v1, v2, v3, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, bindex, vl);
}

void test_vluxseg4ei64_v_u32m1_tum(vuint32m1_t *v0, vuint32m1_t *v1, vuint32m1_t *v2, vuint32m1_t *v3, vbool32_t mask, vuint32m1_t maskedoff0, vuint32m1_t maskedoff1, vuint32m1_t maskedoff2, vuint32m1_t maskedoff3, const uint32_t *base, vuint64m2_t bindex, size_t vl) {
  return __riscv_vluxseg4ei64_v_u32m1_tum(v0, v1, v2, v3, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, bindex, vl);
}

void test_vluxseg4ei64_v_u32m2_tum(vuint32m2_t *v0, vuint32m2_t *v1, vuint32m2_t *v2, vuint32m2_t *v3, vbool16_t mask, vuint32m2_t maskedoff0, vuint32m2_t maskedoff1, vuint32m2_t maskedoff2, vuint32m2_t maskedoff3, const uint32_t *base, vuint64m4_t bindex, size_t vl) {
  return __riscv_vluxseg4ei64_v_u32m2_tum(v0, v1, v2, v3, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, bindex, vl);
}

void test_vluxseg4ei64_v_u64m1_tum(vuint64m1_t *v0, vuint64m1_t *v1, vuint64m1_t *v2, vuint64m1_t *v3, vbool64_t mask, vuint64m1_t maskedoff0, vuint64m1_t maskedoff1, vuint64m1_t maskedoff2, vuint64m1_t maskedoff3, const uint64_t *base, vuint64m1_t bindex, size_t vl) {
  return __riscv_vluxseg4ei64_v_u64m1_tum(v0, v1, v2, v3, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, bindex, vl);
}

void test_vluxseg4ei64_v_u64m2_tum(vuint64m2_t *v0, vuint64m2_t *v1, vuint64m2_t *v2, vuint64m2_t *v3, vbool32_t mask, vuint64m2_t maskedoff0, vuint64m2_t maskedoff1, vuint64m2_t maskedoff2, vuint64m2_t maskedoff3, const uint64_t *base, vuint64m2_t bindex, size_t vl) {
  return __riscv_vluxseg4ei64_v_u64m2_tum(v0, v1, v2, v3, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, bindex, vl);
}

void test_vluxseg4ei64_v_f16mf4_tumu(vfloat16mf4_t *v0, vfloat16mf4_t *v1, vfloat16mf4_t *v2, vfloat16mf4_t *v3, vbool64_t mask, vfloat16mf4_t maskedoff0, vfloat16mf4_t maskedoff1, vfloat16mf4_t maskedoff2, vfloat16mf4_t maskedoff3, const _Float16 *base, vuint64m1_t bindex, size_t vl) {
  return __riscv_vluxseg4ei64_v_f16mf4_tumu(v0, v1, v2, v3, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, bindex, vl);
}

void test_vluxseg4ei64_v_f16mf2_tumu(vfloat16mf2_t *v0, vfloat16mf2_t *v1, vfloat16mf2_t *v2, vfloat16mf2_t *v3, vbool32_t mask, vfloat16mf2_t maskedoff0, vfloat16mf2_t maskedoff1, vfloat16mf2_t maskedoff2, vfloat16mf2_t maskedoff3, const _Float16 *base, vuint64m2_t bindex, size_t vl) {
  return __riscv_vluxseg4ei64_v_f16mf2_tumu(v0, v1, v2, v3, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, bindex, vl);
}

void test_vluxseg4ei64_v_f16m1_tumu(vfloat16m1_t *v0, vfloat16m1_t *v1, vfloat16m1_t *v2, vfloat16m1_t *v3, vbool16_t mask, vfloat16m1_t maskedoff0, vfloat16m1_t maskedoff1, vfloat16m1_t maskedoff2, vfloat16m1_t maskedoff3, const _Float16 *base, vuint64m4_t bindex, size_t vl) {
  return __riscv_vluxseg4ei64_v_f16m1_tumu(v0, v1, v2, v3, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, bindex, vl);
}

void test_vluxseg4ei64_v_f16m2_tumu(vfloat16m2_t *v0, vfloat16m2_t *v1, vfloat16m2_t *v2, vfloat16m2_t *v3, vbool8_t mask, vfloat16m2_t maskedoff0, vfloat16m2_t maskedoff1, vfloat16m2_t maskedoff2, vfloat16m2_t maskedoff3, const _Float16 *base, vuint64m8_t bindex, size_t vl) {
  return __riscv_vluxseg4ei64_v_f16m2_tumu(v0, v1, v2, v3, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, bindex, vl);
}

void test_vluxseg4ei64_v_f32mf2_tumu(vfloat32mf2_t *v0, vfloat32mf2_t *v1, vfloat32mf2_t *v2, vfloat32mf2_t *v3, vbool64_t mask, vfloat32mf2_t maskedoff0, vfloat32mf2_t maskedoff1, vfloat32mf2_t maskedoff2, vfloat32mf2_t maskedoff3, const float *base, vuint64m1_t bindex, size_t vl) {
  return __riscv_vluxseg4ei64_v_f32mf2_tumu(v0, v1, v2, v3, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, bindex, vl);
}

void test_vluxseg4ei64_v_f32m1_tumu(vfloat32m1_t *v0, vfloat32m1_t *v1, vfloat32m1_t *v2, vfloat32m1_t *v3, vbool32_t mask, vfloat32m1_t maskedoff0, vfloat32m1_t maskedoff1, vfloat32m1_t maskedoff2, vfloat32m1_t maskedoff3, const float *base, vuint64m2_t bindex, size_t vl) {
  return __riscv_vluxseg4ei64_v_f32m1_tumu(v0, v1, v2, v3, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, bindex, vl);
}

void test_vluxseg4ei64_v_f32m2_tumu(vfloat32m2_t *v0, vfloat32m2_t *v1, vfloat32m2_t *v2, vfloat32m2_t *v3, vbool16_t mask, vfloat32m2_t maskedoff0, vfloat32m2_t maskedoff1, vfloat32m2_t maskedoff2, vfloat32m2_t maskedoff3, const float *base, vuint64m4_t bindex, size_t vl) {
  return __riscv_vluxseg4ei64_v_f32m2_tumu(v0, v1, v2, v3, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, bindex, vl);
}

void test_vluxseg4ei64_v_f64m1_tumu(vfloat64m1_t *v0, vfloat64m1_t *v1, vfloat64m1_t *v2, vfloat64m1_t *v3, vbool64_t mask, vfloat64m1_t maskedoff0, vfloat64m1_t maskedoff1, vfloat64m1_t maskedoff2, vfloat64m1_t maskedoff3, const double *base, vuint64m1_t bindex, size_t vl) {
  return __riscv_vluxseg4ei64_v_f64m1_tumu(v0, v1, v2, v3, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, bindex, vl);
}

void test_vluxseg4ei64_v_f64m2_tumu(vfloat64m2_t *v0, vfloat64m2_t *v1, vfloat64m2_t *v2, vfloat64m2_t *v3, vbool32_t mask, vfloat64m2_t maskedoff0, vfloat64m2_t maskedoff1, vfloat64m2_t maskedoff2, vfloat64m2_t maskedoff3, const double *base, vuint64m2_t bindex, size_t vl) {
  return __riscv_vluxseg4ei64_v_f64m2_tumu(v0, v1, v2, v3, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, bindex, vl);
}

void test_vluxseg4ei64_v_i8mf8_tumu(vint8mf8_t *v0, vint8mf8_t *v1, vint8mf8_t *v2, vint8mf8_t *v3, vbool64_t mask, vint8mf8_t maskedoff0, vint8mf8_t maskedoff1, vint8mf8_t maskedoff2, vint8mf8_t maskedoff3, const int8_t *base, vuint64m1_t bindex, size_t vl) {
  return __riscv_vluxseg4ei64_v_i8mf8_tumu(v0, v1, v2, v3, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, bindex, vl);
}

void test_vluxseg4ei64_v_i8mf4_tumu(vint8mf4_t *v0, vint8mf4_t *v1, vint8mf4_t *v2, vint8mf4_t *v3, vbool32_t mask, vint8mf4_t maskedoff0, vint8mf4_t maskedoff1, vint8mf4_t maskedoff2, vint8mf4_t maskedoff3, const int8_t *base, vuint64m2_t bindex, size_t vl) {
  return __riscv_vluxseg4ei64_v_i8mf4_tumu(v0, v1, v2, v3, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, bindex, vl);
}

void test_vluxseg4ei64_v_i8mf2_tumu(vint8mf2_t *v0, vint8mf2_t *v1, vint8mf2_t *v2, vint8mf2_t *v3, vbool16_t mask, vint8mf2_t maskedoff0, vint8mf2_t maskedoff1, vint8mf2_t maskedoff2, vint8mf2_t maskedoff3, const int8_t *base, vuint64m4_t bindex, size_t vl) {
  return __riscv_vluxseg4ei64_v_i8mf2_tumu(v0, v1, v2, v3, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, bindex, vl);
}

void test_vluxseg4ei64_v_i8m1_tumu(vint8m1_t *v0, vint8m1_t *v1, vint8m1_t *v2, vint8m1_t *v3, vbool8_t mask, vint8m1_t maskedoff0, vint8m1_t maskedoff1, vint8m1_t maskedoff2, vint8m1_t maskedoff3, const int8_t *base, vuint64m8_t bindex, size_t vl) {
  return __riscv_vluxseg4ei64_v_i8m1_tumu(v0, v1, v2, v3, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, bindex, vl);
}

void test_vluxseg4ei64_v_i16mf4_tumu(vint16mf4_t *v0, vint16mf4_t *v1, vint16mf4_t *v2, vint16mf4_t *v3, vbool64_t mask, vint16mf4_t maskedoff0, vint16mf4_t maskedoff1, vint16mf4_t maskedoff2, vint16mf4_t maskedoff3, const int16_t *base, vuint64m1_t bindex, size_t vl) {
  return __riscv_vluxseg4ei64_v_i16mf4_tumu(v0, v1, v2, v3, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, bindex, vl);
}

void test_vluxseg4ei64_v_i16mf2_tumu(vint16mf2_t *v0, vint16mf2_t *v1, vint16mf2_t *v2, vint16mf2_t *v3, vbool32_t mask, vint16mf2_t maskedoff0, vint16mf2_t maskedoff1, vint16mf2_t maskedoff2, vint16mf2_t maskedoff3, const int16_t *base, vuint64m2_t bindex, size_t vl) {
  return __riscv_vluxseg4ei64_v_i16mf2_tumu(v0, v1, v2, v3, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, bindex, vl);
}

void test_vluxseg4ei64_v_i16m1_tumu(vint16m1_t *v0, vint16m1_t *v1, vint16m1_t *v2, vint16m1_t *v3, vbool16_t mask, vint16m1_t maskedoff0, vint16m1_t maskedoff1, vint16m1_t maskedoff2, vint16m1_t maskedoff3, const int16_t *base, vuint64m4_t bindex, size_t vl) {
  return __riscv_vluxseg4ei64_v_i16m1_tumu(v0, v1, v2, v3, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, bindex, vl);
}

void test_vluxseg4ei64_v_i16m2_tumu(vint16m2_t *v0, vint16m2_t *v1, vint16m2_t *v2, vint16m2_t *v3, vbool8_t mask, vint16m2_t maskedoff0, vint16m2_t maskedoff1, vint16m2_t maskedoff2, vint16m2_t maskedoff3, const int16_t *base, vuint64m8_t bindex, size_t vl) {
  return __riscv_vluxseg4ei64_v_i16m2_tumu(v0, v1, v2, v3, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, bindex, vl);
}

void test_vluxseg4ei64_v_i32mf2_tumu(vint32mf2_t *v0, vint32mf2_t *v1, vint32mf2_t *v2, vint32mf2_t *v3, vbool64_t mask, vint32mf2_t maskedoff0, vint32mf2_t maskedoff1, vint32mf2_t maskedoff2, vint32mf2_t maskedoff3, const int32_t *base, vuint64m1_t bindex, size_t vl) {
  return __riscv_vluxseg4ei64_v_i32mf2_tumu(v0, v1, v2, v3, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, bindex, vl);
}

void test_vluxseg4ei64_v_i32m1_tumu(vint32m1_t *v0, vint32m1_t *v1, vint32m1_t *v2, vint32m1_t *v3, vbool32_t mask, vint32m1_t maskedoff0, vint32m1_t maskedoff1, vint32m1_t maskedoff2, vint32m1_t maskedoff3, const int32_t *base, vuint64m2_t bindex, size_t vl) {
  return __riscv_vluxseg4ei64_v_i32m1_tumu(v0, v1, v2, v3, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, bindex, vl);
}

void test_vluxseg4ei64_v_i32m2_tumu(vint32m2_t *v0, vint32m2_t *v1, vint32m2_t *v2, vint32m2_t *v3, vbool16_t mask, vint32m2_t maskedoff0, vint32m2_t maskedoff1, vint32m2_t maskedoff2, vint32m2_t maskedoff3, const int32_t *base, vuint64m4_t bindex, size_t vl) {
  return __riscv_vluxseg4ei64_v_i32m2_tumu(v0, v1, v2, v3, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, bindex, vl);
}

void test_vluxseg4ei64_v_i64m1_tumu(vint64m1_t *v0, vint64m1_t *v1, vint64m1_t *v2, vint64m1_t *v3, vbool64_t mask, vint64m1_t maskedoff0, vint64m1_t maskedoff1, vint64m1_t maskedoff2, vint64m1_t maskedoff3, const int64_t *base, vuint64m1_t bindex, size_t vl) {
  return __riscv_vluxseg4ei64_v_i64m1_tumu(v0, v1, v2, v3, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, bindex, vl);
}

void test_vluxseg4ei64_v_i64m2_tumu(vint64m2_t *v0, vint64m2_t *v1, vint64m2_t *v2, vint64m2_t *v3, vbool32_t mask, vint64m2_t maskedoff0, vint64m2_t maskedoff1, vint64m2_t maskedoff2, vint64m2_t maskedoff3, const int64_t *base, vuint64m2_t bindex, size_t vl) {
  return __riscv_vluxseg4ei64_v_i64m2_tumu(v0, v1, v2, v3, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, bindex, vl);
}

void test_vluxseg4ei64_v_u8mf8_tumu(vuint8mf8_t *v0, vuint8mf8_t *v1, vuint8mf8_t *v2, vuint8mf8_t *v3, vbool64_t mask, vuint8mf8_t maskedoff0, vuint8mf8_t maskedoff1, vuint8mf8_t maskedoff2, vuint8mf8_t maskedoff3, const uint8_t *base, vuint64m1_t bindex, size_t vl) {
  return __riscv_vluxseg4ei64_v_u8mf8_tumu(v0, v1, v2, v3, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, bindex, vl);
}

void test_vluxseg4ei64_v_u8mf4_tumu(vuint8mf4_t *v0, vuint8mf4_t *v1, vuint8mf4_t *v2, vuint8mf4_t *v3, vbool32_t mask, vuint8mf4_t maskedoff0, vuint8mf4_t maskedoff1, vuint8mf4_t maskedoff2, vuint8mf4_t maskedoff3, const uint8_t *base, vuint64m2_t bindex, size_t vl) {
  return __riscv_vluxseg4ei64_v_u8mf4_tumu(v0, v1, v2, v3, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, bindex, vl);
}

void test_vluxseg4ei64_v_u8mf2_tumu(vuint8mf2_t *v0, vuint8mf2_t *v1, vuint8mf2_t *v2, vuint8mf2_t *v3, vbool16_t mask, vuint8mf2_t maskedoff0, vuint8mf2_t maskedoff1, vuint8mf2_t maskedoff2, vuint8mf2_t maskedoff3, const uint8_t *base, vuint64m4_t bindex, size_t vl) {
  return __riscv_vluxseg4ei64_v_u8mf2_tumu(v0, v1, v2, v3, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, bindex, vl);
}

void test_vluxseg4ei64_v_u8m1_tumu(vuint8m1_t *v0, vuint8m1_t *v1, vuint8m1_t *v2, vuint8m1_t *v3, vbool8_t mask, vuint8m1_t maskedoff0, vuint8m1_t maskedoff1, vuint8m1_t maskedoff2, vuint8m1_t maskedoff3, const uint8_t *base, vuint64m8_t bindex, size_t vl) {
  return __riscv_vluxseg4ei64_v_u8m1_tumu(v0, v1, v2, v3, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, bindex, vl);
}

void test_vluxseg4ei64_v_u16mf4_tumu(vuint16mf4_t *v0, vuint16mf4_t *v1, vuint16mf4_t *v2, vuint16mf4_t *v3, vbool64_t mask, vuint16mf4_t maskedoff0, vuint16mf4_t maskedoff1, vuint16mf4_t maskedoff2, vuint16mf4_t maskedoff3, const uint16_t *base, vuint64m1_t bindex, size_t vl) {
  return __riscv_vluxseg4ei64_v_u16mf4_tumu(v0, v1, v2, v3, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, bindex, vl);
}

void test_vluxseg4ei64_v_u16mf2_tumu(vuint16mf2_t *v0, vuint16mf2_t *v1, vuint16mf2_t *v2, vuint16mf2_t *v3, vbool32_t mask, vuint16mf2_t maskedoff0, vuint16mf2_t maskedoff1, vuint16mf2_t maskedoff2, vuint16mf2_t maskedoff3, const uint16_t *base, vuint64m2_t bindex, size_t vl) {
  return __riscv_vluxseg4ei64_v_u16mf2_tumu(v0, v1, v2, v3, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, bindex, vl);
}

void test_vluxseg4ei64_v_u16m1_tumu(vuint16m1_t *v0, vuint16m1_t *v1, vuint16m1_t *v2, vuint16m1_t *v3, vbool16_t mask, vuint16m1_t maskedoff0, vuint16m1_t maskedoff1, vuint16m1_t maskedoff2, vuint16m1_t maskedoff3, const uint16_t *base, vuint64m4_t bindex, size_t vl) {
  return __riscv_vluxseg4ei64_v_u16m1_tumu(v0, v1, v2, v3, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, bindex, vl);
}

void test_vluxseg4ei64_v_u16m2_tumu(vuint16m2_t *v0, vuint16m2_t *v1, vuint16m2_t *v2, vuint16m2_t *v3, vbool8_t mask, vuint16m2_t maskedoff0, vuint16m2_t maskedoff1, vuint16m2_t maskedoff2, vuint16m2_t maskedoff3, const uint16_t *base, vuint64m8_t bindex, size_t vl) {
  return __riscv_vluxseg4ei64_v_u16m2_tumu(v0, v1, v2, v3, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, bindex, vl);
}

void test_vluxseg4ei64_v_u32mf2_tumu(vuint32mf2_t *v0, vuint32mf2_t *v1, vuint32mf2_t *v2, vuint32mf2_t *v3, vbool64_t mask, vuint32mf2_t maskedoff0, vuint32mf2_t maskedoff1, vuint32mf2_t maskedoff2, vuint32mf2_t maskedoff3, const uint32_t *base, vuint64m1_t bindex, size_t vl) {
  return __riscv_vluxseg4ei64_v_u32mf2_tumu(v0, v1, v2, v3, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, bindex, vl);
}

void test_vluxseg4ei64_v_u32m1_tumu(vuint32m1_t *v0, vuint32m1_t *v1, vuint32m1_t *v2, vuint32m1_t *v3, vbool32_t mask, vuint32m1_t maskedoff0, vuint32m1_t maskedoff1, vuint32m1_t maskedoff2, vuint32m1_t maskedoff3, const uint32_t *base, vuint64m2_t bindex, size_t vl) {
  return __riscv_vluxseg4ei64_v_u32m1_tumu(v0, v1, v2, v3, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, bindex, vl);
}

void test_vluxseg4ei64_v_u32m2_tumu(vuint32m2_t *v0, vuint32m2_t *v1, vuint32m2_t *v2, vuint32m2_t *v3, vbool16_t mask, vuint32m2_t maskedoff0, vuint32m2_t maskedoff1, vuint32m2_t maskedoff2, vuint32m2_t maskedoff3, const uint32_t *base, vuint64m4_t bindex, size_t vl) {
  return __riscv_vluxseg4ei64_v_u32m2_tumu(v0, v1, v2, v3, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, bindex, vl);
}

void test_vluxseg4ei64_v_u64m1_tumu(vuint64m1_t *v0, vuint64m1_t *v1, vuint64m1_t *v2, vuint64m1_t *v3, vbool64_t mask, vuint64m1_t maskedoff0, vuint64m1_t maskedoff1, vuint64m1_t maskedoff2, vuint64m1_t maskedoff3, const uint64_t *base, vuint64m1_t bindex, size_t vl) {
  return __riscv_vluxseg4ei64_v_u64m1_tumu(v0, v1, v2, v3, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, bindex, vl);
}

void test_vluxseg4ei64_v_u64m2_tumu(vuint64m2_t *v0, vuint64m2_t *v1, vuint64m2_t *v2, vuint64m2_t *v3, vbool32_t mask, vuint64m2_t maskedoff0, vuint64m2_t maskedoff1, vuint64m2_t maskedoff2, vuint64m2_t maskedoff3, const uint64_t *base, vuint64m2_t bindex, size_t vl) {
  return __riscv_vluxseg4ei64_v_u64m2_tumu(v0, v1, v2, v3, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, bindex, vl);
}

void test_vluxseg4ei64_v_f16mf4_mu(vfloat16mf4_t *v0, vfloat16mf4_t *v1, vfloat16mf4_t *v2, vfloat16mf4_t *v3, vbool64_t mask, vfloat16mf4_t maskedoff0, vfloat16mf4_t maskedoff1, vfloat16mf4_t maskedoff2, vfloat16mf4_t maskedoff3, const _Float16 *base, vuint64m1_t bindex, size_t vl) {
  return __riscv_vluxseg4ei64_v_f16mf4_mu(v0, v1, v2, v3, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, bindex, vl);
}

void test_vluxseg4ei64_v_f16mf2_mu(vfloat16mf2_t *v0, vfloat16mf2_t *v1, vfloat16mf2_t *v2, vfloat16mf2_t *v3, vbool32_t mask, vfloat16mf2_t maskedoff0, vfloat16mf2_t maskedoff1, vfloat16mf2_t maskedoff2, vfloat16mf2_t maskedoff3, const _Float16 *base, vuint64m2_t bindex, size_t vl) {
  return __riscv_vluxseg4ei64_v_f16mf2_mu(v0, v1, v2, v3, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, bindex, vl);
}

void test_vluxseg4ei64_v_f16m1_mu(vfloat16m1_t *v0, vfloat16m1_t *v1, vfloat16m1_t *v2, vfloat16m1_t *v3, vbool16_t mask, vfloat16m1_t maskedoff0, vfloat16m1_t maskedoff1, vfloat16m1_t maskedoff2, vfloat16m1_t maskedoff3, const _Float16 *base, vuint64m4_t bindex, size_t vl) {
  return __riscv_vluxseg4ei64_v_f16m1_mu(v0, v1, v2, v3, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, bindex, vl);
}

void test_vluxseg4ei64_v_f16m2_mu(vfloat16m2_t *v0, vfloat16m2_t *v1, vfloat16m2_t *v2, vfloat16m2_t *v3, vbool8_t mask, vfloat16m2_t maskedoff0, vfloat16m2_t maskedoff1, vfloat16m2_t maskedoff2, vfloat16m2_t maskedoff3, const _Float16 *base, vuint64m8_t bindex, size_t vl) {
  return __riscv_vluxseg4ei64_v_f16m2_mu(v0, v1, v2, v3, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, bindex, vl);
}

void test_vluxseg4ei64_v_f32mf2_mu(vfloat32mf2_t *v0, vfloat32mf2_t *v1, vfloat32mf2_t *v2, vfloat32mf2_t *v3, vbool64_t mask, vfloat32mf2_t maskedoff0, vfloat32mf2_t maskedoff1, vfloat32mf2_t maskedoff2, vfloat32mf2_t maskedoff3, const float *base, vuint64m1_t bindex, size_t vl) {
  return __riscv_vluxseg4ei64_v_f32mf2_mu(v0, v1, v2, v3, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, bindex, vl);
}

void test_vluxseg4ei64_v_f32m1_mu(vfloat32m1_t *v0, vfloat32m1_t *v1, vfloat32m1_t *v2, vfloat32m1_t *v3, vbool32_t mask, vfloat32m1_t maskedoff0, vfloat32m1_t maskedoff1, vfloat32m1_t maskedoff2, vfloat32m1_t maskedoff3, const float *base, vuint64m2_t bindex, size_t vl) {
  return __riscv_vluxseg4ei64_v_f32m1_mu(v0, v1, v2, v3, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, bindex, vl);
}

void test_vluxseg4ei64_v_f32m2_mu(vfloat32m2_t *v0, vfloat32m2_t *v1, vfloat32m2_t *v2, vfloat32m2_t *v3, vbool16_t mask, vfloat32m2_t maskedoff0, vfloat32m2_t maskedoff1, vfloat32m2_t maskedoff2, vfloat32m2_t maskedoff3, const float *base, vuint64m4_t bindex, size_t vl) {
  return __riscv_vluxseg4ei64_v_f32m2_mu(v0, v1, v2, v3, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, bindex, vl);
}

void test_vluxseg4ei64_v_f64m1_mu(vfloat64m1_t *v0, vfloat64m1_t *v1, vfloat64m1_t *v2, vfloat64m1_t *v3, vbool64_t mask, vfloat64m1_t maskedoff0, vfloat64m1_t maskedoff1, vfloat64m1_t maskedoff2, vfloat64m1_t maskedoff3, const double *base, vuint64m1_t bindex, size_t vl) {
  return __riscv_vluxseg4ei64_v_f64m1_mu(v0, v1, v2, v3, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, bindex, vl);
}

void test_vluxseg4ei64_v_f64m2_mu(vfloat64m2_t *v0, vfloat64m2_t *v1, vfloat64m2_t *v2, vfloat64m2_t *v3, vbool32_t mask, vfloat64m2_t maskedoff0, vfloat64m2_t maskedoff1, vfloat64m2_t maskedoff2, vfloat64m2_t maskedoff3, const double *base, vuint64m2_t bindex, size_t vl) {
  return __riscv_vluxseg4ei64_v_f64m2_mu(v0, v1, v2, v3, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, bindex, vl);
}

void test_vluxseg4ei64_v_i8mf8_mu(vint8mf8_t *v0, vint8mf8_t *v1, vint8mf8_t *v2, vint8mf8_t *v3, vbool64_t mask, vint8mf8_t maskedoff0, vint8mf8_t maskedoff1, vint8mf8_t maskedoff2, vint8mf8_t maskedoff3, const int8_t *base, vuint64m1_t bindex, size_t vl) {
  return __riscv_vluxseg4ei64_v_i8mf8_mu(v0, v1, v2, v3, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, bindex, vl);
}

void test_vluxseg4ei64_v_i8mf4_mu(vint8mf4_t *v0, vint8mf4_t *v1, vint8mf4_t *v2, vint8mf4_t *v3, vbool32_t mask, vint8mf4_t maskedoff0, vint8mf4_t maskedoff1, vint8mf4_t maskedoff2, vint8mf4_t maskedoff3, const int8_t *base, vuint64m2_t bindex, size_t vl) {
  return __riscv_vluxseg4ei64_v_i8mf4_mu(v0, v1, v2, v3, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, bindex, vl);
}

void test_vluxseg4ei64_v_i8mf2_mu(vint8mf2_t *v0, vint8mf2_t *v1, vint8mf2_t *v2, vint8mf2_t *v3, vbool16_t mask, vint8mf2_t maskedoff0, vint8mf2_t maskedoff1, vint8mf2_t maskedoff2, vint8mf2_t maskedoff3, const int8_t *base, vuint64m4_t bindex, size_t vl) {
  return __riscv_vluxseg4ei64_v_i8mf2_mu(v0, v1, v2, v3, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, bindex, vl);
}

void test_vluxseg4ei64_v_i8m1_mu(vint8m1_t *v0, vint8m1_t *v1, vint8m1_t *v2, vint8m1_t *v3, vbool8_t mask, vint8m1_t maskedoff0, vint8m1_t maskedoff1, vint8m1_t maskedoff2, vint8m1_t maskedoff3, const int8_t *base, vuint64m8_t bindex, size_t vl) {
  return __riscv_vluxseg4ei64_v_i8m1_mu(v0, v1, v2, v3, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, bindex, vl);
}

void test_vluxseg4ei64_v_i16mf4_mu(vint16mf4_t *v0, vint16mf4_t *v1, vint16mf4_t *v2, vint16mf4_t *v3, vbool64_t mask, vint16mf4_t maskedoff0, vint16mf4_t maskedoff1, vint16mf4_t maskedoff2, vint16mf4_t maskedoff3, const int16_t *base, vuint64m1_t bindex, size_t vl) {
  return __riscv_vluxseg4ei64_v_i16mf4_mu(v0, v1, v2, v3, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, bindex, vl);
}

void test_vluxseg4ei64_v_i16mf2_mu(vint16mf2_t *v0, vint16mf2_t *v1, vint16mf2_t *v2, vint16mf2_t *v3, vbool32_t mask, vint16mf2_t maskedoff0, vint16mf2_t maskedoff1, vint16mf2_t maskedoff2, vint16mf2_t maskedoff3, const int16_t *base, vuint64m2_t bindex, size_t vl) {
  return __riscv_vluxseg4ei64_v_i16mf2_mu(v0, v1, v2, v3, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, bindex, vl);
}

void test_vluxseg4ei64_v_i16m1_mu(vint16m1_t *v0, vint16m1_t *v1, vint16m1_t *v2, vint16m1_t *v3, vbool16_t mask, vint16m1_t maskedoff0, vint16m1_t maskedoff1, vint16m1_t maskedoff2, vint16m1_t maskedoff3, const int16_t *base, vuint64m4_t bindex, size_t vl) {
  return __riscv_vluxseg4ei64_v_i16m1_mu(v0, v1, v2, v3, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, bindex, vl);
}

void test_vluxseg4ei64_v_i16m2_mu(vint16m2_t *v0, vint16m2_t *v1, vint16m2_t *v2, vint16m2_t *v3, vbool8_t mask, vint16m2_t maskedoff0, vint16m2_t maskedoff1, vint16m2_t maskedoff2, vint16m2_t maskedoff3, const int16_t *base, vuint64m8_t bindex, size_t vl) {
  return __riscv_vluxseg4ei64_v_i16m2_mu(v0, v1, v2, v3, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, bindex, vl);
}

void test_vluxseg4ei64_v_i32mf2_mu(vint32mf2_t *v0, vint32mf2_t *v1, vint32mf2_t *v2, vint32mf2_t *v3, vbool64_t mask, vint32mf2_t maskedoff0, vint32mf2_t maskedoff1, vint32mf2_t maskedoff2, vint32mf2_t maskedoff3, const int32_t *base, vuint64m1_t bindex, size_t vl) {
  return __riscv_vluxseg4ei64_v_i32mf2_mu(v0, v1, v2, v3, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, bindex, vl);
}

void test_vluxseg4ei64_v_i32m1_mu(vint32m1_t *v0, vint32m1_t *v1, vint32m1_t *v2, vint32m1_t *v3, vbool32_t mask, vint32m1_t maskedoff0, vint32m1_t maskedoff1, vint32m1_t maskedoff2, vint32m1_t maskedoff3, const int32_t *base, vuint64m2_t bindex, size_t vl) {
  return __riscv_vluxseg4ei64_v_i32m1_mu(v0, v1, v2, v3, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, bindex, vl);
}

void test_vluxseg4ei64_v_i32m2_mu(vint32m2_t *v0, vint32m2_t *v1, vint32m2_t *v2, vint32m2_t *v3, vbool16_t mask, vint32m2_t maskedoff0, vint32m2_t maskedoff1, vint32m2_t maskedoff2, vint32m2_t maskedoff3, const int32_t *base, vuint64m4_t bindex, size_t vl) {
  return __riscv_vluxseg4ei64_v_i32m2_mu(v0, v1, v2, v3, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, bindex, vl);
}

void test_vluxseg4ei64_v_i64m1_mu(vint64m1_t *v0, vint64m1_t *v1, vint64m1_t *v2, vint64m1_t *v3, vbool64_t mask, vint64m1_t maskedoff0, vint64m1_t maskedoff1, vint64m1_t maskedoff2, vint64m1_t maskedoff3, const int64_t *base, vuint64m1_t bindex, size_t vl) {
  return __riscv_vluxseg4ei64_v_i64m1_mu(v0, v1, v2, v3, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, bindex, vl);
}

void test_vluxseg4ei64_v_i64m2_mu(vint64m2_t *v0, vint64m2_t *v1, vint64m2_t *v2, vint64m2_t *v3, vbool32_t mask, vint64m2_t maskedoff0, vint64m2_t maskedoff1, vint64m2_t maskedoff2, vint64m2_t maskedoff3, const int64_t *base, vuint64m2_t bindex, size_t vl) {
  return __riscv_vluxseg4ei64_v_i64m2_mu(v0, v1, v2, v3, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, bindex, vl);
}

void test_vluxseg4ei64_v_u8mf8_mu(vuint8mf8_t *v0, vuint8mf8_t *v1, vuint8mf8_t *v2, vuint8mf8_t *v3, vbool64_t mask, vuint8mf8_t maskedoff0, vuint8mf8_t maskedoff1, vuint8mf8_t maskedoff2, vuint8mf8_t maskedoff3, const uint8_t *base, vuint64m1_t bindex, size_t vl) {
  return __riscv_vluxseg4ei64_v_u8mf8_mu(v0, v1, v2, v3, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, bindex, vl);
}

void test_vluxseg4ei64_v_u8mf4_mu(vuint8mf4_t *v0, vuint8mf4_t *v1, vuint8mf4_t *v2, vuint8mf4_t *v3, vbool32_t mask, vuint8mf4_t maskedoff0, vuint8mf4_t maskedoff1, vuint8mf4_t maskedoff2, vuint8mf4_t maskedoff3, const uint8_t *base, vuint64m2_t bindex, size_t vl) {
  return __riscv_vluxseg4ei64_v_u8mf4_mu(v0, v1, v2, v3, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, bindex, vl);
}

void test_vluxseg4ei64_v_u8mf2_mu(vuint8mf2_t *v0, vuint8mf2_t *v1, vuint8mf2_t *v2, vuint8mf2_t *v3, vbool16_t mask, vuint8mf2_t maskedoff0, vuint8mf2_t maskedoff1, vuint8mf2_t maskedoff2, vuint8mf2_t maskedoff3, const uint8_t *base, vuint64m4_t bindex, size_t vl) {
  return __riscv_vluxseg4ei64_v_u8mf2_mu(v0, v1, v2, v3, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, bindex, vl);
}

void test_vluxseg4ei64_v_u8m1_mu(vuint8m1_t *v0, vuint8m1_t *v1, vuint8m1_t *v2, vuint8m1_t *v3, vbool8_t mask, vuint8m1_t maskedoff0, vuint8m1_t maskedoff1, vuint8m1_t maskedoff2, vuint8m1_t maskedoff3, const uint8_t *base, vuint64m8_t bindex, size_t vl) {
  return __riscv_vluxseg4ei64_v_u8m1_mu(v0, v1, v2, v3, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, bindex, vl);
}

void test_vluxseg4ei64_v_u16mf4_mu(vuint16mf4_t *v0, vuint16mf4_t *v1, vuint16mf4_t *v2, vuint16mf4_t *v3, vbool64_t mask, vuint16mf4_t maskedoff0, vuint16mf4_t maskedoff1, vuint16mf4_t maskedoff2, vuint16mf4_t maskedoff3, const uint16_t *base, vuint64m1_t bindex, size_t vl) {
  return __riscv_vluxseg4ei64_v_u16mf4_mu(v0, v1, v2, v3, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, bindex, vl);
}

void test_vluxseg4ei64_v_u16mf2_mu(vuint16mf2_t *v0, vuint16mf2_t *v1, vuint16mf2_t *v2, vuint16mf2_t *v3, vbool32_t mask, vuint16mf2_t maskedoff0, vuint16mf2_t maskedoff1, vuint16mf2_t maskedoff2, vuint16mf2_t maskedoff3, const uint16_t *base, vuint64m2_t bindex, size_t vl) {
  return __riscv_vluxseg4ei64_v_u16mf2_mu(v0, v1, v2, v3, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, bindex, vl);
}

void test_vluxseg4ei64_v_u16m1_mu(vuint16m1_t *v0, vuint16m1_t *v1, vuint16m1_t *v2, vuint16m1_t *v3, vbool16_t mask, vuint16m1_t maskedoff0, vuint16m1_t maskedoff1, vuint16m1_t maskedoff2, vuint16m1_t maskedoff3, const uint16_t *base, vuint64m4_t bindex, size_t vl) {
  return __riscv_vluxseg4ei64_v_u16m1_mu(v0, v1, v2, v3, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, bindex, vl);
}

void test_vluxseg4ei64_v_u16m2_mu(vuint16m2_t *v0, vuint16m2_t *v1, vuint16m2_t *v2, vuint16m2_t *v3, vbool8_t mask, vuint16m2_t maskedoff0, vuint16m2_t maskedoff1, vuint16m2_t maskedoff2, vuint16m2_t maskedoff3, const uint16_t *base, vuint64m8_t bindex, size_t vl) {
  return __riscv_vluxseg4ei64_v_u16m2_mu(v0, v1, v2, v3, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, bindex, vl);
}

void test_vluxseg4ei64_v_u32mf2_mu(vuint32mf2_t *v0, vuint32mf2_t *v1, vuint32mf2_t *v2, vuint32mf2_t *v3, vbool64_t mask, vuint32mf2_t maskedoff0, vuint32mf2_t maskedoff1, vuint32mf2_t maskedoff2, vuint32mf2_t maskedoff3, const uint32_t *base, vuint64m1_t bindex, size_t vl) {
  return __riscv_vluxseg4ei64_v_u32mf2_mu(v0, v1, v2, v3, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, bindex, vl);
}

void test_vluxseg4ei64_v_u32m1_mu(vuint32m1_t *v0, vuint32m1_t *v1, vuint32m1_t *v2, vuint32m1_t *v3, vbool32_t mask, vuint32m1_t maskedoff0, vuint32m1_t maskedoff1, vuint32m1_t maskedoff2, vuint32m1_t maskedoff3, const uint32_t *base, vuint64m2_t bindex, size_t vl) {
  return __riscv_vluxseg4ei64_v_u32m1_mu(v0, v1, v2, v3, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, bindex, vl);
}

void test_vluxseg4ei64_v_u32m2_mu(vuint32m2_t *v0, vuint32m2_t *v1, vuint32m2_t *v2, vuint32m2_t *v3, vbool16_t mask, vuint32m2_t maskedoff0, vuint32m2_t maskedoff1, vuint32m2_t maskedoff2, vuint32m2_t maskedoff3, const uint32_t *base, vuint64m4_t bindex, size_t vl) {
  return __riscv_vluxseg4ei64_v_u32m2_mu(v0, v1, v2, v3, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, bindex, vl);
}

void test_vluxseg4ei64_v_u64m1_mu(vuint64m1_t *v0, vuint64m1_t *v1, vuint64m1_t *v2, vuint64m1_t *v3, vbool64_t mask, vuint64m1_t maskedoff0, vuint64m1_t maskedoff1, vuint64m1_t maskedoff2, vuint64m1_t maskedoff3, const uint64_t *base, vuint64m1_t bindex, size_t vl) {
  return __riscv_vluxseg4ei64_v_u64m1_mu(v0, v1, v2, v3, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, bindex, vl);
}

void test_vluxseg4ei64_v_u64m2_mu(vuint64m2_t *v0, vuint64m2_t *v1, vuint64m2_t *v2, vuint64m2_t *v3, vbool32_t mask, vuint64m2_t maskedoff0, vuint64m2_t maskedoff1, vuint64m2_t maskedoff2, vuint64m2_t maskedoff3, const uint64_t *base, vuint64m2_t bindex, size_t vl) {
  return __riscv_vluxseg4ei64_v_u64m2_mu(v0, v1, v2, v3, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, bindex, vl);
}

