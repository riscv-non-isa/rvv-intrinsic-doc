#include <stdint.h>
#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
vfloat16mf4x7_t test_vlsseg7e16_v_f16mf4x7_tu(vfloat16mf4x7_t maskedoff_tuple, const float16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg7e16_v_f16mf4x7_tu(maskedoff_tuple, base, bstride, vl);
}

vfloat16mf2x7_t test_vlsseg7e16_v_f16mf2x7_tu(vfloat16mf2x7_t maskedoff_tuple, const float16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg7e16_v_f16mf2x7_tu(maskedoff_tuple, base, bstride, vl);
}

vfloat16m1x7_t test_vlsseg7e16_v_f16m1x7_tu(vfloat16m1x7_t maskedoff_tuple, const float16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg7e16_v_f16m1x7_tu(maskedoff_tuple, base, bstride, vl);
}

vint16mf4x7_t test_vlsseg7e16_v_i16mf4x7_tu(vint16mf4x7_t maskedoff_tuple, const int16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg7e16_v_i16mf4x7_tu(maskedoff_tuple, base, bstride, vl);
}

vint16mf2x7_t test_vlsseg7e16_v_i16mf2x7_tu(vint16mf2x7_t maskedoff_tuple, const int16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg7e16_v_i16mf2x7_tu(maskedoff_tuple, base, bstride, vl);
}

vint16m1x7_t test_vlsseg7e16_v_i16m1x7_tu(vint16m1x7_t maskedoff_tuple, const int16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg7e16_v_i16m1x7_tu(maskedoff_tuple, base, bstride, vl);
}

vuint16mf4x7_t test_vlsseg7e16_v_u16mf4x7_tu(vuint16mf4x7_t maskedoff_tuple, const uint16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg7e16_v_u16mf4x7_tu(maskedoff_tuple, base, bstride, vl);
}

vuint16mf2x7_t test_vlsseg7e16_v_u16mf2x7_tu(vuint16mf2x7_t maskedoff_tuple, const uint16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg7e16_v_u16mf2x7_tu(maskedoff_tuple, base, bstride, vl);
}

vuint16m1x7_t test_vlsseg7e16_v_u16m1x7_tu(vuint16m1x7_t maskedoff_tuple, const uint16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg7e16_v_u16m1x7_tu(maskedoff_tuple, base, bstride, vl);
}

vfloat16mf4x7_t test_vlsseg7e16_v_f16mf4x7_tum(vbool64_t mask, vfloat16mf4x7_t maskedoff_tuple, const float16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg7e16_v_f16mf4x7_tum(mask, maskedoff_tuple, base, bstride, vl);
}

vfloat16mf2x7_t test_vlsseg7e16_v_f16mf2x7_tum(vbool32_t mask, vfloat16mf2x7_t maskedoff_tuple, const float16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg7e16_v_f16mf2x7_tum(mask, maskedoff_tuple, base, bstride, vl);
}

vfloat16m1x7_t test_vlsseg7e16_v_f16m1x7_tum(vbool16_t mask, vfloat16m1x7_t maskedoff_tuple, const float16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg7e16_v_f16m1x7_tum(mask, maskedoff_tuple, base, bstride, vl);
}

vint16mf4x7_t test_vlsseg7e16_v_i16mf4x7_tum(vbool64_t mask, vint16mf4x7_t maskedoff_tuple, const int16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg7e16_v_i16mf4x7_tum(mask, maskedoff_tuple, base, bstride, vl);
}

vint16mf2x7_t test_vlsseg7e16_v_i16mf2x7_tum(vbool32_t mask, vint16mf2x7_t maskedoff_tuple, const int16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg7e16_v_i16mf2x7_tum(mask, maskedoff_tuple, base, bstride, vl);
}

vint16m1x7_t test_vlsseg7e16_v_i16m1x7_tum(vbool16_t mask, vint16m1x7_t maskedoff_tuple, const int16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg7e16_v_i16m1x7_tum(mask, maskedoff_tuple, base, bstride, vl);
}

vuint16mf4x7_t test_vlsseg7e16_v_u16mf4x7_tum(vbool64_t mask, vuint16mf4x7_t maskedoff_tuple, const uint16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg7e16_v_u16mf4x7_tum(mask, maskedoff_tuple, base, bstride, vl);
}

vuint16mf2x7_t test_vlsseg7e16_v_u16mf2x7_tum(vbool32_t mask, vuint16mf2x7_t maskedoff_tuple, const uint16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg7e16_v_u16mf2x7_tum(mask, maskedoff_tuple, base, bstride, vl);
}

vuint16m1x7_t test_vlsseg7e16_v_u16m1x7_tum(vbool16_t mask, vuint16m1x7_t maskedoff_tuple, const uint16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg7e16_v_u16m1x7_tum(mask, maskedoff_tuple, base, bstride, vl);
}

