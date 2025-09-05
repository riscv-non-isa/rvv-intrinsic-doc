// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -disable-O0-optnone \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

vint8mf8x8_t test_vlsseg8e8_v_i8mf8x8_tu(vint8mf8x8_t vd, const int8_t *rs1,
                                         ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg8e8_v_i8mf8x8_tu(vd, rs1, rs2, vl);
}

vint8mf4x8_t test_vlsseg8e8_v_i8mf4x8_tu(vint8mf4x8_t vd, const int8_t *rs1,
                                         ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg8e8_v_i8mf4x8_tu(vd, rs1, rs2, vl);
}

vint8mf2x8_t test_vlsseg8e8_v_i8mf2x8_tu(vint8mf2x8_t vd, const int8_t *rs1,
                                         ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg8e8_v_i8mf2x8_tu(vd, rs1, rs2, vl);
}

vint8m1x8_t test_vlsseg8e8_v_i8m1x8_tu(vint8m1x8_t vd, const int8_t *rs1,
                                       ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg8e8_v_i8m1x8_tu(vd, rs1, rs2, vl);
}

vuint8mf8x8_t test_vlsseg8e8_v_u8mf8x8_tu(vuint8mf8x8_t vd, const uint8_t *rs1,
                                          ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg8e8_v_u8mf8x8_tu(vd, rs1, rs2, vl);
}

vuint8mf4x8_t test_vlsseg8e8_v_u8mf4x8_tu(vuint8mf4x8_t vd, const uint8_t *rs1,
                                          ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg8e8_v_u8mf4x8_tu(vd, rs1, rs2, vl);
}

vuint8mf2x8_t test_vlsseg8e8_v_u8mf2x8_tu(vuint8mf2x8_t vd, const uint8_t *rs1,
                                          ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg8e8_v_u8mf2x8_tu(vd, rs1, rs2, vl);
}

vuint8m1x8_t test_vlsseg8e8_v_u8m1x8_tu(vuint8m1x8_t vd, const uint8_t *rs1,
                                        ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg8e8_v_u8m1x8_tu(vd, rs1, rs2, vl);
}

vint8mf8x8_t test_vlsseg8e8_v_i8mf8x8_tum(vbool64_t vm, vint8mf8x8_t vd,
                                          const int8_t *rs1, ptrdiff_t rs2,
                                          size_t vl) {
  return __riscv_vlsseg8e8_v_i8mf8x8_tum(vm, vd, rs1, rs2, vl);
}

vint8mf4x8_t test_vlsseg8e8_v_i8mf4x8_tum(vbool32_t vm, vint8mf4x8_t vd,
                                          const int8_t *rs1, ptrdiff_t rs2,
                                          size_t vl) {
  return __riscv_vlsseg8e8_v_i8mf4x8_tum(vm, vd, rs1, rs2, vl);
}

vint8mf2x8_t test_vlsseg8e8_v_i8mf2x8_tum(vbool16_t vm, vint8mf2x8_t vd,
                                          const int8_t *rs1, ptrdiff_t rs2,
                                          size_t vl) {
  return __riscv_vlsseg8e8_v_i8mf2x8_tum(vm, vd, rs1, rs2, vl);
}

vint8m1x8_t test_vlsseg8e8_v_i8m1x8_tum(vbool8_t vm, vint8m1x8_t vd,
                                        const int8_t *rs1, ptrdiff_t rs2,
                                        size_t vl) {
  return __riscv_vlsseg8e8_v_i8m1x8_tum(vm, vd, rs1, rs2, vl);
}

vuint8mf8x8_t test_vlsseg8e8_v_u8mf8x8_tum(vbool64_t vm, vuint8mf8x8_t vd,
                                           const uint8_t *rs1, ptrdiff_t rs2,
                                           size_t vl) {
  return __riscv_vlsseg8e8_v_u8mf8x8_tum(vm, vd, rs1, rs2, vl);
}

vuint8mf4x8_t test_vlsseg8e8_v_u8mf4x8_tum(vbool32_t vm, vuint8mf4x8_t vd,
                                           const uint8_t *rs1, ptrdiff_t rs2,
                                           size_t vl) {
  return __riscv_vlsseg8e8_v_u8mf4x8_tum(vm, vd, rs1, rs2, vl);
}

vuint8mf2x8_t test_vlsseg8e8_v_u8mf2x8_tum(vbool16_t vm, vuint8mf2x8_t vd,
                                           const uint8_t *rs1, ptrdiff_t rs2,
                                           size_t vl) {
  return __riscv_vlsseg8e8_v_u8mf2x8_tum(vm, vd, rs1, rs2, vl);
}

vuint8m1x8_t test_vlsseg8e8_v_u8m1x8_tum(vbool8_t vm, vuint8m1x8_t vd,
                                         const uint8_t *rs1, ptrdiff_t rs2,
                                         size_t vl) {
  return __riscv_vlsseg8e8_v_u8m1x8_tum(vm, vd, rs1, rs2, vl);
}

vint8mf8x8_t test_vlsseg8e8_v_i8mf8x8_tumu(vbool64_t vm, vint8mf8x8_t vd,
                                           const int8_t *rs1, ptrdiff_t rs2,
                                           size_t vl) {
  return __riscv_vlsseg8e8_v_i8mf8x8_tumu(vm, vd, rs1, rs2, vl);
}

