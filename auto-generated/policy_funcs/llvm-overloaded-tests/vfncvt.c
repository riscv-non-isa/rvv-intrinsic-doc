// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -target-feature +zfh \
// RUN:   -target-feature +experimental-zvfh -disable-O0-optnone \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

vint16mf4_t test_vfncvt_x_f_w_i16mf4_tu(vint16mf4_t vd, vfloat32mf2_t vs2,
                                        size_t vl) {
  return __riscv_vfncvt_x_tu(vd, vs2, vl);
}

vint16mf2_t test_vfncvt_x_f_w_i16mf2_tu(vint16mf2_t vd, vfloat32m1_t vs2,
                                        size_t vl) {
  return __riscv_vfncvt_x_tu(vd, vs2, vl);
}

vint16m1_t test_vfncvt_x_f_w_i16m1_tu(vint16m1_t vd, vfloat32m2_t vs2,
                                      size_t vl) {
  return __riscv_vfncvt_x_tu(vd, vs2, vl);
}

vint16m2_t test_vfncvt_x_f_w_i16m2_tu(vint16m2_t vd, vfloat32m4_t vs2,
                                      size_t vl) {
  return __riscv_vfncvt_x_tu(vd, vs2, vl);
}

vint16m4_t test_vfncvt_x_f_w_i16m4_tu(vint16m4_t vd, vfloat32m8_t vs2,
                                      size_t vl) {
  return __riscv_vfncvt_x_tu(vd, vs2, vl);
}

vuint16mf4_t test_vfncvt_xu_f_w_u16mf4_tu(vuint16mf4_t vd, vfloat32mf2_t vs2,
                                          size_t vl) {
  return __riscv_vfncvt_xu_tu(vd, vs2, vl);
}

vuint16mf2_t test_vfncvt_xu_f_w_u16mf2_tu(vuint16mf2_t vd, vfloat32m1_t vs2,
                                          size_t vl) {
  return __riscv_vfncvt_xu_tu(vd, vs2, vl);
}

vuint16m1_t test_vfncvt_xu_f_w_u16m1_tu(vuint16m1_t vd, vfloat32m2_t vs2,
                                        size_t vl) {
  return __riscv_vfncvt_xu_tu(vd, vs2, vl);
}

vuint16m2_t test_vfncvt_xu_f_w_u16m2_tu(vuint16m2_t vd, vfloat32m4_t vs2,
                                        size_t vl) {
  return __riscv_vfncvt_xu_tu(vd, vs2, vl);
}

vuint16m4_t test_vfncvt_xu_f_w_u16m4_tu(vuint16m4_t vd, vfloat32m8_t vs2,
                                        size_t vl) {
  return __riscv_vfncvt_xu_tu(vd, vs2, vl);
}

vint32mf2_t test_vfncvt_x_f_w_i32mf2_tu(vint32mf2_t vd, vfloat64m1_t vs2,
                                        size_t vl) {
  return __riscv_vfncvt_x_tu(vd, vs2, vl);
}

vint32m1_t test_vfncvt_x_f_w_i32m1_tu(vint32m1_t vd, vfloat64m2_t vs2,
                                      size_t vl) {
  return __riscv_vfncvt_x_tu(vd, vs2, vl);
}

vint32m2_t test_vfncvt_x_f_w_i32m2_tu(vint32m2_t vd, vfloat64m4_t vs2,
                                      size_t vl) {
  return __riscv_vfncvt_x_tu(vd, vs2, vl);
}

vint32m4_t test_vfncvt_x_f_w_i32m4_tu(vint32m4_t vd, vfloat64m8_t vs2,
                                      size_t vl) {
  return __riscv_vfncvt_x_tu(vd, vs2, vl);
}

vuint32mf2_t test_vfncvt_xu_f_w_u32mf2_tu(vuint32mf2_t vd, vfloat64m1_t vs2,
                                          size_t vl) {
  return __riscv_vfncvt_xu_tu(vd, vs2, vl);
}

vuint32m1_t test_vfncvt_xu_f_w_u32m1_tu(vuint32m1_t vd, vfloat64m2_t vs2,
                                        size_t vl) {
  return __riscv_vfncvt_xu_tu(vd, vs2, vl);
}

vuint32m2_t test_vfncvt_xu_f_w_u32m2_tu(vuint32m2_t vd, vfloat64m4_t vs2,
                                        size_t vl) {
  return __riscv_vfncvt_xu_tu(vd, vs2, vl);
}

vuint32m4_t test_vfncvt_xu_f_w_u32m4_tu(vuint32m4_t vd, vfloat64m8_t vs2,
                                        size_t vl) {
  return __riscv_vfncvt_xu_tu(vd, vs2, vl);
}

vfloat32mf2_t test_vfncvt_f_x_w_f32mf2_tu(vfloat32mf2_t vd, vint64m1_t vs2,
                                          size_t vl) {
  return __riscv_vfncvt_f_tu(vd, vs2, vl);
}

vfloat32m1_t test_vfncvt_f_x_w_f32m1_tu(vfloat32m1_t vd, vint64m2_t vs2,
                                        size_t vl) {
  return __riscv_vfncvt_f_tu(vd, vs2, vl);
}

vfloat32m2_t test_vfncvt_f_x_w_f32m2_tu(vfloat32m2_t vd, vint64m4_t vs2,
                                        size_t vl) {
  return __riscv_vfncvt_f_tu(vd, vs2, vl);
}

vfloat32m4_t test_vfncvt_f_x_w_f32m4_tu(vfloat32m4_t vd, vint64m8_t vs2,
                                        size_t vl) {
  return __riscv_vfncvt_f_tu(vd, vs2, vl);
}

vfloat32mf2_t test_vfncvt_f_xu_w_f32mf2_tu(vfloat32mf2_t vd, vuint64m1_t vs2,
                                           size_t vl) {
  return __riscv_vfncvt_f_tu(vd, vs2, vl);
}

vfloat32m1_t test_vfncvt_f_xu_w_f32m1_tu(vfloat32m1_t vd, vuint64m2_t vs2,
                                         size_t vl) {
  return __riscv_vfncvt_f_tu(vd, vs2, vl);
}

vfloat32m2_t test_vfncvt_f_xu_w_f32m2_tu(vfloat32m2_t vd, vuint64m4_t vs2,
                                         size_t vl) {
  return __riscv_vfncvt_f_tu(vd, vs2, vl);
}

vfloat32m4_t test_vfncvt_f_xu_w_f32m4_tu(vfloat32m4_t vd, vuint64m8_t vs2,
                                         size_t vl) {
  return __riscv_vfncvt_f_tu(vd, vs2, vl);
}

vfloat32mf2_t test_vfncvt_f_f_w_f32mf2_tu(vfloat32mf2_t vd, vfloat64m1_t vs2,
                                          size_t vl) {
  return __riscv_vfncvt_f_tu(vd, vs2, vl);
}

vfloat32m1_t test_vfncvt_f_f_w_f32m1_tu(vfloat32m1_t vd, vfloat64m2_t vs2,
                                        size_t vl) {
  return __riscv_vfncvt_f_tu(vd, vs2, vl);
}

vfloat32m2_t test_vfncvt_f_f_w_f32m2_tu(vfloat32m2_t vd, vfloat64m4_t vs2,
                                        size_t vl) {
  return __riscv_vfncvt_f_tu(vd, vs2, vl);
}

vfloat32m4_t test_vfncvt_f_f_w_f32m4_tu(vfloat32m4_t vd, vfloat64m8_t vs2,
                                        size_t vl) {
  return __riscv_vfncvt_f_tu(vd, vs2, vl);
}

vint16mf4_t test_vfncvt_x_f_w_i16mf4_tum(vbool64_t vm, vint16mf4_t vd,
                                         vfloat32mf2_t vs2, size_t vl) {
  return __riscv_vfncvt_x_tum(vm, vd, vs2, vl);
}

