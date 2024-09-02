// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -target-feature +zfh \
// RUN:   -target-feature +zvfh -disable-O0-optnone \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

vbool64_t test_vmseq_vv_i8mf8_b64(vint8mf8_t vs2, vint8mf8_t vs1, size_t vl) {
  return __riscv_vmseq(vs2, vs1, vl);
}

vbool64_t test_vmseq_vx_i8mf8_b64(vint8mf8_t vs2, int8_t rs1, size_t vl) {
  return __riscv_vmseq(vs2, rs1, vl);
}

vbool32_t test_vmseq_vv_i8mf4_b32(vint8mf4_t vs2, vint8mf4_t vs1, size_t vl) {
  return __riscv_vmseq(vs2, vs1, vl);
}

vbool32_t test_vmseq_vx_i8mf4_b32(vint8mf4_t vs2, int8_t rs1, size_t vl) {
  return __riscv_vmseq(vs2, rs1, vl);
}

vbool16_t test_vmseq_vv_i8mf2_b16(vint8mf2_t vs2, vint8mf2_t vs1, size_t vl) {
  return __riscv_vmseq(vs2, vs1, vl);
}

vbool16_t test_vmseq_vx_i8mf2_b16(vint8mf2_t vs2, int8_t rs1, size_t vl) {
  return __riscv_vmseq(vs2, rs1, vl);
}

vbool8_t test_vmseq_vv_i8m1_b8(vint8m1_t vs2, vint8m1_t vs1, size_t vl) {
  return __riscv_vmseq(vs2, vs1, vl);
}

vbool8_t test_vmseq_vx_i8m1_b8(vint8m1_t vs2, int8_t rs1, size_t vl) {
  return __riscv_vmseq(vs2, rs1, vl);
}

vbool4_t test_vmseq_vv_i8m2_b4(vint8m2_t vs2, vint8m2_t vs1, size_t vl) {
  return __riscv_vmseq(vs2, vs1, vl);
}

vbool4_t test_vmseq_vx_i8m2_b4(vint8m2_t vs2, int8_t rs1, size_t vl) {
  return __riscv_vmseq(vs2, rs1, vl);
}

vbool2_t test_vmseq_vv_i8m4_b2(vint8m4_t vs2, vint8m4_t vs1, size_t vl) {
  return __riscv_vmseq(vs2, vs1, vl);
}

vbool2_t test_vmseq_vx_i8m4_b2(vint8m4_t vs2, int8_t rs1, size_t vl) {
  return __riscv_vmseq(vs2, rs1, vl);
}

vbool1_t test_vmseq_vv_i8m8_b1(vint8m8_t vs2, vint8m8_t vs1, size_t vl) {
  return __riscv_vmseq(vs2, vs1, vl);
}

vbool1_t test_vmseq_vx_i8m8_b1(vint8m8_t vs2, int8_t rs1, size_t vl) {
  return __riscv_vmseq(vs2, rs1, vl);
}

vbool64_t test_vmseq_vv_i16mf4_b64(vint16mf4_t vs2, vint16mf4_t vs1,
                                   size_t vl) {
  return __riscv_vmseq(vs2, vs1, vl);
}

vbool64_t test_vmseq_vx_i16mf4_b64(vint16mf4_t vs2, int16_t rs1, size_t vl) {
  return __riscv_vmseq(vs2, rs1, vl);
}

vbool32_t test_vmseq_vv_i16mf2_b32(vint16mf2_t vs2, vint16mf2_t vs1,
                                   size_t vl) {
  return __riscv_vmseq(vs2, vs1, vl);
}

vbool32_t test_vmseq_vx_i16mf2_b32(vint16mf2_t vs2, int16_t rs1, size_t vl) {
  return __riscv_vmseq(vs2, rs1, vl);
}

vbool16_t test_vmseq_vv_i16m1_b16(vint16m1_t vs2, vint16m1_t vs1, size_t vl) {
  return __riscv_vmseq(vs2, vs1, vl);
}

vbool16_t test_vmseq_vx_i16m1_b16(vint16m1_t vs2, int16_t rs1, size_t vl) {
  return __riscv_vmseq(vs2, rs1, vl);
}

vbool8_t test_vmseq_vv_i16m2_b8(vint16m2_t vs2, vint16m2_t vs1, size_t vl) {
  return __riscv_vmseq(vs2, vs1, vl);
}

vbool8_t test_vmseq_vx_i16m2_b8(vint16m2_t vs2, int16_t rs1, size_t vl) {
  return __riscv_vmseq(vs2, rs1, vl);
}

vbool4_t test_vmseq_vv_i16m4_b4(vint16m4_t vs2, vint16m4_t vs1, size_t vl) {
  return __riscv_vmseq(vs2, vs1, vl);
}

vbool4_t test_vmseq_vx_i16m4_b4(vint16m4_t vs2, int16_t rs1, size_t vl) {
  return __riscv_vmseq(vs2, rs1, vl);
}

