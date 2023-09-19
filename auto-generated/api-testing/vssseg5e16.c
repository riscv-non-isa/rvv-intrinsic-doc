#include <riscv_vector.h>
#include <stdint.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
void test_vssseg5e16_v_f16mf4x5(float16_t *base, ptrdiff_t bstride,
                                vfloat16mf4x5_t v_tuple, size_t vl) {
  return __riscv_vssseg5e16_v_f16mf4x5(base, bstride, v_tuple, vl);
}

void test_vssseg5e16_v_f16mf2x5(float16_t *base, ptrdiff_t bstride,
                                vfloat16mf2x5_t v_tuple, size_t vl) {
  return __riscv_vssseg5e16_v_f16mf2x5(base, bstride, v_tuple, vl);
}

void test_vssseg5e16_v_f16m1x5(float16_t *base, ptrdiff_t bstride,
                               vfloat16m1x5_t v_tuple, size_t vl) {
  return __riscv_vssseg5e16_v_f16m1x5(base, bstride, v_tuple, vl);
}

void test_vssseg5e16_v_i16mf4x5(int16_t *base, ptrdiff_t bstride,
                                vint16mf4x5_t v_tuple, size_t vl) {
  return __riscv_vssseg5e16_v_i16mf4x5(base, bstride, v_tuple, vl);
}

void test_vssseg5e16_v_i16mf2x5(int16_t *base, ptrdiff_t bstride,
                                vint16mf2x5_t v_tuple, size_t vl) {
  return __riscv_vssseg5e16_v_i16mf2x5(base, bstride, v_tuple, vl);
}

void test_vssseg5e16_v_i16m1x5(int16_t *base, ptrdiff_t bstride,
                               vint16m1x5_t v_tuple, size_t vl) {
  return __riscv_vssseg5e16_v_i16m1x5(base, bstride, v_tuple, vl);
}

void test_vssseg5e16_v_u16mf4x5(uint16_t *base, ptrdiff_t bstride,
                                vuint16mf4x5_t v_tuple, size_t vl) {
  return __riscv_vssseg5e16_v_u16mf4x5(base, bstride, v_tuple, vl);
}

void test_vssseg5e16_v_u16mf2x5(uint16_t *base, ptrdiff_t bstride,
                                vuint16mf2x5_t v_tuple, size_t vl) {
  return __riscv_vssseg5e16_v_u16mf2x5(base, bstride, v_tuple, vl);
}

void test_vssseg5e16_v_u16m1x5(uint16_t *base, ptrdiff_t bstride,
                               vuint16m1x5_t v_tuple, size_t vl) {
  return __riscv_vssseg5e16_v_u16m1x5(base, bstride, v_tuple, vl);
}

void test_vssseg5e16_v_f16mf4x5_m(vbool64_t mask, float16_t *base,
                                  ptrdiff_t bstride, vfloat16mf4x5_t v_tuple,
                                  size_t vl) {
  return __riscv_vssseg5e16_v_f16mf4x5_m(mask, base, bstride, v_tuple, vl);
}

void test_vssseg5e16_v_f16mf2x5_m(vbool32_t mask, float16_t *base,
                                  ptrdiff_t bstride, vfloat16mf2x5_t v_tuple,
                                  size_t vl) {
  return __riscv_vssseg5e16_v_f16mf2x5_m(mask, base, bstride, v_tuple, vl);
}

void test_vssseg5e16_v_f16m1x5_m(vbool16_t mask, float16_t *base,
                                 ptrdiff_t bstride, vfloat16m1x5_t v_tuple,
                                 size_t vl) {
  return __riscv_vssseg5e16_v_f16m1x5_m(mask, base, bstride, v_tuple, vl);
}

void test_vssseg5e16_v_i16mf4x5_m(vbool64_t mask, int16_t *base,
                                  ptrdiff_t bstride, vint16mf4x5_t v_tuple,
                                  size_t vl) {
  return __riscv_vssseg5e16_v_i16mf4x5_m(mask, base, bstride, v_tuple, vl);
}

void test_vssseg5e16_v_i16mf2x5_m(vbool32_t mask, int16_t *base,
                                  ptrdiff_t bstride, vint16mf2x5_t v_tuple,
                                  size_t vl) {
  return __riscv_vssseg5e16_v_i16mf2x5_m(mask, base, bstride, v_tuple, vl);
}

void test_vssseg5e16_v_i16m1x5_m(vbool16_t mask, int16_t *base,
                                 ptrdiff_t bstride, vint16m1x5_t v_tuple,
                                 size_t vl) {
  return __riscv_vssseg5e16_v_i16m1x5_m(mask, base, bstride, v_tuple, vl);
}

void test_vssseg5e16_v_u16mf4x5_m(vbool64_t mask, uint16_t *base,
                                  ptrdiff_t bstride, vuint16mf4x5_t v_tuple,
                                  size_t vl) {
  return __riscv_vssseg5e16_v_u16mf4x5_m(mask, base, bstride, v_tuple, vl);
}

void test_vssseg5e16_v_u16mf2x5_m(vbool32_t mask, uint16_t *base,
                                  ptrdiff_t bstride, vuint16mf2x5_t v_tuple,
                                  size_t vl) {
  return __riscv_vssseg5e16_v_u16mf2x5_m(mask, base, bstride, v_tuple, vl);
}

void test_vssseg5e16_v_u16m1x5_m(vbool16_t mask, uint16_t *base,
                                 ptrdiff_t bstride, vuint16m1x5_t v_tuple,
                                 size_t vl) {
  return __riscv_vssseg5e16_v_u16m1x5_m(mask, base, bstride, v_tuple, vl);
}
