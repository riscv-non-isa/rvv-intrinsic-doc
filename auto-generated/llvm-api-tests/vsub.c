// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -disable-O0-optnone \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

vint8mf8_t test_vsub_vv_i8mf8(vint8mf8_t op1, vint8mf8_t op2, size_t vl) {
  return vsub_vv_i8mf8(op1, op2, vl);
}

vint8mf8_t test_vsub_vx_i8mf8(vint8mf8_t op1, int8_t op2, size_t vl) {
  return vsub_vx_i8mf8(op1, op2, vl);
}

vint8mf4_t test_vsub_vv_i8mf4(vint8mf4_t op1, vint8mf4_t op2, size_t vl) {
  return vsub_vv_i8mf4(op1, op2, vl);
}

vint8mf4_t test_vsub_vx_i8mf4(vint8mf4_t op1, int8_t op2, size_t vl) {
  return vsub_vx_i8mf4(op1, op2, vl);
}

vint8mf2_t test_vsub_vv_i8mf2(vint8mf2_t op1, vint8mf2_t op2, size_t vl) {
  return vsub_vv_i8mf2(op1, op2, vl);
}

vint8mf2_t test_vsub_vx_i8mf2(vint8mf2_t op1, int8_t op2, size_t vl) {
  return vsub_vx_i8mf2(op1, op2, vl);
}

vint8m1_t test_vsub_vv_i8m1(vint8m1_t op1, vint8m1_t op2, size_t vl) {
  return vsub_vv_i8m1(op1, op2, vl);
}

vint8m1_t test_vsub_vx_i8m1(vint8m1_t op1, int8_t op2, size_t vl) {
  return vsub_vx_i8m1(op1, op2, vl);
}

vint8m2_t test_vsub_vv_i8m2(vint8m2_t op1, vint8m2_t op2, size_t vl) {
  return vsub_vv_i8m2(op1, op2, vl);
}

vint8m2_t test_vsub_vx_i8m2(vint8m2_t op1, int8_t op2, size_t vl) {
  return vsub_vx_i8m2(op1, op2, vl);
}

vint8m4_t test_vsub_vv_i8m4(vint8m4_t op1, vint8m4_t op2, size_t vl) {
  return vsub_vv_i8m4(op1, op2, vl);
}

vint8m4_t test_vsub_vx_i8m4(vint8m4_t op1, int8_t op2, size_t vl) {
  return vsub_vx_i8m4(op1, op2, vl);
}

vint8m8_t test_vsub_vv_i8m8(vint8m8_t op1, vint8m8_t op2, size_t vl) {
  return vsub_vv_i8m8(op1, op2, vl);
}

vint8m8_t test_vsub_vx_i8m8(vint8m8_t op1, int8_t op2, size_t vl) {
  return vsub_vx_i8m8(op1, op2, vl);
}

vint16mf4_t test_vsub_vv_i16mf4(vint16mf4_t op1, vint16mf4_t op2, size_t vl) {
  return vsub_vv_i16mf4(op1, op2, vl);
}

vint16mf4_t test_vsub_vx_i16mf4(vint16mf4_t op1, int16_t op2, size_t vl) {
  return vsub_vx_i16mf4(op1, op2, vl);
}

vint16mf2_t test_vsub_vv_i16mf2(vint16mf2_t op1, vint16mf2_t op2, size_t vl) {
  return vsub_vv_i16mf2(op1, op2, vl);
}

vint16mf2_t test_vsub_vx_i16mf2(vint16mf2_t op1, int16_t op2, size_t vl) {
  return vsub_vx_i16mf2(op1, op2, vl);
}

vint16m1_t test_vsub_vv_i16m1(vint16m1_t op1, vint16m1_t op2, size_t vl) {
  return vsub_vv_i16m1(op1, op2, vl);
}

vint16m1_t test_vsub_vx_i16m1(vint16m1_t op1, int16_t op2, size_t vl) {
  return vsub_vx_i16m1(op1, op2, vl);
}

vint16m2_t test_vsub_vv_i16m2(vint16m2_t op1, vint16m2_t op2, size_t vl) {
  return vsub_vv_i16m2(op1, op2, vl);
}

vint16m2_t test_vsub_vx_i16m2(vint16m2_t op1, int16_t op2, size_t vl) {
  return vsub_vx_i16m2(op1, op2, vl);
}

vint16m4_t test_vsub_vv_i16m4(vint16m4_t op1, vint16m4_t op2, size_t vl) {
  return vsub_vv_i16m4(op1, op2, vl);
}

vint16m4_t test_vsub_vx_i16m4(vint16m4_t op1, int16_t op2, size_t vl) {
  return vsub_vx_i16m4(op1, op2, vl);
}

