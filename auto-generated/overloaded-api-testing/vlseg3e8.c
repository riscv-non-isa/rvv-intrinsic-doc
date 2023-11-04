#include <riscv_vector.h>
#include <stdint.h>

vint8mf8x3_t test_vlseg3e8_v_i8mf8x3_m(vbool64_t vm, const int8_t *rs1,
                                       size_t vl) {
  return __riscv_vlseg3e8(vm, rs1, vl);
}

vint8mf4x3_t test_vlseg3e8_v_i8mf4x3_m(vbool32_t vm, const int8_t *rs1,
                                       size_t vl) {
  return __riscv_vlseg3e8(vm, rs1, vl);
}

vint8mf2x3_t test_vlseg3e8_v_i8mf2x3_m(vbool16_t vm, const int8_t *rs1,
                                       size_t vl) {
  return __riscv_vlseg3e8(vm, rs1, vl);
}

vint8m1x3_t test_vlseg3e8_v_i8m1x3_m(vbool8_t vm, const int8_t *rs1,
                                     size_t vl) {
  return __riscv_vlseg3e8(vm, rs1, vl);
}

vint8m2x3_t test_vlseg3e8_v_i8m2x3_m(vbool4_t vm, const int8_t *rs1,
                                     size_t vl) {
  return __riscv_vlseg3e8(vm, rs1, vl);
}

vuint8mf8x3_t test_vlseg3e8_v_u8mf8x3_m(vbool64_t vm, const uint8_t *rs1,
                                        size_t vl) {
  return __riscv_vlseg3e8(vm, rs1, vl);
}

vuint8mf4x3_t test_vlseg3e8_v_u8mf4x3_m(vbool32_t vm, const uint8_t *rs1,
                                        size_t vl) {
  return __riscv_vlseg3e8(vm, rs1, vl);
}

vuint8mf2x3_t test_vlseg3e8_v_u8mf2x3_m(vbool16_t vm, const uint8_t *rs1,
                                        size_t vl) {
  return __riscv_vlseg3e8(vm, rs1, vl);
}

vuint8m1x3_t test_vlseg3e8_v_u8m1x3_m(vbool8_t vm, const uint8_t *rs1,
                                      size_t vl) {
  return __riscv_vlseg3e8(vm, rs1, vl);
}

vuint8m2x3_t test_vlseg3e8_v_u8m2x3_m(vbool4_t vm, const uint8_t *rs1,
                                      size_t vl) {
  return __riscv_vlseg3e8(vm, rs1, vl);
}
