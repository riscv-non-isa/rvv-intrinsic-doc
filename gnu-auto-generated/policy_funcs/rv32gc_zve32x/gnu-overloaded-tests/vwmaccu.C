/* { dg-do compile } */
/* { dg-options "-march=rv32gc_zve32x -mabi=ilp32d -Wno-psabi -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include "riscv_vector.h"

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
vuint16mf2_t test_vwmaccu_vv_u16mf2(vuint16mf2_t vd, vuint8mf4_t vs1, vuint8mf4_t vs2, size_t vl) {
  return __riscv_vwmaccu(vd, vs1, vs2, vl);
}

vuint16mf2_t test_vwmaccu_vx_u16mf2(vuint16mf2_t vd, uint8_t rs1, vuint8mf4_t vs2, size_t vl) {
  return __riscv_vwmaccu(vd, rs1, vs2, vl);
}

vuint16m1_t test_vwmaccu_vv_u16m1(vuint16m1_t vd, vuint8mf2_t vs1, vuint8mf2_t vs2, size_t vl) {
  return __riscv_vwmaccu(vd, vs1, vs2, vl);
}

vuint16m1_t test_vwmaccu_vx_u16m1(vuint16m1_t vd, uint8_t rs1, vuint8mf2_t vs2, size_t vl) {
  return __riscv_vwmaccu(vd, rs1, vs2, vl);
}

vuint16m2_t test_vwmaccu_vv_u16m2(vuint16m2_t vd, vuint8m1_t vs1, vuint8m1_t vs2, size_t vl) {
  return __riscv_vwmaccu(vd, vs1, vs2, vl);
}

vuint16m2_t test_vwmaccu_vx_u16m2(vuint16m2_t vd, uint8_t rs1, vuint8m1_t vs2, size_t vl) {
  return __riscv_vwmaccu(vd, rs1, vs2, vl);
}

vuint16m4_t test_vwmaccu_vv_u16m4(vuint16m4_t vd, vuint8m2_t vs1, vuint8m2_t vs2, size_t vl) {
  return __riscv_vwmaccu(vd, vs1, vs2, vl);
}

vuint16m4_t test_vwmaccu_vx_u16m4(vuint16m4_t vd, uint8_t rs1, vuint8m2_t vs2, size_t vl) {
  return __riscv_vwmaccu(vd, rs1, vs2, vl);
}

vuint16m8_t test_vwmaccu_vv_u16m8(vuint16m8_t vd, vuint8m4_t vs1, vuint8m4_t vs2, size_t vl) {
  return __riscv_vwmaccu(vd, vs1, vs2, vl);
}

vuint16m8_t test_vwmaccu_vx_u16m8(vuint16m8_t vd, uint8_t rs1, vuint8m4_t vs2, size_t vl) {
  return __riscv_vwmaccu(vd, rs1, vs2, vl);
}

vuint32m1_t test_vwmaccu_vv_u32m1(vuint32m1_t vd, vuint16mf2_t vs1, vuint16mf2_t vs2, size_t vl) {
  return __riscv_vwmaccu(vd, vs1, vs2, vl);
}

vuint32m1_t test_vwmaccu_vx_u32m1(vuint32m1_t vd, uint16_t rs1, vuint16mf2_t vs2, size_t vl) {
  return __riscv_vwmaccu(vd, rs1, vs2, vl);
}

vuint32m2_t test_vwmaccu_vv_u32m2(vuint32m2_t vd, vuint16m1_t vs1, vuint16m1_t vs2, size_t vl) {
  return __riscv_vwmaccu(vd, vs1, vs2, vl);
}

vuint32m2_t test_vwmaccu_vx_u32m2(vuint32m2_t vd, uint16_t rs1, vuint16m1_t vs2, size_t vl) {
  return __riscv_vwmaccu(vd, rs1, vs2, vl);
}

vuint32m4_t test_vwmaccu_vv_u32m4(vuint32m4_t vd, vuint16m2_t vs1, vuint16m2_t vs2, size_t vl) {
  return __riscv_vwmaccu(vd, vs1, vs2, vl);
}

vuint32m4_t test_vwmaccu_vx_u32m4(vuint32m4_t vd, uint16_t rs1, vuint16m2_t vs2, size_t vl) {
  return __riscv_vwmaccu(vd, rs1, vs2, vl);
}

vuint32m8_t test_vwmaccu_vv_u32m8(vuint32m8_t vd, vuint16m4_t vs1, vuint16m4_t vs2, size_t vl) {
  return __riscv_vwmaccu(vd, vs1, vs2, vl);
}

vuint32m8_t test_vwmaccu_vx_u32m8(vuint32m8_t vd, uint16_t rs1, vuint16m4_t vs2, size_t vl) {
  return __riscv_vwmaccu(vd, rs1, vs2, vl);
}

vuint16mf2_t test_vwmaccu_vv_u16mf2_m(vbool32_t mask, vuint16mf2_t vd, vuint8mf4_t vs1, vuint8mf4_t vs2, size_t vl) {
  return __riscv_vwmaccu(mask, vd, vs1, vs2, vl);
}

vuint16mf2_t test_vwmaccu_vx_u16mf2_m(vbool32_t mask, vuint16mf2_t vd, uint8_t rs1, vuint8mf4_t vs2, size_t vl) {
  return __riscv_vwmaccu(mask, vd, rs1, vs2, vl);
}

vuint16m1_t test_vwmaccu_vv_u16m1_m(vbool16_t mask, vuint16m1_t vd, vuint8mf2_t vs1, vuint8mf2_t vs2, size_t vl) {
  return __riscv_vwmaccu(mask, vd, vs1, vs2, vl);
}

vuint16m1_t test_vwmaccu_vx_u16m1_m(vbool16_t mask, vuint16m1_t vd, uint8_t rs1, vuint8mf2_t vs2, size_t vl) {
  return __riscv_vwmaccu(mask, vd, rs1, vs2, vl);
}

vuint16m2_t test_vwmaccu_vv_u16m2_m(vbool8_t mask, vuint16m2_t vd, vuint8m1_t vs1, vuint8m1_t vs2, size_t vl) {
  return __riscv_vwmaccu(mask, vd, vs1, vs2, vl);
}

vuint16m2_t test_vwmaccu_vx_u16m2_m(vbool8_t mask, vuint16m2_t vd, uint8_t rs1, vuint8m1_t vs2, size_t vl) {
  return __riscv_vwmaccu(mask, vd, rs1, vs2, vl);
}

vuint16m4_t test_vwmaccu_vv_u16m4_m(vbool4_t mask, vuint16m4_t vd, vuint8m2_t vs1, vuint8m2_t vs2, size_t vl) {
  return __riscv_vwmaccu(mask, vd, vs1, vs2, vl);
}

vuint16m4_t test_vwmaccu_vx_u16m4_m(vbool4_t mask, vuint16m4_t vd, uint8_t rs1, vuint8m2_t vs2, size_t vl) {
  return __riscv_vwmaccu(mask, vd, rs1, vs2, vl);
}

vuint16m8_t test_vwmaccu_vv_u16m8_m(vbool2_t mask, vuint16m8_t vd, vuint8m4_t vs1, vuint8m4_t vs2, size_t vl) {
  return __riscv_vwmaccu(mask, vd, vs1, vs2, vl);
}

vuint16m8_t test_vwmaccu_vx_u16m8_m(vbool2_t mask, vuint16m8_t vd, uint8_t rs1, vuint8m4_t vs2, size_t vl) {
  return __riscv_vwmaccu(mask, vd, rs1, vs2, vl);
}

vuint32m1_t test_vwmaccu_vv_u32m1_m(vbool32_t mask, vuint32m1_t vd, vuint16mf2_t vs1, vuint16mf2_t vs2, size_t vl) {
  return __riscv_vwmaccu(mask, vd, vs1, vs2, vl);
}

vuint32m1_t test_vwmaccu_vx_u32m1_m(vbool32_t mask, vuint32m1_t vd, uint16_t rs1, vuint16mf2_t vs2, size_t vl) {
  return __riscv_vwmaccu(mask, vd, rs1, vs2, vl);
}

vuint32m2_t test_vwmaccu_vv_u32m2_m(vbool16_t mask, vuint32m2_t vd, vuint16m1_t vs1, vuint16m1_t vs2, size_t vl) {
  return __riscv_vwmaccu(mask, vd, vs1, vs2, vl);
}

vuint32m2_t test_vwmaccu_vx_u32m2_m(vbool16_t mask, vuint32m2_t vd, uint16_t rs1, vuint16m1_t vs2, size_t vl) {
  return __riscv_vwmaccu(mask, vd, rs1, vs2, vl);
}

vuint32m4_t test_vwmaccu_vv_u32m4_m(vbool8_t mask, vuint32m4_t vd, vuint16m2_t vs1, vuint16m2_t vs2, size_t vl) {
  return __riscv_vwmaccu(mask, vd, vs1, vs2, vl);
}

vuint32m4_t test_vwmaccu_vx_u32m4_m(vbool8_t mask, vuint32m4_t vd, uint16_t rs1, vuint16m2_t vs2, size_t vl) {
  return __riscv_vwmaccu(mask, vd, rs1, vs2, vl);
}

vuint32m8_t test_vwmaccu_vv_u32m8_m(vbool4_t mask, vuint32m8_t vd, vuint16m4_t vs1, vuint16m4_t vs2, size_t vl) {
  return __riscv_vwmaccu(mask, vd, vs1, vs2, vl);
}

vuint32m8_t test_vwmaccu_vx_u32m8_m(vbool4_t mask, vuint32m8_t vd, uint16_t rs1, vuint16m4_t vs2, size_t vl) {
  return __riscv_vwmaccu(mask, vd, rs1, vs2, vl);
}

/* { dg-final { scan-assembler-times {vseti?vli\s+[a-z0-9]+,\s*[a-z0-9]+,\s*e[0-9]+,\s*mf?[1248],\s*t[au],\s*m[au]\s+vwmaccu\.[ivxfswum.]+\s+} 36 } } */
