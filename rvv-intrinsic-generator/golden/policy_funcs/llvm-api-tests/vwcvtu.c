// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -disable-O0-optnone \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

vuint16mf4_t test_vwcvtu_x_x_v_u16mf4_tu(vuint16mf4_t maskedoff, vuint8mf8_t src, size_t vl) {
  return vwcvtu_x_x_v_u16mf4_tu(maskedoff, src, vl);
}

vuint16mf2_t test_vwcvtu_x_x_v_u16mf2_tu(vuint16mf2_t maskedoff, vuint8mf4_t src, size_t vl) {
  return vwcvtu_x_x_v_u16mf2_tu(maskedoff, src, vl);
}

vuint16m1_t test_vwcvtu_x_x_v_u16m1_tu(vuint16m1_t maskedoff, vuint8mf2_t src, size_t vl) {
  return vwcvtu_x_x_v_u16m1_tu(maskedoff, src, vl);
}

vuint16m2_t test_vwcvtu_x_x_v_u16m2_tu(vuint16m2_t maskedoff, vuint8m1_t src, size_t vl) {
  return vwcvtu_x_x_v_u16m2_tu(maskedoff, src, vl);
}

vuint16m4_t test_vwcvtu_x_x_v_u16m4_tu(vuint16m4_t maskedoff, vuint8m2_t src, size_t vl) {
  return vwcvtu_x_x_v_u16m4_tu(maskedoff, src, vl);
}

vuint16m8_t test_vwcvtu_x_x_v_u16m8_tu(vuint16m8_t maskedoff, vuint8m4_t src, size_t vl) {
  return vwcvtu_x_x_v_u16m8_tu(maskedoff, src, vl);
}

vuint32mf2_t test_vwcvtu_x_x_v_u32mf2_tu(vuint32mf2_t maskedoff, vuint16mf4_t src, size_t vl) {
  return vwcvtu_x_x_v_u32mf2_tu(maskedoff, src, vl);
}

vuint32m1_t test_vwcvtu_x_x_v_u32m1_tu(vuint32m1_t maskedoff, vuint16mf2_t src, size_t vl) {
  return vwcvtu_x_x_v_u32m1_tu(maskedoff, src, vl);
}

vuint32m2_t test_vwcvtu_x_x_v_u32m2_tu(vuint32m2_t maskedoff, vuint16m1_t src, size_t vl) {
  return vwcvtu_x_x_v_u32m2_tu(maskedoff, src, vl);
}

vuint32m4_t test_vwcvtu_x_x_v_u32m4_tu(vuint32m4_t maskedoff, vuint16m2_t src, size_t vl) {
  return vwcvtu_x_x_v_u32m4_tu(maskedoff, src, vl);
}

vuint32m8_t test_vwcvtu_x_x_v_u32m8_tu(vuint32m8_t maskedoff, vuint16m4_t src, size_t vl) {
  return vwcvtu_x_x_v_u32m8_tu(maskedoff, src, vl);
}

vuint64m1_t test_vwcvtu_x_x_v_u64m1_tu(vuint64m1_t maskedoff, vuint32mf2_t src, size_t vl) {
  return vwcvtu_x_x_v_u64m1_tu(maskedoff, src, vl);
}

vuint64m2_t test_vwcvtu_x_x_v_u64m2_tu(vuint64m2_t maskedoff, vuint32m1_t src, size_t vl) {
  return vwcvtu_x_x_v_u64m2_tu(maskedoff, src, vl);
}

vuint64m4_t test_vwcvtu_x_x_v_u64m4_tu(vuint64m4_t maskedoff, vuint32m2_t src, size_t vl) {
  return vwcvtu_x_x_v_u64m4_tu(maskedoff, src, vl);
}

vuint64m8_t test_vwcvtu_x_x_v_u64m8_tu(vuint64m8_t maskedoff, vuint32m4_t src, size_t vl) {
  return vwcvtu_x_x_v_u64m8_tu(maskedoff, src, vl);
}

