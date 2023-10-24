#include <riscv_vector.h>
#include <stdint.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;

vint8mf8x2_t test_vlsseg2e8_v_i8mf8x2(const int8_t *rs1, ptrdiff_t rs2,
                                      size_t vl) {
  return __riscv_vlsseg2e8_v_i8mf8x2(rs1, rs2, vl);
}

vint8mf4x2_t test_vlsseg2e8_v_i8mf4x2(const int8_t *rs1, ptrdiff_t rs2,
                                      size_t vl) {
  return __riscv_vlsseg2e8_v_i8mf4x2(rs1, rs2, vl);
}

vint8mf2x2_t test_vlsseg2e8_v_i8mf2x2(const int8_t *rs1, ptrdiff_t rs2,
                                      size_t vl) {
  return __riscv_vlsseg2e8_v_i8mf2x2(rs1, rs2, vl);
}

vint8m1x2_t test_vlsseg2e8_v_i8m1x2(const int8_t *rs1, ptrdiff_t rs2,
                                    size_t vl) {
  return __riscv_vlsseg2e8_v_i8m1x2(rs1, rs2, vl);
}

vint8m2x2_t test_vlsseg2e8_v_i8m2x2(const int8_t *rs1, ptrdiff_t rs2,
                                    size_t vl) {
  return __riscv_vlsseg2e8_v_i8m2x2(rs1, rs2, vl);
}

vint8m4x2_t test_vlsseg2e8_v_i8m4x2(const int8_t *rs1, ptrdiff_t rs2,
                                    size_t vl) {
  return __riscv_vlsseg2e8_v_i8m4x2(rs1, rs2, vl);
}

vuint8mf8x2_t test_vlsseg2e8_v_u8mf8x2(const uint8_t *rs1, ptrdiff_t rs2,
                                       size_t vl) {
  return __riscv_vlsseg2e8_v_u8mf8x2(rs1, rs2, vl);
}

vuint8mf4x2_t test_vlsseg2e8_v_u8mf4x2(const uint8_t *rs1, ptrdiff_t rs2,
                                       size_t vl) {
  return __riscv_vlsseg2e8_v_u8mf4x2(rs1, rs2, vl);
}

vuint8mf2x2_t test_vlsseg2e8_v_u8mf2x2(const uint8_t *rs1, ptrdiff_t rs2,
                                       size_t vl) {
  return __riscv_vlsseg2e8_v_u8mf2x2(rs1, rs2, vl);
}

vuint8m1x2_t test_vlsseg2e8_v_u8m1x2(const uint8_t *rs1, ptrdiff_t rs2,
                                     size_t vl) {
  return __riscv_vlsseg2e8_v_u8m1x2(rs1, rs2, vl);
}

vuint8m2x2_t test_vlsseg2e8_v_u8m2x2(const uint8_t *rs1, ptrdiff_t rs2,
                                     size_t vl) {
  return __riscv_vlsseg2e8_v_u8m2x2(rs1, rs2, vl);
}

vuint8m4x2_t test_vlsseg2e8_v_u8m4x2(const uint8_t *rs1, ptrdiff_t rs2,
                                     size_t vl) {
  return __riscv_vlsseg2e8_v_u8m4x2(rs1, rs2, vl);
}

vint8mf8x2_t test_vlsseg2e8_v_i8mf8x2_m(vbool64_t vm, const int8_t *rs1,
                                        ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg2e8_v_i8mf8x2_m(vm, rs1, rs2, vl);
}

vint8mf4x2_t test_vlsseg2e8_v_i8mf4x2_m(vbool32_t vm, const int8_t *rs1,
                                        ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg2e8_v_i8mf4x2_m(vm, rs1, rs2, vl);
}

vint8mf2x2_t test_vlsseg2e8_v_i8mf2x2_m(vbool16_t vm, const int8_t *rs1,
                                        ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg2e8_v_i8mf2x2_m(vm, rs1, rs2, vl);
}

vint8m1x2_t test_vlsseg2e8_v_i8m1x2_m(vbool8_t vm, const int8_t *rs1,
                                      ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg2e8_v_i8m1x2_m(vm, rs1, rs2, vl);
}

vint8m2x2_t test_vlsseg2e8_v_i8m2x2_m(vbool4_t vm, const int8_t *rs1,
                                      ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg2e8_v_i8m2x2_m(vm, rs1, rs2, vl);
}

vint8m4x2_t test_vlsseg2e8_v_i8m4x2_m(vbool2_t vm, const int8_t *rs1,
                                      ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg2e8_v_i8m4x2_m(vm, rs1, rs2, vl);
}

vuint8mf8x2_t test_vlsseg2e8_v_u8mf8x2_m(vbool64_t vm, const uint8_t *rs1,
                                         ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg2e8_v_u8mf8x2_m(vm, rs1, rs2, vl);
}

vuint8mf4x2_t test_vlsseg2e8_v_u8mf4x2_m(vbool32_t vm, const uint8_t *rs1,
                                         ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg2e8_v_u8mf4x2_m(vm, rs1, rs2, vl);
}

vuint8mf2x2_t test_vlsseg2e8_v_u8mf2x2_m(vbool16_t vm, const uint8_t *rs1,
                                         ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg2e8_v_u8mf2x2_m(vm, rs1, rs2, vl);
}

vuint8m1x2_t test_vlsseg2e8_v_u8m1x2_m(vbool8_t vm, const uint8_t *rs1,
                                       ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg2e8_v_u8m1x2_m(vm, rs1, rs2, vl);
}

vuint8m2x2_t test_vlsseg2e8_v_u8m2x2_m(vbool4_t vm, const uint8_t *rs1,
                                       ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg2e8_v_u8m2x2_m(vm, rs1, rs2, vl);
}

vuint8m4x2_t test_vlsseg2e8_v_u8m4x2_m(vbool2_t vm, const uint8_t *rs1,
                                       ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg2e8_v_u8m4x2_m(vm, rs1, rs2, vl);
}
