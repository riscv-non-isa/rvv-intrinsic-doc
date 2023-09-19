// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -disable-O0-optnone \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

vint8m1_t test_vredand_vs_i8mf8_i8m1(vint8mf8_t vector, vint8m1_t scalar,
                                     size_t vl) {
  return __riscv_vredand_vs_i8mf8_i8m1(vector, scalar, vl);
}

vint8m1_t test_vredand_vs_i8mf4_i8m1(vint8mf4_t vector, vint8m1_t scalar,
                                     size_t vl) {
  return __riscv_vredand_vs_i8mf4_i8m1(vector, scalar, vl);
}

vint8m1_t test_vredand_vs_i8mf2_i8m1(vint8mf2_t vector, vint8m1_t scalar,
                                     size_t vl) {
  return __riscv_vredand_vs_i8mf2_i8m1(vector, scalar, vl);
}

vint8m1_t test_vredand_vs_i8m1_i8m1(vint8m1_t vector, vint8m1_t scalar,
                                    size_t vl) {
  return __riscv_vredand_vs_i8m1_i8m1(vector, scalar, vl);
}

vint8m1_t test_vredand_vs_i8m2_i8m1(vint8m2_t vector, vint8m1_t scalar,
                                    size_t vl) {
  return __riscv_vredand_vs_i8m2_i8m1(vector, scalar, vl);
}

vint8m1_t test_vredand_vs_i8m4_i8m1(vint8m4_t vector, vint8m1_t scalar,
                                    size_t vl) {
  return __riscv_vredand_vs_i8m4_i8m1(vector, scalar, vl);
}

vint8m1_t test_vredand_vs_i8m8_i8m1(vint8m8_t vector, vint8m1_t scalar,
                                    size_t vl) {
  return __riscv_vredand_vs_i8m8_i8m1(vector, scalar, vl);
}

vint16m1_t test_vredand_vs_i16mf4_i16m1(vint16mf4_t vector, vint16m1_t scalar,
                                        size_t vl) {
  return __riscv_vredand_vs_i16mf4_i16m1(vector, scalar, vl);
}

vint16m1_t test_vredand_vs_i16mf2_i16m1(vint16mf2_t vector, vint16m1_t scalar,
                                        size_t vl) {
  return __riscv_vredand_vs_i16mf2_i16m1(vector, scalar, vl);
}

vint16m1_t test_vredand_vs_i16m1_i16m1(vint16m1_t vector, vint16m1_t scalar,
                                       size_t vl) {
  return __riscv_vredand_vs_i16m1_i16m1(vector, scalar, vl);
}

vint16m1_t test_vredand_vs_i16m2_i16m1(vint16m2_t vector, vint16m1_t scalar,
                                       size_t vl) {
  return __riscv_vredand_vs_i16m2_i16m1(vector, scalar, vl);
}

vint16m1_t test_vredand_vs_i16m4_i16m1(vint16m4_t vector, vint16m1_t scalar,
                                       size_t vl) {
  return __riscv_vredand_vs_i16m4_i16m1(vector, scalar, vl);
}

vint16m1_t test_vredand_vs_i16m8_i16m1(vint16m8_t vector, vint16m1_t scalar,
                                       size_t vl) {
  return __riscv_vredand_vs_i16m8_i16m1(vector, scalar, vl);
}

vint32m1_t test_vredand_vs_i32mf2_i32m1(vint32mf2_t vector, vint32m1_t scalar,
                                        size_t vl) {
  return __riscv_vredand_vs_i32mf2_i32m1(vector, scalar, vl);
}

vint32m1_t test_vredand_vs_i32m1_i32m1(vint32m1_t vector, vint32m1_t scalar,
                                       size_t vl) {
  return __riscv_vredand_vs_i32m1_i32m1(vector, scalar, vl);
}

vint32m1_t test_vredand_vs_i32m2_i32m1(vint32m2_t vector, vint32m1_t scalar,
                                       size_t vl) {
  return __riscv_vredand_vs_i32m2_i32m1(vector, scalar, vl);
}

