#include <riscv_vector.h>
#include <stdint.h>

void test_vsuxseg5ei64_v_bf16mf4x5(__bf16 *rs1, vuint64m1_t vs2,
                                   vbfloat16mf4x5_t vs3, size_t vl) {
  return __riscv_vsuxseg5ei64_v_bf16mf4x5(rs1, vs2, vs3, vl);
}

void test_vsuxseg5ei64_v_bf16mf2x5(__bf16 *rs1, vuint64m2_t vs2,
                                   vbfloat16mf2x5_t vs3, size_t vl) {
  return __riscv_vsuxseg5ei64_v_bf16mf2x5(rs1, vs2, vs3, vl);
}

void test_vsuxseg5ei64_v_bf16m1x5(__bf16 *rs1, vuint64m4_t vs2,
                                  vbfloat16m1x5_t vs3, size_t vl) {
  return __riscv_vsuxseg5ei64_v_bf16m1x5(rs1, vs2, vs3, vl);
}

void test_vsuxseg5ei64_v_bf16mf4x5_m(vbool64_t vm, __bf16 *rs1, vuint64m1_t vs2,
                                     vbfloat16mf4x5_t vs3, size_t vl) {
  return __riscv_vsuxseg5ei64_v_bf16mf4x5_m(vm, rs1, vs2, vs3, vl);
}

void test_vsuxseg5ei64_v_bf16mf2x5_m(vbool32_t vm, __bf16 *rs1, vuint64m2_t vs2,
                                     vbfloat16mf2x5_t vs3, size_t vl) {
  return __riscv_vsuxseg5ei64_v_bf16mf2x5_m(vm, rs1, vs2, vs3, vl);
}

void test_vsuxseg5ei64_v_bf16m1x5_m(vbool16_t vm, __bf16 *rs1, vuint64m4_t vs2,
                                    vbfloat16m1x5_t vs3, size_t vl) {
  return __riscv_vsuxseg5ei64_v_bf16m1x5_m(vm, rs1, vs2, vs3, vl);
}
