#include <riscv_vector.h>
#include <stdint.h>

vbfloat16mf4x7_t test_vlseg7e16ff_v_bf16mf4x7_m(vbool64_t vm, const __bf16 *rs1,
                                                size_t *new_vl, size_t vl) {
  return __riscv_vlseg7e16ff(vm, rs1, new_vl, vl);
}

vbfloat16mf2x7_t test_vlseg7e16ff_v_bf16mf2x7_m(vbool32_t vm, const __bf16 *rs1,
                                                size_t *new_vl, size_t vl) {
  return __riscv_vlseg7e16ff(vm, rs1, new_vl, vl);
}

vbfloat16m1x7_t test_vlseg7e16ff_v_bf16m1x7_m(vbool16_t vm, const __bf16 *rs1,
                                              size_t *new_vl, size_t vl) {
  return __riscv_vlseg7e16ff(vm, rs1, new_vl, vl);
}
