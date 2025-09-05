// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -target-feature +zfh \
// RUN:   -target-feature +zvfh -disable-O0-optnone \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

vfloat16mf4x3_t test_vlseg3e16ff_v_f16mf4x3_tu(vfloat16mf4x3_t vd,
                                               const _Float16 *rs1,
                                               size_t *new_vl, size_t vl) {
  return __riscv_vlseg3e16ff_v_f16mf4x3_tu(vd, rs1, new_vl, vl);
}

vfloat16mf2x3_t test_vlseg3e16ff_v_f16mf2x3_tu(vfloat16mf2x3_t vd,
                                               const _Float16 *rs1,
                                               size_t *new_vl, size_t vl) {
  return __riscv_vlseg3e16ff_v_f16mf2x3_tu(vd, rs1, new_vl, vl);
}

vfloat16m1x3_t test_vlseg3e16ff_v_f16m1x3_tu(vfloat16m1x3_t vd,
                                             const _Float16 *rs1,
                                             size_t *new_vl, size_t vl) {
  return __riscv_vlseg3e16ff_v_f16m1x3_tu(vd, rs1, new_vl, vl);
}

vfloat16m2x3_t test_vlseg3e16ff_v_f16m2x3_tu(vfloat16m2x3_t vd,
                                             const _Float16 *rs1,
                                             size_t *new_vl, size_t vl) {
  return __riscv_vlseg3e16ff_v_f16m2x3_tu(vd, rs1, new_vl, vl);
}

vint16mf4x3_t test_vlseg3e16ff_v_i16mf4x3_tu(vint16mf4x3_t vd,
                                             const int16_t *rs1, size_t *new_vl,
                                             size_t vl) {
  return __riscv_vlseg3e16ff_v_i16mf4x3_tu(vd, rs1, new_vl, vl);
}

vint16mf2x3_t test_vlseg3e16ff_v_i16mf2x3_tu(vint16mf2x3_t vd,
                                             const int16_t *rs1, size_t *new_vl,
                                             size_t vl) {
  return __riscv_vlseg3e16ff_v_i16mf2x3_tu(vd, rs1, new_vl, vl);
}

vint16m1x3_t test_vlseg3e16ff_v_i16m1x3_tu(vint16m1x3_t vd, const int16_t *rs1,
                                           size_t *new_vl, size_t vl) {
  return __riscv_vlseg3e16ff_v_i16m1x3_tu(vd, rs1, new_vl, vl);
}

vint16m2x3_t test_vlseg3e16ff_v_i16m2x3_tu(vint16m2x3_t vd, const int16_t *rs1,
                                           size_t *new_vl, size_t vl) {
  return __riscv_vlseg3e16ff_v_i16m2x3_tu(vd, rs1, new_vl, vl);
}

vuint16mf4x3_t test_vlseg3e16ff_v_u16mf4x3_tu(vuint16mf4x3_t vd,
                                              const uint16_t *rs1,
                                              size_t *new_vl, size_t vl) {
  return __riscv_vlseg3e16ff_v_u16mf4x3_tu(vd, rs1, new_vl, vl);
}

vuint16mf2x3_t test_vlseg3e16ff_v_u16mf2x3_tu(vuint16mf2x3_t vd,
                                              const uint16_t *rs1,
                                              size_t *new_vl, size_t vl) {
  return __riscv_vlseg3e16ff_v_u16mf2x3_tu(vd, rs1, new_vl, vl);
}

vuint16m1x3_t test_vlseg3e16ff_v_u16m1x3_tu(vuint16m1x3_t vd,
                                            const uint16_t *rs1, size_t *new_vl,
                                            size_t vl) {
  return __riscv_vlseg3e16ff_v_u16m1x3_tu(vd, rs1, new_vl, vl);
}

vuint16m2x3_t test_vlseg3e16ff_v_u16m2x3_tu(vuint16m2x3_t vd,
                                            const uint16_t *rs1, size_t *new_vl,
                                            size_t vl) {
  return __riscv_vlseg3e16ff_v_u16m2x3_tu(vd, rs1, new_vl, vl);
}

vfloat16mf4x3_t test_vlseg3e16ff_v_f16mf4x3_tum(vbool64_t vm,
                                                vfloat16mf4x3_t vd,
                                                const _Float16 *rs1,
                                                size_t *new_vl, size_t vl) {
  return __riscv_vlseg3e16ff_v_f16mf4x3_tum(vm, vd, rs1, new_vl, vl);
}

