// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -target-feature +zfh \
// RUN:   -target-feature +zvfh -disable-O0-optnone \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

vint16mf4_t test_vwmacc_vv_i16mf4(vint16mf4_t vd, vint8mf8_t vs1,
                                  vint8mf8_t vs2, size_t vl) {
  return __riscv_vwmacc_vv_i16mf4(vd, vs1, vs2, vl);
}

vint16mf4_t test_vwmacc_vx_i16mf4(vint16mf4_t vd, int8_t rs1, vint8mf8_t vs2,
                                  size_t vl) {
  return __riscv_vwmacc_vx_i16mf4(vd, rs1, vs2, vl);
}

vint16mf2_t test_vwmacc_vv_i16mf2(vint16mf2_t vd, vint8mf4_t vs1,
                                  vint8mf4_t vs2, size_t vl) {
  return __riscv_vwmacc_vv_i16mf2(vd, vs1, vs2, vl);
}

vint16mf2_t test_vwmacc_vx_i16mf2(vint16mf2_t vd, int8_t rs1, vint8mf4_t vs2,
                                  size_t vl) {
  return __riscv_vwmacc_vx_i16mf2(vd, rs1, vs2, vl);
}

vint16m1_t test_vwmacc_vv_i16m1(vint16m1_t vd, vint8mf2_t vs1, vint8mf2_t vs2,
                                size_t vl) {
  return __riscv_vwmacc_vv_i16m1(vd, vs1, vs2, vl);
}

vint16m1_t test_vwmacc_vx_i16m1(vint16m1_t vd, int8_t rs1, vint8mf2_t vs2,
                                size_t vl) {
  return __riscv_vwmacc_vx_i16m1(vd, rs1, vs2, vl);
}

vint16m2_t test_vwmacc_vv_i16m2(vint16m2_t vd, vint8m1_t vs1, vint8m1_t vs2,
                                size_t vl) {
  return __riscv_vwmacc_vv_i16m2(vd, vs1, vs2, vl);
}

vint16m2_t test_vwmacc_vx_i16m2(vint16m2_t vd, int8_t rs1, vint8m1_t vs2,
                                size_t vl) {
  return __riscv_vwmacc_vx_i16m2(vd, rs1, vs2, vl);
}

vint16m4_t test_vwmacc_vv_i16m4(vint16m4_t vd, vint8m2_t vs1, vint8m2_t vs2,
                                size_t vl) {
  return __riscv_vwmacc_vv_i16m4(vd, vs1, vs2, vl);
}

vint16m4_t test_vwmacc_vx_i16m4(vint16m4_t vd, int8_t rs1, vint8m2_t vs2,
                                size_t vl) {
  return __riscv_vwmacc_vx_i16m4(vd, rs1, vs2, vl);
}

vint16m8_t test_vwmacc_vv_i16m8(vint16m8_t vd, vint8m4_t vs1, vint8m4_t vs2,
                                size_t vl) {
  return __riscv_vwmacc_vv_i16m8(vd, vs1, vs2, vl);
}

vint16m8_t test_vwmacc_vx_i16m8(vint16m8_t vd, int8_t rs1, vint8m4_t vs2,
                                size_t vl) {
  return __riscv_vwmacc_vx_i16m8(vd, rs1, vs2, vl);
}

vint32mf2_t test_vwmacc_vv_i32mf2(vint32mf2_t vd, vint16mf4_t vs1,
                                  vint16mf4_t vs2, size_t vl) {
  return __riscv_vwmacc_vv_i32mf2(vd, vs1, vs2, vl);
}

vint32mf2_t test_vwmacc_vx_i32mf2(vint32mf2_t vd, int16_t rs1, vint16mf4_t vs2,
                                  size_t vl) {
  return __riscv_vwmacc_vx_i32mf2(vd, rs1, vs2, vl);
}

vint32m1_t test_vwmacc_vv_i32m1(vint32m1_t vd, vint16mf2_t vs1, vint16mf2_t vs2,
                                size_t vl) {
  return __riscv_vwmacc_vv_i32m1(vd, vs1, vs2, vl);
}

vint32m1_t test_vwmacc_vx_i32m1(vint32m1_t vd, int16_t rs1, vint16mf2_t vs2,
                                size_t vl) {
  return __riscv_vwmacc_vx_i32m1(vd, rs1, vs2, vl);
}

