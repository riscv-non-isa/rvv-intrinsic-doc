#include <riscv_vector.h>
#include <stdint.h>

vfloat32mf2x3_t test_vlsseg3e32_v_f32mf2x3(const float *rs1, ptrdiff_t rs2,
                                           size_t vl) {
  return __riscv_vlsseg3e32_v_f32mf2x3(rs1, rs2, vl);
}

vfloat32m1x3_t test_vlsseg3e32_v_f32m1x3(const float *rs1, ptrdiff_t rs2,
                                         size_t vl) {
  return __riscv_vlsseg3e32_v_f32m1x3(rs1, rs2, vl);
}

vfloat32m2x3_t test_vlsseg3e32_v_f32m2x3(const float *rs1, ptrdiff_t rs2,
                                         size_t vl) {
  return __riscv_vlsseg3e32_v_f32m2x3(rs1, rs2, vl);
}

vint32mf2x3_t test_vlsseg3e32_v_i32mf2x3(const int32_t *rs1, ptrdiff_t rs2,
                                         size_t vl) {
  return __riscv_vlsseg3e32_v_i32mf2x3(rs1, rs2, vl);
}

vint32m1x3_t test_vlsseg3e32_v_i32m1x3(const int32_t *rs1, ptrdiff_t rs2,
                                       size_t vl) {
  return __riscv_vlsseg3e32_v_i32m1x3(rs1, rs2, vl);
}

vint32m2x3_t test_vlsseg3e32_v_i32m2x3(const int32_t *rs1, ptrdiff_t rs2,
                                       size_t vl) {
  return __riscv_vlsseg3e32_v_i32m2x3(rs1, rs2, vl);
}

vuint32mf2x3_t test_vlsseg3e32_v_u32mf2x3(const uint32_t *rs1, ptrdiff_t rs2,
                                          size_t vl) {
  return __riscv_vlsseg3e32_v_u32mf2x3(rs1, rs2, vl);
}

vuint32m1x3_t test_vlsseg3e32_v_u32m1x3(const uint32_t *rs1, ptrdiff_t rs2,
                                        size_t vl) {
  return __riscv_vlsseg3e32_v_u32m1x3(rs1, rs2, vl);
}

vuint32m2x3_t test_vlsseg3e32_v_u32m2x3(const uint32_t *rs1, ptrdiff_t rs2,
                                        size_t vl) {
  return __riscv_vlsseg3e32_v_u32m2x3(rs1, rs2, vl);
}

vfloat32mf2x3_t test_vlsseg3e32_v_f32mf2x3_m(vbool64_t vm, const float *rs1,
                                             ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg3e32_v_f32mf2x3_m(vm, rs1, rs2, vl);
}

vfloat32m1x3_t test_vlsseg3e32_v_f32m1x3_m(vbool32_t vm, const float *rs1,
                                           ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg3e32_v_f32m1x3_m(vm, rs1, rs2, vl);
}

vfloat32m2x3_t test_vlsseg3e32_v_f32m2x3_m(vbool16_t vm, const float *rs1,
                                           ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg3e32_v_f32m2x3_m(vm, rs1, rs2, vl);
}

vint32mf2x3_t test_vlsseg3e32_v_i32mf2x3_m(vbool64_t vm, const int32_t *rs1,
                                           ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg3e32_v_i32mf2x3_m(vm, rs1, rs2, vl);
}

vint32m1x3_t test_vlsseg3e32_v_i32m1x3_m(vbool32_t vm, const int32_t *rs1,
                                         ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg3e32_v_i32m1x3_m(vm, rs1, rs2, vl);
}

vint32m2x3_t test_vlsseg3e32_v_i32m2x3_m(vbool16_t vm, const int32_t *rs1,
                                         ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg3e32_v_i32m2x3_m(vm, rs1, rs2, vl);
}

vuint32mf2x3_t test_vlsseg3e32_v_u32mf2x3_m(vbool64_t vm, const uint32_t *rs1,
                                            ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg3e32_v_u32mf2x3_m(vm, rs1, rs2, vl);
}

vuint32m1x3_t test_vlsseg3e32_v_u32m1x3_m(vbool32_t vm, const uint32_t *rs1,
                                          ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg3e32_v_u32m1x3_m(vm, rs1, rs2, vl);
}

vuint32m2x3_t test_vlsseg3e32_v_u32m2x3_m(vbool16_t vm, const uint32_t *rs1,
                                          ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg3e32_v_u32m2x3_m(vm, rs1, rs2, vl);
}
