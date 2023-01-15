#include <stdint.h>
#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
void test_vlsseg6e32_v_f32mf2(vfloat32mf2_t *v0, vfloat32mf2_t *v1, vfloat32mf2_t *v2, vfloat32mf2_t *v3, vfloat32mf2_t *v4, vfloat32mf2_t *v5, const float32_t *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg6e32_v_f32mf2(v0, v1, v2, v3, v4, v5, base, bstride, vl);
}

void test_vlsseg6e32_v_f32m1(vfloat32m1_t *v0, vfloat32m1_t *v1, vfloat32m1_t *v2, vfloat32m1_t *v3, vfloat32m1_t *v4, vfloat32m1_t *v5, const float32_t *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg6e32_v_f32m1(v0, v1, v2, v3, v4, v5, base, bstride, vl);
}

void test_vlsseg6e32_v_i32mf2(vint32mf2_t *v0, vint32mf2_t *v1, vint32mf2_t *v2, vint32mf2_t *v3, vint32mf2_t *v4, vint32mf2_t *v5, const int32_t *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg6e32_v_i32mf2(v0, v1, v2, v3, v4, v5, base, bstride, vl);
}

void test_vlsseg6e32_v_i32m1(vint32m1_t *v0, vint32m1_t *v1, vint32m1_t *v2, vint32m1_t *v3, vint32m1_t *v4, vint32m1_t *v5, const int32_t *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg6e32_v_i32m1(v0, v1, v2, v3, v4, v5, base, bstride, vl);
}

void test_vlsseg6e32_v_u32mf2(vuint32mf2_t *v0, vuint32mf2_t *v1, vuint32mf2_t *v2, vuint32mf2_t *v3, vuint32mf2_t *v4, vuint32mf2_t *v5, const uint32_t *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg6e32_v_u32mf2(v0, v1, v2, v3, v4, v5, base, bstride, vl);
}

void test_vlsseg6e32_v_u32m1(vuint32m1_t *v0, vuint32m1_t *v1, vuint32m1_t *v2, vuint32m1_t *v3, vuint32m1_t *v4, vuint32m1_t *v5, const uint32_t *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg6e32_v_u32m1(v0, v1, v2, v3, v4, v5, base, bstride, vl);
}

void test_vlsseg6e32_v_f32mf2_m(vfloat32mf2_t *v0, vfloat32mf2_t *v1, vfloat32mf2_t *v2, vfloat32mf2_t *v3, vfloat32mf2_t *v4, vfloat32mf2_t *v5, vbool64_t mask, const float32_t *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg6e32_v_f32mf2_m(v0, v1, v2, v3, v4, v5, mask, base, bstride, vl);
}

void test_vlsseg6e32_v_f32m1_m(vfloat32m1_t *v0, vfloat32m1_t *v1, vfloat32m1_t *v2, vfloat32m1_t *v3, vfloat32m1_t *v4, vfloat32m1_t *v5, vbool32_t mask, const float32_t *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg6e32_v_f32m1_m(v0, v1, v2, v3, v4, v5, mask, base, bstride, vl);
}

void test_vlsseg6e32_v_i32mf2_m(vint32mf2_t *v0, vint32mf2_t *v1, vint32mf2_t *v2, vint32mf2_t *v3, vint32mf2_t *v4, vint32mf2_t *v5, vbool64_t mask, const int32_t *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg6e32_v_i32mf2_m(v0, v1, v2, v3, v4, v5, mask, base, bstride, vl);
}

void test_vlsseg6e32_v_i32m1_m(vint32m1_t *v0, vint32m1_t *v1, vint32m1_t *v2, vint32m1_t *v3, vint32m1_t *v4, vint32m1_t *v5, vbool32_t mask, const int32_t *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg6e32_v_i32m1_m(v0, v1, v2, v3, v4, v5, mask, base, bstride, vl);
}

void test_vlsseg6e32_v_u32mf2_m(vuint32mf2_t *v0, vuint32mf2_t *v1, vuint32mf2_t *v2, vuint32mf2_t *v3, vuint32mf2_t *v4, vuint32mf2_t *v5, vbool64_t mask, const uint32_t *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg6e32_v_u32mf2_m(v0, v1, v2, v3, v4, v5, mask, base, bstride, vl);
}

void test_vlsseg6e32_v_u32m1_m(vuint32m1_t *v0, vuint32m1_t *v1, vuint32m1_t *v2, vuint32m1_t *v3, vuint32m1_t *v4, vuint32m1_t *v5, vbool32_t mask, const uint32_t *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg6e32_v_u32m1_m(v0, v1, v2, v3, v4, v5, mask, base, bstride, vl);
}

