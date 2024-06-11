// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -target-feature +zvl512b \
// RUN:   -target-feature +experimental-zvbb \
// RUN:   -target-feature +experimental-zvbc \
// RUN:   -target-feature +experimental-zvkg \
// RUN:   -target-feature +experimental-zvkned \
// RUN:   -target-feature +experimental-zvknhb \
// RUN:   -target-feature +experimental-zvksed \
// RUN:   -target-feature +experimental-zvksh -disable-O0-optnone \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

vuint16mf4_t test_vwsll_vv_u16mf4(vuint8mf8_t vs2, vuint8mf8_t vs1, size_t vl) {
  return __riscv_vwsll(vs2, vs1, vl);
}

vuint16mf4_t test_vwsll_vx_u16mf4(vuint8mf8_t vs2, size_t rs1, size_t vl) {
  return __riscv_vwsll(vs2, rs1, vl);
}

vuint16mf2_t test_vwsll_vv_u16mf2(vuint8mf4_t vs2, vuint8mf4_t vs1, size_t vl) {
  return __riscv_vwsll(vs2, vs1, vl);
}

vuint16mf2_t test_vwsll_vx_u16mf2(vuint8mf4_t vs2, size_t rs1, size_t vl) {
  return __riscv_vwsll(vs2, rs1, vl);
}

vuint16m1_t test_vwsll_vv_u16m1(vuint8mf2_t vs2, vuint8mf2_t vs1, size_t vl) {
  return __riscv_vwsll(vs2, vs1, vl);
}

vuint16m1_t test_vwsll_vx_u16m1(vuint8mf2_t vs2, size_t rs1, size_t vl) {
  return __riscv_vwsll(vs2, rs1, vl);
}

vuint16m2_t test_vwsll_vv_u16m2(vuint8m1_t vs2, vuint8m1_t vs1, size_t vl) {
  return __riscv_vwsll(vs2, vs1, vl);
}

vuint16m2_t test_vwsll_vx_u16m2(vuint8m1_t vs2, size_t rs1, size_t vl) {
  return __riscv_vwsll(vs2, rs1, vl);
}

vuint16m4_t test_vwsll_vv_u16m4(vuint8m2_t vs2, vuint8m2_t vs1, size_t vl) {
  return __riscv_vwsll(vs2, vs1, vl);
}

vuint16m4_t test_vwsll_vx_u16m4(vuint8m2_t vs2, size_t rs1, size_t vl) {
  return __riscv_vwsll(vs2, rs1, vl);
}

vuint16m8_t test_vwsll_vv_u16m8(vuint8m4_t vs2, vuint8m4_t vs1, size_t vl) {
  return __riscv_vwsll(vs2, vs1, vl);
}

vuint16m8_t test_vwsll_vx_u16m8(vuint8m4_t vs2, size_t rs1, size_t vl) {
  return __riscv_vwsll(vs2, rs1, vl);
}

vuint32mf2_t test_vwsll_vv_u32mf2(vuint16mf4_t vs2, vuint16mf4_t vs1, size_t vl) {
  return __riscv_vwsll(vs2, vs1, vl);
}

vuint32mf2_t test_vwsll_vx_u32mf2(vuint16mf4_t vs2, size_t rs1, size_t vl) {
  return __riscv_vwsll(vs2, rs1, vl);
}

vuint32m1_t test_vwsll_vv_u32m1(vuint16mf2_t vs2, vuint16mf2_t vs1, size_t vl) {
  return __riscv_vwsll(vs2, vs1, vl);
}

vuint32m1_t test_vwsll_vx_u32m1(vuint16mf2_t vs2, size_t rs1, size_t vl) {
  return __riscv_vwsll(vs2, rs1, vl);
}

vuint32m2_t test_vwsll_vv_u32m2(vuint16m1_t vs2, vuint16m1_t vs1, size_t vl) {
  return __riscv_vwsll(vs2, vs1, vl);
}

vuint32m2_t test_vwsll_vx_u32m2(vuint16m1_t vs2, size_t rs1, size_t vl) {
  return __riscv_vwsll(vs2, rs1, vl);
}

vuint32m4_t test_vwsll_vv_u32m4(vuint16m2_t vs2, vuint16m2_t vs1, size_t vl) {
  return __riscv_vwsll(vs2, vs1, vl);
}

vuint32m4_t test_vwsll_vx_u32m4(vuint16m2_t vs2, size_t rs1, size_t vl) {
  return __riscv_vwsll(vs2, rs1, vl);
}

