// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -disable-O0-optnone \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

vint8mf8_t test_vncvt_x_x_w_i8mf8_tu(vint8mf8_t maskedoff, vint16mf4_t src, size_t vl) {
  return vncvt_x_x_w_i8mf8_tu(maskedoff, src, vl);
}

vint8mf4_t test_vncvt_x_x_w_i8mf4_tu(vint8mf4_t maskedoff, vint16mf2_t src, size_t vl) {
  return vncvt_x_x_w_i8mf4_tu(maskedoff, src, vl);
}

vint8mf2_t test_vncvt_x_x_w_i8mf2_tu(vint8mf2_t maskedoff, vint16m1_t src, size_t vl) {
  return vncvt_x_x_w_i8mf2_tu(maskedoff, src, vl);
}

vint8m1_t test_vncvt_x_x_w_i8m1_tu(vint8m1_t maskedoff, vint16m2_t src, size_t vl) {
  return vncvt_x_x_w_i8m1_tu(maskedoff, src, vl);
}

vint8m2_t test_vncvt_x_x_w_i8m2_tu(vint8m2_t maskedoff, vint16m4_t src, size_t vl) {
  return vncvt_x_x_w_i8m2_tu(maskedoff, src, vl);
}

vint8m4_t test_vncvt_x_x_w_i8m4_tu(vint8m4_t maskedoff, vint16m8_t src, size_t vl) {
  return vncvt_x_x_w_i8m4_tu(maskedoff, src, vl);
}

vuint8mf8_t test_vncvt_x_x_w_u8mf8_tu(vuint8mf8_t maskedoff, vuint16mf4_t src, size_t vl) {
  return vncvt_x_x_w_u8mf8_tu(maskedoff, src, vl);
}

vuint8mf4_t test_vncvt_x_x_w_u8mf4_tu(vuint8mf4_t maskedoff, vuint16mf2_t src, size_t vl) {
  return vncvt_x_x_w_u8mf4_tu(maskedoff, src, vl);
}

vuint8mf2_t test_vncvt_x_x_w_u8mf2_tu(vuint8mf2_t maskedoff, vuint16m1_t src, size_t vl) {
  return vncvt_x_x_w_u8mf2_tu(maskedoff, src, vl);
}

vuint8m1_t test_vncvt_x_x_w_u8m1_tu(vuint8m1_t maskedoff, vuint16m2_t src, size_t vl) {
  return vncvt_x_x_w_u8m1_tu(maskedoff, src, vl);
}

vuint8m2_t test_vncvt_x_x_w_u8m2_tu(vuint8m2_t maskedoff, vuint16m4_t src, size_t vl) {
  return vncvt_x_x_w_u8m2_tu(maskedoff, src, vl);
}

vuint8m4_t test_vncvt_x_x_w_u8m4_tu(vuint8m4_t maskedoff, vuint16m8_t src, size_t vl) {
  return vncvt_x_x_w_u8m4_tu(maskedoff, src, vl);
}

vint16mf4_t test_vncvt_x_x_w_i16mf4_tu(vint16mf4_t maskedoff, vint32mf2_t src, size_t vl) {
  return vncvt_x_x_w_i16mf4_tu(maskedoff, src, vl);
}

vint16mf2_t test_vncvt_x_x_w_i16mf2_tu(vint16mf2_t maskedoff, vint32m1_t src, size_t vl) {
  return vncvt_x_x_w_i16mf2_tu(maskedoff, src, vl);
}

vint16m1_t test_vncvt_x_x_w_i16m1_tu(vint16m1_t maskedoff, vint32m2_t src, size_t vl) {
  return vncvt_x_x_w_i16m1_tu(maskedoff, src, vl);
}

vint16m2_t test_vncvt_x_x_w_i16m2_tu(vint16m2_t maskedoff, vint32m4_t src, size_t vl) {
  return vncvt_x_x_w_i16m2_tu(maskedoff, src, vl);
}

vint16m4_t test_vncvt_x_x_w_i16m4_tu(vint16m4_t maskedoff, vint32m8_t src, size_t vl) {
  return vncvt_x_x_w_i16m4_tu(maskedoff, src, vl);
}

vuint16mf4_t test_vncvt_x_x_w_u16mf4_tu(vuint16mf4_t maskedoff, vuint32mf2_t src, size_t vl) {
  return vncvt_x_x_w_u16mf4_tu(maskedoff, src, vl);
}

vuint16mf2_t test_vncvt_x_x_w_u16mf2_tu(vuint16mf2_t maskedoff, vuint32m1_t src, size_t vl) {
  return vncvt_x_x_w_u16mf2_tu(maskedoff, src, vl);
}

vuint16m1_t test_vncvt_x_x_w_u16m1_tu(vuint16m1_t maskedoff, vuint32m2_t src, size_t vl) {
  return vncvt_x_x_w_u16m1_tu(maskedoff, src, vl);
}

vuint16m2_t test_vncvt_x_x_w_u16m2_tu(vuint16m2_t maskedoff, vuint32m4_t src, size_t vl) {
  return vncvt_x_x_w_u16m2_tu(maskedoff, src, vl);
}

vuint16m4_t test_vncvt_x_x_w_u16m4_tu(vuint16m4_t maskedoff, vuint32m8_t src, size_t vl) {
  return vncvt_x_x_w_u16m4_tu(maskedoff, src, vl);
}

vint32mf2_t test_vncvt_x_x_w_i32mf2_tu(vint32mf2_t maskedoff, vint64m1_t src, size_t vl) {
  return vncvt_x_x_w_i32mf2_tu(maskedoff, src, vl);
}