vint16m8_t test_vsub_vv_i16m8(vint16m8_t op1, vint16m8_t op2, size_t vl) {
  return vsub_vv_i16m8(op1, op2, vl);
}

vint16m8_t test_vsub_vx_i16m8(vint16m8_t op1, int16_t op2, size_t vl) {
  return vsub_vx_i16m8(op1, op2, vl);
}

vint32mf2_t test_vsub_vv_i32mf2(vint32mf2_t op1, vint32mf2_t op2, size_t vl) {
  return vsub_vv_i32mf2(op1, op2, vl);
}

vint32mf2_t test_vsub_vx_i32mf2(vint32mf2_t op1, int32_t op2, size_t vl) {
  return vsub_vx_i32mf2(op1, op2, vl);
}

vint32m1_t test_vsub_vv_i32m1(vint32m1_t op1, vint32m1_t op2, size_t vl) {
  return vsub_vv_i32m1(op1, op2, vl);
}

vint32m1_t test_vsub_vx_i32m1(vint32m1_t op1, int32_t op2, size_t vl) {
  return vsub_vx_i32m1(op1, op2, vl);
}

vint32m2_t test_vsub_vv_i32m2(vint32m2_t op1, vint32m2_t op2, size_t vl) {
  return vsub_vv_i32m2(op1, op2, vl);
}

vint32m2_t test_vsub_vx_i32m2(vint32m2_t op1, int32_t op2, size_t vl) {
  return vsub_vx_i32m2(op1, op2, vl);
}

vint32m4_t test_vsub_vv_i32m4(vint32m4_t op1, vint32m4_t op2, size_t vl) {
  return vsub_vv_i32m4(op1, op2, vl);
}

vint32m4_t test_vsub_vx_i32m4(vint32m4_t op1, int32_t op2, size_t vl) {
  return vsub_vx_i32m4(op1, op2, vl);
}

vint32m8_t test_vsub_vv_i32m8(vint32m8_t op1, vint32m8_t op2, size_t vl) {
  return vsub_vv_i32m8(op1, op2, vl);
}

vint32m8_t test_vsub_vx_i32m8(vint32m8_t op1, int32_t op2, size_t vl) {
  return vsub_vx_i32m8(op1, op2, vl);
}

vint64m1_t test_vsub_vv_i64m1(vint64m1_t op1, vint64m1_t op2, size_t vl) {
  return vsub_vv_i64m1(op1, op2, vl);
}

vint64m1_t test_vsub_vx_i64m1(vint64m1_t op1, int64_t op2, size_t vl) {
  return vsub_vx_i64m1(op1, op2, vl);
}

vint64m2_t test_vsub_vv_i64m2(vint64m2_t op1, vint64m2_t op2, size_t vl) {
  return vsub_vv_i64m2(op1, op2, vl);
}

vint64m2_t test_vsub_vx_i64m2(vint64m2_t op1, int64_t op2, size_t vl) {
  return vsub_vx_i64m2(op1, op2, vl);
}

vint64m4_t test_vsub_vv_i64m4(vint64m4_t op1, vint64m4_t op2, size_t vl) {
  return vsub_vv_i64m4(op1, op2, vl);
}

vint64m4_t test_vsub_vx_i64m4(vint64m4_t op1, int64_t op2, size_t vl) {
  return vsub_vx_i64m4(op1, op2, vl);
}

vint64m8_t test_vsub_vv_i64m8(vint64m8_t op1, vint64m8_t op2, size_t vl) {
  return vsub_vv_i64m8(op1, op2, vl);
}

vint64m8_t test_vsub_vx_i64m8(vint64m8_t op1, int64_t op2, size_t vl) {
  return vsub_vx_i64m8(op1, op2, vl);
}

vuint8mf8_t test_vsub_vv_u8mf8(vuint8mf8_t op1, vuint8mf8_t op2, size_t vl) {
  return vsub_vv_u8mf8(op1, op2, vl);
}

vuint8mf8_t test_vsub_vx_u8mf8(vuint8mf8_t op1, uint8_t op2, size_t vl) {
  return vsub_vx_u8mf8(op1, op2, vl);
}

vuint8mf4_t test_vsub_vv_u8mf4(vuint8mf4_t op1, vuint8mf4_t op2, size_t vl) {
  return vsub_vv_u8mf4(op1, op2, vl);
}

vuint8mf4_t test_vsub_vx_u8mf4(vuint8mf4_t op1, uint8_t op2, size_t vl) {
  return vsub_vx_u8mf4(op1, op2, vl);
}

vuint8mf2_t test_vsub_vv_u8mf2(vuint8mf2_t op1, vuint8mf2_t op2, size_t vl) {
  return vsub_vv_u8mf2(op1, op2, vl);
}

