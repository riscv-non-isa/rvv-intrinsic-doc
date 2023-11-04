#include <riscv_vector.h>
#include <stdint.h>

vbfloat16mf4x3_t test_vlseg3e16_v_bf16mf4x3(const __bf16 *rs1, size_t vl) {
  return __riscv_vlseg3e16_v_bf16mf4x3(rs1, vl);
}

vbfloat16mf2x3_t test_vlseg3e16_v_bf16mf2x3(const __bf16 *rs1, size_t vl) {
  return __riscv_vlseg3e16_v_bf16mf2x3(rs1, vl);
}

vbfloat16m1x3_t test_vlseg3e16_v_bf16m1x3(const __bf16 *rs1, size_t vl) {
  return __riscv_vlseg3e16_v_bf16m1x3(rs1, vl);
}

vbfloat16m2x3_t test_vlseg3e16_v_bf16m2x3(const __bf16 *rs1, size_t vl) {
  return __riscv_vlseg3e16_v_bf16m2x3(rs1, vl);
}

vbfloat16mf4x3_t test_vlseg3e16_v_bf16mf4x3_m(vbool64_t vm, const __bf16 *rs1,
                                              size_t vl) {
  return __riscv_vlseg3e16_v_bf16mf4x3_m(vm, rs1, vl);
}

vbfloat16mf2x3_t test_vlseg3e16_v_bf16mf2x3_m(vbool32_t vm, const __bf16 *rs1,
                                              size_t vl) {
  return __riscv_vlseg3e16_v_bf16mf2x3_m(vm, rs1, vl);
}

vbfloat16m1x3_t test_vlseg3e16_v_bf16m1x3_m(vbool16_t vm, const __bf16 *rs1,
                                            size_t vl) {
  return __riscv_vlseg3e16_v_bf16m1x3_m(vm, rs1, vl);
}

vbfloat16m2x3_t test_vlseg3e16_v_bf16m2x3_m(vbool8_t vm, const __bf16 *rs1,
                                            size_t vl) {
  return __riscv_vlseg3e16_v_bf16m2x3_m(vm, rs1, vl);
}
