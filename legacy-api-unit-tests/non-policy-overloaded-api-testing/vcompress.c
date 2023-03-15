#include <stdint.h>
#include "rvv-v0p10-compatible-headers/overloaded-non-policy.h"
#include "rvv-v0p10-compatible-headers/overloaded-policy.h"
#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
vfloat16mf4_t test_vcompress_vm_f16mf4(vbool64_t mask, vfloat16mf4_t dest, vfloat16mf4_t src, size_t vl) {
  return vcompress(mask, dest, src, vl);
}

vfloat16mf2_t test_vcompress_vm_f16mf2(vbool32_t mask, vfloat16mf2_t dest, vfloat16mf2_t src, size_t vl) {
  return vcompress(mask, dest, src, vl);
}

vfloat16m1_t test_vcompress_vm_f16m1(vbool16_t mask, vfloat16m1_t dest, vfloat16m1_t src, size_t vl) {
  return vcompress(mask, dest, src, vl);
}

vfloat16m2_t test_vcompress_vm_f16m2(vbool8_t mask, vfloat16m2_t dest, vfloat16m2_t src, size_t vl) {
  return vcompress(mask, dest, src, vl);
}

vfloat16m4_t test_vcompress_vm_f16m4(vbool4_t mask, vfloat16m4_t dest, vfloat16m4_t src, size_t vl) {
  return vcompress(mask, dest, src, vl);
}

vfloat16m8_t test_vcompress_vm_f16m8(vbool2_t mask, vfloat16m8_t dest, vfloat16m8_t src, size_t vl) {
  return vcompress(mask, dest, src, vl);
}

vfloat32mf2_t test_vcompress_vm_f32mf2(vbool64_t mask, vfloat32mf2_t dest, vfloat32mf2_t src, size_t vl) {
  return vcompress(mask, dest, src, vl);
}

vfloat32m1_t test_vcompress_vm_f32m1(vbool32_t mask, vfloat32m1_t dest, vfloat32m1_t src, size_t vl) {
  return vcompress(mask, dest, src, vl);
}

vfloat32m2_t test_vcompress_vm_f32m2(vbool16_t mask, vfloat32m2_t dest, vfloat32m2_t src, size_t vl) {
  return vcompress(mask, dest, src, vl);
}

vfloat32m4_t test_vcompress_vm_f32m4(vbool8_t mask, vfloat32m4_t dest, vfloat32m4_t src, size_t vl) {
  return vcompress(mask, dest, src, vl);
}

vfloat32m8_t test_vcompress_vm_f32m8(vbool4_t mask, vfloat32m8_t dest, vfloat32m8_t src, size_t vl) {
  return vcompress(mask, dest, src, vl);
}

vfloat64m1_t test_vcompress_vm_f64m1(vbool64_t mask, vfloat64m1_t dest, vfloat64m1_t src, size_t vl) {
  return vcompress(mask, dest, src, vl);
}

vfloat64m2_t test_vcompress_vm_f64m2(vbool32_t mask, vfloat64m2_t dest, vfloat64m2_t src, size_t vl) {
  return vcompress(mask, dest, src, vl);
}

vfloat64m4_t test_vcompress_vm_f64m4(vbool16_t mask, vfloat64m4_t dest, vfloat64m4_t src, size_t vl) {
  return vcompress(mask, dest, src, vl);
}

vfloat64m8_t test_vcompress_vm_f64m8(vbool8_t mask, vfloat64m8_t dest, vfloat64m8_t src, size_t vl) {
  return vcompress(mask, dest, src, vl);
}

vint8mf8_t test_vcompress_vm_i8mf8(vbool64_t mask, vint8mf8_t dest, vint8mf8_t src, size_t vl) {
  return vcompress(mask, dest, src, vl);
}

vint8mf4_t test_vcompress_vm_i8mf4(vbool32_t mask, vint8mf4_t dest, vint8mf4_t src, size_t vl) {
  return vcompress(mask, dest, src, vl);
}

vint8mf2_t test_vcompress_vm_i8mf2(vbool16_t mask, vint8mf2_t dest, vint8mf2_t src, size_t vl) {
  return vcompress(mask, dest, src, vl);
}