vuint8mf2_t test_vsub_vx_u8mf2(vuint8mf2_t op1, uint8_t op2, size_t vl) {
  return vsub_vx_u8mf2(op1, op2, vl);
}

vuint8m1_t test_vsub_vv_u8m1(vuint8m1_t op1, vuint8m1_t op2, size_t vl) {
  return vsub_vv_u8m1(op1, op2, vl);
}

vuint8m1_t test_vsub_vx_u8m1(vuint8m1_t op1, uint8_t op2, size_t vl) {
  return vsub_vx_u8m1(op1, op2, vl);
}

vuint8m2_t test_vsub_vv_u8m2(vuint8m2_t op1, vuint8m2_t op2, size_t vl) {
  return vsub_vv_u8m2(op1, op2, vl);
}

vuint8m2_t test_vsub_vx_u8m2(vuint8m2_t op1, uint8_t op2, size_t vl) {
  return vsub_vx_u8m2(op1, op2, vl);
}

vuint8m4_t test_vsub_vv_u8m4(vuint8m4_t op1, vuint8m4_t op2, size_t vl) {
  return vsub_vv_u8m4(op1, op2, vl);
}

vuint8m4_t test_vsub_vx_u8m4(vuint8m4_t op1, uint8_t op2, size_t vl) {
  return vsub_vx_u8m4(op1, op2, vl);
}

vuint8m8_t test_vsub_vv_u8m8(vuint8m8_t op1, vuint8m8_t op2, size_t vl) {
  return vsub_vv_u8m8(op1, op2, vl);
}

vuint8m8_t test_vsub_vx_u8m8(vuint8m8_t op1, uint8_t op2, size_t vl) {
  return vsub_vx_u8m8(op1, op2, vl);
}

vuint16mf4_t test_vsub_vv_u16mf4(vuint16mf4_t op1, vuint16mf4_t op2, size_t vl) {
  return vsub_vv_u16mf4(op1, op2, vl);
}

vuint16mf4_t test_vsub_vx_u16mf4(vuint16mf4_t op1, uint16_t op2, size_t vl) {
  return vsub_vx_u16mf4(op1, op2, vl);
}

vuint16mf2_t test_vsub_vv_u16mf2(vuint16mf2_t op1, vuint16mf2_t op2, size_t vl) {
  return vsub_vv_u16mf2(op1, op2, vl);
}

vuint16mf2_t test_vsub_vx_u16mf2(vuint16mf2_t op1, uint16_t op2, size_t vl) {
  return vsub_vx_u16mf2(op1, op2, vl);
}

vuint16m1_t test_vsub_vv_u16m1(vuint16m1_t op1, vuint16m1_t op2, size_t vl) {
  return vsub_vv_u16m1(op1, op2, vl);
}

vuint16m1_t test_vsub_vx_u16m1(vuint16m1_t op1, uint16_t op2, size_t vl) {
  return vsub_vx_u16m1(op1, op2, vl);
}

vuint16m2_t test_vsub_vv_u16m2(vuint16m2_t op1, vuint16m2_t op2, size_t vl) {
  return vsub_vv_u16m2(op1, op2, vl);
}

vuint16m2_t test_vsub_vx_u16m2(vuint16m2_t op1, uint16_t op2, size_t vl) {
  return vsub_vx_u16m2(op1, op2, vl);
}

vuint16m4_t test_vsub_vv_u16m4(vuint16m4_t op1, vuint16m4_t op2, size_t vl) {
  return vsub_vv_u16m4(op1, op2, vl);
}

vuint16m4_t test_vsub_vx_u16m4(vuint16m4_t op1, uint16_t op2, size_t vl) {
  return vsub_vx_u16m4(op1, op2, vl);
}

vuint16m8_t test_vsub_vv_u16m8(vuint16m8_t op1, vuint16m8_t op2, size_t vl) {
  return vsub_vv_u16m8(op1, op2, vl);
}

vuint16m8_t test_vsub_vx_u16m8(vuint16m8_t op1, uint16_t op2, size_t vl) {
  return vsub_vx_u16m8(op1, op2, vl);
}

vuint32mf2_t test_vsub_vv_u32mf2(vuint32mf2_t op1, vuint32mf2_t op2, size_t vl) {
  return vsub_vv_u32mf2(op1, op2, vl);
}

vuint32mf2_t test_vsub_vx_u32mf2(vuint32mf2_t op1, uint32_t op2, size_t vl) {
  return vsub_vx_u32mf2(op1, op2, vl);
}

