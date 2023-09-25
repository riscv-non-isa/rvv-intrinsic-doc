/* { dg-do compile } */
/* { dg-options "-march=rv64gcv_zvfh -mabi=lp64d -Wno-psabi -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
vint8mf8_t test_vnclip_wv_i8mf8(vint16mf4_t op1, vuint8mf8_t shift, size_t vl) {
  return __riscv_vnclip(op1, shift, __RISCV_VXRM_RNU, vl);
}

vint8mf8_t test_vnclip_wx_i8mf8(vint16mf4_t op1, size_t shift, size_t vl) {
  return __riscv_vnclip(op1, shift, __RISCV_VXRM_RNU, vl);
}

vint8mf4_t test_vnclip_wv_i8mf4(vint16mf2_t op1, vuint8mf4_t shift, size_t vl) {
  return __riscv_vnclip(op1, shift, __RISCV_VXRM_RNU, vl);
}

vint8mf4_t test_vnclip_wx_i8mf4(vint16mf2_t op1, size_t shift, size_t vl) {
  return __riscv_vnclip(op1, shift, __RISCV_VXRM_RNU, vl);
}

vint8mf2_t test_vnclip_wv_i8mf2(vint16m1_t op1, vuint8mf2_t shift, size_t vl) {
  return __riscv_vnclip(op1, shift, __RISCV_VXRM_RNU, vl);
}

vint8mf2_t test_vnclip_wx_i8mf2(vint16m1_t op1, size_t shift, size_t vl) {
  return __riscv_vnclip(op1, shift, __RISCV_VXRM_RNU, vl);
}

vint8m1_t test_vnclip_wv_i8m1(vint16m2_t op1, vuint8m1_t shift, size_t vl) {
  return __riscv_vnclip(op1, shift, __RISCV_VXRM_RNU, vl);
}

vint8m1_t test_vnclip_wx_i8m1(vint16m2_t op1, size_t shift, size_t vl) {
  return __riscv_vnclip(op1, shift, __RISCV_VXRM_RNU, vl);
}

vint8m2_t test_vnclip_wv_i8m2(vint16m4_t op1, vuint8m2_t shift, size_t vl) {
  return __riscv_vnclip(op1, shift, __RISCV_VXRM_RNU, vl);
}

vint8m2_t test_vnclip_wx_i8m2(vint16m4_t op1, size_t shift, size_t vl) {
  return __riscv_vnclip(op1, shift, __RISCV_VXRM_RNU, vl);
}

vint8m4_t test_vnclip_wv_i8m4(vint16m8_t op1, vuint8m4_t shift, size_t vl) {
  return __riscv_vnclip(op1, shift, __RISCV_VXRM_RNU, vl);
}

vint8m4_t test_vnclip_wx_i8m4(vint16m8_t op1, size_t shift, size_t vl) {
  return __riscv_vnclip(op1, shift, __RISCV_VXRM_RNU, vl);
}

vint16mf4_t test_vnclip_wv_i16mf4(vint32mf2_t op1, vuint16mf4_t shift, size_t vl) {
  return __riscv_vnclip(op1, shift, __RISCV_VXRM_RNU, vl);
}

vint16mf4_t test_vnclip_wx_i16mf4(vint32mf2_t op1, size_t shift, size_t vl) {
  return __riscv_vnclip(op1, shift, __RISCV_VXRM_RNU, vl);
}

vint16mf2_t test_vnclip_wv_i16mf2(vint32m1_t op1, vuint16mf2_t shift, size_t vl) {
  return __riscv_vnclip(op1, shift, __RISCV_VXRM_RNU, vl);
}

vint16mf2_t test_vnclip_wx_i16mf2(vint32m1_t op1, size_t shift, size_t vl) {
  return __riscv_vnclip(op1, shift, __RISCV_VXRM_RNU, vl);
}

vint16m1_t test_vnclip_wv_i16m1(vint32m2_t op1, vuint16m1_t shift, size_t vl) {
  return __riscv_vnclip(op1, shift, __RISCV_VXRM_RNU, vl);
}

vint16m1_t test_vnclip_wx_i16m1(vint32m2_t op1, size_t shift, size_t vl) {
  return __riscv_vnclip(op1, shift, __RISCV_VXRM_RNU, vl);
}

vint16m2_t test_vnclip_wv_i16m2(vint32m4_t op1, vuint16m2_t shift, size_t vl) {
  return __riscv_vnclip(op1, shift, __RISCV_VXRM_RNU, vl);
}

vint16m2_t test_vnclip_wx_i16m2(vint32m4_t op1, size_t shift, size_t vl) {
  return __riscv_vnclip(op1, shift, __RISCV_VXRM_RNU, vl);
}

vint16m4_t test_vnclip_wv_i16m4(vint32m8_t op1, vuint16m4_t shift, size_t vl) {
  return __riscv_vnclip(op1, shift, __RISCV_VXRM_RNU, vl);
}

vint16m4_t test_vnclip_wx_i16m4(vint32m8_t op1, size_t shift, size_t vl) {
  return __riscv_vnclip(op1, shift, __RISCV_VXRM_RNU, vl);
}

vint32mf2_t test_vnclip_wv_i32mf2(vint64m1_t op1, vuint32mf2_t shift, size_t vl) {
  return __riscv_vnclip(op1, shift, __RISCV_VXRM_RNU, vl);
}

vint32mf2_t test_vnclip_wx_i32mf2(vint64m1_t op1, size_t shift, size_t vl) {
  return __riscv_vnclip(op1, shift, __RISCV_VXRM_RNU, vl);
}

vint32m1_t test_vnclip_wv_i32m1(vint64m2_t op1, vuint32m1_t shift, size_t vl) {
  return __riscv_vnclip(op1, shift, __RISCV_VXRM_RNU, vl);
}

vint32m1_t test_vnclip_wx_i32m1(vint64m2_t op1, size_t shift, size_t vl) {
  return __riscv_vnclip(op1, shift, __RISCV_VXRM_RNU, vl);
}

vint32m2_t test_vnclip_wv_i32m2(vint64m4_t op1, vuint32m2_t shift, size_t vl) {
  return __riscv_vnclip(op1, shift, __RISCV_VXRM_RNU, vl);
}

vint32m2_t test_vnclip_wx_i32m2(vint64m4_t op1, size_t shift, size_t vl) {
  return __riscv_vnclip(op1, shift, __RISCV_VXRM_RNU, vl);
}

vint32m4_t test_vnclip_wv_i32m4(vint64m8_t op1, vuint32m4_t shift, size_t vl) {
  return __riscv_vnclip(op1, shift, __RISCV_VXRM_RNU, vl);
}

vint32m4_t test_vnclip_wx_i32m4(vint64m8_t op1, size_t shift, size_t vl) {
  return __riscv_vnclip(op1, shift, __RISCV_VXRM_RNU, vl);
}

vint8mf8_t test_vnclip_wv_i8mf8_m(vbool64_t mask, vint16mf4_t op1, vuint8mf8_t shift, size_t vl) {
  return __riscv_vnclip(mask, op1, shift, __RISCV_VXRM_RNU, vl);
}

vint8mf8_t test_vnclip_wx_i8mf8_m(vbool64_t mask, vint16mf4_t op1, size_t shift, size_t vl) {
  return __riscv_vnclip(mask, op1, shift, __RISCV_VXRM_RNU, vl);
}

vint8mf4_t test_vnclip_wv_i8mf4_m(vbool32_t mask, vint16mf2_t op1, vuint8mf4_t shift, size_t vl) {
  return __riscv_vnclip(mask, op1, shift, __RISCV_VXRM_RNU, vl);
}

vint8mf4_t test_vnclip_wx_i8mf4_m(vbool32_t mask, vint16mf2_t op1, size_t shift, size_t vl) {
  return __riscv_vnclip(mask, op1, shift, __RISCV_VXRM_RNU, vl);
}

vint8mf2_t test_vnclip_wv_i8mf2_m(vbool16_t mask, vint16m1_t op1, vuint8mf2_t shift, size_t vl) {
  return __riscv_vnclip(mask, op1, shift, __RISCV_VXRM_RNU, vl);
}

vint8mf2_t test_vnclip_wx_i8mf2_m(vbool16_t mask, vint16m1_t op1, size_t shift, size_t vl) {
  return __riscv_vnclip(mask, op1, shift, __RISCV_VXRM_RNU, vl);
}

vint8m1_t test_vnclip_wv_i8m1_m(vbool8_t mask, vint16m2_t op1, vuint8m1_t shift, size_t vl) {
  return __riscv_vnclip(mask, op1, shift, __RISCV_VXRM_RNU, vl);
}

vint8m1_t test_vnclip_wx_i8m1_m(vbool8_t mask, vint16m2_t op1, size_t shift, size_t vl) {
  return __riscv_vnclip(mask, op1, shift, __RISCV_VXRM_RNU, vl);
}

vint8m2_t test_vnclip_wv_i8m2_m(vbool4_t mask, vint16m4_t op1, vuint8m2_t shift, size_t vl) {
  return __riscv_vnclip(mask, op1, shift, __RISCV_VXRM_RNU, vl);
}

vint8m2_t test_vnclip_wx_i8m2_m(vbool4_t mask, vint16m4_t op1, size_t shift, size_t vl) {
  return __riscv_vnclip(mask, op1, shift, __RISCV_VXRM_RNU, vl);
}

vint8m4_t test_vnclip_wv_i8m4_m(vbool2_t mask, vint16m8_t op1, vuint8m4_t shift, size_t vl) {
  return __riscv_vnclip(mask, op1, shift, __RISCV_VXRM_RNU, vl);
}

vint8m4_t test_vnclip_wx_i8m4_m(vbool2_t mask, vint16m8_t op1, size_t shift, size_t vl) {
  return __riscv_vnclip(mask, op1, shift, __RISCV_VXRM_RNU, vl);
}

vint16mf4_t test_vnclip_wv_i16mf4_m(vbool64_t mask, vint32mf2_t op1, vuint16mf4_t shift, size_t vl) {
  return __riscv_vnclip(mask, op1, shift, __RISCV_VXRM_RNU, vl);
}

vint16mf4_t test_vnclip_wx_i16mf4_m(vbool64_t mask, vint32mf2_t op1, size_t shift, size_t vl) {
  return __riscv_vnclip(mask, op1, shift, __RISCV_VXRM_RNU, vl);
}

vint16mf2_t test_vnclip_wv_i16mf2_m(vbool32_t mask, vint32m1_t op1, vuint16mf2_t shift, size_t vl) {
  return __riscv_vnclip(mask, op1, shift, __RISCV_VXRM_RNU, vl);
}

vint16mf2_t test_vnclip_wx_i16mf2_m(vbool32_t mask, vint32m1_t op1, size_t shift, size_t vl) {
  return __riscv_vnclip(mask, op1, shift, __RISCV_VXRM_RNU, vl);
}

vint16m1_t test_vnclip_wv_i16m1_m(vbool16_t mask, vint32m2_t op1, vuint16m1_t shift, size_t vl) {
  return __riscv_vnclip(mask, op1, shift, __RISCV_VXRM_RNU, vl);
}

vint16m1_t test_vnclip_wx_i16m1_m(vbool16_t mask, vint32m2_t op1, size_t shift, size_t vl) {
  return __riscv_vnclip(mask, op1, shift, __RISCV_VXRM_RNU, vl);
}

vint16m2_t test_vnclip_wv_i16m2_m(vbool8_t mask, vint32m4_t op1, vuint16m2_t shift, size_t vl) {
  return __riscv_vnclip(mask, op1, shift, __RISCV_VXRM_RNU, vl);
}

vint16m2_t test_vnclip_wx_i16m2_m(vbool8_t mask, vint32m4_t op1, size_t shift, size_t vl) {
  return __riscv_vnclip(mask, op1, shift, __RISCV_VXRM_RNU, vl);
}

vint16m4_t test_vnclip_wv_i16m4_m(vbool4_t mask, vint32m8_t op1, vuint16m4_t shift, size_t vl) {
  return __riscv_vnclip(mask, op1, shift, __RISCV_VXRM_RNU, vl);
}

vint16m4_t test_vnclip_wx_i16m4_m(vbool4_t mask, vint32m8_t op1, size_t shift, size_t vl) {
  return __riscv_vnclip(mask, op1, shift, __RISCV_VXRM_RNU, vl);
}

vint32mf2_t test_vnclip_wv_i32mf2_m(vbool64_t mask, vint64m1_t op1, vuint32mf2_t shift, size_t vl) {
  return __riscv_vnclip(mask, op1, shift, __RISCV_VXRM_RNU, vl);
}

vint32mf2_t test_vnclip_wx_i32mf2_m(vbool64_t mask, vint64m1_t op1, size_t shift, size_t vl) {
  return __riscv_vnclip(mask, op1, shift, __RISCV_VXRM_RNU, vl);
}

vint32m1_t test_vnclip_wv_i32m1_m(vbool32_t mask, vint64m2_t op1, vuint32m1_t shift, size_t vl) {
  return __riscv_vnclip(mask, op1, shift, __RISCV_VXRM_RNU, vl);
}

vint32m1_t test_vnclip_wx_i32m1_m(vbool32_t mask, vint64m2_t op1, size_t shift, size_t vl) {
  return __riscv_vnclip(mask, op1, shift, __RISCV_VXRM_RNU, vl);
}

vint32m2_t test_vnclip_wv_i32m2_m(vbool16_t mask, vint64m4_t op1, vuint32m2_t shift, size_t vl) {
  return __riscv_vnclip(mask, op1, shift, __RISCV_VXRM_RNU, vl);
}

vint32m2_t test_vnclip_wx_i32m2_m(vbool16_t mask, vint64m4_t op1, size_t shift, size_t vl) {
  return __riscv_vnclip(mask, op1, shift, __RISCV_VXRM_RNU, vl);
}

vint32m4_t test_vnclip_wv_i32m4_m(vbool8_t mask, vint64m8_t op1, vuint32m4_t shift, size_t vl) {
  return __riscv_vnclip(mask, op1, shift, __RISCV_VXRM_RNU, vl);
}

vint32m4_t test_vnclip_wx_i32m4_m(vbool8_t mask, vint64m8_t op1, size_t shift, size_t vl) {
  return __riscv_vnclip(mask, op1, shift, __RISCV_VXRM_RNU, vl);
}

/* { dg-final { scan-assembler-times {vseti?vli\s+[a-z0-9]+,\s*[a-z0-9]+,\s*e[0-9]+,\s*mf?[1248],\s*t[au],\s*m[au]\s+vnclip\.[ivxfswum.]+\s+} 60 } } */
