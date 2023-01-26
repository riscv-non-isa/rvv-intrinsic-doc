// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -target-feature +zfh \
// RUN:   -target-feature +experimental-zvfh -disable-O0-optnone  \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

vfloat16mf4_t test_vslideup_vx_f16mf4_tu(vfloat16mf4_t dest, vfloat16mf4_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_f16mf4_tu(dest, src, offset, vl);
}

vfloat16mf2_t test_vslideup_vx_f16mf2_tu(vfloat16mf2_t dest, vfloat16mf2_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_f16mf2_tu(dest, src, offset, vl);
}

vfloat16m1_t test_vslideup_vx_f16m1_tu(vfloat16m1_t dest, vfloat16m1_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_f16m1_tu(dest, src, offset, vl);
}

vfloat16m2_t test_vslideup_vx_f16m2_tu(vfloat16m2_t dest, vfloat16m2_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_f16m2_tu(dest, src, offset, vl);
}

vfloat16m4_t test_vslideup_vx_f16m4_tu(vfloat16m4_t dest, vfloat16m4_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_f16m4_tu(dest, src, offset, vl);
}

vfloat16m8_t test_vslideup_vx_f16m8_tu(vfloat16m8_t dest, vfloat16m8_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_f16m8_tu(dest, src, offset, vl);
}

vfloat32mf2_t test_vslideup_vx_f32mf2_tu(vfloat32mf2_t dest, vfloat32mf2_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_f32mf2_tu(dest, src, offset, vl);
}

vfloat32m1_t test_vslideup_vx_f32m1_tu(vfloat32m1_t dest, vfloat32m1_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_f32m1_tu(dest, src, offset, vl);
}

vfloat32m2_t test_vslideup_vx_f32m2_tu(vfloat32m2_t dest, vfloat32m2_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_f32m2_tu(dest, src, offset, vl);
}

vfloat32m4_t test_vslideup_vx_f32m4_tu(vfloat32m4_t dest, vfloat32m4_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_f32m4_tu(dest, src, offset, vl);
}

vfloat32m8_t test_vslideup_vx_f32m8_tu(vfloat32m8_t dest, vfloat32m8_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_f32m8_tu(dest, src, offset, vl);
}

vfloat64m1_t test_vslideup_vx_f64m1_tu(vfloat64m1_t dest, vfloat64m1_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_f64m1_tu(dest, src, offset, vl);
}

vfloat64m2_t test_vslideup_vx_f64m2_tu(vfloat64m2_t dest, vfloat64m2_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_f64m2_tu(dest, src, offset, vl);
}

vfloat64m4_t test_vslideup_vx_f64m4_tu(vfloat64m4_t dest, vfloat64m4_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_f64m4_tu(dest, src, offset, vl);
}

vfloat64m8_t test_vslideup_vx_f64m8_tu(vfloat64m8_t dest, vfloat64m8_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_f64m8_tu(dest, src, offset, vl);
}

vint8mf8_t test_vslideup_vx_i8mf8_tu(vint8mf8_t dest, vint8mf8_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_i8mf8_tu(dest, src, offset, vl);
}

vint8mf4_t test_vslideup_vx_i8mf4_tu(vint8mf4_t dest, vint8mf4_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_i8mf4_tu(dest, src, offset, vl);
}

vint8mf2_t test_vslideup_vx_i8mf2_tu(vint8mf2_t dest, vint8mf2_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_i8mf2_tu(dest, src, offset, vl);
}

vint8m1_t test_vslideup_vx_i8m1_tu(vint8m1_t dest, vint8m1_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_i8m1_tu(dest, src, offset, vl);
}

vint8m2_t test_vslideup_vx_i8m2_tu(vint8m2_t dest, vint8m2_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_i8m2_tu(dest, src, offset, vl);
}

vint8m4_t test_vslideup_vx_i8m4_tu(vint8m4_t dest, vint8m4_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_i8m4_tu(dest, src, offset, vl);
}

vint8m8_t test_vslideup_vx_i8m8_tu(vint8m8_t dest, vint8m8_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_i8m8_tu(dest, src, offset, vl);
}

vint16mf4_t test_vslideup_vx_i16mf4_tu(vint16mf4_t dest, vint16mf4_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_i16mf4_tu(dest, src, offset, vl);
}

vint16mf2_t test_vslideup_vx_i16mf2_tu(vint16mf2_t dest, vint16mf2_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_i16mf2_tu(dest, src, offset, vl);
}

vint16m1_t test_vslideup_vx_i16m1_tu(vint16m1_t dest, vint16m1_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_i16m1_tu(dest, src, offset, vl);
}

vint16m2_t test_vslideup_vx_i16m2_tu(vint16m2_t dest, vint16m2_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_i16m2_tu(dest, src, offset, vl);
}

vint16m4_t test_vslideup_vx_i16m4_tu(vint16m4_t dest, vint16m4_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_i16m4_tu(dest, src, offset, vl);
}

vint16m8_t test_vslideup_vx_i16m8_tu(vint16m8_t dest, vint16m8_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_i16m8_tu(dest, src, offset, vl);
}

vint32mf2_t test_vslideup_vx_i32mf2_tu(vint32mf2_t dest, vint32mf2_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_i32mf2_tu(dest, src, offset, vl);
}

vint32m1_t test_vslideup_vx_i32m1_tu(vint32m1_t dest, vint32m1_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_i32m1_tu(dest, src, offset, vl);
}

vint32m2_t test_vslideup_vx_i32m2_tu(vint32m2_t dest, vint32m2_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_i32m2_tu(dest, src, offset, vl);
}

vint32m4_t test_vslideup_vx_i32m4_tu(vint32m4_t dest, vint32m4_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_i32m4_tu(dest, src, offset, vl);
}

