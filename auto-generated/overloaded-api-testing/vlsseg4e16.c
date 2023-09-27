#include <riscv_vector.h>
#include <stdint.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
vfloat16mf4x4_t test_vlsseg4e16_v_f16mf4x4_m(vbool64_t vm, const float16_t *rs1,
                                             ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg4e16(vm, rs1, rs2, vl);
}

vfloat16mf2x4_t test_vlsseg4e16_v_f16mf2x4_m(vbool32_t vm, const float16_t *rs1,
                                             ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg4e16(vm, rs1, rs2, vl);
}

vfloat16m1x4_t test_vlsseg4e16_v_f16m1x4_m(vbool16_t vm, const float16_t *rs1,
                                           ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg4e16(vm, rs1, rs2, vl);
}

vfloat16m2x4_t test_vlsseg4e16_v_f16m2x4_m(vbool8_t vm, const float16_t *rs1,
                                           ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg4e16(vm, rs1, rs2, vl);
}

vint16mf4x4_t test_vlsseg4e16_v_i16mf4x4_m(vbool64_t vm, const int16_t *rs1,
                                           ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg4e16(vm, rs1, rs2, vl);
}

vint16mf2x4_t test_vlsseg4e16_v_i16mf2x4_m(vbool32_t vm, const int16_t *rs1,
                                           ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg4e16(vm, rs1, rs2, vl);
}

vint16m1x4_t test_vlsseg4e16_v_i16m1x4_m(vbool16_t vm, const int16_t *rs1,
                                         ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg4e16(vm, rs1, rs2, vl);
}

vint16m2x4_t test_vlsseg4e16_v_i16m2x4_m(vbool8_t vm, const int16_t *rs1,
                                         ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg4e16(vm, rs1, rs2, vl);
}

vuint16mf4x4_t test_vlsseg4e16_v_u16mf4x4_m(vbool64_t vm, const uint16_t *rs1,
                                            ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg4e16(vm, rs1, rs2, vl);
}

vuint16mf2x4_t test_vlsseg4e16_v_u16mf2x4_m(vbool32_t vm, const uint16_t *rs1,
                                            ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg4e16(vm, rs1, rs2, vl);
}

vuint16m1x4_t test_vlsseg4e16_v_u16m1x4_m(vbool16_t vm, const uint16_t *rs1,
                                          ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg4e16(vm, rs1, rs2, vl);
}

vuint16m2x4_t test_vlsseg4e16_v_u16m2x4_m(vbool8_t vm, const uint16_t *rs1,
                                          ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg4e16(vm, rs1, rs2, vl);
}
