// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -target-feature +zfh \
// RUN:   -target-feature +zvfh -disable-O0-optnone \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

vbool64_t test_vmsgtu_vv_u8mf8_b64(vuint8mf8_t vs2, vuint8mf8_t vs1,
                                   size_t vl) {
  return __riscv_vmsgtu_vv_u8mf8_b64(vs2, vs1, vl);
}

vbool64_t test_vmsgtu_vx_u8mf8_b64(vuint8mf8_t vs2, uint8_t rs1, size_t vl) {
  return __riscv_vmsgtu_vx_u8mf8_b64(vs2, rs1, vl);
}

vbool32_t test_vmsgtu_vv_u8mf4_b32(vuint8mf4_t vs2, vuint8mf4_t vs1,
                                   size_t vl) {
  return __riscv_vmsgtu_vv_u8mf4_b32(vs2, vs1, vl);
}

vbool32_t test_vmsgtu_vx_u8mf4_b32(vuint8mf4_t vs2, uint8_t rs1, size_t vl) {
  return __riscv_vmsgtu_vx_u8mf4_b32(vs2, rs1, vl);
}

vbool16_t test_vmsgtu_vv_u8mf2_b16(vuint8mf2_t vs2, vuint8mf2_t vs1,
                                   size_t vl) {
  return __riscv_vmsgtu_vv_u8mf2_b16(vs2, vs1, vl);
}

vbool16_t test_vmsgtu_vx_u8mf2_b16(vuint8mf2_t vs2, uint8_t rs1, size_t vl) {
  return __riscv_vmsgtu_vx_u8mf2_b16(vs2, rs1, vl);
}

vbool8_t test_vmsgtu_vv_u8m1_b8(vuint8m1_t vs2, vuint8m1_t vs1, size_t vl) {
  return __riscv_vmsgtu_vv_u8m1_b8(vs2, vs1, vl);
}

vbool8_t test_vmsgtu_vx_u8m1_b8(vuint8m1_t vs2, uint8_t rs1, size_t vl) {
  return __riscv_vmsgtu_vx_u8m1_b8(vs2, rs1, vl);
}

vbool4_t test_vmsgtu_vv_u8m2_b4(vuint8m2_t vs2, vuint8m2_t vs1, size_t vl) {
  return __riscv_vmsgtu_vv_u8m2_b4(vs2, vs1, vl);
}

vbool4_t test_vmsgtu_vx_u8m2_b4(vuint8m2_t vs2, uint8_t rs1, size_t vl) {
  return __riscv_vmsgtu_vx_u8m2_b4(vs2, rs1, vl);
}

vbool2_t test_vmsgtu_vv_u8m4_b2(vuint8m4_t vs2, vuint8m4_t vs1, size_t vl) {
  return __riscv_vmsgtu_vv_u8m4_b2(vs2, vs1, vl);
}

vbool2_t test_vmsgtu_vx_u8m4_b2(vuint8m4_t vs2, uint8_t rs1, size_t vl) {
  return __riscv_vmsgtu_vx_u8m4_b2(vs2, rs1, vl);
}

vbool1_t test_vmsgtu_vv_u8m8_b1(vuint8m8_t vs2, vuint8m8_t vs1, size_t vl) {
  return __riscv_vmsgtu_vv_u8m8_b1(vs2, vs1, vl);
}

vbool1_t test_vmsgtu_vx_u8m8_b1(vuint8m8_t vs2, uint8_t rs1, size_t vl) {
  return __riscv_vmsgtu_vx_u8m8_b1(vs2, rs1, vl);
}

vbool64_t test_vmsgtu_vv_u16mf4_b64(vuint16mf4_t vs2, vuint16mf4_t vs1,
                                    size_t vl) {
  return __riscv_vmsgtu_vv_u16mf4_b64(vs2, vs1, vl);
}

vbool64_t test_vmsgtu_vx_u16mf4_b64(vuint16mf4_t vs2, uint16_t rs1, size_t vl) {
  return __riscv_vmsgtu_vx_u16mf4_b64(vs2, rs1, vl);
}