vuint32m1_t test_vsub_vv_u32m1(vuint32m1_t op1, vuint32m1_t op2, size_t vl) {
  return vsub_vv_u32m1(op1, op2, vl);
}

vuint32m1_t test_vsub_vx_u32m1(vuint32m1_t op1, uint32_t op2, size_t vl) {
  return vsub_vx_u32m1(op1, op2, vl);
}

vuint32m2_t test_vsub_vv_u32m2(vuint32m2_t op1, vuint32m2_t op2, size_t vl) {
  return vsub_vv_u32m2(op1, op2, vl);
}

vuint32m2_t test_vsub_vx_u32m2(vuint32m2_t op1, uint32_t op2, size_t vl) {
  return vsub_vx_u32m2(op1, op2, vl);
}

vuint32m4_t test_vsub_vv_u32m4(vuint32m4_t op1, vuint32m4_t op2, size_t vl) {
  return vsub_vv_u32m4(op1, op2, vl);
}

vuint32m4_t test_vsub_vx_u32m4(vuint32m4_t op1, uint32_t op2, size_t vl) {
  return vsub_vx_u32m4(op1, op2, vl);
}

vuint32m8_t test_vsub_vv_u32m8(vuint32m8_t op1, vuint32m8_t op2, size_t vl) {
  return vsub_vv_u32m8(op1, op2, vl);
}

vuint32m8_t test_vsub_vx_u32m8(vuint32m8_t op1, uint32_t op2, size_t vl) {
  return vsub_vx_u32m8(op1, op2, vl);
}

vuint64m1_t test_vsub_vv_u64m1(vuint64m1_t op1, vuint64m1_t op2, size_t vl) {
  return vsub_vv_u64m1(op1, op2, vl);
}

vuint64m1_t test_vsub_vx_u64m1(vuint64m1_t op1, uint64_t op2, size_t vl) {
  return vsub_vx_u64m1(op1, op2, vl);
}

vuint64m2_t test_vsub_vv_u64m2(vuint64m2_t op1, vuint64m2_t op2, size_t vl) {
  return vsub_vv_u64m2(op1, op2, vl);
}

vuint64m2_t test_vsub_vx_u64m2(vuint64m2_t op1, uint64_t op2, size_t vl) {
  return vsub_vx_u64m2(op1, op2, vl);
}

vuint64m4_t test_vsub_vv_u64m4(vuint64m4_t op1, vuint64m4_t op2, size_t vl) {
  return vsub_vv_u64m4(op1, op2, vl);
}

vuint64m4_t test_vsub_vx_u64m4(vuint64m4_t op1, uint64_t op2, size_t vl) {
  return vsub_vx_u64m4(op1, op2, vl);
}

vuint64m8_t test_vsub_vv_u64m8(vuint64m8_t op1, vuint64m8_t op2, size_t vl) {
  return vsub_vv_u64m8(op1, op2, vl);
}

vuint64m8_t test_vsub_vx_u64m8(vuint64m8_t op1, uint64_t op2, size_t vl) {
  return vsub_vx_u64m8(op1, op2, vl);
}

vint8mf8_t test_vsub_vv_i8mf8_m(vbool64_t mask, vint8mf8_t op1, vint8mf8_t op2, size_t vl) {
  return vsub_vv_i8mf8_m(mask, op1, op2, vl);
}

vint8mf8_t test_vsub_vx_i8mf8_m(vbool64_t mask, vint8mf8_t op1, int8_t op2, size_t vl) {
  return vsub_vx_i8mf8_m(mask, op1, op2, vl);
}

vint8mf4_t test_vsub_vv_i8mf4_m(vbool32_t mask, vint8mf4_t op1, vint8mf4_t op2, size_t vl) {
  return vsub_vv_i8mf4_m(mask, op1, op2, vl);
}

vint8mf4_t test_vsub_vx_i8mf4_m(vbool32_t mask, vint8mf4_t op1, int8_t op2, size_t vl) {
  return vsub_vx_i8mf4_m(mask, op1, op2, vl);
}

vint8mf2_t test_vsub_vv_i8mf2_m(vbool16_t mask, vint8mf2_t op1, vint8mf2_t op2, size_t vl) {
  return vsub_vv_i8mf2_m(mask, op1, op2, vl);
}

vint8mf2_t test_vsub_vx_i8mf2_m(vbool16_t mask, vint8mf2_t op1, int8_t op2, size_t vl) {
  return vsub_vx_i8mf2_m(mask, op1, op2, vl);
}

vint8m1_t test_vsub_vv_i8m1_m(vbool8_t mask, vint8m1_t op1, vint8m1_t op2, size_t vl) {
  return vsub_vv_i8m1_m(mask, op1, op2, vl);
}

