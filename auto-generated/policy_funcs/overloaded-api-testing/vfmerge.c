#include <riscv_vector.h>
#include <stdint.h>

vfloat32mf2_t test_vfmerge_vfm_f32mf2_tu(vfloat32mf2_t vd, vfloat32mf2_t vs2,
                                         float rs1, vbool64_t v0, size_t vl) {
  return __riscv_vfmerge_tu(vd, vs2, rs1, v0, vl);
}

vfloat32m1_t test_vfmerge_vfm_f32m1_tu(vfloat32m1_t vd, vfloat32m1_t vs2,
                                       float rs1, vbool32_t v0, size_t vl) {
  return __riscv_vfmerge_tu(vd, vs2, rs1, v0, vl);
}

vfloat32m2_t test_vfmerge_vfm_f32m2_tu(vfloat32m2_t vd, vfloat32m2_t vs2,
                                       float rs1, vbool16_t v0, size_t vl) {
  return __riscv_vfmerge_tu(vd, vs2, rs1, v0, vl);
}

vfloat32m4_t test_vfmerge_vfm_f32m4_tu(vfloat32m4_t vd, vfloat32m4_t vs2,
                                       float rs1, vbool8_t v0, size_t vl) {
  return __riscv_vfmerge_tu(vd, vs2, rs1, v0, vl);
}

vfloat32m8_t test_vfmerge_vfm_f32m8_tu(vfloat32m8_t vd, vfloat32m8_t vs2,
                                       float rs1, vbool4_t v0, size_t vl) {
  return __riscv_vfmerge_tu(vd, vs2, rs1, v0, vl);
}

vfloat64m1_t test_vfmerge_vfm_f64m1_tu(vfloat64m1_t vd, vfloat64m1_t vs2,
                                       double rs1, vbool64_t v0, size_t vl) {
  return __riscv_vfmerge_tu(vd, vs2, rs1, v0, vl);
}

vfloat64m2_t test_vfmerge_vfm_f64m2_tu(vfloat64m2_t vd, vfloat64m2_t vs2,
                                       double rs1, vbool32_t v0, size_t vl) {
  return __riscv_vfmerge_tu(vd, vs2, rs1, v0, vl);
}

vfloat64m4_t test_vfmerge_vfm_f64m4_tu(vfloat64m4_t vd, vfloat64m4_t vs2,
                                       double rs1, vbool16_t v0, size_t vl) {
  return __riscv_vfmerge_tu(vd, vs2, rs1, v0, vl);
}

vfloat64m8_t test_vfmerge_vfm_f64m8_tu(vfloat64m8_t vd, vfloat64m8_t vs2,
                                       double rs1, vbool8_t v0, size_t vl) {
  return __riscv_vfmerge_tu(vd, vs2, rs1, v0, vl);
}
