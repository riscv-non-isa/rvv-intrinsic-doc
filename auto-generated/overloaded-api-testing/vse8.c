#include <riscv_vector.h>
#include <stdint.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;

void test_vse8_v_i8mf8(int8_t *rs1, vint8mf8_t vs3, size_t vl) {
  return __riscv_vse8(rs1, vs3, vl);
}

void test_vse8_v_i8mf4(int8_t *rs1, vint8mf4_t vs3, size_t vl) {
  return __riscv_vse8(rs1, vs3, vl);
}

void test_vse8_v_i8mf2(int8_t *rs1, vint8mf2_t vs3, size_t vl) {
  return __riscv_vse8(rs1, vs3, vl);
}

void test_vse8_v_i8m1(int8_t *rs1, vint8m1_t vs3, size_t vl) {
  return __riscv_vse8(rs1, vs3, vl);
}

void test_vse8_v_i8m2(int8_t *rs1, vint8m2_t vs3, size_t vl) {
  return __riscv_vse8(rs1, vs3, vl);
}

void test_vse8_v_i8m4(int8_t *rs1, vint8m4_t vs3, size_t vl) {
  return __riscv_vse8(rs1, vs3, vl);
}

void test_vse8_v_i8m8(int8_t *rs1, vint8m8_t vs3, size_t vl) {
  return __riscv_vse8(rs1, vs3, vl);
}

void test_vse8_v_u8mf8(uint8_t *rs1, vuint8mf8_t vs3, size_t vl) {
  return __riscv_vse8(rs1, vs3, vl);
}

void test_vse8_v_u8mf4(uint8_t *rs1, vuint8mf4_t vs3, size_t vl) {
  return __riscv_vse8(rs1, vs3, vl);
}

void test_vse8_v_u8mf2(uint8_t *rs1, vuint8mf2_t vs3, size_t vl) {
  return __riscv_vse8(rs1, vs3, vl);
}

void test_vse8_v_u8m1(uint8_t *rs1, vuint8m1_t vs3, size_t vl) {
  return __riscv_vse8(rs1, vs3, vl);
}

void test_vse8_v_u8m2(uint8_t *rs1, vuint8m2_t vs3, size_t vl) {
  return __riscv_vse8(rs1, vs3, vl);
}

void test_vse8_v_u8m4(uint8_t *rs1, vuint8m4_t vs3, size_t vl) {
  return __riscv_vse8(rs1, vs3, vl);
}

void test_vse8_v_u8m8(uint8_t *rs1, vuint8m8_t vs3, size_t vl) {
  return __riscv_vse8(rs1, vs3, vl);
}

void test_vse8_v_i8mf8_m(vbool64_t vm, int8_t *rs1, vint8mf8_t vs3, size_t vl) {
  return __riscv_vse8(vm, rs1, vs3, vl);
}

void test_vse8_v_i8mf4_m(vbool32_t vm, int8_t *rs1, vint8mf4_t vs3, size_t vl) {
  return __riscv_vse8(vm, rs1, vs3, vl);
}

void test_vse8_v_i8mf2_m(vbool16_t vm, int8_t *rs1, vint8mf2_t vs3, size_t vl) {
  return __riscv_vse8(vm, rs1, vs3, vl);
}

void test_vse8_v_i8m1_m(vbool8_t vm, int8_t *rs1, vint8m1_t vs3, size_t vl) {
  return __riscv_vse8(vm, rs1, vs3, vl);
}

void test_vse8_v_i8m2_m(vbool4_t vm, int8_t *rs1, vint8m2_t vs3, size_t vl) {
  return __riscv_vse8(vm, rs1, vs3, vl);
}

void test_vse8_v_i8m4_m(vbool2_t vm, int8_t *rs1, vint8m4_t vs3, size_t vl) {
  return __riscv_vse8(vm, rs1, vs3, vl);
}

void test_vse8_v_i8m8_m(vbool1_t vm, int8_t *rs1, vint8m8_t vs3, size_t vl) {
  return __riscv_vse8(vm, rs1, vs3, vl);
}

void test_vse8_v_u8mf8_m(vbool64_t vm, uint8_t *rs1, vuint8mf8_t vs3,
                         size_t vl) {
  return __riscv_vse8(vm, rs1, vs3, vl);
}

void test_vse8_v_u8mf4_m(vbool32_t vm, uint8_t *rs1, vuint8mf4_t vs3,
                         size_t vl) {
  return __riscv_vse8(vm, rs1, vs3, vl);
}

void test_vse8_v_u8mf2_m(vbool16_t vm, uint8_t *rs1, vuint8mf2_t vs3,
                         size_t vl) {
  return __riscv_vse8(vm, rs1, vs3, vl);
}

void test_vse8_v_u8m1_m(vbool8_t vm, uint8_t *rs1, vuint8m1_t vs3, size_t vl) {
  return __riscv_vse8(vm, rs1, vs3, vl);
}

void test_vse8_v_u8m2_m(vbool4_t vm, uint8_t *rs1, vuint8m2_t vs3, size_t vl) {
  return __riscv_vse8(vm, rs1, vs3, vl);
}

void test_vse8_v_u8m4_m(vbool2_t vm, uint8_t *rs1, vuint8m4_t vs3, size_t vl) {
  return __riscv_vse8(vm, rs1, vs3, vl);
}

void test_vse8_v_u8m8_m(vbool1_t vm, uint8_t *rs1, vuint8m8_t vs3, size_t vl) {
  return __riscv_vse8(vm, rs1, vs3, vl);
}
