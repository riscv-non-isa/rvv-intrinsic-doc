/* { dg-do compile } */
/* { dg-options "-march=rv64gcv_zvfh -mabi=lp64d -Wno-psabi -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
vint8mf8_t test_vle8ff_v_i8mf8(const int8_t *rs1, size_t *new_vl, size_t vl) {
  return __riscv_vle8ff_v_i8mf8(rs1, new_vl, vl);
}

vint8mf4_t test_vle8ff_v_i8mf4(const int8_t *rs1, size_t *new_vl, size_t vl) {
  return __riscv_vle8ff_v_i8mf4(rs1, new_vl, vl);
}

vint8mf2_t test_vle8ff_v_i8mf2(const int8_t *rs1, size_t *new_vl, size_t vl) {
  return __riscv_vle8ff_v_i8mf2(rs1, new_vl, vl);
}

vint8m1_t test_vle8ff_v_i8m1(const int8_t *rs1, size_t *new_vl, size_t vl) {
  return __riscv_vle8ff_v_i8m1(rs1, new_vl, vl);
}

vint8m2_t test_vle8ff_v_i8m2(const int8_t *rs1, size_t *new_vl, size_t vl) {
  return __riscv_vle8ff_v_i8m2(rs1, new_vl, vl);
}

vint8m4_t test_vle8ff_v_i8m4(const int8_t *rs1, size_t *new_vl, size_t vl) {
  return __riscv_vle8ff_v_i8m4(rs1, new_vl, vl);
}

vint8m8_t test_vle8ff_v_i8m8(const int8_t *rs1, size_t *new_vl, size_t vl) {
  return __riscv_vle8ff_v_i8m8(rs1, new_vl, vl);
}

vuint8mf8_t test_vle8ff_v_u8mf8(const uint8_t *rs1, size_t *new_vl, size_t vl) {
  return __riscv_vle8ff_v_u8mf8(rs1, new_vl, vl);
}

vuint8mf4_t test_vle8ff_v_u8mf4(const uint8_t *rs1, size_t *new_vl, size_t vl) {
  return __riscv_vle8ff_v_u8mf4(rs1, new_vl, vl);
}

vuint8mf2_t test_vle8ff_v_u8mf2(const uint8_t *rs1, size_t *new_vl, size_t vl) {
  return __riscv_vle8ff_v_u8mf2(rs1, new_vl, vl);
}

vuint8m1_t test_vle8ff_v_u8m1(const uint8_t *rs1, size_t *new_vl, size_t vl) {
  return __riscv_vle8ff_v_u8m1(rs1, new_vl, vl);
}

vuint8m2_t test_vle8ff_v_u8m2(const uint8_t *rs1, size_t *new_vl, size_t vl) {
  return __riscv_vle8ff_v_u8m2(rs1, new_vl, vl);
}

vuint8m4_t test_vle8ff_v_u8m4(const uint8_t *rs1, size_t *new_vl, size_t vl) {
  return __riscv_vle8ff_v_u8m4(rs1, new_vl, vl);
}

vuint8m8_t test_vle8ff_v_u8m8(const uint8_t *rs1, size_t *new_vl, size_t vl) {
  return __riscv_vle8ff_v_u8m8(rs1, new_vl, vl);
}

vint8mf8_t test_vle8ff_v_i8mf8_m(vbool64_t vm, const int8_t *rs1, size_t *new_vl, size_t vl) {
  return __riscv_vle8ff_v_i8mf8_m(vm, rs1, new_vl, vl);
}

vint8mf4_t test_vle8ff_v_i8mf4_m(vbool32_t vm, const int8_t *rs1, size_t *new_vl, size_t vl) {
  return __riscv_vle8ff_v_i8mf4_m(vm, rs1, new_vl, vl);
}

vint8mf2_t test_vle8ff_v_i8mf2_m(vbool16_t vm, const int8_t *rs1, size_t *new_vl, size_t vl) {
  return __riscv_vle8ff_v_i8mf2_m(vm, rs1, new_vl, vl);
}

vint8m1_t test_vle8ff_v_i8m1_m(vbool8_t vm, const int8_t *rs1, size_t *new_vl, size_t vl) {
  return __riscv_vle8ff_v_i8m1_m(vm, rs1, new_vl, vl);
}

vint8m2_t test_vle8ff_v_i8m2_m(vbool4_t vm, const int8_t *rs1, size_t *new_vl, size_t vl) {
  return __riscv_vle8ff_v_i8m2_m(vm, rs1, new_vl, vl);
}

vint8m4_t test_vle8ff_v_i8m4_m(vbool2_t vm, const int8_t *rs1, size_t *new_vl, size_t vl) {
  return __riscv_vle8ff_v_i8m4_m(vm, rs1, new_vl, vl);
}

vint8m8_t test_vle8ff_v_i8m8_m(vbool1_t vm, const int8_t *rs1, size_t *new_vl, size_t vl) {
  return __riscv_vle8ff_v_i8m8_m(vm, rs1, new_vl, vl);
}

vuint8mf8_t test_vle8ff_v_u8mf8_m(vbool64_t vm, const uint8_t *rs1, size_t *new_vl, size_t vl) {
  return __riscv_vle8ff_v_u8mf8_m(vm, rs1, new_vl, vl);
}

vuint8mf4_t test_vle8ff_v_u8mf4_m(vbool32_t vm, const uint8_t *rs1, size_t *new_vl, size_t vl) {
  return __riscv_vle8ff_v_u8mf4_m(vm, rs1, new_vl, vl);
}

vuint8mf2_t test_vle8ff_v_u8mf2_m(vbool16_t vm, const uint8_t *rs1, size_t *new_vl, size_t vl) {
  return __riscv_vle8ff_v_u8mf2_m(vm, rs1, new_vl, vl);
}

vuint8m1_t test_vle8ff_v_u8m1_m(vbool8_t vm, const uint8_t *rs1, size_t *new_vl, size_t vl) {
  return __riscv_vle8ff_v_u8m1_m(vm, rs1, new_vl, vl);
}

vuint8m2_t test_vle8ff_v_u8m2_m(vbool4_t vm, const uint8_t *rs1, size_t *new_vl, size_t vl) {
  return __riscv_vle8ff_v_u8m2_m(vm, rs1, new_vl, vl);
}

vuint8m4_t test_vle8ff_v_u8m4_m(vbool2_t vm, const uint8_t *rs1, size_t *new_vl, size_t vl) {
  return __riscv_vle8ff_v_u8m4_m(vm, rs1, new_vl, vl);
}

vuint8m8_t test_vle8ff_v_u8m8_m(vbool1_t vm, const uint8_t *rs1, size_t *new_vl, size_t vl) {
  return __riscv_vle8ff_v_u8m8_m(vm, rs1, new_vl, vl);
}

/* { dg-final { scan-assembler-times {vseti?vli\s+[a-z0-9]+,\s*[a-z0-9]+,\s*e[0-9]+,\s*mf?[1248],\s*t[au],\s*m[au]\s+vle8ff\.[ivxfswum.]+\s+} 28 } } */
