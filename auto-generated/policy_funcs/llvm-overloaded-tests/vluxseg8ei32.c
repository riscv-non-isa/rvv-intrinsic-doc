// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -target-feature +zfh \
// RUN:   -target-feature +experimental-zvfh -disable-O0-optnone  \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

void test_vluxseg8ei32_v_f16mf4_tu(vfloat16mf4_t *v0, vfloat16mf4_t *v1, vfloat16mf4_t *v2, vfloat16mf4_t *v3, vfloat16mf4_t *v4, vfloat16mf4_t *v5, vfloat16mf4_t *v6, vfloat16mf4_t *v7, vfloat16mf4_t maskedoff0, vfloat16mf4_t maskedoff1, vfloat16mf4_t maskedoff2, vfloat16mf4_t maskedoff3, vfloat16mf4_t maskedoff4, vfloat16mf4_t maskedoff5, vfloat16mf4_t maskedoff6, vfloat16mf4_t maskedoff7, const _Float16 *base, vuint32mf2_t bindex, size_t vl) {
  return vluxseg8ei32_tu(v0, v1, v2, v3, v4, v5, v6, v7, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, maskedoff7, base, bindex, vl);
}

void test_vluxseg8ei32_v_f16mf2_tu(vfloat16mf2_t *v0, vfloat16mf2_t *v1, vfloat16mf2_t *v2, vfloat16mf2_t *v3, vfloat16mf2_t *v4, vfloat16mf2_t *v5, vfloat16mf2_t *v6, vfloat16mf2_t *v7, vfloat16mf2_t maskedoff0, vfloat16mf2_t maskedoff1, vfloat16mf2_t maskedoff2, vfloat16mf2_t maskedoff3, vfloat16mf2_t maskedoff4, vfloat16mf2_t maskedoff5, vfloat16mf2_t maskedoff6, vfloat16mf2_t maskedoff7, const _Float16 *base, vuint32m1_t bindex, size_t vl) {
  return vluxseg8ei32_tu(v0, v1, v2, v3, v4, v5, v6, v7, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, maskedoff7, base, bindex, vl);
}

void test_vluxseg8ei32_v_f16m1_tu(vfloat16m1_t *v0, vfloat16m1_t *v1, vfloat16m1_t *v2, vfloat16m1_t *v3, vfloat16m1_t *v4, vfloat16m1_t *v5, vfloat16m1_t *v6, vfloat16m1_t *v7, vfloat16m1_t maskedoff0, vfloat16m1_t maskedoff1, vfloat16m1_t maskedoff2, vfloat16m1_t maskedoff3, vfloat16m1_t maskedoff4, vfloat16m1_t maskedoff5, vfloat16m1_t maskedoff6, vfloat16m1_t maskedoff7, const _Float16 *base, vuint32m2_t bindex, size_t vl) {
  return vluxseg8ei32_tu(v0, v1, v2, v3, v4, v5, v6, v7, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, maskedoff7, base, bindex, vl);
}

void test_vluxseg8ei32_v_f32mf2_tu(vfloat32mf2_t *v0, vfloat32mf2_t *v1, vfloat32mf2_t *v2, vfloat32mf2_t *v3, vfloat32mf2_t *v4, vfloat32mf2_t *v5, vfloat32mf2_t *v6, vfloat32mf2_t *v7, vfloat32mf2_t maskedoff0, vfloat32mf2_t maskedoff1, vfloat32mf2_t maskedoff2, vfloat32mf2_t maskedoff3, vfloat32mf2_t maskedoff4, vfloat32mf2_t maskedoff5, vfloat32mf2_t maskedoff6, vfloat32mf2_t maskedoff7, const float *base, vuint32mf2_t bindex, size_t vl) {
  return vluxseg8ei32_tu(v0, v1, v2, v3, v4, v5, v6, v7, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, maskedoff7, base, bindex, vl);
}

void test_vluxseg8ei32_v_f32m1_tu(vfloat32m1_t *v0, vfloat32m1_t *v1, vfloat32m1_t *v2, vfloat32m1_t *v3, vfloat32m1_t *v4, vfloat32m1_t *v5, vfloat32m1_t *v6, vfloat32m1_t *v7, vfloat32m1_t maskedoff0, vfloat32m1_t maskedoff1, vfloat32m1_t maskedoff2, vfloat32m1_t maskedoff3, vfloat32m1_t maskedoff4, vfloat32m1_t maskedoff5, vfloat32m1_t maskedoff6, vfloat32m1_t maskedoff7, const float *base, vuint32m1_t bindex, size_t vl) {
  return vluxseg8ei32_tu(v0, v1, v2, v3, v4, v5, v6, v7, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, maskedoff7, base, bindex, vl);
}

void test_vluxseg8ei32_v_f64m1_tu(vfloat64m1_t *v0, vfloat64m1_t *v1, vfloat64m1_t *v2, vfloat64m1_t *v3, vfloat64m1_t *v4, vfloat64m1_t *v5, vfloat64m1_t *v6, vfloat64m1_t *v7, vfloat64m1_t maskedoff0, vfloat64m1_t maskedoff1, vfloat64m1_t maskedoff2, vfloat64m1_t maskedoff3, vfloat64m1_t maskedoff4, vfloat64m1_t maskedoff5, vfloat64m1_t maskedoff6, vfloat64m1_t maskedoff7, const double *base, vuint32mf2_t bindex, size_t vl) {
  return vluxseg8ei32_tu(v0, v1, v2, v3, v4, v5, v6, v7, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, maskedoff7, base, bindex, vl);
}

void test_vluxseg8ei32_v_i8mf8_tu(vint8mf8_t *v0, vint8mf8_t *v1, vint8mf8_t *v2, vint8mf8_t *v3, vint8mf8_t *v4, vint8mf8_t *v5, vint8mf8_t *v6, vint8mf8_t *v7, vint8mf8_t maskedoff0, vint8mf8_t maskedoff1, vint8mf8_t maskedoff2, vint8mf8_t maskedoff3, vint8mf8_t maskedoff4, vint8mf8_t maskedoff5, vint8mf8_t maskedoff6, vint8mf8_t maskedoff7, const int8_t *base, vuint32mf2_t bindex, size_t vl) {
  return vluxseg8ei32_tu(v0, v1, v2, v3, v4, v5, v6, v7, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, maskedoff7, base, bindex, vl);
}

void test_vluxseg8ei32_v_i8mf4_tu(vint8mf4_t *v0, vint8mf4_t *v1, vint8mf4_t *v2, vint8mf4_t *v3, vint8mf4_t *v4, vint8mf4_t *v5, vint8mf4_t *v6, vint8mf4_t *v7, vint8mf4_t maskedoff0, vint8mf4_t maskedoff1, vint8mf4_t maskedoff2, vint8mf4_t maskedoff3, vint8mf4_t maskedoff4, vint8mf4_t maskedoff5, vint8mf4_t maskedoff6, vint8mf4_t maskedoff7, const int8_t *base, vuint32m1_t bindex, size_t vl) {
  return vluxseg8ei32_tu(v0, v1, v2, v3, v4, v5, v6, v7, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, maskedoff7, base, bindex, vl);
}

void test_vluxseg8ei32_v_i8mf2_tu(vint8mf2_t *v0, vint8mf2_t *v1, vint8mf2_t *v2, vint8mf2_t *v3, vint8mf2_t *v4, vint8mf2_t *v5, vint8mf2_t *v6, vint8mf2_t *v7, vint8mf2_t maskedoff0, vint8mf2_t maskedoff1, vint8mf2_t maskedoff2, vint8mf2_t maskedoff3, vint8mf2_t maskedoff4, vint8mf2_t maskedoff5, vint8mf2_t maskedoff6, vint8mf2_t maskedoff7, const int8_t *base, vuint32m2_t bindex, size_t vl) {
  return vluxseg8ei32_tu(v0, v1, v2, v3, v4, v5, v6, v7, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, maskedoff7, base, bindex, vl);
}

void test_vluxseg8ei32_v_i8m1_tu(vint8m1_t *v0, vint8m1_t *v1, vint8m1_t *v2, vint8m1_t *v3, vint8m1_t *v4, vint8m1_t *v5, vint8m1_t *v6, vint8m1_t *v7, vint8m1_t maskedoff0, vint8m1_t maskedoff1, vint8m1_t maskedoff2, vint8m1_t maskedoff3, vint8m1_t maskedoff4, vint8m1_t maskedoff5, vint8m1_t maskedoff6, vint8m1_t maskedoff7, const int8_t *base, vuint32m4_t bindex, size_t vl) {
  return vluxseg8ei32_tu(v0, v1, v2, v3, v4, v5, v6, v7, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, maskedoff7, base, bindex, vl);
}

void test_vluxseg8ei32_v_i16mf4_tu(vint16mf4_t *v0, vint16mf4_t *v1, vint16mf4_t *v2, vint16mf4_t *v3, vint16mf4_t *v4, vint16mf4_t *v5, vint16mf4_t *v6, vint16mf4_t *v7, vint16mf4_t maskedoff0, vint16mf4_t maskedoff1, vint16mf4_t maskedoff2, vint16mf4_t maskedoff3, vint16mf4_t maskedoff4, vint16mf4_t maskedoff5, vint16mf4_t maskedoff6, vint16mf4_t maskedoff7, const int16_t *base, vuint32mf2_t bindex, size_t vl) {
  return vluxseg8ei32_tu(v0, v1, v2, v3, v4, v5, v6, v7, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, maskedoff7, base, bindex, vl);
}

void test_vluxseg8ei32_v_i16mf2_tu(vint16mf2_t *v0, vint16mf2_t *v1, vint16mf2_t *v2, vint16mf2_t *v3, vint16mf2_t *v4, vint16mf2_t *v5, vint16mf2_t *v6, vint16mf2_t *v7, vint16mf2_t maskedoff0, vint16mf2_t maskedoff1, vint16mf2_t maskedoff2, vint16mf2_t maskedoff3, vint16mf2_t maskedoff4, vint16mf2_t maskedoff5, vint16mf2_t maskedoff6, vint16mf2_t maskedoff7, const int16_t *base, vuint32m1_t bindex, size_t vl) {
  return vluxseg8ei32_tu(v0, v1, v2, v3, v4, v5, v6, v7, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, maskedoff7, base, bindex, vl);
}

void test_vluxseg8ei32_v_i16m1_tu(vint16m1_t *v0, vint16m1_t *v1, vint16m1_t *v2, vint16m1_t *v3, vint16m1_t *v4, vint16m1_t *v5, vint16m1_t *v6, vint16m1_t *v7, vint16m1_t maskedoff0, vint16m1_t maskedoff1, vint16m1_t maskedoff2, vint16m1_t maskedoff3, vint16m1_t maskedoff4, vint16m1_t maskedoff5, vint16m1_t maskedoff6, vint16m1_t maskedoff7, const int16_t *base, vuint32m2_t bindex, size_t vl) {
  return vluxseg8ei32_tu(v0, v1, v2, v3, v4, v5, v6, v7, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, maskedoff7, base, bindex, vl);
}

