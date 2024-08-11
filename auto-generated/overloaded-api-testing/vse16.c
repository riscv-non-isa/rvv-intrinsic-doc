#include <riscv_vector.h>
#include <stdint.h>

void test_vse16_v_i16mf4(int16_t *rs1, vint16mf4_t vs3, size_t vl) {
  return __riscv_vse16(rs1, vs3, vl);
}

void test_vse16_v_i16mf2(int16_t *rs1, vint16mf2_t vs3, size_t vl) {
  return __riscv_vse16(rs1, vs3, vl);
}

void test_vse16_v_i16m1(int16_t *rs1, vint16m1_t vs3, size_t vl) {
  return __riscv_vse16(rs1, vs3, vl);
}

void test_vse16_v_i16m2(int16_t *rs1, vint16m2_t vs3, size_t vl) {
  return __riscv_vse16(rs1, vs3, vl);
}

void test_vse16_v_i16m4(int16_t *rs1, vint16m4_t vs3, size_t vl) {
  return __riscv_vse16(rs1, vs3, vl);
}

void test_vse16_v_i16m8(int16_t *rs1, vint16m8_t vs3, size_t vl) {
  return __riscv_vse16(rs1, vs3, vl);
}

void test_vse16_v_u16mf4(uint16_t *rs1, vuint16mf4_t vs3, size_t vl) {
  return __riscv_vse16(rs1, vs3, vl);
}

void test_vse16_v_u16mf2(uint16_t *rs1, vuint16mf2_t vs3, size_t vl) {
  return __riscv_vse16(rs1, vs3, vl);
}

void test_vse16_v_u16m1(uint16_t *rs1, vuint16m1_t vs3, size_t vl) {
  return __riscv_vse16(rs1, vs3, vl);
}

void test_vse16_v_u16m2(uint16_t *rs1, vuint16m2_t vs3, size_t vl) {
  return __riscv_vse16(rs1, vs3, vl);
}

void test_vse16_v_u16m4(uint16_t *rs1, vuint16m4_t vs3, size_t vl) {
  return __riscv_vse16(rs1, vs3, vl);
}

void test_vse16_v_u16m8(uint16_t *rs1, vuint16m8_t vs3, size_t vl) {
  return __riscv_vse16(rs1, vs3, vl);
}

void test_vse16_v_i16mf4_m(vbool64_t vm, int16_t *rs1, vint16mf4_t vs3,
                           size_t vl) {
  return __riscv_vse16(vm, rs1, vs3, vl);
}

void test_vse16_v_i16mf2_m(vbool32_t vm, int16_t *rs1, vint16mf2_t vs3,
                           size_t vl) {
  return __riscv_vse16(vm, rs1, vs3, vl);
}

void test_vse16_v_i16m1_m(vbool16_t vm, int16_t *rs1, vint16m1_t vs3,
                          size_t vl) {
  return __riscv_vse16(vm, rs1, vs3, vl);
}

void test_vse16_v_i16m2_m(vbool8_t vm, int16_t *rs1, vint16m2_t vs3,
                          size_t vl) {
  return __riscv_vse16(vm, rs1, vs3, vl);
}

void test_vse16_v_i16m4_m(vbool4_t vm, int16_t *rs1, vint16m4_t vs3,
                          size_t vl) {
  return __riscv_vse16(vm, rs1, vs3, vl);
}

void test_vse16_v_i16m8_m(vbool2_t vm, int16_t *rs1, vint16m8_t vs3,
                          size_t vl) {
  return __riscv_vse16(vm, rs1, vs3, vl);
}

void test_vse16_v_u16mf4_m(vbool64_t vm, uint16_t *rs1, vuint16mf4_t vs3,
                           size_t vl) {
  return __riscv_vse16(vm, rs1, vs3, vl);
}

void test_vse16_v_u16mf2_m(vbool32_t vm, uint16_t *rs1, vuint16mf2_t vs3,
                           size_t vl) {
  return __riscv_vse16(vm, rs1, vs3, vl);
}

void test_vse16_v_u16m1_m(vbool16_t vm, uint16_t *rs1, vuint16m1_t vs3,
                          size_t vl) {
  return __riscv_vse16(vm, rs1, vs3, vl);
}

void test_vse16_v_u16m2_m(vbool8_t vm, uint16_t *rs1, vuint16m2_t vs3,
                          size_t vl) {
  return __riscv_vse16(vm, rs1, vs3, vl);
}

void test_vse16_v_u16m4_m(vbool4_t vm, uint16_t *rs1, vuint16m4_t vs3,
                          size_t vl) {
  return __riscv_vse16(vm, rs1, vs3, vl);
}

void test_vse16_v_u16m8_m(vbool2_t vm, uint16_t *rs1, vuint16m8_t vs3,
                          size_t vl) {
  return __riscv_vse16(vm, rs1, vs3, vl);
}
