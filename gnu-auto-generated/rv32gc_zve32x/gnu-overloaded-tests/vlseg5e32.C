/* { dg-do compile } */
/* { dg-options "-march=rv32gc_zve32x -mabi=ilp32d -Wno-psabi -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include "riscv_vector.h"

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
vint32m1x5_t test_vlseg5e32_v_i32m1x5_m(vbool32_t mask, const int32_t *base, size_t vl) {
  return __riscv_vlseg5e32(mask, base, vl);
}

vuint32m1x5_t test_vlseg5e32_v_u32m1x5_m(vbool32_t mask, const uint32_t *base, size_t vl) {
  return __riscv_vlseg5e32(mask, base, vl);
}

/* { dg-final { scan-assembler-times {vseti?vli\s+[a-z0-9]+,\s*[a-z0-9]+,\s*e[0-9]+,\s*mf?[1248],\s*t[au],\s*m[au]\s+vlseg5e32\.[ivxfswum.]+\s+} 2 } } */
