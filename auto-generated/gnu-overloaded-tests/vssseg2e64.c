/* { dg-do compile } */
/* { dg-options "-march=rv64gcv_zvfh -mabi=lp64d -Wno-psabi -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;

void test_vssseg2e64_v_f64m1x2(float64_t *rs1, ptrdiff_t rs2, vfloat64m1x2_t vs3, size_t vl) {
  return __riscv_vssseg2e64(rs1, rs2, vs3, vl);
}

void test_vssseg2e64_v_f64m2x2(float64_t *rs1, ptrdiff_t rs2, vfloat64m2x2_t vs3, size_t vl) {
  return __riscv_vssseg2e64(rs1, rs2, vs3, vl);
}

void test_vssseg2e64_v_f64m4x2(float64_t *rs1, ptrdiff_t rs2, vfloat64m4x2_t vs3, size_t vl) {
  return __riscv_vssseg2e64(rs1, rs2, vs3, vl);
}

void test_vssseg2e64_v_i64m1x2(int64_t *rs1, ptrdiff_t rs2, vint64m1x2_t vs3, size_t vl) {
  return __riscv_vssseg2e64(rs1, rs2, vs3, vl);
}

void test_vssseg2e64_v_i64m2x2(int64_t *rs1, ptrdiff_t rs2, vint64m2x2_t vs3, size_t vl) {
  return __riscv_vssseg2e64(rs1, rs2, vs3, vl);
}

void test_vssseg2e64_v_i64m4x2(int64_t *rs1, ptrdiff_t rs2, vint64m4x2_t vs3, size_t vl) {
  return __riscv_vssseg2e64(rs1, rs2, vs3, vl);
}

void test_vssseg2e64_v_u64m1x2(uint64_t *rs1, ptrdiff_t rs2, vuint64m1x2_t vs3, size_t vl) {
  return __riscv_vssseg2e64(rs1, rs2, vs3, vl);
}

void test_vssseg2e64_v_u64m2x2(uint64_t *rs1, ptrdiff_t rs2, vuint64m2x2_t vs3, size_t vl) {
  return __riscv_vssseg2e64(rs1, rs2, vs3, vl);
}

void test_vssseg2e64_v_u64m4x2(uint64_t *rs1, ptrdiff_t rs2, vuint64m4x2_t vs3, size_t vl) {
  return __riscv_vssseg2e64(rs1, rs2, vs3, vl);
}

void test_vssseg2e64_v_f64m1x2_m(vbool64_t vm, float64_t *rs1, ptrdiff_t rs2, vfloat64m1x2_t vs3, size_t vl) {
  return __riscv_vssseg2e64(vm, rs1, rs2, vs3, vl);
}

void test_vssseg2e64_v_f64m2x2_m(vbool32_t vm, float64_t *rs1, ptrdiff_t rs2, vfloat64m2x2_t vs3, size_t vl) {
  return __riscv_vssseg2e64(vm, rs1, rs2, vs3, vl);
}

void test_vssseg2e64_v_f64m4x2_m(vbool16_t vm, float64_t *rs1, ptrdiff_t rs2, vfloat64m4x2_t vs3, size_t vl) {
  return __riscv_vssseg2e64(vm, rs1, rs2, vs3, vl);
}

void test_vssseg2e64_v_i64m1x2_m(vbool64_t vm, int64_t *rs1, ptrdiff_t rs2, vint64m1x2_t vs3, size_t vl) {
  return __riscv_vssseg2e64(vm, rs1, rs2, vs3, vl);
}

void test_vssseg2e64_v_i64m2x2_m(vbool32_t vm, int64_t *rs1, ptrdiff_t rs2, vint64m2x2_t vs3, size_t vl) {
  return __riscv_vssseg2e64(vm, rs1, rs2, vs3, vl);
}

void test_vssseg2e64_v_i64m4x2_m(vbool16_t vm, int64_t *rs1, ptrdiff_t rs2, vint64m4x2_t vs3, size_t vl) {
  return __riscv_vssseg2e64(vm, rs1, rs2, vs3, vl);
}

void test_vssseg2e64_v_u64m1x2_m(vbool64_t vm, uint64_t *rs1, ptrdiff_t rs2, vuint64m1x2_t vs3, size_t vl) {
  return __riscv_vssseg2e64(vm, rs1, rs2, vs3, vl);
}

void test_vssseg2e64_v_u64m2x2_m(vbool32_t vm, uint64_t *rs1, ptrdiff_t rs2, vuint64m2x2_t vs3, size_t vl) {
  return __riscv_vssseg2e64(vm, rs1, rs2, vs3, vl);
}

void test_vssseg2e64_v_u64m4x2_m(vbool16_t vm, uint64_t *rs1, ptrdiff_t rs2, vuint64m4x2_t vs3, size_t vl) {
  return __riscv_vssseg2e64(vm, rs1, rs2, vs3, vl);
}
/* { dg-final { scan-assembler-times {vseti?vli\s+[a-z0-9]+,\s*[a-z0-9]+,\s*e[0-9]+,\s*mf?[1248],\s*t[au],\s*m[au]\s+vssseg2e64\.[ivxfswum.]+\s+} 18 } } */
