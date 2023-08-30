/* { dg-do compile } */
/* { dg-options "-march=rv32gc_zve32f -mabi=ilp32d -Wno-psabi -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include "riscv_vector.h"

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
unsigned long test_vcpop_m_b1(vbool1_t op1, size_t vl) {
  return __riscv_vcpop_m_b1(op1, vl);
}

unsigned long test_vcpop_m_b2(vbool2_t op1, size_t vl) {
  return __riscv_vcpop_m_b2(op1, vl);
}

unsigned long test_vcpop_m_b4(vbool4_t op1, size_t vl) {
  return __riscv_vcpop_m_b4(op1, vl);
}

unsigned long test_vcpop_m_b8(vbool8_t op1, size_t vl) {
  return __riscv_vcpop_m_b8(op1, vl);
}

unsigned long test_vcpop_m_b16(vbool16_t op1, size_t vl) {
  return __riscv_vcpop_m_b16(op1, vl);
}

unsigned long test_vcpop_m_b32(vbool32_t op1, size_t vl) {
  return __riscv_vcpop_m_b32(op1, vl);
}

unsigned long test_vcpop_m_b1_m(vbool1_t mask, vbool1_t op1, size_t vl) {
  return __riscv_vcpop_m_b1_m(mask, op1, vl);
}

unsigned long test_vcpop_m_b2_m(vbool2_t mask, vbool2_t op1, size_t vl) {
  return __riscv_vcpop_m_b2_m(mask, op1, vl);
}

unsigned long test_vcpop_m_b4_m(vbool4_t mask, vbool4_t op1, size_t vl) {
  return __riscv_vcpop_m_b4_m(mask, op1, vl);
}

unsigned long test_vcpop_m_b8_m(vbool8_t mask, vbool8_t op1, size_t vl) {
  return __riscv_vcpop_m_b8_m(mask, op1, vl);
}

unsigned long test_vcpop_m_b16_m(vbool16_t mask, vbool16_t op1, size_t vl) {
  return __riscv_vcpop_m_b16_m(mask, op1, vl);
}

unsigned long test_vcpop_m_b32_m(vbool32_t mask, vbool32_t op1, size_t vl) {
  return __riscv_vcpop_m_b32_m(mask, op1, vl);
}

/* { dg-final { scan-assembler-times {vseti?vli\s+[a-z0-9]+,\s*[a-z0-9]+,\s*e[0-9]+,\s*mf?[1248],\s*t[au],\s*m[au]\s+vcpop\.[ivxfswum.]+\s+} 12 } } */
