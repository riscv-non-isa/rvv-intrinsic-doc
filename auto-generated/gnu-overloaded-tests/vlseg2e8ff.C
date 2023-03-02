/* { dg-do compile } */
/* { dg-options "-march=rv64gcv -mabi=lp64d -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
void test_vlseg2e8ff_v_i8mf8_m(vint8mf8_t *v0, vint8mf8_t *v1, vbool64_t mask, const int8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e8ff(v0, v1, mask, base, new_vl, vl);
}

void test_vlseg2e8ff_v_i8mf4_m(vint8mf4_t *v0, vint8mf4_t *v1, vbool32_t mask, const int8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e8ff(v0, v1, mask, base, new_vl, vl);
}

void test_vlseg2e8ff_v_i8mf2_m(vint8mf2_t *v0, vint8mf2_t *v1, vbool16_t mask, const int8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e8ff(v0, v1, mask, base, new_vl, vl);
}

void test_vlseg2e8ff_v_i8m1_m(vint8m1_t *v0, vint8m1_t *v1, vbool8_t mask, const int8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e8ff(v0, v1, mask, base, new_vl, vl);
}

void test_vlseg2e8ff_v_i8m2_m(vint8m2_t *v0, vint8m2_t *v1, vbool4_t mask, const int8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e8ff(v0, v1, mask, base, new_vl, vl);
}

void test_vlseg2e8ff_v_i8m4_m(vint8m4_t *v0, vint8m4_t *v1, vbool2_t mask, const int8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e8ff(v0, v1, mask, base, new_vl, vl);
}

void test_vlseg2e8ff_v_u8mf8_m(vuint8mf8_t *v0, vuint8mf8_t *v1, vbool64_t mask, const uint8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e8ff(v0, v1, mask, base, new_vl, vl);
}

void test_vlseg2e8ff_v_u8mf4_m(vuint8mf4_t *v0, vuint8mf4_t *v1, vbool32_t mask, const uint8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e8ff(v0, v1, mask, base, new_vl, vl);
}

void test_vlseg2e8ff_v_u8mf2_m(vuint8mf2_t *v0, vuint8mf2_t *v1, vbool16_t mask, const uint8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e8ff(v0, v1, mask, base, new_vl, vl);
}

void test_vlseg2e8ff_v_u8m1_m(vuint8m1_t *v0, vuint8m1_t *v1, vbool8_t mask, const uint8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e8ff(v0, v1, mask, base, new_vl, vl);
}

void test_vlseg2e8ff_v_u8m2_m(vuint8m2_t *v0, vuint8m2_t *v1, vbool4_t mask, const uint8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e8ff(v0, v1, mask, base, new_vl, vl);
}

void test_vlseg2e8ff_v_u8m4_m(vuint8m4_t *v0, vuint8m4_t *v1, vbool2_t mask, const uint8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e8ff(v0, v1, mask, base, new_vl, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*[a-x0-9]+,\s*e[0-9]+,\s*m[f]?[1248],\s*t[au],\s*m[au]\s+vlseg2e8ff\.[,\sa-x0-9()]+} 12 } } */
