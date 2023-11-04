#include <riscv_vector.h>
#include <stdint.h>

void test_vsseg6e16_v_bf16mf4x6(__bf16 *rs1, vbfloat16mf4x6_t vs3, size_t vl) {
  return __riscv_vsseg6e16(rs1, vs3, vl);
}

void test_vsseg6e16_v_bf16mf2x6(__bf16 *rs1, vbfloat16mf2x6_t vs3, size_t vl) {
  return __riscv_vsseg6e16(rs1, vs3, vl);
}

void test_vsseg6e16_v_bf16m1x6(__bf16 *rs1, vbfloat16m1x6_t vs3, size_t vl) {
  return __riscv_vsseg6e16(rs1, vs3, vl);
}

void test_vsseg6e16_v_bf16mf4x6_m(vbool64_t vm, __bf16 *rs1,
                                  vbfloat16mf4x6_t vs3, size_t vl) {
  return __riscv_vsseg6e16(vm, rs1, vs3, vl);
}

void test_vsseg6e16_v_bf16mf2x6_m(vbool32_t vm, __bf16 *rs1,
                                  vbfloat16mf2x6_t vs3, size_t vl) {
  return __riscv_vsseg6e16(vm, rs1, vs3, vl);
}

void test_vsseg6e16_v_bf16m1x6_m(vbool16_t vm, __bf16 *rs1, vbfloat16m1x6_t vs3,
                                 size_t vl) {
  return __riscv_vsseg6e16(vm, rs1, vs3, vl);
}
