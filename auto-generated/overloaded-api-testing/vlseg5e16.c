#include <riscv_vector.h>
#include <stdint.h>

vint16mf4x5_t test_vlseg5e16_v_i16mf4x5_m(vbool64_t vm, const int16_t *rs1,
                                          size_t vl) {
  return __riscv_vlseg5e16(vm, rs1, vl);
}

vint16mf2x5_t test_vlseg5e16_v_i16mf2x5_m(vbool32_t vm, const int16_t *rs1,
                                          size_t vl) {
  return __riscv_vlseg5e16(vm, rs1, vl);
}

vint16m1x5_t test_vlseg5e16_v_i16m1x5_m(vbool16_t vm, const int16_t *rs1,
                                        size_t vl) {
  return __riscv_vlseg5e16(vm, rs1, vl);
}

vuint16mf4x5_t test_vlseg5e16_v_u16mf4x5_m(vbool64_t vm, const uint16_t *rs1,
                                           size_t vl) {
  return __riscv_vlseg5e16(vm, rs1, vl);
}

vuint16mf2x5_t test_vlseg5e16_v_u16mf2x5_m(vbool32_t vm, const uint16_t *rs1,
                                           size_t vl) {
  return __riscv_vlseg5e16(vm, rs1, vl);
}

vuint16m1x5_t test_vlseg5e16_v_u16m1x5_m(vbool16_t vm, const uint16_t *rs1,
                                         size_t vl) {
  return __riscv_vlseg5e16(vm, rs1, vl);
}
