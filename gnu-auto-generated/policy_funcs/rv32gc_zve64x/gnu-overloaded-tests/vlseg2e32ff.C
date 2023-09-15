/* { dg-do compile } */
/* { dg-options "-march=rv32gc_zve64x -mabi=ilp32d -Wno-psabi -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include "riscv_vector.h"

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
vint32mf2x2_t test_vlseg2e32ff_v_i32mf2x2_m(vbool64_t mask, const int32_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e32ff(mask, base, new_vl, vl);
}

vint32m1x2_t test_vlseg2e32ff_v_i32m1x2_m(vbool32_t mask, const int32_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e32ff(mask, base, new_vl, vl);
}

vint32m2x2_t test_vlseg2e32ff_v_i32m2x2_m(vbool16_t mask, const int32_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e32ff(mask, base, new_vl, vl);
}

vint32m4x2_t test_vlseg2e32ff_v_i32m4x2_m(vbool8_t mask, const int32_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e32ff(mask, base, new_vl, vl);
}

vuint32mf2x2_t test_vlseg2e32ff_v_u32mf2x2_m(vbool64_t mask, const uint32_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e32ff(mask, base, new_vl, vl);
}

vuint32m1x2_t test_vlseg2e32ff_v_u32m1x2_m(vbool32_t mask, const uint32_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e32ff(mask, base, new_vl, vl);
}

vuint32m2x2_t test_vlseg2e32ff_v_u32m2x2_m(vbool16_t mask, const uint32_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e32ff(mask, base, new_vl, vl);
}

vuint32m4x2_t test_vlseg2e32ff_v_u32m4x2_m(vbool8_t mask, const uint32_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e32ff(mask, base, new_vl, vl);
}

/* { dg-final { scan-assembler-times {vseti?vli\s+[a-z0-9]+,\s*[a-z0-9]+,\s*e[0-9]+,\s*mf?[1248],\s*t[au],\s*m[au]\s+vlseg2e32ff\.[ivxfswum.]+\s+} 8 } } */
