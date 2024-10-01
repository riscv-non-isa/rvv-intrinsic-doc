#include <riscv_vector.h>
#include <stdint.h>

vbfloat16mf4_t test_vmerge_vvm_bf16mf4(vbfloat16mf4_t vs2, vbfloat16mf4_t vs1,
                                       vbool64_t v0, size_t vl) {
  return __riscv_vmerge_vvm_bf16mf4(vs2, vs1, v0, vl);
}

vbfloat16mf2_t test_vmerge_vvm_bf16mf2(vbfloat16mf2_t vs2, vbfloat16mf2_t vs1,
                                       vbool32_t v0, size_t vl) {
  return __riscv_vmerge_vvm_bf16mf2(vs2, vs1, v0, vl);
}

vbfloat16m1_t test_vmerge_vvm_bf16m1(vbfloat16m1_t vs2, vbfloat16m1_t vs1,
                                     vbool16_t v0, size_t vl) {
  return __riscv_vmerge_vvm_bf16m1(vs2, vs1, v0, vl);
}

vbfloat16m2_t test_vmerge_vvm_bf16m2(vbfloat16m2_t vs2, vbfloat16m2_t vs1,
                                     vbool8_t v0, size_t vl) {
  return __riscv_vmerge_vvm_bf16m2(vs2, vs1, v0, vl);
}

vbfloat16m4_t test_vmerge_vvm_bf16m4(vbfloat16m4_t vs2, vbfloat16m4_t vs1,
                                     vbool4_t v0, size_t vl) {
  return __riscv_vmerge_vvm_bf16m4(vs2, vs1, v0, vl);
}

vbfloat16m8_t test_vmerge_vvm_bf16m8(vbfloat16m8_t vs2, vbfloat16m8_t vs1,
                                     vbool2_t v0, size_t vl) {
  return __riscv_vmerge_vvm_bf16m8(vs2, vs1, v0, vl);
}
