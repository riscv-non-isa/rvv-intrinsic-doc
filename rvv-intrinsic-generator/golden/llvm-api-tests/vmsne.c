// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -target-feature +zfh \
// RUN:   -target-feature +experimental-zvfh -disable-O0-optnone  \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

vbool64_t test_vmsne_vv_i8mf8_b64(vint8mf8_t op1, vint8mf8_t op2, size_t vl) {
  return vmsne_vv_i8mf8_b64(op1, op2, vl);
}

vbool64_t test_vmsne_vx_i8mf8_b64(vint8mf8_t op1, int8_t op2, size_t vl) {
  return vmsne_vx_i8mf8_b64(op1, op2, vl);
}

vbool32_t test_vmsne_vv_i8mf4_b32(vint8mf4_t op1, vint8mf4_t op2, size_t vl) {
  return vmsne_vv_i8mf4_b32(op1, op2, vl);
}

vbool32_t test_vmsne_vx_i8mf4_b32(vint8mf4_t op1, int8_t op2, size_t vl) {
  return vmsne_vx_i8mf4_b32(op1, op2, vl);
}

vbool16_t test_vmsne_vv_i8mf2_b16(vint8mf2_t op1, vint8mf2_t op2, size_t vl) {
  return vmsne_vv_i8mf2_b16(op1, op2, vl);
}

vbool16_t test_vmsne_vx_i8mf2_b16(vint8mf2_t op1, int8_t op2, size_t vl) {
  return vmsne_vx_i8mf2_b16(op1, op2, vl);
}

vbool8_t test_vmsne_vv_i8m1_b8(vint8m1_t op1, vint8m1_t op2, size_t vl) {
  return vmsne_vv_i8m1_b8(op1, op2, vl);
}

vbool8_t test_vmsne_vx_i8m1_b8(vint8m1_t op1, int8_t op2, size_t vl) {
  return vmsne_vx_i8m1_b8(op1, op2, vl);
}

vbool4_t test_vmsne_vv_i8m2_b4(vint8m2_t op1, vint8m2_t op2, size_t vl) {
  return vmsne_vv_i8m2_b4(op1, op2, vl);
}

vbool4_t test_vmsne_vx_i8m2_b4(vint8m2_t op1, int8_t op2, size_t vl) {
  return vmsne_vx_i8m2_b4(op1, op2, vl);
}

vbool2_t test_vmsne_vv_i8m4_b2(vint8m4_t op1, vint8m4_t op2, size_t vl) {
  return vmsne_vv_i8m4_b2(op1, op2, vl);
}

vbool2_t test_vmsne_vx_i8m4_b2(vint8m4_t op1, int8_t op2, size_t vl) {
  return vmsne_vx_i8m4_b2(op1, op2, vl);
}

vbool1_t test_vmsne_vv_i8m8_b1(vint8m8_t op1, vint8m8_t op2, size_t vl) {
  return vmsne_vv_i8m8_b1(op1, op2, vl);
}

vbool1_t test_vmsne_vx_i8m8_b1(vint8m8_t op1, int8_t op2, size_t vl) {
  return vmsne_vx_i8m8_b1(op1, op2, vl);
}

vbool64_t test_vmsne_vv_i16mf4_b64(vint16mf4_t op1, vint16mf4_t op2, size_t vl) {
  return vmsne_vv_i16mf4_b64(op1, op2, vl);
}

vbool64_t test_vmsne_vx_i16mf4_b64(vint16mf4_t op1, int16_t op2, size_t vl) {
  return vmsne_vx_i16mf4_b64(op1, op2, vl);
}

vbool32_t test_vmsne_vv_i16mf2_b32(vint16mf2_t op1, vint16mf2_t op2, size_t vl) {
  return vmsne_vv_i16mf2_b32(op1, op2, vl);
}

vbool32_t test_vmsne_vx_i16mf2_b32(vint16mf2_t op1, int16_t op2, size_t vl) {
  return vmsne_vx_i16mf2_b32(op1, op2, vl);
}

vbool16_t test_vmsne_vv_i16m1_b16(vint16m1_t op1, vint16m1_t op2, size_t vl) {
  return vmsne_vv_i16m1_b16(op1, op2, vl);
}

vbool16_t test_vmsne_vx_i16m1_b16(vint16m1_t op1, int16_t op2, size_t vl) {
  return vmsne_vx_i16m1_b16(op1, op2, vl);
}

vbool8_t test_vmsne_vv_i16m2_b8(vint16m2_t op1, vint16m2_t op2, size_t vl) {
  return vmsne_vv_i16m2_b8(op1, op2, vl);
}

vbool8_t test_vmsne_vx_i16m2_b8(vint16m2_t op1, int16_t op2, size_t vl) {
  return vmsne_vx_i16m2_b8(op1, op2, vl);
}

vbool4_t test_vmsne_vv_i16m4_b4(vint16m4_t op1, vint16m4_t op2, size_t vl) {
  return vmsne_vv_i16m4_b4(op1, op2, vl);
}

vbool4_t test_vmsne_vx_i16m4_b4(vint16m4_t op1, int16_t op2, size_t vl) {
  return vmsne_vx_i16m4_b4(op1, op2, vl);
}

vbool2_t test_vmsne_vv_i16m8_b2(vint16m8_t op1, vint16m8_t op2, size_t vl) {
  return vmsne_vv_i16m8_b2(op1, op2, vl);
}

vbool2_t test_vmsne_vx_i16m8_b2(vint16m8_t op1, int16_t op2, size_t vl) {
  return vmsne_vx_i16m8_b2(op1, op2, vl);
}

