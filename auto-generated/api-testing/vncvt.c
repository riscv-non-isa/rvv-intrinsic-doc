#include <riscv_vector.h>
#include <stdint.h>

vint8mf8_t test_vncvt_x_x_w_i8mf8(vint16mf4_t vs2, size_t vl) {
  return __riscv_vncvt_x_x_w_i8mf8(vs2, vl);
}

vint8mf4_t test_vncvt_x_x_w_i8mf4(vint16mf2_t vs2, size_t vl) {
  return __riscv_vncvt_x_x_w_i8mf4(vs2, vl);
}

vint8mf2_t test_vncvt_x_x_w_i8mf2(vint16m1_t vs2, size_t vl) {
  return __riscv_vncvt_x_x_w_i8mf2(vs2, vl);
}

vint8m1_t test_vncvt_x_x_w_i8m1(vint16m2_t vs2, size_t vl) {
  return __riscv_vncvt_x_x_w_i8m1(vs2, vl);
}

vint8m2_t test_vncvt_x_x_w_i8m2(vint16m4_t vs2, size_t vl) {
  return __riscv_vncvt_x_x_w_i8m2(vs2, vl);
}

vint8m4_t test_vncvt_x_x_w_i8m4(vint16m8_t vs2, size_t vl) {
  return __riscv_vncvt_x_x_w_i8m4(vs2, vl);
}

vuint8mf8_t test_vncvt_x_x_w_u8mf8(vuint16mf4_t vs2, size_t vl) {
  return __riscv_vncvt_x_x_w_u8mf8(vs2, vl);
}

vuint8mf4_t test_vncvt_x_x_w_u8mf4(vuint16mf2_t vs2, size_t vl) {
  return __riscv_vncvt_x_x_w_u8mf4(vs2, vl);
}

vuint8mf2_t test_vncvt_x_x_w_u8mf2(vuint16m1_t vs2, size_t vl) {
  return __riscv_vncvt_x_x_w_u8mf2(vs2, vl);
}

vuint8m1_t test_vncvt_x_x_w_u8m1(vuint16m2_t vs2, size_t vl) {
  return __riscv_vncvt_x_x_w_u8m1(vs2, vl);
}

vuint8m2_t test_vncvt_x_x_w_u8m2(vuint16m4_t vs2, size_t vl) {
  return __riscv_vncvt_x_x_w_u8m2(vs2, vl);
}

vuint8m4_t test_vncvt_x_x_w_u8m4(vuint16m8_t vs2, size_t vl) {
  return __riscv_vncvt_x_x_w_u8m4(vs2, vl);
}

vint16mf4_t test_vncvt_x_x_w_i16mf4(vint32mf2_t vs2, size_t vl) {
  return __riscv_vncvt_x_x_w_i16mf4(vs2, vl);
}

vint16mf2_t test_vncvt_x_x_w_i16mf2(vint32m1_t vs2, size_t vl) {
  return __riscv_vncvt_x_x_w_i16mf2(vs2, vl);
}

vint16m1_t test_vncvt_x_x_w_i16m1(vint32m2_t vs2, size_t vl) {
  return __riscv_vncvt_x_x_w_i16m1(vs2, vl);
}

vint16m2_t test_vncvt_x_x_w_i16m2(vint32m4_t vs2, size_t vl) {
  return __riscv_vncvt_x_x_w_i16m2(vs2, vl);
}

vint16m4_t test_vncvt_x_x_w_i16m4(vint32m8_t vs2, size_t vl) {
  return __riscv_vncvt_x_x_w_i16m4(vs2, vl);
}

vuint16mf4_t test_vncvt_x_x_w_u16mf4(vuint32mf2_t vs2, size_t vl) {
  return __riscv_vncvt_x_x_w_u16mf4(vs2, vl);
}

vuint16mf2_t test_vncvt_x_x_w_u16mf2(vuint32m1_t vs2, size_t vl) {
  return __riscv_vncvt_x_x_w_u16mf2(vs2, vl);
}

vuint16m1_t test_vncvt_x_x_w_u16m1(vuint32m2_t vs2, size_t vl) {
  return __riscv_vncvt_x_x_w_u16m1(vs2, vl);
}

vuint16m2_t test_vncvt_x_x_w_u16m2(vuint32m4_t vs2, size_t vl) {
  return __riscv_vncvt_x_x_w_u16m2(vs2, vl);
}

