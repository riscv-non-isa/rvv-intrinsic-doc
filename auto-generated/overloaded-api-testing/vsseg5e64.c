#include <riscv_vector.h>
#include <stdint.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;

void test_vsseg5e64_v_f64m1x5(float64_t *rs1, vfloat64m1x5_t vs3, size_t vl) {
  return __riscv_vsseg5e64(rs1, vs3, vl);
}

void test_vsseg5e64_v_i64m1x5(int64_t *rs1, vint64m1x5_t vs3, size_t vl) {
  return __riscv_vsseg5e64(rs1, vs3, vl);
}

void test_vsseg5e64_v_u64m1x5(uint64_t *rs1, vuint64m1x5_t vs3, size_t vl) {
  return __riscv_vsseg5e64(rs1, vs3, vl);
}

void test_vsseg5e64_v_f64m1x5_m(vbool64_t vm, float64_t *rs1,
                                vfloat64m1x5_t vs3, size_t vl) {
  return __riscv_vsseg5e64(vm, rs1, vs3, vl);
}

void test_vsseg5e64_v_i64m1x5_m(vbool64_t vm, int64_t *rs1, vint64m1x5_t vs3,
                                size_t vl) {
  return __riscv_vsseg5e64(vm, rs1, vs3, vl);
}

void test_vsseg5e64_v_u64m1x5_m(vbool64_t vm, uint64_t *rs1, vuint64m1x5_t vs3,
                                size_t vl) {
  return __riscv_vsseg5e64(vm, rs1, vs3, vl);
}