vbool64_t test_vmsne_vv_i32mf2_b64(vint32mf2_t op1, vint32mf2_t op2, size_t vl) {
  return vmsne_vv_i32mf2_b64(op1, op2, vl);
}

vbool64_t test_vmsne_vx_i32mf2_b64(vint32mf2_t op1, int32_t op2, size_t vl) {
  return vmsne_vx_i32mf2_b64(op1, op2, vl);
}

vbool32_t test_vmsne_vv_i32m1_b32(vint32m1_t op1, vint32m1_t op2, size_t vl) {
  return vmsne_vv_i32m1_b32(op1, op2, vl);
}

vbool32_t test_vmsne_vx_i32m1_b32(vint32m1_t op1, int32_t op2, size_t vl) {
  return vmsne_vx_i32m1_b32(op1, op2, vl);
}

vbool16_t test_vmsne_vv_i32m2_b16(vint32m2_t op1, vint32m2_t op2, size_t vl) {
  return vmsne_vv_i32m2_b16(op1, op2, vl);
}

vbool16_t test_vmsne_vx_i32m2_b16(vint32m2_t op1, int32_t op2, size_t vl) {
  return vmsne_vx_i32m2_b16(op1, op2, vl);
}

vbool8_t test_vmsne_vv_i32m4_b8(vint32m4_t op1, vint32m4_t op2, size_t vl) {
  return vmsne_vv_i32m4_b8(op1, op2, vl);
}

vbool8_t test_vmsne_vx_i32m4_b8(vint32m4_t op1, int32_t op2, size_t vl) {
  return vmsne_vx_i32m4_b8(op1, op2, vl);
}

vbool4_t test_vmsne_vv_i32m8_b4(vint32m8_t op1, vint32m8_t op2, size_t vl) {
  return vmsne_vv_i32m8_b4(op1, op2, vl);
}

vbool4_t test_vmsne_vx_i32m8_b4(vint32m8_t op1, int32_t op2, size_t vl) {
  return vmsne_vx_i32m8_b4(op1, op2, vl);
}

vbool64_t test_vmsne_vv_i64m1_b64(vint64m1_t op1, vint64m1_t op2, size_t vl) {
  return vmsne_vv_i64m1_b64(op1, op2, vl);
}

vbool64_t test_vmsne_vx_i64m1_b64(vint64m1_t op1, int64_t op2, size_t vl) {
  return vmsne_vx_i64m1_b64(op1, op2, vl);
}

vbool32_t test_vmsne_vv_i64m2_b32(vint64m2_t op1, vint64m2_t op2, size_t vl) {
  return vmsne_vv_i64m2_b32(op1, op2, vl);
}

vbool32_t test_vmsne_vx_i64m2_b32(vint64m2_t op1, int64_t op2, size_t vl) {
  return vmsne_vx_i64m2_b32(op1, op2, vl);
}

vbool16_t test_vmsne_vv_i64m4_b16(vint64m4_t op1, vint64m4_t op2, size_t vl) {
  return vmsne_vv_i64m4_b16(op1, op2, vl);
}

vbool16_t test_vmsne_vx_i64m4_b16(vint64m4_t op1, int64_t op2, size_t vl) {
  return vmsne_vx_i64m4_b16(op1, op2, vl);
}

vbool8_t test_vmsne_vv_i64m8_b8(vint64m8_t op1, vint64m8_t op2, size_t vl) {
  return vmsne_vv_i64m8_b8(op1, op2, vl);
}

vbool8_t test_vmsne_vx_i64m8_b8(vint64m8_t op1, int64_t op2, size_t vl) {
  return vmsne_vx_i64m8_b8(op1, op2, vl);
}

vbool64_t test_vmsne_vv_u8mf8_b64(vuint8mf8_t op1, vuint8mf8_t op2, size_t vl) {
  return vmsne_vv_u8mf8_b64(op1, op2, vl);
}

vbool64_t test_vmsne_vx_u8mf8_b64(vuint8mf8_t op1, uint8_t op2, size_t vl) {
  return vmsne_vx_u8mf8_b64(op1, op2, vl);
}

vbool32_t test_vmsne_vv_u8mf4_b32(vuint8mf4_t op1, vuint8mf4_t op2, size_t vl) {
  return vmsne_vv_u8mf4_b32(op1, op2, vl);
}

vbool32_t test_vmsne_vx_u8mf4_b32(vuint8mf4_t op1, uint8_t op2, size_t vl) {
  return vmsne_vx_u8mf4_b32(op1, op2, vl);
}

vbool16_t test_vmsne_vv_u8mf2_b16(vuint8mf2_t op1, vuint8mf2_t op2, size_t vl) {
  return vmsne_vv_u8mf2_b16(op1, op2, vl);
}

vbool16_t test_vmsne_vx_u8mf2_b16(vuint8mf2_t op1, uint8_t op2, size_t vl) {
  return vmsne_vx_u8mf2_b16(op1, op2, vl);
}

vbool8_t test_vmsne_vv_u8m1_b8(vuint8m1_t op1, vuint8m1_t op2, size_t vl) {
  return vmsne_vv_u8m1_b8(op1, op2, vl);
}

vbool8_t test_vmsne_vx_u8m1_b8(vuint8m1_t op1, uint8_t op2, size_t vl) {
  return vmsne_vx_u8m1_b8(op1, op2, vl);
}

