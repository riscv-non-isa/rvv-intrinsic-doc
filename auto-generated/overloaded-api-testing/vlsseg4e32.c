#include <stdint.h>
#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
void test_vlsseg4e32_v_f32mf2_m(vfloat32mf2_t *v0, vfloat32mf2_t *v1, vfloat32mf2_t *v2, vfloat32mf2_t *v3, vbool64_t mask, const float32_t *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg4e32(v0, v1, v2, v3, mask, base, bstride, vl);
}

void test_vlsseg4e32_v_f32m1_m(vfloat32m1_t *v0, vfloat32m1_t *v1, vfloat32m1_t *v2, vfloat32m1_t *v3, vbool32_t mask, const float32_t *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg4e32(v0, v1, v2, v3, mask, base, bstride, vl);
}

void test_vlsseg4e32_v_f32m2_m(vfloat32m2_t *v0, vfloat32m2_t *v1, vfloat32m2_t *v2, vfloat32m2_t *v3, vbool16_t mask, const float32_t *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg4e32(v0, v1, v2, v3, mask, base, bstride, vl);
}

void test_vlsseg4e32_v_i32mf2_m(vint32mf2_t *v0, vint32mf2_t *v1, vint32mf2_t *v2, vint32mf2_t *v3, vbool64_t mask, const int32_t *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg4e32(v0, v1, v2, v3, mask, base, bstride, vl);
}

void test_vlsseg4e32_v_i32m1_m(vint32m1_t *v0, vint32m1_t *v1, vint32m1_t *v2, vint32m1_t *v3, vbool32_t mask, const int32_t *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg4e32(v0, v1, v2, v3, mask, base, bstride, vl);
}

void test_vlsseg4e32_v_i32m2_m(vint32m2_t *v0, vint32m2_t *v1, vint32m2_t *v2, vint32m2_t *v3, vbool16_t mask, const int32_t *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg4e32(v0, v1, v2, v3, mask, base, bstride, vl);
}

void test_vlsseg4e32_v_u32mf2_m(vuint32mf2_t *v0, vuint32mf2_t *v1, vuint32mf2_t *v2, vuint32mf2_t *v3, vbool64_t mask, const uint32_t *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg4e32(v0, v1, v2, v3, mask, base, bstride, vl);
}

void test_vlsseg4e32_v_u32m1_m(vuint32m1_t *v0, vuint32m1_t *v1, vuint32m1_t *v2, vuint32m1_t *v3, vbool32_t mask, const uint32_t *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg4e32(v0, v1, v2, v3, mask, base, bstride, vl);
}

void test_vlsseg4e32_v_u32m2_m(vuint32m2_t *v0, vuint32m2_t *v1, vuint32m2_t *v2, vuint32m2_t *v3, vbool16_t mask, const uint32_t *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg4e32(v0, v1, v2, v3, mask, base, bstride, vl);
}

