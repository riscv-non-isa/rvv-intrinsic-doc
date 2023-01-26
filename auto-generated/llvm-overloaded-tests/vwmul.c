// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -disable-O0-optnone \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

vint16mf4_t test_vwmul_vv_i16mf4(vint8mf8_t op1, vint8mf8_t op2, size_t vl) {
  return __riscv_vwmul(op1, op2, vl);
}

vint16mf4_t test_vwmul_vx_i16mf4(vint8mf8_t op1, int8_t op2, size_t vl) {
  return __riscv_vwmul(op1, op2, vl);
}

vint16mf2_t test_vwmul_vv_i16mf2(vint8mf4_t op1, vint8mf4_t op2, size_t vl) {
  return __riscv_vwmul(op1, op2, vl);
}

vint16mf2_t test_vwmul_vx_i16mf2(vint8mf4_t op1, int8_t op2, size_t vl) {
  return __riscv_vwmul(op1, op2, vl);
}

vint16m1_t test_vwmul_vv_i16m1(vint8mf2_t op1, vint8mf2_t op2, size_t vl) {
  return __riscv_vwmul(op1, op2, vl);
}

vint16m1_t test_vwmul_vx_i16m1(vint8mf2_t op1, int8_t op2, size_t vl) {
  return __riscv_vwmul(op1, op2, vl);
}

vint16m2_t test_vwmul_vv_i16m2(vint8m1_t op1, vint8m1_t op2, size_t vl) {
  return __riscv_vwmul(op1, op2, vl);
}

vint16m2_t test_vwmul_vx_i16m2(vint8m1_t op1, int8_t op2, size_t vl) {
  return __riscv_vwmul(op1, op2, vl);
}

vint16m4_t test_vwmul_vv_i16m4(vint8m2_t op1, vint8m2_t op2, size_t vl) {
  return __riscv_vwmul(op1, op2, vl);
}

vint16m4_t test_vwmul_vx_i16m4(vint8m2_t op1, int8_t op2, size_t vl) {
  return __riscv_vwmul(op1, op2, vl);
}

vint16m8_t test_vwmul_vv_i16m8(vint8m4_t op1, vint8m4_t op2, size_t vl) {
  return __riscv_vwmul(op1, op2, vl);
}

vint16m8_t test_vwmul_vx_i16m8(vint8m4_t op1, int8_t op2, size_t vl) {
  return __riscv_vwmul(op1, op2, vl);
}

vint32mf2_t test_vwmul_vv_i32mf2(vint16mf4_t op1, vint16mf4_t op2, size_t vl) {
  return __riscv_vwmul(op1, op2, vl);
}

vint32mf2_t test_vwmul_vx_i32mf2(vint16mf4_t op1, int16_t op2, size_t vl) {
  return __riscv_vwmul(op1, op2, vl);
}

vint32m1_t test_vwmul_vv_i32m1(vint16mf2_t op1, vint16mf2_t op2, size_t vl) {
  return __riscv_vwmul(op1, op2, vl);
}

vint32m1_t test_vwmul_vx_i32m1(vint16mf2_t op1, int16_t op2, size_t vl) {
  return __riscv_vwmul(op1, op2, vl);
}

vint32m2_t test_vwmul_vv_i32m2(vint16m1_t op1, vint16m1_t op2, size_t vl) {
  return __riscv_vwmul(op1, op2, vl);
}

vint32m2_t test_vwmul_vx_i32m2(vint16m1_t op1, int16_t op2, size_t vl) {
  return __riscv_vwmul(op1, op2, vl);
}

vint32m4_t test_vwmul_vv_i32m4(vint16m2_t op1, vint16m2_t op2, size_t vl) {
  return __riscv_vwmul(op1, op2, vl);
}

vint32m4_t test_vwmul_vx_i32m4(vint16m2_t op1, int16_t op2, size_t vl) {
  return __riscv_vwmul(op1, op2, vl);
}

vint32m8_t test_vwmul_vv_i32m8(vint16m4_t op1, vint16m4_t op2, size_t vl) {
  return __riscv_vwmul(op1, op2, vl);
}