vbool4_t test_vmsne_vv_u8m2_b4(vuint8m2_t op1, vuint8m2_t op2, size_t vl) {
  return vmsne_vv_u8m2_b4(op1, op2, vl);
}

vbool4_t test_vmsne_vx_u8m2_b4(vuint8m2_t op1, uint8_t op2, size_t vl) {
  return vmsne_vx_u8m2_b4(op1, op2, vl);
}

vbool2_t test_vmsne_vv_u8m4_b2(vuint8m4_t op1, vuint8m4_t op2, size_t vl) {
  return vmsne_vv_u8m4_b2(op1, op2, vl);
}

vbool2_t test_vmsne_vx_u8m4_b2(vuint8m4_t op1, uint8_t op2, size_t vl) {
  return vmsne_vx_u8m4_b2(op1, op2, vl);
}

vbool1_t test_vmsne_vv_u8m8_b1(vuint8m8_t op1, vuint8m8_t op2, size_t vl) {
  return vmsne_vv_u8m8_b1(op1, op2, vl);
}

vbool1_t test_vmsne_vx_u8m8_b1(vuint8m8_t op1, uint8_t op2, size_t vl) {
  return vmsne_vx_u8m8_b1(op1, op2, vl);
}

vbool64_t test_vmsne_vv_u16mf4_b64(vuint16mf4_t op1, vuint16mf4_t op2, size_t vl) {
  return vmsne_vv_u16mf4_b64(op1, op2, vl);
}

vbool64_t test_vmsne_vx_u16mf4_b64(vuint16mf4_t op1, uint16_t op2, size_t vl) {
  return vmsne_vx_u16mf4_b64(op1, op2, vl);
}

vbool32_t test_vmsne_vv_u16mf2_b32(vuint16mf2_t op1, vuint16mf2_t op2, size_t vl) {
  return vmsne_vv_u16mf2_b32(op1, op2, vl);
}

vbool32_t test_vmsne_vx_u16mf2_b32(vuint16mf2_t op1, uint16_t op2, size_t vl) {
  return vmsne_vx_u16mf2_b32(op1, op2, vl);
}

vbool16_t test_vmsne_vv_u16m1_b16(vuint16m1_t op1, vuint16m1_t op2, size_t vl) {
  return vmsne_vv_u16m1_b16(op1, op2, vl);
}

vbool16_t test_vmsne_vx_u16m1_b16(vuint16m1_t op1, uint16_t op2, size_t vl) {
  return vmsne_vx_u16m1_b16(op1, op2, vl);
}

vbool8_t test_vmsne_vv_u16m2_b8(vuint16m2_t op1, vuint16m2_t op2, size_t vl) {
  return vmsne_vv_u16m2_b8(op1, op2, vl);
}

vbool8_t test_vmsne_vx_u16m2_b8(vuint16m2_t op1, uint16_t op2, size_t vl) {
  return vmsne_vx_u16m2_b8(op1, op2, vl);
}

vbool4_t test_vmsne_vv_u16m4_b4(vuint16m4_t op1, vuint16m4_t op2, size_t vl) {
  return vmsne_vv_u16m4_b4(op1, op2, vl);
}

vbool4_t test_vmsne_vx_u16m4_b4(vuint16m4_t op1, uint16_t op2, size_t vl) {
  return vmsne_vx_u16m4_b4(op1, op2, vl);
}

vbool2_t test_vmsne_vv_u16m8_b2(vuint16m8_t op1, vuint16m8_t op2, size_t vl) {
  return vmsne_vv_u16m8_b2(op1, op2, vl);
}

vbool2_t test_vmsne_vx_u16m8_b2(vuint16m8_t op1, uint16_t op2, size_t vl) {
  return vmsne_vx_u16m8_b2(op1, op2, vl);
}

vbool64_t test_vmsne_vv_u32mf2_b64(vuint32mf2_t op1, vuint32mf2_t op2, size_t vl) {
  return vmsne_vv_u32mf2_b64(op1, op2, vl);
}

vbool64_t test_vmsne_vx_u32mf2_b64(vuint32mf2_t op1, uint32_t op2, size_t vl) {
  return vmsne_vx_u32mf2_b64(op1, op2, vl);
}

vbool32_t test_vmsne_vv_u32m1_b32(vuint32m1_t op1, vuint32m1_t op2, size_t vl) {
  return vmsne_vv_u32m1_b32(op1, op2, vl);
}

vbool32_t test_vmsne_vx_u32m1_b32(vuint32m1_t op1, uint32_t op2, size_t vl) {
  return vmsne_vx_u32m1_b32(op1, op2, vl);
}

vbool16_t test_vmsne_vv_u32m2_b16(vuint32m2_t op1, vuint32m2_t op2, size_t vl) {
  return vmsne_vv_u32m2_b16(op1, op2, vl);
}

vbool16_t test_vmsne_vx_u32m2_b16(vuint32m2_t op1, uint32_t op2, size_t vl) {
  return vmsne_vx_u32m2_b16(op1, op2, vl);
}

vbool8_t test_vmsne_vv_u32m4_b8(vuint32m4_t op1, vuint32m4_t op2, size_t vl) {
  return vmsne_vv_u32m4_b8(op1, op2, vl);
}

vbool8_t test_vmsne_vx_u32m4_b8(vuint32m4_t op1, uint32_t op2, size_t vl) {
  return vmsne_vx_u32m4_b8(op1, op2, vl);
}

vbool4_t test_vmsne_vv_u32m8_b4(vuint32m8_t op1, vuint32m8_t op2, size_t vl) {
  return vmsne_vv_u32m8_b4(op1, op2, vl);
}

