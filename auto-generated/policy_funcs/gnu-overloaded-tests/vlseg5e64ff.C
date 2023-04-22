/* { dg-do compile } */
/* { dg-options "-march=rv64gcv -mabi=lp64d -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
void test_vlseg5e64ff_v_f64m1_tu(vfloat64m1_t *v0, vfloat64m1_t *v1, vfloat64m1_t *v2, vfloat64m1_t *v3, vfloat64m1_t *v4, vfloat64m1_t maskedoff0, vfloat64m1_t maskedoff1, vfloat64m1_t maskedoff2, vfloat64m1_t maskedoff3, vfloat64m1_t maskedoff4, const float64_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg5e64ff_tu(v0, v1, v2, v3, v4, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, base, new_vl, vl);
}

void test_vlseg5e64ff_v_i64m1_tu(vint64m1_t *v0, vint64m1_t *v1, vint64m1_t *v2, vint64m1_t *v3, vint64m1_t *v4, vint64m1_t maskedoff0, vint64m1_t maskedoff1, vint64m1_t maskedoff2, vint64m1_t maskedoff3, vint64m1_t maskedoff4, const int64_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg5e64ff_tu(v0, v1, v2, v3, v4, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, base, new_vl, vl);
}

void test_vlseg5e64ff_v_u64m1_tu(vuint64m1_t *v0, vuint64m1_t *v1, vuint64m1_t *v2, vuint64m1_t *v3, vuint64m1_t *v4, vuint64m1_t maskedoff0, vuint64m1_t maskedoff1, vuint64m1_t maskedoff2, vuint64m1_t maskedoff3, vuint64m1_t maskedoff4, const uint64_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg5e64ff_tu(v0, v1, v2, v3, v4, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, base, new_vl, vl);
}

void test_vlseg5e64ff_v_f64m1_tum(vfloat64m1_t *v0, vfloat64m1_t *v1, vfloat64m1_t *v2, vfloat64m1_t *v3, vfloat64m1_t *v4, vbool64_t mask, vfloat64m1_t maskedoff0, vfloat64m1_t maskedoff1, vfloat64m1_t maskedoff2, vfloat64m1_t maskedoff3, vfloat64m1_t maskedoff4, const float64_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg5e64ff_tum(v0, v1, v2, v3, v4, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, base, new_vl, vl);
}

void test_vlseg5e64ff_v_i64m1_tum(vint64m1_t *v0, vint64m1_t *v1, vint64m1_t *v2, vint64m1_t *v3, vint64m1_t *v4, vbool64_t mask, vint64m1_t maskedoff0, vint64m1_t maskedoff1, vint64m1_t maskedoff2, vint64m1_t maskedoff3, vint64m1_t maskedoff4, const int64_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg5e64ff_tum(v0, v1, v2, v3, v4, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, base, new_vl, vl);
}

void test_vlseg5e64ff_v_u64m1_tum(vuint64m1_t *v0, vuint64m1_t *v1, vuint64m1_t *v2, vuint64m1_t *v3, vuint64m1_t *v4, vbool64_t mask, vuint64m1_t maskedoff0, vuint64m1_t maskedoff1, vuint64m1_t maskedoff2, vuint64m1_t maskedoff3, vuint64m1_t maskedoff4, const uint64_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg5e64ff_tum(v0, v1, v2, v3, v4, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, base, new_vl, vl);
}

void test_vlseg5e64ff_v_f64m1_tumu(vfloat64m1_t *v0, vfloat64m1_t *v1, vfloat64m1_t *v2, vfloat64m1_t *v3, vfloat64m1_t *v4, vbool64_t mask, vfloat64m1_t maskedoff0, vfloat64m1_t maskedoff1, vfloat64m1_t maskedoff2, vfloat64m1_t maskedoff3, vfloat64m1_t maskedoff4, const float64_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg5e64ff_tumu(v0, v1, v2, v3, v4, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, base, new_vl, vl);
}

void test_vlseg5e64ff_v_i64m1_tumu(vint64m1_t *v0, vint64m1_t *v1, vint64m1_t *v2, vint64m1_t *v3, vint64m1_t *v4, vbool64_t mask, vint64m1_t maskedoff0, vint64m1_t maskedoff1, vint64m1_t maskedoff2, vint64m1_t maskedoff3, vint64m1_t maskedoff4, const int64_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg5e64ff_tumu(v0, v1, v2, v3, v4, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, base, new_vl, vl);
}

void test_vlseg5e64ff_v_u64m1_tumu(vuint64m1_t *v0, vuint64m1_t *v1, vuint64m1_t *v2, vuint64m1_t *v3, vuint64m1_t *v4, vbool64_t mask, vuint64m1_t maskedoff0, vuint64m1_t maskedoff1, vuint64m1_t maskedoff2, vuint64m1_t maskedoff3, vuint64m1_t maskedoff4, const uint64_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg5e64ff_tumu(v0, v1, v2, v3, v4, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, base, new_vl, vl);
}

/* { dg-final { scan-assembler-times {vseti?vli\s+[a-z0-9]+,\s*[a-z0-9]+,\s*e[0-9]+,\s*mf?[1248],\s*t[au],\s*m[au]\s+vlseg5e64ff\.[ivxfswum.]+\s+} 9 } } */