vint32m1_t test_vncvt_x_x_w_i32m1_tu(vint32m1_t maskedoff, vint64m2_t src, size_t vl) {
  return vncvt_x_x_w_i32m1_tu(maskedoff, src, vl);
}

vint32m2_t test_vncvt_x_x_w_i32m2_tu(vint32m2_t maskedoff, vint64m4_t src, size_t vl) {
  return vncvt_x_x_w_i32m2_tu(maskedoff, src, vl);
}

vint32m4_t test_vncvt_x_x_w_i32m4_tu(vint32m4_t maskedoff, vint64m8_t src, size_t vl) {
  return vncvt_x_x_w_i32m4_tu(maskedoff, src, vl);
}

vuint32mf2_t test_vncvt_x_x_w_u32mf2_tu(vuint32mf2_t maskedoff, vuint64m1_t src, size_t vl) {
  return vncvt_x_x_w_u32mf2_tu(maskedoff, src, vl);
}

vuint32m1_t test_vncvt_x_x_w_u32m1_tu(vuint32m1_t maskedoff, vuint64m2_t src, size_t vl) {
  return vncvt_x_x_w_u32m1_tu(maskedoff, src, vl);
}

vuint32m2_t test_vncvt_x_x_w_u32m2_tu(vuint32m2_t maskedoff, vuint64m4_t src, size_t vl) {
  return vncvt_x_x_w_u32m2_tu(maskedoff, src, vl);
}

vuint32m4_t test_vncvt_x_x_w_u32m4_tu(vuint32m4_t maskedoff, vuint64m8_t src, size_t vl) {
  return vncvt_x_x_w_u32m4_tu(maskedoff, src, vl);
}

vint8mf8_t test_vncvt_x_x_w_i8mf8_ta(vint16mf4_t src, size_t vl) {
  return vncvt_x_x_w_i8mf8_ta(src, vl);
}

vint8mf4_t test_vncvt_x_x_w_i8mf4_ta(vint16mf2_t src, size_t vl) {
  return vncvt_x_x_w_i8mf4_ta(src, vl);
}

vint8mf2_t test_vncvt_x_x_w_i8mf2_ta(vint16m1_t src, size_t vl) {
  return vncvt_x_x_w_i8mf2_ta(src, vl);
}

vint8m1_t test_vncvt_x_x_w_i8m1_ta(vint16m2_t src, size_t vl) {
  return vncvt_x_x_w_i8m1_ta(src, vl);
}

vint8m2_t test_vncvt_x_x_w_i8m2_ta(vint16m4_t src, size_t vl) {
  return vncvt_x_x_w_i8m2_ta(src, vl);
}

vint8m4_t test_vncvt_x_x_w_i8m4_ta(vint16m8_t src, size_t vl) {
  return vncvt_x_x_w_i8m4_ta(src, vl);
}

vuint8mf8_t test_vncvt_x_x_w_u8mf8_ta(vuint16mf4_t src, size_t vl) {
  return vncvt_x_x_w_u8mf8_ta(src, vl);
}

vuint8mf4_t test_vncvt_x_x_w_u8mf4_ta(vuint16mf2_t src, size_t vl) {
  return vncvt_x_x_w_u8mf4_ta(src, vl);
}

vuint8mf2_t test_vncvt_x_x_w_u8mf2_ta(vuint16m1_t src, size_t vl) {
  return vncvt_x_x_w_u8mf2_ta(src, vl);
}

vuint8m1_t test_vncvt_x_x_w_u8m1_ta(vuint16m2_t src, size_t vl) {
  return vncvt_x_x_w_u8m1_ta(src, vl);
}

vuint8m2_t test_vncvt_x_x_w_u8m2_ta(vuint16m4_t src, size_t vl) {
  return vncvt_x_x_w_u8m2_ta(src, vl);
}

vuint8m4_t test_vncvt_x_x_w_u8m4_ta(vuint16m8_t src, size_t vl) {
  return vncvt_x_x_w_u8m4_ta(src, vl);
}

vint16mf4_t test_vncvt_x_x_w_i16mf4_ta(vint32mf2_t src, size_t vl) {
  return vncvt_x_x_w_i16mf4_ta(src, vl);
}

vint16mf2_t test_vncvt_x_x_w_i16mf2_ta(vint32m1_t src, size_t vl) {
  return vncvt_x_x_w_i16mf2_ta(src, vl);
}

vint16m1_t test_vncvt_x_x_w_i16m1_ta(vint32m2_t src, size_t vl) {
  return vncvt_x_x_w_i16m1_ta(src, vl);
}

vint16m2_t test_vncvt_x_x_w_i16m2_ta(vint32m4_t src, size_t vl) {
  return vncvt_x_x_w_i16m2_ta(src, vl);
}

vint16m4_t test_vncvt_x_x_w_i16m4_ta(vint32m8_t src, size_t vl) {
  return vncvt_x_x_w_i16m4_ta(src, vl);
}

vuint16mf4_t test_vncvt_x_x_w_u16mf4_ta(vuint32mf2_t src, size_t vl) {
  return vncvt_x_x_w_u16mf4_ta(src, vl);
}

vuint16mf2_t test_vncvt_x_x_w_u16mf2_ta(vuint32m1_t src, size_t vl) {
  return vncvt_x_x_w_u16mf2_ta(src, vl);
}

vuint16m1_t test_vncvt_x_x_w_u16m1_ta(vuint32m2_t src, size_t vl) {
  return vncvt_x_x_w_u16m1_ta(src, vl);
}

