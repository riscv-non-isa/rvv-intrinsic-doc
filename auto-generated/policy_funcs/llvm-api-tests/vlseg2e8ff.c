// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -target-feature +zfh \
// RUN:   -target-feature +experimental-zvfh -disable-O0-optnone \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

vint8mf8x2_t test_vlseg2e8ff_v_i8mf8x2_tu(vint8mf8x2_t vd, const int8_t *rs1,
                                          size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e8ff_v_i8mf8x2_tu(vd, rs1, new_vl, vl);
}

vint8mf4x2_t test_vlseg2e8ff_v_i8mf4x2_tu(vint8mf4x2_t vd, const int8_t *rs1,
                                          size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e8ff_v_i8mf4x2_tu(vd, rs1, new_vl, vl);
}

vint8mf2x2_t test_vlseg2e8ff_v_i8mf2x2_tu(vint8mf2x2_t vd, const int8_t *rs1,
                                          size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e8ff_v_i8mf2x2_tu(vd, rs1, new_vl, vl);
}

vint8m1x2_t test_vlseg2e8ff_v_i8m1x2_tu(vint8m1x2_t vd, const int8_t *rs1,
                                        size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e8ff_v_i8m1x2_tu(vd, rs1, new_vl, vl);
}

vint8m2x2_t test_vlseg2e8ff_v_i8m2x2_tu(vint8m2x2_t vd, const int8_t *rs1,
                                        size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e8ff_v_i8m2x2_tu(vd, rs1, new_vl, vl);
}

vint8m4x2_t test_vlseg2e8ff_v_i8m4x2_tu(vint8m4x2_t vd, const int8_t *rs1,
                                        size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e8ff_v_i8m4x2_tu(vd, rs1, new_vl, vl);
}

vuint8mf8x2_t test_vlseg2e8ff_v_u8mf8x2_tu(vuint8mf8x2_t vd, const uint8_t *rs1,
                                           size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e8ff_v_u8mf8x2_tu(vd, rs1, new_vl, vl);
}

vuint8mf4x2_t test_vlseg2e8ff_v_u8mf4x2_tu(vuint8mf4x2_t vd, const uint8_t *rs1,
                                           size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e8ff_v_u8mf4x2_tu(vd, rs1, new_vl, vl);
}

vuint8mf2x2_t test_vlseg2e8ff_v_u8mf2x2_tu(vuint8mf2x2_t vd, const uint8_t *rs1,
                                           size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e8ff_v_u8mf2x2_tu(vd, rs1, new_vl, vl);
}

vuint8m1x2_t test_vlseg2e8ff_v_u8m1x2_tu(vuint8m1x2_t vd, const uint8_t *rs1,
                                         size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e8ff_v_u8m1x2_tu(vd, rs1, new_vl, vl);
}

vuint8m2x2_t test_vlseg2e8ff_v_u8m2x2_tu(vuint8m2x2_t vd, const uint8_t *rs1,
                                         size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e8ff_v_u8m2x2_tu(vd, rs1, new_vl, vl);
}

vuint8m4x2_t test_vlseg2e8ff_v_u8m4x2_tu(vuint8m4x2_t vd, const uint8_t *rs1,
                                         size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e8ff_v_u8m4x2_tu(vd, rs1, new_vl, vl);
}

vint8mf8x2_t test_vlseg2e8ff_v_i8mf8x2_tum(vbool64_t vm, vint8mf8x2_t vd,
                                           const int8_t *rs1, size_t *new_vl,
                                           size_t vl) {
  return __riscv_vlseg2e8ff_v_i8mf8x2_tum(vm, vd, rs1, new_vl, vl);
}

vint8mf4x2_t test_vlseg2e8ff_v_i8mf4x2_tum(vbool32_t vm, vint8mf4x2_t vd,
                                           const int8_t *rs1, size_t *new_vl,
                                           size_t vl) {
  return __riscv_vlseg2e8ff_v_i8mf4x2_tum(vm, vd, rs1, new_vl, vl);
}