vuint16m4_t test_vncvt_x_x_w_u16m4(vuint32m8_t vs2, size_t vl) {
  return __riscv_vncvt_x_x_w_u16m4(vs2, vl);
}

vint32mf2_t test_vncvt_x_x_w_i32mf2(vint64m1_t vs2, size_t vl) {
  return __riscv_vncvt_x_x_w_i32mf2(vs2, vl);
}

vint32m1_t test_vncvt_x_x_w_i32m1(vint64m2_t vs2, size_t vl) {
  return __riscv_vncvt_x_x_w_i32m1(vs2, vl);
}

vint32m2_t test_vncvt_x_x_w_i32m2(vint64m4_t vs2, size_t vl) {
  return __riscv_vncvt_x_x_w_i32m2(vs2, vl);
}

vint32m4_t test_vncvt_x_x_w_i32m4(vint64m8_t vs2, size_t vl) {
  return __riscv_vncvt_x_x_w_i32m4(vs2, vl);
}

vuint32mf2_t test_vncvt_x_x_w_u32mf2(vuint64m1_t vs2, size_t vl) {
  return __riscv_vncvt_x_x_w_u32mf2(vs2, vl);
}

vuint32m1_t test_vncvt_x_x_w_u32m1(vuint64m2_t vs2, size_t vl) {
  return __riscv_vncvt_x_x_w_u32m1(vs2, vl);
}

vuint32m2_t test_vncvt_x_x_w_u32m2(vuint64m4_t vs2, size_t vl) {
  return __riscv_vncvt_x_x_w_u32m2(vs2, vl);
}

vuint32m4_t test_vncvt_x_x_w_u32m4(vuint64m8_t vs2, size_t vl) {
  return __riscv_vncvt_x_x_w_u32m4(vs2, vl);
}

vint8mf8_t test_vncvt_x_x_w_i8mf8_m(vbool64_t vm, vint16mf4_t vs2, size_t vl) {
  return __riscv_vncvt_x_x_w_i8mf8_m(vm, vs2, vl);
}

vint8mf4_t test_vncvt_x_x_w_i8mf4_m(vbool32_t vm, vint16mf2_t vs2, size_t vl) {
  return __riscv_vncvt_x_x_w_i8mf4_m(vm, vs2, vl);
}

vint8mf2_t test_vncvt_x_x_w_i8mf2_m(vbool16_t vm, vint16m1_t vs2, size_t vl) {
  return __riscv_vncvt_x_x_w_i8mf2_m(vm, vs2, vl);
}

vint8m1_t test_vncvt_x_x_w_i8m1_m(vbool8_t vm, vint16m2_t vs2, size_t vl) {
  return __riscv_vncvt_x_x_w_i8m1_m(vm, vs2, vl);
}

vint8m2_t test_vncvt_x_x_w_i8m2_m(vbool4_t vm, vint16m4_t vs2, size_t vl) {
  return __riscv_vncvt_x_x_w_i8m2_m(vm, vs2, vl);
}

vint8m4_t test_vncvt_x_x_w_i8m4_m(vbool2_t vm, vint16m8_t vs2, size_t vl) {
  return __riscv_vncvt_x_x_w_i8m4_m(vm, vs2, vl);
}

vuint8mf8_t test_vncvt_x_x_w_u8mf8_m(vbool64_t vm, vuint16mf4_t vs2,
                                     size_t vl) {
  return __riscv_vncvt_x_x_w_u8mf8_m(vm, vs2, vl);
}

vuint8mf4_t test_vncvt_x_x_w_u8mf4_m(vbool32_t vm, vuint16mf2_t vs2,
                                     size_t vl) {
  return __riscv_vncvt_x_x_w_u8mf4_m(vm, vs2, vl);
}

vuint8mf2_t test_vncvt_x_x_w_u8mf2_m(vbool16_t vm, vuint16m1_t vs2, size_t vl) {
  return __riscv_vncvt_x_x_w_u8mf2_m(vm, vs2, vl);
}

vuint8m1_t test_vncvt_x_x_w_u8m1_m(vbool8_t vm, vuint16m2_t vs2, size_t vl) {
  return __riscv_vncvt_x_x_w_u8m1_m(vm, vs2, vl);
}

vuint8m2_t test_vncvt_x_x_w_u8m2_m(vbool4_t vm, vuint16m4_t vs2, size_t vl) {
  return __riscv_vncvt_x_x_w_u8m2_m(vm, vs2, vl);
}

