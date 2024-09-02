// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -target-feature +zfh \
// RUN:   -target-feature +zvfh -disable-O0-optnone \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

vint8mf8_t test_vmerge_vvm_i8mf8_tu(vint8mf8_t vd, vint8mf8_t vs2,
                                    vint8mf8_t vs1, vbool64_t v0, size_t vl) {
  return __riscv_vmerge_vvm_i8mf8_tu(vd, vs2, vs1, v0, vl);
}

vint8mf8_t test_vmerge_vxm_i8mf8_tu(vint8mf8_t vd, vint8mf8_t vs2, int8_t rs1,
                                    vbool64_t v0, size_t vl) {
  return __riscv_vmerge_vxm_i8mf8_tu(vd, vs2, rs1, v0, vl);
}

vint8mf4_t test_vmerge_vvm_i8mf4_tu(vint8mf4_t vd, vint8mf4_t vs2,
                                    vint8mf4_t vs1, vbool32_t v0, size_t vl) {
  return __riscv_vmerge_vvm_i8mf4_tu(vd, vs2, vs1, v0, vl);
}

vint8mf4_t test_vmerge_vxm_i8mf4_tu(vint8mf4_t vd, vint8mf4_t vs2, int8_t rs1,
                                    vbool32_t v0, size_t vl) {
  return __riscv_vmerge_vxm_i8mf4_tu(vd, vs2, rs1, v0, vl);
}

vint8mf2_t test_vmerge_vvm_i8mf2_tu(vint8mf2_t vd, vint8mf2_t vs2,
                                    vint8mf2_t vs1, vbool16_t v0, size_t vl) {
  return __riscv_vmerge_vvm_i8mf2_tu(vd, vs2, vs1, v0, vl);
}

vint8mf2_t test_vmerge_vxm_i8mf2_tu(vint8mf2_t vd, vint8mf2_t vs2, int8_t rs1,
                                    vbool16_t v0, size_t vl) {
  return __riscv_vmerge_vxm_i8mf2_tu(vd, vs2, rs1, v0, vl);
}

vint8m1_t test_vmerge_vvm_i8m1_tu(vint8m1_t vd, vint8m1_t vs2, vint8m1_t vs1,
                                  vbool8_t v0, size_t vl) {
  return __riscv_vmerge_vvm_i8m1_tu(vd, vs2, vs1, v0, vl);
}

vint8m1_t test_vmerge_vxm_i8m1_tu(vint8m1_t vd, vint8m1_t vs2, int8_t rs1,
                                  vbool8_t v0, size_t vl) {
  return __riscv_vmerge_vxm_i8m1_tu(vd, vs2, rs1, v0, vl);
}

vint8m2_t test_vmerge_vvm_i8m2_tu(vint8m2_t vd, vint8m2_t vs2, vint8m2_t vs1,
                                  vbool4_t v0, size_t vl) {
  return __riscv_vmerge_vvm_i8m2_tu(vd, vs2, vs1, v0, vl);
}

vint8m2_t test_vmerge_vxm_i8m2_tu(vint8m2_t vd, vint8m2_t vs2, int8_t rs1,
                                  vbool4_t v0, size_t vl) {
  return __riscv_vmerge_vxm_i8m2_tu(vd, vs2, rs1, v0, vl);
}

vint8m4_t test_vmerge_vvm_i8m4_tu(vint8m4_t vd, vint8m4_t vs2, vint8m4_t vs1,
                                  vbool2_t v0, size_t vl) {
  return __riscv_vmerge_vvm_i8m4_tu(vd, vs2, vs1, v0, vl);
}

vint8m4_t test_vmerge_vxm_i8m4_tu(vint8m4_t vd, vint8m4_t vs2, int8_t rs1,
                                  vbool2_t v0, size_t vl) {
  return __riscv_vmerge_vxm_i8m4_tu(vd, vs2, rs1, v0, vl);
}

vint8m8_t test_vmerge_vvm_i8m8_tu(vint8m8_t vd, vint8m8_t vs2, vint8m8_t vs1,
                                  vbool1_t v0, size_t vl) {
  return __riscv_vmerge_vvm_i8m8_tu(vd, vs2, vs1, v0, vl);
}

