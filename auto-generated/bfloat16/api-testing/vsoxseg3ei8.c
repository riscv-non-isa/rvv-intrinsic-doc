#include <riscv_vector.h>
#include <stdint.h>

void test_vsoxseg3ei8_v_bf16mf4x3(__bf16 *rs1, vuint8mf8_t vs2,
                                  vbfloat16mf4x3_t vs3, size_t vl) {
  return __riscv_vsoxseg3ei8_v_bf16mf4x3(rs1, vs2, vs3, vl);
}

void test_vsoxseg3ei8_v_bf16mf2x3(__bf16 *rs1, vuint8mf4_t vs2,
                                  vbfloat16mf2x3_t vs3, size_t vl) {
  return __riscv_vsoxseg3ei8_v_bf16mf2x3(rs1, vs2, vs3, vl);
}

void test_vsoxseg3ei8_v_bf16m1x3(__bf16 *rs1, vuint8mf2_t vs2,
                                 vbfloat16m1x3_t vs3, size_t vl) {
  return __riscv_vsoxseg3ei8_v_bf16m1x3(rs1, vs2, vs3, vl);
}

void test_vsoxseg3ei8_v_bf16m2x3(__bf16 *rs1, vuint8m1_t vs2,
                                 vbfloat16m2x3_t vs3, size_t vl) {
  return __riscv_vsoxseg3ei8_v_bf16m2x3(rs1, vs2, vs3, vl);
}

void test_vsoxseg3ei8_v_bf16mf4x3_m(vbool64_t vm, __bf16 *rs1, vuint8mf8_t vs2,
                                    vbfloat16mf4x3_t vs3, size_t vl) {
  return __riscv_vsoxseg3ei8_v_bf16mf4x3_m(vm, rs1, vs2, vs3, vl);
}

void test_vsoxseg3ei8_v_bf16mf2x3_m(vbool32_t vm, __bf16 *rs1, vuint8mf4_t vs2,
                                    vbfloat16mf2x3_t vs3, size_t vl) {
  return __riscv_vsoxseg3ei8_v_bf16mf2x3_m(vm, rs1, vs2, vs3, vl);
}

void test_vsoxseg3ei8_v_bf16m1x3_m(vbool16_t vm, __bf16 *rs1, vuint8mf2_t vs2,
                                   vbfloat16m1x3_t vs3, size_t vl) {
  return __riscv_vsoxseg3ei8_v_bf16m1x3_m(vm, rs1, vs2, vs3, vl);
}

void test_vsoxseg3ei8_v_bf16m2x3_m(vbool8_t vm, __bf16 *rs1, vuint8m1_t vs2,
                                   vbfloat16m2x3_t vs3, size_t vl) {
  return __riscv_vsoxseg3ei8_v_bf16m2x3_m(vm, rs1, vs2, vs3, vl);
}
