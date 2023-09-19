// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -target-feature +zfh \
// RUN:   -target-feature +experimental-zvfh -disable-O0-optnone  \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

vfloat16mf4x8_t test_vlseg8e16_v_f16mf4x8(const _Float16 *base, size_t vl) {
  return __riscv_vlseg8e16_v_f16mf4x8(base, vl);
}

vfloat16mf2x8_t test_vlseg8e16_v_f16mf2x8(const _Float16 *base, size_t vl) {
  return __riscv_vlseg8e16_v_f16mf2x8(base, vl);
}

vfloat16m1x8_t test_vlseg8e16_v_f16m1x8(const _Float16 *base, size_t vl) {
  return __riscv_vlseg8e16_v_f16m1x8(base, vl);
}

vint16mf4x8_t test_vlseg8e16_v_i16mf4x8(const int16_t *base, size_t vl) {
  return __riscv_vlseg8e16_v_i16mf4x8(base, vl);
}

vint16mf2x8_t test_vlseg8e16_v_i16mf2x8(const int16_t *base, size_t vl) {
  return __riscv_vlseg8e16_v_i16mf2x8(base, vl);
}

vint16m1x8_t test_vlseg8e16_v_i16m1x8(const int16_t *base, size_t vl) {
  return __riscv_vlseg8e16_v_i16m1x8(base, vl);
}

vuint16mf4x8_t test_vlseg8e16_v_u16mf4x8(const uint16_t *base, size_t vl) {
  return __riscv_vlseg8e16_v_u16mf4x8(base, vl);
}

vuint16mf2x8_t test_vlseg8e16_v_u16mf2x8(const uint16_t *base, size_t vl) {
  return __riscv_vlseg8e16_v_u16mf2x8(base, vl);
}

vuint16m1x8_t test_vlseg8e16_v_u16m1x8(const uint16_t *base, size_t vl) {
  return __riscv_vlseg8e16_v_u16m1x8(base, vl);
}

vfloat16mf4x8_t test_vlseg8e16_v_f16mf4x8_m(vbool64_t mask,
                                            const _Float16 *base, size_t vl) {
  return __riscv_vlseg8e16_v_f16mf4x8_m(mask, base, vl);
}

vfloat16mf2x8_t test_vlseg8e16_v_f16mf2x8_m(vbool32_t mask,
                                            const _Float16 *base, size_t vl) {
  return __riscv_vlseg8e16_v_f16mf2x8_m(mask, base, vl);
}

vfloat16m1x8_t test_vlseg8e16_v_f16m1x8_m(vbool16_t mask, const _Float16 *base,
                                          size_t vl) {
  return __riscv_vlseg8e16_v_f16m1x8_m(mask, base, vl);
}

vint16mf4x8_t test_vlseg8e16_v_i16mf4x8_m(vbool64_t mask, const int16_t *base,
                                          size_t vl) {
  return __riscv_vlseg8e16_v_i16mf4x8_m(mask, base, vl);
}

vint16mf2x8_t test_vlseg8e16_v_i16mf2x8_m(vbool32_t mask, const int16_t *base,
                                          size_t vl) {
  return __riscv_vlseg8e16_v_i16mf2x8_m(mask, base, vl);
}

vint16m1x8_t test_vlseg8e16_v_i16m1x8_m(vbool16_t mask, const int16_t *base,
                                        size_t vl) {
  return __riscv_vlseg8e16_v_i16m1x8_m(mask, base, vl);
}

vuint16mf4x8_t test_vlseg8e16_v_u16mf4x8_m(vbool64_t mask, const uint16_t *base,
                                           size_t vl) {
  return __riscv_vlseg8e16_v_u16mf4x8_m(mask, base, vl);
}

vuint16mf2x8_t test_vlseg8e16_v_u16mf2x8_m(vbool32_t mask, const uint16_t *base,
                                           size_t vl) {
  return __riscv_vlseg8e16_v_u16mf2x8_m(mask, base, vl);
}

vuint16m1x8_t test_vlseg8e16_v_u16m1x8_m(vbool16_t mask, const uint16_t *base,
                                         size_t vl) {
  return __riscv_vlseg8e16_v_u16m1x8_m(mask, base, vl);
}
