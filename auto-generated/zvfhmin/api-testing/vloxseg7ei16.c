#include <riscv_vector.h>
#include <stdint.h>

vfloat16mf4x7_t test_vloxseg7ei16_v_f16mf4x7(const _Float16 *rs1,
                                             vuint16mf4_t rs2, size_t vl) {
  return __riscv_vloxseg7ei16_v_f16mf4x7(rs1, rs2, vl);
}

vfloat16mf2x7_t test_vloxseg7ei16_v_f16mf2x7(const _Float16 *rs1,
                                             vuint16mf2_t rs2, size_t vl) {
  return __riscv_vloxseg7ei16_v_f16mf2x7(rs1, rs2, vl);
}

vfloat16m1x7_t test_vloxseg7ei16_v_f16m1x7(const _Float16 *rs1, vuint16m1_t rs2,
                                           size_t vl) {
  return __riscv_vloxseg7ei16_v_f16m1x7(rs1, rs2, vl);
}

vfloat16mf4x7_t test_vloxseg7ei16_v_f16mf4x7_m(vbool64_t vm,
                                               const _Float16 *rs1,
                                               vuint16mf4_t rs2, size_t vl) {
  return __riscv_vloxseg7ei16_v_f16mf4x7_m(vm, rs1, rs2, vl);
}

vfloat16mf2x7_t test_vloxseg7ei16_v_f16mf2x7_m(vbool32_t vm,
                                               const _Float16 *rs1,
                                               vuint16mf2_t rs2, size_t vl) {
  return __riscv_vloxseg7ei16_v_f16mf2x7_m(vm, rs1, rs2, vl);
}

vfloat16m1x7_t test_vloxseg7ei16_v_f16m1x7_m(vbool16_t vm, const _Float16 *rs1,
                                             vuint16m1_t rs2, size_t vl) {
  return __riscv_vloxseg7ei16_v_f16m1x7_m(vm, rs1, rs2, vl);
}
