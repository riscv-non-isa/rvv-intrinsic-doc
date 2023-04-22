/* { dg-do compile } */
/* { dg-options "-march=rv64gcv -mabi=lp64d -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
void test_vlseg2e64ff_v_f64m1_m(vfloat64m1_t *v0, vfloat64m1_t *v1, vbool64_t mask, const float64_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e64ff(v0, v1, mask, base, new_vl, vl);
}

void test_vlseg2e64ff_v_f64m2_m(vfloat64m2_t *v0, vfloat64m2_t *v1, vbool32_t mask, const float64_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e64ff(v0, v1, mask, base, new_vl, vl);
}

void test_vlseg2e64ff_v_f64m4_m(vfloat64m4_t *v0, vfloat64m4_t *v1, vbool16_t mask, const float64_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e64ff(v0, v1, mask, base, new_vl, vl);
}

void test_vlseg2e64ff_v_i64m1_m(vint64m1_t *v0, vint64m1_t *v1, vbool64_t mask, const int64_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e64ff(v0, v1, mask, base, new_vl, vl);
}

void test_vlseg2e64ff_v_i64m2_m(vint64m2_t *v0, vint64m2_t *v1, vbool32_t mask, const int64_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e64ff(v0, v1, mask, base, new_vl, vl);
}

void test_vlseg2e64ff_v_i64m4_m(vint64m4_t *v0, vint64m4_t *v1, vbool16_t mask, const int64_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e64ff(v0, v1, mask, base, new_vl, vl);
}

void test_vlseg2e64ff_v_u64m1_m(vuint64m1_t *v0, vuint64m1_t *v1, vbool64_t mask, const uint64_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e64ff(v0, v1, mask, base, new_vl, vl);
}

void test_vlseg2e64ff_v_u64m2_m(vuint64m2_t *v0, vuint64m2_t *v1, vbool32_t mask, const uint64_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e64ff(v0, v1, mask, base, new_vl, vl);
}

void test_vlseg2e64ff_v_u64m4_m(vuint64m4_t *v0, vuint64m4_t *v1, vbool16_t mask, const uint64_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e64ff(v0, v1, mask, base, new_vl, vl);
}

/* { dg-final { scan-assembler-times {vseti?vli\s+[a-z0-9]+,\s*[a-z0-9]+,\s*e[0-9]+,\s*mf?[1248],\s*t[au],\s*m[au]\s+vlseg2e64ff\.[ivxfswum.]+\s+} 9 } } */
