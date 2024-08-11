#include <riscv_vector.h>
#include <stdint.h>

vint16mf4x6_t test_vlseg6e16ff_v_i16mf4x6(const int16_t *rs1, size_t *new_vl,
                                          size_t vl) {
  return __riscv_vlseg6e16ff_v_i16mf4x6(rs1, new_vl, vl);
}

vint16mf2x6_t test_vlseg6e16ff_v_i16mf2x6(const int16_t *rs1, size_t *new_vl,
                                          size_t vl) {
  return __riscv_vlseg6e16ff_v_i16mf2x6(rs1, new_vl, vl);
}

vint16m1x6_t test_vlseg6e16ff_v_i16m1x6(const int16_t *rs1, size_t *new_vl,
                                        size_t vl) {
  return __riscv_vlseg6e16ff_v_i16m1x6(rs1, new_vl, vl);
}

vuint16mf4x6_t test_vlseg6e16ff_v_u16mf4x6(const uint16_t *rs1, size_t *new_vl,
                                           size_t vl) {
  return __riscv_vlseg6e16ff_v_u16mf4x6(rs1, new_vl, vl);
}

vuint16mf2x6_t test_vlseg6e16ff_v_u16mf2x6(const uint16_t *rs1, size_t *new_vl,
                                           size_t vl) {
  return __riscv_vlseg6e16ff_v_u16mf2x6(rs1, new_vl, vl);
}

vuint16m1x6_t test_vlseg6e16ff_v_u16m1x6(const uint16_t *rs1, size_t *new_vl,
                                         size_t vl) {
  return __riscv_vlseg6e16ff_v_u16m1x6(rs1, new_vl, vl);
}

vint16mf4x6_t test_vlseg6e16ff_v_i16mf4x6_m(vbool64_t vm, const int16_t *rs1,
                                            size_t *new_vl, size_t vl) {
  return __riscv_vlseg6e16ff_v_i16mf4x6_m(vm, rs1, new_vl, vl);
}

vint16mf2x6_t test_vlseg6e16ff_v_i16mf2x6_m(vbool32_t vm, const int16_t *rs1,
                                            size_t *new_vl, size_t vl) {
  return __riscv_vlseg6e16ff_v_i16mf2x6_m(vm, rs1, new_vl, vl);
}

vint16m1x6_t test_vlseg6e16ff_v_i16m1x6_m(vbool16_t vm, const int16_t *rs1,
                                          size_t *new_vl, size_t vl) {
  return __riscv_vlseg6e16ff_v_i16m1x6_m(vm, rs1, new_vl, vl);
}

vuint16mf4x6_t test_vlseg6e16ff_v_u16mf4x6_m(vbool64_t vm, const uint16_t *rs1,
                                             size_t *new_vl, size_t vl) {
  return __riscv_vlseg6e16ff_v_u16mf4x6_m(vm, rs1, new_vl, vl);
}

vuint16mf2x6_t test_vlseg6e16ff_v_u16mf2x6_m(vbool32_t vm, const uint16_t *rs1,
                                             size_t *new_vl, size_t vl) {
  return __riscv_vlseg6e16ff_v_u16mf2x6_m(vm, rs1, new_vl, vl);
}

vuint16m1x6_t test_vlseg6e16ff_v_u16m1x6_m(vbool16_t vm, const uint16_t *rs1,
                                           size_t *new_vl, size_t vl) {
  return __riscv_vlseg6e16ff_v_u16m1x6_m(vm, rs1, new_vl, vl);
}