vint32m8_t test_vslideup_vx_i32m8_tu(vint32m8_t dest, vint32m8_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_i32m8_tu(dest, src, offset, vl);
}

vint64m1_t test_vslideup_vx_i64m1_tu(vint64m1_t dest, vint64m1_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_i64m1_tu(dest, src, offset, vl);
}

vint64m2_t test_vslideup_vx_i64m2_tu(vint64m2_t dest, vint64m2_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_i64m2_tu(dest, src, offset, vl);
}

vint64m4_t test_vslideup_vx_i64m4_tu(vint64m4_t dest, vint64m4_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_i64m4_tu(dest, src, offset, vl);
}

vint64m8_t test_vslideup_vx_i64m8_tu(vint64m8_t dest, vint64m8_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_i64m8_tu(dest, src, offset, vl);
}

vuint8mf8_t test_vslideup_vx_u8mf8_tu(vuint8mf8_t dest, vuint8mf8_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_u8mf8_tu(dest, src, offset, vl);
}

vuint8mf4_t test_vslideup_vx_u8mf4_tu(vuint8mf4_t dest, vuint8mf4_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_u8mf4_tu(dest, src, offset, vl);
}

vuint8mf2_t test_vslideup_vx_u8mf2_tu(vuint8mf2_t dest, vuint8mf2_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_u8mf2_tu(dest, src, offset, vl);
}

vuint8m1_t test_vslideup_vx_u8m1_tu(vuint8m1_t dest, vuint8m1_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_u8m1_tu(dest, src, offset, vl);
}

vuint8m2_t test_vslideup_vx_u8m2_tu(vuint8m2_t dest, vuint8m2_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_u8m2_tu(dest, src, offset, vl);
}

vuint8m4_t test_vslideup_vx_u8m4_tu(vuint8m4_t dest, vuint8m4_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_u8m4_tu(dest, src, offset, vl);
}

vuint8m8_t test_vslideup_vx_u8m8_tu(vuint8m8_t dest, vuint8m8_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_u8m8_tu(dest, src, offset, vl);
}

vuint16mf4_t test_vslideup_vx_u16mf4_tu(vuint16mf4_t dest, vuint16mf4_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_u16mf4_tu(dest, src, offset, vl);
}

vuint16mf2_t test_vslideup_vx_u16mf2_tu(vuint16mf2_t dest, vuint16mf2_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_u16mf2_tu(dest, src, offset, vl);
}

vuint16m1_t test_vslideup_vx_u16m1_tu(vuint16m1_t dest, vuint16m1_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_u16m1_tu(dest, src, offset, vl);
}

vuint16m2_t test_vslideup_vx_u16m2_tu(vuint16m2_t dest, vuint16m2_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_u16m2_tu(dest, src, offset, vl);
}

vuint16m4_t test_vslideup_vx_u16m4_tu(vuint16m4_t dest, vuint16m4_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_u16m4_tu(dest, src, offset, vl);
}

vuint16m8_t test_vslideup_vx_u16m8_tu(vuint16m8_t dest, vuint16m8_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_u16m8_tu(dest, src, offset, vl);
}

vuint32mf2_t test_vslideup_vx_u32mf2_tu(vuint32mf2_t dest, vuint32mf2_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_u32mf2_tu(dest, src, offset, vl);
}

vuint32m1_t test_vslideup_vx_u32m1_tu(vuint32m1_t dest, vuint32m1_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_u32m1_tu(dest, src, offset, vl);
}

vuint32m2_t test_vslideup_vx_u32m2_tu(vuint32m2_t dest, vuint32m2_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_u32m2_tu(dest, src, offset, vl);
}

vuint32m4_t test_vslideup_vx_u32m4_tu(vuint32m4_t dest, vuint32m4_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_u32m4_tu(dest, src, offset, vl);
}

vuint32m8_t test_vslideup_vx_u32m8_tu(vuint32m8_t dest, vuint32m8_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_u32m8_tu(dest, src, offset, vl);
}

vuint64m1_t test_vslideup_vx_u64m1_tu(vuint64m1_t dest, vuint64m1_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_u64m1_tu(dest, src, offset, vl);
}

vuint64m2_t test_vslideup_vx_u64m2_tu(vuint64m2_t dest, vuint64m2_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_u64m2_tu(dest, src, offset, vl);
}

vuint64m4_t test_vslideup_vx_u64m4_tu(vuint64m4_t dest, vuint64m4_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_u64m4_tu(dest, src, offset, vl);
}

vuint64m8_t test_vslideup_vx_u64m8_tu(vuint64m8_t dest, vuint64m8_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_u64m8_tu(dest, src, offset, vl);
}

vfloat16mf4_t test_vslideup_vx_f16mf4_tum(vbool64_t mask, vfloat16mf4_t dest, vfloat16mf4_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_f16mf4_tum(mask, dest, src, offset, vl);
}

vfloat16mf2_t test_vslideup_vx_f16mf2_tum(vbool32_t mask, vfloat16mf2_t dest, vfloat16mf2_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_f16mf2_tum(mask, dest, src, offset, vl);
}

vfloat16m1_t test_vslideup_vx_f16m1_tum(vbool16_t mask, vfloat16m1_t dest, vfloat16m1_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_f16m1_tum(mask, dest, src, offset, vl);
}

vfloat16m2_t test_vslideup_vx_f16m2_tum(vbool8_t mask, vfloat16m2_t dest, vfloat16m2_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_f16m2_tum(mask, dest, src, offset, vl);
}

vfloat16m4_t test_vslideup_vx_f16m4_tum(vbool4_t mask, vfloat16m4_t dest, vfloat16m4_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_f16m4_tum(mask, dest, src, offset, vl);
}

vfloat16m8_t test_vslideup_vx_f16m8_tum(vbool2_t mask, vfloat16m8_t dest, vfloat16m8_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_f16m8_tum(mask, dest, src, offset, vl);
}

