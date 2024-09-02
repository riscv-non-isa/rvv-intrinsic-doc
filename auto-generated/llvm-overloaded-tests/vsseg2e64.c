// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -target-feature +zfh \
// RUN:   -target-feature +zvfh -disable-O0-optnone \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

void test_vsseg2e64_v_f64m1x2(double *rs1, vfloat64m1x2_t vs3, size_t vl) {
  return __riscv_vsseg2e64(rs1, vs3, vl);
}

void test_vsseg2e64_v_f64m2x2(double *rs1, vfloat64m2x2_t vs3, size_t vl) {
  return __riscv_vsseg2e64(rs1, vs3, vl);
}

void test_vsseg2e64_v_f64m4x2(double *rs1, vfloat64m4x2_t vs3, size_t vl) {
  return __riscv_vsseg2e64(rs1, vs3, vl);
}

void test_vsseg2e64_v_i64m1x2(int64_t *rs1, vint64m1x2_t vs3, size_t vl) {
  return __riscv_vsseg2e64(rs1, vs3, vl);
}

void test_vsseg2e64_v_i64m2x2(int64_t *rs1, vint64m2x2_t vs3, size_t vl) {
  return __riscv_vsseg2e64(rs1, vs3, vl);
}

void test_vsseg2e64_v_i64m4x2(int64_t *rs1, vint64m4x2_t vs3, size_t vl) {
  return __riscv_vsseg2e64(rs1, vs3, vl);
}

void test_vsseg2e64_v_u64m1x2(uint64_t *rs1, vuint64m1x2_t vs3, size_t vl) {
  return __riscv_vsseg2e64(rs1, vs3, vl);
}

void test_vsseg2e64_v_u64m2x2(uint64_t *rs1, vuint64m2x2_t vs3, size_t vl) {
  return __riscv_vsseg2e64(rs1, vs3, vl);
}

void test_vsseg2e64_v_u64m4x2(uint64_t *rs1, vuint64m4x2_t vs3, size_t vl) {
  return __riscv_vsseg2e64(rs1, vs3, vl);
}

void test_vsseg2e64_v_f64m1x2_m(vbool64_t vm, double *rs1, vfloat64m1x2_t vs3,
                                size_t vl) {
  return __riscv_vsseg2e64(vm, rs1, vs3, vl);
}

void test_vsseg2e64_v_f64m2x2_m(vbool32_t vm, double *rs1, vfloat64m2x2_t vs3,
                                size_t vl) {
  return __riscv_vsseg2e64(vm, rs1, vs3, vl);
}

void test_vsseg2e64_v_f64m4x2_m(vbool16_t vm, double *rs1, vfloat64m4x2_t vs3,
                                size_t vl) {
  return __riscv_vsseg2e64(vm, rs1, vs3, vl);
}

void test_vsseg2e64_v_i64m1x2_m(vbool64_t vm, int64_t *rs1, vint64m1x2_t vs3,
                                size_t vl) {
  return __riscv_vsseg2e64(vm, rs1, vs3, vl);
}

void test_vsseg2e64_v_i64m2x2_m(vbool32_t vm, int64_t *rs1, vint64m2x2_t vs3,
                                size_t vl) {
  return __riscv_vsseg2e64(vm, rs1, vs3, vl);
}

void test_vsseg2e64_v_i64m4x2_m(vbool16_t vm, int64_t *rs1, vint64m4x2_t vs3,
                                size_t vl) {
  return __riscv_vsseg2e64(vm, rs1, vs3, vl);
}

void test_vsseg2e64_v_u64m1x2_m(vbool64_t vm, uint64_t *rs1, vuint64m1x2_t vs3,
                                size_t vl) {
  return __riscv_vsseg2e64(vm, rs1, vs3, vl);
}

void test_vsseg2e64_v_u64m2x2_m(vbool32_t vm, uint64_t *rs1, vuint64m2x2_t vs3,
                                size_t vl) {
  return __riscv_vsseg2e64(vm, rs1, vs3, vl);
}

void test_vsseg2e64_v_u64m4x2_m(vbool16_t vm, uint64_t *rs1, vuint64m4x2_t vs3,
                                size_t vl) {
  return __riscv_vsseg2e64(vm, rs1, vs3, vl);
}