vint8m8_t test_vmerge_vxm_i8m8_tu(vint8m8_t vd, vint8m8_t vs2, int8_t rs1,
                                  vbool1_t v0, size_t vl) {
  return __riscv_vmerge_vxm_i8m8_tu(vd, vs2, rs1, v0, vl);
}

vint16mf4_t test_vmerge_vvm_i16mf4_tu(vint16mf4_t vd, vint16mf4_t vs2,
                                      vint16mf4_t vs1, vbool64_t v0,
                                      size_t vl) {
  return __riscv_vmerge_vvm_i16mf4_tu(vd, vs2, vs1, v0, vl);
}

vint16mf4_t test_vmerge_vxm_i16mf4_tu(vint16mf4_t vd, vint16mf4_t vs2,
                                      int16_t rs1, vbool64_t v0, size_t vl) {
  return __riscv_vmerge_vxm_i16mf4_tu(vd, vs2, rs1, v0, vl);
}

vint16mf2_t test_vmerge_vvm_i16mf2_tu(vint16mf2_t vd, vint16mf2_t vs2,
                                      vint16mf2_t vs1, vbool32_t v0,
                                      size_t vl) {
  return __riscv_vmerge_vvm_i16mf2_tu(vd, vs2, vs1, v0, vl);
}

vint16mf2_t test_vmerge_vxm_i16mf2_tu(vint16mf2_t vd, vint16mf2_t vs2,
                                      int16_t rs1, vbool32_t v0, size_t vl) {
  return __riscv_vmerge_vxm_i16mf2_tu(vd, vs2, rs1, v0, vl);
}

vint16m1_t test_vmerge_vvm_i16m1_tu(vint16m1_t vd, vint16m1_t vs2,
                                    vint16m1_t vs1, vbool16_t v0, size_t vl) {
  return __riscv_vmerge_vvm_i16m1_tu(vd, vs2, vs1, v0, vl);
}

vint16m1_t test_vmerge_vxm_i16m1_tu(vint16m1_t vd, vint16m1_t vs2, int16_t rs1,
                                    vbool16_t v0, size_t vl) {
  return __riscv_vmerge_vxm_i16m1_tu(vd, vs2, rs1, v0, vl);
}

vint16m2_t test_vmerge_vvm_i16m2_tu(vint16m2_t vd, vint16m2_t vs2,
                                    vint16m2_t vs1, vbool8_t v0, size_t vl) {
  return __riscv_vmerge_vvm_i16m2_tu(vd, vs2, vs1, v0, vl);
}

vint16m2_t test_vmerge_vxm_i16m2_tu(vint16m2_t vd, vint16m2_t vs2, int16_t rs1,
                                    vbool8_t v0, size_t vl) {
  return __riscv_vmerge_vxm_i16m2_tu(vd, vs2, rs1, v0, vl);
}

vint16m4_t test_vmerge_vvm_i16m4_tu(vint16m4_t vd, vint16m4_t vs2,
                                    vint16m4_t vs1, vbool4_t v0, size_t vl) {
  return __riscv_vmerge_vvm_i16m4_tu(vd, vs2, vs1, v0, vl);
}

vint16m4_t test_vmerge_vxm_i16m4_tu(vint16m4_t vd, vint16m4_t vs2, int16_t rs1,
                                    vbool4_t v0, size_t vl) {
  return __riscv_vmerge_vxm_i16m4_tu(vd, vs2, rs1, v0, vl);
}

vint16m8_t test_vmerge_vvm_i16m8_tu(vint16m8_t vd, vint16m8_t vs2,
                                    vint16m8_t vs1, vbool2_t v0, size_t vl) {
  return __riscv_vmerge_vvm_i16m8_tu(vd, vs2, vs1, v0, vl);
}

vint16m8_t test_vmerge_vxm_i16m8_tu(vint16m8_t vd, vint16m8_t vs2, int16_t rs1,
                                    vbool2_t v0, size_t vl) {
  return __riscv_vmerge_vxm_i16m8_tu(vd, vs2, rs1, v0, vl);
}

