// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -disable-O0-optnone \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

vint8mf8_t test_vnsra_wv_i8mf8_tu(vint8mf8_t maskedoff, vint16mf4_t op1, vuint8mf8_t shift, size_t vl) {
  return __riscv_vnsra_tu(maskedoff, op1, shift, vl);
}

vint8mf8_t test_vnsra_wx_i8mf8_tu(vint8mf8_t maskedoff, vint16mf4_t op1, size_t shift, size_t vl) {
  return __riscv_vnsra_tu(maskedoff, op1, shift, vl);
}

vint8mf4_t test_vnsra_wv_i8mf4_tu(vint8mf4_t maskedoff, vint16mf2_t op1, vuint8mf4_t shift, size_t vl) {
  return __riscv_vnsra_tu(maskedoff, op1, shift, vl);
}

vint8mf4_t test_vnsra_wx_i8mf4_tu(vint8mf4_t maskedoff, vint16mf2_t op1, size_t shift, size_t vl) {
  return __riscv_vnsra_tu(maskedoff, op1, shift, vl);
}

vint8mf2_t test_vnsra_wv_i8mf2_tu(vint8mf2_t maskedoff, vint16m1_t op1, vuint8mf2_t shift, size_t vl) {
  return __riscv_vnsra_tu(maskedoff, op1, shift, vl);
}

vint8mf2_t test_vnsra_wx_i8mf2_tu(vint8mf2_t maskedoff, vint16m1_t op1, size_t shift, size_t vl) {
  return __riscv_vnsra_tu(maskedoff, op1, shift, vl);
}

vint8m1_t test_vnsra_wv_i8m1_tu(vint8m1_t maskedoff, vint16m2_t op1, vuint8m1_t shift, size_t vl) {
  return __riscv_vnsra_tu(maskedoff, op1, shift, vl);
}

vint8m1_t test_vnsra_wx_i8m1_tu(vint8m1_t maskedoff, vint16m2_t op1, size_t shift, size_t vl) {
  return __riscv_vnsra_tu(maskedoff, op1, shift, vl);
}

vint8m2_t test_vnsra_wv_i8m2_tu(vint8m2_t maskedoff, vint16m4_t op1, vuint8m2_t shift, size_t vl) {
  return __riscv_vnsra_tu(maskedoff, op1, shift, vl);
}

vint8m2_t test_vnsra_wx_i8m2_tu(vint8m2_t maskedoff, vint16m4_t op1, size_t shift, size_t vl) {
  return __riscv_vnsra_tu(maskedoff, op1, shift, vl);
}

vint8m4_t test_vnsra_wv_i8m4_tu(vint8m4_t maskedoff, vint16m8_t op1, vuint8m4_t shift, size_t vl) {
  return __riscv_vnsra_tu(maskedoff, op1, shift, vl);
}

vint8m4_t test_vnsra_wx_i8m4_tu(vint8m4_t maskedoff, vint16m8_t op1, size_t shift, size_t vl) {
  return __riscv_vnsra_tu(maskedoff, op1, shift, vl);
}

vint16mf4_t test_vnsra_wv_i16mf4_tu(vint16mf4_t maskedoff, vint32mf2_t op1, vuint16mf4_t shift, size_t vl) {
  return __riscv_vnsra_tu(maskedoff, op1, shift, vl);
}

vint16mf4_t test_vnsra_wx_i16mf4_tu(vint16mf4_t maskedoff, vint32mf2_t op1, size_t shift, size_t vl) {
  return __riscv_vnsra_tu(maskedoff, op1, shift, vl);
}

vint16mf2_t test_vnsra_wv_i16mf2_tu(vint16mf2_t maskedoff, vint32m1_t op1, vuint16mf2_t shift, size_t vl) {
  return __riscv_vnsra_tu(maskedoff, op1, shift, vl);
}

vint16mf2_t test_vnsra_wx_i16mf2_tu(vint16mf2_t maskedoff, vint32m1_t op1, size_t shift, size_t vl) {
  return __riscv_vnsra_tu(maskedoff, op1, shift, vl);
}