vint32m1_t test_vredand_vs_i32m4_i32m1(vint32m4_t vector, vint32m1_t scalar,
                                       size_t vl) {
  return __riscv_vredand_vs_i32m4_i32m1(vector, scalar, vl);
}

vint32m1_t test_vredand_vs_i32m8_i32m1(vint32m8_t vector, vint32m1_t scalar,
                                       size_t vl) {
  return __riscv_vredand_vs_i32m8_i32m1(vector, scalar, vl);
}

vint64m1_t test_vredand_vs_i64m1_i64m1(vint64m1_t vector, vint64m1_t scalar,
                                       size_t vl) {
  return __riscv_vredand_vs_i64m1_i64m1(vector, scalar, vl);
}

vint64m1_t test_vredand_vs_i64m2_i64m1(vint64m2_t vector, vint64m1_t scalar,
                                       size_t vl) {
  return __riscv_vredand_vs_i64m2_i64m1(vector, scalar, vl);
}

vint64m1_t test_vredand_vs_i64m4_i64m1(vint64m4_t vector, vint64m1_t scalar,
                                       size_t vl) {
  return __riscv_vredand_vs_i64m4_i64m1(vector, scalar, vl);
}

vint64m1_t test_vredand_vs_i64m8_i64m1(vint64m8_t vector, vint64m1_t scalar,
                                       size_t vl) {
  return __riscv_vredand_vs_i64m8_i64m1(vector, scalar, vl);
}

vuint8m1_t test_vredand_vs_u8mf8_u8m1(vuint8mf8_t vector, vuint8m1_t scalar,
                                      size_t vl) {
  return __riscv_vredand_vs_u8mf8_u8m1(vector, scalar, vl);
}

vuint8m1_t test_vredand_vs_u8mf4_u8m1(vuint8mf4_t vector, vuint8m1_t scalar,
                                      size_t vl) {
  return __riscv_vredand_vs_u8mf4_u8m1(vector, scalar, vl);
}

vuint8m1_t test_vredand_vs_u8mf2_u8m1(vuint8mf2_t vector, vuint8m1_t scalar,
                                      size_t vl) {
  return __riscv_vredand_vs_u8mf2_u8m1(vector, scalar, vl);
}

vuint8m1_t test_vredand_vs_u8m1_u8m1(vuint8m1_t vector, vuint8m1_t scalar,
                                     size_t vl) {
  return __riscv_vredand_vs_u8m1_u8m1(vector, scalar, vl);
}

vuint8m1_t test_vredand_vs_u8m2_u8m1(vuint8m2_t vector, vuint8m1_t scalar,
                                     size_t vl) {
  return __riscv_vredand_vs_u8m2_u8m1(vector, scalar, vl);
}

vuint8m1_t test_vredand_vs_u8m4_u8m1(vuint8m4_t vector, vuint8m1_t scalar,
                                     size_t vl) {
  return __riscv_vredand_vs_u8m4_u8m1(vector, scalar, vl);
}

vuint8m1_t test_vredand_vs_u8m8_u8m1(vuint8m8_t vector, vuint8m1_t scalar,
                                     size_t vl) {
  return __riscv_vredand_vs_u8m8_u8m1(vector, scalar, vl);
}

vuint16m1_t test_vredand_vs_u16mf4_u16m1(vuint16mf4_t vector,
                                         vuint16m1_t scalar, size_t vl) {
  return __riscv_vredand_vs_u16mf4_u16m1(vector, scalar, vl);
}

vuint16m1_t test_vredand_vs_u16mf2_u16m1(vuint16mf2_t vector,
                                         vuint16m1_t scalar, size_t vl) {
  return __riscv_vredand_vs_u16mf2_u16m1(vector, scalar, vl);
}

vuint16m1_t test_vredand_vs_u16m1_u16m1(vuint16m1_t vector, vuint16m1_t scalar,
                                        size_t vl) {
  return __riscv_vredand_vs_u16m1_u16m1(vector, scalar, vl);
}