void test_vluxseg8ei32_v_i32mf2_tu(vint32mf2_t *v0, vint32mf2_t *v1, vint32mf2_t *v2, vint32mf2_t *v3, vint32mf2_t *v4, vint32mf2_t *v5, vint32mf2_t *v6, vint32mf2_t *v7, vint32mf2_t maskedoff0, vint32mf2_t maskedoff1, vint32mf2_t maskedoff2, vint32mf2_t maskedoff3, vint32mf2_t maskedoff4, vint32mf2_t maskedoff5, vint32mf2_t maskedoff6, vint32mf2_t maskedoff7, const int32_t *base, vuint32mf2_t bindex, size_t vl) {
  return vluxseg8ei32_tu(v0, v1, v2, v3, v4, v5, v6, v7, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, maskedoff7, base, bindex, vl);
}

void test_vluxseg8ei32_v_i32m1_tu(vint32m1_t *v0, vint32m1_t *v1, vint32m1_t *v2, vint32m1_t *v3, vint32m1_t *v4, vint32m1_t *v5, vint32m1_t *v6, vint32m1_t *v7, vint32m1_t maskedoff0, vint32m1_t maskedoff1, vint32m1_t maskedoff2, vint32m1_t maskedoff3, vint32m1_t maskedoff4, vint32m1_t maskedoff5, vint32m1_t maskedoff6, vint32m1_t maskedoff7, const int32_t *base, vuint32m1_t bindex, size_t vl) {
  return vluxseg8ei32_tu(v0, v1, v2, v3, v4, v5, v6, v7, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, maskedoff7, base, bindex, vl);
}

void test_vluxseg8ei32_v_i64m1_tu(vint64m1_t *v0, vint64m1_t *v1, vint64m1_t *v2, vint64m1_t *v3, vint64m1_t *v4, vint64m1_t *v5, vint64m1_t *v6, vint64m1_t *v7, vint64m1_t maskedoff0, vint64m1_t maskedoff1, vint64m1_t maskedoff2, vint64m1_t maskedoff3, vint64m1_t maskedoff4, vint64m1_t maskedoff5, vint64m1_t maskedoff6, vint64m1_t maskedoff7, const int64_t *base, vuint32mf2_t bindex, size_t vl) {
  return vluxseg8ei32_tu(v0, v1, v2, v3, v4, v5, v6, v7, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, maskedoff7, base, bindex, vl);
}

void test_vluxseg8ei32_v_u8mf8_tu(vuint8mf8_t *v0, vuint8mf8_t *v1, vuint8mf8_t *v2, vuint8mf8_t *v3, vuint8mf8_t *v4, vuint8mf8_t *v5, vuint8mf8_t *v6, vuint8mf8_t *v7, vuint8mf8_t maskedoff0, vuint8mf8_t maskedoff1, vuint8mf8_t maskedoff2, vuint8mf8_t maskedoff3, vuint8mf8_t maskedoff4, vuint8mf8_t maskedoff5, vuint8mf8_t maskedoff6, vuint8mf8_t maskedoff7, const uint8_t *base, vuint32mf2_t bindex, size_t vl) {
  return vluxseg8ei32_tu(v0, v1, v2, v3, v4, v5, v6, v7, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, maskedoff7, base, bindex, vl);
}

void test_vluxseg8ei32_v_u8mf4_tu(vuint8mf4_t *v0, vuint8mf4_t *v1, vuint8mf4_t *v2, vuint8mf4_t *v3, vuint8mf4_t *v4, vuint8mf4_t *v5, vuint8mf4_t *v6, vuint8mf4_t *v7, vuint8mf4_t maskedoff0, vuint8mf4_t maskedoff1, vuint8mf4_t maskedoff2, vuint8mf4_t maskedoff3, vuint8mf4_t maskedoff4, vuint8mf4_t maskedoff5, vuint8mf4_t maskedoff6, vuint8mf4_t maskedoff7, const uint8_t *base, vuint32m1_t bindex, size_t vl) {
  return vluxseg8ei32_tu(v0, v1, v2, v3, v4, v5, v6, v7, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, maskedoff7, base, bindex, vl);
}

void test_vluxseg8ei32_v_u8mf2_tu(vuint8mf2_t *v0, vuint8mf2_t *v1, vuint8mf2_t *v2, vuint8mf2_t *v3, vuint8mf2_t *v4, vuint8mf2_t *v5, vuint8mf2_t *v6, vuint8mf2_t *v7, vuint8mf2_t maskedoff0, vuint8mf2_t maskedoff1, vuint8mf2_t maskedoff2, vuint8mf2_t maskedoff3, vuint8mf2_t maskedoff4, vuint8mf2_t maskedoff5, vuint8mf2_t maskedoff6, vuint8mf2_t maskedoff7, const uint8_t *base, vuint32m2_t bindex, size_t vl) {
  return vluxseg8ei32_tu(v0, v1, v2, v3, v4, v5, v6, v7, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, maskedoff7, base, bindex, vl);
}

void test_vluxseg8ei32_v_u8m1_tu(vuint8m1_t *v0, vuint8m1_t *v1, vuint8m1_t *v2, vuint8m1_t *v3, vuint8m1_t *v4, vuint8m1_t *v5, vuint8m1_t *v6, vuint8m1_t *v7, vuint8m1_t maskedoff0, vuint8m1_t maskedoff1, vuint8m1_t maskedoff2, vuint8m1_t maskedoff3, vuint8m1_t maskedoff4, vuint8m1_t maskedoff5, vuint8m1_t maskedoff6, vuint8m1_t maskedoff7, const uint8_t *base, vuint32m4_t bindex, size_t vl) {
  return vluxseg8ei32_tu(v0, v1, v2, v3, v4, v5, v6, v7, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, maskedoff7, base, bindex, vl);
}

void test_vluxseg8ei32_v_u16mf4_tu(vuint16mf4_t *v0, vuint16mf4_t *v1, vuint16mf4_t *v2, vuint16mf4_t *v3, vuint16mf4_t *v4, vuint16mf4_t *v5, vuint16mf4_t *v6, vuint16mf4_t *v7, vuint16mf4_t maskedoff0, vuint16mf4_t maskedoff1, vuint16mf4_t maskedoff2, vuint16mf4_t maskedoff3, vuint16mf4_t maskedoff4, vuint16mf4_t maskedoff5, vuint16mf4_t maskedoff6, vuint16mf4_t maskedoff7, const uint16_t *base, vuint32mf2_t bindex, size_t vl) {
  return vluxseg8ei32_tu(v0, v1, v2, v3, v4, v5, v6, v7, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, maskedoff7, base, bindex, vl);
}

void test_vluxseg8ei32_v_u16mf2_tu(vuint16mf2_t *v0, vuint16mf2_t *v1, vuint16mf2_t *v2, vuint16mf2_t *v3, vuint16mf2_t *v4, vuint16mf2_t *v5, vuint16mf2_t *v6, vuint16mf2_t *v7, vuint16mf2_t maskedoff0, vuint16mf2_t maskedoff1, vuint16mf2_t maskedoff2, vuint16mf2_t maskedoff3, vuint16mf2_t maskedoff4, vuint16mf2_t maskedoff5, vuint16mf2_t maskedoff6, vuint16mf2_t maskedoff7, const uint16_t *base, vuint32m1_t bindex, size_t vl) {
  return vluxseg8ei32_tu(v0, v1, v2, v3, v4, v5, v6, v7, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, maskedoff7, base, bindex, vl);
}

void test_vluxseg8ei32_v_u16m1_tu(vuint16m1_t *v0, vuint16m1_t *v1, vuint16m1_t *v2, vuint16m1_t *v3, vuint16m1_t *v4, vuint16m1_t *v5, vuint16m1_t *v6, vuint16m1_t *v7, vuint16m1_t maskedoff0, vuint16m1_t maskedoff1, vuint16m1_t maskedoff2, vuint16m1_t maskedoff3, vuint16m1_t maskedoff4, vuint16m1_t maskedoff5, vuint16m1_t maskedoff6, vuint16m1_t maskedoff7, const uint16_t *base, vuint32m2_t bindex, size_t vl) {
  return vluxseg8ei32_tu(v0, v1, v2, v3, v4, v5, v6, v7, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, maskedoff7, base, bindex, vl);
}

void test_vluxseg8ei32_v_u32mf2_tu(vuint32mf2_t *v0, vuint32mf2_t *v1, vuint32mf2_t *v2, vuint32mf2_t *v3, vuint32mf2_t *v4, vuint32mf2_t *v5, vuint32mf2_t *v6, vuint32mf2_t *v7, vuint32mf2_t maskedoff0, vuint32mf2_t maskedoff1, vuint32mf2_t maskedoff2, vuint32mf2_t maskedoff3, vuint32mf2_t maskedoff4, vuint32mf2_t maskedoff5, vuint32mf2_t maskedoff6, vuint32mf2_t maskedoff7, const uint32_t *base, vuint32mf2_t bindex, size_t vl) {
  return vluxseg8ei32_tu(v0, v1, v2, v3, v4, v5, v6, v7, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, maskedoff7, base, bindex, vl);
}

void test_vluxseg8ei32_v_u32m1_tu(vuint32m1_t *v0, vuint32m1_t *v1, vuint32m1_t *v2, vuint32m1_t *v3, vuint32m1_t *v4, vuint32m1_t *v5, vuint32m1_t *v6, vuint32m1_t *v7, vuint32m1_t maskedoff0, vuint32m1_t maskedoff1, vuint32m1_t maskedoff2, vuint32m1_t maskedoff3, vuint32m1_t maskedoff4, vuint32m1_t maskedoff5, vuint32m1_t maskedoff6, vuint32m1_t maskedoff7, const uint32_t *base, vuint32m1_t bindex, size_t vl) {
  return vluxseg8ei32_tu(v0, v1, v2, v3, v4, v5, v6, v7, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, maskedoff7, base, bindex, vl);
}

void test_vluxseg8ei32_v_u64m1_tu(vuint64m1_t *v0, vuint64m1_t *v1, vuint64m1_t *v2, vuint64m1_t *v3, vuint64m1_t *v4, vuint64m1_t *v5, vuint64m1_t *v6, vuint64m1_t *v7, vuint64m1_t maskedoff0, vuint64m1_t maskedoff1, vuint64m1_t maskedoff2, vuint64m1_t maskedoff3, vuint64m1_t maskedoff4, vuint64m1_t maskedoff5, vuint64m1_t maskedoff6, vuint64m1_t maskedoff7, const uint64_t *base, vuint32mf2_t bindex, size_t vl) {
  return vluxseg8ei32_tu(v0, v1, v2, v3, v4, v5, v6, v7, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, maskedoff7, base, bindex, vl);
}

