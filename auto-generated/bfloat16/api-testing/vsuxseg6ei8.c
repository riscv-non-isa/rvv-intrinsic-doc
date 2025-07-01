#include <riscv_vector.h>
#include <stdint.h>

void test_vsuxseg6ei8_v_bf16mf4x6(__bf16 *rs1, vuint8mf8_t vs2,
                                  vbfloat16mf4x6_t vs3, size_t vl) {
  return __riscv_vsuxseg6ei8_v_bf16mf4x6(rs1, vs2, vs3, vl);
}

void test_vsuxseg6ei8_v_bf16mf2x6(__bf16 *rs1, vuint8mf4_t vs2,
                                  vbfloat16mf2x6_t vs3, size_t vl) {
  return __riscv_vsuxseg6ei8_v_bf16mf2x6(rs1, vs2, vs3, vl);
}

void test_vsuxseg6ei8_v_bf16m1x6(__bf16 *rs1, vuint8mf2_t vs2,
                                 vbfloat16m1x6_t vs3, size_t vl) {
  return __riscv_vsuxseg6ei8_v_bf16m1x6(rs1, vs2, vs3, vl);
}

void test_vsuxseg6ei8_v_bf16mf4x6_m(vbool64_t vm, __bf16 *rs1, vuint8mf8_t vs2,
                                    vbfloat16mf4x6_t vs3, size_t vl) {
  return __riscv_vsuxseg6ei8_v_bf16mf4x6_m(vm, rs1, vs2, vs3, vl);
}

void test_vsuxseg6ei8_v_bf16mf2x6_m(vbool32_t vm, __bf16 *rs1, vuint8mf4_t vs2,
                                    vbfloat16mf2x6_t vs3, size_t vl) {
  return __riscv_vsuxseg6ei8_v_bf16mf2x6_m(vm, rs1, vs2, vs3, vl);
}

void test_vsuxseg6ei8_v_bf16m1x6_m(vbool16_t vm, __bf16 *rs1, vuint8mf2_t vs2,
                                   vbfloat16m1x6_t vs3, size_t vl) {
  return __riscv_vsuxseg6ei8_v_bf16m1x6_m(vm, rs1, vs2, vs3, vl);
}