vbool32_t test_vmsgtu_vv_u16mf2_b32(vuint16mf2_t vs2, vuint16mf2_t vs1,
                                    size_t vl) {
  return __riscv_vmsgtu_vv_u16mf2_b32(vs2, vs1, vl);
}

vbool32_t test_vmsgtu_vx_u16mf2_b32(vuint16mf2_t vs2, uint16_t rs1, size_t vl) {
  return __riscv_vmsgtu_vx_u16mf2_b32(vs2, rs1, vl);
}

vbool16_t test_vmsgtu_vv_u16m1_b16(vuint16m1_t vs2, vuint16m1_t vs1,
                                   size_t vl) {
  return __riscv_vmsgtu_vv_u16m1_b16(vs2, vs1, vl);
}

vbool16_t test_vmsgtu_vx_u16m1_b16(vuint16m1_t vs2, uint16_t rs1, size_t vl) {
  return __riscv_vmsgtu_vx_u16m1_b16(vs2, rs1, vl);
}

vbool8_t test_vmsgtu_vv_u16m2_b8(vuint16m2_t vs2, vuint16m2_t vs1, size_t vl) {
  return __riscv_vmsgtu_vv_u16m2_b8(vs2, vs1, vl);
}

vbool8_t test_vmsgtu_vx_u16m2_b8(vuint16m2_t vs2, uint16_t rs1, size_t vl) {
  return __riscv_vmsgtu_vx_u16m2_b8(vs2, rs1, vl);
}

vbool4_t test_vmsgtu_vv_u16m4_b4(vuint16m4_t vs2, vuint16m4_t vs1, size_t vl) {
  return __riscv_vmsgtu_vv_u16m4_b4(vs2, vs1, vl);
}

vbool4_t test_vmsgtu_vx_u16m4_b4(vuint16m4_t vs2, uint16_t rs1, size_t vl) {
  return __riscv_vmsgtu_vx_u16m4_b4(vs2, rs1, vl);
}

vbool2_t test_vmsgtu_vv_u16m8_b2(vuint16m8_t vs2, vuint16m8_t vs1, size_t vl) {
  return __riscv_vmsgtu_vv_u16m8_b2(vs2, vs1, vl);
}

vbool2_t test_vmsgtu_vx_u16m8_b2(vuint16m8_t vs2, uint16_t rs1, size_t vl) {
  return __riscv_vmsgtu_vx_u16m8_b2(vs2, rs1, vl);
}

vbool64_t test_vmsgtu_vv_u32mf2_b64(vuint32mf2_t vs2, vuint32mf2_t vs1,
                                    size_t vl) {
  return __riscv_vmsgtu_vv_u32mf2_b64(vs2, vs1, vl);
}

vbool64_t test_vmsgtu_vx_u32mf2_b64(vuint32mf2_t vs2, uint32_t rs1, size_t vl) {
  return __riscv_vmsgtu_vx_u32mf2_b64(vs2, rs1, vl);
}

vbool32_t test_vmsgtu_vv_u32m1_b32(vuint32m1_t vs2, vuint32m1_t vs1,
                                   size_t vl) {
  return __riscv_vmsgtu_vv_u32m1_b32(vs2, vs1, vl);
}

vbool32_t test_vmsgtu_vx_u32m1_b32(vuint32m1_t vs2, uint32_t rs1, size_t vl) {
  return __riscv_vmsgtu_vx_u32m1_b32(vs2, rs1, vl);
}

vbool16_t test_vmsgtu_vv_u32m2_b16(vuint32m2_t vs2, vuint32m2_t vs1,
                                   size_t vl) {
  return __riscv_vmsgtu_vv_u32m2_b16(vs2, vs1, vl);
}

vbool16_t test_vmsgtu_vx_u32m2_b16(vuint32m2_t vs2, uint32_t rs1, size_t vl) {
  return __riscv_vmsgtu_vx_u32m2_b16(vs2, rs1, vl);
}