vint8m1_t test_vsub_vx_i8m1_m(vbool8_t mask, vint8m1_t op1, int8_t op2, size_t vl) {
  return vsub_vx_i8m1_m(mask, op1, op2, vl);
}

vint8m2_t test_vsub_vv_i8m2_m(vbool4_t mask, vint8m2_t op1, vint8m2_t op2, size_t vl) {
  return vsub_vv_i8m2_m(mask, op1, op2, vl);
}

vint8m2_t test_vsub_vx_i8m2_m(vbool4_t mask, vint8m2_t op1, int8_t op2, size_t vl) {
  return vsub_vx_i8m2_m(mask, op1, op2, vl);
}

vint8m4_t test_vsub_vv_i8m4_m(vbool2_t mask, vint8m4_t op1, vint8m4_t op2, size_t vl) {
  return vsub_vv_i8m4_m(mask, op1, op2, vl);
}

vint8m4_t test_vsub_vx_i8m4_m(vbool2_t mask, vint8m4_t op1, int8_t op2, size_t vl) {
  return vsub_vx_i8m4_m(mask, op1, op2, vl);
}

vint8m8_t test_vsub_vv_i8m8_m(vbool1_t mask, vint8m8_t op1, vint8m8_t op2, size_t vl) {
  return vsub_vv_i8m8_m(mask, op1, op2, vl);
}

vint8m8_t test_vsub_vx_i8m8_m(vbool1_t mask, vint8m8_t op1, int8_t op2, size_t vl) {
  return vsub_vx_i8m8_m(mask, op1, op2, vl);
}

vint16mf4_t test_vsub_vv_i16mf4_m(vbool64_t mask, vint16mf4_t op1, vint16mf4_t op2, size_t vl) {
  return vsub_vv_i16mf4_m(mask, op1, op2, vl);
}

vint16mf4_t test_vsub_vx_i16mf4_m(vbool64_t mask, vint16mf4_t op1, int16_t op2, size_t vl) {
  return vsub_vx_i16mf4_m(mask, op1, op2, vl);
}

vint16mf2_t test_vsub_vv_i16mf2_m(vbool32_t mask, vint16mf2_t op1, vint16mf2_t op2, size_t vl) {
  return vsub_vv_i16mf2_m(mask, op1, op2, vl);
}

vint16mf2_t test_vsub_vx_i16mf2_m(vbool32_t mask, vint16mf2_t op1, int16_t op2, size_t vl) {
  return vsub_vx_i16mf2_m(mask, op1, op2, vl);
}

vint16m1_t test_vsub_vv_i16m1_m(vbool16_t mask, vint16m1_t op1, vint16m1_t op2, size_t vl) {
  return vsub_vv_i16m1_m(mask, op1, op2, vl);
}

vint16m1_t test_vsub_vx_i16m1_m(vbool16_t mask, vint16m1_t op1, int16_t op2, size_t vl) {
  return vsub_vx_i16m1_m(mask, op1, op2, vl);
}

vint16m2_t test_vsub_vv_i16m2_m(vbool8_t mask, vint16m2_t op1, vint16m2_t op2, size_t vl) {
  return vsub_vv_i16m2_m(mask, op1, op2, vl);
}

vint16m2_t test_vsub_vx_i16m2_m(vbool8_t mask, vint16m2_t op1, int16_t op2, size_t vl) {
  return vsub_vx_i16m2_m(mask, op1, op2, vl);
}

vint16m4_t test_vsub_vv_i16m4_m(vbool4_t mask, vint16m4_t op1, vint16m4_t op2, size_t vl) {
  return vsub_vv_i16m4_m(mask, op1, op2, vl);
}

vint16m4_t test_vsub_vx_i16m4_m(vbool4_t mask, vint16m4_t op1, int16_t op2, size_t vl) {
  return vsub_vx_i16m4_m(mask, op1, op2, vl);
}

vint16m8_t test_vsub_vv_i16m8_m(vbool2_t mask, vint16m8_t op1, vint16m8_t op2, size_t vl) {
  return vsub_vv_i16m8_m(mask, op1, op2, vl);
}

vint16m8_t test_vsub_vx_i16m8_m(vbool2_t mask, vint16m8_t op1, int16_t op2, size_t vl) {
  return vsub_vx_i16m8_m(mask, op1, op2, vl);
}

vint32mf2_t test_vsub_vv_i32mf2_m(vbool64_t mask, vint32mf2_t op1, vint32mf2_t op2, size_t vl) {
  return vsub_vv_i32mf2_m(mask, op1, op2, vl);
}

vint32mf2_t test_vsub_vx_i32mf2_m(vbool64_t mask, vint32mf2_t op1, int32_t op2, size_t vl) {
  return vsub_vx_i32mf2_m(mask, op1, op2, vl);
}

