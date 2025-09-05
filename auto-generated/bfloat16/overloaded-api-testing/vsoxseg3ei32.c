#include <riscv_vector.h>
#include <stdint.h>

void test_vsoxseg3ei32_v_bf16mf4x3(__bf16 *rs1, vuint32mf2_t vs2,
                                   vbfloat16mf4x3_t vs3, size_t vl) {
  return __riscv_vsoxseg3ei32(rs1, vs2, vs3, vl);
}

void test_vsoxseg3ei32_v_bf16mf2x3(__bf16 *rs1, vuint32m1_t vs2,
                                   vbfloat16mf2x3_t vs3, size_t vl) {
  return __riscv_vsoxseg3ei32(rs1, vs2, vs3, vl);
}

void test_vsoxseg3ei32_v_bf16m1x3(__bf16 *rs1, vuint32m2_t vs2,
                                  vbfloat16m1x3_t vs3, size_t vl) {
  return __riscv_vsoxseg3ei32(rs1, vs2, vs3, vl);
}

void test_vsoxseg3ei32_v_bf16m2x3(__bf16 *rs1, vuint32m4_t vs2,
                                  vbfloat16m2x3_t vs3, size_t vl) {
  return __riscv_vsoxseg3ei32(rs1, vs2, vs3, vl);
}

void test_vsoxseg3ei32_v_bf16mf4x3_m(vbool64_t vm, __bf16 *rs1,
                                     vuint32mf2_t vs2, vbfloat16mf4x3_t vs3,
                                     size_t vl) {
  return __riscv_vsoxseg3ei32(vm, rs1, vs2, vs3, vl);
}

void test_vsoxseg3ei32_v_bf16mf2x3_m(vbool32_t vm, __bf16 *rs1, vuint32m1_t vs2,
                                     vbfloat16mf2x3_t vs3, size_t vl) {
  return __riscv_vsoxseg3ei32(vm, rs1, vs2, vs3, vl);
}

void test_vsoxseg3ei32_v_bf16m1x3_m(vbool16_t vm, __bf16 *rs1, vuint32m2_t vs2,
                                    vbfloat16m1x3_t vs3, size_t vl) {
  return __riscv_vsoxseg3ei32(vm, rs1, vs2, vs3, vl);
}

void test_vsoxseg3ei32_v_bf16m2x3_m(vbool8_t vm, __bf16 *rs1, vuint32m4_t vs2,
                                    vbfloat16m2x3_t vs3, size_t vl) {
  return __riscv_vsoxseg3ei32(vm, rs1, vs2, vs3, vl);
}
