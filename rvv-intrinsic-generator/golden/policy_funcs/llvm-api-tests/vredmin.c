// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -disable-O0-optnone \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

vint8m1_t test_vredmin_vs_i8mf8_i8m1_tu(vint8m1_t maskedoff, vint8mf8_t vector, vint8m1_t scalar, size_t vl) {
  return vredmin_vs_i8mf8_i8m1_tu(maskedoff, vector, scalar, vl);
}

vint8m1_t test_vredmin_vs_i8mf4_i8m1_tu(vint8m1_t maskedoff, vint8mf4_t vector, vint8m1_t scalar, size_t vl) {
  return vredmin_vs_i8mf4_i8m1_tu(maskedoff, vector, scalar, vl);
}

vint8m1_t test_vredmin_vs_i8mf2_i8m1_tu(vint8m1_t maskedoff, vint8mf2_t vector, vint8m1_t scalar, size_t vl) {
  return vredmin_vs_i8mf2_i8m1_tu(maskedoff, vector, scalar, vl);
}

vint8m1_t test_vredmin_vs_i8m1_i8m1_tu(vint8m1_t maskedoff, vint8m1_t vector, vint8m1_t scalar, size_t vl) {
  return vredmin_vs_i8m1_i8m1_tu(maskedoff, vector, scalar, vl);
}

vint8m1_t test_vredmin_vs_i8m2_i8m1_tu(vint8m1_t maskedoff, vint8m2_t vector, vint8m1_t scalar, size_t vl) {
  return vredmin_vs_i8m2_i8m1_tu(maskedoff, vector, scalar, vl);
}

vint8m1_t test_vredmin_vs_i8m4_i8m1_tu(vint8m1_t maskedoff, vint8m4_t vector, vint8m1_t scalar, size_t vl) {
  return vredmin_vs_i8m4_i8m1_tu(maskedoff, vector, scalar, vl);
}

vint8m1_t test_vredmin_vs_i8m8_i8m1_tu(vint8m1_t maskedoff, vint8m8_t vector, vint8m1_t scalar, size_t vl) {
  return vredmin_vs_i8m8_i8m1_tu(maskedoff, vector, scalar, vl);
}

vint16m1_t test_vredmin_vs_i16mf4_i16m1_tu(vint16m1_t maskedoff, vint16mf4_t vector, vint16m1_t scalar, size_t vl) {
  return vredmin_vs_i16mf4_i16m1_tu(maskedoff, vector, scalar, vl);
}

vint16m1_t test_vredmin_vs_i16mf2_i16m1_tu(vint16m1_t maskedoff, vint16mf2_t vector, vint16m1_t scalar, size_t vl) {
  return vredmin_vs_i16mf2_i16m1_tu(maskedoff, vector, scalar, vl);
}

vint16m1_t test_vredmin_vs_i16m1_i16m1_tu(vint16m1_t maskedoff, vint16m1_t vector, vint16m1_t scalar, size_t vl) {
  return vredmin_vs_i16m1_i16m1_tu(maskedoff, vector, scalar, vl);
}

vint16m1_t test_vredmin_vs_i16m2_i16m1_tu(vint16m1_t maskedoff, vint16m2_t vector, vint16m1_t scalar, size_t vl) {
  return vredmin_vs_i16m2_i16m1_tu(maskedoff, vector, scalar, vl);
}

vint16m1_t test_vredmin_vs_i16m4_i16m1_tu(vint16m1_t maskedoff, vint16m4_t vector, vint16m1_t scalar, size_t vl) {
  return vredmin_vs_i16m4_i16m1_tu(maskedoff, vector, scalar, vl);
}

vint16m1_t test_vredmin_vs_i16m8_i16m1_tu(vint16m1_t maskedoff, vint16m8_t vector, vint16m1_t scalar, size_t vl) {
  return vredmin_vs_i16m8_i16m1_tu(maskedoff, vector, scalar, vl);
}

vint32m1_t test_vredmin_vs_i32mf2_i32m1_tu(vint32m1_t maskedoff, vint32mf2_t vector, vint32m1_t scalar, size_t vl) {
  return vredmin_vs_i32mf2_i32m1_tu(maskedoff, vector, scalar, vl);
}

