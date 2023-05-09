#include <stdint.h>
#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;

vfloat16mf4_t test_vlse16_v_f16mf4_m(vbool64_t mask, const float16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse16(mask, base, bstride, vl);
}

vfloat16mf2_t test_vlse16_v_f16mf2_m(vbool32_t mask, const float16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse16(mask, base, bstride, vl);
}

vfloat16m1_t test_vlse16_v_f16m1_m(vbool16_t mask, const float16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse16(mask, base, bstride, vl);
}

vfloat16m2_t test_vlse16_v_f16m2_m(vbool8_t mask, const float16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse16(mask, base, bstride, vl);
}

vfloat16m4_t test_vlse16_v_f16m4_m(vbool4_t mask, const float16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse16(mask, base, bstride, vl);
}

vfloat16m8_t test_vlse16_v_f16m8_m(vbool2_t mask, const float16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse16(mask, base, bstride, vl);
}

vint16mf4_t test_vlse16_v_i16mf4_m(vbool64_t mask, const int16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse16(mask, base, bstride, vl);
}

vint16mf2_t test_vlse16_v_i16mf2_m(vbool32_t mask, const int16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse16(mask, base, bstride, vl);
}

vint16m1_t test_vlse16_v_i16m1_m(vbool16_t mask, const int16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse16(mask, base, bstride, vl);
}

vint16m2_t test_vlse16_v_i16m2_m(vbool8_t mask, const int16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse16(mask, base, bstride, vl);
}

vint16m4_t test_vlse16_v_i16m4_m(vbool4_t mask, const int16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse16(mask, base, bstride, vl);
}

vint16m8_t test_vlse16_v_i16m8_m(vbool2_t mask, const int16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse16(mask, base, bstride, vl);
}

vuint16mf4_t test_vlse16_v_u16mf4_m(vbool64_t mask, const uint16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse16(mask, base, bstride, vl);
}

vuint16mf2_t test_vlse16_v_u16mf2_m(vbool32_t mask, const uint16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse16(mask, base, bstride, vl);
}

vuint16m1_t test_vlse16_v_u16m1_m(vbool16_t mask, const uint16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse16(mask, base, bstride, vl);
}

vuint16m2_t test_vlse16_v_u16m2_m(vbool8_t mask, const uint16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse16(mask, base, bstride, vl);
}

vuint16m4_t test_vlse16_v_u16m4_m(vbool4_t mask, const uint16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse16(mask, base, bstride, vl);
}

vuint16m8_t test_vlse16_v_u16m8_m(vbool2_t mask, const uint16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlse16(mask, base, bstride, vl);
}
