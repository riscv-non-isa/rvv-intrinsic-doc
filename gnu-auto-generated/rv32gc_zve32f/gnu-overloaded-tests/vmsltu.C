/* { dg-do compile } */
/* { dg-options "-march=rv32gc_zve32f -mabi=ilp32d -Wno-psabi -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include "riscv_vector.h"

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
vbool32_t test_vmsltu_vv_u8mf4_b32(vuint8mf4_t op1, vuint8mf4_t op2, size_t vl) {
  return __riscv_vmsltu(op1, op2, vl);
}

vbool32_t test_vmsltu_vx_u8mf4_b32(vuint8mf4_t op1, uint8_t op2, size_t vl) {
  return __riscv_vmsltu(op1, op2, vl);
}

vbool16_t test_vmsltu_vv_u8mf2_b16(vuint8mf2_t op1, vuint8mf2_t op2, size_t vl) {
  return __riscv_vmsltu(op1, op2, vl);
}

vbool16_t test_vmsltu_vx_u8mf2_b16(vuint8mf2_t op1, uint8_t op2, size_t vl) {
  return __riscv_vmsltu(op1, op2, vl);
}

vbool8_t test_vmsltu_vv_u8m1_b8(vuint8m1_t op1, vuint8m1_t op2, size_t vl) {
  return __riscv_vmsltu(op1, op2, vl);
}

vbool8_t test_vmsltu_vx_u8m1_b8(vuint8m1_t op1, uint8_t op2, size_t vl) {
  return __riscv_vmsltu(op1, op2, vl);
}

vbool4_t test_vmsltu_vv_u8m2_b4(vuint8m2_t op1, vuint8m2_t op2, size_t vl) {
  return __riscv_vmsltu(op1, op2, vl);
}

vbool4_t test_vmsltu_vx_u8m2_b4(vuint8m2_t op1, uint8_t op2, size_t vl) {
  return __riscv_vmsltu(op1, op2, vl);
}

vbool2_t test_vmsltu_vv_u8m4_b2(vuint8m4_t op1, vuint8m4_t op2, size_t vl) {
  return __riscv_vmsltu(op1, op2, vl);
}

vbool2_t test_vmsltu_vx_u8m4_b2(vuint8m4_t op1, uint8_t op2, size_t vl) {
  return __riscv_vmsltu(op1, op2, vl);
}

vbool1_t test_vmsltu_vv_u8m8_b1(vuint8m8_t op1, vuint8m8_t op2, size_t vl) {
  return __riscv_vmsltu(op1, op2, vl);
}

vbool1_t test_vmsltu_vx_u8m8_b1(vuint8m8_t op1, uint8_t op2, size_t vl) {
  return __riscv_vmsltu(op1, op2, vl);
}

vbool32_t test_vmsltu_vv_u16mf2_b32(vuint16mf2_t op1, vuint16mf2_t op2, size_t vl) {
  return __riscv_vmsltu(op1, op2, vl);
}

vbool32_t test_vmsltu_vx_u16mf2_b32(vuint16mf2_t op1, uint16_t op2, size_t vl) {
  return __riscv_vmsltu(op1, op2, vl);
}

vbool16_t test_vmsltu_vv_u16m1_b16(vuint16m1_t op1, vuint16m1_t op2, size_t vl) {
  return __riscv_vmsltu(op1, op2, vl);
}

vbool16_t test_vmsltu_vx_u16m1_b16(vuint16m1_t op1, uint16_t op2, size_t vl) {
  return __riscv_vmsltu(op1, op2, vl);
}

vbool8_t test_vmsltu_vv_u16m2_b8(vuint16m2_t op1, vuint16m2_t op2, size_t vl) {
  return __riscv_vmsltu(op1, op2, vl);
}

vbool8_t test_vmsltu_vx_u16m2_b8(vuint16m2_t op1, uint16_t op2, size_t vl) {
  return __riscv_vmsltu(op1, op2, vl);
}

vbool4_t test_vmsltu_vv_u16m4_b4(vuint16m4_t op1, vuint16m4_t op2, size_t vl) {
  return __riscv_vmsltu(op1, op2, vl);
}

vbool4_t test_vmsltu_vx_u16m4_b4(vuint16m4_t op1, uint16_t op2, size_t vl) {
  return __riscv_vmsltu(op1, op2, vl);
}

vbool2_t test_vmsltu_vv_u16m8_b2(vuint16m8_t op1, vuint16m8_t op2, size_t vl) {
  return __riscv_vmsltu(op1, op2, vl);
}

vbool2_t test_vmsltu_vx_u16m8_b2(vuint16m8_t op1, uint16_t op2, size_t vl) {
  return __riscv_vmsltu(op1, op2, vl);
}

vbool32_t test_vmsltu_vv_u32m1_b32(vuint32m1_t op1, vuint32m1_t op2, size_t vl) {
  return __riscv_vmsltu(op1, op2, vl);
}

vbool32_t test_vmsltu_vx_u32m1_b32(vuint32m1_t op1, uint32_t op2, size_t vl) {
  return __riscv_vmsltu(op1, op2, vl);
}

vbool16_t test_vmsltu_vv_u32m2_b16(vuint32m2_t op1, vuint32m2_t op2, size_t vl) {
  return __riscv_vmsltu(op1, op2, vl);
}

vbool16_t test_vmsltu_vx_u32m2_b16(vuint32m2_t op1, uint32_t op2, size_t vl) {
  return __riscv_vmsltu(op1, op2, vl);
}

vbool8_t test_vmsltu_vv_u32m4_b8(vuint32m4_t op1, vuint32m4_t op2, size_t vl) {
  return __riscv_vmsltu(op1, op2, vl);
}

vbool8_t test_vmsltu_vx_u32m4_b8(vuint32m4_t op1, uint32_t op2, size_t vl) {
  return __riscv_vmsltu(op1, op2, vl);
}

vbool4_t test_vmsltu_vv_u32m8_b4(vuint32m8_t op1, vuint32m8_t op2, size_t vl) {
  return __riscv_vmsltu(op1, op2, vl);
}

vbool4_t test_vmsltu_vx_u32m8_b4(vuint32m8_t op1, uint32_t op2, size_t vl) {
  return __riscv_vmsltu(op1, op2, vl);
}

vbool32_t test_vmsltu_vv_u8mf4_b32_m(vbool32_t mask, vuint8mf4_t op1, vuint8mf4_t op2, size_t vl) {
  return __riscv_vmsltu(mask, op1, op2, vl);
}

vbool32_t test_vmsltu_vx_u8mf4_b32_m(vbool32_t mask, vuint8mf4_t op1, uint8_t op2, size_t vl) {
  return __riscv_vmsltu(mask, op1, op2, vl);
}

vbool16_t test_vmsltu_vv_u8mf2_b16_m(vbool16_t mask, vuint8mf2_t op1, vuint8mf2_t op2, size_t vl) {
  return __riscv_vmsltu(mask, op1, op2, vl);
}

vbool16_t test_vmsltu_vx_u8mf2_b16_m(vbool16_t mask, vuint8mf2_t op1, uint8_t op2, size_t vl) {
  return __riscv_vmsltu(mask, op1, op2, vl);
}

vbool8_t test_vmsltu_vv_u8m1_b8_m(vbool8_t mask, vuint8m1_t op1, vuint8m1_t op2, size_t vl) {
  return __riscv_vmsltu(mask, op1, op2, vl);
}

vbool8_t test_vmsltu_vx_u8m1_b8_m(vbool8_t mask, vuint8m1_t op1, uint8_t op2, size_t vl) {
  return __riscv_vmsltu(mask, op1, op2, vl);
}

vbool4_t test_vmsltu_vv_u8m2_b4_m(vbool4_t mask, vuint8m2_t op1, vuint8m2_t op2, size_t vl) {
  return __riscv_vmsltu(mask, op1, op2, vl);
}

vbool4_t test_vmsltu_vx_u8m2_b4_m(vbool4_t mask, vuint8m2_t op1, uint8_t op2, size_t vl) {
  return __riscv_vmsltu(mask, op1, op2, vl);
}

vbool2_t test_vmsltu_vv_u8m4_b2_m(vbool2_t mask, vuint8m4_t op1, vuint8m4_t op2, size_t vl) {
  return __riscv_vmsltu(mask, op1, op2, vl);
}

vbool2_t test_vmsltu_vx_u8m4_b2_m(vbool2_t mask, vuint8m4_t op1, uint8_t op2, size_t vl) {
  return __riscv_vmsltu(mask, op1, op2, vl);
}

vbool1_t test_vmsltu_vv_u8m8_b1_m(vbool1_t mask, vuint8m8_t op1, vuint8m8_t op2, size_t vl) {
  return __riscv_vmsltu(mask, op1, op2, vl);
}

vbool1_t test_vmsltu_vx_u8m8_b1_m(vbool1_t mask, vuint8m8_t op1, uint8_t op2, size_t vl) {
  return __riscv_vmsltu(mask, op1, op2, vl);
}

vbool32_t test_vmsltu_vv_u16mf2_b32_m(vbool32_t mask, vuint16mf2_t op1, vuint16mf2_t op2, size_t vl) {
  return __riscv_vmsltu(mask, op1, op2, vl);
}

vbool32_t test_vmsltu_vx_u16mf2_b32_m(vbool32_t mask, vuint16mf2_t op1, uint16_t op2, size_t vl) {
  return __riscv_vmsltu(mask, op1, op2, vl);
}

vbool16_t test_vmsltu_vv_u16m1_b16_m(vbool16_t mask, vuint16m1_t op1, vuint16m1_t op2, size_t vl) {
  return __riscv_vmsltu(mask, op1, op2, vl);
}

vbool16_t test_vmsltu_vx_u16m1_b16_m(vbool16_t mask, vuint16m1_t op1, uint16_t op2, size_t vl) {
  return __riscv_vmsltu(mask, op1, op2, vl);
}

vbool8_t test_vmsltu_vv_u16m2_b8_m(vbool8_t mask, vuint16m2_t op1, vuint16m2_t op2, size_t vl) {
  return __riscv_vmsltu(mask, op1, op2, vl);
}

vbool8_t test_vmsltu_vx_u16m2_b8_m(vbool8_t mask, vuint16m2_t op1, uint16_t op2, size_t vl) {
  return __riscv_vmsltu(mask, op1, op2, vl);
}

vbool4_t test_vmsltu_vv_u16m4_b4_m(vbool4_t mask, vuint16m4_t op1, vuint16m4_t op2, size_t vl) {
  return __riscv_vmsltu(mask, op1, op2, vl);
}

vbool4_t test_vmsltu_vx_u16m4_b4_m(vbool4_t mask, vuint16m4_t op1, uint16_t op2, size_t vl) {
  return __riscv_vmsltu(mask, op1, op2, vl);
}

vbool2_t test_vmsltu_vv_u16m8_b2_m(vbool2_t mask, vuint16m8_t op1, vuint16m8_t op2, size_t vl) {
  return __riscv_vmsltu(mask, op1, op2, vl);
}

vbool2_t test_vmsltu_vx_u16m8_b2_m(vbool2_t mask, vuint16m8_t op1, uint16_t op2, size_t vl) {
  return __riscv_vmsltu(mask, op1, op2, vl);
}

vbool32_t test_vmsltu_vv_u32m1_b32_m(vbool32_t mask, vuint32m1_t op1, vuint32m1_t op2, size_t vl) {
  return __riscv_vmsltu(mask, op1, op2, vl);
}

vbool32_t test_vmsltu_vx_u32m1_b32_m(vbool32_t mask, vuint32m1_t op1, uint32_t op2, size_t vl) {
  return __riscv_vmsltu(mask, op1, op2, vl);
}

vbool16_t test_vmsltu_vv_u32m2_b16_m(vbool16_t mask, vuint32m2_t op1, vuint32m2_t op2, size_t vl) {
  return __riscv_vmsltu(mask, op1, op2, vl);
}

vbool16_t test_vmsltu_vx_u32m2_b16_m(vbool16_t mask, vuint32m2_t op1, uint32_t op2, size_t vl) {
  return __riscv_vmsltu(mask, op1, op2, vl);
}

vbool8_t test_vmsltu_vv_u32m4_b8_m(vbool8_t mask, vuint32m4_t op1, vuint32m4_t op2, size_t vl) {
  return __riscv_vmsltu(mask, op1, op2, vl);
}

vbool8_t test_vmsltu_vx_u32m4_b8_m(vbool8_t mask, vuint32m4_t op1, uint32_t op2, size_t vl) {
  return __riscv_vmsltu(mask, op1, op2, vl);
}

vbool4_t test_vmsltu_vv_u32m8_b4_m(vbool4_t mask, vuint32m8_t op1, vuint32m8_t op2, size_t vl) {
  return __riscv_vmsltu(mask, op1, op2, vl);
}

vbool4_t test_vmsltu_vx_u32m8_b4_m(vbool4_t mask, vuint32m8_t op1, uint32_t op2, size_t vl) {
  return __riscv_vmsltu(mask, op1, op2, vl);
}

/* { dg-final { scan-assembler-times {vms[gl][et]u\.[ivxfswum.]+\s+} 60 } } */