vuint16mf4_t test_vwcvtu_x_x_v_u16mf4_ta(vuint8mf8_t src, size_t vl) {
  return vwcvtu_x_x_v_u16mf4_ta(src, vl);
}

vuint16mf2_t test_vwcvtu_x_x_v_u16mf2_ta(vuint8mf4_t src, size_t vl) {
  return vwcvtu_x_x_v_u16mf2_ta(src, vl);
}

vuint16m1_t test_vwcvtu_x_x_v_u16m1_ta(vuint8mf2_t src, size_t vl) {
  return vwcvtu_x_x_v_u16m1_ta(src, vl);
}

vuint16m2_t test_vwcvtu_x_x_v_u16m2_ta(vuint8m1_t src, size_t vl) {
  return vwcvtu_x_x_v_u16m2_ta(src, vl);
}

vuint16m4_t test_vwcvtu_x_x_v_u16m4_ta(vuint8m2_t src, size_t vl) {
  return vwcvtu_x_x_v_u16m4_ta(src, vl);
}

vuint16m8_t test_vwcvtu_x_x_v_u16m8_ta(vuint8m4_t src, size_t vl) {
  return vwcvtu_x_x_v_u16m8_ta(src, vl);
}

vuint32mf2_t test_vwcvtu_x_x_v_u32mf2_ta(vuint16mf4_t src, size_t vl) {
  return vwcvtu_x_x_v_u32mf2_ta(src, vl);
}

vuint32m1_t test_vwcvtu_x_x_v_u32m1_ta(vuint16mf2_t src, size_t vl) {
  return vwcvtu_x_x_v_u32m1_ta(src, vl);
}

vuint32m2_t test_vwcvtu_x_x_v_u32m2_ta(vuint16m1_t src, size_t vl) {
  return vwcvtu_x_x_v_u32m2_ta(src, vl);
}

vuint32m4_t test_vwcvtu_x_x_v_u32m4_ta(vuint16m2_t src, size_t vl) {
  return vwcvtu_x_x_v_u32m4_ta(src, vl);
}

vuint32m8_t test_vwcvtu_x_x_v_u32m8_ta(vuint16m4_t src, size_t vl) {
  return vwcvtu_x_x_v_u32m8_ta(src, vl);
}

vuint64m1_t test_vwcvtu_x_x_v_u64m1_ta(vuint32mf2_t src, size_t vl) {
  return vwcvtu_x_x_v_u64m1_ta(src, vl);
}

vuint64m2_t test_vwcvtu_x_x_v_u64m2_ta(vuint32m1_t src, size_t vl) {
  return vwcvtu_x_x_v_u64m2_ta(src, vl);
}

vuint64m4_t test_vwcvtu_x_x_v_u64m4_ta(vuint32m2_t src, size_t vl) {
  return vwcvtu_x_x_v_u64m4_ta(src, vl);
}

vuint64m8_t test_vwcvtu_x_x_v_u64m8_ta(vuint32m4_t src, size_t vl) {
  return vwcvtu_x_x_v_u64m8_ta(src, vl);
}

vuint16mf4_t test_vwcvtu_x_x_v_u16mf4_tuma(vbool64_t mask, vuint16mf4_t maskedoff, vuint8mf8_t src, size_t vl) {
  return vwcvtu_x_x_v_u16mf4_tuma(mask, maskedoff, src, vl);
}

vuint16mf2_t test_vwcvtu_x_x_v_u16mf2_tuma(vbool32_t mask, vuint16mf2_t maskedoff, vuint8mf4_t src, size_t vl) {
  return vwcvtu_x_x_v_u16mf2_tuma(mask, maskedoff, src, vl);
}

vuint16m1_t test_vwcvtu_x_x_v_u16m1_tuma(vbool16_t mask, vuint16m1_t maskedoff, vuint8mf2_t src, size_t vl) {
  return vwcvtu_x_x_v_u16m1_tuma(mask, maskedoff, src, vl);
}