vint32mf2_t test_vmerge_vvm_i32mf2_tu(vint32mf2_t vd, vint32mf2_t vs2,
                                      vint32mf2_t vs1, vbool64_t v0,
                                      size_t vl) {
  return __riscv_vmerge_vvm_i32mf2_tu(vd, vs2, vs1, v0, vl);
}

vint32mf2_t test_vmerge_vxm_i32mf2_tu(vint32mf2_t vd, vint32mf2_t vs2,
                                      int32_t rs1, vbool64_t v0, size_t vl) {
  return __riscv_vmerge_vxm_i32mf2_tu(vd, vs2, rs1, v0, vl);
}

vint32m1_t test_vmerge_vvm_i32m1_tu(vint32m1_t vd, vint32m1_t vs2,
                                    vint32m1_t vs1, vbool32_t v0, size_t vl) {
  return __riscv_vmerge_vvm_i32m1_tu(vd, vs2, vs1, v0, vl);
}

vint32m1_t test_vmerge_vxm_i32m1_tu(vint32m1_t vd, vint32m1_t vs2, int32_t rs1,
                                    vbool32_t v0, size_t vl) {
  return __riscv_vmerge_vxm_i32m1_tu(vd, vs2, rs1, v0, vl);
}

vint32m2_t test_vmerge_vvm_i32m2_tu(vint32m2_t vd, vint32m2_t vs2,
                                    vint32m2_t vs1, vbool16_t v0, size_t vl) {
  return __riscv_vmerge_vvm_i32m2_tu(vd, vs2, vs1, v0, vl);
}

vint32m2_t test_vmerge_vxm_i32m2_tu(vint32m2_t vd, vint32m2_t vs2, int32_t rs1,
                                    vbool16_t v0, size_t vl) {
  return __riscv_vmerge_vxm_i32m2_tu(vd, vs2, rs1, v0, vl);
}

vint32m4_t test_vmerge_vvm_i32m4_tu(vint32m4_t vd, vint32m4_t vs2,
                                    vint32m4_t vs1, vbool8_t v0, size_t vl) {
  return __riscv_vmerge_vvm_i32m4_tu(vd, vs2, vs1, v0, vl);
}

vint32m4_t test_vmerge_vxm_i32m4_tu(vint32m4_t vd, vint32m4_t vs2, int32_t rs1,
                                    vbool8_t v0, size_t vl) {
  return __riscv_vmerge_vxm_i32m4_tu(vd, vs2, rs1, v0, vl);
}

vint32m8_t test_vmerge_vvm_i32m8_tu(vint32m8_t vd, vint32m8_t vs2,
                                    vint32m8_t vs1, vbool4_t v0, size_t vl) {
  return __riscv_vmerge_vvm_i32m8_tu(vd, vs2, vs1, v0, vl);
}

vint32m8_t test_vmerge_vxm_i32m8_tu(vint32m8_t vd, vint32m8_t vs2, int32_t rs1,
                                    vbool4_t v0, size_t vl) {
  return __riscv_vmerge_vxm_i32m8_tu(vd, vs2, rs1, v0, vl);
}

vint64m1_t test_vmerge_vvm_i64m1_tu(vint64m1_t vd, vint64m1_t vs2,
                                    vint64m1_t vs1, vbool64_t v0, size_t vl) {
  return __riscv_vmerge_vvm_i64m1_tu(vd, vs2, vs1, v0, vl);
}

vint64m1_t test_vmerge_vxm_i64m1_tu(vint64m1_t vd, vint64m1_t vs2, int64_t rs1,
                                    vbool64_t v0, size_t vl) {
  return __riscv_vmerge_vxm_i64m1_tu(vd, vs2, rs1, v0, vl);
}

vint64m2_t test_vmerge_vvm_i64m2_tu(vint64m2_t vd, vint64m2_t vs2,
                                    vint64m2_t vs1, vbool32_t v0, size_t vl) {
  return __riscv_vmerge_vvm_i64m2_tu(vd, vs2, vs1, v0, vl);
}