vuint8m4_t test_vncvt_x_x_w_u8m4_m(vbool2_t vm, vuint16m8_t vs2, size_t vl) {
  return __riscv_vncvt_x_x_w_u8m4_m(vm, vs2, vl);
}

vint16mf4_t test_vncvt_x_x_w_i16mf4_m(vbool64_t vm, vint32mf2_t vs2,
                                      size_t vl) {
  return __riscv_vncvt_x_x_w_i16mf4_m(vm, vs2, vl);
}

vint16mf2_t test_vncvt_x_x_w_i16mf2_m(vbool32_t vm, vint32m1_t vs2, size_t vl) {
  return __riscv_vncvt_x_x_w_i16mf2_m(vm, vs2, vl);
}

vint16m1_t test_vncvt_x_x_w_i16m1_m(vbool16_t vm, vint32m2_t vs2, size_t vl) {
  return __riscv_vncvt_x_x_w_i16m1_m(vm, vs2, vl);
}

vint16m2_t test_vncvt_x_x_w_i16m2_m(vbool8_t vm, vint32m4_t vs2, size_t vl) {
  return __riscv_vncvt_x_x_w_i16m2_m(vm, vs2, vl);
}

vint16m4_t test_vncvt_x_x_w_i16m4_m(vbool4_t vm, vint32m8_t vs2, size_t vl) {
  return __riscv_vncvt_x_x_w_i16m4_m(vm, vs2, vl);
}

vuint16mf4_t test_vncvt_x_x_w_u16mf4_m(vbool64_t vm, vuint32mf2_t vs2,
                                       size_t vl) {
  return __riscv_vncvt_x_x_w_u16mf4_m(vm, vs2, vl);
}

vuint16mf2_t test_vncvt_x_x_w_u16mf2_m(vbool32_t vm, vuint32m1_t vs2,
                                       size_t vl) {
  return __riscv_vncvt_x_x_w_u16mf2_m(vm, vs2, vl);
}

vuint16m1_t test_vncvt_x_x_w_u16m1_m(vbool16_t vm, vuint32m2_t vs2, size_t vl) {
  return __riscv_vncvt_x_x_w_u16m1_m(vm, vs2, vl);
}

vuint16m2_t test_vncvt_x_x_w_u16m2_m(vbool8_t vm, vuint32m4_t vs2, size_t vl) {
  return __riscv_vncvt_x_x_w_u16m2_m(vm, vs2, vl);
}

vuint16m4_t test_vncvt_x_x_w_u16m4_m(vbool4_t vm, vuint32m8_t vs2, size_t vl) {
  return __riscv_vncvt_x_x_w_u16m4_m(vm, vs2, vl);
}

vint32mf2_t test_vncvt_x_x_w_i32mf2_m(vbool64_t vm, vint64m1_t vs2, size_t vl) {
  return __riscv_vncvt_x_x_w_i32mf2_m(vm, vs2, vl);
}

vint32m1_t test_vncvt_x_x_w_i32m1_m(vbool32_t vm, vint64m2_t vs2, size_t vl) {
  return __riscv_vncvt_x_x_w_i32m1_m(vm, vs2, vl);
}

vint32m2_t test_vncvt_x_x_w_i32m2_m(vbool16_t vm, vint64m4_t vs2, size_t vl) {
  return __riscv_vncvt_x_x_w_i32m2_m(vm, vs2, vl);
}

vint32m4_t test_vncvt_x_x_w_i32m4_m(vbool8_t vm, vint64m8_t vs2, size_t vl) {
  return __riscv_vncvt_x_x_w_i32m4_m(vm, vs2, vl);
}

vuint32mf2_t test_vncvt_x_x_w_u32mf2_m(vbool64_t vm, vuint64m1_t vs2,
                                       size_t vl) {
  return __riscv_vncvt_x_x_w_u32mf2_m(vm, vs2, vl);
}

vuint32m1_t test_vncvt_x_x_w_u32m1_m(vbool32_t vm, vuint64m2_t vs2, size_t vl) {
  return __riscv_vncvt_x_x_w_u32m1_m(vm, vs2, vl);
}

vuint32m2_t test_vncvt_x_x_w_u32m2_m(vbool16_t vm, vuint64m4_t vs2, size_t vl) {
  return __riscv_vncvt_x_x_w_u32m2_m(vm, vs2, vl);
}

vuint32m4_t test_vncvt_x_x_w_u32m4_m(vbool8_t vm, vuint64m8_t vs2, size_t vl) {
  return __riscv_vncvt_x_x_w_u32m4_m(vm, vs2, vl);
}
