#include <riscv_vector.h>
#include <stdint.h>

void test_vsseg3e16_v_f16mf4x3(_Float16 *rs1, vfloat16mf4x3_t vs3, size_t vl) {
  return __riscv_vsseg3e16_v_f16mf4x3(rs1, vs3, vl);
}

void test_vsseg3e16_v_f16mf2x3(_Float16 *rs1, vfloat16mf2x3_t vs3, size_t vl) {
  return __riscv_vsseg3e16_v_f16mf2x3(rs1, vs3, vl);
}

void test_vsseg3e16_v_f16m1x3(_Float16 *rs1, vfloat16m1x3_t vs3, size_t vl) {
  return __riscv_vsseg3e16_v_f16m1x3(rs1, vs3, vl);
}

void test_vsseg3e16_v_f16m2x3(_Float16 *rs1, vfloat16m2x3_t vs3, size_t vl) {
  return __riscv_vsseg3e16_v_f16m2x3(rs1, vs3, vl);
}

void test_vsseg3e16_v_f16mf4x3_m(vbool64_t vm, _Float16 *rs1,
                                 vfloat16mf4x3_t vs3, size_t vl) {
  return __riscv_vsseg3e16_v_f16mf4x3_m(vm, rs1, vs3, vl);
}

void test_vsseg3e16_v_f16mf2x3_m(vbool32_t vm, _Float16 *rs1,
                                 vfloat16mf2x3_t vs3, size_t vl) {
  return __riscv_vsseg3e16_v_f16mf2x3_m(vm, rs1, vs3, vl);
}

void test_vsseg3e16_v_f16m1x3_m(vbool16_t vm, _Float16 *rs1, vfloat16m1x3_t vs3,
                                size_t vl) {
  return __riscv_vsseg3e16_v_f16m1x3_m(vm, rs1, vs3, vl);
}

void test_vsseg3e16_v_f16m2x3_m(vbool8_t vm, _Float16 *rs1, vfloat16m2x3_t vs3,
                                size_t vl) {
  return __riscv_vsseg3e16_v_f16m2x3_m(vm, rs1, vs3, vl);
}