vint16mf2_t test_vfncvt_x_f_w_i16mf2_tum(vbool32_t vm, vint16mf2_t vd,
                                         vfloat32m1_t vs2, size_t vl) {
  return __riscv_vfncvt_x_tum(vm, vd, vs2, vl);
}

vint16m1_t test_vfncvt_x_f_w_i16m1_tum(vbool16_t vm, vint16m1_t vd,
                                       vfloat32m2_t vs2, size_t vl) {
  return __riscv_vfncvt_x_tum(vm, vd, vs2, vl);
}

vint16m2_t test_vfncvt_x_f_w_i16m2_tum(vbool8_t vm, vint16m2_t vd,
                                       vfloat32m4_t vs2, size_t vl) {
  return __riscv_vfncvt_x_tum(vm, vd, vs2, vl);
}

vint16m4_t test_vfncvt_x_f_w_i16m4_tum(vbool4_t vm, vint16m4_t vd,
                                       vfloat32m8_t vs2, size_t vl) {
  return __riscv_vfncvt_x_tum(vm, vd, vs2, vl);
}

vuint16mf4_t test_vfncvt_xu_f_w_u16mf4_tum(vbool64_t vm, vuint16mf4_t vd,
                                           vfloat32mf2_t vs2, size_t vl) {
  return __riscv_vfncvt_xu_tum(vm, vd, vs2, vl);
}

vuint16mf2_t test_vfncvt_xu_f_w_u16mf2_tum(vbool32_t vm, vuint16mf2_t vd,
                                           vfloat32m1_t vs2, size_t vl) {
  return __riscv_vfncvt_xu_tum(vm, vd, vs2, vl);
}

vuint16m1_t test_vfncvt_xu_f_w_u16m1_tum(vbool16_t vm, vuint16m1_t vd,
                                         vfloat32m2_t vs2, size_t vl) {
  return __riscv_vfncvt_xu_tum(vm, vd, vs2, vl);
}

vuint16m2_t test_vfncvt_xu_f_w_u16m2_tum(vbool8_t vm, vuint16m2_t vd,
                                         vfloat32m4_t vs2, size_t vl) {
  return __riscv_vfncvt_xu_tum(vm, vd, vs2, vl);
}

vuint16m4_t test_vfncvt_xu_f_w_u16m4_tum(vbool4_t vm, vuint16m4_t vd,
                                         vfloat32m8_t vs2, size_t vl) {
  return __riscv_vfncvt_xu_tum(vm, vd, vs2, vl);
}

vint32mf2_t test_vfncvt_x_f_w_i32mf2_tum(vbool64_t vm, vint32mf2_t vd,
                                         vfloat64m1_t vs2, size_t vl) {
  return __riscv_vfncvt_x_tum(vm, vd, vs2, vl);
}

vint32m1_t test_vfncvt_x_f_w_i32m1_tum(vbool32_t vm, vint32m1_t vd,
                                       vfloat64m2_t vs2, size_t vl) {
  return __riscv_vfncvt_x_tum(vm, vd, vs2, vl);
}

vint32m2_t test_vfncvt_x_f_w_i32m2_tum(vbool16_t vm, vint32m2_t vd,
                                       vfloat64m4_t vs2, size_t vl) {
  return __riscv_vfncvt_x_tum(vm, vd, vs2, vl);
}

vint32m4_t test_vfncvt_x_f_w_i32m4_tum(vbool8_t vm, vint32m4_t vd,
                                       vfloat64m8_t vs2, size_t vl) {
  return __riscv_vfncvt_x_tum(vm, vd, vs2, vl);
}

vuint32mf2_t test_vfncvt_xu_f_w_u32mf2_tum(vbool64_t vm, vuint32mf2_t vd,
                                           vfloat64m1_t vs2, size_t vl) {
  return __riscv_vfncvt_xu_tum(vm, vd, vs2, vl);
}

vuint32m1_t test_vfncvt_xu_f_w_u32m1_tum(vbool32_t vm, vuint32m1_t vd,
                                         vfloat64m2_t vs2, size_t vl) {
  return __riscv_vfncvt_xu_tum(vm, vd, vs2, vl);
}

vuint32m2_t test_vfncvt_xu_f_w_u32m2_tum(vbool16_t vm, vuint32m2_t vd,
                                         vfloat64m4_t vs2, size_t vl) {
  return __riscv_vfncvt_xu_tum(vm, vd, vs2, vl);
}

vuint32m4_t test_vfncvt_xu_f_w_u32m4_tum(vbool8_t vm, vuint32m4_t vd,
                                         vfloat64m8_t vs2, size_t vl) {
  return __riscv_vfncvt_xu_tum(vm, vd, vs2, vl);
}

vfloat32mf2_t test_vfncvt_f_x_w_f32mf2_tum(vbool64_t vm, vfloat32mf2_t vd,
                                           vint64m1_t vs2, size_t vl) {
  return __riscv_vfncvt_f_tum(vm, vd, vs2, vl);
}

vfloat32m1_t test_vfncvt_f_x_w_f32m1_tum(vbool32_t vm, vfloat32m1_t vd,
                                         vint64m2_t vs2, size_t vl) {
  return __riscv_vfncvt_f_tum(vm, vd, vs2, vl);
}

vfloat32m2_t test_vfncvt_f_x_w_f32m2_tum(vbool16_t vm, vfloat32m2_t vd,
                                         vint64m4_t vs2, size_t vl) {
  return __riscv_vfncvt_f_tum(vm, vd, vs2, vl);
}

vfloat32m4_t test_vfncvt_f_x_w_f32m4_tum(vbool8_t vm, vfloat32m4_t vd,
                                         vint64m8_t vs2, size_t vl) {
  return __riscv_vfncvt_f_tum(vm, vd, vs2, vl);
}

vfloat32mf2_t test_vfncvt_f_xu_w_f32mf2_tum(vbool64_t vm, vfloat32mf2_t vd,
                                            vuint64m1_t vs2, size_t vl) {
  return __riscv_vfncvt_f_tum(vm, vd, vs2, vl);
}

vfloat32m1_t test_vfncvt_f_xu_w_f32m1_tum(vbool32_t vm, vfloat32m1_t vd,
                                          vuint64m2_t vs2, size_t vl) {
  return __riscv_vfncvt_f_tum(vm, vd, vs2, vl);
}

vfloat32m2_t test_vfncvt_f_xu_w_f32m2_tum(vbool16_t vm, vfloat32m2_t vd,
                                          vuint64m4_t vs2, size_t vl) {
  return __riscv_vfncvt_f_tum(vm, vd, vs2, vl);
}

vfloat32m4_t test_vfncvt_f_xu_w_f32m4_tum(vbool8_t vm, vfloat32m4_t vd,
                                          vuint64m8_t vs2, size_t vl) {
  return __riscv_vfncvt_f_tum(vm, vd, vs2, vl);
}

vfloat32mf2_t test_vfncvt_f_f_w_f32mf2_tum(vbool64_t vm, vfloat32mf2_t vd,
                                           vfloat64m1_t vs2, size_t vl) {
  return __riscv_vfncvt_f_tum(vm, vd, vs2, vl);
}

vfloat32m1_t test_vfncvt_f_f_w_f32m1_tum(vbool32_t vm, vfloat32m1_t vd,
                                         vfloat64m2_t vs2, size_t vl) {
  return __riscv_vfncvt_f_tum(vm, vd, vs2, vl);
}

vfloat32m2_t test_vfncvt_f_f_w_f32m2_tum(vbool16_t vm, vfloat32m2_t vd,
                                         vfloat64m4_t vs2, size_t vl) {
  return __riscv_vfncvt_f_tum(vm, vd, vs2, vl);
}