vuint16m2_t test_vwcvtu_x_x_v_u16m2_tuma(vbool8_t mask, vuint16m2_t maskedoff, vuint8m1_t src, size_t vl) {
  return vwcvtu_x_x_v_u16m2_tuma(mask, maskedoff, src, vl);
}

vuint16m4_t test_vwcvtu_x_x_v_u16m4_tuma(vbool4_t mask, vuint16m4_t maskedoff, vuint8m2_t src, size_t vl) {
  return vwcvtu_x_x_v_u16m4_tuma(mask, maskedoff, src, vl);
}

vuint16m8_t test_vwcvtu_x_x_v_u16m8_tuma(vbool2_t mask, vuint16m8_t maskedoff, vuint8m4_t src, size_t vl) {
  return vwcvtu_x_x_v_u16m8_tuma(mask, maskedoff, src, vl);
}

vuint32mf2_t test_vwcvtu_x_x_v_u32mf2_tuma(vbool64_t mask, vuint32mf2_t maskedoff, vuint16mf4_t src, size_t vl) {
  return vwcvtu_x_x_v_u32mf2_tuma(mask, maskedoff, src, vl);
}

vuint32m1_t test_vwcvtu_x_x_v_u32m1_tuma(vbool32_t mask, vuint32m1_t maskedoff, vuint16mf2_t src, size_t vl) {
  return vwcvtu_x_x_v_u32m1_tuma(mask, maskedoff, src, vl);
}

vuint32m2_t test_vwcvtu_x_x_v_u32m2_tuma(vbool16_t mask, vuint32m2_t maskedoff, vuint16m1_t src, size_t vl) {
  return vwcvtu_x_x_v_u32m2_tuma(mask, maskedoff, src, vl);
}

vuint32m4_t test_vwcvtu_x_x_v_u32m4_tuma(vbool8_t mask, vuint32m4_t maskedoff, vuint16m2_t src, size_t vl) {
  return vwcvtu_x_x_v_u32m4_tuma(mask, maskedoff, src, vl);
}

vuint32m8_t test_vwcvtu_x_x_v_u32m8_tuma(vbool4_t mask, vuint32m8_t maskedoff, vuint16m4_t src, size_t vl) {
  return vwcvtu_x_x_v_u32m8_tuma(mask, maskedoff, src, vl);
}

vuint64m1_t test_vwcvtu_x_x_v_u64m1_tuma(vbool64_t mask, vuint64m1_t maskedoff, vuint32mf2_t src, size_t vl) {
  return vwcvtu_x_x_v_u64m1_tuma(mask, maskedoff, src, vl);
}

vuint64m2_t test_vwcvtu_x_x_v_u64m2_tuma(vbool32_t mask, vuint64m2_t maskedoff, vuint32m1_t src, size_t vl) {
  return vwcvtu_x_x_v_u64m2_tuma(mask, maskedoff, src, vl);
}

vuint64m4_t test_vwcvtu_x_x_v_u64m4_tuma(vbool16_t mask, vuint64m4_t maskedoff, vuint32m2_t src, size_t vl) {
  return vwcvtu_x_x_v_u64m4_tuma(mask, maskedoff, src, vl);
}

vuint64m8_t test_vwcvtu_x_x_v_u64m8_tuma(vbool8_t mask, vuint64m8_t maskedoff, vuint32m4_t src, size_t vl) {
  return vwcvtu_x_x_v_u64m8_tuma(mask, maskedoff, src, vl);
}

vuint16mf4_t test_vwcvtu_x_x_v_u16mf4_tumu(vbool64_t mask, vuint16mf4_t maskedoff, vuint8mf8_t src, size_t vl) {
  return vwcvtu_x_x_v_u16mf4_tumu(mask, maskedoff, src, vl);
}

