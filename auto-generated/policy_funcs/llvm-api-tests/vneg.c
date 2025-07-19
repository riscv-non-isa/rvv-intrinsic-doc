// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -target-feature +zfh \
// RUN:   -target-feature +zvfh -disable-O0-optnone \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

vint8mf8_t test_vneg_v_i8mf8_tu(vint8mf8_t vd, vint8mf8_t vs, size_t vl) {
  return __riscv_vneg_v_i8mf8_tu(vd, vs, vl);
}

vint8mf4_t test_vneg_v_i8mf4_tu(vint8mf4_t vd, vint8mf4_t vs, size_t vl) {
  return __riscv_vneg_v_i8mf4_tu(vd, vs, vl);
}

vint8mf2_t test_vneg_v_i8mf2_tu(vint8mf2_t vd, vint8mf2_t vs, size_t vl) {
  return __riscv_vneg_v_i8mf2_tu(vd, vs, vl);
}

vint8m1_t test_vneg_v_i8m1_tu(vint8m1_t vd, vint8m1_t vs, size_t vl) {
  return __riscv_vneg_v_i8m1_tu(vd, vs, vl);
}

vint8m2_t test_vneg_v_i8m2_tu(vint8m2_t vd, vint8m2_t vs, size_t vl) {
  return __riscv_vneg_v_i8m2_tu(vd, vs, vl);
}

vint8m4_t test_vneg_v_i8m4_tu(vint8m4_t vd, vint8m4_t vs, size_t vl) {
  return __riscv_vneg_v_i8m4_tu(vd, vs, vl);
}

vint8m8_t test_vneg_v_i8m8_tu(vint8m8_t vd, vint8m8_t vs, size_t vl) {
  return __riscv_vneg_v_i8m8_tu(vd, vs, vl);
}

vint16mf4_t test_vneg_v_i16mf4_tu(vint16mf4_t vd, vint16mf4_t vs, size_t vl) {
  return __riscv_vneg_v_i16mf4_tu(vd, vs, vl);
}

vint16mf2_t test_vneg_v_i16mf2_tu(vint16mf2_t vd, vint16mf2_t vs, size_t vl) {
  return __riscv_vneg_v_i16mf2_tu(vd, vs, vl);
}

vint16m1_t test_vneg_v_i16m1_tu(vint16m1_t vd, vint16m1_t vs, size_t vl) {
  return __riscv_vneg_v_i16m1_tu(vd, vs, vl);
}

vint16m2_t test_vneg_v_i16m2_tu(vint16m2_t vd, vint16m2_t vs, size_t vl) {
  return __riscv_vneg_v_i16m2_tu(vd, vs, vl);
}

vint16m4_t test_vneg_v_i16m4_tu(vint16m4_t vd, vint16m4_t vs, size_t vl) {
  return __riscv_vneg_v_i16m4_tu(vd, vs, vl);
}

vint16m8_t test_vneg_v_i16m8_tu(vint16m8_t vd, vint16m8_t vs, size_t vl) {
  return __riscv_vneg_v_i16m8_tu(vd, vs, vl);
}

vint32mf2_t test_vneg_v_i32mf2_tu(vint32mf2_t vd, vint32mf2_t vs, size_t vl) {
  return __riscv_vneg_v_i32mf2_tu(vd, vs, vl);
}

vint32m1_t test_vneg_v_i32m1_tu(vint32m1_t vd, vint32m1_t vs, size_t vl) {
  return __riscv_vneg_v_i32m1_tu(vd, vs, vl);
}

vint32m2_t test_vneg_v_i32m2_tu(vint32m2_t vd, vint32m2_t vs, size_t vl) {
  return __riscv_vneg_v_i32m2_tu(vd, vs, vl);
}

vint32m4_t test_vneg_v_i32m4_tu(vint32m4_t vd, vint32m4_t vs, size_t vl) {
  return __riscv_vneg_v_i32m4_tu(vd, vs, vl);
}

vint32m8_t test_vneg_v_i32m8_tu(vint32m8_t vd, vint32m8_t vs, size_t vl) {
  return __riscv_vneg_v_i32m8_tu(vd, vs, vl);
}

vint64m1_t test_vneg_v_i64m1_tu(vint64m1_t vd, vint64m1_t vs, size_t vl) {
  return __riscv_vneg_v_i64m1_tu(vd, vs, vl);
}