vint16m1_t test_vnsra_wv_i16m1_tu(vint16m1_t maskedoff, vint32m2_t op1, vuint16m1_t shift, size_t vl) {
  return __riscv_vnsra_tu(maskedoff, op1, shift, vl);
}

vint16m1_t test_vnsra_wx_i16m1_tu(vint16m1_t maskedoff, vint32m2_t op1, size_t shift, size_t vl) {
  return __riscv_vnsra_tu(maskedoff, op1, shift, vl);
}

vint16m2_t test_vnsra_wv_i16m2_tu(vint16m2_t maskedoff, vint32m4_t op1, vuint16m2_t shift, size_t vl) {
  return __riscv_vnsra_tu(maskedoff, op1, shift, vl);
}

vint16m2_t test_vnsra_wx_i16m2_tu(vint16m2_t maskedoff, vint32m4_t op1, size_t shift, size_t vl) {
  return __riscv_vnsra_tu(maskedoff, op1, shift, vl);
}

vint16m4_t test_vnsra_wv_i16m4_tu(vint16m4_t maskedoff, vint32m8_t op1, vuint16m4_t shift, size_t vl) {
  return __riscv_vnsra_tu(maskedoff, op1, shift, vl);
}

vint16m4_t test_vnsra_wx_i16m4_tu(vint16m4_t maskedoff, vint32m8_t op1, size_t shift, size_t vl) {
  return __riscv_vnsra_tu(maskedoff, op1, shift, vl);
}

vint32mf2_t test_vnsra_wv_i32mf2_tu(vint32mf2_t maskedoff, vint64m1_t op1, vuint32mf2_t shift, size_t vl) {
  return __riscv_vnsra_tu(maskedoff, op1, shift, vl);
}

vint32mf2_t test_vnsra_wx_i32mf2_tu(vint32mf2_t maskedoff, vint64m1_t op1, size_t shift, size_t vl) {
  return __riscv_vnsra_tu(maskedoff, op1, shift, vl);
}

vint32m1_t test_vnsra_wv_i32m1_tu(vint32m1_t maskedoff, vint64m2_t op1, vuint32m1_t shift, size_t vl) {
  return __riscv_vnsra_tu(maskedoff, op1, shift, vl);
}

vint32m1_t test_vnsra_wx_i32m1_tu(vint32m1_t maskedoff, vint64m2_t op1, size_t shift, size_t vl) {
  return __riscv_vnsra_tu(maskedoff, op1, shift, vl);
}

vint32m2_t test_vnsra_wv_i32m2_tu(vint32m2_t maskedoff, vint64m4_t op1, vuint32m2_t shift, size_t vl) {
  return __riscv_vnsra_tu(maskedoff, op1, shift, vl);
}

vint32m2_t test_vnsra_wx_i32m2_tu(vint32m2_t maskedoff, vint64m4_t op1, size_t shift, size_t vl) {
  return __riscv_vnsra_tu(maskedoff, op1, shift, vl);
}

vint32m4_t test_vnsra_wv_i32m4_tu(vint32m4_t maskedoff, vint64m8_t op1, vuint32m4_t shift, size_t vl) {
  return __riscv_vnsra_tu(maskedoff, op1, shift, vl);
}

vint32m4_t test_vnsra_wx_i32m4_tu(vint32m4_t maskedoff, vint64m8_t op1, size_t shift, size_t vl) {
  return __riscv_vnsra_tu(maskedoff, op1, shift, vl);
}

vint8mf8_t test_vnsra_wv_i8mf8_tum(vbool64_t mask, vint8mf8_t maskedoff, vint16mf4_t op1, vuint8mf8_t shift, size_t vl) {
  return __riscv_vnsra_tum(mask, maskedoff, op1, shift, vl);
}

vint8mf8_t test_vnsra_wx_i8mf8_tum(vbool64_t mask, vint8mf8_t maskedoff, vint16mf4_t op1, size_t shift, size_t vl) {
  return __riscv_vnsra_tum(mask, maskedoff, op1, shift, vl);
}

