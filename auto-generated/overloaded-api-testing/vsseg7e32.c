#include <riscv_vector.h>
#include <stdint.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;

void test_vsseg7e32_v_f32mf2x7(float32_t *rs1, vfloat32mf2x7_t vs3, size_t vl) {
  return __riscv_vsseg7e32(rs1, vs3, vl);
}

void test_vsseg7e32_v_f32m1x7(float32_t *rs1, vfloat32m1x7_t vs3, size_t vl) {
  return __riscv_vsseg7e32(rs1, vs3, vl);
}

void test_vsseg7e32_v_i32mf2x7(int32_t *rs1, vint32mf2x7_t vs3, size_t vl) {
  return __riscv_vsseg7e32(rs1, vs3, vl);
}

void test_vsseg7e32_v_i32m1x7(int32_t *rs1, vint32m1x7_t vs3, size_t vl) {
  return __riscv_vsseg7e32(rs1, vs3, vl);
}

void test_vsseg7e32_v_u32mf2x7(uint32_t *rs1, vuint32mf2x7_t vs3, size_t vl) {
  return __riscv_vsseg7e32(rs1, vs3, vl);
}

void test_vsseg7e32_v_u32m1x7(uint32_t *rs1, vuint32m1x7_t vs3, size_t vl) {
  return __riscv_vsseg7e32(rs1, vs3, vl);
}

void test_vsseg7e32_v_f32mf2x7_m(vbool64_t vm, float32_t *rs1,
                                 vfloat32mf2x7_t vs3, size_t vl) {
  return __riscv_vsseg7e32(vm, rs1, vs3, vl);
}

void test_vsseg7e32_v_f32m1x7_m(vbool32_t vm, float32_t *rs1,
                                vfloat32m1x7_t vs3, size_t vl) {
  return __riscv_vsseg7e32(vm, rs1, vs3, vl);
}

void test_vsseg7e32_v_i32mf2x7_m(vbool64_t vm, int32_t *rs1, vint32mf2x7_t vs3,
                                 size_t vl) {
  return __riscv_vsseg7e32(vm, rs1, vs3, vl);
}

void test_vsseg7e32_v_i32m1x7_m(vbool32_t vm, int32_t *rs1, vint32m1x7_t vs3,
                                size_t vl) {
  return __riscv_vsseg7e32(vm, rs1, vs3, vl);
}

void test_vsseg7e32_v_u32mf2x7_m(vbool64_t vm, uint32_t *rs1,
                                 vuint32mf2x7_t vs3, size_t vl) {
  return __riscv_vsseg7e32(vm, rs1, vs3, vl);
}

void test_vsseg7e32_v_u32m1x7_m(vbool32_t vm, uint32_t *rs1, vuint32m1x7_t vs3,
                                size_t vl) {
  return __riscv_vsseg7e32(vm, rs1, vs3, vl);
}