vuint16m2_t test_vncvt_x_x_w_u16m2_ta(vuint32m4_t src, size_t vl) {
  return vncvt_x_x_w_u16m2_ta(src, vl);
}

vuint16m4_t test_vncvt_x_x_w_u16m4_ta(vuint32m8_t src, size_t vl) {
  return vncvt_x_x_w_u16m4_ta(src, vl);
}

vint32mf2_t test_vncvt_x_x_w_i32mf2_ta(vint64m1_t src, size_t vl) {
  return vncvt_x_x_w_i32mf2_ta(src, vl);
}

vint32m1_t test_vncvt_x_x_w_i32m1_ta(vint64m2_t src, size_t vl) {
  return vncvt_x_x_w_i32m1_ta(src, vl);
}

vint32m2_t test_vncvt_x_x_w_i32m2_ta(vint64m4_t src, size_t vl) {
  return vncvt_x_x_w_i32m2_ta(src, vl);
}

vint32m4_t test_vncvt_x_x_w_i32m4_ta(vint64m8_t src, size_t vl) {
  return vncvt_x_x_w_i32m4_ta(src, vl);
}

vuint32mf2_t test_vncvt_x_x_w_u32mf2_ta(vuint64m1_t src, size_t vl) {
  return vncvt_x_x_w_u32mf2_ta(src, vl);
}

vuint32m1_t test_vncvt_x_x_w_u32m1_ta(vuint64m2_t src, size_t vl) {
  return vncvt_x_x_w_u32m1_ta(src, vl);
}

vuint32m2_t test_vncvt_x_x_w_u32m2_ta(vuint64m4_t src, size_t vl) {
  return vncvt_x_x_w_u32m2_ta(src, vl);
}

vuint32m4_t test_vncvt_x_x_w_u32m4_ta(vuint64m8_t src, size_t vl) {
  return vncvt_x_x_w_u32m4_ta(src, vl);
}

vint8mf8_t test_vncvt_x_x_w_i8mf8_tuma(vbool64_t mask, vint8mf8_t maskedoff, vint16mf4_t src, size_t vl) {
  return vncvt_x_x_w_i8mf8_tuma(mask, maskedoff, src, vl);
}

vint8mf4_t test_vncvt_x_x_w_i8mf4_tuma(vbool32_t mask, vint8mf4_t maskedoff, vint16mf2_t src, size_t vl) {
  return vncvt_x_x_w_i8mf4_tuma(mask, maskedoff, src, vl);
}

vint8mf2_t test_vncvt_x_x_w_i8mf2_tuma(vbool16_t mask, vint8mf2_t maskedoff, vint16m1_t src, size_t vl) {
  return vncvt_x_x_w_i8mf2_tuma(mask, maskedoff, src, vl);
}

vint8m1_t test_vncvt_x_x_w_i8m1_tuma(vbool8_t mask, vint8m1_t maskedoff, vint16m2_t src, size_t vl) {
  return vncvt_x_x_w_i8m1_tuma(mask, maskedoff, src, vl);
}

vint8m2_t test_vncvt_x_x_w_i8m2_tuma(vbool4_t mask, vint8m2_t maskedoff, vint16m4_t src, size_t vl) {
  return vncvt_x_x_w_i8m2_tuma(mask, maskedoff, src, vl);
}

vint8m4_t test_vncvt_x_x_w_i8m4_tuma(vbool2_t mask, vint8m4_t maskedoff, vint16m8_t src, size_t vl) {
  return vncvt_x_x_w_i8m4_tuma(mask, maskedoff, src, vl);
}

vuint8mf8_t test_vncvt_x_x_w_u8mf8_tuma(vbool64_t mask, vuint8mf8_t maskedoff, vuint16mf4_t src, size_t vl) {
  return vncvt_x_x_w_u8mf8_tuma(mask, maskedoff, src, vl);
}

vuint8mf4_t test_vncvt_x_x_w_u8mf4_tuma(vbool32_t mask, vuint8mf4_t maskedoff, vuint16mf2_t src, size_t vl) {
  return vncvt_x_x_w_u8mf4_tuma(mask, maskedoff, src, vl);
}

vuint8mf2_t test_vncvt_x_x_w_u8mf2_tuma(vbool16_t mask, vuint8mf2_t maskedoff, vuint16m1_t src, size_t vl) {
  return vncvt_x_x_w_u8mf2_tuma(mask, maskedoff, src, vl);
}

vuint8m1_t test_vncvt_x_x_w_u8m1_tuma(vbool8_t mask, vuint8m1_t maskedoff, vuint16m2_t src, size_t vl) {
  return vncvt_x_x_w_u8m1_tuma(mask, maskedoff, src, vl);
}

vuint8m2_t test_vncvt_x_x_w_u8m2_tuma(vbool4_t mask, vuint8m2_t maskedoff, vuint16m4_t src, size_t vl) {
  return vncvt_x_x_w_u8m2_tuma(mask, maskedoff, src, vl);
}

vuint8m4_t test_vncvt_x_x_w_u8m4_tuma(vbool2_t mask, vuint8m4_t maskedoff, vuint16m8_t src, size_t vl) {
  return vncvt_x_x_w_u8m4_tuma(mask, maskedoff, src, vl);
}

vint16mf4_t test_vncvt_x_x_w_i16mf4_tuma(vbool64_t mask, vint16mf4_t maskedoff, vint32mf2_t src, size_t vl) {
  return vncvt_x_x_w_i16mf4_tuma(mask, maskedoff, src, vl);
}

