#include <riscv_vector.h>
#include <stdint.h>

vbfloat16mf4x2_t test_vloxseg2ei16_v_bf16mf4x2_tu(vbfloat16mf4x2_t vd,
                                                  const __bf16 *rs1,
                                                  vuint16mf4_t rs2, size_t vl) {
  return __riscv_vloxseg2ei16_v_bf16mf4x2_tu(vd, rs1, rs2, vl);
}

vbfloat16mf2x2_t test_vloxseg2ei16_v_bf16mf2x2_tu(vbfloat16mf2x2_t vd,
                                                  const __bf16 *rs1,
                                                  vuint16mf2_t rs2, size_t vl) {
  return __riscv_vloxseg2ei16_v_bf16mf2x2_tu(vd, rs1, rs2, vl);
}

vbfloat16m1x2_t test_vloxseg2ei16_v_bf16m1x2_tu(vbfloat16m1x2_t vd,
                                                const __bf16 *rs1,
                                                vuint16m1_t rs2, size_t vl) {
  return __riscv_vloxseg2ei16_v_bf16m1x2_tu(vd, rs1, rs2, vl);
}

vbfloat16m2x2_t test_vloxseg2ei16_v_bf16m2x2_tu(vbfloat16m2x2_t vd,
                                                const __bf16 *rs1,
                                                vuint16m2_t rs2, size_t vl) {
  return __riscv_vloxseg2ei16_v_bf16m2x2_tu(vd, rs1, rs2, vl);
}

vbfloat16m4x2_t test_vloxseg2ei16_v_bf16m4x2_tu(vbfloat16m4x2_t vd,
                                                const __bf16 *rs1,
                                                vuint16m4_t rs2, size_t vl) {
  return __riscv_vloxseg2ei16_v_bf16m4x2_tu(vd, rs1, rs2, vl);
}

vbfloat16mf4x2_t test_vloxseg2ei16_v_bf16mf4x2_tum(vbool64_t vm,
                                                   vbfloat16mf4x2_t vd,
                                                   const __bf16 *rs1,
                                                   vuint16mf4_t rs2,
                                                   size_t vl) {
  return __riscv_vloxseg2ei16_v_bf16mf4x2_tum(vm, vd, rs1, rs2, vl);
}

vbfloat16mf2x2_t test_vloxseg2ei16_v_bf16mf2x2_tum(vbool32_t vm,
                                                   vbfloat16mf2x2_t vd,
                                                   const __bf16 *rs1,
                                                   vuint16mf2_t rs2,
                                                   size_t vl) {
  return __riscv_vloxseg2ei16_v_bf16mf2x2_tum(vm, vd, rs1, rs2, vl);
}

vbfloat16m1x2_t test_vloxseg2ei16_v_bf16m1x2_tum(vbool16_t vm,
                                                 vbfloat16m1x2_t vd,
                                                 const __bf16 *rs1,
                                                 vuint16m1_t rs2, size_t vl) {
  return __riscv_vloxseg2ei16_v_bf16m1x2_tum(vm, vd, rs1, rs2, vl);
}

vbfloat16m2x2_t test_vloxseg2ei16_v_bf16m2x2_tum(vbool8_t vm,
                                                 vbfloat16m2x2_t vd,
                                                 const __bf16 *rs1,
                                                 vuint16m2_t rs2, size_t vl) {
  return __riscv_vloxseg2ei16_v_bf16m2x2_tum(vm, vd, rs1, rs2, vl);
}

vbfloat16m4x2_t test_vloxseg2ei16_v_bf16m4x2_tum(vbool4_t vm,
                                                 vbfloat16m4x2_t vd,
                                                 const __bf16 *rs1,
                                                 vuint16m4_t rs2, size_t vl) {
  return __riscv_vloxseg2ei16_v_bf16m4x2_tum(vm, vd, rs1, rs2, vl);
}

