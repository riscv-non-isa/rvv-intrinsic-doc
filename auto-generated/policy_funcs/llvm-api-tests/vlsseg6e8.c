// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -disable-O0-optnone \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

vint8mf8x6_t test_vlsseg6e8_v_i8mf8x6_tu(vint8mf8x6_t vd, const int8_t *rs1,
                                         ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg6e8_v_i8mf8x6_tu(vd, rs1, rs2, vl);
}

vint8mf4x6_t test_vlsseg6e8_v_i8mf4x6_tu(vint8mf4x6_t vd, const int8_t *rs1,
                                         ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg6e8_v_i8mf4x6_tu(vd, rs1, rs2, vl);
}

vint8mf2x6_t test_vlsseg6e8_v_i8mf2x6_tu(vint8mf2x6_t vd, const int8_t *rs1,
                                         ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg6e8_v_i8mf2x6_tu(vd, rs1, rs2, vl);
}

vint8m1x6_t test_vlsseg6e8_v_i8m1x6_tu(vint8m1x6_t vd, const int8_t *rs1,
                                       ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg6e8_v_i8m1x6_tu(vd, rs1, rs2, vl);
}

vuint8mf8x6_t test_vlsseg6e8_v_u8mf8x6_tu(vuint8mf8x6_t vd, const uint8_t *rs1,
                                          ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg6e8_v_u8mf8x6_tu(vd, rs1, rs2, vl);
}

vuint8mf4x6_t test_vlsseg6e8_v_u8mf4x6_tu(vuint8mf4x6_t vd, const uint8_t *rs1,
                                          ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg6e8_v_u8mf4x6_tu(vd, rs1, rs2, vl);
}

vuint8mf2x6_t test_vlsseg6e8_v_u8mf2x6_tu(vuint8mf2x6_t vd, const uint8_t *rs1,
                                          ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg6e8_v_u8mf2x6_tu(vd, rs1, rs2, vl);
}

vuint8m1x6_t test_vlsseg6e8_v_u8m1x6_tu(vuint8m1x6_t vd, const uint8_t *rs1,
                                        ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg6e8_v_u8m1x6_tu(vd, rs1, rs2, vl);
}

vint8mf8x6_t test_vlsseg6e8_v_i8mf8x6_tum(vbool64_t vm, vint8mf8x6_t vd,
                                          const int8_t *rs1, ptrdiff_t rs2,
                                          size_t vl) {
  return __riscv_vlsseg6e8_v_i8mf8x6_tum(vm, vd, rs1, rs2, vl);
}

vint8mf4x6_t test_vlsseg6e8_v_i8mf4x6_tum(vbool32_t vm, vint8mf4x6_t vd,
                                          const int8_t *rs1, ptrdiff_t rs2,
                                          size_t vl) {
  return __riscv_vlsseg6e8_v_i8mf4x6_tum(vm, vd, rs1, rs2, vl);
}

vint8mf2x6_t test_vlsseg6e8_v_i8mf2x6_tum(vbool16_t vm, vint8mf2x6_t vd,
                                          const int8_t *rs1, ptrdiff_t rs2,
                                          size_t vl) {
  return __riscv_vlsseg6e8_v_i8mf2x6_tum(vm, vd, rs1, rs2, vl);
}

vint8m1x6_t test_vlsseg6e8_v_i8m1x6_tum(vbool8_t vm, vint8m1x6_t vd,
                                        const int8_t *rs1, ptrdiff_t rs2,
                                        size_t vl) {
  return __riscv_vlsseg6e8_v_i8m1x6_tum(vm, vd, rs1, rs2, vl);
}

vuint8mf8x6_t test_vlsseg6e8_v_u8mf8x6_tum(vbool64_t vm, vuint8mf8x6_t vd,
                                           const uint8_t *rs1, ptrdiff_t rs2,
                                           size_t vl) {
  return __riscv_vlsseg6e8_v_u8mf8x6_tum(vm, vd, rs1, rs2, vl);
}

vuint8mf4x6_t test_vlsseg6e8_v_u8mf4x6_tum(vbool32_t vm, vuint8mf4x6_t vd,
                                           const uint8_t *rs1, ptrdiff_t rs2,
                                           size_t vl) {
  return __riscv_vlsseg6e8_v_u8mf4x6_tum(vm, vd, rs1, rs2, vl);
}

vuint8mf2x6_t test_vlsseg6e8_v_u8mf2x6_tum(vbool16_t vm, vuint8mf2x6_t vd,
                                           const uint8_t *rs1, ptrdiff_t rs2,
                                           size_t vl) {
  return __riscv_vlsseg6e8_v_u8mf2x6_tum(vm, vd, rs1, rs2, vl);
}

vuint8m1x6_t test_vlsseg6e8_v_u8m1x6_tum(vbool8_t vm, vuint8m1x6_t vd,
                                         const uint8_t *rs1, ptrdiff_t rs2,
                                         size_t vl) {
  return __riscv_vlsseg6e8_v_u8m1x6_tum(vm, vd, rs1, rs2, vl);
}

vint8mf8x6_t test_vlsseg6e8_v_i8mf8x6_tumu(vbool64_t vm, vint8mf8x6_t vd,
                                           const int8_t *rs1, ptrdiff_t rs2,
                                           size_t vl) {
  return __riscv_vlsseg6e8_v_i8mf8x6_tumu(vm, vd, rs1, rs2, vl);
}

