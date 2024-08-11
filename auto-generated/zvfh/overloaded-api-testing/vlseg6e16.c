#include <riscv_vector.h>
#include <stdint.h>

vfloat16mf4x6_t test_vlseg6e16_v_f16mf4x6_m(vbool64_t vm, const _Float16 *rs1,
                                            size_t vl) {
  return __riscv_vlseg6e16(vm, rs1, vl);
}

vfloat16mf2x6_t test_vlseg6e16_v_f16mf2x6_m(vbool32_t vm, const _Float16 *rs1,
                                            size_t vl) {
  return __riscv_vlseg6e16(vm, rs1, vl);
}

vfloat16m1x6_t test_vlseg6e16_v_f16m1x6_m(vbool16_t vm, const _Float16 *rs1,
                                          size_t vl) {
  return __riscv_vlseg6e16(vm, rs1, vl);
}