vint8mf4x8_t test_vlsseg8e8_v_i8mf4x8_tumu(vbool32_t vm, vint8mf4x8_t vd,
                                           const int8_t *rs1, ptrdiff_t rs2,
                                           size_t vl) {
  return __riscv_vlsseg8e8_v_i8mf4x8_tumu(vm, vd, rs1, rs2, vl);
}

vint8mf2x8_t test_vlsseg8e8_v_i8mf2x8_tumu(vbool16_t vm, vint8mf2x8_t vd,
                                           const int8_t *rs1, ptrdiff_t rs2,
                                           size_t vl) {
  return __riscv_vlsseg8e8_v_i8mf2x8_tumu(vm, vd, rs1, rs2, vl);
}

vint8m1x8_t test_vlsseg8e8_v_i8m1x8_tumu(vbool8_t vm, vint8m1x8_t vd,
                                         const int8_t *rs1, ptrdiff_t rs2,
                                         size_t vl) {
  return __riscv_vlsseg8e8_v_i8m1x8_tumu(vm, vd, rs1, rs2, vl);
}

vuint8mf8x8_t test_vlsseg8e8_v_u8mf8x8_tumu(vbool64_t vm, vuint8mf8x8_t vd,
                                            const uint8_t *rs1, ptrdiff_t rs2,
                                            size_t vl) {
  return __riscv_vlsseg8e8_v_u8mf8x8_tumu(vm, vd, rs1, rs2, vl);
}

vuint8mf4x8_t test_vlsseg8e8_v_u8mf4x8_tumu(vbool32_t vm, vuint8mf4x8_t vd,
                                            const uint8_t *rs1, ptrdiff_t rs2,
                                            size_t vl) {
  return __riscv_vlsseg8e8_v_u8mf4x8_tumu(vm, vd, rs1, rs2, vl);
}

vuint8mf2x8_t test_vlsseg8e8_v_u8mf2x8_tumu(vbool16_t vm, vuint8mf2x8_t vd,
                                            const uint8_t *rs1, ptrdiff_t rs2,
                                            size_t vl) {
  return __riscv_vlsseg8e8_v_u8mf2x8_tumu(vm, vd, rs1, rs2, vl);
}

vuint8m1x8_t test_vlsseg8e8_v_u8m1x8_tumu(vbool8_t vm, vuint8m1x8_t vd,
                                          const uint8_t *rs1, ptrdiff_t rs2,
                                          size_t vl) {
  return __riscv_vlsseg8e8_v_u8m1x8_tumu(vm, vd, rs1, rs2, vl);
}

vint8mf8x8_t test_vlsseg8e8_v_i8mf8x8_mu(vbool64_t vm, vint8mf8x8_t vd,
                                         const int8_t *rs1, ptrdiff_t rs2,
                                         size_t vl) {
  return __riscv_vlsseg8e8_v_i8mf8x8_mu(vm, vd, rs1, rs2, vl);
}

vint8mf4x8_t test_vlsseg8e8_v_i8mf4x8_mu(vbool32_t vm, vint8mf4x8_t vd,
                                         const int8_t *rs1, ptrdiff_t rs2,
                                         size_t vl) {
  return __riscv_vlsseg8e8_v_i8mf4x8_mu(vm, vd, rs1, rs2, vl);
}

vint8mf2x8_t test_vlsseg8e8_v_i8mf2x8_mu(vbool16_t vm, vint8mf2x8_t vd,
                                         const int8_t *rs1, ptrdiff_t rs2,
                                         size_t vl) {
  return __riscv_vlsseg8e8_v_i8mf2x8_mu(vm, vd, rs1, rs2, vl);
}

vint8m1x8_t test_vlsseg8e8_v_i8m1x8_mu(vbool8_t vm, vint8m1x8_t vd,
                                       const int8_t *rs1, ptrdiff_t rs2,
                                       size_t vl) {
  return __riscv_vlsseg8e8_v_i8m1x8_mu(vm, vd, rs1, rs2, vl);
}

vuint8mf8x8_t test_vlsseg8e8_v_u8mf8x8_mu(vbool64_t vm, vuint8mf8x8_t vd,
                                          const uint8_t *rs1, ptrdiff_t rs2,
                                          size_t vl) {
  return __riscv_vlsseg8e8_v_u8mf8x8_mu(vm, vd, rs1, rs2, vl);
}

vuint8mf4x8_t test_vlsseg8e8_v_u8mf4x8_mu(vbool32_t vm, vuint8mf4x8_t vd,
                                          const uint8_t *rs1, ptrdiff_t rs2,
                                          size_t vl) {
  return __riscv_vlsseg8e8_v_u8mf4x8_mu(vm, vd, rs1, rs2, vl);
}

vuint8mf2x8_t test_vlsseg8e8_v_u8mf2x8_mu(vbool16_t vm, vuint8mf2x8_t vd,
                                          const uint8_t *rs1, ptrdiff_t rs2,
                                          size_t vl) {
  return __riscv_vlsseg8e8_v_u8mf2x8_mu(vm, vd, rs1, rs2, vl);
}

vuint8m1x8_t test_vlsseg8e8_v_u8m1x8_mu(vbool8_t vm, vuint8m1x8_t vd,
                                        const uint8_t *rs1, ptrdiff_t rs2,
                                        size_t vl) {
  return __riscv_vlsseg8e8_v_u8m1x8_mu(vm, vd, rs1, rs2, vl);
}