vint8mf4_t test_vnsra_wv_i8mf4_tum(vbool32_t mask, vint8mf4_t maskedoff, vint16mf2_t op1, vuint8mf4_t shift, size_t vl) {
  return __riscv_vnsra_tum(mask, maskedoff, op1, shift, vl);
}

vint8mf4_t test_vnsra_wx_i8mf4_tum(vbool32_t mask, vint8mf4_t maskedoff, vint16mf2_t op1, size_t shift, size_t vl) {
  return __riscv_vnsra_tum(mask, maskedoff, op1, shift, vl);
}

vint8mf2_t test_vnsra_wv_i8mf2_tum(vbool16_t mask, vint8mf2_t maskedoff, vint16m1_t op1, vuint8mf2_t shift, size_t vl) {
  return __riscv_vnsra_tum(mask, maskedoff, op1, shift, vl);
}

vint8mf2_t test_vnsra_wx_i8mf2_tum(vbool16_t mask, vint8mf2_t maskedoff, vint16m1_t op1, size_t shift, size_t vl) {
  return __riscv_vnsra_tum(mask, maskedoff, op1, shift, vl);
}

vint8m1_t test_vnsra_wv_i8m1_tum(vbool8_t mask, vint8m1_t maskedoff, vint16m2_t op1, vuint8m1_t shift, size_t vl) {
  return __riscv_vnsra_tum(mask, maskedoff, op1, shift, vl);
}

vint8m1_t test_vnsra_wx_i8m1_tum(vbool8_t mask, vint8m1_t maskedoff, vint16m2_t op1, size_t shift, size_t vl) {
  return __riscv_vnsra_tum(mask, maskedoff, op1, shift, vl);
}

vint8m2_t test_vnsra_wv_i8m2_tum(vbool4_t mask, vint8m2_t maskedoff, vint16m4_t op1, vuint8m2_t shift, size_t vl) {
  return __riscv_vnsra_tum(mask, maskedoff, op1, shift, vl);
}

vint8m2_t test_vnsra_wx_i8m2_tum(vbool4_t mask, vint8m2_t maskedoff, vint16m4_t op1, size_t shift, size_t vl) {
  return __riscv_vnsra_tum(mask, maskedoff, op1, shift, vl);
}

vint8m4_t test_vnsra_wv_i8m4_tum(vbool2_t mask, vint8m4_t maskedoff, vint16m8_t op1, vuint8m4_t shift, size_t vl) {
  return __riscv_vnsra_tum(mask, maskedoff, op1, shift, vl);
}

vint8m4_t test_vnsra_wx_i8m4_tum(vbool2_t mask, vint8m4_t maskedoff, vint16m8_t op1, size_t shift, size_t vl) {
  return __riscv_vnsra_tum(mask, maskedoff, op1, shift, vl);
}

vint16mf4_t test_vnsra_wv_i16mf4_tum(vbool64_t mask, vint16mf4_t maskedoff, vint32mf2_t op1, vuint16mf4_t shift, size_t vl) {
  return __riscv_vnsra_tum(mask, maskedoff, op1, shift, vl);
}

vint16mf4_t test_vnsra_wx_i16mf4_tum(vbool64_t mask, vint16mf4_t maskedoff, vint32mf2_t op1, size_t shift, size_t vl) {
  return __riscv_vnsra_tum(mask, maskedoff, op1, shift, vl);
}

vint16mf2_t test_vnsra_wv_i16mf2_tum(vbool32_t mask, vint16mf2_t maskedoff, vint32m1_t op1, vuint16mf2_t shift, size_t vl) {
  return __riscv_vnsra_tum(mask, maskedoff, op1, shift, vl);
}

vint16mf2_t test_vnsra_wx_i16mf2_tum(vbool32_t mask, vint16mf2_t maskedoff, vint32m1_t op1, size_t shift, size_t vl) {
  return __riscv_vnsra_tum(mask, maskedoff, op1, shift, vl);
}

vint16m1_t test_vnsra_wv_i16m1_tum(vbool16_t mask, vint16m1_t maskedoff, vint32m2_t op1, vuint16m1_t shift, size_t vl) {
  return __riscv_vnsra_tum(mask, maskedoff, op1, shift, vl);
}

