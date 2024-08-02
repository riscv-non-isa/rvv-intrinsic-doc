// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -disable-O0-optnone \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

vint8mf8x5_t test_vlsseg5e8_v_i8mf8x5_tu(vint8mf8x5_t vd, const int8_t *rs1,
                                         ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg5e8_v_i8mf8x5_tu(vd, rs1, rs2, vl);
}

vint8mf4x5_t test_vlsseg5e8_v_i8mf4x5_tu(vint8mf4x5_t vd, const int8_t *rs1,
                                         ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg5e8_v_i8mf4x5_tu(vd, rs1, rs2, vl);
}

vint8mf2x5_t test_vlsseg5e8_v_i8mf2x5_tu(vint8mf2x5_t vd, const int8_t *rs1,
                                         ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg5e8_v_i8mf2x5_tu(vd, rs1, rs2, vl);
}

vint8m1x5_t test_vlsseg5e8_v_i8m1x5_tu(vint8m1x5_t vd, const int8_t *rs1,
                                       ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg5e8_v_i8m1x5_tu(vd, rs1, rs2, vl);
}

vuint8mf8x5_t test_vlsseg5e8_v_u8mf8x5_tu(vuint8mf8x5_t vd, const uint8_t *rs1,
                                          ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg5e8_v_u8mf8x5_tu(vd, rs1, rs2, vl);
}

vuint8mf4x5_t test_vlsseg5e8_v_u8mf4x5_tu(vuint8mf4x5_t vd, const uint8_t *rs1,
                                          ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg5e8_v_u8mf4x5_tu(vd, rs1, rs2, vl);
}

vuint8mf2x5_t test_vlsseg5e8_v_u8mf2x5_tu(vuint8mf2x5_t vd, const uint8_t *rs1,
                                          ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg5e8_v_u8mf2x5_tu(vd, rs1, rs2, vl);
}

vuint8m1x5_t test_vlsseg5e8_v_u8m1x5_tu(vuint8m1x5_t vd, const uint8_t *rs1,
                                        ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg5e8_v_u8m1x5_tu(vd, rs1, rs2, vl);
}

vint8mf8x5_t test_vlsseg5e8_v_i8mf8x5_tum(vbool64_t vm, vint8mf8x5_t vd,
                                          const int8_t *rs1, ptrdiff_t rs2,
                                          size_t vl) {
  return __riscv_vlsseg5e8_v_i8mf8x5_tum(vm, vd, rs1, rs2, vl);
}

vint8mf4x5_t test_vlsseg5e8_v_i8mf4x5_tum(vbool32_t vm, vint8mf4x5_t vd,
                                          const int8_t *rs1, ptrdiff_t rs2,
                                          size_t vl) {
  return __riscv_vlsseg5e8_v_i8mf4x5_tum(vm, vd, rs1, rs2, vl);
}

vint8mf2x5_t test_vlsseg5e8_v_i8mf2x5_tum(vbool16_t vm, vint8mf2x5_t vd,
                                          const int8_t *rs1, ptrdiff_t rs2,
                                          size_t vl) {
  return __riscv_vlsseg5e8_v_i8mf2x5_tum(vm, vd, rs1, rs2, vl);
}

vint8m1x5_t test_vlsseg5e8_v_i8m1x5_tum(vbool8_t vm, vint8m1x5_t vd,
                                        const int8_t *rs1, ptrdiff_t rs2,
                                        size_t vl) {
  return __riscv_vlsseg5e8_v_i8m1x5_tum(vm, vd, rs1, rs2, vl);
}

vuint8mf8x5_t test_vlsseg5e8_v_u8mf8x5_tum(vbool64_t vm, vuint8mf8x5_t vd,
                                           const uint8_t *rs1, ptrdiff_t rs2,
                                           size_t vl) {
  return __riscv_vlsseg5e8_v_u8mf8x5_tum(vm, vd, rs1, rs2, vl);
}

vuint8mf4x5_t test_vlsseg5e8_v_u8mf4x5_tum(vbool32_t vm, vuint8mf4x5_t vd,
                                           const uint8_t *rs1, ptrdiff_t rs2,
                                           size_t vl) {
  return __riscv_vlsseg5e8_v_u8mf4x5_tum(vm, vd, rs1, rs2, vl);
}

vuint8mf2x5_t test_vlsseg5e8_v_u8mf2x5_tum(vbool16_t vm, vuint8mf2x5_t vd,
                                           const uint8_t *rs1, ptrdiff_t rs2,
                                           size_t vl) {
  return __riscv_vlsseg5e8_v_u8mf2x5_tum(vm, vd, rs1, rs2, vl);
}

vuint8m1x5_t test_vlsseg5e8_v_u8m1x5_tum(vbool8_t vm, vuint8m1x5_t vd,
                                         const uint8_t *rs1, ptrdiff_t rs2,
                                         size_t vl) {
  return __riscv_vlsseg5e8_v_u8m1x5_tum(vm, vd, rs1, rs2, vl);
}

vint8mf8x5_t test_vlsseg5e8_v_i8mf8x5_tumu(vbool64_t vm, vint8mf8x5_t vd,
                                           const int8_t *rs1, ptrdiff_t rs2,
                                           size_t vl) {
  return __riscv_vlsseg5e8_v_i8mf8x5_tumu(vm, vd, rs1, rs2, vl);
}

