/* { dg-do compile } */
/* { dg-options "-march=rv64gcv -mabi=lp64d -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include <riscv_vector.h>

void test_vse16_v_f16mf4(float16_t *base, vfloat16mf4_t value, size_t vl) {
  return __riscv_vse16_v_f16mf4(base, value, vl);
}

void test_vse16_v_f16mf2(float16_t *base, vfloat16mf2_t value, size_t vl) {
  return __riscv_vse16_v_f16mf2(base, value, vl);
}

void test_vse16_v_f16m1(float16_t *base, vfloat16m1_t value, size_t vl) {
  return __riscv_vse16_v_f16m1(base, value, vl);
}

void test_vse16_v_f16m2(float16_t *base, vfloat16m2_t value, size_t vl) {
  return __riscv_vse16_v_f16m2(base, value, vl);
}

void test_vse16_v_f16m4(float16_t *base, vfloat16m4_t value, size_t vl) {
  return __riscv_vse16_v_f16m4(base, value, vl);
}

void test_vse16_v_f16m8(float16_t *base, vfloat16m8_t value, size_t vl) {
  return __riscv_vse16_v_f16m8(base, value, vl);
}

void test_vse16_v_i16mf4(int16_t *base, vint16mf4_t value, size_t vl) {
  return __riscv_vse16_v_i16mf4(base, value, vl);
}

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

void test_vse16_v_u16mf4(uint16_t *base, vuint16mf4_t value, size_t vl) {
  return __riscv_vse16_v_u16mf4(base, value, vl);
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

void test_vse16_v_f16mf4_m(vbool64_t mask, float16_t *base, vfloat16mf4_t value, size_t vl) {
  return __riscv_vse16_v_f16mf4_m(mask, base, value, vl);
}

void test_vse16_v_f16mf2_m(vbool32_t mask, float16_t *base, vfloat16mf2_t value, size_t vl) {
  return __riscv_vse16_v_f16mf2_m(mask, base, value, vl);
}

void test_vse16_v_f16m1_m(vbool16_t mask, float16_t *base, vfloat16m1_t value, size_t vl) {
  return __riscv_vse16_v_f16m1_m(mask, base, value, vl);
}

void test_vse16_v_f16m2_m(vbool8_t mask, float16_t *base, vfloat16m2_t value, size_t vl) {
  return __riscv_vse16_v_f16m2_m(mask, base, value, vl);
}

void test_vse16_v_f16m4_m(vbool4_t mask, float16_t *base, vfloat16m4_t value, size_t vl) {
  return __riscv_vse16_v_f16m4_m(mask, base, value, vl);
}

void test_vse16_v_f16m8_m(vbool2_t mask, float16_t *base, vfloat16m8_t value, size_t vl) {
  return __riscv_vse16_v_f16m8_m(mask, base, value, vl);
}

void test_vse16_v_i16mf4_m(vbool64_t mask, int16_t *base, vint16mf4_t value, size_t vl) {
  return __riscv_vse16_v_i16mf4_m(mask, base, value, vl);
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

void test_vse16_v_u16mf4_m(vbool64_t mask, uint16_t *base, vuint16mf4_t value, size_t vl) {
  return __riscv_vse16_v_u16mf4_m(mask, base, value, vl);
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

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*[a-x0-9]+,\s*e[0-9]+,\s*m[f]?[1248],\s*t[au],\s*m[au]\s+vse16\.[, a-x0-9()]+} 36 } } */
