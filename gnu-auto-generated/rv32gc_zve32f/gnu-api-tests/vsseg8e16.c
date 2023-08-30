/* { dg-do compile } */
/* { dg-options "-march=rv32gc_zve32f -mabi=ilp32d -Wno-psabi -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include "riscv_vector.h"

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
void test_vsseg8e16_v_i16mf2x8(int16_t *base, vint16mf2x8_t v_tuple, size_t vl) {
  return __riscv_vsseg8e16_v_i16mf2x8(base, v_tuple, vl);
}

void test_vsseg8e16_v_i16m1x8(int16_t *base, vint16m1x8_t v_tuple, size_t vl) {
  return __riscv_vsseg8e16_v_i16m1x8(base, v_tuple, vl);
}

void test_vsseg8e16_v_u16mf2x8(uint16_t *base, vuint16mf2x8_t v_tuple, size_t vl) {
  return __riscv_vsseg8e16_v_u16mf2x8(base, v_tuple, vl);
}

void test_vsseg8e16_v_u16m1x8(uint16_t *base, vuint16m1x8_t v_tuple, size_t vl) {
  return __riscv_vsseg8e16_v_u16m1x8(base, v_tuple, vl);
}

void test_vsseg8e16_v_i16mf2x8_m(vbool32_t mask, int16_t *base, vint16mf2x8_t v_tuple, size_t vl) {
  return __riscv_vsseg8e16_v_i16mf2x8_m(mask, base, v_tuple, vl);
}

void test_vsseg8e16_v_i16m1x8_m(vbool16_t mask, int16_t *base, vint16m1x8_t v_tuple, size_t vl) {
  return __riscv_vsseg8e16_v_i16m1x8_m(mask, base, v_tuple, vl);
}

void test_vsseg8e16_v_u16mf2x8_m(vbool32_t mask, uint16_t *base, vuint16mf2x8_t v_tuple, size_t vl) {
  return __riscv_vsseg8e16_v_u16mf2x8_m(mask, base, v_tuple, vl);
}

void test_vsseg8e16_v_u16m1x8_m(vbool16_t mask, uint16_t *base, vuint16m1x8_t v_tuple, size_t vl) {
  return __riscv_vsseg8e16_v_u16m1x8_m(mask, base, v_tuple, vl);
}

/* { dg-final { scan-assembler-times {vseti?vli\s+[a-z0-9]+,\s*[a-z0-9]+,\s*e[0-9]+,\s*mf?[1248],\s*t[au],\s*m[au]\s+vsseg8e16\.[ivxfswum.]+\s+} 8 } } */
