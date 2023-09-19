// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -target-feature +zfh \
// RUN:   -target-feature +experimental-zvfh -disable-O0-optnone  \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

vint16mf4_t test_vfcvt_rtz_x_f_v_i16mf4(vfloat16mf4_t src, size_t vl) {
  return __riscv_vfcvt_rtz_x_f_v_i16mf4(src, vl);
}

vint16mf2_t test_vfcvt_rtz_x_f_v_i16mf2(vfloat16mf2_t src, size_t vl) {
  return __riscv_vfcvt_rtz_x_f_v_i16mf2(src, vl);
}

vint16m1_t test_vfcvt_rtz_x_f_v_i16m1(vfloat16m1_t src, size_t vl) {
  return __riscv_vfcvt_rtz_x_f_v_i16m1(src, vl);
}

vint16m2_t test_vfcvt_rtz_x_f_v_i16m2(vfloat16m2_t src, size_t vl) {
  return __riscv_vfcvt_rtz_x_f_v_i16m2(src, vl);
}

vint16m4_t test_vfcvt_rtz_x_f_v_i16m4(vfloat16m4_t src, size_t vl) {
  return __riscv_vfcvt_rtz_x_f_v_i16m4(src, vl);
}

vint16m8_t test_vfcvt_rtz_x_f_v_i16m8(vfloat16m8_t src, size_t vl) {
  return __riscv_vfcvt_rtz_x_f_v_i16m8(src, vl);
}

vuint16mf4_t test_vfcvt_rtz_xu_f_v_u16mf4(vfloat16mf4_t src, size_t vl) {
  return __riscv_vfcvt_rtz_xu_f_v_u16mf4(src, vl);
}

vuint16mf2_t test_vfcvt_rtz_xu_f_v_u16mf2(vfloat16mf2_t src, size_t vl) {
  return __riscv_vfcvt_rtz_xu_f_v_u16mf2(src, vl);
}

vuint16m1_t test_vfcvt_rtz_xu_f_v_u16m1(vfloat16m1_t src, size_t vl) {
  return __riscv_vfcvt_rtz_xu_f_v_u16m1(src, vl);
}

vuint16m2_t test_vfcvt_rtz_xu_f_v_u16m2(vfloat16m2_t src, size_t vl) {
  return __riscv_vfcvt_rtz_xu_f_v_u16m2(src, vl);
}

vuint16m4_t test_vfcvt_rtz_xu_f_v_u16m4(vfloat16m4_t src, size_t vl) {
  return __riscv_vfcvt_rtz_xu_f_v_u16m4(src, vl);
}

vuint16m8_t test_vfcvt_rtz_xu_f_v_u16m8(vfloat16m8_t src, size_t vl) {
  return __riscv_vfcvt_rtz_xu_f_v_u16m8(src, vl);
}

vint32mf2_t test_vfcvt_rtz_x_f_v_i32mf2(vfloat32mf2_t src, size_t vl) {
  return __riscv_vfcvt_rtz_x_f_v_i32mf2(src, vl);
}

vint32m1_t test_vfcvt_rtz_x_f_v_i32m1(vfloat32m1_t src, size_t vl) {
  return __riscv_vfcvt_rtz_x_f_v_i32m1(src, vl);
}

vint32m2_t test_vfcvt_rtz_x_f_v_i32m2(vfloat32m2_t src, size_t vl) {
  return __riscv_vfcvt_rtz_x_f_v_i32m2(src, vl);
}

vint32m4_t test_vfcvt_rtz_x_f_v_i32m4(vfloat32m4_t src, size_t vl) {
  return __riscv_vfcvt_rtz_x_f_v_i32m4(src, vl);
}

vint32m8_t test_vfcvt_rtz_x_f_v_i32m8(vfloat32m8_t src, size_t vl) {
  return __riscv_vfcvt_rtz_x_f_v_i32m8(src, vl);
}

vuint32mf2_t test_vfcvt_rtz_xu_f_v_u32mf2(vfloat32mf2_t src, size_t vl) {
  return __riscv_vfcvt_rtz_xu_f_v_u32mf2(src, vl);
}

vuint32m1_t test_vfcvt_rtz_xu_f_v_u32m1(vfloat32m1_t src, size_t vl) {
  return __riscv_vfcvt_rtz_xu_f_v_u32m1(src, vl);
}

vuint32m2_t test_vfcvt_rtz_xu_f_v_u32m2(vfloat32m2_t src, size_t vl) {
  return __riscv_vfcvt_rtz_xu_f_v_u32m2(src, vl);
}

vuint32m4_t test_vfcvt_rtz_xu_f_v_u32m4(vfloat32m4_t src, size_t vl) {
  return __riscv_vfcvt_rtz_xu_f_v_u32m4(src, vl);
}

vuint32m8_t test_vfcvt_rtz_xu_f_v_u32m8(vfloat32m8_t src, size_t vl) {
  return __riscv_vfcvt_rtz_xu_f_v_u32m8(src, vl);
}