vfloat16mf2x3_t test_vlseg3e16ff_v_f16mf2x3_tum(vbool32_t vm,
                                                vfloat16mf2x3_t vd,
                                                const _Float16 *rs1,
                                                size_t *new_vl, size_t vl) {
  return __riscv_vlseg3e16ff_v_f16mf2x3_tum(vm, vd, rs1, new_vl, vl);
}

vfloat16m1x3_t test_vlseg3e16ff_v_f16m1x3_tum(vbool16_t vm, vfloat16m1x3_t vd,
                                              const _Float16 *rs1,
                                              size_t *new_vl, size_t vl) {
  return __riscv_vlseg3e16ff_v_f16m1x3_tum(vm, vd, rs1, new_vl, vl);
}

vfloat16m2x3_t test_vlseg3e16ff_v_f16m2x3_tum(vbool8_t vm, vfloat16m2x3_t vd,
                                              const _Float16 *rs1,
                                              size_t *new_vl, size_t vl) {
  return __riscv_vlseg3e16ff_v_f16m2x3_tum(vm, vd, rs1, new_vl, vl);
}

vint16mf4x3_t test_vlseg3e16ff_v_i16mf4x3_tum(vbool64_t vm, vint16mf4x3_t vd,
                                              const int16_t *rs1,
                                              size_t *new_vl, size_t vl) {
  return __riscv_vlseg3e16ff_v_i16mf4x3_tum(vm, vd, rs1, new_vl, vl);
}

vint16mf2x3_t test_vlseg3e16ff_v_i16mf2x3_tum(vbool32_t vm, vint16mf2x3_t vd,
                                              const int16_t *rs1,
                                              size_t *new_vl, size_t vl) {
  return __riscv_vlseg3e16ff_v_i16mf2x3_tum(vm, vd, rs1, new_vl, vl);
}

vint16m1x3_t test_vlseg3e16ff_v_i16m1x3_tum(vbool16_t vm, vint16m1x3_t vd,
                                            const int16_t *rs1, size_t *new_vl,
                                            size_t vl) {
  return __riscv_vlseg3e16ff_v_i16m1x3_tum(vm, vd, rs1, new_vl, vl);
}

vint16m2x3_t test_vlseg3e16ff_v_i16m2x3_tum(vbool8_t vm, vint16m2x3_t vd,
                                            const int16_t *rs1, size_t *new_vl,
                                            size_t vl) {
  return __riscv_vlseg3e16ff_v_i16m2x3_tum(vm, vd, rs1, new_vl, vl);
}

vuint16mf4x3_t test_vlseg3e16ff_v_u16mf4x3_tum(vbool64_t vm, vuint16mf4x3_t vd,
                                               const uint16_t *rs1,
                                               size_t *new_vl, size_t vl) {
  return __riscv_vlseg3e16ff_v_u16mf4x3_tum(vm, vd, rs1, new_vl, vl);
}

vuint16mf2x3_t test_vlseg3e16ff_v_u16mf2x3_tum(vbool32_t vm, vuint16mf2x3_t vd,
                                               const uint16_t *rs1,
                                               size_t *new_vl, size_t vl) {
  return __riscv_vlseg3e16ff_v_u16mf2x3_tum(vm, vd, rs1, new_vl, vl);
}

vuint16m1x3_t test_vlseg3e16ff_v_u16m1x3_tum(vbool16_t vm, vuint16m1x3_t vd,
                                             const uint16_t *rs1,
                                             size_t *new_vl, size_t vl) {
  return __riscv_vlseg3e16ff_v_u16m1x3_tum(vm, vd, rs1, new_vl, vl);
}

vuint16m2x3_t test_vlseg3e16ff_v_u16m2x3_tum(vbool8_t vm, vuint16m2x3_t vd,
                                             const uint16_t *rs1,
                                             size_t *new_vl, size_t vl) {
  return __riscv_vlseg3e16ff_v_u16m2x3_tum(vm, vd, rs1, new_vl, vl);
}

