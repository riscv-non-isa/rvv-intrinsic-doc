#include <riscv_vector.h>
#include <stdint.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;

void test_vse64_v_f64m1(float64_t *rs1, vfloat64m1_t vs3, size_t vl) {
  return __riscv_vse64_v_f64m1(rs1, vs3, vl);
}

void test_vse64_v_f64m2(float64_t *rs1, vfloat64m2_t vs3, size_t vl) {
  return __riscv_vse64_v_f64m2(rs1, vs3, vl);
}

void test_vse64_v_f64m4(float64_t *rs1, vfloat64m4_t vs3, size_t vl) {
  return __riscv_vse64_v_f64m4(rs1, vs3, vl);
}

void test_vse64_v_f64m8(float64_t *rs1, vfloat64m8_t vs3, size_t vl) {
  return __riscv_vse64_v_f64m8(rs1, vs3, vl);
}

void test_vse64_v_i64m1(int64_t *rs1, vint64m1_t vs3, size_t vl) {
  return __riscv_vse64_v_i64m1(rs1, vs3, vl);
}

void test_vse64_v_i64m2(int64_t *rs1, vint64m2_t vs3, size_t vl) {
  return __riscv_vse64_v_i64m2(rs1, vs3, vl);
}

void test_vse64_v_i64m4(int64_t *rs1, vint64m4_t vs3, size_t vl) {
  return __riscv_vse64_v_i64m4(rs1, vs3, vl);
}

void test_vse64_v_i64m8(int64_t *rs1, vint64m8_t vs3, size_t vl) {
  return __riscv_vse64_v_i64m8(rs1, vs3, vl);
}

void test_vse64_v_u64m1(uint64_t *rs1, vuint64m1_t vs3, size_t vl) {
  return __riscv_vse64_v_u64m1(rs1, vs3, vl);
}

void test_vse64_v_u64m2(uint64_t *rs1, vuint64m2_t vs3, size_t vl) {
  return __riscv_vse64_v_u64m2(rs1, vs3, vl);
}

void test_vse64_v_u64m4(uint64_t *rs1, vuint64m4_t vs3, size_t vl) {
  return __riscv_vse64_v_u64m4(rs1, vs3, vl);
}

void test_vse64_v_u64m8(uint64_t *rs1, vuint64m8_t vs3, size_t vl) {
  return __riscv_vse64_v_u64m8(rs1, vs3, vl);
}

void test_vse64_v_f64m1_m(vbool64_t vm, float64_t *rs1, vfloat64m1_t vs3,
                          size_t vl) {
  return __riscv_vse64_v_f64m1_m(vm, rs1, vs3, vl);
}

void test_vse64_v_f64m2_m(vbool32_t vm, float64_t *rs1, vfloat64m2_t vs3,
                          size_t vl) {
  return __riscv_vse64_v_f64m2_m(vm, rs1, vs3, vl);
}

void test_vse64_v_f64m4_m(vbool16_t vm, float64_t *rs1, vfloat64m4_t vs3,
                          size_t vl) {
  return __riscv_vse64_v_f64m4_m(vm, rs1, vs3, vl);
}

void test_vse64_v_f64m8_m(vbool8_t vm, float64_t *rs1, vfloat64m8_t vs3,
                          size_t vl) {
  return __riscv_vse64_v_f64m8_m(vm, rs1, vs3, vl);
}

void test_vse64_v_i64m1_m(vbool64_t vm, int64_t *rs1, vint64m1_t vs3,
                          size_t vl) {
  return __riscv_vse64_v_i64m1_m(vm, rs1, vs3, vl);
}

void test_vse64_v_i64m2_m(vbool32_t vm, int64_t *rs1, vint64m2_t vs3,
                          size_t vl) {
  return __riscv_vse64_v_i64m2_m(vm, rs1, vs3, vl);
}

void test_vse64_v_i64m4_m(vbool16_t vm, int64_t *rs1, vint64m4_t vs3,
                          size_t vl) {
  return __riscv_vse64_v_i64m4_m(vm, rs1, vs3, vl);
}

void test_vse64_v_i64m8_m(vbool8_t vm, int64_t *rs1, vint64m8_t vs3,
                          size_t vl) {
  return __riscv_vse64_v_i64m8_m(vm, rs1, vs3, vl);
}

void test_vse64_v_u64m1_m(vbool64_t vm, uint64_t *rs1, vuint64m1_t vs3,
                          size_t vl) {
  return __riscv_vse64_v_u64m1_m(vm, rs1, vs3, vl);
}

void test_vse64_v_u64m2_m(vbool32_t vm, uint64_t *rs1, vuint64m2_t vs3,
                          size_t vl) {
  return __riscv_vse64_v_u64m2_m(vm, rs1, vs3, vl);
}

void test_vse64_v_u64m4_m(vbool16_t vm, uint64_t *rs1, vuint64m4_t vs3,
                          size_t vl) {
  return __riscv_vse64_v_u64m4_m(vm, rs1, vs3, vl);
}

void test_vse64_v_u64m8_m(vbool8_t vm, uint64_t *rs1, vuint64m8_t vs3,
                          size_t vl) {
  return __riscv_vse64_v_u64m8_m(vm, rs1, vs3, vl);
}
