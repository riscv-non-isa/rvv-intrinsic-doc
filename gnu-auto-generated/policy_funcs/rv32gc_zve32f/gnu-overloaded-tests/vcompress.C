/* { dg-do compile } */
/* { dg-options "-march=rv32gc_zve32f -mabi=ilp32d -Wno-psabi -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include "riscv_vector.h"

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
vfloat32m1_t test_vcompress_vm_f32m1(vfloat32m1_t src, vbool32_t mask, size_t vl) {
  return __riscv_vcompress(src, mask, vl);
}

vfloat32m2_t test_vcompress_vm_f32m2(vfloat32m2_t src, vbool16_t mask, size_t vl) {
  return __riscv_vcompress(src, mask, vl);
}

vfloat32m4_t test_vcompress_vm_f32m4(vfloat32m4_t src, vbool8_t mask, size_t vl) {
  return __riscv_vcompress(src, mask, vl);
}

vfloat32m8_t test_vcompress_vm_f32m8(vfloat32m8_t src, vbool4_t mask, size_t vl) {
  return __riscv_vcompress(src, mask, vl);
}

vint8mf4_t test_vcompress_vm_i8mf4(vint8mf4_t src, vbool32_t mask, size_t vl) {
  return __riscv_vcompress(src, mask, vl);
}

vint8mf2_t test_vcompress_vm_i8mf2(vint8mf2_t src, vbool16_t mask, size_t vl) {
  return __riscv_vcompress(src, mask, vl);
}

vint8m1_t test_vcompress_vm_i8m1(vint8m1_t src, vbool8_t mask, size_t vl) {
  return __riscv_vcompress(src, mask, vl);
}

vint8m2_t test_vcompress_vm_i8m2(vint8m2_t src, vbool4_t mask, size_t vl) {
  return __riscv_vcompress(src, mask, vl);
}

vint8m4_t test_vcompress_vm_i8m4(vint8m4_t src, vbool2_t mask, size_t vl) {
  return __riscv_vcompress(src, mask, vl);
}

vint8m8_t test_vcompress_vm_i8m8(vint8m8_t src, vbool1_t mask, size_t vl) {
  return __riscv_vcompress(src, mask, vl);
}

vint16mf2_t test_vcompress_vm_i16mf2(vint16mf2_t src, vbool32_t mask, size_t vl) {
  return __riscv_vcompress(src, mask, vl);
}

vint16m1_t test_vcompress_vm_i16m1(vint16m1_t src, vbool16_t mask, size_t vl) {
  return __riscv_vcompress(src, mask, vl);
}

vint16m2_t test_vcompress_vm_i16m2(vint16m2_t src, vbool8_t mask, size_t vl) {
  return __riscv_vcompress(src, mask, vl);
}

vint16m4_t test_vcompress_vm_i16m4(vint16m4_t src, vbool4_t mask, size_t vl) {
  return __riscv_vcompress(src, mask, vl);
}

vint16m8_t test_vcompress_vm_i16m8(vint16m8_t src, vbool2_t mask, size_t vl) {
  return __riscv_vcompress(src, mask, vl);
}

vint32m1_t test_vcompress_vm_i32m1(vint32m1_t src, vbool32_t mask, size_t vl) {
  return __riscv_vcompress(src, mask, vl);
}

vint32m2_t test_vcompress_vm_i32m2(vint32m2_t src, vbool16_t mask, size_t vl) {
  return __riscv_vcompress(src, mask, vl);
}

vint32m4_t test_vcompress_vm_i32m4(vint32m4_t src, vbool8_t mask, size_t vl) {
  return __riscv_vcompress(src, mask, vl);
}

vint32m8_t test_vcompress_vm_i32m8(vint32m8_t src, vbool4_t mask, size_t vl) {
  return __riscv_vcompress(src, mask, vl);
}

vuint8mf4_t test_vcompress_vm_u8mf4(vuint8mf4_t src, vbool32_t mask, size_t vl) {
  return __riscv_vcompress(src, mask, vl);
}

vuint8mf2_t test_vcompress_vm_u8mf2(vuint8mf2_t src, vbool16_t mask, size_t vl) {
  return __riscv_vcompress(src, mask, vl);
}

vuint8m1_t test_vcompress_vm_u8m1(vuint8m1_t src, vbool8_t mask, size_t vl) {
  return __riscv_vcompress(src, mask, vl);
}

vuint8m2_t test_vcompress_vm_u8m2(vuint8m2_t src, vbool4_t mask, size_t vl) {
  return __riscv_vcompress(src, mask, vl);
}

vuint8m4_t test_vcompress_vm_u8m4(vuint8m4_t src, vbool2_t mask, size_t vl) {
  return __riscv_vcompress(src, mask, vl);
}

vuint8m8_t test_vcompress_vm_u8m8(vuint8m8_t src, vbool1_t mask, size_t vl) {
  return __riscv_vcompress(src, mask, vl);
}

vuint16mf2_t test_vcompress_vm_u16mf2(vuint16mf2_t src, vbool32_t mask, size_t vl) {
  return __riscv_vcompress(src, mask, vl);
}

vuint16m1_t test_vcompress_vm_u16m1(vuint16m1_t src, vbool16_t mask, size_t vl) {
  return __riscv_vcompress(src, mask, vl);
}

vuint16m2_t test_vcompress_vm_u16m2(vuint16m2_t src, vbool8_t mask, size_t vl) {
  return __riscv_vcompress(src, mask, vl);
}

vuint16m4_t test_vcompress_vm_u16m4(vuint16m4_t src, vbool4_t mask, size_t vl) {
  return __riscv_vcompress(src, mask, vl);
}

vuint16m8_t test_vcompress_vm_u16m8(vuint16m8_t src, vbool2_t mask, size_t vl) {
  return __riscv_vcompress(src, mask, vl);
}

vuint32m1_t test_vcompress_vm_u32m1(vuint32m1_t src, vbool32_t mask, size_t vl) {
  return __riscv_vcompress(src, mask, vl);
}

vuint32m2_t test_vcompress_vm_u32m2(vuint32m2_t src, vbool16_t mask, size_t vl) {
  return __riscv_vcompress(src, mask, vl);
}

vuint32m4_t test_vcompress_vm_u32m4(vuint32m4_t src, vbool8_t mask, size_t vl) {
  return __riscv_vcompress(src, mask, vl);
}

vuint32m8_t test_vcompress_vm_u32m8(vuint32m8_t src, vbool4_t mask, size_t vl) {
  return __riscv_vcompress(src, mask, vl);
}

/* { dg-final { scan-assembler-times {vseti?vli\s+[a-z0-9]+,\s*[a-z0-9]+,\s*e[0-9]+,\s*mf?[1248],\s*t[au],\s*m[au]\s+vcompress\.[ivxfswum.]+\s+} 34 } } */
