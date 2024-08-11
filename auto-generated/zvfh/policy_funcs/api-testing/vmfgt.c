#include <riscv_vector.h>
#include <stdint.h>

vbool64_t test_vmfgt_vv_f16mf4_b64_mu(vbool64_t vm, vbool64_t vd,
                                      vfloat16mf4_t vs2, vfloat16mf4_t vs1,
                                      size_t vl) {
  return __riscv_vmfgt_vv_f16mf4_b64_mu(vm, vd, vs2, vs1, vl);
}

vbool64_t test_vmfgt_vf_f16mf4_b64_mu(vbool64_t vm, vbool64_t vd,
                                      vfloat16mf4_t vs2, _Float16 rs1,
                                      size_t vl) {
  return __riscv_vmfgt_vf_f16mf4_b64_mu(vm, vd, vs2, rs1, vl);
}

vbool32_t test_vmfgt_vv_f16mf2_b32_mu(vbool32_t vm, vbool32_t vd,
                                      vfloat16mf2_t vs2, vfloat16mf2_t vs1,
                                      size_t vl) {
  return __riscv_vmfgt_vv_f16mf2_b32_mu(vm, vd, vs2, vs1, vl);
}

vbool32_t test_vmfgt_vf_f16mf2_b32_mu(vbool32_t vm, vbool32_t vd,
                                      vfloat16mf2_t vs2, _Float16 rs1,
                                      size_t vl) {
  return __riscv_vmfgt_vf_f16mf2_b32_mu(vm, vd, vs2, rs1, vl);
}

vbool16_t test_vmfgt_vv_f16m1_b16_mu(vbool16_t vm, vbool16_t vd,
                                     vfloat16m1_t vs2, vfloat16m1_t vs1,
                                     size_t vl) {
  return __riscv_vmfgt_vv_f16m1_b16_mu(vm, vd, vs2, vs1, vl);
}

vbool16_t test_vmfgt_vf_f16m1_b16_mu(vbool16_t vm, vbool16_t vd,
                                     vfloat16m1_t vs2, _Float16 rs1,
                                     size_t vl) {
  return __riscv_vmfgt_vf_f16m1_b16_mu(vm, vd, vs2, rs1, vl);
}

vbool8_t test_vmfgt_vv_f16m2_b8_mu(vbool8_t vm, vbool8_t vd, vfloat16m2_t vs2,
                                   vfloat16m2_t vs1, size_t vl) {
  return __riscv_vmfgt_vv_f16m2_b8_mu(vm, vd, vs2, vs1, vl);
}

vbool8_t test_vmfgt_vf_f16m2_b8_mu(vbool8_t vm, vbool8_t vd, vfloat16m2_t vs2,
                                   _Float16 rs1, size_t vl) {
  return __riscv_vmfgt_vf_f16m2_b8_mu(vm, vd, vs2, rs1, vl);
}

vbool4_t test_vmfgt_vv_f16m4_b4_mu(vbool4_t vm, vbool4_t vd, vfloat16m4_t vs2,
                                   vfloat16m4_t vs1, size_t vl) {
  return __riscv_vmfgt_vv_f16m4_b4_mu(vm, vd, vs2, vs1, vl);
}

vbool4_t test_vmfgt_vf_f16m4_b4_mu(vbool4_t vm, vbool4_t vd, vfloat16m4_t vs2,
                                   _Float16 rs1, size_t vl) {
  return __riscv_vmfgt_vf_f16m4_b4_mu(vm, vd, vs2, rs1, vl);
}

vbool2_t test_vmfgt_vv_f16m8_b2_mu(vbool2_t vm, vbool2_t vd, vfloat16m8_t vs2,
                                   vfloat16m8_t vs1, size_t vl) {
  return __riscv_vmfgt_vv_f16m8_b2_mu(vm, vd, vs2, vs1, vl);
}

vbool2_t test_vmfgt_vf_f16m8_b2_mu(vbool2_t vm, vbool2_t vd, vfloat16m8_t vs2,
                                   _Float16 rs1, size_t vl) {
  return __riscv_vmfgt_vf_f16m8_b2_mu(vm, vd, vs2, rs1, vl);
}