vuint16mf2_t test_vwcvtu_x_x_v_u16mf2_tumu(vbool32_t mask, vuint16mf2_t maskedoff, vuint8mf4_t src, size_t vl) {
  return vwcvtu_x_x_v_u16mf2_tumu(mask, maskedoff, src, vl);
}

vuint16m1_t test_vwcvtu_x_x_v_u16m1_tumu(vbool16_t mask, vuint16m1_t maskedoff, vuint8mf2_t src, size_t vl) {
  return vwcvtu_x_x_v_u16m1_tumu(mask, maskedoff, src, vl);
}

vuint16m2_t test_vwcvtu_x_x_v_u16m2_tumu(vbool8_t mask, vuint16m2_t maskedoff, vuint8m1_t src, size_t vl) {
  return vwcvtu_x_x_v_u16m2_tumu(mask, maskedoff, src, vl);
}

vuint16m4_t test_vwcvtu_x_x_v_u16m4_tumu(vbool4_t mask, vuint16m4_t maskedoff, vuint8m2_t src, size_t vl) {
  return vwcvtu_x_x_v_u16m4_tumu(mask, maskedoff, src, vl);
}

vuint16m8_t test_vwcvtu_x_x_v_u16m8_tumu(vbool2_t mask, vuint16m8_t maskedoff, vuint8m4_t src, size_t vl) {
  return vwcvtu_x_x_v_u16m8_tumu(mask, maskedoff, src, vl);
}

vuint32mf2_t test_vwcvtu_x_x_v_u32mf2_tumu(vbool64_t mask, vuint32mf2_t maskedoff, vuint16mf4_t src, size_t vl) {
  return vwcvtu_x_x_v_u32mf2_tumu(mask, maskedoff, src, vl);
}

vuint32m1_t test_vwcvtu_x_x_v_u32m1_tumu(vbool32_t mask, vuint32m1_t maskedoff, vuint16mf2_t src, size_t vl) {
  return vwcvtu_x_x_v_u32m1_tumu(mask, maskedoff, src, vl);
}

vuint32m2_t test_vwcvtu_x_x_v_u32m2_tumu(vbool16_t mask, vuint32m2_t maskedoff, vuint16m1_t src, size_t vl) {
  return vwcvtu_x_x_v_u32m2_tumu(mask, maskedoff, src, vl);
}

vuint32m4_t test_vwcvtu_x_x_v_u32m4_tumu(vbool8_t mask, vuint32m4_t maskedoff, vuint16m2_t src, size_t vl) {
  return vwcvtu_x_x_v_u32m4_tumu(mask, maskedoff, src, vl);
}

vuint32m8_t test_vwcvtu_x_x_v_u32m8_tumu(vbool4_t mask, vuint32m8_t maskedoff, vuint16m4_t src, size_t vl) {
  return vwcvtu_x_x_v_u32m8_tumu(mask, maskedoff, src, vl);
}

vuint64m1_t test_vwcvtu_x_x_v_u64m1_tumu(vbool64_t mask, vuint64m1_t maskedoff, vuint32mf2_t src, size_t vl) {
  return vwcvtu_x_x_v_u64m1_tumu(mask, maskedoff, src, vl);
}

vuint64m2_t test_vwcvtu_x_x_v_u64m2_tumu(vbool32_t mask, vuint64m2_t maskedoff, vuint32m1_t src, size_t vl) {
  return vwcvtu_x_x_v_u64m2_tumu(mask, maskedoff, src, vl);
}

vuint64m4_t test_vwcvtu_x_x_v_u64m4_tumu(vbool16_t mask, vuint64m4_t maskedoff, vuint32m2_t src, size_t vl) {
  return vwcvtu_x_x_v_u64m4_tumu(mask, maskedoff, src, vl);
}

vuint64m8_t test_vwcvtu_x_x_v_u64m8_tumu(vbool8_t mask, vuint64m8_t maskedoff, vuint32m4_t src, size_t vl) {
  return vwcvtu_x_x_v_u64m8_tumu(mask, maskedoff, src, vl);
}

