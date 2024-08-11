#include <riscv_vector.h>
#include <stdint.h>

vfloat16mf4x3_t test_vluxseg3ei16_v_f16mf4x3(const _Float16 *rs1,
                                             vuint16mf4_t rs2, size_t vl) {
  return __riscv_vluxseg3ei16_v_f16mf4x3(rs1, rs2, vl);
}

vfloat16mf2x3_t test_vluxseg3ei16_v_f16mf2x3(const _Float16 *rs1,
                                             vuint16mf2_t rs2, size_t vl) {
  return __riscv_vluxseg3ei16_v_f16mf2x3(rs1, rs2, vl);
}

vfloat16m1x3_t test_vluxseg3ei16_v_f16m1x3(const _Float16 *rs1, vuint16m1_t rs2,
                                           size_t vl) {
  return __riscv_vluxseg3ei16_v_f16m1x3(rs1, rs2, vl);
}

vfloat16m2x3_t test_vluxseg3ei16_v_f16m2x3(const _Float16 *rs1, vuint16m2_t rs2,
                                           size_t vl) {
  return __riscv_vluxseg3ei16_v_f16m2x3(rs1, rs2, vl);
}

vfloat16mf4x3_t test_vluxseg3ei16_v_f16mf4x3_m(vbool64_t vm,
                                               const _Float16 *rs1,
                                               vuint16mf4_t rs2, size_t vl) {
  return __riscv_vluxseg3ei16_v_f16mf4x3_m(vm, rs1, rs2, vl);
}

vfloat16mf2x3_t test_vluxseg3ei16_v_f16mf2x3_m(vbool32_t vm,
                                               const _Float16 *rs1,
                                               vuint16mf2_t rs2, size_t vl) {
  return __riscv_vluxseg3ei16_v_f16mf2x3_m(vm, rs1, rs2, vl);
}

vfloat16m1x3_t test_vluxseg3ei16_v_f16m1x3_m(vbool16_t vm, const _Float16 *rs1,
                                             vuint16m1_t rs2, size_t vl) {
  return __riscv_vluxseg3ei16_v_f16m1x3_m(vm, rs1, rs2, vl);
}

vfloat16m2x3_t test_vluxseg3ei16_v_f16m2x3_m(vbool8_t vm, const _Float16 *rs1,
                                             vuint16m2_t rs2, size_t vl) {
  return __riscv_vluxseg3ei16_v_f16m2x3_m(vm, rs1, rs2, vl);
}
