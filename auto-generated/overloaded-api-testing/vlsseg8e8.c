#include <stdint.h>
#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
void test_vlsseg8e8_v_i8mf8_m(vint8mf8_t *v0, vint8mf8_t *v1, vint8mf8_t *v2, vint8mf8_t *v3, vint8mf8_t *v4, vint8mf8_t *v5, vint8mf8_t *v6, vint8mf8_t *v7, vbool64_t mask, const int8_t *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg8e8(v0, v1, v2, v3, v4, v5, v6, v7, mask, base, bstride, vl);
}

void test_vlsseg8e8_v_i8mf4_m(vint8mf4_t *v0, vint8mf4_t *v1, vint8mf4_t *v2, vint8mf4_t *v3, vint8mf4_t *v4, vint8mf4_t *v5, vint8mf4_t *v6, vint8mf4_t *v7, vbool32_t mask, const int8_t *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg8e8(v0, v1, v2, v3, v4, v5, v6, v7, mask, base, bstride, vl);
}

void test_vlsseg8e8_v_i8mf2_m(vint8mf2_t *v0, vint8mf2_t *v1, vint8mf2_t *v2, vint8mf2_t *v3, vint8mf2_t *v4, vint8mf2_t *v5, vint8mf2_t *v6, vint8mf2_t *v7, vbool16_t mask, const int8_t *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg8e8(v0, v1, v2, v3, v4, v5, v6, v7, mask, base, bstride, vl);
}

void test_vlsseg8e8_v_i8m1_m(vint8m1_t *v0, vint8m1_t *v1, vint8m1_t *v2, vint8m1_t *v3, vint8m1_t *v4, vint8m1_t *v5, vint8m1_t *v6, vint8m1_t *v7, vbool8_t mask, const int8_t *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg8e8(v0, v1, v2, v3, v4, v5, v6, v7, mask, base, bstride, vl);
}

void test_vlsseg8e8_v_u8mf8_m(vuint8mf8_t *v0, vuint8mf8_t *v1, vuint8mf8_t *v2, vuint8mf8_t *v3, vuint8mf8_t *v4, vuint8mf8_t *v5, vuint8mf8_t *v6, vuint8mf8_t *v7, vbool64_t mask, const uint8_t *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg8e8(v0, v1, v2, v3, v4, v5, v6, v7, mask, base, bstride, vl);
}

void test_vlsseg8e8_v_u8mf4_m(vuint8mf4_t *v0, vuint8mf4_t *v1, vuint8mf4_t *v2, vuint8mf4_t *v3, vuint8mf4_t *v4, vuint8mf4_t *v5, vuint8mf4_t *v6, vuint8mf4_t *v7, vbool32_t mask, const uint8_t *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg8e8(v0, v1, v2, v3, v4, v5, v6, v7, mask, base, bstride, vl);
}

void test_vlsseg8e8_v_u8mf2_m(vuint8mf2_t *v0, vuint8mf2_t *v1, vuint8mf2_t *v2, vuint8mf2_t *v3, vuint8mf2_t *v4, vuint8mf2_t *v5, vuint8mf2_t *v6, vuint8mf2_t *v7, vbool16_t mask, const uint8_t *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg8e8(v0, v1, v2, v3, v4, v5, v6, v7, mask, base, bstride, vl);
}

void test_vlsseg8e8_v_u8m1_m(vuint8m1_t *v0, vuint8m1_t *v1, vuint8m1_t *v2, vuint8m1_t *v3, vuint8m1_t *v4, vuint8m1_t *v5, vuint8m1_t *v6, vuint8m1_t *v7, vbool8_t mask, const uint8_t *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg8e8(v0, v1, v2, v3, v4, v5, v6, v7, mask, base, bstride, vl);
}

