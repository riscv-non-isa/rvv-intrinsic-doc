/* { dg-do compile } */
/* { dg-options "-march=rv64gcv -mabi=lp64d -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include <riscv_vector.h>

void test_vlseg7e8_v_i8mf8(vint8mf8_t *v0, vint8mf8_t *v1, vint8mf8_t *v2, vint8mf8_t *v3, vint8mf8_t *v4, vint8mf8_t *v5, vint8mf8_t *v6, const int8_t *base, size_t vl) {
  return __riscv_vlseg7e8_v_i8mf8(v0, v1, v2, v3, v4, v5, v6, base, vl);
}

void test_vlseg7e8_v_i8mf4(vint8mf4_t *v0, vint8mf4_t *v1, vint8mf4_t *v2, vint8mf4_t *v3, vint8mf4_t *v4, vint8mf4_t *v5, vint8mf4_t *v6, const int8_t *base, size_t vl) {
  return __riscv_vlseg7e8_v_i8mf4(v0, v1, v2, v3, v4, v5, v6, base, vl);
}

void test_vlseg7e8_v_i8mf2(vint8mf2_t *v0, vint8mf2_t *v1, vint8mf2_t *v2, vint8mf2_t *v3, vint8mf2_t *v4, vint8mf2_t *v5, vint8mf2_t *v6, const int8_t *base, size_t vl) {
  return __riscv_vlseg7e8_v_i8mf2(v0, v1, v2, v3, v4, v5, v6, base, vl);
}

void test_vlseg7e8_v_i8m1(vint8m1_t *v0, vint8m1_t *v1, vint8m1_t *v2, vint8m1_t *v3, vint8m1_t *v4, vint8m1_t *v5, vint8m1_t *v6, const int8_t *base, size_t vl) {
  return __riscv_vlseg7e8_v_i8m1(v0, v1, v2, v3, v4, v5, v6, base, vl);
}

void test_vlseg7e8_v_u8mf8(vuint8mf8_t *v0, vuint8mf8_t *v1, vuint8mf8_t *v2, vuint8mf8_t *v3, vuint8mf8_t *v4, vuint8mf8_t *v5, vuint8mf8_t *v6, const uint8_t *base, size_t vl) {
  return __riscv_vlseg7e8_v_u8mf8(v0, v1, v2, v3, v4, v5, v6, base, vl);
}

void test_vlseg7e8_v_u8mf4(vuint8mf4_t *v0, vuint8mf4_t *v1, vuint8mf4_t *v2, vuint8mf4_t *v3, vuint8mf4_t *v4, vuint8mf4_t *v5, vuint8mf4_t *v6, const uint8_t *base, size_t vl) {
  return __riscv_vlseg7e8_v_u8mf4(v0, v1, v2, v3, v4, v5, v6, base, vl);
}

void test_vlseg7e8_v_u8mf2(vuint8mf2_t *v0, vuint8mf2_t *v1, vuint8mf2_t *v2, vuint8mf2_t *v3, vuint8mf2_t *v4, vuint8mf2_t *v5, vuint8mf2_t *v6, const uint8_t *base, size_t vl) {
  return __riscv_vlseg7e8_v_u8mf2(v0, v1, v2, v3, v4, v5, v6, base, vl);
}

void test_vlseg7e8_v_u8m1(vuint8m1_t *v0, vuint8m1_t *v1, vuint8m1_t *v2, vuint8m1_t *v3, vuint8m1_t *v4, vuint8m1_t *v5, vuint8m1_t *v6, const uint8_t *base, size_t vl) {
  return __riscv_vlseg7e8_v_u8m1(v0, v1, v2, v3, v4, v5, v6, base, vl);
}

void test_vlseg7e8_v_i8mf8_m(vint8mf8_t *v0, vint8mf8_t *v1, vint8mf8_t *v2, vint8mf8_t *v3, vint8mf8_t *v4, vint8mf8_t *v5, vint8mf8_t *v6, vbool64_t mask, const int8_t *base, size_t vl) {
  return __riscv_vlseg7e8_v_i8mf8_m(v0, v1, v2, v3, v4, v5, v6, mask, base, vl);
}

void test_vlseg7e8_v_i8mf4_m(vint8mf4_t *v0, vint8mf4_t *v1, vint8mf4_t *v2, vint8mf4_t *v3, vint8mf4_t *v4, vint8mf4_t *v5, vint8mf4_t *v6, vbool32_t mask, const int8_t *base, size_t vl) {
  return __riscv_vlseg7e8_v_i8mf4_m(v0, v1, v2, v3, v4, v5, v6, mask, base, vl);
}

void test_vlseg7e8_v_i8mf2_m(vint8mf2_t *v0, vint8mf2_t *v1, vint8mf2_t *v2, vint8mf2_t *v3, vint8mf2_t *v4, vint8mf2_t *v5, vint8mf2_t *v6, vbool16_t mask, const int8_t *base, size_t vl) {
  return __riscv_vlseg7e8_v_i8mf2_m(v0, v1, v2, v3, v4, v5, v6, mask, base, vl);
}

void test_vlseg7e8_v_i8m1_m(vint8m1_t *v0, vint8m1_t *v1, vint8m1_t *v2, vint8m1_t *v3, vint8m1_t *v4, vint8m1_t *v5, vint8m1_t *v6, vbool8_t mask, const int8_t *base, size_t vl) {
  return __riscv_vlseg7e8_v_i8m1_m(v0, v1, v2, v3, v4, v5, v6, mask, base, vl);
}

void test_vlseg7e8_v_u8mf8_m(vuint8mf8_t *v0, vuint8mf8_t *v1, vuint8mf8_t *v2, vuint8mf8_t *v3, vuint8mf8_t *v4, vuint8mf8_t *v5, vuint8mf8_t *v6, vbool64_t mask, const uint8_t *base, size_t vl) {
  return __riscv_vlseg7e8_v_u8mf8_m(v0, v1, v2, v3, v4, v5, v6, mask, base, vl);
}

void test_vlseg7e8_v_u8mf4_m(vuint8mf4_t *v0, vuint8mf4_t *v1, vuint8mf4_t *v2, vuint8mf4_t *v3, vuint8mf4_t *v4, vuint8mf4_t *v5, vuint8mf4_t *v6, vbool32_t mask, const uint8_t *base, size_t vl) {
  return __riscv_vlseg7e8_v_u8mf4_m(v0, v1, v2, v3, v4, v5, v6, mask, base, vl);
}

void test_vlseg7e8_v_u8mf2_m(vuint8mf2_t *v0, vuint8mf2_t *v1, vuint8mf2_t *v2, vuint8mf2_t *v3, vuint8mf2_t *v4, vuint8mf2_t *v5, vuint8mf2_t *v6, vbool16_t mask, const uint8_t *base, size_t vl) {
  return __riscv_vlseg7e8_v_u8mf2_m(v0, v1, v2, v3, v4, v5, v6, mask, base, vl);
}

void test_vlseg7e8_v_u8m1_m(vuint8m1_t *v0, vuint8m1_t *v1, vuint8m1_t *v2, vuint8m1_t *v3, vuint8m1_t *v4, vuint8m1_t *v5, vuint8m1_t *v6, vbool8_t mask, const uint8_t *base, size_t vl) {
  return __riscv_vlseg7e8_v_u8m1_m(v0, v1, v2, v3, v4, v5, v6, mask, base, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*[a-x0-9]+,\s*e[0-9]+,\s*m[f]?[1248],\s*t[au],\s*m[au]\s+vlseg7e8\.[, a-x0-9()]+} 16 } } */
