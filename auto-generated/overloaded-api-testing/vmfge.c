#include <riscv_vector.h>
#include <stdint.h>

vbool64_t test_vmfge_vv_f32mf2_b64(vfloat32mf2_t vs2, vfloat32mf2_t vs1,
                                   size_t vl) {
  return __riscv_vmfge(vs2, vs1, vl);
}

vbool64_t test_vmfge_vf_f32mf2_b64(vfloat32mf2_t vs2, float rs1, size_t vl) {
  return __riscv_vmfge(vs2, rs1, vl);
}

vbool32_t test_vmfge_vv_f32m1_b32(vfloat32m1_t vs2, vfloat32m1_t vs1,
                                  size_t vl) {
  return __riscv_vmfge(vs2, vs1, vl);
}

vbool32_t test_vmfge_vf_f32m1_b32(vfloat32m1_t vs2, float rs1, size_t vl) {
  return __riscv_vmfge(vs2, rs1, vl);
}

vbool16_t test_vmfge_vv_f32m2_b16(vfloat32m2_t vs2, vfloat32m2_t vs1,
                                  size_t vl) {
  return __riscv_vmfge(vs2, vs1, vl);
}

vbool16_t test_vmfge_vf_f32m2_b16(vfloat32m2_t vs2, float rs1, size_t vl) {
  return __riscv_vmfge(vs2, rs1, vl);
}

vbool8_t test_vmfge_vv_f32m4_b8(vfloat32m4_t vs2, vfloat32m4_t vs1, size_t vl) {
  return __riscv_vmfge(vs2, vs1, vl);
}

vbool8_t test_vmfge_vf_f32m4_b8(vfloat32m4_t vs2, float rs1, size_t vl) {
  return __riscv_vmfge(vs2, rs1, vl);
}

vbool4_t test_vmfge_vv_f32m8_b4(vfloat32m8_t vs2, vfloat32m8_t vs1, size_t vl) {
  return __riscv_vmfge(vs2, vs1, vl);
}

vbool4_t test_vmfge_vf_f32m8_b4(vfloat32m8_t vs2, float rs1, size_t vl) {
  return __riscv_vmfge(vs2, rs1, vl);
}

vbool64_t test_vmfge_vv_f64m1_b64(vfloat64m1_t vs2, vfloat64m1_t vs1,
                                  size_t vl) {
  return __riscv_vmfge(vs2, vs1, vl);
}

vbool64_t test_vmfge_vf_f64m1_b64(vfloat64m1_t vs2, double rs1, size_t vl) {
  return __riscv_vmfge(vs2, rs1, vl);
}

vbool32_t test_vmfge_vv_f64m2_b32(vfloat64m2_t vs2, vfloat64m2_t vs1,
                                  size_t vl) {
  return __riscv_vmfge(vs2, vs1, vl);
}

vbool32_t test_vmfge_vf_f64m2_b32(vfloat64m2_t vs2, double rs1, size_t vl) {
  return __riscv_vmfge(vs2, rs1, vl);
}

vbool16_t test_vmfge_vv_f64m4_b16(vfloat64m4_t vs2, vfloat64m4_t vs1,
                                  size_t vl) {
  return __riscv_vmfge(vs2, vs1, vl);
}

vbool16_t test_vmfge_vf_f64m4_b16(vfloat64m4_t vs2, double rs1, size_t vl) {
  return __riscv_vmfge(vs2, rs1, vl);
}

vbool8_t test_vmfge_vv_f64m8_b8(vfloat64m8_t vs2, vfloat64m8_t vs1, size_t vl) {
  return __riscv_vmfge(vs2, vs1, vl);
}

vbool8_t test_vmfge_vf_f64m8_b8(vfloat64m8_t vs2, double rs1, size_t vl) {
  return __riscv_vmfge(vs2, rs1, vl);
}

vbool64_t test_vmfge_vv_f32mf2_b64_m(vbool64_t vm, vfloat32mf2_t vs2,
                                     vfloat32mf2_t vs1, size_t vl) {
  return __riscv_vmfge(vm, vs2, vs1, vl);
}

