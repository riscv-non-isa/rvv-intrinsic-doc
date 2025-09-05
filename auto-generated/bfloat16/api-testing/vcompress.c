#include <riscv_vector.h>
#include <stdint.h>

vbfloat16mf4_t test_vcompress_vm_bf16mf4(vbfloat16mf4_t vs2, vbool64_t vs1,
                                         size_t vl) {
  return __riscv_vcompress_vm_bf16mf4(vs2, vs1, vl);
}

vbfloat16mf2_t test_vcompress_vm_bf16mf2(vbfloat16mf2_t vs2, vbool32_t vs1,
                                         size_t vl) {
  return __riscv_vcompress_vm_bf16mf2(vs2, vs1, vl);
}

vbfloat16m1_t test_vcompress_vm_bf16m1(vbfloat16m1_t vs2, vbool16_t vs1,
                                       size_t vl) {
  return __riscv_vcompress_vm_bf16m1(vs2, vs1, vl);
}

vbfloat16m2_t test_vcompress_vm_bf16m2(vbfloat16m2_t vs2, vbool8_t vs1,
                                       size_t vl) {
  return __riscv_vcompress_vm_bf16m2(vs2, vs1, vl);
}

vbfloat16m4_t test_vcompress_vm_bf16m4(vbfloat16m4_t vs2, vbool4_t vs1,
                                       size_t vl) {
  return __riscv_vcompress_vm_bf16m4(vs2, vs1, vl);
}

vbfloat16m8_t test_vcompress_vm_bf16m8(vbfloat16m8_t vs2, vbool2_t vs1,
                                       size_t vl) {
  return __riscv_vcompress_vm_bf16m8(vs2, vs1, vl);
}