vint32m2_t test_vwmacc_vv_i32m2(vint32m2_t vd, vint16m1_t vs1, vint16m1_t vs2,
                                size_t vl) {
  return __riscv_vwmacc_vv_i32m2(vd, vs1, vs2, vl);
}

vint32m2_t test_vwmacc_vx_i32m2(vint32m2_t vd, int16_t rs1, vint16m1_t vs2,
                                size_t vl) {
  return __riscv_vwmacc_vx_i32m2(vd, rs1, vs2, vl);
}

vint32m4_t test_vwmacc_vv_i32m4(vint32m4_t vd, vint16m2_t vs1, vint16m2_t vs2,
                                size_t vl) {
  return __riscv_vwmacc_vv_i32m4(vd, vs1, vs2, vl);
}

vint32m4_t test_vwmacc_vx_i32m4(vint32m4_t vd, int16_t rs1, vint16m2_t vs2,
                                size_t vl) {
  return __riscv_vwmacc_vx_i32m4(vd, rs1, vs2, vl);
}

vint32m8_t test_vwmacc_vv_i32m8(vint32m8_t vd, vint16m4_t vs1, vint16m4_t vs2,
                                size_t vl) {
  return __riscv_vwmacc_vv_i32m8(vd, vs1, vs2, vl);
}

vint32m8_t test_vwmacc_vx_i32m8(vint32m8_t vd, int16_t rs1, vint16m4_t vs2,
                                size_t vl) {
  return __riscv_vwmacc_vx_i32m8(vd, rs1, vs2, vl);
}

vint64m1_t test_vwmacc_vv_i64m1(vint64m1_t vd, vint32mf2_t vs1, vint32mf2_t vs2,
                                size_t vl) {
  return __riscv_vwmacc_vv_i64m1(vd, vs1, vs2, vl);
}

vint64m1_t test_vwmacc_vx_i64m1(vint64m1_t vd, int32_t rs1, vint32mf2_t vs2,
                                size_t vl) {
  return __riscv_vwmacc_vx_i64m1(vd, rs1, vs2, vl);
}

vint64m2_t test_vwmacc_vv_i64m2(vint64m2_t vd, vint32m1_t vs1, vint32m1_t vs2,
                                size_t vl) {
  return __riscv_vwmacc_vv_i64m2(vd, vs1, vs2, vl);
}

vint64m2_t test_vwmacc_vx_i64m2(vint64m2_t vd, int32_t rs1, vint32m1_t vs2,
                                size_t vl) {
  return __riscv_vwmacc_vx_i64m2(vd, rs1, vs2, vl);
}

vint64m4_t test_vwmacc_vv_i64m4(vint64m4_t vd, vint32m2_t vs1, vint32m2_t vs2,
                                size_t vl) {
  return __riscv_vwmacc_vv_i64m4(vd, vs1, vs2, vl);
}

vint64m4_t test_vwmacc_vx_i64m4(vint64m4_t vd, int32_t rs1, vint32m2_t vs2,
                                size_t vl) {
  return __riscv_vwmacc_vx_i64m4(vd, rs1, vs2, vl);
}

vint64m8_t test_vwmacc_vv_i64m8(vint64m8_t vd, vint32m4_t vs1, vint32m4_t vs2,
                                size_t vl) {
  return __riscv_vwmacc_vv_i64m8(vd, vs1, vs2, vl);
}

vint64m8_t test_vwmacc_vx_i64m8(vint64m8_t vd, int32_t rs1, vint32m4_t vs2,
                                size_t vl) {
  return __riscv_vwmacc_vx_i64m8(vd, rs1, vs2, vl);
}

vint16mf4_t test_vwmacc_vv_i16mf4_m(vbool64_t vm, vint16mf4_t vd,
                                    vint8mf8_t vs1, vint8mf8_t vs2, size_t vl) {
  return __riscv_vwmacc_vv_i16mf4_m(vm, vd, vs1, vs2, vl);
}

vint16mf4_t test_vwmacc_vx_i16mf4_m(vbool64_t vm, vint16mf4_t vd, int8_t rs1,
                                    vint8mf8_t vs2, size_t vl) {
  return __riscv_vwmacc_vx_i16mf4_m(vm, vd, rs1, vs2, vl);
}

