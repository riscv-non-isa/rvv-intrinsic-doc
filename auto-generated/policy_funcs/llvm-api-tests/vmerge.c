// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -target-feature +zfh \
// RUN:   -target-feature +experimental-zvfh -disable-O0-optnone  \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

vint8mf8_t test_vmerge_vvm_i8mf8_tu(vbool64_t mask, vint8mf8_t maskedoff, vint8mf8_t op1, vint8mf8_t op2, size_t vl) {
  return vmerge_vvm_i8mf8_tu(mask, maskedoff, op1, op2, vl);
}

vint8mf8_t test_vmerge_vxm_i8mf8_tu(vbool64_t mask, vint8mf8_t maskedoff, vint8mf8_t op1, int8_t op2, size_t vl) {
  return vmerge_vxm_i8mf8_tu(mask, maskedoff, op1, op2, vl);
}

vint8mf4_t test_vmerge_vvm_i8mf4_tu(vbool32_t mask, vint8mf4_t maskedoff, vint8mf4_t op1, vint8mf4_t op2, size_t vl) {
  return vmerge_vvm_i8mf4_tu(mask, maskedoff, op1, op2, vl);
}

vint8mf4_t test_vmerge_vxm_i8mf4_tu(vbool32_t mask, vint8mf4_t maskedoff, vint8mf4_t op1, int8_t op2, size_t vl) {
  return vmerge_vxm_i8mf4_tu(mask, maskedoff, op1, op2, vl);
}

vint8mf2_t test_vmerge_vvm_i8mf2_tu(vbool16_t mask, vint8mf2_t maskedoff, vint8mf2_t op1, vint8mf2_t op2, size_t vl) {
  return vmerge_vvm_i8mf2_tu(mask, maskedoff, op1, op2, vl);
}

vint8mf2_t test_vmerge_vxm_i8mf2_tu(vbool16_t mask, vint8mf2_t maskedoff, vint8mf2_t op1, int8_t op2, size_t vl) {
  return vmerge_vxm_i8mf2_tu(mask, maskedoff, op1, op2, vl);
}

vint8m1_t test_vmerge_vvm_i8m1_tu(vbool8_t mask, vint8m1_t maskedoff, vint8m1_t op1, vint8m1_t op2, size_t vl) {
  return vmerge_vvm_i8m1_tu(mask, maskedoff, op1, op2, vl);
}

vint8m1_t test_vmerge_vxm_i8m1_tu(vbool8_t mask, vint8m1_t maskedoff, vint8m1_t op1, int8_t op2, size_t vl) {
  return vmerge_vxm_i8m1_tu(mask, maskedoff, op1, op2, vl);
}

vint8m2_t test_vmerge_vvm_i8m2_tu(vbool4_t mask, vint8m2_t maskedoff, vint8m2_t op1, vint8m2_t op2, size_t vl) {
  return vmerge_vvm_i8m2_tu(mask, maskedoff, op1, op2, vl);
}

vint8m2_t test_vmerge_vxm_i8m2_tu(vbool4_t mask, vint8m2_t maskedoff, vint8m2_t op1, int8_t op2, size_t vl) {
  return vmerge_vxm_i8m2_tu(mask, maskedoff, op1, op2, vl);
}

vint8m4_t test_vmerge_vvm_i8m4_tu(vbool2_t mask, vint8m4_t maskedoff, vint8m4_t op1, vint8m4_t op2, size_t vl) {
  return vmerge_vvm_i8m4_tu(mask, maskedoff, op1, op2, vl);
}

vint8m4_t test_vmerge_vxm_i8m4_tu(vbool2_t mask, vint8m4_t maskedoff, vint8m4_t op1, int8_t op2, size_t vl) {
  return vmerge_vxm_i8m4_tu(mask, maskedoff, op1, op2, vl);
}

vint8m8_t test_vmerge_vvm_i8m8_tu(vbool1_t mask, vint8m8_t maskedoff, vint8m8_t op1, vint8m8_t op2, size_t vl) {
  return vmerge_vvm_i8m8_tu(mask, maskedoff, op1, op2, vl);
}

vint8m8_t test_vmerge_vxm_i8m8_tu(vbool1_t mask, vint8m8_t maskedoff, vint8m8_t op1, int8_t op2, size_t vl) {
  return vmerge_vxm_i8m8_tu(mask, maskedoff, op1, op2, vl);
}

vint16mf4_t test_vmerge_vvm_i16mf4_tu(vbool64_t mask, vint16mf4_t maskedoff, vint16mf4_t op1, vint16mf4_t op2, size_t vl) {
  return vmerge_vvm_i16mf4_tu(mask, maskedoff, op1, op2, vl);
}

vint16mf4_t test_vmerge_vxm_i16mf4_tu(vbool64_t mask, vint16mf4_t maskedoff, vint16mf4_t op1, int16_t op2, size_t vl) {
  return vmerge_vxm_i16mf4_tu(mask, maskedoff, op1, op2, vl);
}

vint16mf2_t test_vmerge_vvm_i16mf2_tu(vbool32_t mask, vint16mf2_t maskedoff, vint16mf2_t op1, vint16mf2_t op2, size_t vl) {
  return vmerge_vvm_i16mf2_tu(mask, maskedoff, op1, op2, vl);
}

vint16mf2_t test_vmerge_vxm_i16mf2_tu(vbool32_t mask, vint16mf2_t maskedoff, vint16mf2_t op1, int16_t op2, size_t vl) {
  return vmerge_vxm_i16mf2_tu(mask, maskedoff, op1, op2, vl);
}

vint16m1_t test_vmerge_vvm_i16m1_tu(vbool16_t mask, vint16m1_t maskedoff, vint16m1_t op1, vint16m1_t op2, size_t vl) {
  return vmerge_vvm_i16m1_tu(mask, maskedoff, op1, op2, vl);
}

vint16m1_t test_vmerge_vxm_i16m1_tu(vbool16_t mask, vint16m1_t maskedoff, vint16m1_t op1, int16_t op2, size_t vl) {
  return vmerge_vxm_i16m1_tu(mask, maskedoff, op1, op2, vl);
}

vint16m2_t test_vmerge_vvm_i16m2_tu(vbool8_t mask, vint16m2_t maskedoff, vint16m2_t op1, vint16m2_t op2, size_t vl) {
  return vmerge_vvm_i16m2_tu(mask, maskedoff, op1, op2, vl);
}

vint16m2_t test_vmerge_vxm_i16m2_tu(vbool8_t mask, vint16m2_t maskedoff, vint16m2_t op1, int16_t op2, size_t vl) {
  return vmerge_vxm_i16m2_tu(mask, maskedoff, op1, op2, vl);
}

vint16m4_t test_vmerge_vvm_i16m4_tu(vbool4_t mask, vint16m4_t maskedoff, vint16m4_t op1, vint16m4_t op2, size_t vl) {
  return vmerge_vvm_i16m4_tu(mask, maskedoff, op1, op2, vl);
}

