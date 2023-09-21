/* { dg-do compile } */
/* { dg-options "-march=rv64gcv_zvfh -mabi=lp64d -Wno-psabi -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
void test_vsseg7e8_v_i8mf8x7(int8_t *base, vint8mf8x7_t v_tuple, size_t vl) {
  return __riscv_vsseg7e8_v_i8mf8x7(base, v_tuple, vl);
}

void test_vsseg7e8_v_i8mf4x7(int8_t *base, vint8mf4x7_t v_tuple, size_t vl) {
  return __riscv_vsseg7e8_v_i8mf4x7(base, v_tuple, vl);
}

void test_vsseg7e8_v_i8mf2x7(int8_t *base, vint8mf2x7_t v_tuple, size_t vl) {
  return __riscv_vsseg7e8_v_i8mf2x7(base, v_tuple, vl);
}

void test_vsseg7e8_v_i8m1x7(int8_t *base, vint8m1x7_t v_tuple, size_t vl) {
  return __riscv_vsseg7e8_v_i8m1x7(base, v_tuple, vl);
}

void test_vsseg7e8_v_u8mf8x7(uint8_t *base, vuint8mf8x7_t v_tuple, size_t vl) {
  return __riscv_vsseg7e8_v_u8mf8x7(base, v_tuple, vl);
}

void test_vsseg7e8_v_u8mf4x7(uint8_t *base, vuint8mf4x7_t v_tuple, size_t vl) {
  return __riscv_vsseg7e8_v_u8mf4x7(base, v_tuple, vl);
}

void test_vsseg7e8_v_u8mf2x7(uint8_t *base, vuint8mf2x7_t v_tuple, size_t vl) {
  return __riscv_vsseg7e8_v_u8mf2x7(base, v_tuple, vl);
}

void test_vsseg7e8_v_u8m1x7(uint8_t *base, vuint8m1x7_t v_tuple, size_t vl) {
  return __riscv_vsseg7e8_v_u8m1x7(base, v_tuple, vl);
}

void test_vsseg7e8_v_i8mf8x7_m(vbool64_t mask, int8_t *base, vint8mf8x7_t v_tuple, size_t vl) {
  return __riscv_vsseg7e8_v_i8mf8x7_m(mask, base, v_tuple, vl);
}

void test_vsseg7e8_v_i8mf4x7_m(vbool32_t mask, int8_t *base, vint8mf4x7_t v_tuple, size_t vl) {
  return __riscv_vsseg7e8_v_i8mf4x7_m(mask, base, v_tuple, vl);
}

void test_vsseg7e8_v_i8mf2x7_m(vbool16_t mask, int8_t *base, vint8mf2x7_t v_tuple, size_t vl) {
  return __riscv_vsseg7e8_v_i8mf2x7_m(mask, base, v_tuple, vl);
}

void test_vsseg7e8_v_i8m1x7_m(vbool8_t mask, int8_t *base, vint8m1x7_t v_tuple, size_t vl) {
  return __riscv_vsseg7e8_v_i8m1x7_m(mask, base, v_tuple, vl);
}

void test_vsseg7e8_v_u8mf8x7_m(vbool64_t mask, uint8_t *base, vuint8mf8x7_t v_tuple, size_t vl) {
  return __riscv_vsseg7e8_v_u8mf8x7_m(mask, base, v_tuple, vl);
}

void test_vsseg7e8_v_u8mf4x7_m(vbool32_t mask, uint8_t *base, vuint8mf4x7_t v_tuple, size_t vl) {
  return __riscv_vsseg7e8_v_u8mf4x7_m(mask, base, v_tuple, vl);
}

void test_vsseg7e8_v_u8mf2x7_m(vbool16_t mask, uint8_t *base, vuint8mf2x7_t v_tuple, size_t vl) {
  return __riscv_vsseg7e8_v_u8mf2x7_m(mask, base, v_tuple, vl);
}

void test_vsseg7e8_v_u8m1x7_m(vbool8_t mask, uint8_t *base, vuint8m1x7_t v_tuple, size_t vl) {
  return __riscv_vsseg7e8_v_u8m1x7_m(mask, base, v_tuple, vl);
}

