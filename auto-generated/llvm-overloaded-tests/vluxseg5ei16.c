// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -target-feature +zfh \
// RUN:   -target-feature +experimental-zvfh -disable-O0-optnone  \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

vfloat16mf4x5_t test_vluxseg5ei16_v_f16mf4x5(const _Float16 *base,
                                             vuint16mf4_t bindex, size_t vl) {
  return __riscv_vluxseg5ei16(base, bindex, vl);
}

vfloat16mf2x5_t test_vluxseg5ei16_v_f16mf2x5(const _Float16 *base,
                                             vuint16mf2_t bindex, size_t vl) {
  return __riscv_vluxseg5ei16(base, bindex, vl);
}

vfloat16m1x5_t test_vluxseg5ei16_v_f16m1x5(const _Float16 *base,
                                           vuint16m1_t bindex, size_t vl) {
  return __riscv_vluxseg5ei16(base, bindex, vl);
}

vfloat32mf2x5_t test_vluxseg5ei16_v_f32mf2x5(const float *base,
                                             vuint16mf4_t bindex, size_t vl) {
  return __riscv_vluxseg5ei16(base, bindex, vl);
}

vfloat32m1x5_t test_vluxseg5ei16_v_f32m1x5(const float *base,
                                           vuint16mf2_t bindex, size_t vl) {
  return __riscv_vluxseg5ei16(base, bindex, vl);
}

vfloat64m1x5_t test_vluxseg5ei16_v_f64m1x5(const double *base,
                                           vuint16mf4_t bindex, size_t vl) {
  return __riscv_vluxseg5ei16(base, bindex, vl);
}

vint8mf8x5_t test_vluxseg5ei16_v_i8mf8x5(const int8_t *base,
                                         vuint16mf4_t bindex, size_t vl) {
  return __riscv_vluxseg5ei16(base, bindex, vl);
}

vint8mf4x5_t test_vluxseg5ei16_v_i8mf4x5(const int8_t *base,
                                         vuint16mf2_t bindex, size_t vl) {
  return __riscv_vluxseg5ei16(base, bindex, vl);
}

vint8mf2x5_t test_vluxseg5ei16_v_i8mf2x5(const int8_t *base, vuint16m1_t bindex,
                                         size_t vl) {
  return __riscv_vluxseg5ei16(base, bindex, vl);
}

vint8m1x5_t test_vluxseg5ei16_v_i8m1x5(const int8_t *base, vuint16m2_t bindex,
                                       size_t vl) {
  return __riscv_vluxseg5ei16(base, bindex, vl);
}

vint16mf4x5_t test_vluxseg5ei16_v_i16mf4x5(const int16_t *base,
                                           vuint16mf4_t bindex, size_t vl) {
  return __riscv_vluxseg5ei16(base, bindex, vl);
}

vint16mf2x5_t test_vluxseg5ei16_v_i16mf2x5(const int16_t *base,
                                           vuint16mf2_t bindex, size_t vl) {
  return __riscv_vluxseg5ei16(base, bindex, vl);
}

vint16m1x5_t test_vluxseg5ei16_v_i16m1x5(const int16_t *base,
                                         vuint16m1_t bindex, size_t vl) {
  return __riscv_vluxseg5ei16(base, bindex, vl);
}

vint32mf2x5_t test_vluxseg5ei16_v_i32mf2x5(const int32_t *base,
                                           vuint16mf4_t bindex, size_t vl) {
  return __riscv_vluxseg5ei16(base, bindex, vl);
}

vint32m1x5_t test_vluxseg5ei16_v_i32m1x5(const int32_t *base,
                                         vuint16mf2_t bindex, size_t vl) {
  return __riscv_vluxseg5ei16(base, bindex, vl);
}

vint64m1x5_t test_vluxseg5ei16_v_i64m1x5(const int64_t *base,
                                         vuint16mf4_t bindex, size_t vl) {
  return __riscv_vluxseg5ei16(base, bindex, vl);
}

vuint8mf8x5_t test_vluxseg5ei16_v_u8mf8x5(const uint8_t *base,
                                          vuint16mf4_t bindex, size_t vl) {
  return __riscv_vluxseg5ei16(base, bindex, vl);
}

vuint8mf4x5_t test_vluxseg5ei16_v_u8mf4x5(const uint8_t *base,
                                          vuint16mf2_t bindex, size_t vl) {
  return __riscv_vluxseg5ei16(base, bindex, vl);
}