vbool2_t test_vmseq_vv_i16m8_b2(vint16m8_t vs2, vint16m8_t vs1, size_t vl) {
  return __riscv_vmseq(vs2, vs1, vl);
}

vbool2_t test_vmseq_vx_i16m8_b2(vint16m8_t vs2, int16_t rs1, size_t vl) {
  return __riscv_vmseq(vs2, rs1, vl);
}

vbool64_t test_vmseq_vv_i32mf2_b64(vint32mf2_t vs2, vint32mf2_t vs1,
                                   size_t vl) {
  return __riscv_vmseq(vs2, vs1, vl);
}

vbool64_t test_vmseq_vx_i32mf2_b64(vint32mf2_t vs2, int32_t rs1, size_t vl) {
  return __riscv_vmseq(vs2, rs1, vl);
}

vbool32_t test_vmseq_vv_i32m1_b32(vint32m1_t vs2, vint32m1_t vs1, size_t vl) {
  return __riscv_vmseq(vs2, vs1, vl);
}

vbool32_t test_vmseq_vx_i32m1_b32(vint32m1_t vs2, int32_t rs1, size_t vl) {
  return __riscv_vmseq(vs2, rs1, vl);
}

vbool16_t test_vmseq_vv_i32m2_b16(vint32m2_t vs2, vint32m2_t vs1, size_t vl) {
  return __riscv_vmseq(vs2, vs1, vl);
}

vbool16_t test_vmseq_vx_i32m2_b16(vint32m2_t vs2, int32_t rs1, size_t vl) {
  return __riscv_vmseq(vs2, rs1, vl);
}

vbool8_t test_vmseq_vv_i32m4_b8(vint32m4_t vs2, vint32m4_t vs1, size_t vl) {
  return __riscv_vmseq(vs2, vs1, vl);
}

vbool8_t test_vmseq_vx_i32m4_b8(vint32m4_t vs2, int32_t rs1, size_t vl) {
  return __riscv_vmseq(vs2, rs1, vl);
}

vbool4_t test_vmseq_vv_i32m8_b4(vint32m8_t vs2, vint32m8_t vs1, size_t vl) {
  return __riscv_vmseq(vs2, vs1, vl);
}

vbool4_t test_vmseq_vx_i32m8_b4(vint32m8_t vs2, int32_t rs1, size_t vl) {
  return __riscv_vmseq(vs2, rs1, vl);
}

vbool64_t test_vmseq_vv_i64m1_b64(vint64m1_t vs2, vint64m1_t vs1, size_t vl) {
  return __riscv_vmseq(vs2, vs1, vl);
}

vbool64_t test_vmseq_vx_i64m1_b64(vint64m1_t vs2, int64_t rs1, size_t vl) {
  return __riscv_vmseq(vs2, rs1, vl);
}

vbool32_t test_vmseq_vv_i64m2_b32(vint64m2_t vs2, vint64m2_t vs1, size_t vl) {
  return __riscv_vmseq(vs2, vs1, vl);
}

vbool32_t test_vmseq_vx_i64m2_b32(vint64m2_t vs2, int64_t rs1, size_t vl) {
  return __riscv_vmseq(vs2, rs1, vl);
}

vbool16_t test_vmseq_vv_i64m4_b16(vint64m4_t vs2, vint64m4_t vs1, size_t vl) {
  return __riscv_vmseq(vs2, vs1, vl);
}

vbool16_t test_vmseq_vx_i64m4_b16(vint64m4_t vs2, int64_t rs1, size_t vl) {
  return __riscv_vmseq(vs2, rs1, vl);
}

vbool8_t test_vmseq_vv_i64m8_b8(vint64m8_t vs2, vint64m8_t vs1, size_t vl) {
  return __riscv_vmseq(vs2, vs1, vl);
}

vbool8_t test_vmseq_vx_i64m8_b8(vint64m8_t vs2, int64_t rs1, size_t vl) {
  return __riscv_vmseq(vs2, rs1, vl);
}

vbool64_t test_vmseq_vv_u8mf8_b64(vuint8mf8_t vs2, vuint8mf8_t vs1, size_t vl) {
  return __riscv_vmseq(vs2, vs1, vl);
}

vbool64_t test_vmseq_vx_u8mf8_b64(vuint8mf8_t vs2, uint8_t rs1, size_t vl) {
  return __riscv_vmseq(vs2, rs1, vl);
}

vbool32_t test_vmseq_vv_u8mf4_b32(vuint8mf4_t vs2, vuint8mf4_t vs1, size_t vl) {
  return __riscv_vmseq(vs2, vs1, vl);
}

vbool32_t test_vmseq_vx_u8mf4_b32(vuint8mf4_t vs2, uint8_t rs1, size_t vl) {
  return __riscv_vmseq(vs2, rs1, vl);
}

vbool16_t test_vmseq_vv_u8mf2_b16(vuint8mf2_t vs2, vuint8mf2_t vs1, size_t vl) {
  return __riscv_vmseq(vs2, vs1, vl);
}