vint32m8_t test_vwmul_vx_i32m8(vint16m4_t op1, int16_t op2, size_t vl) {
  return __riscv_vwmul(op1, op2, vl);
}

vint64m1_t test_vwmul_vv_i64m1(vint32mf2_t op1, vint32mf2_t op2, size_t vl) {
  return __riscv_vwmul(op1, op2, vl);
}

vint64m1_t test_vwmul_vx_i64m1(vint32mf2_t op1, int32_t op2, size_t vl) {
  return __riscv_vwmul(op1, op2, vl);
}

vint64m2_t test_vwmul_vv_i64m2(vint32m1_t op1, vint32m1_t op2, size_t vl) {
  return __riscv_vwmul(op1, op2, vl);
}

vint64m2_t test_vwmul_vx_i64m2(vint32m1_t op1, int32_t op2, size_t vl) {
  return __riscv_vwmul(op1, op2, vl);
}

vint64m4_t test_vwmul_vv_i64m4(vint32m2_t op1, vint32m2_t op2, size_t vl) {
  return __riscv_vwmul(op1, op2, vl);
}

vint64m4_t test_vwmul_vx_i64m4(vint32m2_t op1, int32_t op2, size_t vl) {
  return __riscv_vwmul(op1, op2, vl);
}

vint64m8_t test_vwmul_vv_i64m8(vint32m4_t op1, vint32m4_t op2, size_t vl) {
  return __riscv_vwmul(op1, op2, vl);
}

vint64m8_t test_vwmul_vx_i64m8(vint32m4_t op1, int32_t op2, size_t vl) {
  return __riscv_vwmul(op1, op2, vl);
}

vint16mf4_t test_vwmul_vv_i16mf4_m(vbool64_t mask, vint8mf8_t op1, vint8mf8_t op2, size_t vl) {
  return __riscv_vwmul(mask, op1, op2, vl);
}

vint16mf4_t test_vwmul_vx_i16mf4_m(vbool64_t mask, vint8mf8_t op1, int8_t op2, size_t vl) {
  return __riscv_vwmul(mask, op1, op2, vl);
}

vint16mf2_t test_vwmul_vv_i16mf2_m(vbool32_t mask, vint8mf4_t op1, vint8mf4_t op2, size_t vl) {
  return __riscv_vwmul(mask, op1, op2, vl);
}

vint16mf2_t test_vwmul_vx_i16mf2_m(vbool32_t mask, vint8mf4_t op1, int8_t op2, size_t vl) {
  return __riscv_vwmul(mask, op1, op2, vl);
}

vint16m1_t test_vwmul_vv_i16m1_m(vbool16_t mask, vint8mf2_t op1, vint8mf2_t op2, size_t vl) {
  return __riscv_vwmul(mask, op1, op2, vl);
}

vint16m1_t test_vwmul_vx_i16m1_m(vbool16_t mask, vint8mf2_t op1, int8_t op2, size_t vl) {
  return __riscv_vwmul(mask, op1, op2, vl);
}

vint16m2_t test_vwmul_vv_i16m2_m(vbool8_t mask, vint8m1_t op1, vint8m1_t op2, size_t vl) {
  return __riscv_vwmul(mask, op1, op2, vl);
}

vint16m2_t test_vwmul_vx_i16m2_m(vbool8_t mask, vint8m1_t op1, int8_t op2, size_t vl) {
  return __riscv_vwmul(mask, op1, op2, vl);
}

vint16m4_t test_vwmul_vv_i16m4_m(vbool4_t mask, vint8m2_t op1, vint8m2_t op2, size_t vl) {
  return __riscv_vwmul(mask, op1, op2, vl);
}

vint16m4_t test_vwmul_vx_i16m4_m(vbool4_t mask, vint8m2_t op1, int8_t op2, size_t vl) {
  return __riscv_vwmul(mask, op1, op2, vl);
}

vint16m8_t test_vwmul_vv_i16m8_m(vbool2_t mask, vint8m4_t op1, vint8m4_t op2, size_t vl) {
  return __riscv_vwmul(mask, op1, op2, vl);
}

