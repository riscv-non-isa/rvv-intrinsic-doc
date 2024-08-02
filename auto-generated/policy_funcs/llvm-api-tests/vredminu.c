// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -disable-O0-optnone \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

vuint8m1_t test_vredminu_vs_u8mf8_u8m1_tu(vuint8m1_t vd, vuint8mf8_t vs2,
                                          vuint8m1_t vs1, size_t vl) {
  return __riscv_vredminu_vs_u8mf8_u8m1_tu(vd, vs2, vs1, vl);
}

vuint8m1_t test_vredminu_vs_u8mf4_u8m1_tu(vuint8m1_t vd, vuint8mf4_t vs2,
                                          vuint8m1_t vs1, size_t vl) {
  return __riscv_vredminu_vs_u8mf4_u8m1_tu(vd, vs2, vs1, vl);
}

vuint8m1_t test_vredminu_vs_u8mf2_u8m1_tu(vuint8m1_t vd, vuint8mf2_t vs2,
                                          vuint8m1_t vs1, size_t vl) {
  return __riscv_vredminu_vs_u8mf2_u8m1_tu(vd, vs2, vs1, vl);
}

vuint8m1_t test_vredminu_vs_u8m1_u8m1_tu(vuint8m1_t vd, vuint8m1_t vs2,
                                         vuint8m1_t vs1, size_t vl) {
  return __riscv_vredminu_vs_u8m1_u8m1_tu(vd, vs2, vs1, vl);
}

vuint8m1_t test_vredminu_vs_u8m2_u8m1_tu(vuint8m1_t vd, vuint8m2_t vs2,
                                         vuint8m1_t vs1, size_t vl) {
  return __riscv_vredminu_vs_u8m2_u8m1_tu(vd, vs2, vs1, vl);
}

vuint8m1_t test_vredminu_vs_u8m4_u8m1_tu(vuint8m1_t vd, vuint8m4_t vs2,
                                         vuint8m1_t vs1, size_t vl) {
  return __riscv_vredminu_vs_u8m4_u8m1_tu(vd, vs2, vs1, vl);
}

vuint8m1_t test_vredminu_vs_u8m8_u8m1_tu(vuint8m1_t vd, vuint8m8_t vs2,
                                         vuint8m1_t vs1, size_t vl) {
  return __riscv_vredminu_vs_u8m8_u8m1_tu(vd, vs2, vs1, vl);
}

vuint16m1_t test_vredminu_vs_u16mf4_u16m1_tu(vuint16m1_t vd, vuint16mf4_t vs2,
                                             vuint16m1_t vs1, size_t vl) {
  return __riscv_vredminu_vs_u16mf4_u16m1_tu(vd, vs2, vs1, vl);
}

vuint16m1_t test_vredminu_vs_u16mf2_u16m1_tu(vuint16m1_t vd, vuint16mf2_t vs2,
                                             vuint16m1_t vs1, size_t vl) {
  return __riscv_vredminu_vs_u16mf2_u16m1_tu(vd, vs2, vs1, vl);
}

vuint16m1_t test_vredminu_vs_u16m1_u16m1_tu(vuint16m1_t vd, vuint16m1_t vs2,
                                            vuint16m1_t vs1, size_t vl) {
  return __riscv_vredminu_vs_u16m1_u16m1_tu(vd, vs2, vs1, vl);
}

vuint16m1_t test_vredminu_vs_u16m2_u16m1_tu(vuint16m1_t vd, vuint16m2_t vs2,
                                            vuint16m1_t vs1, size_t vl) {
  return __riscv_vredminu_vs_u16m2_u16m1_tu(vd, vs2, vs1, vl);
}

vuint16m1_t test_vredminu_vs_u16m4_u16m1_tu(vuint16m1_t vd, vuint16m4_t vs2,
                                            vuint16m1_t vs1, size_t vl) {
  return __riscv_vredminu_vs_u16m4_u16m1_tu(vd, vs2, vs1, vl);
}

vuint16m1_t test_vredminu_vs_u16m8_u16m1_tu(vuint16m1_t vd, vuint16m8_t vs2,
                                            vuint16m1_t vs1, size_t vl) {
  return __riscv_vredminu_vs_u16m8_u16m1_tu(vd, vs2, vs1, vl);
}

vuint32m1_t test_vredminu_vs_u32mf2_u32m1_tu(vuint32m1_t vd, vuint32mf2_t vs2,
                                             vuint32m1_t vs1, size_t vl) {
  return __riscv_vredminu_vs_u32mf2_u32m1_tu(vd, vs2, vs1, vl);
}

vuint32m1_t test_vredminu_vs_u32m1_u32m1_tu(vuint32m1_t vd, vuint32m1_t vs2,
                                            vuint32m1_t vs1, size_t vl) {
  return __riscv_vredminu_vs_u32m1_u32m1_tu(vd, vs2, vs1, vl);
}

