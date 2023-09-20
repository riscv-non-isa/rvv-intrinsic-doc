#include <riscv_vector.h>
#include <stdint.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
vfloat16mf4x6_t test_vlsseg6e16_v_f16mf4x6_m(vbool64_t vm, const float16_t *rs1,
                                             ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg6e16(vm, rs1, rs2, vl);
}

vfloat16mf2x6_t test_vlsseg6e16_v_f16mf2x6_m(vbool32_t vm, const float16_t *rs1,
                                             ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg6e16(vm, rs1, rs2, vl);
}

vfloat16m1x6_t test_vlsseg6e16_v_f16m1x6_m(vbool16_t vm, const float16_t *rs1,
                                           ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg6e16(vm, rs1, rs2, vl);
}

vint16mf4x6_t test_vlsseg6e16_v_i16mf4x6_m(vbool64_t vm, const int16_t *rs1,
                                           ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg6e16(vm, rs1, rs2, vl);
}

vint16mf2x6_t test_vlsseg6e16_v_i16mf2x6_m(vbool32_t vm, const int16_t *rs1,
                                           ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg6e16(vm, rs1, rs2, vl);
}

vint16m1x6_t test_vlsseg6e16_v_i16m1x6_m(vbool16_t vm, const int16_t *rs1,
                                         ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg6e16(vm, rs1, rs2, vl);
}

vuint16mf4x6_t test_vlsseg6e16_v_u16mf4x6_m(vbool64_t vm, const uint16_t *rs1,
                                            ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg6e16(vm, rs1, rs2, vl);
}

vuint16mf2x6_t test_vlsseg6e16_v_u16mf2x6_m(vbool32_t vm, const uint16_t *rs1,
                                            ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg6e16(vm, rs1, rs2, vl);
}

vuint16m1x6_t test_vlsseg6e16_v_u16m1x6_m(vbool16_t vm, const uint16_t *rs1,
                                          ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg6e16(vm, rs1, rs2, vl);
}