vuint16m1_t test_vredand_vs_u16m2_u16m1(vuint16m2_t vector, vuint16m1_t scalar,
                                        size_t vl) {
  return __riscv_vredand_vs_u16m2_u16m1(vector, scalar, vl);
}

vuint16m1_t test_vredand_vs_u16m4_u16m1(vuint16m4_t vector, vuint16m1_t scalar,
                                        size_t vl) {
  return __riscv_vredand_vs_u16m4_u16m1(vector, scalar, vl);
}

vuint16m1_t test_vredand_vs_u16m8_u16m1(vuint16m8_t vector, vuint16m1_t scalar,
                                        size_t vl) {
  return __riscv_vredand_vs_u16m8_u16m1(vector, scalar, vl);
}

vuint32m1_t test_vredand_vs_u32mf2_u32m1(vuint32mf2_t vector,
                                         vuint32m1_t scalar, size_t vl) {
  return __riscv_vredand_vs_u32mf2_u32m1(vector, scalar, vl);
}

vuint32m1_t test_vredand_vs_u32m1_u32m1(vuint32m1_t vector, vuint32m1_t scalar,
                                        size_t vl) {
  return __riscv_vredand_vs_u32m1_u32m1(vector, scalar, vl);
}

vuint32m1_t test_vredand_vs_u32m2_u32m1(vuint32m2_t vector, vuint32m1_t scalar,
                                        size_t vl) {
  return __riscv_vredand_vs_u32m2_u32m1(vector, scalar, vl);
}

vuint32m1_t test_vredand_vs_u32m4_u32m1(vuint32m4_t vector, vuint32m1_t scalar,
                                        size_t vl) {
  return __riscv_vredand_vs_u32m4_u32m1(vector, scalar, vl);
}

vuint32m1_t test_vredand_vs_u32m8_u32m1(vuint32m8_t vector, vuint32m1_t scalar,
                                        size_t vl) {
  return __riscv_vredand_vs_u32m8_u32m1(vector, scalar, vl);
}

vuint64m1_t test_vredand_vs_u64m1_u64m1(vuint64m1_t vector, vuint64m1_t scalar,
                                        size_t vl) {
  return __riscv_vredand_vs_u64m1_u64m1(vector, scalar, vl);
}

vuint64m1_t test_vredand_vs_u64m2_u64m1(vuint64m2_t vector, vuint64m1_t scalar,
                                        size_t vl) {
  return __riscv_vredand_vs_u64m2_u64m1(vector, scalar, vl);
}

vuint64m1_t test_vredand_vs_u64m4_u64m1(vuint64m4_t vector, vuint64m1_t scalar,
                                        size_t vl) {
  return __riscv_vredand_vs_u64m4_u64m1(vector, scalar, vl);
}

vuint64m1_t test_vredand_vs_u64m8_u64m1(vuint64m8_t vector, vuint64m1_t scalar,
                                        size_t vl) {
  return __riscv_vredand_vs_u64m8_u64m1(vector, scalar, vl);
}

vint8m1_t test_vredand_vs_i8mf8_i8m1_m(vbool64_t mask, vint8mf8_t vector,
                                       vint8m1_t scalar, size_t vl) {
  return __riscv_vredand_vs_i8mf8_i8m1_m(mask, vector, scalar, vl);
}

vint8m1_t test_vredand_vs_i8mf4_i8m1_m(vbool32_t mask, vint8mf4_t vector,
                                       vint8m1_t scalar, size_t vl) {
  return __riscv_vredand_vs_i8mf4_i8m1_m(mask, vector, scalar, vl);
}

vint8m1_t test_vredand_vs_i8mf2_i8m1_m(vbool16_t mask, vint8mf2_t vector,
                                       vint8m1_t scalar, size_t vl) {
  return __riscv_vredand_vs_i8mf2_i8m1_m(mask, vector, scalar, vl);
}

