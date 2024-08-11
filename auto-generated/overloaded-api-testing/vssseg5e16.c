#include <riscv_vector.h>
#include <stdint.h>

void test_vssseg5e16_v_i16mf4x5(int16_t *rs1, ptrdiff_t rs2, vint16mf4x5_t vs3,
                                size_t vl) {
  return __riscv_vssseg5e16(rs1, rs2, vs3, vl);
}

void test_vssseg5e16_v_i16mf2x5(int16_t *rs1, ptrdiff_t rs2, vint16mf2x5_t vs3,
                                size_t vl) {
  return __riscv_vssseg5e16(rs1, rs2, vs3, vl);
}

void test_vssseg5e16_v_i16m1x5(int16_t *rs1, ptrdiff_t rs2, vint16m1x5_t vs3,
                               size_t vl) {
  return __riscv_vssseg5e16(rs1, rs2, vs3, vl);
}

void test_vssseg5e16_v_u16mf4x5(uint16_t *rs1, ptrdiff_t rs2,
                                vuint16mf4x5_t vs3, size_t vl) {
  return __riscv_vssseg5e16(rs1, rs2, vs3, vl);
}

void test_vssseg5e16_v_u16mf2x5(uint16_t *rs1, ptrdiff_t rs2,
                                vuint16mf2x5_t vs3, size_t vl) {
  return __riscv_vssseg5e16(rs1, rs2, vs3, vl);
}

void test_vssseg5e16_v_u16m1x5(uint16_t *rs1, ptrdiff_t rs2, vuint16m1x5_t vs3,
                               size_t vl) {
  return __riscv_vssseg5e16(rs1, rs2, vs3, vl);
}

void test_vssseg5e16_v_i16mf4x5_m(vbool64_t vm, int16_t *rs1, ptrdiff_t rs2,
                                  vint16mf4x5_t vs3, size_t vl) {
  return __riscv_vssseg5e16(vm, rs1, rs2, vs3, vl);
}

void test_vssseg5e16_v_i16mf2x5_m(vbool32_t vm, int16_t *rs1, ptrdiff_t rs2,
                                  vint16mf2x5_t vs3, size_t vl) {
  return __riscv_vssseg5e16(vm, rs1, rs2, vs3, vl);
}

void test_vssseg5e16_v_i16m1x5_m(vbool16_t vm, int16_t *rs1, ptrdiff_t rs2,
                                 vint16m1x5_t vs3, size_t vl) {
  return __riscv_vssseg5e16(vm, rs1, rs2, vs3, vl);
}

void test_vssseg5e16_v_u16mf4x5_m(vbool64_t vm, uint16_t *rs1, ptrdiff_t rs2,
                                  vuint16mf4x5_t vs3, size_t vl) {
  return __riscv_vssseg5e16(vm, rs1, rs2, vs3, vl);
}

void test_vssseg5e16_v_u16mf2x5_m(vbool32_t vm, uint16_t *rs1, ptrdiff_t rs2,
                                  vuint16mf2x5_t vs3, size_t vl) {
  return __riscv_vssseg5e16(vm, rs1, rs2, vs3, vl);
}

void test_vssseg5e16_v_u16m1x5_m(vbool16_t vm, uint16_t *rs1, ptrdiff_t rs2,
                                 vuint16m1x5_t vs3, size_t vl) {
  return __riscv_vssseg5e16(vm, rs1, rs2, vs3, vl);
}
