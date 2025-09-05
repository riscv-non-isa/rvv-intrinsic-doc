#include <riscv_vector.h>
#include <stdint.h>

vint32mf2_t test_vqdotsu_vv_i32mf2(vint32mf2_t vd, vint8mf2_t vs2,
                                   vuint8mf2_t vs1, size_t vl) {
  return __riscv_vqdotsu(vd, vs2, vs1, vl);
}

vint32mf2_t test_vqdotsu_vx_i32mf2(vint32mf2_t vd, vint8mf2_t vs2, uint32_t rs1,
                                   size_t vl) {
  return __riscv_vqdotsu(vd, vs2, rs1, vl);
}

vint32m1_t test_vqdotsu_vv_i32m1(vint32m1_t vd, vint8m1_t vs2, vuint8m1_t vs1,
                                 size_t vl) {
  return __riscv_vqdotsu(vd, vs2, vs1, vl);
}

vint32m1_t test_vqdotsu_vx_i32m1(vint32m1_t vd, vint8m1_t vs2, uint32_t rs1,
                                 size_t vl) {
  return __riscv_vqdotsu(vd, vs2, rs1, vl);
}

vint32m2_t test_vqdotsu_vv_i32m2(vint32m2_t vd, vint8m2_t vs2, vuint8m2_t vs1,
                                 size_t vl) {
  return __riscv_vqdotsu(vd, vs2, vs1, vl);
}

vint32m2_t test_vqdotsu_vx_i32m2(vint32m2_t vd, vint8m2_t vs2, uint32_t rs1,
                                 size_t vl) {
  return __riscv_vqdotsu(vd, vs2, rs1, vl);
}

vint32m4_t test_vqdotsu_vv_i32m4(vint32m4_t vd, vint8m4_t vs2, vuint8m4_t vs1,
                                 size_t vl) {
  return __riscv_vqdotsu(vd, vs2, vs1, vl);
}

vint32m4_t test_vqdotsu_vx_i32m4(vint32m4_t vd, vint8m4_t vs2, uint32_t rs1,
                                 size_t vl) {
  return __riscv_vqdotsu(vd, vs2, rs1, vl);
}

vint32m8_t test_vqdotsu_vv_i32m8(vint32m8_t vd, vint8m8_t vs2, vuint8m8_t vs1,
                                 size_t vl) {
  return __riscv_vqdotsu(vd, vs2, vs1, vl);
}

vint32m8_t test_vqdotsu_vx_i32m8(vint32m8_t vd, vint8m8_t vs2, uint32_t rs1,
                                 size_t vl) {
  return __riscv_vqdotsu(vd, vs2, rs1, vl);
}

vint32mf2_t test_vqdotsu_vv_i32mf2_m(vbool64_t vm, vint32mf2_t vd,
                                     vint8mf2_t vs2, vuint8mf2_t vs1,
                                     size_t vl) {
  return __riscv_vqdotsu(vm, vd, vs2, vs1, vl);
}

vint32mf2_t test_vqdotsu_vx_i32mf2_m(vbool64_t vm, vint32mf2_t vd,
                                     vint8mf2_t vs2, uint32_t rs1, size_t vl) {
  return __riscv_vqdotsu(vm, vd, vs2, rs1, vl);
}

vint32m1_t test_vqdotsu_vv_i32m1_m(vbool32_t vm, vint32m1_t vd, vint8m1_t vs2,
                                   vuint8m1_t vs1, size_t vl) {
  return __riscv_vqdotsu(vm, vd, vs2, vs1, vl);
}

vint32m1_t test_vqdotsu_vx_i32m1_m(vbool32_t vm, vint32m1_t vd, vint8m1_t vs2,
                                   uint32_t rs1, size_t vl) {
  return __riscv_vqdotsu(vm, vd, vs2, rs1, vl);
}

vint32m2_t test_vqdotsu_vv_i32m2_m(vbool16_t vm, vint32m2_t vd, vint8m2_t vs2,
                                   vuint8m2_t vs1, size_t vl) {
  return __riscv_vqdotsu(vm, vd, vs2, vs1, vl);
}

vint32m2_t test_vqdotsu_vx_i32m2_m(vbool16_t vm, vint32m2_t vd, vint8m2_t vs2,
                                   uint32_t rs1, size_t vl) {
  return __riscv_vqdotsu(vm, vd, vs2, rs1, vl);
}

vint32m4_t test_vqdotsu_vv_i32m4_m(vbool8_t vm, vint32m4_t vd, vint8m4_t vs2,
                                   vuint8m4_t vs1, size_t vl) {
  return __riscv_vqdotsu(vm, vd, vs2, vs1, vl);
}

vint32m4_t test_vqdotsu_vx_i32m4_m(vbool8_t vm, vint32m4_t vd, vint8m4_t vs2,
                                   uint32_t rs1, size_t vl) {
  return __riscv_vqdotsu(vm, vd, vs2, rs1, vl);
}

vint32m8_t test_vqdotsu_vv_i32m8_m(vbool4_t vm, vint32m8_t vd, vint8m8_t vs2,
                                   vuint8m8_t vs1, size_t vl) {
  return __riscv_vqdotsu(vm, vd, vs2, vs1, vl);
}

vint32m8_t test_vqdotsu_vx_i32m8_m(vbool4_t vm, vint32m8_t vd, vint8m8_t vs2,
                                   uint32_t rs1, size_t vl) {
  return __riscv_vqdotsu(vm, vd, vs2, rs1, vl);
}
