#include <riscv_vector.h>
#include <stdint.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;

void test_vssseg6e8_v_i8mf8x6(int8_t *rs1, ptrdiff_t rs2, vint8mf8x6_t vs3,
                              size_t vl) {
  return __riscv_vssseg6e8_v_i8mf8x6(rs1, rs2, vs3, vl);
}

void test_vssseg6e8_v_i8mf4x6(int8_t *rs1, ptrdiff_t rs2, vint8mf4x6_t vs3,
                              size_t vl) {
  return __riscv_vssseg6e8_v_i8mf4x6(rs1, rs2, vs3, vl);
}

void test_vssseg6e8_v_i8mf2x6(int8_t *rs1, ptrdiff_t rs2, vint8mf2x6_t vs3,
                              size_t vl) {
  return __riscv_vssseg6e8_v_i8mf2x6(rs1, rs2, vs3, vl);
}

void test_vssseg6e8_v_i8m1x6(int8_t *rs1, ptrdiff_t rs2, vint8m1x6_t vs3,
                             size_t vl) {
  return __riscv_vssseg6e8_v_i8m1x6(rs1, rs2, vs3, vl);
}

void test_vssseg6e8_v_u8mf8x6(uint8_t *rs1, ptrdiff_t rs2, vuint8mf8x6_t vs3,
                              size_t vl) {
  return __riscv_vssseg6e8_v_u8mf8x6(rs1, rs2, vs3, vl);
}

void test_vssseg6e8_v_u8mf4x6(uint8_t *rs1, ptrdiff_t rs2, vuint8mf4x6_t vs3,
                              size_t vl) {
  return __riscv_vssseg6e8_v_u8mf4x6(rs1, rs2, vs3, vl);
}

void test_vssseg6e8_v_u8mf2x6(uint8_t *rs1, ptrdiff_t rs2, vuint8mf2x6_t vs3,
                              size_t vl) {
  return __riscv_vssseg6e8_v_u8mf2x6(rs1, rs2, vs3, vl);
}

void test_vssseg6e8_v_u8m1x6(uint8_t *rs1, ptrdiff_t rs2, vuint8m1x6_t vs3,
                             size_t vl) {
  return __riscv_vssseg6e8_v_u8m1x6(rs1, rs2, vs3, vl);
}

void test_vssseg6e8_v_i8mf8x6_m(vbool64_t vm, int8_t *rs1, ptrdiff_t rs2,
                                vint8mf8x6_t vs3, size_t vl) {
  return __riscv_vssseg6e8_v_i8mf8x6_m(vm, rs1, rs2, vs3, vl);
}

void test_vssseg6e8_v_i8mf4x6_m(vbool32_t vm, int8_t *rs1, ptrdiff_t rs2,
                                vint8mf4x6_t vs3, size_t vl) {
  return __riscv_vssseg6e8_v_i8mf4x6_m(vm, rs1, rs2, vs3, vl);
}

void test_vssseg6e8_v_i8mf2x6_m(vbool16_t vm, int8_t *rs1, ptrdiff_t rs2,
                                vint8mf2x6_t vs3, size_t vl) {
  return __riscv_vssseg6e8_v_i8mf2x6_m(vm, rs1, rs2, vs3, vl);
}

void test_vssseg6e8_v_i8m1x6_m(vbool8_t vm, int8_t *rs1, ptrdiff_t rs2,
                               vint8m1x6_t vs3, size_t vl) {
  return __riscv_vssseg6e8_v_i8m1x6_m(vm, rs1, rs2, vs3, vl);
}

void test_vssseg6e8_v_u8mf8x6_m(vbool64_t vm, uint8_t *rs1, ptrdiff_t rs2,
                                vuint8mf8x6_t vs3, size_t vl) {
  return __riscv_vssseg6e8_v_u8mf8x6_m(vm, rs1, rs2, vs3, vl);
}

void test_vssseg6e8_v_u8mf4x6_m(vbool32_t vm, uint8_t *rs1, ptrdiff_t rs2,
                                vuint8mf4x6_t vs3, size_t vl) {
  return __riscv_vssseg6e8_v_u8mf4x6_m(vm, rs1, rs2, vs3, vl);
}

void test_vssseg6e8_v_u8mf2x6_m(vbool16_t vm, uint8_t *rs1, ptrdiff_t rs2,
                                vuint8mf2x6_t vs3, size_t vl) {
  return __riscv_vssseg6e8_v_u8mf2x6_m(vm, rs1, rs2, vs3, vl);
}

void test_vssseg6e8_v_u8m1x6_m(vbool8_t vm, uint8_t *rs1, ptrdiff_t rs2,
                               vuint8m1x6_t vs3, size_t vl) {
  return __riscv_vssseg6e8_v_u8m1x6_m(vm, rs1, rs2, vs3, vl);
}