vint16m4_t test_vmerge_vxm_i16m4_tu(vbool4_t mask, vint16m4_t maskedoff, vint16m4_t op1, int16_t op2, size_t vl) {
  return vmerge_vxm_i16m4_tu(mask, maskedoff, op1, op2, vl);
}

vint16m8_t test_vmerge_vvm_i16m8_tu(vbool2_t mask, vint16m8_t maskedoff, vint16m8_t op1, vint16m8_t op2, size_t vl) {
  return vmerge_vvm_i16m8_tu(mask, maskedoff, op1, op2, vl);
}

vint16m8_t test_vmerge_vxm_i16m8_tu(vbool2_t mask, vint16m8_t maskedoff, vint16m8_t op1, int16_t op2, size_t vl) {
  return vmerge_vxm_i16m8_tu(mask, maskedoff, op1, op2, vl);
}

vint32mf2_t test_vmerge_vvm_i32mf2_tu(vbool64_t mask, vint32mf2_t maskedoff, vint32mf2_t op1, vint32mf2_t op2, size_t vl) {
  return vmerge_vvm_i32mf2_tu(mask, maskedoff, op1, op2, vl);
}

vint32mf2_t test_vmerge_vxm_i32mf2_tu(vbool64_t mask, vint32mf2_t maskedoff, vint32mf2_t op1, int32_t op2, size_t vl) {
  return vmerge_vxm_i32mf2_tu(mask, maskedoff, op1, op2, vl);
}

vint32m1_t test_vmerge_vvm_i32m1_tu(vbool32_t mask, vint32m1_t maskedoff, vint32m1_t op1, vint32m1_t op2, size_t vl) {
  return vmerge_vvm_i32m1_tu(mask, maskedoff, op1, op2, vl);
}

vint32m1_t test_vmerge_vxm_i32m1_tu(vbool32_t mask, vint32m1_t maskedoff, vint32m1_t op1, int32_t op2, size_t vl) {
  return vmerge_vxm_i32m1_tu(mask, maskedoff, op1, op2, vl);
}

vint32m2_t test_vmerge_vvm_i32m2_tu(vbool16_t mask, vint32m2_t maskedoff, vint32m2_t op1, vint32m2_t op2, size_t vl) {
  return vmerge_vvm_i32m2_tu(mask, maskedoff, op1, op2, vl);
}

vint32m2_t test_vmerge_vxm_i32m2_tu(vbool16_t mask, vint32m2_t maskedoff, vint32m2_t op1, int32_t op2, size_t vl) {
  return vmerge_vxm_i32m2_tu(mask, maskedoff, op1, op2, vl);
}

vint32m4_t test_vmerge_vvm_i32m4_tu(vbool8_t mask, vint32m4_t maskedoff, vint32m4_t op1, vint32m4_t op2, size_t vl) {
  return vmerge_vvm_i32m4_tu(mask, maskedoff, op1, op2, vl);
}

vint32m4_t test_vmerge_vxm_i32m4_tu(vbool8_t mask, vint32m4_t maskedoff, vint32m4_t op1, int32_t op2, size_t vl) {
  return vmerge_vxm_i32m4_tu(mask, maskedoff, op1, op2, vl);
}

vint32m8_t test_vmerge_vvm_i32m8_tu(vbool4_t mask, vint32m8_t maskedoff, vint32m8_t op1, vint32m8_t op2, size_t vl) {
  return vmerge_vvm_i32m8_tu(mask, maskedoff, op1, op2, vl);
}

vint32m8_t test_vmerge_vxm_i32m8_tu(vbool4_t mask, vint32m8_t maskedoff, vint32m8_t op1, int32_t op2, size_t vl) {
  return vmerge_vxm_i32m8_tu(mask, maskedoff, op1, op2, vl);
}

vint64m1_t test_vmerge_vvm_i64m1_tu(vbool64_t mask, vint64m1_t maskedoff, vint64m1_t op1, vint64m1_t op2, size_t vl) {
  return vmerge_vvm_i64m1_tu(mask, maskedoff, op1, op2, vl);
}

vint64m1_t test_vmerge_vxm_i64m1_tu(vbool64_t mask, vint64m1_t maskedoff, vint64m1_t op1, int64_t op2, size_t vl) {
  return vmerge_vxm_i64m1_tu(mask, maskedoff, op1, op2, vl);
}

vint64m2_t test_vmerge_vvm_i64m2_tu(vbool32_t mask, vint64m2_t maskedoff, vint64m2_t op1, vint64m2_t op2, size_t vl) {
  return vmerge_vvm_i64m2_tu(mask, maskedoff, op1, op2, vl);
}

vint64m2_t test_vmerge_vxm_i64m2_tu(vbool32_t mask, vint64m2_t maskedoff, vint64m2_t op1, int64_t op2, size_t vl) {
  return vmerge_vxm_i64m2_tu(mask, maskedoff, op1, op2, vl);
}

vint64m4_t test_vmerge_vvm_i64m4_tu(vbool16_t mask, vint64m4_t maskedoff, vint64m4_t op1, vint64m4_t op2, size_t vl) {
  return vmerge_vvm_i64m4_tu(mask, maskedoff, op1, op2, vl);
}

vint64m4_t test_vmerge_vxm_i64m4_tu(vbool16_t mask, vint64m4_t maskedoff, vint64m4_t op1, int64_t op2, size_t vl) {
  return vmerge_vxm_i64m4_tu(mask, maskedoff, op1, op2, vl);
}

vint64m8_t test_vmerge_vvm_i64m8_tu(vbool8_t mask, vint64m8_t maskedoff, vint64m8_t op1, vint64m8_t op2, size_t vl) {
  return vmerge_vvm_i64m8_tu(mask, maskedoff, op1, op2, vl);
}

vint64m8_t test_vmerge_vxm_i64m8_tu(vbool8_t mask, vint64m8_t maskedoff, vint64m8_t op1, int64_t op2, size_t vl) {
  return vmerge_vxm_i64m8_tu(mask, maskedoff, op1, op2, vl);
}

vuint8mf8_t test_vmerge_vvm_u8mf8_tu(vbool64_t mask, vuint8mf8_t maskedoff, vuint8mf8_t op1, vuint8mf8_t op2, size_t vl) {
  return vmerge_vvm_u8mf8_tu(mask, maskedoff, op1, op2, vl);
}

vuint8mf8_t test_vmerge_vxm_u8mf8_tu(vbool64_t mask, vuint8mf8_t maskedoff, vuint8mf8_t op1, uint8_t op2, size_t vl) {
  return vmerge_vxm_u8mf8_tu(mask, maskedoff, op1, op2, vl);
}

vuint8mf4_t test_vmerge_vvm_u8mf4_tu(vbool32_t mask, vuint8mf4_t maskedoff, vuint8mf4_t op1, vuint8mf4_t op2, size_t vl) {
  return vmerge_vvm_u8mf4_tu(mask, maskedoff, op1, op2, vl);
}

vuint8mf4_t test_vmerge_vxm_u8mf4_tu(vbool32_t mask, vuint8mf4_t maskedoff, vuint8mf4_t op1, uint8_t op2, size_t vl) {
  return vmerge_vxm_u8mf4_tu(mask, maskedoff, op1, op2, vl);
}