void test_vluxseg8ei32_v_f16mf4_tum(vfloat16mf4_t *v0, vfloat16mf4_t *v1, vfloat16mf4_t *v2, vfloat16mf4_t *v3, vfloat16mf4_t *v4, vfloat16mf4_t *v5, vfloat16mf4_t *v6, vfloat16mf4_t *v7, vbool64_t mask, vfloat16mf4_t maskedoff0, vfloat16mf4_t maskedoff1, vfloat16mf4_t maskedoff2, vfloat16mf4_t maskedoff3, vfloat16mf4_t maskedoff4, vfloat16mf4_t maskedoff5, vfloat16mf4_t maskedoff6, vfloat16mf4_t maskedoff7, const _Float16 *base, vuint32mf2_t bindex, size_t vl) {
  return vluxseg8ei32_tum(v0, v1, v2, v3, v4, v5, v6, v7, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, maskedoff7, base, bindex, vl);
}

void test_vluxseg8ei32_v_f16mf2_tum(vfloat16mf2_t *v0, vfloat16mf2_t *v1, vfloat16mf2_t *v2, vfloat16mf2_t *v3, vfloat16mf2_t *v4, vfloat16mf2_t *v5, vfloat16mf2_t *v6, vfloat16mf2_t *v7, vbool32_t mask, vfloat16mf2_t maskedoff0, vfloat16mf2_t maskedoff1, vfloat16mf2_t maskedoff2, vfloat16mf2_t maskedoff3, vfloat16mf2_t maskedoff4, vfloat16mf2_t maskedoff5, vfloat16mf2_t maskedoff6, vfloat16mf2_t maskedoff7, const _Float16 *base, vuint32m1_t bindex, size_t vl) {
  return vluxseg8ei32_tum(v0, v1, v2, v3, v4, v5, v6, v7, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, maskedoff7, base, bindex, vl);
}

void test_vluxseg8ei32_v_f16m1_tum(vfloat16m1_t *v0, vfloat16m1_t *v1, vfloat16m1_t *v2, vfloat16m1_t *v3, vfloat16m1_t *v4, vfloat16m1_t *v5, vfloat16m1_t *v6, vfloat16m1_t *v7, vbool16_t mask, vfloat16m1_t maskedoff0, vfloat16m1_t maskedoff1, vfloat16m1_t maskedoff2, vfloat16m1_t maskedoff3, vfloat16m1_t maskedoff4, vfloat16m1_t maskedoff5, vfloat16m1_t maskedoff6, vfloat16m1_t maskedoff7, const _Float16 *base, vuint32m2_t bindex, size_t vl) {
  return vluxseg8ei32_tum(v0, v1, v2, v3, v4, v5, v6, v7, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, maskedoff7, base, bindex, vl);
}

void test_vluxseg8ei32_v_f32mf2_tum(vfloat32mf2_t *v0, vfloat32mf2_t *v1, vfloat32mf2_t *v2, vfloat32mf2_t *v3, vfloat32mf2_t *v4, vfloat32mf2_t *v5, vfloat32mf2_t *v6, vfloat32mf2_t *v7, vbool64_t mask, vfloat32mf2_t maskedoff0, vfloat32mf2_t maskedoff1, vfloat32mf2_t maskedoff2, vfloat32mf2_t maskedoff3, vfloat32mf2_t maskedoff4, vfloat32mf2_t maskedoff5, vfloat32mf2_t maskedoff6, vfloat32mf2_t maskedoff7, const float *base, vuint32mf2_t bindex, size_t vl) {
  return vluxseg8ei32_tum(v0, v1, v2, v3, v4, v5, v6, v7, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, maskedoff7, base, bindex, vl);
}

void test_vluxseg8ei32_v_f32m1_tum(vfloat32m1_t *v0, vfloat32m1_t *v1, vfloat32m1_t *v2, vfloat32m1_t *v3, vfloat32m1_t *v4, vfloat32m1_t *v5, vfloat32m1_t *v6, vfloat32m1_t *v7, vbool32_t mask, vfloat32m1_t maskedoff0, vfloat32m1_t maskedoff1, vfloat32m1_t maskedoff2, vfloat32m1_t maskedoff3, vfloat32m1_t maskedoff4, vfloat32m1_t maskedoff5, vfloat32m1_t maskedoff6, vfloat32m1_t maskedoff7, const float *base, vuint32m1_t bindex, size_t vl) {
  return vluxseg8ei32_tum(v0, v1, v2, v3, v4, v5, v6, v7, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, maskedoff7, base, bindex, vl);
}

void test_vluxseg8ei32_v_f64m1_tum(vfloat64m1_t *v0, vfloat64m1_t *v1, vfloat64m1_t *v2, vfloat64m1_t *v3, vfloat64m1_t *v4, vfloat64m1_t *v5, vfloat64m1_t *v6, vfloat64m1_t *v7, vbool64_t mask, vfloat64m1_t maskedoff0, vfloat64m1_t maskedoff1, vfloat64m1_t maskedoff2, vfloat64m1_t maskedoff3, vfloat64m1_t maskedoff4, vfloat64m1_t maskedoff5, vfloat64m1_t maskedoff6, vfloat64m1_t maskedoff7, const double *base, vuint32mf2_t bindex, size_t vl) {
  return vluxseg8ei32_tum(v0, v1, v2, v3, v4, v5, v6, v7, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, maskedoff7, base, bindex, vl);
}

void test_vluxseg8ei32_v_i8mf8_tum(vint8mf8_t *v0, vint8mf8_t *v1, vint8mf8_t *v2, vint8mf8_t *v3, vint8mf8_t *v4, vint8mf8_t *v5, vint8mf8_t *v6, vint8mf8_t *v7, vbool64_t mask, vint8mf8_t maskedoff0, vint8mf8_t maskedoff1, vint8mf8_t maskedoff2, vint8mf8_t maskedoff3, vint8mf8_t maskedoff4, vint8mf8_t maskedoff5, vint8mf8_t maskedoff6, vint8mf8_t maskedoff7, const int8_t *base, vuint32mf2_t bindex, size_t vl) {
  return vluxseg8ei32_tum(v0, v1, v2, v3, v4, v5, v6, v7, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, maskedoff7, base, bindex, vl);
}

void test_vluxseg8ei32_v_i8mf4_tum(vint8mf4_t *v0, vint8mf4_t *v1, vint8mf4_t *v2, vint8mf4_t *v3, vint8mf4_t *v4, vint8mf4_t *v5, vint8mf4_t *v6, vint8mf4_t *v7, vbool32_t mask, vint8mf4_t maskedoff0, vint8mf4_t maskedoff1, vint8mf4_t maskedoff2, vint8mf4_t maskedoff3, vint8mf4_t maskedoff4, vint8mf4_t maskedoff5, vint8mf4_t maskedoff6, vint8mf4_t maskedoff7, const int8_t *base, vuint32m1_t bindex, size_t vl) {
  return vluxseg8ei32_tum(v0, v1, v2, v3, v4, v5, v6, v7, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, maskedoff7, base, bindex, vl);
}

void test_vluxseg8ei32_v_i8mf2_tum(vint8mf2_t *v0, vint8mf2_t *v1, vint8mf2_t *v2, vint8mf2_t *v3, vint8mf2_t *v4, vint8mf2_t *v5, vint8mf2_t *v6, vint8mf2_t *v7, vbool16_t mask, vint8mf2_t maskedoff0, vint8mf2_t maskedoff1, vint8mf2_t maskedoff2, vint8mf2_t maskedoff3, vint8mf2_t maskedoff4, vint8mf2_t maskedoff5, vint8mf2_t maskedoff6, vint8mf2_t maskedoff7, const int8_t *base, vuint32m2_t bindex, size_t vl) {
  return vluxseg8ei32_tum(v0, v1, v2, v3, v4, v5, v6, v7, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, maskedoff7, base, bindex, vl);
}

void test_vluxseg8ei32_v_i8m1_tum(vint8m1_t *v0, vint8m1_t *v1, vint8m1_t *v2, vint8m1_t *v3, vint8m1_t *v4, vint8m1_t *v5, vint8m1_t *v6, vint8m1_t *v7, vbool8_t mask, vint8m1_t maskedoff0, vint8m1_t maskedoff1, vint8m1_t maskedoff2, vint8m1_t maskedoff3, vint8m1_t maskedoff4, vint8m1_t maskedoff5, vint8m1_t maskedoff6, vint8m1_t maskedoff7, const int8_t *base, vuint32m4_t bindex, size_t vl) {
  return vluxseg8ei32_tum(v0, v1, v2, v3, v4, v5, v6, v7, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, maskedoff7, base, bindex, vl);
}

void test_vluxseg8ei32_v_i16mf4_tum(vint16mf4_t *v0, vint16mf4_t *v1, vint16mf4_t *v2, vint16mf4_t *v3, vint16mf4_t *v4, vint16mf4_t *v5, vint16mf4_t *v6, vint16mf4_t *v7, vbool64_t mask, vint16mf4_t maskedoff0, vint16mf4_t maskedoff1, vint16mf4_t maskedoff2, vint16mf4_t maskedoff3, vint16mf4_t maskedoff4, vint16mf4_t maskedoff5, vint16mf4_t maskedoff6, vint16mf4_t maskedoff7, const int16_t *base, vuint32mf2_t bindex, size_t vl) {
  return vluxseg8ei32_tum(v0, v1, v2, v3, v4, v5, v6, v7, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, maskedoff7, base, bindex, vl);
}

void test_vluxseg8ei32_v_i16mf2_tum(vint16mf2_t *v0, vint16mf2_t *v1, vint16mf2_t *v2, vint16mf2_t *v3, vint16mf2_t *v4, vint16mf2_t *v5, vint16mf2_t *v6, vint16mf2_t *v7, vbool32_t mask, vint16mf2_t maskedoff0, vint16mf2_t maskedoff1, vint16mf2_t maskedoff2, vint16mf2_t maskedoff3, vint16mf2_t maskedoff4, vint16mf2_t maskedoff5, vint16mf2_t maskedoff6, vint16mf2_t maskedoff7, const int16_t *base, vuint32m1_t bindex, size_t vl) {
  return vluxseg8ei32_tum(v0, v1, v2, v3, v4, v5, v6, v7, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, maskedoff7, base, bindex, vl);
}

void test_vluxseg8ei32_v_i16m1_tum(vint16m1_t *v0, vint16m1_t *v1, vint16m1_t *v2, vint16m1_t *v3, vint16m1_t *v4, vint16m1_t *v5, vint16m1_t *v6, vint16m1_t *v7, vbool16_t mask, vint16m1_t maskedoff0, vint16m1_t maskedoff1, vint16m1_t maskedoff2, vint16m1_t maskedoff3, vint16m1_t maskedoff4, vint16m1_t maskedoff5, vint16m1_t maskedoff6, vint16m1_t maskedoff7, const int16_t *base, vuint32m2_t bindex, size_t vl) {
  return vluxseg8ei32_tum(v0, v1, v2, v3, v4, v5, v6, v7, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, maskedoff7, base, bindex, vl);
}