vint32m1_t test_vsub_vv_i32m1_m(vbool32_t mask, vint32m1_t op1, vint32m1_t op2, size_t vl) {
  return vsub_vv_i32m1_m(mask, op1, op2, vl);
}

vint32m1_t test_vsub_vx_i32m1_m(vbool32_t mask, vint32m1_t op1, int32_t op2, size_t vl) {
  return vsub_vx_i32m1_m(mask, op1, op2, vl);
}

vint32m2_t test_vsub_vv_i32m2_m(vbool16_t mask, vint32m2_t op1, vint32m2_t op2, size_t vl) {
  return vsub_vv_i32m2_m(mask, op1, op2, vl);
}

vint32m2_t test_vsub_vx_i32m2_m(vbool16_t mask, vint32m2_t op1, int32_t op2, size_t vl) {
  return vsub_vx_i32m2_m(mask, op1, op2, vl);
}

vint32m4_t test_vsub_vv_i32m4_m(vbool8_t mask, vint32m4_t op1, vint32m4_t op2, size_t vl) {
  return vsub_vv_i32m4_m(mask, op1, op2, vl);
}

vint32m4_t test_vsub_vx_i32m4_m(vbool8_t mask, vint32m4_t op1, int32_t op2, size_t vl) {
  return vsub_vx_i32m4_m(mask, op1, op2, vl);
}

vint32m8_t test_vsub_vv_i32m8_m(vbool4_t mask, vint32m8_t op1, vint32m8_t op2, size_t vl) {
  return vsub_vv_i32m8_m(mask, op1, op2, vl);
}

vint32m8_t test_vsub_vx_i32m8_m(vbool4_t mask, vint32m8_t op1, int32_t op2, size_t vl) {
  return vsub_vx_i32m8_m(mask, op1, op2, vl);
}

vint64m1_t test_vsub_vv_i64m1_m(vbool64_t mask, vint64m1_t op1, vint64m1_t op2, size_t vl) {
  return vsub_vv_i64m1_m(mask, op1, op2, vl);
}

vint64m1_t test_vsub_vx_i64m1_m(vbool64_t mask, vint64m1_t op1, int64_t op2, size_t vl) {
  return vsub_vx_i64m1_m(mask, op1, op2, vl);
}

vint64m2_t test_vsub_vv_i64m2_m(vbool32_t mask, vint64m2_t op1, vint64m2_t op2, size_t vl) {
  return vsub_vv_i64m2_m(mask, op1, op2, vl);
}

vint64m2_t test_vsub_vx_i64m2_m(vbool32_t mask, vint64m2_t op1, int64_t op2, size_t vl) {
  return vsub_vx_i64m2_m(mask, op1, op2, vl);
}

vint64m4_t test_vsub_vv_i64m4_m(vbool16_t mask, vint64m4_t op1, vint64m4_t op2, size_t vl) {
  return vsub_vv_i64m4_m(mask, op1, op2, vl);
}

vint64m4_t test_vsub_vx_i64m4_m(vbool16_t mask, vint64m4_t op1, int64_t op2, size_t vl) {
  return vsub_vx_i64m4_m(mask, op1, op2, vl);
}

vint64m8_t test_vsub_vv_i64m8_m(vbool8_t mask, vint64m8_t op1, vint64m8_t op2, size_t vl) {
  return vsub_vv_i64m8_m(mask, op1, op2, vl);
}

vint64m8_t test_vsub_vx_i64m8_m(vbool8_t mask, vint64m8_t op1, int64_t op2, size_t vl) {
  return vsub_vx_i64m8_m(mask, op1, op2, vl);
}

vuint8mf8_t test_vsub_vv_u8mf8_m(vbool64_t mask, vuint8mf8_t op1, vuint8mf8_t op2, size_t vl) {
  return vsub_vv_u8mf8_m(mask, op1, op2, vl);
}

vuint8mf8_t test_vsub_vx_u8mf8_m(vbool64_t mask, vuint8mf8_t op1, uint8_t op2, size_t vl) {
  return vsub_vx_u8mf8_m(mask, op1, op2, vl);
}

vuint8mf4_t test_vsub_vv_u8mf4_m(vbool32_t mask, vuint8mf4_t op1, vuint8mf4_t op2, size_t vl) {
  return vsub_vv_u8mf4_m(mask, op1, op2, vl);
}

vuint8mf4_t test_vsub_vx_u8mf4_m(vbool32_t mask, vuint8mf4_t op1, uint8_t op2, size_t vl) {
  return vsub_vx_u8mf4_m(mask, op1, op2, vl);
}