vbool4_t test_vmsne_vx_u32m8_b4(vuint32m8_t op1, uint32_t op2, size_t vl) {
  return vmsne_vx_u32m8_b4(op1, op2, vl);
}

vbool64_t test_vmsne_vv_u64m1_b64(vuint64m1_t op1, vuint64m1_t op2, size_t vl) {
  return vmsne_vv_u64m1_b64(op1, op2, vl);
}

vbool64_t test_vmsne_vx_u64m1_b64(vuint64m1_t op1, uint64_t op2, size_t vl) {
  return vmsne_vx_u64m1_b64(op1, op2, vl);
}

vbool32_t test_vmsne_vv_u64m2_b32(vuint64m2_t op1, vuint64m2_t op2, size_t vl) {
  return vmsne_vv_u64m2_b32(op1, op2, vl);
}

vbool32_t test_vmsne_vx_u64m2_b32(vuint64m2_t op1, uint64_t op2, size_t vl) {
  return vmsne_vx_u64m2_b32(op1, op2, vl);
}

vbool16_t test_vmsne_vv_u64m4_b16(vuint64m4_t op1, vuint64m4_t op2, size_t vl) {
  return vmsne_vv_u64m4_b16(op1, op2, vl);
}

vbool16_t test_vmsne_vx_u64m4_b16(vuint64m4_t op1, uint64_t op2, size_t vl) {
  return vmsne_vx_u64m4_b16(op1, op2, vl);
}

vbool8_t test_vmsne_vv_u64m8_b8(vuint64m8_t op1, vuint64m8_t op2, size_t vl) {
  return vmsne_vv_u64m8_b8(op1, op2, vl);
}

vbool8_t test_vmsne_vx_u64m8_b8(vuint64m8_t op1, uint64_t op2, size_t vl) {
  return vmsne_vx_u64m8_b8(op1, op2, vl);
}

vbool64_t test_vmsne_vv_i8mf8_b64_m(vbool64_t mask, vbool64_t maskedoff, vint8mf8_t op1, vint8mf8_t op2, size_t vl) {
  return vmsne_vv_i8mf8_b64_m(mask, maskedoff, op1, op2, vl);
}

vbool64_t test_vmsne_vx_i8mf8_b64_m(vbool64_t mask, vbool64_t maskedoff, vint8mf8_t op1, int8_t op2, size_t vl) {
  return vmsne_vx_i8mf8_b64_m(mask, maskedoff, op1, op2, vl);
}

vbool32_t test_vmsne_vv_i8mf4_b32_m(vbool32_t mask, vbool32_t maskedoff, vint8mf4_t op1, vint8mf4_t op2, size_t vl) {
  return vmsne_vv_i8mf4_b32_m(mask, maskedoff, op1, op2, vl);
}

vbool32_t test_vmsne_vx_i8mf4_b32_m(vbool32_t mask, vbool32_t maskedoff, vint8mf4_t op1, int8_t op2, size_t vl) {
  return vmsne_vx_i8mf4_b32_m(mask, maskedoff, op1, op2, vl);
}

vbool16_t test_vmsne_vv_i8mf2_b16_m(vbool16_t mask, vbool16_t maskedoff, vint8mf2_t op1, vint8mf2_t op2, size_t vl) {
  return vmsne_vv_i8mf2_b16_m(mask, maskedoff, op1, op2, vl);
}

vbool16_t test_vmsne_vx_i8mf2_b16_m(vbool16_t mask, vbool16_t maskedoff, vint8mf2_t op1, int8_t op2, size_t vl) {
  return vmsne_vx_i8mf2_b16_m(mask, maskedoff, op1, op2, vl);
}

vbool8_t test_vmsne_vv_i8m1_b8_m(vbool8_t mask, vbool8_t maskedoff, vint8m1_t op1, vint8m1_t op2, size_t vl) {
  return vmsne_vv_i8m1_b8_m(mask, maskedoff, op1, op2, vl);
}

vbool8_t test_vmsne_vx_i8m1_b8_m(vbool8_t mask, vbool8_t maskedoff, vint8m1_t op1, int8_t op2, size_t vl) {
  return vmsne_vx_i8m1_b8_m(mask, maskedoff, op1, op2, vl);
}

vbool4_t test_vmsne_vv_i8m2_b4_m(vbool4_t mask, vbool4_t maskedoff, vint8m2_t op1, vint8m2_t op2, size_t vl) {
  return vmsne_vv_i8m2_b4_m(mask, maskedoff, op1, op2, vl);
}

vbool4_t test_vmsne_vx_i8m2_b4_m(vbool4_t mask, vbool4_t maskedoff, vint8m2_t op1, int8_t op2, size_t vl) {
  return vmsne_vx_i8m2_b4_m(mask, maskedoff, op1, op2, vl);
}

vbool2_t test_vmsne_vv_i8m4_b2_m(vbool2_t mask, vbool2_t maskedoff, vint8m4_t op1, vint8m4_t op2, size_t vl) {
  return vmsne_vv_i8m4_b2_m(mask, maskedoff, op1, op2, vl);
}

vbool2_t test_vmsne_vx_i8m4_b2_m(vbool2_t mask, vbool2_t maskedoff, vint8m4_t op1, int8_t op2, size_t vl) {
  return vmsne_vx_i8m4_b2_m(mask, maskedoff, op1, op2, vl);
}