vint16mf2_t test_vwmacc_vv_i16mf2_m(vbool32_t vm, vint16mf2_t vd,
                                    vint8mf4_t vs1, vint8mf4_t vs2, size_t vl) {
  return __riscv_vwmacc_vv_i16mf2_m(vm, vd, vs1, vs2, vl);
}

vint16mf2_t test_vwmacc_vx_i16mf2_m(vbool32_t vm, vint16mf2_t vd, int8_t rs1,
                                    vint8mf4_t vs2, size_t vl) {
  return __riscv_vwmacc_vx_i16mf2_m(vm, vd, rs1, vs2, vl);
}

vint16m1_t test_vwmacc_vv_i16m1_m(vbool16_t vm, vint16m1_t vd, vint8mf2_t vs1,
                                  vint8mf2_t vs2, size_t vl) {
  return __riscv_vwmacc_vv_i16m1_m(vm, vd, vs1, vs2, vl);
}

vint16m1_t test_vwmacc_vx_i16m1_m(vbool16_t vm, vint16m1_t vd, int8_t rs1,
                                  vint8mf2_t vs2, size_t vl) {
  return __riscv_vwmacc_vx_i16m1_m(vm, vd, rs1, vs2, vl);
}

vint16m2_t test_vwmacc_vv_i16m2_m(vbool8_t vm, vint16m2_t vd, vint8m1_t vs1,
                                  vint8m1_t vs2, size_t vl) {
  return __riscv_vwmacc_vv_i16m2_m(vm, vd, vs1, vs2, vl);
}

vint16m2_t test_vwmacc_vx_i16m2_m(vbool8_t vm, vint16m2_t vd, int8_t rs1,
                                  vint8m1_t vs2, size_t vl) {
  return __riscv_vwmacc_vx_i16m2_m(vm, vd, rs1, vs2, vl);
}

vint16m4_t test_vwmacc_vv_i16m4_m(vbool4_t vm, vint16m4_t vd, vint8m2_t vs1,
                                  vint8m2_t vs2, size_t vl) {
  return __riscv_vwmacc_vv_i16m4_m(vm, vd, vs1, vs2, vl);
}

vint16m4_t test_vwmacc_vx_i16m4_m(vbool4_t vm, vint16m4_t vd, int8_t rs1,
                                  vint8m2_t vs2, size_t vl) {
  return __riscv_vwmacc_vx_i16m4_m(vm, vd, rs1, vs2, vl);
}

vint16m8_t test_vwmacc_vv_i16m8_m(vbool2_t vm, vint16m8_t vd, vint8m4_t vs1,
                                  vint8m4_t vs2, size_t vl) {
  return __riscv_vwmacc_vv_i16m8_m(vm, vd, vs1, vs2, vl);
}

vint16m8_t test_vwmacc_vx_i16m8_m(vbool2_t vm, vint16m8_t vd, int8_t rs1,
                                  vint8m4_t vs2, size_t vl) {
  return __riscv_vwmacc_vx_i16m8_m(vm, vd, rs1, vs2, vl);
}

vint32mf2_t test_vwmacc_vv_i32mf2_m(vbool64_t vm, vint32mf2_t vd,
                                    vint16mf4_t vs1, vint16mf4_t vs2,
                                    size_t vl) {
  return __riscv_vwmacc_vv_i32mf2_m(vm, vd, vs1, vs2, vl);
}

vint32mf2_t test_vwmacc_vx_i32mf2_m(vbool64_t vm, vint32mf2_t vd, int16_t rs1,
                                    vint16mf4_t vs2, size_t vl) {
  return __riscv_vwmacc_vx_i32mf2_m(vm, vd, rs1, vs2, vl);
}

vint32m1_t test_vwmacc_vv_i32m1_m(vbool32_t vm, vint32m1_t vd, vint16mf2_t vs1,
                                  vint16mf2_t vs2, size_t vl) {
  return __riscv_vwmacc_vv_i32m1_m(vm, vd, vs1, vs2, vl);
}

vint32m1_t test_vwmacc_vx_i32m1_m(vbool32_t vm, vint32m1_t vd, int16_t rs1,
                                  vint16mf2_t vs2, size_t vl) {
  return __riscv_vwmacc_vx_i32m1_m(vm, vd, rs1, vs2, vl);
}

