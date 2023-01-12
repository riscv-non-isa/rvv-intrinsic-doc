// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -disable-O0-optnone \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

vint8m1_t test_vredmax_vs_i8mf8_i8m1(vint8m1_t dest, vint8mf8_t vector, vint8m1_t scalar, size_t vl) {
  return vredmax_vs_i8mf8_i8m1(dest, vector, scalar, vl);
}

vint8m1_t test_vredmax_vs_i8mf4_i8m1(vint8m1_t dest, vint8mf4_t vector, vint8m1_t scalar, size_t vl) {
  return vredmax_vs_i8mf4_i8m1(dest, vector, scalar, vl);
}

vint8m1_t test_vredmax_vs_i8mf2_i8m1(vint8m1_t dest, vint8mf2_t vector, vint8m1_t scalar, size_t vl) {
  return vredmax_vs_i8mf2_i8m1(dest, vector, scalar, vl);
}

vint8m1_t test_vredmax_vs_i8m1_i8m1(vint8m1_t dest, vint8m1_t vector, vint8m1_t scalar, size_t vl) {
  return vredmax_vs_i8m1_i8m1(dest, vector, scalar, vl);
}

vint8m1_t test_vredmax_vs_i8m2_i8m1(vint8m1_t dest, vint8m2_t vector, vint8m1_t scalar, size_t vl) {
  return vredmax_vs_i8m2_i8m1(dest, vector, scalar, vl);
}

vint8m1_t test_vredmax_vs_i8m4_i8m1(vint8m1_t dest, vint8m4_t vector, vint8m1_t scalar, size_t vl) {
  return vredmax_vs_i8m4_i8m1(dest, vector, scalar, vl);
}

vint8m1_t test_vredmax_vs_i8m8_i8m1(vint8m1_t dest, vint8m8_t vector, vint8m1_t scalar, size_t vl) {
  return vredmax_vs_i8m8_i8m1(dest, vector, scalar, vl);
}

vint16m1_t test_vredmax_vs_i16mf4_i16m1(vint16m1_t dest, vint16mf4_t vector, vint16m1_t scalar, size_t vl) {
  return vredmax_vs_i16mf4_i16m1(dest, vector, scalar, vl);
}

vint16m1_t test_vredmax_vs_i16mf2_i16m1(vint16m1_t dest, vint16mf2_t vector, vint16m1_t scalar, size_t vl) {
  return vredmax_vs_i16mf2_i16m1(dest, vector, scalar, vl);
}

vint16m1_t test_vredmax_vs_i16m1_i16m1(vint16m1_t dest, vint16m1_t vector, vint16m1_t scalar, size_t vl) {
  return vredmax_vs_i16m1_i16m1(dest, vector, scalar, vl);
}

vint16m1_t test_vredmax_vs_i16m2_i16m1(vint16m1_t dest, vint16m2_t vector, vint16m1_t scalar, size_t vl) {
  return vredmax_vs_i16m2_i16m1(dest, vector, scalar, vl);
}

vint16m1_t test_vredmax_vs_i16m4_i16m1(vint16m1_t dest, vint16m4_t vector, vint16m1_t scalar, size_t vl) {
  return vredmax_vs_i16m4_i16m1(dest, vector, scalar, vl);
}

vint16m1_t test_vredmax_vs_i16m8_i16m1(vint16m1_t dest, vint16m8_t vector, vint16m1_t scalar, size_t vl) {
  return vredmax_vs_i16m8_i16m1(dest, vector, scalar, vl);
}

vint32m1_t test_vredmax_vs_i32mf2_i32m1(vint32m1_t dest, vint32mf2_t vector, vint32m1_t scalar, size_t vl) {
  return vredmax_vs_i32mf2_i32m1(dest, vector, scalar, vl);
}

vint32m1_t test_vredmax_vs_i32m1_i32m1(vint32m1_t dest, vint32m1_t vector, vint32m1_t scalar, size_t vl) {
  return vredmax_vs_i32m1_i32m1(dest, vector, scalar, vl);
}