vfloat16mf4x7_t test_vlsseg7e16_v_f16mf4x7_tumu(vbool64_t mask, vfloat16mf4x7_t maskedoff_tuple, const float16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg7e16_v_f16mf4x7_tumu(mask, maskedoff_tuple, base, bstride, vl);
}

vfloat16mf2x7_t test_vlsseg7e16_v_f16mf2x7_tumu(vbool32_t mask, vfloat16mf2x7_t maskedoff_tuple, const float16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg7e16_v_f16mf2x7_tumu(mask, maskedoff_tuple, base, bstride, vl);
}

vfloat16m1x7_t test_vlsseg7e16_v_f16m1x7_tumu(vbool16_t mask, vfloat16m1x7_t maskedoff_tuple, const float16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg7e16_v_f16m1x7_tumu(mask, maskedoff_tuple, base, bstride, vl);
}

vint16mf4x7_t test_vlsseg7e16_v_i16mf4x7_tumu(vbool64_t mask, vint16mf4x7_t maskedoff_tuple, const int16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg7e16_v_i16mf4x7_tumu(mask, maskedoff_tuple, base, bstride, vl);
}

vint16mf2x7_t test_vlsseg7e16_v_i16mf2x7_tumu(vbool32_t mask, vint16mf2x7_t maskedoff_tuple, const int16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg7e16_v_i16mf2x7_tumu(mask, maskedoff_tuple, base, bstride, vl);
}

vint16m1x7_t test_vlsseg7e16_v_i16m1x7_tumu(vbool16_t mask, vint16m1x7_t maskedoff_tuple, const int16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg7e16_v_i16m1x7_tumu(mask, maskedoff_tuple, base, bstride, vl);
}

vuint16mf4x7_t test_vlsseg7e16_v_u16mf4x7_tumu(vbool64_t mask, vuint16mf4x7_t maskedoff_tuple, const uint16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg7e16_v_u16mf4x7_tumu(mask, maskedoff_tuple, base, bstride, vl);
}

vuint16mf2x7_t test_vlsseg7e16_v_u16mf2x7_tumu(vbool32_t mask, vuint16mf2x7_t maskedoff_tuple, const uint16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg7e16_v_u16mf2x7_tumu(mask, maskedoff_tuple, base, bstride, vl);
}

vuint16m1x7_t test_vlsseg7e16_v_u16m1x7_tumu(vbool16_t mask, vuint16m1x7_t maskedoff_tuple, const uint16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg7e16_v_u16m1x7_tumu(mask, maskedoff_tuple, base, bstride, vl);
}

vfloat16mf4x7_t test_vlsseg7e16_v_f16mf4x7_mu(vbool64_t mask, vfloat16mf4x7_t maskedoff_tuple, const float16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg7e16_v_f16mf4x7_mu(mask, maskedoff_tuple, base, bstride, vl);
}

vfloat16mf2x7_t test_vlsseg7e16_v_f16mf2x7_mu(vbool32_t mask, vfloat16mf2x7_t maskedoff_tuple, const float16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg7e16_v_f16mf2x7_mu(mask, maskedoff_tuple, base, bstride, vl);
}

vfloat16m1x7_t test_vlsseg7e16_v_f16m1x7_mu(vbool16_t mask, vfloat16m1x7_t maskedoff_tuple, const float16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg7e16_v_f16m1x7_mu(mask, maskedoff_tuple, base, bstride, vl);
}

vint16mf4x7_t test_vlsseg7e16_v_i16mf4x7_mu(vbool64_t mask, vint16mf4x7_t maskedoff_tuple, const int16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg7e16_v_i16mf4x7_mu(mask, maskedoff_tuple, base, bstride, vl);
}

vint16mf2x7_t test_vlsseg7e16_v_i16mf2x7_mu(vbool32_t mask, vint16mf2x7_t maskedoff_tuple, const int16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg7e16_v_i16mf2x7_mu(mask, maskedoff_tuple, base, bstride, vl);
}

vint16m1x7_t test_vlsseg7e16_v_i16m1x7_mu(vbool16_t mask, vint16m1x7_t maskedoff_tuple, const int16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg7e16_v_i16m1x7_mu(mask, maskedoff_tuple, base, bstride, vl);
}

vuint16mf4x7_t test_vlsseg7e16_v_u16mf4x7_mu(vbool64_t mask, vuint16mf4x7_t maskedoff_tuple, const uint16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg7e16_v_u16mf4x7_mu(mask, maskedoff_tuple, base, bstride, vl);
}

vuint16mf2x7_t test_vlsseg7e16_v_u16mf2x7_mu(vbool32_t mask, vuint16mf2x7_t maskedoff_tuple, const uint16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg7e16_v_u16mf2x7_mu(mask, maskedoff_tuple, base, bstride, vl);
}

vuint16m1x7_t test_vlsseg7e16_v_u16m1x7_mu(vbool16_t mask, vuint16m1x7_t maskedoff_tuple, const uint16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg7e16_v_u16m1x7_mu(mask, maskedoff_tuple, base, bstride, vl);
}

