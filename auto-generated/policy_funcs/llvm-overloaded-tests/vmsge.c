// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -target-feature +zfh \
// RUN:   -target-feature +experimental-zvfh -disable-O0-optnone  \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

vbool64_t test_vmsge_vv_i8mf8_b64_mu(vbool64_t mask, vbool64_t maskedoff, vint8mf8_t op1, vint8mf8_t op2, size_t vl) {
  return vmsge_mu(mask, maskedoff, op1, op2, vl);
}

vbool64_t test_vmsge_vx_i8mf8_b64_mu(vbool64_t mask, vbool64_t maskedoff, vint8mf8_t op1, int8_t op2, size_t vl) {
  return vmsge_mu(mask, maskedoff, op1, op2, vl);
}

vbool32_t test_vmsge_vv_i8mf4_b32_mu(vbool32_t mask, vbool32_t maskedoff, vint8mf4_t op1, vint8mf4_t op2, size_t vl) {
  return vmsge_mu(mask, maskedoff, op1, op2, vl);
}

vbool32_t test_vmsge_vx_i8mf4_b32_mu(vbool32_t mask, vbool32_t maskedoff, vint8mf4_t op1, int8_t op2, size_t vl) {
  return vmsge_mu(mask, maskedoff, op1, op2, vl);
}

vbool16_t test_vmsge_vv_i8mf2_b16_mu(vbool16_t mask, vbool16_t maskedoff, vint8mf2_t op1, vint8mf2_t op2, size_t vl) {
  return vmsge_mu(mask, maskedoff, op1, op2, vl);
}

vbool16_t test_vmsge_vx_i8mf2_b16_mu(vbool16_t mask, vbool16_t maskedoff, vint8mf2_t op1, int8_t op2, size_t vl) {
  return vmsge_mu(mask, maskedoff, op1, op2, vl);
}

vbool8_t test_vmsge_vv_i8m1_b8_mu(vbool8_t mask, vbool8_t maskedoff, vint8m1_t op1, vint8m1_t op2, size_t vl) {
  return vmsge_mu(mask, maskedoff, op1, op2, vl);
}

vbool8_t test_vmsge_vx_i8m1_b8_mu(vbool8_t mask, vbool8_t maskedoff, vint8m1_t op1, int8_t op2, size_t vl) {
  return vmsge_mu(mask, maskedoff, op1, op2, vl);
}

vbool4_t test_vmsge_vv_i8m2_b4_mu(vbool4_t mask, vbool4_t maskedoff, vint8m2_t op1, vint8m2_t op2, size_t vl) {
  return vmsge_mu(mask, maskedoff, op1, op2, vl);
}

vbool4_t test_vmsge_vx_i8m2_b4_mu(vbool4_t mask, vbool4_t maskedoff, vint8m2_t op1, int8_t op2, size_t vl) {
  return vmsge_mu(mask, maskedoff, op1, op2, vl);
}

vbool2_t test_vmsge_vv_i8m4_b2_mu(vbool2_t mask, vbool2_t maskedoff, vint8m4_t op1, vint8m4_t op2, size_t vl) {
  return vmsge_mu(mask, maskedoff, op1, op2, vl);
}

vbool2_t test_vmsge_vx_i8m4_b2_mu(vbool2_t mask, vbool2_t maskedoff, vint8m4_t op1, int8_t op2, size_t vl) {
  return vmsge_mu(mask, maskedoff, op1, op2, vl);
}

vbool1_t test_vmsge_vv_i8m8_b1_mu(vbool1_t mask, vbool1_t maskedoff, vint8m8_t op1, vint8m8_t op2, size_t vl) {
  return vmsge_mu(mask, maskedoff, op1, op2, vl);
}

vbool1_t test_vmsge_vx_i8m8_b1_mu(vbool1_t mask, vbool1_t maskedoff, vint8m8_t op1, int8_t op2, size_t vl) {
  return vmsge_mu(mask, maskedoff, op1, op2, vl);
}