vuint8mf2_t test_vsub_vv_u8mf2_m(vbool16_t mask, vuint8mf2_t op1, vuint8mf2_t op2, size_t vl) {
  return vsub_vv_u8mf2_m(mask, op1, op2, vl);
}

vuint8mf2_t test_vsub_vx_u8mf2_m(vbool16_t mask, vuint8mf2_t op1, uint8_t op2, size_t vl) {
  return vsub_vx_u8mf2_m(mask, op1, op2, vl);
}

vuint8m1_t test_vsub_vv_u8m1_m(vbool8_t mask, vuint8m1_t op1, vuint8m1_t op2, size_t vl) {
  return vsub_vv_u8m1_m(mask, op1, op2, vl);
}

vuint8m1_t test_vsub_vx_u8m1_m(vbool8_t mask, vuint8m1_t op1, uint8_t op2, size_t vl) {
  return vsub_vx_u8m1_m(mask, op1, op2, vl);
}

vuint8m2_t test_vsub_vv_u8m2_m(vbool4_t mask, vuint8m2_t op1, vuint8m2_t op2, size_t vl) {
  return vsub_vv_u8m2_m(mask, op1, op2, vl);
}

vuint8m2_t test_vsub_vx_u8m2_m(vbool4_t mask, vuint8m2_t op1, uint8_t op2, size_t vl) {
  return vsub_vx_u8m2_m(mask, op1, op2, vl);
}

vuint8m4_t test_vsub_vv_u8m4_m(vbool2_t mask, vuint8m4_t op1, vuint8m4_t op2, size_t vl) {
  return vsub_vv_u8m4_m(mask, op1, op2, vl);
}

vuint8m4_t test_vsub_vx_u8m4_m(vbool2_t mask, vuint8m4_t op1, uint8_t op2, size_t vl) {
  return vsub_vx_u8m4_m(mask, op1, op2, vl);
}

vuint8m8_t test_vsub_vv_u8m8_m(vbool1_t mask, vuint8m8_t op1, vuint8m8_t op2, size_t vl) {
  return vsub_vv_u8m8_m(mask, op1, op2, vl);
}

vuint8m8_t test_vsub_vx_u8m8_m(vbool1_t mask, vuint8m8_t op1, uint8_t op2, size_t vl) {
  return vsub_vx_u8m8_m(mask, op1, op2, vl);
}

vuint16mf4_t test_vsub_vv_u16mf4_m(vbool64_t mask, vuint16mf4_t op1, vuint16mf4_t op2, size_t vl) {
  return vsub_vv_u16mf4_m(mask, op1, op2, vl);
}

vuint16mf4_t test_vsub_vx_u16mf4_m(vbool64_t mask, vuint16mf4_t op1, uint16_t op2, size_t vl) {
  return vsub_vx_u16mf4_m(mask, op1, op2, vl);
}

vuint16mf2_t test_vsub_vv_u16mf2_m(vbool32_t mask, vuint16mf2_t op1, vuint16mf2_t op2, size_t vl) {
  return vsub_vv_u16mf2_m(mask, op1, op2, vl);
}

vuint16mf2_t test_vsub_vx_u16mf2_m(vbool32_t mask, vuint16mf2_t op1, uint16_t op2, size_t vl) {
  return vsub_vx_u16mf2_m(mask, op1, op2, vl);
}

vuint16m1_t test_vsub_vv_u16m1_m(vbool16_t mask, vuint16m1_t op1, vuint16m1_t op2, size_t vl) {
  return vsub_vv_u16m1_m(mask, op1, op2, vl);
}

vuint16m1_t test_vsub_vx_u16m1_m(vbool16_t mask, vuint16m1_t op1, uint16_t op2, size_t vl) {
  return vsub_vx_u16m1_m(mask, op1, op2, vl);
}

vuint16m2_t test_vsub_vv_u16m2_m(vbool8_t mask, vuint16m2_t op1, vuint16m2_t op2, size_t vl) {
  return vsub_vv_u16m2_m(mask, op1, op2, vl);
}

vuint16m2_t test_vsub_vx_u16m2_m(vbool8_t mask, vuint16m2_t op1, uint16_t op2, size_t vl) {
  return vsub_vx_u16m2_m(mask, op1, op2, vl);
}

vuint16m4_t test_vsub_vv_u16m4_m(vbool4_t mask, vuint16m4_t op1, vuint16m4_t op2, size_t vl) {
  return vsub_vv_u16m4_m(mask, op1, op2, vl);
}

vuint16m4_t test_vsub_vx_u16m4_m(vbool4_t mask, vuint16m4_t op1, uint16_t op2, size_t vl) {
  return vsub_vx_u16m4_m(mask, op1, op2, vl);
}

