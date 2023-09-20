#include <riscv_vector.h>
#include <stdint.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
vfloat32mf2x6_t test_vlseg6e32_v_f32mf2x6_m(vbool64_t vm, const float32_t *rs1,
                                            size_t vl) {
  return __riscv_vlseg6e32(vm, rs1, vl);
}

vfloat32m1x6_t test_vlseg6e32_v_f32m1x6_m(vbool32_t vm, const float32_t *rs1,
                                          size_t vl) {
  return __riscv_vlseg6e32(vm, rs1, vl);
}

vint32mf2x6_t test_vlseg6e32_v_i32mf2x6_m(vbool64_t vm, const int32_t *rs1,
                                          size_t vl) {
  return __riscv_vlseg6e32(vm, rs1, vl);
}

vint32m1x6_t test_vlseg6e32_v_i32m1x6_m(vbool32_t vm, const int32_t *rs1,
                                        size_t vl) {
  return __riscv_vlseg6e32(vm, rs1, vl);
}

vuint32mf2x6_t test_vlseg6e32_v_u32mf2x6_m(vbool64_t vm, const uint32_t *rs1,
                                           size_t vl) {
  return __riscv_vlseg6e32(vm, rs1, vl);
}

vuint32m1x6_t test_vlseg6e32_v_u32m1x6_m(vbool32_t vm, const uint32_t *rs1,
                                         size_t vl) {
  return __riscv_vlseg6e32(vm, rs1, vl);
}
