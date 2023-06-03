#include <stdint.h>
#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
void test_vssseg4e32_v_f32mf2x4(float32_t *base, ptrdiff_t bstride, vfloat32mf2x4_t v_tuple, size_t vl) {
  return __riscv_vssseg4e32_v_f32mf2x4(base, bstride, v_tuple, vl);
}

void test_vssseg4e32_v_f32m1x4(float32_t *base, ptrdiff_t bstride, vfloat32m1x4_t v_tuple, size_t vl) {
  return __riscv_vssseg4e32_v_f32m1x4(base, bstride, v_tuple, vl);
}

void test_vssseg4e32_v_f32m2x4(float32_t *base, ptrdiff_t bstride, vfloat32m2x4_t v_tuple, size_t vl) {
  return __riscv_vssseg4e32_v_f32m2x4(base, bstride, v_tuple, vl);
}

void test_vssseg4e32_v_i32mf2x4(int32_t *base, ptrdiff_t bstride, vint32mf2x4_t v_tuple, size_t vl) {
  return __riscv_vssseg4e32_v_i32mf2x4(base, bstride, v_tuple, vl);
}

void test_vssseg4e32_v_i32m1x4(int32_t *base, ptrdiff_t bstride, vint32m1x4_t v_tuple, size_t vl) {
  return __riscv_vssseg4e32_v_i32m1x4(base, bstride, v_tuple, vl);
}

void test_vssseg4e32_v_i32m2x4(int32_t *base, ptrdiff_t bstride, vint32m2x4_t v_tuple, size_t vl) {
  return __riscv_vssseg4e32_v_i32m2x4(base, bstride, v_tuple, vl);
}

void test_vssseg4e32_v_u32mf2x4(uint32_t *base, ptrdiff_t bstride, vuint32mf2x4_t v_tuple, size_t vl) {
  return __riscv_vssseg4e32_v_u32mf2x4(base, bstride, v_tuple, vl);
}

void test_vssseg4e32_v_u32m1x4(uint32_t *base, ptrdiff_t bstride, vuint32m1x4_t v_tuple, size_t vl) {
  return __riscv_vssseg4e32_v_u32m1x4(base, bstride, v_tuple, vl);
}

void test_vssseg4e32_v_u32m2x4(uint32_t *base, ptrdiff_t bstride, vuint32m2x4_t v_tuple, size_t vl) {
  return __riscv_vssseg4e32_v_u32m2x4(base, bstride, v_tuple, vl);
}

void test_vssseg4e32_v_f32mf2x4_m(vbool64_t mask, float32_t *base, ptrdiff_t bstride, vfloat32mf2x4_t v_tuple, size_t vl) {
  return __riscv_vssseg4e32_v_f32mf2x4_m(mask, base, bstride, v_tuple, vl);
}

void test_vssseg4e32_v_f32m1x4_m(vbool32_t mask, float32_t *base, ptrdiff_t bstride, vfloat32m1x4_t v_tuple, size_t vl) {
  return __riscv_vssseg4e32_v_f32m1x4_m(mask, base, bstride, v_tuple, vl);
}

void test_vssseg4e32_v_f32m2x4_m(vbool16_t mask, float32_t *base, ptrdiff_t bstride, vfloat32m2x4_t v_tuple, size_t vl) {
  return __riscv_vssseg4e32_v_f32m2x4_m(mask, base, bstride, v_tuple, vl);
}

void test_vssseg4e32_v_i32mf2x4_m(vbool64_t mask, int32_t *base, ptrdiff_t bstride, vint32mf2x4_t v_tuple, size_t vl) {
  return __riscv_vssseg4e32_v_i32mf2x4_m(mask, base, bstride, v_tuple, vl);
}

void test_vssseg4e32_v_i32m1x4_m(vbool32_t mask, int32_t *base, ptrdiff_t bstride, vint32m1x4_t v_tuple, size_t vl) {
  return __riscv_vssseg4e32_v_i32m1x4_m(mask, base, bstride, v_tuple, vl);
}

void test_vssseg4e32_v_i32m2x4_m(vbool16_t mask, int32_t *base, ptrdiff_t bstride, vint32m2x4_t v_tuple, size_t vl) {
  return __riscv_vssseg4e32_v_i32m2x4_m(mask, base, bstride, v_tuple, vl);
}

void test_vssseg4e32_v_u32mf2x4_m(vbool64_t mask, uint32_t *base, ptrdiff_t bstride, vuint32mf2x4_t v_tuple, size_t vl) {
  return __riscv_vssseg4e32_v_u32mf2x4_m(mask, base, bstride, v_tuple, vl);
}

void test_vssseg4e32_v_u32m1x4_m(vbool32_t mask, uint32_t *base, ptrdiff_t bstride, vuint32m1x4_t v_tuple, size_t vl) {
  return __riscv_vssseg4e32_v_u32m1x4_m(mask, base, bstride, v_tuple, vl);
}

void test_vssseg4e32_v_u32m2x4_m(vbool16_t mask, uint32_t *base, ptrdiff_t bstride, vuint32m2x4_t v_tuple, size_t vl) {
  return __riscv_vssseg4e32_v_u32m2x4_m(mask, base, bstride, v_tuple, vl);
}

