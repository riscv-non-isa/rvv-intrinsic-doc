#include <riscv_vector.h>
#include <stdint.h>

vint64m1_t test_vfwcvt_rtz_x_f_v_i64m1(vfloat32mf2_t vs2, size_t vl) {
  return __riscv_vfwcvt_rtz_x_f_v_i64m1(vs2, vl);
}

vint64m2_t test_vfwcvt_rtz_x_f_v_i64m2(vfloat32m1_t vs2, size_t vl) {
  return __riscv_vfwcvt_rtz_x_f_v_i64m2(vs2, vl);
}

vint64m4_t test_vfwcvt_rtz_x_f_v_i64m4(vfloat32m2_t vs2, size_t vl) {
  return __riscv_vfwcvt_rtz_x_f_v_i64m4(vs2, vl);
}

vint64m8_t test_vfwcvt_rtz_x_f_v_i64m8(vfloat32m4_t vs2, size_t vl) {
  return __riscv_vfwcvt_rtz_x_f_v_i64m8(vs2, vl);
}

vuint64m1_t test_vfwcvt_rtz_xu_f_v_u64m1(vfloat32mf2_t vs2, size_t vl) {
  return __riscv_vfwcvt_rtz_xu_f_v_u64m1(vs2, vl);
}

vuint64m2_t test_vfwcvt_rtz_xu_f_v_u64m2(vfloat32m1_t vs2, size_t vl) {
  return __riscv_vfwcvt_rtz_xu_f_v_u64m2(vs2, vl);
}

vuint64m4_t test_vfwcvt_rtz_xu_f_v_u64m4(vfloat32m2_t vs2, size_t vl) {
  return __riscv_vfwcvt_rtz_xu_f_v_u64m4(vs2, vl);
}

vuint64m8_t test_vfwcvt_rtz_xu_f_v_u64m8(vfloat32m4_t vs2, size_t vl) {
  return __riscv_vfwcvt_rtz_xu_f_v_u64m8(vs2, vl);
}

vint64m1_t test_vfwcvt_rtz_x_f_v_i64m1_m(vbool64_t vm, vfloat32mf2_t vs2,
                                         size_t vl) {
  return __riscv_vfwcvt_rtz_x_f_v_i64m1_m(vm, vs2, vl);
}

vint64m2_t test_vfwcvt_rtz_x_f_v_i64m2_m(vbool32_t vm, vfloat32m1_t vs2,
                                         size_t vl) {
  return __riscv_vfwcvt_rtz_x_f_v_i64m2_m(vm, vs2, vl);
}

vint64m4_t test_vfwcvt_rtz_x_f_v_i64m4_m(vbool16_t vm, vfloat32m2_t vs2,
                                         size_t vl) {
  return __riscv_vfwcvt_rtz_x_f_v_i64m4_m(vm, vs2, vl);
}

vint64m8_t test_vfwcvt_rtz_x_f_v_i64m8_m(vbool8_t vm, vfloat32m4_t vs2,
                                         size_t vl) {
  return __riscv_vfwcvt_rtz_x_f_v_i64m8_m(vm, vs2, vl);
}

vuint64m1_t test_vfwcvt_rtz_xu_f_v_u64m1_m(vbool64_t vm, vfloat32mf2_t vs2,
                                           size_t vl) {
  return __riscv_vfwcvt_rtz_xu_f_v_u64m1_m(vm, vs2, vl);
}

vuint64m2_t test_vfwcvt_rtz_xu_f_v_u64m2_m(vbool32_t vm, vfloat32m1_t vs2,
                                           size_t vl) {
  return __riscv_vfwcvt_rtz_xu_f_v_u64m2_m(vm, vs2, vl);
}

vuint64m4_t test_vfwcvt_rtz_xu_f_v_u64m4_m(vbool16_t vm, vfloat32m2_t vs2,
                                           size_t vl) {
  return __riscv_vfwcvt_rtz_xu_f_v_u64m4_m(vm, vs2, vl);
}

vuint64m8_t test_vfwcvt_rtz_xu_f_v_u64m8_m(vbool8_t vm, vfloat32m4_t vs2,
                                           size_t vl) {
  return __riscv_vfwcvt_rtz_xu_f_v_u64m8_m(vm, vs2, vl);
}