vbool8_t test_vmsgtu_vv_u32m4_b8(vuint32m4_t vs2, vuint32m4_t vs1, size_t vl) {
  return __riscv_vmsgtu_vv_u32m4_b8(vs2, vs1, vl);
}

vbool8_t test_vmsgtu_vx_u32m4_b8(vuint32m4_t vs2, uint32_t rs1, size_t vl) {
  return __riscv_vmsgtu_vx_u32m4_b8(vs2, rs1, vl);
}

vbool4_t test_vmsgtu_vv_u32m8_b4(vuint32m8_t vs2, vuint32m8_t vs1, size_t vl) {
  return __riscv_vmsgtu_vv_u32m8_b4(vs2, vs1, vl);
}

vbool4_t test_vmsgtu_vx_u32m8_b4(vuint32m8_t vs2, uint32_t rs1, size_t vl) {
  return __riscv_vmsgtu_vx_u32m8_b4(vs2, rs1, vl);
}

vbool64_t test_vmsgtu_vv_u64m1_b64(vuint64m1_t vs2, vuint64m1_t vs1,
                                   size_t vl) {
  return __riscv_vmsgtu_vv_u64m1_b64(vs2, vs1, vl);
}

vbool64_t test_vmsgtu_vx_u64m1_b64(vuint64m1_t vs2, uint64_t rs1, size_t vl) {
  return __riscv_vmsgtu_vx_u64m1_b64(vs2, rs1, vl);
}

vbool32_t test_vmsgtu_vv_u64m2_b32(vuint64m2_t vs2, vuint64m2_t vs1,
                                   size_t vl) {
  return __riscv_vmsgtu_vv_u64m2_b32(vs2, vs1, vl);
}

vbool32_t test_vmsgtu_vx_u64m2_b32(vuint64m2_t vs2, uint64_t rs1, size_t vl) {
  return __riscv_vmsgtu_vx_u64m2_b32(vs2, rs1, vl);
}

vbool16_t test_vmsgtu_vv_u64m4_b16(vuint64m4_t vs2, vuint64m4_t vs1,
                                   size_t vl) {
  return __riscv_vmsgtu_vv_u64m4_b16(vs2, vs1, vl);
}

vbool16_t test_vmsgtu_vx_u64m4_b16(vuint64m4_t vs2, uint64_t rs1, size_t vl) {
  return __riscv_vmsgtu_vx_u64m4_b16(vs2, rs1, vl);
}

vbool8_t test_vmsgtu_vv_u64m8_b8(vuint64m8_t vs2, vuint64m8_t vs1, size_t vl) {
  return __riscv_vmsgtu_vv_u64m8_b8(vs2, vs1, vl);
}

vbool8_t test_vmsgtu_vx_u64m8_b8(vuint64m8_t vs2, uint64_t rs1, size_t vl) {
  return __riscv_vmsgtu_vx_u64m8_b8(vs2, rs1, vl);
}

vbool64_t test_vmsgtu_vv_u8mf8_b64_m(vbool64_t vm, vuint8mf8_t vs2,
                                     vuint8mf8_t vs1, size_t vl) {
  return __riscv_vmsgtu_vv_u8mf8_b64_m(vm, vs2, vs1, vl);
}

vbool64_t test_vmsgtu_vx_u8mf8_b64_m(vbool64_t vm, vuint8mf8_t vs2, uint8_t rs1,
                                     size_t vl) {
  return __riscv_vmsgtu_vx_u8mf8_b64_m(vm, vs2, rs1, vl);
}

vbool32_t test_vmsgtu_vv_u8mf4_b32_m(vbool32_t vm, vuint8mf4_t vs2,
                                     vuint8mf4_t vs1, size_t vl) {
  return __riscv_vmsgtu_vv_u8mf4_b32_m(vm, vs2, vs1, vl);
}

