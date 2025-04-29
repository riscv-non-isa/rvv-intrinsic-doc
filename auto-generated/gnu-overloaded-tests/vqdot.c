/* { dg-do compile } */
/* { dg-options "-march=rv64gcv_zvfh -mabi=lp64d -Wno-psabi -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include <riscv_vector.h>

vint32mf2_t test_vqdot_vv_i32mf2(vint32mf2_t vd, vint8mf2_t vs2, vint8mf2_t vs1, size_t vl) {
  return __riscv_vqdot(vd, vs2, vs1, vl);
}

vint32mf2_t test_vqdot_vx_i32mf2(vint32mf2_t vd, vint8mf2_t vs2, uint32_t rs1, size_t vl) {
  return __riscv_vqdot(vd, vs2, rs1, vl);
}

vint32m1_t test_vqdot_vv_i32m1(vint32m1_t vd, vint8m1_t vs2, vint8m1_t vs1, size_t vl) {
  return __riscv_vqdot(vd, vs2, vs1, vl);
}

vint32m1_t test_vqdot_vx_i32m1(vint32m1_t vd, vint8m1_t vs2, uint32_t rs1, size_t vl) {
  return __riscv_vqdot(vd, vs2, rs1, vl);
}

vint32m2_t test_vqdot_vv_i32m2(vint32m2_t vd, vint8m2_t vs2, vint8m2_t vs1, size_t vl) {
  return __riscv_vqdot(vd, vs2, vs1, vl);
}

vint32m2_t test_vqdot_vx_i32m2(vint32m2_t vd, vint8m2_t vs2, uint32_t rs1, size_t vl) {
  return __riscv_vqdot(vd, vs2, rs1, vl);
}

vint32m4_t test_vqdot_vv_i32m4(vint32m4_t vd, vint8m4_t vs2, vint8m4_t vs1, size_t vl) {
  return __riscv_vqdot(vd, vs2, vs1, vl);
}

vint32m4_t test_vqdot_vx_i32m4(vint32m4_t vd, vint8m4_t vs2, uint32_t rs1, size_t vl) {
  return __riscv_vqdot(vd, vs2, rs1, vl);
}

vint32m8_t test_vqdot_vv_i32m8(vint32m8_t vd, vint8m8_t vs2, vint8m8_t vs1, size_t vl) {
  return __riscv_vqdot(vd, vs2, vs1, vl);
}

vint32m8_t test_vqdot_vx_i32m8(vint32m8_t vd, vint8m8_t vs2, uint32_t rs1, size_t vl) {
  return __riscv_vqdot(vd, vs2, rs1, vl);
}

vint32mf2_t test_vqdot_vv_i32mf2_m(vbool64_t vm, vint32mf2_t vd, vint8mf2_t vs2, vint8mf2_t vs1, size_t vl) {
  return __riscv_vqdot(vm, vd, vs2, vs1, vl);
}

vint32mf2_t test_vqdot_vx_i32mf2_m(vbool64_t vm, vint32mf2_t vd, vint8mf2_t vs2, uint32_t rs1, size_t vl) {
  return __riscv_vqdot(vm, vd, vs2, rs1, vl);
}

vint32m1_t test_vqdot_vv_i32m1_m(vbool32_t vm, vint32m1_t vd, vint8m1_t vs2, vint8m1_t vs1, size_t vl) {
  return __riscv_vqdot(vm, vd, vs2, vs1, vl);
}

vint32m1_t test_vqdot_vx_i32m1_m(vbool32_t vm, vint32m1_t vd, vint8m1_t vs2, uint32_t rs1, size_t vl) {
  return __riscv_vqdot(vm, vd, vs2, rs1, vl);
}

vint32m2_t test_vqdot_vv_i32m2_m(vbool16_t vm, vint32m2_t vd, vint8m2_t vs2, vint8m2_t vs1, size_t vl) {
  return __riscv_vqdot(vm, vd, vs2, vs1, vl);
}

vint32m2_t test_vqdot_vx_i32m2_m(vbool16_t vm, vint32m2_t vd, vint8m2_t vs2, uint32_t rs1, size_t vl) {
  return __riscv_vqdot(vm, vd, vs2, rs1, vl);
}

vint32m4_t test_vqdot_vv_i32m4_m(vbool8_t vm, vint32m4_t vd, vint8m4_t vs2, vint8m4_t vs1, size_t vl) {
  return __riscv_vqdot(vm, vd, vs2, vs1, vl);
}

vint32m4_t test_vqdot_vx_i32m4_m(vbool8_t vm, vint32m4_t vd, vint8m4_t vs2, uint32_t rs1, size_t vl) {
  return __riscv_vqdot(vm, vd, vs2, rs1, vl);
}

vint32m8_t test_vqdot_vv_i32m8_m(vbool4_t vm, vint32m8_t vd, vint8m8_t vs2, vint8m8_t vs1, size_t vl) {
  return __riscv_vqdot(vm, vd, vs2, vs1, vl);
}

vint32m8_t test_vqdot_vx_i32m8_m(vbool4_t vm, vint32m8_t vd, vint8m8_t vs2, uint32_t rs1, size_t vl) {
  return __riscv_vqdot(vm, vd, vs2, rs1, vl);
}
/* { dg-final { scan-assembler-times {vseti?vli\s+[a-z0-9]+,\s*[a-z0-9]+,\s*e[0-9]+,\s*mf?[1248],\s*t[au],\s*m[au]\s+vqdot\.[ivxfswum.]+\s+} 20 } } */