vint32m2_t test_vwmacc_vv_i32m2_m(vbool16_t vm, vint32m2_t vd, vint16m1_t vs1,
                                  vint16m1_t vs2, size_t vl) {
  return __riscv_vwmacc_vv_i32m2_m(vm, vd, vs1, vs2, vl);
}

vint32m2_t test_vwmacc_vx_i32m2_m(vbool16_t vm, vint32m2_t vd, int16_t rs1,
                                  vint16m1_t vs2, size_t vl) {
  return __riscv_vwmacc_vx_i32m2_m(vm, vd, rs1, vs2, vl);
}

vint32m4_t test_vwmacc_vv_i32m4_m(vbool8_t vm, vint32m4_t vd, vint16m2_t vs1,
                                  vint16m2_t vs2, size_t vl) {
  return __riscv_vwmacc_vv_i32m4_m(vm, vd, vs1, vs2, vl);
}

vint32m4_t test_vwmacc_vx_i32m4_m(vbool8_t vm, vint32m4_t vd, int16_t rs1,
                                  vint16m2_t vs2, size_t vl) {
  return __riscv_vwmacc_vx_i32m4_m(vm, vd, rs1, vs2, vl);
}

vint32m8_t test_vwmacc_vv_i32m8_m(vbool4_t vm, vint32m8_t vd, vint16m4_t vs1,
                                  vint16m4_t vs2, size_t vl) {
  return __riscv_vwmacc_vv_i32m8_m(vm, vd, vs1, vs2, vl);
}

vint32m8_t test_vwmacc_vx_i32m8_m(vbool4_t vm, vint32m8_t vd, int16_t rs1,
                                  vint16m4_t vs2, size_t vl) {
  return __riscv_vwmacc_vx_i32m8_m(vm, vd, rs1, vs2, vl);
}

vint64m1_t test_vwmacc_vv_i64m1_m(vbool64_t vm, vint64m1_t vd, vint32mf2_t vs1,
                                  vint32mf2_t vs2, size_t vl) {
  return __riscv_vwmacc_vv_i64m1_m(vm, vd, vs1, vs2, vl);
}

vint64m1_t test_vwmacc_vx_i64m1_m(vbool64_t vm, vint64m1_t vd, int32_t rs1,
                                  vint32mf2_t vs2, size_t vl) {
  return __riscv_vwmacc_vx_i64m1_m(vm, vd, rs1, vs2, vl);
}

vint64m2_t test_vwmacc_vv_i64m2_m(vbool32_t vm, vint64m2_t vd, vint32m1_t vs1,
                                  vint32m1_t vs2, size_t vl) {
  return __riscv_vwmacc_vv_i64m2_m(vm, vd, vs1, vs2, vl);
}

vint64m2_t test_vwmacc_vx_i64m2_m(vbool32_t vm, vint64m2_t vd, int32_t rs1,
                                  vint32m1_t vs2, size_t vl) {
  return __riscv_vwmacc_vx_i64m2_m(vm, vd, rs1, vs2, vl);
}

vint64m4_t test_vwmacc_vv_i64m4_m(vbool16_t vm, vint64m4_t vd, vint32m2_t vs1,
                                  vint32m2_t vs2, size_t vl) {
  return __riscv_vwmacc_vv_i64m4_m(vm, vd, vs1, vs2, vl);
}

vint64m4_t test_vwmacc_vx_i64m4_m(vbool16_t vm, vint64m4_t vd, int32_t rs1,
                                  vint32m2_t vs2, size_t vl) {
  return __riscv_vwmacc_vx_i64m4_m(vm, vd, rs1, vs2, vl);
}

vint64m8_t test_vwmacc_vv_i64m8_m(vbool8_t vm, vint64m8_t vd, vint32m4_t vs1,
                                  vint32m4_t vs2, size_t vl) {
  return __riscv_vwmacc_vv_i64m8_m(vm, vd, vs1, vs2, vl);
}

vint64m8_t test_vwmacc_vx_i64m8_m(vbool8_t vm, vint64m8_t vd, int32_t rs1,
                                  vint32m4_t vs2, size_t vl) {
  return __riscv_vwmacc_vx_i64m8_m(vm, vd, rs1, vs2, vl);
}
