#include <riscv_vector.h>
#include <stdint.h>

vuint16mf4_t test_vwabda_vv_u8mf8(vuint16mf4_t vd, vint8mf8_t vs1,
                                  vint8mf8_t vs2, size_t vl) {
  return __riscv_vwabda(vd, vs1, vs2, vl);
}

vuint16mf2_t test_vwabda_vv_u8mf4(vuint16mf2_t vd, vint8mf4_t vs1,
                                  vint8mf4_t vs2, size_t vl) {
  return __riscv_vwabda(vd, vs1, vs2, vl);
}

vuint16m1_t test_vwabda_vv_u8mf2(vuint16m1_t vd, vint8mf2_t vs1, vint8mf2_t vs2,
                                 size_t vl) {
  return __riscv_vwabda(vd, vs1, vs2, vl);
}

vuint16m2_t test_vwabda_vv_u8m1(vuint16m2_t vd, vint8m1_t vs1, vint8m1_t vs2,
                                size_t vl) {
  return __riscv_vwabda(vd, vs1, vs2, vl);
}

vuint16m4_t test_vwabda_vv_u8m2(vuint16m4_t vd, vint8m2_t vs1, vint8m2_t vs2,
                                size_t vl) {
  return __riscv_vwabda(vd, vs1, vs2, vl);
}

vuint16m8_t test_vwabda_vv_u8m4(vuint16m8_t vd, vint8m4_t vs1, vint8m4_t vs2,
                                size_t vl) {
  return __riscv_vwabda(vd, vs1, vs2, vl);
}

vuint32mf2_t test_vwabda_vv_u16mf4(vuint32mf2_t vd, vint16mf4_t vs1,
                                   vint16mf4_t vs2, size_t vl) {
  return __riscv_vwabda(vd, vs1, vs2, vl);
}

vuint32m1_t test_vwabda_vv_u16mf2(vuint32m1_t vd, vint16mf2_t vs1,
                                  vint16mf2_t vs2, size_t vl) {
  return __riscv_vwabda(vd, vs1, vs2, vl);
}

vuint32m2_t test_vwabda_vv_u16m1(vuint32m2_t vd, vint16m1_t vs1, vint16m1_t vs2,
                                 size_t vl) {
  return __riscv_vwabda(vd, vs1, vs2, vl);
}

vuint32m4_t test_vwabda_vv_u16m2(vuint32m4_t vd, vint16m2_t vs1, vint16m2_t vs2,
                                 size_t vl) {
  return __riscv_vwabda(vd, vs1, vs2, vl);
}

vuint32m8_t test_vwabda_vv_u16m4(vuint32m8_t vd, vint16m4_t vs1, vint16m4_t vs2,
                                 size_t vl) {
  return __riscv_vwabda(vd, vs1, vs2, vl);
}

vuint16mf4_t test_vwabda_vv_u8mf8_m(vbool64_t vm, vuint16mf4_t vd,
                                    vint8mf8_t vs1, vint8mf8_t vs2, size_t vl) {
  return __riscv_vwabda(vm, vd, vs1, vs2, vl);
}

vuint16mf2_t test_vwabda_vv_u8mf4_m(vbool32_t vm, vuint16mf2_t vd,
                                    vint8mf4_t vs1, vint8mf4_t vs2, size_t vl) {
  return __riscv_vwabda(vm, vd, vs1, vs2, vl);
}

vuint16m1_t test_vwabda_vv_u8mf2_m(vbool16_t vm, vuint16m1_t vd, vint8mf2_t vs1,
                                   vint8mf2_t vs2, size_t vl) {
  return __riscv_vwabda(vm, vd, vs1, vs2, vl);
}

vuint16m2_t test_vwabda_vv_u8m1_m(vbool8_t vm, vuint16m2_t vd, vint8m1_t vs1,
                                  vint8m1_t vs2, size_t vl) {
  return __riscv_vwabda(vm, vd, vs1, vs2, vl);
}

vuint16m4_t test_vwabda_vv_u8m2_m(vbool4_t vm, vuint16m4_t vd, vint8m2_t vs1,
                                  vint8m2_t vs2, size_t vl) {
  return __riscv_vwabda(vm, vd, vs1, vs2, vl);
}

vuint16m8_t test_vwabda_vv_u8m4_m(vbool2_t vm, vuint16m8_t vd, vint8m4_t vs1,
                                  vint8m4_t vs2, size_t vl) {
  return __riscv_vwabda(vm, vd, vs1, vs2, vl);
}

vuint32mf2_t test_vwabda_vv_u16mf4_m(vbool64_t vm, vuint32mf2_t vd,
                                     vint16mf4_t vs1, vint16mf4_t vs2,
                                     size_t vl) {
  return __riscv_vwabda(vm, vd, vs1, vs2, vl);
}

vuint32m1_t test_vwabda_vv_u16mf2_m(vbool32_t vm, vuint32m1_t vd,
                                    vint16mf2_t vs1, vint16mf2_t vs2,
                                    size_t vl) {
  return __riscv_vwabda(vm, vd, vs1, vs2, vl);
}

vuint32m2_t test_vwabda_vv_u16m1_m(vbool16_t vm, vuint32m2_t vd, vint16m1_t vs1,
                                   vint16m1_t vs2, size_t vl) {
  return __riscv_vwabda(vm, vd, vs1, vs2, vl);
}

vuint32m4_t test_vwabda_vv_u16m2_m(vbool8_t vm, vuint32m4_t vd, vint16m2_t vs1,
                                   vint16m2_t vs2, size_t vl) {
  return __riscv_vwabda(vm, vd, vs1, vs2, vl);
}

vuint32m8_t test_vwabda_vv_u16m4_m(vbool4_t vm, vuint32m8_t vd, vint16m4_t vs1,
                                   vint16m4_t vs2, size_t vl) {
  return __riscv_vwabda(vm, vd, vs1, vs2, vl);
}
