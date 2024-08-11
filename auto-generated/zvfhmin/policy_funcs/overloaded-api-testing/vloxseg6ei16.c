#include <riscv_vector.h>
#include <stdint.h>

vfloat16mf4x6_t test_vloxseg6ei16_v_f16mf4x6_tu(vfloat16mf4x6_t vd,
                                                const _Float16 *rs1,
                                                vuint16mf4_t rs2, size_t vl) {
  return __riscv_vloxseg6ei16_tu(vd, rs1, rs2, vl);
}

vfloat16mf2x6_t test_vloxseg6ei16_v_f16mf2x6_tu(vfloat16mf2x6_t vd,
                                                const _Float16 *rs1,
                                                vuint16mf2_t rs2, size_t vl) {
  return __riscv_vloxseg6ei16_tu(vd, rs1, rs2, vl);
}

vfloat16m1x6_t test_vloxseg6ei16_v_f16m1x6_tu(vfloat16m1x6_t vd,
                                              const _Float16 *rs1,
                                              vuint16m1_t rs2, size_t vl) {
  return __riscv_vloxseg6ei16_tu(vd, rs1, rs2, vl);
}

vfloat16mf4x6_t test_vloxseg6ei16_v_f16mf4x6_tum(vbool64_t vm,
                                                 vfloat16mf4x6_t vd,
                                                 const _Float16 *rs1,
                                                 vuint16mf4_t rs2, size_t vl) {
  return __riscv_vloxseg6ei16_tum(vm, vd, rs1, rs2, vl);
}

vfloat16mf2x6_t test_vloxseg6ei16_v_f16mf2x6_tum(vbool32_t vm,
                                                 vfloat16mf2x6_t vd,
                                                 const _Float16 *rs1,
                                                 vuint16mf2_t rs2, size_t vl) {
  return __riscv_vloxseg6ei16_tum(vm, vd, rs1, rs2, vl);
}

vfloat16m1x6_t test_vloxseg6ei16_v_f16m1x6_tum(vbool16_t vm, vfloat16m1x6_t vd,
                                               const _Float16 *rs1,
                                               vuint16m1_t rs2, size_t vl) {
  return __riscv_vloxseg6ei16_tum(vm, vd, rs1, rs2, vl);
}

vfloat16mf4x6_t test_vloxseg6ei16_v_f16mf4x6_tumu(vbool64_t vm,
                                                  vfloat16mf4x6_t vd,
                                                  const _Float16 *rs1,
                                                  vuint16mf4_t rs2, size_t vl) {
  return __riscv_vloxseg6ei16_tumu(vm, vd, rs1, rs2, vl);
}

vfloat16mf2x6_t test_vloxseg6ei16_v_f16mf2x6_tumu(vbool32_t vm,
                                                  vfloat16mf2x6_t vd,
                                                  const _Float16 *rs1,
                                                  vuint16mf2_t rs2, size_t vl) {
  return __riscv_vloxseg6ei16_tumu(vm, vd, rs1, rs2, vl);
}

vfloat16m1x6_t test_vloxseg6ei16_v_f16m1x6_tumu(vbool16_t vm, vfloat16m1x6_t vd,
                                                const _Float16 *rs1,
                                                vuint16m1_t rs2, size_t vl) {
  return __riscv_vloxseg6ei16_tumu(vm, vd, rs1, rs2, vl);
}

vfloat16mf4x6_t test_vloxseg6ei16_v_f16mf4x6_mu(vbool64_t vm,
                                                vfloat16mf4x6_t vd,
                                                const _Float16 *rs1,
                                                vuint16mf4_t rs2, size_t vl) {
  return __riscv_vloxseg6ei16_mu(vm, vd, rs1, rs2, vl);
}

vfloat16mf2x6_t test_vloxseg6ei16_v_f16mf2x6_mu(vbool32_t vm,
                                                vfloat16mf2x6_t vd,
                                                const _Float16 *rs1,
                                                vuint16mf2_t rs2, size_t vl) {
  return __riscv_vloxseg6ei16_mu(vm, vd, rs1, rs2, vl);
}

vfloat16m1x6_t test_vloxseg6ei16_v_f16m1x6_mu(vbool16_t vm, vfloat16m1x6_t vd,
                                              const _Float16 *rs1,
                                              vuint16m1_t rs2, size_t vl) {
  return __riscv_vloxseg6ei16_mu(vm, vd, rs1, rs2, vl);
}
