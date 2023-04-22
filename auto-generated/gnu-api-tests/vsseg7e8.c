/* { dg-do compile } */
/* { dg-options "-march=rv64gcv -mabi=lp64d -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
void test_vsseg7e8_v_i8mf8(int8_t *base, vint8mf8_t v0, vint8mf8_t v1, vint8mf8_t v2, vint8mf8_t v3, vint8mf8_t v4, vint8mf8_t v5, vint8mf8_t v6, size_t vl) {
  return __riscv_vsseg7e8_v_i8mf8(base, v0, v1, v2, v3, v4, v5, v6, vl);
}

void test_vsseg7e8_v_i8mf4(int8_t *base, vint8mf4_t v0, vint8mf4_t v1, vint8mf4_t v2, vint8mf4_t v3, vint8mf4_t v4, vint8mf4_t v5, vint8mf4_t v6, size_t vl) {
  return __riscv_vsseg7e8_v_i8mf4(base, v0, v1, v2, v3, v4, v5, v6, vl);
}

void test_vsseg7e8_v_i8mf2(int8_t *base, vint8mf2_t v0, vint8mf2_t v1, vint8mf2_t v2, vint8mf2_t v3, vint8mf2_t v4, vint8mf2_t v5, vint8mf2_t v6, size_t vl) {
  return __riscv_vsseg7e8_v_i8mf2(base, v0, v1, v2, v3, v4, v5, v6, vl);
}

void test_vsseg7e8_v_i8m1(int8_t *base, vint8m1_t v0, vint8m1_t v1, vint8m1_t v2, vint8m1_t v3, vint8m1_t v4, vint8m1_t v5, vint8m1_t v6, size_t vl) {
  return __riscv_vsseg7e8_v_i8m1(base, v0, v1, v2, v3, v4, v5, v6, vl);
}

void test_vsseg7e8_v_u8mf8(uint8_t *base, vuint8mf8_t v0, vuint8mf8_t v1, vuint8mf8_t v2, vuint8mf8_t v3, vuint8mf8_t v4, vuint8mf8_t v5, vuint8mf8_t v6, size_t vl) {
  return __riscv_vsseg7e8_v_u8mf8(base, v0, v1, v2, v3, v4, v5, v6, vl);
}

void test_vsseg7e8_v_u8mf4(uint8_t *base, vuint8mf4_t v0, vuint8mf4_t v1, vuint8mf4_t v2, vuint8mf4_t v3, vuint8mf4_t v4, vuint8mf4_t v5, vuint8mf4_t v6, size_t vl) {
  return __riscv_vsseg7e8_v_u8mf4(base, v0, v1, v2, v3, v4, v5, v6, vl);
}

void test_vsseg7e8_v_u8mf2(uint8_t *base, vuint8mf2_t v0, vuint8mf2_t v1, vuint8mf2_t v2, vuint8mf2_t v3, vuint8mf2_t v4, vuint8mf2_t v5, vuint8mf2_t v6, size_t vl) {
  return __riscv_vsseg7e8_v_u8mf2(base, v0, v1, v2, v3, v4, v5, v6, vl);
}

void test_vsseg7e8_v_u8m1(uint8_t *base, vuint8m1_t v0, vuint8m1_t v1, vuint8m1_t v2, vuint8m1_t v3, vuint8m1_t v4, vuint8m1_t v5, vuint8m1_t v6, size_t vl) {
  return __riscv_vsseg7e8_v_u8m1(base, v0, v1, v2, v3, v4, v5, v6, vl);
}

void test_vsseg7e8_v_i8mf8_m(vbool64_t mask, int8_t *base, vint8mf8_t v0, vint8mf8_t v1, vint8mf8_t v2, vint8mf8_t v3, vint8mf8_t v4, vint8mf8_t v5, vint8mf8_t v6, size_t vl) {
  return __riscv_vsseg7e8_v_i8mf8_m(mask, base, v0, v1, v2, v3, v4, v5, v6, vl);
}

void test_vsseg7e8_v_i8mf4_m(vbool32_t mask, int8_t *base, vint8mf4_t v0, vint8mf4_t v1, vint8mf4_t v2, vint8mf4_t v3, vint8mf4_t v4, vint8mf4_t v5, vint8mf4_t v6, size_t vl) {
  return __riscv_vsseg7e8_v_i8mf4_m(mask, base, v0, v1, v2, v3, v4, v5, v6, vl);
}

void test_vsseg7e8_v_i8mf2_m(vbool16_t mask, int8_t *base, vint8mf2_t v0, vint8mf2_t v1, vint8mf2_t v2, vint8mf2_t v3, vint8mf2_t v4, vint8mf2_t v5, vint8mf2_t v6, size_t vl) {
  return __riscv_vsseg7e8_v_i8mf2_m(mask, base, v0, v1, v2, v3, v4, v5, v6, vl);
}

void test_vsseg7e8_v_i8m1_m(vbool8_t mask, int8_t *base, vint8m1_t v0, vint8m1_t v1, vint8m1_t v2, vint8m1_t v3, vint8m1_t v4, vint8m1_t v5, vint8m1_t v6, size_t vl) {
  return __riscv_vsseg7e8_v_i8m1_m(mask, base, v0, v1, v2, v3, v4, v5, v6, vl);
}

void test_vsseg7e8_v_u8mf8_m(vbool64_t mask, uint8_t *base, vuint8mf8_t v0, vuint8mf8_t v1, vuint8mf8_t v2, vuint8mf8_t v3, vuint8mf8_t v4, vuint8mf8_t v5, vuint8mf8_t v6, size_t vl) {
  return __riscv_vsseg7e8_v_u8mf8_m(mask, base, v0, v1, v2, v3, v4, v5, v6, vl);
}

void test_vsseg7e8_v_u8mf4_m(vbool32_t mask, uint8_t *base, vuint8mf4_t v0, vuint8mf4_t v1, vuint8mf4_t v2, vuint8mf4_t v3, vuint8mf4_t v4, vuint8mf4_t v5, vuint8mf4_t v6, size_t vl) {
  return __riscv_vsseg7e8_v_u8mf4_m(mask, base, v0, v1, v2, v3, v4, v5, v6, vl);
}

void test_vsseg7e8_v_u8mf2_m(vbool16_t mask, uint8_t *base, vuint8mf2_t v0, vuint8mf2_t v1, vuint8mf2_t v2, vuint8mf2_t v3, vuint8mf2_t v4, vuint8mf2_t v5, vuint8mf2_t v6, size_t vl) {
  return __riscv_vsseg7e8_v_u8mf2_m(mask, base, v0, v1, v2, v3, v4, v5, v6, vl);
}

void test_vsseg7e8_v_u8m1_m(vbool8_t mask, uint8_t *base, vuint8m1_t v0, vuint8m1_t v1, vuint8m1_t v2, vuint8m1_t v3, vuint8m1_t v4, vuint8m1_t v5, vuint8m1_t v6, size_t vl) {
  return __riscv_vsseg7e8_v_u8m1_m(mask, base, v0, v1, v2, v3, v4, v5, v6, vl);
}

/* { dg-final { scan-assembler-times {vseti?vli\s+[a-z0-9]+,\s*[a-z0-9]+,\s*e[0-9]+,\s*mf?[1248],\s*t[au],\s*m[au]\s+vsseg7e8\.[ivxfswum.]+\s+} 16 } } */