vfloat32mf2_t test_vslideup_vx_f32mf2_tum(vbool64_t mask, vfloat32mf2_t dest, vfloat32mf2_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_f32mf2_tum(mask, dest, src, offset, vl);
}

vfloat32m1_t test_vslideup_vx_f32m1_tum(vbool32_t mask, vfloat32m1_t dest, vfloat32m1_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_f32m1_tum(mask, dest, src, offset, vl);
}

vfloat32m2_t test_vslideup_vx_f32m2_tum(vbool16_t mask, vfloat32m2_t dest, vfloat32m2_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_f32m2_tum(mask, dest, src, offset, vl);
}

vfloat32m4_t test_vslideup_vx_f32m4_tum(vbool8_t mask, vfloat32m4_t dest, vfloat32m4_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_f32m4_tum(mask, dest, src, offset, vl);
}

vfloat32m8_t test_vslideup_vx_f32m8_tum(vbool4_t mask, vfloat32m8_t dest, vfloat32m8_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_f32m8_tum(mask, dest, src, offset, vl);
}

vfloat64m1_t test_vslideup_vx_f64m1_tum(vbool64_t mask, vfloat64m1_t dest, vfloat64m1_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_f64m1_tum(mask, dest, src, offset, vl);
}

vfloat64m2_t test_vslideup_vx_f64m2_tum(vbool32_t mask, vfloat64m2_t dest, vfloat64m2_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_f64m2_tum(mask, dest, src, offset, vl);
}

vfloat64m4_t test_vslideup_vx_f64m4_tum(vbool16_t mask, vfloat64m4_t dest, vfloat64m4_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_f64m4_tum(mask, dest, src, offset, vl);
}

vfloat64m8_t test_vslideup_vx_f64m8_tum(vbool8_t mask, vfloat64m8_t dest, vfloat64m8_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_f64m8_tum(mask, dest, src, offset, vl);
}

vint8mf8_t test_vslideup_vx_i8mf8_tum(vbool64_t mask, vint8mf8_t dest, vint8mf8_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_i8mf8_tum(mask, dest, src, offset, vl);
}

vint8mf4_t test_vslideup_vx_i8mf4_tum(vbool32_t mask, vint8mf4_t dest, vint8mf4_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_i8mf4_tum(mask, dest, src, offset, vl);
}

vint8mf2_t test_vslideup_vx_i8mf2_tum(vbool16_t mask, vint8mf2_t dest, vint8mf2_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_i8mf2_tum(mask, dest, src, offset, vl);
}

vint8m1_t test_vslideup_vx_i8m1_tum(vbool8_t mask, vint8m1_t dest, vint8m1_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_i8m1_tum(mask, dest, src, offset, vl);
}

vint8m2_t test_vslideup_vx_i8m2_tum(vbool4_t mask, vint8m2_t dest, vint8m2_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_i8m2_tum(mask, dest, src, offset, vl);
}

vint8m4_t test_vslideup_vx_i8m4_tum(vbool2_t mask, vint8m4_t dest, vint8m4_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_i8m4_tum(mask, dest, src, offset, vl);
}

vint8m8_t test_vslideup_vx_i8m8_tum(vbool1_t mask, vint8m8_t dest, vint8m8_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_i8m8_tum(mask, dest, src, offset, vl);
}

vint16mf4_t test_vslideup_vx_i16mf4_tum(vbool64_t mask, vint16mf4_t dest, vint16mf4_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_i16mf4_tum(mask, dest, src, offset, vl);
}

vint16mf2_t test_vslideup_vx_i16mf2_tum(vbool32_t mask, vint16mf2_t dest, vint16mf2_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_i16mf2_tum(mask, dest, src, offset, vl);
}

vint16m1_t test_vslideup_vx_i16m1_tum(vbool16_t mask, vint16m1_t dest, vint16m1_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_i16m1_tum(mask, dest, src, offset, vl);
}

vint16m2_t test_vslideup_vx_i16m2_tum(vbool8_t mask, vint16m2_t dest, vint16m2_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_i16m2_tum(mask, dest, src, offset, vl);
}

vint16m4_t test_vslideup_vx_i16m4_tum(vbool4_t mask, vint16m4_t dest, vint16m4_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_i16m4_tum(mask, dest, src, offset, vl);
}

vint16m8_t test_vslideup_vx_i16m8_tum(vbool2_t mask, vint16m8_t dest, vint16m8_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_i16m8_tum(mask, dest, src, offset, vl);
}

vint32mf2_t test_vslideup_vx_i32mf2_tum(vbool64_t mask, vint32mf2_t dest, vint32mf2_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_i32mf2_tum(mask, dest, src, offset, vl);
}

vint32m1_t test_vslideup_vx_i32m1_tum(vbool32_t mask, vint32m1_t dest, vint32m1_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_i32m1_tum(mask, dest, src, offset, vl);
}

vint32m2_t test_vslideup_vx_i32m2_tum(vbool16_t mask, vint32m2_t dest, vint32m2_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_i32m2_tum(mask, dest, src, offset, vl);
}

vint32m4_t test_vslideup_vx_i32m4_tum(vbool8_t mask, vint32m4_t dest, vint32m4_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_i32m4_tum(mask, dest, src, offset, vl);
}

vint32m8_t test_vslideup_vx_i32m8_tum(vbool4_t mask, vint32m8_t dest, vint32m8_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_i32m8_tum(mask, dest, src, offset, vl);
}

vint64m1_t test_vslideup_vx_i64m1_tum(vbool64_t mask, vint64m1_t dest, vint64m1_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_i64m1_tum(mask, dest, src, offset, vl);
}

vint64m2_t test_vslideup_vx_i64m2_tum(vbool32_t mask, vint64m2_t dest, vint64m2_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_i64m2_tum(mask, dest, src, offset, vl);
}