vint32m1_t test_vredmin_vs_i32m1_i32m1_tu(vint32m1_t maskedoff, vint32m1_t vector, vint32m1_t scalar, size_t vl) {
  return vredmin_vs_i32m1_i32m1_tu(maskedoff, vector, scalar, vl);
}

vint32m1_t test_vredmin_vs_i32m2_i32m1_tu(vint32m1_t maskedoff, vint32m2_t vector, vint32m1_t scalar, size_t vl) {
  return vredmin_vs_i32m2_i32m1_tu(maskedoff, vector, scalar, vl);
}

vint32m1_t test_vredmin_vs_i32m4_i32m1_tu(vint32m1_t maskedoff, vint32m4_t vector, vint32m1_t scalar, size_t vl) {
  return vredmin_vs_i32m4_i32m1_tu(maskedoff, vector, scalar, vl);
}

vint32m1_t test_vredmin_vs_i32m8_i32m1_tu(vint32m1_t maskedoff, vint32m8_t vector, vint32m1_t scalar, size_t vl) {
  return vredmin_vs_i32m8_i32m1_tu(maskedoff, vector, scalar, vl);
}

vint64m1_t test_vredmin_vs_i64m1_i64m1_tu(vint64m1_t maskedoff, vint64m1_t vector, vint64m1_t scalar, size_t vl) {
  return vredmin_vs_i64m1_i64m1_tu(maskedoff, vector, scalar, vl);
}

vint64m1_t test_vredmin_vs_i64m2_i64m1_tu(vint64m1_t maskedoff, vint64m2_t vector, vint64m1_t scalar, size_t vl) {
  return vredmin_vs_i64m2_i64m1_tu(maskedoff, vector, scalar, vl);
}

vint64m1_t test_vredmin_vs_i64m4_i64m1_tu(vint64m1_t maskedoff, vint64m4_t vector, vint64m1_t scalar, size_t vl) {
  return vredmin_vs_i64m4_i64m1_tu(maskedoff, vector, scalar, vl);
}

vint64m1_t test_vredmin_vs_i64m8_i64m1_tu(vint64m1_t maskedoff, vint64m8_t vector, vint64m1_t scalar, size_t vl) {
  return vredmin_vs_i64m8_i64m1_tu(maskedoff, vector, scalar, vl);
}

vint8m1_t test_vredmin_vs_i8mf8_i8m1_ta(vint8mf8_t vector, vint8m1_t scalar, size_t vl) {
  return vredmin_vs_i8mf8_i8m1_ta(vector, scalar, vl);
}

vint8m1_t test_vredmin_vs_i8mf4_i8m1_ta(vint8mf4_t vector, vint8m1_t scalar, size_t vl) {
  return vredmin_vs_i8mf4_i8m1_ta(vector, scalar, vl);
}

vint8m1_t test_vredmin_vs_i8mf2_i8m1_ta(vint8mf2_t vector, vint8m1_t scalar, size_t vl) {
  return vredmin_vs_i8mf2_i8m1_ta(vector, scalar, vl);
}

vint8m1_t test_vredmin_vs_i8m1_i8m1_ta(vint8m1_t vector, vint8m1_t scalar, size_t vl) {
  return vredmin_vs_i8m1_i8m1_ta(vector, scalar, vl);
}

vint8m1_t test_vredmin_vs_i8m2_i8m1_ta(vint8m2_t vector, vint8m1_t scalar, size_t vl) {
  return vredmin_vs_i8m2_i8m1_ta(vector, scalar, vl);
}

vint8m1_t test_vredmin_vs_i8m4_i8m1_ta(vint8m4_t vector, vint8m1_t scalar, size_t vl) {
  return vredmin_vs_i8m4_i8m1_ta(vector, scalar, vl);
}

vint8m1_t test_vredmin_vs_i8m8_i8m1_ta(vint8m8_t vector, vint8m1_t scalar, size_t vl) {
  return vredmin_vs_i8m8_i8m1_ta(vector, scalar, vl);
}