vbool32_t test_vmsgtu_vx_u8mf4_b32_m(vbool32_t vm, vuint8mf4_t vs2, uint8_t rs1,
                                     size_t vl) {
  return __riscv_vmsgtu_vx_u8mf4_b32_m(vm, vs2, rs1, vl);
}

vbool16_t test_vmsgtu_vv_u8mf2_b16_m(vbool16_t vm, vuint8mf2_t vs2,
                                     vuint8mf2_t vs1, size_t vl) {
  return __riscv_vmsgtu_vv_u8mf2_b16_m(vm, vs2, vs1, vl);
}

vbool16_t test_vmsgtu_vx_u8mf2_b16_m(vbool16_t vm, vuint8mf2_t vs2, uint8_t rs1,
                                     size_t vl) {
  return __riscv_vmsgtu_vx_u8mf2_b16_m(vm, vs2, rs1, vl);
}

vbool8_t test_vmsgtu_vv_u8m1_b8_m(vbool8_t vm, vuint8m1_t vs2, vuint8m1_t vs1,
                                  size_t vl) {
  return __riscv_vmsgtu_vv_u8m1_b8_m(vm, vs2, vs1, vl);
}

vbool8_t test_vmsgtu_vx_u8m1_b8_m(vbool8_t vm, vuint8m1_t vs2, uint8_t rs1,
                                  size_t vl) {
  return __riscv_vmsgtu_vx_u8m1_b8_m(vm, vs2, rs1, vl);
}

vbool4_t test_vmsgtu_vv_u8m2_b4_m(vbool4_t vm, vuint8m2_t vs2, vuint8m2_t vs1,
                                  size_t vl) {
  return __riscv_vmsgtu_vv_u8m2_b4_m(vm, vs2, vs1, vl);
}

vbool4_t test_vmsgtu_vx_u8m2_b4_m(vbool4_t vm, vuint8m2_t vs2, uint8_t rs1,
                                  size_t vl) {
  return __riscv_vmsgtu_vx_u8m2_b4_m(vm, vs2, rs1, vl);
}

vbool2_t test_vmsgtu_vv_u8m4_b2_m(vbool2_t vm, vuint8m4_t vs2, vuint8m4_t vs1,
                                  size_t vl) {
  return __riscv_vmsgtu_vv_u8m4_b2_m(vm, vs2, vs1, vl);
}

vbool2_t test_vmsgtu_vx_u8m4_b2_m(vbool2_t vm, vuint8m4_t vs2, uint8_t rs1,
                                  size_t vl) {
  return __riscv_vmsgtu_vx_u8m4_b2_m(vm, vs2, rs1, vl);
}

vbool1_t test_vmsgtu_vv_u8m8_b1_m(vbool1_t vm, vuint8m8_t vs2, vuint8m8_t vs1,
                                  size_t vl) {
  return __riscv_vmsgtu_vv_u8m8_b1_m(vm, vs2, vs1, vl);
}

vbool1_t test_vmsgtu_vx_u8m8_b1_m(vbool1_t vm, vuint8m8_t vs2, uint8_t rs1,
                                  size_t vl) {
  return __riscv_vmsgtu_vx_u8m8_b1_m(vm, vs2, rs1, vl);
}

vbool64_t test_vmsgtu_vv_u16mf4_b64_m(vbool64_t vm, vuint16mf4_t vs2,
                                      vuint16mf4_t vs1, size_t vl) {
  return __riscv_vmsgtu_vv_u16mf4_b64_m(vm, vs2, vs1, vl);
}

vbool64_t test_vmsgtu_vx_u16mf4_b64_m(vbool64_t vm, vuint16mf4_t vs2,
                                      uint16_t rs1, size_t vl) {
  return __riscv_vmsgtu_vx_u16mf4_b64_m(vm, vs2, rs1, vl);
}

vbool32_t test_vmsgtu_vv_u16mf2_b32_m(vbool32_t vm, vuint16mf2_t vs2,
                                      vuint16mf2_t vs1, size_t vl) {
  return __riscv_vmsgtu_vv_u16mf2_b32_m(vm, vs2, vs1, vl);
}

