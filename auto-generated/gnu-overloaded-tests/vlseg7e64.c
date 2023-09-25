/* { dg-do compile } */
/* { dg-options "-march=rv64gcv_zvfh -mabi=lp64d -Wno-psabi -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
vfloat64m1x7_t test_vlseg7e64_v_f64m1x7_m(vbool64_t mask, const float64_t *base, size_t vl) {
  return __riscv_vlseg7e64(mask, base, vl);
}

vint64m1x7_t test_vlseg7e64_v_i64m1x7_m(vbool64_t mask, const int64_t *base, size_t vl) {
  return __riscv_vlseg7e64(mask, base, vl);
}

vuint64m1x7_t test_vlseg7e64_v_u64m1x7_m(vbool64_t mask, const uint64_t *base, size_t vl) {
  return __riscv_vlseg7e64(mask, base, vl);
}

/* { dg-final { scan-assembler-times {vseti?vli\s+[a-z0-9]+,\s*[a-z0-9]+,\s*e[0-9]+,\s*mf?[1248],\s*t[au],\s*m[au]\s+vlseg7e64\.[ivxfswum.]+\s+} 3 } } */