vint64m4_t test_vslideup_vx_i64m4_tum(vbool16_t mask, vint64m4_t dest, vint64m4_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_i64m4_tum(mask, dest, src, offset, vl);
}

vint64m8_t test_vslideup_vx_i64m8_tum(vbool8_t mask, vint64m8_t dest, vint64m8_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_i64m8_tum(mask, dest, src, offset, vl);
}

vuint8mf8_t test_vslideup_vx_u8mf8_tum(vbool64_t mask, vuint8mf8_t dest, vuint8mf8_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_u8mf8_tum(mask, dest, src, offset, vl);
}

vuint8mf4_t test_vslideup_vx_u8mf4_tum(vbool32_t mask, vuint8mf4_t dest, vuint8mf4_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_u8mf4_tum(mask, dest, src, offset, vl);
}

vuint8mf2_t test_vslideup_vx_u8mf2_tum(vbool16_t mask, vuint8mf2_t dest, vuint8mf2_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_u8mf2_tum(mask, dest, src, offset, vl);
}

vuint8m1_t test_vslideup_vx_u8m1_tum(vbool8_t mask, vuint8m1_t dest, vuint8m1_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_u8m1_tum(mask, dest, src, offset, vl);
}

vuint8m2_t test_vslideup_vx_u8m2_tum(vbool4_t mask, vuint8m2_t dest, vuint8m2_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_u8m2_tum(mask, dest, src, offset, vl);
}

vuint8m4_t test_vslideup_vx_u8m4_tum(vbool2_t mask, vuint8m4_t dest, vuint8m4_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_u8m4_tum(mask, dest, src, offset, vl);
}

vuint8m8_t test_vslideup_vx_u8m8_tum(vbool1_t mask, vuint8m8_t dest, vuint8m8_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_u8m8_tum(mask, dest, src, offset, vl);
}

vuint16mf4_t test_vslideup_vx_u16mf4_tum(vbool64_t mask, vuint16mf4_t dest, vuint16mf4_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_u16mf4_tum(mask, dest, src, offset, vl);
}

vuint16mf2_t test_vslideup_vx_u16mf2_tum(vbool32_t mask, vuint16mf2_t dest, vuint16mf2_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_u16mf2_tum(mask, dest, src, offset, vl);
}

vuint16m1_t test_vslideup_vx_u16m1_tum(vbool16_t mask, vuint16m1_t dest, vuint16m1_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_u16m1_tum(mask, dest, src, offset, vl);
}

vuint16m2_t test_vslideup_vx_u16m2_tum(vbool8_t mask, vuint16m2_t dest, vuint16m2_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_u16m2_tum(mask, dest, src, offset, vl);
}

vuint16m4_t test_vslideup_vx_u16m4_tum(vbool4_t mask, vuint16m4_t dest, vuint16m4_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_u16m4_tum(mask, dest, src, offset, vl);
}

vuint16m8_t test_vslideup_vx_u16m8_tum(vbool2_t mask, vuint16m8_t dest, vuint16m8_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_u16m8_tum(mask, dest, src, offset, vl);
}

vuint32mf2_t test_vslideup_vx_u32mf2_tum(vbool64_t mask, vuint32mf2_t dest, vuint32mf2_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_u32mf2_tum(mask, dest, src, offset, vl);
}

vuint32m1_t test_vslideup_vx_u32m1_tum(vbool32_t mask, vuint32m1_t dest, vuint32m1_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_u32m1_tum(mask, dest, src, offset, vl);
}

vuint32m2_t test_vslideup_vx_u32m2_tum(vbool16_t mask, vuint32m2_t dest, vuint32m2_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_u32m2_tum(mask, dest, src, offset, vl);
}

vuint32m4_t test_vslideup_vx_u32m4_tum(vbool8_t mask, vuint32m4_t dest, vuint32m4_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_u32m4_tum(mask, dest, src, offset, vl);
}

vuint32m8_t test_vslideup_vx_u32m8_tum(vbool4_t mask, vuint32m8_t dest, vuint32m8_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_u32m8_tum(mask, dest, src, offset, vl);
}

vuint64m1_t test_vslideup_vx_u64m1_tum(vbool64_t mask, vuint64m1_t dest, vuint64m1_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_u64m1_tum(mask, dest, src, offset, vl);
}

vuint64m2_t test_vslideup_vx_u64m2_tum(vbool32_t mask, vuint64m2_t dest, vuint64m2_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_u64m2_tum(mask, dest, src, offset, vl);
}

vuint64m4_t test_vslideup_vx_u64m4_tum(vbool16_t mask, vuint64m4_t dest, vuint64m4_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_u64m4_tum(mask, dest, src, offset, vl);
}

vuint64m8_t test_vslideup_vx_u64m8_tum(vbool8_t mask, vuint64m8_t dest, vuint64m8_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_u64m8_tum(mask, dest, src, offset, vl);
}

vfloat16mf4_t test_vslideup_vx_f16mf4_tumu(vbool64_t mask, vfloat16mf4_t dest, vfloat16mf4_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_f16mf4_tumu(mask, dest, src, offset, vl);
}

vfloat16mf2_t test_vslideup_vx_f16mf2_tumu(vbool32_t mask, vfloat16mf2_t dest, vfloat16mf2_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_f16mf2_tumu(mask, dest, src, offset, vl);
}

vfloat16m1_t test_vslideup_vx_f16m1_tumu(vbool16_t mask, vfloat16m1_t dest, vfloat16m1_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_f16m1_tumu(mask, dest, src, offset, vl);
}

vfloat16m2_t test_vslideup_vx_f16m2_tumu(vbool8_t mask, vfloat16m2_t dest, vfloat16m2_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_f16m2_tumu(mask, dest, src, offset, vl);
}