vint8m1_t test_vcompress_vm_i8m1(vbool8_t mask, vint8m1_t dest, vint8m1_t src, size_t vl) {
  return vcompress(mask, dest, src, vl);
}

vint8m2_t test_vcompress_vm_i8m2(vbool4_t mask, vint8m2_t dest, vint8m2_t src, size_t vl) {
  return vcompress(mask, dest, src, vl);
}

vint8m4_t test_vcompress_vm_i8m4(vbool2_t mask, vint8m4_t dest, vint8m4_t src, size_t vl) {
  return vcompress(mask, dest, src, vl);
}

vint8m8_t test_vcompress_vm_i8m8(vbool1_t mask, vint8m8_t dest, vint8m8_t src, size_t vl) {
  return vcompress(mask, dest, src, vl);
}

vint16mf4_t test_vcompress_vm_i16mf4(vbool64_t mask, vint16mf4_t dest, vint16mf4_t src, size_t vl) {
  return vcompress(mask, dest, src, vl);
}

vint16mf2_t test_vcompress_vm_i16mf2(vbool32_t mask, vint16mf2_t dest, vint16mf2_t src, size_t vl) {
  return vcompress(mask, dest, src, vl);
}

vint16m1_t test_vcompress_vm_i16m1(vbool16_t mask, vint16m1_t dest, vint16m1_t src, size_t vl) {
  return vcompress(mask, dest, src, vl);
}

vint16m2_t test_vcompress_vm_i16m2(vbool8_t mask, vint16m2_t dest, vint16m2_t src, size_t vl) {
  return vcompress(mask, dest, src, vl);
}

vint16m4_t test_vcompress_vm_i16m4(vbool4_t mask, vint16m4_t dest, vint16m4_t src, size_t vl) {
  return vcompress(mask, dest, src, vl);
}

vint16m8_t test_vcompress_vm_i16m8(vbool2_t mask, vint16m8_t dest, vint16m8_t src, size_t vl) {
  return vcompress(mask, dest, src, vl);
}

vint32mf2_t test_vcompress_vm_i32mf2(vbool64_t mask, vint32mf2_t dest, vint32mf2_t src, size_t vl) {
  return vcompress(mask, dest, src, vl);
}

vint32m1_t test_vcompress_vm_i32m1(vbool32_t mask, vint32m1_t dest, vint32m1_t src, size_t vl) {
  return vcompress(mask, dest, src, vl);
}

vint32m2_t test_vcompress_vm_i32m2(vbool16_t mask, vint32m2_t dest, vint32m2_t src, size_t vl) {
  return vcompress(mask, dest, src, vl);
}

vint32m4_t test_vcompress_vm_i32m4(vbool8_t mask, vint32m4_t dest, vint32m4_t src, size_t vl) {
  return vcompress(mask, dest, src, vl);
}

vint32m8_t test_vcompress_vm_i32m8(vbool4_t mask, vint32m8_t dest, vint32m8_t src, size_t vl) {
  return vcompress(mask, dest, src, vl);
}

vint64m1_t test_vcompress_vm_i64m1(vbool64_t mask, vint64m1_t dest, vint64m1_t src, size_t vl) {
  return vcompress(mask, dest, src, vl);
}

vint64m2_t test_vcompress_vm_i64m2(vbool32_t mask, vint64m2_t dest, vint64m2_t src, size_t vl) {
  return vcompress(mask, dest, src, vl);
}

vint64m4_t test_vcompress_vm_i64m4(vbool16_t mask, vint64m4_t dest, vint64m4_t src, size_t vl) {
  return vcompress(mask, dest, src, vl);
}

vint64m8_t test_vcompress_vm_i64m8(vbool8_t mask, vint64m8_t dest, vint64m8_t src, size_t vl) {
  return vcompress(mask, dest, src, vl);
}

vuint8mf8_t test_vcompress_vm_u8mf8(vbool64_t mask, vuint8mf8_t dest, vuint8mf8_t src, size_t vl) {
  return vcompress(mask, dest, src, vl);
}

vuint8mf4_t test_vcompress_vm_u8mf4(vbool32_t mask, vuint8mf4_t dest, vuint8mf4_t src, size_t vl) {
  return vcompress(mask, dest, src, vl);
}

