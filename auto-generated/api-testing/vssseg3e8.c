#include <riscv_vector.h>
#include <stdint.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;

void test_vssseg3e8_v_i8mf8x3(int8_t *rs1, ptrdiff_t rs2, vint8mf8x3_t vs3,
                              size_t vl) {
  return __riscv_vssseg3e8_v_i8mf8x3(rs1, rs2, vs3, vl);
}

void test_vssseg3e8_v_i8mf4x3(int8_t *rs1, ptrdiff_t rs2, vint8mf4x3_t vs3,
                              size_t vl) {
  return __riscv_vssseg3e8_v_i8mf4x3(rs1, rs2, vs3, vl);
}

void test_vssseg3e8_v_i8mf2x3(int8_t *rs1, ptrdiff_t rs2, vint8mf2x3_t vs3,
                              size_t vl) {
  return __riscv_vssseg3e8_v_i8mf2x3(rs1, rs2, vs3, vl);
}

void test_vssseg3e8_v_i8m1x3(int8_t *rs1, ptrdiff_t rs2, vint8m1x3_t vs3,
                             size_t vl) {
  return __riscv_vssseg3e8_v_i8m1x3(rs1, rs2, vs3, vl);
}

void test_vssseg3e8_v_i8m2x3(int8_t *rs1, ptrdiff_t rs2, vint8m2x3_t vs3,
                             size_t vl) {
  return __riscv_vssseg3e8_v_i8m2x3(rs1, rs2, vs3, vl);
}

void test_vssseg3e8_v_u8mf8x3(uint8_t *rs1, ptrdiff_t rs2, vuint8mf8x3_t vs3,
                              size_t vl) {
  return __riscv_vssseg3e8_v_u8mf8x3(rs1, rs2, vs3, vl);
}

void test_vssseg3e8_v_u8mf4x3(uint8_t *rs1, ptrdiff_t rs2, vuint8mf4x3_t vs3,
                              size_t vl) {
  return __riscv_vssseg3e8_v_u8mf4x3(rs1, rs2, vs3, vl);
}

void test_vssseg3e8_v_u8mf2x3(uint8_t *rs1, ptrdiff_t rs2, vuint8mf2x3_t vs3,
                              size_t vl) {
  return __riscv_vssseg3e8_v_u8mf2x3(rs1, rs2, vs3, vl);
}

void test_vssseg3e8_v_u8m1x3(uint8_t *rs1, ptrdiff_t rs2, vuint8m1x3_t vs3,
                             size_t vl) {
  return __riscv_vssseg3e8_v_u8m1x3(rs1, rs2, vs3, vl);
}

void test_vssseg3e8_v_u8m2x3(uint8_t *rs1, ptrdiff_t rs2, vuint8m2x3_t vs3,
                             size_t vl) {
  return __riscv_vssseg3e8_v_u8m2x3(rs1, rs2, vs3, vl);
}

void test_vssseg3e8_v_i8mf8x3_m(vbool64_t vm, int8_t *rs1, ptrdiff_t rs2,
                                vint8mf8x3_t vs3, size_t vl) {
  return __riscv_vssseg3e8_v_i8mf8x3_m(vm, rs1, rs2, vs3, vl);
}

void test_vssseg3e8_v_i8mf4x3_m(vbool32_t vm, int8_t *rs1, ptrdiff_t rs2,
                                vint8mf4x3_t vs3, size_t vl) {
  return __riscv_vssseg3e8_v_i8mf4x3_m(vm, rs1, rs2, vs3, vl);
}

void test_vssseg3e8_v_i8mf2x3_m(vbool16_t vm, int8_t *rs1, ptrdiff_t rs2,
                                vint8mf2x3_t vs3, size_t vl) {
  return __riscv_vssseg3e8_v_i8mf2x3_m(vm, rs1, rs2, vs3, vl);
}

void test_vssseg3e8_v_i8m1x3_m(vbool8_t vm, int8_t *rs1, ptrdiff_t rs2,
                               vint8m1x3_t vs3, size_t vl) {
  return __riscv_vssseg3e8_v_i8m1x3_m(vm, rs1, rs2, vs3, vl);
}

void test_vssseg3e8_v_i8m2x3_m(vbool4_t vm, int8_t *rs1, ptrdiff_t rs2,
                               vint8m2x3_t vs3, size_t vl) {
  return __riscv_vssseg3e8_v_i8m2x3_m(vm, rs1, rs2, vs3, vl);
}

void test_vssseg3e8_v_u8mf8x3_m(vbool64_t vm, uint8_t *rs1, ptrdiff_t rs2,
                                vuint8mf8x3_t vs3, size_t vl) {
  return __riscv_vssseg3e8_v_u8mf8x3_m(vm, rs1, rs2, vs3, vl);
}

void test_vssseg3e8_v_u8mf4x3_m(vbool32_t vm, uint8_t *rs1, ptrdiff_t rs2,
                                vuint8mf4x3_t vs3, size_t vl) {
  return __riscv_vssseg3e8_v_u8mf4x3_m(vm, rs1, rs2, vs3, vl);
}

void test_vssseg3e8_v_u8mf2x3_m(vbool16_t vm, uint8_t *rs1, ptrdiff_t rs2,
                                vuint8mf2x3_t vs3, size_t vl) {
  return __riscv_vssseg3e8_v_u8mf2x3_m(vm, rs1, rs2, vs3, vl);
}

void test_vssseg3e8_v_u8m1x3_m(vbool8_t vm, uint8_t *rs1, ptrdiff_t rs2,
                               vuint8m1x3_t vs3, size_t vl) {
  return __riscv_vssseg3e8_v_u8m1x3_m(vm, rs1, rs2, vs3, vl);
}

void test_vssseg3e8_v_u8m2x3_m(vbool4_t vm, uint8_t *rs1, ptrdiff_t rs2,
                               vuint8m2x3_t vs3, size_t vl) {
  return __riscv_vssseg3e8_v_u8m2x3_m(vm, rs1, rs2, vs3, vl);
}