vint8m1_t test_vredand_vs_i8m1_i8m1_m(vbool8_t mask, vint8m1_t vector,
                                      vint8m1_t scalar, size_t vl) {
  return __riscv_vredand_vs_i8m1_i8m1_m(mask, vector, scalar, vl);
}

vint8m1_t test_vredand_vs_i8m2_i8m1_m(vbool4_t mask, vint8m2_t vector,
                                      vint8m1_t scalar, size_t vl) {
  return __riscv_vredand_vs_i8m2_i8m1_m(mask, vector, scalar, vl);
}

vint8m1_t test_vredand_vs_i8m4_i8m1_m(vbool2_t mask, vint8m4_t vector,
                                      vint8m1_t scalar, size_t vl) {
  return __riscv_vredand_vs_i8m4_i8m1_m(mask, vector, scalar, vl);
}

vint8m1_t test_vredand_vs_i8m8_i8m1_m(vbool1_t mask, vint8m8_t vector,
                                      vint8m1_t scalar, size_t vl) {
  return __riscv_vredand_vs_i8m8_i8m1_m(mask, vector, scalar, vl);
}

vint16m1_t test_vredand_vs_i16mf4_i16m1_m(vbool64_t mask, vint16mf4_t vector,
                                          vint16m1_t scalar, size_t vl) {
  return __riscv_vredand_vs_i16mf4_i16m1_m(mask, vector, scalar, vl);
}

vint16m1_t test_vredand_vs_i16mf2_i16m1_m(vbool32_t mask, vint16mf2_t vector,
                                          vint16m1_t scalar, size_t vl) {
  return __riscv_vredand_vs_i16mf2_i16m1_m(mask, vector, scalar, vl);
}

vint16m1_t test_vredand_vs_i16m1_i16m1_m(vbool16_t mask, vint16m1_t vector,
                                         vint16m1_t scalar, size_t vl) {
  return __riscv_vredand_vs_i16m1_i16m1_m(mask, vector, scalar, vl);
}

vint16m1_t test_vredand_vs_i16m2_i16m1_m(vbool8_t mask, vint16m2_t vector,
                                         vint16m1_t scalar, size_t vl) {
  return __riscv_vredand_vs_i16m2_i16m1_m(mask, vector, scalar, vl);
}

vint16m1_t test_vredand_vs_i16m4_i16m1_m(vbool4_t mask, vint16m4_t vector,
                                         vint16m1_t scalar, size_t vl) {
  return __riscv_vredand_vs_i16m4_i16m1_m(mask, vector, scalar, vl);
}

vint16m1_t test_vredand_vs_i16m8_i16m1_m(vbool2_t mask, vint16m8_t vector,
                                         vint16m1_t scalar, size_t vl) {
  return __riscv_vredand_vs_i16m8_i16m1_m(mask, vector, scalar, vl);
}

vint32m1_t test_vredand_vs_i32mf2_i32m1_m(vbool64_t mask, vint32mf2_t vector,
                                          vint32m1_t scalar, size_t vl) {
  return __riscv_vredand_vs_i32mf2_i32m1_m(mask, vector, scalar, vl);
}

vint32m1_t test_vredand_vs_i32m1_i32m1_m(vbool32_t mask, vint32m1_t vector,
                                         vint32m1_t scalar, size_t vl) {
  return __riscv_vredand_vs_i32m1_i32m1_m(mask, vector, scalar, vl);
}

vint32m1_t test_vredand_vs_i32m2_i32m1_m(vbool16_t mask, vint32m2_t vector,
                                         vint32m1_t scalar, size_t vl) {
  return __riscv_vredand_vs_i32m2_i32m1_m(mask, vector, scalar, vl);
}

vint32m1_t test_vredand_vs_i32m4_i32m1_m(vbool8_t mask, vint32m4_t vector,
                                         vint32m1_t scalar, size_t vl) {
  return __riscv_vredand_vs_i32m4_i32m1_m(mask, vector, scalar, vl);
}

