/* { dg-do compile } */
/* { dg-options "-march=rv64gcv_zvfh -mabi=lp64d -Wno-psabi -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
vfloat16mf4x6_t test_vlseg6e16_v_f16mf4x6_m(vbool64_t mask, const float16_t *base, size_t vl) {
  return __riscv_vlseg6e16(mask, base, vl);
}

vfloat16mf2x6_t test_vlseg6e16_v_f16mf2x6_m(vbool32_t mask, const float16_t *base, size_t vl) {
  return __riscv_vlseg6e16(mask, base, vl);
}

vfloat16m1x6_t test_vlseg6e16_v_f16m1x6_m(vbool16_t mask, const float16_t *base, size_t vl) {
  return __riscv_vlseg6e16(mask, base, vl);
}

vint16mf4x6_t test_vlseg6e16_v_i16mf4x6_m(vbool64_t mask, const int16_t *base, size_t vl) {
  return __riscv_vlseg6e16(mask, base, vl);
}

vint16mf2x6_t test_vlseg6e16_v_i16mf2x6_m(vbool32_t mask, const int16_t *base, size_t vl) {
  return __riscv_vlseg6e16(mask, base, vl);
}

vint16m1x6_t test_vlseg6e16_v_i16m1x6_m(vbool16_t mask, const int16_t *base, size_t vl) {
  return __riscv_vlseg6e16(mask, base, vl);
}

vuint16mf4x6_t test_vlseg6e16_v_u16mf4x6_m(vbool64_t mask, const uint16_t *base, size_t vl) {
  return __riscv_vlseg6e16(mask, base, vl);
}

vuint16mf2x6_t test_vlseg6e16_v_u16mf2x6_m(vbool32_t mask, const uint16_t *base, size_t vl) {
  return __riscv_vlseg6e16(mask, base, vl);
}

vuint16m1x6_t test_vlseg6e16_v_u16m1x6_m(vbool16_t mask, const uint16_t *base, size_t vl) {
  return __riscv_vlseg6e16(mask, base, vl);
}

