/* { dg-do compile } */
/* { dg-options "-march=rv64gcv_zvfh -mabi=lp64d -Wno-psabi -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;

vfloat64m1x4_t test_vlseg4e64_v_f64m1x4_m(vbool64_t vm, const float64_t *rs1, size_t vl) {
  return __riscv_vlseg4e64(vm, rs1, vl);
}

vfloat64m2x4_t test_vlseg4e64_v_f64m2x4_m(vbool32_t vm, const float64_t *rs1, size_t vl) {
  return __riscv_vlseg4e64(vm, rs1, vl);
}

vint64m1x4_t test_vlseg4e64_v_i64m1x4_m(vbool64_t vm, const int64_t *rs1, size_t vl) {
  return __riscv_vlseg4e64(vm, rs1, vl);
}

vint64m2x4_t test_vlseg4e64_v_i64m2x4_m(vbool32_t vm, const int64_t *rs1, size_t vl) {
  return __riscv_vlseg4e64(vm, rs1, vl);
}

vuint64m1x4_t test_vlseg4e64_v_u64m1x4_m(vbool64_t vm, const uint64_t *rs1, size_t vl) {
  return __riscv_vlseg4e64(vm, rs1, vl);
}

vuint64m2x4_t test_vlseg4e64_v_u64m2x4_m(vbool32_t vm, const uint64_t *rs1, size_t vl) {
  return __riscv_vlseg4e64(vm, rs1, vl);
}
/* { dg-final { scan-assembler-times {vseti?vli\s+[a-z0-9]+,\s*[a-z0-9]+,\s*e[0-9]+,\s*mf?[1248],\s*t[au],\s*m[au]\s+vlseg4e64\.[ivxfswum.]+\s+} 6 } } */
