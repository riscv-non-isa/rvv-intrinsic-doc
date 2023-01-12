#include <stdint.h>
#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
void test_vssseg6e64_v_f64m1(float64_t *base, ptrdiff_t bstride, vfloat64m1_t v0, vfloat64m1_t v1, vfloat64m1_t v2, vfloat64m1_t v3, vfloat64m1_t v4, vfloat64m1_t v5, size_t vl) {
  return vssseg6e64_v_f64m1(base, bstride, v0, v1, v2, v3, v4, v5, vl);
}

void test_vssseg6e64_v_i64m1(int64_t *base, ptrdiff_t bstride, vint64m1_t v0, vint64m1_t v1, vint64m1_t v2, vint64m1_t v3, vint64m1_t v4, vint64m1_t v5, size_t vl) {
  return vssseg6e64_v_i64m1(base, bstride, v0, v1, v2, v3, v4, v5, vl);
}

void test_vssseg6e64_v_u64m1(uint64_t *base, ptrdiff_t bstride, vuint64m1_t v0, vuint64m1_t v1, vuint64m1_t v2, vuint64m1_t v3, vuint64m1_t v4, vuint64m1_t v5, size_t vl) {
  return vssseg6e64_v_u64m1(base, bstride, v0, v1, v2, v3, v4, v5, vl);
}

void test_vssseg6e64_v_f64m1_m(vbool64_t mask, float64_t *base, ptrdiff_t bstride, vfloat64m1_t v0, vfloat64m1_t v1, vfloat64m1_t v2, vfloat64m1_t v3, vfloat64m1_t v4, vfloat64m1_t v5, size_t vl) {
  return vssseg6e64_v_f64m1_m(mask, base, bstride, v0, v1, v2, v3, v4, v5, vl);
}

void test_vssseg6e64_v_i64m1_m(vbool64_t mask, int64_t *base, ptrdiff_t bstride, vint64m1_t v0, vint64m1_t v1, vint64m1_t v2, vint64m1_t v3, vint64m1_t v4, vint64m1_t v5, size_t vl) {
  return vssseg6e64_v_i64m1_m(mask, base, bstride, v0, v1, v2, v3, v4, v5, vl);
}

void test_vssseg6e64_v_u64m1_m(vbool64_t mask, uint64_t *base, ptrdiff_t bstride, vuint64m1_t v0, vuint64m1_t v1, vuint64m1_t v2, vuint64m1_t v3, vuint64m1_t v4, vuint64m1_t v5, size_t vl) {
  return vssseg6e64_v_u64m1_m(mask, base, bstride, v0, v1, v2, v3, v4, v5, vl);
}