vint64m2_t test_vmerge_vxm_i64m2_tu(vint64m2_t vd, vint64m2_t vs2, int64_t rs1,
                                    vbool32_t v0, size_t vl) {
  return __riscv_vmerge_vxm_i64m2_tu(vd, vs2, rs1, v0, vl);
}

vint64m4_t test_vmerge_vvm_i64m4_tu(vint64m4_t vd, vint64m4_t vs2,
                                    vint64m4_t vs1, vbool16_t v0, size_t vl) {
  return __riscv_vmerge_vvm_i64m4_tu(vd, vs2, vs1, v0, vl);
}

vint64m4_t test_vmerge_vxm_i64m4_tu(vint64m4_t vd, vint64m4_t vs2, int64_t rs1,
                                    vbool16_t v0, size_t vl) {
  return __riscv_vmerge_vxm_i64m4_tu(vd, vs2, rs1, v0, vl);
}

vint64m8_t test_vmerge_vvm_i64m8_tu(vint64m8_t vd, vint64m8_t vs2,
                                    vint64m8_t vs1, vbool8_t v0, size_t vl) {
  return __riscv_vmerge_vvm_i64m8_tu(vd, vs2, vs1, v0, vl);
}

vint64m8_t test_vmerge_vxm_i64m8_tu(vint64m8_t vd, vint64m8_t vs2, int64_t rs1,
                                    vbool8_t v0, size_t vl) {
  return __riscv_vmerge_vxm_i64m8_tu(vd, vs2, rs1, v0, vl);
}

vuint8mf8_t test_vmerge_vvm_u8mf8_tu(vuint8mf8_t vd, vuint8mf8_t vs2,
                                     vuint8mf8_t vs1, vbool64_t v0, size_t vl) {
  return __riscv_vmerge_vvm_u8mf8_tu(vd, vs2, vs1, v0, vl);
}

vuint8mf8_t test_vmerge_vxm_u8mf8_tu(vuint8mf8_t vd, vuint8mf8_t vs2,
                                     uint8_t rs1, vbool64_t v0, size_t vl) {
  return __riscv_vmerge_vxm_u8mf8_tu(vd, vs2, rs1, v0, vl);
}

vuint8mf4_t test_vmerge_vvm_u8mf4_tu(vuint8mf4_t vd, vuint8mf4_t vs2,
                                     vuint8mf4_t vs1, vbool32_t v0, size_t vl) {
  return __riscv_vmerge_vvm_u8mf4_tu(vd, vs2, vs1, v0, vl);
}

vuint8mf4_t test_vmerge_vxm_u8mf4_tu(vuint8mf4_t vd, vuint8mf4_t vs2,
                                     uint8_t rs1, vbool32_t v0, size_t vl) {
  return __riscv_vmerge_vxm_u8mf4_tu(vd, vs2, rs1, v0, vl);
}

vuint8mf2_t test_vmerge_vvm_u8mf2_tu(vuint8mf2_t vd, vuint8mf2_t vs2,
                                     vuint8mf2_t vs1, vbool16_t v0, size_t vl) {
  return __riscv_vmerge_vvm_u8mf2_tu(vd, vs2, vs1, v0, vl);
}

vuint8mf2_t test_vmerge_vxm_u8mf2_tu(vuint8mf2_t vd, vuint8mf2_t vs2,
                                     uint8_t rs1, vbool16_t v0, size_t vl) {
  return __riscv_vmerge_vxm_u8mf2_tu(vd, vs2, rs1, v0, vl);
}

vuint8m1_t test_vmerge_vvm_u8m1_tu(vuint8m1_t vd, vuint8m1_t vs2,
                                   vuint8m1_t vs1, vbool8_t v0, size_t vl) {
  return __riscv_vmerge_vvm_u8m1_tu(vd, vs2, vs1, v0, vl);
}

vuint8m1_t test_vmerge_vxm_u8m1_tu(vuint8m1_t vd, vuint8m1_t vs2, uint8_t rs1,
                                   vbool8_t v0, size_t vl) {
  return __riscv_vmerge_vxm_u8m1_tu(vd, vs2, rs1, v0, vl);
}

