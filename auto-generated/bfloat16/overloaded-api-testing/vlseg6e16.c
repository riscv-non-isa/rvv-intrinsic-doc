#include <riscv_vector.h>
#include <stdint.h>

vbfloat16mf4x6_t test_vlseg6e16_v_bf16mf4x6_m(vbool64_t vm, const __bf16 *rs1,
                                              size_t vl) {
  return __riscv_vlseg6e16(vm, rs1, vl);
}

vbfloat16mf2x6_t test_vlseg6e16_v_bf16mf2x6_m(vbool32_t vm, const __bf16 *rs1,
                                              size_t vl) {
  return __riscv_vlseg6e16(vm, rs1, vl);
}

vbfloat16m1x6_t test_vlseg6e16_v_bf16m1x6_m(vbool16_t vm, const __bf16 *rs1,
                                            size_t vl) {
  return __riscv_vlseg6e16(vm, rs1, vl);
}