vint64m1_t test_vfcvt_rtz_x_f_v_i64m1(vfloat64m1_t src, size_t vl) {
  return __riscv_vfcvt_rtz_x_f_v_i64m1(src, vl);
}

vint64m2_t test_vfcvt_rtz_x_f_v_i64m2(vfloat64m2_t src, size_t vl) {
  return __riscv_vfcvt_rtz_x_f_v_i64m2(src, vl);
}

vint64m4_t test_vfcvt_rtz_x_f_v_i64m4(vfloat64m4_t src, size_t vl) {
  return __riscv_vfcvt_rtz_x_f_v_i64m4(src, vl);
}

vint64m8_t test_vfcvt_rtz_x_f_v_i64m8(vfloat64m8_t src, size_t vl) {
  return __riscv_vfcvt_rtz_x_f_v_i64m8(src, vl);
}

vuint64m1_t test_vfcvt_rtz_xu_f_v_u64m1(vfloat64m1_t src, size_t vl) {
  return __riscv_vfcvt_rtz_xu_f_v_u64m1(src, vl);
}

vuint64m2_t test_vfcvt_rtz_xu_f_v_u64m2(vfloat64m2_t src, size_t vl) {
  return __riscv_vfcvt_rtz_xu_f_v_u64m2(src, vl);
}

vuint64m4_t test_vfcvt_rtz_xu_f_v_u64m4(vfloat64m4_t src, size_t vl) {
  return __riscv_vfcvt_rtz_xu_f_v_u64m4(src, vl);
}

vuint64m8_t test_vfcvt_rtz_xu_f_v_u64m8(vfloat64m8_t src, size_t vl) {
  return __riscv_vfcvt_rtz_xu_f_v_u64m8(src, vl);
}

vint16mf4_t test_vfcvt_rtz_x_f_v_i16mf4_m(vbool64_t mask, vfloat16mf4_t src,
                                          size_t vl) {
  return __riscv_vfcvt_rtz_x_f_v_i16mf4_m(mask, src, vl);
}

vint16mf2_t test_vfcvt_rtz_x_f_v_i16mf2_m(vbool32_t mask, vfloat16mf2_t src,
                                          size_t vl) {
  return __riscv_vfcvt_rtz_x_f_v_i16mf2_m(mask, src, vl);
}

vint16m1_t test_vfcvt_rtz_x_f_v_i16m1_m(vbool16_t mask, vfloat16m1_t src,
                                        size_t vl) {
  return __riscv_vfcvt_rtz_x_f_v_i16m1_m(mask, src, vl);
}

vint16m2_t test_vfcvt_rtz_x_f_v_i16m2_m(vbool8_t mask, vfloat16m2_t src,
                                        size_t vl) {
  return __riscv_vfcvt_rtz_x_f_v_i16m2_m(mask, src, vl);
}

vint16m4_t test_vfcvt_rtz_x_f_v_i16m4_m(vbool4_t mask, vfloat16m4_t src,
                                        size_t vl) {
  return __riscv_vfcvt_rtz_x_f_v_i16m4_m(mask, src, vl);
}

vint16m8_t test_vfcvt_rtz_x_f_v_i16m8_m(vbool2_t mask, vfloat16m8_t src,
                                        size_t vl) {
  return __riscv_vfcvt_rtz_x_f_v_i16m8_m(mask, src, vl);
}

vuint16mf4_t test_vfcvt_rtz_xu_f_v_u16mf4_m(vbool64_t mask, vfloat16mf4_t src,
                                            size_t vl) {
  return __riscv_vfcvt_rtz_xu_f_v_u16mf4_m(mask, src, vl);
}

vuint16mf2_t test_vfcvt_rtz_xu_f_v_u16mf2_m(vbool32_t mask, vfloat16mf2_t src,
                                            size_t vl) {
  return __riscv_vfcvt_rtz_xu_f_v_u16mf2_m(mask, src, vl);
}

vuint16m1_t test_vfcvt_rtz_xu_f_v_u16m1_m(vbool16_t mask, vfloat16m1_t src,
                                          size_t vl) {
  return __riscv_vfcvt_rtz_xu_f_v_u16m1_m(mask, src, vl);
}

vuint16m2_t test_vfcvt_rtz_xu_f_v_u16m2_m(vbool8_t mask, vfloat16m2_t src,
                                          size_t vl) {
  return __riscv_vfcvt_rtz_xu_f_v_u16m2_m(mask, src, vl);
}

vuint16m4_t test_vfcvt_rtz_xu_f_v_u16m4_m(vbool4_t mask, vfloat16m4_t src,
                                          size_t vl) {
  return __riscv_vfcvt_rtz_xu_f_v_u16m4_m(mask, src, vl);
}

vuint16m8_t test_vfcvt_rtz_xu_f_v_u16m8_m(vbool2_t mask, vfloat16m8_t src,
                                          size_t vl) {
  return __riscv_vfcvt_rtz_xu_f_v_u16m8_m(mask, src, vl);
}