vuint32m8_t test_vwsll_vv_u32m8(vuint16m4_t vs2, vuint16m4_t vs1, size_t vl) {
  return __riscv_vwsll(vs2, vs1, vl);
}

vuint32m8_t test_vwsll_vx_u32m8(vuint16m4_t vs2, size_t rs1, size_t vl) {
  return __riscv_vwsll(vs2, rs1, vl);
}

vuint64m1_t test_vwsll_vv_u64m1(vuint32mf2_t vs2, vuint32mf2_t vs1, size_t vl) {
  return __riscv_vwsll(vs2, vs1, vl);
}

vuint64m1_t test_vwsll_vx_u64m1(vuint32mf2_t vs2, size_t rs1, size_t vl) {
  return __riscv_vwsll(vs2, rs1, vl);
}

vuint64m2_t test_vwsll_vv_u64m2(vuint32m1_t vs2, vuint32m1_t vs1, size_t vl) {
  return __riscv_vwsll(vs2, vs1, vl);
}

vuint64m2_t test_vwsll_vx_u64m2(vuint32m1_t vs2, size_t rs1, size_t vl) {
  return __riscv_vwsll(vs2, rs1, vl);
}

vuint64m4_t test_vwsll_vv_u64m4(vuint32m2_t vs2, vuint32m2_t vs1, size_t vl) {
  return __riscv_vwsll(vs2, vs1, vl);
}

vuint64m4_t test_vwsll_vx_u64m4(vuint32m2_t vs2, size_t rs1, size_t vl) {
  return __riscv_vwsll(vs2, rs1, vl);
}

vuint64m8_t test_vwsll_vv_u64m8(vuint32m4_t vs2, vuint32m4_t vs1, size_t vl) {
  return __riscv_vwsll(vs2, vs1, vl);
}

vuint64m8_t test_vwsll_vx_u64m8(vuint32m4_t vs2, size_t rs1, size_t vl) {
  return __riscv_vwsll(vs2, rs1, vl);
}

vuint16mf4_t test_vwsll_vv_u16mf4_m(vbool64_t mask, vuint8mf8_t vs2, vuint8mf8_t vs1, size_t vl) {
  return __riscv_vwsll(mask, vs2, vs1, vl);
}

vuint16mf4_t test_vwsll_vx_u16mf4_m(vbool64_t mask, vuint8mf8_t vs2, size_t rs1, size_t vl) {
  return __riscv_vwsll(mask, vs2, rs1, vl);
}

vuint16mf2_t test_vwsll_vv_u16mf2_m(vbool32_t mask, vuint8mf4_t vs2, vuint8mf4_t vs1, size_t vl) {
  return __riscv_vwsll(mask, vs2, vs1, vl);
}

vuint16mf2_t test_vwsll_vx_u16mf2_m(vbool32_t mask, vuint8mf4_t vs2, size_t rs1, size_t vl) {
  return __riscv_vwsll(mask, vs2, rs1, vl);
}

vuint16m1_t test_vwsll_vv_u16m1_m(vbool16_t mask, vuint8mf2_t vs2, vuint8mf2_t vs1, size_t vl) {
  return __riscv_vwsll(mask, vs2, vs1, vl);
}

vuint16m1_t test_vwsll_vx_u16m1_m(vbool16_t mask, vuint8mf2_t vs2, size_t rs1, size_t vl) {
  return __riscv_vwsll(mask, vs2, rs1, vl);
}

vuint16m2_t test_vwsll_vv_u16m2_m(vbool8_t mask, vuint8m1_t vs2, vuint8m1_t vs1, size_t vl) {
  return __riscv_vwsll(mask, vs2, vs1, vl);
}

vuint16m2_t test_vwsll_vx_u16m2_m(vbool8_t mask, vuint8m1_t vs2, size_t rs1, size_t vl) {
  return __riscv_vwsll(mask, vs2, rs1, vl);
}

vuint16m4_t test_vwsll_vv_u16m4_m(vbool4_t mask, vuint8m2_t vs2, vuint8m2_t vs1, size_t vl) {
  return __riscv_vwsll(mask, vs2, vs1, vl);
}

vuint16m4_t test_vwsll_vx_u16m4_m(vbool4_t mask, vuint8m2_t vs2, size_t rs1, size_t vl) {
  return __riscv_vwsll(mask, vs2, rs1, vl);
}

vuint16m8_t test_vwsll_vv_u16m8_m(vbool2_t mask, vuint8m4_t vs2, vuint8m4_t vs1, size_t vl) {
  return __riscv_vwsll(mask, vs2, vs1, vl);
}