vbool1_t test_vmsne_vv_i8m8_b1_m(vbool1_t mask, vbool1_t maskedoff, vint8m8_t op1, vint8m8_t op2, size_t vl) {
  return vmsne_vv_i8m8_b1_m(mask, maskedoff, op1, op2, vl);
}

vbool1_t test_vmsne_vx_i8m8_b1_m(vbool1_t mask, vbool1_t maskedoff, vint8m8_t op1, int8_t op2, size_t vl) {
  return vmsne_vx_i8m8_b1_m(mask, maskedoff, op1, op2, vl);
}

vbool64_t test_vmsne_vv_i16mf4_b64_m(vbool64_t mask, vbool64_t maskedoff, vint16mf4_t op1, vint16mf4_t op2, size_t vl) {
  return vmsne_vv_i16mf4_b64_m(mask, maskedoff, op1, op2, vl);
}

vbool64_t test_vmsne_vx_i16mf4_b64_m(vbool64_t mask, vbool64_t maskedoff, vint16mf4_t op1, int16_t op2, size_t vl) {
  return vmsne_vx_i16mf4_b64_m(mask, maskedoff, op1, op2, vl);
}

vbool32_t test_vmsne_vv_i16mf2_b32_m(vbool32_t mask, vbool32_t maskedoff, vint16mf2_t op1, vint16mf2_t op2, size_t vl) {
  return vmsne_vv_i16mf2_b32_m(mask, maskedoff, op1, op2, vl);
}

vbool32_t test_vmsne_vx_i16mf2_b32_m(vbool32_t mask, vbool32_t maskedoff, vint16mf2_t op1, int16_t op2, size_t vl) {
  return vmsne_vx_i16mf2_b32_m(mask, maskedoff, op1, op2, vl);
}

vbool16_t test_vmsne_vv_i16m1_b16_m(vbool16_t mask, vbool16_t maskedoff, vint16m1_t op1, vint16m1_t op2, size_t vl) {
  return vmsne_vv_i16m1_b16_m(mask, maskedoff, op1, op2, vl);
}

vbool16_t test_vmsne_vx_i16m1_b16_m(vbool16_t mask, vbool16_t maskedoff, vint16m1_t op1, int16_t op2, size_t vl) {
  return vmsne_vx_i16m1_b16_m(mask, maskedoff, op1, op2, vl);
}

vbool8_t test_vmsne_vv_i16m2_b8_m(vbool8_t mask, vbool8_t maskedoff, vint16m2_t op1, vint16m2_t op2, size_t vl) {
  return vmsne_vv_i16m2_b8_m(mask, maskedoff, op1, op2, vl);
}

vbool8_t test_vmsne_vx_i16m2_b8_m(vbool8_t mask, vbool8_t maskedoff, vint16m2_t op1, int16_t op2, size_t vl) {
  return vmsne_vx_i16m2_b8_m(mask, maskedoff, op1, op2, vl);
}

vbool4_t test_vmsne_vv_i16m4_b4_m(vbool4_t mask, vbool4_t maskedoff, vint16m4_t op1, vint16m4_t op2, size_t vl) {
  return vmsne_vv_i16m4_b4_m(mask, maskedoff, op1, op2, vl);
}

vbool4_t test_vmsne_vx_i16m4_b4_m(vbool4_t mask, vbool4_t maskedoff, vint16m4_t op1, int16_t op2, size_t vl) {
  return vmsne_vx_i16m4_b4_m(mask, maskedoff, op1, op2, vl);
}

vbool2_t test_vmsne_vv_i16m8_b2_m(vbool2_t mask, vbool2_t maskedoff, vint16m8_t op1, vint16m8_t op2, size_t vl) {
  return vmsne_vv_i16m8_b2_m(mask, maskedoff, op1, op2, vl);
}

vbool2_t test_vmsne_vx_i16m8_b2_m(vbool2_t mask, vbool2_t maskedoff, vint16m8_t op1, int16_t op2, size_t vl) {
  return vmsne_vx_i16m8_b2_m(mask, maskedoff, op1, op2, vl);
}

vbool64_t test_vmsne_vv_i32mf2_b64_m(vbool64_t mask, vbool64_t maskedoff, vint32mf2_t op1, vint32mf2_t op2, size_t vl) {
  return vmsne_vv_i32mf2_b64_m(mask, maskedoff, op1, op2, vl);
}

vbool64_t test_vmsne_vx_i32mf2_b64_m(vbool64_t mask, vbool64_t maskedoff, vint32mf2_t op1, int32_t op2, size_t vl) {
  return vmsne_vx_i32mf2_b64_m(mask, maskedoff, op1, op2, vl);
}

vbool32_t test_vmsne_vv_i32m1_b32_m(vbool32_t mask, vbool32_t maskedoff, vint32m1_t op1, vint32m1_t op2, size_t vl) {
  return vmsne_vv_i32m1_b32_m(mask, maskedoff, op1, op2, vl);
}

vbool32_t test_vmsne_vx_i32m1_b32_m(vbool32_t mask, vbool32_t maskedoff, vint32m1_t op1, int32_t op2, size_t vl) {
  return vmsne_vx_i32m1_b32_m(mask, maskedoff, op1, op2, vl);
}

vbool16_t test_vmsne_vv_i32m2_b16_m(vbool16_t mask, vbool16_t maskedoff, vint32m2_t op1, vint32m2_t op2, size_t vl) {
  return vmsne_vv_i32m2_b16_m(mask, maskedoff, op1, op2, vl);
}

