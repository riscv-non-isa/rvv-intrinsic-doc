#include <riscv_vector.h>
#include <stdint.h>

vbfloat16mf4x3_t test_vloxseg3ei64_v_bf16mf4x3(const __bf16 *rs1,
                                               vuint64m1_t rs2, size_t vl) {
  return __riscv_vloxseg3ei64(rs1, rs2, vl);
}

vbfloat16mf2x3_t test_vloxseg3ei64_v_bf16mf2x3(const __bf16 *rs1,
                                               vuint64m2_t rs2, size_t vl) {
  return __riscv_vloxseg3ei64(rs1, rs2, vl);
}

vbfloat16m1x3_t test_vloxseg3ei64_v_bf16m1x3(const __bf16 *rs1, vuint64m4_t rs2,
                                             size_t vl) {
  return __riscv_vloxseg3ei64(rs1, rs2, vl);
}

vbfloat16m2x3_t test_vloxseg3ei64_v_bf16m2x3(const __bf16 *rs1, vuint64m8_t rs2,
                                             size_t vl) {
  return __riscv_vloxseg3ei64(rs1, rs2, vl);
}

vbfloat16mf4x3_t test_vloxseg3ei64_v_bf16mf4x3_m(vbool64_t vm,
                                                 const __bf16 *rs1,
                                                 vuint64m1_t rs2, size_t vl) {
  return __riscv_vloxseg3ei64(vm, rs1, rs2, vl);
}

vbfloat16mf2x3_t test_vloxseg3ei64_v_bf16mf2x3_m(vbool32_t vm,
                                                 const __bf16 *rs1,
                                                 vuint64m2_t rs2, size_t vl) {
  return __riscv_vloxseg3ei64(vm, rs1, rs2, vl);
}

vbfloat16m1x3_t test_vloxseg3ei64_v_bf16m1x3_m(vbool16_t vm, const __bf16 *rs1,
                                               vuint64m4_t rs2, size_t vl) {
  return __riscv_vloxseg3ei64(vm, rs1, rs2, vl);
}

vbfloat16m2x3_t test_vloxseg3ei64_v_bf16m2x3_m(vbool8_t vm, const __bf16 *rs1,
                                               vuint64m8_t rs2, size_t vl) {
  return __riscv_vloxseg3ei64(vm, rs1, rs2, vl);
}