vint64m2_t test_vneg_v_i64m2_tu(vint64m2_t vd, vint64m2_t vs, size_t vl) {
  return __riscv_vneg_v_i64m2_tu(vd, vs, vl);
}

vint64m4_t test_vneg_v_i64m4_tu(vint64m4_t vd, vint64m4_t vs, size_t vl) {
  return __riscv_vneg_v_i64m4_tu(vd, vs, vl);
}

vint64m8_t test_vneg_v_i64m8_tu(vint64m8_t vd, vint64m8_t vs, size_t vl) {
  return __riscv_vneg_v_i64m8_tu(vd, vs, vl);
}

vint8mf8_t test_vneg_v_i8mf8_tum(vbool64_t vm, vint8mf8_t vd, vint8mf8_t vs,
                                 size_t vl) {
  return __riscv_vneg_v_i8mf8_tum(vm, vd, vs, vl);
}

vint8mf4_t test_vneg_v_i8mf4_tum(vbool32_t vm, vint8mf4_t vd, vint8mf4_t vs,
                                 size_t vl) {
  return __riscv_vneg_v_i8mf4_tum(vm, vd, vs, vl);
}

vint8mf2_t test_vneg_v_i8mf2_tum(vbool16_t vm, vint8mf2_t vd, vint8mf2_t vs,
                                 size_t vl) {
  return __riscv_vneg_v_i8mf2_tum(vm, vd, vs, vl);
}

vint8m1_t test_vneg_v_i8m1_tum(vbool8_t vm, vint8m1_t vd, vint8m1_t vs,
                               size_t vl) {
  return __riscv_vneg_v_i8m1_tum(vm, vd, vs, vl);
}

vint8m2_t test_vneg_v_i8m2_tum(vbool4_t vm, vint8m2_t vd, vint8m2_t vs,
                               size_t vl) {
  return __riscv_vneg_v_i8m2_tum(vm, vd, vs, vl);
}

vint8m4_t test_vneg_v_i8m4_tum(vbool2_t vm, vint8m4_t vd, vint8m4_t vs,
                               size_t vl) {
  return __riscv_vneg_v_i8m4_tum(vm, vd, vs, vl);
}

vint8m8_t test_vneg_v_i8m8_tum(vbool1_t vm, vint8m8_t vd, vint8m8_t vs,
                               size_t vl) {
  return __riscv_vneg_v_i8m8_tum(vm, vd, vs, vl);
}

vint16mf4_t test_vneg_v_i16mf4_tum(vbool64_t vm, vint16mf4_t vd, vint16mf4_t vs,
                                   size_t vl) {
  return __riscv_vneg_v_i16mf4_tum(vm, vd, vs, vl);
}

vint16mf2_t test_vneg_v_i16mf2_tum(vbool32_t vm, vint16mf2_t vd, vint16mf2_t vs,
                                   size_t vl) {
  return __riscv_vneg_v_i16mf2_tum(vm, vd, vs, vl);
}

vint16m1_t test_vneg_v_i16m1_tum(vbool16_t vm, vint16m1_t vd, vint16m1_t vs,
                                 size_t vl) {
  return __riscv_vneg_v_i16m1_tum(vm, vd, vs, vl);
}

vint16m2_t test_vneg_v_i16m2_tum(vbool8_t vm, vint16m2_t vd, vint16m2_t vs,
                                 size_t vl) {
  return __riscv_vneg_v_i16m2_tum(vm, vd, vs, vl);
}

vint16m4_t test_vneg_v_i16m4_tum(vbool4_t vm, vint16m4_t vd, vint16m4_t vs,
                                 size_t vl) {
  return __riscv_vneg_v_i16m4_tum(vm, vd, vs, vl);
}

vint16m8_t test_vneg_v_i16m8_tum(vbool2_t vm, vint16m8_t vd, vint16m8_t vs,
                                 size_t vl) {
  return __riscv_vneg_v_i16m8_tum(vm, vd, vs, vl);
}

vint32mf2_t test_vneg_v_i32mf2_tum(vbool64_t vm, vint32mf2_t vd, vint32mf2_t vs,
                                   size_t vl) {
  return __riscv_vneg_v_i32mf2_tum(vm, vd, vs, vl);
}

vint32m1_t test_vneg_v_i32m1_tum(vbool32_t vm, vint32m1_t vd, vint32m1_t vs,
                                 size_t vl) {
  return __riscv_vneg_v_i32m1_tum(vm, vd, vs, vl);
}

