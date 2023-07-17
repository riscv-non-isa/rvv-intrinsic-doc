#include <stdint.h>
#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
vfloat64m1x2_t test_vlseg2e64ff_v_f64m1x2_tu(vfloat64m1x2_t maskedoff_tuple, const float64_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e64ff_tu(maskedoff_tuple, base, new_vl, vl);
}

vfloat64m2x2_t test_vlseg2e64ff_v_f64m2x2_tu(vfloat64m2x2_t maskedoff_tuple, const float64_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e64ff_tu(maskedoff_tuple, base, new_vl, vl);
}

vfloat64m4x2_t test_vlseg2e64ff_v_f64m4x2_tu(vfloat64m4x2_t maskedoff_tuple, const float64_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e64ff_tu(maskedoff_tuple, base, new_vl, vl);
}

vint64m1x2_t test_vlseg2e64ff_v_i64m1x2_tu(vint64m1x2_t maskedoff_tuple, const int64_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e64ff_tu(maskedoff_tuple, base, new_vl, vl);
}

vint64m2x2_t test_vlseg2e64ff_v_i64m2x2_tu(vint64m2x2_t maskedoff_tuple, const int64_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e64ff_tu(maskedoff_tuple, base, new_vl, vl);
}

vint64m4x2_t test_vlseg2e64ff_v_i64m4x2_tu(vint64m4x2_t maskedoff_tuple, const int64_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e64ff_tu(maskedoff_tuple, base, new_vl, vl);
}

vuint64m1x2_t test_vlseg2e64ff_v_u64m1x2_tu(vuint64m1x2_t maskedoff_tuple, const uint64_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e64ff_tu(maskedoff_tuple, base, new_vl, vl);
}

vuint64m2x2_t test_vlseg2e64ff_v_u64m2x2_tu(vuint64m2x2_t maskedoff_tuple, const uint64_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e64ff_tu(maskedoff_tuple, base, new_vl, vl);
}

vuint64m4x2_t test_vlseg2e64ff_v_u64m4x2_tu(vuint64m4x2_t maskedoff_tuple, const uint64_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e64ff_tu(maskedoff_tuple, base, new_vl, vl);
}

vfloat64m1x2_t test_vlseg2e64ff_v_f64m1x2_tum(vbool64_t mask, vfloat64m1x2_t maskedoff_tuple, const float64_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e64ff_tum(mask, maskedoff_tuple, base, new_vl, vl);
}

vfloat64m2x2_t test_vlseg2e64ff_v_f64m2x2_tum(vbool32_t mask, vfloat64m2x2_t maskedoff_tuple, const float64_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e64ff_tum(mask, maskedoff_tuple, base, new_vl, vl);
}

vfloat64m4x2_t test_vlseg2e64ff_v_f64m4x2_tum(vbool16_t mask, vfloat64m4x2_t maskedoff_tuple, const float64_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e64ff_tum(mask, maskedoff_tuple, base, new_vl, vl);
}

vint64m1x2_t test_vlseg2e64ff_v_i64m1x2_tum(vbool64_t mask, vint64m1x2_t maskedoff_tuple, const int64_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e64ff_tum(mask, maskedoff_tuple, base, new_vl, vl);
}

vint64m2x2_t test_vlseg2e64ff_v_i64m2x2_tum(vbool32_t mask, vint64m2x2_t maskedoff_tuple, const int64_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e64ff_tum(mask, maskedoff_tuple, base, new_vl, vl);
}

vint64m4x2_t test_vlseg2e64ff_v_i64m4x2_tum(vbool16_t mask, vint64m4x2_t maskedoff_tuple, const int64_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e64ff_tum(mask, maskedoff_tuple, base, new_vl, vl);
}

vuint64m1x2_t test_vlseg2e64ff_v_u64m1x2_tum(vbool64_t mask, vuint64m1x2_t maskedoff_tuple, const uint64_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e64ff_tum(mask, maskedoff_tuple, base, new_vl, vl);
}

vuint64m2x2_t test_vlseg2e64ff_v_u64m2x2_tum(vbool32_t mask, vuint64m2x2_t maskedoff_tuple, const uint64_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e64ff_tum(mask, maskedoff_tuple, base, new_vl, vl);
}

vuint64m4x2_t test_vlseg2e64ff_v_u64m4x2_tum(vbool16_t mask, vuint64m4x2_t maskedoff_tuple, const uint64_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e64ff_tum(mask, maskedoff_tuple, base, new_vl, vl);
}

