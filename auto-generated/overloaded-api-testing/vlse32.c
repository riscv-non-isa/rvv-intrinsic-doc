#include <riscv_vector.h>
#include <stdint.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
vfloat32mf2_t test_vlse32_v_f32mf2_m(vbool64_t vm, const float32_t *rs1,
                                     ptrdiff_t rs2, size_t vl) {
  return __riscv_vlse32(vm, rs1, rs2, vl);
}

vfloat32m1_t test_vlse32_v_f32m1_m(vbool32_t vm, const float32_t *rs1,
                                   ptrdiff_t rs2, size_t vl) {
  return __riscv_vlse32(vm, rs1, rs2, vl);
}

vfloat32m2_t test_vlse32_v_f32m2_m(vbool16_t vm, const float32_t *rs1,
                                   ptrdiff_t rs2, size_t vl) {
  return __riscv_vlse32(vm, rs1, rs2, vl);
}

vfloat32m4_t test_vlse32_v_f32m4_m(vbool8_t vm, const float32_t *rs1,
                                   ptrdiff_t rs2, size_t vl) {
  return __riscv_vlse32(vm, rs1, rs2, vl);
}

vfloat32m8_t test_vlse32_v_f32m8_m(vbool4_t vm, const float32_t *rs1,
                                   ptrdiff_t rs2, size_t vl) {
  return __riscv_vlse32(vm, rs1, rs2, vl);
}

vint32mf2_t test_vlse32_v_i32mf2_m(vbool64_t vm, const int32_t *rs1,
                                   ptrdiff_t rs2, size_t vl) {
  return __riscv_vlse32(vm, rs1, rs2, vl);
}

vint32m1_t test_vlse32_v_i32m1_m(vbool32_t vm, const int32_t *rs1,
                                 ptrdiff_t rs2, size_t vl) {
  return __riscv_vlse32(vm, rs1, rs2, vl);
}

vint32m2_t test_vlse32_v_i32m2_m(vbool16_t vm, const int32_t *rs1,
                                 ptrdiff_t rs2, size_t vl) {
  return __riscv_vlse32(vm, rs1, rs2, vl);
}

vint32m4_t test_vlse32_v_i32m4_m(vbool8_t vm, const int32_t *rs1, ptrdiff_t rs2,
                                 size_t vl) {
  return __riscv_vlse32(vm, rs1, rs2, vl);
}

vint32m8_t test_vlse32_v_i32m8_m(vbool4_t vm, const int32_t *rs1, ptrdiff_t rs2,
                                 size_t vl) {
  return __riscv_vlse32(vm, rs1, rs2, vl);
}

vuint32mf2_t test_vlse32_v_u32mf2_m(vbool64_t vm, const uint32_t *rs1,
                                    ptrdiff_t rs2, size_t vl) {
  return __riscv_vlse32(vm, rs1, rs2, vl);
}

vuint32m1_t test_vlse32_v_u32m1_m(vbool32_t vm, const uint32_t *rs1,
                                  ptrdiff_t rs2, size_t vl) {
  return __riscv_vlse32(vm, rs1, rs2, vl);
}

vuint32m2_t test_vlse32_v_u32m2_m(vbool16_t vm, const uint32_t *rs1,
                                  ptrdiff_t rs2, size_t vl) {
  return __riscv_vlse32(vm, rs1, rs2, vl);
}

vuint32m4_t test_vlse32_v_u32m4_m(vbool8_t vm, const uint32_t *rs1,
                                  ptrdiff_t rs2, size_t vl) {
  return __riscv_vlse32(vm, rs1, rs2, vl);
}

vuint32m8_t test_vlse32_v_u32m8_m(vbool4_t vm, const uint32_t *rs1,
                                  ptrdiff_t rs2, size_t vl) {
  return __riscv_vlse32(vm, rs1, rs2, vl);
}