vbool16_t test_vmseq_vx_u8mf2_b16(vuint8mf2_t vs2, uint8_t rs1, size_t vl) {
  return __riscv_vmseq(vs2, rs1, vl);
}

vbool8_t test_vmseq_vv_u8m1_b8(vuint8m1_t vs2, vuint8m1_t vs1, size_t vl) {
  return __riscv_vmseq(vs2, vs1, vl);
}

vbool8_t test_vmseq_vx_u8m1_b8(vuint8m1_t vs2, uint8_t rs1, size_t vl) {
  return __riscv_vmseq(vs2, rs1, vl);
}

vbool4_t test_vmseq_vv_u8m2_b4(vuint8m2_t vs2, vuint8m2_t vs1, size_t vl) {
  return __riscv_vmseq(vs2, vs1, vl);
}

vbool4_t test_vmseq_vx_u8m2_b4(vuint8m2_t vs2, uint8_t rs1, size_t vl) {
  return __riscv_vmseq(vs2, rs1, vl);
}

vbool2_t test_vmseq_vv_u8m4_b2(vuint8m4_t vs2, vuint8m4_t vs1, size_t vl) {
  return __riscv_vmseq(vs2, vs1, vl);
}

vbool2_t test_vmseq_vx_u8m4_b2(vuint8m4_t vs2, uint8_t rs1, size_t vl) {
  return __riscv_vmseq(vs2, rs1, vl);
}

vbool1_t test_vmseq_vv_u8m8_b1(vuint8m8_t vs2, vuint8m8_t vs1, size_t vl) {
  return __riscv_vmseq(vs2, vs1, vl);
}

vbool1_t test_vmseq_vx_u8m8_b1(vuint8m8_t vs2, uint8_t rs1, size_t vl) {
  return __riscv_vmseq(vs2, rs1, vl);
}

vbool64_t test_vmseq_vv_u16mf4_b64(vuint16mf4_t vs2, vuint16mf4_t vs1,
                                   size_t vl) {
  return __riscv_vmseq(vs2, vs1, vl);
}

vbool64_t test_vmseq_vx_u16mf4_b64(vuint16mf4_t vs2, uint16_t rs1, size_t vl) {
  return __riscv_vmseq(vs2, rs1, vl);
}

vbool32_t test_vmseq_vv_u16mf2_b32(vuint16mf2_t vs2, vuint16mf2_t vs1,
                                   size_t vl) {
  return __riscv_vmseq(vs2, vs1, vl);
}

vbool32_t test_vmseq_vx_u16mf2_b32(vuint16mf2_t vs2, uint16_t rs1, size_t vl) {
  return __riscv_vmseq(vs2, rs1, vl);
}

vbool16_t test_vmseq_vv_u16m1_b16(vuint16m1_t vs2, vuint16m1_t vs1, size_t vl) {
  return __riscv_vmseq(vs2, vs1, vl);
}

vbool16_t test_vmseq_vx_u16m1_b16(vuint16m1_t vs2, uint16_t rs1, size_t vl) {
  return __riscv_vmseq(vs2, rs1, vl);
}

vbool8_t test_vmseq_vv_u16m2_b8(vuint16m2_t vs2, vuint16m2_t vs1, size_t vl) {
  return __riscv_vmseq(vs2, vs1, vl);
}

vbool8_t test_vmseq_vx_u16m2_b8(vuint16m2_t vs2, uint16_t rs1, size_t vl) {
  return __riscv_vmseq(vs2, rs1, vl);
}

vbool4_t test_vmseq_vv_u16m4_b4(vuint16m4_t vs2, vuint16m4_t vs1, size_t vl) {
  return __riscv_vmseq(vs2, vs1, vl);
}

vbool4_t test_vmseq_vx_u16m4_b4(vuint16m4_t vs2, uint16_t rs1, size_t vl) {
  return __riscv_vmseq(vs2, rs1, vl);
}

vbool2_t test_vmseq_vv_u16m8_b2(vuint16m8_t vs2, vuint16m8_t vs1, size_t vl) {
  return __riscv_vmseq(vs2, vs1, vl);
}

vbool2_t test_vmseq_vx_u16m8_b2(vuint16m8_t vs2, uint16_t rs1, size_t vl) {
  return __riscv_vmseq(vs2, rs1, vl);
}

vbool64_t test_vmseq_vv_u32mf2_b64(vuint32mf2_t vs2, vuint32mf2_t vs1,
                                   size_t vl) {
  return __riscv_vmseq(vs2, vs1, vl);
}

vbool64_t test_vmseq_vx_u32mf2_b64(vuint32mf2_t vs2, uint32_t rs1, size_t vl) {
  return __riscv_vmseq(vs2, rs1, vl);
}

vbool32_t test_vmseq_vv_u32m1_b32(vuint32m1_t vs2, vuint32m1_t vs1, size_t vl) {
  return __riscv_vmseq(vs2, vs1, vl);
}