vfloat32m4_t test_vfncvt_f_f_w_f32m4_tum(vbool8_t vm, vfloat32m4_t vd,
                                         vfloat64m8_t vs2, size_t vl) {
  return __riscv_vfncvt_f_tum(vm, vd, vs2, vl);
}

vint16mf4_t test_vfncvt_x_f_w_i16mf4_tumu(vbool64_t vm, vint16mf4_t vd,
                                          vfloat32mf2_t vs2, size_t vl) {
  return __riscv_vfncvt_x_tumu(vm, vd, vs2, vl);
}

vint16mf2_t test_vfncvt_x_f_w_i16mf2_tumu(vbool32_t vm, vint16mf2_t vd,
                                          vfloat32m1_t vs2, size_t vl) {
  return __riscv_vfncvt_x_tumu(vm, vd, vs2, vl);
}

vint16m1_t test_vfncvt_x_f_w_i16m1_tumu(vbool16_t vm, vint16m1_t vd,
                                        vfloat32m2_t vs2, size_t vl) {
  return __riscv_vfncvt_x_tumu(vm, vd, vs2, vl);
}

vint16m2_t test_vfncvt_x_f_w_i16m2_tumu(vbool8_t vm, vint16m2_t vd,
                                        vfloat32m4_t vs2, size_t vl) {
  return __riscv_vfncvt_x_tumu(vm, vd, vs2, vl);
}

vint16m4_t test_vfncvt_x_f_w_i16m4_tumu(vbool4_t vm, vint16m4_t vd,
                                        vfloat32m8_t vs2, size_t vl) {
  return __riscv_vfncvt_x_tumu(vm, vd, vs2, vl);
}

vuint16mf4_t test_vfncvt_xu_f_w_u16mf4_tumu(vbool64_t vm, vuint16mf4_t vd,
                                            vfloat32mf2_t vs2, size_t vl) {
  return __riscv_vfncvt_xu_tumu(vm, vd, vs2, vl);
}

vuint16mf2_t test_vfncvt_xu_f_w_u16mf2_tumu(vbool32_t vm, vuint16mf2_t vd,
                                            vfloat32m1_t vs2, size_t vl) {
  return __riscv_vfncvt_xu_tumu(vm, vd, vs2, vl);
}

vuint16m1_t test_vfncvt_xu_f_w_u16m1_tumu(vbool16_t vm, vuint16m1_t vd,
                                          vfloat32m2_t vs2, size_t vl) {
  return __riscv_vfncvt_xu_tumu(vm, vd, vs2, vl);
}

vuint16m2_t test_vfncvt_xu_f_w_u16m2_tumu(vbool8_t vm, vuint16m2_t vd,
                                          vfloat32m4_t vs2, size_t vl) {
  return __riscv_vfncvt_xu_tumu(vm, vd, vs2, vl);
}

vuint16m4_t test_vfncvt_xu_f_w_u16m4_tumu(vbool4_t vm, vuint16m4_t vd,
                                          vfloat32m8_t vs2, size_t vl) {
  return __riscv_vfncvt_xu_tumu(vm, vd, vs2, vl);
}

vint32mf2_t test_vfncvt_x_f_w_i32mf2_tumu(vbool64_t vm, vint32mf2_t vd,
                                          vfloat64m1_t vs2, size_t vl) {
  return __riscv_vfncvt_x_tumu(vm, vd, vs2, vl);
}

vint32m1_t test_vfncvt_x_f_w_i32m1_tumu(vbool32_t vm, vint32m1_t vd,
                                        vfloat64m2_t vs2, size_t vl) {
  return __riscv_vfncvt_x_tumu(vm, vd, vs2, vl);
}

vint32m2_t test_vfncvt_x_f_w_i32m2_tumu(vbool16_t vm, vint32m2_t vd,
                                        vfloat64m4_t vs2, size_t vl) {
  return __riscv_vfncvt_x_tumu(vm, vd, vs2, vl);
}

vint32m4_t test_vfncvt_x_f_w_i32m4_tumu(vbool8_t vm, vint32m4_t vd,
                                        vfloat64m8_t vs2, size_t vl) {
  return __riscv_vfncvt_x_tumu(vm, vd, vs2, vl);
}

vuint32mf2_t test_vfncvt_xu_f_w_u32mf2_tumu(vbool64_t vm, vuint32mf2_t vd,
                                            vfloat64m1_t vs2, size_t vl) {
  return __riscv_vfncvt_xu_tumu(vm, vd, vs2, vl);
}

vuint32m1_t test_vfncvt_xu_f_w_u32m1_tumu(vbool32_t vm, vuint32m1_t vd,
                                          vfloat64m2_t vs2, size_t vl) {
  return __riscv_vfncvt_xu_tumu(vm, vd, vs2, vl);
}

vuint32m2_t test_vfncvt_xu_f_w_u32m2_tumu(vbool16_t vm, vuint32m2_t vd,
                                          vfloat64m4_t vs2, size_t vl) {
  return __riscv_vfncvt_xu_tumu(vm, vd, vs2, vl);
}

vuint32m4_t test_vfncvt_xu_f_w_u32m4_tumu(vbool8_t vm, vuint32m4_t vd,
                                          vfloat64m8_t vs2, size_t vl) {
  return __riscv_vfncvt_xu_tumu(vm, vd, vs2, vl);
}

vfloat32mf2_t test_vfncvt_f_x_w_f32mf2_tumu(vbool64_t vm, vfloat32mf2_t vd,
                                            vint64m1_t vs2, size_t vl) {
  return __riscv_vfncvt_f_tumu(vm, vd, vs2, vl);
}

vfloat32m1_t test_vfncvt_f_x_w_f32m1_tumu(vbool32_t vm, vfloat32m1_t vd,
                                          vint64m2_t vs2, size_t vl) {
  return __riscv_vfncvt_f_tumu(vm, vd, vs2, vl);
}

vfloat32m2_t test_vfncvt_f_x_w_f32m2_tumu(vbool16_t vm, vfloat32m2_t vd,
                                          vint64m4_t vs2, size_t vl) {
  return __riscv_vfncvt_f_tumu(vm, vd, vs2, vl);
}

vfloat32m4_t test_vfncvt_f_x_w_f32m4_tumu(vbool8_t vm, vfloat32m4_t vd,
                                          vint64m8_t vs2, size_t vl) {
  return __riscv_vfncvt_f_tumu(vm, vd, vs2, vl);
}

vfloat32mf2_t test_vfncvt_f_xu_w_f32mf2_tumu(vbool64_t vm, vfloat32mf2_t vd,
                                             vuint64m1_t vs2, size_t vl) {
  return __riscv_vfncvt_f_tumu(vm, vd, vs2, vl);
}

vfloat32m1_t test_vfncvt_f_xu_w_f32m1_tumu(vbool32_t vm, vfloat32m1_t vd,
                                           vuint64m2_t vs2, size_t vl) {
  return __riscv_vfncvt_f_tumu(vm, vd, vs2, vl);
}

vfloat32m2_t test_vfncvt_f_xu_w_f32m2_tumu(vbool16_t vm, vfloat32m2_t vd,
                                           vuint64m4_t vs2, size_t vl) {
  return __riscv_vfncvt_f_tumu(vm, vd, vs2, vl);
}

vfloat32m4_t test_vfncvt_f_xu_w_f32m4_tumu(vbool8_t vm, vfloat32m4_t vd,
                                           vuint64m8_t vs2, size_t vl) {
  return __riscv_vfncvt_f_tumu(vm, vd, vs2, vl);
}

vfloat32mf2_t test_vfncvt_f_f_w_f32mf2_tumu(vbool64_t vm, vfloat32mf2_t vd,
                                            vfloat64m1_t vs2, size_t vl) {
  return __riscv_vfncvt_f_tumu(vm, vd, vs2, vl);
}