vuint16m8_t test_vwsll_vx_u16m8_m(vbool2_t mask, vuint8m4_t vs2, size_t rs1, size_t vl) {
  return __riscv_vwsll(mask, vs2, rs1, vl);
}

vuint32mf2_t test_vwsll_vv_u32mf2_m(vbool64_t mask, vuint16mf4_t vs2, vuint16mf4_t vs1, size_t vl) {
  return __riscv_vwsll(mask, vs2, vs1, vl);
}

vuint32mf2_t test_vwsll_vx_u32mf2_m(vbool64_t mask, vuint16mf4_t vs2, size_t rs1, size_t vl) {
  return __riscv_vwsll(mask, vs2, rs1, vl);
}

vuint32m1_t test_vwsll_vv_u32m1_m(vbool32_t mask, vuint16mf2_t vs2, vuint16mf2_t vs1, size_t vl) {
  return __riscv_vwsll(mask, vs2, vs1, vl);
}

vuint32m1_t test_vwsll_vx_u32m1_m(vbool32_t mask, vuint16mf2_t vs2, size_t rs1, size_t vl) {
  return __riscv_vwsll(mask, vs2, rs1, vl);
}

vuint32m2_t test_vwsll_vv_u32m2_m(vbool16_t mask, vuint16m1_t vs2, vuint16m1_t vs1, size_t vl) {
  return __riscv_vwsll(mask, vs2, vs1, vl);
}

vuint32m2_t test_vwsll_vx_u32m2_m(vbool16_t mask, vuint16m1_t vs2, size_t rs1, size_t vl) {
  return __riscv_vwsll(mask, vs2, rs1, vl);
}

vuint32m4_t test_vwsll_vv_u32m4_m(vbool8_t mask, vuint16m2_t vs2, vuint16m2_t vs1, size_t vl) {
  return __riscv_vwsll(mask, vs2, vs1, vl);
}

vuint32m4_t test_vwsll_vx_u32m4_m(vbool8_t mask, vuint16m2_t vs2, size_t rs1, size_t vl) {
  return __riscv_vwsll(mask, vs2, rs1, vl);
}

vuint32m8_t test_vwsll_vv_u32m8_m(vbool4_t mask, vuint16m4_t vs2, vuint16m4_t vs1, size_t vl) {
  return __riscv_vwsll(mask, vs2, vs1, vl);
}

vuint32m8_t test_vwsll_vx_u32m8_m(vbool4_t mask, vuint16m4_t vs2, size_t rs1, size_t vl) {
  return __riscv_vwsll(mask, vs2, rs1, vl);
}

vuint64m1_t test_vwsll_vv_u64m1_m(vbool64_t mask, vuint32mf2_t vs2, vuint32mf2_t vs1, size_t vl) {
  return __riscv_vwsll(mask, vs2, vs1, vl);
}

vuint64m1_t test_vwsll_vx_u64m1_m(vbool64_t mask, vuint32mf2_t vs2, size_t rs1, size_t vl) {
  return __riscv_vwsll(mask, vs2, rs1, vl);
}

vuint64m2_t test_vwsll_vv_u64m2_m(vbool32_t mask, vuint32m1_t vs2, vuint32m1_t vs1, size_t vl) {
  return __riscv_vwsll(mask, vs2, vs1, vl);
}

vuint64m2_t test_vwsll_vx_u64m2_m(vbool32_t mask, vuint32m1_t vs2, size_t rs1, size_t vl) {
  return __riscv_vwsll(mask, vs2, rs1, vl);
}

vuint64m4_t test_vwsll_vv_u64m4_m(vbool16_t mask, vuint32m2_t vs2, vuint32m2_t vs1, size_t vl) {
  return __riscv_vwsll(mask, vs2, vs1, vl);
}

vuint64m4_t test_vwsll_vx_u64m4_m(vbool16_t mask, vuint32m2_t vs2, size_t rs1, size_t vl) {
  return __riscv_vwsll(mask, vs2, rs1, vl);
}

vuint64m8_t test_vwsll_vv_u64m8_m(vbool8_t mask, vuint32m4_t vs2, vuint32m4_t vs1, size_t vl) {
  return __riscv_vwsll(mask, vs2, vs1, vl);
}

vuint64m8_t test_vwsll_vx_u64m8_m(vbool8_t mask, vuint32m4_t vs2, size_t rs1, size_t vl) {
  return __riscv_vwsll(mask, vs2, rs1, vl);
}

