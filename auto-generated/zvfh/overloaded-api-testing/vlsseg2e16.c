#include <riscv_vector.h>
#include <stdint.h>

vfloat16mf4x2_t test_vlsseg2e16_v_f16mf4x2_m(vbool64_t vm, const _Float16 *rs1,
                                             ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg2e16(vm, rs1, rs2, vl);
}

vfloat16mf2x2_t test_vlsseg2e16_v_f16mf2x2_m(vbool32_t vm, const _Float16 *rs1,
                                             ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg2e16(vm, rs1, rs2, vl);
}

vfloat16m1x2_t test_vlsseg2e16_v_f16m1x2_m(vbool16_t vm, const _Float16 *rs1,
                                           ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg2e16(vm, rs1, rs2, vl);
}

vfloat16m2x2_t test_vlsseg2e16_v_f16m2x2_m(vbool8_t vm, const _Float16 *rs1,
                                           ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg2e16(vm, rs1, rs2, vl);
}

vfloat16m4x2_t test_vlsseg2e16_v_f16m4x2_m(vbool4_t vm, const _Float16 *rs1,
                                           ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg2e16(vm, rs1, rs2, vl);
}
