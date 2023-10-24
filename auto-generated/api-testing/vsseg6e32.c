#include <riscv_vector.h>
#include <stdint.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;

void test_vsseg6e32_v_f32mf2x6(float32_t *rs1, vfloat32mf2x6_t vs3, size_t vl) {
  return __riscv_vsseg6e32_v_f32mf2x6(rs1, vs3, vl);
}

void test_vsseg6e32_v_f32m1x6(float32_t *rs1, vfloat32m1x6_t vs3, size_t vl) {
  return __riscv_vsseg6e32_v_f32m1x6(rs1, vs3, vl);
}

void test_vsseg6e32_v_i32mf2x6(int32_t *rs1, vint32mf2x6_t vs3, size_t vl) {
  return __riscv_vsseg6e32_v_i32mf2x6(rs1, vs3, vl);
}

void test_vsseg6e32_v_i32m1x6(int32_t *rs1, vint32m1x6_t vs3, size_t vl) {
  return __riscv_vsseg6e32_v_i32m1x6(rs1, vs3, vl);
}

void test_vsseg6e32_v_u32mf2x6(uint32_t *rs1, vuint32mf2x6_t vs3, size_t vl) {
  return __riscv_vsseg6e32_v_u32mf2x6(rs1, vs3, vl);
}

void test_vsseg6e32_v_u32m1x6(uint32_t *rs1, vuint32m1x6_t vs3, size_t vl) {
  return __riscv_vsseg6e32_v_u32m1x6(rs1, vs3, vl);
}

void test_vsseg6e32_v_f32mf2x6_m(vbool64_t vm, float32_t *rs1,
                                 vfloat32mf2x6_t vs3, size_t vl) {
  return __riscv_vsseg6e32_v_f32mf2x6_m(vm, rs1, vs3, vl);
}

void test_vsseg6e32_v_f32m1x6_m(vbool32_t vm, float32_t *rs1,
                                vfloat32m1x6_t vs3, size_t vl) {
  return __riscv_vsseg6e32_v_f32m1x6_m(vm, rs1, vs3, vl);
}

void test_vsseg6e32_v_i32mf2x6_m(vbool64_t vm, int32_t *rs1, vint32mf2x6_t vs3,
                                 size_t vl) {
  return __riscv_vsseg6e32_v_i32mf2x6_m(vm, rs1, vs3, vl);
}

void test_vsseg6e32_v_i32m1x6_m(vbool32_t vm, int32_t *rs1, vint32m1x6_t vs3,
                                size_t vl) {
  return __riscv_vsseg6e32_v_i32m1x6_m(vm, rs1, vs3, vl);
}

void test_vsseg6e32_v_u32mf2x6_m(vbool64_t vm, uint32_t *rs1,
                                 vuint32mf2x6_t vs3, size_t vl) {
  return __riscv_vsseg6e32_v_u32mf2x6_m(vm, rs1, vs3, vl);
}

void test_vsseg6e32_v_u32m1x6_m(vbool32_t vm, uint32_t *rs1, vuint32m1x6_t vs3,
                                size_t vl) {
  return __riscv_vsseg6e32_v_u32m1x6_m(vm, rs1, vs3, vl);
}
