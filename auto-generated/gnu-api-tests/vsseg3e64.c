/* { dg-do compile } */
/* { dg-options "-march=rv64gcv_zvfh -mabi=lp64d -Wno-psabi -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
void test_vsseg3e64_v_f64m1x3(float64_t *base, vfloat64m1x3_t v_tuple, size_t vl) {
  return __riscv_vsseg3e64_v_f64m1x3(base, v_tuple, vl);
}

void test_vsseg3e64_v_f64m2x3(float64_t *base, vfloat64m2x3_t v_tuple, size_t vl) {
  return __riscv_vsseg3e64_v_f64m2x3(base, v_tuple, vl);
}

void test_vsseg3e64_v_i64m1x3(int64_t *base, vint64m1x3_t v_tuple, size_t vl) {
  return __riscv_vsseg3e64_v_i64m1x3(base, v_tuple, vl);
}

void test_vsseg3e64_v_i64m2x3(int64_t *base, vint64m2x3_t v_tuple, size_t vl) {
  return __riscv_vsseg3e64_v_i64m2x3(base, v_tuple, vl);
}

void test_vsseg3e64_v_u64m1x3(uint64_t *base, vuint64m1x3_t v_tuple, size_t vl) {
  return __riscv_vsseg3e64_v_u64m1x3(base, v_tuple, vl);
}

void test_vsseg3e64_v_u64m2x3(uint64_t *base, vuint64m2x3_t v_tuple, size_t vl) {
  return __riscv_vsseg3e64_v_u64m2x3(base, v_tuple, vl);
}

void test_vsseg3e64_v_f64m1x3_m(vbool64_t mask, float64_t *base, vfloat64m1x3_t v_tuple, size_t vl) {
  return __riscv_vsseg3e64_v_f64m1x3_m(mask, base, v_tuple, vl);
}

void test_vsseg3e64_v_f64m2x3_m(vbool32_t mask, float64_t *base, vfloat64m2x3_t v_tuple, size_t vl) {
  return __riscv_vsseg3e64_v_f64m2x3_m(mask, base, v_tuple, vl);
}

void test_vsseg3e64_v_i64m1x3_m(vbool64_t mask, int64_t *base, vint64m1x3_t v_tuple, size_t vl) {
  return __riscv_vsseg3e64_v_i64m1x3_m(mask, base, v_tuple, vl);
}

void test_vsseg3e64_v_i64m2x3_m(vbool32_t mask, int64_t *base, vint64m2x3_t v_tuple, size_t vl) {
  return __riscv_vsseg3e64_v_i64m2x3_m(mask, base, v_tuple, vl);
}

void test_vsseg3e64_v_u64m1x3_m(vbool64_t mask, uint64_t *base, vuint64m1x3_t v_tuple, size_t vl) {
  return __riscv_vsseg3e64_v_u64m1x3_m(mask, base, v_tuple, vl);
}

void test_vsseg3e64_v_u64m2x3_m(vbool32_t mask, uint64_t *base, vuint64m2x3_t v_tuple, size_t vl) {
  return __riscv_vsseg3e64_v_u64m2x3_m(mask, base, v_tuple, vl);
}

