/* { dg-do compile } */
/* { dg-options "-march=rv64gcv -mabi=lp64d -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include <riscv_vector.h>

void test_vlsseg2e32_v_f32mf2(vfloat32mf2_t *v0, vfloat32mf2_t *v1, const float32_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg2e32_v_f32mf2(v0, v1, base, bstride, vl);
}

void test_vlsseg2e32_v_f32m1(vfloat32m1_t *v0, vfloat32m1_t *v1, const float32_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg2e32_v_f32m1(v0, v1, base, bstride, vl);
}

void test_vlsseg2e32_v_f32m2(vfloat32m2_t *v0, vfloat32m2_t *v1, const float32_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg2e32_v_f32m2(v0, v1, base, bstride, vl);
}

void test_vlsseg2e32_v_f32m4(vfloat32m4_t *v0, vfloat32m4_t *v1, const float32_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg2e32_v_f32m4(v0, v1, base, bstride, vl);
}

void test_vlsseg2e32_v_i32mf2(vint32mf2_t *v0, vint32mf2_t *v1, const int32_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg2e32_v_i32mf2(v0, v1, base, bstride, vl);
}

void test_vlsseg2e32_v_i32m1(vint32m1_t *v0, vint32m1_t *v1, const int32_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg2e32_v_i32m1(v0, v1, base, bstride, vl);
}

void test_vlsseg2e32_v_i32m2(vint32m2_t *v0, vint32m2_t *v1, const int32_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg2e32_v_i32m2(v0, v1, base, bstride, vl);
}

void test_vlsseg2e32_v_i32m4(vint32m4_t *v0, vint32m4_t *v1, const int32_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg2e32_v_i32m4(v0, v1, base, bstride, vl);
}

void test_vlsseg2e32_v_u32mf2(vuint32mf2_t *v0, vuint32mf2_t *v1, const uint32_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg2e32_v_u32mf2(v0, v1, base, bstride, vl);
}

void test_vlsseg2e32_v_u32m1(vuint32m1_t *v0, vuint32m1_t *v1, const uint32_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg2e32_v_u32m1(v0, v1, base, bstride, vl);
}

void test_vlsseg2e32_v_u32m2(vuint32m2_t *v0, vuint32m2_t *v1, const uint32_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg2e32_v_u32m2(v0, v1, base, bstride, vl);
}

void test_vlsseg2e32_v_u32m4(vuint32m4_t *v0, vuint32m4_t *v1, const uint32_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg2e32_v_u32m4(v0, v1, base, bstride, vl);
}

void test_vlsseg2e32_v_f32mf2_m(vfloat32mf2_t *v0, vfloat32mf2_t *v1, vbool64_t mask, const float32_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg2e32_v_f32mf2_m(v0, v1, mask, base, bstride, vl);
}

void test_vlsseg2e32_v_f32m1_m(vfloat32m1_t *v0, vfloat32m1_t *v1, vbool32_t mask, const float32_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg2e32_v_f32m1_m(v0, v1, mask, base, bstride, vl);
}

void test_vlsseg2e32_v_f32m2_m(vfloat32m2_t *v0, vfloat32m2_t *v1, vbool16_t mask, const float32_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg2e32_v_f32m2_m(v0, v1, mask, base, bstride, vl);
}

void test_vlsseg2e32_v_f32m4_m(vfloat32m4_t *v0, vfloat32m4_t *v1, vbool8_t mask, const float32_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg2e32_v_f32m4_m(v0, v1, mask, base, bstride, vl);
}

void test_vlsseg2e32_v_i32mf2_m(vint32mf2_t *v0, vint32mf2_t *v1, vbool64_t mask, const int32_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg2e32_v_i32mf2_m(v0, v1, mask, base, bstride, vl);
}

void test_vlsseg2e32_v_i32m1_m(vint32m1_t *v0, vint32m1_t *v1, vbool32_t mask, const int32_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg2e32_v_i32m1_m(v0, v1, mask, base, bstride, vl);
}

void test_vlsseg2e32_v_i32m2_m(vint32m2_t *v0, vint32m2_t *v1, vbool16_t mask, const int32_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg2e32_v_i32m2_m(v0, v1, mask, base, bstride, vl);
}

void test_vlsseg2e32_v_i32m4_m(vint32m4_t *v0, vint32m4_t *v1, vbool8_t mask, const int32_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg2e32_v_i32m4_m(v0, v1, mask, base, bstride, vl);
}

void test_vlsseg2e32_v_u32mf2_m(vuint32mf2_t *v0, vuint32mf2_t *v1, vbool64_t mask, const uint32_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg2e32_v_u32mf2_m(v0, v1, mask, base, bstride, vl);
}

void test_vlsseg2e32_v_u32m1_m(vuint32m1_t *v0, vuint32m1_t *v1, vbool32_t mask, const uint32_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg2e32_v_u32m1_m(v0, v1, mask, base, bstride, vl);
}

void test_vlsseg2e32_v_u32m2_m(vuint32m2_t *v0, vuint32m2_t *v1, vbool16_t mask, const uint32_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg2e32_v_u32m2_m(v0, v1, mask, base, bstride, vl);
}

void test_vlsseg2e32_v_u32m4_m(vuint32m4_t *v0, vuint32m4_t *v1, vbool8_t mask, const uint32_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg2e32_v_u32m4_m(v0, v1, mask, base, bstride, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*[a-x0-9]+,\s*e[0-9]+,\s*m[f]?[1248],\s*t[au],\s*m[au]\s+vlsseg2e32\.[, a-x0-9()]+} 24 } } */