vuint8mf2_t test_vcompress_vm_u8mf2(vbool16_t mask, vuint8mf2_t dest, vuint8mf2_t src, size_t vl) {
  return vcompress(mask, dest, src, vl);
}

vuint8m1_t test_vcompress_vm_u8m1(vbool8_t mask, vuint8m1_t dest, vuint8m1_t src, size_t vl) {
  return vcompress(mask, dest, src, vl);
}

vuint8m2_t test_vcompress_vm_u8m2(vbool4_t mask, vuint8m2_t dest, vuint8m2_t src, size_t vl) {
  return vcompress(mask, dest, src, vl);
}

vuint8m4_t test_vcompress_vm_u8m4(vbool2_t mask, vuint8m4_t dest, vuint8m4_t src, size_t vl) {
  return vcompress(mask, dest, src, vl);
}

vuint8m8_t test_vcompress_vm_u8m8(vbool1_t mask, vuint8m8_t dest, vuint8m8_t src, size_t vl) {
  return vcompress(mask, dest, src, vl);
}

vuint16mf4_t test_vcompress_vm_u16mf4(vbool64_t mask, vuint16mf4_t dest, vuint16mf4_t src, size_t vl) {
  return vcompress(mask, dest, src, vl);
}

vuint16mf2_t test_vcompress_vm_u16mf2(vbool32_t mask, vuint16mf2_t dest, vuint16mf2_t src, size_t vl) {
  return vcompress(mask, dest, src, vl);
}

vuint16m1_t test_vcompress_vm_u16m1(vbool16_t mask, vuint16m1_t dest, vuint16m1_t src, size_t vl) {
  return vcompress(mask, dest, src, vl);
}

vuint16m2_t test_vcompress_vm_u16m2(vbool8_t mask, vuint16m2_t dest, vuint16m2_t src, size_t vl) {
  return vcompress(mask, dest, src, vl);
}

vuint16m4_t test_vcompress_vm_u16m4(vbool4_t mask, vuint16m4_t dest, vuint16m4_t src, size_t vl) {
  return vcompress(mask, dest, src, vl);
}

vuint16m8_t test_vcompress_vm_u16m8(vbool2_t mask, vuint16m8_t dest, vuint16m8_t src, size_t vl) {
  return vcompress(mask, dest, src, vl);
}

vuint32mf2_t test_vcompress_vm_u32mf2(vbool64_t mask, vuint32mf2_t dest, vuint32mf2_t src, size_t vl) {
  return vcompress(mask, dest, src, vl);
}

vuint32m1_t test_vcompress_vm_u32m1(vbool32_t mask, vuint32m1_t dest, vuint32m1_t src, size_t vl) {
  return vcompress(mask, dest, src, vl);
}

vuint32m2_t test_vcompress_vm_u32m2(vbool16_t mask, vuint32m2_t dest, vuint32m2_t src, size_t vl) {
  return vcompress(mask, dest, src, vl);
}

vuint32m4_t test_vcompress_vm_u32m4(vbool8_t mask, vuint32m4_t dest, vuint32m4_t src, size_t vl) {
  return vcompress(mask, dest, src, vl);
}

vuint32m8_t test_vcompress_vm_u32m8(vbool4_t mask, vuint32m8_t dest, vuint32m8_t src, size_t vl) {
  return vcompress(mask, dest, src, vl);
}

vuint64m1_t test_vcompress_vm_u64m1(vbool64_t mask, vuint64m1_t dest, vuint64m1_t src, size_t vl) {
  return vcompress(mask, dest, src, vl);
}

vuint64m2_t test_vcompress_vm_u64m2(vbool32_t mask, vuint64m2_t dest, vuint64m2_t src, size_t vl) {
  return vcompress(mask, dest, src, vl);
}

vuint64m4_t test_vcompress_vm_u64m4(vbool16_t mask, vuint64m4_t dest, vuint64m4_t src, size_t vl) {
  return vcompress(mask, dest, src, vl);
}

vuint64m8_t test_vcompress_vm_u64m8(vbool8_t mask, vuint64m8_t dest, vuint64m8_t src, size_t vl) {
  return vcompress(mask, dest, src, vl);
}

