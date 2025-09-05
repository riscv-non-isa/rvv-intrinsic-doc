// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -target-feature +zfh \
// RUN:   -target-feature +zvfh -disable-O0-optnone \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

vfloat16m1_t test_vfredmax_vs_f16mf4_f16m1(vfloat16mf4_t vs2, vfloat16m1_t vs1,
                                           size_t vl) {
  return __riscv_vfredmax_vs_f16mf4_f16m1(vs2, vs1, vl);
}

vfloat16m1_t test_vfredmax_vs_f16mf2_f16m1(vfloat16mf2_t vs2, vfloat16m1_t vs1,
                                           size_t vl) {
  return __riscv_vfredmax_vs_f16mf2_f16m1(vs2, vs1, vl);
}

vfloat16m1_t test_vfredmax_vs_f16m1_f16m1(vfloat16m1_t vs2, vfloat16m1_t vs1,
                                          size_t vl) {
  return __riscv_vfredmax_vs_f16m1_f16m1(vs2, vs1, vl);
}

vfloat16m1_t test_vfredmax_vs_f16m2_f16m1(vfloat16m2_t vs2, vfloat16m1_t vs1,
                                          size_t vl) {
  return __riscv_vfredmax_vs_f16m2_f16m1(vs2, vs1, vl);
}

vfloat16m1_t test_vfredmax_vs_f16m4_f16m1(vfloat16m4_t vs2, vfloat16m1_t vs1,
                                          size_t vl) {
  return __riscv_vfredmax_vs_f16m4_f16m1(vs2, vs1, vl);
}

vfloat16m1_t test_vfredmax_vs_f16m8_f16m1(vfloat16m8_t vs2, vfloat16m1_t vs1,
                                          size_t vl) {
  return __riscv_vfredmax_vs_f16m8_f16m1(vs2, vs1, vl);
}

vfloat32m1_t test_vfredmax_vs_f32mf2_f32m1(vfloat32mf2_t vs2, vfloat32m1_t vs1,
                                           size_t vl) {
  return __riscv_vfredmax_vs_f32mf2_f32m1(vs2, vs1, vl);
}

vfloat32m1_t test_vfredmax_vs_f32m1_f32m1(vfloat32m1_t vs2, vfloat32m1_t vs1,
                                          size_t vl) {
  return __riscv_vfredmax_vs_f32m1_f32m1(vs2, vs1, vl);
}

vfloat32m1_t test_vfredmax_vs_f32m2_f32m1(vfloat32m2_t vs2, vfloat32m1_t vs1,
                                          size_t vl) {
  return __riscv_vfredmax_vs_f32m2_f32m1(vs2, vs1, vl);
}

vfloat32m1_t test_vfredmax_vs_f32m4_f32m1(vfloat32m4_t vs2, vfloat32m1_t vs1,
                                          size_t vl) {
  return __riscv_vfredmax_vs_f32m4_f32m1(vs2, vs1, vl);
}

vfloat32m1_t test_vfredmax_vs_f32m8_f32m1(vfloat32m8_t vs2, vfloat32m1_t vs1,
                                          size_t vl) {
  return __riscv_vfredmax_vs_f32m8_f32m1(vs2, vs1, vl);
}

vfloat64m1_t test_vfredmax_vs_f64m1_f64m1(vfloat64m1_t vs2, vfloat64m1_t vs1,
                                          size_t vl) {
  return __riscv_vfredmax_vs_f64m1_f64m1(vs2, vs1, vl);
}

vfloat64m1_t test_vfredmax_vs_f64m2_f64m1(vfloat64m2_t vs2, vfloat64m1_t vs1,
                                          size_t vl) {
  return __riscv_vfredmax_vs_f64m2_f64m1(vs2, vs1, vl);
}

vfloat64m1_t test_vfredmax_vs_f64m4_f64m1(vfloat64m4_t vs2, vfloat64m1_t vs1,
                                          size_t vl) {
  return __riscv_vfredmax_vs_f64m4_f64m1(vs2, vs1, vl);
}

vfloat64m1_t test_vfredmax_vs_f64m8_f64m1(vfloat64m8_t vs2, vfloat64m1_t vs1,
                                          size_t vl) {
  return __riscv_vfredmax_vs_f64m8_f64m1(vs2, vs1, vl);
}

vfloat16m1_t test_vfredmax_vs_f16mf4_f16m1_m(vbool64_t vm, vfloat16mf4_t vs2,
                                             vfloat16m1_t vs1, size_t vl) {
  return __riscv_vfredmax_vs_f16mf4_f16m1_m(vm, vs2, vs1, vl);
}