vint8mf2x2_t test_vlseg2e8ff_v_i8mf2x2_tum(vbool16_t vm, vint8mf2x2_t vd,
                                           const int8_t *rs1, size_t *new_vl,
                                           size_t vl) {
  return __riscv_vlseg2e8ff_v_i8mf2x2_tum(vm, vd, rs1, new_vl, vl);
}

vint8m1x2_t test_vlseg2e8ff_v_i8m1x2_tum(vbool8_t vm, vint8m1x2_t vd,
                                         const int8_t *rs1, size_t *new_vl,
                                         size_t vl) {
  return __riscv_vlseg2e8ff_v_i8m1x2_tum(vm, vd, rs1, new_vl, vl);
}

vint8m2x2_t test_vlseg2e8ff_v_i8m2x2_tum(vbool4_t vm, vint8m2x2_t vd,
                                         const int8_t *rs1, size_t *new_vl,
                                         size_t vl) {
  return __riscv_vlseg2e8ff_v_i8m2x2_tum(vm, vd, rs1, new_vl, vl);
}

vint8m4x2_t test_vlseg2e8ff_v_i8m4x2_tum(vbool2_t vm, vint8m4x2_t vd,
                                         const int8_t *rs1, size_t *new_vl,
                                         size_t vl) {
  return __riscv_vlseg2e8ff_v_i8m4x2_tum(vm, vd, rs1, new_vl, vl);
}

vuint8mf8x2_t test_vlseg2e8ff_v_u8mf8x2_tum(vbool64_t vm, vuint8mf8x2_t vd,
                                            const uint8_t *rs1, size_t *new_vl,
                                            size_t vl) {
  return __riscv_vlseg2e8ff_v_u8mf8x2_tum(vm, vd, rs1, new_vl, vl);
}

vuint8mf4x2_t test_vlseg2e8ff_v_u8mf4x2_tum(vbool32_t vm, vuint8mf4x2_t vd,
                                            const uint8_t *rs1, size_t *new_vl,
                                            size_t vl) {
  return __riscv_vlseg2e8ff_v_u8mf4x2_tum(vm, vd, rs1, new_vl, vl);
}

vuint8mf2x2_t test_vlseg2e8ff_v_u8mf2x2_tum(vbool16_t vm, vuint8mf2x2_t vd,
                                            const uint8_t *rs1, size_t *new_vl,
                                            size_t vl) {
  return __riscv_vlseg2e8ff_v_u8mf2x2_tum(vm, vd, rs1, new_vl, vl);
}

vuint8m1x2_t test_vlseg2e8ff_v_u8m1x2_tum(vbool8_t vm, vuint8m1x2_t vd,
                                          const uint8_t *rs1, size_t *new_vl,
                                          size_t vl) {
  return __riscv_vlseg2e8ff_v_u8m1x2_tum(vm, vd, rs1, new_vl, vl);
}

vuint8m2x2_t test_vlseg2e8ff_v_u8m2x2_tum(vbool4_t vm, vuint8m2x2_t vd,
                                          const uint8_t *rs1, size_t *new_vl,
                                          size_t vl) {
  return __riscv_vlseg2e8ff_v_u8m2x2_tum(vm, vd, rs1, new_vl, vl);
}

vuint8m4x2_t test_vlseg2e8ff_v_u8m4x2_tum(vbool2_t vm, vuint8m4x2_t vd,
                                          const uint8_t *rs1, size_t *new_vl,
                                          size_t vl) {
  return __riscv_vlseg2e8ff_v_u8m4x2_tum(vm, vd, rs1, new_vl, vl);
}

vint8mf8x2_t test_vlseg2e8ff_v_i8mf8x2_tumu(vbool64_t vm, vint8mf8x2_t vd,
                                            const int8_t *rs1, size_t *new_vl,
                                            size_t vl) {
  return __riscv_vlseg2e8ff_v_i8mf8x2_tumu(vm, vd, rs1, new_vl, vl);
}

