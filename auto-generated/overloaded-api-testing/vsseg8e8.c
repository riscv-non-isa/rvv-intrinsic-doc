#include <riscv_vector.h>
#include <stdint.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
void test_vsseg8e8_v_i8mf8x8(int8_t *rs1, vint8mf8x8_t vs3, size_t vl) {
  return __riscv_vsseg8e8(rs1, vs3, vl);
}

void test_vsseg8e8_v_i8mf4x8(int8_t *rs1, vint8mf4x8_t vs3, size_t vl) {
  return __riscv_vsseg8e8(rs1, vs3, vl);
}

void test_vsseg8e8_v_i8mf2x8(int8_t *rs1, vint8mf2x8_t vs3, size_t vl) {
  return __riscv_vsseg8e8(rs1, vs3, vl);
}

void test_vsseg8e8_v_i8m1x8(int8_t *rs1, vint8m1x8_t vs3, size_t vl) {
  return __riscv_vsseg8e8(rs1, vs3, vl);
}

void test_vsseg8e8_v_u8mf8x8(uint8_t *rs1, vuint8mf8x8_t vs3, size_t vl) {
  return __riscv_vsseg8e8(rs1, vs3, vl);
}

void test_vsseg8e8_v_u8mf4x8(uint8_t *rs1, vuint8mf4x8_t vs3, size_t vl) {
  return __riscv_vsseg8e8(rs1, vs3, vl);
}

void test_vsseg8e8_v_u8mf2x8(uint8_t *rs1, vuint8mf2x8_t vs3, size_t vl) {
  return __riscv_vsseg8e8(rs1, vs3, vl);
}

void test_vsseg8e8_v_u8m1x8(uint8_t *rs1, vuint8m1x8_t vs3, size_t vl) {
  return __riscv_vsseg8e8(rs1, vs3, vl);
}

void test_vsseg8e8_v_i8mf8x8_m(vbool64_t vm, int8_t *rs1, vint8mf8x8_t vs3,
                               size_t vl) {
  return __riscv_vsseg8e8(vm, rs1, vs3, vl);
}

void test_vsseg8e8_v_i8mf4x8_m(vbool32_t vm, int8_t *rs1, vint8mf4x8_t vs3,
                               size_t vl) {
  return __riscv_vsseg8e8(vm, rs1, vs3, vl);
}

void test_vsseg8e8_v_i8mf2x8_m(vbool16_t vm, int8_t *rs1, vint8mf2x8_t vs3,
                               size_t vl) {
  return __riscv_vsseg8e8(vm, rs1, vs3, vl);
}

void test_vsseg8e8_v_i8m1x8_m(vbool8_t vm, int8_t *rs1, vint8m1x8_t vs3,
                              size_t vl) {
  return __riscv_vsseg8e8(vm, rs1, vs3, vl);
}

void test_vsseg8e8_v_u8mf8x8_m(vbool64_t vm, uint8_t *rs1, vuint8mf8x8_t vs3,
                               size_t vl) {
  return __riscv_vsseg8e8(vm, rs1, vs3, vl);
}

void test_vsseg8e8_v_u8mf4x8_m(vbool32_t vm, uint8_t *rs1, vuint8mf4x8_t vs3,
                               size_t vl) {
  return __riscv_vsseg8e8(vm, rs1, vs3, vl);
}

void test_vsseg8e8_v_u8mf2x8_m(vbool16_t vm, uint8_t *rs1, vuint8mf2x8_t vs3,
                               size_t vl) {
  return __riscv_vsseg8e8(vm, rs1, vs3, vl);
}

void test_vsseg8e8_v_u8m1x8_m(vbool8_t vm, uint8_t *rs1, vuint8m1x8_t vs3,
                              size_t vl) {
  return __riscv_vsseg8e8(vm, rs1, vs3, vl);
}
