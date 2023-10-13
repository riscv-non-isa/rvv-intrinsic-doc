/* { dg-do compile } */
/* { dg-options "-march=rv64gcv_zvfh -mabi=lp64d -Wno-psabi -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
void test_vsseg6e64_v_f64m1x6(float64_t *rs1, vfloat64m1x6_t vs3, size_t vl) {
  return __riscv_vsseg6e64_v_f64m1x6(rs1, vs3, vl);
}

void test_vsseg6e64_v_i64m1x6(int64_t *rs1, vint64m1x6_t vs3, size_t vl) {
  return __riscv_vsseg6e64_v_i64m1x6(rs1, vs3, vl);
}

void test_vsseg6e64_v_u64m1x6(uint64_t *rs1, vuint64m1x6_t vs3, size_t vl) {
  return __riscv_vsseg6e64_v_u64m1x6(rs1, vs3, vl);
}

void test_vsseg6e64_v_f64m1x6_m(vbool64_t vm, float64_t *rs1, vfloat64m1x6_t vs3, size_t vl) {
  return __riscv_vsseg6e64_v_f64m1x6_m(vm, rs1, vs3, vl);
}

void test_vsseg6e64_v_i64m1x6_m(vbool64_t vm, int64_t *rs1, vint64m1x6_t vs3, size_t vl) {
  return __riscv_vsseg6e64_v_i64m1x6_m(vm, rs1, vs3, vl);
}

void test_vsseg6e64_v_u64m1x6_m(vbool64_t vm, uint64_t *rs1, vuint64m1x6_t vs3, size_t vl) {
  return __riscv_vsseg6e64_v_u64m1x6_m(vm, rs1, vs3, vl);
}

/* { dg-final { scan-assembler-times {vseti?vli\s+[a-z0-9]+,\s*[a-z0-9]+,\s*e[0-9]+,\s*mf?[1248],\s*t[au],\s*m[au]\s+vsseg6e64\.[ivxfswum.]+\s+} 6 } } */
