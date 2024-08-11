#include <riscv_vector.h>
#include <stdint.h>

vint16mf4_t test_vlse16_v_i16mf4_m(vbool64_t vm, const int16_t *rs1,
                                   ptrdiff_t rs2, size_t vl) {
  return __riscv_vlse16(vm, rs1, rs2, vl);
}

vint16mf2_t test_vlse16_v_i16mf2_m(vbool32_t vm, const int16_t *rs1,
                                   ptrdiff_t rs2, size_t vl) {
  return __riscv_vlse16(vm, rs1, rs2, vl);
}

vint16m1_t test_vlse16_v_i16m1_m(vbool16_t vm, const int16_t *rs1,
                                 ptrdiff_t rs2, size_t vl) {
  return __riscv_vlse16(vm, rs1, rs2, vl);
}

vint16m2_t test_vlse16_v_i16m2_m(vbool8_t vm, const int16_t *rs1, ptrdiff_t rs2,
                                 size_t vl) {
  return __riscv_vlse16(vm, rs1, rs2, vl);
}

vint16m4_t test_vlse16_v_i16m4_m(vbool4_t vm, const int16_t *rs1, ptrdiff_t rs2,
                                 size_t vl) {
  return __riscv_vlse16(vm, rs1, rs2, vl);
}

vint16m8_t test_vlse16_v_i16m8_m(vbool2_t vm, const int16_t *rs1, ptrdiff_t rs2,
                                 size_t vl) {
  return __riscv_vlse16(vm, rs1, rs2, vl);
}

vuint16mf4_t test_vlse16_v_u16mf4_m(vbool64_t vm, const uint16_t *rs1,
                                    ptrdiff_t rs2, size_t vl) {
  return __riscv_vlse16(vm, rs1, rs2, vl);
}

vuint16mf2_t test_vlse16_v_u16mf2_m(vbool32_t vm, const uint16_t *rs1,
                                    ptrdiff_t rs2, size_t vl) {
  return __riscv_vlse16(vm, rs1, rs2, vl);
}

vuint16m1_t test_vlse16_v_u16m1_m(vbool16_t vm, const uint16_t *rs1,
                                  ptrdiff_t rs2, size_t vl) {
  return __riscv_vlse16(vm, rs1, rs2, vl);
}

vuint16m2_t test_vlse16_v_u16m2_m(vbool8_t vm, const uint16_t *rs1,
                                  ptrdiff_t rs2, size_t vl) {
  return __riscv_vlse16(vm, rs1, rs2, vl);
}

vuint16m4_t test_vlse16_v_u16m4_m(vbool4_t vm, const uint16_t *rs1,
                                  ptrdiff_t rs2, size_t vl) {
  return __riscv_vlse16(vm, rs1, rs2, vl);
}

vuint16m8_t test_vlse16_v_u16m8_m(vbool2_t vm, const uint16_t *rs1,
                                  ptrdiff_t rs2, size_t vl) {
  return __riscv_vlse16(vm, rs1, rs2, vl);
}
