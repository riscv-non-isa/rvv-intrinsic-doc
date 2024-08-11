#include <riscv_vector.h>
#include <stdint.h>

vint16mf4_t test_vfcvt_x_f_v_i16mf4_tu(vint16mf4_t vd, vfloat16mf4_t vs2,
                                       size_t vl) {
  return __riscv_vfcvt_x_tu(vd, vs2, vl);
}

vint16mf2_t test_vfcvt_x_f_v_i16mf2_tu(vint16mf2_t vd, vfloat16mf2_t vs2,
                                       size_t vl) {
  return __riscv_vfcvt_x_tu(vd, vs2, vl);
}

vint16m1_t test_vfcvt_x_f_v_i16m1_tu(vint16m1_t vd, vfloat16m1_t vs2,
                                     size_t vl) {
  return __riscv_vfcvt_x_tu(vd, vs2, vl);
}

vint16m2_t test_vfcvt_x_f_v_i16m2_tu(vint16m2_t vd, vfloat16m2_t vs2,
                                     size_t vl) {
  return __riscv_vfcvt_x_tu(vd, vs2, vl);
}

vint16m4_t test_vfcvt_x_f_v_i16m4_tu(vint16m4_t vd, vfloat16m4_t vs2,
                                     size_t vl) {
  return __riscv_vfcvt_x_tu(vd, vs2, vl);
}

vint16m8_t test_vfcvt_x_f_v_i16m8_tu(vint16m8_t vd, vfloat16m8_t vs2,
                                     size_t vl) {
  return __riscv_vfcvt_x_tu(vd, vs2, vl);
}

vuint16mf4_t test_vfcvt_xu_f_v_u16mf4_tu(vuint16mf4_t vd, vfloat16mf4_t vs2,
                                         size_t vl) {
  return __riscv_vfcvt_xu_tu(vd, vs2, vl);
}

vuint16mf2_t test_vfcvt_xu_f_v_u16mf2_tu(vuint16mf2_t vd, vfloat16mf2_t vs2,
                                         size_t vl) {
  return __riscv_vfcvt_xu_tu(vd, vs2, vl);
}

vuint16m1_t test_vfcvt_xu_f_v_u16m1_tu(vuint16m1_t vd, vfloat16m1_t vs2,
                                       size_t vl) {
  return __riscv_vfcvt_xu_tu(vd, vs2, vl);
}

vuint16m2_t test_vfcvt_xu_f_v_u16m2_tu(vuint16m2_t vd, vfloat16m2_t vs2,
                                       size_t vl) {
  return __riscv_vfcvt_xu_tu(vd, vs2, vl);
}

vuint16m4_t test_vfcvt_xu_f_v_u16m4_tu(vuint16m4_t vd, vfloat16m4_t vs2,
                                       size_t vl) {
  return __riscv_vfcvt_xu_tu(vd, vs2, vl);
}

vuint16m8_t test_vfcvt_xu_f_v_u16m8_tu(vuint16m8_t vd, vfloat16m8_t vs2,
                                       size_t vl) {
  return __riscv_vfcvt_xu_tu(vd, vs2, vl);
}

vfloat16mf4_t test_vfcvt_f_x_v_f16mf4_tu(vfloat16mf4_t vd, vint16mf4_t vs2,
                                         size_t vl) {
  return __riscv_vfcvt_f_tu(vd, vs2, vl);
}

vfloat16mf2_t test_vfcvt_f_x_v_f16mf2_tu(vfloat16mf2_t vd, vint16mf2_t vs2,
                                         size_t vl) {
  return __riscv_vfcvt_f_tu(vd, vs2, vl);
}

vfloat16m1_t test_vfcvt_f_x_v_f16m1_tu(vfloat16m1_t vd, vint16m1_t vs2,
                                       size_t vl) {
  return __riscv_vfcvt_f_tu(vd, vs2, vl);
}

vfloat16m2_t test_vfcvt_f_x_v_f16m2_tu(vfloat16m2_t vd, vint16m2_t vs2,
                                       size_t vl) {
  return __riscv_vfcvt_f_tu(vd, vs2, vl);
}

vfloat16m4_t test_vfcvt_f_x_v_f16m4_tu(vfloat16m4_t vd, vint16m4_t vs2,
                                       size_t vl) {
  return __riscv_vfcvt_f_tu(vd, vs2, vl);
}

vfloat16m8_t test_vfcvt_f_x_v_f16m8_tu(vfloat16m8_t vd, vint16m8_t vs2,
                                       size_t vl) {
  return __riscv_vfcvt_f_tu(vd, vs2, vl);
}

vfloat16mf4_t test_vfcvt_f_xu_v_f16mf4_tu(vfloat16mf4_t vd, vuint16mf4_t vs2,
                                          size_t vl) {
  return __riscv_vfcvt_f_tu(vd, vs2, vl);
}

vfloat16mf2_t test_vfcvt_f_xu_v_f16mf2_tu(vfloat16mf2_t vd, vuint16mf2_t vs2,
                                          size_t vl) {
  return __riscv_vfcvt_f_tu(vd, vs2, vl);
}

vfloat16m1_t test_vfcvt_f_xu_v_f16m1_tu(vfloat16m1_t vd, vuint16m1_t vs2,
                                        size_t vl) {
  return __riscv_vfcvt_f_tu(vd, vs2, vl);
}

vfloat16m2_t test_vfcvt_f_xu_v_f16m2_tu(vfloat16m2_t vd, vuint16m2_t vs2,
                                        size_t vl) {
  return __riscv_vfcvt_f_tu(vd, vs2, vl);
}

vfloat16m4_t test_vfcvt_f_xu_v_f16m4_tu(vfloat16m4_t vd, vuint16m4_t vs2,
                                        size_t vl) {
  return __riscv_vfcvt_f_tu(vd, vs2, vl);
}

vfloat16m8_t test_vfcvt_f_xu_v_f16m8_tu(vfloat16m8_t vd, vuint16m8_t vs2,
                                        size_t vl) {
  return __riscv_vfcvt_f_tu(vd, vs2, vl);
}

vint16mf4_t test_vfcvt_x_f_v_i16mf4_tum(vbool64_t vm, vint16mf4_t vd,
                                        vfloat16mf4_t vs2, size_t vl) {
  return __riscv_vfcvt_x_tum(vm, vd, vs2, vl);
}

