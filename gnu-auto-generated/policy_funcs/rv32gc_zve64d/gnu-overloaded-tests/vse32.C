/* { dg-do compile } */
/* { dg-options "-march=rv32gc_zve64d -mabi=ilp32d -Wno-psabi -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include "riscv_vector.h"

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
void test_vse32_v_f32mf2(float32_t *base, vfloat32mf2_t value, size_t vl) {
  return __riscv_vse32(base, value, vl);
}

void test_vse32_v_f32m1(float32_t *base, vfloat32m1_t value, size_t vl) {
  return __riscv_vse32(base, value, vl);
}

void test_vse32_v_f32m2(float32_t *base, vfloat32m2_t value, size_t vl) {
  return __riscv_vse32(base, value, vl);
}

void test_vse32_v_f32m4(float32_t *base, vfloat32m4_t value, size_t vl) {
  return __riscv_vse32(base, value, vl);
}

void test_vse32_v_f32m8(float32_t *base, vfloat32m8_t value, size_t vl) {
  return __riscv_vse32(base, value, vl);
}

void test_vse32_v_i32mf2(int32_t *base, vint32mf2_t value, size_t vl) {
  return __riscv_vse32(base, value, vl);
}

void test_vse32_v_i32m1(int32_t *base, vint32m1_t value, size_t vl) {
  return __riscv_vse32(base, value, vl);
}

void test_vse32_v_i32m2(int32_t *base, vint32m2_t value, size_t vl) {
  return __riscv_vse32(base, value, vl);
}

void test_vse32_v_i32m4(int32_t *base, vint32m4_t value, size_t vl) {
  return __riscv_vse32(base, value, vl);
}

void test_vse32_v_i32m8(int32_t *base, vint32m8_t value, size_t vl) {
  return __riscv_vse32(base, value, vl);
}

void test_vse32_v_u32mf2(uint32_t *base, vuint32mf2_t value, size_t vl) {
  return __riscv_vse32(base, value, vl);
}

void test_vse32_v_u32m1(uint32_t *base, vuint32m1_t value, size_t vl) {
  return __riscv_vse32(base, value, vl);
}

void test_vse32_v_u32m2(uint32_t *base, vuint32m2_t value, size_t vl) {
  return __riscv_vse32(base, value, vl);
}

void test_vse32_v_u32m4(uint32_t *base, vuint32m4_t value, size_t vl) {
  return __riscv_vse32(base, value, vl);
}

void test_vse32_v_u32m8(uint32_t *base, vuint32m8_t value, size_t vl) {
  return __riscv_vse32(base, value, vl);
}

void test_vse32_v_f32mf2_m(vbool64_t mask, float32_t *base, vfloat32mf2_t value, size_t vl) {
  return __riscv_vse32(mask, base, value, vl);
}

void test_vse32_v_f32m1_m(vbool32_t mask, float32_t *base, vfloat32m1_t value, size_t vl) {
  return __riscv_vse32(mask, base, value, vl);
}

void test_vse32_v_f32m2_m(vbool16_t mask, float32_t *base, vfloat32m2_t value, size_t vl) {
  return __riscv_vse32(mask, base, value, vl);
}

void test_vse32_v_f32m4_m(vbool8_t mask, float32_t *base, vfloat32m4_t value, size_t vl) {
  return __riscv_vse32(mask, base, value, vl);
}

void test_vse32_v_f32m8_m(vbool4_t mask, float32_t *base, vfloat32m8_t value, size_t vl) {
  return __riscv_vse32(mask, base, value, vl);
}

void test_vse32_v_i32mf2_m(vbool64_t mask, int32_t *base, vint32mf2_t value, size_t vl) {
  return __riscv_vse32(mask, base, value, vl);
}

void test_vse32_v_i32m1_m(vbool32_t mask, int32_t *base, vint32m1_t value, size_t vl) {
  return __riscv_vse32(mask, base, value, vl);
}

void test_vse32_v_i32m2_m(vbool16_t mask, int32_t *base, vint32m2_t value, size_t vl) {
  return __riscv_vse32(mask, base, value, vl);
}

void test_vse32_v_i32m4_m(vbool8_t mask, int32_t *base, vint32m4_t value, size_t vl) {
  return __riscv_vse32(mask, base, value, vl);
}

void test_vse32_v_i32m8_m(vbool4_t mask, int32_t *base, vint32m8_t value, size_t vl) {
  return __riscv_vse32(mask, base, value, vl);
}

void test_vse32_v_u32mf2_m(vbool64_t mask, uint32_t *base, vuint32mf2_t value, size_t vl) {
  return __riscv_vse32(mask, base, value, vl);
}

void test_vse32_v_u32m1_m(vbool32_t mask, uint32_t *base, vuint32m1_t value, size_t vl) {
  return __riscv_vse32(mask, base, value, vl);
}

void test_vse32_v_u32m2_m(vbool16_t mask, uint32_t *base, vuint32m2_t value, size_t vl) {
  return __riscv_vse32(mask, base, value, vl);
}

void test_vse32_v_u32m4_m(vbool8_t mask, uint32_t *base, vuint32m4_t value, size_t vl) {
  return __riscv_vse32(mask, base, value, vl);
}

void test_vse32_v_u32m8_m(vbool4_t mask, uint32_t *base, vuint32m8_t value, size_t vl) {
  return __riscv_vse32(mask, base, value, vl);
}

/* { dg-final { scan-assembler-times {vseti?vli\s+[a-z0-9]+,\s*[a-z0-9]+,\s*e[0-9]+,\s*mf?[1248],\s*t[au],\s*m[au]\s+vse32\.[ivxfswum.]+\s+} 30 } } */
