#include <riscv_vector.h>
#include <stdint.h>

void test_vssseg3e16_v_bf16mf4x3(__bf16 *rs1, ptrdiff_t rs2,
                                 vbfloat16mf4x3_t vs3, size_t vl) {
  return __riscv_vssseg3e16(rs1, rs2, vs3, vl);
}

void test_vssseg3e16_v_bf16mf2x3(__bf16 *rs1, ptrdiff_t rs2,
                                 vbfloat16mf2x3_t vs3, size_t vl) {
  return __riscv_vssseg3e16(rs1, rs2, vs3, vl);
}

void test_vssseg3e16_v_bf16m1x3(__bf16 *rs1, ptrdiff_t rs2, vbfloat16m1x3_t vs3,
                                size_t vl) {
  return __riscv_vssseg3e16(rs1, rs2, vs3, vl);
}

void test_vssseg3e16_v_bf16m2x3(__bf16 *rs1, ptrdiff_t rs2, vbfloat16m2x3_t vs3,
                                size_t vl) {
  return __riscv_vssseg3e16(rs1, rs2, vs3, vl);
}

void test_vssseg3e16_v_bf16mf4x3_m(vbool64_t vm, __bf16 *rs1, ptrdiff_t rs2,
                                   vbfloat16mf4x3_t vs3, size_t vl) {
  return __riscv_vssseg3e16(vm, rs1, rs2, vs3, vl);
}

void test_vssseg3e16_v_bf16mf2x3_m(vbool32_t vm, __bf16 *rs1, ptrdiff_t rs2,
                                   vbfloat16mf2x3_t vs3, size_t vl) {
  return __riscv_vssseg3e16(vm, rs1, rs2, vs3, vl);
}

void test_vssseg3e16_v_bf16m1x3_m(vbool16_t vm, __bf16 *rs1, ptrdiff_t rs2,
                                  vbfloat16m1x3_t vs3, size_t vl) {
  return __riscv_vssseg3e16(vm, rs1, rs2, vs3, vl);
}

void test_vssseg3e16_v_bf16m2x3_m(vbool8_t vm, __bf16 *rs1, ptrdiff_t rs2,
                                  vbfloat16m2x3_t vs3, size_t vl) {
  return __riscv_vssseg3e16(vm, rs1, rs2, vs3, vl);
}