vint16m1_t test_vredmin_vs_i16mf4_i16m1_ta(vint16mf4_t vector, vint16m1_t scalar, size_t vl) {
  return vredmin_vs_i16mf4_i16m1_ta(vector, scalar, vl);
}

vint16m1_t test_vredmin_vs_i16mf2_i16m1_ta(vint16mf2_t vector, vint16m1_t scalar, size_t vl) {
  return vredmin_vs_i16mf2_i16m1_ta(vector, scalar, vl);
}

vint16m1_t test_vredmin_vs_i16m1_i16m1_ta(vint16m1_t vector, vint16m1_t scalar, size_t vl) {
  return vredmin_vs_i16m1_i16m1_ta(vector, scalar, vl);
}

vint16m1_t test_vredmin_vs_i16m2_i16m1_ta(vint16m2_t vector, vint16m1_t scalar, size_t vl) {
  return vredmin_vs_i16m2_i16m1_ta(vector, scalar, vl);
}

vint16m1_t test_vredmin_vs_i16m4_i16m1_ta(vint16m4_t vector, vint16m1_t scalar, size_t vl) {
  return vredmin_vs_i16m4_i16m1_ta(vector, scalar, vl);
}

vint16m1_t test_vredmin_vs_i16m8_i16m1_ta(vint16m8_t vector, vint16m1_t scalar, size_t vl) {
  return vredmin_vs_i16m8_i16m1_ta(vector, scalar, vl);
}

vint32m1_t test_vredmin_vs_i32mf2_i32m1_ta(vint32mf2_t vector, vint32m1_t scalar, size_t vl) {
  return vredmin_vs_i32mf2_i32m1_ta(vector, scalar, vl);
}

vint32m1_t test_vredmin_vs_i32m1_i32m1_ta(vint32m1_t vector, vint32m1_t scalar, size_t vl) {
  return vredmin_vs_i32m1_i32m1_ta(vector, scalar, vl);
}

vint32m1_t test_vredmin_vs_i32m2_i32m1_ta(vint32m2_t vector, vint32m1_t scalar, size_t vl) {
  return vredmin_vs_i32m2_i32m1_ta(vector, scalar, vl);
}

vint32m1_t test_vredmin_vs_i32m4_i32m1_ta(vint32m4_t vector, vint32m1_t scalar, size_t vl) {
  return vredmin_vs_i32m4_i32m1_ta(vector, scalar, vl);
}

vint32m1_t test_vredmin_vs_i32m8_i32m1_ta(vint32m8_t vector, vint32m1_t scalar, size_t vl) {
  return vredmin_vs_i32m8_i32m1_ta(vector, scalar, vl);
}

vint64m1_t test_vredmin_vs_i64m1_i64m1_ta(vint64m1_t vector, vint64m1_t scalar, size_t vl) {
  return vredmin_vs_i64m1_i64m1_ta(vector, scalar, vl);
}

vint64m1_t test_vredmin_vs_i64m2_i64m1_ta(vint64m2_t vector, vint64m1_t scalar, size_t vl) {
  return vredmin_vs_i64m2_i64m1_ta(vector, scalar, vl);
}

vint64m1_t test_vredmin_vs_i64m4_i64m1_ta(vint64m4_t vector, vint64m1_t scalar, size_t vl) {
  return vredmin_vs_i64m4_i64m1_ta(vector, scalar, vl);
}

vint64m1_t test_vredmin_vs_i64m8_i64m1_ta(vint64m8_t vector, vint64m1_t scalar, size_t vl) {
  return vredmin_vs_i64m8_i64m1_ta(vector, scalar, vl);
}

vint8m1_t test_vredmin_vs_i8mf8_i8m1_tum(vbool64_t mask, vint8m1_t maskedoff, vint8mf8_t vector, vint8m1_t scalar, size_t vl) {
  return vredmin_vs_i8mf8_i8m1_tum(mask, maskedoff, vector, scalar, vl);
}

vint8m1_t test_vredmin_vs_i8mf4_i8m1_tum(vbool32_t mask, vint8m1_t maskedoff, vint8mf4_t vector, vint8m1_t scalar, size_t vl) {
  return vredmin_vs_i8mf4_i8m1_tum(mask, maskedoff, vector, scalar, vl);
}