void test_vluxseg8ei32_v_i32mf2_tum(vint32mf2_t *v0, vint32mf2_t *v1, vint32mf2_t *v2, vint32mf2_t *v3, vint32mf2_t *v4, vint32mf2_t *v5, vint32mf2_t *v6, vint32mf2_t *v7, vbool64_t mask, vint32mf2_t maskedoff0, vint32mf2_t maskedoff1, vint32mf2_t maskedoff2, vint32mf2_t maskedoff3, vint32mf2_t maskedoff4, vint32mf2_t maskedoff5, vint32mf2_t maskedoff6, vint32mf2_t maskedoff7, const int32_t *base, vuint32mf2_t bindex, size_t vl) {
  return vluxseg8ei32_tum(v0, v1, v2, v3, v4, v5, v6, v7, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, maskedoff7, base, bindex, vl);
}

void test_vluxseg8ei32_v_i32m1_tum(vint32m1_t *v0, vint32m1_t *v1, vint32m1_t *v2, vint32m1_t *v3, vint32m1_t *v4, vint32m1_t *v5, vint32m1_t *v6, vint32m1_t *v7, vbool32_t mask, vint32m1_t maskedoff0, vint32m1_t maskedoff1, vint32m1_t maskedoff2, vint32m1_t maskedoff3, vint32m1_t maskedoff4, vint32m1_t maskedoff5, vint32m1_t maskedoff6, vint32m1_t maskedoff7, const int32_t *base, vuint32m1_t bindex, size_t vl) {
  return vluxseg8ei32_tum(v0, v1, v2, v3, v4, v5, v6, v7, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, maskedoff7, base, bindex, vl);
}

void test_vluxseg8ei32_v_i64m1_tum(vint64m1_t *v0, vint64m1_t *v1, vint64m1_t *v2, vint64m1_t *v3, vint64m1_t *v4, vint64m1_t *v5, vint64m1_t *v6, vint64m1_t *v7, vbool64_t mask, vint64m1_t maskedoff0, vint64m1_t maskedoff1, vint64m1_t maskedoff2, vint64m1_t maskedoff3, vint64m1_t maskedoff4, vint64m1_t maskedoff5, vint64m1_t maskedoff6, vint64m1_t maskedoff7, const int64_t *base, vuint32mf2_t bindex, size_t vl) {
  return vluxseg8ei32_tum(v0, v1, v2, v3, v4, v5, v6, v7, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, maskedoff7, base, bindex, vl);
}

void test_vluxseg8ei32_v_u8mf8_tum(vuint8mf8_t *v0, vuint8mf8_t *v1, vuint8mf8_t *v2, vuint8mf8_t *v3, vuint8mf8_t *v4, vuint8mf8_t *v5, vuint8mf8_t *v6, vuint8mf8_t *v7, vbool64_t mask, vuint8mf8_t maskedoff0, vuint8mf8_t maskedoff1, vuint8mf8_t maskedoff2, vuint8mf8_t maskedoff3, vuint8mf8_t maskedoff4, vuint8mf8_t maskedoff5, vuint8mf8_t maskedoff6, vuint8mf8_t maskedoff7, const uint8_t *base, vuint32mf2_t bindex, size_t vl) {
  return vluxseg8ei32_tum(v0, v1, v2, v3, v4, v5, v6, v7, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, maskedoff7, base, bindex, vl);
}

void test_vluxseg8ei32_v_u8mf4_tum(vuint8mf4_t *v0, vuint8mf4_t *v1, vuint8mf4_t *v2, vuint8mf4_t *v3, vuint8mf4_t *v4, vuint8mf4_t *v5, vuint8mf4_t *v6, vuint8mf4_t *v7, vbool32_t mask, vuint8mf4_t maskedoff0, vuint8mf4_t maskedoff1, vuint8mf4_t maskedoff2, vuint8mf4_t maskedoff3, vuint8mf4_t maskedoff4, vuint8mf4_t maskedoff5, vuint8mf4_t maskedoff6, vuint8mf4_t maskedoff7, const uint8_t *base, vuint32m1_t bindex, size_t vl) {
  return vluxseg8ei32_tum(v0, v1, v2, v3, v4, v5, v6, v7, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, maskedoff7, base, bindex, vl);
}

void test_vluxseg8ei32_v_u8mf2_tum(vuint8mf2_t *v0, vuint8mf2_t *v1, vuint8mf2_t *v2, vuint8mf2_t *v3, vuint8mf2_t *v4, vuint8mf2_t *v5, vuint8mf2_t *v6, vuint8mf2_t *v7, vbool16_t mask, vuint8mf2_t maskedoff0, vuint8mf2_t maskedoff1, vuint8mf2_t maskedoff2, vuint8mf2_t maskedoff3, vuint8mf2_t maskedoff4, vuint8mf2_t maskedoff5, vuint8mf2_t maskedoff6, vuint8mf2_t maskedoff7, const uint8_t *base, vuint32m2_t bindex, size_t vl) {
  return vluxseg8ei32_tum(v0, v1, v2, v3, v4, v5, v6, v7, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, maskedoff7, base, bindex, vl);
}

void test_vluxseg8ei32_v_u8m1_tum(vuint8m1_t *v0, vuint8m1_t *v1, vuint8m1_t *v2, vuint8m1_t *v3, vuint8m1_t *v4, vuint8m1_t *v5, vuint8m1_t *v6, vuint8m1_t *v7, vbool8_t mask, vuint8m1_t maskedoff0, vuint8m1_t maskedoff1, vuint8m1_t maskedoff2, vuint8m1_t maskedoff3, vuint8m1_t maskedoff4, vuint8m1_t maskedoff5, vuint8m1_t maskedoff6, vuint8m1_t maskedoff7, const uint8_t *base, vuint32m4_t bindex, size_t vl) {
  return vluxseg8ei32_tum(v0, v1, v2, v3, v4, v5, v6, v7, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, maskedoff7, base, bindex, vl);
}

void test_vluxseg8ei32_v_u16mf4_tum(vuint16mf4_t *v0, vuint16mf4_t *v1, vuint16mf4_t *v2, vuint16mf4_t *v3, vuint16mf4_t *v4, vuint16mf4_t *v5, vuint16mf4_t *v6, vuint16mf4_t *v7, vbool64_t mask, vuint16mf4_t maskedoff0, vuint16mf4_t maskedoff1, vuint16mf4_t maskedoff2, vuint16mf4_t maskedoff3, vuint16mf4_t maskedoff4, vuint16mf4_t maskedoff5, vuint16mf4_t maskedoff6, vuint16mf4_t maskedoff7, const uint16_t *base, vuint32mf2_t bindex, size_t vl) {
  return vluxseg8ei32_tum(v0, v1, v2, v3, v4, v5, v6, v7, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, maskedoff7, base, bindex, vl);
}

void test_vluxseg8ei32_v_u16mf2_tum(vuint16mf2_t *v0, vuint16mf2_t *v1, vuint16mf2_t *v2, vuint16mf2_t *v3, vuint16mf2_t *v4, vuint16mf2_t *v5, vuint16mf2_t *v6, vuint16mf2_t *v7, vbool32_t mask, vuint16mf2_t maskedoff0, vuint16mf2_t maskedoff1, vuint16mf2_t maskedoff2, vuint16mf2_t maskedoff3, vuint16mf2_t maskedoff4, vuint16mf2_t maskedoff5, vuint16mf2_t maskedoff6, vuint16mf2_t maskedoff7, const uint16_t *base, vuint32m1_t bindex, size_t vl) {
  return vluxseg8ei32_tum(v0, v1, v2, v3, v4, v5, v6, v7, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, maskedoff7, base, bindex, vl);
}

void test_vluxseg8ei32_v_u16m1_tum(vuint16m1_t *v0, vuint16m1_t *v1, vuint16m1_t *v2, vuint16m1_t *v3, vuint16m1_t *v4, vuint16m1_t *v5, vuint16m1_t *v6, vuint16m1_t *v7, vbool16_t mask, vuint16m1_t maskedoff0, vuint16m1_t maskedoff1, vuint16m1_t maskedoff2, vuint16m1_t maskedoff3, vuint16m1_t maskedoff4, vuint16m1_t maskedoff5, vuint16m1_t maskedoff6, vuint16m1_t maskedoff7, const uint16_t *base, vuint32m2_t bindex, size_t vl) {
  return vluxseg8ei32_tum(v0, v1, v2, v3, v4, v5, v6, v7, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, maskedoff7, base, bindex, vl);
}

void test_vluxseg8ei32_v_u32mf2_tum(vuint32mf2_t *v0, vuint32mf2_t *v1, vuint32mf2_t *v2, vuint32mf2_t *v3, vuint32mf2_t *v4, vuint32mf2_t *v5, vuint32mf2_t *v6, vuint32mf2_t *v7, vbool64_t mask, vuint32mf2_t maskedoff0, vuint32mf2_t maskedoff1, vuint32mf2_t maskedoff2, vuint32mf2_t maskedoff3, vuint32mf2_t maskedoff4, vuint32mf2_t maskedoff5, vuint32mf2_t maskedoff6, vuint32mf2_t maskedoff7, const uint32_t *base, vuint32mf2_t bindex, size_t vl) {
  return vluxseg8ei32_tum(v0, v1, v2, v3, v4, v5, v6, v7, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, maskedoff7, base, bindex, vl);
}

void test_vluxseg8ei32_v_u32m1_tum(vuint32m1_t *v0, vuint32m1_t *v1, vuint32m1_t *v2, vuint32m1_t *v3, vuint32m1_t *v4, vuint32m1_t *v5, vuint32m1_t *v6, vuint32m1_t *v7, vbool32_t mask, vuint32m1_t maskedoff0, vuint32m1_t maskedoff1, vuint32m1_t maskedoff2, vuint32m1_t maskedoff3, vuint32m1_t maskedoff4, vuint32m1_t maskedoff5, vuint32m1_t maskedoff6, vuint32m1_t maskedoff7, const uint32_t *base, vuint32m1_t bindex, size_t vl) {
  return vluxseg8ei32_tum(v0, v1, v2, v3, v4, v5, v6, v7, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, maskedoff7, base, bindex, vl);
}

void test_vluxseg8ei32_v_u64m1_tum(vuint64m1_t *v0, vuint64m1_t *v1, vuint64m1_t *v2, vuint64m1_t *v3, vuint64m1_t *v4, vuint64m1_t *v5, vuint64m1_t *v6, vuint64m1_t *v7, vbool64_t mask, vuint64m1_t maskedoff0, vuint64m1_t maskedoff1, vuint64m1_t maskedoff2, vuint64m1_t maskedoff3, vuint64m1_t maskedoff4, vuint64m1_t maskedoff5, vuint64m1_t maskedoff6, vuint64m1_t maskedoff7, const uint64_t *base, vuint32mf2_t bindex, size_t vl) {
  return vluxseg8ei32_tum(v0, v1, v2, v3, v4, v5, v6, v7, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, maskedoff7, base, bindex, vl);
}

