// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -target-feature +zfh \
// RUN:   -target-feature +experimental-zvfh -disable-O0-optnone  \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

void test_vse64_v_f64m1(double *base, vfloat64m1_t value, size_t vl) {
  return vse64_v_f64m1(base, value, vl);
}

void test_vse64_v_f64m2(double *base, vfloat64m2_t value, size_t vl) {
  return vse64_v_f64m2(base, value, vl);
}

void test_vse64_v_f64m4(double *base, vfloat64m4_t value, size_t vl) {
  return vse64_v_f64m4(base, value, vl);
}

void test_vse64_v_f64m8(double *base, vfloat64m8_t value, size_t vl) {
  return vse64_v_f64m8(base, value, vl);
}

void test_vse64_v_i64m1(int64_t *base, vint64m1_t value, size_t vl) {
  return vse64_v_i64m1(base, value, vl);
}

void test_vse64_v_i64m2(int64_t *base, vint64m2_t value, size_t vl) {
  return vse64_v_i64m2(base, value, vl);
}

void test_vse64_v_i64m4(int64_t *base, vint64m4_t value, size_t vl) {
  return vse64_v_i64m4(base, value, vl);
}

void test_vse64_v_i64m8(int64_t *base, vint64m8_t value, size_t vl) {
  return vse64_v_i64m8(base, value, vl);
}

void test_vse64_v_u64m1(uint64_t *base, vuint64m1_t value, size_t vl) {
  return vse64_v_u64m1(base, value, vl);
}

void test_vse64_v_u64m2(uint64_t *base, vuint64m2_t value, size_t vl) {
  return vse64_v_u64m2(base, value, vl);
}

void test_vse64_v_u64m4(uint64_t *base, vuint64m4_t value, size_t vl) {
  return vse64_v_u64m4(base, value, vl);
}

void test_vse64_v_u64m8(uint64_t *base, vuint64m8_t value, size_t vl) {
  return vse64_v_u64m8(base, value, vl);
}

void test_vse64_v_f64m1_m(vbool64_t mask, double *base, vfloat64m1_t value, size_t vl) {
  return vse64_v_f64m1_m(mask, base, value, vl);
}

void test_vse64_v_f64m2_m(vbool32_t mask, double *base, vfloat64m2_t value, size_t vl) {
  return vse64_v_f64m2_m(mask, base, value, vl);
}

void test_vse64_v_f64m4_m(vbool16_t mask, double *base, vfloat64m4_t value, size_t vl) {
  return vse64_v_f64m4_m(mask, base, value, vl);
}

void test_vse64_v_f64m8_m(vbool8_t mask, double *base, vfloat64m8_t value, size_t vl) {
  return vse64_v_f64m8_m(mask, base, value, vl);
}

void test_vse64_v_i64m1_m(vbool64_t mask, int64_t *base, vint64m1_t value, size_t vl) {
  return vse64_v_i64m1_m(mask, base, value, vl);
}

void test_vse64_v_i64m2_m(vbool32_t mask, int64_t *base, vint64m2_t value, size_t vl) {
  return vse64_v_i64m2_m(mask, base, value, vl);
}

void test_vse64_v_i64m4_m(vbool16_t mask, int64_t *base, vint64m4_t value, size_t vl) {
  return vse64_v_i64m4_m(mask, base, value, vl);
}

void test_vse64_v_i64m8_m(vbool8_t mask, int64_t *base, vint64m8_t value, size_t vl) {
  return vse64_v_i64m8_m(mask, base, value, vl);
}

void test_vse64_v_u64m1_m(vbool64_t mask, uint64_t *base, vuint64m1_t value, size_t vl) {
  return vse64_v_u64m1_m(mask, base, value, vl);
}

void test_vse64_v_u64m2_m(vbool32_t mask, uint64_t *base, vuint64m2_t value, size_t vl) {
  return vse64_v_u64m2_m(mask, base, value, vl);
}

void test_vse64_v_u64m4_m(vbool16_t mask, uint64_t *base, vuint64m4_t value, size_t vl) {
  return vse64_v_u64m4_m(mask, base, value, vl);
}

void test_vse64_v_u64m8_m(vbool8_t mask, uint64_t *base, vuint64m8_t value, size_t vl) {
  return vse64_v_u64m8_m(mask, base, value, vl);
}

