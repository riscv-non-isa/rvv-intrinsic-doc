#include <riscv_vector.h>
#include <stdint.h>

void test_vssseg7e16_v_i16mf4x7(int16_t *rs1, ptrdiff_t rs2, vint16mf4x7_t vs3,
                                size_t vl) {
  return __riscv_vssseg7e16_v_i16mf4x7(rs1, rs2, vs3, vl);
}

void test_vssseg7e16_v_i16mf2x7(int16_t *rs1, ptrdiff_t rs2, vint16mf2x7_t vs3,
                                size_t vl) {
  return __riscv_vssseg7e16_v_i16mf2x7(rs1, rs2, vs3, vl);
}

void test_vssseg7e16_v_i16m1x7(int16_t *rs1, ptrdiff_t rs2, vint16m1x7_t vs3,
                               size_t vl) {
  return __riscv_vssseg7e16_v_i16m1x7(rs1, rs2, vs3, vl);
}

void test_vssseg7e16_v_u16mf4x7(uint16_t *rs1, ptrdiff_t rs2,
                                vuint16mf4x7_t vs3, size_t vl) {
  return __riscv_vssseg7e16_v_u16mf4x7(rs1, rs2, vs3, vl);
}

void test_vssseg7e16_v_u16mf2x7(uint16_t *rs1, ptrdiff_t rs2,
                                vuint16mf2x7_t vs3, size_t vl) {
  return __riscv_vssseg7e16_v_u16mf2x7(rs1, rs2, vs3, vl);
}

void test_vssseg7e16_v_u16m1x7(uint16_t *rs1, ptrdiff_t rs2, vuint16m1x7_t vs3,
                               size_t vl) {
  return __riscv_vssseg7e16_v_u16m1x7(rs1, rs2, vs3, vl);
}

void test_vssseg7e16_v_i16mf4x7_m(vbool64_t vm, int16_t *rs1, ptrdiff_t rs2,
                                  vint16mf4x7_t vs3, size_t vl) {
  return __riscv_vssseg7e16_v_i16mf4x7_m(vm, rs1, rs2, vs3, vl);
}

void test_vssseg7e16_v_i16mf2x7_m(vbool32_t vm, int16_t *rs1, ptrdiff_t rs2,
                                  vint16mf2x7_t vs3, size_t vl) {
  return __riscv_vssseg7e16_v_i16mf2x7_m(vm, rs1, rs2, vs3, vl);
}

void test_vssseg7e16_v_i16m1x7_m(vbool16_t vm, int16_t *rs1, ptrdiff_t rs2,
                                 vint16m1x7_t vs3, size_t vl) {
  return __riscv_vssseg7e16_v_i16m1x7_m(vm, rs1, rs2, vs3, vl);
}

void test_vssseg7e16_v_u16mf4x7_m(vbool64_t vm, uint16_t *rs1, ptrdiff_t rs2,
                                  vuint16mf4x7_t vs3, size_t vl) {
  return __riscv_vssseg7e16_v_u16mf4x7_m(vm, rs1, rs2, vs3, vl);
}

void test_vssseg7e16_v_u16mf2x7_m(vbool32_t vm, uint16_t *rs1, ptrdiff_t rs2,
                                  vuint16mf2x7_t vs3, size_t vl) {
  return __riscv_vssseg7e16_v_u16mf2x7_m(vm, rs1, rs2, vs3, vl);
}

void test_vssseg7e16_v_u16m1x7_m(vbool16_t vm, uint16_t *rs1, ptrdiff_t rs2,
                                 vuint16m1x7_t vs3, size_t vl) {
  return __riscv_vssseg7e16_v_u16m1x7_m(vm, rs1, rs2, vs3, vl);
}