vfloat64m1x2_t test_vlseg2e64ff_v_f64m1x2_tumu(vbool64_t mask, vfloat64m1x2_t maskedoff_tuple, const float64_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e64ff_tumu(mask, maskedoff_tuple, base, new_vl, vl);
}

vfloat64m2x2_t test_vlseg2e64ff_v_f64m2x2_tumu(vbool32_t mask, vfloat64m2x2_t maskedoff_tuple, const float64_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e64ff_tumu(mask, maskedoff_tuple, base, new_vl, vl);
}

vfloat64m4x2_t test_vlseg2e64ff_v_f64m4x2_tumu(vbool16_t mask, vfloat64m4x2_t maskedoff_tuple, const float64_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e64ff_tumu(mask, maskedoff_tuple, base, new_vl, vl);
}

vint64m1x2_t test_vlseg2e64ff_v_i64m1x2_tumu(vbool64_t mask, vint64m1x2_t maskedoff_tuple, const int64_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e64ff_tumu(mask, maskedoff_tuple, base, new_vl, vl);
}

vint64m2x2_t test_vlseg2e64ff_v_i64m2x2_tumu(vbool32_t mask, vint64m2x2_t maskedoff_tuple, const int64_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e64ff_tumu(mask, maskedoff_tuple, base, new_vl, vl);
}

vint64m4x2_t test_vlseg2e64ff_v_i64m4x2_tumu(vbool16_t mask, vint64m4x2_t maskedoff_tuple, const int64_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e64ff_tumu(mask, maskedoff_tuple, base, new_vl, vl);
}

vuint64m1x2_t test_vlseg2e64ff_v_u64m1x2_tumu(vbool64_t mask, vuint64m1x2_t maskedoff_tuple, const uint64_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e64ff_tumu(mask, maskedoff_tuple, base, new_vl, vl);
}

vuint64m2x2_t test_vlseg2e64ff_v_u64m2x2_tumu(vbool32_t mask, vuint64m2x2_t maskedoff_tuple, const uint64_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e64ff_tumu(mask, maskedoff_tuple, base, new_vl, vl);
}

vuint64m4x2_t test_vlseg2e64ff_v_u64m4x2_tumu(vbool16_t mask, vuint64m4x2_t maskedoff_tuple, const uint64_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e64ff_tumu(mask, maskedoff_tuple, base, new_vl, vl);
}

vfloat64m1x2_t test_vlseg2e64ff_v_f64m1x2_mu(vbool64_t mask, vfloat64m1x2_t maskedoff_tuple, const float64_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e64ff_mu(mask, maskedoff_tuple, base, new_vl, vl);
}

vfloat64m2x2_t test_vlseg2e64ff_v_f64m2x2_mu(vbool32_t mask, vfloat64m2x2_t maskedoff_tuple, const float64_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e64ff_mu(mask, maskedoff_tuple, base, new_vl, vl);
}

vfloat64m4x2_t test_vlseg2e64ff_v_f64m4x2_mu(vbool16_t mask, vfloat64m4x2_t maskedoff_tuple, const float64_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e64ff_mu(mask, maskedoff_tuple, base, new_vl, vl);
}

vint64m1x2_t test_vlseg2e64ff_v_i64m1x2_mu(vbool64_t mask, vint64m1x2_t maskedoff_tuple, const int64_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e64ff_mu(mask, maskedoff_tuple, base, new_vl, vl);
}

vint64m2x2_t test_vlseg2e64ff_v_i64m2x2_mu(vbool32_t mask, vint64m2x2_t maskedoff_tuple, const int64_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e64ff_mu(mask, maskedoff_tuple, base, new_vl, vl);
}

vint64m4x2_t test_vlseg2e64ff_v_i64m4x2_mu(vbool16_t mask, vint64m4x2_t maskedoff_tuple, const int64_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e64ff_mu(mask, maskedoff_tuple, base, new_vl, vl);
}

vuint64m1x2_t test_vlseg2e64ff_v_u64m1x2_mu(vbool64_t mask, vuint64m1x2_t maskedoff_tuple, const uint64_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e64ff_mu(mask, maskedoff_tuple, base, new_vl, vl);
}

vuint64m2x2_t test_vlseg2e64ff_v_u64m2x2_mu(vbool32_t mask, vuint64m2x2_t maskedoff_tuple, const uint64_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e64ff_mu(mask, maskedoff_tuple, base, new_vl, vl);
}

vuint64m4x2_t test_vlseg2e64ff_v_u64m4x2_mu(vbool16_t mask, vuint64m4x2_t maskedoff_tuple, const uint64_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e64ff_mu(mask, maskedoff_tuple, base, new_vl, vl);
}

