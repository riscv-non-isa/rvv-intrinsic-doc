/* { dg-do compile } */
/* { dg-options "-march=rv64gcv -mabi=lp64d -Wno-psabi -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include "riscv_vector.h"

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
void test_vsseg4e16_v_i16mf4x4(int16_t *base, vint16mf4x4_t v_tuple, size_t vl) {
  return __riscv_vsseg4e16(base, v_tuple, vl);
}

void test_vsseg4e16_v_i16mf2x4(int16_t *base, vint16mf2x4_t v_tuple, size_t vl) {
  return __riscv_vsseg4e16(base, v_tuple, vl);
}

void test_vsseg4e16_v_i16m1x4(int16_t *base, vint16m1x4_t v_tuple, size_t vl) {
  return __riscv_vsseg4e16(base, v_tuple, vl);
}

void test_vsseg4e16_v_i16m2x4(int16_t *base, vint16m2x4_t v_tuple, size_t vl) {
  return __riscv_vsseg4e16(base, v_tuple, vl);
}

void test_vsseg4e16_v_u16mf4x4(uint16_t *base, vuint16mf4x4_t v_tuple, size_t vl) {
  return __riscv_vsseg4e16(base, v_tuple, vl);
}

void test_vsseg4e16_v_u16mf2x4(uint16_t *base, vuint16mf2x4_t v_tuple, size_t vl) {
  return __riscv_vsseg4e16(base, v_tuple, vl);
}

void test_vsseg4e16_v_u16m1x4(uint16_t *base, vuint16m1x4_t v_tuple, size_t vl) {
  return __riscv_vsseg4e16(base, v_tuple, vl);
}

void test_vsseg4e16_v_u16m2x4(uint16_t *base, vuint16m2x4_t v_tuple, size_t vl) {
  return __riscv_vsseg4e16(base, v_tuple, vl);
}

void test_vsseg4e16_v_i16mf4x4_m(vbool64_t mask, int16_t *base, vint16mf4x4_t v_tuple, size_t vl) {
  return __riscv_vsseg4e16(mask, base, v_tuple, vl);
}

void test_vsseg4e16_v_i16mf2x4_m(vbool32_t mask, int16_t *base, vint16mf2x4_t v_tuple, size_t vl) {
  return __riscv_vsseg4e16(mask, base, v_tuple, vl);
}

void test_vsseg4e16_v_i16m1x4_m(vbool16_t mask, int16_t *base, vint16m1x4_t v_tuple, size_t vl) {
  return __riscv_vsseg4e16(mask, base, v_tuple, vl);
}

void test_vsseg4e16_v_i16m2x4_m(vbool8_t mask, int16_t *base, vint16m2x4_t v_tuple, size_t vl) {
  return __riscv_vsseg4e16(mask, base, v_tuple, vl);
}

void test_vsseg4e16_v_u16mf4x4_m(vbool64_t mask, uint16_t *base, vuint16mf4x4_t v_tuple, size_t vl) {
  return __riscv_vsseg4e16(mask, base, v_tuple, vl);
}

void test_vsseg4e16_v_u16mf2x4_m(vbool32_t mask, uint16_t *base, vuint16mf2x4_t v_tuple, size_t vl) {
  return __riscv_vsseg4e16(mask, base, v_tuple, vl);
}

void test_vsseg4e16_v_u16m1x4_m(vbool16_t mask, uint16_t *base, vuint16m1x4_t v_tuple, size_t vl) {
  return __riscv_vsseg4e16(mask, base, v_tuple, vl);
}

void test_vsseg4e16_v_u16m2x4_m(vbool8_t mask, uint16_t *base, vuint16m2x4_t v_tuple, size_t vl) {
  return __riscv_vsseg4e16(mask, base, v_tuple, vl);
}

/* { dg-final { scan-assembler-times {vseti?vli\s+[a-z0-9]+,\s*[a-z0-9]+,\s*e[0-9]+,\s*mf?[1248],\s*t[au],\s*m[au]\s+vsseg4e16\.[ivxfswum.]+\s+} 16 } } */
