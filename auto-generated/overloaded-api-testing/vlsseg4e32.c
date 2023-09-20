#include <riscv_vector.h>
#include <stdint.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
vfloat32mf2x4_t test_vlsseg4e32_v_f32mf2x4_m(vbool64_t vm, const float32_t *rs1,
                                             ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg4e32(vm, rs1, rs2, vl);
}

vfloat32m1x4_t test_vlsseg4e32_v_f32m1x4_m(vbool32_t vm, const float32_t *rs1,
                                           ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg4e32(vm, rs1, rs2, vl);
}

vfloat32m2x4_t test_vlsseg4e32_v_f32m2x4_m(vbool16_t vm, const float32_t *rs1,
                                           ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg4e32(vm, rs1, rs2, vl);
}

vint32mf2x4_t test_vlsseg4e32_v_i32mf2x4_m(vbool64_t vm, const int32_t *rs1,
                                           ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg4e32(vm, rs1, rs2, vl);
}

vint32m1x4_t test_vlsseg4e32_v_i32m1x4_m(vbool32_t vm, const int32_t *rs1,
                                         ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg4e32(vm, rs1, rs2, vl);
}

vint32m2x4_t test_vlsseg4e32_v_i32m2x4_m(vbool16_t vm, const int32_t *rs1,
                                         ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg4e32(vm, rs1, rs2, vl);
}

vuint32mf2x4_t test_vlsseg4e32_v_u32mf2x4_m(vbool64_t vm, const uint32_t *rs1,
                                            ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg4e32(vm, rs1, rs2, vl);
}

vuint32m1x4_t test_vlsseg4e32_v_u32m1x4_m(vbool32_t vm, const uint32_t *rs1,
                                          ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg4e32(vm, rs1, rs2, vl);
}

vuint32m2x4_t test_vlsseg4e32_v_u32m2x4_m(vbool16_t vm, const uint32_t *rs1,
                                          ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg4e32(vm, rs1, rs2, vl);
}
