/* { dg-do compile } */
/* { dg-options "-march=rv64gcv_zvfh -mabi=lp64d -Wno-psabi -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
vfloat32mf2x3_t test_vlseg3e32_v_f32mf2x3_m(vbool64_t mask, const float32_t *base, size_t vl) {
  return __riscv_vlseg3e32(mask, base, vl);
}

vfloat32m1x3_t test_vlseg3e32_v_f32m1x3_m(vbool32_t mask, const float32_t *base, size_t vl) {
  return __riscv_vlseg3e32(mask, base, vl);
}

vfloat32m2x3_t test_vlseg3e32_v_f32m2x3_m(vbool16_t mask, const float32_t *base, size_t vl) {
  return __riscv_vlseg3e32(mask, base, vl);
}

vint32mf2x3_t test_vlseg3e32_v_i32mf2x3_m(vbool64_t mask, const int32_t *base, size_t vl) {
  return __riscv_vlseg3e32(mask, base, vl);
}

vint32m1x3_t test_vlseg3e32_v_i32m1x3_m(vbool32_t mask, const int32_t *base, size_t vl) {
  return __riscv_vlseg3e32(mask, base, vl);
}

vint32m2x3_t test_vlseg3e32_v_i32m2x3_m(vbool16_t mask, const int32_t *base, size_t vl) {
  return __riscv_vlseg3e32(mask, base, vl);
}

vuint32mf2x3_t test_vlseg3e32_v_u32mf2x3_m(vbool64_t mask, const uint32_t *base, size_t vl) {
  return __riscv_vlseg3e32(mask, base, vl);
}

vuint32m1x3_t test_vlseg3e32_v_u32m1x3_m(vbool32_t mask, const uint32_t *base, size_t vl) {
  return __riscv_vlseg3e32(mask, base, vl);
}

vuint32m2x3_t test_vlseg3e32_v_u32m2x3_m(vbool16_t mask, const uint32_t *base, size_t vl) {
  return __riscv_vlseg3e32(mask, base, vl);
}

