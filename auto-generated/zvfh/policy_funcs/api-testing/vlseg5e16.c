#include <riscv_vector.h>
#include <stdint.h>

vfloat16mf4x5_t test_vlseg5e16_v_f16mf4x5_tu(vfloat16mf4x5_t vd,
                                             const _Float16 *rs1, size_t vl) {
  return __riscv_vlseg5e16_v_f16mf4x5_tu(vd, rs1, vl);
}

vfloat16mf2x5_t test_vlseg5e16_v_f16mf2x5_tu(vfloat16mf2x5_t vd,
                                             const _Float16 *rs1, size_t vl) {
  return __riscv_vlseg5e16_v_f16mf2x5_tu(vd, rs1, vl);
}

vfloat16m1x5_t test_vlseg5e16_v_f16m1x5_tu(vfloat16m1x5_t vd,
                                           const _Float16 *rs1, size_t vl) {
  return __riscv_vlseg5e16_v_f16m1x5_tu(vd, rs1, vl);
}

vfloat16mf4x5_t test_vlseg5e16_v_f16mf4x5_tum(vbool64_t vm, vfloat16mf4x5_t vd,
                                              const _Float16 *rs1, size_t vl) {
  return __riscv_vlseg5e16_v_f16mf4x5_tum(vm, vd, rs1, vl);
}

vfloat16mf2x5_t test_vlseg5e16_v_f16mf2x5_tum(vbool32_t vm, vfloat16mf2x5_t vd,
                                              const _Float16 *rs1, size_t vl) {
  return __riscv_vlseg5e16_v_f16mf2x5_tum(vm, vd, rs1, vl);
}

vfloat16m1x5_t test_vlseg5e16_v_f16m1x5_tum(vbool16_t vm, vfloat16m1x5_t vd,
                                            const _Float16 *rs1, size_t vl) {
  return __riscv_vlseg5e16_v_f16m1x5_tum(vm, vd, rs1, vl);
}

vfloat16mf4x5_t test_vlseg5e16_v_f16mf4x5_tumu(vbool64_t vm, vfloat16mf4x5_t vd,
                                               const _Float16 *rs1, size_t vl) {
  return __riscv_vlseg5e16_v_f16mf4x5_tumu(vm, vd, rs1, vl);
}

vfloat16mf2x5_t test_vlseg5e16_v_f16mf2x5_tumu(vbool32_t vm, vfloat16mf2x5_t vd,
                                               const _Float16 *rs1, size_t vl) {
  return __riscv_vlseg5e16_v_f16mf2x5_tumu(vm, vd, rs1, vl);
}

vfloat16m1x5_t test_vlseg5e16_v_f16m1x5_tumu(vbool16_t vm, vfloat16m1x5_t vd,
                                             const _Float16 *rs1, size_t vl) {
  return __riscv_vlseg5e16_v_f16m1x5_tumu(vm, vd, rs1, vl);
}

vfloat16mf4x5_t test_vlseg5e16_v_f16mf4x5_mu(vbool64_t vm, vfloat16mf4x5_t vd,
                                             const _Float16 *rs1, size_t vl) {
  return __riscv_vlseg5e16_v_f16mf4x5_mu(vm, vd, rs1, vl);
}

vfloat16mf2x5_t test_vlseg5e16_v_f16mf2x5_mu(vbool32_t vm, vfloat16mf2x5_t vd,
                                             const _Float16 *rs1, size_t vl) {
  return __riscv_vlseg5e16_v_f16mf2x5_mu(vm, vd, rs1, vl);
}

vfloat16m1x5_t test_vlseg5e16_v_f16m1x5_mu(vbool16_t vm, vfloat16m1x5_t vd,
                                           const _Float16 *rs1, size_t vl) {
  return __riscv_vlseg5e16_v_f16m1x5_mu(vm, vd, rs1, vl);
}