vbool32_t test_vmseq_vx_u32m1_b32(vuint32m1_t vs2, uint32_t rs1, size_t vl) {
  return __riscv_vmseq(vs2, rs1, vl);
}

vbool16_t test_vmseq_vv_u32m2_b16(vuint32m2_t vs2, vuint32m2_t vs1, size_t vl) {
  return __riscv_vmseq(vs2, vs1, vl);
}

vbool16_t test_vmseq_vx_u32m2_b16(vuint32m2_t vs2, uint32_t rs1, size_t vl) {
  return __riscv_vmseq(vs2, rs1, vl);
}

vbool8_t test_vmseq_vv_u32m4_b8(vuint32m4_t vs2, vuint32m4_t vs1, size_t vl) {
  return __riscv_vmseq(vs2, vs1, vl);
}

vbool8_t test_vmseq_vx_u32m4_b8(vuint32m4_t vs2, uint32_t rs1, size_t vl) {
  return __riscv_vmseq(vs2, rs1, vl);
}

vbool4_t test_vmseq_vv_u32m8_b4(vuint32m8_t vs2, vuint32m8_t vs1, size_t vl) {
  return __riscv_vmseq(vs2, vs1, vl);
}

vbool4_t test_vmseq_vx_u32m8_b4(vuint32m8_t vs2, uint32_t rs1, size_t vl) {
  return __riscv_vmseq(vs2, rs1, vl);
}

vbool64_t test_vmseq_vv_u64m1_b64(vuint64m1_t vs2, vuint64m1_t vs1, size_t vl) {
  return __riscv_vmseq(vs2, vs1, vl);
}

vbool64_t test_vmseq_vx_u64m1_b64(vuint64m1_t vs2, uint64_t rs1, size_t vl) {
  return __riscv_vmseq(vs2, rs1, vl);
}

vbool32_t test_vmseq_vv_u64m2_b32(vuint64m2_t vs2, vuint64m2_t vs1, size_t vl) {
  return __riscv_vmseq(vs2, vs1, vl);
}

vbool32_t test_vmseq_vx_u64m2_b32(vuint64m2_t vs2, uint64_t rs1, size_t vl) {
  return __riscv_vmseq(vs2, rs1, vl);
}

vbool16_t test_vmseq_vv_u64m4_b16(vuint64m4_t vs2, vuint64m4_t vs1, size_t vl) {
  return __riscv_vmseq(vs2, vs1, vl);
}

vbool16_t test_vmseq_vx_u64m4_b16(vuint64m4_t vs2, uint64_t rs1, size_t vl) {
  return __riscv_vmseq(vs2, rs1, vl);
}

vbool8_t test_vmseq_vv_u64m8_b8(vuint64m8_t vs2, vuint64m8_t vs1, size_t vl) {
  return __riscv_vmseq(vs2, vs1, vl);
}

vbool8_t test_vmseq_vx_u64m8_b8(vuint64m8_t vs2, uint64_t rs1, size_t vl) {
  return __riscv_vmseq(vs2, rs1, vl);
}

vbool64_t test_vmseq_vv_i8mf8_b64_m(vbool64_t vm, vint8mf8_t vs2,
                                    vint8mf8_t vs1, size_t vl) {
  return __riscv_vmseq(vm, vs2, vs1, vl);
}

vbool64_t test_vmseq_vx_i8mf8_b64_m(vbool64_t vm, vint8mf8_t vs2, int8_t rs1,
                                    size_t vl) {
  return __riscv_vmseq(vm, vs2, rs1, vl);
}

vbool32_t test_vmseq_vv_i8mf4_b32_m(vbool32_t vm, vint8mf4_t vs2,
                                    vint8mf4_t vs1, size_t vl) {
  return __riscv_vmseq(vm, vs2, vs1, vl);
}

vbool32_t test_vmseq_vx_i8mf4_b32_m(vbool32_t vm, vint8mf4_t vs2, int8_t rs1,
                                    size_t vl) {
  return __riscv_vmseq(vm, vs2, rs1, vl);
}

vbool16_t test_vmseq_vv_i8mf2_b16_m(vbool16_t vm, vint8mf2_t vs2,
                                    vint8mf2_t vs1, size_t vl) {
  return __riscv_vmseq(vm, vs2, vs1, vl);
}

vbool16_t test_vmseq_vx_i8mf2_b16_m(vbool16_t vm, vint8mf2_t vs2, int8_t rs1,
                                    size_t vl) {
  return __riscv_vmseq(vm, vs2, rs1, vl);
}

vbool8_t test_vmseq_vv_i8m1_b8_m(vbool8_t vm, vint8m1_t vs2, vint8m1_t vs1,
                                 size_t vl) {
  return __riscv_vmseq(vm, vs2, vs1, vl);
}

vbool8_t test_vmseq_vx_i8m1_b8_m(vbool8_t vm, vint8m1_t vs2, int8_t rs1,
                                 size_t vl) {
  return __riscv_vmseq(vm, vs2, rs1, vl);
}

