#include <stdint.h>
#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;

vfloat32mf2_t test_vlse32_v_f32mf2_m(vbool64_t mask, const float32_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse32(mask, base, bstride, vl);
}

vfloat32m1_t test_vlse32_v_f32m1_m(vbool32_t mask, const float32_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse32(mask, base, bstride, vl);
}

vfloat32m2_t test_vlse32_v_f32m2_m(vbool16_t mask, const float32_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse32(mask, base, bstride, vl);
}

vfloat32m4_t test_vlse32_v_f32m4_m(vbool8_t mask, const float32_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse32(mask, base, bstride, vl);
}

vfloat32m8_t test_vlse32_v_f32m8_m(vbool4_t mask, const float32_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse32(mask, base, bstride, vl);
}

vint32mf2_t test_vlse32_v_i32mf2_m(vbool64_t mask, const int32_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse32(mask, base, bstride, vl);
}

vint32m1_t test_vlse32_v_i32m1_m(vbool32_t mask, const int32_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse32(mask, base, bstride, vl);
}

vint32m2_t test_vlse32_v_i32m2_m(vbool16_t mask, const int32_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse32(mask, base, bstride, vl);
}

vint32m4_t test_vlse32_v_i32m4_m(vbool8_t mask, const int32_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse32(mask, base, bstride, vl);
}

vint32m8_t test_vlse32_v_i32m8_m(vbool4_t mask, const int32_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse32(mask, base, bstride, vl);
}

vuint32mf2_t test_vlse32_v_u32mf2_m(vbool64_t mask, const uint32_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse32(mask, base, bstride, vl);
}

vuint32m1_t test_vlse32_v_u32m1_m(vbool32_t mask, const uint32_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse32(mask, base, bstride, vl);
}

vuint32m2_t test_vlse32_v_u32m2_m(vbool16_t mask, const uint32_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse32(mask, base, bstride, vl);
}

vuint32m4_t test_vlse32_v_u32m4_m(vbool8_t mask, const uint32_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse32(mask, base, bstride, vl);
}

vuint32m8_t test_vlse32_v_u32m8_m(vbool4_t mask, const uint32_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse32(mask, base, bstride, vl);
}
