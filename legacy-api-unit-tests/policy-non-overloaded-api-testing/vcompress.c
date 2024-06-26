#include <stdint.h>
#include "rvv-v0p10-compatible-headers/non-policy.h"
#include "rvv-v0p10-compatible-headers/policy.h"
#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
vfloat16mf4_t test_vcompress_vm_f16mf4_tu(vbool64_t mask, vfloat16mf4_t maskedoff, vfloat16mf4_t src, size_t vl) {
  return vcompress_vm_f16mf4_tu(mask, maskedoff, src, vl);
}

vfloat16mf2_t test_vcompress_vm_f16mf2_tu(vbool32_t mask, vfloat16mf2_t maskedoff, vfloat16mf2_t src, size_t vl) {
  return vcompress_vm_f16mf2_tu(mask, maskedoff, src, vl);
}

vfloat16m1_t test_vcompress_vm_f16m1_tu(vbool16_t mask, vfloat16m1_t maskedoff, vfloat16m1_t src, size_t vl) {
  return vcompress_vm_f16m1_tu(mask, maskedoff, src, vl);
}

vfloat16m2_t test_vcompress_vm_f16m2_tu(vbool8_t mask, vfloat16m2_t maskedoff, vfloat16m2_t src, size_t vl) {
  return vcompress_vm_f16m2_tu(mask, maskedoff, src, vl);
}

vfloat16m4_t test_vcompress_vm_f16m4_tu(vbool4_t mask, vfloat16m4_t maskedoff, vfloat16m4_t src, size_t vl) {
  return vcompress_vm_f16m4_tu(mask, maskedoff, src, vl);
}

vfloat16m8_t test_vcompress_vm_f16m8_tu(vbool2_t mask, vfloat16m8_t maskedoff, vfloat16m8_t src, size_t vl) {
  return vcompress_vm_f16m8_tu(mask, maskedoff, src, vl);
}

vfloat32mf2_t test_vcompress_vm_f32mf2_tu(vbool64_t mask, vfloat32mf2_t maskedoff, vfloat32mf2_t src, size_t vl) {
  return vcompress_vm_f32mf2_tu(mask, maskedoff, src, vl);
}

vfloat32m1_t test_vcompress_vm_f32m1_tu(vbool32_t mask, vfloat32m1_t maskedoff, vfloat32m1_t src, size_t vl) {
  return vcompress_vm_f32m1_tu(mask, maskedoff, src, vl);
}

vfloat32m2_t test_vcompress_vm_f32m2_tu(vbool16_t mask, vfloat32m2_t maskedoff, vfloat32m2_t src, size_t vl) {
  return vcompress_vm_f32m2_tu(mask, maskedoff, src, vl);
}

vfloat32m4_t test_vcompress_vm_f32m4_tu(vbool8_t mask, vfloat32m4_t maskedoff, vfloat32m4_t src, size_t vl) {
  return vcompress_vm_f32m4_tu(mask, maskedoff, src, vl);
}

vfloat32m8_t test_vcompress_vm_f32m8_tu(vbool4_t mask, vfloat32m8_t maskedoff, vfloat32m8_t src, size_t vl) {
  return vcompress_vm_f32m8_tu(mask, maskedoff, src, vl);
}

vfloat64m1_t test_vcompress_vm_f64m1_tu(vbool64_t mask, vfloat64m1_t maskedoff, vfloat64m1_t src, size_t vl) {
  return vcompress_vm_f64m1_tu(mask, maskedoff, src, vl);
}

vfloat64m2_t test_vcompress_vm_f64m2_tu(vbool32_t mask, vfloat64m2_t maskedoff, vfloat64m2_t src, size_t vl) {
  return vcompress_vm_f64m2_tu(mask, maskedoff, src, vl);
}

vfloat64m4_t test_vcompress_vm_f64m4_tu(vbool16_t mask, vfloat64m4_t maskedoff, vfloat64m4_t src, size_t vl) {
  return vcompress_vm_f64m4_tu(mask, maskedoff, src, vl);
}