vbool16_t test_vmsne_vx_i32m2_b16_m(vbool16_t mask, vbool16_t maskedoff, vint32m2_t op1, int32_t op2, size_t vl) {
  return vmsne_vx_i32m2_b16_m(mask, maskedoff, op1, op2, vl);
}

vbool8_t test_vmsne_vv_i32m4_b8_m(vbool8_t mask, vbool8_t maskedoff, vint32m4_t op1, vint32m4_t op2, size_t vl) {
  return vmsne_vv_i32m4_b8_m(mask, maskedoff, op1, op2, vl);
}

vbool8_t test_vmsne_vx_i32m4_b8_m(vbool8_t mask, vbool8_t maskedoff, vint32m4_t op1, int32_t op2, size_t vl) {
  return vmsne_vx_i32m4_b8_m(mask, maskedoff, op1, op2, vl);
}

vbool4_t test_vmsne_vv_i32m8_b4_m(vbool4_t mask, vbool4_t maskedoff, vint32m8_t op1, vint32m8_t op2, size_t vl) {
  return vmsne_vv_i32m8_b4_m(mask, maskedoff, op1, op2, vl);
}

vbool4_t test_vmsne_vx_i32m8_b4_m(vbool4_t mask, vbool4_t maskedoff, vint32m8_t op1, int32_t op2, size_t vl) {
  return vmsne_vx_i32m8_b4_m(mask, maskedoff, op1, op2, vl);
}

vbool64_t test_vmsne_vv_i64m1_b64_m(vbool64_t mask, vbool64_t maskedoff, vint64m1_t op1, vint64m1_t op2, size_t vl) {
  return vmsne_vv_i64m1_b64_m(mask, maskedoff, op1, op2, vl);
}

vbool64_t test_vmsne_vx_i64m1_b64_m(vbool64_t mask, vbool64_t maskedoff, vint64m1_t op1, int64_t op2, size_t vl) {
  return vmsne_vx_i64m1_b64_m(mask, maskedoff, op1, op2, vl);
}

vbool32_t test_vmsne_vv_i64m2_b32_m(vbool32_t mask, vbool32_t maskedoff, vint64m2_t op1, vint64m2_t op2, size_t vl) {
  return vmsne_vv_i64m2_b32_m(mask, maskedoff, op1, op2, vl);
}

vbool32_t test_vmsne_vx_i64m2_b32_m(vbool32_t mask, vbool32_t maskedoff, vint64m2_t op1, int64_t op2, size_t vl) {
  return vmsne_vx_i64m2_b32_m(mask, maskedoff, op1, op2, vl);
}

vbool16_t test_vmsne_vv_i64m4_b16_m(vbool16_t mask, vbool16_t maskedoff, vint64m4_t op1, vint64m4_t op2, size_t vl) {
  return vmsne_vv_i64m4_b16_m(mask, maskedoff, op1, op2, vl);
}

vbool16_t test_vmsne_vx_i64m4_b16_m(vbool16_t mask, vbool16_t maskedoff, vint64m4_t op1, int64_t op2, size_t vl) {
  return vmsne_vx_i64m4_b16_m(mask, maskedoff, op1, op2, vl);
}

vbool8_t test_vmsne_vv_i64m8_b8_m(vbool8_t mask, vbool8_t maskedoff, vint64m8_t op1, vint64m8_t op2, size_t vl) {
  return vmsne_vv_i64m8_b8_m(mask, maskedoff, op1, op2, vl);
}

vbool8_t test_vmsne_vx_i64m8_b8_m(vbool8_t mask, vbool8_t maskedoff, vint64m8_t op1, int64_t op2, size_t vl) {
  return vmsne_vx_i64m8_b8_m(mask, maskedoff, op1, op2, vl);
}

vbool64_t test_vmsne_vv_u8mf8_b64_m(vbool64_t mask, vbool64_t maskedoff, vuint8mf8_t op1, vuint8mf8_t op2, size_t vl) {
  return vmsne_vv_u8mf8_b64_m(mask, maskedoff, op1, op2, vl);
}

vbool64_t test_vmsne_vx_u8mf8_b64_m(vbool64_t mask, vbool64_t maskedoff, vuint8mf8_t op1, uint8_t op2, size_t vl) {
  return vmsne_vx_u8mf8_b64_m(mask, maskedoff, op1, op2, vl);
}

vbool32_t test_vmsne_vv_u8mf4_b32_m(vbool32_t mask, vbool32_t maskedoff, vuint8mf4_t op1, vuint8mf4_t op2, size_t vl) {
  return vmsne_vv_u8mf4_b32_m(mask, maskedoff, op1, op2, vl);
}

vbool32_t test_vmsne_vx_u8mf4_b32_m(vbool32_t mask, vbool32_t maskedoff, vuint8mf4_t op1, uint8_t op2, size_t vl) {
  return vmsne_vx_u8mf4_b32_m(mask, maskedoff, op1, op2, vl);
}

vbool16_t test_vmsne_vv_u8mf2_b16_m(vbool16_t mask, vbool16_t maskedoff, vuint8mf2_t op1, vuint8mf2_t op2, size_t vl) {
  return vmsne_vv_u8mf2_b16_m(mask, maskedoff, op1, op2, vl);
}

vbool16_t test_vmsne_vx_u8mf2_b16_m(vbool16_t mask, vbool16_t maskedoff, vuint8mf2_t op1, uint8_t op2, size_t vl) {
  return vmsne_vx_u8mf2_b16_m(mask, maskedoff, op1, op2, vl);
}

