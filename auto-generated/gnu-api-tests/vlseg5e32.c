/* { dg-do compile } */
/* { dg-options "-march=rv64gcv -mabi=lp64d -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
vfloat32mf2x5_t test_vlseg5e32_v_f32mf2x5(const float32_t *base, size_t vl) {
  return __riscv_vlseg5e32_v_f32mf2x5(base, vl);
}

vfloat32m1x5_t test_vlseg5e32_v_f32m1x5(const float32_t *base, size_t vl) {
  return __riscv_vlseg5e32_v_f32m1x5(base, vl);
}

vint32mf2x5_t test_vlseg5e32_v_i32mf2x5(const int32_t *base, size_t vl) {
  return __riscv_vlseg5e32_v_i32mf2x5(base, vl);
}

vint32m1x5_t test_vlseg5e32_v_i32m1x5(const int32_t *base, size_t vl) {
  return __riscv_vlseg5e32_v_i32m1x5(base, vl);
}

vuint32mf2x5_t test_vlseg5e32_v_u32mf2x5(const uint32_t *base, size_t vl) {
  return __riscv_vlseg5e32_v_u32mf2x5(base, vl);
}

vuint32m1x5_t test_vlseg5e32_v_u32m1x5(const uint32_t *base, size_t vl) {
  return __riscv_vlseg5e32_v_u32m1x5(base, vl);
}

vfloat32mf2x5_t test_vlseg5e32_v_f32mf2x5_m(vbool64_t mask, const float32_t *base, size_t vl) {
  return __riscv_vlseg5e32_v_f32mf2x5_m(mask, base, vl);
}

vfloat32m1x5_t test_vlseg5e32_v_f32m1x5_m(vbool32_t mask, const float32_t *base, size_t vl) {
  return __riscv_vlseg5e32_v_f32m1x5_m(mask, base, vl);
}

vint32mf2x5_t test_vlseg5e32_v_i32mf2x5_m(vbool64_t mask, const int32_t *base, size_t vl) {
  return __riscv_vlseg5e32_v_i32mf2x5_m(mask, base, vl);
}

vint32m1x5_t test_vlseg5e32_v_i32m1x5_m(vbool32_t mask, const int32_t *base, size_t vl) {
  return __riscv_vlseg5e32_v_i32m1x5_m(mask, base, vl);
}

vuint32mf2x5_t test_vlseg5e32_v_u32mf2x5_m(vbool64_t mask, const uint32_t *base, size_t vl) {
  return __riscv_vlseg5e32_v_u32mf2x5_m(mask, base, vl);
}

vuint32m1x5_t test_vlseg5e32_v_u32m1x5_m(vbool32_t mask, const uint32_t *base, size_t vl) {
  return __riscv_vlseg5e32_v_u32m1x5_m(mask, base, vl);
}

/* { dg-final { scan-assembler-times {vseti?vli\s+[a-z0-9]+,\s*[a-z0-9]+,\s*e[0-9]+,\s*mf?[1248],\s*t[au],\s*m[au]\s+vlseg5e32\.[ivxfswum.]+\s+} 12 } } */