vfloat64m8_t test_vcompress_vm_f64m8_tu(vbool8_t mask, vfloat64m8_t maskedoff, vfloat64m8_t src, size_t vl) {
  return vcompress_vm_f64m8_tu(mask, maskedoff, src, vl);
}

vint8mf8_t test_vcompress_vm_i8mf8_tu(vbool64_t mask, vint8mf8_t maskedoff, vint8mf8_t src, size_t vl) {
  return vcompress_vm_i8mf8_tu(mask, maskedoff, src, vl);
}

vint8mf4_t test_vcompress_vm_i8mf4_tu(vbool32_t mask, vint8mf4_t maskedoff, vint8mf4_t src, size_t vl) {
  return vcompress_vm_i8mf4_tu(mask, maskedoff, src, vl);
}

vint8mf2_t test_vcompress_vm_i8mf2_tu(vbool16_t mask, vint8mf2_t maskedoff, vint8mf2_t src, size_t vl) {
  return vcompress_vm_i8mf2_tu(mask, maskedoff, src, vl);
}

vint8m1_t test_vcompress_vm_i8m1_tu(vbool8_t mask, vint8m1_t maskedoff, vint8m1_t src, size_t vl) {
  return vcompress_vm_i8m1_tu(mask, maskedoff, src, vl);
}

vint8m2_t test_vcompress_vm_i8m2_tu(vbool4_t mask, vint8m2_t maskedoff, vint8m2_t src, size_t vl) {
  return vcompress_vm_i8m2_tu(mask, maskedoff, src, vl);
}

vint8m4_t test_vcompress_vm_i8m4_tu(vbool2_t mask, vint8m4_t maskedoff, vint8m4_t src, size_t vl) {
  return vcompress_vm_i8m4_tu(mask, maskedoff, src, vl);
}

vint8m8_t test_vcompress_vm_i8m8_tu(vbool1_t mask, vint8m8_t maskedoff, vint8m8_t src, size_t vl) {
  return vcompress_vm_i8m8_tu(mask, maskedoff, src, vl);
}

vint16mf4_t test_vcompress_vm_i16mf4_tu(vbool64_t mask, vint16mf4_t maskedoff, vint16mf4_t src, size_t vl) {
  return vcompress_vm_i16mf4_tu(mask, maskedoff, src, vl);
}

vint16mf2_t test_vcompress_vm_i16mf2_tu(vbool32_t mask, vint16mf2_t maskedoff, vint16mf2_t src, size_t vl) {
  return vcompress_vm_i16mf2_tu(mask, maskedoff, src, vl);
}

vint16m1_t test_vcompress_vm_i16m1_tu(vbool16_t mask, vint16m1_t maskedoff, vint16m1_t src, size_t vl) {
  return vcompress_vm_i16m1_tu(mask, maskedoff, src, vl);
}

vint16m2_t test_vcompress_vm_i16m2_tu(vbool8_t mask, vint16m2_t maskedoff, vint16m2_t src, size_t vl) {
  return vcompress_vm_i16m2_tu(mask, maskedoff, src, vl);
}

vint16m4_t test_vcompress_vm_i16m4_tu(vbool4_t mask, vint16m4_t maskedoff, vint16m4_t src, size_t vl) {
  return vcompress_vm_i16m4_tu(mask, maskedoff, src, vl);
}

vint16m8_t test_vcompress_vm_i16m8_tu(vbool2_t mask, vint16m8_t maskedoff, vint16m8_t src, size_t vl) {
  return vcompress_vm_i16m8_tu(mask, maskedoff, src, vl);
}

vint32mf2_t test_vcompress_vm_i32mf2_tu(vbool64_t mask, vint32mf2_t maskedoff, vint32mf2_t src, size_t vl) {
  return vcompress_vm_i32mf2_tu(mask, maskedoff, src, vl);
}