vfloat16mf4x3_t test_vlseg3e16ff_v_f16mf4x3_tumu(vbool64_t vm,
                                                 vfloat16mf4x3_t vd,
                                                 const _Float16 *rs1,
                                                 size_t *new_vl, size_t vl) {
  return __riscv_vlseg3e16ff_v_f16mf4x3_tumu(vm, vd, rs1, new_vl, vl);
}

vfloat16mf2x3_t test_vlseg3e16ff_v_f16mf2x3_tumu(vbool32_t vm,
                                                 vfloat16mf2x3_t vd,
                                                 const _Float16 *rs1,
                                                 size_t *new_vl, size_t vl) {
  return __riscv_vlseg3e16ff_v_f16mf2x3_tumu(vm, vd, rs1, new_vl, vl);
}

vfloat16m1x3_t test_vlseg3e16ff_v_f16m1x3_tumu(vbool16_t vm, vfloat16m1x3_t vd,
                                               const _Float16 *rs1,
                                               size_t *new_vl, size_t vl) {
  return __riscv_vlseg3e16ff_v_f16m1x3_tumu(vm, vd, rs1, new_vl, vl);
}

vfloat16m2x3_t test_vlseg3e16ff_v_f16m2x3_tumu(vbool8_t vm, vfloat16m2x3_t vd,
                                               const _Float16 *rs1,
                                               size_t *new_vl, size_t vl) {
  return __riscv_vlseg3e16ff_v_f16m2x3_tumu(vm, vd, rs1, new_vl, vl);
}

vint16mf4x3_t test_vlseg3e16ff_v_i16mf4x3_tumu(vbool64_t vm, vint16mf4x3_t vd,
                                               const int16_t *rs1,
                                               size_t *new_vl, size_t vl) {
  return __riscv_vlseg3e16ff_v_i16mf4x3_tumu(vm, vd, rs1, new_vl, vl);
}

vint16mf2x3_t test_vlseg3e16ff_v_i16mf2x3_tumu(vbool32_t vm, vint16mf2x3_t vd,
                                               const int16_t *rs1,
                                               size_t *new_vl, size_t vl) {
  return __riscv_vlseg3e16ff_v_i16mf2x3_tumu(vm, vd, rs1, new_vl, vl);
}

vint16m1x3_t test_vlseg3e16ff_v_i16m1x3_tumu(vbool16_t vm, vint16m1x3_t vd,
                                             const int16_t *rs1, size_t *new_vl,
                                             size_t vl) {
  return __riscv_vlseg3e16ff_v_i16m1x3_tumu(vm, vd, rs1, new_vl, vl);
}

vint16m2x3_t test_vlseg3e16ff_v_i16m2x3_tumu(vbool8_t vm, vint16m2x3_t vd,
                                             const int16_t *rs1, size_t *new_vl,
                                             size_t vl) {
  return __riscv_vlseg3e16ff_v_i16m2x3_tumu(vm, vd, rs1, new_vl, vl);
}

vuint16mf4x3_t test_vlseg3e16ff_v_u16mf4x3_tumu(vbool64_t vm, vuint16mf4x3_t vd,
                                                const uint16_t *rs1,
                                                size_t *new_vl, size_t vl) {
  return __riscv_vlseg3e16ff_v_u16mf4x3_tumu(vm, vd, rs1, new_vl, vl);
}

vuint16mf2x3_t test_vlseg3e16ff_v_u16mf2x3_tumu(vbool32_t vm, vuint16mf2x3_t vd,
                                                const uint16_t *rs1,
                                                size_t *new_vl, size_t vl) {
  return __riscv_vlseg3e16ff_v_u16mf2x3_tumu(vm, vd, rs1, new_vl, vl);
}

vuint16m1x3_t test_vlseg3e16ff_v_u16m1x3_tumu(vbool16_t vm, vuint16m1x3_t vd,
                                              const uint16_t *rs1,
                                              size_t *new_vl, size_t vl) {
  return __riscv_vlseg3e16ff_v_u16m1x3_tumu(vm, vd, rs1, new_vl, vl);
}

vuint16m2x3_t test_vlseg3e16ff_v_u16m2x3_tumu(vbool8_t vm, vuint16m2x3_t vd,
                                              const uint16_t *rs1,
                                              size_t *new_vl, size_t vl) {
  return __riscv_vlseg3e16ff_v_u16m2x3_tumu(vm, vd, rs1, new_vl, vl);
}