vint32mf2_t test_vfcvt_rtz_x_f_v_i32mf2_m(vbool64_t mask, vfloat32mf2_t src,
                                          size_t vl) {
  return __riscv_vfcvt_rtz_x_f_v_i32mf2_m(mask, src, vl);
}

vint32m1_t test_vfcvt_rtz_x_f_v_i32m1_m(vbool32_t mask, vfloat32m1_t src,
                                        size_t vl) {
  return __riscv_vfcvt_rtz_x_f_v_i32m1_m(mask, src, vl);
}

vint32m2_t test_vfcvt_rtz_x_f_v_i32m2_m(vbool16_t mask, vfloat32m2_t src,
                                        size_t vl) {
  return __riscv_vfcvt_rtz_x_f_v_i32m2_m(mask, src, vl);
}

vint32m4_t test_vfcvt_rtz_x_f_v_i32m4_m(vbool8_t mask, vfloat32m4_t src,
                                        size_t vl) {
  return __riscv_vfcvt_rtz_x_f_v_i32m4_m(mask, src, vl);
}

vint32m8_t test_vfcvt_rtz_x_f_v_i32m8_m(vbool4_t mask, vfloat32m8_t src,
                                        size_t vl) {
  return __riscv_vfcvt_rtz_x_f_v_i32m8_m(mask, src, vl);
}

vuint32mf2_t test_vfcvt_rtz_xu_f_v_u32mf2_m(vbool64_t mask, vfloat32mf2_t src,
                                            size_t vl) {
  return __riscv_vfcvt_rtz_xu_f_v_u32mf2_m(mask, src, vl);
}

vuint32m1_t test_vfcvt_rtz_xu_f_v_u32m1_m(vbool32_t mask, vfloat32m1_t src,
                                          size_t vl) {
  return __riscv_vfcvt_rtz_xu_f_v_u32m1_m(mask, src, vl);
}

vuint32m2_t test_vfcvt_rtz_xu_f_v_u32m2_m(vbool16_t mask, vfloat32m2_t src,
                                          size_t vl) {
  return __riscv_vfcvt_rtz_xu_f_v_u32m2_m(mask, src, vl);
}

vuint32m4_t test_vfcvt_rtz_xu_f_v_u32m4_m(vbool8_t mask, vfloat32m4_t src,
                                          size_t vl) {
  return __riscv_vfcvt_rtz_xu_f_v_u32m4_m(mask, src, vl);
}

vuint32m8_t test_vfcvt_rtz_xu_f_v_u32m8_m(vbool4_t mask, vfloat32m8_t src,
                                          size_t vl) {
  return __riscv_vfcvt_rtz_xu_f_v_u32m8_m(mask, src, vl);
}

vint64m1_t test_vfcvt_rtz_x_f_v_i64m1_m(vbool64_t mask, vfloat64m1_t src,
                                        size_t vl) {
  return __riscv_vfcvt_rtz_x_f_v_i64m1_m(mask, src, vl);
}

vint64m2_t test_vfcvt_rtz_x_f_v_i64m2_m(vbool32_t mask, vfloat64m2_t src,
                                        size_t vl) {
  return __riscv_vfcvt_rtz_x_f_v_i64m2_m(mask, src, vl);
}

vint64m4_t test_vfcvt_rtz_x_f_v_i64m4_m(vbool16_t mask, vfloat64m4_t src,
                                        size_t vl) {
  return __riscv_vfcvt_rtz_x_f_v_i64m4_m(mask, src, vl);
}

vint64m8_t test_vfcvt_rtz_x_f_v_i64m8_m(vbool8_t mask, vfloat64m8_t src,
                                        size_t vl) {
  return __riscv_vfcvt_rtz_x_f_v_i64m8_m(mask, src, vl);
}

vuint64m1_t test_vfcvt_rtz_xu_f_v_u64m1_m(vbool64_t mask, vfloat64m1_t src,
                                          size_t vl) {
  return __riscv_vfcvt_rtz_xu_f_v_u64m1_m(mask, src, vl);
}

vuint64m2_t test_vfcvt_rtz_xu_f_v_u64m2_m(vbool32_t mask, vfloat64m2_t src,
                                          size_t vl) {
  return __riscv_vfcvt_rtz_xu_f_v_u64m2_m(mask, src, vl);
}

vuint64m4_t test_vfcvt_rtz_xu_f_v_u64m4_m(vbool16_t mask, vfloat64m4_t src,
                                          size_t vl) {
  return __riscv_vfcvt_rtz_xu_f_v_u64m4_m(mask, src, vl);
}

vuint64m8_t test_vfcvt_rtz_xu_f_v_u64m8_m(vbool8_t mask, vfloat64m8_t src,
                                          size_t vl) {
  return __riscv_vfcvt_rtz_xu_f_v_u64m8_m(mask, src, vl);
}
