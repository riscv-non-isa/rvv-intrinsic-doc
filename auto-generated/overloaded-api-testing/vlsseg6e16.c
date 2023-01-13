#include <stdint.h>
#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
void test_vlsseg6e16_v_f16mf4_m(vfloat16mf4_t *v0, vfloat16mf4_t *v1, vfloat16mf4_t *v2, vfloat16mf4_t *v3, vfloat16mf4_t *v4, vfloat16mf4_t *v5, vbool64_t mask, const float16_t *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg6e16(v0, v1, v2, v3, v4, v5, mask, base, bstride, vl);
}

void test_vlsseg6e16_v_f16mf2_m(vfloat16mf2_t *v0, vfloat16mf2_t *v1, vfloat16mf2_t *v2, vfloat16mf2_t *v3, vfloat16mf2_t *v4, vfloat16mf2_t *v5, vbool32_t mask, const float16_t *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg6e16(v0, v1, v2, v3, v4, v5, mask, base, bstride, vl);
}

void test_vlsseg6e16_v_f16m1_m(vfloat16m1_t *v0, vfloat16m1_t *v1, vfloat16m1_t *v2, vfloat16m1_t *v3, vfloat16m1_t *v4, vfloat16m1_t *v5, vbool16_t mask, const float16_t *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg6e16(v0, v1, v2, v3, v4, v5, mask, base, bstride, vl);
}

void test_vlsseg6e16_v_i16mf4_m(vint16mf4_t *v0, vint16mf4_t *v1, vint16mf4_t *v2, vint16mf4_t *v3, vint16mf4_t *v4, vint16mf4_t *v5, vbool64_t mask, const int16_t *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg6e16(v0, v1, v2, v3, v4, v5, mask, base, bstride, vl);
}

void test_vlsseg6e16_v_i16mf2_m(vint16mf2_t *v0, vint16mf2_t *v1, vint16mf2_t *v2, vint16mf2_t *v3, vint16mf2_t *v4, vint16mf2_t *v5, vbool32_t mask, const int16_t *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg6e16(v0, v1, v2, v3, v4, v5, mask, base, bstride, vl);
}

void test_vlsseg6e16_v_i16m1_m(vint16m1_t *v0, vint16m1_t *v1, vint16m1_t *v2, vint16m1_t *v3, vint16m1_t *v4, vint16m1_t *v5, vbool16_t mask, const int16_t *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg6e16(v0, v1, v2, v3, v4, v5, mask, base, bstride, vl);
}

void test_vlsseg6e16_v_u16mf4_m(vuint16mf4_t *v0, vuint16mf4_t *v1, vuint16mf4_t *v2, vuint16mf4_t *v3, vuint16mf4_t *v4, vuint16mf4_t *v5, vbool64_t mask, const uint16_t *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg6e16(v0, v1, v2, v3, v4, v5, mask, base, bstride, vl);
}

void test_vlsseg6e16_v_u16mf2_m(vuint16mf2_t *v0, vuint16mf2_t *v1, vuint16mf2_t *v2, vuint16mf2_t *v3, vuint16mf2_t *v4, vuint16mf2_t *v5, vbool32_t mask, const uint16_t *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg6e16(v0, v1, v2, v3, v4, v5, mask, base, bstride, vl);
}

void test_vlsseg6e16_v_u16m1_m(vuint16m1_t *v0, vuint16m1_t *v1, vuint16m1_t *v2, vuint16m1_t *v3, vuint16m1_t *v4, vuint16m1_t *v5, vbool16_t mask, const uint16_t *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg6e16(v0, v1, v2, v3, v4, v5, mask, base, bstride, vl);
}

