/* { dg-do compile } */
/* { dg-options "-march=rv32gc_zve32x -mabi=ilp32d -Wno-psabi -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include "riscv_vector.h"

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
void test_vsseg6e32_v_i32m1x6(int32_t *base, vint32m1x6_t v_tuple, size_t vl) {
  return __riscv_vsseg6e32(base, v_tuple, vl);
}

void test_vsseg6e32_v_u32m1x6(uint32_t *base, vuint32m1x6_t v_tuple, size_t vl) {
  return __riscv_vsseg6e32(base, v_tuple, vl);
}

void test_vsseg6e32_v_i32m1x6_m(vbool32_t mask, int32_t *base, vint32m1x6_t v_tuple, size_t vl) {
  return __riscv_vsseg6e32(mask, base, v_tuple, vl);
}

void test_vsseg6e32_v_u32m1x6_m(vbool32_t mask, uint32_t *base, vuint32m1x6_t v_tuple, size_t vl) {
  return __riscv_vsseg6e32(mask, base, v_tuple, vl);
}

/* { dg-final { scan-assembler-times {vseti?vli\s+[a-z0-9]+,\s*[a-z0-9]+,\s*e[0-9]+,\s*mf?[1248],\s*t[au],\s*m[au]\s+vsseg6e32\.[ivxfswum.]+\s+} 4 } } */
