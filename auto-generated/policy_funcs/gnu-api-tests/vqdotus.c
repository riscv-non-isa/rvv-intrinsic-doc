/* { dg-do compile } */
/* { dg-options "-march=rv64gcv_zvfh -mabi=lp64d -Wno-psabi -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include <riscv_vector.h>

vint32mf2_t test_vqdotus_vx_i32mf2_tu(vint32mf2_t vd, vuint8mf2_t vs2, uint32_t rs1, size_t vl) {
  return __riscv_vqdotus_vx_i32mf2_tu(vd, vs2, rs1, vl);
}

vint32m1_t test_vqdotus_vx_i32m1_tu(vint32m1_t vd, vuint8m1_t vs2, uint32_t rs1, size_t vl) {
  return __riscv_vqdotus_vx_i32m1_tu(vd, vs2, rs1, vl);
}

vint32m2_t test_vqdotus_vx_i32m2_tu(vint32m2_t vd, vuint8m2_t vs2, uint32_t rs1, size_t vl) {
  return __riscv_vqdotus_vx_i32m2_tu(vd, vs2, rs1, vl);
}

vint32m4_t test_vqdotus_vx_i32m4_tu(vint32m4_t vd, vuint8m4_t vs2, uint32_t rs1, size_t vl) {
  return __riscv_vqdotus_vx_i32m4_tu(vd, vs2, rs1, vl);
}

vint32m8_t test_vqdotus_vx_i32m8_tu(vint32m8_t vd, vuint8m8_t vs2, uint32_t rs1, size_t vl) {
  return __riscv_vqdotus_vx_i32m8_tu(vd, vs2, rs1, vl);
}

vint32mf2_t test_vqdotus_vx_i32mf2_tum(vbool64_t vm, vint32mf2_t vd, vuint8mf2_t vs2, uint32_t rs1, size_t vl) {
  return __riscv_vqdotus_vx_i32mf2_tum(vm, vd, vs2, rs1, vl);
}

vint32m1_t test_vqdotus_vx_i32m1_tum(vbool32_t vm, vint32m1_t vd, vuint8m1_t vs2, uint32_t rs1, size_t vl) {
  return __riscv_vqdotus_vx_i32m1_tum(vm, vd, vs2, rs1, vl);
}

vint32m2_t test_vqdotus_vx_i32m2_tum(vbool16_t vm, vint32m2_t vd, vuint8m2_t vs2, uint32_t rs1, size_t vl) {
  return __riscv_vqdotus_vx_i32m2_tum(vm, vd, vs2, rs1, vl);
}

vint32m4_t test_vqdotus_vx_i32m4_tum(vbool8_t vm, vint32m4_t vd, vuint8m4_t vs2, uint32_t rs1, size_t vl) {
  return __riscv_vqdotus_vx_i32m4_tum(vm, vd, vs2, rs1, vl);
}

vint32m8_t test_vqdotus_vx_i32m8_tum(vbool4_t vm, vint32m8_t vd, vuint8m8_t vs2, uint32_t rs1, size_t vl) {
  return __riscv_vqdotus_vx_i32m8_tum(vm, vd, vs2, rs1, vl);
}

vint32mf2_t test_vqdotus_vx_i32mf2_tumu(vbool64_t vm, vint32mf2_t vd, vuint8mf2_t vs2, uint32_t rs1, size_t vl) {
  return __riscv_vqdotus_vx_i32mf2_tumu(vm, vd, vs2, rs1, vl);
}

vint32m1_t test_vqdotus_vx_i32m1_tumu(vbool32_t vm, vint32m1_t vd, vuint8m1_t vs2, uint32_t rs1, size_t vl) {
  return __riscv_vqdotus_vx_i32m1_tumu(vm, vd, vs2, rs1, vl);
}

vint32m2_t test_vqdotus_vx_i32m2_tumu(vbool16_t vm, vint32m2_t vd, vuint8m2_t vs2, uint32_t rs1, size_t vl) {
  return __riscv_vqdotus_vx_i32m2_tumu(vm, vd, vs2, rs1, vl);
}

vint32m4_t test_vqdotus_vx_i32m4_tumu(vbool8_t vm, vint32m4_t vd, vuint8m4_t vs2, uint32_t rs1, size_t vl) {
  return __riscv_vqdotus_vx_i32m4_tumu(vm, vd, vs2, rs1, vl);
}

vint32m8_t test_vqdotus_vx_i32m8_tumu(vbool4_t vm, vint32m8_t vd, vuint8m8_t vs2, uint32_t rs1, size_t vl) {
  return __riscv_vqdotus_vx_i32m8_tumu(vm, vd, vs2, rs1, vl);
}

vint32mf2_t test_vqdotus_vx_i32mf2_mu(vbool64_t vm, vint32mf2_t vd, vuint8mf2_t vs2, uint32_t rs1, size_t vl) {
  return __riscv_vqdotus_vx_i32mf2_mu(vm, vd, vs2, rs1, vl);
}

vint32m1_t test_vqdotus_vx_i32m1_mu(vbool32_t vm, vint32m1_t vd, vuint8m1_t vs2, uint32_t rs1, size_t vl) {
  return __riscv_vqdotus_vx_i32m1_mu(vm, vd, vs2, rs1, vl);
}

vint32m2_t test_vqdotus_vx_i32m2_mu(vbool16_t vm, vint32m2_t vd, vuint8m2_t vs2, uint32_t rs1, size_t vl) {
  return __riscv_vqdotus_vx_i32m2_mu(vm, vd, vs2, rs1, vl);
}

vint32m4_t test_vqdotus_vx_i32m4_mu(vbool8_t vm, vint32m4_t vd, vuint8m4_t vs2, uint32_t rs1, size_t vl) {
  return __riscv_vqdotus_vx_i32m4_mu(vm, vd, vs2, rs1, vl);
}

vint32m8_t test_vqdotus_vx_i32m8_mu(vbool4_t vm, vint32m8_t vd, vuint8m8_t vs2, uint32_t rs1, size_t vl) {
  return __riscv_vqdotus_vx_i32m8_mu(vm, vd, vs2, rs1, vl);
}
/* { dg-final { scan-assembler-times {vseti?vli\s+[a-z0-9]+,\s*[a-z0-9]+,\s*e[0-9]+,\s*mf?[1248],\s*t[au],\s*m[au]\s+vqdotus\.[ivxfswum.]+\s+} 20 } } */
