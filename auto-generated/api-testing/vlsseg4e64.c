#include <stdint.h>
#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
vfloat64m1x4_t test_vlsseg4e64_v_f64m1x4(const float64_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg4e64_v_f64m1x4(base, bstride, vl);
}

vfloat64m2x4_t test_vlsseg4e64_v_f64m2x4(const float64_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg4e64_v_f64m2x4(base, bstride, vl);
}

vint64m1x4_t test_vlsseg4e64_v_i64m1x4(const int64_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg4e64_v_i64m1x4(base, bstride, vl);
}

vint64m2x4_t test_vlsseg4e64_v_i64m2x4(const int64_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg4e64_v_i64m2x4(base, bstride, vl);
}

vuint64m1x4_t test_vlsseg4e64_v_u64m1x4(const uint64_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg4e64_v_u64m1x4(base, bstride, vl);
}

vuint64m2x4_t test_vlsseg4e64_v_u64m2x4(const uint64_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg4e64_v_u64m2x4(base, bstride, vl);
}

vfloat64m1x4_t test_vlsseg4e64_v_f64m1x4_m(vbool64_t mask, const float64_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg4e64_v_f64m1x4_m(mask, base, bstride, vl);
}

vfloat64m2x4_t test_vlsseg4e64_v_f64m2x4_m(vbool32_t mask, const float64_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg4e64_v_f64m2x4_m(mask, base, bstride, vl);
}

vint64m1x4_t test_vlsseg4e64_v_i64m1x4_m(vbool64_t mask, const int64_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg4e64_v_i64m1x4_m(mask, base, bstride, vl);
}

vint64m2x4_t test_vlsseg4e64_v_i64m2x4_m(vbool32_t mask, const int64_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg4e64_v_i64m2x4_m(mask, base, bstride, vl);
}

vuint64m1x4_t test_vlsseg4e64_v_u64m1x4_m(vbool64_t mask, const uint64_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg4e64_v_u64m1x4_m(mask, base, bstride, vl);
}

vuint64m2x4_t test_vlsseg4e64_v_u64m2x4_m(vbool32_t mask, const uint64_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg4e64_v_u64m2x4_m(mask, base, bstride, vl);
}