void test_vluxseg8ei32_v_f16mf4_tumu(vfloat16mf4_t *v0, vfloat16mf4_t *v1, vfloat16mf4_t *v2, vfloat16mf4_t *v3, vfloat16mf4_t *v4, vfloat16mf4_t *v5, vfloat16mf4_t *v6, vfloat16mf4_t *v7, vbool64_t mask, vfloat16mf4_t maskedoff0, vfloat16mf4_t maskedoff1, vfloat16mf4_t maskedoff2, vfloat16mf4_t maskedoff3, vfloat16mf4_t maskedoff4, vfloat16mf4_t maskedoff5, vfloat16mf4_t maskedoff6, vfloat16mf4_t maskedoff7, const _Float16 *base, vuint32mf2_t bindex, size_t vl) {
  return vluxseg8ei32_tumu(v0, v1, v2, v3, v4, v5, v6, v7, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, maskedoff7, base, bindex, vl);
}

void test_vluxseg8ei32_v_f16mf2_tumu(vfloat16mf2_t *v0, vfloat16mf2_t *v1, vfloat16mf2_t *v2, vfloat16mf2_t *v3, vfloat16mf2_t *v4, vfloat16mf2_t *v5, vfloat16mf2_t *v6, vfloat16mf2_t *v7, vbool32_t mask, vfloat16mf2_t maskedoff0, vfloat16mf2_t maskedoff1, vfloat16mf2_t maskedoff2, vfloat16mf2_t maskedoff3, vfloat16mf2_t maskedoff4, vfloat16mf2_t maskedoff5, vfloat16mf2_t maskedoff6, vfloat16mf2_t maskedoff7, const _Float16 *base, vuint32m1_t bindex, size_t vl) {
  return vluxseg8ei32_tumu(v0, v1, v2, v3, v4, v5, v6, v7, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, maskedoff7, base, bindex, vl);
}

void test_vluxseg8ei32_v_f16m1_tumu(vfloat16m1_t *v0, vfloat16m1_t *v1, vfloat16m1_t *v2, vfloat16m1_t *v3, vfloat16m1_t *v4, vfloat16m1_t *v5, vfloat16m1_t *v6, vfloat16m1_t *v7, vbool16_t mask, vfloat16m1_t maskedoff0, vfloat16m1_t maskedoff1, vfloat16m1_t maskedoff2, vfloat16m1_t maskedoff3, vfloat16m1_t maskedoff4, vfloat16m1_t maskedoff5, vfloat16m1_t maskedoff6, vfloat16m1_t maskedoff7, const _Float16 *base, vuint32m2_t bindex, size_t vl) {
  return vluxseg8ei32_tumu(v0, v1, v2, v3, v4, v5, v6, v7, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, maskedoff7, base, bindex, vl);
}

void test_vluxseg8ei32_v_f32mf2_tumu(vfloat32mf2_t *v0, vfloat32mf2_t *v1, vfloat32mf2_t *v2, vfloat32mf2_t *v3, vfloat32mf2_t *v4, vfloat32mf2_t *v5, vfloat32mf2_t *v6, vfloat32mf2_t *v7, vbool64_t mask, vfloat32mf2_t maskedoff0, vfloat32mf2_t maskedoff1, vfloat32mf2_t maskedoff2, vfloat32mf2_t maskedoff3, vfloat32mf2_t maskedoff4, vfloat32mf2_t maskedoff5, vfloat32mf2_t maskedoff6, vfloat32mf2_t maskedoff7, const float *base, vuint32mf2_t bindex, size_t vl) {
  return vluxseg8ei32_tumu(v0, v1, v2, v3, v4, v5, v6, v7, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, maskedoff7, base, bindex, vl);
}

void test_vluxseg8ei32_v_f32m1_tumu(vfloat32m1_t *v0, vfloat32m1_t *v1, vfloat32m1_t *v2, vfloat32m1_t *v3, vfloat32m1_t *v4, vfloat32m1_t *v5, vfloat32m1_t *v6, vfloat32m1_t *v7, vbool32_t mask, vfloat32m1_t maskedoff0, vfloat32m1_t maskedoff1, vfloat32m1_t maskedoff2, vfloat32m1_t maskedoff3, vfloat32m1_t maskedoff4, vfloat32m1_t maskedoff5, vfloat32m1_t maskedoff6, vfloat32m1_t maskedoff7, const float *base, vuint32m1_t bindex, size_t vl) {
  return vluxseg8ei32_tumu(v0, v1, v2, v3, v4, v5, v6, v7, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, maskedoff7, base, bindex, vl);
}

void test_vluxseg8ei32_v_f64m1_tumu(vfloat64m1_t *v0, vfloat64m1_t *v1, vfloat64m1_t *v2, vfloat64m1_t *v3, vfloat64m1_t *v4, vfloat64m1_t *v5, vfloat64m1_t *v6, vfloat64m1_t *v7, vbool64_t mask, vfloat64m1_t maskedoff0, vfloat64m1_t maskedoff1, vfloat64m1_t maskedoff2, vfloat64m1_t maskedoff3, vfloat64m1_t maskedoff4, vfloat64m1_t maskedoff5, vfloat64m1_t maskedoff6, vfloat64m1_t maskedoff7, const double *base, vuint32mf2_t bindex, size_t vl) {
  return vluxseg8ei32_tumu(v0, v1, v2, v3, v4, v5, v6, v7, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, maskedoff7, base, bindex, vl);
}

void test_vluxseg8ei32_v_i8mf8_tumu(vint8mf8_t *v0, vint8mf8_t *v1, vint8mf8_t *v2, vint8mf8_t *v3, vint8mf8_t *v4, vint8mf8_t *v5, vint8mf8_t *v6, vint8mf8_t *v7, vbool64_t mask, vint8mf8_t maskedoff0, vint8mf8_t maskedoff1, vint8mf8_t maskedoff2, vint8mf8_t maskedoff3, vint8mf8_t maskedoff4, vint8mf8_t maskedoff5, vint8mf8_t maskedoff6, vint8mf8_t maskedoff7, const int8_t *base, vuint32mf2_t bindex, size_t vl) {
  return vluxseg8ei32_tumu(v0, v1, v2, v3, v4, v5, v6, v7, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, maskedoff7, base, bindex, vl);
}

void test_vluxseg8ei32_v_i8mf4_tumu(vint8mf4_t *v0, vint8mf4_t *v1, vint8mf4_t *v2, vint8mf4_t *v3, vint8mf4_t *v4, vint8mf4_t *v5, vint8mf4_t *v6, vint8mf4_t *v7, vbool32_t mask, vint8mf4_t maskedoff0, vint8mf4_t maskedoff1, vint8mf4_t maskedoff2, vint8mf4_t maskedoff3, vint8mf4_t maskedoff4, vint8mf4_t maskedoff5, vint8mf4_t maskedoff6, vint8mf4_t maskedoff7, const int8_t *base, vuint32m1_t bindex, size_t vl) {
  return vluxseg8ei32_tumu(v0, v1, v2, v3, v4, v5, v6, v7, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, maskedoff7, base, bindex, vl);
}

void test_vluxseg8ei32_v_i8mf2_tumu(vint8mf2_t *v0, vint8mf2_t *v1, vint8mf2_t *v2, vint8mf2_t *v3, vint8mf2_t *v4, vint8mf2_t *v5, vint8mf2_t *v6, vint8mf2_t *v7, vbool16_t mask, vint8mf2_t maskedoff0, vint8mf2_t maskedoff1, vint8mf2_t maskedoff2, vint8mf2_t maskedoff3, vint8mf2_t maskedoff4, vint8mf2_t maskedoff5, vint8mf2_t maskedoff6, vint8mf2_t maskedoff7, const int8_t *base, vuint32m2_t bindex, size_t vl) {
  return vluxseg8ei32_tumu(v0, v1, v2, v3, v4, v5, v6, v7, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, maskedoff7, base, bindex, vl);
}

void test_vluxseg8ei32_v_i8m1_tumu(vint8m1_t *v0, vint8m1_t *v1, vint8m1_t *v2, vint8m1_t *v3, vint8m1_t *v4, vint8m1_t *v5, vint8m1_t *v6, vint8m1_t *v7, vbool8_t mask, vint8m1_t maskedoff0, vint8m1_t maskedoff1, vint8m1_t maskedoff2, vint8m1_t maskedoff3, vint8m1_t maskedoff4, vint8m1_t maskedoff5, vint8m1_t maskedoff6, vint8m1_t maskedoff7, const int8_t *base, vuint32m4_t bindex, size_t vl) {
  return vluxseg8ei32_tumu(v0, v1, v2, v3, v4, v5, v6, v7, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, maskedoff7, base, bindex, vl);
}

void test_vluxseg8ei32_v_i16mf4_tumu(vint16mf4_t *v0, vint16mf4_t *v1, vint16mf4_t *v2, vint16mf4_t *v3, vint16mf4_t *v4, vint16mf4_t *v5, vint16mf4_t *v6, vint16mf4_t *v7, vbool64_t mask, vint16mf4_t maskedoff0, vint16mf4_t maskedoff1, vint16mf4_t maskedoff2, vint16mf4_t maskedoff3, vint16mf4_t maskedoff4, vint16mf4_t maskedoff5, vint16mf4_t maskedoff6, vint16mf4_t maskedoff7, const int16_t *base, vuint32mf2_t bindex, size_t vl) {
  return vluxseg8ei32_tumu(v0, v1, v2, v3, v4, v5, v6, v7, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, maskedoff7, base, bindex, vl);
}

void test_vluxseg8ei32_v_i16mf2_tumu(vint16mf2_t *v0, vint16mf2_t *v1, vint16mf2_t *v2, vint16mf2_t *v3, vint16mf2_t *v4, vint16mf2_t *v5, vint16mf2_t *v6, vint16mf2_t *v7, vbool32_t mask, vint16mf2_t maskedoff0, vint16mf2_t maskedoff1, vint16mf2_t maskedoff2, vint16mf2_t maskedoff3, vint16mf2_t maskedoff4, vint16mf2_t maskedoff5, vint16mf2_t maskedoff6, vint16mf2_t maskedoff7, const int16_t *base, vuint32m1_t bindex, size_t vl) {
  return vluxseg8ei32_tumu(v0, v1, v2, v3, v4, v5, v6, v7, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, maskedoff7, base, bindex, vl);
}

void test_vluxseg8ei32_v_i16m1_tumu(vint16m1_t *v0, vint16m1_t *v1, vint16m1_t *v2, vint16m1_t *v3, vint16m1_t *v4, vint16m1_t *v5, vint16m1_t *v6, vint16m1_t *v7, vbool16_t mask, vint16m1_t maskedoff0, vint16m1_t maskedoff1, vint16m1_t maskedoff2, vint16m1_t maskedoff3, vint16m1_t maskedoff4, vint16m1_t maskedoff5, vint16m1_t maskedoff6, vint16m1_t maskedoff7, const int16_t *base, vuint32m2_t bindex, size_t vl) {
  return vluxseg8ei32_tumu(v0, v1, v2, v3, v4, v5, v6, v7, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, maskedoff7, base, bindex, vl);
}