vint16m1_t test_vnsra_wx_i16m1_tum(vbool16_t mask, vint16m1_t maskedoff, vint32m2_t op1, size_t shift, size_t vl) {
  return __riscv_vnsra_tum(mask, maskedoff, op1, shift, vl);
}

vint16m2_t test_vnsra_wv_i16m2_tum(vbool8_t mask, vint16m2_t maskedoff, vint32m4_t op1, vuint16m2_t shift, size_t vl) {
  return __riscv_vnsra_tum(mask, maskedoff, op1, shift, vl);
}

vint16m2_t test_vnsra_wx_i16m2_tum(vbool8_t mask, vint16m2_t maskedoff, vint32m4_t op1, size_t shift, size_t vl) {
  return __riscv_vnsra_tum(mask, maskedoff, op1, shift, vl);
}

vint16m4_t test_vnsra_wv_i16m4_tum(vbool4_t mask, vint16m4_t maskedoff, vint32m8_t op1, vuint16m4_t shift, size_t vl) {
  return __riscv_vnsra_tum(mask, maskedoff, op1, shift, vl);
}

vint16m4_t test_vnsra_wx_i16m4_tum(vbool4_t mask, vint16m4_t maskedoff, vint32m8_t op1, size_t shift, size_t vl) {
  return __riscv_vnsra_tum(mask, maskedoff, op1, shift, vl);
}

vint32mf2_t test_vnsra_wv_i32mf2_tum(vbool64_t mask, vint32mf2_t maskedoff, vint64m1_t op1, vuint32mf2_t shift, size_t vl) {
  return __riscv_vnsra_tum(mask, maskedoff, op1, shift, vl);
}

vint32mf2_t test_vnsra_wx_i32mf2_tum(vbool64_t mask, vint32mf2_t maskedoff, vint64m1_t op1, size_t shift, size_t vl) {
  return __riscv_vnsra_tum(mask, maskedoff, op1, shift, vl);
}

vint32m1_t test_vnsra_wv_i32m1_tum(vbool32_t mask, vint32m1_t maskedoff, vint64m2_t op1, vuint32m1_t shift, size_t vl) {
  return __riscv_vnsra_tum(mask, maskedoff, op1, shift, vl);
}

vint32m1_t test_vnsra_wx_i32m1_tum(vbool32_t mask, vint32m1_t maskedoff, vint64m2_t op1, size_t shift, size_t vl) {
  return __riscv_vnsra_tum(mask, maskedoff, op1, shift, vl);
}

vint32m2_t test_vnsra_wv_i32m2_tum(vbool16_t mask, vint32m2_t maskedoff, vint64m4_t op1, vuint32m2_t shift, size_t vl) {
  return __riscv_vnsra_tum(mask, maskedoff, op1, shift, vl);
}

vint32m2_t test_vnsra_wx_i32m2_tum(vbool16_t mask, vint32m2_t maskedoff, vint64m4_t op1, size_t shift, size_t vl) {
  return __riscv_vnsra_tum(mask, maskedoff, op1, shift, vl);
}

vint32m4_t test_vnsra_wv_i32m4_tum(vbool8_t mask, vint32m4_t maskedoff, vint64m8_t op1, vuint32m4_t shift, size_t vl) {
  return __riscv_vnsra_tum(mask, maskedoff, op1, shift, vl);
}

vint32m4_t test_vnsra_wx_i32m4_tum(vbool8_t mask, vint32m4_t maskedoff, vint64m8_t op1, size_t shift, size_t vl) {
  return __riscv_vnsra_tum(mask, maskedoff, op1, shift, vl);
}

vint8mf8_t test_vnsra_wv_i8mf8_tumu(vbool64_t mask, vint8mf8_t maskedoff, vint16mf4_t op1, vuint8mf8_t shift, size_t vl) {
  return __riscv_vnsra_tumu(mask, maskedoff, op1, shift, vl);
}

vint8mf8_t test_vnsra_wx_i8mf8_tumu(vbool64_t mask, vint8mf8_t maskedoff, vint16mf4_t op1, size_t shift, size_t vl) {
  return __riscv_vnsra_tumu(mask, maskedoff, op1, shift, vl);
}

