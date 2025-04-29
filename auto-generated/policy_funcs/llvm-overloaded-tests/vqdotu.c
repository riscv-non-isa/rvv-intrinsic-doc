// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -disable-O0-optnone \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

vuint32mf2_t test_vqdotu_vv_u32mf2_tu(vuint32mf2_t vd, vuint8mf2_t vs2,
                                      vuint8mf2_t vs1, size_t vl) {
  return __riscv_vqdotu_tu(vd, vs2, vs1, vl);
}

vuint32mf2_t test_vqdotu_vx_u32mf2_tu(vuint32mf2_t vd, vuint8mf2_t vs2,
                                      uint32_t rs1, size_t vl) {
  return __riscv_vqdotu_tu(vd, vs2, rs1, vl);
}

vuint32m1_t test_vqdotu_vv_u32m1_tu(vuint32m1_t vd, vuint8m1_t vs2,
                                    vuint8m1_t vs1, size_t vl) {
  return __riscv_vqdotu_tu(vd, vs2, vs1, vl);
}

vuint32m1_t test_vqdotu_vx_u32m1_tu(vuint32m1_t vd, vuint8m1_t vs2,
                                    uint32_t rs1, size_t vl) {
  return __riscv_vqdotu_tu(vd, vs2, rs1, vl);
}

vuint32m2_t test_vqdotu_vv_u32m2_tu(vuint32m2_t vd, vuint8m2_t vs2,
                                    vuint8m2_t vs1, size_t vl) {
  return __riscv_vqdotu_tu(vd, vs2, vs1, vl);
}

vuint32m2_t test_vqdotu_vx_u32m2_tu(vuint32m2_t vd, vuint8m2_t vs2,
                                    uint32_t rs1, size_t vl) {
  return __riscv_vqdotu_tu(vd, vs2, rs1, vl);
}

vuint32m4_t test_vqdotu_vv_u32m4_tu(vuint32m4_t vd, vuint8m4_t vs2,
                                    vuint8m4_t vs1, size_t vl) {
  return __riscv_vqdotu_tu(vd, vs2, vs1, vl);
}

vuint32m4_t test_vqdotu_vx_u32m4_tu(vuint32m4_t vd, vuint8m4_t vs2,
                                    uint32_t rs1, size_t vl) {
  return __riscv_vqdotu_tu(vd, vs2, rs1, vl);
}

vuint32m8_t test_vqdotu_vv_u32m8_tu(vuint32m8_t vd, vuint8m8_t vs2,
                                    vuint8m8_t vs1, size_t vl) {
  return __riscv_vqdotu_tu(vd, vs2, vs1, vl);
}

vuint32m8_t test_vqdotu_vx_u32m8_tu(vuint32m8_t vd, vuint8m8_t vs2,
                                    uint32_t rs1, size_t vl) {
  return __riscv_vqdotu_tu(vd, vs2, rs1, vl);
}

vuint32mf2_t test_vqdotu_vv_u32mf2_tum(vbool64_t vm, vuint32mf2_t vd,
                                       vuint8mf2_t vs2, vuint8mf2_t vs1,
                                       size_t vl) {
  return __riscv_vqdotu_tum(vm, vd, vs2, vs1, vl);
}

vuint32mf2_t test_vqdotu_vx_u32mf2_tum(vbool64_t vm, vuint32mf2_t vd,
                                       vuint8mf2_t vs2, uint32_t rs1,
                                       size_t vl) {
  return __riscv_vqdotu_tum(vm, vd, vs2, rs1, vl);
}

vuint32m1_t test_vqdotu_vv_u32m1_tum(vbool32_t vm, vuint32m1_t vd,
                                     vuint8m1_t vs2, vuint8m1_t vs1,
                                     size_t vl) {
  return __riscv_vqdotu_tum(vm, vd, vs2, vs1, vl);
}

vuint32m1_t test_vqdotu_vx_u32m1_tum(vbool32_t vm, vuint32m1_t vd,
                                     vuint8m1_t vs2, uint32_t rs1, size_t vl) {
  return __riscv_vqdotu_tum(vm, vd, vs2, rs1, vl);
}