vfloat32m1_t test_vfncvt_f_f_w_f32m1_tumu(vbool32_t vm, vfloat32m1_t vd,
                                          vfloat64m2_t vs2, size_t vl) {
  return __riscv_vfncvt_f_tumu(vm, vd, vs2, vl);
}

vfloat32m2_t test_vfncvt_f_f_w_f32m2_tumu(vbool16_t vm, vfloat32m2_t vd,
                                          vfloat64m4_t vs2, size_t vl) {
  return __riscv_vfncvt_f_tumu(vm, vd, vs2, vl);
}

vfloat32m4_t test_vfncvt_f_f_w_f32m4_tumu(vbool8_t vm, vfloat32m4_t vd,
                                          vfloat64m8_t vs2, size_t vl) {
  return __riscv_vfncvt_f_tumu(vm, vd, vs2, vl);
}

vint16mf4_t test_vfncvt_x_f_w_i16mf4_mu(vbool64_t vm, vint16mf4_t vd,
                                        vfloat32mf2_t vs2, size_t vl) {
  return __riscv_vfncvt_x_mu(vm, vd, vs2, vl);
}

vint16mf2_t test_vfncvt_x_f_w_i16mf2_mu(vbool32_t vm, vint16mf2_t vd,
                                        vfloat32m1_t vs2, size_t vl) {
  return __riscv_vfncvt_x_mu(vm, vd, vs2, vl);
}

vint16m1_t test_vfncvt_x_f_w_i16m1_mu(vbool16_t vm, vint16m1_t vd,
                                      vfloat32m2_t vs2, size_t vl) {
  return __riscv_vfncvt_x_mu(vm, vd, vs2, vl);
}

vint16m2_t test_vfncvt_x_f_w_i16m2_mu(vbool8_t vm, vint16m2_t vd,
                                      vfloat32m4_t vs2, size_t vl) {
  return __riscv_vfncvt_x_mu(vm, vd, vs2, vl);
}

vint16m4_t test_vfncvt_x_f_w_i16m4_mu(vbool4_t vm, vint16m4_t vd,
                                      vfloat32m8_t vs2, size_t vl) {
  return __riscv_vfncvt_x_mu(vm, vd, vs2, vl);
}

vuint16mf4_t test_vfncvt_xu_f_w_u16mf4_mu(vbool64_t vm, vuint16mf4_t vd,
                                          vfloat32mf2_t vs2, size_t vl) {
  return __riscv_vfncvt_xu_mu(vm, vd, vs2, vl);
}

vuint16mf2_t test_vfncvt_xu_f_w_u16mf2_mu(vbool32_t vm, vuint16mf2_t vd,
                                          vfloat32m1_t vs2, size_t vl) {
  return __riscv_vfncvt_xu_mu(vm, vd, vs2, vl);
}

vuint16m1_t test_vfncvt_xu_f_w_u16m1_mu(vbool16_t vm, vuint16m1_t vd,
                                        vfloat32m2_t vs2, size_t vl) {
  return __riscv_vfncvt_xu_mu(vm, vd, vs2, vl);
}

vuint16m2_t test_vfncvt_xu_f_w_u16m2_mu(vbool8_t vm, vuint16m2_t vd,
                                        vfloat32m4_t vs2, size_t vl) {
  return __riscv_vfncvt_xu_mu(vm, vd, vs2, vl);
}

vuint16m4_t test_vfncvt_xu_f_w_u16m4_mu(vbool4_t vm, vuint16m4_t vd,
                                        vfloat32m8_t vs2, size_t vl) {
  return __riscv_vfncvt_xu_mu(vm, vd, vs2, vl);
}

vint32mf2_t test_vfncvt_x_f_w_i32mf2_mu(vbool64_t vm, vint32mf2_t vd,
                                        vfloat64m1_t vs2, size_t vl) {
  return __riscv_vfncvt_x_mu(vm, vd, vs2, vl);
}

vint32m1_t test_vfncvt_x_f_w_i32m1_mu(vbool32_t vm, vint32m1_t vd,
                                      vfloat64m2_t vs2, size_t vl) {
  return __riscv_vfncvt_x_mu(vm, vd, vs2, vl);
}

vint32m2_t test_vfncvt_x_f_w_i32m2_mu(vbool16_t vm, vint32m2_t vd,
                                      vfloat64m4_t vs2, size_t vl) {
  return __riscv_vfncvt_x_mu(vm, vd, vs2, vl);
}

vint32m4_t test_vfncvt_x_f_w_i32m4_mu(vbool8_t vm, vint32m4_t vd,
                                      vfloat64m8_t vs2, size_t vl) {
  return __riscv_vfncvt_x_mu(vm, vd, vs2, vl);
}

vuint32mf2_t test_vfncvt_xu_f_w_u32mf2_mu(vbool64_t vm, vuint32mf2_t vd,
                                          vfloat64m1_t vs2, size_t vl) {
  return __riscv_vfncvt_xu_mu(vm, vd, vs2, vl);
}

vuint32m1_t test_vfncvt_xu_f_w_u32m1_mu(vbool32_t vm, vuint32m1_t vd,
                                        vfloat64m2_t vs2, size_t vl) {
  return __riscv_vfncvt_xu_mu(vm, vd, vs2, vl);
}

vuint32m2_t test_vfncvt_xu_f_w_u32m2_mu(vbool16_t vm, vuint32m2_t vd,
                                        vfloat64m4_t vs2, size_t vl) {
  return __riscv_vfncvt_xu_mu(vm, vd, vs2, vl);
}

vuint32m4_t test_vfncvt_xu_f_w_u32m4_mu(vbool8_t vm, vuint32m4_t vd,
                                        vfloat64m8_t vs2, size_t vl) {
  return __riscv_vfncvt_xu_mu(vm, vd, vs2, vl);
}

vfloat32mf2_t test_vfncvt_f_x_w_f32mf2_mu(vbool64_t vm, vfloat32mf2_t vd,
                                          vint64m1_t vs2, size_t vl) {
  return __riscv_vfncvt_f_mu(vm, vd, vs2, vl);
}

vfloat32m1_t test_vfncvt_f_x_w_f32m1_mu(vbool32_t vm, vfloat32m1_t vd,
                                        vint64m2_t vs2, size_t vl) {
  return __riscv_vfncvt_f_mu(vm, vd, vs2, vl);
}

vfloat32m2_t test_vfncvt_f_x_w_f32m2_mu(vbool16_t vm, vfloat32m2_t vd,
                                        vint64m4_t vs2, size_t vl) {
  return __riscv_vfncvt_f_mu(vm, vd, vs2, vl);
}

vfloat32m4_t test_vfncvt_f_x_w_f32m4_mu(vbool8_t vm, vfloat32m4_t vd,
                                        vint64m8_t vs2, size_t vl) {
  return __riscv_vfncvt_f_mu(vm, vd, vs2, vl);
}

vfloat32mf2_t test_vfncvt_f_xu_w_f32mf2_mu(vbool64_t vm, vfloat32mf2_t vd,
                                           vuint64m1_t vs2, size_t vl) {
  return __riscv_vfncvt_f_mu(vm, vd, vs2, vl);
}

vfloat32m1_t test_vfncvt_f_xu_w_f32m1_mu(vbool32_t vm, vfloat32m1_t vd,
                                         vuint64m2_t vs2, size_t vl) {
  return __riscv_vfncvt_f_mu(vm, vd, vs2, vl);
}

vfloat32m2_t test_vfncvt_f_xu_w_f32m2_mu(vbool16_t vm, vfloat32m2_t vd,
                                         vuint64m4_t vs2, size_t vl) {
  return __riscv_vfncvt_f_mu(vm, vd, vs2, vl);
}

vfloat32m4_t test_vfncvt_f_xu_w_f32m4_mu(vbool8_t vm, vfloat32m4_t vd,
                                         vuint64m8_t vs2, size_t vl) {
  return __riscv_vfncvt_f_mu(vm, vd, vs2, vl);
}