vfloat16m4_t test_vslideup_vx_f16m4_tumu(vbool4_t mask, vfloat16m4_t dest, vfloat16m4_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_f16m4_tumu(mask, dest, src, offset, vl);
}

vfloat16m8_t test_vslideup_vx_f16m8_tumu(vbool2_t mask, vfloat16m8_t dest, vfloat16m8_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_f16m8_tumu(mask, dest, src, offset, vl);
}

vfloat32mf2_t test_vslideup_vx_f32mf2_tumu(vbool64_t mask, vfloat32mf2_t dest, vfloat32mf2_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_f32mf2_tumu(mask, dest, src, offset, vl);
}

vfloat32m1_t test_vslideup_vx_f32m1_tumu(vbool32_t mask, vfloat32m1_t dest, vfloat32m1_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_f32m1_tumu(mask, dest, src, offset, vl);
}

vfloat32m2_t test_vslideup_vx_f32m2_tumu(vbool16_t mask, vfloat32m2_t dest, vfloat32m2_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_f32m2_tumu(mask, dest, src, offset, vl);
}

vfloat32m4_t test_vslideup_vx_f32m4_tumu(vbool8_t mask, vfloat32m4_t dest, vfloat32m4_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_f32m4_tumu(mask, dest, src, offset, vl);
}

vfloat32m8_t test_vslideup_vx_f32m8_tumu(vbool4_t mask, vfloat32m8_t dest, vfloat32m8_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_f32m8_tumu(mask, dest, src, offset, vl);
}

vfloat64m1_t test_vslideup_vx_f64m1_tumu(vbool64_t mask, vfloat64m1_t dest, vfloat64m1_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_f64m1_tumu(mask, dest, src, offset, vl);
}

vfloat64m2_t test_vslideup_vx_f64m2_tumu(vbool32_t mask, vfloat64m2_t dest, vfloat64m2_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_f64m2_tumu(mask, dest, src, offset, vl);
}

vfloat64m4_t test_vslideup_vx_f64m4_tumu(vbool16_t mask, vfloat64m4_t dest, vfloat64m4_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_f64m4_tumu(mask, dest, src, offset, vl);
}

vfloat64m8_t test_vslideup_vx_f64m8_tumu(vbool8_t mask, vfloat64m8_t dest, vfloat64m8_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_f64m8_tumu(mask, dest, src, offset, vl);
}

vint8mf8_t test_vslideup_vx_i8mf8_tumu(vbool64_t mask, vint8mf8_t dest, vint8mf8_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_i8mf8_tumu(mask, dest, src, offset, vl);
}

vint8mf4_t test_vslideup_vx_i8mf4_tumu(vbool32_t mask, vint8mf4_t dest, vint8mf4_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_i8mf4_tumu(mask, dest, src, offset, vl);
}

vint8mf2_t test_vslideup_vx_i8mf2_tumu(vbool16_t mask, vint8mf2_t dest, vint8mf2_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_i8mf2_tumu(mask, dest, src, offset, vl);
}

vint8m1_t test_vslideup_vx_i8m1_tumu(vbool8_t mask, vint8m1_t dest, vint8m1_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_i8m1_tumu(mask, dest, src, offset, vl);
}

vint8m2_t test_vslideup_vx_i8m2_tumu(vbool4_t mask, vint8m2_t dest, vint8m2_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_i8m2_tumu(mask, dest, src, offset, vl);
}

vint8m4_t test_vslideup_vx_i8m4_tumu(vbool2_t mask, vint8m4_t dest, vint8m4_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_i8m4_tumu(mask, dest, src, offset, vl);
}

vint8m8_t test_vslideup_vx_i8m8_tumu(vbool1_t mask, vint8m8_t dest, vint8m8_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_i8m8_tumu(mask, dest, src, offset, vl);
}

vint16mf4_t test_vslideup_vx_i16mf4_tumu(vbool64_t mask, vint16mf4_t dest, vint16mf4_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_i16mf4_tumu(mask, dest, src, offset, vl);
}

vint16mf2_t test_vslideup_vx_i16mf2_tumu(vbool32_t mask, vint16mf2_t dest, vint16mf2_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_i16mf2_tumu(mask, dest, src, offset, vl);
}

vint16m1_t test_vslideup_vx_i16m1_tumu(vbool16_t mask, vint16m1_t dest, vint16m1_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_i16m1_tumu(mask, dest, src, offset, vl);
}

vint16m2_t test_vslideup_vx_i16m2_tumu(vbool8_t mask, vint16m2_t dest, vint16m2_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_i16m2_tumu(mask, dest, src, offset, vl);
}

vint16m4_t test_vslideup_vx_i16m4_tumu(vbool4_t mask, vint16m4_t dest, vint16m4_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_i16m4_tumu(mask, dest, src, offset, vl);
}

vint16m8_t test_vslideup_vx_i16m8_tumu(vbool2_t mask, vint16m8_t dest, vint16m8_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_i16m8_tumu(mask, dest, src, offset, vl);
}

vint32mf2_t test_vslideup_vx_i32mf2_tumu(vbool64_t mask, vint32mf2_t dest, vint32mf2_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_i32mf2_tumu(mask, dest, src, offset, vl);
}

vint32m1_t test_vslideup_vx_i32m1_tumu(vbool32_t mask, vint32m1_t dest, vint32m1_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_i32m1_tumu(mask, dest, src, offset, vl);
}

vint32m2_t test_vslideup_vx_i32m2_tumu(vbool16_t mask, vint32m2_t dest, vint32m2_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_i32m2_tumu(mask, dest, src, offset, vl);
}

vint32m4_t test_vslideup_vx_i32m4_tumu(vbool8_t mask, vint32m4_t dest, vint32m4_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_i32m4_tumu(mask, dest, src, offset, vl);
}

vint32m8_t test_vslideup_vx_i32m8_tumu(vbool4_t mask, vint32m8_t dest, vint32m8_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_i32m8_tumu(mask, dest, src, offset, vl);
}