vint8mf4x2_t test_vlseg2e8ff_v_i8mf4x2_tumu(vbool32_t vm, vint8mf4x2_t vd,
                                            const int8_t *rs1, size_t *new_vl,
                                            size_t vl) {
  return __riscv_vlseg2e8ff_v_i8mf4x2_tumu(vm, vd, rs1, new_vl, vl);
}

vint8mf2x2_t test_vlseg2e8ff_v_i8mf2x2_tumu(vbool16_t vm, vint8mf2x2_t vd,
                                            const int8_t *rs1, size_t *new_vl,
                                            size_t vl) {
  return __riscv_vlseg2e8ff_v_i8mf2x2_tumu(vm, vd, rs1, new_vl, vl);
}

vint8m1x2_t test_vlseg2e8ff_v_i8m1x2_tumu(vbool8_t vm, vint8m1x2_t vd,
                                          const int8_t *rs1, size_t *new_vl,
                                          size_t vl) {
  return __riscv_vlseg2e8ff_v_i8m1x2_tumu(vm, vd, rs1, new_vl, vl);
}

vint8m2x2_t test_vlseg2e8ff_v_i8m2x2_tumu(vbool4_t vm, vint8m2x2_t vd,
                                          const int8_t *rs1, size_t *new_vl,
                                          size_t vl) {
  return __riscv_vlseg2e8ff_v_i8m2x2_tumu(vm, vd, rs1, new_vl, vl);
}

vint8m4x2_t test_vlseg2e8ff_v_i8m4x2_tumu(vbool2_t vm, vint8m4x2_t vd,
                                          const int8_t *rs1, size_t *new_vl,
                                          size_t vl) {
  return __riscv_vlseg2e8ff_v_i8m4x2_tumu(vm, vd, rs1, new_vl, vl);
}

vuint8mf8x2_t test_vlseg2e8ff_v_u8mf8x2_tumu(vbool64_t vm, vuint8mf8x2_t vd,
                                             const uint8_t *rs1, size_t *new_vl,
                                             size_t vl) {
  return __riscv_vlseg2e8ff_v_u8mf8x2_tumu(vm, vd, rs1, new_vl, vl);
}

vuint8mf4x2_t test_vlseg2e8ff_v_u8mf4x2_tumu(vbool32_t vm, vuint8mf4x2_t vd,
                                             const uint8_t *rs1, size_t *new_vl,
                                             size_t vl) {
  return __riscv_vlseg2e8ff_v_u8mf4x2_tumu(vm, vd, rs1, new_vl, vl);
}

vuint8mf2x2_t test_vlseg2e8ff_v_u8mf2x2_tumu(vbool16_t vm, vuint8mf2x2_t vd,
                                             const uint8_t *rs1, size_t *new_vl,
                                             size_t vl) {
  return __riscv_vlseg2e8ff_v_u8mf2x2_tumu(vm, vd, rs1, new_vl, vl);
}

vuint8m1x2_t test_vlseg2e8ff_v_u8m1x2_tumu(vbool8_t vm, vuint8m1x2_t vd,
                                           const uint8_t *rs1, size_t *new_vl,
                                           size_t vl) {
  return __riscv_vlseg2e8ff_v_u8m1x2_tumu(vm, vd, rs1, new_vl, vl);
}

vuint8m2x2_t test_vlseg2e8ff_v_u8m2x2_tumu(vbool4_t vm, vuint8m2x2_t vd,
                                           const uint8_t *rs1, size_t *new_vl,
                                           size_t vl) {
  return __riscv_vlseg2e8ff_v_u8m2x2_tumu(vm, vd, rs1, new_vl, vl);
}

vuint8m4x2_t test_vlseg2e8ff_v_u8m4x2_tumu(vbool2_t vm, vuint8m4x2_t vd,
                                           const uint8_t *rs1, size_t *new_vl,
                                           size_t vl) {
  return __riscv_vlseg2e8ff_v_u8m4x2_tumu(vm, vd, rs1, new_vl, vl);
}

vint8mf8x2_t test_vlseg2e8ff_v_i8mf8x2_mu(vbool64_t vm, vint8mf8x2_t vd,
                                          const int8_t *rs1, size_t *new_vl,
                                          size_t vl) {
  return __riscv_vlseg2e8ff_v_i8mf8x2_mu(vm, vd, rs1, new_vl, vl);
}

