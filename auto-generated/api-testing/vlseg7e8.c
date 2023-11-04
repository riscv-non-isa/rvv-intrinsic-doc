#include <riscv_vector.h>
#include <stdint.h>

vint8mf8x7_t test_vlseg7e8_v_i8mf8x7(const int8_t *rs1, size_t vl) {
  return __riscv_vlseg7e8_v_i8mf8x7(rs1, vl);
}

vint8mf4x7_t test_vlseg7e8_v_i8mf4x7(const int8_t *rs1, size_t vl) {
  return __riscv_vlseg7e8_v_i8mf4x7(rs1, vl);
}

vint8mf2x7_t test_vlseg7e8_v_i8mf2x7(const int8_t *rs1, size_t vl) {
  return __riscv_vlseg7e8_v_i8mf2x7(rs1, vl);
}

vint8m1x7_t test_vlseg7e8_v_i8m1x7(const int8_t *rs1, size_t vl) {
  return __riscv_vlseg7e8_v_i8m1x7(rs1, vl);
}

vuint8mf8x7_t test_vlseg7e8_v_u8mf8x7(const uint8_t *rs1, size_t vl) {
  return __riscv_vlseg7e8_v_u8mf8x7(rs1, vl);
}

vuint8mf4x7_t test_vlseg7e8_v_u8mf4x7(const uint8_t *rs1, size_t vl) {
  return __riscv_vlseg7e8_v_u8mf4x7(rs1, vl);
}

vuint8mf2x7_t test_vlseg7e8_v_u8mf2x7(const uint8_t *rs1, size_t vl) {
  return __riscv_vlseg7e8_v_u8mf2x7(rs1, vl);
}

vuint8m1x7_t test_vlseg7e8_v_u8m1x7(const uint8_t *rs1, size_t vl) {
  return __riscv_vlseg7e8_v_u8m1x7(rs1, vl);
}

vint8mf8x7_t test_vlseg7e8_v_i8mf8x7_m(vbool64_t vm, const int8_t *rs1,
                                       size_t vl) {
  return __riscv_vlseg7e8_v_i8mf8x7_m(vm, rs1, vl);
}

vint8mf4x7_t test_vlseg7e8_v_i8mf4x7_m(vbool32_t vm, const int8_t *rs1,
                                       size_t vl) {
  return __riscv_vlseg7e8_v_i8mf4x7_m(vm, rs1, vl);
}

vint8mf2x7_t test_vlseg7e8_v_i8mf2x7_m(vbool16_t vm, const int8_t *rs1,
                                       size_t vl) {
  return __riscv_vlseg7e8_v_i8mf2x7_m(vm, rs1, vl);
}

vint8m1x7_t test_vlseg7e8_v_i8m1x7_m(vbool8_t vm, const int8_t *rs1,
                                     size_t vl) {
  return __riscv_vlseg7e8_v_i8m1x7_m(vm, rs1, vl);
}

vuint8mf8x7_t test_vlseg7e8_v_u8mf8x7_m(vbool64_t vm, const uint8_t *rs1,
                                        size_t vl) {
  return __riscv_vlseg7e8_v_u8mf8x7_m(vm, rs1, vl);
}

vuint8mf4x7_t test_vlseg7e8_v_u8mf4x7_m(vbool32_t vm, const uint8_t *rs1,
                                        size_t vl) {
  return __riscv_vlseg7e8_v_u8mf4x7_m(vm, rs1, vl);
}

vuint8mf2x7_t test_vlseg7e8_v_u8mf2x7_m(vbool16_t vm, const uint8_t *rs1,
                                        size_t vl) {
  return __riscv_vlseg7e8_v_u8mf2x7_m(vm, rs1, vl);
}

vuint8m1x7_t test_vlseg7e8_v_u8m1x7_m(vbool8_t vm, const uint8_t *rs1,
                                      size_t vl) {
  return __riscv_vlseg7e8_v_u8m1x7_m(vm, rs1, vl);
}