vuint8m2_t test_vmerge_vvm_u8m2_tu(vuint8m2_t vd, vuint8m2_t vs2,
                                   vuint8m2_t vs1, vbool4_t v0, size_t vl) {
  return __riscv_vmerge_vvm_u8m2_tu(vd, vs2, vs1, v0, vl);
}

vuint8m2_t test_vmerge_vxm_u8m2_tu(vuint8m2_t vd, vuint8m2_t vs2, uint8_t rs1,
                                   vbool4_t v0, size_t vl) {
  return __riscv_vmerge_vxm_u8m2_tu(vd, vs2, rs1, v0, vl);
}

vuint8m4_t test_vmerge_vvm_u8m4_tu(vuint8m4_t vd, vuint8m4_t vs2,
                                   vuint8m4_t vs1, vbool2_t v0, size_t vl) {
  return __riscv_vmerge_vvm_u8m4_tu(vd, vs2, vs1, v0, vl);
}

vuint8m4_t test_vmerge_vxm_u8m4_tu(vuint8m4_t vd, vuint8m4_t vs2, uint8_t rs1,
                                   vbool2_t v0, size_t vl) {
  return __riscv_vmerge_vxm_u8m4_tu(vd, vs2, rs1, v0, vl);
}

vuint8m8_t test_vmerge_vvm_u8m8_tu(vuint8m8_t vd, vuint8m8_t vs2,
                                   vuint8m8_t vs1, vbool1_t v0, size_t vl) {
  return __riscv_vmerge_vvm_u8m8_tu(vd, vs2, vs1, v0, vl);
}

vuint8m8_t test_vmerge_vxm_u8m8_tu(vuint8m8_t vd, vuint8m8_t vs2, uint8_t rs1,
                                   vbool1_t v0, size_t vl) {
  return __riscv_vmerge_vxm_u8m8_tu(vd, vs2, rs1, v0, vl);
}

vuint16mf4_t test_vmerge_vvm_u16mf4_tu(vuint16mf4_t vd, vuint16mf4_t vs2,
                                       vuint16mf4_t vs1, vbool64_t v0,
                                       size_t vl) {
  return __riscv_vmerge_vvm_u16mf4_tu(vd, vs2, vs1, v0, vl);
}

vuint16mf4_t test_vmerge_vxm_u16mf4_tu(vuint16mf4_t vd, vuint16mf4_t vs2,
                                       uint16_t rs1, vbool64_t v0, size_t vl) {
  return __riscv_vmerge_vxm_u16mf4_tu(vd, vs2, rs1, v0, vl);
}

vuint16mf2_t test_vmerge_vvm_u16mf2_tu(vuint16mf2_t vd, vuint16mf2_t vs2,
                                       vuint16mf2_t vs1, vbool32_t v0,
                                       size_t vl) {
  return __riscv_vmerge_vvm_u16mf2_tu(vd, vs2, vs1, v0, vl);
}

vuint16mf2_t test_vmerge_vxm_u16mf2_tu(vuint16mf2_t vd, vuint16mf2_t vs2,
                                       uint16_t rs1, vbool32_t v0, size_t vl) {
  return __riscv_vmerge_vxm_u16mf2_tu(vd, vs2, rs1, v0, vl);
}

vuint16m1_t test_vmerge_vvm_u16m1_tu(vuint16m1_t vd, vuint16m1_t vs2,
                                     vuint16m1_t vs1, vbool16_t v0, size_t vl) {
  return __riscv_vmerge_vvm_u16m1_tu(vd, vs2, vs1, v0, vl);
}

vuint16m1_t test_vmerge_vxm_u16m1_tu(vuint16m1_t vd, vuint16m1_t vs2,
                                     uint16_t rs1, vbool16_t v0, size_t vl) {
  return __riscv_vmerge_vxm_u16m1_tu(vd, vs2, rs1, v0, vl);
}

vuint16m2_t test_vmerge_vvm_u16m2_tu(vuint16m2_t vd, vuint16m2_t vs2,
                                     vuint16m2_t vs1, vbool8_t v0, size_t vl) {
  return __riscv_vmerge_vvm_u16m2_tu(vd, vs2, vs1, v0, vl);
}