vint8mf4x2_t test_vlseg2e8ff_v_i8mf4x2_mu(vbool32_t vm, vint8mf4x2_t vd,
                                          const int8_t *rs1, size_t *new_vl,
                                          size_t vl) {
  return __riscv_vlseg2e8ff_v_i8mf4x2_mu(vm, vd, rs1, new_vl, vl);
}

vint8mf2x2_t test_vlseg2e8ff_v_i8mf2x2_mu(vbool16_t vm, vint8mf2x2_t vd,
                                          const int8_t *rs1, size_t *new_vl,
                                          size_t vl) {
  return __riscv_vlseg2e8ff_v_i8mf2x2_mu(vm, vd, rs1, new_vl, vl);
}

vint8m1x2_t test_vlseg2e8ff_v_i8m1x2_mu(vbool8_t vm, vint8m1x2_t vd,
                                        const int8_t *rs1, size_t *new_vl,
                                        size_t vl) {
  return __riscv_vlseg2e8ff_v_i8m1x2_mu(vm, vd, rs1, new_vl, vl);
}

vint8m2x2_t test_vlseg2e8ff_v_i8m2x2_mu(vbool4_t vm, vint8m2x2_t vd,
                                        const int8_t *rs1, size_t *new_vl,
                                        size_t vl) {
  return __riscv_vlseg2e8ff_v_i8m2x2_mu(vm, vd, rs1, new_vl, vl);
}

vint8m4x2_t test_vlseg2e8ff_v_i8m4x2_mu(vbool2_t vm, vint8m4x2_t vd,
                                        const int8_t *rs1, size_t *new_vl,
                                        size_t vl) {
  return __riscv_vlseg2e8ff_v_i8m4x2_mu(vm, vd, rs1, new_vl, vl);
}

vuint8mf8x2_t test_vlseg2e8ff_v_u8mf8x2_mu(vbool64_t vm, vuint8mf8x2_t vd,
                                           const uint8_t *rs1, size_t *new_vl,
                                           size_t vl) {
  return __riscv_vlseg2e8ff_v_u8mf8x2_mu(vm, vd, rs1, new_vl, vl);
}

vuint8mf4x2_t test_vlseg2e8ff_v_u8mf4x2_mu(vbool32_t vm, vuint8mf4x2_t vd,
                                           const uint8_t *rs1, size_t *new_vl,
                                           size_t vl) {
  return __riscv_vlseg2e8ff_v_u8mf4x2_mu(vm, vd, rs1, new_vl, vl);
}

vuint8mf2x2_t test_vlseg2e8ff_v_u8mf2x2_mu(vbool16_t vm, vuint8mf2x2_t vd,
                                           const uint8_t *rs1, size_t *new_vl,
                                           size_t vl) {
  return __riscv_vlseg2e8ff_v_u8mf2x2_mu(vm, vd, rs1, new_vl, vl);
}

vuint8m1x2_t test_vlseg2e8ff_v_u8m1x2_mu(vbool8_t vm, vuint8m1x2_t vd,
                                         const uint8_t *rs1, size_t *new_vl,
                                         size_t vl) {
  return __riscv_vlseg2e8ff_v_u8m1x2_mu(vm, vd, rs1, new_vl, vl);
}

vuint8m2x2_t test_vlseg2e8ff_v_u8m2x2_mu(vbool4_t vm, vuint8m2x2_t vd,
                                         const uint8_t *rs1, size_t *new_vl,
                                         size_t vl) {
  return __riscv_vlseg2e8ff_v_u8m2x2_mu(vm, vd, rs1, new_vl, vl);
}

vuint8m4x2_t test_vlseg2e8ff_v_u8m4x2_mu(vbool2_t vm, vuint8m4x2_t vd,
                                         const uint8_t *rs1, size_t *new_vl,
                                         size_t vl) {
  return __riscv_vlseg2e8ff_v_u8m4x2_mu(vm, vd, rs1, new_vl, vl);
}