vbfloat16mf4x2_t test_vloxseg2ei16_v_bf16mf4x2_tumu(vbool64_t vm,
                                                    vbfloat16mf4x2_t vd,
                                                    const __bf16 *rs1,
                                                    vuint16mf4_t rs2,
                                                    size_t vl) {
  return __riscv_vloxseg2ei16_v_bf16mf4x2_tumu(vm, vd, rs1, rs2, vl);
}

vbfloat16mf2x2_t test_vloxseg2ei16_v_bf16mf2x2_tumu(vbool32_t vm,
                                                    vbfloat16mf2x2_t vd,
                                                    const __bf16 *rs1,
                                                    vuint16mf2_t rs2,
                                                    size_t vl) {
  return __riscv_vloxseg2ei16_v_bf16mf2x2_tumu(vm, vd, rs1, rs2, vl);
}

vbfloat16m1x2_t test_vloxseg2ei16_v_bf16m1x2_tumu(vbool16_t vm,
                                                  vbfloat16m1x2_t vd,
                                                  const __bf16 *rs1,
                                                  vuint16m1_t rs2, size_t vl) {
  return __riscv_vloxseg2ei16_v_bf16m1x2_tumu(vm, vd, rs1, rs2, vl);
}

vbfloat16m2x2_t test_vloxseg2ei16_v_bf16m2x2_tumu(vbool8_t vm,
                                                  vbfloat16m2x2_t vd,
                                                  const __bf16 *rs1,
                                                  vuint16m2_t rs2, size_t vl) {
  return __riscv_vloxseg2ei16_v_bf16m2x2_tumu(vm, vd, rs1, rs2, vl);
}

vbfloat16m4x2_t test_vloxseg2ei16_v_bf16m4x2_tumu(vbool4_t vm,
                                                  vbfloat16m4x2_t vd,
                                                  const __bf16 *rs1,
                                                  vuint16m4_t rs2, size_t vl) {
  return __riscv_vloxseg2ei16_v_bf16m4x2_tumu(vm, vd, rs1, rs2, vl);
}

vbfloat16mf4x2_t test_vloxseg2ei16_v_bf16mf4x2_mu(vbool64_t vm,
                                                  vbfloat16mf4x2_t vd,
                                                  const __bf16 *rs1,
                                                  vuint16mf4_t rs2, size_t vl) {
  return __riscv_vloxseg2ei16_v_bf16mf4x2_mu(vm, vd, rs1, rs2, vl);
}

vbfloat16mf2x2_t test_vloxseg2ei16_v_bf16mf2x2_mu(vbool32_t vm,
                                                  vbfloat16mf2x2_t vd,
                                                  const __bf16 *rs1,
                                                  vuint16mf2_t rs2, size_t vl) {
  return __riscv_vloxseg2ei16_v_bf16mf2x2_mu(vm, vd, rs1, rs2, vl);
}

vbfloat16m1x2_t test_vloxseg2ei16_v_bf16m1x2_mu(vbool16_t vm,
                                                vbfloat16m1x2_t vd,
                                                const __bf16 *rs1,
                                                vuint16m1_t rs2, size_t vl) {
  return __riscv_vloxseg2ei16_v_bf16m1x2_mu(vm, vd, rs1, rs2, vl);
}

vbfloat16m2x2_t test_vloxseg2ei16_v_bf16m2x2_mu(vbool8_t vm, vbfloat16m2x2_t vd,
                                                const __bf16 *rs1,
                                                vuint16m2_t rs2, size_t vl) {
  return __riscv_vloxseg2ei16_v_bf16m2x2_mu(vm, vd, rs1, rs2, vl);
}

vbfloat16m4x2_t test_vloxseg2ei16_v_bf16m4x2_mu(vbool4_t vm, vbfloat16m4x2_t vd,
                                                const __bf16 *rs1,
                                                vuint16m4_t rs2, size_t vl) {
  return __riscv_vloxseg2ei16_v_bf16m4x2_mu(vm, vd, rs1, rs2, vl);
}
