// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -target-feature +zfh \
// RUN:   -target-feature +experimental-zvfh -disable-O0-optnone  \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

vfloat16mf4x3_t test_vlseg3e16ff_v_f16mf4x3(const _Float16 *base,
                                            size_t *new_vl, size_t vl) {
  return __riscv_vlseg3e16ff_v_f16mf4x3(base, new_vl, vl);
}

vfloat16mf2x3_t test_vlseg3e16ff_v_f16mf2x3(const _Float16 *base,
                                            size_t *new_vl, size_t vl) {
  return __riscv_vlseg3e16ff_v_f16mf2x3(base, new_vl, vl);
}

vfloat16m1x3_t test_vlseg3e16ff_v_f16m1x3(const _Float16 *base, size_t *new_vl,
                                          size_t vl) {
  return __riscv_vlseg3e16ff_v_f16m1x3(base, new_vl, vl);
}

vfloat16m2x3_t test_vlseg3e16ff_v_f16m2x3(const _Float16 *base, size_t *new_vl,
                                          size_t vl) {
  return __riscv_vlseg3e16ff_v_f16m2x3(base, new_vl, vl);
}

vint16mf4x3_t test_vlseg3e16ff_v_i16mf4x3(const int16_t *base, size_t *new_vl,
                                          size_t vl) {
  return __riscv_vlseg3e16ff_v_i16mf4x3(base, new_vl, vl);
}

vint16mf2x3_t test_vlseg3e16ff_v_i16mf2x3(const int16_t *base, size_t *new_vl,
                                          size_t vl) {
  return __riscv_vlseg3e16ff_v_i16mf2x3(base, new_vl, vl);
}

vint16m1x3_t test_vlseg3e16ff_v_i16m1x3(const int16_t *base, size_t *new_vl,
                                        size_t vl) {
  return __riscv_vlseg3e16ff_v_i16m1x3(base, new_vl, vl);
}

vint16m2x3_t test_vlseg3e16ff_v_i16m2x3(const int16_t *base, size_t *new_vl,
                                        size_t vl) {
  return __riscv_vlseg3e16ff_v_i16m2x3(base, new_vl, vl);
}

vuint16mf4x3_t test_vlseg3e16ff_v_u16mf4x3(const uint16_t *base, size_t *new_vl,
                                           size_t vl) {
  return __riscv_vlseg3e16ff_v_u16mf4x3(base, new_vl, vl);
}

vuint16mf2x3_t test_vlseg3e16ff_v_u16mf2x3(const uint16_t *base, size_t *new_vl,
                                           size_t vl) {
  return __riscv_vlseg3e16ff_v_u16mf2x3(base, new_vl, vl);
}

vuint16m1x3_t test_vlseg3e16ff_v_u16m1x3(const uint16_t *base, size_t *new_vl,
                                         size_t vl) {
  return __riscv_vlseg3e16ff_v_u16m1x3(base, new_vl, vl);
}

vuint16m2x3_t test_vlseg3e16ff_v_u16m2x3(const uint16_t *base, size_t *new_vl,
                                         size_t vl) {
  return __riscv_vlseg3e16ff_v_u16m2x3(base, new_vl, vl);
}

vfloat16mf4x3_t test_vlseg3e16ff_v_f16mf4x3_m(vbool64_t mask,
                                              const _Float16 *base,
                                              size_t *new_vl, size_t vl) {
  return __riscv_vlseg3e16ff_v_f16mf4x3_m(mask, base, new_vl, vl);
}

vfloat16mf2x3_t test_vlseg3e16ff_v_f16mf2x3_m(vbool32_t mask,
                                              const _Float16 *base,
                                              size_t *new_vl, size_t vl) {
  return __riscv_vlseg3e16ff_v_f16mf2x3_m(mask, base, new_vl, vl);
}

vfloat16m1x3_t test_vlseg3e16ff_v_f16m1x3_m(vbool16_t mask,
                                            const _Float16 *base,
                                            size_t *new_vl, size_t vl) {
  return __riscv_vlseg3e16ff_v_f16m1x3_m(mask, base, new_vl, vl);
}

vfloat16m2x3_t test_vlseg3e16ff_v_f16m2x3_m(vbool8_t mask, const _Float16 *base,
                                            size_t *new_vl, size_t vl) {
  return __riscv_vlseg3e16ff_v_f16m2x3_m(mask, base, new_vl, vl);
}

vint16mf4x3_t test_vlseg3e16ff_v_i16mf4x3_m(vbool64_t mask, const int16_t *base,
                                            size_t *new_vl, size_t vl) {
  return __riscv_vlseg3e16ff_v_i16mf4x3_m(mask, base, new_vl, vl);
}

vint16mf2x3_t test_vlseg3e16ff_v_i16mf2x3_m(vbool32_t mask, const int16_t *base,
                                            size_t *new_vl, size_t vl) {
  return __riscv_vlseg3e16ff_v_i16mf2x3_m(mask, base, new_vl, vl);
}

vint16m1x3_t test_vlseg3e16ff_v_i16m1x3_m(vbool16_t mask, const int16_t *base,
                                          size_t *new_vl, size_t vl) {
  return __riscv_vlseg3e16ff_v_i16m1x3_m(mask, base, new_vl, vl);
}

vint16m2x3_t test_vlseg3e16ff_v_i16m2x3_m(vbool8_t mask, const int16_t *base,
                                          size_t *new_vl, size_t vl) {
  return __riscv_vlseg3e16ff_v_i16m2x3_m(mask, base, new_vl, vl);
}

vuint16mf4x3_t test_vlseg3e16ff_v_u16mf4x3_m(vbool64_t mask,
                                             const uint16_t *base,
                                             size_t *new_vl, size_t vl) {
  return __riscv_vlseg3e16ff_v_u16mf4x3_m(mask, base, new_vl, vl);
}

vuint16mf2x3_t test_vlseg3e16ff_v_u16mf2x3_m(vbool32_t mask,
                                             const uint16_t *base,
                                             size_t *new_vl, size_t vl) {
  return __riscv_vlseg3e16ff_v_u16mf2x3_m(mask, base, new_vl, vl);
}

vuint16m1x3_t test_vlseg3e16ff_v_u16m1x3_m(vbool16_t mask, const uint16_t *base,
                                           size_t *new_vl, size_t vl) {
  return __riscv_vlseg3e16ff_v_u16m1x3_m(mask, base, new_vl, vl);
}

vuint16m2x3_t test_vlseg3e16ff_v_u16m2x3_m(vbool8_t mask, const uint16_t *base,
                                           size_t *new_vl, size_t vl) {
  return __riscv_vlseg3e16ff_v_u16m2x3_m(mask, base, new_vl, vl);
}
