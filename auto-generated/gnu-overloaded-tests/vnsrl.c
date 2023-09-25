/* { dg-do compile } */
/* { dg-options "-march=rv64gcv_zvfh -mabi=lp64d -Wno-psabi -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
vuint8mf8_t test_vnsrl_wv_u8mf8(vuint16mf4_t op1, vuint8mf8_t shift, size_t vl) {
  return __riscv_vnsrl(op1, shift, vl);
}

vuint8mf8_t test_vnsrl_wx_u8mf8(vuint16mf4_t op1, size_t shift, size_t vl) {
  return __riscv_vnsrl(op1, shift, vl);
}

vuint8mf4_t test_vnsrl_wv_u8mf4(vuint16mf2_t op1, vuint8mf4_t shift, size_t vl) {
  return __riscv_vnsrl(op1, shift, vl);
}

vuint8mf4_t test_vnsrl_wx_u8mf4(vuint16mf2_t op1, size_t shift, size_t vl) {
  return __riscv_vnsrl(op1, shift, vl);
}

vuint8mf2_t test_vnsrl_wv_u8mf2(vuint16m1_t op1, vuint8mf2_t shift, size_t vl) {
  return __riscv_vnsrl(op1, shift, vl);
}

vuint8mf2_t test_vnsrl_wx_u8mf2(vuint16m1_t op1, size_t shift, size_t vl) {
  return __riscv_vnsrl(op1, shift, vl);
}

vuint8m1_t test_vnsrl_wv_u8m1(vuint16m2_t op1, vuint8m1_t shift, size_t vl) {
  return __riscv_vnsrl(op1, shift, vl);
}

vuint8m1_t test_vnsrl_wx_u8m1(vuint16m2_t op1, size_t shift, size_t vl) {
  return __riscv_vnsrl(op1, shift, vl);
}

vuint8m2_t test_vnsrl_wv_u8m2(vuint16m4_t op1, vuint8m2_t shift, size_t vl) {
  return __riscv_vnsrl(op1, shift, vl);
}

vuint8m2_t test_vnsrl_wx_u8m2(vuint16m4_t op1, size_t shift, size_t vl) {
  return __riscv_vnsrl(op1, shift, vl);
}

vuint8m4_t test_vnsrl_wv_u8m4(vuint16m8_t op1, vuint8m4_t shift, size_t vl) {
  return __riscv_vnsrl(op1, shift, vl);
}

vuint8m4_t test_vnsrl_wx_u8m4(vuint16m8_t op1, size_t shift, size_t vl) {
  return __riscv_vnsrl(op1, shift, vl);
}

vuint16mf4_t test_vnsrl_wv_u16mf4(vuint32mf2_t op1, vuint16mf4_t shift, size_t vl) {
  return __riscv_vnsrl(op1, shift, vl);
}

vuint16mf4_t test_vnsrl_wx_u16mf4(vuint32mf2_t op1, size_t shift, size_t vl) {
  return __riscv_vnsrl(op1, shift, vl);
}

vuint16mf2_t test_vnsrl_wv_u16mf2(vuint32m1_t op1, vuint16mf2_t shift, size_t vl) {
  return __riscv_vnsrl(op1, shift, vl);
}

vuint16mf2_t test_vnsrl_wx_u16mf2(vuint32m1_t op1, size_t shift, size_t vl) {
  return __riscv_vnsrl(op1, shift, vl);
}

vuint16m1_t test_vnsrl_wv_u16m1(vuint32m2_t op1, vuint16m1_t shift, size_t vl) {
  return __riscv_vnsrl(op1, shift, vl);
}

vuint16m1_t test_vnsrl_wx_u16m1(vuint32m2_t op1, size_t shift, size_t vl) {
  return __riscv_vnsrl(op1, shift, vl);
}

vuint16m2_t test_vnsrl_wv_u16m2(vuint32m4_t op1, vuint16m2_t shift, size_t vl) {
  return __riscv_vnsrl(op1, shift, vl);
}

vuint16m2_t test_vnsrl_wx_u16m2(vuint32m4_t op1, size_t shift, size_t vl) {
  return __riscv_vnsrl(op1, shift, vl);
}

vuint16m4_t test_vnsrl_wv_u16m4(vuint32m8_t op1, vuint16m4_t shift, size_t vl) {
  return __riscv_vnsrl(op1, shift, vl);
}

vuint16m4_t test_vnsrl_wx_u16m4(vuint32m8_t op1, size_t shift, size_t vl) {
  return __riscv_vnsrl(op1, shift, vl);
}

vuint32mf2_t test_vnsrl_wv_u32mf2(vuint64m1_t op1, vuint32mf2_t shift, size_t vl) {
  return __riscv_vnsrl(op1, shift, vl);
}

vuint32mf2_t test_vnsrl_wx_u32mf2(vuint64m1_t op1, size_t shift, size_t vl) {
  return __riscv_vnsrl(op1, shift, vl);
}

vuint32m1_t test_vnsrl_wv_u32m1(vuint64m2_t op1, vuint32m1_t shift, size_t vl) {
  return __riscv_vnsrl(op1, shift, vl);
}

vuint32m1_t test_vnsrl_wx_u32m1(vuint64m2_t op1, size_t shift, size_t vl) {
  return __riscv_vnsrl(op1, shift, vl);
}

vuint32m2_t test_vnsrl_wv_u32m2(vuint64m4_t op1, vuint32m2_t shift, size_t vl) {
  return __riscv_vnsrl(op1, shift, vl);
}

vuint32m2_t test_vnsrl_wx_u32m2(vuint64m4_t op1, size_t shift, size_t vl) {
  return __riscv_vnsrl(op1, shift, vl);
}

vuint32m4_t test_vnsrl_wv_u32m4(vuint64m8_t op1, vuint32m4_t shift, size_t vl) {
  return __riscv_vnsrl(op1, shift, vl);
}

vuint32m4_t test_vnsrl_wx_u32m4(vuint64m8_t op1, size_t shift, size_t vl) {
  return __riscv_vnsrl(op1, shift, vl);
}

vuint8mf8_t test_vnsrl_wv_u8mf8_m(vbool64_t mask, vuint16mf4_t op1, vuint8mf8_t shift, size_t vl) {
  return __riscv_vnsrl(mask, op1, shift, vl);
}

vuint8mf8_t test_vnsrl_wx_u8mf8_m(vbool64_t mask, vuint16mf4_t op1, size_t shift, size_t vl) {
  return __riscv_vnsrl(mask, op1, shift, vl);
}

vuint8mf4_t test_vnsrl_wv_u8mf4_m(vbool32_t mask, vuint16mf2_t op1, vuint8mf4_t shift, size_t vl) {
  return __riscv_vnsrl(mask, op1, shift, vl);
}

vuint8mf4_t test_vnsrl_wx_u8mf4_m(vbool32_t mask, vuint16mf2_t op1, size_t shift, size_t vl) {
  return __riscv_vnsrl(mask, op1, shift, vl);
}

vuint8mf2_t test_vnsrl_wv_u8mf2_m(vbool16_t mask, vuint16m1_t op1, vuint8mf2_t shift, size_t vl) {
  return __riscv_vnsrl(mask, op1, shift, vl);
}

vuint8mf2_t test_vnsrl_wx_u8mf2_m(vbool16_t mask, vuint16m1_t op1, size_t shift, size_t vl) {
  return __riscv_vnsrl(mask, op1, shift, vl);
}

vuint8m1_t test_vnsrl_wv_u8m1_m(vbool8_t mask, vuint16m2_t op1, vuint8m1_t shift, size_t vl) {
  return __riscv_vnsrl(mask, op1, shift, vl);
}

vuint8m1_t test_vnsrl_wx_u8m1_m(vbool8_t mask, vuint16m2_t op1, size_t shift, size_t vl) {
  return __riscv_vnsrl(mask, op1, shift, vl);
}

vuint8m2_t test_vnsrl_wv_u8m2_m(vbool4_t mask, vuint16m4_t op1, vuint8m2_t shift, size_t vl) {
  return __riscv_vnsrl(mask, op1, shift, vl);
}

vuint8m2_t test_vnsrl_wx_u8m2_m(vbool4_t mask, vuint16m4_t op1, size_t shift, size_t vl) {
  return __riscv_vnsrl(mask, op1, shift, vl);
}

vuint8m4_t test_vnsrl_wv_u8m4_m(vbool2_t mask, vuint16m8_t op1, vuint8m4_t shift, size_t vl) {
  return __riscv_vnsrl(mask, op1, shift, vl);
}

vuint8m4_t test_vnsrl_wx_u8m4_m(vbool2_t mask, vuint16m8_t op1, size_t shift, size_t vl) {
  return __riscv_vnsrl(mask, op1, shift, vl);
}

vuint16mf4_t test_vnsrl_wv_u16mf4_m(vbool64_t mask, vuint32mf2_t op1, vuint16mf4_t shift, size_t vl) {
  return __riscv_vnsrl(mask, op1, shift, vl);
}

vuint16mf4_t test_vnsrl_wx_u16mf4_m(vbool64_t mask, vuint32mf2_t op1, size_t shift, size_t vl) {
  return __riscv_vnsrl(mask, op1, shift, vl);
}

vuint16mf2_t test_vnsrl_wv_u16mf2_m(vbool32_t mask, vuint32m1_t op1, vuint16mf2_t shift, size_t vl) {
  return __riscv_vnsrl(mask, op1, shift, vl);
}

vuint16mf2_t test_vnsrl_wx_u16mf2_m(vbool32_t mask, vuint32m1_t op1, size_t shift, size_t vl) {
  return __riscv_vnsrl(mask, op1, shift, vl);
}

vuint16m1_t test_vnsrl_wv_u16m1_m(vbool16_t mask, vuint32m2_t op1, vuint16m1_t shift, size_t vl) {
  return __riscv_vnsrl(mask, op1, shift, vl);
}

vuint16m1_t test_vnsrl_wx_u16m1_m(vbool16_t mask, vuint32m2_t op1, size_t shift, size_t vl) {
  return __riscv_vnsrl(mask, op1, shift, vl);
}

vuint16m2_t test_vnsrl_wv_u16m2_m(vbool8_t mask, vuint32m4_t op1, vuint16m2_t shift, size_t vl) {
  return __riscv_vnsrl(mask, op1, shift, vl);
}

vuint16m2_t test_vnsrl_wx_u16m2_m(vbool8_t mask, vuint32m4_t op1, size_t shift, size_t vl) {
  return __riscv_vnsrl(mask, op1, shift, vl);
}

vuint16m4_t test_vnsrl_wv_u16m4_m(vbool4_t mask, vuint32m8_t op1, vuint16m4_t shift, size_t vl) {
  return __riscv_vnsrl(mask, op1, shift, vl);
}

vuint16m4_t test_vnsrl_wx_u16m4_m(vbool4_t mask, vuint32m8_t op1, size_t shift, size_t vl) {
  return __riscv_vnsrl(mask, op1, shift, vl);
}

vuint32mf2_t test_vnsrl_wv_u32mf2_m(vbool64_t mask, vuint64m1_t op1, vuint32mf2_t shift, size_t vl) {
  return __riscv_vnsrl(mask, op1, shift, vl);
}

vuint32mf2_t test_vnsrl_wx_u32mf2_m(vbool64_t mask, vuint64m1_t op1, size_t shift, size_t vl) {
  return __riscv_vnsrl(mask, op1, shift, vl);
}

vuint32m1_t test_vnsrl_wv_u32m1_m(vbool32_t mask, vuint64m2_t op1, vuint32m1_t shift, size_t vl) {
  return __riscv_vnsrl(mask, op1, shift, vl);
}

vuint32m1_t test_vnsrl_wx_u32m1_m(vbool32_t mask, vuint64m2_t op1, size_t shift, size_t vl) {
  return __riscv_vnsrl(mask, op1, shift, vl);
}

vuint32m2_t test_vnsrl_wv_u32m2_m(vbool16_t mask, vuint64m4_t op1, vuint32m2_t shift, size_t vl) {
  return __riscv_vnsrl(mask, op1, shift, vl);
}

vuint32m2_t test_vnsrl_wx_u32m2_m(vbool16_t mask, vuint64m4_t op1, size_t shift, size_t vl) {
  return __riscv_vnsrl(mask, op1, shift, vl);
}

vuint32m4_t test_vnsrl_wv_u32m4_m(vbool8_t mask, vuint64m8_t op1, vuint32m4_t shift, size_t vl) {
  return __riscv_vnsrl(mask, op1, shift, vl);
}

vuint32m4_t test_vnsrl_wx_u32m4_m(vbool8_t mask, vuint64m8_t op1, size_t shift, size_t vl) {
  return __riscv_vnsrl(mask, op1, shift, vl);
}

/* { dg-final { scan-assembler-times {vseti?vli\s+[a-z0-9]+,\s*[a-z0-9]+,\s*e[0-9]+,\s*mf?[1248],\s*t[au],\s*m[au]\s+vnsrl\.[ivxfswum.]+\s+} 60 } } */