vint32m1_t test_vredand_vs_i32m8_i32m1_m(vbool4_t mask, vint32m8_t vector,
                                         vint32m1_t scalar, size_t vl) {
  return __riscv_vredand_vs_i32m8_i32m1_m(mask, vector, scalar, vl);
}

vint64m1_t test_vredand_vs_i64m1_i64m1_m(vbool64_t mask, vint64m1_t vector,
                                         vint64m1_t scalar, size_t vl) {
  return __riscv_vredand_vs_i64m1_i64m1_m(mask, vector, scalar, vl);
}

vint64m1_t test_vredand_vs_i64m2_i64m1_m(vbool32_t mask, vint64m2_t vector,
                                         vint64m1_t scalar, size_t vl) {
  return __riscv_vredand_vs_i64m2_i64m1_m(mask, vector, scalar, vl);
}

vint64m1_t test_vredand_vs_i64m4_i64m1_m(vbool16_t mask, vint64m4_t vector,
                                         vint64m1_t scalar, size_t vl) {
  return __riscv_vredand_vs_i64m4_i64m1_m(mask, vector, scalar, vl);
}

vint64m1_t test_vredand_vs_i64m8_i64m1_m(vbool8_t mask, vint64m8_t vector,
                                         vint64m1_t scalar, size_t vl) {
  return __riscv_vredand_vs_i64m8_i64m1_m(mask, vector, scalar, vl);
}

vuint8m1_t test_vredand_vs_u8mf8_u8m1_m(vbool64_t mask, vuint8mf8_t vector,
                                        vuint8m1_t scalar, size_t vl) {
  return __riscv_vredand_vs_u8mf8_u8m1_m(mask, vector, scalar, vl);
}

vuint8m1_t test_vredand_vs_u8mf4_u8m1_m(vbool32_t mask, vuint8mf4_t vector,
                                        vuint8m1_t scalar, size_t vl) {
  return __riscv_vredand_vs_u8mf4_u8m1_m(mask, vector, scalar, vl);
}

vuint8m1_t test_vredand_vs_u8mf2_u8m1_m(vbool16_t mask, vuint8mf2_t vector,
                                        vuint8m1_t scalar, size_t vl) {
  return __riscv_vredand_vs_u8mf2_u8m1_m(mask, vector, scalar, vl);
}

vuint8m1_t test_vredand_vs_u8m1_u8m1_m(vbool8_t mask, vuint8m1_t vector,
                                       vuint8m1_t scalar, size_t vl) {
  return __riscv_vredand_vs_u8m1_u8m1_m(mask, vector, scalar, vl);
}

vuint8m1_t test_vredand_vs_u8m2_u8m1_m(vbool4_t mask, vuint8m2_t vector,
                                       vuint8m1_t scalar, size_t vl) {
  return __riscv_vredand_vs_u8m2_u8m1_m(mask, vector, scalar, vl);
}

vuint8m1_t test_vredand_vs_u8m4_u8m1_m(vbool2_t mask, vuint8m4_t vector,
                                       vuint8m1_t scalar, size_t vl) {
  return __riscv_vredand_vs_u8m4_u8m1_m(mask, vector, scalar, vl);
}

vuint8m1_t test_vredand_vs_u8m8_u8m1_m(vbool1_t mask, vuint8m8_t vector,
                                       vuint8m1_t scalar, size_t vl) {
  return __riscv_vredand_vs_u8m8_u8m1_m(mask, vector, scalar, vl);
}

vuint16m1_t test_vredand_vs_u16mf4_u16m1_m(vbool64_t mask, vuint16mf4_t vector,
                                           vuint16m1_t scalar, size_t vl) {
  return __riscv_vredand_vs_u16mf4_u16m1_m(mask, vector, scalar, vl);
}