vint32m1_t test_vcompress_vm_i32m1_tu(vbool32_t mask, vint32m1_t maskedoff, vint32m1_t src, size_t vl) {
  return vcompress_vm_i32m1_tu(mask, maskedoff, src, vl);
}

vint32m2_t test_vcompress_vm_i32m2_tu(vbool16_t mask, vint32m2_t maskedoff, vint32m2_t src, size_t vl) {
  return vcompress_vm_i32m2_tu(mask, maskedoff, src, vl);
}

vint32m4_t test_vcompress_vm_i32m4_tu(vbool8_t mask, vint32m4_t maskedoff, vint32m4_t src, size_t vl) {
  return vcompress_vm_i32m4_tu(mask, maskedoff, src, vl);
}

vint32m8_t test_vcompress_vm_i32m8_tu(vbool4_t mask, vint32m8_t maskedoff, vint32m8_t src, size_t vl) {
  return vcompress_vm_i32m8_tu(mask, maskedoff, src, vl);
}

vint64m1_t test_vcompress_vm_i64m1_tu(vbool64_t mask, vint64m1_t maskedoff, vint64m1_t src, size_t vl) {
  return vcompress_vm_i64m1_tu(mask, maskedoff, src, vl);
}

vint64m2_t test_vcompress_vm_i64m2_tu(vbool32_t mask, vint64m2_t maskedoff, vint64m2_t src, size_t vl) {
  return vcompress_vm_i64m2_tu(mask, maskedoff, src, vl);
}

vint64m4_t test_vcompress_vm_i64m4_tu(vbool16_t mask, vint64m4_t maskedoff, vint64m4_t src, size_t vl) {
  return vcompress_vm_i64m4_tu(mask, maskedoff, src, vl);
}

vint64m8_t test_vcompress_vm_i64m8_tu(vbool8_t mask, vint64m8_t maskedoff, vint64m8_t src, size_t vl) {
  return vcompress_vm_i64m8_tu(mask, maskedoff, src, vl);
}

vuint8mf8_t test_vcompress_vm_u8mf8_tu(vbool64_t mask, vuint8mf8_t maskedoff, vuint8mf8_t src, size_t vl) {
  return vcompress_vm_u8mf8_tu(mask, maskedoff, src, vl);
}

vuint8mf4_t test_vcompress_vm_u8mf4_tu(vbool32_t mask, vuint8mf4_t maskedoff, vuint8mf4_t src, size_t vl) {
  return vcompress_vm_u8mf4_tu(mask, maskedoff, src, vl);
}

vuint8mf2_t test_vcompress_vm_u8mf2_tu(vbool16_t mask, vuint8mf2_t maskedoff, vuint8mf2_t src, size_t vl) {
  return vcompress_vm_u8mf2_tu(mask, maskedoff, src, vl);
}

vuint8m1_t test_vcompress_vm_u8m1_tu(vbool8_t mask, vuint8m1_t maskedoff, vuint8m1_t src, size_t vl) {
  return vcompress_vm_u8m1_tu(mask, maskedoff, src, vl);
}

vuint8m2_t test_vcompress_vm_u8m2_tu(vbool4_t mask, vuint8m2_t maskedoff, vuint8m2_t src, size_t vl) {
  return vcompress_vm_u8m2_tu(mask, maskedoff, src, vl);
}

vuint8m4_t test_vcompress_vm_u8m4_tu(vbool2_t mask, vuint8m4_t maskedoff, vuint8m4_t src, size_t vl) {
  return vcompress_vm_u8m4_tu(mask, maskedoff, src, vl);
}

vuint8m8_t test_vcompress_vm_u8m8_tu(vbool1_t mask, vuint8m8_t maskedoff, vuint8m8_t src, size_t vl) {
  return vcompress_vm_u8m8_tu(mask, maskedoff, src, vl);
}

vuint16mf4_t test_vcompress_vm_u16mf4_tu(vbool64_t mask, vuint16mf4_t maskedoff, vuint16mf4_t src, size_t vl) {
  return vcompress_vm_u16mf4_tu(mask, maskedoff, src, vl);
}

