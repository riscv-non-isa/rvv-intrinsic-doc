#include <riscv_vector.h>
#include <stdint.h>

vfloat32mf2x5_t test_vlseg5e32ff_v_f32mf2x5_m(vbool64_t vm, const float *rs1,
                                              size_t *new_vl, size_t vl) {
  return __riscv_vlseg5e32ff(vm, rs1, new_vl, vl);
}

vfloat32m1x5_t test_vlseg5e32ff_v_f32m1x5_m(vbool32_t vm, const float *rs1,
                                            size_t *new_vl, size_t vl) {
  return __riscv_vlseg5e32ff(vm, rs1, new_vl, vl);
}

vint32mf2x5_t test_vlseg5e32ff_v_i32mf2x5_m(vbool64_t vm, const int32_t *rs1,
                                            size_t *new_vl, size_t vl) {
  return __riscv_vlseg5e32ff(vm, rs1, new_vl, vl);
}

vint32m1x5_t test_vlseg5e32ff_v_i32m1x5_m(vbool32_t vm, const int32_t *rs1,
                                          size_t *new_vl, size_t vl) {
  return __riscv_vlseg5e32ff(vm, rs1, new_vl, vl);
}

vuint32mf2x5_t test_vlseg5e32ff_v_u32mf2x5_m(vbool64_t vm, const uint32_t *rs1,
                                             size_t *new_vl, size_t vl) {
  return __riscv_vlseg5e32ff(vm, rs1, new_vl, vl);
}

vuint32m1x5_t test_vlseg5e32ff_v_u32m1x5_m(vbool32_t vm, const uint32_t *rs1,
                                           size_t *new_vl, size_t vl) {
  return __riscv_vlseg5e32ff(vm, rs1, new_vl, vl);
}