vint16mf2_t test_vncvt_x_x_w_i16mf2_tuma(vbool32_t mask, vint16mf2_t maskedoff, vint32m1_t src, size_t vl) {
  return vncvt_x_x_w_i16mf2_tuma(mask, maskedoff, src, vl);
}

vint16m1_t test_vncvt_x_x_w_i16m1_tuma(vbool16_t mask, vint16m1_t maskedoff, vint32m2_t src, size_t vl) {
  return vncvt_x_x_w_i16m1_tuma(mask, maskedoff, src, vl);
}

vint16m2_t test_vncvt_x_x_w_i16m2_tuma(vbool8_t mask, vint16m2_t maskedoff, vint32m4_t src, size_t vl) {
  return vncvt_x_x_w_i16m2_tuma(mask, maskedoff, src, vl);
}

vint16m4_t test_vncvt_x_x_w_i16m4_tuma(vbool4_t mask, vint16m4_t maskedoff, vint32m8_t src, size_t vl) {
  return vncvt_x_x_w_i16m4_tuma(mask, maskedoff, src, vl);
}

vuint16mf4_t test_vncvt_x_x_w_u16mf4_tuma(vbool64_t mask, vuint16mf4_t maskedoff, vuint32mf2_t src, size_t vl) {
  return vncvt_x_x_w_u16mf4_tuma(mask, maskedoff, src, vl);
}

vuint16mf2_t test_vncvt_x_x_w_u16mf2_tuma(vbool32_t mask, vuint16mf2_t maskedoff, vuint32m1_t src, size_t vl) {
  return vncvt_x_x_w_u16mf2_tuma(mask, maskedoff, src, vl);
}

vuint16m1_t test_vncvt_x_x_w_u16m1_tuma(vbool16_t mask, vuint16m1_t maskedoff, vuint32m2_t src, size_t vl) {
  return vncvt_x_x_w_u16m1_tuma(mask, maskedoff, src, vl);
}

vuint16m2_t test_vncvt_x_x_w_u16m2_tuma(vbool8_t mask, vuint16m2_t maskedoff, vuint32m4_t src, size_t vl) {
  return vncvt_x_x_w_u16m2_tuma(mask, maskedoff, src, vl);
}

vuint16m4_t test_vncvt_x_x_w_u16m4_tuma(vbool4_t mask, vuint16m4_t maskedoff, vuint32m8_t src, size_t vl) {
  return vncvt_x_x_w_u16m4_tuma(mask, maskedoff, src, vl);
}

vint32mf2_t test_vncvt_x_x_w_i32mf2_tuma(vbool64_t mask, vint32mf2_t maskedoff, vint64m1_t src, size_t vl) {
  return vncvt_x_x_w_i32mf2_tuma(mask, maskedoff, src, vl);
}

vint32m1_t test_vncvt_x_x_w_i32m1_tuma(vbool32_t mask, vint32m1_t maskedoff, vint64m2_t src, size_t vl) {
  return vncvt_x_x_w_i32m1_tuma(mask, maskedoff, src, vl);
}

vint32m2_t test_vncvt_x_x_w_i32m2_tuma(vbool16_t mask, vint32m2_t maskedoff, vint64m4_t src, size_t vl) {
  return vncvt_x_x_w_i32m2_tuma(mask, maskedoff, src, vl);
}

vint32m4_t test_vncvt_x_x_w_i32m4_tuma(vbool8_t mask, vint32m4_t maskedoff, vint64m8_t src, size_t vl) {
  return vncvt_x_x_w_i32m4_tuma(mask, maskedoff, src, vl);
}

vuint32mf2_t test_vncvt_x_x_w_u32mf2_tuma(vbool64_t mask, vuint32mf2_t maskedoff, vuint64m1_t src, size_t vl) {
  return vncvt_x_x_w_u32mf2_tuma(mask, maskedoff, src, vl);
}

vuint32m1_t test_vncvt_x_x_w_u32m1_tuma(vbool32_t mask, vuint32m1_t maskedoff, vuint64m2_t src, size_t vl) {
  return vncvt_x_x_w_u32m1_tuma(mask, maskedoff, src, vl);
}

vuint32m2_t test_vncvt_x_x_w_u32m2_tuma(vbool16_t mask, vuint32m2_t maskedoff, vuint64m4_t src, size_t vl) {
  return vncvt_x_x_w_u32m2_tuma(mask, maskedoff, src, vl);
}

vuint32m4_t test_vncvt_x_x_w_u32m4_tuma(vbool8_t mask, vuint32m4_t maskedoff, vuint64m8_t src, size_t vl) {
  return vncvt_x_x_w_u32m4_tuma(mask, maskedoff, src, vl);
}

vint8mf8_t test_vncvt_x_x_w_i8mf8_tumu(vbool64_t mask, vint8mf8_t maskedoff, vint16mf4_t src, size_t vl) {
  return vncvt_x_x_w_i8mf8_tumu(mask, maskedoff, src, vl);
}

vint8mf4_t test_vncvt_x_x_w_i8mf4_tumu(vbool32_t mask, vint8mf4_t maskedoff, vint16mf2_t src, size_t vl) {
  return vncvt_x_x_w_i8mf4_tumu(mask, maskedoff, src, vl);
}

vint8mf2_t test_vncvt_x_x_w_i8mf2_tumu(vbool16_t mask, vint8mf2_t maskedoff, vint16m1_t src, size_t vl) {
  return vncvt_x_x_w_i8mf2_tumu(mask, maskedoff, src, vl);
}

