/* { dg-do compile } */
/* { dg-options "-march=rv64gc_zve64d -mabi=lp64d -Wno-psabi -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include "riscv_vector.h"

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
vint16mf4x5_t test_vlseg5e16ff_v_i16mf4x5_m(vbool64_t mask, const int16_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg5e16ff(mask, base, new_vl, vl);
}

vint16mf2x5_t test_vlseg5e16ff_v_i16mf2x5_m(vbool32_t mask, const int16_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg5e16ff(mask, base, new_vl, vl);
}

vint16m1x5_t test_vlseg5e16ff_v_i16m1x5_m(vbool16_t mask, const int16_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg5e16ff(mask, base, new_vl, vl);
}

vuint16mf4x5_t test_vlseg5e16ff_v_u16mf4x5_m(vbool64_t mask, const uint16_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg5e16ff(mask, base, new_vl, vl);
}

vuint16mf2x5_t test_vlseg5e16ff_v_u16mf2x5_m(vbool32_t mask, const uint16_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg5e16ff(mask, base, new_vl, vl);
}

vuint16m1x5_t test_vlseg5e16ff_v_u16m1x5_m(vbool16_t mask, const uint16_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg5e16ff(mask, base, new_vl, vl);
}

/* { dg-final { scan-assembler-times {vseti?vli\s+[a-z0-9]+,\s*[a-z0-9]+,\s*e[0-9]+,\s*mf?[1248],\s*t[au],\s*m[au]\s+vlseg5e16ff\.[ivxfswum.]+\s+} 6 } } */
