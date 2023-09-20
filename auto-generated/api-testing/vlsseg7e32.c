#include <riscv_vector.h>
#include <stdint.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
vfloat32mf2x7_t test_vlsseg7e32_v_f32mf2x7(const float32_t *rs1, ptrdiff_t rs2,
                                           size_t vl) {
  return __riscv_vlsseg7e32_v_f32mf2x7(rs1, rs2, vl);
}

vfloat32m1x7_t test_vlsseg7e32_v_f32m1x7(const float32_t *rs1, ptrdiff_t rs2,
                                         size_t vl) {
  return __riscv_vlsseg7e32_v_f32m1x7(rs1, rs2, vl);
}

vint32mf2x7_t test_vlsseg7e32_v_i32mf2x7(const int32_t *rs1, ptrdiff_t rs2,
                                         size_t vl) {
  return __riscv_vlsseg7e32_v_i32mf2x7(rs1, rs2, vl);
}

vint32m1x7_t test_vlsseg7e32_v_i32m1x7(const int32_t *rs1, ptrdiff_t rs2,
                                       size_t vl) {
  return __riscv_vlsseg7e32_v_i32m1x7(rs1, rs2, vl);
}

vuint32mf2x7_t test_vlsseg7e32_v_u32mf2x7(const uint32_t *rs1, ptrdiff_t rs2,
                                          size_t vl) {
  return __riscv_vlsseg7e32_v_u32mf2x7(rs1, rs2, vl);
}

vuint32m1x7_t test_vlsseg7e32_v_u32m1x7(const uint32_t *rs1, ptrdiff_t rs2,
                                        size_t vl) {
  return __riscv_vlsseg7e32_v_u32m1x7(rs1, rs2, vl);
}

vfloat32mf2x7_t test_vlsseg7e32_v_f32mf2x7_m(vbool64_t vm, const float32_t *rs1,
                                             ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg7e32_v_f32mf2x7_m(vm, rs1, rs2, vl);
}

vfloat32m1x7_t test_vlsseg7e32_v_f32m1x7_m(vbool32_t vm, const float32_t *rs1,
                                           ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg7e32_v_f32m1x7_m(vm, rs1, rs2, vl);
}

vint32mf2x7_t test_vlsseg7e32_v_i32mf2x7_m(vbool64_t vm, const int32_t *rs1,
                                           ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg7e32_v_i32mf2x7_m(vm, rs1, rs2, vl);
}

vint32m1x7_t test_vlsseg7e32_v_i32m1x7_m(vbool32_t vm, const int32_t *rs1,
                                         ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg7e32_v_i32m1x7_m(vm, rs1, rs2, vl);
}

vuint32mf2x7_t test_vlsseg7e32_v_u32mf2x7_m(vbool64_t vm, const uint32_t *rs1,
                                            ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg7e32_v_u32mf2x7_m(vm, rs1, rs2, vl);
}

vuint32m1x7_t test_vlsseg7e32_v_u32m1x7_m(vbool32_t vm, const uint32_t *rs1,
                                          ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg7e32_v_u32m1x7_m(vm, rs1, rs2, vl);
}