vuint8mf2_t test_vmerge_vvm_u8mf2_tu(vbool16_t mask, vuint8mf2_t maskedoff, vuint8mf2_t op1, vuint8mf2_t op2, size_t vl) {
  return vmerge_vvm_u8mf2_tu(mask, maskedoff, op1, op2, vl);
}

vuint8mf2_t test_vmerge_vxm_u8mf2_tu(vbool16_t mask, vuint8mf2_t maskedoff, vuint8mf2_t op1, uint8_t op2, size_t vl) {
  return vmerge_vxm_u8mf2_tu(mask, maskedoff, op1, op2, vl);
}

vuint8m1_t test_vmerge_vvm_u8m1_tu(vbool8_t mask, vuint8m1_t maskedoff, vuint8m1_t op1, vuint8m1_t op2, size_t vl) {
  return vmerge_vvm_u8m1_tu(mask, maskedoff, op1, op2, vl);
}

vuint8m1_t test_vmerge_vxm_u8m1_tu(vbool8_t mask, vuint8m1_t maskedoff, vuint8m1_t op1, uint8_t op2, size_t vl) {
  return vmerge_vxm_u8m1_tu(mask, maskedoff, op1, op2, vl);
}

vuint8m2_t test_vmerge_vvm_u8m2_tu(vbool4_t mask, vuint8m2_t maskedoff, vuint8m2_t op1, vuint8m2_t op2, size_t vl) {
  return vmerge_vvm_u8m2_tu(mask, maskedoff, op1, op2, vl);
}

vuint8m2_t test_vmerge_vxm_u8m2_tu(vbool4_t mask, vuint8m2_t maskedoff, vuint8m2_t op1, uint8_t op2, size_t vl) {
  return vmerge_vxm_u8m2_tu(mask, maskedoff, op1, op2, vl);
}

vuint8m4_t test_vmerge_vvm_u8m4_tu(vbool2_t mask, vuint8m4_t maskedoff, vuint8m4_t op1, vuint8m4_t op2, size_t vl) {
  return vmerge_vvm_u8m4_tu(mask, maskedoff, op1, op2, vl);
}

vuint8m4_t test_vmerge_vxm_u8m4_tu(vbool2_t mask, vuint8m4_t maskedoff, vuint8m4_t op1, uint8_t op2, size_t vl) {
  return vmerge_vxm_u8m4_tu(mask, maskedoff, op1, op2, vl);
}

vuint8m8_t test_vmerge_vvm_u8m8_tu(vbool1_t mask, vuint8m8_t maskedoff, vuint8m8_t op1, vuint8m8_t op2, size_t vl) {
  return vmerge_vvm_u8m8_tu(mask, maskedoff, op1, op2, vl);
}

vuint8m8_t test_vmerge_vxm_u8m8_tu(vbool1_t mask, vuint8m8_t maskedoff, vuint8m8_t op1, uint8_t op2, size_t vl) {
  return vmerge_vxm_u8m8_tu(mask, maskedoff, op1, op2, vl);
}

vuint16mf4_t test_vmerge_vvm_u16mf4_tu(vbool64_t mask, vuint16mf4_t maskedoff, vuint16mf4_t op1, vuint16mf4_t op2, size_t vl) {
  return vmerge_vvm_u16mf4_tu(mask, maskedoff, op1, op2, vl);
}

vuint16mf4_t test_vmerge_vxm_u16mf4_tu(vbool64_t mask, vuint16mf4_t maskedoff, vuint16mf4_t op1, uint16_t op2, size_t vl) {
  return vmerge_vxm_u16mf4_tu(mask, maskedoff, op1, op2, vl);
}

vuint16mf2_t test_vmerge_vvm_u16mf2_tu(vbool32_t mask, vuint16mf2_t maskedoff, vuint16mf2_t op1, vuint16mf2_t op2, size_t vl) {
  return vmerge_vvm_u16mf2_tu(mask, maskedoff, op1, op2, vl);
}

vuint16mf2_t test_vmerge_vxm_u16mf2_tu(vbool32_t mask, vuint16mf2_t maskedoff, vuint16mf2_t op1, uint16_t op2, size_t vl) {
  return vmerge_vxm_u16mf2_tu(mask, maskedoff, op1, op2, vl);
}

vuint16m1_t test_vmerge_vvm_u16m1_tu(vbool16_t mask, vuint16m1_t maskedoff, vuint16m1_t op1, vuint16m1_t op2, size_t vl) {
  return vmerge_vvm_u16m1_tu(mask, maskedoff, op1, op2, vl);
}

vuint16m1_t test_vmerge_vxm_u16m1_tu(vbool16_t mask, vuint16m1_t maskedoff, vuint16m1_t op1, uint16_t op2, size_t vl) {
  return vmerge_vxm_u16m1_tu(mask, maskedoff, op1, op2, vl);
}

vuint16m2_t test_vmerge_vvm_u16m2_tu(vbool8_t mask, vuint16m2_t maskedoff, vuint16m2_t op1, vuint16m2_t op2, size_t vl) {
  return vmerge_vvm_u16m2_tu(mask, maskedoff, op1, op2, vl);
}

vuint16m2_t test_vmerge_vxm_u16m2_tu(vbool8_t mask, vuint16m2_t maskedoff, vuint16m2_t op1, uint16_t op2, size_t vl) {
  return vmerge_vxm_u16m2_tu(mask, maskedoff, op1, op2, vl);
}

vuint16m4_t test_vmerge_vvm_u16m4_tu(vbool4_t mask, vuint16m4_t maskedoff, vuint16m4_t op1, vuint16m4_t op2, size_t vl) {
  return vmerge_vvm_u16m4_tu(mask, maskedoff, op1, op2, vl);
}

vuint16m4_t test_vmerge_vxm_u16m4_tu(vbool4_t mask, vuint16m4_t maskedoff, vuint16m4_t op1, uint16_t op2, size_t vl) {
  return vmerge_vxm_u16m4_tu(mask, maskedoff, op1, op2, vl);
}

vuint16m8_t test_vmerge_vvm_u16m8_tu(vbool2_t mask, vuint16m8_t maskedoff, vuint16m8_t op1, vuint16m8_t op2, size_t vl) {
  return vmerge_vvm_u16m8_tu(mask, maskedoff, op1, op2, vl);
}

vuint16m8_t test_vmerge_vxm_u16m8_tu(vbool2_t mask, vuint16m8_t maskedoff, vuint16m8_t op1, uint16_t op2, size_t vl) {
  return vmerge_vxm_u16m8_tu(mask, maskedoff, op1, op2, vl);
}

vuint32mf2_t test_vmerge_vvm_u32mf2_tu(vbool64_t mask, vuint32mf2_t maskedoff, vuint32mf2_t op1, vuint32mf2_t op2, size_t vl) {
  return vmerge_vvm_u32mf2_tu(mask, maskedoff, op1, op2, vl);
}