void test_vluxseg8ei32_v_i32mf2_tumu(vint32mf2_t *v0, vint32mf2_t *v1, vint32mf2_t *v2, vint32mf2_t *v3, vint32mf2_t *v4, vint32mf2_t *v5, vint32mf2_t *v6, vint32mf2_t *v7, vbool64_t mask, vint32mf2_t maskedoff0, vint32mf2_t maskedoff1, vint32mf2_t maskedoff2, vint32mf2_t maskedoff3, vint32mf2_t maskedoff4, vint32mf2_t maskedoff5, vint32mf2_t maskedoff6, vint32mf2_t maskedoff7, const int32_t *base, vuint32mf2_t bindex, size_t vl) {
  return vluxseg8ei32_tumu(v0, v1, v2, v3, v4, v5, v6, v7, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, maskedoff7, base, bindex, vl);
}

void test_vluxseg8ei32_v_i32m1_tumu(vint32m1_t *v0, vint32m1_t *v1, vint32m1_t *v2, vint32m1_t *v3, vint32m1_t *v4, vint32m1_t *v5, vint32m1_t *v6, vint32m1_t *v7, vbool32_t mask, vint32m1_t maskedoff0, vint32m1_t maskedoff1, vint32m1_t maskedoff2, vint32m1_t maskedoff3, vint32m1_t maskedoff4, vint32m1_t maskedoff5, vint32m1_t maskedoff6, vint32m1_t maskedoff7, const int32_t *base, vuint32m1_t bindex, size_t vl) {
  return vluxseg8ei32_tumu(v0, v1, v2, v3, v4, v5, v6, v7, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, maskedoff7, base, bindex, vl);
}

void test_vluxseg8ei32_v_i64m1_tumu(vint64m1_t *v0, vint64m1_t *v1, vint64m1_t *v2, vint64m1_t *v3, vint64m1_t *v4, vint64m1_t *v5, vint64m1_t *v6, vint64m1_t *v7, vbool64_t mask, vint64m1_t maskedoff0, vint64m1_t maskedoff1, vint64m1_t maskedoff2, vint64m1_t maskedoff3, vint64m1_t maskedoff4, vint64m1_t maskedoff5, vint64m1_t maskedoff6, vint64m1_t maskedoff7, const int64_t *base, vuint32mf2_t bindex, size_t vl) {
  return vluxseg8ei32_tumu(v0, v1, v2, v3, v4, v5, v6, v7, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, maskedoff7, base, bindex, vl);
}

void test_vluxseg8ei32_v_u8mf8_tumu(vuint8mf8_t *v0, vuint8mf8_t *v1, vuint8mf8_t *v2, vuint8mf8_t *v3, vuint8mf8_t *v4, vuint8mf8_t *v5, vuint8mf8_t *v6, vuint8mf8_t *v7, vbool64_t mask, vuint8mf8_t maskedoff0, vuint8mf8_t maskedoff1, vuint8mf8_t maskedoff2, vuint8mf8_t maskedoff3, vuint8mf8_t maskedoff4, vuint8mf8_t maskedoff5, vuint8mf8_t maskedoff6, vuint8mf8_t maskedoff7, const uint8_t *base, vuint32mf2_t bindex, size_t vl) {
  return vluxseg8ei32_tumu(v0, v1, v2, v3, v4, v5, v6, v7, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, maskedoff7, base, bindex, vl);
}

void test_vluxseg8ei32_v_u8mf4_tumu(vuint8mf4_t *v0, vuint8mf4_t *v1, vuint8mf4_t *v2, vuint8mf4_t *v3, vuint8mf4_t *v4, vuint8mf4_t *v5, vuint8mf4_t *v6, vuint8mf4_t *v7, vbool32_t mask, vuint8mf4_t maskedoff0, vuint8mf4_t maskedoff1, vuint8mf4_t maskedoff2, vuint8mf4_t maskedoff3, vuint8mf4_t maskedoff4, vuint8mf4_t maskedoff5, vuint8mf4_t maskedoff6, vuint8mf4_t maskedoff7, const uint8_t *base, vuint32m1_t bindex, size_t vl) {
  return vluxseg8ei32_tumu(v0, v1, v2, v3, v4, v5, v6, v7, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, maskedoff7, base, bindex, vl);
}

void test_vluxseg8ei32_v_u8mf2_tumu(vuint8mf2_t *v0, vuint8mf2_t *v1, vuint8mf2_t *v2, vuint8mf2_t *v3, vuint8mf2_t *v4, vuint8mf2_t *v5, vuint8mf2_t *v6, vuint8mf2_t *v7, vbool16_t mask, vuint8mf2_t maskedoff0, vuint8mf2_t maskedoff1, vuint8mf2_t maskedoff2, vuint8mf2_t maskedoff3, vuint8mf2_t maskedoff4, vuint8mf2_t maskedoff5, vuint8mf2_t maskedoff6, vuint8mf2_t maskedoff7, const uint8_t *base, vuint32m2_t bindex, size_t vl) {
  return vluxseg8ei32_tumu(v0, v1, v2, v3, v4, v5, v6, v7, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, maskedoff7, base, bindex, vl);
}

void test_vluxseg8ei32_v_u8m1_tumu(vuint8m1_t *v0, vuint8m1_t *v1, vuint8m1_t *v2, vuint8m1_t *v3, vuint8m1_t *v4, vuint8m1_t *v5, vuint8m1_t *v6, vuint8m1_t *v7, vbool8_t mask, vuint8m1_t maskedoff0, vuint8m1_t maskedoff1, vuint8m1_t maskedoff2, vuint8m1_t maskedoff3, vuint8m1_t maskedoff4, vuint8m1_t maskedoff5, vuint8m1_t maskedoff6, vuint8m1_t maskedoff7, const uint8_t *base, vuint32m4_t bindex, size_t vl) {
  return vluxseg8ei32_tumu(v0, v1, v2, v3, v4, v5, v6, v7, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, maskedoff7, base, bindex, vl);
}

void test_vluxseg8ei32_v_u16mf4_tumu(vuint16mf4_t *v0, vuint16mf4_t *v1, vuint16mf4_t *v2, vuint16mf4_t *v3, vuint16mf4_t *v4, vuint16mf4_t *v5, vuint16mf4_t *v6, vuint16mf4_t *v7, vbool64_t mask, vuint16mf4_t maskedoff0, vuint16mf4_t maskedoff1, vuint16mf4_t maskedoff2, vuint16mf4_t maskedoff3, vuint16mf4_t maskedoff4, vuint16mf4_t maskedoff5, vuint16mf4_t maskedoff6, vuint16mf4_t maskedoff7, const uint16_t *base, vuint32mf2_t bindex, size_t vl) {
  return vluxseg8ei32_tumu(v0, v1, v2, v3, v4, v5, v6, v7, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, maskedoff7, base, bindex, vl);
}

void test_vluxseg8ei32_v_u16mf2_tumu(vuint16mf2_t *v0, vuint16mf2_t *v1, vuint16mf2_t *v2, vuint16mf2_t *v3, vuint16mf2_t *v4, vuint16mf2_t *v5, vuint16mf2_t *v6, vuint16mf2_t *v7, vbool32_t mask, vuint16mf2_t maskedoff0, vuint16mf2_t maskedoff1, vuint16mf2_t maskedoff2, vuint16mf2_t maskedoff3, vuint16mf2_t maskedoff4, vuint16mf2_t maskedoff5, vuint16mf2_t maskedoff6, vuint16mf2_t maskedoff7, const uint16_t *base, vuint32m1_t bindex, size_t vl) {
  return vluxseg8ei32_tumu(v0, v1, v2, v3, v4, v5, v6, v7, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, maskedoff7, base, bindex, vl);
}

void test_vluxseg8ei32_v_u16m1_tumu(vuint16m1_t *v0, vuint16m1_t *v1, vuint16m1_t *v2, vuint16m1_t *v3, vuint16m1_t *v4, vuint16m1_t *v5, vuint16m1_t *v6, vuint16m1_t *v7, vbool16_t mask, vuint16m1_t maskedoff0, vuint16m1_t maskedoff1, vuint16m1_t maskedoff2, vuint16m1_t maskedoff3, vuint16m1_t maskedoff4, vuint16m1_t maskedoff5, vuint16m1_t maskedoff6, vuint16m1_t maskedoff7, const uint16_t *base, vuint32m2_t bindex, size_t vl) {
  return vluxseg8ei32_tumu(v0, v1, v2, v3, v4, v5, v6, v7, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, maskedoff7, base, bindex, vl);
}

void test_vluxseg8ei32_v_u32mf2_tumu(vuint32mf2_t *v0, vuint32mf2_t *v1, vuint32mf2_t *v2, vuint32mf2_t *v3, vuint32mf2_t *v4, vuint32mf2_t *v5, vuint32mf2_t *v6, vuint32mf2_t *v7, vbool64_t mask, vuint32mf2_t maskedoff0, vuint32mf2_t maskedoff1, vuint32mf2_t maskedoff2, vuint32mf2_t maskedoff3, vuint32mf2_t maskedoff4, vuint32mf2_t maskedoff5, vuint32mf2_t maskedoff6, vuint32mf2_t maskedoff7, const uint32_t *base, vuint32mf2_t bindex, size_t vl) {
  return vluxseg8ei32_tumu(v0, v1, v2, v3, v4, v5, v6, v7, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, maskedoff7, base, bindex, vl);
}

void test_vluxseg8ei32_v_u32m1_tumu(vuint32m1_t *v0, vuint32m1_t *v1, vuint32m1_t *v2, vuint32m1_t *v3, vuint32m1_t *v4, vuint32m1_t *v5, vuint32m1_t *v6, vuint32m1_t *v7, vbool32_t mask, vuint32m1_t maskedoff0, vuint32m1_t maskedoff1, vuint32m1_t maskedoff2, vuint32m1_t maskedoff3, vuint32m1_t maskedoff4, vuint32m1_t maskedoff5, vuint32m1_t maskedoff6, vuint32m1_t maskedoff7, const uint32_t *base, vuint32m1_t bindex, size_t vl) {
  return vluxseg8ei32_tumu(v0, v1, v2, v3, v4, v5, v6, v7, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, maskedoff7, base, bindex, vl);
}

void test_vluxseg8ei32_v_u64m1_tumu(vuint64m1_t *v0, vuint64m1_t *v1, vuint64m1_t *v2, vuint64m1_t *v3, vuint64m1_t *v4, vuint64m1_t *v5, vuint64m1_t *v6, vuint64m1_t *v7, vbool64_t mask, vuint64m1_t maskedoff0, vuint64m1_t maskedoff1, vuint64m1_t maskedoff2, vuint64m1_t maskedoff3, vuint64m1_t maskedoff4, vuint64m1_t maskedoff5, vuint64m1_t maskedoff6, vuint64m1_t maskedoff7, const uint64_t *base, vuint32mf2_t bindex, size_t vl) {
  return vluxseg8ei32_tumu(v0, v1, v2, v3, v4, v5, v6, v7, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, maskedoff7, base, bindex, vl);
}