vuint16mf4_t test_vwcvtu_x_x_v_u16mf4_tama(vbool64_t mask, vuint8mf8_t src, size_t vl) {
  return vwcvtu_x_x_v_u16mf4_tama(mask, src, vl);
}

vuint16mf2_t test_vwcvtu_x_x_v_u16mf2_tama(vbool32_t mask, vuint8mf4_t src, size_t vl) {
  return vwcvtu_x_x_v_u16mf2_tama(mask, src, vl);
}

vuint16m1_t test_vwcvtu_x_x_v_u16m1_tama(vbool16_t mask, vuint8mf2_t src, size_t vl) {
  return vwcvtu_x_x_v_u16m1_tama(mask, src, vl);
}

vuint16m2_t test_vwcvtu_x_x_v_u16m2_tama(vbool8_t mask, vuint8m1_t src, size_t vl) {
  return vwcvtu_x_x_v_u16m2_tama(mask, src, vl);
}

vuint16m4_t test_vwcvtu_x_x_v_u16m4_tama(vbool4_t mask, vuint8m2_t src, size_t vl) {
  return vwcvtu_x_x_v_u16m4_tama(mask, src, vl);
}

vuint16m8_t test_vwcvtu_x_x_v_u16m8_tama(vbool2_t mask, vuint8m4_t src, size_t vl) {
  return vwcvtu_x_x_v_u16m8_tama(mask, src, vl);
}

vuint32mf2_t test_vwcvtu_x_x_v_u32mf2_tama(vbool64_t mask, vuint16mf4_t src, size_t vl) {
  return vwcvtu_x_x_v_u32mf2_tama(mask, src, vl);
}

vuint32m1_t test_vwcvtu_x_x_v_u32m1_tama(vbool32_t mask, vuint16mf2_t src, size_t vl) {
  return vwcvtu_x_x_v_u32m1_tama(mask, src, vl);
}

vuint32m2_t test_vwcvtu_x_x_v_u32m2_tama(vbool16_t mask, vuint16m1_t src, size_t vl) {
  return vwcvtu_x_x_v_u32m2_tama(mask, src, vl);
}

vuint32m4_t test_vwcvtu_x_x_v_u32m4_tama(vbool8_t mask, vuint16m2_t src, size_t vl) {
  return vwcvtu_x_x_v_u32m4_tama(mask, src, vl);
}

vuint32m8_t test_vwcvtu_x_x_v_u32m8_tama(vbool4_t mask, vuint16m4_t src, size_t vl) {
  return vwcvtu_x_x_v_u32m8_tama(mask, src, vl);
}

vuint64m1_t test_vwcvtu_x_x_v_u64m1_tama(vbool64_t mask, vuint32mf2_t src, size_t vl) {
  return vwcvtu_x_x_v_u64m1_tama(mask, src, vl);
}

vuint64m2_t test_vwcvtu_x_x_v_u64m2_tama(vbool32_t mask, vuint32m1_t src, size_t vl) {
  return vwcvtu_x_x_v_u64m2_tama(mask, src, vl);
}

vuint64m4_t test_vwcvtu_x_x_v_u64m4_tama(vbool16_t mask, vuint32m2_t src, size_t vl) {
  return vwcvtu_x_x_v_u64m4_tama(mask, src, vl);
}

vuint64m8_t test_vwcvtu_x_x_v_u64m8_tama(vbool8_t mask, vuint32m4_t src, size_t vl) {
  return vwcvtu_x_x_v_u64m8_tama(mask, src, vl);
}

vuint16mf4_t test_vwcvtu_x_x_v_u16mf4_tamu(vbool64_t mask, vuint16mf4_t maskedoff, vuint8mf8_t src, size_t vl) {
  return vwcvtu_x_x_v_u16mf4_tamu(mask, maskedoff, src, vl);
}