vuint16mf2_t test_vcompress_vm_u16mf2_tu(vbool32_t mask, vuint16mf2_t maskedoff, vuint16mf2_t src, size_t vl) {
  return vcompress_vm_u16mf2_tu(mask, maskedoff, src, vl);
}

vuint16m1_t test_vcompress_vm_u16m1_tu(vbool16_t mask, vuint16m1_t maskedoff, vuint16m1_t src, size_t vl) {
  return vcompress_vm_u16m1_tu(mask, maskedoff, src, vl);
}

vuint16m2_t test_vcompress_vm_u16m2_tu(vbool8_t mask, vuint16m2_t maskedoff, vuint16m2_t src, size_t vl) {
  return vcompress_vm_u16m2_tu(mask, maskedoff, src, vl);
}

vuint16m4_t test_vcompress_vm_u16m4_tu(vbool4_t mask, vuint16m4_t maskedoff, vuint16m4_t src, size_t vl) {
  return vcompress_vm_u16m4_tu(mask, maskedoff, src, vl);
}

vuint16m8_t test_vcompress_vm_u16m8_tu(vbool2_t mask, vuint16m8_t maskedoff, vuint16m8_t src, size_t vl) {
  return vcompress_vm_u16m8_tu(mask, maskedoff, src, vl);
}

vuint32mf2_t test_vcompress_vm_u32mf2_tu(vbool64_t mask, vuint32mf2_t maskedoff, vuint32mf2_t src, size_t vl) {
  return vcompress_vm_u32mf2_tu(mask, maskedoff, src, vl);
}

vuint32m1_t test_vcompress_vm_u32m1_tu(vbool32_t mask, vuint32m1_t maskedoff, vuint32m1_t src, size_t vl) {
  return vcompress_vm_u32m1_tu(mask, maskedoff, src, vl);
}

vuint32m2_t test_vcompress_vm_u32m2_tu(vbool16_t mask, vuint32m2_t maskedoff, vuint32m2_t src, size_t vl) {
  return vcompress_vm_u32m2_tu(mask, maskedoff, src, vl);
}

vuint32m4_t test_vcompress_vm_u32m4_tu(vbool8_t mask, vuint32m4_t maskedoff, vuint32m4_t src, size_t vl) {
  return vcompress_vm_u32m4_tu(mask, maskedoff, src, vl);
}

vuint32m8_t test_vcompress_vm_u32m8_tu(vbool4_t mask, vuint32m8_t maskedoff, vuint32m8_t src, size_t vl) {
  return vcompress_vm_u32m8_tu(mask, maskedoff, src, vl);
}

vuint64m1_t test_vcompress_vm_u64m1_tu(vbool64_t mask, vuint64m1_t maskedoff, vuint64m1_t src, size_t vl) {
  return vcompress_vm_u64m1_tu(mask, maskedoff, src, vl);
}

vuint64m2_t test_vcompress_vm_u64m2_tu(vbool32_t mask, vuint64m2_t maskedoff, vuint64m2_t src, size_t vl) {
  return vcompress_vm_u64m2_tu(mask, maskedoff, src, vl);
}

vuint64m4_t test_vcompress_vm_u64m4_tu(vbool16_t mask, vuint64m4_t maskedoff, vuint64m4_t src, size_t vl) {
  return vcompress_vm_u64m4_tu(mask, maskedoff, src, vl);
}

vuint64m8_t test_vcompress_vm_u64m8_tu(vbool8_t mask, vuint64m8_t maskedoff, vuint64m8_t src, size_t vl) {
  return vcompress_vm_u64m8_tu(mask, maskedoff, src, vl);
}

vfloat16mf4_t test_vcompress_vm_f16mf4_ta(vbool64_t mask, vfloat16mf4_t src, size_t vl) {
  return vcompress_vm_f16mf4_ta(mask, src, vl);
}

vfloat16mf2_t test_vcompress_vm_f16mf2_ta(vbool32_t mask, vfloat16mf2_t src, size_t vl) {
  return vcompress_vm_f16mf2_ta(mask, src, vl);
}