vint8m1_t test_vncvt_x_x_w_i8m1_tumu(vbool8_t mask, vint8m1_t maskedoff, vint16m2_t src, size_t vl) {
  return vncvt_x_x_w_i8m1_tumu(mask, maskedoff, src, vl);
}

vint8m2_t test_vncvt_x_x_w_i8m2_tumu(vbool4_t mask, vint8m2_t maskedoff, vint16m4_t src, size_t vl) {
  return vncvt_x_x_w_i8m2_tumu(mask, maskedoff, src, vl);
}

vint8m4_t test_vncvt_x_x_w_i8m4_tumu(vbool2_t mask, vint8m4_t maskedoff, vint16m8_t src, size_t vl) {
  return vncvt_x_x_w_i8m4_tumu(mask, maskedoff, src, vl);
}

vuint8mf8_t test_vncvt_x_x_w_u8mf8_tumu(vbool64_t mask, vuint8mf8_t maskedoff, vuint16mf4_t src, size_t vl) {
  return vncvt_x_x_w_u8mf8_tumu(mask, maskedoff, src, vl);
}

vuint8mf4_t test_vncvt_x_x_w_u8mf4_tumu(vbool32_t mask, vuint8mf4_t maskedoff, vuint16mf2_t src, size_t vl) {
  return vncvt_x_x_w_u8mf4_tumu(mask, maskedoff, src, vl);
}

vuint8mf2_t test_vncvt_x_x_w_u8mf2_tumu(vbool16_t mask, vuint8mf2_t maskedoff, vuint16m1_t src, size_t vl) {
  return vncvt_x_x_w_u8mf2_tumu(mask, maskedoff, src, vl);
}

vuint8m1_t test_vncvt_x_x_w_u8m1_tumu(vbool8_t mask, vuint8m1_t maskedoff, vuint16m2_t src, size_t vl) {
  return vncvt_x_x_w_u8m1_tumu(mask, maskedoff, src, vl);
}

vuint8m2_t test_vncvt_x_x_w_u8m2_tumu(vbool4_t mask, vuint8m2_t maskedoff, vuint16m4_t src, size_t vl) {
  return vncvt_x_x_w_u8m2_tumu(mask, maskedoff, src, vl);
}

vuint8m4_t test_vncvt_x_x_w_u8m4_tumu(vbool2_t mask, vuint8m4_t maskedoff, vuint16m8_t src, size_t vl) {
  return vncvt_x_x_w_u8m4_tumu(mask, maskedoff, src, vl);
}

vint16mf4_t test_vncvt_x_x_w_i16mf4_tumu(vbool64_t mask, vint16mf4_t maskedoff, vint32mf2_t src, size_t vl) {
  return vncvt_x_x_w_i16mf4_tumu(mask, maskedoff, src, vl);
}

vint16mf2_t test_vncvt_x_x_w_i16mf2_tumu(vbool32_t mask, vint16mf2_t maskedoff, vint32m1_t src, size_t vl) {
  return vncvt_x_x_w_i16mf2_tumu(mask, maskedoff, src, vl);
}

vint16m1_t test_vncvt_x_x_w_i16m1_tumu(vbool16_t mask, vint16m1_t maskedoff, vint32m2_t src, size_t vl) {
  return vncvt_x_x_w_i16m1_tumu(mask, maskedoff, src, vl);
}

vint16m2_t test_vncvt_x_x_w_i16m2_tumu(vbool8_t mask, vint16m2_t maskedoff, vint32m4_t src, size_t vl) {
  return vncvt_x_x_w_i16m2_tumu(mask, maskedoff, src, vl);
}

vint16m4_t test_vncvt_x_x_w_i16m4_tumu(vbool4_t mask, vint16m4_t maskedoff, vint32m8_t src, size_t vl) {
  return vncvt_x_x_w_i16m4_tumu(mask, maskedoff, src, vl);
}

vuint16mf4_t test_vncvt_x_x_w_u16mf4_tumu(vbool64_t mask, vuint16mf4_t maskedoff, vuint32mf2_t src, size_t vl) {
  return vncvt_x_x_w_u16mf4_tumu(mask, maskedoff, src, vl);
}

vuint16mf2_t test_vncvt_x_x_w_u16mf2_tumu(vbool32_t mask, vuint16mf2_t maskedoff, vuint32m1_t src, size_t vl) {
  return vncvt_x_x_w_u16mf2_tumu(mask, maskedoff, src, vl);
}

vuint16m1_t test_vncvt_x_x_w_u16m1_tumu(vbool16_t mask, vuint16m1_t maskedoff, vuint32m2_t src, size_t vl) {
  return vncvt_x_x_w_u16m1_tumu(mask, maskedoff, src, vl);
}

vuint16m2_t test_vncvt_x_x_w_u16m2_tumu(vbool8_t mask, vuint16m2_t maskedoff, vuint32m4_t src, size_t vl) {
  return vncvt_x_x_w_u16m2_tumu(mask, maskedoff, src, vl);
}

vuint16m4_t test_vncvt_x_x_w_u16m4_tumu(vbool4_t mask, vuint16m4_t maskedoff, vuint32m8_t src, size_t vl) {
  return vncvt_x_x_w_u16m4_tumu(mask, maskedoff, src, vl);
}

vint32mf2_t test_vncvt_x_x_w_i32mf2_tumu(vbool64_t mask, vint32mf2_t maskedoff, vint64m1_t src, size_t vl) {
  return vncvt_x_x_w_i32mf2_tumu(mask, maskedoff, src, vl);
}

vint32m1_t test_vncvt_x_x_w_i32m1_tumu(vbool32_t mask, vint32m1_t maskedoff, vint64m2_t src, size_t vl) {
  return vncvt_x_x_w_i32m1_tumu(mask, maskedoff, src, vl);
}

