/* { dg-do compile } */
/* { dg-options "-march=rv64gcv -mabi=lp64d -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include <riscv_vector.h>

void test_vsseg5e32_v_f32mf2(float32_t *base, vfloat32mf2_t v0, vfloat32mf2_t v1, vfloat32mf2_t v2, vfloat32mf2_t v3, vfloat32mf2_t v4, size_t vl) {
  return __riscv_vsseg5e32_v_f32mf2(base, v0, v1, v2, v3, v4, vl);
}

void test_vsseg5e32_v_f32m1(float32_t *base, vfloat32m1_t v0, vfloat32m1_t v1, vfloat32m1_t v2, vfloat32m1_t v3, vfloat32m1_t v4, size_t vl) {
  return __riscv_vsseg5e32_v_f32m1(base, v0, v1, v2, v3, v4, vl);
}

void test_vsseg5e32_v_i32mf2(int32_t *base, vint32mf2_t v0, vint32mf2_t v1, vint32mf2_t v2, vint32mf2_t v3, vint32mf2_t v4, size_t vl) {
  return __riscv_vsseg5e32_v_i32mf2(base, v0, v1, v2, v3, v4, vl);
}

void test_vsseg5e32_v_i32m1(int32_t *base, vint32m1_t v0, vint32m1_t v1, vint32m1_t v2, vint32m1_t v3, vint32m1_t v4, size_t vl) {
  return __riscv_vsseg5e32_v_i32m1(base, v0, v1, v2, v3, v4, vl);
}

void test_vsseg5e32_v_u32mf2(uint32_t *base, vuint32mf2_t v0, vuint32mf2_t v1, vuint32mf2_t v2, vuint32mf2_t v3, vuint32mf2_t v4, size_t vl) {
  return __riscv_vsseg5e32_v_u32mf2(base, v0, v1, v2, v3, v4, vl);
}

void test_vsseg5e32_v_u32m1(uint32_t *base, vuint32m1_t v0, vuint32m1_t v1, vuint32m1_t v2, vuint32m1_t v3, vuint32m1_t v4, size_t vl) {
  return __riscv_vsseg5e32_v_u32m1(base, v0, v1, v2, v3, v4, vl);
}

void test_vsseg5e32_v_f32mf2_m(vbool64_t mask, float32_t *base, vfloat32mf2_t v0, vfloat32mf2_t v1, vfloat32mf2_t v2, vfloat32mf2_t v3, vfloat32mf2_t v4, size_t vl) {
  return __riscv_vsseg5e32_v_f32mf2_m(mask, base, v0, v1, v2, v3, v4, vl);
}

void test_vsseg5e32_v_f32m1_m(vbool32_t mask, float32_t *base, vfloat32m1_t v0, vfloat32m1_t v1, vfloat32m1_t v2, vfloat32m1_t v3, vfloat32m1_t v4, size_t vl) {
  return __riscv_vsseg5e32_v_f32m1_m(mask, base, v0, v1, v2, v3, v4, vl);
}

void test_vsseg5e32_v_i32mf2_m(vbool64_t mask, int32_t *base, vint32mf2_t v0, vint32mf2_t v1, vint32mf2_t v2, vint32mf2_t v3, vint32mf2_t v4, size_t vl) {
  return __riscv_vsseg5e32_v_i32mf2_m(mask, base, v0, v1, v2, v3, v4, vl);
}

void test_vsseg5e32_v_i32m1_m(vbool32_t mask, int32_t *base, vint32m1_t v0, vint32m1_t v1, vint32m1_t v2, vint32m1_t v3, vint32m1_t v4, size_t vl) {
  return __riscv_vsseg5e32_v_i32m1_m(mask, base, v0, v1, v2, v3, v4, vl);
}

void test_vsseg5e32_v_u32mf2_m(vbool64_t mask, uint32_t *base, vuint32mf2_t v0, vuint32mf2_t v1, vuint32mf2_t v2, vuint32mf2_t v3, vuint32mf2_t v4, size_t vl) {
  return __riscv_vsseg5e32_v_u32mf2_m(mask, base, v0, v1, v2, v3, v4, vl);
}

void test_vsseg5e32_v_u32m1_m(vbool32_t mask, uint32_t *base, vuint32m1_t v0, vuint32m1_t v1, vuint32m1_t v2, vuint32m1_t v3, vuint32m1_t v4, size_t vl) {
  return __riscv_vsseg5e32_v_u32m1_m(mask, base, v0, v1, v2, v3, v4, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*[a-x0-9]+,\s*e[0-9]+,\s*m[f]?[1248],\s*t[au],\s*m[au]\s+vsseg5e32\.[, a-x0-9()]+} 12 } } */
