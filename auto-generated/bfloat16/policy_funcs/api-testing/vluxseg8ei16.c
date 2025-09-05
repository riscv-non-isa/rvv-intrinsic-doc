#include <riscv_vector.h>
#include <stdint.h>

vbfloat16mf4x8_t test_vluxseg8ei16_v_bf16mf4x8_tu(vbfloat16mf4x8_t vd,
                                                  const __bf16 *rs1,
                                                  vuint16mf4_t rs2, size_t vl) {
  return __riscv_vluxseg8ei16_v_bf16mf4x8_tu(vd, rs1, rs2, vl);
}

vbfloat16mf2x8_t test_vluxseg8ei16_v_bf16mf2x8_tu(vbfloat16mf2x8_t vd,
                                                  const __bf16 *rs1,
                                                  vuint16mf2_t rs2, size_t vl) {
  return __riscv_vluxseg8ei16_v_bf16mf2x8_tu(vd, rs1, rs2, vl);
}

vbfloat16m1x8_t test_vluxseg8ei16_v_bf16m1x8_tu(vbfloat16m1x8_t vd,
                                                const __bf16 *rs1,
                                                vuint16m1_t rs2, size_t vl) {
  return __riscv_vluxseg8ei16_v_bf16m1x8_tu(vd, rs1, rs2, vl);
}

vbfloat16mf4x8_t test_vluxseg8ei16_v_bf16mf4x8_tum(vbool64_t vm,
                                                   vbfloat16mf4x8_t vd,
                                                   const __bf16 *rs1,
                                                   vuint16mf4_t rs2,
                                                   size_t vl) {
  return __riscv_vluxseg8ei16_v_bf16mf4x8_tum(vm, vd, rs1, rs2, vl);
}

vbfloat16mf2x8_t test_vluxseg8ei16_v_bf16mf2x8_tum(vbool32_t vm,
                                                   vbfloat16mf2x8_t vd,
                                                   const __bf16 *rs1,
                                                   vuint16mf2_t rs2,
                                                   size_t vl) {
  return __riscv_vluxseg8ei16_v_bf16mf2x8_tum(vm, vd, rs1, rs2, vl);
}

vbfloat16m1x8_t test_vluxseg8ei16_v_bf16m1x8_tum(vbool16_t vm,
                                                 vbfloat16m1x8_t vd,
                                                 const __bf16 *rs1,
                                                 vuint16m1_t rs2, size_t vl) {
  return __riscv_vluxseg8ei16_v_bf16m1x8_tum(vm, vd, rs1, rs2, vl);
}

vbfloat16mf4x8_t test_vluxseg8ei16_v_bf16mf4x8_tumu(vbool64_t vm,
                                                    vbfloat16mf4x8_t vd,
                                                    const __bf16 *rs1,
                                                    vuint16mf4_t rs2,
                                                    size_t vl) {
  return __riscv_vluxseg8ei16_v_bf16mf4x8_tumu(vm, vd, rs1, rs2, vl);
}

vbfloat16mf2x8_t test_vluxseg8ei16_v_bf16mf2x8_tumu(vbool32_t vm,
                                                    vbfloat16mf2x8_t vd,
                                                    const __bf16 *rs1,
                                                    vuint16mf2_t rs2,
                                                    size_t vl) {
  return __riscv_vluxseg8ei16_v_bf16mf2x8_tumu(vm, vd, rs1, rs2, vl);
}

vbfloat16m1x8_t test_vluxseg8ei16_v_bf16m1x8_tumu(vbool16_t vm,
                                                  vbfloat16m1x8_t vd,
                                                  const __bf16 *rs1,
                                                  vuint16m1_t rs2, size_t vl) {
  return __riscv_vluxseg8ei16_v_bf16m1x8_tumu(vm, vd, rs1, rs2, vl);
}

vbfloat16mf4x8_t test_vluxseg8ei16_v_bf16mf4x8_mu(vbool64_t vm,
                                                  vbfloat16mf4x8_t vd,
                                                  const __bf16 *rs1,
                                                  vuint16mf4_t rs2, size_t vl) {
  return __riscv_vluxseg8ei16_v_bf16mf4x8_mu(vm, vd, rs1, rs2, vl);
}

vbfloat16mf2x8_t test_vluxseg8ei16_v_bf16mf2x8_mu(vbool32_t vm,
                                                  vbfloat16mf2x8_t vd,
                                                  const __bf16 *rs1,
                                                  vuint16mf2_t rs2, size_t vl) {
  return __riscv_vluxseg8ei16_v_bf16mf2x8_mu(vm, vd, rs1, rs2, vl);
}

vbfloat16m1x8_t test_vluxseg8ei16_v_bf16m1x8_mu(vbool16_t vm,
                                                vbfloat16m1x8_t vd,
                                                const __bf16 *rs1,
                                                vuint16m1_t rs2, size_t vl) {
  return __riscv_vluxseg8ei16_v_bf16m1x8_mu(vm, vd, rs1, rs2, vl);
}