vint16mf2_t test_vfcvt_x_f_v_i16mf2_tum(vbool32_t vm, vint16mf2_t vd,
                                        vfloat16mf2_t vs2, size_t vl) {
  return __riscv_vfcvt_x_tum(vm, vd, vs2, vl);
}

vint16m1_t test_vfcvt_x_f_v_i16m1_tum(vbool16_t vm, vint16m1_t vd,
                                      vfloat16m1_t vs2, size_t vl) {
  return __riscv_vfcvt_x_tum(vm, vd, vs2, vl);
}

vint16m2_t test_vfcvt_x_f_v_i16m2_tum(vbool8_t vm, vint16m2_t vd,
                                      vfloat16m2_t vs2, size_t vl) {
  return __riscv_vfcvt_x_tum(vm, vd, vs2, vl);
}

vint16m4_t test_vfcvt_x_f_v_i16m4_tum(vbool4_t vm, vint16m4_t vd,
                                      vfloat16m4_t vs2, size_t vl) {
  return __riscv_vfcvt_x_tum(vm, vd, vs2, vl);
}

vint16m8_t test_vfcvt_x_f_v_i16m8_tum(vbool2_t vm, vint16m8_t vd,
                                      vfloat16m8_t vs2, size_t vl) {
  return __riscv_vfcvt_x_tum(vm, vd, vs2, vl);
}

vuint16mf4_t test_vfcvt_xu_f_v_u16mf4_tum(vbool64_t vm, vuint16mf4_t vd,
                                          vfloat16mf4_t vs2, size_t vl) {
  return __riscv_vfcvt_xu_tum(vm, vd, vs2, vl);
}

vuint16mf2_t test_vfcvt_xu_f_v_u16mf2_tum(vbool32_t vm, vuint16mf2_t vd,
                                          vfloat16mf2_t vs2, size_t vl) {
  return __riscv_vfcvt_xu_tum(vm, vd, vs2, vl);
}

vuint16m1_t test_vfcvt_xu_f_v_u16m1_tum(vbool16_t vm, vuint16m1_t vd,
                                        vfloat16m1_t vs2, size_t vl) {
  return __riscv_vfcvt_xu_tum(vm, vd, vs2, vl);
}

vuint16m2_t test_vfcvt_xu_f_v_u16m2_tum(vbool8_t vm, vuint16m2_t vd,
                                        vfloat16m2_t vs2, size_t vl) {
  return __riscv_vfcvt_xu_tum(vm, vd, vs2, vl);
}

vuint16m4_t test_vfcvt_xu_f_v_u16m4_tum(vbool4_t vm, vuint16m4_t vd,
                                        vfloat16m4_t vs2, size_t vl) {
  return __riscv_vfcvt_xu_tum(vm, vd, vs2, vl);
}

vuint16m8_t test_vfcvt_xu_f_v_u16m8_tum(vbool2_t vm, vuint16m8_t vd,
                                        vfloat16m8_t vs2, size_t vl) {
  return __riscv_vfcvt_xu_tum(vm, vd, vs2, vl);
}

vfloat16mf4_t test_vfcvt_f_x_v_f16mf4_tum(vbool64_t vm, vfloat16mf4_t vd,
                                          vint16mf4_t vs2, size_t vl) {
  return __riscv_vfcvt_f_tum(vm, vd, vs2, vl);
}

vfloat16mf2_t test_vfcvt_f_x_v_f16mf2_tum(vbool32_t vm, vfloat16mf2_t vd,
                                          vint16mf2_t vs2, size_t vl) {
  return __riscv_vfcvt_f_tum(vm, vd, vs2, vl);
}

vfloat16m1_t test_vfcvt_f_x_v_f16m1_tum(vbool16_t vm, vfloat16m1_t vd,
                                        vint16m1_t vs2, size_t vl) {
  return __riscv_vfcvt_f_tum(vm, vd, vs2, vl);
}

vfloat16m2_t test_vfcvt_f_x_v_f16m2_tum(vbool8_t vm, vfloat16m2_t vd,
                                        vint16m2_t vs2, size_t vl) {
  return __riscv_vfcvt_f_tum(vm, vd, vs2, vl);
}

vfloat16m4_t test_vfcvt_f_x_v_f16m4_tum(vbool4_t vm, vfloat16m4_t vd,
                                        vint16m4_t vs2, size_t vl) {
  return __riscv_vfcvt_f_tum(vm, vd, vs2, vl);
}

vfloat16m8_t test_vfcvt_f_x_v_f16m8_tum(vbool2_t vm, vfloat16m8_t vd,
                                        vint16m8_t vs2, size_t vl) {
  return __riscv_vfcvt_f_tum(vm, vd, vs2, vl);
}

vfloat16mf4_t test_vfcvt_f_xu_v_f16mf4_tum(vbool64_t vm, vfloat16mf4_t vd,
                                           vuint16mf4_t vs2, size_t vl) {
  return __riscv_vfcvt_f_tum(vm, vd, vs2, vl);
}

vfloat16mf2_t test_vfcvt_f_xu_v_f16mf2_tum(vbool32_t vm, vfloat16mf2_t vd,
                                           vuint16mf2_t vs2, size_t vl) {
  return __riscv_vfcvt_f_tum(vm, vd, vs2, vl);
}

vfloat16m1_t test_vfcvt_f_xu_v_f16m1_tum(vbool16_t vm, vfloat16m1_t vd,
                                         vuint16m1_t vs2, size_t vl) {
  return __riscv_vfcvt_f_tum(vm, vd, vs2, vl);
}

vfloat16m2_t test_vfcvt_f_xu_v_f16m2_tum(vbool8_t vm, vfloat16m2_t vd,
                                         vuint16m2_t vs2, size_t vl) {
  return __riscv_vfcvt_f_tum(vm, vd, vs2, vl);
}

vfloat16m4_t test_vfcvt_f_xu_v_f16m4_tum(vbool4_t vm, vfloat16m4_t vd,
                                         vuint16m4_t vs2, size_t vl) {
  return __riscv_vfcvt_f_tum(vm, vd, vs2, vl);
}

vfloat16m8_t test_vfcvt_f_xu_v_f16m8_tum(vbool2_t vm, vfloat16m8_t vd,
                                         vuint16m8_t vs2, size_t vl) {
  return __riscv_vfcvt_f_tum(vm, vd, vs2, vl);
}

