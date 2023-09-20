#include <riscv_vector.h>
#include <stdint.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
vfloat32mf2x5_t test_vlsseg5e32_v_f32mf2x5(const float32_t *rs1, ptrdiff_t rs2,
                                           size_t vl) {
  return __riscv_vlsseg5e32_v_f32mf2x5(rs1, rs2, vl);
}

vfloat32m1x5_t test_vlsseg5e32_v_f32m1x5(const float32_t *rs1, ptrdiff_t rs2,
                                         size_t vl) {
  return __riscv_vlsseg5e32_v_f32m1x5(rs1, rs2, vl);
}

vint32mf2x5_t test_vlsseg5e32_v_i32mf2x5(const int32_t *rs1, ptrdiff_t rs2,
                                         size_t vl) {
  return __riscv_vlsseg5e32_v_i32mf2x5(rs1, rs2, vl);
}

vint32m1x5_t test_vlsseg5e32_v_i32m1x5(const int32_t *rs1, ptrdiff_t rs2,
                                       size_t vl) {
  return __riscv_vlsseg5e32_v_i32m1x5(rs1, rs2, vl);
}

vuint32mf2x5_t test_vlsseg5e32_v_u32mf2x5(const uint32_t *rs1, ptrdiff_t rs2,
                                          size_t vl) {
  return __riscv_vlsseg5e32_v_u32mf2x5(rs1, rs2, vl);
}

vuint32m1x5_t test_vlsseg5e32_v_u32m1x5(const uint32_t *rs1, ptrdiff_t rs2,
                                        size_t vl) {
  return __riscv_vlsseg5e32_v_u32m1x5(rs1, rs2, vl);
}

vfloat32mf2x5_t test_vlsseg5e32_v_f32mf2x5_m(vbool64_t vm, const float32_t *rs1,
                                             ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg5e32_v_f32mf2x5_m(vm, rs1, rs2, vl);
}

vfloat32m1x5_t test_vlsseg5e32_v_f32m1x5_m(vbool32_t vm, const float32_t *rs1,
                                           ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg5e32_v_f32m1x5_m(vm, rs1, rs2, vl);
}

vint32mf2x5_t test_vlsseg5e32_v_i32mf2x5_m(vbool64_t vm, const int32_t *rs1,
                                           ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg5e32_v_i32mf2x5_m(vm, rs1, rs2, vl);
}

vint32m1x5_t test_vlsseg5e32_v_i32m1x5_m(vbool32_t vm, const int32_t *rs1,
                                         ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg5e32_v_i32m1x5_m(vm, rs1, rs2, vl);
}

vuint32mf2x5_t test_vlsseg5e32_v_u32mf2x5_m(vbool64_t vm, const uint32_t *rs1,
                                            ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg5e32_v_u32mf2x5_m(vm, rs1, rs2, vl);
}

vuint32m1x5_t test_vlsseg5e32_v_u32m1x5_m(vbool32_t vm, const uint32_t *rs1,
                                          ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg5e32_v_u32m1x5_m(vm, rs1, rs2, vl);
}