vbool32_t test_vmsgtu_vx_u16mf2_b32_m(vbool32_t vm, vuint16mf2_t vs2,
                                      uint16_t rs1, size_t vl) {
  return __riscv_vmsgtu_vx_u16mf2_b32_m(vm, vs2, rs1, vl);
}

vbool16_t test_vmsgtu_vv_u16m1_b16_m(vbool16_t vm, vuint16m1_t vs2,
                                     vuint16m1_t vs1, size_t vl) {
  return __riscv_vmsgtu_vv_u16m1_b16_m(vm, vs2, vs1, vl);
}

vbool16_t test_vmsgtu_vx_u16m1_b16_m(vbool16_t vm, vuint16m1_t vs2,
                                     uint16_t rs1, size_t vl) {
  return __riscv_vmsgtu_vx_u16m1_b16_m(vm, vs2, rs1, vl);
}

vbool8_t test_vmsgtu_vv_u16m2_b8_m(vbool8_t vm, vuint16m2_t vs2,
                                   vuint16m2_t vs1, size_t vl) {
  return __riscv_vmsgtu_vv_u16m2_b8_m(vm, vs2, vs1, vl);
}

vbool8_t test_vmsgtu_vx_u16m2_b8_m(vbool8_t vm, vuint16m2_t vs2, uint16_t rs1,
                                   size_t vl) {
  return __riscv_vmsgtu_vx_u16m2_b8_m(vm, vs2, rs1, vl);
}

vbool4_t test_vmsgtu_vv_u16m4_b4_m(vbool4_t vm, vuint16m4_t vs2,
                                   vuint16m4_t vs1, size_t vl) {
  return __riscv_vmsgtu_vv_u16m4_b4_m(vm, vs2, vs1, vl);
}

vbool4_t test_vmsgtu_vx_u16m4_b4_m(vbool4_t vm, vuint16m4_t vs2, uint16_t rs1,
                                   size_t vl) {
  return __riscv_vmsgtu_vx_u16m4_b4_m(vm, vs2, rs1, vl);
}

vbool2_t test_vmsgtu_vv_u16m8_b2_m(vbool2_t vm, vuint16m8_t vs2,
                                   vuint16m8_t vs1, size_t vl) {
  return __riscv_vmsgtu_vv_u16m8_b2_m(vm, vs2, vs1, vl);
}

vbool2_t test_vmsgtu_vx_u16m8_b2_m(vbool2_t vm, vuint16m8_t vs2, uint16_t rs1,
                                   size_t vl) {
  return __riscv_vmsgtu_vx_u16m8_b2_m(vm, vs2, rs1, vl);
}

vbool64_t test_vmsgtu_vv_u32mf2_b64_m(vbool64_t vm, vuint32mf2_t vs2,
                                      vuint32mf2_t vs1, size_t vl) {
  return __riscv_vmsgtu_vv_u32mf2_b64_m(vm, vs2, vs1, vl);
}

vbool64_t test_vmsgtu_vx_u32mf2_b64_m(vbool64_t vm, vuint32mf2_t vs2,
                                      uint32_t rs1, size_t vl) {
  return __riscv_vmsgtu_vx_u32mf2_b64_m(vm, vs2, rs1, vl);
}

vbool32_t test_vmsgtu_vv_u32m1_b32_m(vbool32_t vm, vuint32m1_t vs2,
                                     vuint32m1_t vs1, size_t vl) {
  return __riscv_vmsgtu_vv_u32m1_b32_m(vm, vs2, vs1, vl);
}

vbool32_t test_vmsgtu_vx_u32m1_b32_m(vbool32_t vm, vuint32m1_t vs2,
                                     uint32_t rs1, size_t vl) {
  return __riscv_vmsgtu_vx_u32m1_b32_m(vm, vs2, rs1, vl);
}

