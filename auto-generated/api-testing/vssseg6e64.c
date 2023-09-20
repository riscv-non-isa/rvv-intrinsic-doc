#include <riscv_vector.h>
#include <stdint.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
void test_vssseg6e64_v_f64m1x6(float64_t *rs1, ptrdiff_t rs2,
                               vfloat64m1x6_t vs3, size_t vl) {
  return __riscv_vssseg6e64_v_f64m1x6(rs1, rs2, vs3, vl);
}

void test_vssseg6e64_v_i64m1x6(int64_t *rs1, ptrdiff_t rs2, vint64m1x6_t vs3,
                               size_t vl) {
  return __riscv_vssseg6e64_v_i64m1x6(rs1, rs2, vs3, vl);
}

void test_vssseg6e64_v_u64m1x6(uint64_t *rs1, ptrdiff_t rs2, vuint64m1x6_t vs3,
                               size_t vl) {
  return __riscv_vssseg6e64_v_u64m1x6(rs1, rs2, vs3, vl);
}

void test_vssseg6e64_v_f64m1x6_m(vbool64_t vm, float64_t *rs1, ptrdiff_t rs2,
                                 vfloat64m1x6_t vs3, size_t vl) {
  return __riscv_vssseg6e64_v_f64m1x6_m(vm, rs1, rs2, vs3, vl);
}

void test_vssseg6e64_v_i64m1x6_m(vbool64_t vm, int64_t *rs1, ptrdiff_t rs2,
                                 vint64m1x6_t vs3, size_t vl) {
  return __riscv_vssseg6e64_v_i64m1x6_m(vm, rs1, rs2, vs3, vl);
}

void test_vssseg6e64_v_u64m1x6_m(vbool64_t vm, uint64_t *rs1, ptrdiff_t rs2,
                                 vuint64m1x6_t vs3, size_t vl) {
  return __riscv_vssseg6e64_v_u64m1x6_m(vm, rs1, rs2, vs3, vl);
}
