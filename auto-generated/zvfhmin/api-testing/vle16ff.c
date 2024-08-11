#include <riscv_vector.h>
#include <stdint.h>

vfloat16mf4_t test_vle16ff_v_f16mf4(const _Float16 *rs1, size_t *new_vl,
                                    size_t vl) {
  return __riscv_vle16ff_v_f16mf4(rs1, new_vl, vl);
}

vfloat16mf2_t test_vle16ff_v_f16mf2(const _Float16 *rs1, size_t *new_vl,
                                    size_t vl) {
  return __riscv_vle16ff_v_f16mf2(rs1, new_vl, vl);
}

vfloat16m1_t test_vle16ff_v_f16m1(const _Float16 *rs1, size_t *new_vl,
                                  size_t vl) {
  return __riscv_vle16ff_v_f16m1(rs1, new_vl, vl);
}

vfloat16m2_t test_vle16ff_v_f16m2(const _Float16 *rs1, size_t *new_vl,
                                  size_t vl) {
  return __riscv_vle16ff_v_f16m2(rs1, new_vl, vl);
}

vfloat16m4_t test_vle16ff_v_f16m4(const _Float16 *rs1, size_t *new_vl,
                                  size_t vl) {
  return __riscv_vle16ff_v_f16m4(rs1, new_vl, vl);
}

vfloat16m8_t test_vle16ff_v_f16m8(const _Float16 *rs1, size_t *new_vl,
                                  size_t vl) {
  return __riscv_vle16ff_v_f16m8(rs1, new_vl, vl);
}

vfloat16mf4_t test_vle16ff_v_f16mf4_m(vbool64_t vm, const _Float16 *rs1,
                                      size_t *new_vl, size_t vl) {
  return __riscv_vle16ff_v_f16mf4_m(vm, rs1, new_vl, vl);
}

vfloat16mf2_t test_vle16ff_v_f16mf2_m(vbool32_t vm, const _Float16 *rs1,
                                      size_t *new_vl, size_t vl) {
  return __riscv_vle16ff_v_f16mf2_m(vm, rs1, new_vl, vl);
}

vfloat16m1_t test_vle16ff_v_f16m1_m(vbool16_t vm, const _Float16 *rs1,
                                    size_t *new_vl, size_t vl) {
  return __riscv_vle16ff_v_f16m1_m(vm, rs1, new_vl, vl);
}

vfloat16m2_t test_vle16ff_v_f16m2_m(vbool8_t vm, const _Float16 *rs1,
                                    size_t *new_vl, size_t vl) {
  return __riscv_vle16ff_v_f16m2_m(vm, rs1, new_vl, vl);
}

vfloat16m4_t test_vle16ff_v_f16m4_m(vbool4_t vm, const _Float16 *rs1,
                                    size_t *new_vl, size_t vl) {
  return __riscv_vle16ff_v_f16m4_m(vm, rs1, new_vl, vl);
}

vfloat16m8_t test_vle16ff_v_f16m8_m(vbool2_t vm, const _Float16 *rs1,
                                    size_t *new_vl, size_t vl) {
  return __riscv_vle16ff_v_f16m8_m(vm, rs1, new_vl, vl);
}
