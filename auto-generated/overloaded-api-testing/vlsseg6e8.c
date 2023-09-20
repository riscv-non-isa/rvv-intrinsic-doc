#include <riscv_vector.h>
#include <stdint.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
vint8mf8x6_t test_vlsseg6e8_v_i8mf8x6_m(vbool64_t vm, const int8_t *rs1,
                                        ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg6e8(vm, rs1, rs2, vl);
}

vint8mf4x6_t test_vlsseg6e8_v_i8mf4x6_m(vbool32_t vm, const int8_t *rs1,
                                        ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg6e8(vm, rs1, rs2, vl);
}

vint8mf2x6_t test_vlsseg6e8_v_i8mf2x6_m(vbool16_t vm, const int8_t *rs1,
                                        ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg6e8(vm, rs1, rs2, vl);
}

vint8m1x6_t test_vlsseg6e8_v_i8m1x6_m(vbool8_t vm, const int8_t *rs1,
                                      ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg6e8(vm, rs1, rs2, vl);
}

vuint8mf8x6_t test_vlsseg6e8_v_u8mf8x6_m(vbool64_t vm, const uint8_t *rs1,
                                         ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg6e8(vm, rs1, rs2, vl);
}

vuint8mf4x6_t test_vlsseg6e8_v_u8mf4x6_m(vbool32_t vm, const uint8_t *rs1,
                                         ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg6e8(vm, rs1, rs2, vl);
}

vuint8mf2x6_t test_vlsseg6e8_v_u8mf2x6_m(vbool16_t vm, const uint8_t *rs1,
                                         ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg6e8(vm, rs1, rs2, vl);
}

vuint8m1x6_t test_vlsseg6e8_v_u8m1x6_m(vbool8_t vm, const uint8_t *rs1,
                                       ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg6e8(vm, rs1, rs2, vl);
}
