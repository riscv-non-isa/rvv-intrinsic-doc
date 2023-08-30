/* { dg-do compile } */
/* { dg-options "-march=rv64gc_zve64d -mabi=lp64d -Wno-psabi -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include "riscv_vector.h"

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
vint16mf4x2_t test_vlseg2e16_v_i16mf4x2_m(vbool64_t mask, const int16_t *base, size_t vl) {
  return __riscv_vlseg2e16(mask, base, vl);
}

vint16mf2x2_t test_vlseg2e16_v_i16mf2x2_m(vbool32_t mask, const int16_t *base, size_t vl) {
  return __riscv_vlseg2e16(mask, base, vl);
}

vint16m1x2_t test_vlseg2e16_v_i16m1x2_m(vbool16_t mask, const int16_t *base, size_t vl) {
  return __riscv_vlseg2e16(mask, base, vl);
}

vint16m2x2_t test_vlseg2e16_v_i16m2x2_m(vbool8_t mask, const int16_t *base, size_t vl) {
  return __riscv_vlseg2e16(mask, base, vl);
}

vint16m4x2_t test_vlseg2e16_v_i16m4x2_m(vbool4_t mask, const int16_t *base, size_t vl) {
  return __riscv_vlseg2e16(mask, base, vl);
}

vuint16mf4x2_t test_vlseg2e16_v_u16mf4x2_m(vbool64_t mask, const uint16_t *base, size_t vl) {
  return __riscv_vlseg2e16(mask, base, vl);
}

vuint16mf2x2_t test_vlseg2e16_v_u16mf2x2_m(vbool32_t mask, const uint16_t *base, size_t vl) {
  return __riscv_vlseg2e16(mask, base, vl);
}

vuint16m1x2_t test_vlseg2e16_v_u16m1x2_m(vbool16_t mask, const uint16_t *base, size_t vl) {
  return __riscv_vlseg2e16(mask, base, vl);
}

vuint16m2x2_t test_vlseg2e16_v_u16m2x2_m(vbool8_t mask, const uint16_t *base, size_t vl) {
  return __riscv_vlseg2e16(mask, base, vl);
}

vuint16m4x2_t test_vlseg2e16_v_u16m4x2_m(vbool4_t mask, const uint16_t *base, size_t vl) {
  return __riscv_vlseg2e16(mask, base, vl);
}

/* { dg-final { scan-assembler-times {vseti?vli\s+[a-z0-9]+,\s*[a-z0-9]+,\s*e[0-9]+,\s*mf?[1248],\s*t[au],\s*m[au]\s+vlseg2e16\.[ivxfswum.]+\s+} 10 } } */