vfloat16mf4x3_t test_vlseg3e16ff_v_f16mf4x3_mu(vbool64_t vm, vfloat16mf4x3_t vd,
                                               const _Float16 *rs1,
                                               size_t *new_vl, size_t vl) {
  return __riscv_vlseg3e16ff_v_f16mf4x3_mu(vm, vd, rs1, new_vl, vl);
}

vfloat16mf2x3_t test_vlseg3e16ff_v_f16mf2x3_mu(vbool32_t vm, vfloat16mf2x3_t vd,
                                               const _Float16 *rs1,
                                               size_t *new_vl, size_t vl) {
  return __riscv_vlseg3e16ff_v_f16mf2x3_mu(vm, vd, rs1, new_vl, vl);
}

vfloat16m1x3_t test_vlseg3e16ff_v_f16m1x3_mu(vbool16_t vm, vfloat16m1x3_t vd,
                                             const _Float16 *rs1,
                                             size_t *new_vl, size_t vl) {
  return __riscv_vlseg3e16ff_v_f16m1x3_mu(vm, vd, rs1, new_vl, vl);
}

vfloat16m2x3_t test_vlseg3e16ff_v_f16m2x3_mu(vbool8_t vm, vfloat16m2x3_t vd,
                                             const _Float16 *rs1,
                                             size_t *new_vl, size_t vl) {
  return __riscv_vlseg3e16ff_v_f16m2x3_mu(vm, vd, rs1, new_vl, vl);
}

vint16mf4x3_t test_vlseg3e16ff_v_i16mf4x3_mu(vbool64_t vm, vint16mf4x3_t vd,
                                             const int16_t *rs1, size_t *new_vl,
                                             size_t vl) {
  return __riscv_vlseg3e16ff_v_i16mf4x3_mu(vm, vd, rs1, new_vl, vl);
}

vint16mf2x3_t test_vlseg3e16ff_v_i16mf2x3_mu(vbool32_t vm, vint16mf2x3_t vd,
                                             const int16_t *rs1, size_t *new_vl,
                                             size_t vl) {
  return __riscv_vlseg3e16ff_v_i16mf2x3_mu(vm, vd, rs1, new_vl, vl);
}

vint16m1x3_t test_vlseg3e16ff_v_i16m1x3_mu(vbool16_t vm, vint16m1x3_t vd,
                                           const int16_t *rs1, size_t *new_vl,
                                           size_t vl) {
  return __riscv_vlseg3e16ff_v_i16m1x3_mu(vm, vd, rs1, new_vl, vl);
}

vint16m2x3_t test_vlseg3e16ff_v_i16m2x3_mu(vbool8_t vm, vint16m2x3_t vd,
                                           const int16_t *rs1, size_t *new_vl,
                                           size_t vl) {
  return __riscv_vlseg3e16ff_v_i16m2x3_mu(vm, vd, rs1, new_vl, vl);
}

vuint16mf4x3_t test_vlseg3e16ff_v_u16mf4x3_mu(vbool64_t vm, vuint16mf4x3_t vd,
                                              const uint16_t *rs1,
                                              size_t *new_vl, size_t vl) {
  return __riscv_vlseg3e16ff_v_u16mf4x3_mu(vm, vd, rs1, new_vl, vl);
}

vuint16mf2x3_t test_vlseg3e16ff_v_u16mf2x3_mu(vbool32_t vm, vuint16mf2x3_t vd,
                                              const uint16_t *rs1,
                                              size_t *new_vl, size_t vl) {
  return __riscv_vlseg3e16ff_v_u16mf2x3_mu(vm, vd, rs1, new_vl, vl);
}

vuint16m1x3_t test_vlseg3e16ff_v_u16m1x3_mu(vbool16_t vm, vuint16m1x3_t vd,
                                            const uint16_t *rs1, size_t *new_vl,
                                            size_t vl) {
  return __riscv_vlseg3e16ff_v_u16m1x3_mu(vm, vd, rs1, new_vl, vl);
}

vuint16m2x3_t test_vlseg3e16ff_v_u16m2x3_mu(vbool8_t vm, vuint16m2x3_t vd,
                                            const uint16_t *rs1, size_t *new_vl,
                                            size_t vl) {
  return __riscv_vlseg3e16ff_v_u16m2x3_mu(vm, vd, rs1, new_vl, vl);
}