vbool8_t test_vmsne_vv_u8m1_b8_m(vbool8_t mask, vbool8_t maskedoff, vuint8m1_t op1, vuint8m1_t op2, size_t vl) {
  return vmsne_vv_u8m1_b8_m(mask, maskedoff, op1, op2, vl);
}

vbool8_t test_vmsne_vx_u8m1_b8_m(vbool8_t mask, vbool8_t maskedoff, vuint8m1_t op1, uint8_t op2, size_t vl) {
  return vmsne_vx_u8m1_b8_m(mask, maskedoff, op1, op2, vl);
}

vbool4_t test_vmsne_vv_u8m2_b4_m(vbool4_t mask, vbool4_t maskedoff, vuint8m2_t op1, vuint8m2_t op2, size_t vl) {
  return vmsne_vv_u8m2_b4_m(mask, maskedoff, op1, op2, vl);
}

vbool4_t test_vmsne_vx_u8m2_b4_m(vbool4_t mask, vbool4_t maskedoff, vuint8m2_t op1, uint8_t op2, size_t vl) {
  return vmsne_vx_u8m2_b4_m(mask, maskedoff, op1, op2, vl);
}

vbool2_t test_vmsne_vv_u8m4_b2_m(vbool2_t mask, vbool2_t maskedoff, vuint8m4_t op1, vuint8m4_t op2, size_t vl) {
  return vmsne_vv_u8m4_b2_m(mask, maskedoff, op1, op2, vl);
}

vbool2_t test_vmsne_vx_u8m4_b2_m(vbool2_t mask, vbool2_t maskedoff, vuint8m4_t op1, uint8_t op2, size_t vl) {
  return vmsne_vx_u8m4_b2_m(mask, maskedoff, op1, op2, vl);
}

vbool1_t test_vmsne_vv_u8m8_b1_m(vbool1_t mask, vbool1_t maskedoff, vuint8m8_t op1, vuint8m8_t op2, size_t vl) {
  return vmsne_vv_u8m8_b1_m(mask, maskedoff, op1, op2, vl);
}

vbool1_t test_vmsne_vx_u8m8_b1_m(vbool1_t mask, vbool1_t maskedoff, vuint8m8_t op1, uint8_t op2, size_t vl) {
  return vmsne_vx_u8m8_b1_m(mask, maskedoff, op1, op2, vl);
}

vbool64_t test_vmsne_vv_u16mf4_b64_m(vbool64_t mask, vbool64_t maskedoff, vuint16mf4_t op1, vuint16mf4_t op2, size_t vl) {
  return vmsne_vv_u16mf4_b64_m(mask, maskedoff, op1, op2, vl);
}

vbool64_t test_vmsne_vx_u16mf4_b64_m(vbool64_t mask, vbool64_t maskedoff, vuint16mf4_t op1, uint16_t op2, size_t vl) {
  return vmsne_vx_u16mf4_b64_m(mask, maskedoff, op1, op2, vl);
}

vbool32_t test_vmsne_vv_u16mf2_b32_m(vbool32_t mask, vbool32_t maskedoff, vuint16mf2_t op1, vuint16mf2_t op2, size_t vl) {
  return vmsne_vv_u16mf2_b32_m(mask, maskedoff, op1, op2, vl);
}

vbool32_t test_vmsne_vx_u16mf2_b32_m(vbool32_t mask, vbool32_t maskedoff, vuint16mf2_t op1, uint16_t op2, size_t vl) {
  return vmsne_vx_u16mf2_b32_m(mask, maskedoff, op1, op2, vl);
}

vbool16_t test_vmsne_vv_u16m1_b16_m(vbool16_t mask, vbool16_t maskedoff, vuint16m1_t op1, vuint16m1_t op2, size_t vl) {
  return vmsne_vv_u16m1_b16_m(mask, maskedoff, op1, op2, vl);
}

vbool16_t test_vmsne_vx_u16m1_b16_m(vbool16_t mask, vbool16_t maskedoff, vuint16m1_t op1, uint16_t op2, size_t vl) {
  return vmsne_vx_u16m1_b16_m(mask, maskedoff, op1, op2, vl);
}

vbool8_t test_vmsne_vv_u16m2_b8_m(vbool8_t mask, vbool8_t maskedoff, vuint16m2_t op1, vuint16m2_t op2, size_t vl) {
  return vmsne_vv_u16m2_b8_m(mask, maskedoff, op1, op2, vl);
}

vbool8_t test_vmsne_vx_u16m2_b8_m(vbool8_t mask, vbool8_t maskedoff, vuint16m2_t op1, uint16_t op2, size_t vl) {
  return vmsne_vx_u16m2_b8_m(mask, maskedoff, op1, op2, vl);
}

vbool4_t test_vmsne_vv_u16m4_b4_m(vbool4_t mask, vbool4_t maskedoff, vuint16m4_t op1, vuint16m4_t op2, size_t vl) {
  return vmsne_vv_u16m4_b4_m(mask, maskedoff, op1, op2, vl);
}

vbool4_t test_vmsne_vx_u16m4_b4_m(vbool4_t mask, vbool4_t maskedoff, vuint16m4_t op1, uint16_t op2, size_t vl) {
  return vmsne_vx_u16m4_b4_m(mask, maskedoff, op1, op2, vl);
}

vbool2_t test_vmsne_vv_u16m8_b2_m(vbool2_t mask, vbool2_t maskedoff, vuint16m8_t op1, vuint16m8_t op2, size_t vl) {
  return vmsne_vv_u16m8_b2_m(mask, maskedoff, op1, op2, vl);
}