vint8mf4_t test_vnsra_wv_i8mf4_tumu(vbool32_t mask, vint8mf4_t maskedoff, vint16mf2_t op1, vuint8mf4_t shift, size_t vl) {
  return __riscv_vnsra_tumu(mask, maskedoff, op1, shift, vl);
}

vint8mf4_t test_vnsra_wx_i8mf4_tumu(vbool32_t mask, vint8mf4_t maskedoff, vint16mf2_t op1, size_t shift, size_t vl) {
  return __riscv_vnsra_tumu(mask, maskedoff, op1, shift, vl);
}

vint8mf2_t test_vnsra_wv_i8mf2_tumu(vbool16_t mask, vint8mf2_t maskedoff, vint16m1_t op1, vuint8mf2_t shift, size_t vl) {
  return __riscv_vnsra_tumu(mask, maskedoff, op1, shift, vl);
}

vint8mf2_t test_vnsra_wx_i8mf2_tumu(vbool16_t mask, vint8mf2_t maskedoff, vint16m1_t op1, size_t shift, size_t vl) {
  return __riscv_vnsra_tumu(mask, maskedoff, op1, shift, vl);
}

vint8m1_t test_vnsra_wv_i8m1_tumu(vbool8_t mask, vint8m1_t maskedoff, vint16m2_t op1, vuint8m1_t shift, size_t vl) {
  return __riscv_vnsra_tumu(mask, maskedoff, op1, shift, vl);
}

vint8m1_t test_vnsra_wx_i8m1_tumu(vbool8_t mask, vint8m1_t maskedoff, vint16m2_t op1, size_t shift, size_t vl) {
  return __riscv_vnsra_tumu(mask, maskedoff, op1, shift, vl);
}

vint8m2_t test_vnsra_wv_i8m2_tumu(vbool4_t mask, vint8m2_t maskedoff, vint16m4_t op1, vuint8m2_t shift, size_t vl) {
  return __riscv_vnsra_tumu(mask, maskedoff, op1, shift, vl);
}

vint8m2_t test_vnsra_wx_i8m2_tumu(vbool4_t mask, vint8m2_t maskedoff, vint16m4_t op1, size_t shift, size_t vl) {
  return __riscv_vnsra_tumu(mask, maskedoff, op1, shift, vl);
}

vint8m4_t test_vnsra_wv_i8m4_tumu(vbool2_t mask, vint8m4_t maskedoff, vint16m8_t op1, vuint8m4_t shift, size_t vl) {
  return __riscv_vnsra_tumu(mask, maskedoff, op1, shift, vl);
}

vint8m4_t test_vnsra_wx_i8m4_tumu(vbool2_t mask, vint8m4_t maskedoff, vint16m8_t op1, size_t shift, size_t vl) {
  return __riscv_vnsra_tumu(mask, maskedoff, op1, shift, vl);
}

vint16mf4_t test_vnsra_wv_i16mf4_tumu(vbool64_t mask, vint16mf4_t maskedoff, vint32mf2_t op1, vuint16mf4_t shift, size_t vl) {
  return __riscv_vnsra_tumu(mask, maskedoff, op1, shift, vl);
}

vint16mf4_t test_vnsra_wx_i16mf4_tumu(vbool64_t mask, vint16mf4_t maskedoff, vint32mf2_t op1, size_t shift, size_t vl) {
  return __riscv_vnsra_tumu(mask, maskedoff, op1, shift, vl);
}

vint16mf2_t test_vnsra_wv_i16mf2_tumu(vbool32_t mask, vint16mf2_t maskedoff, vint32m1_t op1, vuint16mf2_t shift, size_t vl) {
  return __riscv_vnsra_tumu(mask, maskedoff, op1, shift, vl);
}

vint16mf2_t test_vnsra_wx_i16mf2_tumu(vbool32_t mask, vint16mf2_t maskedoff, vint32m1_t op1, size_t shift, size_t vl) {
  return __riscv_vnsra_tumu(mask, maskedoff, op1, shift, vl);
}

