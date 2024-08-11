#include <riscv_vector.h>
#include <stdint.h>

void test_vssseg5e16_v_f16mf4x5(_Float16 *rs1, ptrdiff_t rs2,
                                vfloat16mf4x5_t vs3, size_t vl) {
  return __riscv_vssseg5e16(rs1, rs2, vs3, vl);
}

void test_vssseg5e16_v_f16mf2x5(_Float16 *rs1, ptrdiff_t rs2,
                                vfloat16mf2x5_t vs3, size_t vl) {
  return __riscv_vssseg5e16(rs1, rs2, vs3, vl);
}

void test_vssseg5e16_v_f16m1x5(_Float16 *rs1, ptrdiff_t rs2, vfloat16m1x5_t vs3,
                               size_t vl) {
  return __riscv_vssseg5e16(rs1, rs2, vs3, vl);
}

void test_vssseg5e16_v_f16mf4x5_m(vbool64_t vm, _Float16 *rs1, ptrdiff_t rs2,
                                  vfloat16mf4x5_t vs3, size_t vl) {
  return __riscv_vssseg5e16(vm, rs1, rs2, vs3, vl);
}

void test_vssseg5e16_v_f16mf2x5_m(vbool32_t vm, _Float16 *rs1, ptrdiff_t rs2,
                                  vfloat16mf2x5_t vs3, size_t vl) {
  return __riscv_vssseg5e16(vm, rs1, rs2, vs3, vl);
}

void test_vssseg5e16_v_f16m1x5_m(vbool16_t vm, _Float16 *rs1, ptrdiff_t rs2,
                                 vfloat16m1x5_t vs3, size_t vl) {
  return __riscv_vssseg5e16(vm, rs1, rs2, vs3, vl);
}
