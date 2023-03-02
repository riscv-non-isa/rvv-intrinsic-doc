/* { dg-do compile } */
/* { dg-options "-march=rv64gcv -mabi=lp64d -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
vint16mf4_t test_vle16_v_i16mf4_m(vbool64_t mask, const int16_t *base, size_t vl) {
  return __riscv_vle16(mask, base, vl);
}

vint16mf2_t test_vle16_v_i16mf2_m(vbool32_t mask, const int16_t *base, size_t vl) {
  return __riscv_vle16(mask, base, vl);
}

vint16m1_t test_vle16_v_i16m1_m(vbool16_t mask, const int16_t *base, size_t vl) {
  return __riscv_vle16(mask, base, vl);
}

vint16m2_t test_vle16_v_i16m2_m(vbool8_t mask, const int16_t *base, size_t vl) {
  return __riscv_vle16(mask, base, vl);
}

vint16m4_t test_vle16_v_i16m4_m(vbool4_t mask, const int16_t *base, size_t vl) {
  return __riscv_vle16(mask, base, vl);
}

vint16m8_t test_vle16_v_i16m8_m(vbool2_t mask, const int16_t *base, size_t vl) {
  return __riscv_vle16(mask, base, vl);
}

vuint16mf4_t test_vle16_v_u16mf4_m(vbool64_t mask, const uint16_t *base, size_t vl) {
  return __riscv_vle16(mask, base, vl);
}

vuint16mf2_t test_vle16_v_u16mf2_m(vbool32_t mask, const uint16_t *base, size_t vl) {
  return __riscv_vle16(mask, base, vl);
}

vuint16m1_t test_vle16_v_u16m1_m(vbool16_t mask, const uint16_t *base, size_t vl) {
  return __riscv_vle16(mask, base, vl);
}

vuint16m2_t test_vle16_v_u16m2_m(vbool8_t mask, const uint16_t *base, size_t vl) {
  return __riscv_vle16(mask, base, vl);
}

vuint16m4_t test_vle16_v_u16m4_m(vbool4_t mask, const uint16_t *base, size_t vl) {
  return __riscv_vle16(mask, base, vl);
}

vuint16m8_t test_vle16_v_u16m8_m(vbool2_t mask, const uint16_t *base, size_t vl) {
  return __riscv_vle16(mask, base, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*[a-x0-9]+,\s*e[0-9]+,\s*m[f]?[1248],\s*t[au],\s*m[au]\s+vle16\.[,\sa-x0-9()]+} 12 } } */
