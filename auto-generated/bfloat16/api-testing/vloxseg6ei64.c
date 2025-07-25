#include <riscv_vector.h>
#include <stdint.h>

vbfloat16mf4x6_t test_vloxseg6ei64_v_bf16mf4x6(const __bf16 *rs1,
                                               vuint64m1_t rs2, size_t vl) {
  return __riscv_vloxseg6ei64_v_bf16mf4x6(rs1, rs2, vl);
}

vbfloat16mf2x6_t test_vloxseg6ei64_v_bf16mf2x6(const __bf16 *rs1,
                                               vuint64m2_t rs2, size_t vl) {
  return __riscv_vloxseg6ei64_v_bf16mf2x6(rs1, rs2, vl);
}

vbfloat16m1x6_t test_vloxseg6ei64_v_bf16m1x6(const __bf16 *rs1, vuint64m4_t rs2,
                                             size_t vl) {
  return __riscv_vloxseg6ei64_v_bf16m1x6(rs1, rs2, vl);
}

vbfloat16mf4x6_t test_vloxseg6ei64_v_bf16mf4x6_m(vbool64_t vm,
                                                 const __bf16 *rs1,
                                                 vuint64m1_t rs2, size_t vl) {
  return __riscv_vloxseg6ei64_v_bf16mf4x6_m(vm, rs1, rs2, vl);
}

vbfloat16mf2x6_t test_vloxseg6ei64_v_bf16mf2x6_m(vbool32_t vm,
                                                 const __bf16 *rs1,
                                                 vuint64m2_t rs2, size_t vl) {
  return __riscv_vloxseg6ei64_v_bf16mf2x6_m(vm, rs1, rs2, vl);
}

vbfloat16m1x6_t test_vloxseg6ei64_v_bf16m1x6_m(vbool16_t vm, const __bf16 *rs1,
                                               vuint64m4_t rs2, size_t vl) {
  return __riscv_vloxseg6ei64_v_bf16m1x6_m(vm, rs1, rs2, vl);
}