vbool4_t test_vmseq_vv_i8m2_b4_m(vbool4_t vm, vint8m2_t vs2, vint8m2_t vs1,
                                 size_t vl) {
  return __riscv_vmseq(vm, vs2, vs1, vl);
}

vbool4_t test_vmseq_vx_i8m2_b4_m(vbool4_t vm, vint8m2_t vs2, int8_t rs1,
                                 size_t vl) {
  return __riscv_vmseq(vm, vs2, rs1, vl);
}

vbool2_t test_vmseq_vv_i8m4_b2_m(vbool2_t vm, vint8m4_t vs2, vint8m4_t vs1,
                                 size_t vl) {
  return __riscv_vmseq(vm, vs2, vs1, vl);
}

vbool2_t test_vmseq_vx_i8m4_b2_m(vbool2_t vm, vint8m4_t vs2, int8_t rs1,
                                 size_t vl) {
  return __riscv_vmseq(vm, vs2, rs1, vl);
}

vbool1_t test_vmseq_vv_i8m8_b1_m(vbool1_t vm, vint8m8_t vs2, vint8m8_t vs1,
                                 size_t vl) {
  return __riscv_vmseq(vm, vs2, vs1, vl);
}

vbool1_t test_vmseq_vx_i8m8_b1_m(vbool1_t vm, vint8m8_t vs2, int8_t rs1,
                                 size_t vl) {
  return __riscv_vmseq(vm, vs2, rs1, vl);
}

vbool64_t test_vmseq_vv_i16mf4_b64_m(vbool64_t vm, vint16mf4_t vs2,
                                     vint16mf4_t vs1, size_t vl) {
  return __riscv_vmseq(vm, vs2, vs1, vl);
}

vbool64_t test_vmseq_vx_i16mf4_b64_m(vbool64_t vm, vint16mf4_t vs2, int16_t rs1,
                                     size_t vl) {
  return __riscv_vmseq(vm, vs2, rs1, vl);
}

vbool32_t test_vmseq_vv_i16mf2_b32_m(vbool32_t vm, vint16mf2_t vs2,
                                     vint16mf2_t vs1, size_t vl) {
  return __riscv_vmseq(vm, vs2, vs1, vl);
}

vbool32_t test_vmseq_vx_i16mf2_b32_m(vbool32_t vm, vint16mf2_t vs2, int16_t rs1,
                                     size_t vl) {
  return __riscv_vmseq(vm, vs2, rs1, vl);
}

vbool16_t test_vmseq_vv_i16m1_b16_m(vbool16_t vm, vint16m1_t vs2,
                                    vint16m1_t vs1, size_t vl) {
  return __riscv_vmseq(vm, vs2, vs1, vl);
}

vbool16_t test_vmseq_vx_i16m1_b16_m(vbool16_t vm, vint16m1_t vs2, int16_t rs1,
                                    size_t vl) {
  return __riscv_vmseq(vm, vs2, rs1, vl);
}

vbool8_t test_vmseq_vv_i16m2_b8_m(vbool8_t vm, vint16m2_t vs2, vint16m2_t vs1,
                                  size_t vl) {
  return __riscv_vmseq(vm, vs2, vs1, vl);
}

vbool8_t test_vmseq_vx_i16m2_b8_m(vbool8_t vm, vint16m2_t vs2, int16_t rs1,
                                  size_t vl) {
  return __riscv_vmseq(vm, vs2, rs1, vl);
}

vbool4_t test_vmseq_vv_i16m4_b4_m(vbool4_t vm, vint16m4_t vs2, vint16m4_t vs1,
                                  size_t vl) {
  return __riscv_vmseq(vm, vs2, vs1, vl);
}

vbool4_t test_vmseq_vx_i16m4_b4_m(vbool4_t vm, vint16m4_t vs2, int16_t rs1,
                                  size_t vl) {
  return __riscv_vmseq(vm, vs2, rs1, vl);
}

vbool2_t test_vmseq_vv_i16m8_b2_m(vbool2_t vm, vint16m8_t vs2, vint16m8_t vs1,
                                  size_t vl) {
  return __riscv_vmseq(vm, vs2, vs1, vl);
}

vbool2_t test_vmseq_vx_i16m8_b2_m(vbool2_t vm, vint16m8_t vs2, int16_t rs1,
                                  size_t vl) {
  return __riscv_vmseq(vm, vs2, rs1, vl);
}

vbool64_t test_vmseq_vv_i32mf2_b64_m(vbool64_t vm, vint32mf2_t vs2,
                                     vint32mf2_t vs1, size_t vl) {
  return __riscv_vmseq(vm, vs2, vs1, vl);
}

vbool64_t test_vmseq_vx_i32mf2_b64_m(vbool64_t vm, vint32mf2_t vs2, int32_t rs1,
                                     size_t vl) {
  return __riscv_vmseq(vm, vs2, rs1, vl);
}

