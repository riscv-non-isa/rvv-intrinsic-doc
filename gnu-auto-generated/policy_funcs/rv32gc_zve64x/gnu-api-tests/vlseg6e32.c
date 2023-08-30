/* { dg-do compile } */
/* { dg-options "-march=rv32gc_zve64x -mabi=ilp32d -Wno-psabi -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include "riscv_vector.h"

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
vint32mf2x6_t test_vlseg6e32_v_i32mf2x6(const int32_t *base, size_t vl) {
  return __riscv_vlseg6e32_v_i32mf2x6(base, vl);
}

vint32m1x6_t test_vlseg6e32_v_i32m1x6(const int32_t *base, size_t vl) {
  return __riscv_vlseg6e32_v_i32m1x6(base, vl);
}

vuint32mf2x6_t test_vlseg6e32_v_u32mf2x6(const uint32_t *base, size_t vl) {
  return __riscv_vlseg6e32_v_u32mf2x6(base, vl);
}

vuint32m1x6_t test_vlseg6e32_v_u32m1x6(const uint32_t *base, size_t vl) {
  return __riscv_vlseg6e32_v_u32m1x6(base, vl);
}

vint32mf2x6_t test_vlseg6e32_v_i32mf2x6_m(vbool64_t mask, const int32_t *base, size_t vl) {
  return __riscv_vlseg6e32_v_i32mf2x6_m(mask, base, vl);
}

vint32m1x6_t test_vlseg6e32_v_i32m1x6_m(vbool32_t mask, const int32_t *base, size_t vl) {
  return __riscv_vlseg6e32_v_i32m1x6_m(mask, base, vl);
}

vuint32mf2x6_t test_vlseg6e32_v_u32mf2x6_m(vbool64_t mask, const uint32_t *base, size_t vl) {
  return __riscv_vlseg6e32_v_u32mf2x6_m(mask, base, vl);
}

vuint32m1x6_t test_vlseg6e32_v_u32m1x6_m(vbool32_t mask, const uint32_t *base, size_t vl) {
  return __riscv_vlseg6e32_v_u32m1x6_m(mask, base, vl);
}

/* { dg-final { scan-assembler-times {vseti?vli\s+[a-z0-9]+,\s*[a-z0-9]+,\s*e[0-9]+,\s*mf?[1248],\s*t[au],\s*m[au]\s+vlseg6e32\.[ivxfswum.]+\s+} 8 } } */
