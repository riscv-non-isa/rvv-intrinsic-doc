/* { dg-do compile } */
/* { dg-options "-march=rv64gcv -mabi=lp64d -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
void test_vlseg3e8ff_v_i8mf8(vint8mf8_t *v0, vint8mf8_t *v1, vint8mf8_t *v2, const int8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg3e8ff_v_i8mf8(v0, v1, v2, base, new_vl, vl);
}

void test_vlseg3e8ff_v_i8mf4(vint8mf4_t *v0, vint8mf4_t *v1, vint8mf4_t *v2, const int8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg3e8ff_v_i8mf4(v0, v1, v2, base, new_vl, vl);
}

void test_vlseg3e8ff_v_i8mf2(vint8mf2_t *v0, vint8mf2_t *v1, vint8mf2_t *v2, const int8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg3e8ff_v_i8mf2(v0, v1, v2, base, new_vl, vl);
}

void test_vlseg3e8ff_v_i8m1(vint8m1_t *v0, vint8m1_t *v1, vint8m1_t *v2, const int8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg3e8ff_v_i8m1(v0, v1, v2, base, new_vl, vl);
}

void test_vlseg3e8ff_v_i8m2(vint8m2_t *v0, vint8m2_t *v1, vint8m2_t *v2, const int8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg3e8ff_v_i8m2(v0, v1, v2, base, new_vl, vl);
}

void test_vlseg3e8ff_v_u8mf8(vuint8mf8_t *v0, vuint8mf8_t *v1, vuint8mf8_t *v2, const uint8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg3e8ff_v_u8mf8(v0, v1, v2, base, new_vl, vl);
}

void test_vlseg3e8ff_v_u8mf4(vuint8mf4_t *v0, vuint8mf4_t *v1, vuint8mf4_t *v2, const uint8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg3e8ff_v_u8mf4(v0, v1, v2, base, new_vl, vl);
}

void test_vlseg3e8ff_v_u8mf2(vuint8mf2_t *v0, vuint8mf2_t *v1, vuint8mf2_t *v2, const uint8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg3e8ff_v_u8mf2(v0, v1, v2, base, new_vl, vl);
}

void test_vlseg3e8ff_v_u8m1(vuint8m1_t *v0, vuint8m1_t *v1, vuint8m1_t *v2, const uint8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg3e8ff_v_u8m1(v0, v1, v2, base, new_vl, vl);
}

void test_vlseg3e8ff_v_u8m2(vuint8m2_t *v0, vuint8m2_t *v1, vuint8m2_t *v2, const uint8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg3e8ff_v_u8m2(v0, v1, v2, base, new_vl, vl);
}

void test_vlseg3e8ff_v_i8mf8_m(vint8mf8_t *v0, vint8mf8_t *v1, vint8mf8_t *v2, vbool64_t mask, const int8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg3e8ff_v_i8mf8_m(v0, v1, v2, mask, base, new_vl, vl);
}

void test_vlseg3e8ff_v_i8mf4_m(vint8mf4_t *v0, vint8mf4_t *v1, vint8mf4_t *v2, vbool32_t mask, const int8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg3e8ff_v_i8mf4_m(v0, v1, v2, mask, base, new_vl, vl);
}

void test_vlseg3e8ff_v_i8mf2_m(vint8mf2_t *v0, vint8mf2_t *v1, vint8mf2_t *v2, vbool16_t mask, const int8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg3e8ff_v_i8mf2_m(v0, v1, v2, mask, base, new_vl, vl);
}

void test_vlseg3e8ff_v_i8m1_m(vint8m1_t *v0, vint8m1_t *v1, vint8m1_t *v2, vbool8_t mask, const int8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg3e8ff_v_i8m1_m(v0, v1, v2, mask, base, new_vl, vl);
}

void test_vlseg3e8ff_v_i8m2_m(vint8m2_t *v0, vint8m2_t *v1, vint8m2_t *v2, vbool4_t mask, const int8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg3e8ff_v_i8m2_m(v0, v1, v2, mask, base, new_vl, vl);
}

void test_vlseg3e8ff_v_u8mf8_m(vuint8mf8_t *v0, vuint8mf8_t *v1, vuint8mf8_t *v2, vbool64_t mask, const uint8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg3e8ff_v_u8mf8_m(v0, v1, v2, mask, base, new_vl, vl);
}

void test_vlseg3e8ff_v_u8mf4_m(vuint8mf4_t *v0, vuint8mf4_t *v1, vuint8mf4_t *v2, vbool32_t mask, const uint8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg3e8ff_v_u8mf4_m(v0, v1, v2, mask, base, new_vl, vl);
}

void test_vlseg3e8ff_v_u8mf2_m(vuint8mf2_t *v0, vuint8mf2_t *v1, vuint8mf2_t *v2, vbool16_t mask, const uint8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg3e8ff_v_u8mf2_m(v0, v1, v2, mask, base, new_vl, vl);
}

void test_vlseg3e8ff_v_u8m1_m(vuint8m1_t *v0, vuint8m1_t *v1, vuint8m1_t *v2, vbool8_t mask, const uint8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg3e8ff_v_u8m1_m(v0, v1, v2, mask, base, new_vl, vl);
}

void test_vlseg3e8ff_v_u8m2_m(vuint8m2_t *v0, vuint8m2_t *v1, vuint8m2_t *v2, vbool4_t mask, const uint8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg3e8ff_v_u8m2_m(v0, v1, v2, mask, base, new_vl, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*[a-x0-9]+,\s*e[0-9]+,\s*m[f]?[1248],\s*t[au],\s*m[au]\s+vlseg3e8ff\.[,\sa-x0-9()]+} 20 } } */
