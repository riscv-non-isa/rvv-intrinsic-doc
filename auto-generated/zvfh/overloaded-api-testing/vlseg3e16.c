#include <riscv_vector.h>
#include <stdint.h>

vfloat16mf4x3_t test_vlseg3e16_v_f16mf4x3_m(vbool64_t vm, const _Float16 *rs1,
                                            size_t vl) {
  return __riscv_vlseg3e16(vm, rs1, vl);
}

vfloat16mf2x3_t test_vlseg3e16_v_f16mf2x3_m(vbool32_t vm, const _Float16 *rs1,
                                            size_t vl) {
  return __riscv_vlseg3e16(vm, rs1, vl);
}

vfloat16m1x3_t test_vlseg3e16_v_f16m1x3_m(vbool16_t vm, const _Float16 *rs1,
                                          size_t vl) {
  return __riscv_vlseg3e16(vm, rs1, vl);
}

vfloat16m2x3_t test_vlseg3e16_v_f16m2x3_m(vbool8_t vm, const _Float16 *rs1,
                                          size_t vl) {
  return __riscv_vlseg3e16(vm, rs1, vl);
}