vint16m1_t test_vnsra_wv_i16m1_tumu(vbool16_t mask, vint16m1_t maskedoff, vint32m2_t op1, vuint16m1_t shift, size_t vl) {
  return __riscv_vnsra_tumu(mask, maskedoff, op1, shift, vl);
}

vint16m1_t test_vnsra_wx_i16m1_tumu(vbool16_t mask, vint16m1_t maskedoff, vint32m2_t op1, size_t shift, size_t vl) {
  return __riscv_vnsra_tumu(mask, maskedoff, op1, shift, vl);
}

vint16m2_t test_vnsra_wv_i16m2_tumu(vbool8_t mask, vint16m2_t maskedoff, vint32m4_t op1, vuint16m2_t shift, size_t vl) {
  return __riscv_vnsra_tumu(mask, maskedoff, op1, shift, vl);
}

vint16m2_t test_vnsra_wx_i16m2_tumu(vbool8_t mask, vint16m2_t maskedoff, vint32m4_t op1, size_t shift, size_t vl) {
  return __riscv_vnsra_tumu(mask, maskedoff, op1, shift, vl);
}

vint16m4_t test_vnsra_wv_i16m4_tumu(vbool4_t mask, vint16m4_t maskedoff, vint32m8_t op1, vuint16m4_t shift, size_t vl) {
  return __riscv_vnsra_tumu(mask, maskedoff, op1, shift, vl);
}

vint16m4_t test_vnsra_wx_i16m4_tumu(vbool4_t mask, vint16m4_t maskedoff, vint32m8_t op1, size_t shift, size_t vl) {
  return __riscv_vnsra_tumu(mask, maskedoff, op1, shift, vl);
}

vint32mf2_t test_vnsra_wv_i32mf2_tumu(vbool64_t mask, vint32mf2_t maskedoff, vint64m1_t op1, vuint32mf2_t shift, size_t vl) {
  return __riscv_vnsra_tumu(mask, maskedoff, op1, shift, vl);
}

vint32mf2_t test_vnsra_wx_i32mf2_tumu(vbool64_t mask, vint32mf2_t maskedoff, vint64m1_t op1, size_t shift, size_t vl) {
  return __riscv_vnsra_tumu(mask, maskedoff, op1, shift, vl);
}

vint32m1_t test_vnsra_wv_i32m1_tumu(vbool32_t mask, vint32m1_t maskedoff, vint64m2_t op1, vuint32m1_t shift, size_t vl) {
  return __riscv_vnsra_tumu(mask, maskedoff, op1, shift, vl);
}

vint32m1_t test_vnsra_wx_i32m1_tumu(vbool32_t mask, vint32m1_t maskedoff, vint64m2_t op1, size_t shift, size_t vl) {
  return __riscv_vnsra_tumu(mask, maskedoff, op1, shift, vl);
}

vint32m2_t test_vnsra_wv_i32m2_tumu(vbool16_t mask, vint32m2_t maskedoff, vint64m4_t op1, vuint32m2_t shift, size_t vl) {
  return __riscv_vnsra_tumu(mask, maskedoff, op1, shift, vl);
}

vint32m2_t test_vnsra_wx_i32m2_tumu(vbool16_t mask, vint32m2_t maskedoff, vint64m4_t op1, size_t shift, size_t vl) {
  return __riscv_vnsra_tumu(mask, maskedoff, op1, shift, vl);
}

vint32m4_t test_vnsra_wv_i32m4_tumu(vbool8_t mask, vint32m4_t maskedoff, vint64m8_t op1, vuint32m4_t shift, size_t vl) {
  return __riscv_vnsra_tumu(mask, maskedoff, op1, shift, vl);
}

vint32m4_t test_vnsra_wx_i32m4_tumu(vbool8_t mask, vint32m4_t maskedoff, vint64m8_t op1, size_t shift, size_t vl) {
  return __riscv_vnsra_tumu(mask, maskedoff, op1, shift, vl);
}

vint8mf8_t test_vnsra_wv_i8mf8_mu(vbool64_t mask, vint8mf8_t maskedoff, vint16mf4_t op1, vuint8mf8_t shift, size_t vl) {
  return __riscv_vnsra_mu(mask, maskedoff, op1, shift, vl);
}

