#include <riscv_vector.h>
#include <stdint.h>

vint16mf4x7_t test_vlsseg7e16_v_i16mf4x7(const int16_t *rs1, ptrdiff_t rs2,
                                         size_t vl) {
  return __riscv_vlsseg7e16_v_i16mf4x7(rs1, rs2, vl);
}

vint16mf2x7_t test_vlsseg7e16_v_i16mf2x7(const int16_t *rs1, ptrdiff_t rs2,
                                         size_t vl) {
  return __riscv_vlsseg7e16_v_i16mf2x7(rs1, rs2, vl);
}

vint16m1x7_t test_vlsseg7e16_v_i16m1x7(const int16_t *rs1, ptrdiff_t rs2,
                                       size_t vl) {
  return __riscv_vlsseg7e16_v_i16m1x7(rs1, rs2, vl);
}

vuint16mf4x7_t test_vlsseg7e16_v_u16mf4x7(const uint16_t *rs1, ptrdiff_t rs2,
                                          size_t vl) {
  return __riscv_vlsseg7e16_v_u16mf4x7(rs1, rs2, vl);
}

vuint16mf2x7_t test_vlsseg7e16_v_u16mf2x7(const uint16_t *rs1, ptrdiff_t rs2,
                                          size_t vl) {
  return __riscv_vlsseg7e16_v_u16mf2x7(rs1, rs2, vl);
}

vuint16m1x7_t test_vlsseg7e16_v_u16m1x7(const uint16_t *rs1, ptrdiff_t rs2,
                                        size_t vl) {
  return __riscv_vlsseg7e16_v_u16m1x7(rs1, rs2, vl);
}

vint16mf4x7_t test_vlsseg7e16_v_i16mf4x7_m(vbool64_t vm, const int16_t *rs1,
                                           ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg7e16_v_i16mf4x7_m(vm, rs1, rs2, vl);
}

vint16mf2x7_t test_vlsseg7e16_v_i16mf2x7_m(vbool32_t vm, const int16_t *rs1,
                                           ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg7e16_v_i16mf2x7_m(vm, rs1, rs2, vl);
}

vint16m1x7_t test_vlsseg7e16_v_i16m1x7_m(vbool16_t vm, const int16_t *rs1,
                                         ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg7e16_v_i16m1x7_m(vm, rs1, rs2, vl);
}

vuint16mf4x7_t test_vlsseg7e16_v_u16mf4x7_m(vbool64_t vm, const uint16_t *rs1,
                                            ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg7e16_v_u16mf4x7_m(vm, rs1, rs2, vl);
}

vuint16mf2x7_t test_vlsseg7e16_v_u16mf2x7_m(vbool32_t vm, const uint16_t *rs1,
                                            ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg7e16_v_u16mf2x7_m(vm, rs1, rs2, vl);
}

vuint16m1x7_t test_vlsseg7e16_v_u16m1x7_m(vbool16_t vm, const uint16_t *rs1,
                                          ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg7e16_v_u16m1x7_m(vm, rs1, rs2, vl);
}