vuint32m1_t test_vredminu_vs_u32m2_u32m1_tu(vuint32m1_t vd, vuint32m2_t vs2,
                                            vuint32m1_t vs1, size_t vl) {
  return __riscv_vredminu_vs_u32m2_u32m1_tu(vd, vs2, vs1, vl);
}

vuint32m1_t test_vredminu_vs_u32m4_u32m1_tu(vuint32m1_t vd, vuint32m4_t vs2,
                                            vuint32m1_t vs1, size_t vl) {
  return __riscv_vredminu_vs_u32m4_u32m1_tu(vd, vs2, vs1, vl);
}

vuint32m1_t test_vredminu_vs_u32m8_u32m1_tu(vuint32m1_t vd, vuint32m8_t vs2,
                                            vuint32m1_t vs1, size_t vl) {
  return __riscv_vredminu_vs_u32m8_u32m1_tu(vd, vs2, vs1, vl);
}

vuint64m1_t test_vredminu_vs_u64m1_u64m1_tu(vuint64m1_t vd, vuint64m1_t vs2,
                                            vuint64m1_t vs1, size_t vl) {
  return __riscv_vredminu_vs_u64m1_u64m1_tu(vd, vs2, vs1, vl);
}

vuint64m1_t test_vredminu_vs_u64m2_u64m1_tu(vuint64m1_t vd, vuint64m2_t vs2,
                                            vuint64m1_t vs1, size_t vl) {
  return __riscv_vredminu_vs_u64m2_u64m1_tu(vd, vs2, vs1, vl);
}

vuint64m1_t test_vredminu_vs_u64m4_u64m1_tu(vuint64m1_t vd, vuint64m4_t vs2,
                                            vuint64m1_t vs1, size_t vl) {
  return __riscv_vredminu_vs_u64m4_u64m1_tu(vd, vs2, vs1, vl);
}

vuint64m1_t test_vredminu_vs_u64m8_u64m1_tu(vuint64m1_t vd, vuint64m8_t vs2,
                                            vuint64m1_t vs1, size_t vl) {
  return __riscv_vredminu_vs_u64m8_u64m1_tu(vd, vs2, vs1, vl);
}

vuint8m1_t test_vredminu_vs_u8mf8_u8m1_tum(vbool64_t vm, vuint8m1_t vd,
                                           vuint8mf8_t vs2, vuint8m1_t vs1,
                                           size_t vl) {
  return __riscv_vredminu_vs_u8mf8_u8m1_tum(vm, vd, vs2, vs1, vl);
}

vuint8m1_t test_vredminu_vs_u8mf4_u8m1_tum(vbool32_t vm, vuint8m1_t vd,
                                           vuint8mf4_t vs2, vuint8m1_t vs1,
                                           size_t vl) {
  return __riscv_vredminu_vs_u8mf4_u8m1_tum(vm, vd, vs2, vs1, vl);
}

vuint8m1_t test_vredminu_vs_u8mf2_u8m1_tum(vbool16_t vm, vuint8m1_t vd,
                                           vuint8mf2_t vs2, vuint8m1_t vs1,
                                           size_t vl) {
  return __riscv_vredminu_vs_u8mf2_u8m1_tum(vm, vd, vs2, vs1, vl);
}

vuint8m1_t test_vredminu_vs_u8m1_u8m1_tum(vbool8_t vm, vuint8m1_t vd,
                                          vuint8m1_t vs2, vuint8m1_t vs1,
                                          size_t vl) {
  return __riscv_vredminu_vs_u8m1_u8m1_tum(vm, vd, vs2, vs1, vl);
}

vuint8m1_t test_vredminu_vs_u8m2_u8m1_tum(vbool4_t vm, vuint8m1_t vd,
                                          vuint8m2_t vs2, vuint8m1_t vs1,
                                          size_t vl) {
  return __riscv_vredminu_vs_u8m2_u8m1_tum(vm, vd, vs2, vs1, vl);
}

vuint8m1_t test_vredminu_vs_u8m4_u8m1_tum(vbool2_t vm, vuint8m1_t vd,
                                          vuint8m4_t vs2, vuint8m1_t vs1,
                                          size_t vl) {
  return __riscv_vredminu_vs_u8m4_u8m1_tum(vm, vd, vs2, vs1, vl);
}

vuint8m1_t test_vredminu_vs_u8m8_u8m1_tum(vbool1_t vm, vuint8m1_t vd,
                                          vuint8m8_t vs2, vuint8m1_t vs1,
                                          size_t vl) {
  return __riscv_vredminu_vs_u8m8_u8m1_tum(vm, vd, vs2, vs1, vl);
}

vuint16m1_t test_vredminu_vs_u16mf4_u16m1_tum(vbool64_t vm, vuint16m1_t vd,
                                              vuint16mf4_t vs2, vuint16m1_t vs1,
                                              size_t vl) {
  return __riscv_vredminu_vs_u16mf4_u16m1_tum(vm, vd, vs2, vs1, vl);
}