vint32m2_t test_vneg_v_i32m2_tum(vbool16_t vm, vint32m2_t vd, vint32m2_t vs,
                                 size_t vl) {
  return __riscv_vneg_v_i32m2_tum(vm, vd, vs, vl);
}

vint32m4_t test_vneg_v_i32m4_tum(vbool8_t vm, vint32m4_t vd, vint32m4_t vs,
                                 size_t vl) {
  return __riscv_vneg_v_i32m4_tum(vm, vd, vs, vl);
}

vint32m8_t test_vneg_v_i32m8_tum(vbool4_t vm, vint32m8_t vd, vint32m8_t vs,
                                 size_t vl) {
  return __riscv_vneg_v_i32m8_tum(vm, vd, vs, vl);
}

vint64m1_t test_vneg_v_i64m1_tum(vbool64_t vm, vint64m1_t vd, vint64m1_t vs,
                                 size_t vl) {
  return __riscv_vneg_v_i64m1_tum(vm, vd, vs, vl);
}

vint64m2_t test_vneg_v_i64m2_tum(vbool32_t vm, vint64m2_t vd, vint64m2_t vs,
                                 size_t vl) {
  return __riscv_vneg_v_i64m2_tum(vm, vd, vs, vl);
}

vint64m4_t test_vneg_v_i64m4_tum(vbool16_t vm, vint64m4_t vd, vint64m4_t vs,
                                 size_t vl) {
  return __riscv_vneg_v_i64m4_tum(vm, vd, vs, vl);
}

vint64m8_t test_vneg_v_i64m8_tum(vbool8_t vm, vint64m8_t vd, vint64m8_t vs,
                                 size_t vl) {
  return __riscv_vneg_v_i64m8_tum(vm, vd, vs, vl);
}

vint8mf8_t test_vneg_v_i8mf8_tumu(vbool64_t vm, vint8mf8_t vd, vint8mf8_t vs,
                                  size_t vl) {
  return __riscv_vneg_v_i8mf8_tumu(vm, vd, vs, vl);
}

vint8mf4_t test_vneg_v_i8mf4_tumu(vbool32_t vm, vint8mf4_t vd, vint8mf4_t vs,
                                  size_t vl) {
  return __riscv_vneg_v_i8mf4_tumu(vm, vd, vs, vl);
}

vint8mf2_t test_vneg_v_i8mf2_tumu(vbool16_t vm, vint8mf2_t vd, vint8mf2_t vs,
                                  size_t vl) {
  return __riscv_vneg_v_i8mf2_tumu(vm, vd, vs, vl);
}

vint8m1_t test_vneg_v_i8m1_tumu(vbool8_t vm, vint8m1_t vd, vint8m1_t vs,
                                size_t vl) {
  return __riscv_vneg_v_i8m1_tumu(vm, vd, vs, vl);
}

vint8m2_t test_vneg_v_i8m2_tumu(vbool4_t vm, vint8m2_t vd, vint8m2_t vs,
                                size_t vl) {
  return __riscv_vneg_v_i8m2_tumu(vm, vd, vs, vl);
}

vint8m4_t test_vneg_v_i8m4_tumu(vbool2_t vm, vint8m4_t vd, vint8m4_t vs,
                                size_t vl) {
  return __riscv_vneg_v_i8m4_tumu(vm, vd, vs, vl);
}

vint8m8_t test_vneg_v_i8m8_tumu(vbool1_t vm, vint8m8_t vd, vint8m8_t vs,
                                size_t vl) {
  return __riscv_vneg_v_i8m8_tumu(vm, vd, vs, vl);
}

vint16mf4_t test_vneg_v_i16mf4_tumu(vbool64_t vm, vint16mf4_t vd,
                                    vint16mf4_t vs, size_t vl) {
  return __riscv_vneg_v_i16mf4_tumu(vm, vd, vs, vl);
}

vint16mf2_t test_vneg_v_i16mf2_tumu(vbool32_t vm, vint16mf2_t vd,
                                    vint16mf2_t vs, size_t vl) {
  return __riscv_vneg_v_i16mf2_tumu(vm, vd, vs, vl);
}

vint16m1_t test_vneg_v_i16m1_tumu(vbool16_t vm, vint16m1_t vd, vint16m1_t vs,
                                  size_t vl) {
  return __riscv_vneg_v_i16m1_tumu(vm, vd, vs, vl);
}