vint8mf4x5_t test_vlsseg5e8_v_i8mf4x5_tumu(vbool32_t vm, vint8mf4x5_t vd,
                                           const int8_t *rs1, ptrdiff_t rs2,
                                           size_t vl) {
  return __riscv_vlsseg5e8_v_i8mf4x5_tumu(vm, vd, rs1, rs2, vl);
}

vint8mf2x5_t test_vlsseg5e8_v_i8mf2x5_tumu(vbool16_t vm, vint8mf2x5_t vd,
                                           const int8_t *rs1, ptrdiff_t rs2,
                                           size_t vl) {
  return __riscv_vlsseg5e8_v_i8mf2x5_tumu(vm, vd, rs1, rs2, vl);
}

vint8m1x5_t test_vlsseg5e8_v_i8m1x5_tumu(vbool8_t vm, vint8m1x5_t vd,
                                         const int8_t *rs1, ptrdiff_t rs2,
                                         size_t vl) {
  return __riscv_vlsseg5e8_v_i8m1x5_tumu(vm, vd, rs1, rs2, vl);
}

vuint8mf8x5_t test_vlsseg5e8_v_u8mf8x5_tumu(vbool64_t vm, vuint8mf8x5_t vd,
                                            const uint8_t *rs1, ptrdiff_t rs2,
                                            size_t vl) {
  return __riscv_vlsseg5e8_v_u8mf8x5_tumu(vm, vd, rs1, rs2, vl);
}

vuint8mf4x5_t test_vlsseg5e8_v_u8mf4x5_tumu(vbool32_t vm, vuint8mf4x5_t vd,
                                            const uint8_t *rs1, ptrdiff_t rs2,
                                            size_t vl) {
  return __riscv_vlsseg5e8_v_u8mf4x5_tumu(vm, vd, rs1, rs2, vl);
}

vuint8mf2x5_t test_vlsseg5e8_v_u8mf2x5_tumu(vbool16_t vm, vuint8mf2x5_t vd,
                                            const uint8_t *rs1, ptrdiff_t rs2,
                                            size_t vl) {
  return __riscv_vlsseg5e8_v_u8mf2x5_tumu(vm, vd, rs1, rs2, vl);
}

vuint8m1x5_t test_vlsseg5e8_v_u8m1x5_tumu(vbool8_t vm, vuint8m1x5_t vd,
                                          const uint8_t *rs1, ptrdiff_t rs2,
                                          size_t vl) {
  return __riscv_vlsseg5e8_v_u8m1x5_tumu(vm, vd, rs1, rs2, vl);
}

vint8mf8x5_t test_vlsseg5e8_v_i8mf8x5_mu(vbool64_t vm, vint8mf8x5_t vd,
                                         const int8_t *rs1, ptrdiff_t rs2,
                                         size_t vl) {
  return __riscv_vlsseg5e8_v_i8mf8x5_mu(vm, vd, rs1, rs2, vl);
}

vint8mf4x5_t test_vlsseg5e8_v_i8mf4x5_mu(vbool32_t vm, vint8mf4x5_t vd,
                                         const int8_t *rs1, ptrdiff_t rs2,
                                         size_t vl) {
  return __riscv_vlsseg5e8_v_i8mf4x5_mu(vm, vd, rs1, rs2, vl);
}

vint8mf2x5_t test_vlsseg5e8_v_i8mf2x5_mu(vbool16_t vm, vint8mf2x5_t vd,
                                         const int8_t *rs1, ptrdiff_t rs2,
                                         size_t vl) {
  return __riscv_vlsseg5e8_v_i8mf2x5_mu(vm, vd, rs1, rs2, vl);
}

vint8m1x5_t test_vlsseg5e8_v_i8m1x5_mu(vbool8_t vm, vint8m1x5_t vd,
                                       const int8_t *rs1, ptrdiff_t rs2,
                                       size_t vl) {
  return __riscv_vlsseg5e8_v_i8m1x5_mu(vm, vd, rs1, rs2, vl);
}

vuint8mf8x5_t test_vlsseg5e8_v_u8mf8x5_mu(vbool64_t vm, vuint8mf8x5_t vd,
                                          const uint8_t *rs1, ptrdiff_t rs2,
                                          size_t vl) {
  return __riscv_vlsseg5e8_v_u8mf8x5_mu(vm, vd, rs1, rs2, vl);
}

vuint8mf4x5_t test_vlsseg5e8_v_u8mf4x5_mu(vbool32_t vm, vuint8mf4x5_t vd,
                                          const uint8_t *rs1, ptrdiff_t rs2,
                                          size_t vl) {
  return __riscv_vlsseg5e8_v_u8mf4x5_mu(vm, vd, rs1, rs2, vl);
}

vuint8mf2x5_t test_vlsseg5e8_v_u8mf2x5_mu(vbool16_t vm, vuint8mf2x5_t vd,
                                          const uint8_t *rs1, ptrdiff_t rs2,
                                          size_t vl) {
  return __riscv_vlsseg5e8_v_u8mf2x5_mu(vm, vd, rs1, rs2, vl);
}

vuint8m1x5_t test_vlsseg5e8_v_u8m1x5_mu(vbool8_t vm, vuint8m1x5_t vd,
                                        const uint8_t *rs1, ptrdiff_t rs2,
                                        size_t vl) {
  return __riscv_vlsseg5e8_v_u8m1x5_mu(vm, vd, rs1, rs2, vl);
}