vint64m1_t test_vslideup_vx_i64m1_tumu(vbool64_t mask, vint64m1_t dest, vint64m1_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_i64m1_tumu(mask, dest, src, offset, vl);
}

vint64m2_t test_vslideup_vx_i64m2_tumu(vbool32_t mask, vint64m2_t dest, vint64m2_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_i64m2_tumu(mask, dest, src, offset, vl);
}

vint64m4_t test_vslideup_vx_i64m4_tumu(vbool16_t mask, vint64m4_t dest, vint64m4_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_i64m4_tumu(mask, dest, src, offset, vl);
}

vint64m8_t test_vslideup_vx_i64m8_tumu(vbool8_t mask, vint64m8_t dest, vint64m8_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_i64m8_tumu(mask, dest, src, offset, vl);
}

vuint8mf8_t test_vslideup_vx_u8mf8_tumu(vbool64_t mask, vuint8mf8_t dest, vuint8mf8_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_u8mf8_tumu(mask, dest, src, offset, vl);
}

vuint8mf4_t test_vslideup_vx_u8mf4_tumu(vbool32_t mask, vuint8mf4_t dest, vuint8mf4_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_u8mf4_tumu(mask, dest, src, offset, vl);
}

vuint8mf2_t test_vslideup_vx_u8mf2_tumu(vbool16_t mask, vuint8mf2_t dest, vuint8mf2_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_u8mf2_tumu(mask, dest, src, offset, vl);
}

vuint8m1_t test_vslideup_vx_u8m1_tumu(vbool8_t mask, vuint8m1_t dest, vuint8m1_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_u8m1_tumu(mask, dest, src, offset, vl);
}

vuint8m2_t test_vslideup_vx_u8m2_tumu(vbool4_t mask, vuint8m2_t dest, vuint8m2_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_u8m2_tumu(mask, dest, src, offset, vl);
}

vuint8m4_t test_vslideup_vx_u8m4_tumu(vbool2_t mask, vuint8m4_t dest, vuint8m4_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_u8m4_tumu(mask, dest, src, offset, vl);
}

vuint8m8_t test_vslideup_vx_u8m8_tumu(vbool1_t mask, vuint8m8_t dest, vuint8m8_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_u8m8_tumu(mask, dest, src, offset, vl);
}

vuint16mf4_t test_vslideup_vx_u16mf4_tumu(vbool64_t mask, vuint16mf4_t dest, vuint16mf4_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_u16mf4_tumu(mask, dest, src, offset, vl);
}

vuint16mf2_t test_vslideup_vx_u16mf2_tumu(vbool32_t mask, vuint16mf2_t dest, vuint16mf2_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_u16mf2_tumu(mask, dest, src, offset, vl);
}

vuint16m1_t test_vslideup_vx_u16m1_tumu(vbool16_t mask, vuint16m1_t dest, vuint16m1_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_u16m1_tumu(mask, dest, src, offset, vl);
}

vuint16m2_t test_vslideup_vx_u16m2_tumu(vbool8_t mask, vuint16m2_t dest, vuint16m2_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_u16m2_tumu(mask, dest, src, offset, vl);
}

vuint16m4_t test_vslideup_vx_u16m4_tumu(vbool4_t mask, vuint16m4_t dest, vuint16m4_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_u16m4_tumu(mask, dest, src, offset, vl);
}

vuint16m8_t test_vslideup_vx_u16m8_tumu(vbool2_t mask, vuint16m8_t dest, vuint16m8_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_u16m8_tumu(mask, dest, src, offset, vl);
}

vuint32mf2_t test_vslideup_vx_u32mf2_tumu(vbool64_t mask, vuint32mf2_t dest, vuint32mf2_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_u32mf2_tumu(mask, dest, src, offset, vl);
}

vuint32m1_t test_vslideup_vx_u32m1_tumu(vbool32_t mask, vuint32m1_t dest, vuint32m1_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_u32m1_tumu(mask, dest, src, offset, vl);
}

vuint32m2_t test_vslideup_vx_u32m2_tumu(vbool16_t mask, vuint32m2_t dest, vuint32m2_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_u32m2_tumu(mask, dest, src, offset, vl);
}

vuint32m4_t test_vslideup_vx_u32m4_tumu(vbool8_t mask, vuint32m4_t dest, vuint32m4_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_u32m4_tumu(mask, dest, src, offset, vl);
}

vuint32m8_t test_vslideup_vx_u32m8_tumu(vbool4_t mask, vuint32m8_t dest, vuint32m8_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_u32m8_tumu(mask, dest, src, offset, vl);
}

vuint64m1_t test_vslideup_vx_u64m1_tumu(vbool64_t mask, vuint64m1_t dest, vuint64m1_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_u64m1_tumu(mask, dest, src, offset, vl);
}

vuint64m2_t test_vslideup_vx_u64m2_tumu(vbool32_t mask, vuint64m2_t dest, vuint64m2_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_u64m2_tumu(mask, dest, src, offset, vl);
}

vuint64m4_t test_vslideup_vx_u64m4_tumu(vbool16_t mask, vuint64m4_t dest, vuint64m4_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_u64m4_tumu(mask, dest, src, offset, vl);
}

vuint64m8_t test_vslideup_vx_u64m8_tumu(vbool8_t mask, vuint64m8_t dest, vuint64m8_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_u64m8_tumu(mask, dest, src, offset, vl);
}

vfloat16mf4_t test_vslideup_vx_f16mf4_mu(vbool64_t mask, vfloat16mf4_t dest, vfloat16mf4_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_f16mf4_mu(mask, dest, src, offset, vl);
}

vfloat16mf2_t test_vslideup_vx_f16mf2_mu(vbool32_t mask, vfloat16mf2_t dest, vfloat16mf2_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_f16mf2_mu(mask, dest, src, offset, vl);
}