vint8m1_t test_vredmin_vs_i8mf2_i8m1_tum(vbool16_t mask, vint8m1_t maskedoff, vint8mf2_t vector, vint8m1_t scalar, size_t vl) {
  return vredmin_vs_i8mf2_i8m1_tum(mask, maskedoff, vector, scalar, vl);
}

vint8m1_t test_vredmin_vs_i8m1_i8m1_tum(vbool8_t mask, vint8m1_t maskedoff, vint8m1_t vector, vint8m1_t scalar, size_t vl) {
  return vredmin_vs_i8m1_i8m1_tum(mask, maskedoff, vector, scalar, vl);
}

vint8m1_t test_vredmin_vs_i8m2_i8m1_tum(vbool4_t mask, vint8m1_t maskedoff, vint8m2_t vector, vint8m1_t scalar, size_t vl) {
  return vredmin_vs_i8m2_i8m1_tum(mask, maskedoff, vector, scalar, vl);
}

vint8m1_t test_vredmin_vs_i8m4_i8m1_tum(vbool2_t mask, vint8m1_t maskedoff, vint8m4_t vector, vint8m1_t scalar, size_t vl) {
  return vredmin_vs_i8m4_i8m1_tum(mask, maskedoff, vector, scalar, vl);
}

vint8m1_t test_vredmin_vs_i8m8_i8m1_tum(vbool1_t mask, vint8m1_t maskedoff, vint8m8_t vector, vint8m1_t scalar, size_t vl) {
  return vredmin_vs_i8m8_i8m1_tum(mask, maskedoff, vector, scalar, vl);
}

vint16m1_t test_vredmin_vs_i16mf4_i16m1_tum(vbool64_t mask, vint16m1_t maskedoff, vint16mf4_t vector, vint16m1_t scalar, size_t vl) {
  return vredmin_vs_i16mf4_i16m1_tum(mask, maskedoff, vector, scalar, vl);
}

vint16m1_t test_vredmin_vs_i16mf2_i16m1_tum(vbool32_t mask, vint16m1_t maskedoff, vint16mf2_t vector, vint16m1_t scalar, size_t vl) {
  return vredmin_vs_i16mf2_i16m1_tum(mask, maskedoff, vector, scalar, vl);
}

vint16m1_t test_vredmin_vs_i16m1_i16m1_tum(vbool16_t mask, vint16m1_t maskedoff, vint16m1_t vector, vint16m1_t scalar, size_t vl) {
  return vredmin_vs_i16m1_i16m1_tum(mask, maskedoff, vector, scalar, vl);
}

vint16m1_t test_vredmin_vs_i16m2_i16m1_tum(vbool8_t mask, vint16m1_t maskedoff, vint16m2_t vector, vint16m1_t scalar, size_t vl) {
  return vredmin_vs_i16m2_i16m1_tum(mask, maskedoff, vector, scalar, vl);
}

vint16m1_t test_vredmin_vs_i16m4_i16m1_tum(vbool4_t mask, vint16m1_t maskedoff, vint16m4_t vector, vint16m1_t scalar, size_t vl) {
  return vredmin_vs_i16m4_i16m1_tum(mask, maskedoff, vector, scalar, vl);
}

vint16m1_t test_vredmin_vs_i16m8_i16m1_tum(vbool2_t mask, vint16m1_t maskedoff, vint16m8_t vector, vint16m1_t scalar, size_t vl) {
  return vredmin_vs_i16m8_i16m1_tum(mask, maskedoff, vector, scalar, vl);
}

vint32m1_t test_vredmin_vs_i32mf2_i32m1_tum(vbool64_t mask, vint32m1_t maskedoff, vint32mf2_t vector, vint32m1_t scalar, size_t vl) {
  return vredmin_vs_i32mf2_i32m1_tum(mask, maskedoff, vector, scalar, vl);
}

vint32m1_t test_vredmin_vs_i32m1_i32m1_tum(vbool32_t mask, vint32m1_t maskedoff, vint32m1_t vector, vint32m1_t scalar, size_t vl) {
  return vredmin_vs_i32m1_i32m1_tum(mask, maskedoff, vector, scalar, vl);
}