vbool16_t test_vmsgtu_vv_u32m2_b16_m(vbool16_t vm, vuint32m2_t vs2,
                                     vuint32m2_t vs1, size_t vl) {
  return __riscv_vmsgtu_vv_u32m2_b16_m(vm, vs2, vs1, vl);
}

vbool16_t test_vmsgtu_vx_u32m2_b16_m(vbool16_t vm, vuint32m2_t vs2,
                                     uint32_t rs1, size_t vl) {
  return __riscv_vmsgtu_vx_u32m2_b16_m(vm, vs2, rs1, vl);
}

vbool8_t test_vmsgtu_vv_u32m4_b8_m(vbool8_t vm, vuint32m4_t vs2,
                                   vuint32m4_t vs1, size_t vl) {
  return __riscv_vmsgtu_vv_u32m4_b8_m(vm, vs2, vs1, vl);
}

vbool8_t test_vmsgtu_vx_u32m4_b8_m(vbool8_t vm, vuint32m4_t vs2, uint32_t rs1,
                                   size_t vl) {
  return __riscv_vmsgtu_vx_u32m4_b8_m(vm, vs2, rs1, vl);
}

vbool4_t test_vmsgtu_vv_u32m8_b4_m(vbool4_t vm, vuint32m8_t vs2,
                                   vuint32m8_t vs1, size_t vl) {
  return __riscv_vmsgtu_vv_u32m8_b4_m(vm, vs2, vs1, vl);
}

vbool4_t test_vmsgtu_vx_u32m8_b4_m(vbool4_t vm, vuint32m8_t vs2, uint32_t rs1,
                                   size_t vl) {
  return __riscv_vmsgtu_vx_u32m8_b4_m(vm, vs2, rs1, vl);
}

vbool64_t test_vmsgtu_vv_u64m1_b64_m(vbool64_t vm, vuint64m1_t vs2,
                                     vuint64m1_t vs1, size_t vl) {
  return __riscv_vmsgtu_vv_u64m1_b64_m(vm, vs2, vs1, vl);
}

vbool64_t test_vmsgtu_vx_u64m1_b64_m(vbool64_t vm, vuint64m1_t vs2,
                                     uint64_t rs1, size_t vl) {
  return __riscv_vmsgtu_vx_u64m1_b64_m(vm, vs2, rs1, vl);
}

vbool32_t test_vmsgtu_vv_u64m2_b32_m(vbool32_t vm, vuint64m2_t vs2,
                                     vuint64m2_t vs1, size_t vl) {
  return __riscv_vmsgtu_vv_u64m2_b32_m(vm, vs2, vs1, vl);
}

vbool32_t test_vmsgtu_vx_u64m2_b32_m(vbool32_t vm, vuint64m2_t vs2,
                                     uint64_t rs1, size_t vl) {
  return __riscv_vmsgtu_vx_u64m2_b32_m(vm, vs2, rs1, vl);
}

vbool16_t test_vmsgtu_vv_u64m4_b16_m(vbool16_t vm, vuint64m4_t vs2,
                                     vuint64m4_t vs1, size_t vl) {
  return __riscv_vmsgtu_vv_u64m4_b16_m(vm, vs2, vs1, vl);
}

vbool16_t test_vmsgtu_vx_u64m4_b16_m(vbool16_t vm, vuint64m4_t vs2,
                                     uint64_t rs1, size_t vl) {
  return __riscv_vmsgtu_vx_u64m4_b16_m(vm, vs2, rs1, vl);
}

vbool8_t test_vmsgtu_vv_u64m8_b8_m(vbool8_t vm, vuint64m8_t vs2,
                                   vuint64m8_t vs1, size_t vl) {
  return __riscv_vmsgtu_vv_u64m8_b8_m(vm, vs2, vs1, vl);
}

vbool8_t test_vmsgtu_vx_u64m8_b8_m(vbool8_t vm, vuint64m8_t vs2, uint64_t rs1,
                                   size_t vl) {
  return __riscv_vmsgtu_vx_u64m8_b8_m(vm, vs2, rs1, vl);
}