vint32m2_t test_vncvt_x_x_w_i32m2_tumu(vbool16_t mask, vint32m2_t maskedoff, vint64m4_t src, size_t vl) {
  return vncvt_x_x_w_i32m2_tumu(mask, maskedoff, src, vl);
}

vint32m4_t test_vncvt_x_x_w_i32m4_tumu(vbool8_t mask, vint32m4_t maskedoff, vint64m8_t src, size_t vl) {
  return vncvt_x_x_w_i32m4_tumu(mask, maskedoff, src, vl);
}

vuint32mf2_t test_vncvt_x_x_w_u32mf2_tumu(vbool64_t mask, vuint32mf2_t maskedoff, vuint64m1_t src, size_t vl) {
  return vncvt_x_x_w_u32mf2_tumu(mask, maskedoff, src, vl);
}

vuint32m1_t test_vncvt_x_x_w_u32m1_tumu(vbool32_t mask, vuint32m1_t maskedoff, vuint64m2_t src, size_t vl) {
  return vncvt_x_x_w_u32m1_tumu(mask, maskedoff, src, vl);
}

vuint32m2_t test_vncvt_x_x_w_u32m2_tumu(vbool16_t mask, vuint32m2_t maskedoff, vuint64m4_t src, size_t vl) {
  return vncvt_x_x_w_u32m2_tumu(mask, maskedoff, src, vl);
}

vuint32m4_t test_vncvt_x_x_w_u32m4_tumu(vbool8_t mask, vuint32m4_t maskedoff, vuint64m8_t src, size_t vl) {
  return vncvt_x_x_w_u32m4_tumu(mask, maskedoff, src, vl);
}

vint8mf8_t test_vncvt_x_x_w_i8mf8_tama(vbool64_t mask, vint16mf4_t src, size_t vl) {
  return vncvt_x_x_w_i8mf8_tama(mask, src, vl);
}

vint8mf4_t test_vncvt_x_x_w_i8mf4_tama(vbool32_t mask, vint16mf2_t src, size_t vl) {
  return vncvt_x_x_w_i8mf4_tama(mask, src, vl);
}

vint8mf2_t test_vncvt_x_x_w_i8mf2_tama(vbool16_t mask, vint16m1_t src, size_t vl) {
  return vncvt_x_x_w_i8mf2_tama(mask, src, vl);
}

vint8m1_t test_vncvt_x_x_w_i8m1_tama(vbool8_t mask, vint16m2_t src, size_t vl) {
  return vncvt_x_x_w_i8m1_tama(mask, src, vl);
}

vint8m2_t test_vncvt_x_x_w_i8m2_tama(vbool4_t mask, vint16m4_t src, size_t vl) {
  return vncvt_x_x_w_i8m2_tama(mask, src, vl);
}

vint8m4_t test_vncvt_x_x_w_i8m4_tama(vbool2_t mask, vint16m8_t src, size_t vl) {
  return vncvt_x_x_w_i8m4_tama(mask, src, vl);
}

vuint8mf8_t test_vncvt_x_x_w_u8mf8_tama(vbool64_t mask, vuint16mf4_t src, size_t vl) {
  return vncvt_x_x_w_u8mf8_tama(mask, src, vl);
}

vuint8mf4_t test_vncvt_x_x_w_u8mf4_tama(vbool32_t mask, vuint16mf2_t src, size_t vl) {
  return vncvt_x_x_w_u8mf4_tama(mask, src, vl);
}

vuint8mf2_t test_vncvt_x_x_w_u8mf2_tama(vbool16_t mask, vuint16m1_t src, size_t vl) {
  return vncvt_x_x_w_u8mf2_tama(mask, src, vl);
}

vuint8m1_t test_vncvt_x_x_w_u8m1_tama(vbool8_t mask, vuint16m2_t src, size_t vl) {
  return vncvt_x_x_w_u8m1_tama(mask, src, vl);
}

vuint8m2_t test_vncvt_x_x_w_u8m2_tama(vbool4_t mask, vuint16m4_t src, size_t vl) {
  return vncvt_x_x_w_u8m2_tama(mask, src, vl);
}

vuint8m4_t test_vncvt_x_x_w_u8m4_tama(vbool2_t mask, vuint16m8_t src, size_t vl) {
  return vncvt_x_x_w_u8m4_tama(mask, src, vl);
}

vint16mf4_t test_vncvt_x_x_w_i16mf4_tama(vbool64_t mask, vint32mf2_t src, size_t vl) {
  return vncvt_x_x_w_i16mf4_tama(mask, src, vl);
}

vint16mf2_t test_vncvt_x_x_w_i16mf2_tama(vbool32_t mask, vint32m1_t src, size_t vl) {
  return vncvt_x_x_w_i16mf2_tama(mask, src, vl);
}

vint16m1_t test_vncvt_x_x_w_i16m1_tama(vbool16_t mask, vint32m2_t src, size_t vl) {
  return vncvt_x_x_w_i16m1_tama(mask, src, vl);
}

vint16m2_t test_vncvt_x_x_w_i16m2_tama(vbool8_t mask, vint32m4_t src, size_t vl) {
  return vncvt_x_x_w_i16m2_tama(mask, src, vl);
}

vint16m4_t test_vncvt_x_x_w_i16m4_tama(vbool4_t mask, vint32m8_t src, size_t vl) {
  return vncvt_x_x_w_i16m4_tama(mask, src, vl);
}