vuint8mf2x5_t test_vluxseg5ei16_v_u8mf2x5(const uint8_t *base,
                                          vuint16m1_t bindex, size_t vl) {
  return __riscv_vluxseg5ei16(base, bindex, vl);
}

vuint8m1x5_t test_vluxseg5ei16_v_u8m1x5(const uint8_t *base, vuint16m2_t bindex,
                                        size_t vl) {
  return __riscv_vluxseg5ei16(base, bindex, vl);
}

vuint16mf4x5_t test_vluxseg5ei16_v_u16mf4x5(const uint16_t *base,
                                            vuint16mf4_t bindex, size_t vl) {
  return __riscv_vluxseg5ei16(base, bindex, vl);
}

vuint16mf2x5_t test_vluxseg5ei16_v_u16mf2x5(const uint16_t *base,
                                            vuint16mf2_t bindex, size_t vl) {
  return __riscv_vluxseg5ei16(base, bindex, vl);
}

vuint16m1x5_t test_vluxseg5ei16_v_u16m1x5(const uint16_t *base,
                                          vuint16m1_t bindex, size_t vl) {
  return __riscv_vluxseg5ei16(base, bindex, vl);
}

vuint32mf2x5_t test_vluxseg5ei16_v_u32mf2x5(const uint32_t *base,
                                            vuint16mf4_t bindex, size_t vl) {
  return __riscv_vluxseg5ei16(base, bindex, vl);
}

vuint32m1x5_t test_vluxseg5ei16_v_u32m1x5(const uint32_t *base,
                                          vuint16mf2_t bindex, size_t vl) {
  return __riscv_vluxseg5ei16(base, bindex, vl);
}

vuint64m1x5_t test_vluxseg5ei16_v_u64m1x5(const uint64_t *base,
                                          vuint16mf4_t bindex, size_t vl) {
  return __riscv_vluxseg5ei16(base, bindex, vl);
}

vfloat16mf4x5_t test_vluxseg5ei16_v_f16mf4x5_m(vbool64_t mask,
                                               const _Float16 *base,
                                               vuint16mf4_t bindex, size_t vl) {
  return __riscv_vluxseg5ei16(mask, base, bindex, vl);
}

vfloat16mf2x5_t test_vluxseg5ei16_v_f16mf2x5_m(vbool32_t mask,
                                               const _Float16 *base,
                                               vuint16mf2_t bindex, size_t vl) {
  return __riscv_vluxseg5ei16(mask, base, bindex, vl);
}

vfloat16m1x5_t test_vluxseg5ei16_v_f16m1x5_m(vbool16_t mask,
                                             const _Float16 *base,
                                             vuint16m1_t bindex, size_t vl) {
  return __riscv_vluxseg5ei16(mask, base, bindex, vl);
}

vfloat32mf2x5_t test_vluxseg5ei16_v_f32mf2x5_m(vbool64_t mask,
                                               const float *base,
                                               vuint16mf4_t bindex, size_t vl) {
  return __riscv_vluxseg5ei16(mask, base, bindex, vl);
}

vfloat32m1x5_t test_vluxseg5ei16_v_f32m1x5_m(vbool32_t mask, const float *base,
                                             vuint16mf2_t bindex, size_t vl) {
  return __riscv_vluxseg5ei16(mask, base, bindex, vl);
}

vfloat64m1x5_t test_vluxseg5ei16_v_f64m1x5_m(vbool64_t mask, const double *base,
                                             vuint16mf4_t bindex, size_t vl) {
  return __riscv_vluxseg5ei16(mask, base, bindex, vl);
}

vint8mf8x5_t test_vluxseg5ei16_v_i8mf8x5_m(vbool64_t mask, const int8_t *base,
                                           vuint16mf4_t bindex, size_t vl) {
  return __riscv_vluxseg5ei16(mask, base, bindex, vl);
}

vint8mf4x5_t test_vluxseg5ei16_v_i8mf4x5_m(vbool32_t mask, const int8_t *base,
                                           vuint16mf2_t bindex, size_t vl) {
  return __riscv_vluxseg5ei16(mask, base, bindex, vl);
}

vint8mf2x5_t test_vluxseg5ei16_v_i8mf2x5_m(vbool16_t mask, const int8_t *base,
                                           vuint16m1_t bindex, size_t vl) {
  return __riscv_vluxseg5ei16(mask, base, bindex, vl);
}

vint8m1x5_t test_vluxseg5ei16_v_i8m1x5_m(vbool8_t mask, const int8_t *base,
                                         vuint16m2_t bindex, size_t vl) {
  return __riscv_vluxseg5ei16(mask, base, bindex, vl);
}