vint16mf4_t test_vfcvt_x_f_v_i16mf4_tumu(vbool64_t vm, vint16mf4_t vd,
                                         vfloat16mf4_t vs2, size_t vl) {
  return __riscv_vfcvt_x_tumu(vm, vd, vs2, vl);
}

vint16mf2_t test_vfcvt_x_f_v_i16mf2_tumu(vbool32_t vm, vint16mf2_t vd,
                                         vfloat16mf2_t vs2, size_t vl) {
  return __riscv_vfcvt_x_tumu(vm, vd, vs2, vl);
}

vint16m1_t test_vfcvt_x_f_v_i16m1_tumu(vbool16_t vm, vint16m1_t vd,
                                       vfloat16m1_t vs2, size_t vl) {
  return __riscv_vfcvt_x_tumu(vm, vd, vs2, vl);
}

vint16m2_t test_vfcvt_x_f_v_i16m2_tumu(vbool8_t vm, vint16m2_t vd,
                                       vfloat16m2_t vs2, size_t vl) {
  return __riscv_vfcvt_x_tumu(vm, vd, vs2, vl);
}

vint16m4_t test_vfcvt_x_f_v_i16m4_tumu(vbool4_t vm, vint16m4_t vd,
                                       vfloat16m4_t vs2, size_t vl) {
  return __riscv_vfcvt_x_tumu(vm, vd, vs2, vl);
}

vint16m8_t test_vfcvt_x_f_v_i16m8_tumu(vbool2_t vm, vint16m8_t vd,
                                       vfloat16m8_t vs2, size_t vl) {
  return __riscv_vfcvt_x_tumu(vm, vd, vs2, vl);
}

vuint16mf4_t test_vfcvt_xu_f_v_u16mf4_tumu(vbool64_t vm, vuint16mf4_t vd,
                                           vfloat16mf4_t vs2, size_t vl) {
  return __riscv_vfcvt_xu_tumu(vm, vd, vs2, vl);
}

vuint16mf2_t test_vfcvt_xu_f_v_u16mf2_tumu(vbool32_t vm, vuint16mf2_t vd,
                                           vfloat16mf2_t vs2, size_t vl) {
  return __riscv_vfcvt_xu_tumu(vm, vd, vs2, vl);
}

vuint16m1_t test_vfcvt_xu_f_v_u16m1_tumu(vbool16_t vm, vuint16m1_t vd,
                                         vfloat16m1_t vs2, size_t vl) {
  return __riscv_vfcvt_xu_tumu(vm, vd, vs2, vl);
}

vuint16m2_t test_vfcvt_xu_f_v_u16m2_tumu(vbool8_t vm, vuint16m2_t vd,
                                         vfloat16m2_t vs2, size_t vl) {
  return __riscv_vfcvt_xu_tumu(vm, vd, vs2, vl);
}

vuint16m4_t test_vfcvt_xu_f_v_u16m4_tumu(vbool4_t vm, vuint16m4_t vd,
                                         vfloat16m4_t vs2, size_t vl) {
  return __riscv_vfcvt_xu_tumu(vm, vd, vs2, vl);
}

vuint16m8_t test_vfcvt_xu_f_v_u16m8_tumu(vbool2_t vm, vuint16m8_t vd,
                                         vfloat16m8_t vs2, size_t vl) {
  return __riscv_vfcvt_xu_tumu(vm, vd, vs2, vl);
}

vfloat16mf4_t test_vfcvt_f_x_v_f16mf4_tumu(vbool64_t vm, vfloat16mf4_t vd,
                                           vint16mf4_t vs2, size_t vl) {
  return __riscv_vfcvt_f_tumu(vm, vd, vs2, vl);
}

vfloat16mf2_t test_vfcvt_f_x_v_f16mf2_tumu(vbool32_t vm, vfloat16mf2_t vd,
                                           vint16mf2_t vs2, size_t vl) {
  return __riscv_vfcvt_f_tumu(vm, vd, vs2, vl);
}

vfloat16m1_t test_vfcvt_f_x_v_f16m1_tumu(vbool16_t vm, vfloat16m1_t vd,
                                         vint16m1_t vs2, size_t vl) {
  return __riscv_vfcvt_f_tumu(vm, vd, vs2, vl);
}

vfloat16m2_t test_vfcvt_f_x_v_f16m2_tumu(vbool8_t vm, vfloat16m2_t vd,
                                         vint16m2_t vs2, size_t vl) {
  return __riscv_vfcvt_f_tumu(vm, vd, vs2, vl);
}

vfloat16m4_t test_vfcvt_f_x_v_f16m4_tumu(vbool4_t vm, vfloat16m4_t vd,
                                         vint16m4_t vs2, size_t vl) {
  return __riscv_vfcvt_f_tumu(vm, vd, vs2, vl);
}

vfloat16m8_t test_vfcvt_f_x_v_f16m8_tumu(vbool2_t vm, vfloat16m8_t vd,
                                         vint16m8_t vs2, size_t vl) {
  return __riscv_vfcvt_f_tumu(vm, vd, vs2, vl);
}

vfloat16mf4_t test_vfcvt_f_xu_v_f16mf4_tumu(vbool64_t vm, vfloat16mf4_t vd,
                                            vuint16mf4_t vs2, size_t vl) {
  return __riscv_vfcvt_f_tumu(vm, vd, vs2, vl);
}

vfloat16mf2_t test_vfcvt_f_xu_v_f16mf2_tumu(vbool32_t vm, vfloat16mf2_t vd,
                                            vuint16mf2_t vs2, size_t vl) {
  return __riscv_vfcvt_f_tumu(vm, vd, vs2, vl);
}

vfloat16m1_t test_vfcvt_f_xu_v_f16m1_tumu(vbool16_t vm, vfloat16m1_t vd,
                                          vuint16m1_t vs2, size_t vl) {
  return __riscv_vfcvt_f_tumu(vm, vd, vs2, vl);
}

vfloat16m2_t test_vfcvt_f_xu_v_f16m2_tumu(vbool8_t vm, vfloat16m2_t vd,
                                          vuint16m2_t vs2, size_t vl) {
  return __riscv_vfcvt_f_tumu(vm, vd, vs2, vl);
}

vfloat16m4_t test_vfcvt_f_xu_v_f16m4_tumu(vbool4_t vm, vfloat16m4_t vd,
                                          vuint16m4_t vs2, size_t vl) {
  return __riscv_vfcvt_f_tumu(vm, vd, vs2, vl);
}

