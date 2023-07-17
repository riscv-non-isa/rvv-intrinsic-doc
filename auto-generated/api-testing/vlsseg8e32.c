#include <stdint.h>
#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
vfloat32mf2x8_t test_vlsseg8e32_v_f32mf2x8(const float32_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg8e32_v_f32mf2x8(base, bstride, vl);
}

vfloat32m1x8_t test_vlsseg8e32_v_f32m1x8(const float32_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg8e32_v_f32m1x8(base, bstride, vl);
}

vint32mf2x8_t test_vlsseg8e32_v_i32mf2x8(const int32_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg8e32_v_i32mf2x8(base, bstride, vl);
}

vint32m1x8_t test_vlsseg8e32_v_i32m1x8(const int32_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg8e32_v_i32m1x8(base, bstride, vl);
}

vuint32mf2x8_t test_vlsseg8e32_v_u32mf2x8(const uint32_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg8e32_v_u32mf2x8(base, bstride, vl);
}

vuint32m1x8_t test_vlsseg8e32_v_u32m1x8(const uint32_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg8e32_v_u32m1x8(base, bstride, vl);
}

vfloat32mf2x8_t test_vlsseg8e32_v_f32mf2x8_m(vbool64_t mask, const float32_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg8e32_v_f32mf2x8_m(mask, base, bstride, vl);
}

vfloat32m1x8_t test_vlsseg8e32_v_f32m1x8_m(vbool32_t mask, const float32_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg8e32_v_f32m1x8_m(mask, base, bstride, vl);
}

vint32mf2x8_t test_vlsseg8e32_v_i32mf2x8_m(vbool64_t mask, const int32_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg8e32_v_i32mf2x8_m(mask, base, bstride, vl);
}

vint32m1x8_t test_vlsseg8e32_v_i32m1x8_m(vbool32_t mask, const int32_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg8e32_v_i32m1x8_m(mask, base, bstride, vl);
}

vuint32mf2x8_t test_vlsseg8e32_v_u32mf2x8_m(vbool64_t mask, const uint32_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg8e32_v_u32mf2x8_m(mask, base, bstride, vl);
}

vuint32m1x8_t test_vlsseg8e32_v_u32m1x8_m(vbool32_t mask, const uint32_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg8e32_v_u32m1x8_m(mask, base, bstride, vl);
}