vint16mf4x5_t test_vluxseg5ei16_v_i16mf4x5_m(vbool64_t mask,
                                             const int16_t *base,
                                             vuint16mf4_t bindex, size_t vl) {
  return __riscv_vluxseg5ei16(mask, base, bindex, vl);
}

vint16mf2x5_t test_vluxseg5ei16_v_i16mf2x5_m(vbool32_t mask,
                                             const int16_t *base,
                                             vuint16mf2_t bindex, size_t vl) {
  return __riscv_vluxseg5ei16(mask, base, bindex, vl);
}

vint16m1x5_t test_vluxseg5ei16_v_i16m1x5_m(vbool16_t mask, const int16_t *base,
                                           vuint16m1_t bindex, size_t vl) {
  return __riscv_vluxseg5ei16(mask, base, bindex, vl);
}

vint32mf2x5_t test_vluxseg5ei16_v_i32mf2x5_m(vbool64_t mask,
                                             const int32_t *base,
                                             vuint16mf4_t bindex, size_t vl) {
  return __riscv_vluxseg5ei16(mask, base, bindex, vl);
}

vint32m1x5_t test_vluxseg5ei16_v_i32m1x5_m(vbool32_t mask, const int32_t *base,
                                           vuint16mf2_t bindex, size_t vl) {
  return __riscv_vluxseg5ei16(mask, base, bindex, vl);
}

vint64m1x5_t test_vluxseg5ei16_v_i64m1x5_m(vbool64_t mask, const int64_t *base,
                                           vuint16mf4_t bindex, size_t vl) {
  return __riscv_vluxseg5ei16(mask, base, bindex, vl);
}

vuint8mf8x5_t test_vluxseg5ei16_v_u8mf8x5_m(vbool64_t mask, const uint8_t *base,
                                            vuint16mf4_t bindex, size_t vl) {
  return __riscv_vluxseg5ei16(mask, base, bindex, vl);
}

vuint8mf4x5_t test_vluxseg5ei16_v_u8mf4x5_m(vbool32_t mask, const uint8_t *base,
                                            vuint16mf2_t bindex, size_t vl) {
  return __riscv_vluxseg5ei16(mask, base, bindex, vl);
}

vuint8mf2x5_t test_vluxseg5ei16_v_u8mf2x5_m(vbool16_t mask, const uint8_t *base,
                                            vuint16m1_t bindex, size_t vl) {
  return __riscv_vluxseg5ei16(mask, base, bindex, vl);
}

vuint8m1x5_t test_vluxseg5ei16_v_u8m1x5_m(vbool8_t mask, const uint8_t *base,
                                          vuint16m2_t bindex, size_t vl) {
  return __riscv_vluxseg5ei16(mask, base, bindex, vl);
}

vuint16mf4x5_t test_vluxseg5ei16_v_u16mf4x5_m(vbool64_t mask,
                                              const uint16_t *base,
                                              vuint16mf4_t bindex, size_t vl) {
  return __riscv_vluxseg5ei16(mask, base, bindex, vl);
}

vuint16mf2x5_t test_vluxseg5ei16_v_u16mf2x5_m(vbool32_t mask,
                                              const uint16_t *base,
                                              vuint16mf2_t bindex, size_t vl) {
  return __riscv_vluxseg5ei16(mask, base, bindex, vl);
}

vuint16m1x5_t test_vluxseg5ei16_v_u16m1x5_m(vbool16_t mask,
                                            const uint16_t *base,
                                            vuint16m1_t bindex, size_t vl) {
  return __riscv_vluxseg5ei16(mask, base, bindex, vl);
}

vuint32mf2x5_t test_vluxseg5ei16_v_u32mf2x5_m(vbool64_t mask,
                                              const uint32_t *base,
                                              vuint16mf4_t bindex, size_t vl) {
  return __riscv_vluxseg5ei16(mask, base, bindex, vl);
}

vuint32m1x5_t test_vluxseg5ei16_v_u32m1x5_m(vbool32_t mask,
                                            const uint32_t *base,
                                            vuint16mf2_t bindex, size_t vl) {
  return __riscv_vluxseg5ei16(mask, base, bindex, vl);
}

vuint64m1x5_t test_vluxseg5ei16_v_u64m1x5_m(vbool64_t mask,
                                            const uint64_t *base,
                                            vuint16mf4_t bindex, size_t vl) {
  return __riscv_vluxseg5ei16(mask, base, bindex, vl);
}