vuint32mf2_t test_vmerge_vxm_u32mf2_tu(vbool64_t mask, vuint32mf2_t maskedoff, vuint32mf2_t op1, uint32_t op2, size_t vl) {
  return vmerge_vxm_u32mf2_tu(mask, maskedoff, op1, op2, vl);
}

vuint32m1_t test_vmerge_vvm_u32m1_tu(vbool32_t mask, vuint32m1_t maskedoff, vuint32m1_t op1, vuint32m1_t op2, size_t vl) {
  return vmerge_vvm_u32m1_tu(mask, maskedoff, op1, op2, vl);
}

vuint32m1_t test_vmerge_vxm_u32m1_tu(vbool32_t mask, vuint32m1_t maskedoff, vuint32m1_t op1, uint32_t op2, size_t vl) {
  return vmerge_vxm_u32m1_tu(mask, maskedoff, op1, op2, vl);
}

vuint32m2_t test_vmerge_vvm_u32m2_tu(vbool16_t mask, vuint32m2_t maskedoff, vuint32m2_t op1, vuint32m2_t op2, size_t vl) {
  return vmerge_vvm_u32m2_tu(mask, maskedoff, op1, op2, vl);
}

vuint32m2_t test_vmerge_vxm_u32m2_tu(vbool16_t mask, vuint32m2_t maskedoff, vuint32m2_t op1, uint32_t op2, size_t vl) {
  return vmerge_vxm_u32m2_tu(mask, maskedoff, op1, op2, vl);
}

vuint32m4_t test_vmerge_vvm_u32m4_tu(vbool8_t mask, vuint32m4_t maskedoff, vuint32m4_t op1, vuint32m4_t op2, size_t vl) {
  return vmerge_vvm_u32m4_tu(mask, maskedoff, op1, op2, vl);
}

vuint32m4_t test_vmerge_vxm_u32m4_tu(vbool8_t mask, vuint32m4_t maskedoff, vuint32m4_t op1, uint32_t op2, size_t vl) {
  return vmerge_vxm_u32m4_tu(mask, maskedoff, op1, op2, vl);
}

vuint32m8_t test_vmerge_vvm_u32m8_tu(vbool4_t mask, vuint32m8_t maskedoff, vuint32m8_t op1, vuint32m8_t op2, size_t vl) {
  return vmerge_vvm_u32m8_tu(mask, maskedoff, op1, op2, vl);
}

vuint32m8_t test_vmerge_vxm_u32m8_tu(vbool4_t mask, vuint32m8_t maskedoff, vuint32m8_t op1, uint32_t op2, size_t vl) {
  return vmerge_vxm_u32m8_tu(mask, maskedoff, op1, op2, vl);
}

vuint64m1_t test_vmerge_vvm_u64m1_tu(vbool64_t mask, vuint64m1_t maskedoff, vuint64m1_t op1, vuint64m1_t op2, size_t vl) {
  return vmerge_vvm_u64m1_tu(mask, maskedoff, op1, op2, vl);
}

vuint64m1_t test_vmerge_vxm_u64m1_tu(vbool64_t mask, vuint64m1_t maskedoff, vuint64m1_t op1, uint64_t op2, size_t vl) {
  return vmerge_vxm_u64m1_tu(mask, maskedoff, op1, op2, vl);
}

vuint64m2_t test_vmerge_vvm_u64m2_tu(vbool32_t mask, vuint64m2_t maskedoff, vuint64m2_t op1, vuint64m2_t op2, size_t vl) {
  return vmerge_vvm_u64m2_tu(mask, maskedoff, op1, op2, vl);
}

vuint64m2_t test_vmerge_vxm_u64m2_tu(vbool32_t mask, vuint64m2_t maskedoff, vuint64m2_t op1, uint64_t op2, size_t vl) {
  return vmerge_vxm_u64m2_tu(mask, maskedoff, op1, op2, vl);
}

vuint64m4_t test_vmerge_vvm_u64m4_tu(vbool16_t mask, vuint64m4_t maskedoff, vuint64m4_t op1, vuint64m4_t op2, size_t vl) {
  return vmerge_vvm_u64m4_tu(mask, maskedoff, op1, op2, vl);
}

vuint64m4_t test_vmerge_vxm_u64m4_tu(vbool16_t mask, vuint64m4_t maskedoff, vuint64m4_t op1, uint64_t op2, size_t vl) {
  return vmerge_vxm_u64m4_tu(mask, maskedoff, op1, op2, vl);
}

vuint64m8_t test_vmerge_vvm_u64m8_tu(vbool8_t mask, vuint64m8_t maskedoff, vuint64m8_t op1, vuint64m8_t op2, size_t vl) {
  return vmerge_vvm_u64m8_tu(mask, maskedoff, op1, op2, vl);
}

vuint64m8_t test_vmerge_vxm_u64m8_tu(vbool8_t mask, vuint64m8_t maskedoff, vuint64m8_t op1, uint64_t op2, size_t vl) {
  return vmerge_vxm_u64m8_tu(mask, maskedoff, op1, op2, vl);
}

vint8mf8_t test_vmerge_vvm_i8mf8_ta(vbool64_t mask, vint8mf8_t op1, vint8mf8_t op2, size_t vl) {
  return vmerge_vvm_i8mf8_ta(mask, op1, op2, vl);
}

vint8mf8_t test_vmerge_vxm_i8mf8_ta(vbool64_t mask, vint8mf8_t op1, int8_t op2, size_t vl) {
  return vmerge_vxm_i8mf8_ta(mask, op1, op2, vl);
}

vint8mf4_t test_vmerge_vvm_i8mf4_ta(vbool32_t mask, vint8mf4_t op1, vint8mf4_t op2, size_t vl) {
  return vmerge_vvm_i8mf4_ta(mask, op1, op2, vl);
}

vint8mf4_t test_vmerge_vxm_i8mf4_ta(vbool32_t mask, vint8mf4_t op1, int8_t op2, size_t vl) {
  return vmerge_vxm_i8mf4_ta(mask, op1, op2, vl);
}

vint8mf2_t test_vmerge_vvm_i8mf2_ta(vbool16_t mask, vint8mf2_t op1, vint8mf2_t op2, size_t vl) {
  return vmerge_vvm_i8mf2_ta(mask, op1, op2, vl);
}

vint8mf2_t test_vmerge_vxm_i8mf2_ta(vbool16_t mask, vint8mf2_t op1, int8_t op2, size_t vl) {
  return vmerge_vxm_i8mf2_ta(mask, op1, op2, vl);
}

vint8m1_t test_vmerge_vvm_i8m1_ta(vbool8_t mask, vint8m1_t op1, vint8m1_t op2, size_t vl) {
  return vmerge_vvm_i8m1_ta(mask, op1, op2, vl);
}

vint8m1_t test_vmerge_vxm_i8m1_ta(vbool8_t mask, vint8m1_t op1, int8_t op2, size_t vl) {
  return vmerge_vxm_i8m1_ta(mask, op1, op2, vl);
}