vuint16m1_t test_vredminu_vs_u16mf2_u16m1_tum(vbool32_t vm, vuint16m1_t vd,
                                              vuint16mf2_t vs2, vuint16m1_t vs1,
                                              size_t vl) {
  return __riscv_vredminu_vs_u16mf2_u16m1_tum(vm, vd, vs2, vs1, vl);
}

vuint16m1_t test_vredminu_vs_u16m1_u16m1_tum(vbool16_t vm, vuint16m1_t vd,
                                             vuint16m1_t vs2, vuint16m1_t vs1,
                                             size_t vl) {
  return __riscv_vredminu_vs_u16m1_u16m1_tum(vm, vd, vs2, vs1, vl);
}

vuint16m1_t test_vredminu_vs_u16m2_u16m1_tum(vbool8_t vm, vuint16m1_t vd,
                                             vuint16m2_t vs2, vuint16m1_t vs1,
                                             size_t vl) {
  return __riscv_vredminu_vs_u16m2_u16m1_tum(vm, vd, vs2, vs1, vl);
}

vuint16m1_t test_vredminu_vs_u16m4_u16m1_tum(vbool4_t vm, vuint16m1_t vd,
                                             vuint16m4_t vs2, vuint16m1_t vs1,
                                             size_t vl) {
  return __riscv_vredminu_vs_u16m4_u16m1_tum(vm, vd, vs2, vs1, vl);
}

vuint16m1_t test_vredminu_vs_u16m8_u16m1_tum(vbool2_t vm, vuint16m1_t vd,
                                             vuint16m8_t vs2, vuint16m1_t vs1,
                                             size_t vl) {
  return __riscv_vredminu_vs_u16m8_u16m1_tum(vm, vd, vs2, vs1, vl);
}

vuint32m1_t test_vredminu_vs_u32mf2_u32m1_tum(vbool64_t vm, vuint32m1_t vd,
                                              vuint32mf2_t vs2, vuint32m1_t vs1,
                                              size_t vl) {
  return __riscv_vredminu_vs_u32mf2_u32m1_tum(vm, vd, vs2, vs1, vl);
}

vuint32m1_t test_vredminu_vs_u32m1_u32m1_tum(vbool32_t vm, vuint32m1_t vd,
                                             vuint32m1_t vs2, vuint32m1_t vs1,
                                             size_t vl) {
  return __riscv_vredminu_vs_u32m1_u32m1_tum(vm, vd, vs2, vs1, vl);
}

vuint32m1_t test_vredminu_vs_u32m2_u32m1_tum(vbool16_t vm, vuint32m1_t vd,
                                             vuint32m2_t vs2, vuint32m1_t vs1,
                                             size_t vl) {
  return __riscv_vredminu_vs_u32m2_u32m1_tum(vm, vd, vs2, vs1, vl);
}

vuint32m1_t test_vredminu_vs_u32m4_u32m1_tum(vbool8_t vm, vuint32m1_t vd,
                                             vuint32m4_t vs2, vuint32m1_t vs1,
                                             size_t vl) {
  return __riscv_vredminu_vs_u32m4_u32m1_tum(vm, vd, vs2, vs1, vl);
}

vuint32m1_t test_vredminu_vs_u32m8_u32m1_tum(vbool4_t vm, vuint32m1_t vd,
                                             vuint32m8_t vs2, vuint32m1_t vs1,
                                             size_t vl) {
  return __riscv_vredminu_vs_u32m8_u32m1_tum(vm, vd, vs2, vs1, vl);
}

vuint64m1_t test_vredminu_vs_u64m1_u64m1_tum(vbool64_t vm, vuint64m1_t vd,
                                             vuint64m1_t vs2, vuint64m1_t vs1,
                                             size_t vl) {
  return __riscv_vredminu_vs_u64m1_u64m1_tum(vm, vd, vs2, vs1, vl);
}

vuint64m1_t test_vredminu_vs_u64m2_u64m1_tum(vbool32_t vm, vuint64m1_t vd,
                                             vuint64m2_t vs2, vuint64m1_t vs1,
                                             size_t vl) {
  return __riscv_vredminu_vs_u64m2_u64m1_tum(vm, vd, vs2, vs1, vl);
}

vuint64m1_t test_vredminu_vs_u64m4_u64m1_tum(vbool16_t vm, vuint64m1_t vd,
                                             vuint64m4_t vs2, vuint64m1_t vs1,
                                             size_t vl) {
  return __riscv_vredminu_vs_u64m4_u64m1_tum(vm, vd, vs2, vs1, vl);
}

vuint64m1_t test_vredminu_vs_u64m8_u64m1_tum(vbool8_t vm, vuint64m1_t vd,
                                             vuint64m8_t vs2, vuint64m1_t vs1,
                                             size_t vl) {
  return __riscv_vredminu_vs_u64m8_u64m1_tum(vm, vd, vs2, vs1, vl);
}
