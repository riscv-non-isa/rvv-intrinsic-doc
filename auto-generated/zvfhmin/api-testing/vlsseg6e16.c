#include <riscv_vector.h>
#include <stdint.h>

vfloat16mf4x6_t test_vlsseg6e16_v_f16mf4x6(const _Float16 *rs1, ptrdiff_t rs2,
                                           size_t vl) {
  return __riscv_vlsseg6e16_v_f16mf4x6(rs1, rs2, vl);
}

vfloat16mf2x6_t test_vlsseg6e16_v_f16mf2x6(const _Float16 *rs1, ptrdiff_t rs2,
                                           size_t vl) {
  return __riscv_vlsseg6e16_v_f16mf2x6(rs1, rs2, vl);
}

vfloat16m1x6_t test_vlsseg6e16_v_f16m1x6(const _Float16 *rs1, ptrdiff_t rs2,
                                         size_t vl) {
  return __riscv_vlsseg6e16_v_f16m1x6(rs1, rs2, vl);
}

vfloat16mf4x6_t test_vlsseg6e16_v_f16mf4x6_m(vbool64_t vm, const _Float16 *rs1,
                                             ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg6e16_v_f16mf4x6_m(vm, rs1, rs2, vl);
}

vfloat16mf2x6_t test_vlsseg6e16_v_f16mf2x6_m(vbool32_t vm, const _Float16 *rs1,
                                             ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg6e16_v_f16mf2x6_m(vm, rs1, rs2, vl);
}

vfloat16m1x6_t test_vlsseg6e16_v_f16m1x6_m(vbool16_t vm, const _Float16 *rs1,
                                           ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg6e16_v_f16m1x6_m(vm, rs1, rs2, vl);
}