vuint16m2_t test_vmerge_vxm_u16m2_tu(vuint16m2_t vd, vuint16m2_t vs2,
                                     uint16_t rs1, vbool8_t v0, size_t vl) {
  return __riscv_vmerge_vxm_u16m2_tu(vd, vs2, rs1, v0, vl);
}

vuint16m4_t test_vmerge_vvm_u16m4_tu(vuint16m4_t vd, vuint16m4_t vs2,
                                     vuint16m4_t vs1, vbool4_t v0, size_t vl) {
  return __riscv_vmerge_vvm_u16m4_tu(vd, vs2, vs1, v0, vl);
}

vuint16m4_t test_vmerge_vxm_u16m4_tu(vuint16m4_t vd, vuint16m4_t vs2,
                                     uint16_t rs1, vbool4_t v0, size_t vl) {
  return __riscv_vmerge_vxm_u16m4_tu(vd, vs2, rs1, v0, vl);
}

vuint16m8_t test_vmerge_vvm_u16m8_tu(vuint16m8_t vd, vuint16m8_t vs2,
                                     vuint16m8_t vs1, vbool2_t v0, size_t vl) {
  return __riscv_vmerge_vvm_u16m8_tu(vd, vs2, vs1, v0, vl);
}

vuint16m8_t test_vmerge_vxm_u16m8_tu(vuint16m8_t vd, vuint16m8_t vs2,
                                     uint16_t rs1, vbool2_t v0, size_t vl) {
  return __riscv_vmerge_vxm_u16m8_tu(vd, vs2, rs1, v0, vl);
}

vuint32mf2_t test_vmerge_vvm_u32mf2_tu(vuint32mf2_t vd, vuint32mf2_t vs2,
                                       vuint32mf2_t vs1, vbool64_t v0,
                                       size_t vl) {
  return __riscv_vmerge_vvm_u32mf2_tu(vd, vs2, vs1, v0, vl);
}

vuint32mf2_t test_vmerge_vxm_u32mf2_tu(vuint32mf2_t vd, vuint32mf2_t vs2,
                                       uint32_t rs1, vbool64_t v0, size_t vl) {
  return __riscv_vmerge_vxm_u32mf2_tu(vd, vs2, rs1, v0, vl);
}

vuint32m1_t test_vmerge_vvm_u32m1_tu(vuint32m1_t vd, vuint32m1_t vs2,
                                     vuint32m1_t vs1, vbool32_t v0, size_t vl) {
  return __riscv_vmerge_vvm_u32m1_tu(vd, vs2, vs1, v0, vl);
}

vuint32m1_t test_vmerge_vxm_u32m1_tu(vuint32m1_t vd, vuint32m1_t vs2,
                                     uint32_t rs1, vbool32_t v0, size_t vl) {
  return __riscv_vmerge_vxm_u32m1_tu(vd, vs2, rs1, v0, vl);
}

vuint32m2_t test_vmerge_vvm_u32m2_tu(vuint32m2_t vd, vuint32m2_t vs2,
                                     vuint32m2_t vs1, vbool16_t v0, size_t vl) {
  return __riscv_vmerge_vvm_u32m2_tu(vd, vs2, vs1, v0, vl);
}

vuint32m2_t test_vmerge_vxm_u32m2_tu(vuint32m2_t vd, vuint32m2_t vs2,
                                     uint32_t rs1, vbool16_t v0, size_t vl) {
  return __riscv_vmerge_vxm_u32m2_tu(vd, vs2, rs1, v0, vl);
}

vuint32m4_t test_vmerge_vvm_u32m4_tu(vuint32m4_t vd, vuint32m4_t vs2,
                                     vuint32m4_t vs1, vbool8_t v0, size_t vl) {
  return __riscv_vmerge_vvm_u32m4_tu(vd, vs2, vs1, v0, vl);
}

vuint32m4_t test_vmerge_vxm_u32m4_tu(vuint32m4_t vd, vuint32m4_t vs2,
                                     uint32_t rs1, vbool8_t v0, size_t vl) {
  return __riscv_vmerge_vxm_u32m4_tu(vd, vs2, rs1, v0, vl);
}