void test_vluxseg8ei32_v_f16mf4_mu(vfloat16mf4_t *v0, vfloat16mf4_t *v1, vfloat16mf4_t *v2, vfloat16mf4_t *v3, vfloat16mf4_t *v4, vfloat16mf4_t *v5, vfloat16mf4_t *v6, vfloat16mf4_t *v7, vbool64_t mask, vfloat16mf4_t maskedoff0, vfloat16mf4_t maskedoff1, vfloat16mf4_t maskedoff2, vfloat16mf4_t maskedoff3, vfloat16mf4_t maskedoff4, vfloat16mf4_t maskedoff5, vfloat16mf4_t maskedoff6, vfloat16mf4_t maskedoff7, const _Float16 *base, vuint32mf2_t bindex, size_t vl) {
  return vluxseg8ei32_mu(v0, v1, v2, v3, v4, v5, v6, v7, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, maskedoff7, base, bindex, vl);
}

void test_vluxseg8ei32_v_f16mf2_mu(vfloat16mf2_t *v0, vfloat16mf2_t *v1, vfloat16mf2_t *v2, vfloat16mf2_t *v3, vfloat16mf2_t *v4, vfloat16mf2_t *v5, vfloat16mf2_t *v6, vfloat16mf2_t *v7, vbool32_t mask, vfloat16mf2_t maskedoff0, vfloat16mf2_t maskedoff1, vfloat16mf2_t maskedoff2, vfloat16mf2_t maskedoff3, vfloat16mf2_t maskedoff4, vfloat16mf2_t maskedoff5, vfloat16mf2_t maskedoff6, vfloat16mf2_t maskedoff7, const _Float16 *base, vuint32m1_t bindex, size_t vl) {
  return vluxseg8ei32_mu(v0, v1, v2, v3, v4, v5, v6, v7, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, maskedoff7, base, bindex, vl);
}

void test_vluxseg8ei32_v_f16m1_mu(vfloat16m1_t *v0, vfloat16m1_t *v1, vfloat16m1_t *v2, vfloat16m1_t *v3, vfloat16m1_t *v4, vfloat16m1_t *v5, vfloat16m1_t *v6, vfloat16m1_t *v7, vbool16_t mask, vfloat16m1_t maskedoff0, vfloat16m1_t maskedoff1, vfloat16m1_t maskedoff2, vfloat16m1_t maskedoff3, vfloat16m1_t maskedoff4, vfloat16m1_t maskedoff5, vfloat16m1_t maskedoff6, vfloat16m1_t maskedoff7, const _Float16 *base, vuint32m2_t bindex, size_t vl) {
  return vluxseg8ei32_mu(v0, v1, v2, v3, v4, v5, v6, v7, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, maskedoff7, base, bindex, vl);
}

void test_vluxseg8ei32_v_f32mf2_mu(vfloat32mf2_t *v0, vfloat32mf2_t *v1, vfloat32mf2_t *v2, vfloat32mf2_t *v3, vfloat32mf2_t *v4, vfloat32mf2_t *v5, vfloat32mf2_t *v6, vfloat32mf2_t *v7, vbool64_t mask, vfloat32mf2_t maskedoff0, vfloat32mf2_t maskedoff1, vfloat32mf2_t maskedoff2, vfloat32mf2_t maskedoff3, vfloat32mf2_t maskedoff4, vfloat32mf2_t maskedoff5, vfloat32mf2_t maskedoff6, vfloat32mf2_t maskedoff7, const float *base, vuint32mf2_t bindex, size_t vl) {
  return vluxseg8ei32_mu(v0, v1, v2, v3, v4, v5, v6, v7, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, maskedoff7, base, bindex, vl);
}

void test_vluxseg8ei32_v_f32m1_mu(vfloat32m1_t *v0, vfloat32m1_t *v1, vfloat32m1_t *v2, vfloat32m1_t *v3, vfloat32m1_t *v4, vfloat32m1_t *v5, vfloat32m1_t *v6, vfloat32m1_t *v7, vbool32_t mask, vfloat32m1_t maskedoff0, vfloat32m1_t maskedoff1, vfloat32m1_t maskedoff2, vfloat32m1_t maskedoff3, vfloat32m1_t maskedoff4, vfloat32m1_t maskedoff5, vfloat32m1_t maskedoff6, vfloat32m1_t maskedoff7, const float *base, vuint32m1_t bindex, size_t vl) {
  return vluxseg8ei32_mu(v0, v1, v2, v3, v4, v5, v6, v7, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, maskedoff7, base, bindex, vl);
}

void test_vluxseg8ei32_v_f64m1_mu(vfloat64m1_t *v0, vfloat64m1_t *v1, vfloat64m1_t *v2, vfloat64m1_t *v3, vfloat64m1_t *v4, vfloat64m1_t *v5, vfloat64m1_t *v6, vfloat64m1_t *v7, vbool64_t mask, vfloat64m1_t maskedoff0, vfloat64m1_t maskedoff1, vfloat64m1_t maskedoff2, vfloat64m1_t maskedoff3, vfloat64m1_t maskedoff4, vfloat64m1_t maskedoff5, vfloat64m1_t maskedoff6, vfloat64m1_t maskedoff7, const double *base, vuint32mf2_t bindex, size_t vl) {
  return vluxseg8ei32_mu(v0, v1, v2, v3, v4, v5, v6, v7, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, maskedoff7, base, bindex, vl);
}

void test_vluxseg8ei32_v_i8mf8_mu(vint8mf8_t *v0, vint8mf8_t *v1, vint8mf8_t *v2, vint8mf8_t *v3, vint8mf8_t *v4, vint8mf8_t *v5, vint8mf8_t *v6, vint8mf8_t *v7, vbool64_t mask, vint8mf8_t maskedoff0, vint8mf8_t maskedoff1, vint8mf8_t maskedoff2, vint8mf8_t maskedoff3, vint8mf8_t maskedoff4, vint8mf8_t maskedoff5, vint8mf8_t maskedoff6, vint8mf8_t maskedoff7, const int8_t *base, vuint32mf2_t bindex, size_t vl) {
  return vluxseg8ei32_mu(v0, v1, v2, v3, v4, v5, v6, v7, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, maskedoff7, base, bindex, vl);
}

void test_vluxseg8ei32_v_i8mf4_mu(vint8mf4_t *v0, vint8mf4_t *v1, vint8mf4_t *v2, vint8mf4_t *v3, vint8mf4_t *v4, vint8mf4_t *v5, vint8mf4_t *v6, vint8mf4_t *v7, vbool32_t mask, vint8mf4_t maskedoff0, vint8mf4_t maskedoff1, vint8mf4_t maskedoff2, vint8mf4_t maskedoff3, vint8mf4_t maskedoff4, vint8mf4_t maskedoff5, vint8mf4_t maskedoff6, vint8mf4_t maskedoff7, const int8_t *base, vuint32m1_t bindex, size_t vl) {
  return vluxseg8ei32_mu(v0, v1, v2, v3, v4, v5, v6, v7, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, maskedoff7, base, bindex, vl);
}

void test_vluxseg8ei32_v_i8mf2_mu(vint8mf2_t *v0, vint8mf2_t *v1, vint8mf2_t *v2, vint8mf2_t *v3, vint8mf2_t *v4, vint8mf2_t *v5, vint8mf2_t *v6, vint8mf2_t *v7, vbool16_t mask, vint8mf2_t maskedoff0, vint8mf2_t maskedoff1, vint8mf2_t maskedoff2, vint8mf2_t maskedoff3, vint8mf2_t maskedoff4, vint8mf2_t maskedoff5, vint8mf2_t maskedoff6, vint8mf2_t maskedoff7, const int8_t *base, vuint32m2_t bindex, size_t vl) {
  return vluxseg8ei32_mu(v0, v1, v2, v3, v4, v5, v6, v7, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, maskedoff7, base, bindex, vl);
}

void test_vluxseg8ei32_v_i8m1_mu(vint8m1_t *v0, vint8m1_t *v1, vint8m1_t *v2, vint8m1_t *v3, vint8m1_t *v4, vint8m1_t *v5, vint8m1_t *v6, vint8m1_t *v7, vbool8_t mask, vint8m1_t maskedoff0, vint8m1_t maskedoff1, vint8m1_t maskedoff2, vint8m1_t maskedoff3, vint8m1_t maskedoff4, vint8m1_t maskedoff5, vint8m1_t maskedoff6, vint8m1_t maskedoff7, const int8_t *base, vuint32m4_t bindex, size_t vl) {
  return vluxseg8ei32_mu(v0, v1, v2, v3, v4, v5, v6, v7, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, maskedoff7, base, bindex, vl);
}

void test_vluxseg8ei32_v_i16mf4_mu(vint16mf4_t *v0, vint16mf4_t *v1, vint16mf4_t *v2, vint16mf4_t *v3, vint16mf4_t *v4, vint16mf4_t *v5, vint16mf4_t *v6, vint16mf4_t *v7, vbool64_t mask, vint16mf4_t maskedoff0, vint16mf4_t maskedoff1, vint16mf4_t maskedoff2, vint16mf4_t maskedoff3, vint16mf4_t maskedoff4, vint16mf4_t maskedoff5, vint16mf4_t maskedoff6, vint16mf4_t maskedoff7, const int16_t *base, vuint32mf2_t bindex, size_t vl) {
  return vluxseg8ei32_mu(v0, v1, v2, v3, v4, v5, v6, v7, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, maskedoff7, base, bindex, vl);
}

void test_vluxseg8ei32_v_i16mf2_mu(vint16mf2_t *v0, vint16mf2_t *v1, vint16mf2_t *v2, vint16mf2_t *v3, vint16mf2_t *v4, vint16mf2_t *v5, vint16mf2_t *v6, vint16mf2_t *v7, vbool32_t mask, vint16mf2_t maskedoff0, vint16mf2_t maskedoff1, vint16mf2_t maskedoff2, vint16mf2_t maskedoff3, vint16mf2_t maskedoff4, vint16mf2_t maskedoff5, vint16mf2_t maskedoff6, vint16mf2_t maskedoff7, const int16_t *base, vuint32m1_t bindex, size_t vl) {
  return vluxseg8ei32_mu(v0, v1, v2, v3, v4, v5, v6, v7, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, maskedoff7, base, bindex, vl);
}

void test_vluxseg8ei32_v_i16m1_mu(vint16m1_t *v0, vint16m1_t *v1, vint16m1_t *v2, vint16m1_t *v3, vint16m1_t *v4, vint16m1_t *v5, vint16m1_t *v6, vint16m1_t *v7, vbool16_t mask, vint16m1_t maskedoff0, vint16m1_t maskedoff1, vint16m1_t maskedoff2, vint16m1_t maskedoff3, vint16m1_t maskedoff4, vint16m1_t maskedoff5, vint16m1_t maskedoff6, vint16m1_t maskedoff7, const int16_t *base, vuint32m2_t bindex, size_t vl) {
  return vluxseg8ei32_mu(v0, v1, v2, v3, v4, v5, v6, v7, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, maskedoff7, base, bindex, vl);
}