vfloat32mf2_t test_vfncvt_f_f_w_f32mf2_mu(vbool64_t vm, vfloat32mf2_t vd,
                                          vfloat64m1_t vs2, size_t vl) {
  return __riscv_vfncvt_f_mu(vm, vd, vs2, vl);
}

vfloat32m1_t test_vfncvt_f_f_w_f32m1_mu(vbool32_t vm, vfloat32m1_t vd,
                                        vfloat64m2_t vs2, size_t vl) {
  return __riscv_vfncvt_f_mu(vm, vd, vs2, vl);
}

vfloat32m2_t test_vfncvt_f_f_w_f32m2_mu(vbool16_t vm, vfloat32m2_t vd,
                                        vfloat64m4_t vs2, size_t vl) {
  return __riscv_vfncvt_f_mu(vm, vd, vs2, vl);
}

vfloat32m4_t test_vfncvt_f_f_w_f32m4_mu(vbool8_t vm, vfloat32m4_t vd,
                                        vfloat64m8_t vs2, size_t vl) {
  return __riscv_vfncvt_f_mu(vm, vd, vs2, vl);
}

vint16mf4_t test_vfncvt_x_f_w_i16mf4_rm_tu(vint16mf4_t vd, vfloat32mf2_t vs2,
                                           size_t vl) {
  return __riscv_vfncvt_x_tu(vd, vs2, __RISCV_FRM_RNE, vl);
}

vint16mf2_t test_vfncvt_x_f_w_i16mf2_rm_tu(vint16mf2_t vd, vfloat32m1_t vs2,
                                           size_t vl) {
  return __riscv_vfncvt_x_tu(vd, vs2, __RISCV_FRM_RNE, vl);
}

vint16m1_t test_vfncvt_x_f_w_i16m1_rm_tu(vint16m1_t vd, vfloat32m2_t vs2,
                                         size_t vl) {
  return __riscv_vfncvt_x_tu(vd, vs2, __RISCV_FRM_RNE, vl);
}

vint16m2_t test_vfncvt_x_f_w_i16m2_rm_tu(vint16m2_t vd, vfloat32m4_t vs2,
                                         size_t vl) {
  return __riscv_vfncvt_x_tu(vd, vs2, __RISCV_FRM_RNE, vl);
}

vint16m4_t test_vfncvt_x_f_w_i16m4_rm_tu(vint16m4_t vd, vfloat32m8_t vs2,
                                         size_t vl) {
  return __riscv_vfncvt_x_tu(vd, vs2, __RISCV_FRM_RNE, vl);
}

vuint16mf4_t test_vfncvt_xu_f_w_u16mf4_rm_tu(vuint16mf4_t vd, vfloat32mf2_t vs2,
                                             size_t vl) {
  return __riscv_vfncvt_xu_tu(vd, vs2, __RISCV_FRM_RNE, vl);
}

vuint16mf2_t test_vfncvt_xu_f_w_u16mf2_rm_tu(vuint16mf2_t vd, vfloat32m1_t vs2,
                                             size_t vl) {
  return __riscv_vfncvt_xu_tu(vd, vs2, __RISCV_FRM_RNE, vl);
}

vuint16m1_t test_vfncvt_xu_f_w_u16m1_rm_tu(vuint16m1_t vd, vfloat32m2_t vs2,
                                           size_t vl) {
  return __riscv_vfncvt_xu_tu(vd, vs2, __RISCV_FRM_RNE, vl);
}

vuint16m2_t test_vfncvt_xu_f_w_u16m2_rm_tu(vuint16m2_t vd, vfloat32m4_t vs2,
                                           size_t vl) {
  return __riscv_vfncvt_xu_tu(vd, vs2, __RISCV_FRM_RNE, vl);
}

vuint16m4_t test_vfncvt_xu_f_w_u16m4_rm_tu(vuint16m4_t vd, vfloat32m8_t vs2,
                                           size_t vl) {
  return __riscv_vfncvt_xu_tu(vd, vs2, __RISCV_FRM_RNE, vl);
}

vint32mf2_t test_vfncvt_x_f_w_i32mf2_rm_tu(vint32mf2_t vd, vfloat64m1_t vs2,
                                           size_t vl) {
  return __riscv_vfncvt_x_tu(vd, vs2, __RISCV_FRM_RNE, vl);
}

vint32m1_t test_vfncvt_x_f_w_i32m1_rm_tu(vint32m1_t vd, vfloat64m2_t vs2,
                                         size_t vl) {
  return __riscv_vfncvt_x_tu(vd, vs2, __RISCV_FRM_RNE, vl);
}

vint32m2_t test_vfncvt_x_f_w_i32m2_rm_tu(vint32m2_t vd, vfloat64m4_t vs2,
                                         size_t vl) {
  return __riscv_vfncvt_x_tu(vd, vs2, __RISCV_FRM_RNE, vl);
}

vint32m4_t test_vfncvt_x_f_w_i32m4_rm_tu(vint32m4_t vd, vfloat64m8_t vs2,
                                         size_t vl) {
  return __riscv_vfncvt_x_tu(vd, vs2, __RISCV_FRM_RNE, vl);
}

vuint32mf2_t test_vfncvt_xu_f_w_u32mf2_rm_tu(vuint32mf2_t vd, vfloat64m1_t vs2,
                                             size_t vl) {
  return __riscv_vfncvt_xu_tu(vd, vs2, __RISCV_FRM_RNE, vl);
}

vuint32m1_t test_vfncvt_xu_f_w_u32m1_rm_tu(vuint32m1_t vd, vfloat64m2_t vs2,
                                           size_t vl) {
  return __riscv_vfncvt_xu_tu(vd, vs2, __RISCV_FRM_RNE, vl);
}

vuint32m2_t test_vfncvt_xu_f_w_u32m2_rm_tu(vuint32m2_t vd, vfloat64m4_t vs2,
                                           size_t vl) {
  return __riscv_vfncvt_xu_tu(vd, vs2, __RISCV_FRM_RNE, vl);
}

vuint32m4_t test_vfncvt_xu_f_w_u32m4_rm_tu(vuint32m4_t vd, vfloat64m8_t vs2,
                                           size_t vl) {
  return __riscv_vfncvt_xu_tu(vd, vs2, __RISCV_FRM_RNE, vl);
}

