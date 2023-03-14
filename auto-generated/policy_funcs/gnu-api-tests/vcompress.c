/* { dg-do compile } */
/* { dg-options "-march=rv64gcv -mabi=lp64d -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
vfloat16mf4_t test_vcompress_vm_f16mf4_tu(vfloat16mf4_t maskedoff, vfloat16mf4_t src, vbool64_t mask, size_t vl) {
  return __riscv_vcompress_vm_f16mf4_tu(maskedoff, src, mask, vl);
}

vfloat16mf2_t test_vcompress_vm_f16mf2_tu(vfloat16mf2_t maskedoff, vfloat16mf2_t src, vbool32_t mask, size_t vl) {
  return __riscv_vcompress_vm_f16mf2_tu(maskedoff, src, mask, vl);
}

vfloat16m1_t test_vcompress_vm_f16m1_tu(vfloat16m1_t maskedoff, vfloat16m1_t src, vbool16_t mask, size_t vl) {
  return __riscv_vcompress_vm_f16m1_tu(maskedoff, src, mask, vl);
}

vfloat16m2_t test_vcompress_vm_f16m2_tu(vfloat16m2_t maskedoff, vfloat16m2_t src, vbool8_t mask, size_t vl) {
  return __riscv_vcompress_vm_f16m2_tu(maskedoff, src, mask, vl);
}

vfloat16m4_t test_vcompress_vm_f16m4_tu(vfloat16m4_t maskedoff, vfloat16m4_t src, vbool4_t mask, size_t vl) {
  return __riscv_vcompress_vm_f16m4_tu(maskedoff, src, mask, vl);
}

vfloat16m8_t test_vcompress_vm_f16m8_tu(vfloat16m8_t maskedoff, vfloat16m8_t src, vbool2_t mask, size_t vl) {
  return __riscv_vcompress_vm_f16m8_tu(maskedoff, src, mask, vl);
}

vfloat32mf2_t test_vcompress_vm_f32mf2_tu(vfloat32mf2_t maskedoff, vfloat32mf2_t src, vbool64_t mask, size_t vl) {
  return __riscv_vcompress_vm_f32mf2_tu(maskedoff, src, mask, vl);
}

vfloat32m1_t test_vcompress_vm_f32m1_tu(vfloat32m1_t maskedoff, vfloat32m1_t src, vbool32_t mask, size_t vl) {
  return __riscv_vcompress_vm_f32m1_tu(maskedoff, src, mask, vl);
}

vfloat32m2_t test_vcompress_vm_f32m2_tu(vfloat32m2_t maskedoff, vfloat32m2_t src, vbool16_t mask, size_t vl) {
  return __riscv_vcompress_vm_f32m2_tu(maskedoff, src, mask, vl);
}

vfloat32m4_t test_vcompress_vm_f32m4_tu(vfloat32m4_t maskedoff, vfloat32m4_t src, vbool8_t mask, size_t vl) {
  return __riscv_vcompress_vm_f32m4_tu(maskedoff, src, mask, vl);
}

vfloat32m8_t test_vcompress_vm_f32m8_tu(vfloat32m8_t maskedoff, vfloat32m8_t src, vbool4_t mask, size_t vl) {
  return __riscv_vcompress_vm_f32m8_tu(maskedoff, src, mask, vl);
}

vfloat64m1_t test_vcompress_vm_f64m1_tu(vfloat64m1_t maskedoff, vfloat64m1_t src, vbool64_t mask, size_t vl) {
  return __riscv_vcompress_vm_f64m1_tu(maskedoff, src, mask, vl);
}

vfloat64m2_t test_vcompress_vm_f64m2_tu(vfloat64m2_t maskedoff, vfloat64m2_t src, vbool32_t mask, size_t vl) {
  return __riscv_vcompress_vm_f64m2_tu(maskedoff, src, mask, vl);
}

vfloat64m4_t test_vcompress_vm_f64m4_tu(vfloat64m4_t maskedoff, vfloat64m4_t src, vbool16_t mask, size_t vl) {
  return __riscv_vcompress_vm_f64m4_tu(maskedoff, src, mask, vl);
}

vfloat64m8_t test_vcompress_vm_f64m8_tu(vfloat64m8_t maskedoff, vfloat64m8_t src, vbool8_t mask, size_t vl) {
  return __riscv_vcompress_vm_f64m8_tu(maskedoff, src, mask, vl);
}

vint8mf8_t test_vcompress_vm_i8mf8_tu(vint8mf8_t maskedoff, vint8mf8_t src, vbool64_t mask, size_t vl) {
  return __riscv_vcompress_vm_i8mf8_tu(maskedoff, src, mask, vl);
}

vint8mf4_t test_vcompress_vm_i8mf4_tu(vint8mf4_t maskedoff, vint8mf4_t src, vbool32_t mask, size_t vl) {
  return __riscv_vcompress_vm_i8mf4_tu(maskedoff, src, mask, vl);
}

vint8mf2_t test_vcompress_vm_i8mf2_tu(vint8mf2_t maskedoff, vint8mf2_t src, vbool16_t mask, size_t vl) {
  return __riscv_vcompress_vm_i8mf2_tu(maskedoff, src, mask, vl);
}

vint8m1_t test_vcompress_vm_i8m1_tu(vint8m1_t maskedoff, vint8m1_t src, vbool8_t mask, size_t vl) {
  return __riscv_vcompress_vm_i8m1_tu(maskedoff, src, mask, vl);
}

vint8m2_t test_vcompress_vm_i8m2_tu(vint8m2_t maskedoff, vint8m2_t src, vbool4_t mask, size_t vl) {
  return __riscv_vcompress_vm_i8m2_tu(maskedoff, src, mask, vl);
}

vint8m4_t test_vcompress_vm_i8m4_tu(vint8m4_t maskedoff, vint8m4_t src, vbool2_t mask, size_t vl) {
  return __riscv_vcompress_vm_i8m4_tu(maskedoff, src, mask, vl);
}

vint8m8_t test_vcompress_vm_i8m8_tu(vint8m8_t maskedoff, vint8m8_t src, vbool1_t mask, size_t vl) {
  return __riscv_vcompress_vm_i8m8_tu(maskedoff, src, mask, vl);
}

vint16mf4_t test_vcompress_vm_i16mf4_tu(vint16mf4_t maskedoff, vint16mf4_t src, vbool64_t mask, size_t vl) {
  return __riscv_vcompress_vm_i16mf4_tu(maskedoff, src, mask, vl);
}

vint16mf2_t test_vcompress_vm_i16mf2_tu(vint16mf2_t maskedoff, vint16mf2_t src, vbool32_t mask, size_t vl) {
  return __riscv_vcompress_vm_i16mf2_tu(maskedoff, src, mask, vl);
}

vint16m1_t test_vcompress_vm_i16m1_tu(vint16m1_t maskedoff, vint16m1_t src, vbool16_t mask, size_t vl) {
  return __riscv_vcompress_vm_i16m1_tu(maskedoff, src, mask, vl);
}

vint16m2_t test_vcompress_vm_i16m2_tu(vint16m2_t maskedoff, vint16m2_t src, vbool8_t mask, size_t vl) {
  return __riscv_vcompress_vm_i16m2_tu(maskedoff, src, mask, vl);
}

vint16m4_t test_vcompress_vm_i16m4_tu(vint16m4_t maskedoff, vint16m4_t src, vbool4_t mask, size_t vl) {
  return __riscv_vcompress_vm_i16m4_tu(maskedoff, src, mask, vl);
}

vint16m8_t test_vcompress_vm_i16m8_tu(vint16m8_t maskedoff, vint16m8_t src, vbool2_t mask, size_t vl) {
  return __riscv_vcompress_vm_i16m8_tu(maskedoff, src, mask, vl);
}

vint32mf2_t test_vcompress_vm_i32mf2_tu(vint32mf2_t maskedoff, vint32mf2_t src, vbool64_t mask, size_t vl) {
  return __riscv_vcompress_vm_i32mf2_tu(maskedoff, src, mask, vl);
}

vint32m1_t test_vcompress_vm_i32m1_tu(vint32m1_t maskedoff, vint32m1_t src, vbool32_t mask, size_t vl) {
  return __riscv_vcompress_vm_i32m1_tu(maskedoff, src, mask, vl);
}

vint32m2_t test_vcompress_vm_i32m2_tu(vint32m2_t maskedoff, vint32m2_t src, vbool16_t mask, size_t vl) {
  return __riscv_vcompress_vm_i32m2_tu(maskedoff, src, mask, vl);
}

vint32m4_t test_vcompress_vm_i32m4_tu(vint32m4_t maskedoff, vint32m4_t src, vbool8_t mask, size_t vl) {
  return __riscv_vcompress_vm_i32m4_tu(maskedoff, src, mask, vl);
}

vint32m8_t test_vcompress_vm_i32m8_tu(vint32m8_t maskedoff, vint32m8_t src, vbool4_t mask, size_t vl) {
  return __riscv_vcompress_vm_i32m8_tu(maskedoff, src, mask, vl);
}

vint64m1_t test_vcompress_vm_i64m1_tu(vint64m1_t maskedoff, vint64m1_t src, vbool64_t mask, size_t vl) {
  return __riscv_vcompress_vm_i64m1_tu(maskedoff, src, mask, vl);
}

vint64m2_t test_vcompress_vm_i64m2_tu(vint64m2_t maskedoff, vint64m2_t src, vbool32_t mask, size_t vl) {
  return __riscv_vcompress_vm_i64m2_tu(maskedoff, src, mask, vl);
}

vint64m4_t test_vcompress_vm_i64m4_tu(vint64m4_t maskedoff, vint64m4_t src, vbool16_t mask, size_t vl) {
  return __riscv_vcompress_vm_i64m4_tu(maskedoff, src, mask, vl);
}

vint64m8_t test_vcompress_vm_i64m8_tu(vint64m8_t maskedoff, vint64m8_t src, vbool8_t mask, size_t vl) {
  return __riscv_vcompress_vm_i64m8_tu(maskedoff, src, mask, vl);
}

vuint8mf8_t test_vcompress_vm_u8mf8_tu(vuint8mf8_t maskedoff, vuint8mf8_t src, vbool64_t mask, size_t vl) {
  return __riscv_vcompress_vm_u8mf8_tu(maskedoff, src, mask, vl);
}

vuint8mf4_t test_vcompress_vm_u8mf4_tu(vuint8mf4_t maskedoff, vuint8mf4_t src, vbool32_t mask, size_t vl) {
  return __riscv_vcompress_vm_u8mf4_tu(maskedoff, src, mask, vl);
}

vuint8mf2_t test_vcompress_vm_u8mf2_tu(vuint8mf2_t maskedoff, vuint8mf2_t src, vbool16_t mask, size_t vl) {
  return __riscv_vcompress_vm_u8mf2_tu(maskedoff, src, mask, vl);
}

vuint8m1_t test_vcompress_vm_u8m1_tu(vuint8m1_t maskedoff, vuint8m1_t src, vbool8_t mask, size_t vl) {
  return __riscv_vcompress_vm_u8m1_tu(maskedoff, src, mask, vl);
}

vuint8m2_t test_vcompress_vm_u8m2_tu(vuint8m2_t maskedoff, vuint8m2_t src, vbool4_t mask, size_t vl) {
  return __riscv_vcompress_vm_u8m2_tu(maskedoff, src, mask, vl);
}

vuint8m4_t test_vcompress_vm_u8m4_tu(vuint8m4_t maskedoff, vuint8m4_t src, vbool2_t mask, size_t vl) {
  return __riscv_vcompress_vm_u8m4_tu(maskedoff, src, mask, vl);
}

vuint8m8_t test_vcompress_vm_u8m8_tu(vuint8m8_t maskedoff, vuint8m8_t src, vbool1_t mask, size_t vl) {
  return __riscv_vcompress_vm_u8m8_tu(maskedoff, src, mask, vl);
}

vuint16mf4_t test_vcompress_vm_u16mf4_tu(vuint16mf4_t maskedoff, vuint16mf4_t src, vbool64_t mask, size_t vl) {
  return __riscv_vcompress_vm_u16mf4_tu(maskedoff, src, mask, vl);
}

vuint16mf2_t test_vcompress_vm_u16mf2_tu(vuint16mf2_t maskedoff, vuint16mf2_t src, vbool32_t mask, size_t vl) {
  return __riscv_vcompress_vm_u16mf2_tu(maskedoff, src, mask, vl);
}

vuint16m1_t test_vcompress_vm_u16m1_tu(vuint16m1_t maskedoff, vuint16m1_t src, vbool16_t mask, size_t vl) {
  return __riscv_vcompress_vm_u16m1_tu(maskedoff, src, mask, vl);
}

vuint16m2_t test_vcompress_vm_u16m2_tu(vuint16m2_t maskedoff, vuint16m2_t src, vbool8_t mask, size_t vl) {
  return __riscv_vcompress_vm_u16m2_tu(maskedoff, src, mask, vl);
}

vuint16m4_t test_vcompress_vm_u16m4_tu(vuint16m4_t maskedoff, vuint16m4_t src, vbool4_t mask, size_t vl) {
  return __riscv_vcompress_vm_u16m4_tu(maskedoff, src, mask, vl);
}

vuint16m8_t test_vcompress_vm_u16m8_tu(vuint16m8_t maskedoff, vuint16m8_t src, vbool2_t mask, size_t vl) {
  return __riscv_vcompress_vm_u16m8_tu(maskedoff, src, mask, vl);
}

vuint32mf2_t test_vcompress_vm_u32mf2_tu(vuint32mf2_t maskedoff, vuint32mf2_t src, vbool64_t mask, size_t vl) {
  return __riscv_vcompress_vm_u32mf2_tu(maskedoff, src, mask, vl);
}

vuint32m1_t test_vcompress_vm_u32m1_tu(vuint32m1_t maskedoff, vuint32m1_t src, vbool32_t mask, size_t vl) {
  return __riscv_vcompress_vm_u32m1_tu(maskedoff, src, mask, vl);
}

vuint32m2_t test_vcompress_vm_u32m2_tu(vuint32m2_t maskedoff, vuint32m2_t src, vbool16_t mask, size_t vl) {
  return __riscv_vcompress_vm_u32m2_tu(maskedoff, src, mask, vl);
}

vuint32m4_t test_vcompress_vm_u32m4_tu(vuint32m4_t maskedoff, vuint32m4_t src, vbool8_t mask, size_t vl) {
  return __riscv_vcompress_vm_u32m4_tu(maskedoff, src, mask, vl);
}

vuint32m8_t test_vcompress_vm_u32m8_tu(vuint32m8_t maskedoff, vuint32m8_t src, vbool4_t mask, size_t vl) {
  return __riscv_vcompress_vm_u32m8_tu(maskedoff, src, mask, vl);
}

vuint64m1_t test_vcompress_vm_u64m1_tu(vuint64m1_t maskedoff, vuint64m1_t src, vbool64_t mask, size_t vl) {
  return __riscv_vcompress_vm_u64m1_tu(maskedoff, src, mask, vl);
}

vuint64m2_t test_vcompress_vm_u64m2_tu(vuint64m2_t maskedoff, vuint64m2_t src, vbool32_t mask, size_t vl) {
  return __riscv_vcompress_vm_u64m2_tu(maskedoff, src, mask, vl);
}

vuint64m4_t test_vcompress_vm_u64m4_tu(vuint64m4_t maskedoff, vuint64m4_t src, vbool16_t mask, size_t vl) {
  return __riscv_vcompress_vm_u64m4_tu(maskedoff, src, mask, vl);
}

vuint64m8_t test_vcompress_vm_u64m8_tu(vuint64m8_t maskedoff, vuint64m8_t src, vbool8_t mask, size_t vl) {
  return __riscv_vcompress_vm_u64m8_tu(maskedoff, src, mask, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*[a-x0-9]+,\s*e[0-9]+,\s*m[f]?[1248],\s*t[au],\s*m[au]\s+vcompress\.[,\sa-x0-9()]+} 59 } } */
