#include <riscv_vector.h>
#include <stdint.h>

vfloat16mf4_t test_vfmerge_vfm_f16mf4(vfloat16mf4_t vs2, _Float16 rs1,
                                      vbool64_t v0, size_t vl) {
  return __riscv_vfmerge_vfm_f16mf4(vs2, rs1, v0, vl);
}

vfloat16mf2_t test_vfmerge_vfm_f16mf2(vfloat16mf2_t vs2, _Float16 rs1,
                                      vbool32_t v0, size_t vl) {
  return __riscv_vfmerge_vfm_f16mf2(vs2, rs1, v0, vl);
}

vfloat16m1_t test_vfmerge_vfm_f16m1(vfloat16m1_t vs2, _Float16 rs1,
                                    vbool16_t v0, size_t vl) {
  return __riscv_vfmerge_vfm_f16m1(vs2, rs1, v0, vl);
}

vfloat16m2_t test_vfmerge_vfm_f16m2(vfloat16m2_t vs2, _Float16 rs1, vbool8_t v0,
                                    size_t vl) {
  return __riscv_vfmerge_vfm_f16m2(vs2, rs1, v0, vl);
}

vfloat16m4_t test_vfmerge_vfm_f16m4(vfloat16m4_t vs2, _Float16 rs1, vbool4_t v0,
                                    size_t vl) {
  return __riscv_vfmerge_vfm_f16m4(vs2, rs1, v0, vl);
}

vfloat16m8_t test_vfmerge_vfm_f16m8(vfloat16m8_t vs2, _Float16 rs1, vbool2_t v0,
                                    size_t vl) {
  return __riscv_vfmerge_vfm_f16m8(vs2, rs1, v0, vl);
}