vfloat32mf2_t test_vfncvt_f_x_w_f32mf2_rm_tu(vfloat32mf2_t vd, vint64m1_t vs2,
                                             size_t vl) {
  return __riscv_vfncvt_f_tu(vd, vs2, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfncvt_f_x_w_f32m1_rm_tu(vfloat32m1_t vd, vint64m2_t vs2,
                                           size_t vl) {
  return __riscv_vfncvt_f_tu(vd, vs2, __RISCV_FRM_RNE, vl);
}

vfloat32m2_t test_vfncvt_f_x_w_f32m2_rm_tu(vfloat32m2_t vd, vint64m4_t vs2,
                                           size_t vl) {
  return __riscv_vfncvt_f_tu(vd, vs2, __RISCV_FRM_RNE, vl);
}

vfloat32m4_t test_vfncvt_f_x_w_f32m4_rm_tu(vfloat32m4_t vd, vint64m8_t vs2,
                                           size_t vl) {
  return __riscv_vfncvt_f_tu(vd, vs2, __RISCV_FRM_RNE, vl);
}

vfloat32mf2_t test_vfncvt_f_xu_w_f32mf2_rm_tu(vfloat32mf2_t vd, vuint64m1_t vs2,
                                              size_t vl) {
  return __riscv_vfncvt_f_tu(vd, vs2, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfncvt_f_xu_w_f32m1_rm_tu(vfloat32m1_t vd, vuint64m2_t vs2,
                                            size_t vl) {
  return __riscv_vfncvt_f_tu(vd, vs2, __RISCV_FRM_RNE, vl);
}

vfloat32m2_t test_vfncvt_f_xu_w_f32m2_rm_tu(vfloat32m2_t vd, vuint64m4_t vs2,
                                            size_t vl) {
  return __riscv_vfncvt_f_tu(vd, vs2, __RISCV_FRM_RNE, vl);
}

vfloat32m4_t test_vfncvt_f_xu_w_f32m4_rm_tu(vfloat32m4_t vd, vuint64m8_t vs2,
                                            size_t vl) {
  return __riscv_vfncvt_f_tu(vd, vs2, __RISCV_FRM_RNE, vl);
}

vfloat32mf2_t test_vfncvt_f_f_w_f32mf2_rm_tu(vfloat32mf2_t vd, vfloat64m1_t vs2,
                                             size_t vl) {
  return __riscv_vfncvt_f_tu(vd, vs2, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfncvt_f_f_w_f32m1_rm_tu(vfloat32m1_t vd, vfloat64m2_t vs2,
                                           size_t vl) {
  return __riscv_vfncvt_f_tu(vd, vs2, __RISCV_FRM_RNE, vl);
}

vfloat32m2_t test_vfncvt_f_f_w_f32m2_rm_tu(vfloat32m2_t vd, vfloat64m4_t vs2,
                                           size_t vl) {
  return __riscv_vfncvt_f_tu(vd, vs2, __RISCV_FRM_RNE, vl);
}

vfloat32m4_t test_vfncvt_f_f_w_f32m4_rm_tu(vfloat32m4_t vd, vfloat64m8_t vs2,
                                           size_t vl) {
  return __riscv_vfncvt_f_tu(vd, vs2, __RISCV_FRM_RNE, vl);
}

vint16mf4_t test_vfncvt_x_f_w_i16mf4_rm_tum(vbool64_t vm, vint16mf4_t vd,
                                            vfloat32mf2_t vs2, size_t vl) {
  return __riscv_vfncvt_x_tum(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vint16mf2_t test_vfncvt_x_f_w_i16mf2_rm_tum(vbool32_t vm, vint16mf2_t vd,
                                            vfloat32m1_t vs2, size_t vl) {
  return __riscv_vfncvt_x_tum(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vint16m1_t test_vfncvt_x_f_w_i16m1_rm_tum(vbool16_t vm, vint16m1_t vd,
                                          vfloat32m2_t vs2, size_t vl) {
  return __riscv_vfncvt_x_tum(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vint16m2_t test_vfncvt_x_f_w_i16m2_rm_tum(vbool8_t vm, vint16m2_t vd,
                                          vfloat32m4_t vs2, size_t vl) {
  return __riscv_vfncvt_x_tum(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vint16m4_t test_vfncvt_x_f_w_i16m4_rm_tum(vbool4_t vm, vint16m4_t vd,
                                          vfloat32m8_t vs2, size_t vl) {
  return __riscv_vfncvt_x_tum(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vuint16mf4_t test_vfncvt_xu_f_w_u16mf4_rm_tum(vbool64_t vm, vuint16mf4_t vd,
                                              vfloat32mf2_t vs2, size_t vl) {
  return __riscv_vfncvt_xu_tum(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vuint16mf2_t test_vfncvt_xu_f_w_u16mf2_rm_tum(vbool32_t vm, vuint16mf2_t vd,
                                              vfloat32m1_t vs2, size_t vl) {
  return __riscv_vfncvt_xu_tum(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vuint16m1_t test_vfncvt_xu_f_w_u16m1_rm_tum(vbool16_t vm, vuint16m1_t vd,
                                            vfloat32m2_t vs2, size_t vl) {
  return __riscv_vfncvt_xu_tum(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vuint16m2_t test_vfncvt_xu_f_w_u16m2_rm_tum(vbool8_t vm, vuint16m2_t vd,
                                            vfloat32m4_t vs2, size_t vl) {
  return __riscv_vfncvt_xu_tum(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vuint16m4_t test_vfncvt_xu_f_w_u16m4_rm_tum(vbool4_t vm, vuint16m4_t vd,
                                            vfloat32m8_t vs2, size_t vl) {
  return __riscv_vfncvt_xu_tum(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vint32mf2_t test_vfncvt_x_f_w_i32mf2_rm_tum(vbool64_t vm, vint32mf2_t vd,
                                            vfloat64m1_t vs2, size_t vl) {
  return __riscv_vfncvt_x_tum(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vint32m1_t test_vfncvt_x_f_w_i32m1_rm_tum(vbool32_t vm, vint32m1_t vd,
                                          vfloat64m2_t vs2, size_t vl) {
  return __riscv_vfncvt_x_tum(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vint32m2_t test_vfncvt_x_f_w_i32m2_rm_tum(vbool16_t vm, vint32m2_t vd,
                                          vfloat64m4_t vs2, size_t vl) {
  return __riscv_vfncvt_x_tum(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vint32m4_t test_vfncvt_x_f_w_i32m4_rm_tum(vbool8_t vm, vint32m4_t vd,
                                          vfloat64m8_t vs2, size_t vl) {
  return __riscv_vfncvt_x_tum(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vuint32mf2_t test_vfncvt_xu_f_w_u32mf2_rm_tum(vbool64_t vm, vuint32mf2_t vd,
                                              vfloat64m1_t vs2, size_t vl) {
  return __riscv_vfncvt_xu_tum(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vuint32m1_t test_vfncvt_xu_f_w_u32m1_rm_tum(vbool32_t vm, vuint32m1_t vd,
                                            vfloat64m2_t vs2, size_t vl) {
  return __riscv_vfncvt_xu_tum(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vuint32m2_t test_vfncvt_xu_f_w_u32m2_rm_tum(vbool16_t vm, vuint32m2_t vd,
                                            vfloat64m4_t vs2, size_t vl) {
  return __riscv_vfncvt_xu_tum(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vuint32m4_t test_vfncvt_xu_f_w_u32m4_rm_tum(vbool8_t vm, vuint32m4_t vd,
                                            vfloat64m8_t vs2, size_t vl) {
  return __riscv_vfncvt_xu_tum(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vfloat32mf2_t test_vfncvt_f_x_w_f32mf2_rm_tum(vbool64_t vm, vfloat32mf2_t vd,
                                              vint64m1_t vs2, size_t vl) {
  return __riscv_vfncvt_f_tum(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfncvt_f_x_w_f32m1_rm_tum(vbool32_t vm, vfloat32m1_t vd,
                                            vint64m2_t vs2, size_t vl) {
  return __riscv_vfncvt_f_tum(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vfloat32m2_t test_vfncvt_f_x_w_f32m2_rm_tum(vbool16_t vm, vfloat32m2_t vd,
                                            vint64m4_t vs2, size_t vl) {
  return __riscv_vfncvt_f_tum(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vfloat32m4_t test_vfncvt_f_x_w_f32m4_rm_tum(vbool8_t vm, vfloat32m4_t vd,
                                            vint64m8_t vs2, size_t vl) {
  return __riscv_vfncvt_f_tum(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vfloat32mf2_t test_vfncvt_f_xu_w_f32mf2_rm_tum(vbool64_t vm, vfloat32mf2_t vd,
                                               vuint64m1_t vs2, size_t vl) {
  return __riscv_vfncvt_f_tum(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfncvt_f_xu_w_f32m1_rm_tum(vbool32_t vm, vfloat32m1_t vd,
                                             vuint64m2_t vs2, size_t vl) {
  return __riscv_vfncvt_f_tum(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vfloat32m2_t test_vfncvt_f_xu_w_f32m2_rm_tum(vbool16_t vm, vfloat32m2_t vd,
                                             vuint64m4_t vs2, size_t vl) {
  return __riscv_vfncvt_f_tum(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vfloat32m4_t test_vfncvt_f_xu_w_f32m4_rm_tum(vbool8_t vm, vfloat32m4_t vd,
                                             vuint64m8_t vs2, size_t vl) {
  return __riscv_vfncvt_f_tum(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vfloat32mf2_t test_vfncvt_f_f_w_f32mf2_rm_tum(vbool64_t vm, vfloat32mf2_t vd,
                                              vfloat64m1_t vs2, size_t vl) {
  return __riscv_vfncvt_f_tum(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfncvt_f_f_w_f32m1_rm_tum(vbool32_t vm, vfloat32m1_t vd,
                                            vfloat64m2_t vs2, size_t vl) {
  return __riscv_vfncvt_f_tum(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vfloat32m2_t test_vfncvt_f_f_w_f32m2_rm_tum(vbool16_t vm, vfloat32m2_t vd,
                                            vfloat64m4_t vs2, size_t vl) {
  return __riscv_vfncvt_f_tum(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vfloat32m4_t test_vfncvt_f_f_w_f32m4_rm_tum(vbool8_t vm, vfloat32m4_t vd,
                                            vfloat64m8_t vs2, size_t vl) {
  return __riscv_vfncvt_f_tum(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vint16mf4_t test_vfncvt_x_f_w_i16mf4_rm_tumu(vbool64_t vm, vint16mf4_t vd,
                                             vfloat32mf2_t vs2, size_t vl) {
  return __riscv_vfncvt_x_tumu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vint16mf2_t test_vfncvt_x_f_w_i16mf2_rm_tumu(vbool32_t vm, vint16mf2_t vd,
                                             vfloat32m1_t vs2, size_t vl) {
  return __riscv_vfncvt_x_tumu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vint16m1_t test_vfncvt_x_f_w_i16m1_rm_tumu(vbool16_t vm, vint16m1_t vd,
                                           vfloat32m2_t vs2, size_t vl) {
  return __riscv_vfncvt_x_tumu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vint16m2_t test_vfncvt_x_f_w_i16m2_rm_tumu(vbool8_t vm, vint16m2_t vd,
                                           vfloat32m4_t vs2, size_t vl) {
  return __riscv_vfncvt_x_tumu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vint16m4_t test_vfncvt_x_f_w_i16m4_rm_tumu(vbool4_t vm, vint16m4_t vd,
                                           vfloat32m8_t vs2, size_t vl) {
  return __riscv_vfncvt_x_tumu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vuint16mf4_t test_vfncvt_xu_f_w_u16mf4_rm_tumu(vbool64_t vm, vuint16mf4_t vd,
                                               vfloat32mf2_t vs2, size_t vl) {
  return __riscv_vfncvt_xu_tumu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vuint16mf2_t test_vfncvt_xu_f_w_u16mf2_rm_tumu(vbool32_t vm, vuint16mf2_t vd,
                                               vfloat32m1_t vs2, size_t vl) {
  return __riscv_vfncvt_xu_tumu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vuint16m1_t test_vfncvt_xu_f_w_u16m1_rm_tumu(vbool16_t vm, vuint16m1_t vd,
                                             vfloat32m2_t vs2, size_t vl) {
  return __riscv_vfncvt_xu_tumu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vuint16m2_t test_vfncvt_xu_f_w_u16m2_rm_tumu(vbool8_t vm, vuint16m2_t vd,
                                             vfloat32m4_t vs2, size_t vl) {
  return __riscv_vfncvt_xu_tumu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vuint16m4_t test_vfncvt_xu_f_w_u16m4_rm_tumu(vbool4_t vm, vuint16m4_t vd,
                                             vfloat32m8_t vs2, size_t vl) {
  return __riscv_vfncvt_xu_tumu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vint32mf2_t test_vfncvt_x_f_w_i32mf2_rm_tumu(vbool64_t vm, vint32mf2_t vd,
                                             vfloat64m1_t vs2, size_t vl) {
  return __riscv_vfncvt_x_tumu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vint32m1_t test_vfncvt_x_f_w_i32m1_rm_tumu(vbool32_t vm, vint32m1_t vd,
                                           vfloat64m2_t vs2, size_t vl) {
  return __riscv_vfncvt_x_tumu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vint32m2_t test_vfncvt_x_f_w_i32m2_rm_tumu(vbool16_t vm, vint32m2_t vd,
                                           vfloat64m4_t vs2, size_t vl) {
  return __riscv_vfncvt_x_tumu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vint32m4_t test_vfncvt_x_f_w_i32m4_rm_tumu(vbool8_t vm, vint32m4_t vd,
                                           vfloat64m8_t vs2, size_t vl) {
  return __riscv_vfncvt_x_tumu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vuint32mf2_t test_vfncvt_xu_f_w_u32mf2_rm_tumu(vbool64_t vm, vuint32mf2_t vd,
                                               vfloat64m1_t vs2, size_t vl) {
  return __riscv_vfncvt_xu_tumu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vuint32m1_t test_vfncvt_xu_f_w_u32m1_rm_tumu(vbool32_t vm, vuint32m1_t vd,
                                             vfloat64m2_t vs2, size_t vl) {
  return __riscv_vfncvt_xu_tumu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vuint32m2_t test_vfncvt_xu_f_w_u32m2_rm_tumu(vbool16_t vm, vuint32m2_t vd,
                                             vfloat64m4_t vs2, size_t vl) {
  return __riscv_vfncvt_xu_tumu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vuint32m4_t test_vfncvt_xu_f_w_u32m4_rm_tumu(vbool8_t vm, vuint32m4_t vd,
                                             vfloat64m8_t vs2, size_t vl) {
  return __riscv_vfncvt_xu_tumu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vfloat32mf2_t test_vfncvt_f_x_w_f32mf2_rm_tumu(vbool64_t vm, vfloat32mf2_t vd,
                                               vint64m1_t vs2, size_t vl) {
  return __riscv_vfncvt_f_tumu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfncvt_f_x_w_f32m1_rm_tumu(vbool32_t vm, vfloat32m1_t vd,
                                             vint64m2_t vs2, size_t vl) {
  return __riscv_vfncvt_f_tumu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vfloat32m2_t test_vfncvt_f_x_w_f32m2_rm_tumu(vbool16_t vm, vfloat32m2_t vd,
                                             vint64m4_t vs2, size_t vl) {
  return __riscv_vfncvt_f_tumu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vfloat32m4_t test_vfncvt_f_x_w_f32m4_rm_tumu(vbool8_t vm, vfloat32m4_t vd,
                                             vint64m8_t vs2, size_t vl) {
  return __riscv_vfncvt_f_tumu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vfloat32mf2_t test_vfncvt_f_xu_w_f32mf2_rm_tumu(vbool64_t vm, vfloat32mf2_t vd,
                                                vuint64m1_t vs2, size_t vl) {
  return __riscv_vfncvt_f_tumu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfncvt_f_xu_w_f32m1_rm_tumu(vbool32_t vm, vfloat32m1_t vd,
                                              vuint64m2_t vs2, size_t vl) {
  return __riscv_vfncvt_f_tumu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vfloat32m2_t test_vfncvt_f_xu_w_f32m2_rm_tumu(vbool16_t vm, vfloat32m2_t vd,
                                              vuint64m4_t vs2, size_t vl) {
  return __riscv_vfncvt_f_tumu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vfloat32m4_t test_vfncvt_f_xu_w_f32m4_rm_tumu(vbool8_t vm, vfloat32m4_t vd,
                                              vuint64m8_t vs2, size_t vl) {
  return __riscv_vfncvt_f_tumu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vfloat32mf2_t test_vfncvt_f_f_w_f32mf2_rm_tumu(vbool64_t vm, vfloat32mf2_t vd,
                                               vfloat64m1_t vs2, size_t vl) {
  return __riscv_vfncvt_f_tumu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfncvt_f_f_w_f32m1_rm_tumu(vbool32_t vm, vfloat32m1_t vd,
                                             vfloat64m2_t vs2, size_t vl) {
  return __riscv_vfncvt_f_tumu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vfloat32m2_t test_vfncvt_f_f_w_f32m2_rm_tumu(vbool16_t vm, vfloat32m2_t vd,
                                             vfloat64m4_t vs2, size_t vl) {
  return __riscv_vfncvt_f_tumu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vfloat32m4_t test_vfncvt_f_f_w_f32m4_rm_tumu(vbool8_t vm, vfloat32m4_t vd,
                                             vfloat64m8_t vs2, size_t vl) {
  return __riscv_vfncvt_f_tumu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vint16mf4_t test_vfncvt_x_f_w_i16mf4_rm_mu(vbool64_t vm, vint16mf4_t vd,
                                           vfloat32mf2_t vs2, size_t vl) {
  return __riscv_vfncvt_x_mu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vint16mf2_t test_vfncvt_x_f_w_i16mf2_rm_mu(vbool32_t vm, vint16mf2_t vd,
                                           vfloat32m1_t vs2, size_t vl) {
  return __riscv_vfncvt_x_mu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vint16m1_t test_vfncvt_x_f_w_i16m1_rm_mu(vbool16_t vm, vint16m1_t vd,
                                         vfloat32m2_t vs2, size_t vl) {
  return __riscv_vfncvt_x_mu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vint16m2_t test_vfncvt_x_f_w_i16m2_rm_mu(vbool8_t vm, vint16m2_t vd,
                                         vfloat32m4_t vs2, size_t vl) {
  return __riscv_vfncvt_x_mu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vint16m4_t test_vfncvt_x_f_w_i16m4_rm_mu(vbool4_t vm, vint16m4_t vd,
                                         vfloat32m8_t vs2, size_t vl) {
  return __riscv_vfncvt_x_mu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vuint16mf4_t test_vfncvt_xu_f_w_u16mf4_rm_mu(vbool64_t vm, vuint16mf4_t vd,
                                             vfloat32mf2_t vs2, size_t vl) {
  return __riscv_vfncvt_xu_mu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vuint16mf2_t test_vfncvt_xu_f_w_u16mf2_rm_mu(vbool32_t vm, vuint16mf2_t vd,
                                             vfloat32m1_t vs2, size_t vl) {
  return __riscv_vfncvt_xu_mu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vuint16m1_t test_vfncvt_xu_f_w_u16m1_rm_mu(vbool16_t vm, vuint16m1_t vd,
                                           vfloat32m2_t vs2, size_t vl) {
  return __riscv_vfncvt_xu_mu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vuint16m2_t test_vfncvt_xu_f_w_u16m2_rm_mu(vbool8_t vm, vuint16m2_t vd,
                                           vfloat32m4_t vs2, size_t vl) {
  return __riscv_vfncvt_xu_mu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vuint16m4_t test_vfncvt_xu_f_w_u16m4_rm_mu(vbool4_t vm, vuint16m4_t vd,
                                           vfloat32m8_t vs2, size_t vl) {
  return __riscv_vfncvt_xu_mu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vint32mf2_t test_vfncvt_x_f_w_i32mf2_rm_mu(vbool64_t vm, vint32mf2_t vd,
                                           vfloat64m1_t vs2, size_t vl) {
  return __riscv_vfncvt_x_mu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vint32m1_t test_vfncvt_x_f_w_i32m1_rm_mu(vbool32_t vm, vint32m1_t vd,
                                         vfloat64m2_t vs2, size_t vl) {
  return __riscv_vfncvt_x_mu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vint32m2_t test_vfncvt_x_f_w_i32m2_rm_mu(vbool16_t vm, vint32m2_t vd,
                                         vfloat64m4_t vs2, size_t vl) {
  return __riscv_vfncvt_x_mu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vint32m4_t test_vfncvt_x_f_w_i32m4_rm_mu(vbool8_t vm, vint32m4_t vd,
                                         vfloat64m8_t vs2, size_t vl) {
  return __riscv_vfncvt_x_mu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vuint32mf2_t test_vfncvt_xu_f_w_u32mf2_rm_mu(vbool64_t vm, vuint32mf2_t vd,
                                             vfloat64m1_t vs2, size_t vl) {
  return __riscv_vfncvt_xu_mu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vuint32m1_t test_vfncvt_xu_f_w_u32m1_rm_mu(vbool32_t vm, vuint32m1_t vd,
                                           vfloat64m2_t vs2, size_t vl) {
  return __riscv_vfncvt_xu_mu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vuint32m2_t test_vfncvt_xu_f_w_u32m2_rm_mu(vbool16_t vm, vuint32m2_t vd,
                                           vfloat64m4_t vs2, size_t vl) {
  return __riscv_vfncvt_xu_mu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vuint32m4_t test_vfncvt_xu_f_w_u32m4_rm_mu(vbool8_t vm, vuint32m4_t vd,
                                           vfloat64m8_t vs2, size_t vl) {
  return __riscv_vfncvt_xu_mu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vfloat32mf2_t test_vfncvt_f_x_w_f32mf2_rm_mu(vbool64_t vm, vfloat32mf2_t vd,
                                             vint64m1_t vs2, size_t vl) {
  return __riscv_vfncvt_f_mu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfncvt_f_x_w_f32m1_rm_mu(vbool32_t vm, vfloat32m1_t vd,
                                           vint64m2_t vs2, size_t vl) {
  return __riscv_vfncvt_f_mu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vfloat32m2_t test_vfncvt_f_x_w_f32m2_rm_mu(vbool16_t vm, vfloat32m2_t vd,
                                           vint64m4_t vs2, size_t vl) {
  return __riscv_vfncvt_f_mu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vfloat32m4_t test_vfncvt_f_x_w_f32m4_rm_mu(vbool8_t vm, vfloat32m4_t vd,
                                           vint64m8_t vs2, size_t vl) {
  return __riscv_vfncvt_f_mu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vfloat32mf2_t test_vfncvt_f_xu_w_f32mf2_rm_mu(vbool64_t vm, vfloat32mf2_t vd,
                                              vuint64m1_t vs2, size_t vl) {
  return __riscv_vfncvt_f_mu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfncvt_f_xu_w_f32m1_rm_mu(vbool32_t vm, vfloat32m1_t vd,
                                            vuint64m2_t vs2, size_t vl) {
  return __riscv_vfncvt_f_mu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vfloat32m2_t test_vfncvt_f_xu_w_f32m2_rm_mu(vbool16_t vm, vfloat32m2_t vd,
                                            vuint64m4_t vs2, size_t vl) {
  return __riscv_vfncvt_f_mu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vfloat32m4_t test_vfncvt_f_xu_w_f32m4_rm_mu(vbool8_t vm, vfloat32m4_t vd,
                                            vuint64m8_t vs2, size_t vl) {
  return __riscv_vfncvt_f_mu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vfloat32mf2_t test_vfncvt_f_f_w_f32mf2_rm_mu(vbool64_t vm, vfloat32mf2_t vd,
                                             vfloat64m1_t vs2, size_t vl) {
  return __riscv_vfncvt_f_mu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfncvt_f_f_w_f32m1_rm_mu(vbool32_t vm, vfloat32m1_t vd,
                                           vfloat64m2_t vs2, size_t vl) {
  return __riscv_vfncvt_f_mu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vfloat32m2_t test_vfncvt_f_f_w_f32m2_rm_mu(vbool16_t vm, vfloat32m2_t vd,
                                           vfloat64m4_t vs2, size_t vl) {
  return __riscv_vfncvt_f_mu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vfloat32m4_t test_vfncvt_f_f_w_f32m4_rm_mu(vbool8_t vm, vfloat32m4_t vd,
                                           vfloat64m8_t vs2, size_t vl) {
  return __riscv_vfncvt_f_mu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}
