#include <riscv_vector.h>
#include <stdint.h>

void test_vssseg8e16_v_f16mf4x8(_Float16 *rs1, ptrdiff_t rs2,
                                vfloat16mf4x8_t vs3, size_t vl) {
  return __riscv_vssseg8e16_v_f16mf4x8(rs1, rs2, vs3, vl);
}

void test_vssseg8e16_v_f16mf2x8(_Float16 *rs1, ptrdiff_t rs2,
                                vfloat16mf2x8_t vs3, size_t vl) {
  return __riscv_vssseg8e16_v_f16mf2x8(rs1, rs2, vs3, vl);
}

void test_vssseg8e16_v_f16m1x8(_Float16 *rs1, ptrdiff_t rs2, vfloat16m1x8_t vs3,
                               size_t vl) {
  return __riscv_vssseg8e16_v_f16m1x8(rs1, rs2, vs3, vl);
}

void test_vssseg8e16_v_f16mf4x8_m(vbool64_t vm, _Float16 *rs1, ptrdiff_t rs2,
                                  vfloat16mf4x8_t vs3, size_t vl) {
  return __riscv_vssseg8e16_v_f16mf4x8_m(vm, rs1, rs2, vs3, vl);
}

void test_vssseg8e16_v_f16mf2x8_m(vbool32_t vm, _Float16 *rs1, ptrdiff_t rs2,
                                  vfloat16mf2x8_t vs3, size_t vl) {
  return __riscv_vssseg8e16_v_f16mf2x8_m(vm, rs1, rs2, vs3, vl);
}

void test_vssseg8e16_v_f16m1x8_m(vbool16_t vm, _Float16 *rs1, ptrdiff_t rs2,
                                 vfloat16m1x8_t vs3, size_t vl) {
  return __riscv_vssseg8e16_v_f16m1x8_m(vm, rs1, rs2, vs3, vl);
}
