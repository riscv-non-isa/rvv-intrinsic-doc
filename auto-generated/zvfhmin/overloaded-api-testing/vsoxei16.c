#include <riscv_vector.h>
#include <stdint.h>

void test_vsoxei16_v_f16mf4(_Float16 *rs1, vuint16mf4_t rs2, vfloat16mf4_t vs3,
                            size_t vl) {
  return __riscv_vsoxei16(rs1, rs2, vs3, vl);
}

void test_vsoxei16_v_f16mf2(_Float16 *rs1, vuint16mf2_t rs2, vfloat16mf2_t vs3,
                            size_t vl) {
  return __riscv_vsoxei16(rs1, rs2, vs3, vl);
}

void test_vsoxei16_v_f16m1(_Float16 *rs1, vuint16m1_t rs2, vfloat16m1_t vs3,
                           size_t vl) {
  return __riscv_vsoxei16(rs1, rs2, vs3, vl);
}

void test_vsoxei16_v_f16m2(_Float16 *rs1, vuint16m2_t rs2, vfloat16m2_t vs3,
                           size_t vl) {
  return __riscv_vsoxei16(rs1, rs2, vs3, vl);
}

void test_vsoxei16_v_f16m4(_Float16 *rs1, vuint16m4_t rs2, vfloat16m4_t vs3,
                           size_t vl) {
  return __riscv_vsoxei16(rs1, rs2, vs3, vl);
}

void test_vsoxei16_v_f16m8(_Float16 *rs1, vuint16m8_t rs2, vfloat16m8_t vs3,
                           size_t vl) {
  return __riscv_vsoxei16(rs1, rs2, vs3, vl);
}

void test_vsoxei16_v_f16mf4_m(vbool64_t vm, _Float16 *rs1, vuint16mf4_t rs2,
                              vfloat16mf4_t vs3, size_t vl) {
  return __riscv_vsoxei16(vm, rs1, rs2, vs3, vl);
}

void test_vsoxei16_v_f16mf2_m(vbool32_t vm, _Float16 *rs1, vuint16mf2_t rs2,
                              vfloat16mf2_t vs3, size_t vl) {
  return __riscv_vsoxei16(vm, rs1, rs2, vs3, vl);
}

void test_vsoxei16_v_f16m1_m(vbool16_t vm, _Float16 *rs1, vuint16m1_t rs2,
                             vfloat16m1_t vs3, size_t vl) {
  return __riscv_vsoxei16(vm, rs1, rs2, vs3, vl);
}

void test_vsoxei16_v_f16m2_m(vbool8_t vm, _Float16 *rs1, vuint16m2_t rs2,
                             vfloat16m2_t vs3, size_t vl) {
  return __riscv_vsoxei16(vm, rs1, rs2, vs3, vl);
}

void test_vsoxei16_v_f16m4_m(vbool4_t vm, _Float16 *rs1, vuint16m4_t rs2,
                             vfloat16m4_t vs3, size_t vl) {
  return __riscv_vsoxei16(vm, rs1, rs2, vs3, vl);
}

void test_vsoxei16_v_f16m8_m(vbool2_t vm, _Float16 *rs1, vuint16m8_t rs2,
                             vfloat16m8_t vs3, size_t vl) {
  return __riscv_vsoxei16(vm, rs1, rs2, vs3, vl);
}