vint32m1_t test_vredmax_vs_i32m2_i32m1(vint32m1_t dest, vint32m2_t vector, vint32m1_t scalar, size_t vl) {
  return vredmax_vs_i32m2_i32m1(dest, vector, scalar, vl);
}

vint32m1_t test_vredmax_vs_i32m4_i32m1(vint32m1_t dest, vint32m4_t vector, vint32m1_t scalar, size_t vl) {
  return vredmax_vs_i32m4_i32m1(dest, vector, scalar, vl);
}

vint32m1_t test_vredmax_vs_i32m8_i32m1(vint32m1_t dest, vint32m8_t vector, vint32m1_t scalar, size_t vl) {
  return vredmax_vs_i32m8_i32m1(dest, vector, scalar, vl);
}

vint64m1_t test_vredmax_vs_i64m1_i64m1(vint64m1_t dest, vint64m1_t vector, vint64m1_t scalar, size_t vl) {
  return vredmax_vs_i64m1_i64m1(dest, vector, scalar, vl);
}

vint64m1_t test_vredmax_vs_i64m2_i64m1(vint64m1_t dest, vint64m2_t vector, vint64m1_t scalar, size_t vl) {
  return vredmax_vs_i64m2_i64m1(dest, vector, scalar, vl);
}

vint64m1_t test_vredmax_vs_i64m4_i64m1(vint64m1_t dest, vint64m4_t vector, vint64m1_t scalar, size_t vl) {
  return vredmax_vs_i64m4_i64m1(dest, vector, scalar, vl);
}

vint64m1_t test_vredmax_vs_i64m8_i64m1(vint64m1_t dest, vint64m8_t vector, vint64m1_t scalar, size_t vl) {
  return vredmax_vs_i64m8_i64m1(dest, vector, scalar, vl);
}

vint8m1_t test_vredmax_vs_i8mf8_i8m1_m(vbool64_t mask, vint8m1_t dest, vint8mf8_t vector, vint8m1_t scalar, size_t vl) {
  return vredmax_vs_i8mf8_i8m1_m(mask, dest, vector, scalar, vl);
}

vint8m1_t test_vredmax_vs_i8mf4_i8m1_m(vbool32_t mask, vint8m1_t dest, vint8mf4_t vector, vint8m1_t scalar, size_t vl) {
  return vredmax_vs_i8mf4_i8m1_m(mask, dest, vector, scalar, vl);
}

vint8m1_t test_vredmax_vs_i8mf2_i8m1_m(vbool16_t mask, vint8m1_t dest, vint8mf2_t vector, vint8m1_t scalar, size_t vl) {
  return vredmax_vs_i8mf2_i8m1_m(mask, dest, vector, scalar, vl);
}

vint8m1_t test_vredmax_vs_i8m1_i8m1_m(vbool8_t mask, vint8m1_t dest, vint8m1_t vector, vint8m1_t scalar, size_t vl) {
  return vredmax_vs_i8m1_i8m1_m(mask, dest, vector, scalar, vl);
}

vint8m1_t test_vredmax_vs_i8m2_i8m1_m(vbool4_t mask, vint8m1_t dest, vint8m2_t vector, vint8m1_t scalar, size_t vl) {
  return vredmax_vs_i8m2_i8m1_m(mask, dest, vector, scalar, vl);
}

vint8m1_t test_vredmax_vs_i8m4_i8m1_m(vbool2_t mask, vint8m1_t dest, vint8m4_t vector, vint8m1_t scalar, size_t vl) {
  return vredmax_vs_i8m4_i8m1_m(mask, dest, vector, scalar, vl);
}

vint8m1_t test_vredmax_vs_i8m8_i8m1_m(vbool1_t mask, vint8m1_t dest, vint8m8_t vector, vint8m1_t scalar, size_t vl) {
  return vredmax_vs_i8m8_i8m1_m(mask, dest, vector, scalar, vl);
}

vint16m1_t test_vredmax_vs_i16mf4_i16m1_m(vbool64_t mask, vint16m1_t dest, vint16mf4_t vector, vint16m1_t scalar, size_t vl) {
  return vredmax_vs_i16mf4_i16m1_m(mask, dest, vector, scalar, vl);
}

