#include <riscv_vector.h>
#include <stdint.h>

void test_vsoxseg8ei64_v_bf16mf4x8(__bf16 *rs1, vuint64m1_t vs2,
                                   vbfloat16mf4x8_t vs3, size_t vl) {
  return __riscv_vsoxseg8ei64(rs1, vs2, vs3, vl);
}

void test_vsoxseg8ei64_v_bf16mf2x8(__bf16 *rs1, vuint64m2_t vs2,
                                   vbfloat16mf2x8_t vs3, size_t vl) {
  return __riscv_vsoxseg8ei64(rs1, vs2, vs3, vl);
}

void test_vsoxseg8ei64_v_bf16m1x8(__bf16 *rs1, vuint64m4_t vs2,
                                  vbfloat16m1x8_t vs3, size_t vl) {
  return __riscv_vsoxseg8ei64(rs1, vs2, vs3, vl);
}

void test_vsoxseg8ei64_v_bf16mf4x8_m(vbool64_t vm, __bf16 *rs1, vuint64m1_t vs2,
                                     vbfloat16mf4x8_t vs3, size_t vl) {
  return __riscv_vsoxseg8ei64(vm, rs1, vs2, vs3, vl);
}

void test_vsoxseg8ei64_v_bf16mf2x8_m(vbool32_t vm, __bf16 *rs1, vuint64m2_t vs2,
                                     vbfloat16mf2x8_t vs3, size_t vl) {
  return __riscv_vsoxseg8ei64(vm, rs1, vs2, vs3, vl);
}

void test_vsoxseg8ei64_v_bf16m1x8_m(vbool16_t vm, __bf16 *rs1, vuint64m4_t vs2,
                                    vbfloat16m1x8_t vs3, size_t vl) {
  return __riscv_vsoxseg8ei64(vm, rs1, vs2, vs3, vl);
}
