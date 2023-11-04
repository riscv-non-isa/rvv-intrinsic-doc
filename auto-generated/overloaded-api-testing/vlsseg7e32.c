#include <riscv_vector.h>
#include <stdint.h>

vfloat32mf2x7_t test_vlsseg7e32_v_f32mf2x7_m(vbool64_t vm, const float *rs1,
                                             ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg7e32(vm, rs1, rs2, vl);
}

vfloat32m1x7_t test_vlsseg7e32_v_f32m1x7_m(vbool32_t vm, const float *rs1,
                                           ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg7e32(vm, rs1, rs2, vl);
}

vint32mf2x7_t test_vlsseg7e32_v_i32mf2x7_m(vbool64_t vm, const int32_t *rs1,
                                           ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg7e32(vm, rs1, rs2, vl);
}

vint32m1x7_t test_vlsseg7e32_v_i32m1x7_m(vbool32_t vm, const int32_t *rs1,
                                         ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg7e32(vm, rs1, rs2, vl);
}

vuint32mf2x7_t test_vlsseg7e32_v_u32mf2x7_m(vbool64_t vm, const uint32_t *rs1,
                                            ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg7e32(vm, rs1, rs2, vl);
}

vuint32m1x7_t test_vlsseg7e32_v_u32m1x7_m(vbool32_t vm, const uint32_t *rs1,
                                          ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg7e32(vm, rs1, rs2, vl);
}
