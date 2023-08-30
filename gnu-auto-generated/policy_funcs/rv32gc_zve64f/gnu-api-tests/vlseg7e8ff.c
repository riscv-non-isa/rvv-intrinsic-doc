/* { dg-do compile } */
/* { dg-options "-march=rv32gc_zve64f -mabi=ilp32d -Wno-psabi -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include "riscv_vector.h"

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
vint8mf8x7_t test_vlseg7e8ff_v_i8mf8x7(const int8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg7e8ff_v_i8mf8x7(base, new_vl, vl);
}

vint8mf4x7_t test_vlseg7e8ff_v_i8mf4x7(const int8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg7e8ff_v_i8mf4x7(base, new_vl, vl);
}

vint8mf2x7_t test_vlseg7e8ff_v_i8mf2x7(const int8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg7e8ff_v_i8mf2x7(base, new_vl, vl);
}

vint8m1x7_t test_vlseg7e8ff_v_i8m1x7(const int8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg7e8ff_v_i8m1x7(base, new_vl, vl);
}

vuint8mf8x7_t test_vlseg7e8ff_v_u8mf8x7(const uint8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg7e8ff_v_u8mf8x7(base, new_vl, vl);
}

vuint8mf4x7_t test_vlseg7e8ff_v_u8mf4x7(const uint8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg7e8ff_v_u8mf4x7(base, new_vl, vl);
}

vuint8mf2x7_t test_vlseg7e8ff_v_u8mf2x7(const uint8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg7e8ff_v_u8mf2x7(base, new_vl, vl);
}

vuint8m1x7_t test_vlseg7e8ff_v_u8m1x7(const uint8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg7e8ff_v_u8m1x7(base, new_vl, vl);
}

vint8mf8x7_t test_vlseg7e8ff_v_i8mf8x7_m(vbool64_t mask, const int8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg7e8ff_v_i8mf8x7_m(mask, base, new_vl, vl);
}

vint8mf4x7_t test_vlseg7e8ff_v_i8mf4x7_m(vbool32_t mask, const int8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg7e8ff_v_i8mf4x7_m(mask, base, new_vl, vl);
}

vint8mf2x7_t test_vlseg7e8ff_v_i8mf2x7_m(vbool16_t mask, const int8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg7e8ff_v_i8mf2x7_m(mask, base, new_vl, vl);
}

vint8m1x7_t test_vlseg7e8ff_v_i8m1x7_m(vbool8_t mask, const int8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg7e8ff_v_i8m1x7_m(mask, base, new_vl, vl);
}

vuint8mf8x7_t test_vlseg7e8ff_v_u8mf8x7_m(vbool64_t mask, const uint8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg7e8ff_v_u8mf8x7_m(mask, base, new_vl, vl);
}

vuint8mf4x7_t test_vlseg7e8ff_v_u8mf4x7_m(vbool32_t mask, const uint8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg7e8ff_v_u8mf4x7_m(mask, base, new_vl, vl);
}

vuint8mf2x7_t test_vlseg7e8ff_v_u8mf2x7_m(vbool16_t mask, const uint8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg7e8ff_v_u8mf2x7_m(mask, base, new_vl, vl);
}

vuint8m1x7_t test_vlseg7e8ff_v_u8m1x7_m(vbool8_t mask, const uint8_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg7e8ff_v_u8m1x7_m(mask, base, new_vl, vl);
}

/* { dg-final { scan-assembler-times {vseti?vli\s+[a-z0-9]+,\s*[a-z0-9]+,\s*e[0-9]+,\s*mf?[1248],\s*t[au],\s*m[au]\s+vlseg7e8ff\.[ivxfswum.]+\s+} 16 } } */
