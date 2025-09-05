#include <riscv_vector.h>
#include <stdint.h>

void test_vsseg7e16_v_bf16mf4x7(__bf16 *rs1, vbfloat16mf4x7_t vs3, size_t vl) {
  return __riscv_vsseg7e16(rs1, vs3, vl);
}

void test_vsseg7e16_v_bf16mf2x7(__bf16 *rs1, vbfloat16mf2x7_t vs3, size_t vl) {
  return __riscv_vsseg7e16(rs1, vs3, vl);
}

void test_vsseg7e16_v_bf16m1x7(__bf16 *rs1, vbfloat16m1x7_t vs3, size_t vl) {
  return __riscv_vsseg7e16(rs1, vs3, vl);
}

void test_vsseg7e16_v_bf16mf4x7_m(vbool64_t vm, __bf16 *rs1,
                                  vbfloat16mf4x7_t vs3, size_t vl) {
  return __riscv_vsseg7e16(vm, rs1, vs3, vl);
}

void test_vsseg7e16_v_bf16mf2x7_m(vbool32_t vm, __bf16 *rs1,
                                  vbfloat16mf2x7_t vs3, size_t vl) {
  return __riscv_vsseg7e16(vm, rs1, vs3, vl);
}

void test_vsseg7e16_v_bf16m1x7_m(vbool16_t vm, __bf16 *rs1, vbfloat16m1x7_t vs3,
                                 size_t vl) {
  return __riscv_vsseg7e16(vm, rs1, vs3, vl);
}