vint8m2_t test_vmerge_vvm_i8m2_ta(vbool4_t mask, vint8m2_t op1, vint8m2_t op2, size_t vl) {
  return vmerge_vvm_i8m2_ta(mask, op1, op2, vl);
}

vint8m2_t test_vmerge_vxm_i8m2_ta(vbool4_t mask, vint8m2_t op1, int8_t op2, size_t vl) {
  return vmerge_vxm_i8m2_ta(mask, op1, op2, vl);
}

vint8m4_t test_vmerge_vvm_i8m4_ta(vbool2_t mask, vint8m4_t op1, vint8m4_t op2, size_t vl) {
  return vmerge_vvm_i8m4_ta(mask, op1, op2, vl);
}

vint8m4_t test_vmerge_vxm_i8m4_ta(vbool2_t mask, vint8m4_t op1, int8_t op2, size_t vl) {
  return vmerge_vxm_i8m4_ta(mask, op1, op2, vl);
}

vint8m8_t test_vmerge_vvm_i8m8_ta(vbool1_t mask, vint8m8_t op1, vint8m8_t op2, size_t vl) {
  return vmerge_vvm_i8m8_ta(mask, op1, op2, vl);
}

vint8m8_t test_vmerge_vxm_i8m8_ta(vbool1_t mask, vint8m8_t op1, int8_t op2, size_t vl) {
  return vmerge_vxm_i8m8_ta(mask, op1, op2, vl);
}

vint16mf4_t test_vmerge_vvm_i16mf4_ta(vbool64_t mask, vint16mf4_t op1, vint16mf4_t op2, size_t vl) {
  return vmerge_vvm_i16mf4_ta(mask, op1, op2, vl);
}

vint16mf4_t test_vmerge_vxm_i16mf4_ta(vbool64_t mask, vint16mf4_t op1, int16_t op2, size_t vl) {
  return vmerge_vxm_i16mf4_ta(mask, op1, op2, vl);
}

vint16mf2_t test_vmerge_vvm_i16mf2_ta(vbool32_t mask, vint16mf2_t op1, vint16mf2_t op2, size_t vl) {
  return vmerge_vvm_i16mf2_ta(mask, op1, op2, vl);
}

vint16mf2_t test_vmerge_vxm_i16mf2_ta(vbool32_t mask, vint16mf2_t op1, int16_t op2, size_t vl) {
  return vmerge_vxm_i16mf2_ta(mask, op1, op2, vl);
}

vint16m1_t test_vmerge_vvm_i16m1_ta(vbool16_t mask, vint16m1_t op1, vint16m1_t op2, size_t vl) {
  return vmerge_vvm_i16m1_ta(mask, op1, op2, vl);
}

vint16m1_t test_vmerge_vxm_i16m1_ta(vbool16_t mask, vint16m1_t op1, int16_t op2, size_t vl) {
  return vmerge_vxm_i16m1_ta(mask, op1, op2, vl);
}

vint16m2_t test_vmerge_vvm_i16m2_ta(vbool8_t mask, vint16m2_t op1, vint16m2_t op2, size_t vl) {
  return vmerge_vvm_i16m2_ta(mask, op1, op2, vl);
}

vint16m2_t test_vmerge_vxm_i16m2_ta(vbool8_t mask, vint16m2_t op1, int16_t op2, size_t vl) {
  return vmerge_vxm_i16m2_ta(mask, op1, op2, vl);
}

vint16m4_t test_vmerge_vvm_i16m4_ta(vbool4_t mask, vint16m4_t op1, vint16m4_t op2, size_t vl) {
  return vmerge_vvm_i16m4_ta(mask, op1, op2, vl);
}

vint16m4_t test_vmerge_vxm_i16m4_ta(vbool4_t mask, vint16m4_t op1, int16_t op2, size_t vl) {
  return vmerge_vxm_i16m4_ta(mask, op1, op2, vl);
}

vint16m8_t test_vmerge_vvm_i16m8_ta(vbool2_t mask, vint16m8_t op1, vint16m8_t op2, size_t vl) {
  return vmerge_vvm_i16m8_ta(mask, op1, op2, vl);
}

vint16m8_t test_vmerge_vxm_i16m8_ta(vbool2_t mask, vint16m8_t op1, int16_t op2, size_t vl) {
  return vmerge_vxm_i16m8_ta(mask, op1, op2, vl);
}

vint32mf2_t test_vmerge_vvm_i32mf2_ta(vbool64_t mask, vint32mf2_t op1, vint32mf2_t op2, size_t vl) {
  return vmerge_vvm_i32mf2_ta(mask, op1, op2, vl);
}

vint32mf2_t test_vmerge_vxm_i32mf2_ta(vbool64_t mask, vint32mf2_t op1, int32_t op2, size_t vl) {
  return vmerge_vxm_i32mf2_ta(mask, op1, op2, vl);
}

vint32m1_t test_vmerge_vvm_i32m1_ta(vbool32_t mask, vint32m1_t op1, vint32m1_t op2, size_t vl) {
  return vmerge_vvm_i32m1_ta(mask, op1, op2, vl);
}

vint32m1_t test_vmerge_vxm_i32m1_ta(vbool32_t mask, vint32m1_t op1, int32_t op2, size_t vl) {
  return vmerge_vxm_i32m1_ta(mask, op1, op2, vl);
}

vint32m2_t test_vmerge_vvm_i32m2_ta(vbool16_t mask, vint32m2_t op1, vint32m2_t op2, size_t vl) {
  return vmerge_vvm_i32m2_ta(mask, op1, op2, vl);
}

vint32m2_t test_vmerge_vxm_i32m2_ta(vbool16_t mask, vint32m2_t op1, int32_t op2, size_t vl) {
  return vmerge_vxm_i32m2_ta(mask, op1, op2, vl);
}

vint32m4_t test_vmerge_vvm_i32m4_ta(vbool8_t mask, vint32m4_t op1, vint32m4_t op2, size_t vl) {
  return vmerge_vvm_i32m4_ta(mask, op1, op2, vl);
}

vint32m4_t test_vmerge_vxm_i32m4_ta(vbool8_t mask, vint32m4_t op1, int32_t op2, size_t vl) {
  return vmerge_vxm_i32m4_ta(mask, op1, op2, vl);
}

vint32m8_t test_vmerge_vvm_i32m8_ta(vbool4_t mask, vint32m8_t op1, vint32m8_t op2, size_t vl) {
  return vmerge_vvm_i32m8_ta(mask, op1, op2, vl);
}

vint32m8_t test_vmerge_vxm_i32m8_ta(vbool4_t mask, vint32m8_t op1, int32_t op2, size_t vl) {
  return vmerge_vxm_i32m8_ta(mask, op1, op2, vl);
}

vint64m1_t test_vmerge_vvm_i64m1_ta(vbool64_t mask, vint64m1_t op1, vint64m1_t op2, size_t vl) {
  return vmerge_vvm_i64m1_ta(mask, op1, op2, vl);
}

