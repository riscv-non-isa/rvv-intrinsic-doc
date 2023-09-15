/* { dg-do compile } */
/* { dg-options "-march=rv32gc_zve64x -mabi=ilp32d -Wno-psabi -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include "riscv_vector.h"

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
void test_vsm_v_b1(uint8_t *base, vbool1_t value, size_t vl) {
  return __riscv_vsm(base, value, vl);
}

void test_vsm_v_b2(uint8_t *base, vbool2_t value, size_t vl) {
  return __riscv_vsm(base, value, vl);
}

void test_vsm_v_b4(uint8_t *base, vbool4_t value, size_t vl) {
  return __riscv_vsm(base, value, vl);
}

void test_vsm_v_b8(uint8_t *base, vbool8_t value, size_t vl) {
  return __riscv_vsm(base, value, vl);
}

void test_vsm_v_b16(uint8_t *base, vbool16_t value, size_t vl) {
  return __riscv_vsm(base, value, vl);
}

void test_vsm_v_b32(uint8_t *base, vbool32_t value, size_t vl) {
  return __riscv_vsm(base, value, vl);
}

void test_vsm_v_b64(uint8_t *base, vbool64_t value, size_t vl) {
  return __riscv_vsm(base, value, vl);
}

/* { dg-final { scan-assembler-times {vseti?vli\s+[a-z0-9]+,\s*[a-z0-9]+,\s*e[0-9]+,\s*mf?[1248],\s*t[au],\s*m[au]\s+vsm\.[ivxfswum.]+\s+} 7 } } */