vfloat16m1_t test_vcompress_vm_f16m1_ta(vbool16_t mask, vfloat16m1_t src, size_t vl) {
  return vcompress_vm_f16m1_ta(mask, src, vl);
}

vfloat16m2_t test_vcompress_vm_f16m2_ta(vbool8_t mask, vfloat16m2_t src, size_t vl) {
  return vcompress_vm_f16m2_ta(mask, src, vl);
}

vfloat16m4_t test_vcompress_vm_f16m4_ta(vbool4_t mask, vfloat16m4_t src, size_t vl) {
  return vcompress_vm_f16m4_ta(mask, src, vl);
}

vfloat16m8_t test_vcompress_vm_f16m8_ta(vbool2_t mask, vfloat16m8_t src, size_t vl) {
  return vcompress_vm_f16m8_ta(mask, src, vl);
}

vfloat32mf2_t test_vcompress_vm_f32mf2_ta(vbool64_t mask, vfloat32mf2_t src, size_t vl) {
  return vcompress_vm_f32mf2_ta(mask, src, vl);
}

vfloat32m1_t test_vcompress_vm_f32m1_ta(vbool32_t mask, vfloat32m1_t src, size_t vl) {
  return vcompress_vm_f32m1_ta(mask, src, vl);
}

vfloat32m2_t test_vcompress_vm_f32m2_ta(vbool16_t mask, vfloat32m2_t src, size_t vl) {
  return vcompress_vm_f32m2_ta(mask, src, vl);
}

vfloat32m4_t test_vcompress_vm_f32m4_ta(vbool8_t mask, vfloat32m4_t src, size_t vl) {
  return vcompress_vm_f32m4_ta(mask, src, vl);
}

vfloat32m8_t test_vcompress_vm_f32m8_ta(vbool4_t mask, vfloat32m8_t src, size_t vl) {
  return vcompress_vm_f32m8_ta(mask, src, vl);
}

vfloat64m1_t test_vcompress_vm_f64m1_ta(vbool64_t mask, vfloat64m1_t src, size_t vl) {
  return vcompress_vm_f64m1_ta(mask, src, vl);
}

vfloat64m2_t test_vcompress_vm_f64m2_ta(vbool32_t mask, vfloat64m2_t src, size_t vl) {
  return vcompress_vm_f64m2_ta(mask, src, vl);
}

vfloat64m4_t test_vcompress_vm_f64m4_ta(vbool16_t mask, vfloat64m4_t src, size_t vl) {
  return vcompress_vm_f64m4_ta(mask, src, vl);
}

vfloat64m8_t test_vcompress_vm_f64m8_ta(vbool8_t mask, vfloat64m8_t src, size_t vl) {
  return vcompress_vm_f64m8_ta(mask, src, vl);
}

vint8mf8_t test_vcompress_vm_i8mf8_ta(vbool64_t mask, vint8mf8_t src, size_t vl) {
  return vcompress_vm_i8mf8_ta(mask, src, vl);
}

vint8mf4_t test_vcompress_vm_i8mf4_ta(vbool32_t mask, vint8mf4_t src, size_t vl) {
  return vcompress_vm_i8mf4_ta(mask, src, vl);
}

vint8mf2_t test_vcompress_vm_i8mf2_ta(vbool16_t mask, vint8mf2_t src, size_t vl) {
  return vcompress_vm_i8mf2_ta(mask, src, vl);
}

vint8m1_t test_vcompress_vm_i8m1_ta(vbool8_t mask, vint8m1_t src, size_t vl) {
  return vcompress_vm_i8m1_ta(mask, src, vl);
}

vint8m2_t test_vcompress_vm_i8m2_ta(vbool4_t mask, vint8m2_t src, size_t vl) {
  return vcompress_vm_i8m2_ta(mask, src, vl);
}

