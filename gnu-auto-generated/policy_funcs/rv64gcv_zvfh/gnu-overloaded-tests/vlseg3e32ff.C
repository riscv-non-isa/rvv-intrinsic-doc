/* { dg-do compile } */
/* { dg-options "-march=rv64gcv_zvfh -mabi=lp64d -Wno-psabi -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include "riscv_vector.h"

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
vfloat32mf2x3_t test_vlseg3e32ff_v_f32mf2x3_m(vbool64_t mask, const float32_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg3e32ff(mask, base, new_vl, vl);
}

vfloat32m1x3_t test_vlseg3e32ff_v_f32m1x3_m(vbool32_t mask, const float32_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg3e32ff(mask, base, new_vl, vl);
}

vfloat32m2x3_t test_vlseg3e32ff_v_f32m2x3_m(vbool16_t mask, const float32_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg3e32ff(mask, base, new_vl, vl);
}

vint32mf2x3_t test_vlseg3e32ff_v_i32mf2x3_m(vbool64_t mask, const int32_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg3e32ff(mask, base, new_vl, vl);
}

vint32m1x3_t test_vlseg3e32ff_v_i32m1x3_m(vbool32_t mask, const int32_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg3e32ff(mask, base, new_vl, vl);
}

vint32m2x3_t test_vlseg3e32ff_v_i32m2x3_m(vbool16_t mask, const int32_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg3e32ff(mask, base, new_vl, vl);
}

vuint32mf2x3_t test_vlseg3e32ff_v_u32mf2x3_m(vbool64_t mask, const uint32_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg3e32ff(mask, base, new_vl, vl);
}

vuint32m1x3_t test_vlseg3e32ff_v_u32m1x3_m(vbool32_t mask, const uint32_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg3e32ff(mask, base, new_vl, vl);
}

vuint32m2x3_t test_vlseg3e32ff_v_u32m2x3_m(vbool16_t mask, const uint32_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg3e32ff(mask, base, new_vl, vl);
}

/* { dg-final { scan-assembler-times {vseti?vli\s+[a-z0-9]+,\s*[a-z0-9]+,\s*e[0-9]+,\s*mf?[1248],\s*t[au],\s*m[au]\s+vlseg3e32ff\.[ivxfswum.]+\s+} 9 } } */
