#include <riscv_vector.h>
#include <stdint.h>

vbfloat16mf4x7_t test_vloxseg7ei16_v_bf16mf4x7_tu(vbfloat16mf4x7_t vd,
                                                  const __bf16 *rs1,
                                                  vuint16mf4_t rs2, size_t vl) {
  return __riscv_vloxseg7ei16_v_bf16mf4x7_tu(vd, rs1, rs2, vl);
}

vbfloat16mf2x7_t test_vloxseg7ei16_v_bf16mf2x7_tu(vbfloat16mf2x7_t vd,
                                                  const __bf16 *rs1,
                                                  vuint16mf2_t rs2, size_t vl) {
  return __riscv_vloxseg7ei16_v_bf16mf2x7_tu(vd, rs1, rs2, vl);
}

vbfloat16m1x7_t test_vloxseg7ei16_v_bf16m1x7_tu(vbfloat16m1x7_t vd,
                                                const __bf16 *rs1,
                                                vuint16m1_t rs2, size_t vl) {
  return __riscv_vloxseg7ei16_v_bf16m1x7_tu(vd, rs1, rs2, vl);
}

vbfloat16mf4x7_t test_vloxseg7ei16_v_bf16mf4x7_tum(vbool64_t vm,
                                                   vbfloat16mf4x7_t vd,
                                                   const __bf16 *rs1,
                                                   vuint16mf4_t rs2,
                                                   size_t vl) {
  return __riscv_vloxseg7ei16_v_bf16mf4x7_tum(vm, vd, rs1, rs2, vl);
}

vbfloat16mf2x7_t test_vloxseg7ei16_v_bf16mf2x7_tum(vbool32_t vm,
                                                   vbfloat16mf2x7_t vd,
                                                   const __bf16 *rs1,
                                                   vuint16mf2_t rs2,
                                                   size_t vl) {
  return __riscv_vloxseg7ei16_v_bf16mf2x7_tum(vm, vd, rs1, rs2, vl);
}

vbfloat16m1x7_t test_vloxseg7ei16_v_bf16m1x7_tum(vbool16_t vm,
                                                 vbfloat16m1x7_t vd,
                                                 const __bf16 *rs1,
                                                 vuint16m1_t rs2, size_t vl) {
  return __riscv_vloxseg7ei16_v_bf16m1x7_tum(vm, vd, rs1, rs2, vl);
}

vbfloat16mf4x7_t test_vloxseg7ei16_v_bf16mf4x7_tumu(vbool64_t vm,
                                                    vbfloat16mf4x7_t vd,
                                                    const __bf16 *rs1,
                                                    vuint16mf4_t rs2,
                                                    size_t vl) {
  return __riscv_vloxseg7ei16_v_bf16mf4x7_tumu(vm, vd, rs1, rs2, vl);
}

vbfloat16mf2x7_t test_vloxseg7ei16_v_bf16mf2x7_tumu(vbool32_t vm,
                                                    vbfloat16mf2x7_t vd,
                                                    const __bf16 *rs1,
                                                    vuint16mf2_t rs2,
                                                    size_t vl) {
  return __riscv_vloxseg7ei16_v_bf16mf2x7_tumu(vm, vd, rs1, rs2, vl);
}

vbfloat16m1x7_t test_vloxseg7ei16_v_bf16m1x7_tumu(vbool16_t vm,
                                                  vbfloat16m1x7_t vd,
                                                  const __bf16 *rs1,
                                                  vuint16m1_t rs2, size_t vl) {
  return __riscv_vloxseg7ei16_v_bf16m1x7_tumu(vm, vd, rs1, rs2, vl);
}

vbfloat16mf4x7_t test_vloxseg7ei16_v_bf16mf4x7_mu(vbool64_t vm,
                                                  vbfloat16mf4x7_t vd,
                                                  const __bf16 *rs1,
                                                  vuint16mf4_t rs2, size_t vl) {
  return __riscv_vloxseg7ei16_v_bf16mf4x7_mu(vm, vd, rs1, rs2, vl);
}

vbfloat16mf2x7_t test_vloxseg7ei16_v_bf16mf2x7_mu(vbool32_t vm,
                                                  vbfloat16mf2x7_t vd,
                                                  const __bf16 *rs1,
                                                  vuint16mf2_t rs2, size_t vl) {
  return __riscv_vloxseg7ei16_v_bf16mf2x7_mu(vm, vd, rs1, rs2, vl);
}

vbfloat16m1x7_t test_vloxseg7ei16_v_bf16m1x7_mu(vbool16_t vm,
                                                vbfloat16m1x7_t vd,
                                                const __bf16 *rs1,
                                                vuint16m1_t rs2, size_t vl) {
  return __riscv_vloxseg7ei16_v_bf16m1x7_mu(vm, vd, rs1, rs2, vl);
}