vint8m4_t test_vcompress_vm_i8m4_ta(vbool2_t mask, vint8m4_t src, size_t vl) {
  return vcompress_vm_i8m4_ta(mask, src, vl);
}

vint8m8_t test_vcompress_vm_i8m8_ta(vbool1_t mask, vint8m8_t src, size_t vl) {
  return vcompress_vm_i8m8_ta(mask, src, vl);
}

vint16mf4_t test_vcompress_vm_i16mf4_ta(vbool64_t mask, vint16mf4_t src, size_t vl) {
  return vcompress_vm_i16mf4_ta(mask, src, vl);
}

vint16mf2_t test_vcompress_vm_i16mf2_ta(vbool32_t mask, vint16mf2_t src, size_t vl) {
  return vcompress_vm_i16mf2_ta(mask, src, vl);
}

vint16m1_t test_vcompress_vm_i16m1_ta(vbool16_t mask, vint16m1_t src, size_t vl) {
  return vcompress_vm_i16m1_ta(mask, src, vl);
}

vint16m2_t test_vcompress_vm_i16m2_ta(vbool8_t mask, vint16m2_t src, size_t vl) {
  return vcompress_vm_i16m2_ta(mask, src, vl);
}

vint16m4_t test_vcompress_vm_i16m4_ta(vbool4_t mask, vint16m4_t src, size_t vl) {
  return vcompress_vm_i16m4_ta(mask, src, vl);
}

vint16m8_t test_vcompress_vm_i16m8_ta(vbool2_t mask, vint16m8_t src, size_t vl) {
  return vcompress_vm_i16m8_ta(mask, src, vl);
}

vint32mf2_t test_vcompress_vm_i32mf2_ta(vbool64_t mask, vint32mf2_t src, size_t vl) {
  return vcompress_vm_i32mf2_ta(mask, src, vl);
}

vint32m1_t test_vcompress_vm_i32m1_ta(vbool32_t mask, vint32m1_t src, size_t vl) {
  return vcompress_vm_i32m1_ta(mask, src, vl);
}

vint32m2_t test_vcompress_vm_i32m2_ta(vbool16_t mask, vint32m2_t src, size_t vl) {
  return vcompress_vm_i32m2_ta(mask, src, vl);
}

vint32m4_t test_vcompress_vm_i32m4_ta(vbool8_t mask, vint32m4_t src, size_t vl) {
  return vcompress_vm_i32m4_ta(mask, src, vl);
}

vint32m8_t test_vcompress_vm_i32m8_ta(vbool4_t mask, vint32m8_t src, size_t vl) {
  return vcompress_vm_i32m8_ta(mask, src, vl);
}

vint64m1_t test_vcompress_vm_i64m1_ta(vbool64_t mask, vint64m1_t src, size_t vl) {
  return vcompress_vm_i64m1_ta(mask, src, vl);
}

vint64m2_t test_vcompress_vm_i64m2_ta(vbool32_t mask, vint64m2_t src, size_t vl) {
  return vcompress_vm_i64m2_ta(mask, src, vl);
}

vint64m4_t test_vcompress_vm_i64m4_ta(vbool16_t mask, vint64m4_t src, size_t vl) {
  return vcompress_vm_i64m4_ta(mask, src, vl);
}

vint64m8_t test_vcompress_vm_i64m8_ta(vbool8_t mask, vint64m8_t src, size_t vl) {
  return vcompress_vm_i64m8_ta(mask, src, vl);
}

vuint8mf8_t test_vcompress_vm_u8mf8_ta(vbool64_t mask, vuint8mf8_t src, size_t vl) {
  return vcompress_vm_u8mf8_ta(mask, src, vl);
}

vuint8mf4_t test_vcompress_vm_u8mf4_ta(vbool32_t mask, vuint8mf4_t src, size_t vl) {
  return vcompress_vm_u8mf4_ta(mask, src, vl);
}

vuint8mf2_t test_vcompress_vm_u8mf2_ta(vbool16_t mask, vuint8mf2_t src, size_t vl) {
  return vcompress_vm_u8mf2_ta(mask, src, vl);
}