vint64m1_t test_vmerge_vxm_i64m1_ta(vbool64_t mask, vint64m1_t op1, int64_t op2, size_t vl) {
  return vmerge_vxm_i64m1_ta(mask, op1, op2, vl);
}

vint64m2_t test_vmerge_vvm_i64m2_ta(vbool32_t mask, vint64m2_t op1, vint64m2_t op2, size_t vl) {
  return vmerge_vvm_i64m2_ta(mask, op1, op2, vl);
}

vint64m2_t test_vmerge_vxm_i64m2_ta(vbool32_t mask, vint64m2_t op1, int64_t op2, size_t vl) {
  return vmerge_vxm_i64m2_ta(mask, op1, op2, vl);
}

vint64m4_t test_vmerge_vvm_i64m4_ta(vbool16_t mask, vint64m4_t op1, vint64m4_t op2, size_t vl) {
  return vmerge_vvm_i64m4_ta(mask, op1, op2, vl);
}

vint64m4_t test_vmerge_vxm_i64m4_ta(vbool16_t mask, vint64m4_t op1, int64_t op2, size_t vl) {
  return vmerge_vxm_i64m4_ta(mask, op1, op2, vl);
}

vint64m8_t test_vmerge_vvm_i64m8_ta(vbool8_t mask, vint64m8_t op1, vint64m8_t op2, size_t vl) {
  return vmerge_vvm_i64m8_ta(mask, op1, op2, vl);
}

vint64m8_t test_vmerge_vxm_i64m8_ta(vbool8_t mask, vint64m8_t op1, int64_t op2, size_t vl) {
  return vmerge_vxm_i64m8_ta(mask, op1, op2, vl);
}

vuint8mf8_t test_vmerge_vvm_u8mf8_ta(vbool64_t mask, vuint8mf8_t op1, vuint8mf8_t op2, size_t vl) {
  return vmerge_vvm_u8mf8_ta(mask, op1, op2, vl);
}

vuint8mf8_t test_vmerge_vxm_u8mf8_ta(vbool64_t mask, vuint8mf8_t op1, uint8_t op2, size_t vl) {
  return vmerge_vxm_u8mf8_ta(mask, op1, op2, vl);
}

vuint8mf4_t test_vmerge_vvm_u8mf4_ta(vbool32_t mask, vuint8mf4_t op1, vuint8mf4_t op2, size_t vl) {
  return vmerge_vvm_u8mf4_ta(mask, op1, op2, vl);
}

vuint8mf4_t test_vmerge_vxm_u8mf4_ta(vbool32_t mask, vuint8mf4_t op1, uint8_t op2, size_t vl) {
  return vmerge_vxm_u8mf4_ta(mask, op1, op2, vl);
}

vuint8mf2_t test_vmerge_vvm_u8mf2_ta(vbool16_t mask, vuint8mf2_t op1, vuint8mf2_t op2, size_t vl) {
  return vmerge_vvm_u8mf2_ta(mask, op1, op2, vl);
}

vuint8mf2_t test_vmerge_vxm_u8mf2_ta(vbool16_t mask, vuint8mf2_t op1, uint8_t op2, size_t vl) {
  return vmerge_vxm_u8mf2_ta(mask, op1, op2, vl);
}

vuint8m1_t test_vmerge_vvm_u8m1_ta(vbool8_t mask, vuint8m1_t op1, vuint8m1_t op2, size_t vl) {
  return vmerge_vvm_u8m1_ta(mask, op1, op2, vl);
}

vuint8m1_t test_vmerge_vxm_u8m1_ta(vbool8_t mask, vuint8m1_t op1, uint8_t op2, size_t vl) {
  return vmerge_vxm_u8m1_ta(mask, op1, op2, vl);
}

vuint8m2_t test_vmerge_vvm_u8m2_ta(vbool4_t mask, vuint8m2_t op1, vuint8m2_t op2, size_t vl) {
  return vmerge_vvm_u8m2_ta(mask, op1, op2, vl);
}

vuint8m2_t test_vmerge_vxm_u8m2_ta(vbool4_t mask, vuint8m2_t op1, uint8_t op2, size_t vl) {
  return vmerge_vxm_u8m2_ta(mask, op1, op2, vl);
}

vuint8m4_t test_vmerge_vvm_u8m4_ta(vbool2_t mask, vuint8m4_t op1, vuint8m4_t op2, size_t vl) {
  return vmerge_vvm_u8m4_ta(mask, op1, op2, vl);
}

vuint8m4_t test_vmerge_vxm_u8m4_ta(vbool2_t mask, vuint8m4_t op1, uint8_t op2, size_t vl) {
  return vmerge_vxm_u8m4_ta(mask, op1, op2, vl);
}

vuint8m8_t test_vmerge_vvm_u8m8_ta(vbool1_t mask, vuint8m8_t op1, vuint8m8_t op2, size_t vl) {
  return vmerge_vvm_u8m8_ta(mask, op1, op2, vl);
}

vuint8m8_t test_vmerge_vxm_u8m8_ta(vbool1_t mask, vuint8m8_t op1, uint8_t op2, size_t vl) {
  return vmerge_vxm_u8m8_ta(mask, op1, op2, vl);
}

vuint16mf4_t test_vmerge_vvm_u16mf4_ta(vbool64_t mask, vuint16mf4_t op1, vuint16mf4_t op2, size_t vl) {
  return vmerge_vvm_u16mf4_ta(mask, op1, op2, vl);
}

vuint16mf4_t test_vmerge_vxm_u16mf4_ta(vbool64_t mask, vuint16mf4_t op1, uint16_t op2, size_t vl) {
  return vmerge_vxm_u16mf4_ta(mask, op1, op2, vl);
}

vuint16mf2_t test_vmerge_vvm_u16mf2_ta(vbool32_t mask, vuint16mf2_t op1, vuint16mf2_t op2, size_t vl) {
  return vmerge_vvm_u16mf2_ta(mask, op1, op2, vl);
}

vuint16mf2_t test_vmerge_vxm_u16mf2_ta(vbool32_t mask, vuint16mf2_t op1, uint16_t op2, size_t vl) {
  return vmerge_vxm_u16mf2_ta(mask, op1, op2, vl);
}

vuint16m1_t test_vmerge_vvm_u16m1_ta(vbool16_t mask, vuint16m1_t op1, vuint16m1_t op2, size_t vl) {
  return vmerge_vvm_u16m1_ta(mask, op1, op2, vl);
}

vuint16m1_t test_vmerge_vxm_u16m1_ta(vbool16_t mask, vuint16m1_t op1, uint16_t op2, size_t vl) {
  return vmerge_vxm_u16m1_ta(mask, op1, op2, vl);
}

vuint16m2_t test_vmerge_vvm_u16m2_ta(vbool8_t mask, vuint16m2_t op1, vuint16m2_t op2, size_t vl) {
  return vmerge_vvm_u16m2_ta(mask, op1, op2, vl);
}

vuint16m2_t test_vmerge_vxm_u16m2_ta(vbool8_t mask, vuint16m2_t op1, uint16_t op2, size_t vl) {
  return vmerge_vxm_u16m2_ta(mask, op1, op2, vl);
}