vfloat16m1_t test_vslideup_vx_f16m1_mu(vbool16_t mask, vfloat16m1_t dest, vfloat16m1_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_f16m1_mu(mask, dest, src, offset, vl);
}

vfloat16m2_t test_vslideup_vx_f16m2_mu(vbool8_t mask, vfloat16m2_t dest, vfloat16m2_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_f16m2_mu(mask, dest, src, offset, vl);
}

vfloat16m4_t test_vslideup_vx_f16m4_mu(vbool4_t mask, vfloat16m4_t dest, vfloat16m4_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_f16m4_mu(mask, dest, src, offset, vl);
}

vfloat16m8_t test_vslideup_vx_f16m8_mu(vbool2_t mask, vfloat16m8_t dest, vfloat16m8_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_f16m8_mu(mask, dest, src, offset, vl);
}

vfloat32mf2_t test_vslideup_vx_f32mf2_mu(vbool64_t mask, vfloat32mf2_t dest, vfloat32mf2_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_f32mf2_mu(mask, dest, src, offset, vl);
}

vfloat32m1_t test_vslideup_vx_f32m1_mu(vbool32_t mask, vfloat32m1_t dest, vfloat32m1_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_f32m1_mu(mask, dest, src, offset, vl);
}

vfloat32m2_t test_vslideup_vx_f32m2_mu(vbool16_t mask, vfloat32m2_t dest, vfloat32m2_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_f32m2_mu(mask, dest, src, offset, vl);
}

vfloat32m4_t test_vslideup_vx_f32m4_mu(vbool8_t mask, vfloat32m4_t dest, vfloat32m4_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_f32m4_mu(mask, dest, src, offset, vl);
}

vfloat32m8_t test_vslideup_vx_f32m8_mu(vbool4_t mask, vfloat32m8_t dest, vfloat32m8_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_f32m8_mu(mask, dest, src, offset, vl);
}

vfloat64m1_t test_vslideup_vx_f64m1_mu(vbool64_t mask, vfloat64m1_t dest, vfloat64m1_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_f64m1_mu(mask, dest, src, offset, vl);
}

vfloat64m2_t test_vslideup_vx_f64m2_mu(vbool32_t mask, vfloat64m2_t dest, vfloat64m2_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_f64m2_mu(mask, dest, src, offset, vl);
}

vfloat64m4_t test_vslideup_vx_f64m4_mu(vbool16_t mask, vfloat64m4_t dest, vfloat64m4_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_f64m4_mu(mask, dest, src, offset, vl);
}

vfloat64m8_t test_vslideup_vx_f64m8_mu(vbool8_t mask, vfloat64m8_t dest, vfloat64m8_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_f64m8_mu(mask, dest, src, offset, vl);
}

vint8mf8_t test_vslideup_vx_i8mf8_mu(vbool64_t mask, vint8mf8_t dest, vint8mf8_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_i8mf8_mu(mask, dest, src, offset, vl);
}

vint8mf4_t test_vslideup_vx_i8mf4_mu(vbool32_t mask, vint8mf4_t dest, vint8mf4_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_i8mf4_mu(mask, dest, src, offset, vl);
}

vint8mf2_t test_vslideup_vx_i8mf2_mu(vbool16_t mask, vint8mf2_t dest, vint8mf2_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_i8mf2_mu(mask, dest, src, offset, vl);
}

vint8m1_t test_vslideup_vx_i8m1_mu(vbool8_t mask, vint8m1_t dest, vint8m1_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_i8m1_mu(mask, dest, src, offset, vl);
}

vint8m2_t test_vslideup_vx_i8m2_mu(vbool4_t mask, vint8m2_t dest, vint8m2_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_i8m2_mu(mask, dest, src, offset, vl);
}

vint8m4_t test_vslideup_vx_i8m4_mu(vbool2_t mask, vint8m4_t dest, vint8m4_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_i8m4_mu(mask, dest, src, offset, vl);
}

vint8m8_t test_vslideup_vx_i8m8_mu(vbool1_t mask, vint8m8_t dest, vint8m8_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_i8m8_mu(mask, dest, src, offset, vl);
}

vint16mf4_t test_vslideup_vx_i16mf4_mu(vbool64_t mask, vint16mf4_t dest, vint16mf4_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_i16mf4_mu(mask, dest, src, offset, vl);
}

vint16mf2_t test_vslideup_vx_i16mf2_mu(vbool32_t mask, vint16mf2_t dest, vint16mf2_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_i16mf2_mu(mask, dest, src, offset, vl);
}

vint16m1_t test_vslideup_vx_i16m1_mu(vbool16_t mask, vint16m1_t dest, vint16m1_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_i16m1_mu(mask, dest, src, offset, vl);
}

vint16m2_t test_vslideup_vx_i16m2_mu(vbool8_t mask, vint16m2_t dest, vint16m2_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_i16m2_mu(mask, dest, src, offset, vl);
}

vint16m4_t test_vslideup_vx_i16m4_mu(vbool4_t mask, vint16m4_t dest, vint16m4_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_i16m4_mu(mask, dest, src, offset, vl);
}

vint16m8_t test_vslideup_vx_i16m8_mu(vbool2_t mask, vint16m8_t dest, vint16m8_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_i16m8_mu(mask, dest, src, offset, vl);
}

vint32mf2_t test_vslideup_vx_i32mf2_mu(vbool64_t mask, vint32mf2_t dest, vint32mf2_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_i32mf2_mu(mask, dest, src, offset, vl);
}

vint32m1_t test_vslideup_vx_i32m1_mu(vbool32_t mask, vint32m1_t dest, vint32m1_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_i32m1_mu(mask, dest, src, offset, vl);
}