vuint16m1_t test_vredand_vs_u16mf2_u16m1_m(vbool32_t mask, vuint16mf2_t vector,
                                           vuint16m1_t scalar, size_t vl) {
  return __riscv_vredand_vs_u16mf2_u16m1_m(mask, vector, scalar, vl);
}

vuint16m1_t test_vredand_vs_u16m1_u16m1_m(vbool16_t mask, vuint16m1_t vector,
                                          vuint16m1_t scalar, size_t vl) {
  return __riscv_vredand_vs_u16m1_u16m1_m(mask, vector, scalar, vl);
}

vuint16m1_t test_vredand_vs_u16m2_u16m1_m(vbool8_t mask, vuint16m2_t vector,
                                          vuint16m1_t scalar, size_t vl) {
  return __riscv_vredand_vs_u16m2_u16m1_m(mask, vector, scalar, vl);
}

vuint16m1_t test_vredand_vs_u16m4_u16m1_m(vbool4_t mask, vuint16m4_t vector,
                                          vuint16m1_t scalar, size_t vl) {
  return __riscv_vredand_vs_u16m4_u16m1_m(mask, vector, scalar, vl);
}

vuint16m1_t test_vredand_vs_u16m8_u16m1_m(vbool2_t mask, vuint16m8_t vector,
                                          vuint16m1_t scalar, size_t vl) {
  return __riscv_vredand_vs_u16m8_u16m1_m(mask, vector, scalar, vl);
}

vuint32m1_t test_vredand_vs_u32mf2_u32m1_m(vbool64_t mask, vuint32mf2_t vector,
                                           vuint32m1_t scalar, size_t vl) {
  return __riscv_vredand_vs_u32mf2_u32m1_m(mask, vector, scalar, vl);
}

vuint32m1_t test_vredand_vs_u32m1_u32m1_m(vbool32_t mask, vuint32m1_t vector,
                                          vuint32m1_t scalar, size_t vl) {
  return __riscv_vredand_vs_u32m1_u32m1_m(mask, vector, scalar, vl);
}

vuint32m1_t test_vredand_vs_u32m2_u32m1_m(vbool16_t mask, vuint32m2_t vector,
                                          vuint32m1_t scalar, size_t vl) {
  return __riscv_vredand_vs_u32m2_u32m1_m(mask, vector, scalar, vl);
}

vuint32m1_t test_vredand_vs_u32m4_u32m1_m(vbool8_t mask, vuint32m4_t vector,
                                          vuint32m1_t scalar, size_t vl) {
  return __riscv_vredand_vs_u32m4_u32m1_m(mask, vector, scalar, vl);
}

vuint32m1_t test_vredand_vs_u32m8_u32m1_m(vbool4_t mask, vuint32m8_t vector,
                                          vuint32m1_t scalar, size_t vl) {
  return __riscv_vredand_vs_u32m8_u32m1_m(mask, vector, scalar, vl);
}

vuint64m1_t test_vredand_vs_u64m1_u64m1_m(vbool64_t mask, vuint64m1_t vector,
                                          vuint64m1_t scalar, size_t vl) {
  return __riscv_vredand_vs_u64m1_u64m1_m(mask, vector, scalar, vl);
}

vuint64m1_t test_vredand_vs_u64m2_u64m1_m(vbool32_t mask, vuint64m2_t vector,
                                          vuint64m1_t scalar, size_t vl) {
  return __riscv_vredand_vs_u64m2_u64m1_m(mask, vector, scalar, vl);
}

vuint64m1_t test_vredand_vs_u64m4_u64m1_m(vbool16_t mask, vuint64m4_t vector,
                                          vuint64m1_t scalar, size_t vl) {
  return __riscv_vredand_vs_u64m4_u64m1_m(mask, vector, scalar, vl);
}

vuint64m1_t test_vredand_vs_u64m8_u64m1_m(vbool8_t mask, vuint64m8_t vector,
                                          vuint64m1_t scalar, size_t vl) {
  return __riscv_vredand_vs_u64m8_u64m1_m(mask, vector, scalar, vl);
}