vuint16m4_t test_vmerge_vvm_u16m4_ta(vbool4_t mask, vuint16m4_t op1, vuint16m4_t op2, size_t vl) {
  return vmerge_vvm_u16m4_ta(mask, op1, op2, vl);
}

vuint16m4_t test_vmerge_vxm_u16m4_ta(vbool4_t mask, vuint16m4_t op1, uint16_t op2, size_t vl) {
  return vmerge_vxm_u16m4_ta(mask, op1, op2, vl);
}

vuint16m8_t test_vmerge_vvm_u16m8_ta(vbool2_t mask, vuint16m8_t op1, vuint16m8_t op2, size_t vl) {
  return vmerge_vvm_u16m8_ta(mask, op1, op2, vl);
}

vuint16m8_t test_vmerge_vxm_u16m8_ta(vbool2_t mask, vuint16m8_t op1, uint16_t op2, size_t vl) {
  return vmerge_vxm_u16m8_ta(mask, op1, op2, vl);
}

vuint32mf2_t test_vmerge_vvm_u32mf2_ta(vbool64_t mask, vuint32mf2_t op1, vuint32mf2_t op2, size_t vl) {
  return vmerge_vvm_u32mf2_ta(mask, op1, op2, vl);
}

vuint32mf2_t test_vmerge_vxm_u32mf2_ta(vbool64_t mask, vuint32mf2_t op1, uint32_t op2, size_t vl) {
  return vmerge_vxm_u32mf2_ta(mask, op1, op2, vl);
}

vuint32m1_t test_vmerge_vvm_u32m1_ta(vbool32_t mask, vuint32m1_t op1, vuint32m1_t op2, size_t vl) {
  return vmerge_vvm_u32m1_ta(mask, op1, op2, vl);
}

vuint32m1_t test_vmerge_vxm_u32m1_ta(vbool32_t mask, vuint32m1_t op1, uint32_t op2, size_t vl) {
  return vmerge_vxm_u32m1_ta(mask, op1, op2, vl);
}

vuint32m2_t test_vmerge_vvm_u32m2_ta(vbool16_t mask, vuint32m2_t op1, vuint32m2_t op2, size_t vl) {
  return vmerge_vvm_u32m2_ta(mask, op1, op2, vl);
}

vuint32m2_t test_vmerge_vxm_u32m2_ta(vbool16_t mask, vuint32m2_t op1, uint32_t op2, size_t vl) {
  return vmerge_vxm_u32m2_ta(mask, op1, op2, vl);
}

vuint32m4_t test_vmerge_vvm_u32m4_ta(vbool8_t mask, vuint32m4_t op1, vuint32m4_t op2, size_t vl) {
  return vmerge_vvm_u32m4_ta(mask, op1, op2, vl);
}

vuint32m4_t test_vmerge_vxm_u32m4_ta(vbool8_t mask, vuint32m4_t op1, uint32_t op2, size_t vl) {
  return vmerge_vxm_u32m4_ta(mask, op1, op2, vl);
}

vuint32m8_t test_vmerge_vvm_u32m8_ta(vbool4_t mask, vuint32m8_t op1, vuint32m8_t op2, size_t vl) {
  return vmerge_vvm_u32m8_ta(mask, op1, op2, vl);
}

vuint32m8_t test_vmerge_vxm_u32m8_ta(vbool4_t mask, vuint32m8_t op1, uint32_t op2, size_t vl) {
  return vmerge_vxm_u32m8_ta(mask, op1, op2, vl);
}

vuint64m1_t test_vmerge_vvm_u64m1_ta(vbool64_t mask, vuint64m1_t op1, vuint64m1_t op2, size_t vl) {
  return vmerge_vvm_u64m1_ta(mask, op1, op2, vl);
}

vuint64m1_t test_vmerge_vxm_u64m1_ta(vbool64_t mask, vuint64m1_t op1, uint64_t op2, size_t vl) {
  return vmerge_vxm_u64m1_ta(mask, op1, op2, vl);
}

vuint64m2_t test_vmerge_vvm_u64m2_ta(vbool32_t mask, vuint64m2_t op1, vuint64m2_t op2, size_t vl) {
  return vmerge_vvm_u64m2_ta(mask, op1, op2, vl);
}

vuint64m2_t test_vmerge_vxm_u64m2_ta(vbool32_t mask, vuint64m2_t op1, uint64_t op2, size_t vl) {
  return vmerge_vxm_u64m2_ta(mask, op1, op2, vl);
}

vuint64m4_t test_vmerge_vvm_u64m4_ta(vbool16_t mask, vuint64m4_t op1, vuint64m4_t op2, size_t vl) {
  return vmerge_vvm_u64m4_ta(mask, op1, op2, vl);
}

vuint64m4_t test_vmerge_vxm_u64m4_ta(vbool16_t mask, vuint64m4_t op1, uint64_t op2, size_t vl) {
  return vmerge_vxm_u64m4_ta(mask, op1, op2, vl);
}

vuint64m8_t test_vmerge_vvm_u64m8_ta(vbool8_t mask, vuint64m8_t op1, vuint64m8_t op2, size_t vl) {
  return vmerge_vvm_u64m8_ta(mask, op1, op2, vl);
}

vuint64m8_t test_vmerge_vxm_u64m8_ta(vbool8_t mask, vuint64m8_t op1, uint64_t op2, size_t vl) {
  return vmerge_vxm_u64m8_ta(mask, op1, op2, vl);
}

vfloat16mf4_t test_vmerge_vvm_f16mf4_tu(vbool64_t mask, vfloat16mf4_t maskedoff, vfloat16mf4_t op1, vfloat16mf4_t op2, size_t vl) {
  return vmerge_vvm_f16mf4_tu(mask, maskedoff, op1, op2, vl);
}

vfloat16mf2_t test_vmerge_vvm_f16mf2_tu(vbool32_t mask, vfloat16mf2_t maskedoff, vfloat16mf2_t op1, vfloat16mf2_t op2, size_t vl) {
  return vmerge_vvm_f16mf2_tu(mask, maskedoff, op1, op2, vl);
}

vfloat16m1_t test_vmerge_vvm_f16m1_tu(vbool16_t mask, vfloat16m1_t maskedoff, vfloat16m1_t op1, vfloat16m1_t op2, size_t vl) {
  return vmerge_vvm_f16m1_tu(mask, maskedoff, op1, op2, vl);
}

vfloat16m2_t test_vmerge_vvm_f16m2_tu(vbool8_t mask, vfloat16m2_t maskedoff, vfloat16m2_t op1, vfloat16m2_t op2, size_t vl) {
  return vmerge_vvm_f16m2_tu(mask, maskedoff, op1, op2, vl);
}

vfloat16m4_t test_vmerge_vvm_f16m4_tu(vbool4_t mask, vfloat16m4_t maskedoff, vfloat16m4_t op1, vfloat16m4_t op2, size_t vl) {
  return vmerge_vvm_f16m4_tu(mask, maskedoff, op1, op2, vl);
}