vint16m8_t test_vwmul_vx_i16m8_m(vbool2_t mask, vint8m4_t op1, int8_t op2, size_t vl) {
  return __riscv_vwmul(mask, op1, op2, vl);
}

vint32mf2_t test_vwmul_vv_i32mf2_m(vbool64_t mask, vint16mf4_t op1, vint16mf4_t op2, size_t vl) {
  return __riscv_vwmul(mask, op1, op2, vl);
}

vint32mf2_t test_vwmul_vx_i32mf2_m(vbool64_t mask, vint16mf4_t op1, int16_t op2, size_t vl) {
  return __riscv_vwmul(mask, op1, op2, vl);
}

vint32m1_t test_vwmul_vv_i32m1_m(vbool32_t mask, vint16mf2_t op1, vint16mf2_t op2, size_t vl) {
  return __riscv_vwmul(mask, op1, op2, vl);
}

vint32m1_t test_vwmul_vx_i32m1_m(vbool32_t mask, vint16mf2_t op1, int16_t op2, size_t vl) {
  return __riscv_vwmul(mask, op1, op2, vl);
}

vint32m2_t test_vwmul_vv_i32m2_m(vbool16_t mask, vint16m1_t op1, vint16m1_t op2, size_t vl) {
  return __riscv_vwmul(mask, op1, op2, vl);
}

vint32m2_t test_vwmul_vx_i32m2_m(vbool16_t mask, vint16m1_t op1, int16_t op2, size_t vl) {
  return __riscv_vwmul(mask, op1, op2, vl);
}

vint32m4_t test_vwmul_vv_i32m4_m(vbool8_t mask, vint16m2_t op1, vint16m2_t op2, size_t vl) {
  return __riscv_vwmul(mask, op1, op2, vl);
}

vint32m4_t test_vwmul_vx_i32m4_m(vbool8_t mask, vint16m2_t op1, int16_t op2, size_t vl) {
  return __riscv_vwmul(mask, op1, op2, vl);
}

vint32m8_t test_vwmul_vv_i32m8_m(vbool4_t mask, vint16m4_t op1, vint16m4_t op2, size_t vl) {
  return __riscv_vwmul(mask, op1, op2, vl);
}

vint32m8_t test_vwmul_vx_i32m8_m(vbool4_t mask, vint16m4_t op1, int16_t op2, size_t vl) {
  return __riscv_vwmul(mask, op1, op2, vl);
}

vint64m1_t test_vwmul_vv_i64m1_m(vbool64_t mask, vint32mf2_t op1, vint32mf2_t op2, size_t vl) {
  return __riscv_vwmul(mask, op1, op2, vl);
}

vint64m1_t test_vwmul_vx_i64m1_m(vbool64_t mask, vint32mf2_t op1, int32_t op2, size_t vl) {
  return __riscv_vwmul(mask, op1, op2, vl);
}

vint64m2_t test_vwmul_vv_i64m2_m(vbool32_t mask, vint32m1_t op1, vint32m1_t op2, size_t vl) {
  return __riscv_vwmul(mask, op1, op2, vl);
}

vint64m2_t test_vwmul_vx_i64m2_m(vbool32_t mask, vint32m1_t op1, int32_t op2, size_t vl) {
  return __riscv_vwmul(mask, op1, op2, vl);
}

vint64m4_t test_vwmul_vv_i64m4_m(vbool16_t mask, vint32m2_t op1, vint32m2_t op2, size_t vl) {
  return __riscv_vwmul(mask, op1, op2, vl);
}

vint64m4_t test_vwmul_vx_i64m4_m(vbool16_t mask, vint32m2_t op1, int32_t op2, size_t vl) {
  return __riscv_vwmul(mask, op1, op2, vl);
}

vint64m8_t test_vwmul_vv_i64m8_m(vbool8_t mask, vint32m4_t op1, vint32m4_t op2, size_t vl) {
  return __riscv_vwmul(mask, op1, op2, vl);
}

vint64m8_t test_vwmul_vx_i64m8_m(vbool8_t mask, vint32m4_t op1, int32_t op2, size_t vl) {
  return __riscv_vwmul(mask, op1, op2, vl);
}

