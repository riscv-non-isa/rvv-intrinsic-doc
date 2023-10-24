#include <riscv_vector.h>
#include <stdint.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;

void test_vssseg8e64_v_f64m1x8(float64_t *rs1, ptrdiff_t rs2,
                               vfloat64m1x8_t vs3, size_t vl) {
  return __riscv_vssseg8e64_v_f64m1x8(rs1, rs2, vs3, vl);
}

void test_vssseg8e64_v_i64m1x8(int64_t *rs1, ptrdiff_t rs2, vint64m1x8_t vs3,
                               size_t vl) {
  return __riscv_vssseg8e64_v_i64m1x8(rs1, rs2, vs3, vl);
}

void test_vssseg8e64_v_u64m1x8(uint64_t *rs1, ptrdiff_t rs2, vuint64m1x8_t vs3,
                               size_t vl) {
  return __riscv_vssseg8e64_v_u64m1x8(rs1, rs2, vs3, vl);
}

void test_vssseg8e64_v_f64m1x8_m(vbool64_t vm, float64_t *rs1, ptrdiff_t rs2,
                                 vfloat64m1x8_t vs3, size_t vl) {
  return __riscv_vssseg8e64_v_f64m1x8_m(vm, rs1, rs2, vs3, vl);
}

void test_vssseg8e64_v_i64m1x8_m(vbool64_t vm, int64_t *rs1, ptrdiff_t rs2,
                                 vint64m1x8_t vs3, size_t vl) {
  return __riscv_vssseg8e64_v_i64m1x8_m(vm, rs1, rs2, vs3, vl);
}

void test_vssseg8e64_v_u64m1x8_m(vbool64_t vm, uint64_t *rs1, ptrdiff_t rs2,
                                 vuint64m1x8_t vs3, size_t vl) {
  return __riscv_vssseg8e64_v_u64m1x8_m(vm, rs1, rs2, vs3, vl);
}