vfloat16m8_t test_vfcvt_f_xu_v_f16m8_tumu(vbool2_t vm, vfloat16m8_t vd,
                                          vuint16m8_t vs2, size_t vl) {
  return __riscv_vfcvt_f_tumu(vm, vd, vs2, vl);
}

vint16mf4_t test_vfcvt_x_f_v_i16mf4_mu(vbool64_t vm, vint16mf4_t vd,
                                       vfloat16mf4_t vs2, size_t vl) {
  return __riscv_vfcvt_x_mu(vm, vd, vs2, vl);
}

vint16mf2_t test_vfcvt_x_f_v_i16mf2_mu(vbool32_t vm, vint16mf2_t vd,
                                       vfloat16mf2_t vs2, size_t vl) {
  return __riscv_vfcvt_x_mu(vm, vd, vs2, vl);
}

vint16m1_t test_vfcvt_x_f_v_i16m1_mu(vbool16_t vm, vint16m1_t vd,
                                     vfloat16m1_t vs2, size_t vl) {
  return __riscv_vfcvt_x_mu(vm, vd, vs2, vl);
}

vint16m2_t test_vfcvt_x_f_v_i16m2_mu(vbool8_t vm, vint16m2_t vd,
                                     vfloat16m2_t vs2, size_t vl) {
  return __riscv_vfcvt_x_mu(vm, vd, vs2, vl);
}

vint16m4_t test_vfcvt_x_f_v_i16m4_mu(vbool4_t vm, vint16m4_t vd,
                                     vfloat16m4_t vs2, size_t vl) {
  return __riscv_vfcvt_x_mu(vm, vd, vs2, vl);
}

vint16m8_t test_vfcvt_x_f_v_i16m8_mu(vbool2_t vm, vint16m8_t vd,
                                     vfloat16m8_t vs2, size_t vl) {
  return __riscv_vfcvt_x_mu(vm, vd, vs2, vl);
}

vuint16mf4_t test_vfcvt_xu_f_v_u16mf4_mu(vbool64_t vm, vuint16mf4_t vd,
                                         vfloat16mf4_t vs2, size_t vl) {
  return __riscv_vfcvt_xu_mu(vm, vd, vs2, vl);
}

vuint16mf2_t test_vfcvt_xu_f_v_u16mf2_mu(vbool32_t vm, vuint16mf2_t vd,
                                         vfloat16mf2_t vs2, size_t vl) {
  return __riscv_vfcvt_xu_mu(vm, vd, vs2, vl);
}

vuint16m1_t test_vfcvt_xu_f_v_u16m1_mu(vbool16_t vm, vuint16m1_t vd,
                                       vfloat16m1_t vs2, size_t vl) {
  return __riscv_vfcvt_xu_mu(vm, vd, vs2, vl);
}

vuint16m2_t test_vfcvt_xu_f_v_u16m2_mu(vbool8_t vm, vuint16m2_t vd,
                                       vfloat16m2_t vs2, size_t vl) {
  return __riscv_vfcvt_xu_mu(vm, vd, vs2, vl);
}

vuint16m4_t test_vfcvt_xu_f_v_u16m4_mu(vbool4_t vm, vuint16m4_t vd,
                                       vfloat16m4_t vs2, size_t vl) {
  return __riscv_vfcvt_xu_mu(vm, vd, vs2, vl);
}

vuint16m8_t test_vfcvt_xu_f_v_u16m8_mu(vbool2_t vm, vuint16m8_t vd,
                                       vfloat16m8_t vs2, size_t vl) {
  return __riscv_vfcvt_xu_mu(vm, vd, vs2, vl);
}

vfloat16mf4_t test_vfcvt_f_x_v_f16mf4_mu(vbool64_t vm, vfloat16mf4_t vd,
                                         vint16mf4_t vs2, size_t vl) {
  return __riscv_vfcvt_f_mu(vm, vd, vs2, vl);
}

vfloat16mf2_t test_vfcvt_f_x_v_f16mf2_mu(vbool32_t vm, vfloat16mf2_t vd,
                                         vint16mf2_t vs2, size_t vl) {
  return __riscv_vfcvt_f_mu(vm, vd, vs2, vl);
}

vfloat16m1_t test_vfcvt_f_x_v_f16m1_mu(vbool16_t vm, vfloat16m1_t vd,
                                       vint16m1_t vs2, size_t vl) {
  return __riscv_vfcvt_f_mu(vm, vd, vs2, vl);
}

vfloat16m2_t test_vfcvt_f_x_v_f16m2_mu(vbool8_t vm, vfloat16m2_t vd,
                                       vint16m2_t vs2, size_t vl) {
  return __riscv_vfcvt_f_mu(vm, vd, vs2, vl);
}

vfloat16m4_t test_vfcvt_f_x_v_f16m4_mu(vbool4_t vm, vfloat16m4_t vd,
                                       vint16m4_t vs2, size_t vl) {
  return __riscv_vfcvt_f_mu(vm, vd, vs2, vl);
}

vfloat16m8_t test_vfcvt_f_x_v_f16m8_mu(vbool2_t vm, vfloat16m8_t vd,
                                       vint16m8_t vs2, size_t vl) {
  return __riscv_vfcvt_f_mu(vm, vd, vs2, vl);
}

vfloat16mf4_t test_vfcvt_f_xu_v_f16mf4_mu(vbool64_t vm, vfloat16mf4_t vd,
                                          vuint16mf4_t vs2, size_t vl) {
  return __riscv_vfcvt_f_mu(vm, vd, vs2, vl);
}

vfloat16mf2_t test_vfcvt_f_xu_v_f16mf2_mu(vbool32_t vm, vfloat16mf2_t vd,
                                          vuint16mf2_t vs2, size_t vl) {
  return __riscv_vfcvt_f_mu(vm, vd, vs2, vl);
}

vfloat16m1_t test_vfcvt_f_xu_v_f16m1_mu(vbool16_t vm, vfloat16m1_t vd,
                                        vuint16m1_t vs2, size_t vl) {
  return __riscv_vfcvt_f_mu(vm, vd, vs2, vl);
}

