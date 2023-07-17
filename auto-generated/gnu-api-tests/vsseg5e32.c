/* { dg-do compile } */
/* { dg-options "-march=rv64gcv -mabi=lp64d -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
void test_vsseg5e32_v_f32mf2x5(float32_t *base, vfloat32mf2x5_t v_tuple, size_t vl) {
  return __riscv_vsseg5e32_v_f32mf2x5(base, v_tuple, vl);
}

void test_vsseg5e32_v_f32m1x5(float32_t *base, vfloat32m1x5_t v_tuple, size_t vl) {
  return __riscv_vsseg5e32_v_f32m1x5(base, v_tuple, vl);
}

void test_vsseg5e32_v_i32mf2x5(int32_t *base, vint32mf2x5_t v_tuple, size_t vl) {
  return __riscv_vsseg5e32_v_i32mf2x5(base, v_tuple, vl);
}

void test_vsseg5e32_v_i32m1x5(int32_t *base, vint32m1x5_t v_tuple, size_t vl) {
  return __riscv_vsseg5e32_v_i32m1x5(base, v_tuple, vl);
}

void test_vsseg5e32_v_u32mf2x5(uint32_t *base, vuint32mf2x5_t v_tuple, size_t vl) {
  return __riscv_vsseg5e32_v_u32mf2x5(base, v_tuple, vl);
}

void test_vsseg5e32_v_u32m1x5(uint32_t *base, vuint32m1x5_t v_tuple, size_t vl) {
  return __riscv_vsseg5e32_v_u32m1x5(base, v_tuple, vl);
}

void test_vsseg5e32_v_f32mf2x5_m(vbool64_t mask, float32_t *base, vfloat32mf2x5_t v_tuple, size_t vl) {
  return __riscv_vsseg5e32_v_f32mf2x5_m(mask, base, v_tuple, vl);
}

void test_vsseg5e32_v_f32m1x5_m(vbool32_t mask, float32_t *base, vfloat32m1x5_t v_tuple, size_t vl) {
  return __riscv_vsseg5e32_v_f32m1x5_m(mask, base, v_tuple, vl);
}

void test_vsseg5e32_v_i32mf2x5_m(vbool64_t mask, int32_t *base, vint32mf2x5_t v_tuple, size_t vl) {
  return __riscv_vsseg5e32_v_i32mf2x5_m(mask, base, v_tuple, vl);
}

void test_vsseg5e32_v_i32m1x5_m(vbool32_t mask, int32_t *base, vint32m1x5_t v_tuple, size_t vl) {
  return __riscv_vsseg5e32_v_i32m1x5_m(mask, base, v_tuple, vl);
}

void test_vsseg5e32_v_u32mf2x5_m(vbool64_t mask, uint32_t *base, vuint32mf2x5_t v_tuple, size_t vl) {
  return __riscv_vsseg5e32_v_u32mf2x5_m(mask, base, v_tuple, vl);
}

void test_vsseg5e32_v_u32m1x5_m(vbool32_t mask, uint32_t *base, vuint32m1x5_t v_tuple, size_t vl) {
  return __riscv_vsseg5e32_v_u32m1x5_m(mask, base, v_tuple, vl);
}

/* { dg-final { scan-assembler-times {vseti?vli\s+[a-z0-9]+,\s*[a-z0-9]+,\s*e[0-9]+,\s*mf?[1248],\s*t[au],\s*m[au]\s+vsseg5e32\.[ivxfswum.]+\s+} 12 } } */