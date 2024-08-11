#include <riscv_vector.h>
#include <stdint.h>

vbool64_t test_vmflt_vv_f16mf4_b64(vfloat16mf4_t vs2, vfloat16mf4_t vs1,
                                   size_t vl) {
  return __riscv_vmflt_vv_f16mf4_b64(vs2, vs1, vl);
}

vbool64_t test_vmflt_vf_f16mf4_b64(vfloat16mf4_t vs2, _Float16 rs1, size_t vl) {
  return __riscv_vmflt_vf_f16mf4_b64(vs2, rs1, vl);
}

vbool32_t test_vmflt_vv_f16mf2_b32(vfloat16mf2_t vs2, vfloat16mf2_t vs1,
                                   size_t vl) {
  return __riscv_vmflt_vv_f16mf2_b32(vs2, vs1, vl);
}

vbool32_t test_vmflt_vf_f16mf2_b32(vfloat16mf2_t vs2, _Float16 rs1, size_t vl) {
  return __riscv_vmflt_vf_f16mf2_b32(vs2, rs1, vl);
}

vbool16_t test_vmflt_vv_f16m1_b16(vfloat16m1_t vs2, vfloat16m1_t vs1,
                                  size_t vl) {
  return __riscv_vmflt_vv_f16m1_b16(vs2, vs1, vl);
}

vbool16_t test_vmflt_vf_f16m1_b16(vfloat16m1_t vs2, _Float16 rs1, size_t vl) {
  return __riscv_vmflt_vf_f16m1_b16(vs2, rs1, vl);
}

vbool8_t test_vmflt_vv_f16m2_b8(vfloat16m2_t vs2, vfloat16m2_t vs1, size_t vl) {
  return __riscv_vmflt_vv_f16m2_b8(vs2, vs1, vl);
}

vbool8_t test_vmflt_vf_f16m2_b8(vfloat16m2_t vs2, _Float16 rs1, size_t vl) {
  return __riscv_vmflt_vf_f16m2_b8(vs2, rs1, vl);
}

vbool4_t test_vmflt_vv_f16m4_b4(vfloat16m4_t vs2, vfloat16m4_t vs1, size_t vl) {
  return __riscv_vmflt_vv_f16m4_b4(vs2, vs1, vl);
}

vbool4_t test_vmflt_vf_f16m4_b4(vfloat16m4_t vs2, _Float16 rs1, size_t vl) {
  return __riscv_vmflt_vf_f16m4_b4(vs2, rs1, vl);
}

vbool2_t test_vmflt_vv_f16m8_b2(vfloat16m8_t vs2, vfloat16m8_t vs1, size_t vl) {
  return __riscv_vmflt_vv_f16m8_b2(vs2, vs1, vl);
}

vbool2_t test_vmflt_vf_f16m8_b2(vfloat16m8_t vs2, _Float16 rs1, size_t vl) {
  return __riscv_vmflt_vf_f16m8_b2(vs2, rs1, vl);
}

vbool64_t test_vmflt_vv_f16mf4_b64_m(vbool64_t vm, vfloat16mf4_t vs2,
                                     vfloat16mf4_t vs1, size_t vl) {
  return __riscv_vmflt_vv_f16mf4_b64_m(vm, vs2, vs1, vl);
}

vbool64_t test_vmflt_vf_f16mf4_b64_m(vbool64_t vm, vfloat16mf4_t vs2,
                                     _Float16 rs1, size_t vl) {
  return __riscv_vmflt_vf_f16mf4_b64_m(vm, vs2, rs1, vl);
}

vbool32_t test_vmflt_vv_f16mf2_b32_m(vbool32_t vm, vfloat16mf2_t vs2,
                                     vfloat16mf2_t vs1, size_t vl) {
  return __riscv_vmflt_vv_f16mf2_b32_m(vm, vs2, vs1, vl);
}

vbool32_t test_vmflt_vf_f16mf2_b32_m(vbool32_t vm, vfloat16mf2_t vs2,
                                     _Float16 rs1, size_t vl) {
  return __riscv_vmflt_vf_f16mf2_b32_m(vm, vs2, rs1, vl);
}

vbool16_t test_vmflt_vv_f16m1_b16_m(vbool16_t vm, vfloat16m1_t vs2,
                                    vfloat16m1_t vs1, size_t vl) {
  return __riscv_vmflt_vv_f16m1_b16_m(vm, vs2, vs1, vl);
}

vbool16_t test_vmflt_vf_f16m1_b16_m(vbool16_t vm, vfloat16m1_t vs2,
                                    _Float16 rs1, size_t vl) {
  return __riscv_vmflt_vf_f16m1_b16_m(vm, vs2, rs1, vl);
}

vbool8_t test_vmflt_vv_f16m2_b8_m(vbool8_t vm, vfloat16m2_t vs2,
                                  vfloat16m2_t vs1, size_t vl) {
  return __riscv_vmflt_vv_f16m2_b8_m(vm, vs2, vs1, vl);
}

vbool8_t test_vmflt_vf_f16m2_b8_m(vbool8_t vm, vfloat16m2_t vs2, _Float16 rs1,
                                  size_t vl) {
  return __riscv_vmflt_vf_f16m2_b8_m(vm, vs2, rs1, vl);
}

vbool4_t test_vmflt_vv_f16m4_b4_m(vbool4_t vm, vfloat16m4_t vs2,
                                  vfloat16m4_t vs1, size_t vl) {
  return __riscv_vmflt_vv_f16m4_b4_m(vm, vs2, vs1, vl);
}

vbool4_t test_vmflt_vf_f16m4_b4_m(vbool4_t vm, vfloat16m4_t vs2, _Float16 rs1,
                                  size_t vl) {
  return __riscv_vmflt_vf_f16m4_b4_m(vm, vs2, rs1, vl);
}

vbool2_t test_vmflt_vv_f16m8_b2_m(vbool2_t vm, vfloat16m8_t vs2,
                                  vfloat16m8_t vs1, size_t vl) {
  return __riscv_vmflt_vv_f16m8_b2_m(vm, vs2, vs1, vl);
}

vbool2_t test_vmflt_vf_f16m8_b2_m(vbool2_t vm, vfloat16m8_t vs2, _Float16 rs1,
                                  size_t vl) {
  return __riscv_vmflt_vf_f16m8_b2_m(vm, vs2, rs1, vl);
}
