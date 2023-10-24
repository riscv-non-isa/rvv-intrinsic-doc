#include <riscv_vector.h>
#include <stdint.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;

void test_vssseg5e8_v_i8mf8x5(int8_t *rs1, ptrdiff_t rs2, vint8mf8x5_t vs3,
                              size_t vl) {
  return __riscv_vssseg5e8_v_i8mf8x5(rs1, rs2, vs3, vl);
}

void test_vssseg5e8_v_i8mf4x5(int8_t *rs1, ptrdiff_t rs2, vint8mf4x5_t vs3,
                              size_t vl) {
  return __riscv_vssseg5e8_v_i8mf4x5(rs1, rs2, vs3, vl);
}

void test_vssseg5e8_v_i8mf2x5(int8_t *rs1, ptrdiff_t rs2, vint8mf2x5_t vs3,
                              size_t vl) {
  return __riscv_vssseg5e8_v_i8mf2x5(rs1, rs2, vs3, vl);
}

void test_vssseg5e8_v_i8m1x5(int8_t *rs1, ptrdiff_t rs2, vint8m1x5_t vs3,
                             size_t vl) {
  return __riscv_vssseg5e8_v_i8m1x5(rs1, rs2, vs3, vl);
}

void test_vssseg5e8_v_u8mf8x5(uint8_t *rs1, ptrdiff_t rs2, vuint8mf8x5_t vs3,
                              size_t vl) {
  return __riscv_vssseg5e8_v_u8mf8x5(rs1, rs2, vs3, vl);
}

void test_vssseg5e8_v_u8mf4x5(uint8_t *rs1, ptrdiff_t rs2, vuint8mf4x5_t vs3,
                              size_t vl) {
  return __riscv_vssseg5e8_v_u8mf4x5(rs1, rs2, vs3, vl);
}

void test_vssseg5e8_v_u8mf2x5(uint8_t *rs1, ptrdiff_t rs2, vuint8mf2x5_t vs3,
                              size_t vl) {
  return __riscv_vssseg5e8_v_u8mf2x5(rs1, rs2, vs3, vl);
}

void test_vssseg5e8_v_u8m1x5(uint8_t *rs1, ptrdiff_t rs2, vuint8m1x5_t vs3,
                             size_t vl) {
  return __riscv_vssseg5e8_v_u8m1x5(rs1, rs2, vs3, vl);
}

void test_vssseg5e8_v_i8mf8x5_m(vbool64_t vm, int8_t *rs1, ptrdiff_t rs2,
                                vint8mf8x5_t vs3, size_t vl) {
  return __riscv_vssseg5e8_v_i8mf8x5_m(vm, rs1, rs2, vs3, vl);
}

void test_vssseg5e8_v_i8mf4x5_m(vbool32_t vm, int8_t *rs1, ptrdiff_t rs2,
                                vint8mf4x5_t vs3, size_t vl) {
  return __riscv_vssseg5e8_v_i8mf4x5_m(vm, rs1, rs2, vs3, vl);
}

void test_vssseg5e8_v_i8mf2x5_m(vbool16_t vm, int8_t *rs1, ptrdiff_t rs2,
                                vint8mf2x5_t vs3, size_t vl) {
  return __riscv_vssseg5e8_v_i8mf2x5_m(vm, rs1, rs2, vs3, vl);
}

void test_vssseg5e8_v_i8m1x5_m(vbool8_t vm, int8_t *rs1, ptrdiff_t rs2,
                               vint8m1x5_t vs3, size_t vl) {
  return __riscv_vssseg5e8_v_i8m1x5_m(vm, rs1, rs2, vs3, vl);
}

void test_vssseg5e8_v_u8mf8x5_m(vbool64_t vm, uint8_t *rs1, ptrdiff_t rs2,
                                vuint8mf8x5_t vs3, size_t vl) {
  return __riscv_vssseg5e8_v_u8mf8x5_m(vm, rs1, rs2, vs3, vl);
}

void test_vssseg5e8_v_u8mf4x5_m(vbool32_t vm, uint8_t *rs1, ptrdiff_t rs2,
                                vuint8mf4x5_t vs3, size_t vl) {
  return __riscv_vssseg5e8_v_u8mf4x5_m(vm, rs1, rs2, vs3, vl);
}

void test_vssseg5e8_v_u8mf2x5_m(vbool16_t vm, uint8_t *rs1, ptrdiff_t rs2,
                                vuint8mf2x5_t vs3, size_t vl) {
  return __riscv_vssseg5e8_v_u8mf2x5_m(vm, rs1, rs2, vs3, vl);
}

void test_vssseg5e8_v_u8m1x5_m(vbool8_t vm, uint8_t *rs1, ptrdiff_t rs2,
                               vuint8m1x5_t vs3, size_t vl) {
  return __riscv_vssseg5e8_v_u8m1x5_m(vm, rs1, rs2, vs3, vl);
}