vuint8m1_t test_vcompress_vm_u8m1_ta(vbool8_t mask, vuint8m1_t src, size_t vl) {
  return vcompress_vm_u8m1_ta(mask, src, vl);
}

vuint8m2_t test_vcompress_vm_u8m2_ta(vbool4_t mask, vuint8m2_t src, size_t vl) {
  return vcompress_vm_u8m2_ta(mask, src, vl);
}

vuint8m4_t test_vcompress_vm_u8m4_ta(vbool2_t mask, vuint8m4_t src, size_t vl) {
  return vcompress_vm_u8m4_ta(mask, src, vl);
}

vuint8m8_t test_vcompress_vm_u8m8_ta(vbool1_t mask, vuint8m8_t src, size_t vl) {
  return vcompress_vm_u8m8_ta(mask, src, vl);
}

vuint16mf4_t test_vcompress_vm_u16mf4_ta(vbool64_t mask, vuint16mf4_t src, size_t vl) {
  return vcompress_vm_u16mf4_ta(mask, src, vl);
}

vuint16mf2_t test_vcompress_vm_u16mf2_ta(vbool32_t mask, vuint16mf2_t src, size_t vl) {
  return vcompress_vm_u16mf2_ta(mask, src, vl);
}

vuint16m1_t test_vcompress_vm_u16m1_ta(vbool16_t mask, vuint16m1_t src, size_t vl) {
  return vcompress_vm_u16m1_ta(mask, src, vl);
}

vuint16m2_t test_vcompress_vm_u16m2_ta(vbool8_t mask, vuint16m2_t src, size_t vl) {
  return vcompress_vm_u16m2_ta(mask, src, vl);
}

vuint16m4_t test_vcompress_vm_u16m4_ta(vbool4_t mask, vuint16m4_t src, size_t vl) {
  return vcompress_vm_u16m4_ta(mask, src, vl);
}

vuint16m8_t test_vcompress_vm_u16m8_ta(vbool2_t mask, vuint16m8_t src, size_t vl) {
  return vcompress_vm_u16m8_ta(mask, src, vl);
}

vuint32mf2_t test_vcompress_vm_u32mf2_ta(vbool64_t mask, vuint32mf2_t src, size_t vl) {
  return vcompress_vm_u32mf2_ta(mask, src, vl);
}

vuint32m1_t test_vcompress_vm_u32m1_ta(vbool32_t mask, vuint32m1_t src, size_t vl) {
  return vcompress_vm_u32m1_ta(mask, src, vl);
}

vuint32m2_t test_vcompress_vm_u32m2_ta(vbool16_t mask, vuint32m2_t src, size_t vl) {
  return vcompress_vm_u32m2_ta(mask, src, vl);
}

vuint32m4_t test_vcompress_vm_u32m4_ta(vbool8_t mask, vuint32m4_t src, size_t vl) {
  return vcompress_vm_u32m4_ta(mask, src, vl);
}

vuint32m8_t test_vcompress_vm_u32m8_ta(vbool4_t mask, vuint32m8_t src, size_t vl) {
  return vcompress_vm_u32m8_ta(mask, src, vl);
}

vuint64m1_t test_vcompress_vm_u64m1_ta(vbool64_t mask, vuint64m1_t src, size_t vl) {
  return vcompress_vm_u64m1_ta(mask, src, vl);
}

vuint64m2_t test_vcompress_vm_u64m2_ta(vbool32_t mask, vuint64m2_t src, size_t vl) {
  return vcompress_vm_u64m2_ta(mask, src, vl);
}

vuint64m4_t test_vcompress_vm_u64m4_ta(vbool16_t mask, vuint64m4_t src, size_t vl) {
  return vcompress_vm_u64m4_ta(mask, src, vl);
}

vuint64m8_t test_vcompress_vm_u64m8_ta(vbool8_t mask, vuint64m8_t src, size_t vl) {
  return vcompress_vm_u64m8_ta(mask, src, vl);
}