void test_vluxseg8ei32_v_i32mf2_mu(vint32mf2_t *v0, vint32mf2_t *v1, vint32mf2_t *v2, vint32mf2_t *v3, vint32mf2_t *v4, vint32mf2_t *v5, vint32mf2_t *v6, vint32mf2_t *v7, vbool64_t mask, vint32mf2_t maskedoff0, vint32mf2_t maskedoff1, vint32mf2_t maskedoff2, vint32mf2_t maskedoff3, vint32mf2_t maskedoff4, vint32mf2_t maskedoff5, vint32mf2_t maskedoff6, vint32mf2_t maskedoff7, const int32_t *base, vuint32mf2_t bindex, size_t vl) {
  return vluxseg8ei32_mu(v0, v1, v2, v3, v4, v5, v6, v7, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, maskedoff7, base, bindex, vl);
}

void test_vluxseg8ei32_v_i32m1_mu(vint32m1_t *v0, vint32m1_t *v1, vint32m1_t *v2, vint32m1_t *v3, vint32m1_t *v4, vint32m1_t *v5, vint32m1_t *v6, vint32m1_t *v7, vbool32_t mask, vint32m1_t maskedoff0, vint32m1_t maskedoff1, vint32m1_t maskedoff2, vint32m1_t maskedoff3, vint32m1_t maskedoff4, vint32m1_t maskedoff5, vint32m1_t maskedoff6, vint32m1_t maskedoff7, const int32_t *base, vuint32m1_t bindex, size_t vl) {
  return vluxseg8ei32_mu(v0, v1, v2, v3, v4, v5, v6, v7, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, maskedoff7, base, bindex, vl);
}

void test_vluxseg8ei32_v_i64m1_mu(vint64m1_t *v0, vint64m1_t *v1, vint64m1_t *v2, vint64m1_t *v3, vint64m1_t *v4, vint64m1_t *v5, vint64m1_t *v6, vint64m1_t *v7, vbool64_t mask, vint64m1_t maskedoff0, vint64m1_t maskedoff1, vint64m1_t maskedoff2, vint64m1_t maskedoff3, vint64m1_t maskedoff4, vint64m1_t maskedoff5, vint64m1_t maskedoff6, vint64m1_t maskedoff7, const int64_t *base, vuint32mf2_t bindex, size_t vl) {
  return vluxseg8ei32_mu(v0, v1, v2, v3, v4, v5, v6, v7, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, maskedoff7, base, bindex, vl);
}

void test_vluxseg8ei32_v_u8mf8_mu(vuint8mf8_t *v0, vuint8mf8_t *v1, vuint8mf8_t *v2, vuint8mf8_t *v3, vuint8mf8_t *v4, vuint8mf8_t *v5, vuint8mf8_t *v6, vuint8mf8_t *v7, vbool64_t mask, vuint8mf8_t maskedoff0, vuint8mf8_t maskedoff1, vuint8mf8_t maskedoff2, vuint8mf8_t maskedoff3, vuint8mf8_t maskedoff4, vuint8mf8_t maskedoff5, vuint8mf8_t maskedoff6, vuint8mf8_t maskedoff7, const uint8_t *base, vuint32mf2_t bindex, size_t vl) {
  return vluxseg8ei32_mu(v0, v1, v2, v3, v4, v5, v6, v7, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, maskedoff7, base, bindex, vl);
}

void test_vluxseg8ei32_v_u8mf4_mu(vuint8mf4_t *v0, vuint8mf4_t *v1, vuint8mf4_t *v2, vuint8mf4_t *v3, vuint8mf4_t *v4, vuint8mf4_t *v5, vuint8mf4_t *v6, vuint8mf4_t *v7, vbool32_t mask, vuint8mf4_t maskedoff0, vuint8mf4_t maskedoff1, vuint8mf4_t maskedoff2, vuint8mf4_t maskedoff3, vuint8mf4_t maskedoff4, vuint8mf4_t maskedoff5, vuint8mf4_t maskedoff6, vuint8mf4_t maskedoff7, const uint8_t *base, vuint32m1_t bindex, size_t vl) {
  return vluxseg8ei32_mu(v0, v1, v2, v3, v4, v5, v6, v7, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, maskedoff7, base, bindex, vl);
}

void test_vluxseg8ei32_v_u8mf2_mu(vuint8mf2_t *v0, vuint8mf2_t *v1, vuint8mf2_t *v2, vuint8mf2_t *v3, vuint8mf2_t *v4, vuint8mf2_t *v5, vuint8mf2_t *v6, vuint8mf2_t *v7, vbool16_t mask, vuint8mf2_t maskedoff0, vuint8mf2_t maskedoff1, vuint8mf2_t maskedoff2, vuint8mf2_t maskedoff3, vuint8mf2_t maskedoff4, vuint8mf2_t maskedoff5, vuint8mf2_t maskedoff6, vuint8mf2_t maskedoff7, const uint8_t *base, vuint32m2_t bindex, size_t vl) {
  return vluxseg8ei32_mu(v0, v1, v2, v3, v4, v5, v6, v7, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, maskedoff7, base, bindex, vl);
}

void test_vluxseg8ei32_v_u8m1_mu(vuint8m1_t *v0, vuint8m1_t *v1, vuint8m1_t *v2, vuint8m1_t *v3, vuint8m1_t *v4, vuint8m1_t *v5, vuint8m1_t *v6, vuint8m1_t *v7, vbool8_t mask, vuint8m1_t maskedoff0, vuint8m1_t maskedoff1, vuint8m1_t maskedoff2, vuint8m1_t maskedoff3, vuint8m1_t maskedoff4, vuint8m1_t maskedoff5, vuint8m1_t maskedoff6, vuint8m1_t maskedoff7, const uint8_t *base, vuint32m4_t bindex, size_t vl) {
  return vluxseg8ei32_mu(v0, v1, v2, v3, v4, v5, v6, v7, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, maskedoff7, base, bindex, vl);
}

void test_vluxseg8ei32_v_u16mf4_mu(vuint16mf4_t *v0, vuint16mf4_t *v1, vuint16mf4_t *v2, vuint16mf4_t *v3, vuint16mf4_t *v4, vuint16mf4_t *v5, vuint16mf4_t *v6, vuint16mf4_t *v7, vbool64_t mask, vuint16mf4_t maskedoff0, vuint16mf4_t maskedoff1, vuint16mf4_t maskedoff2, vuint16mf4_t maskedoff3, vuint16mf4_t maskedoff4, vuint16mf4_t maskedoff5, vuint16mf4_t maskedoff6, vuint16mf4_t maskedoff7, const uint16_t *base, vuint32mf2_t bindex, size_t vl) {
  return vluxseg8ei32_mu(v0, v1, v2, v3, v4, v5, v6, v7, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, maskedoff7, base, bindex, vl);
}

void test_vluxseg8ei32_v_u16mf2_mu(vuint16mf2_t *v0, vuint16mf2_t *v1, vuint16mf2_t *v2, vuint16mf2_t *v3, vuint16mf2_t *v4, vuint16mf2_t *v5, vuint16mf2_t *v6, vuint16mf2_t *v7, vbool32_t mask, vuint16mf2_t maskedoff0, vuint16mf2_t maskedoff1, vuint16mf2_t maskedoff2, vuint16mf2_t maskedoff3, vuint16mf2_t maskedoff4, vuint16mf2_t maskedoff5, vuint16mf2_t maskedoff6, vuint16mf2_t maskedoff7, const uint16_t *base, vuint32m1_t bindex, size_t vl) {
  return vluxseg8ei32_mu(v0, v1, v2, v3, v4, v5, v6, v7, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, maskedoff7, base, bindex, vl);
}

void test_vluxseg8ei32_v_u16m1_mu(vuint16m1_t *v0, vuint16m1_t *v1, vuint16m1_t *v2, vuint16m1_t *v3, vuint16m1_t *v4, vuint16m1_t *v5, vuint16m1_t *v6, vuint16m1_t *v7, vbool16_t mask, vuint16m1_t maskedoff0, vuint16m1_t maskedoff1, vuint16m1_t maskedoff2, vuint16m1_t maskedoff3, vuint16m1_t maskedoff4, vuint16m1_t maskedoff5, vuint16m1_t maskedoff6, vuint16m1_t maskedoff7, const uint16_t *base, vuint32m2_t bindex, size_t vl) {
  return vluxseg8ei32_mu(v0, v1, v2, v3, v4, v5, v6, v7, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, maskedoff7, base, bindex, vl);
}

void test_vluxseg8ei32_v_u32mf2_mu(vuint32mf2_t *v0, vuint32mf2_t *v1, vuint32mf2_t *v2, vuint32mf2_t *v3, vuint32mf2_t *v4, vuint32mf2_t *v5, vuint32mf2_t *v6, vuint32mf2_t *v7, vbool64_t mask, vuint32mf2_t maskedoff0, vuint32mf2_t maskedoff1, vuint32mf2_t maskedoff2, vuint32mf2_t maskedoff3, vuint32mf2_t maskedoff4, vuint32mf2_t maskedoff5, vuint32mf2_t maskedoff6, vuint32mf2_t maskedoff7, const uint32_t *base, vuint32mf2_t bindex, size_t vl) {
  return vluxseg8ei32_mu(v0, v1, v2, v3, v4, v5, v6, v7, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, maskedoff7, base, bindex, vl);
}

void test_vluxseg8ei32_v_u32m1_mu(vuint32m1_t *v0, vuint32m1_t *v1, vuint32m1_t *v2, vuint32m1_t *v3, vuint32m1_t *v4, vuint32m1_t *v5, vuint32m1_t *v6, vuint32m1_t *v7, vbool32_t mask, vuint32m1_t maskedoff0, vuint32m1_t maskedoff1, vuint32m1_t maskedoff2, vuint32m1_t maskedoff3, vuint32m1_t maskedoff4, vuint32m1_t maskedoff5, vuint32m1_t maskedoff6, vuint32m1_t maskedoff7, const uint32_t *base, vuint32m1_t bindex, size_t vl) {
  return vluxseg8ei32_mu(v0, v1, v2, v3, v4, v5, v6, v7, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, maskedoff7, base, bindex, vl);
}

void test_vluxseg8ei32_v_u64m1_mu(vuint64m1_t *v0, vuint64m1_t *v1, vuint64m1_t *v2, vuint64m1_t *v3, vuint64m1_t *v4, vuint64m1_t *v5, vuint64m1_t *v6, vuint64m1_t *v7, vbool64_t mask, vuint64m1_t maskedoff0, vuint64m1_t maskedoff1, vuint64m1_t maskedoff2, vuint64m1_t maskedoff3, vuint64m1_t maskedoff4, vuint64m1_t maskedoff5, vuint64m1_t maskedoff6, vuint64m1_t maskedoff7, const uint64_t *base, vuint32mf2_t bindex, size_t vl) {
  return vluxseg8ei32_mu(v0, v1, v2, v3, v4, v5, v6, v7, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, maskedoff7, base, bindex, vl);
}

