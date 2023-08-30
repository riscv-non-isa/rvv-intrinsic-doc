/* { dg-do compile } */
/* { dg-options "-march=rv64gcv -mabi=lp64d -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
void test_vsseg2e8_v_i8mf8x2(int8_t *base, vint8mf8x2_t v_tuple, size_t vl) {
  return __riscv_vsseg2e8_v_i8mf8x2(base, v_tuple, vl);
}

void test_vsseg2e8_v_i8mf4x2(int8_t *base, vint8mf4x2_t v_tuple, size_t vl) {
  return __riscv_vsseg2e8_v_i8mf4x2(base, v_tuple, vl);
}

void test_vsseg2e8_v_i8mf2x2(int8_t *base, vint8mf2x2_t v_tuple, size_t vl) {
  return __riscv_vsseg2e8_v_i8mf2x2(base, v_tuple, vl);
}

void test_vsseg2e8_v_i8m1x2(int8_t *base, vint8m1x2_t v_tuple, size_t vl) {
  return __riscv_vsseg2e8_v_i8m1x2(base, v_tuple, vl);
}

void test_vsseg2e8_v_i8m2x2(int8_t *base, vint8m2x2_t v_tuple, size_t vl) {
  return __riscv_vsseg2e8_v_i8m2x2(base, v_tuple, vl);
}

void test_vsseg2e8_v_i8m4x2(int8_t *base, vint8m4x2_t v_tuple, size_t vl) {
  return __riscv_vsseg2e8_v_i8m4x2(base, v_tuple, vl);
}

void test_vsseg2e8_v_u8mf8x2(uint8_t *base, vuint8mf8x2_t v_tuple, size_t vl) {
  return __riscv_vsseg2e8_v_u8mf8x2(base, v_tuple, vl);
}

void test_vsseg2e8_v_u8mf4x2(uint8_t *base, vuint8mf4x2_t v_tuple, size_t vl) {
  return __riscv_vsseg2e8_v_u8mf4x2(base, v_tuple, vl);
}

void test_vsseg2e8_v_u8mf2x2(uint8_t *base, vuint8mf2x2_t v_tuple, size_t vl) {
  return __riscv_vsseg2e8_v_u8mf2x2(base, v_tuple, vl);
}

void test_vsseg2e8_v_u8m1x2(uint8_t *base, vuint8m1x2_t v_tuple, size_t vl) {
  return __riscv_vsseg2e8_v_u8m1x2(base, v_tuple, vl);
}

void test_vsseg2e8_v_u8m2x2(uint8_t *base, vuint8m2x2_t v_tuple, size_t vl) {
  return __riscv_vsseg2e8_v_u8m2x2(base, v_tuple, vl);
}

void test_vsseg2e8_v_u8m4x2(uint8_t *base, vuint8m4x2_t v_tuple, size_t vl) {
  return __riscv_vsseg2e8_v_u8m4x2(base, v_tuple, vl);
}

void test_vsseg2e8_v_i8mf8x2_m(vbool64_t mask, int8_t *base, vint8mf8x2_t v_tuple, size_t vl) {
  return __riscv_vsseg2e8_v_i8mf8x2_m(mask, base, v_tuple, vl);
}

void test_vsseg2e8_v_i8mf4x2_m(vbool32_t mask, int8_t *base, vint8mf4x2_t v_tuple, size_t vl) {
  return __riscv_vsseg2e8_v_i8mf4x2_m(mask, base, v_tuple, vl);
}

void test_vsseg2e8_v_i8mf2x2_m(vbool16_t mask, int8_t *base, vint8mf2x2_t v_tuple, size_t vl) {
  return __riscv_vsseg2e8_v_i8mf2x2_m(mask, base, v_tuple, vl);
}

void test_vsseg2e8_v_i8m1x2_m(vbool8_t mask, int8_t *base, vint8m1x2_t v_tuple, size_t vl) {
  return __riscv_vsseg2e8_v_i8m1x2_m(mask, base, v_tuple, vl);
}

void test_vsseg2e8_v_i8m2x2_m(vbool4_t mask, int8_t *base, vint8m2x2_t v_tuple, size_t vl) {
  return __riscv_vsseg2e8_v_i8m2x2_m(mask, base, v_tuple, vl);
}

void test_vsseg2e8_v_i8m4x2_m(vbool2_t mask, int8_t *base, vint8m4x2_t v_tuple, size_t vl) {
  return __riscv_vsseg2e8_v_i8m4x2_m(mask, base, v_tuple, vl);
}

void test_vsseg2e8_v_u8mf8x2_m(vbool64_t mask, uint8_t *base, vuint8mf8x2_t v_tuple, size_t vl) {
  return __riscv_vsseg2e8_v_u8mf8x2_m(mask, base, v_tuple, vl);
}

void test_vsseg2e8_v_u8mf4x2_m(vbool32_t mask, uint8_t *base, vuint8mf4x2_t v_tuple, size_t vl) {
  return __riscv_vsseg2e8_v_u8mf4x2_m(mask, base, v_tuple, vl);
}

void test_vsseg2e8_v_u8mf2x2_m(vbool16_t mask, uint8_t *base, vuint8mf2x2_t v_tuple, size_t vl) {
  return __riscv_vsseg2e8_v_u8mf2x2_m(mask, base, v_tuple, vl);
}

void test_vsseg2e8_v_u8m1x2_m(vbool8_t mask, uint8_t *base, vuint8m1x2_t v_tuple, size_t vl) {
  return __riscv_vsseg2e8_v_u8m1x2_m(mask, base, v_tuple, vl);
}

void test_vsseg2e8_v_u8m2x2_m(vbool4_t mask, uint8_t *base, vuint8m2x2_t v_tuple, size_t vl) {
  return __riscv_vsseg2e8_v_u8m2x2_m(mask, base, v_tuple, vl);
}

void test_vsseg2e8_v_u8m4x2_m(vbool2_t mask, uint8_t *base, vuint8m4x2_t v_tuple, size_t vl) {
  return __riscv_vsseg2e8_v_u8m4x2_m(mask, base, v_tuple, vl);
}

/* { dg-final { scan-assembler-times {vseti?vli\s+[a-z0-9]+,\s*[a-z0-9]+,\s*e[0-9]+,\s*mf?[1248],\s*t[au],\s*m[au]\s+vsseg2e8\.[ivxfswum.]+\s+} 24 } } */
