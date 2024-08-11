#include <riscv_vector.h>
#include <stdint.h>

void test_vsseg3e64_v_i64m1x3(int64_t *rs1, vint64m1x3_t vs3, size_t vl) {
  return __riscv_vsseg3e64(rs1, vs3, vl);
}

void test_vsseg3e64_v_i64m2x3(int64_t *rs1, vint64m2x3_t vs3, size_t vl) {
  return __riscv_vsseg3e64(rs1, vs3, vl);
}

void test_vsseg3e64_v_u64m1x3(uint64_t *rs1, vuint64m1x3_t vs3, size_t vl) {
  return __riscv_vsseg3e64(rs1, vs3, vl);
}

void test_vsseg3e64_v_u64m2x3(uint64_t *rs1, vuint64m2x3_t vs3, size_t vl) {
  return __riscv_vsseg3e64(rs1, vs3, vl);
}

void test_vsseg3e64_v_i64m1x3_m(vbool64_t vm, int64_t *rs1, vint64m1x3_t vs3,
                                size_t vl) {
  return __riscv_vsseg3e64(vm, rs1, vs3, vl);
}

void test_vsseg3e64_v_i64m2x3_m(vbool32_t vm, int64_t *rs1, vint64m2x3_t vs3,
                                size_t vl) {
  return __riscv_vsseg3e64(vm, rs1, vs3, vl);
}

void test_vsseg3e64_v_u64m1x3_m(vbool64_t vm, uint64_t *rs1, vuint64m1x3_t vs3,
                                size_t vl) {
  return __riscv_vsseg3e64(vm, rs1, vs3, vl);
}

void test_vsseg3e64_v_u64m2x3_m(vbool32_t vm, uint64_t *rs1, vuint64m2x3_t vs3,
                                size_t vl) {
  return __riscv_vsseg3e64(vm, rs1, vs3, vl);
}

void test_vsseg3e64_v_f64m1x3(double *rs1, vfloat64m1x3_t vs3, size_t vl) {
  return __riscv_vsseg3e64(rs1, vs3, vl);
}

void test_vsseg3e64_v_f64m2x3(double *rs1, vfloat64m2x3_t vs3, size_t vl) {
  return __riscv_vsseg3e64(rs1, vs3, vl);
}

void test_vsseg3e64_v_f64m1x3_m(vbool64_t vm, double *rs1, vfloat64m1x3_t vs3,
                                size_t vl) {
  return __riscv_vsseg3e64(vm, rs1, vs3, vl);
}

void test_vsseg3e64_v_f64m2x3_m(vbool32_t vm, double *rs1, vfloat64m2x3_t vs3,
                                size_t vl) {
  return __riscv_vsseg3e64(vm, rs1, vs3, vl);
}