vuint32m8_t test_vmerge_vvm_u32m8_tu(vuint32m8_t vd, vuint32m8_t vs2,
                                     vuint32m8_t vs1, vbool4_t v0, size_t vl) {
  return __riscv_vmerge_vvm_u32m8_tu(vd, vs2, vs1, v0, vl);
}

vuint32m8_t test_vmerge_vxm_u32m8_tu(vuint32m8_t vd, vuint32m8_t vs2,
                                     uint32_t rs1, vbool4_t v0, size_t vl) {
  return __riscv_vmerge_vxm_u32m8_tu(vd, vs2, rs1, v0, vl);
}

vuint64m1_t test_vmerge_vvm_u64m1_tu(vuint64m1_t vd, vuint64m1_t vs2,
                                     vuint64m1_t vs1, vbool64_t v0, size_t vl) {
  return __riscv_vmerge_vvm_u64m1_tu(vd, vs2, vs1, v0, vl);
}

vuint64m1_t test_vmerge_vxm_u64m1_tu(vuint64m1_t vd, vuint64m1_t vs2,
                                     uint64_t rs1, vbool64_t v0, size_t vl) {
  return __riscv_vmerge_vxm_u64m1_tu(vd, vs2, rs1, v0, vl);
}

vuint64m2_t test_vmerge_vvm_u64m2_tu(vuint64m2_t vd, vuint64m2_t vs2,
                                     vuint64m2_t vs1, vbool32_t v0, size_t vl) {
  return __riscv_vmerge_vvm_u64m2_tu(vd, vs2, vs1, v0, vl);
}

vuint64m2_t test_vmerge_vxm_u64m2_tu(vuint64m2_t vd, vuint64m2_t vs2,
                                     uint64_t rs1, vbool32_t v0, size_t vl) {
  return __riscv_vmerge_vxm_u64m2_tu(vd, vs2, rs1, v0, vl);
}

vuint64m4_t test_vmerge_vvm_u64m4_tu(vuint64m4_t vd, vuint64m4_t vs2,
                                     vuint64m4_t vs1, vbool16_t v0, size_t vl) {
  return __riscv_vmerge_vvm_u64m4_tu(vd, vs2, vs1, v0, vl);
}

vuint64m4_t test_vmerge_vxm_u64m4_tu(vuint64m4_t vd, vuint64m4_t vs2,
                                     uint64_t rs1, vbool16_t v0, size_t vl) {
  return __riscv_vmerge_vxm_u64m4_tu(vd, vs2, rs1, v0, vl);
}

vuint64m8_t test_vmerge_vvm_u64m8_tu(vuint64m8_t vd, vuint64m8_t vs2,
                                     vuint64m8_t vs1, vbool8_t v0, size_t vl) {
  return __riscv_vmerge_vvm_u64m8_tu(vd, vs2, vs1, v0, vl);
}

vuint64m8_t test_vmerge_vxm_u64m8_tu(vuint64m8_t vd, vuint64m8_t vs2,
                                     uint64_t rs1, vbool8_t v0, size_t vl) {
  return __riscv_vmerge_vxm_u64m8_tu(vd, vs2, rs1, v0, vl);
}

vfloat16mf4_t test_vmerge_vvm_f16mf4_tu(vfloat16mf4_t vd, vfloat16mf4_t vs2,
                                        vfloat16mf4_t vs1, vbool64_t v0,
                                        size_t vl) {
  return __riscv_vmerge_vvm_f16mf4_tu(vd, vs2, vs1, v0, vl);
}

vfloat16mf2_t test_vmerge_vvm_f16mf2_tu(vfloat16mf2_t vd, vfloat16mf2_t vs2,
                                        vfloat16mf2_t vs1, vbool32_t v0,
                                        size_t vl) {
  return __riscv_vmerge_vvm_f16mf2_tu(vd, vs2, vs1, v0, vl);
}

vfloat16m1_t test_vmerge_vvm_f16m1_tu(vfloat16m1_t vd, vfloat16m1_t vs2,
                                      vfloat16m1_t vs1, vbool16_t v0,
                                      size_t vl) {
  return __riscv_vmerge_vvm_f16m1_tu(vd, vs2, vs1, v0, vl);
}