vint32m1_t test_vredmin_vs_i32m2_i32m1_tum(vbool16_t mask, vint32m1_t maskedoff, vint32m2_t vector, vint32m1_t scalar, size_t vl) {
  return vredmin_vs_i32m2_i32m1_tum(mask, maskedoff, vector, scalar, vl);
}

vint32m1_t test_vredmin_vs_i32m4_i32m1_tum(vbool8_t mask, vint32m1_t maskedoff, vint32m4_t vector, vint32m1_t scalar, size_t vl) {
  return vredmin_vs_i32m4_i32m1_tum(mask, maskedoff, vector, scalar, vl);
}

vint32m1_t test_vredmin_vs_i32m8_i32m1_tum(vbool4_t mask, vint32m1_t maskedoff, vint32m8_t vector, vint32m1_t scalar, size_t vl) {
  return vredmin_vs_i32m8_i32m1_tum(mask, maskedoff, vector, scalar, vl);
}

vint64m1_t test_vredmin_vs_i64m1_i64m1_tum(vbool64_t mask, vint64m1_t maskedoff, vint64m1_t vector, vint64m1_t scalar, size_t vl) {
  return vredmin_vs_i64m1_i64m1_tum(mask, maskedoff, vector, scalar, vl);
}

vint64m1_t test_vredmin_vs_i64m2_i64m1_tum(vbool32_t mask, vint64m1_t maskedoff, vint64m2_t vector, vint64m1_t scalar, size_t vl) {
  return vredmin_vs_i64m2_i64m1_tum(mask, maskedoff, vector, scalar, vl);
}

vint64m1_t test_vredmin_vs_i64m4_i64m1_tum(vbool16_t mask, vint64m1_t maskedoff, vint64m4_t vector, vint64m1_t scalar, size_t vl) {
  return vredmin_vs_i64m4_i64m1_tum(mask, maskedoff, vector, scalar, vl);
}

vint64m1_t test_vredmin_vs_i64m8_i64m1_tum(vbool8_t mask, vint64m1_t maskedoff, vint64m8_t vector, vint64m1_t scalar, size_t vl) {
  return vredmin_vs_i64m8_i64m1_tum(mask, maskedoff, vector, scalar, vl);
}

vint8m1_t test_vredmin_vs_i8mf8_i8m1_tam(vbool64_t mask, vint8mf8_t vector, vint8m1_t scalar, size_t vl) {
  return vredmin_vs_i8mf8_i8m1_tam(mask, vector, scalar, vl);
}

vint8m1_t test_vredmin_vs_i8mf4_i8m1_tam(vbool32_t mask, vint8mf4_t vector, vint8m1_t scalar, size_t vl) {
  return vredmin_vs_i8mf4_i8m1_tam(mask, vector, scalar, vl);
}

vint8m1_t test_vredmin_vs_i8mf2_i8m1_tam(vbool16_t mask, vint8mf2_t vector, vint8m1_t scalar, size_t vl) {
  return vredmin_vs_i8mf2_i8m1_tam(mask, vector, scalar, vl);
}

vint8m1_t test_vredmin_vs_i8m1_i8m1_tam(vbool8_t mask, vint8m1_t vector, vint8m1_t scalar, size_t vl) {
  return vredmin_vs_i8m1_i8m1_tam(mask, vector, scalar, vl);
}

vint8m1_t test_vredmin_vs_i8m2_i8m1_tam(vbool4_t mask, vint8m2_t vector, vint8m1_t scalar, size_t vl) {
  return vredmin_vs_i8m2_i8m1_tam(mask, vector, scalar, vl);
}

vint8m1_t test_vredmin_vs_i8m4_i8m1_tam(vbool2_t mask, vint8m4_t vector, vint8m1_t scalar, size_t vl) {
  return vredmin_vs_i8m4_i8m1_tam(mask, vector, scalar, vl);
}

vint8m1_t test_vredmin_vs_i8m8_i8m1_tam(vbool1_t mask, vint8m8_t vector, vint8m1_t scalar, size_t vl) {
  return vredmin_vs_i8m8_i8m1_tam(mask, vector, scalar, vl);
}

