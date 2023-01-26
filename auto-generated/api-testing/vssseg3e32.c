#include <stdint.h>
#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
void test_vssseg3e32_v_f32mf2(float32_t *base, ptrdiff_t bstride, vfloat32mf2_t v0, vfloat32mf2_t v1, vfloat32mf2_t v2, size_t vl) {
  return __riscv_vssseg3e32_v_f32mf2(base, bstride, v0, v1, v2, vl);
}

void test_vssseg3e32_v_f32m1(float32_t *base, ptrdiff_t bstride, vfloat32m1_t v0, vfloat32m1_t v1, vfloat32m1_t v2, size_t vl) {
  return __riscv_vssseg3e32_v_f32m1(base, bstride, v0, v1, v2, vl);
}

void test_vssseg3e32_v_f32m2(float32_t *base, ptrdiff_t bstride, vfloat32m2_t v0, vfloat32m2_t v1, vfloat32m2_t v2, size_t vl) {
  return __riscv_vssseg3e32_v_f32m2(base, bstride, v0, v1, v2, vl);
}

void test_vssseg3e32_v_i32mf2(int32_t *base, ptrdiff_t bstride, vint32mf2_t v0, vint32mf2_t v1, vint32mf2_t v2, size_t vl) {
  return __riscv_vssseg3e32_v_i32mf2(base, bstride, v0, v1, v2, vl);
}

void test_vssseg3e32_v_i32m1(int32_t *base, ptrdiff_t bstride, vint32m1_t v0, vint32m1_t v1, vint32m1_t v2, size_t vl) {
  return __riscv_vssseg3e32_v_i32m1(base, bstride, v0, v1, v2, vl);
}

void test_vssseg3e32_v_i32m2(int32_t *base, ptrdiff_t bstride, vint32m2_t v0, vint32m2_t v1, vint32m2_t v2, size_t vl) {
  return __riscv_vssseg3e32_v_i32m2(base, bstride, v0, v1, v2, vl);
}

void test_vssseg3e32_v_u32mf2(uint32_t *base, ptrdiff_t bstride, vuint32mf2_t v0, vuint32mf2_t v1, vuint32mf2_t v2, size_t vl) {
  return __riscv_vssseg3e32_v_u32mf2(base, bstride, v0, v1, v2, vl);
}

void test_vssseg3e32_v_u32m1(uint32_t *base, ptrdiff_t bstride, vuint32m1_t v0, vuint32m1_t v1, vuint32m1_t v2, size_t vl) {
  return __riscv_vssseg3e32_v_u32m1(base, bstride, v0, v1, v2, vl);
}

void test_vssseg3e32_v_u32m2(uint32_t *base, ptrdiff_t bstride, vuint32m2_t v0, vuint32m2_t v1, vuint32m2_t v2, size_t vl) {
  return __riscv_vssseg3e32_v_u32m2(base, bstride, v0, v1, v2, vl);
}

void test_vssseg3e32_v_f32mf2_m(vbool64_t mask, float32_t *base, ptrdiff_t bstride, vfloat32mf2_t v0, vfloat32mf2_t v1, vfloat32mf2_t v2, size_t vl) {
  return __riscv_vssseg3e32_v_f32mf2_m(mask, base, bstride, v0, v1, v2, vl);
}

void test_vssseg3e32_v_f32m1_m(vbool32_t mask, float32_t *base, ptrdiff_t bstride, vfloat32m1_t v0, vfloat32m1_t v1, vfloat32m1_t v2, size_t vl) {
  return __riscv_vssseg3e32_v_f32m1_m(mask, base, bstride, v0, v1, v2, vl);
}

void test_vssseg3e32_v_f32m2_m(vbool16_t mask, float32_t *base, ptrdiff_t bstride, vfloat32m2_t v0, vfloat32m2_t v1, vfloat32m2_t v2, size_t vl) {
  return __riscv_vssseg3e32_v_f32m2_m(mask, base, bstride, v0, v1, v2, vl);
}

void test_vssseg3e32_v_i32mf2_m(vbool64_t mask, int32_t *base, ptrdiff_t bstride, vint32mf2_t v0, vint32mf2_t v1, vint32mf2_t v2, size_t vl) {
  return __riscv_vssseg3e32_v_i32mf2_m(mask, base, bstride, v0, v1, v2, vl);
}

void test_vssseg3e32_v_i32m1_m(vbool32_t mask, int32_t *base, ptrdiff_t bstride, vint32m1_t v0, vint32m1_t v1, vint32m1_t v2, size_t vl) {
  return __riscv_vssseg3e32_v_i32m1_m(mask, base, bstride, v0, v1, v2, vl);
}

void test_vssseg3e32_v_i32m2_m(vbool16_t mask, int32_t *base, ptrdiff_t bstride, vint32m2_t v0, vint32m2_t v1, vint32m2_t v2, size_t vl) {
  return __riscv_vssseg3e32_v_i32m2_m(mask, base, bstride, v0, v1, v2, vl);
}

void test_vssseg3e32_v_u32mf2_m(vbool64_t mask, uint32_t *base, ptrdiff_t bstride, vuint32mf2_t v0, vuint32mf2_t v1, vuint32mf2_t v2, size_t vl) {
  return __riscv_vssseg3e32_v_u32mf2_m(mask, base, bstride, v0, v1, v2, vl);
}

void test_vssseg3e32_v_u32m1_m(vbool32_t mask, uint32_t *base, ptrdiff_t bstride, vuint32m1_t v0, vuint32m1_t v1, vuint32m1_t v2, size_t vl) {
  return __riscv_vssseg3e32_v_u32m1_m(mask, base, bstride, v0, v1, v2, vl);
}

void test_vssseg3e32_v_u32m2_m(vbool16_t mask, uint32_t *base, ptrdiff_t bstride, vuint32m2_t v0, vuint32m2_t v1, vuint32m2_t v2, size_t vl) {
  return __riscv_vssseg3e32_v_u32m2_m(mask, base, bstride, v0, v1, v2, vl);
}

