#include <riscv_vector.h>
#include <stdint.h>

vfloat32mf2_t test_vfwcvtbf16_f_f_v_f32mf2(vbfloat16mf4_t vs2, size_t vl) {
  return __riscv_vfwcvtbf16_f_f_v_f32mf2(vs2, vl);
}

vfloat32m1_t test_vfwcvtbf16_f_f_v_f32m1(vbfloat16mf2_t vs2, size_t vl) {
  return __riscv_vfwcvtbf16_f_f_v_f32m1(vs2, vl);
}

vfloat32m2_t test_vfwcvtbf16_f_f_v_f32m2(vbfloat16m1_t vs2, size_t vl) {
  return __riscv_vfwcvtbf16_f_f_v_f32m2(vs2, vl);
}

vfloat32m4_t test_vfwcvtbf16_f_f_v_f32m4(vbfloat16m2_t vs2, size_t vl) {
  return __riscv_vfwcvtbf16_f_f_v_f32m4(vs2, vl);
}

vfloat32m8_t test_vfwcvtbf16_f_f_v_f32m8(vbfloat16m4_t vs2, size_t vl) {
  return __riscv_vfwcvtbf16_f_f_v_f32m8(vs2, vl);
}

vfloat32mf2_t test_vfwcvtbf16_f_f_v_f32mf2_m(vbool64_t vm, vbfloat16mf4_t vs2,
                                             size_t vl) {
  return __riscv_vfwcvtbf16_f_f_v_f32mf2_m(vm, vs2, vl);
}

vfloat32m1_t test_vfwcvtbf16_f_f_v_f32m1_m(vbool32_t vm, vbfloat16mf2_t vs2,
                                           size_t vl) {
  return __riscv_vfwcvtbf16_f_f_v_f32m1_m(vm, vs2, vl);
}

vfloat32m2_t test_vfwcvtbf16_f_f_v_f32m2_m(vbool16_t vm, vbfloat16m1_t vs2,
                                           size_t vl) {
  return __riscv_vfwcvtbf16_f_f_v_f32m2_m(vm, vs2, vl);
}

vfloat32m4_t test_vfwcvtbf16_f_f_v_f32m4_m(vbool8_t vm, vbfloat16m2_t vs2,
                                           size_t vl) {
  return __riscv_vfwcvtbf16_f_f_v_f32m4_m(vm, vs2, vl);
}

vfloat32m8_t test_vfwcvtbf16_f_f_v_f32m8_m(vbool4_t vm, vbfloat16m4_t vs2,
                                           size_t vl) {
  return __riscv_vfwcvtbf16_f_f_v_f32m8_m(vm, vs2, vl);
}
