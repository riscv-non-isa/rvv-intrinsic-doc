#include <riscv_vector.h>
#include <stdint.h>

vbfloat16mf4x5_t test_vlseg5e16_v_bf16mf4x5_tu(vbfloat16mf4x5_t vd,
                                               const __bf16 *rs1, size_t vl) {
  return __riscv_vlseg5e16_v_bf16mf4x5_tu(vd, rs1, vl);
}

vbfloat16mf2x5_t test_vlseg5e16_v_bf16mf2x5_tu(vbfloat16mf2x5_t vd,
                                               const __bf16 *rs1, size_t vl) {
  return __riscv_vlseg5e16_v_bf16mf2x5_tu(vd, rs1, vl);
}

vbfloat16m1x5_t test_vlseg5e16_v_bf16m1x5_tu(vbfloat16m1x5_t vd,
                                             const __bf16 *rs1, size_t vl) {
  return __riscv_vlseg5e16_v_bf16m1x5_tu(vd, rs1, vl);
}

vbfloat16mf4x5_t test_vlseg5e16_v_bf16mf4x5_tum(vbool64_t vm,
                                                vbfloat16mf4x5_t vd,
                                                const __bf16 *rs1, size_t vl) {
  return __riscv_vlseg5e16_v_bf16mf4x5_tum(vm, vd, rs1, vl);
}

vbfloat16mf2x5_t test_vlseg5e16_v_bf16mf2x5_tum(vbool32_t vm,
                                                vbfloat16mf2x5_t vd,
                                                const __bf16 *rs1, size_t vl) {
  return __riscv_vlseg5e16_v_bf16mf2x5_tum(vm, vd, rs1, vl);
}

vbfloat16m1x5_t test_vlseg5e16_v_bf16m1x5_tum(vbool16_t vm, vbfloat16m1x5_t vd,
                                              const __bf16 *rs1, size_t vl) {
  return __riscv_vlseg5e16_v_bf16m1x5_tum(vm, vd, rs1, vl);
}

vbfloat16mf4x5_t test_vlseg5e16_v_bf16mf4x5_tumu(vbool64_t vm,
                                                 vbfloat16mf4x5_t vd,
                                                 const __bf16 *rs1, size_t vl) {
  return __riscv_vlseg5e16_v_bf16mf4x5_tumu(vm, vd, rs1, vl);
}

vbfloat16mf2x5_t test_vlseg5e16_v_bf16mf2x5_tumu(vbool32_t vm,
                                                 vbfloat16mf2x5_t vd,
                                                 const __bf16 *rs1, size_t vl) {
  return __riscv_vlseg5e16_v_bf16mf2x5_tumu(vm, vd, rs1, vl);
}

vbfloat16m1x5_t test_vlseg5e16_v_bf16m1x5_tumu(vbool16_t vm, vbfloat16m1x5_t vd,
                                               const __bf16 *rs1, size_t vl) {
  return __riscv_vlseg5e16_v_bf16m1x5_tumu(vm, vd, rs1, vl);
}

vbfloat16mf4x5_t test_vlseg5e16_v_bf16mf4x5_mu(vbool64_t vm,
                                               vbfloat16mf4x5_t vd,
                                               const __bf16 *rs1, size_t vl) {
  return __riscv_vlseg5e16_v_bf16mf4x5_mu(vm, vd, rs1, vl);
}

vbfloat16mf2x5_t test_vlseg5e16_v_bf16mf2x5_mu(vbool32_t vm,
                                               vbfloat16mf2x5_t vd,
                                               const __bf16 *rs1, size_t vl) {
  return __riscv_vlseg5e16_v_bf16mf2x5_mu(vm, vd, rs1, vl);
}

vbfloat16m1x5_t test_vlseg5e16_v_bf16m1x5_mu(vbool16_t vm, vbfloat16m1x5_t vd,
                                             const __bf16 *rs1, size_t vl) {
  return __riscv_vlseg5e16_v_bf16m1x5_mu(vm, vd, rs1, vl);
}