vfloat16m2_t test_vfcvt_f_xu_v_f16m2_mu(vbool8_t vm, vfloat16m2_t vd,
                                        vuint16m2_t vs2, size_t vl) {
  return __riscv_vfcvt_f_mu(vm, vd, vs2, vl);
}

vfloat16m4_t test_vfcvt_f_xu_v_f16m4_mu(vbool4_t vm, vfloat16m4_t vd,
                                        vuint16m4_t vs2, size_t vl) {
  return __riscv_vfcvt_f_mu(vm, vd, vs2, vl);
}

vfloat16m8_t test_vfcvt_f_xu_v_f16m8_mu(vbool2_t vm, vfloat16m8_t vd,
                                        vuint16m8_t vs2, size_t vl) {
  return __riscv_vfcvt_f_mu(vm, vd, vs2, vl);
}

vint16mf4_t test_vfcvt_x_f_v_i16mf4_rm_tu(vint16mf4_t vd, vfloat16mf4_t vs2,
                                          size_t vl) {
  return __riscv_vfcvt_x_tu(vd, vs2, __RISCV_FRM_RNE, vl);
}

vint16mf2_t test_vfcvt_x_f_v_i16mf2_rm_tu(vint16mf2_t vd, vfloat16mf2_t vs2,
                                          size_t vl) {
  return __riscv_vfcvt_x_tu(vd, vs2, __RISCV_FRM_RNE, vl);
}

vint16m1_t test_vfcvt_x_f_v_i16m1_rm_tu(vint16m1_t vd, vfloat16m1_t vs2,
                                        size_t vl) {
  return __riscv_vfcvt_x_tu(vd, vs2, __RISCV_FRM_RNE, vl);
}

vint16m2_t test_vfcvt_x_f_v_i16m2_rm_tu(vint16m2_t vd, vfloat16m2_t vs2,
                                        size_t vl) {
  return __riscv_vfcvt_x_tu(vd, vs2, __RISCV_FRM_RNE, vl);
}

vint16m4_t test_vfcvt_x_f_v_i16m4_rm_tu(vint16m4_t vd, vfloat16m4_t vs2,
                                        size_t vl) {
  return __riscv_vfcvt_x_tu(vd, vs2, __RISCV_FRM_RNE, vl);
}

vint16m8_t test_vfcvt_x_f_v_i16m8_rm_tu(vint16m8_t vd, vfloat16m8_t vs2,
                                        size_t vl) {
  return __riscv_vfcvt_x_tu(vd, vs2, __RISCV_FRM_RNE, vl);
}

vuint16mf4_t test_vfcvt_xu_f_v_u16mf4_rm_tu(vuint16mf4_t vd, vfloat16mf4_t vs2,
                                            size_t vl) {
  return __riscv_vfcvt_xu_tu(vd, vs2, __RISCV_FRM_RNE, vl);
}

vuint16mf2_t test_vfcvt_xu_f_v_u16mf2_rm_tu(vuint16mf2_t vd, vfloat16mf2_t vs2,
                                            size_t vl) {
  return __riscv_vfcvt_xu_tu(vd, vs2, __RISCV_FRM_RNE, vl);
}

vuint16m1_t test_vfcvt_xu_f_v_u16m1_rm_tu(vuint16m1_t vd, vfloat16m1_t vs2,
                                          size_t vl) {
  return __riscv_vfcvt_xu_tu(vd, vs2, __RISCV_FRM_RNE, vl);
}

vuint16m2_t test_vfcvt_xu_f_v_u16m2_rm_tu(vuint16m2_t vd, vfloat16m2_t vs2,
                                          size_t vl) {
  return __riscv_vfcvt_xu_tu(vd, vs2, __RISCV_FRM_RNE, vl);
}

vuint16m4_t test_vfcvt_xu_f_v_u16m4_rm_tu(vuint16m4_t vd, vfloat16m4_t vs2,
                                          size_t vl) {
  return __riscv_vfcvt_xu_tu(vd, vs2, __RISCV_FRM_RNE, vl);
}

vuint16m8_t test_vfcvt_xu_f_v_u16m8_rm_tu(vuint16m8_t vd, vfloat16m8_t vs2,
                                          size_t vl) {
  return __riscv_vfcvt_xu_tu(vd, vs2, __RISCV_FRM_RNE, vl);
}

vfloat16mf4_t test_vfcvt_f_x_v_f16mf4_rm_tu(vfloat16mf4_t vd, vint16mf4_t vs2,
                                            size_t vl) {
  return __riscv_vfcvt_f_tu(vd, vs2, __RISCV_FRM_RNE, vl);
}

vfloat16mf2_t test_vfcvt_f_x_v_f16mf2_rm_tu(vfloat16mf2_t vd, vint16mf2_t vs2,
                                            size_t vl) {
  return __riscv_vfcvt_f_tu(vd, vs2, __RISCV_FRM_RNE, vl);
}

vfloat16m1_t test_vfcvt_f_x_v_f16m1_rm_tu(vfloat16m1_t vd, vint16m1_t vs2,
                                          size_t vl) {
  return __riscv_vfcvt_f_tu(vd, vs2, __RISCV_FRM_RNE, vl);
}

vfloat16m2_t test_vfcvt_f_x_v_f16m2_rm_tu(vfloat16m2_t vd, vint16m2_t vs2,
                                          size_t vl) {
  return __riscv_vfcvt_f_tu(vd, vs2, __RISCV_FRM_RNE, vl);
}

vfloat16m4_t test_vfcvt_f_x_v_f16m4_rm_tu(vfloat16m4_t vd, vint16m4_t vs2,
                                          size_t vl) {
  return __riscv_vfcvt_f_tu(vd, vs2, __RISCV_FRM_RNE, vl);
}

vfloat16m8_t test_vfcvt_f_x_v_f16m8_rm_tu(vfloat16m8_t vd, vint16m8_t vs2,
                                          size_t vl) {
  return __riscv_vfcvt_f_tu(vd, vs2, __RISCV_FRM_RNE, vl);
}

vfloat16mf4_t test_vfcvt_f_xu_v_f16mf4_rm_tu(vfloat16mf4_t vd, vuint16mf4_t vs2,
                                             size_t vl) {
  return __riscv_vfcvt_f_tu(vd, vs2, __RISCV_FRM_RNE, vl);
}

vfloat16mf2_t test_vfcvt_f_xu_v_f16mf2_rm_tu(vfloat16mf2_t vd, vuint16mf2_t vs2,
                                             size_t vl) {
  return __riscv_vfcvt_f_tu(vd, vs2, __RISCV_FRM_RNE, vl);
}