vfloat16m1_t test_vfredmax_vs_f16mf2_f16m1_m(vbool32_t vm, vfloat16mf2_t vs2,
                                             vfloat16m1_t vs1, size_t vl) {
  return __riscv_vfredmax_vs_f16mf2_f16m1_m(vm, vs2, vs1, vl);
}

vfloat16m1_t test_vfredmax_vs_f16m1_f16m1_m(vbool16_t vm, vfloat16m1_t vs2,
                                            vfloat16m1_t vs1, size_t vl) {
  return __riscv_vfredmax_vs_f16m1_f16m1_m(vm, vs2, vs1, vl);
}

vfloat16m1_t test_vfredmax_vs_f16m2_f16m1_m(vbool8_t vm, vfloat16m2_t vs2,
                                            vfloat16m1_t vs1, size_t vl) {
  return __riscv_vfredmax_vs_f16m2_f16m1_m(vm, vs2, vs1, vl);
}

vfloat16m1_t test_vfredmax_vs_f16m4_f16m1_m(vbool4_t vm, vfloat16m4_t vs2,
                                            vfloat16m1_t vs1, size_t vl) {
  return __riscv_vfredmax_vs_f16m4_f16m1_m(vm, vs2, vs1, vl);
}

vfloat16m1_t test_vfredmax_vs_f16m8_f16m1_m(vbool2_t vm, vfloat16m8_t vs2,
                                            vfloat16m1_t vs1, size_t vl) {
  return __riscv_vfredmax_vs_f16m8_f16m1_m(vm, vs2, vs1, vl);
}

vfloat32m1_t test_vfredmax_vs_f32mf2_f32m1_m(vbool64_t vm, vfloat32mf2_t vs2,
                                             vfloat32m1_t vs1, size_t vl) {
  return __riscv_vfredmax_vs_f32mf2_f32m1_m(vm, vs2, vs1, vl);
}

vfloat32m1_t test_vfredmax_vs_f32m1_f32m1_m(vbool32_t vm, vfloat32m1_t vs2,
                                            vfloat32m1_t vs1, size_t vl) {
  return __riscv_vfredmax_vs_f32m1_f32m1_m(vm, vs2, vs1, vl);
}

vfloat32m1_t test_vfredmax_vs_f32m2_f32m1_m(vbool16_t vm, vfloat32m2_t vs2,
                                            vfloat32m1_t vs1, size_t vl) {
  return __riscv_vfredmax_vs_f32m2_f32m1_m(vm, vs2, vs1, vl);
}

vfloat32m1_t test_vfredmax_vs_f32m4_f32m1_m(vbool8_t vm, vfloat32m4_t vs2,
                                            vfloat32m1_t vs1, size_t vl) {
  return __riscv_vfredmax_vs_f32m4_f32m1_m(vm, vs2, vs1, vl);
}

vfloat32m1_t test_vfredmax_vs_f32m8_f32m1_m(vbool4_t vm, vfloat32m8_t vs2,
                                            vfloat32m1_t vs1, size_t vl) {
  return __riscv_vfredmax_vs_f32m8_f32m1_m(vm, vs2, vs1, vl);
}

vfloat64m1_t test_vfredmax_vs_f64m1_f64m1_m(vbool64_t vm, vfloat64m1_t vs2,
                                            vfloat64m1_t vs1, size_t vl) {
  return __riscv_vfredmax_vs_f64m1_f64m1_m(vm, vs2, vs1, vl);
}

vfloat64m1_t test_vfredmax_vs_f64m2_f64m1_m(vbool32_t vm, vfloat64m2_t vs2,
                                            vfloat64m1_t vs1, size_t vl) {
  return __riscv_vfredmax_vs_f64m2_f64m1_m(vm, vs2, vs1, vl);
}

vfloat64m1_t test_vfredmax_vs_f64m4_f64m1_m(vbool16_t vm, vfloat64m4_t vs2,
                                            vfloat64m1_t vs1, size_t vl) {
  return __riscv_vfredmax_vs_f64m4_f64m1_m(vm, vs2, vs1, vl);
}

vfloat64m1_t test_vfredmax_vs_f64m8_f64m1_m(vbool8_t vm, vfloat64m8_t vs2,
                                            vfloat64m1_t vs1, size_t vl) {
  return __riscv_vfredmax_vs_f64m8_f64m1_m(vm, vs2, vs1, vl);
}