vuint16mf4_t test_vncvt_x_x_w_u16mf4_tama(vbool64_t mask, vuint32mf2_t src, size_t vl) {
  return vncvt_x_x_w_u16mf4_tama(mask, src, vl);
}

vuint16mf2_t test_vncvt_x_x_w_u16mf2_tama(vbool32_t mask, vuint32m1_t src, size_t vl) {
  return vncvt_x_x_w_u16mf2_tama(mask, src, vl);
}

vuint16m1_t test_vncvt_x_x_w_u16m1_tama(vbool16_t mask, vuint32m2_t src, size_t vl) {
  return vncvt_x_x_w_u16m1_tama(mask, src, vl);
}

vuint16m2_t test_vncvt_x_x_w_u16m2_tama(vbool8_t mask, vuint32m4_t src, size_t vl) {
  return vncvt_x_x_w_u16m2_tama(mask, src, vl);
}

vuint16m4_t test_vncvt_x_x_w_u16m4_tama(vbool4_t mask, vuint32m8_t src, size_t vl) {
  return vncvt_x_x_w_u16m4_tama(mask, src, vl);
}

vint32mf2_t test_vncvt_x_x_w_i32mf2_tama(vbool64_t mask, vint64m1_t src, size_t vl) {
  return vncvt_x_x_w_i32mf2_tama(mask, src, vl);
}

vint32m1_t test_vncvt_x_x_w_i32m1_tama(vbool32_t mask, vint64m2_t src, size_t vl) {
  return vncvt_x_x_w_i32m1_tama(mask, src, vl);
}

vint32m2_t test_vncvt_x_x_w_i32m2_tama(vbool16_t mask, vint64m4_t src, size_t vl) {
  return vncvt_x_x_w_i32m2_tama(mask, src, vl);
}

vint32m4_t test_vncvt_x_x_w_i32m4_tama(vbool8_t mask, vint64m8_t src, size_t vl) {
  return vncvt_x_x_w_i32m4_tama(mask, src, vl);
}

vuint32mf2_t test_vncvt_x_x_w_u32mf2_tama(vbool64_t mask, vuint64m1_t src, size_t vl) {
  return vncvt_x_x_w_u32mf2_tama(mask, src, vl);
}

vuint32m1_t test_vncvt_x_x_w_u32m1_tama(vbool32_t mask, vuint64m2_t src, size_t vl) {
  return vncvt_x_x_w_u32m1_tama(mask, src, vl);
}

vuint32m2_t test_vncvt_x_x_w_u32m2_tama(vbool16_t mask, vuint64m4_t src, size_t vl) {
  return vncvt_x_x_w_u32m2_tama(mask, src, vl);
}

vuint32m4_t test_vncvt_x_x_w_u32m4_tama(vbool8_t mask, vuint64m8_t src, size_t vl) {
  return vncvt_x_x_w_u32m4_tama(mask, src, vl);
}

vint8mf8_t test_vncvt_x_x_w_i8mf8_tamu(vbool64_t mask, vint8mf8_t maskedoff, vint16mf4_t src, size_t vl) {
  return vncvt_x_x_w_i8mf8_tamu(mask, maskedoff, src, vl);
}

vint8mf4_t test_vncvt_x_x_w_i8mf4_tamu(vbool32_t mask, vint8mf4_t maskedoff, vint16mf2_t src, size_t vl) {
  return vncvt_x_x_w_i8mf4_tamu(mask, maskedoff, src, vl);
}

vint8mf2_t test_vncvt_x_x_w_i8mf2_tamu(vbool16_t mask, vint8mf2_t maskedoff, vint16m1_t src, size_t vl) {
  return vncvt_x_x_w_i8mf2_tamu(mask, maskedoff, src, vl);
}

vint8m1_t test_vncvt_x_x_w_i8m1_tamu(vbool8_t mask, vint8m1_t maskedoff, vint16m2_t src, size_t vl) {
  return vncvt_x_x_w_i8m1_tamu(mask, maskedoff, src, vl);
}

vint8m2_t test_vncvt_x_x_w_i8m2_tamu(vbool4_t mask, vint8m2_t maskedoff, vint16m4_t src, size_t vl) {
  return vncvt_x_x_w_i8m2_tamu(mask, maskedoff, src, vl);
}

vint8m4_t test_vncvt_x_x_w_i8m4_tamu(vbool2_t mask, vint8m4_t maskedoff, vint16m8_t src, size_t vl) {
  return vncvt_x_x_w_i8m4_tamu(mask, maskedoff, src, vl);
}

vuint8mf8_t test_vncvt_x_x_w_u8mf8_tamu(vbool64_t mask, vuint8mf8_t maskedoff, vuint16mf4_t src, size_t vl) {
  return vncvt_x_x_w_u8mf8_tamu(mask, maskedoff, src, vl);
}

vuint8mf4_t test_vncvt_x_x_w_u8mf4_tamu(vbool32_t mask, vuint8mf4_t maskedoff, vuint16mf2_t src, size_t vl) {
  return vncvt_x_x_w_u8mf4_tamu(mask, maskedoff, src, vl);
}

vuint8mf2_t test_vncvt_x_x_w_u8mf2_tamu(vbool16_t mask, vuint8mf2_t maskedoff, vuint16m1_t src, size_t vl) {
  return vncvt_x_x_w_u8mf2_tamu(mask, maskedoff, src, vl);
}

vuint8m1_t test_vncvt_x_x_w_u8m1_tamu(vbool8_t mask, vuint8m1_t maskedoff, vuint16m2_t src, size_t vl) {
  return vncvt_x_x_w_u8m1_tamu(mask, maskedoff, src, vl);
}