vint16m2_t test_vneg_v_i16m2_tumu(vbool8_t vm, vint16m2_t vd, vint16m2_t vs,
                                  size_t vl) {
  return __riscv_vneg_v_i16m2_tumu(vm, vd, vs, vl);
}

vint16m4_t test_vneg_v_i16m4_tumu(vbool4_t vm, vint16m4_t vd, vint16m4_t vs,
                                  size_t vl) {
  return __riscv_vneg_v_i16m4_tumu(vm, vd, vs, vl);
}

vint16m8_t test_vneg_v_i16m8_tumu(vbool2_t vm, vint16m8_t vd, vint16m8_t vs,
                                  size_t vl) {
  return __riscv_vneg_v_i16m8_tumu(vm, vd, vs, vl);
}

vint32mf2_t test_vneg_v_i32mf2_tumu(vbool64_t vm, vint32mf2_t vd,
                                    vint32mf2_t vs, size_t vl) {
  return __riscv_vneg_v_i32mf2_tumu(vm, vd, vs, vl);
}

vint32m1_t test_vneg_v_i32m1_tumu(vbool32_t vm, vint32m1_t vd, vint32m1_t vs,
                                  size_t vl) {
  return __riscv_vneg_v_i32m1_tumu(vm, vd, vs, vl);
}

vint32m2_t test_vneg_v_i32m2_tumu(vbool16_t vm, vint32m2_t vd, vint32m2_t vs,
                                  size_t vl) {
  return __riscv_vneg_v_i32m2_tumu(vm, vd, vs, vl);
}

vint32m4_t test_vneg_v_i32m4_tumu(vbool8_t vm, vint32m4_t vd, vint32m4_t vs,
                                  size_t vl) {
  return __riscv_vneg_v_i32m4_tumu(vm, vd, vs, vl);
}

vint32m8_t test_vneg_v_i32m8_tumu(vbool4_t vm, vint32m8_t vd, vint32m8_t vs,
                                  size_t vl) {
  return __riscv_vneg_v_i32m8_tumu(vm, vd, vs, vl);
}

vint64m1_t test_vneg_v_i64m1_tumu(vbool64_t vm, vint64m1_t vd, vint64m1_t vs,
                                  size_t vl) {
  return __riscv_vneg_v_i64m1_tumu(vm, vd, vs, vl);
}

vint64m2_t test_vneg_v_i64m2_tumu(vbool32_t vm, vint64m2_t vd, vint64m2_t vs,
                                  size_t vl) {
  return __riscv_vneg_v_i64m2_tumu(vm, vd, vs, vl);
}

vint64m4_t test_vneg_v_i64m4_tumu(vbool16_t vm, vint64m4_t vd, vint64m4_t vs,
                                  size_t vl) {
  return __riscv_vneg_v_i64m4_tumu(vm, vd, vs, vl);
}

vint64m8_t test_vneg_v_i64m8_tumu(vbool8_t vm, vint64m8_t vd, vint64m8_t vs,
                                  size_t vl) {
  return __riscv_vneg_v_i64m8_tumu(vm, vd, vs, vl);
}

vint8mf8_t test_vneg_v_i8mf8_mu(vbool64_t vm, vint8mf8_t vd, vint8mf8_t vs,
                                size_t vl) {
  return __riscv_vneg_v_i8mf8_mu(vm, vd, vs, vl);
}

vint8mf4_t test_vneg_v_i8mf4_mu(vbool32_t vm, vint8mf4_t vd, vint8mf4_t vs,
                                size_t vl) {
  return __riscv_vneg_v_i8mf4_mu(vm, vd, vs, vl);
}

vint8mf2_t test_vneg_v_i8mf2_mu(vbool16_t vm, vint8mf2_t vd, vint8mf2_t vs,
                                size_t vl) {
  return __riscv_vneg_v_i8mf2_mu(vm, vd, vs, vl);
}

vint8m1_t test_vneg_v_i8m1_mu(vbool8_t vm, vint8m1_t vd, vint8m1_t vs,
                              size_t vl) {
  return __riscv_vneg_v_i8m1_mu(vm, vd, vs, vl);
}

vint8m2_t test_vneg_v_i8m2_mu(vbool4_t vm, vint8m2_t vd, vint8m2_t vs,
                              size_t vl) {
  return __riscv_vneg_v_i8m2_mu(vm, vd, vs, vl);
}