vint8mf4x6_t test_vlsseg6e8_v_i8mf4x6_tumu(vbool32_t vm, vint8mf4x6_t vd,
                                           const int8_t *rs1, ptrdiff_t rs2,
                                           size_t vl) {
  return __riscv_vlsseg6e8_v_i8mf4x6_tumu(vm, vd, rs1, rs2, vl);
}

vint8mf2x6_t test_vlsseg6e8_v_i8mf2x6_tumu(vbool16_t vm, vint8mf2x6_t vd,
                                           const int8_t *rs1, ptrdiff_t rs2,
                                           size_t vl) {
  return __riscv_vlsseg6e8_v_i8mf2x6_tumu(vm, vd, rs1, rs2, vl);
}

vint8m1x6_t test_vlsseg6e8_v_i8m1x6_tumu(vbool8_t vm, vint8m1x6_t vd,
                                         const int8_t *rs1, ptrdiff_t rs2,
                                         size_t vl) {
  return __riscv_vlsseg6e8_v_i8m1x6_tumu(vm, vd, rs1, rs2, vl);
}

vuint8mf8x6_t test_vlsseg6e8_v_u8mf8x6_tumu(vbool64_t vm, vuint8mf8x6_t vd,
                                            const uint8_t *rs1, ptrdiff_t rs2,
                                            size_t vl) {
  return __riscv_vlsseg6e8_v_u8mf8x6_tumu(vm, vd, rs1, rs2, vl);
}

vuint8mf4x6_t test_vlsseg6e8_v_u8mf4x6_tumu(vbool32_t vm, vuint8mf4x6_t vd,
                                            const uint8_t *rs1, ptrdiff_t rs2,
                                            size_t vl) {
  return __riscv_vlsseg6e8_v_u8mf4x6_tumu(vm, vd, rs1, rs2, vl);
}

vuint8mf2x6_t test_vlsseg6e8_v_u8mf2x6_tumu(vbool16_t vm, vuint8mf2x6_t vd,
                                            const uint8_t *rs1, ptrdiff_t rs2,
                                            size_t vl) {
  return __riscv_vlsseg6e8_v_u8mf2x6_tumu(vm, vd, rs1, rs2, vl);
}

vuint8m1x6_t test_vlsseg6e8_v_u8m1x6_tumu(vbool8_t vm, vuint8m1x6_t vd,
                                          const uint8_t *rs1, ptrdiff_t rs2,
                                          size_t vl) {
  return __riscv_vlsseg6e8_v_u8m1x6_tumu(vm, vd, rs1, rs2, vl);
}

vint8mf8x6_t test_vlsseg6e8_v_i8mf8x6_mu(vbool64_t vm, vint8mf8x6_t vd,
                                         const int8_t *rs1, ptrdiff_t rs2,
                                         size_t vl) {
  return __riscv_vlsseg6e8_v_i8mf8x6_mu(vm, vd, rs1, rs2, vl);
}

vint8mf4x6_t test_vlsseg6e8_v_i8mf4x6_mu(vbool32_t vm, vint8mf4x6_t vd,
                                         const int8_t *rs1, ptrdiff_t rs2,
                                         size_t vl) {
  return __riscv_vlsseg6e8_v_i8mf4x6_mu(vm, vd, rs1, rs2, vl);
}

vint8mf2x6_t test_vlsseg6e8_v_i8mf2x6_mu(vbool16_t vm, vint8mf2x6_t vd,
                                         const int8_t *rs1, ptrdiff_t rs2,
                                         size_t vl) {
  return __riscv_vlsseg6e8_v_i8mf2x6_mu(vm, vd, rs1, rs2, vl);
}

vint8m1x6_t test_vlsseg6e8_v_i8m1x6_mu(vbool8_t vm, vint8m1x6_t vd,
                                       const int8_t *rs1, ptrdiff_t rs2,
                                       size_t vl) {
  return __riscv_vlsseg6e8_v_i8m1x6_mu(vm, vd, rs1, rs2, vl);
}

vuint8mf8x6_t test_vlsseg6e8_v_u8mf8x6_mu(vbool64_t vm, vuint8mf8x6_t vd,
                                          const uint8_t *rs1, ptrdiff_t rs2,
                                          size_t vl) {
  return __riscv_vlsseg6e8_v_u8mf8x6_mu(vm, vd, rs1, rs2, vl);
}

vuint8mf4x6_t test_vlsseg6e8_v_u8mf4x6_mu(vbool32_t vm, vuint8mf4x6_t vd,
                                          const uint8_t *rs1, ptrdiff_t rs2,
                                          size_t vl) {
  return __riscv_vlsseg6e8_v_u8mf4x6_mu(vm, vd, rs1, rs2, vl);
}

vuint8mf2x6_t test_vlsseg6e8_v_u8mf2x6_mu(vbool16_t vm, vuint8mf2x6_t vd,
                                          const uint8_t *rs1, ptrdiff_t rs2,
                                          size_t vl) {
  return __riscv_vlsseg6e8_v_u8mf2x6_mu(vm, vd, rs1, rs2, vl);
}

vuint8m1x6_t test_vlsseg6e8_v_u8m1x6_mu(vbool8_t vm, vuint8m1x6_t vd,
                                        const uint8_t *rs1, ptrdiff_t rs2,
                                        size_t vl) {
  return __riscv_vlsseg6e8_v_u8m1x6_mu(vm, vd, rs1, rs2, vl);
}