vfloat16m8_t test_vmerge_vvm_f16m8_tu(vbool2_t mask, vfloat16m8_t maskedoff, vfloat16m8_t op1, vfloat16m8_t op2, size_t vl) {
  return vmerge_vvm_f16m8_tu(mask, maskedoff, op1, op2, vl);
}

vfloat32mf2_t test_vmerge_vvm_f32mf2_tu(vbool64_t mask, vfloat32mf2_t maskedoff, vfloat32mf2_t op1, vfloat32mf2_t op2, size_t vl) {
  return vmerge_vvm_f32mf2_tu(mask, maskedoff, op1, op2, vl);
}

vfloat32m1_t test_vmerge_vvm_f32m1_tu(vbool32_t mask, vfloat32m1_t maskedoff, vfloat32m1_t op1, vfloat32m1_t op2, size_t vl) {
  return vmerge_vvm_f32m1_tu(mask, maskedoff, op1, op2, vl);
}

vfloat32m2_t test_vmerge_vvm_f32m2_tu(vbool16_t mask, vfloat32m2_t maskedoff, vfloat32m2_t op1, vfloat32m2_t op2, size_t vl) {
  return vmerge_vvm_f32m2_tu(mask, maskedoff, op1, op2, vl);
}

vfloat32m4_t test_vmerge_vvm_f32m4_tu(vbool8_t mask, vfloat32m4_t maskedoff, vfloat32m4_t op1, vfloat32m4_t op2, size_t vl) {
  return vmerge_vvm_f32m4_tu(mask, maskedoff, op1, op2, vl);
}

vfloat32m8_t test_vmerge_vvm_f32m8_tu(vbool4_t mask, vfloat32m8_t maskedoff, vfloat32m8_t op1, vfloat32m8_t op2, size_t vl) {
  return vmerge_vvm_f32m8_tu(mask, maskedoff, op1, op2, vl);
}

vfloat64m1_t test_vmerge_vvm_f64m1_tu(vbool64_t mask, vfloat64m1_t maskedoff, vfloat64m1_t op1, vfloat64m1_t op2, size_t vl) {
  return vmerge_vvm_f64m1_tu(mask, maskedoff, op1, op2, vl);
}

vfloat64m2_t test_vmerge_vvm_f64m2_tu(vbool32_t mask, vfloat64m2_t maskedoff, vfloat64m2_t op1, vfloat64m2_t op2, size_t vl) {
  return vmerge_vvm_f64m2_tu(mask, maskedoff, op1, op2, vl);
}

vfloat64m4_t test_vmerge_vvm_f64m4_tu(vbool16_t mask, vfloat64m4_t maskedoff, vfloat64m4_t op1, vfloat64m4_t op2, size_t vl) {
  return vmerge_vvm_f64m4_tu(mask, maskedoff, op1, op2, vl);
}

vfloat64m8_t test_vmerge_vvm_f64m8_tu(vbool8_t mask, vfloat64m8_t maskedoff, vfloat64m8_t op1, vfloat64m8_t op2, size_t vl) {
  return vmerge_vvm_f64m8_tu(mask, maskedoff, op1, op2, vl);
}

vfloat16mf4_t test_vmerge_vvm_f16mf4_ta(vbool64_t mask, vfloat16mf4_t op1, vfloat16mf4_t op2, size_t vl) {
  return vmerge_vvm_f16mf4_ta(mask, op1, op2, vl);
}

vfloat16mf2_t test_vmerge_vvm_f16mf2_ta(vbool32_t mask, vfloat16mf2_t op1, vfloat16mf2_t op2, size_t vl) {
  return vmerge_vvm_f16mf2_ta(mask, op1, op2, vl);
}

vfloat16m1_t test_vmerge_vvm_f16m1_ta(vbool16_t mask, vfloat16m1_t op1, vfloat16m1_t op2, size_t vl) {
  return vmerge_vvm_f16m1_ta(mask, op1, op2, vl);
}

vfloat16m2_t test_vmerge_vvm_f16m2_ta(vbool8_t mask, vfloat16m2_t op1, vfloat16m2_t op2, size_t vl) {
  return vmerge_vvm_f16m2_ta(mask, op1, op2, vl);
}

vfloat16m4_t test_vmerge_vvm_f16m4_ta(vbool4_t mask, vfloat16m4_t op1, vfloat16m4_t op2, size_t vl) {
  return vmerge_vvm_f16m4_ta(mask, op1, op2, vl);
}

vfloat16m8_t test_vmerge_vvm_f16m8_ta(vbool2_t mask, vfloat16m8_t op1, vfloat16m8_t op2, size_t vl) {
  return vmerge_vvm_f16m8_ta(mask, op1, op2, vl);
}

vfloat32mf2_t test_vmerge_vvm_f32mf2_ta(vbool64_t mask, vfloat32mf2_t op1, vfloat32mf2_t op2, size_t vl) {
  return vmerge_vvm_f32mf2_ta(mask, op1, op2, vl);
}

vfloat32m1_t test_vmerge_vvm_f32m1_ta(vbool32_t mask, vfloat32m1_t op1, vfloat32m1_t op2, size_t vl) {
  return vmerge_vvm_f32m1_ta(mask, op1, op2, vl);
}

vfloat32m2_t test_vmerge_vvm_f32m2_ta(vbool16_t mask, vfloat32m2_t op1, vfloat32m2_t op2, size_t vl) {
  return vmerge_vvm_f32m2_ta(mask, op1, op2, vl);
}

vfloat32m4_t test_vmerge_vvm_f32m4_ta(vbool8_t mask, vfloat32m4_t op1, vfloat32m4_t op2, size_t vl) {
  return vmerge_vvm_f32m4_ta(mask, op1, op2, vl);
}

vfloat32m8_t test_vmerge_vvm_f32m8_ta(vbool4_t mask, vfloat32m8_t op1, vfloat32m8_t op2, size_t vl) {
  return vmerge_vvm_f32m8_ta(mask, op1, op2, vl);
}

vfloat64m1_t test_vmerge_vvm_f64m1_ta(vbool64_t mask, vfloat64m1_t op1, vfloat64m1_t op2, size_t vl) {
  return vmerge_vvm_f64m1_ta(mask, op1, op2, vl);
}

vfloat64m2_t test_vmerge_vvm_f64m2_ta(vbool32_t mask, vfloat64m2_t op1, vfloat64m2_t op2, size_t vl) {
  return vmerge_vvm_f64m2_ta(mask, op1, op2, vl);
}

vfloat64m4_t test_vmerge_vvm_f64m4_ta(vbool16_t mask, vfloat64m4_t op1, vfloat64m4_t op2, size_t vl) {
  return vmerge_vvm_f64m4_ta(mask, op1, op2, vl);
}

vfloat64m8_t test_vmerge_vvm_f64m8_ta(vbool8_t mask, vfloat64m8_t op1, vfloat64m8_t op2, size_t vl) {
  return vmerge_vvm_f64m8_ta(mask, op1, op2, vl);
}