vbool64_t test_vmfge_vf_f32mf2_b64_m(vbool64_t vm, vfloat32mf2_t vs2, float rs1,
                                     size_t vl) {
  return __riscv_vmfge(vm, vs2, rs1, vl);
}

vbool32_t test_vmfge_vv_f32m1_b32_m(vbool32_t vm, vfloat32m1_t vs2,
                                    vfloat32m1_t vs1, size_t vl) {
  return __riscv_vmfge(vm, vs2, vs1, vl);
}

vbool32_t test_vmfge_vf_f32m1_b32_m(vbool32_t vm, vfloat32m1_t vs2, float rs1,
                                    size_t vl) {
  return __riscv_vmfge(vm, vs2, rs1, vl);
}

vbool16_t test_vmfge_vv_f32m2_b16_m(vbool16_t vm, vfloat32m2_t vs2,
                                    vfloat32m2_t vs1, size_t vl) {
  return __riscv_vmfge(vm, vs2, vs1, vl);
}

vbool16_t test_vmfge_vf_f32m2_b16_m(vbool16_t vm, vfloat32m2_t vs2, float rs1,
                                    size_t vl) {
  return __riscv_vmfge(vm, vs2, rs1, vl);
}

vbool8_t test_vmfge_vv_f32m4_b8_m(vbool8_t vm, vfloat32m4_t vs2,
                                  vfloat32m4_t vs1, size_t vl) {
  return __riscv_vmfge(vm, vs2, vs1, vl);
}

vbool8_t test_vmfge_vf_f32m4_b8_m(vbool8_t vm, vfloat32m4_t vs2, float rs1,
                                  size_t vl) {
  return __riscv_vmfge(vm, vs2, rs1, vl);
}

vbool4_t test_vmfge_vv_f32m8_b4_m(vbool4_t vm, vfloat32m8_t vs2,
                                  vfloat32m8_t vs1, size_t vl) {
  return __riscv_vmfge(vm, vs2, vs1, vl);
}

vbool4_t test_vmfge_vf_f32m8_b4_m(vbool4_t vm, vfloat32m8_t vs2, float rs1,
                                  size_t vl) {
  return __riscv_vmfge(vm, vs2, rs1, vl);
}

vbool64_t test_vmfge_vv_f64m1_b64_m(vbool64_t vm, vfloat64m1_t vs2,
                                    vfloat64m1_t vs1, size_t vl) {
  return __riscv_vmfge(vm, vs2, vs1, vl);
}

vbool64_t test_vmfge_vf_f64m1_b64_m(vbool64_t vm, vfloat64m1_t vs2, double rs1,
                                    size_t vl) {
  return __riscv_vmfge(vm, vs2, rs1, vl);
}

vbool32_t test_vmfge_vv_f64m2_b32_m(vbool32_t vm, vfloat64m2_t vs2,
                                    vfloat64m2_t vs1, size_t vl) {
  return __riscv_vmfge(vm, vs2, vs1, vl);
}

vbool32_t test_vmfge_vf_f64m2_b32_m(vbool32_t vm, vfloat64m2_t vs2, double rs1,
                                    size_t vl) {
  return __riscv_vmfge(vm, vs2, rs1, vl);
}

vbool16_t test_vmfge_vv_f64m4_b16_m(vbool16_t vm, vfloat64m4_t vs2,
                                    vfloat64m4_t vs1, size_t vl) {
  return __riscv_vmfge(vm, vs2, vs1, vl);
}

vbool16_t test_vmfge_vf_f64m4_b16_m(vbool16_t vm, vfloat64m4_t vs2, double rs1,
                                    size_t vl) {
  return __riscv_vmfge(vm, vs2, rs1, vl);
}

vbool8_t test_vmfge_vv_f64m8_b8_m(vbool8_t vm, vfloat64m8_t vs2,
                                  vfloat64m8_t vs1, size_t vl) {
  return __riscv_vmfge(vm, vs2, vs1, vl);
}

vbool8_t test_vmfge_vf_f64m8_b8_m(vbool8_t vm, vfloat64m8_t vs2, double rs1,
                                  size_t vl) {
  return __riscv_vmfge(vm, vs2, rs1, vl);
}
