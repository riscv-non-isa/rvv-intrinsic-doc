#include <riscv_vector.h>
#include <stdint.h>

void test_vsoxseg6ei16_v_f16mf4x6(_Float16 *rs1, vuint16mf4_t vs2,
                                  vfloat16mf4x6_t vs3, size_t vl) {
  return __riscv_vsoxseg6ei16_v_f16mf4x6(rs1, vs2, vs3, vl);
}

void test_vsoxseg6ei16_v_f16mf2x6(_Float16 *rs1, vuint16mf2_t vs2,
                                  vfloat16mf2x6_t vs3, size_t vl) {
  return __riscv_vsoxseg6ei16_v_f16mf2x6(rs1, vs2, vs3, vl);
}

void test_vsoxseg6ei16_v_f16m1x6(_Float16 *rs1, vuint16m1_t vs2,
                                 vfloat16m1x6_t vs3, size_t vl) {
  return __riscv_vsoxseg6ei16_v_f16m1x6(rs1, vs2, vs3, vl);
}

void test_vsoxseg6ei16_v_f16mf4x6_m(vbool64_t vm, _Float16 *rs1,
                                    vuint16mf4_t vs2, vfloat16mf4x6_t vs3,
                                    size_t vl) {
  return __riscv_vsoxseg6ei16_v_f16mf4x6_m(vm, rs1, vs2, vs3, vl);
}

void test_vsoxseg6ei16_v_f16mf2x6_m(vbool32_t vm, _Float16 *rs1,
                                    vuint16mf2_t vs2, vfloat16mf2x6_t vs3,
                                    size_t vl) {
  return __riscv_vsoxseg6ei16_v_f16mf2x6_m(vm, rs1, vs2, vs3, vl);
}

void test_vsoxseg6ei16_v_f16m1x6_m(vbool16_t vm, _Float16 *rs1, vuint16m1_t vs2,
                                   vfloat16m1x6_t vs3, size_t vl) {
  return __riscv_vsoxseg6ei16_v_f16m1x6_m(vm, rs1, vs2, vs3, vl);
}