vuint32m2_t test_vqdotu_vv_u32m2_tum(vbool16_t vm, vuint32m2_t vd,
                                     vuint8m2_t vs2, vuint8m2_t vs1,
                                     size_t vl) {
  return __riscv_vqdotu_tum(vm, vd, vs2, vs1, vl);
}

vuint32m2_t test_vqdotu_vx_u32m2_tum(vbool16_t vm, vuint32m2_t vd,
                                     vuint8m2_t vs2, uint32_t rs1, size_t vl) {
  return __riscv_vqdotu_tum(vm, vd, vs2, rs1, vl);
}

vuint32m4_t test_vqdotu_vv_u32m4_tum(vbool8_t vm, vuint32m4_t vd,
                                     vuint8m4_t vs2, vuint8m4_t vs1,
                                     size_t vl) {
  return __riscv_vqdotu_tum(vm, vd, vs2, vs1, vl);
}

vuint32m4_t test_vqdotu_vx_u32m4_tum(vbool8_t vm, vuint32m4_t vd,
                                     vuint8m4_t vs2, uint32_t rs1, size_t vl) {
  return __riscv_vqdotu_tum(vm, vd, vs2, rs1, vl);
}

vuint32m8_t test_vqdotu_vv_u32m8_tum(vbool4_t vm, vuint32m8_t vd,
                                     vuint8m8_t vs2, vuint8m8_t vs1,
                                     size_t vl) {
  return __riscv_vqdotu_tum(vm, vd, vs2, vs1, vl);
}

vuint32m8_t test_vqdotu_vx_u32m8_tum(vbool4_t vm, vuint32m8_t vd,
                                     vuint8m8_t vs2, uint32_t rs1, size_t vl) {
  return __riscv_vqdotu_tum(vm, vd, vs2, rs1, vl);
}

vuint32mf2_t test_vqdotu_vv_u32mf2_tumu(vbool64_t vm, vuint32mf2_t vd,
                                        vuint8mf2_t vs2, vuint8mf2_t vs1,
                                        size_t vl) {
  return __riscv_vqdotu_tumu(vm, vd, vs2, vs1, vl);
}

vuint32mf2_t test_vqdotu_vx_u32mf2_tumu(vbool64_t vm, vuint32mf2_t vd,
                                        vuint8mf2_t vs2, uint32_t rs1,
                                        size_t vl) {
  return __riscv_vqdotu_tumu(vm, vd, vs2, rs1, vl);
}

vuint32m1_t test_vqdotu_vv_u32m1_tumu(vbool32_t vm, vuint32m1_t vd,
                                      vuint8m1_t vs2, vuint8m1_t vs1,
                                      size_t vl) {
  return __riscv_vqdotu_tumu(vm, vd, vs2, vs1, vl);
}

vuint32m1_t test_vqdotu_vx_u32m1_tumu(vbool32_t vm, vuint32m1_t vd,
                                      vuint8m1_t vs2, uint32_t rs1, size_t vl) {
  return __riscv_vqdotu_tumu(vm, vd, vs2, rs1, vl);
}

vuint32m2_t test_vqdotu_vv_u32m2_tumu(vbool16_t vm, vuint32m2_t vd,
                                      vuint8m2_t vs2, vuint8m2_t vs1,
                                      size_t vl) {
  return __riscv_vqdotu_tumu(vm, vd, vs2, vs1, vl);
}

vuint32m2_t test_vqdotu_vx_u32m2_tumu(vbool16_t vm, vuint32m2_t vd,
                                      vuint8m2_t vs2, uint32_t rs1, size_t vl) {
  return __riscv_vqdotu_tumu(vm, vd, vs2, rs1, vl);
}

vuint32m4_t test_vqdotu_vv_u32m4_tumu(vbool8_t vm, vuint32m4_t vd,
                                      vuint8m4_t vs2, vuint8m4_t vs1,
                                      size_t vl) {
  return __riscv_vqdotu_tumu(vm, vd, vs2, vs1, vl);
}