vint8m4_t test_vneg_v_i8m4_mu(vbool2_t vm, vint8m4_t vd, vint8m4_t vs,
                              size_t vl) {
  return __riscv_vneg_v_i8m4_mu(vm, vd, vs, vl);
}

vint8m8_t test_vneg_v_i8m8_mu(vbool1_t vm, vint8m8_t vd, vint8m8_t vs,
                              size_t vl) {
  return __riscv_vneg_v_i8m8_mu(vm, vd, vs, vl);
}

vint16mf4_t test_vneg_v_i16mf4_mu(vbool64_t vm, vint16mf4_t vd, vint16mf4_t vs,
                                  size_t vl) {
  return __riscv_vneg_v_i16mf4_mu(vm, vd, vs, vl);
}

vint16mf2_t test_vneg_v_i16mf2_mu(vbool32_t vm, vint16mf2_t vd, vint16mf2_t vs,
                                  size_t vl) {
  return __riscv_vneg_v_i16mf2_mu(vm, vd, vs, vl);
}

vint16m1_t test_vneg_v_i16m1_mu(vbool16_t vm, vint16m1_t vd, vint16m1_t vs,
                                size_t vl) {
  return __riscv_vneg_v_i16m1_mu(vm, vd, vs, vl);
}

vint16m2_t test_vneg_v_i16m2_mu(vbool8_t vm, vint16m2_t vd, vint16m2_t vs,
                                size_t vl) {
  return __riscv_vneg_v_i16m2_mu(vm, vd, vs, vl);
}

vint16m4_t test_vneg_v_i16m4_mu(vbool4_t vm, vint16m4_t vd, vint16m4_t vs,
                                size_t vl) {
  return __riscv_vneg_v_i16m4_mu(vm, vd, vs, vl);
}

vint16m8_t test_vneg_v_i16m8_mu(vbool2_t vm, vint16m8_t vd, vint16m8_t vs,
                                size_t vl) {
  return __riscv_vneg_v_i16m8_mu(vm, vd, vs, vl);
}

vint32mf2_t test_vneg_v_i32mf2_mu(vbool64_t vm, vint32mf2_t vd, vint32mf2_t vs,
                                  size_t vl) {
  return __riscv_vneg_v_i32mf2_mu(vm, vd, vs, vl);
}

vint32m1_t test_vneg_v_i32m1_mu(vbool32_t vm, vint32m1_t vd, vint32m1_t vs,
                                size_t vl) {
  return __riscv_vneg_v_i32m1_mu(vm, vd, vs, vl);
}

vint32m2_t test_vneg_v_i32m2_mu(vbool16_t vm, vint32m2_t vd, vint32m2_t vs,
                                size_t vl) {
  return __riscv_vneg_v_i32m2_mu(vm, vd, vs, vl);
}

vint32m4_t test_vneg_v_i32m4_mu(vbool8_t vm, vint32m4_t vd, vint32m4_t vs,
                                size_t vl) {
  return __riscv_vneg_v_i32m4_mu(vm, vd, vs, vl);
}

vint32m8_t test_vneg_v_i32m8_mu(vbool4_t vm, vint32m8_t vd, vint32m8_t vs,
                                size_t vl) {
  return __riscv_vneg_v_i32m8_mu(vm, vd, vs, vl);
}

vint64m1_t test_vneg_v_i64m1_mu(vbool64_t vm, vint64m1_t vd, vint64m1_t vs,
                                size_t vl) {
  return __riscv_vneg_v_i64m1_mu(vm, vd, vs, vl);
}

vint64m2_t test_vneg_v_i64m2_mu(vbool32_t vm, vint64m2_t vd, vint64m2_t vs,
                                size_t vl) {
  return __riscv_vneg_v_i64m2_mu(vm, vd, vs, vl);
}

vint64m4_t test_vneg_v_i64m4_mu(vbool16_t vm, vint64m4_t vd, vint64m4_t vs,
                                size_t vl) {
  return __riscv_vneg_v_i64m4_mu(vm, vd, vs, vl);
}

vint64m8_t test_vneg_v_i64m8_mu(vbool8_t vm, vint64m8_t vd, vint64m8_t vs,
                                size_t vl) {
  return __riscv_vneg_v_i64m8_mu(vm, vd, vs, vl);
}
