#include <riscv_vector.h>
#include <stdint.h>

vint16mf4_t test_vle16ff_v_i16mf4_m(vbool64_t vm, const int16_t *rs1,
                                    size_t *new_vl, size_t vl) {
  return __riscv_vle16ff(vm, rs1, new_vl, vl);
}

vint16mf2_t test_vle16ff_v_i16mf2_m(vbool32_t vm, const int16_t *rs1,
                                    size_t *new_vl, size_t vl) {
  return __riscv_vle16ff(vm, rs1, new_vl, vl);
}

vint16m1_t test_vle16ff_v_i16m1_m(vbool16_t vm, const int16_t *rs1,
                                  size_t *new_vl, size_t vl) {
  return __riscv_vle16ff(vm, rs1, new_vl, vl);
}

vint16m2_t test_vle16ff_v_i16m2_m(vbool8_t vm, const int16_t *rs1,
                                  size_t *new_vl, size_t vl) {
  return __riscv_vle16ff(vm, rs1, new_vl, vl);
}

vint16m4_t test_vle16ff_v_i16m4_m(vbool4_t vm, const int16_t *rs1,
                                  size_t *new_vl, size_t vl) {
  return __riscv_vle16ff(vm, rs1, new_vl, vl);
}

vint16m8_t test_vle16ff_v_i16m8_m(vbool2_t vm, const int16_t *rs1,
                                  size_t *new_vl, size_t vl) {
  return __riscv_vle16ff(vm, rs1, new_vl, vl);
}

vuint16mf4_t test_vle16ff_v_u16mf4_m(vbool64_t vm, const uint16_t *rs1,
                                     size_t *new_vl, size_t vl) {
  return __riscv_vle16ff(vm, rs1, new_vl, vl);
}

vuint16mf2_t test_vle16ff_v_u16mf2_m(vbool32_t vm, const uint16_t *rs1,
                                     size_t *new_vl, size_t vl) {
  return __riscv_vle16ff(vm, rs1, new_vl, vl);
}

vuint16m1_t test_vle16ff_v_u16m1_m(vbool16_t vm, const uint16_t *rs1,
                                   size_t *new_vl, size_t vl) {
  return __riscv_vle16ff(vm, rs1, new_vl, vl);
}

vuint16m2_t test_vle16ff_v_u16m2_m(vbool8_t vm, const uint16_t *rs1,
                                   size_t *new_vl, size_t vl) {
  return __riscv_vle16ff(vm, rs1, new_vl, vl);
}

vuint16m4_t test_vle16ff_v_u16m4_m(vbool4_t vm, const uint16_t *rs1,
                                   size_t *new_vl, size_t vl) {
  return __riscv_vle16ff(vm, rs1, new_vl, vl);
}

vuint16m8_t test_vle16ff_v_u16m8_m(vbool2_t vm, const uint16_t *rs1,
                                   size_t *new_vl, size_t vl) {
  return __riscv_vle16ff(vm, rs1, new_vl, vl);
}