vuint16mf2_t test_vwcvtu_x_x_v_u16mf2_tamu(vbool32_t mask, vuint16mf2_t maskedoff, vuint8mf4_t src, size_t vl) {
  return vwcvtu_x_x_v_u16mf2_tamu(mask, maskedoff, src, vl);
}

vuint16m1_t test_vwcvtu_x_x_v_u16m1_tamu(vbool16_t mask, vuint16m1_t maskedoff, vuint8mf2_t src, size_t vl) {
  return vwcvtu_x_x_v_u16m1_tamu(mask, maskedoff, src, vl);
}

vuint16m2_t test_vwcvtu_x_x_v_u16m2_tamu(vbool8_t mask, vuint16m2_t maskedoff, vuint8m1_t src, size_t vl) {
  return vwcvtu_x_x_v_u16m2_tamu(mask, maskedoff, src, vl);
}

vuint16m4_t test_vwcvtu_x_x_v_u16m4_tamu(vbool4_t mask, vuint16m4_t maskedoff, vuint8m2_t src, size_t vl) {
  return vwcvtu_x_x_v_u16m4_tamu(mask, maskedoff, src, vl);
}

vuint16m8_t test_vwcvtu_x_x_v_u16m8_tamu(vbool2_t mask, vuint16m8_t maskedoff, vuint8m4_t src, size_t vl) {
  return vwcvtu_x_x_v_u16m8_tamu(mask, maskedoff, src, vl);
}

vuint32mf2_t test_vwcvtu_x_x_v_u32mf2_tamu(vbool64_t mask, vuint32mf2_t maskedoff, vuint16mf4_t src, size_t vl) {
  return vwcvtu_x_x_v_u32mf2_tamu(mask, maskedoff, src, vl);
}

vuint32m1_t test_vwcvtu_x_x_v_u32m1_tamu(vbool32_t mask, vuint32m1_t maskedoff, vuint16mf2_t src, size_t vl) {
  return vwcvtu_x_x_v_u32m1_tamu(mask, maskedoff, src, vl);
}

vuint32m2_t test_vwcvtu_x_x_v_u32m2_tamu(vbool16_t mask, vuint32m2_t maskedoff, vuint16m1_t src, size_t vl) {
  return vwcvtu_x_x_v_u32m2_tamu(mask, maskedoff, src, vl);
}

vuint32m4_t test_vwcvtu_x_x_v_u32m4_tamu(vbool8_t mask, vuint32m4_t maskedoff, vuint16m2_t src, size_t vl) {
  return vwcvtu_x_x_v_u32m4_tamu(mask, maskedoff, src, vl);
}

vuint32m8_t test_vwcvtu_x_x_v_u32m8_tamu(vbool4_t mask, vuint32m8_t maskedoff, vuint16m4_t src, size_t vl) {
  return vwcvtu_x_x_v_u32m8_tamu(mask, maskedoff, src, vl);
}

vuint64m1_t test_vwcvtu_x_x_v_u64m1_tamu(vbool64_t mask, vuint64m1_t maskedoff, vuint32mf2_t src, size_t vl) {
  return vwcvtu_x_x_v_u64m1_tamu(mask, maskedoff, src, vl);
}

vuint64m2_t test_vwcvtu_x_x_v_u64m2_tamu(vbool32_t mask, vuint64m2_t maskedoff, vuint32m1_t src, size_t vl) {
  return vwcvtu_x_x_v_u64m2_tamu(mask, maskedoff, src, vl);
}

vuint64m4_t test_vwcvtu_x_x_v_u64m4_tamu(vbool16_t mask, vuint64m4_t maskedoff, vuint32m2_t src, size_t vl) {
  return vwcvtu_x_x_v_u64m4_tamu(mask, maskedoff, src, vl);
}

vuint64m8_t test_vwcvtu_x_x_v_u64m8_tamu(vbool8_t mask, vuint64m8_t maskedoff, vuint32m4_t src, size_t vl) {
  return vwcvtu_x_x_v_u64m8_tamu(mask, maskedoff, src, vl);
}