vbool32_t test_vmseq_vv_i32m1_b32_m(vbool32_t vm, vint32m1_t vs2,
                                    vint32m1_t vs1, size_t vl) {
  return __riscv_vmseq(vm, vs2, vs1, vl);
}

vbool32_t test_vmseq_vx_i32m1_b32_m(vbool32_t vm, vint32m1_t vs2, int32_t rs1,
                                    size_t vl) {
  return __riscv_vmseq(vm, vs2, rs1, vl);
}

vbool16_t test_vmseq_vv_i32m2_b16_m(vbool16_t vm, vint32m2_t vs2,
                                    vint32m2_t vs1, size_t vl) {
  return __riscv_vmseq(vm, vs2, vs1, vl);
}

vbool16_t test_vmseq_vx_i32m2_b16_m(vbool16_t vm, vint32m2_t vs2, int32_t rs1,
                                    size_t vl) {
  return __riscv_vmseq(vm, vs2, rs1, vl);
}

vbool8_t test_vmseq_vv_i32m4_b8_m(vbool8_t vm, vint32m4_t vs2, vint32m4_t vs1,
                                  size_t vl) {
  return __riscv_vmseq(vm, vs2, vs1, vl);
}

vbool8_t test_vmseq_vx_i32m4_b8_m(vbool8_t vm, vint32m4_t vs2, int32_t rs1,
                                  size_t vl) {
  return __riscv_vmseq(vm, vs2, rs1, vl);
}

vbool4_t test_vmseq_vv_i32m8_b4_m(vbool4_t vm, vint32m8_t vs2, vint32m8_t vs1,
                                  size_t vl) {
  return __riscv_vmseq(vm, vs2, vs1, vl);
}

vbool4_t test_vmseq_vx_i32m8_b4_m(vbool4_t vm, vint32m8_t vs2, int32_t rs1,
                                  size_t vl) {
  return __riscv_vmseq(vm, vs2, rs1, vl);
}

vbool64_t test_vmseq_vv_i64m1_b64_m(vbool64_t vm, vint64m1_t vs2,
                                    vint64m1_t vs1, size_t vl) {
  return __riscv_vmseq(vm, vs2, vs1, vl);
}

vbool64_t test_vmseq_vx_i64m1_b64_m(vbool64_t vm, vint64m1_t vs2, int64_t rs1,
                                    size_t vl) {
  return __riscv_vmseq(vm, vs2, rs1, vl);
}

vbool32_t test_vmseq_vv_i64m2_b32_m(vbool32_t vm, vint64m2_t vs2,
                                    vint64m2_t vs1, size_t vl) {
  return __riscv_vmseq(vm, vs2, vs1, vl);
}

vbool32_t test_vmseq_vx_i64m2_b32_m(vbool32_t vm, vint64m2_t vs2, int64_t rs1,
                                    size_t vl) {
  return __riscv_vmseq(vm, vs2, rs1, vl);
}

vbool16_t test_vmseq_vv_i64m4_b16_m(vbool16_t vm, vint64m4_t vs2,
                                    vint64m4_t vs1, size_t vl) {
  return __riscv_vmseq(vm, vs2, vs1, vl);
}

vbool16_t test_vmseq_vx_i64m4_b16_m(vbool16_t vm, vint64m4_t vs2, int64_t rs1,
                                    size_t vl) {
  return __riscv_vmseq(vm, vs2, rs1, vl);
}

vbool8_t test_vmseq_vv_i64m8_b8_m(vbool8_t vm, vint64m8_t vs2, vint64m8_t vs1,
                                  size_t vl) {
  return __riscv_vmseq(vm, vs2, vs1, vl);
}

vbool8_t test_vmseq_vx_i64m8_b8_m(vbool8_t vm, vint64m8_t vs2, int64_t rs1,
                                  size_t vl) {
  return __riscv_vmseq(vm, vs2, rs1, vl);
}

vbool64_t test_vmseq_vv_u8mf8_b64_m(vbool64_t vm, vuint8mf8_t vs2,
                                    vuint8mf8_t vs1, size_t vl) {
  return __riscv_vmseq(vm, vs2, vs1, vl);
}

vbool64_t test_vmseq_vx_u8mf8_b64_m(vbool64_t vm, vuint8mf8_t vs2, uint8_t rs1,
                                    size_t vl) {
  return __riscv_vmseq(vm, vs2, rs1, vl);
}

vbool32_t test_vmseq_vv_u8mf4_b32_m(vbool32_t vm, vuint8mf4_t vs2,
                                    vuint8mf4_t vs1, size_t vl) {
  return __riscv_vmseq(vm, vs2, vs1, vl);
}

vbool32_t test_vmseq_vx_u8mf4_b32_m(vbool32_t vm, vuint8mf4_t vs2, uint8_t rs1,
                                    size_t vl) {
  return __riscv_vmseq(vm, vs2, rs1, vl);
}