vbool64_t test_vmsge_vv_i16mf4_b64_mu(vbool64_t mask, vbool64_t maskedoff, vint16mf4_t op1, vint16mf4_t op2, size_t vl) {
  return vmsge_mu(mask, maskedoff, op1, op2, vl);
}

vbool64_t test_vmsge_vx_i16mf4_b64_mu(vbool64_t mask, vbool64_t maskedoff, vint16mf4_t op1, int16_t op2, size_t vl) {
  return vmsge_mu(mask, maskedoff, op1, op2, vl);
}

vbool32_t test_vmsge_vv_i16mf2_b32_mu(vbool32_t mask, vbool32_t maskedoff, vint16mf2_t op1, vint16mf2_t op2, size_t vl) {
  return vmsge_mu(mask, maskedoff, op1, op2, vl);
}

vbool32_t test_vmsge_vx_i16mf2_b32_mu(vbool32_t mask, vbool32_t maskedoff, vint16mf2_t op1, int16_t op2, size_t vl) {
  return vmsge_mu(mask, maskedoff, op1, op2, vl);
}

vbool16_t test_vmsge_vv_i16m1_b16_mu(vbool16_t mask, vbool16_t maskedoff, vint16m1_t op1, vint16m1_t op2, size_t vl) {
  return vmsge_mu(mask, maskedoff, op1, op2, vl);
}

vbool16_t test_vmsge_vx_i16m1_b16_mu(vbool16_t mask, vbool16_t maskedoff, vint16m1_t op1, int16_t op2, size_t vl) {
  return vmsge_mu(mask, maskedoff, op1, op2, vl);
}

vbool8_t test_vmsge_vv_i16m2_b8_mu(vbool8_t mask, vbool8_t maskedoff, vint16m2_t op1, vint16m2_t op2, size_t vl) {
  return vmsge_mu(mask, maskedoff, op1, op2, vl);
}

vbool8_t test_vmsge_vx_i16m2_b8_mu(vbool8_t mask, vbool8_t maskedoff, vint16m2_t op1, int16_t op2, size_t vl) {
  return vmsge_mu(mask, maskedoff, op1, op2, vl);
}

vbool4_t test_vmsge_vv_i16m4_b4_mu(vbool4_t mask, vbool4_t maskedoff, vint16m4_t op1, vint16m4_t op2, size_t vl) {
  return vmsge_mu(mask, maskedoff, op1, op2, vl);
}

vbool4_t test_vmsge_vx_i16m4_b4_mu(vbool4_t mask, vbool4_t maskedoff, vint16m4_t op1, int16_t op2, size_t vl) {
  return vmsge_mu(mask, maskedoff, op1, op2, vl);
}

vbool2_t test_vmsge_vv_i16m8_b2_mu(vbool2_t mask, vbool2_t maskedoff, vint16m8_t op1, vint16m8_t op2, size_t vl) {
  return vmsge_mu(mask, maskedoff, op1, op2, vl);
}

vbool2_t test_vmsge_vx_i16m8_b2_mu(vbool2_t mask, vbool2_t maskedoff, vint16m8_t op1, int16_t op2, size_t vl) {
  return vmsge_mu(mask, maskedoff, op1, op2, vl);
}

vbool64_t test_vmsge_vv_i32mf2_b64_mu(vbool64_t mask, vbool64_t maskedoff, vint32mf2_t op1, vint32mf2_t op2, size_t vl) {
  return vmsge_mu(mask, maskedoff, op1, op2, vl);
}

vbool64_t test_vmsge_vx_i32mf2_b64_mu(vbool64_t mask, vbool64_t maskedoff, vint32mf2_t op1, int32_t op2, size_t vl) {
  return vmsge_mu(mask, maskedoff, op1, op2, vl);
}

vbool32_t test_vmsge_vv_i32m1_b32_mu(vbool32_t mask, vbool32_t maskedoff, vint32m1_t op1, vint32m1_t op2, size_t vl) {
  return vmsge_mu(mask, maskedoff, op1, op2, vl);
}