vint8mf8_t test_vnsra_wx_i8mf8_mu(vbool64_t mask, vint8mf8_t maskedoff, vint16mf4_t op1, size_t shift, size_t vl) {
  return __riscv_vnsra_mu(mask, maskedoff, op1, shift, vl);
}

vint8mf4_t test_vnsra_wv_i8mf4_mu(vbool32_t mask, vint8mf4_t maskedoff, vint16mf2_t op1, vuint8mf4_t shift, size_t vl) {
  return __riscv_vnsra_mu(mask, maskedoff, op1, shift, vl);
}

vint8mf4_t test_vnsra_wx_i8mf4_mu(vbool32_t mask, vint8mf4_t maskedoff, vint16mf2_t op1, size_t shift, size_t vl) {
  return __riscv_vnsra_mu(mask, maskedoff, op1, shift, vl);
}

vint8mf2_t test_vnsra_wv_i8mf2_mu(vbool16_t mask, vint8mf2_t maskedoff, vint16m1_t op1, vuint8mf2_t shift, size_t vl) {
  return __riscv_vnsra_mu(mask, maskedoff, op1, shift, vl);
}

vint8mf2_t test_vnsra_wx_i8mf2_mu(vbool16_t mask, vint8mf2_t maskedoff, vint16m1_t op1, size_t shift, size_t vl) {
  return __riscv_vnsra_mu(mask, maskedoff, op1, shift, vl);
}

vint8m1_t test_vnsra_wv_i8m1_mu(vbool8_t mask, vint8m1_t maskedoff, vint16m2_t op1, vuint8m1_t shift, size_t vl) {
  return __riscv_vnsra_mu(mask, maskedoff, op1, shift, vl);
}

vint8m1_t test_vnsra_wx_i8m1_mu(vbool8_t mask, vint8m1_t maskedoff, vint16m2_t op1, size_t shift, size_t vl) {
  return __riscv_vnsra_mu(mask, maskedoff, op1, shift, vl);
}

vint8m2_t test_vnsra_wv_i8m2_mu(vbool4_t mask, vint8m2_t maskedoff, vint16m4_t op1, vuint8m2_t shift, size_t vl) {
  return __riscv_vnsra_mu(mask, maskedoff, op1, shift, vl);
}

vint8m2_t test_vnsra_wx_i8m2_mu(vbool4_t mask, vint8m2_t maskedoff, vint16m4_t op1, size_t shift, size_t vl) {
  return __riscv_vnsra_mu(mask, maskedoff, op1, shift, vl);
}

vint8m4_t test_vnsra_wv_i8m4_mu(vbool2_t mask, vint8m4_t maskedoff, vint16m8_t op1, vuint8m4_t shift, size_t vl) {
  return __riscv_vnsra_mu(mask, maskedoff, op1, shift, vl);
}

vint8m4_t test_vnsra_wx_i8m4_mu(vbool2_t mask, vint8m4_t maskedoff, vint16m8_t op1, size_t shift, size_t vl) {
  return __riscv_vnsra_mu(mask, maskedoff, op1, shift, vl);
}

vint16mf4_t test_vnsra_wv_i16mf4_mu(vbool64_t mask, vint16mf4_t maskedoff, vint32mf2_t op1, vuint16mf4_t shift, size_t vl) {
  return __riscv_vnsra_mu(mask, maskedoff, op1, shift, vl);
}

vint16mf4_t test_vnsra_wx_i16mf4_mu(vbool64_t mask, vint16mf4_t maskedoff, vint32mf2_t op1, size_t shift, size_t vl) {
  return __riscv_vnsra_mu(mask, maskedoff, op1, shift, vl);
}

vint16mf2_t test_vnsra_wv_i16mf2_mu(vbool32_t mask, vint16mf2_t maskedoff, vint32m1_t op1, vuint16mf2_t shift, size_t vl) {
  return __riscv_vnsra_mu(mask, maskedoff, op1, shift, vl);
}

