#include <riscv_vector.h>
#include <stdint.h>

vfloat16mf4x7_t test_vlseg7e16_v_f16mf4x7_tu(vfloat16mf4x7_t vd,
                                             const _Float16 *rs1, size_t vl) {
  return __riscv_vlseg7e16_tu(vd, rs1, vl);
}

vfloat16mf2x7_t test_vlseg7e16_v_f16mf2x7_tu(vfloat16mf2x7_t vd,
                                             const _Float16 *rs1, size_t vl) {
  return __riscv_vlseg7e16_tu(vd, rs1, vl);
}

vfloat16m1x7_t test_vlseg7e16_v_f16m1x7_tu(vfloat16m1x7_t vd,
                                           const _Float16 *rs1, size_t vl) {
  return __riscv_vlseg7e16_tu(vd, rs1, vl);
}

vfloat16mf4x7_t test_vlseg7e16_v_f16mf4x7_tum(vbool64_t vm, vfloat16mf4x7_t vd,
                                              const _Float16 *rs1, size_t vl) {
  return __riscv_vlseg7e16_tum(vm, vd, rs1, vl);
}

vfloat16mf2x7_t test_vlseg7e16_v_f16mf2x7_tum(vbool32_t vm, vfloat16mf2x7_t vd,
                                              const _Float16 *rs1, size_t vl) {
  return __riscv_vlseg7e16_tum(vm, vd, rs1, vl);
}

vfloat16m1x7_t test_vlseg7e16_v_f16m1x7_tum(vbool16_t vm, vfloat16m1x7_t vd,
                                            const _Float16 *rs1, size_t vl) {
  return __riscv_vlseg7e16_tum(vm, vd, rs1, vl);
}

vfloat16mf4x7_t test_vlseg7e16_v_f16mf4x7_tumu(vbool64_t vm, vfloat16mf4x7_t vd,
                                               const _Float16 *rs1, size_t vl) {
  return __riscv_vlseg7e16_tumu(vm, vd, rs1, vl);
}

vfloat16mf2x7_t test_vlseg7e16_v_f16mf2x7_tumu(vbool32_t vm, vfloat16mf2x7_t vd,
                                               const _Float16 *rs1, size_t vl) {
  return __riscv_vlseg7e16_tumu(vm, vd, rs1, vl);
}

vfloat16m1x7_t test_vlseg7e16_v_f16m1x7_tumu(vbool16_t vm, vfloat16m1x7_t vd,
                                             const _Float16 *rs1, size_t vl) {
  return __riscv_vlseg7e16_tumu(vm, vd, rs1, vl);
}

vfloat16mf4x7_t test_vlseg7e16_v_f16mf4x7_mu(vbool64_t vm, vfloat16mf4x7_t vd,
                                             const _Float16 *rs1, size_t vl) {
  return __riscv_vlseg7e16_mu(vm, vd, rs1, vl);
}

vfloat16mf2x7_t test_vlseg7e16_v_f16mf2x7_mu(vbool32_t vm, vfloat16mf2x7_t vd,
                                             const _Float16 *rs1, size_t vl) {
  return __riscv_vlseg7e16_mu(vm, vd, rs1, vl);
}

vfloat16m1x7_t test_vlseg7e16_v_f16m1x7_mu(vbool16_t vm, vfloat16m1x7_t vd,
                                           const _Float16 *rs1, size_t vl) {
  return __riscv_vlseg7e16_mu(vm, vd, rs1, vl);
}