vbool16_t test_vmseq_vv_u8mf2_b16_m(vbool16_t vm, vuint8mf2_t vs2,
                                    vuint8mf2_t vs1, size_t vl) {
  return __riscv_vmseq(vm, vs2, vs1, vl);
}

vbool16_t test_vmseq_vx_u8mf2_b16_m(vbool16_t vm, vuint8mf2_t vs2, uint8_t rs1,
                                    size_t vl) {
  return __riscv_vmseq(vm, vs2, rs1, vl);
}

vbool8_t test_vmseq_vv_u8m1_b8_m(vbool8_t vm, vuint8m1_t vs2, vuint8m1_t vs1,
                                 size_t vl) {
  return __riscv_vmseq(vm, vs2, vs1, vl);
}

vbool8_t test_vmseq_vx_u8m1_b8_m(vbool8_t vm, vuint8m1_t vs2, uint8_t rs1,
                                 size_t vl) {
  return __riscv_vmseq(vm, vs2, rs1, vl);
}

vbool4_t test_vmseq_vv_u8m2_b4_m(vbool4_t vm, vuint8m2_t vs2, vuint8m2_t vs1,
                                 size_t vl) {
  return __riscv_vmseq(vm, vs2, vs1, vl);
}

vbool4_t test_vmseq_vx_u8m2_b4_m(vbool4_t vm, vuint8m2_t vs2, uint8_t rs1,
                                 size_t vl) {
  return __riscv_vmseq(vm, vs2, rs1, vl);
}

vbool2_t test_vmseq_vv_u8m4_b2_m(vbool2_t vm, vuint8m4_t vs2, vuint8m4_t vs1,
                                 size_t vl) {
  return __riscv_vmseq(vm, vs2, vs1, vl);
}

vbool2_t test_vmseq_vx_u8m4_b2_m(vbool2_t vm, vuint8m4_t vs2, uint8_t rs1,
                                 size_t vl) {
  return __riscv_vmseq(vm, vs2, rs1, vl);
}

vbool1_t test_vmseq_vv_u8m8_b1_m(vbool1_t vm, vuint8m8_t vs2, vuint8m8_t vs1,
                                 size_t vl) {
  return __riscv_vmseq(vm, vs2, vs1, vl);
}

vbool1_t test_vmseq_vx_u8m8_b1_m(vbool1_t vm, vuint8m8_t vs2, uint8_t rs1,
                                 size_t vl) {
  return __riscv_vmseq(vm, vs2, rs1, vl);
}

vbool64_t test_vmseq_vv_u16mf4_b64_m(vbool64_t vm, vuint16mf4_t vs2,
                                     vuint16mf4_t vs1, size_t vl) {
  return __riscv_vmseq(vm, vs2, vs1, vl);
}

vbool64_t test_vmseq_vx_u16mf4_b64_m(vbool64_t vm, vuint16mf4_t vs2,
                                     uint16_t rs1, size_t vl) {
  return __riscv_vmseq(vm, vs2, rs1, vl);
}

vbool32_t test_vmseq_vv_u16mf2_b32_m(vbool32_t vm, vuint16mf2_t vs2,
                                     vuint16mf2_t vs1, size_t vl) {
  return __riscv_vmseq(vm, vs2, vs1, vl);
}

vbool32_t test_vmseq_vx_u16mf2_b32_m(vbool32_t vm, vuint16mf2_t vs2,
                                     uint16_t rs1, size_t vl) {
  return __riscv_vmseq(vm, vs2, rs1, vl);
}

vbool16_t test_vmseq_vv_u16m1_b16_m(vbool16_t vm, vuint16m1_t vs2,
                                    vuint16m1_t vs1, size_t vl) {
  return __riscv_vmseq(vm, vs2, vs1, vl);
}

vbool16_t test_vmseq_vx_u16m1_b16_m(vbool16_t vm, vuint16m1_t vs2, uint16_t rs1,
                                    size_t vl) {
  return __riscv_vmseq(vm, vs2, rs1, vl);
}

vbool8_t test_vmseq_vv_u16m2_b8_m(vbool8_t vm, vuint16m2_t vs2, vuint16m2_t vs1,
                                  size_t vl) {
  return __riscv_vmseq(vm, vs2, vs1, vl);
}

vbool8_t test_vmseq_vx_u16m2_b8_m(vbool8_t vm, vuint16m2_t vs2, uint16_t rs1,
                                  size_t vl) {
  return __riscv_vmseq(vm, vs2, rs1, vl);
}

vbool4_t test_vmseq_vv_u16m4_b4_m(vbool4_t vm, vuint16m4_t vs2, vuint16m4_t vs1,
                                  size_t vl) {
  return __riscv_vmseq(vm, vs2, vs1, vl);
}

vbool4_t test_vmseq_vx_u16m4_b4_m(vbool4_t vm, vuint16m4_t vs2, uint16_t rs1,
                                  size_t vl) {
  return __riscv_vmseq(vm, vs2, rs1, vl);
}