vint32m2_t test_vslideup_vx_i32m2_mu(vbool16_t mask, vint32m2_t dest, vint32m2_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_i32m2_mu(mask, dest, src, offset, vl);
}

vint32m4_t test_vslideup_vx_i32m4_mu(vbool8_t mask, vint32m4_t dest, vint32m4_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_i32m4_mu(mask, dest, src, offset, vl);
}

vint32m8_t test_vslideup_vx_i32m8_mu(vbool4_t mask, vint32m8_t dest, vint32m8_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_i32m8_mu(mask, dest, src, offset, vl);
}

vint64m1_t test_vslideup_vx_i64m1_mu(vbool64_t mask, vint64m1_t dest, vint64m1_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_i64m1_mu(mask, dest, src, offset, vl);
}

vint64m2_t test_vslideup_vx_i64m2_mu(vbool32_t mask, vint64m2_t dest, vint64m2_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_i64m2_mu(mask, dest, src, offset, vl);
}

vint64m4_t test_vslideup_vx_i64m4_mu(vbool16_t mask, vint64m4_t dest, vint64m4_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_i64m4_mu(mask, dest, src, offset, vl);
}

vint64m8_t test_vslideup_vx_i64m8_mu(vbool8_t mask, vint64m8_t dest, vint64m8_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_i64m8_mu(mask, dest, src, offset, vl);
}

vuint8mf8_t test_vslideup_vx_u8mf8_mu(vbool64_t mask, vuint8mf8_t dest, vuint8mf8_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_u8mf8_mu(mask, dest, src, offset, vl);
}

vuint8mf4_t test_vslideup_vx_u8mf4_mu(vbool32_t mask, vuint8mf4_t dest, vuint8mf4_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_u8mf4_mu(mask, dest, src, offset, vl);
}

vuint8mf2_t test_vslideup_vx_u8mf2_mu(vbool16_t mask, vuint8mf2_t dest, vuint8mf2_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_u8mf2_mu(mask, dest, src, offset, vl);
}

vuint8m1_t test_vslideup_vx_u8m1_mu(vbool8_t mask, vuint8m1_t dest, vuint8m1_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_u8m1_mu(mask, dest, src, offset, vl);
}

vuint8m2_t test_vslideup_vx_u8m2_mu(vbool4_t mask, vuint8m2_t dest, vuint8m2_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_u8m2_mu(mask, dest, src, offset, vl);
}

vuint8m4_t test_vslideup_vx_u8m4_mu(vbool2_t mask, vuint8m4_t dest, vuint8m4_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_u8m4_mu(mask, dest, src, offset, vl);
}

vuint8m8_t test_vslideup_vx_u8m8_mu(vbool1_t mask, vuint8m8_t dest, vuint8m8_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_u8m8_mu(mask, dest, src, offset, vl);
}

vuint16mf4_t test_vslideup_vx_u16mf4_mu(vbool64_t mask, vuint16mf4_t dest, vuint16mf4_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_u16mf4_mu(mask, dest, src, offset, vl);
}

vuint16mf2_t test_vslideup_vx_u16mf2_mu(vbool32_t mask, vuint16mf2_t dest, vuint16mf2_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_u16mf2_mu(mask, dest, src, offset, vl);
}

vuint16m1_t test_vslideup_vx_u16m1_mu(vbool16_t mask, vuint16m1_t dest, vuint16m1_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_u16m1_mu(mask, dest, src, offset, vl);
}

vuint16m2_t test_vslideup_vx_u16m2_mu(vbool8_t mask, vuint16m2_t dest, vuint16m2_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_u16m2_mu(mask, dest, src, offset, vl);
}

vuint16m4_t test_vslideup_vx_u16m4_mu(vbool4_t mask, vuint16m4_t dest, vuint16m4_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_u16m4_mu(mask, dest, src, offset, vl);
}

vuint16m8_t test_vslideup_vx_u16m8_mu(vbool2_t mask, vuint16m8_t dest, vuint16m8_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_u16m8_mu(mask, dest, src, offset, vl);
}

vuint32mf2_t test_vslideup_vx_u32mf2_mu(vbool64_t mask, vuint32mf2_t dest, vuint32mf2_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_u32mf2_mu(mask, dest, src, offset, vl);
}

vuint32m1_t test_vslideup_vx_u32m1_mu(vbool32_t mask, vuint32m1_t dest, vuint32m1_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_u32m1_mu(mask, dest, src, offset, vl);
}

vuint32m2_t test_vslideup_vx_u32m2_mu(vbool16_t mask, vuint32m2_t dest, vuint32m2_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_u32m2_mu(mask, dest, src, offset, vl);
}

vuint32m4_t test_vslideup_vx_u32m4_mu(vbool8_t mask, vuint32m4_t dest, vuint32m4_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_u32m4_mu(mask, dest, src, offset, vl);
}

vuint32m8_t test_vslideup_vx_u32m8_mu(vbool4_t mask, vuint32m8_t dest, vuint32m8_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_u32m8_mu(mask, dest, src, offset, vl);
}

vuint64m1_t test_vslideup_vx_u64m1_mu(vbool64_t mask, vuint64m1_t dest, vuint64m1_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_u64m1_mu(mask, dest, src, offset, vl);
}

vuint64m2_t test_vslideup_vx_u64m2_mu(vbool32_t mask, vuint64m2_t dest, vuint64m2_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_u64m2_mu(mask, dest, src, offset, vl);
}

vuint64m4_t test_vslideup_vx_u64m4_mu(vbool16_t mask, vuint64m4_t dest, vuint64m4_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_u64m4_mu(mask, dest, src, offset, vl);
}

vuint64m8_t test_vslideup_vx_u64m8_mu(vbool8_t mask, vuint64m8_t dest, vuint64m8_t src, size_t offset, size_t vl) {
  return __riscv_vslideup_vx_u64m8_mu(mask, dest, src, offset, vl);
}

