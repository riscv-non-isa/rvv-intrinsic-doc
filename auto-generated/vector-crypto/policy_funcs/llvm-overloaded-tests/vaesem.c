// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -target-feature +zvl512b \
// RUN:   -target-feature +zvbb \
// RUN:   -target-feature +zvbc \
// RUN:   -target-feature +zvkg \
// RUN:   -target-feature +zvkned \
// RUN:   -target-feature +zvknhb \
// RUN:   -target-feature +zvksed \
// RUN:   -target-feature +zvksh -disable-O0-optnone \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

vuint32mf2_t test_vaesem_vv_u32mf2_tu(vuint32mf2_t vd, vuint32mf2_t vs2,
                                      size_t vl) {
  return __riscv_vaesem_vv_tu(vd, vs2, vl);
}

vuint32mf2_t test_vaesem_vs_u32mf2_u32mf2_tu(vuint32mf2_t vd, vuint32mf2_t vs2,
                                             size_t vl) {
  return __riscv_vaesem_vs_tu(vd, vs2, vl);
}

vuint32m1_t test_vaesem_vs_u32mf2_u32m1_tu(vuint32m1_t vd, vuint32mf2_t vs2,
                                           size_t vl) {
  return __riscv_vaesem_vs_tu(vd, vs2, vl);
}

vuint32m2_t test_vaesem_vs_u32mf2_u32m2_tu(vuint32m2_t vd, vuint32mf2_t vs2,
                                           size_t vl) {
  return __riscv_vaesem_vs_tu(vd, vs2, vl);
}

vuint32m4_t test_vaesem_vs_u32mf2_u32m4_tu(vuint32m4_t vd, vuint32mf2_t vs2,
                                           size_t vl) {
  return __riscv_vaesem_vs_tu(vd, vs2, vl);
}

vuint32m8_t test_vaesem_vs_u32mf2_u32m8_tu(vuint32m8_t vd, vuint32mf2_t vs2,
                                           size_t vl) {
  return __riscv_vaesem_vs_tu(vd, vs2, vl);
}

vuint32m1_t test_vaesem_vv_u32m1_tu(vuint32m1_t vd, vuint32m1_t vs2,
                                    size_t vl) {
  return __riscv_vaesem_vv_tu(vd, vs2, vl);
}

vuint32m1_t test_vaesem_vs_u32m1_u32m1_tu(vuint32m1_t vd, vuint32m1_t vs2,
                                          size_t vl) {
  return __riscv_vaesem_vs_tu(vd, vs2, vl);
}

vuint32m2_t test_vaesem_vs_u32m1_u32m2_tu(vuint32m2_t vd, vuint32m1_t vs2,
                                          size_t vl) {
  return __riscv_vaesem_vs_tu(vd, vs2, vl);
}

vuint32m4_t test_vaesem_vs_u32m1_u32m4_tu(vuint32m4_t vd, vuint32m1_t vs2,
                                          size_t vl) {
  return __riscv_vaesem_vs_tu(vd, vs2, vl);
}

vuint32m8_t test_vaesem_vs_u32m1_u32m8_tu(vuint32m8_t vd, vuint32m1_t vs2,
                                          size_t vl) {
  return __riscv_vaesem_vs_tu(vd, vs2, vl);
}

vuint32m2_t test_vaesem_vv_u32m2_tu(vuint32m2_t vd, vuint32m2_t vs2,
                                    size_t vl) {
  return __riscv_vaesem_vv_tu(vd, vs2, vl);
}

vuint32m2_t test_vaesem_vs_u32m2_u32m2_tu(vuint32m2_t vd, vuint32m2_t vs2,
                                          size_t vl) {
  return __riscv_vaesem_vs_tu(vd, vs2, vl);
}

vuint32m4_t test_vaesem_vs_u32m2_u32m4_tu(vuint32m4_t vd, vuint32m2_t vs2,
                                          size_t vl) {
  return __riscv_vaesem_vs_tu(vd, vs2, vl);
}

vuint32m8_t test_vaesem_vs_u32m2_u32m8_tu(vuint32m8_t vd, vuint32m2_t vs2,
                                          size_t vl) {
  return __riscv_vaesem_vs_tu(vd, vs2, vl);
}

vuint32m4_t test_vaesem_vv_u32m4_tu(vuint32m4_t vd, vuint32m4_t vs2,
                                    size_t vl) {
  return __riscv_vaesem_vv_tu(vd, vs2, vl);
}

vuint32m4_t test_vaesem_vs_u32m4_u32m4_tu(vuint32m4_t vd, vuint32m4_t vs2,
                                          size_t vl) {
  return __riscv_vaesem_vs_tu(vd, vs2, vl);
}

vuint32m8_t test_vaesem_vs_u32m4_u32m8_tu(vuint32m8_t vd, vuint32m4_t vs2,
                                          size_t vl) {
  return __riscv_vaesem_vs_tu(vd, vs2, vl);
}

vuint32m8_t test_vaesem_vv_u32m8_tu(vuint32m8_t vd, vuint32m8_t vs2,
                                    size_t vl) {
  return __riscv_vaesem_vv_tu(vd, vs2, vl);
}