vuint8m2_t test_vncvt_x_x_w_u8m2_tamu(vbool4_t mask, vuint8m2_t maskedoff, vuint16m4_t src, size_t vl) {
  return vncvt_x_x_w_u8m2_tamu(mask, maskedoff, src, vl);
}

vuint8m4_t test_vncvt_x_x_w_u8m4_tamu(vbool2_t mask, vuint8m4_t maskedoff, vuint16m8_t src, size_t vl) {
  return vncvt_x_x_w_u8m4_tamu(mask, maskedoff, src, vl);
}

vint16mf4_t test_vncvt_x_x_w_i16mf4_tamu(vbool64_t mask, vint16mf4_t maskedoff, vint32mf2_t src, size_t vl) {
  return vncvt_x_x_w_i16mf4_tamu(mask, maskedoff, src, vl);
}

vint16mf2_t test_vncvt_x_x_w_i16mf2_tamu(vbool32_t mask, vint16mf2_t maskedoff, vint32m1_t src, size_t vl) {
  return vncvt_x_x_w_i16mf2_tamu(mask, maskedoff, src, vl);
}

vint16m1_t test_vncvt_x_x_w_i16m1_tamu(vbool16_t mask, vint16m1_t maskedoff, vint32m2_t src, size_t vl) {
  return vncvt_x_x_w_i16m1_tamu(mask, maskedoff, src, vl);
}

vint16m2_t test_vncvt_x_x_w_i16m2_tamu(vbool8_t mask, vint16m2_t maskedoff, vint32m4_t src, size_t vl) {
  return vncvt_x_x_w_i16m2_tamu(mask, maskedoff, src, vl);
}

vint16m4_t test_vncvt_x_x_w_i16m4_tamu(vbool4_t mask, vint16m4_t maskedoff, vint32m8_t src, size_t vl) {
  return vncvt_x_x_w_i16m4_tamu(mask, maskedoff, src, vl);
}

vuint16mf4_t test_vncvt_x_x_w_u16mf4_tamu(vbool64_t mask, vuint16mf4_t maskedoff, vuint32mf2_t src, size_t vl) {
  return vncvt_x_x_w_u16mf4_tamu(mask, maskedoff, src, vl);
}

vuint16mf2_t test_vncvt_x_x_w_u16mf2_tamu(vbool32_t mask, vuint16mf2_t maskedoff, vuint32m1_t src, size_t vl) {
  return vncvt_x_x_w_u16mf2_tamu(mask, maskedoff, src, vl);
}

vuint16m1_t test_vncvt_x_x_w_u16m1_tamu(vbool16_t mask, vuint16m1_t maskedoff, vuint32m2_t src, size_t vl) {
  return vncvt_x_x_w_u16m1_tamu(mask, maskedoff, src, vl);
}

vuint16m2_t test_vncvt_x_x_w_u16m2_tamu(vbool8_t mask, vuint16m2_t maskedoff, vuint32m4_t src, size_t vl) {
  return vncvt_x_x_w_u16m2_tamu(mask, maskedoff, src, vl);
}

vuint16m4_t test_vncvt_x_x_w_u16m4_tamu(vbool4_t mask, vuint16m4_t maskedoff, vuint32m8_t src, size_t vl) {
  return vncvt_x_x_w_u16m4_tamu(mask, maskedoff, src, vl);
}

vint32mf2_t test_vncvt_x_x_w_i32mf2_tamu(vbool64_t mask, vint32mf2_t maskedoff, vint64m1_t src, size_t vl) {
  return vncvt_x_x_w_i32mf2_tamu(mask, maskedoff, src, vl);
}

vint32m1_t test_vncvt_x_x_w_i32m1_tamu(vbool32_t mask, vint32m1_t maskedoff, vint64m2_t src, size_t vl) {
  return vncvt_x_x_w_i32m1_tamu(mask, maskedoff, src, vl);
}

vint32m2_t test_vncvt_x_x_w_i32m2_tamu(vbool16_t mask, vint32m2_t maskedoff, vint64m4_t src, size_t vl) {
  return vncvt_x_x_w_i32m2_tamu(mask, maskedoff, src, vl);
}

vint32m4_t test_vncvt_x_x_w_i32m4_tamu(vbool8_t mask, vint32m4_t maskedoff, vint64m8_t src, size_t vl) {
  return vncvt_x_x_w_i32m4_tamu(mask, maskedoff, src, vl);
}

vuint32mf2_t test_vncvt_x_x_w_u32mf2_tamu(vbool64_t mask, vuint32mf2_t maskedoff, vuint64m1_t src, size_t vl) {
  return vncvt_x_x_w_u32mf2_tamu(mask, maskedoff, src, vl);
}

vuint32m1_t test_vncvt_x_x_w_u32m1_tamu(vbool32_t mask, vuint32m1_t maskedoff, vuint64m2_t src, size_t vl) {
  return vncvt_x_x_w_u32m1_tamu(mask, maskedoff, src, vl);
}

vuint32m2_t test_vncvt_x_x_w_u32m2_tamu(vbool16_t mask, vuint32m2_t maskedoff, vuint64m4_t src, size_t vl) {
  return vncvt_x_x_w_u32m2_tamu(mask, maskedoff, src, vl);
}

vuint32m4_t test_vncvt_x_x_w_u32m4_tamu(vbool8_t mask, vuint32m4_t maskedoff, vuint64m8_t src, size_t vl) {
  return vncvt_x_x_w_u32m4_tamu(mask, maskedoff, src, vl);
}