vint16m1_t test_vredmax_vs_i16mf2_i16m1_m(vbool32_t mask, vint16m1_t dest, vint16mf2_t vector, vint16m1_t scalar, size_t vl) {
  return vredmax_vs_i16mf2_i16m1_m(mask, dest, vector, scalar, vl);
}

vint16m1_t test_vredmax_vs_i16m1_i16m1_m(vbool16_t mask, vint16m1_t dest, vint16m1_t vector, vint16m1_t scalar, size_t vl) {
  return vredmax_vs_i16m1_i16m1_m(mask, dest, vector, scalar, vl);
}

vint16m1_t test_vredmax_vs_i16m2_i16m1_m(vbool8_t mask, vint16m1_t dest, vint16m2_t vector, vint16m1_t scalar, size_t vl) {
  return vredmax_vs_i16m2_i16m1_m(mask, dest, vector, scalar, vl);
}

vint16m1_t test_vredmax_vs_i16m4_i16m1_m(vbool4_t mask, vint16m1_t dest, vint16m4_t vector, vint16m1_t scalar, size_t vl) {
  return vredmax_vs_i16m4_i16m1_m(mask, dest, vector, scalar, vl);
}

vint16m1_t test_vredmax_vs_i16m8_i16m1_m(vbool2_t mask, vint16m1_t dest, vint16m8_t vector, vint16m1_t scalar, size_t vl) {
  return vredmax_vs_i16m8_i16m1_m(mask, dest, vector, scalar, vl);
}

vint32m1_t test_vredmax_vs_i32mf2_i32m1_m(vbool64_t mask, vint32m1_t dest, vint32mf2_t vector, vint32m1_t scalar, size_t vl) {
  return vredmax_vs_i32mf2_i32m1_m(mask, dest, vector, scalar, vl);
}

vint32m1_t test_vredmax_vs_i32m1_i32m1_m(vbool32_t mask, vint32m1_t dest, vint32m1_t vector, vint32m1_t scalar, size_t vl) {
  return vredmax_vs_i32m1_i32m1_m(mask, dest, vector, scalar, vl);
}

vint32m1_t test_vredmax_vs_i32m2_i32m1_m(vbool16_t mask, vint32m1_t dest, vint32m2_t vector, vint32m1_t scalar, size_t vl) {
  return vredmax_vs_i32m2_i32m1_m(mask, dest, vector, scalar, vl);
}

vint32m1_t test_vredmax_vs_i32m4_i32m1_m(vbool8_t mask, vint32m1_t dest, vint32m4_t vector, vint32m1_t scalar, size_t vl) {
  return vredmax_vs_i32m4_i32m1_m(mask, dest, vector, scalar, vl);
}

vint32m1_t test_vredmax_vs_i32m8_i32m1_m(vbool4_t mask, vint32m1_t dest, vint32m8_t vector, vint32m1_t scalar, size_t vl) {
  return vredmax_vs_i32m8_i32m1_m(mask, dest, vector, scalar, vl);
}

vint64m1_t test_vredmax_vs_i64m1_i64m1_m(vbool64_t mask, vint64m1_t dest, vint64m1_t vector, vint64m1_t scalar, size_t vl) {
  return vredmax_vs_i64m1_i64m1_m(mask, dest, vector, scalar, vl);
}

vint64m1_t test_vredmax_vs_i64m2_i64m1_m(vbool32_t mask, vint64m1_t dest, vint64m2_t vector, vint64m1_t scalar, size_t vl) {
  return vredmax_vs_i64m2_i64m1_m(mask, dest, vector, scalar, vl);
}

vint64m1_t test_vredmax_vs_i64m4_i64m1_m(vbool16_t mask, vint64m1_t dest, vint64m4_t vector, vint64m1_t scalar, size_t vl) {
  return vredmax_vs_i64m4_i64m1_m(mask, dest, vector, scalar, vl);
}

vint64m1_t test_vredmax_vs_i64m8_i64m1_m(vbool8_t mask, vint64m1_t dest, vint64m8_t vector, vint64m1_t scalar, size_t vl) {
  return vredmax_vs_i64m8_i64m1_m(mask, dest, vector, scalar, vl);
}

