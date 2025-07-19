#include <riscv_vector.h>
#include <stdint.h>

void test_vsoxei64_v_bf16mf4(__bf16 *rs1, vuint64m1_t rs2, vbfloat16mf4_t vs3,
                             size_t vl) {
  return __riscv_vsoxei64(rs1, rs2, vs3, vl);
}

void test_vsoxei64_v_bf16mf2(__bf16 *rs1, vuint64m2_t rs2, vbfloat16mf2_t vs3,
                             size_t vl) {
  return __riscv_vsoxei64(rs1, rs2, vs3, vl);
}

void test_vsoxei64_v_bf16m1(__bf16 *rs1, vuint64m4_t rs2, vbfloat16m1_t vs3,
                            size_t vl) {
  return __riscv_vsoxei64(rs1, rs2, vs3, vl);
}

void test_vsoxei64_v_bf16m2(__bf16 *rs1, vuint64m8_t rs2, vbfloat16m2_t vs3,
                            size_t vl) {
  return __riscv_vsoxei64(rs1, rs2, vs3, vl);
}

void test_vsoxei64_v_bf16mf4_m(vbool64_t vm, __bf16 *rs1, vuint64m1_t rs2,
                               vbfloat16mf4_t vs3, size_t vl) {
  return __riscv_vsoxei64(vm, rs1, rs2, vs3, vl);
}

void test_vsoxei64_v_bf16mf2_m(vbool32_t vm, __bf16 *rs1, vuint64m2_t rs2,
                               vbfloat16mf2_t vs3, size_t vl) {
  return __riscv_vsoxei64(vm, rs1, rs2, vs3, vl);
}

void test_vsoxei64_v_bf16m1_m(vbool16_t vm, __bf16 *rs1, vuint64m4_t rs2,
                              vbfloat16m1_t vs3, size_t vl) {
  return __riscv_vsoxei64(vm, rs1, rs2, vs3, vl);
}

void test_vsoxei64_v_bf16m2_m(vbool8_t vm, __bf16 *rs1, vuint64m8_t rs2,
                              vbfloat16m2_t vs3, size_t vl) {
  return __riscv_vsoxei64(vm, rs1, rs2, vs3, vl);
}
