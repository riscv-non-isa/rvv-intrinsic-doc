/* { dg-do compile } */
/* { dg-options "-march=rv32gc_zve32f -mabi=ilp32d -Wno-psabi -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include "riscv_vector.h"

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
void test_vse16_v_i16mf2(int16_t *base, vint16mf2_t value, size_t vl) {
  return __riscv_vse16_v_i16mf2(base, value, vl);
}

void test_vse16_v_i16m1(int16_t *base, vint16m1_t value, size_t vl) {
  return __riscv_vse16_v_i16m1(base, value, vl);
}

void test_vse16_v_i16m2(int16_t *base, vint16m2_t value, size_t vl) {
  return __riscv_vse16_v_i16m2(base, value, vl);
}

void test_vse16_v_i16m4(int16_t *base, vint16m4_t value, size_t vl) {
  return __riscv_vse16_v_i16m4(base, value, vl);
}

void test_vse16_v_i16m8(int16_t *base, vint16m8_t value, size_t vl) {
  return __riscv_vse16_v_i16m8(base, value, vl);
}

void test_vse16_v_u16mf2(uint16_t *base, vuint16mf2_t value, size_t vl) {
  return __riscv_vse16_v_u16mf2(base, value, vl);
}

void test_vse16_v_u16m1(uint16_t *base, vuint16m1_t value, size_t vl) {
  return __riscv_vse16_v_u16m1(base, value, vl);
}

void test_vse16_v_u16m2(uint16_t *base, vuint16m2_t value, size_t vl) {
  return __riscv_vse16_v_u16m2(base, value, vl);
}

void test_vse16_v_u16m4(uint16_t *base, vuint16m4_t value, size_t vl) {
  return __riscv_vse16_v_u16m4(base, value, vl);
}

void test_vse16_v_u16m8(uint16_t *base, vuint16m8_t value, size_t vl) {
  return __riscv_vse16_v_u16m8(base, value, vl);
}

void test_vse16_v_i16mf2_m(vbool32_t mask, int16_t *base, vint16mf2_t value, size_t vl) {
  return __riscv_vse16_v_i16mf2_m(mask, base, value, vl);
}

void test_vse16_v_i16m1_m(vbool16_t mask, int16_t *base, vint16m1_t value, size_t vl) {
  return __riscv_vse16_v_i16m1_m(mask, base, value, vl);
}

void test_vse16_v_i16m2_m(vbool8_t mask, int16_t *base, vint16m2_t value, size_t vl) {
  return __riscv_vse16_v_i16m2_m(mask, base, value, vl);
}

void test_vse16_v_i16m4_m(vbool4_t mask, int16_t *base, vint16m4_t value, size_t vl) {
  return __riscv_vse16_v_i16m4_m(mask, base, value, vl);
}

void test_vse16_v_i16m8_m(vbool2_t mask, int16_t *base, vint16m8_t value, size_t vl) {
  return __riscv_vse16_v_i16m8_m(mask, base, value, vl);
}

void test_vse16_v_u16mf2_m(vbool32_t mask, uint16_t *base, vuint16mf2_t value, size_t vl) {
  return __riscv_vse16_v_u16mf2_m(mask, base, value, vl);
}

void test_vse16_v_u16m1_m(vbool16_t mask, uint16_t *base, vuint16m1_t value, size_t vl) {
  return __riscv_vse16_v_u16m1_m(mask, base, value, vl);
}

void test_vse16_v_u16m2_m(vbool8_t mask, uint16_t *base, vuint16m2_t value, size_t vl) {
  return __riscv_vse16_v_u16m2_m(mask, base, value, vl);
}

void test_vse16_v_u16m4_m(vbool4_t mask, uint16_t *base, vuint16m4_t value, size_t vl) {
  return __riscv_vse16_v_u16m4_m(mask, base, value, vl);
}

void test_vse16_v_u16m8_m(vbool2_t mask, uint16_t *base, vuint16m8_t value, size_t vl) {
  return __riscv_vse16_v_u16m8_m(mask, base, value, vl);
}

/* { dg-final { scan-assembler-times {vseti?vli\s+[a-z0-9]+,\s*[a-z0-9]+,\s*e[0-9]+,\s*mf?[1248],\s*t[au],\s*m[au]\s+vse16\.[ivxfswum.]+\s+} 20 } } */