vuint32m4_t test_vqdotu_vx_u32m4_tumu(vbool8_t vm, vuint32m4_t vd,
                                      vuint8m4_t vs2, uint32_t rs1, size_t vl) {
  return __riscv_vqdotu_tumu(vm, vd, vs2, rs1, vl);
}

vuint32m8_t test_vqdotu_vv_u32m8_tumu(vbool4_t vm, vuint32m8_t vd,
                                      vuint8m8_t vs2, vuint8m8_t vs1,
                                      size_t vl) {
  return __riscv_vqdotu_tumu(vm, vd, vs2, vs1, vl);
}

vuint32m8_t test_vqdotu_vx_u32m8_tumu(vbool4_t vm, vuint32m8_t vd,
                                      vuint8m8_t vs2, uint32_t rs1, size_t vl) {
  return __riscv_vqdotu_tumu(vm, vd, vs2, rs1, vl);
}

vuint32mf2_t test_vqdotu_vv_u32mf2_mu(vbool64_t vm, vuint32mf2_t vd,
                                      vuint8mf2_t vs2, vuint8mf2_t vs1,
                                      size_t vl) {
  return __riscv_vqdotu_mu(vm, vd, vs2, vs1, vl);
}

vuint32mf2_t test_vqdotu_vx_u32mf2_mu(vbool64_t vm, vuint32mf2_t vd,
                                      vuint8mf2_t vs2, uint32_t rs1,
                                      size_t vl) {
  return __riscv_vqdotu_mu(vm, vd, vs2, rs1, vl);
}

vuint32m1_t test_vqdotu_vv_u32m1_mu(vbool32_t vm, vuint32m1_t vd,
                                    vuint8m1_t vs2, vuint8m1_t vs1, size_t vl) {
  return __riscv_vqdotu_mu(vm, vd, vs2, vs1, vl);
}

vuint32m1_t test_vqdotu_vx_u32m1_mu(vbool32_t vm, vuint32m1_t vd,
                                    vuint8m1_t vs2, uint32_t rs1, size_t vl) {
  return __riscv_vqdotu_mu(vm, vd, vs2, rs1, vl);
}

vuint32m2_t test_vqdotu_vv_u32m2_mu(vbool16_t vm, vuint32m2_t vd,
                                    vuint8m2_t vs2, vuint8m2_t vs1, size_t vl) {
  return __riscv_vqdotu_mu(vm, vd, vs2, vs1, vl);
}

vuint32m2_t test_vqdotu_vx_u32m2_mu(vbool16_t vm, vuint32m2_t vd,
                                    vuint8m2_t vs2, uint32_t rs1, size_t vl) {
  return __riscv_vqdotu_mu(vm, vd, vs2, rs1, vl);
}

vuint32m4_t test_vqdotu_vv_u32m4_mu(vbool8_t vm, vuint32m4_t vd, vuint8m4_t vs2,
                                    vuint8m4_t vs1, size_t vl) {
  return __riscv_vqdotu_mu(vm, vd, vs2, vs1, vl);
}

vuint32m4_t test_vqdotu_vx_u32m4_mu(vbool8_t vm, vuint32m4_t vd, vuint8m4_t vs2,
                                    uint32_t rs1, size_t vl) {
  return __riscv_vqdotu_mu(vm, vd, vs2, rs1, vl);
}

vuint32m8_t test_vqdotu_vv_u32m8_mu(vbool4_t vm, vuint32m8_t vd, vuint8m8_t vs2,
                                    vuint8m8_t vs1, size_t vl) {
  return __riscv_vqdotu_mu(vm, vd, vs2, vs1, vl);
}

vuint32m8_t test_vqdotu_vx_u32m8_mu(vbool4_t vm, vuint32m8_t vd, vuint8m8_t vs2,
                                    uint32_t rs1, size_t vl) {
  return __riscv_vqdotu_mu(vm, vd, vs2, rs1, vl);
}