vbool2_t test_vmseq_vv_u16m8_b2_m(vbool2_t vm, vuint16m8_t vs2, vuint16m8_t vs1,
                                  size_t vl) {
  return __riscv_vmseq(vm, vs2, vs1, vl);
}

vbool2_t test_vmseq_vx_u16m8_b2_m(vbool2_t vm, vuint16m8_t vs2, uint16_t rs1,
                                  size_t vl) {
  return __riscv_vmseq(vm, vs2, rs1, vl);
}

vbool64_t test_vmseq_vv_u32mf2_b64_m(vbool64_t vm, vuint32mf2_t vs2,
                                     vuint32mf2_t vs1, size_t vl) {
  return __riscv_vmseq(vm, vs2, vs1, vl);
}

vbool64_t test_vmseq_vx_u32mf2_b64_m(vbool64_t vm, vuint32mf2_t vs2,
                                     uint32_t rs1, size_t vl) {
  return __riscv_vmseq(vm, vs2, rs1, vl);
}

vbool32_t test_vmseq_vv_u32m1_b32_m(vbool32_t vm, vuint32m1_t vs2,
                                    vuint32m1_t vs1, size_t vl) {
  return __riscv_vmseq(vm, vs2, vs1, vl);
}

vbool32_t test_vmseq_vx_u32m1_b32_m(vbool32_t vm, vuint32m1_t vs2, uint32_t rs1,
                                    size_t vl) {
  return __riscv_vmseq(vm, vs2, rs1, vl);
}

vbool16_t test_vmseq_vv_u32m2_b16_m(vbool16_t vm, vuint32m2_t vs2,
                                    vuint32m2_t vs1, size_t vl) {
  return __riscv_vmseq(vm, vs2, vs1, vl);
}

vbool16_t test_vmseq_vx_u32m2_b16_m(vbool16_t vm, vuint32m2_t vs2, uint32_t rs1,
                                    size_t vl) {
  return __riscv_vmseq(vm, vs2, rs1, vl);
}

vbool8_t test_vmseq_vv_u32m4_b8_m(vbool8_t vm, vuint32m4_t vs2, vuint32m4_t vs1,
                                  size_t vl) {
  return __riscv_vmseq(vm, vs2, vs1, vl);
}

vbool8_t test_vmseq_vx_u32m4_b8_m(vbool8_t vm, vuint32m4_t vs2, uint32_t rs1,
                                  size_t vl) {
  return __riscv_vmseq(vm, vs2, rs1, vl);
}

vbool4_t test_vmseq_vv_u32m8_b4_m(vbool4_t vm, vuint32m8_t vs2, vuint32m8_t vs1,
                                  size_t vl) {
  return __riscv_vmseq(vm, vs2, vs1, vl);
}

vbool4_t test_vmseq_vx_u32m8_b4_m(vbool4_t vm, vuint32m8_t vs2, uint32_t rs1,
                                  size_t vl) {
  return __riscv_vmseq(vm, vs2, rs1, vl);
}

vbool64_t test_vmseq_vv_u64m1_b64_m(vbool64_t vm, vuint64m1_t vs2,
                                    vuint64m1_t vs1, size_t vl) {
  return __riscv_vmseq(vm, vs2, vs1, vl);
}

vbool64_t test_vmseq_vx_u64m1_b64_m(vbool64_t vm, vuint64m1_t vs2, uint64_t rs1,
                                    size_t vl) {
  return __riscv_vmseq(vm, vs2, rs1, vl);
}

vbool32_t test_vmseq_vv_u64m2_b32_m(vbool32_t vm, vuint64m2_t vs2,
                                    vuint64m2_t vs1, size_t vl) {
  return __riscv_vmseq(vm, vs2, vs1, vl);
}

vbool32_t test_vmseq_vx_u64m2_b32_m(vbool32_t vm, vuint64m2_t vs2, uint64_t rs1,
                                    size_t vl) {
  return __riscv_vmseq(vm, vs2, rs1, vl);
}

vbool16_t test_vmseq_vv_u64m4_b16_m(vbool16_t vm, vuint64m4_t vs2,
                                    vuint64m4_t vs1, size_t vl) {
  return __riscv_vmseq(vm, vs2, vs1, vl);
}

vbool16_t test_vmseq_vx_u64m4_b16_m(vbool16_t vm, vuint64m4_t vs2, uint64_t rs1,
                                    size_t vl) {
  return __riscv_vmseq(vm, vs2, rs1, vl);
}

vbool8_t test_vmseq_vv_u64m8_b8_m(vbool8_t vm, vuint64m8_t vs2, vuint64m8_t vs1,
                                  size_t vl) {
  return __riscv_vmseq(vm, vs2, vs1, vl);
}

vbool8_t test_vmseq_vx_u64m8_b8_m(vbool8_t vm, vuint64m8_t vs2, uint64_t rs1,
                                  size_t vl) {
  return __riscv_vmseq(vm, vs2, rs1, vl);
}