vbool32_t test_vmsge_vx_i32m1_b32_mu(vbool32_t mask, vbool32_t maskedoff, vint32m1_t op1, int32_t op2, size_t vl) {
  return vmsge_mu(mask, maskedoff, op1, op2, vl);
}

vbool16_t test_vmsge_vv_i32m2_b16_mu(vbool16_t mask, vbool16_t maskedoff, vint32m2_t op1, vint32m2_t op2, size_t vl) {
  return vmsge_mu(mask, maskedoff, op1, op2, vl);
}

vbool16_t test_vmsge_vx_i32m2_b16_mu(vbool16_t mask, vbool16_t maskedoff, vint32m2_t op1, int32_t op2, size_t vl) {
  return vmsge_mu(mask, maskedoff, op1, op2, vl);
}

vbool8_t test_vmsge_vv_i32m4_b8_mu(vbool8_t mask, vbool8_t maskedoff, vint32m4_t op1, vint32m4_t op2, size_t vl) {
  return vmsge_mu(mask, maskedoff, op1, op2, vl);
}

vbool8_t test_vmsge_vx_i32m4_b8_mu(vbool8_t mask, vbool8_t maskedoff, vint32m4_t op1, int32_t op2, size_t vl) {
  return vmsge_mu(mask, maskedoff, op1, op2, vl);
}

vbool4_t test_vmsge_vv_i32m8_b4_mu(vbool4_t mask, vbool4_t maskedoff, vint32m8_t op1, vint32m8_t op2, size_t vl) {
  return vmsge_mu(mask, maskedoff, op1, op2, vl);
}

vbool4_t test_vmsge_vx_i32m8_b4_mu(vbool4_t mask, vbool4_t maskedoff, vint32m8_t op1, int32_t op2, size_t vl) {
  return vmsge_mu(mask, maskedoff, op1, op2, vl);
}

vbool64_t test_vmsge_vv_i64m1_b64_mu(vbool64_t mask, vbool64_t maskedoff, vint64m1_t op1, vint64m1_t op2, size_t vl) {
  return vmsge_mu(mask, maskedoff, op1, op2, vl);
}

vbool64_t test_vmsge_vx_i64m1_b64_mu(vbool64_t mask, vbool64_t maskedoff, vint64m1_t op1, int64_t op2, size_t vl) {
  return vmsge_mu(mask, maskedoff, op1, op2, vl);
}

vbool32_t test_vmsge_vv_i64m2_b32_mu(vbool32_t mask, vbool32_t maskedoff, vint64m2_t op1, vint64m2_t op2, size_t vl) {
  return vmsge_mu(mask, maskedoff, op1, op2, vl);
}

vbool32_t test_vmsge_vx_i64m2_b32_mu(vbool32_t mask, vbool32_t maskedoff, vint64m2_t op1, int64_t op2, size_t vl) {
  return vmsge_mu(mask, maskedoff, op1, op2, vl);
}

vbool16_t test_vmsge_vv_i64m4_b16_mu(vbool16_t mask, vbool16_t maskedoff, vint64m4_t op1, vint64m4_t op2, size_t vl) {
  return vmsge_mu(mask, maskedoff, op1, op2, vl);
}

vbool16_t test_vmsge_vx_i64m4_b16_mu(vbool16_t mask, vbool16_t maskedoff, vint64m4_t op1, int64_t op2, size_t vl) {
  return vmsge_mu(mask, maskedoff, op1, op2, vl);
}

vbool8_t test_vmsge_vv_i64m8_b8_mu(vbool8_t mask, vbool8_t maskedoff, vint64m8_t op1, vint64m8_t op2, size_t vl) {
  return vmsge_mu(mask, maskedoff, op1, op2, vl);
}

vbool8_t test_vmsge_vx_i64m8_b8_mu(vbool8_t mask, vbool8_t maskedoff, vint64m8_t op1, int64_t op2, size_t vl) {
  return vmsge_mu(mask, maskedoff, op1, op2, vl);
}