vuint16m8_t test_vsub_vv_u16m8_m(vbool2_t mask, vuint16m8_t op1, vuint16m8_t op2, size_t vl) {
  return vsub_vv_u16m8_m(mask, op1, op2, vl);
}

vuint16m8_t test_vsub_vx_u16m8_m(vbool2_t mask, vuint16m8_t op1, uint16_t op2, size_t vl) {
  return vsub_vx_u16m8_m(mask, op1, op2, vl);
}

vuint32mf2_t test_vsub_vv_u32mf2_m(vbool64_t mask, vuint32mf2_t op1, vuint32mf2_t op2, size_t vl) {
  return vsub_vv_u32mf2_m(mask, op1, op2, vl);
}

vuint32mf2_t test_vsub_vx_u32mf2_m(vbool64_t mask, vuint32mf2_t op1, uint32_t op2, size_t vl) {
  return vsub_vx_u32mf2_m(mask, op1, op2, vl);
}

vuint32m1_t test_vsub_vv_u32m1_m(vbool32_t mask, vuint32m1_t op1, vuint32m1_t op2, size_t vl) {
  return vsub_vv_u32m1_m(mask, op1, op2, vl);
}

vuint32m1_t test_vsub_vx_u32m1_m(vbool32_t mask, vuint32m1_t op1, uint32_t op2, size_t vl) {
  return vsub_vx_u32m1_m(mask, op1, op2, vl);
}

vuint32m2_t test_vsub_vv_u32m2_m(vbool16_t mask, vuint32m2_t op1, vuint32m2_t op2, size_t vl) {
  return vsub_vv_u32m2_m(mask, op1, op2, vl);
}

vuint32m2_t test_vsub_vx_u32m2_m(vbool16_t mask, vuint32m2_t op1, uint32_t op2, size_t vl) {
  return vsub_vx_u32m2_m(mask, op1, op2, vl);
}

vuint32m4_t test_vsub_vv_u32m4_m(vbool8_t mask, vuint32m4_t op1, vuint32m4_t op2, size_t vl) {
  return vsub_vv_u32m4_m(mask, op1, op2, vl);
}

vuint32m4_t test_vsub_vx_u32m4_m(vbool8_t mask, vuint32m4_t op1, uint32_t op2, size_t vl) {
  return vsub_vx_u32m4_m(mask, op1, op2, vl);
}

vuint32m8_t test_vsub_vv_u32m8_m(vbool4_t mask, vuint32m8_t op1, vuint32m8_t op2, size_t vl) {
  return vsub_vv_u32m8_m(mask, op1, op2, vl);
}

vuint32m8_t test_vsub_vx_u32m8_m(vbool4_t mask, vuint32m8_t op1, uint32_t op2, size_t vl) {
  return vsub_vx_u32m8_m(mask, op1, op2, vl);
}

vuint64m1_t test_vsub_vv_u64m1_m(vbool64_t mask, vuint64m1_t op1, vuint64m1_t op2, size_t vl) {
  return vsub_vv_u64m1_m(mask, op1, op2, vl);
}

vuint64m1_t test_vsub_vx_u64m1_m(vbool64_t mask, vuint64m1_t op1, uint64_t op2, size_t vl) {
  return vsub_vx_u64m1_m(mask, op1, op2, vl);
}

vuint64m2_t test_vsub_vv_u64m2_m(vbool32_t mask, vuint64m2_t op1, vuint64m2_t op2, size_t vl) {
  return vsub_vv_u64m2_m(mask, op1, op2, vl);
}

vuint64m2_t test_vsub_vx_u64m2_m(vbool32_t mask, vuint64m2_t op1, uint64_t op2, size_t vl) {
  return vsub_vx_u64m2_m(mask, op1, op2, vl);
}

vuint64m4_t test_vsub_vv_u64m4_m(vbool16_t mask, vuint64m4_t op1, vuint64m4_t op2, size_t vl) {
  return vsub_vv_u64m4_m(mask, op1, op2, vl);
}

vuint64m4_t test_vsub_vx_u64m4_m(vbool16_t mask, vuint64m4_t op1, uint64_t op2, size_t vl) {
  return vsub_vx_u64m4_m(mask, op1, op2, vl);
}

vuint64m8_t test_vsub_vv_u64m8_m(vbool8_t mask, vuint64m8_t op1, vuint64m8_t op2, size_t vl) {
  return vsub_vv_u64m8_m(mask, op1, op2, vl);
}

vuint64m8_t test_vsub_vx_u64m8_m(vbool8_t mask, vuint64m8_t op1, uint64_t op2, size_t vl) {
  return vsub_vx_u64m8_m(mask, op1, op2, vl);
}