vfloat16m2_t test_vmerge_vvm_f16m2_tu(vfloat16m2_t vd, vfloat16m2_t vs2,
                                      vfloat16m2_t vs1, vbool8_t v0,
                                      size_t vl) {
  return __riscv_vmerge_vvm_f16m2_tu(vd, vs2, vs1, v0, vl);
}

vfloat16m4_t test_vmerge_vvm_f16m4_tu(vfloat16m4_t vd, vfloat16m4_t vs2,
                                      vfloat16m4_t vs1, vbool4_t v0,
                                      size_t vl) {
  return __riscv_vmerge_vvm_f16m4_tu(vd, vs2, vs1, v0, vl);
}

vfloat16m8_t test_vmerge_vvm_f16m8_tu(vfloat16m8_t vd, vfloat16m8_t vs2,
                                      vfloat16m8_t vs1, vbool2_t v0,
                                      size_t vl) {
  return __riscv_vmerge_vvm_f16m8_tu(vd, vs2, vs1, v0, vl);
}

vfloat32mf2_t test_vmerge_vvm_f32mf2_tu(vfloat32mf2_t vd, vfloat32mf2_t vs2,
                                        vfloat32mf2_t vs1, vbool64_t v0,
                                        size_t vl) {
  return __riscv_vmerge_vvm_f32mf2_tu(vd, vs2, vs1, v0, vl);
}

vfloat32m1_t test_vmerge_vvm_f32m1_tu(vfloat32m1_t vd, vfloat32m1_t vs2,
                                      vfloat32m1_t vs1, vbool32_t v0,
                                      size_t vl) {
  return __riscv_vmerge_vvm_f32m1_tu(vd, vs2, vs1, v0, vl);
}

vfloat32m2_t test_vmerge_vvm_f32m2_tu(vfloat32m2_t vd, vfloat32m2_t vs2,
                                      vfloat32m2_t vs1, vbool16_t v0,
                                      size_t vl) {
  return __riscv_vmerge_vvm_f32m2_tu(vd, vs2, vs1, v0, vl);
}

vfloat32m4_t test_vmerge_vvm_f32m4_tu(vfloat32m4_t vd, vfloat32m4_t vs2,
                                      vfloat32m4_t vs1, vbool8_t v0,
                                      size_t vl) {
  return __riscv_vmerge_vvm_f32m4_tu(vd, vs2, vs1, v0, vl);
}

vfloat32m8_t test_vmerge_vvm_f32m8_tu(vfloat32m8_t vd, vfloat32m8_t vs2,
                                      vfloat32m8_t vs1, vbool4_t v0,
                                      size_t vl) {
  return __riscv_vmerge_vvm_f32m8_tu(vd, vs2, vs1, v0, vl);
}

vfloat64m1_t test_vmerge_vvm_f64m1_tu(vfloat64m1_t vd, vfloat64m1_t vs2,
                                      vfloat64m1_t vs1, vbool64_t v0,
                                      size_t vl) {
  return __riscv_vmerge_vvm_f64m1_tu(vd, vs2, vs1, v0, vl);
}

vfloat64m2_t test_vmerge_vvm_f64m2_tu(vfloat64m2_t vd, vfloat64m2_t vs2,
                                      vfloat64m2_t vs1, vbool32_t v0,
                                      size_t vl) {
  return __riscv_vmerge_vvm_f64m2_tu(vd, vs2, vs1, v0, vl);
}

vfloat64m4_t test_vmerge_vvm_f64m4_tu(vfloat64m4_t vd, vfloat64m4_t vs2,
                                      vfloat64m4_t vs1, vbool16_t v0,
                                      size_t vl) {
  return __riscv_vmerge_vvm_f64m4_tu(vd, vs2, vs1, v0, vl);
}

vfloat64m8_t test_vmerge_vvm_f64m8_tu(vfloat64m8_t vd, vfloat64m8_t vs2,
                                      vfloat64m8_t vs1, vbool8_t v0,
                                      size_t vl) {
  return __riscv_vmerge_vvm_f64m8_tu(vd, vs2, vs1, v0, vl);
}