vint16mf2_t test_vnsra_wx_i16mf2_mu(vbool32_t mask, vint16mf2_t maskedoff, vint32m1_t op1, size_t shift, size_t vl) {
  return __riscv_vnsra_mu(mask, maskedoff, op1, shift, vl);
}

vint16m1_t test_vnsra_wv_i16m1_mu(vbool16_t mask, vint16m1_t maskedoff, vint32m2_t op1, vuint16m1_t shift, size_t vl) {
  return __riscv_vnsra_mu(mask, maskedoff, op1, shift, vl);
}

vint16m1_t test_vnsra_wx_i16m1_mu(vbool16_t mask, vint16m1_t maskedoff, vint32m2_t op1, size_t shift, size_t vl) {
  return __riscv_vnsra_mu(mask, maskedoff, op1, shift, vl);
}

vint16m2_t test_vnsra_wv_i16m2_mu(vbool8_t mask, vint16m2_t maskedoff, vint32m4_t op1, vuint16m2_t shift, size_t vl) {
  return __riscv_vnsra_mu(mask, maskedoff, op1, shift, vl);
}

vint16m2_t test_vnsra_wx_i16m2_mu(vbool8_t mask, vint16m2_t maskedoff, vint32m4_t op1, size_t shift, size_t vl) {
  return __riscv_vnsra_mu(mask, maskedoff, op1, shift, vl);
}

vint16m4_t test_vnsra_wv_i16m4_mu(vbool4_t mask, vint16m4_t maskedoff, vint32m8_t op1, vuint16m4_t shift, size_t vl) {
  return __riscv_vnsra_mu(mask, maskedoff, op1, shift, vl);
}

vint16m4_t test_vnsra_wx_i16m4_mu(vbool4_t mask, vint16m4_t maskedoff, vint32m8_t op1, size_t shift, size_t vl) {
  return __riscv_vnsra_mu(mask, maskedoff, op1, shift, vl);
}

vint32mf2_t test_vnsra_wv_i32mf2_mu(vbool64_t mask, vint32mf2_t maskedoff, vint64m1_t op1, vuint32mf2_t shift, size_t vl) {
  return __riscv_vnsra_mu(mask, maskedoff, op1, shift, vl);
}

vint32mf2_t test_vnsra_wx_i32mf2_mu(vbool64_t mask, vint32mf2_t maskedoff, vint64m1_t op1, size_t shift, size_t vl) {
  return __riscv_vnsra_mu(mask, maskedoff, op1, shift, vl);
}

vint32m1_t test_vnsra_wv_i32m1_mu(vbool32_t mask, vint32m1_t maskedoff, vint64m2_t op1, vuint32m1_t shift, size_t vl) {
  return __riscv_vnsra_mu(mask, maskedoff, op1, shift, vl);
}

vint32m1_t test_vnsra_wx_i32m1_mu(vbool32_t mask, vint32m1_t maskedoff, vint64m2_t op1, size_t shift, size_t vl) {
  return __riscv_vnsra_mu(mask, maskedoff, op1, shift, vl);
}

vint32m2_t test_vnsra_wv_i32m2_mu(vbool16_t mask, vint32m2_t maskedoff, vint64m4_t op1, vuint32m2_t shift, size_t vl) {
  return __riscv_vnsra_mu(mask, maskedoff, op1, shift, vl);
}

vint32m2_t test_vnsra_wx_i32m2_mu(vbool16_t mask, vint32m2_t maskedoff, vint64m4_t op1, size_t shift, size_t vl) {
  return __riscv_vnsra_mu(mask, maskedoff, op1, shift, vl);
}

vint32m4_t test_vnsra_wv_i32m4_mu(vbool8_t mask, vint32m4_t maskedoff, vint64m8_t op1, vuint32m4_t shift, size_t vl) {
  return __riscv_vnsra_mu(mask, maskedoff, op1, shift, vl);
}

vint32m4_t test_vnsra_wx_i32m4_mu(vbool8_t mask, vint32m4_t maskedoff, vint64m8_t op1, size_t shift, size_t vl) {
  return __riscv_vnsra_mu(mask, maskedoff, op1, shift, vl);
}