vint16m1_t test_vredmin_vs_i16mf4_i16m1_tam(vbool64_t mask, vint16mf4_t vector, vint16m1_t scalar, size_t vl) {
  return vredmin_vs_i16mf4_i16m1_tam(mask, vector, scalar, vl);
}

vint16m1_t test_vredmin_vs_i16mf2_i16m1_tam(vbool32_t mask, vint16mf2_t vector, vint16m1_t scalar, size_t vl) {
  return vredmin_vs_i16mf2_i16m1_tam(mask, vector, scalar, vl);
}

vint16m1_t test_vredmin_vs_i16m1_i16m1_tam(vbool16_t mask, vint16m1_t vector, vint16m1_t scalar, size_t vl) {
  return vredmin_vs_i16m1_i16m1_tam(mask, vector, scalar, vl);
}

vint16m1_t test_vredmin_vs_i16m2_i16m1_tam(vbool8_t mask, vint16m2_t vector, vint16m1_t scalar, size_t vl) {
  return vredmin_vs_i16m2_i16m1_tam(mask, vector, scalar, vl);
}

vint16m1_t test_vredmin_vs_i16m4_i16m1_tam(vbool4_t mask, vint16m4_t vector, vint16m1_t scalar, size_t vl) {
  return vredmin_vs_i16m4_i16m1_tam(mask, vector, scalar, vl);
}

vint16m1_t test_vredmin_vs_i16m8_i16m1_tam(vbool2_t mask, vint16m8_t vector, vint16m1_t scalar, size_t vl) {
  return vredmin_vs_i16m8_i16m1_tam(mask, vector, scalar, vl);
}

vint32m1_t test_vredmin_vs_i32mf2_i32m1_tam(vbool64_t mask, vint32mf2_t vector, vint32m1_t scalar, size_t vl) {
  return vredmin_vs_i32mf2_i32m1_tam(mask, vector, scalar, vl);
}

vint32m1_t test_vredmin_vs_i32m1_i32m1_tam(vbool32_t mask, vint32m1_t vector, vint32m1_t scalar, size_t vl) {
  return vredmin_vs_i32m1_i32m1_tam(mask, vector, scalar, vl);
}

vint32m1_t test_vredmin_vs_i32m2_i32m1_tam(vbool16_t mask, vint32m2_t vector, vint32m1_t scalar, size_t vl) {
  return vredmin_vs_i32m2_i32m1_tam(mask, vector, scalar, vl);
}

vint32m1_t test_vredmin_vs_i32m4_i32m1_tam(vbool8_t mask, vint32m4_t vector, vint32m1_t scalar, size_t vl) {
  return vredmin_vs_i32m4_i32m1_tam(mask, vector, scalar, vl);
}

vint32m1_t test_vredmin_vs_i32m8_i32m1_tam(vbool4_t mask, vint32m8_t vector, vint32m1_t scalar, size_t vl) {
  return vredmin_vs_i32m8_i32m1_tam(mask, vector, scalar, vl);
}

vint64m1_t test_vredmin_vs_i64m1_i64m1_tam(vbool64_t mask, vint64m1_t vector, vint64m1_t scalar, size_t vl) {
  return vredmin_vs_i64m1_i64m1_tam(mask, vector, scalar, vl);
}

vint64m1_t test_vredmin_vs_i64m2_i64m1_tam(vbool32_t mask, vint64m2_t vector, vint64m1_t scalar, size_t vl) {
  return vredmin_vs_i64m2_i64m1_tam(mask, vector, scalar, vl);
}

vint64m1_t test_vredmin_vs_i64m4_i64m1_tam(vbool16_t mask, vint64m4_t vector, vint64m1_t scalar, size_t vl) {
  return vredmin_vs_i64m4_i64m1_tam(mask, vector, scalar, vl);
}

vint64m1_t test_vredmin_vs_i64m8_i64m1_tam(vbool8_t mask, vint64m8_t vector, vint64m1_t scalar, size_t vl) {
  return vredmin_vs_i64m8_i64m1_tam(mask, vector, scalar, vl);
}