vbool2_t test_vmsne_vx_u16m8_b2_m(vbool2_t mask, vbool2_t maskedoff, vuint16m8_t op1, uint16_t op2, size_t vl) {
  return vmsne_vx_u16m8_b2_m(mask, maskedoff, op1, op2, vl);
}

vbool64_t test_vmsne_vv_u32mf2_b64_m(vbool64_t mask, vbool64_t maskedoff, vuint32mf2_t op1, vuint32mf2_t op2, size_t vl) {
  return vmsne_vv_u32mf2_b64_m(mask, maskedoff, op1, op2, vl);
}

vbool64_t test_vmsne_vx_u32mf2_b64_m(vbool64_t mask, vbool64_t maskedoff, vuint32mf2_t op1, uint32_t op2, size_t vl) {
  return vmsne_vx_u32mf2_b64_m(mask, maskedoff, op1, op2, vl);
}

vbool32_t test_vmsne_vv_u32m1_b32_m(vbool32_t mask, vbool32_t maskedoff, vuint32m1_t op1, vuint32m1_t op2, size_t vl) {
  return vmsne_vv_u32m1_b32_m(mask, maskedoff, op1, op2, vl);
}

vbool32_t test_vmsne_vx_u32m1_b32_m(vbool32_t mask, vbool32_t maskedoff, vuint32m1_t op1, uint32_t op2, size_t vl) {
  return vmsne_vx_u32m1_b32_m(mask, maskedoff, op1, op2, vl);
}

vbool16_t test_vmsne_vv_u32m2_b16_m(vbool16_t mask, vbool16_t maskedoff, vuint32m2_t op1, vuint32m2_t op2, size_t vl) {
  return vmsne_vv_u32m2_b16_m(mask, maskedoff, op1, op2, vl);
}

vbool16_t test_vmsne_vx_u32m2_b16_m(vbool16_t mask, vbool16_t maskedoff, vuint32m2_t op1, uint32_t op2, size_t vl) {
  return vmsne_vx_u32m2_b16_m(mask, maskedoff, op1, op2, vl);
}

vbool8_t test_vmsne_vv_u32m4_b8_m(vbool8_t mask, vbool8_t maskedoff, vuint32m4_t op1, vuint32m4_t op2, size_t vl) {
  return vmsne_vv_u32m4_b8_m(mask, maskedoff, op1, op2, vl);
}

vbool8_t test_vmsne_vx_u32m4_b8_m(vbool8_t mask, vbool8_t maskedoff, vuint32m4_t op1, uint32_t op2, size_t vl) {
  return vmsne_vx_u32m4_b8_m(mask, maskedoff, op1, op2, vl);
}

vbool4_t test_vmsne_vv_u32m8_b4_m(vbool4_t mask, vbool4_t maskedoff, vuint32m8_t op1, vuint32m8_t op2, size_t vl) {
  return vmsne_vv_u32m8_b4_m(mask, maskedoff, op1, op2, vl);
}

vbool4_t test_vmsne_vx_u32m8_b4_m(vbool4_t mask, vbool4_t maskedoff, vuint32m8_t op1, uint32_t op2, size_t vl) {
  return vmsne_vx_u32m8_b4_m(mask, maskedoff, op1, op2, vl);
}

vbool64_t test_vmsne_vv_u64m1_b64_m(vbool64_t mask, vbool64_t maskedoff, vuint64m1_t op1, vuint64m1_t op2, size_t vl) {
  return vmsne_vv_u64m1_b64_m(mask, maskedoff, op1, op2, vl);
}

vbool64_t test_vmsne_vx_u64m1_b64_m(vbool64_t mask, vbool64_t maskedoff, vuint64m1_t op1, uint64_t op2, size_t vl) {
  return vmsne_vx_u64m1_b64_m(mask, maskedoff, op1, op2, vl);
}

vbool32_t test_vmsne_vv_u64m2_b32_m(vbool32_t mask, vbool32_t maskedoff, vuint64m2_t op1, vuint64m2_t op2, size_t vl) {
  return vmsne_vv_u64m2_b32_m(mask, maskedoff, op1, op2, vl);
}

vbool32_t test_vmsne_vx_u64m2_b32_m(vbool32_t mask, vbool32_t maskedoff, vuint64m2_t op1, uint64_t op2, size_t vl) {
  return vmsne_vx_u64m2_b32_m(mask, maskedoff, op1, op2, vl);
}

vbool16_t test_vmsne_vv_u64m4_b16_m(vbool16_t mask, vbool16_t maskedoff, vuint64m4_t op1, vuint64m4_t op2, size_t vl) {
  return vmsne_vv_u64m4_b16_m(mask, maskedoff, op1, op2, vl);
}

vbool16_t test_vmsne_vx_u64m4_b16_m(vbool16_t mask, vbool16_t maskedoff, vuint64m4_t op1, uint64_t op2, size_t vl) {
  return vmsne_vx_u64m4_b16_m(mask, maskedoff, op1, op2, vl);
}

vbool8_t test_vmsne_vv_u64m8_b8_m(vbool8_t mask, vbool8_t maskedoff, vuint64m8_t op1, vuint64m8_t op2, size_t vl) {
  return vmsne_vv_u64m8_b8_m(mask, maskedoff, op1, op2, vl);
}

vbool8_t test_vmsne_vx_u64m8_b8_m(vbool8_t mask, vbool8_t maskedoff, vuint64m8_t op1, uint64_t op2, size_t vl) {
  return vmsne_vx_u64m8_b8_m(mask, maskedoff, op1, op2, vl);
}

