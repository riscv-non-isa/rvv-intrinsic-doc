#include <riscv_vector.h>
#include <stdint.h>

void test_vsseg6e64_v_f64m1x6(double *rs1, vfloat64m1x6_t vs3, size_t vl) {
  return __riscv_vsseg6e64(rs1, vs3, vl);
}

void test_vsseg6e64_v_i64m1x6(int64_t *rs1, vint64m1x6_t vs3, size_t vl) {
  return __riscv_vsseg6e64(rs1, vs3, vl);
}

void test_vsseg6e64_v_u64m1x6(uint64_t *rs1, vuint64m1x6_t vs3, size_t vl) {
  return __riscv_vsseg6e64(rs1, vs3, vl);
}

void test_vsseg6e64_v_f64m1x6_m(vbool64_t vm, double *rs1, vfloat64m1x6_t vs3,
                                size_t vl) {
  return __riscv_vsseg6e64(vm, rs1, vs3, vl);
}

void test_vsseg6e64_v_i64m1x6_m(vbool64_t vm, int64_t *rs1, vint64m1x6_t vs3,
                                size_t vl) {
  return __riscv_vsseg6e64(vm, rs1, vs3, vl);
}

void test_vsseg6e64_v_u64m1x6_m(vbool64_t vm, uint64_t *rs1, vuint64m1x6_t vs3,
                                size_t vl) {
  return __riscv_vsseg6e64(vm, rs1, vs3, vl);
}