vfloat16m1_t test_vfcvt_f_xu_v_f16m1_rm_tu(vfloat16m1_t vd, vuint16m1_t vs2,
                                           size_t vl) {
  return __riscv_vfcvt_f_tu(vd, vs2, __RISCV_FRM_RNE, vl);
}

vfloat16m2_t test_vfcvt_f_xu_v_f16m2_rm_tu(vfloat16m2_t vd, vuint16m2_t vs2,
                                           size_t vl) {
  return __riscv_vfcvt_f_tu(vd, vs2, __RISCV_FRM_RNE, vl);
}

vfloat16m4_t test_vfcvt_f_xu_v_f16m4_rm_tu(vfloat16m4_t vd, vuint16m4_t vs2,
                                           size_t vl) {
  return __riscv_vfcvt_f_tu(vd, vs2, __RISCV_FRM_RNE, vl);
}

vfloat16m8_t test_vfcvt_f_xu_v_f16m8_rm_tu(vfloat16m8_t vd, vuint16m8_t vs2,
                                           size_t vl) {
  return __riscv_vfcvt_f_tu(vd, vs2, __RISCV_FRM_RNE, vl);
}

vint16mf4_t test_vfcvt_x_f_v_i16mf4_rm_tum(vbool64_t vm, vint16mf4_t vd,
                                           vfloat16mf4_t vs2, size_t vl) {
  return __riscv_vfcvt_x_tum(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vint16mf2_t test_vfcvt_x_f_v_i16mf2_rm_tum(vbool32_t vm, vint16mf2_t vd,
                                           vfloat16mf2_t vs2, size_t vl) {
  return __riscv_vfcvt_x_tum(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vint16m1_t test_vfcvt_x_f_v_i16m1_rm_tum(vbool16_t vm, vint16m1_t vd,
                                         vfloat16m1_t vs2, size_t vl) {
  return __riscv_vfcvt_x_tum(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vint16m2_t test_vfcvt_x_f_v_i16m2_rm_tum(vbool8_t vm, vint16m2_t vd,
                                         vfloat16m2_t vs2, size_t vl) {
  return __riscv_vfcvt_x_tum(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vint16m4_t test_vfcvt_x_f_v_i16m4_rm_tum(vbool4_t vm, vint16m4_t vd,
                                         vfloat16m4_t vs2, size_t vl) {
  return __riscv_vfcvt_x_tum(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vint16m8_t test_vfcvt_x_f_v_i16m8_rm_tum(vbool2_t vm, vint16m8_t vd,
                                         vfloat16m8_t vs2, size_t vl) {
  return __riscv_vfcvt_x_tum(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vuint16mf4_t test_vfcvt_xu_f_v_u16mf4_rm_tum(vbool64_t vm, vuint16mf4_t vd,
                                             vfloat16mf4_t vs2, size_t vl) {
  return __riscv_vfcvt_xu_tum(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vuint16mf2_t test_vfcvt_xu_f_v_u16mf2_rm_tum(vbool32_t vm, vuint16mf2_t vd,
                                             vfloat16mf2_t vs2, size_t vl) {
  return __riscv_vfcvt_xu_tum(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vuint16m1_t test_vfcvt_xu_f_v_u16m1_rm_tum(vbool16_t vm, vuint16m1_t vd,
                                           vfloat16m1_t vs2, size_t vl) {
  return __riscv_vfcvt_xu_tum(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vuint16m2_t test_vfcvt_xu_f_v_u16m2_rm_tum(vbool8_t vm, vuint16m2_t vd,
                                           vfloat16m2_t vs2, size_t vl) {
  return __riscv_vfcvt_xu_tum(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vuint16m4_t test_vfcvt_xu_f_v_u16m4_rm_tum(vbool4_t vm, vuint16m4_t vd,
                                           vfloat16m4_t vs2, size_t vl) {
  return __riscv_vfcvt_xu_tum(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vuint16m8_t test_vfcvt_xu_f_v_u16m8_rm_tum(vbool2_t vm, vuint16m8_t vd,
                                           vfloat16m8_t vs2, size_t vl) {
  return __riscv_vfcvt_xu_tum(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vfloat16mf4_t test_vfcvt_f_x_v_f16mf4_rm_tum(vbool64_t vm, vfloat16mf4_t vd,
                                             vint16mf4_t vs2, size_t vl) {
  return __riscv_vfcvt_f_tum(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vfloat16mf2_t test_vfcvt_f_x_v_f16mf2_rm_tum(vbool32_t vm, vfloat16mf2_t vd,
                                             vint16mf2_t vs2, size_t vl) {
  return __riscv_vfcvt_f_tum(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vfloat16m1_t test_vfcvt_f_x_v_f16m1_rm_tum(vbool16_t vm, vfloat16m1_t vd,
                                           vint16m1_t vs2, size_t vl) {
  return __riscv_vfcvt_f_tum(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vfloat16m2_t test_vfcvt_f_x_v_f16m2_rm_tum(vbool8_t vm, vfloat16m2_t vd,
                                           vint16m2_t vs2, size_t vl) {
  return __riscv_vfcvt_f_tum(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vfloat16m4_t test_vfcvt_f_x_v_f16m4_rm_tum(vbool4_t vm, vfloat16m4_t vd,
                                           vint16m4_t vs2, size_t vl) {
  return __riscv_vfcvt_f_tum(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vfloat16m8_t test_vfcvt_f_x_v_f16m8_rm_tum(vbool2_t vm, vfloat16m8_t vd,
                                           vint16m8_t vs2, size_t vl) {
  return __riscv_vfcvt_f_tum(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vfloat16mf4_t test_vfcvt_f_xu_v_f16mf4_rm_tum(vbool64_t vm, vfloat16mf4_t vd,
                                              vuint16mf4_t vs2, size_t vl) {
  return __riscv_vfcvt_f_tum(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vfloat16mf2_t test_vfcvt_f_xu_v_f16mf2_rm_tum(vbool32_t vm, vfloat16mf2_t vd,
                                              vuint16mf2_t vs2, size_t vl) {
  return __riscv_vfcvt_f_tum(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vfloat16m1_t test_vfcvt_f_xu_v_f16m1_rm_tum(vbool16_t vm, vfloat16m1_t vd,
                                            vuint16m1_t vs2, size_t vl) {
  return __riscv_vfcvt_f_tum(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vfloat16m2_t test_vfcvt_f_xu_v_f16m2_rm_tum(vbool8_t vm, vfloat16m2_t vd,
                                            vuint16m2_t vs2, size_t vl) {
  return __riscv_vfcvt_f_tum(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vfloat16m4_t test_vfcvt_f_xu_v_f16m4_rm_tum(vbool4_t vm, vfloat16m4_t vd,
                                            vuint16m4_t vs2, size_t vl) {
  return __riscv_vfcvt_f_tum(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vfloat16m8_t test_vfcvt_f_xu_v_f16m8_rm_tum(vbool2_t vm, vfloat16m8_t vd,
                                            vuint16m8_t vs2, size_t vl) {
  return __riscv_vfcvt_f_tum(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vint16mf4_t test_vfcvt_x_f_v_i16mf4_rm_tumu(vbool64_t vm, vint16mf4_t vd,
                                            vfloat16mf4_t vs2, size_t vl) {
  return __riscv_vfcvt_x_tumu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vint16mf2_t test_vfcvt_x_f_v_i16mf2_rm_tumu(vbool32_t vm, vint16mf2_t vd,
                                            vfloat16mf2_t vs2, size_t vl) {
  return __riscv_vfcvt_x_tumu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vint16m1_t test_vfcvt_x_f_v_i16m1_rm_tumu(vbool16_t vm, vint16m1_t vd,
                                          vfloat16m1_t vs2, size_t vl) {
  return __riscv_vfcvt_x_tumu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vint16m2_t test_vfcvt_x_f_v_i16m2_rm_tumu(vbool8_t vm, vint16m2_t vd,
                                          vfloat16m2_t vs2, size_t vl) {
  return __riscv_vfcvt_x_tumu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vint16m4_t test_vfcvt_x_f_v_i16m4_rm_tumu(vbool4_t vm, vint16m4_t vd,
                                          vfloat16m4_t vs2, size_t vl) {
  return __riscv_vfcvt_x_tumu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vint16m8_t test_vfcvt_x_f_v_i16m8_rm_tumu(vbool2_t vm, vint16m8_t vd,
                                          vfloat16m8_t vs2, size_t vl) {
  return __riscv_vfcvt_x_tumu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vuint16mf4_t test_vfcvt_xu_f_v_u16mf4_rm_tumu(vbool64_t vm, vuint16mf4_t vd,
                                              vfloat16mf4_t vs2, size_t vl) {
  return __riscv_vfcvt_xu_tumu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vuint16mf2_t test_vfcvt_xu_f_v_u16mf2_rm_tumu(vbool32_t vm, vuint16mf2_t vd,
                                              vfloat16mf2_t vs2, size_t vl) {
  return __riscv_vfcvt_xu_tumu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vuint16m1_t test_vfcvt_xu_f_v_u16m1_rm_tumu(vbool16_t vm, vuint16m1_t vd,
                                            vfloat16m1_t vs2, size_t vl) {
  return __riscv_vfcvt_xu_tumu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vuint16m2_t test_vfcvt_xu_f_v_u16m2_rm_tumu(vbool8_t vm, vuint16m2_t vd,
                                            vfloat16m2_t vs2, size_t vl) {
  return __riscv_vfcvt_xu_tumu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vuint16m4_t test_vfcvt_xu_f_v_u16m4_rm_tumu(vbool4_t vm, vuint16m4_t vd,
                                            vfloat16m4_t vs2, size_t vl) {
  return __riscv_vfcvt_xu_tumu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vuint16m8_t test_vfcvt_xu_f_v_u16m8_rm_tumu(vbool2_t vm, vuint16m8_t vd,
                                            vfloat16m8_t vs2, size_t vl) {
  return __riscv_vfcvt_xu_tumu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vfloat16mf4_t test_vfcvt_f_x_v_f16mf4_rm_tumu(vbool64_t vm, vfloat16mf4_t vd,
                                              vint16mf4_t vs2, size_t vl) {
  return __riscv_vfcvt_f_tumu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vfloat16mf2_t test_vfcvt_f_x_v_f16mf2_rm_tumu(vbool32_t vm, vfloat16mf2_t vd,
                                              vint16mf2_t vs2, size_t vl) {
  return __riscv_vfcvt_f_tumu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vfloat16m1_t test_vfcvt_f_x_v_f16m1_rm_tumu(vbool16_t vm, vfloat16m1_t vd,
                                            vint16m1_t vs2, size_t vl) {
  return __riscv_vfcvt_f_tumu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vfloat16m2_t test_vfcvt_f_x_v_f16m2_rm_tumu(vbool8_t vm, vfloat16m2_t vd,
                                            vint16m2_t vs2, size_t vl) {
  return __riscv_vfcvt_f_tumu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vfloat16m4_t test_vfcvt_f_x_v_f16m4_rm_tumu(vbool4_t vm, vfloat16m4_t vd,
                                            vint16m4_t vs2, size_t vl) {
  return __riscv_vfcvt_f_tumu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vfloat16m8_t test_vfcvt_f_x_v_f16m8_rm_tumu(vbool2_t vm, vfloat16m8_t vd,
                                            vint16m8_t vs2, size_t vl) {
  return __riscv_vfcvt_f_tumu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vfloat16mf4_t test_vfcvt_f_xu_v_f16mf4_rm_tumu(vbool64_t vm, vfloat16mf4_t vd,
                                               vuint16mf4_t vs2, size_t vl) {
  return __riscv_vfcvt_f_tumu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vfloat16mf2_t test_vfcvt_f_xu_v_f16mf2_rm_tumu(vbool32_t vm, vfloat16mf2_t vd,
                                               vuint16mf2_t vs2, size_t vl) {
  return __riscv_vfcvt_f_tumu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vfloat16m1_t test_vfcvt_f_xu_v_f16m1_rm_tumu(vbool16_t vm, vfloat16m1_t vd,
                                             vuint16m1_t vs2, size_t vl) {
  return __riscv_vfcvt_f_tumu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vfloat16m2_t test_vfcvt_f_xu_v_f16m2_rm_tumu(vbool8_t vm, vfloat16m2_t vd,
                                             vuint16m2_t vs2, size_t vl) {
  return __riscv_vfcvt_f_tumu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vfloat16m4_t test_vfcvt_f_xu_v_f16m4_rm_tumu(vbool4_t vm, vfloat16m4_t vd,
                                             vuint16m4_t vs2, size_t vl) {
  return __riscv_vfcvt_f_tumu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vfloat16m8_t test_vfcvt_f_xu_v_f16m8_rm_tumu(vbool2_t vm, vfloat16m8_t vd,
                                             vuint16m8_t vs2, size_t vl) {
  return __riscv_vfcvt_f_tumu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vint16mf4_t test_vfcvt_x_f_v_i16mf4_rm_mu(vbool64_t vm, vint16mf4_t vd,
                                          vfloat16mf4_t vs2, size_t vl) {
  return __riscv_vfcvt_x_mu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vint16mf2_t test_vfcvt_x_f_v_i16mf2_rm_mu(vbool32_t vm, vint16mf2_t vd,
                                          vfloat16mf2_t vs2, size_t vl) {
  return __riscv_vfcvt_x_mu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vint16m1_t test_vfcvt_x_f_v_i16m1_rm_mu(vbool16_t vm, vint16m1_t vd,
                                        vfloat16m1_t vs2, size_t vl) {
  return __riscv_vfcvt_x_mu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vint16m2_t test_vfcvt_x_f_v_i16m2_rm_mu(vbool8_t vm, vint16m2_t vd,
                                        vfloat16m2_t vs2, size_t vl) {
  return __riscv_vfcvt_x_mu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vint16m4_t test_vfcvt_x_f_v_i16m4_rm_mu(vbool4_t vm, vint16m4_t vd,
                                        vfloat16m4_t vs2, size_t vl) {
  return __riscv_vfcvt_x_mu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vint16m8_t test_vfcvt_x_f_v_i16m8_rm_mu(vbool2_t vm, vint16m8_t vd,
                                        vfloat16m8_t vs2, size_t vl) {
  return __riscv_vfcvt_x_mu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vuint16mf4_t test_vfcvt_xu_f_v_u16mf4_rm_mu(vbool64_t vm, vuint16mf4_t vd,
                                            vfloat16mf4_t vs2, size_t vl) {
  return __riscv_vfcvt_xu_mu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vuint16mf2_t test_vfcvt_xu_f_v_u16mf2_rm_mu(vbool32_t vm, vuint16mf2_t vd,
                                            vfloat16mf2_t vs2, size_t vl) {
  return __riscv_vfcvt_xu_mu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vuint16m1_t test_vfcvt_xu_f_v_u16m1_rm_mu(vbool16_t vm, vuint16m1_t vd,
                                          vfloat16m1_t vs2, size_t vl) {
  return __riscv_vfcvt_xu_mu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vuint16m2_t test_vfcvt_xu_f_v_u16m2_rm_mu(vbool8_t vm, vuint16m2_t vd,
                                          vfloat16m2_t vs2, size_t vl) {
  return __riscv_vfcvt_xu_mu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vuint16m4_t test_vfcvt_xu_f_v_u16m4_rm_mu(vbool4_t vm, vuint16m4_t vd,
                                          vfloat16m4_t vs2, size_t vl) {
  return __riscv_vfcvt_xu_mu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vuint16m8_t test_vfcvt_xu_f_v_u16m8_rm_mu(vbool2_t vm, vuint16m8_t vd,
                                          vfloat16m8_t vs2, size_t vl) {
  return __riscv_vfcvt_xu_mu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vfloat16mf4_t test_vfcvt_f_x_v_f16mf4_rm_mu(vbool64_t vm, vfloat16mf4_t vd,
                                            vint16mf4_t vs2, size_t vl) {
  return __riscv_vfcvt_f_mu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vfloat16mf2_t test_vfcvt_f_x_v_f16mf2_rm_mu(vbool32_t vm, vfloat16mf2_t vd,
                                            vint16mf2_t vs2, size_t vl) {
  return __riscv_vfcvt_f_mu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vfloat16m1_t test_vfcvt_f_x_v_f16m1_rm_mu(vbool16_t vm, vfloat16m1_t vd,
                                          vint16m1_t vs2, size_t vl) {
  return __riscv_vfcvt_f_mu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vfloat16m2_t test_vfcvt_f_x_v_f16m2_rm_mu(vbool8_t vm, vfloat16m2_t vd,
                                          vint16m2_t vs2, size_t vl) {
  return __riscv_vfcvt_f_mu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vfloat16m4_t test_vfcvt_f_x_v_f16m4_rm_mu(vbool4_t vm, vfloat16m4_t vd,
                                          vint16m4_t vs2, size_t vl) {
  return __riscv_vfcvt_f_mu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vfloat16m8_t test_vfcvt_f_x_v_f16m8_rm_mu(vbool2_t vm, vfloat16m8_t vd,
                                          vint16m8_t vs2, size_t vl) {
  return __riscv_vfcvt_f_mu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vfloat16mf4_t test_vfcvt_f_xu_v_f16mf4_rm_mu(vbool64_t vm, vfloat16mf4_t vd,
                                             vuint16mf4_t vs2, size_t vl) {
  return __riscv_vfcvt_f_mu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vfloat16mf2_t test_vfcvt_f_xu_v_f16mf2_rm_mu(vbool32_t vm, vfloat16mf2_t vd,
                                             vuint16mf2_t vs2, size_t vl) {
  return __riscv_vfcvt_f_mu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vfloat16m1_t test_vfcvt_f_xu_v_f16m1_rm_mu(vbool16_t vm, vfloat16m1_t vd,
                                           vuint16m1_t vs2, size_t vl) {
  return __riscv_vfcvt_f_mu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vfloat16m2_t test_vfcvt_f_xu_v_f16m2_rm_mu(vbool8_t vm, vfloat16m2_t vd,
                                           vuint16m2_t vs2, size_t vl) {
  return __riscv_vfcvt_f_mu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vfloat16m4_t test_vfcvt_f_xu_v_f16m4_rm_mu(vbool4_t vm, vfloat16m4_t vd,
                                           vuint16m4_t vs2, size_t vl) {
  return __riscv_vfcvt_f_mu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vfloat16m8_t test_vfcvt_f_xu_v_f16m8_rm_mu(vbool2_t vm, vfloat16m8_t vd,
                                           vuint16m8_t vs2, size_t vl) {
  return __riscv_vfcvt_f_mu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}
