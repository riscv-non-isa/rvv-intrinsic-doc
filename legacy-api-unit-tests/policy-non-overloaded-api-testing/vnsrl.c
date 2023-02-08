#include <stdint.h>
#include "rvv-v0p10-compatible-headers/non-policy.h"
#include "rvv-v0p10-compatible-headers/policy.h"
#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
vuint8mf8_t test_vnsrl_wv_u8mf8_tu(vuint8mf8_t maskedoff, vuint16mf4_t op1, vuint8mf8_t shift, size_t vl) {
  return vnsrl_wv_u8mf8_tu(maskedoff, op1, shift, vl);
}

vuint8mf8_t test_vnsrl_wx_u8mf8_tu(vuint8mf8_t maskedoff, vuint16mf4_t op1, size_t shift, size_t vl) {
  return vnsrl_wx_u8mf8_tu(maskedoff, op1, shift, vl);
}

vuint8mf4_t test_vnsrl_wv_u8mf4_tu(vuint8mf4_t maskedoff, vuint16mf2_t op1, vuint8mf4_t shift, size_t vl) {
  return vnsrl_wv_u8mf4_tu(maskedoff, op1, shift, vl);
}

vuint8mf4_t test_vnsrl_wx_u8mf4_tu(vuint8mf4_t maskedoff, vuint16mf2_t op1, size_t shift, size_t vl) {
  return vnsrl_wx_u8mf4_tu(maskedoff, op1, shift, vl);
}

vuint8mf2_t test_vnsrl_wv_u8mf2_tu(vuint8mf2_t maskedoff, vuint16m1_t op1, vuint8mf2_t shift, size_t vl) {
  return vnsrl_wv_u8mf2_tu(maskedoff, op1, shift, vl);
}

vuint8mf2_t test_vnsrl_wx_u8mf2_tu(vuint8mf2_t maskedoff, vuint16m1_t op1, size_t shift, size_t vl) {
  return vnsrl_wx_u8mf2_tu(maskedoff, op1, shift, vl);
}

vuint8m1_t test_vnsrl_wv_u8m1_tu(vuint8m1_t maskedoff, vuint16m2_t op1, vuint8m1_t shift, size_t vl) {
  return vnsrl_wv_u8m1_tu(maskedoff, op1, shift, vl);
}

vuint8m1_t test_vnsrl_wx_u8m1_tu(vuint8m1_t maskedoff, vuint16m2_t op1, size_t shift, size_t vl) {
  return vnsrl_wx_u8m1_tu(maskedoff, op1, shift, vl);
}

vuint8m2_t test_vnsrl_wv_u8m2_tu(vuint8m2_t maskedoff, vuint16m4_t op1, vuint8m2_t shift, size_t vl) {
  return vnsrl_wv_u8m2_tu(maskedoff, op1, shift, vl);
}

vuint8m2_t test_vnsrl_wx_u8m2_tu(vuint8m2_t maskedoff, vuint16m4_t op1, size_t shift, size_t vl) {
  return vnsrl_wx_u8m2_tu(maskedoff, op1, shift, vl);
}

vuint8m4_t test_vnsrl_wv_u8m4_tu(vuint8m4_t maskedoff, vuint16m8_t op1, vuint8m4_t shift, size_t vl) {
  return vnsrl_wv_u8m4_tu(maskedoff, op1, shift, vl);
}

vuint8m4_t test_vnsrl_wx_u8m4_tu(vuint8m4_t maskedoff, vuint16m8_t op1, size_t shift, size_t vl) {
  return vnsrl_wx_u8m4_tu(maskedoff, op1, shift, vl);
}

vuint16mf4_t test_vnsrl_wv_u16mf4_tu(vuint16mf4_t maskedoff, vuint32mf2_t op1, vuint16mf4_t shift, size_t vl) {
  return vnsrl_wv_u16mf4_tu(maskedoff, op1, shift, vl);
}

vuint16mf4_t test_vnsrl_wx_u16mf4_tu(vuint16mf4_t maskedoff, vuint32mf2_t op1, size_t shift, size_t vl) {
  return vnsrl_wx_u16mf4_tu(maskedoff, op1, shift, vl);
}

vuint16mf2_t test_vnsrl_wv_u16mf2_tu(vuint16mf2_t maskedoff, vuint32m1_t op1, vuint16mf2_t shift, size_t vl) {
  return vnsrl_wv_u16mf2_tu(maskedoff, op1, shift, vl);
}

vuint16mf2_t test_vnsrl_wx_u16mf2_tu(vuint16mf2_t maskedoff, vuint32m1_t op1, size_t shift, size_t vl) {
  return vnsrl_wx_u16mf2_tu(maskedoff, op1, shift, vl);
}

vuint16m1_t test_vnsrl_wv_u16m1_tu(vuint16m1_t maskedoff, vuint32m2_t op1, vuint16m1_t shift, size_t vl) {
  return vnsrl_wv_u16m1_tu(maskedoff, op1, shift, vl);
}

vuint16m1_t test_vnsrl_wx_u16m1_tu(vuint16m1_t maskedoff, vuint32m2_t op1, size_t shift, size_t vl) {
  return vnsrl_wx_u16m1_tu(maskedoff, op1, shift, vl);
}

vuint16m2_t test_vnsrl_wv_u16m2_tu(vuint16m2_t maskedoff, vuint32m4_t op1, vuint16m2_t shift, size_t vl) {
  return vnsrl_wv_u16m2_tu(maskedoff, op1, shift, vl);
}

vuint16m2_t test_vnsrl_wx_u16m2_tu(vuint16m2_t maskedoff, vuint32m4_t op1, size_t shift, size_t vl) {
  return vnsrl_wx_u16m2_tu(maskedoff, op1, shift, vl);
}

vuint16m4_t test_vnsrl_wv_u16m4_tu(vuint16m4_t maskedoff, vuint32m8_t op1, vuint16m4_t shift, size_t vl) {
  return vnsrl_wv_u16m4_tu(maskedoff, op1, shift, vl);
}

vuint16m4_t test_vnsrl_wx_u16m4_tu(vuint16m4_t maskedoff, vuint32m8_t op1, size_t shift, size_t vl) {
  return vnsrl_wx_u16m4_tu(maskedoff, op1, shift, vl);
}

vuint32mf2_t test_vnsrl_wv_u32mf2_tu(vuint32mf2_t maskedoff, vuint64m1_t op1, vuint32mf2_t shift, size_t vl) {
  return vnsrl_wv_u32mf2_tu(maskedoff, op1, shift, vl);
}

vuint32mf2_t test_vnsrl_wx_u32mf2_tu(vuint32mf2_t maskedoff, vuint64m1_t op1, size_t shift, size_t vl) {
  return vnsrl_wx_u32mf2_tu(maskedoff, op1, shift, vl);
}

vuint32m1_t test_vnsrl_wv_u32m1_tu(vuint32m1_t maskedoff, vuint64m2_t op1, vuint32m1_t shift, size_t vl) {
  return vnsrl_wv_u32m1_tu(maskedoff, op1, shift, vl);
}

vuint32m1_t test_vnsrl_wx_u32m1_tu(vuint32m1_t maskedoff, vuint64m2_t op1, size_t shift, size_t vl) {
  return vnsrl_wx_u32m1_tu(maskedoff, op1, shift, vl);
}

vuint32m2_t test_vnsrl_wv_u32m2_tu(vuint32m2_t maskedoff, vuint64m4_t op1, vuint32m2_t shift, size_t vl) {
  return vnsrl_wv_u32m2_tu(maskedoff, op1, shift, vl);
}

vuint32m2_t test_vnsrl_wx_u32m2_tu(vuint32m2_t maskedoff, vuint64m4_t op1, size_t shift, size_t vl) {
  return vnsrl_wx_u32m2_tu(maskedoff, op1, shift, vl);
}

vuint32m4_t test_vnsrl_wv_u32m4_tu(vuint32m4_t maskedoff, vuint64m8_t op1, vuint32m4_t shift, size_t vl) {
  return vnsrl_wv_u32m4_tu(maskedoff, op1, shift, vl);
}

vuint32m4_t test_vnsrl_wx_u32m4_tu(vuint32m4_t maskedoff, vuint64m8_t op1, size_t shift, size_t vl) {
  return vnsrl_wx_u32m4_tu(maskedoff, op1, shift, vl);
}

vuint8mf8_t test_vnsrl_wv_u8mf8_ta(vuint16mf4_t op1, vuint8mf8_t shift, size_t vl) {
  return vnsrl_wv_u8mf8_ta(op1, shift, vl);
}

vuint8mf8_t test_vnsrl_wx_u8mf8_ta(vuint16mf4_t op1, size_t shift, size_t vl) {
  return vnsrl_wx_u8mf8_ta(op1, shift, vl);
}

vuint8mf4_t test_vnsrl_wv_u8mf4_ta(vuint16mf2_t op1, vuint8mf4_t shift, size_t vl) {
  return vnsrl_wv_u8mf4_ta(op1, shift, vl);
}

vuint8mf4_t test_vnsrl_wx_u8mf4_ta(vuint16mf2_t op1, size_t shift, size_t vl) {
  return vnsrl_wx_u8mf4_ta(op1, shift, vl);
}

vuint8mf2_t test_vnsrl_wv_u8mf2_ta(vuint16m1_t op1, vuint8mf2_t shift, size_t vl) {
  return vnsrl_wv_u8mf2_ta(op1, shift, vl);
}

vuint8mf2_t test_vnsrl_wx_u8mf2_ta(vuint16m1_t op1, size_t shift, size_t vl) {
  return vnsrl_wx_u8mf2_ta(op1, shift, vl);
}

vuint8m1_t test_vnsrl_wv_u8m1_ta(vuint16m2_t op1, vuint8m1_t shift, size_t vl) {
  return vnsrl_wv_u8m1_ta(op1, shift, vl);
}

vuint8m1_t test_vnsrl_wx_u8m1_ta(vuint16m2_t op1, size_t shift, size_t vl) {
  return vnsrl_wx_u8m1_ta(op1, shift, vl);
}

vuint8m2_t test_vnsrl_wv_u8m2_ta(vuint16m4_t op1, vuint8m2_t shift, size_t vl) {
  return vnsrl_wv_u8m2_ta(op1, shift, vl);
}

vuint8m2_t test_vnsrl_wx_u8m2_ta(vuint16m4_t op1, size_t shift, size_t vl) {
  return vnsrl_wx_u8m2_ta(op1, shift, vl);
}

vuint8m4_t test_vnsrl_wv_u8m4_ta(vuint16m8_t op1, vuint8m4_t shift, size_t vl) {
  return vnsrl_wv_u8m4_ta(op1, shift, vl);
}

vuint8m4_t test_vnsrl_wx_u8m4_ta(vuint16m8_t op1, size_t shift, size_t vl) {
  return vnsrl_wx_u8m4_ta(op1, shift, vl);
}

vuint16mf4_t test_vnsrl_wv_u16mf4_ta(vuint32mf2_t op1, vuint16mf4_t shift, size_t vl) {
  return vnsrl_wv_u16mf4_ta(op1, shift, vl);
}

vuint16mf4_t test_vnsrl_wx_u16mf4_ta(vuint32mf2_t op1, size_t shift, size_t vl) {
  return vnsrl_wx_u16mf4_ta(op1, shift, vl);
}

vuint16mf2_t test_vnsrl_wv_u16mf2_ta(vuint32m1_t op1, vuint16mf2_t shift, size_t vl) {
  return vnsrl_wv_u16mf2_ta(op1, shift, vl);
}

vuint16mf2_t test_vnsrl_wx_u16mf2_ta(vuint32m1_t op1, size_t shift, size_t vl) {
  return vnsrl_wx_u16mf2_ta(op1, shift, vl);
}

vuint16m1_t test_vnsrl_wv_u16m1_ta(vuint32m2_t op1, vuint16m1_t shift, size_t vl) {
  return vnsrl_wv_u16m1_ta(op1, shift, vl);
}

vuint16m1_t test_vnsrl_wx_u16m1_ta(vuint32m2_t op1, size_t shift, size_t vl) {
  return vnsrl_wx_u16m1_ta(op1, shift, vl);
}

vuint16m2_t test_vnsrl_wv_u16m2_ta(vuint32m4_t op1, vuint16m2_t shift, size_t vl) {
  return vnsrl_wv_u16m2_ta(op1, shift, vl);
}

vuint16m2_t test_vnsrl_wx_u16m2_ta(vuint32m4_t op1, size_t shift, size_t vl) {
  return vnsrl_wx_u16m2_ta(op1, shift, vl);
}

vuint16m4_t test_vnsrl_wv_u16m4_ta(vuint32m8_t op1, vuint16m4_t shift, size_t vl) {
  return vnsrl_wv_u16m4_ta(op1, shift, vl);
}

vuint16m4_t test_vnsrl_wx_u16m4_ta(vuint32m8_t op1, size_t shift, size_t vl) {
  return vnsrl_wx_u16m4_ta(op1, shift, vl);
}

vuint32mf2_t test_vnsrl_wv_u32mf2_ta(vuint64m1_t op1, vuint32mf2_t shift, size_t vl) {
  return vnsrl_wv_u32mf2_ta(op1, shift, vl);
}

vuint32mf2_t test_vnsrl_wx_u32mf2_ta(vuint64m1_t op1, size_t shift, size_t vl) {
  return vnsrl_wx_u32mf2_ta(op1, shift, vl);
}

vuint32m1_t test_vnsrl_wv_u32m1_ta(vuint64m2_t op1, vuint32m1_t shift, size_t vl) {
  return vnsrl_wv_u32m1_ta(op1, shift, vl);
}

vuint32m1_t test_vnsrl_wx_u32m1_ta(vuint64m2_t op1, size_t shift, size_t vl) {
  return vnsrl_wx_u32m1_ta(op1, shift, vl);
}

vuint32m2_t test_vnsrl_wv_u32m2_ta(vuint64m4_t op1, vuint32m2_t shift, size_t vl) {
  return vnsrl_wv_u32m2_ta(op1, shift, vl);
}

vuint32m2_t test_vnsrl_wx_u32m2_ta(vuint64m4_t op1, size_t shift, size_t vl) {
  return vnsrl_wx_u32m2_ta(op1, shift, vl);
}

vuint32m4_t test_vnsrl_wv_u32m4_ta(vuint64m8_t op1, vuint32m4_t shift, size_t vl) {
  return vnsrl_wv_u32m4_ta(op1, shift, vl);
}

vuint32m4_t test_vnsrl_wx_u32m4_ta(vuint64m8_t op1, size_t shift, size_t vl) {
  return vnsrl_wx_u32m4_ta(op1, shift, vl);
}

vuint8mf8_t test_vnsrl_wv_u8mf8_tuma(vbool64_t mask, vuint8mf8_t maskedoff, vuint16mf4_t op1, vuint8mf8_t shift, size_t vl) {
  return vnsrl_wv_u8mf8_tuma(mask, maskedoff, op1, shift, vl);
}

vuint8mf8_t test_vnsrl_wx_u8mf8_tuma(vbool64_t mask, vuint8mf8_t maskedoff, vuint16mf4_t op1, size_t shift, size_t vl) {
  return vnsrl_wx_u8mf8_tuma(mask, maskedoff, op1, shift, vl);
}

vuint8mf4_t test_vnsrl_wv_u8mf4_tuma(vbool32_t mask, vuint8mf4_t maskedoff, vuint16mf2_t op1, vuint8mf4_t shift, size_t vl) {
  return vnsrl_wv_u8mf4_tuma(mask, maskedoff, op1, shift, vl);
}

vuint8mf4_t test_vnsrl_wx_u8mf4_tuma(vbool32_t mask, vuint8mf4_t maskedoff, vuint16mf2_t op1, size_t shift, size_t vl) {
  return vnsrl_wx_u8mf4_tuma(mask, maskedoff, op1, shift, vl);
}

vuint8mf2_t test_vnsrl_wv_u8mf2_tuma(vbool16_t mask, vuint8mf2_t maskedoff, vuint16m1_t op1, vuint8mf2_t shift, size_t vl) {
  return vnsrl_wv_u8mf2_tuma(mask, maskedoff, op1, shift, vl);
}

vuint8mf2_t test_vnsrl_wx_u8mf2_tuma(vbool16_t mask, vuint8mf2_t maskedoff, vuint16m1_t op1, size_t shift, size_t vl) {
  return vnsrl_wx_u8mf2_tuma(mask, maskedoff, op1, shift, vl);
}

vuint8m1_t test_vnsrl_wv_u8m1_tuma(vbool8_t mask, vuint8m1_t maskedoff, vuint16m2_t op1, vuint8m1_t shift, size_t vl) {
  return vnsrl_wv_u8m1_tuma(mask, maskedoff, op1, shift, vl);
}

vuint8m1_t test_vnsrl_wx_u8m1_tuma(vbool8_t mask, vuint8m1_t maskedoff, vuint16m2_t op1, size_t shift, size_t vl) {
  return vnsrl_wx_u8m1_tuma(mask, maskedoff, op1, shift, vl);
}

vuint8m2_t test_vnsrl_wv_u8m2_tuma(vbool4_t mask, vuint8m2_t maskedoff, vuint16m4_t op1, vuint8m2_t shift, size_t vl) {
  return vnsrl_wv_u8m2_tuma(mask, maskedoff, op1, shift, vl);
}

vuint8m2_t test_vnsrl_wx_u8m2_tuma(vbool4_t mask, vuint8m2_t maskedoff, vuint16m4_t op1, size_t shift, size_t vl) {
  return vnsrl_wx_u8m2_tuma(mask, maskedoff, op1, shift, vl);
}

vuint8m4_t test_vnsrl_wv_u8m4_tuma(vbool2_t mask, vuint8m4_t maskedoff, vuint16m8_t op1, vuint8m4_t shift, size_t vl) {
  return vnsrl_wv_u8m4_tuma(mask, maskedoff, op1, shift, vl);
}

vuint8m4_t test_vnsrl_wx_u8m4_tuma(vbool2_t mask, vuint8m4_t maskedoff, vuint16m8_t op1, size_t shift, size_t vl) {
  return vnsrl_wx_u8m4_tuma(mask, maskedoff, op1, shift, vl);
}

vuint16mf4_t test_vnsrl_wv_u16mf4_tuma(vbool64_t mask, vuint16mf4_t maskedoff, vuint32mf2_t op1, vuint16mf4_t shift, size_t vl) {
  return vnsrl_wv_u16mf4_tuma(mask, maskedoff, op1, shift, vl);
}

vuint16mf4_t test_vnsrl_wx_u16mf4_tuma(vbool64_t mask, vuint16mf4_t maskedoff, vuint32mf2_t op1, size_t shift, size_t vl) {
  return vnsrl_wx_u16mf4_tuma(mask, maskedoff, op1, shift, vl);
}

vuint16mf2_t test_vnsrl_wv_u16mf2_tuma(vbool32_t mask, vuint16mf2_t maskedoff, vuint32m1_t op1, vuint16mf2_t shift, size_t vl) {
  return vnsrl_wv_u16mf2_tuma(mask, maskedoff, op1, shift, vl);
}

vuint16mf2_t test_vnsrl_wx_u16mf2_tuma(vbool32_t mask, vuint16mf2_t maskedoff, vuint32m1_t op1, size_t shift, size_t vl) {
  return vnsrl_wx_u16mf2_tuma(mask, maskedoff, op1, shift, vl);
}

vuint16m1_t test_vnsrl_wv_u16m1_tuma(vbool16_t mask, vuint16m1_t maskedoff, vuint32m2_t op1, vuint16m1_t shift, size_t vl) {
  return vnsrl_wv_u16m1_tuma(mask, maskedoff, op1, shift, vl);
}

vuint16m1_t test_vnsrl_wx_u16m1_tuma(vbool16_t mask, vuint16m1_t maskedoff, vuint32m2_t op1, size_t shift, size_t vl) {
  return vnsrl_wx_u16m1_tuma(mask, maskedoff, op1, shift, vl);
}

vuint16m2_t test_vnsrl_wv_u16m2_tuma(vbool8_t mask, vuint16m2_t maskedoff, vuint32m4_t op1, vuint16m2_t shift, size_t vl) {
  return vnsrl_wv_u16m2_tuma(mask, maskedoff, op1, shift, vl);
}

vuint16m2_t test_vnsrl_wx_u16m2_tuma(vbool8_t mask, vuint16m2_t maskedoff, vuint32m4_t op1, size_t shift, size_t vl) {
  return vnsrl_wx_u16m2_tuma(mask, maskedoff, op1, shift, vl);
}

vuint16m4_t test_vnsrl_wv_u16m4_tuma(vbool4_t mask, vuint16m4_t maskedoff, vuint32m8_t op1, vuint16m4_t shift, size_t vl) {
  return vnsrl_wv_u16m4_tuma(mask, maskedoff, op1, shift, vl);
}

vuint16m4_t test_vnsrl_wx_u16m4_tuma(vbool4_t mask, vuint16m4_t maskedoff, vuint32m8_t op1, size_t shift, size_t vl) {
  return vnsrl_wx_u16m4_tuma(mask, maskedoff, op1, shift, vl);
}

vuint32mf2_t test_vnsrl_wv_u32mf2_tuma(vbool64_t mask, vuint32mf2_t maskedoff, vuint64m1_t op1, vuint32mf2_t shift, size_t vl) {
  return vnsrl_wv_u32mf2_tuma(mask, maskedoff, op1, shift, vl);
}

vuint32mf2_t test_vnsrl_wx_u32mf2_tuma(vbool64_t mask, vuint32mf2_t maskedoff, vuint64m1_t op1, size_t shift, size_t vl) {
  return vnsrl_wx_u32mf2_tuma(mask, maskedoff, op1, shift, vl);
}

vuint32m1_t test_vnsrl_wv_u32m1_tuma(vbool32_t mask, vuint32m1_t maskedoff, vuint64m2_t op1, vuint32m1_t shift, size_t vl) {
  return vnsrl_wv_u32m1_tuma(mask, maskedoff, op1, shift, vl);
}

vuint32m1_t test_vnsrl_wx_u32m1_tuma(vbool32_t mask, vuint32m1_t maskedoff, vuint64m2_t op1, size_t shift, size_t vl) {
  return vnsrl_wx_u32m1_tuma(mask, maskedoff, op1, shift, vl);
}

vuint32m2_t test_vnsrl_wv_u32m2_tuma(vbool16_t mask, vuint32m2_t maskedoff, vuint64m4_t op1, vuint32m2_t shift, size_t vl) {
  return vnsrl_wv_u32m2_tuma(mask, maskedoff, op1, shift, vl);
}

vuint32m2_t test_vnsrl_wx_u32m2_tuma(vbool16_t mask, vuint32m2_t maskedoff, vuint64m4_t op1, size_t shift, size_t vl) {
  return vnsrl_wx_u32m2_tuma(mask, maskedoff, op1, shift, vl);
}

vuint32m4_t test_vnsrl_wv_u32m4_tuma(vbool8_t mask, vuint32m4_t maskedoff, vuint64m8_t op1, vuint32m4_t shift, size_t vl) {
  return vnsrl_wv_u32m4_tuma(mask, maskedoff, op1, shift, vl);
}

vuint32m4_t test_vnsrl_wx_u32m4_tuma(vbool8_t mask, vuint32m4_t maskedoff, vuint64m8_t op1, size_t shift, size_t vl) {
  return vnsrl_wx_u32m4_tuma(mask, maskedoff, op1, shift, vl);
}

vuint8mf8_t test_vnsrl_wv_u8mf8_tumu(vbool64_t mask, vuint8mf8_t maskedoff, vuint16mf4_t op1, vuint8mf8_t shift, size_t vl) {
  return vnsrl_wv_u8mf8_tumu(mask, maskedoff, op1, shift, vl);
}

vuint8mf8_t test_vnsrl_wx_u8mf8_tumu(vbool64_t mask, vuint8mf8_t maskedoff, vuint16mf4_t op1, size_t shift, size_t vl) {
  return vnsrl_wx_u8mf8_tumu(mask, maskedoff, op1, shift, vl);
}

vuint8mf4_t test_vnsrl_wv_u8mf4_tumu(vbool32_t mask, vuint8mf4_t maskedoff, vuint16mf2_t op1, vuint8mf4_t shift, size_t vl) {
  return vnsrl_wv_u8mf4_tumu(mask, maskedoff, op1, shift, vl);
}

vuint8mf4_t test_vnsrl_wx_u8mf4_tumu(vbool32_t mask, vuint8mf4_t maskedoff, vuint16mf2_t op1, size_t shift, size_t vl) {
  return vnsrl_wx_u8mf4_tumu(mask, maskedoff, op1, shift, vl);
}

vuint8mf2_t test_vnsrl_wv_u8mf2_tumu(vbool16_t mask, vuint8mf2_t maskedoff, vuint16m1_t op1, vuint8mf2_t shift, size_t vl) {
  return vnsrl_wv_u8mf2_tumu(mask, maskedoff, op1, shift, vl);
}

vuint8mf2_t test_vnsrl_wx_u8mf2_tumu(vbool16_t mask, vuint8mf2_t maskedoff, vuint16m1_t op1, size_t shift, size_t vl) {
  return vnsrl_wx_u8mf2_tumu(mask, maskedoff, op1, shift, vl);
}

vuint8m1_t test_vnsrl_wv_u8m1_tumu(vbool8_t mask, vuint8m1_t maskedoff, vuint16m2_t op1, vuint8m1_t shift, size_t vl) {
  return vnsrl_wv_u8m1_tumu(mask, maskedoff, op1, shift, vl);
}

vuint8m1_t test_vnsrl_wx_u8m1_tumu(vbool8_t mask, vuint8m1_t maskedoff, vuint16m2_t op1, size_t shift, size_t vl) {
  return vnsrl_wx_u8m1_tumu(mask, maskedoff, op1, shift, vl);
}

vuint8m2_t test_vnsrl_wv_u8m2_tumu(vbool4_t mask, vuint8m2_t maskedoff, vuint16m4_t op1, vuint8m2_t shift, size_t vl) {
  return vnsrl_wv_u8m2_tumu(mask, maskedoff, op1, shift, vl);
}

vuint8m2_t test_vnsrl_wx_u8m2_tumu(vbool4_t mask, vuint8m2_t maskedoff, vuint16m4_t op1, size_t shift, size_t vl) {
  return vnsrl_wx_u8m2_tumu(mask, maskedoff, op1, shift, vl);
}

vuint8m4_t test_vnsrl_wv_u8m4_tumu(vbool2_t mask, vuint8m4_t maskedoff, vuint16m8_t op1, vuint8m4_t shift, size_t vl) {
  return vnsrl_wv_u8m4_tumu(mask, maskedoff, op1, shift, vl);
}

vuint8m4_t test_vnsrl_wx_u8m4_tumu(vbool2_t mask, vuint8m4_t maskedoff, vuint16m8_t op1, size_t shift, size_t vl) {
  return vnsrl_wx_u8m4_tumu(mask, maskedoff, op1, shift, vl);
}

vuint16mf4_t test_vnsrl_wv_u16mf4_tumu(vbool64_t mask, vuint16mf4_t maskedoff, vuint32mf2_t op1, vuint16mf4_t shift, size_t vl) {
  return vnsrl_wv_u16mf4_tumu(mask, maskedoff, op1, shift, vl);
}

vuint16mf4_t test_vnsrl_wx_u16mf4_tumu(vbool64_t mask, vuint16mf4_t maskedoff, vuint32mf2_t op1, size_t shift, size_t vl) {
  return vnsrl_wx_u16mf4_tumu(mask, maskedoff, op1, shift, vl);
}

vuint16mf2_t test_vnsrl_wv_u16mf2_tumu(vbool32_t mask, vuint16mf2_t maskedoff, vuint32m1_t op1, vuint16mf2_t shift, size_t vl) {
  return vnsrl_wv_u16mf2_tumu(mask, maskedoff, op1, shift, vl);
}

vuint16mf2_t test_vnsrl_wx_u16mf2_tumu(vbool32_t mask, vuint16mf2_t maskedoff, vuint32m1_t op1, size_t shift, size_t vl) {
  return vnsrl_wx_u16mf2_tumu(mask, maskedoff, op1, shift, vl);
}

vuint16m1_t test_vnsrl_wv_u16m1_tumu(vbool16_t mask, vuint16m1_t maskedoff, vuint32m2_t op1, vuint16m1_t shift, size_t vl) {
  return vnsrl_wv_u16m1_tumu(mask, maskedoff, op1, shift, vl);
}

vuint16m1_t test_vnsrl_wx_u16m1_tumu(vbool16_t mask, vuint16m1_t maskedoff, vuint32m2_t op1, size_t shift, size_t vl) {
  return vnsrl_wx_u16m1_tumu(mask, maskedoff, op1, shift, vl);
}

vuint16m2_t test_vnsrl_wv_u16m2_tumu(vbool8_t mask, vuint16m2_t maskedoff, vuint32m4_t op1, vuint16m2_t shift, size_t vl) {
  return vnsrl_wv_u16m2_tumu(mask, maskedoff, op1, shift, vl);
}

vuint16m2_t test_vnsrl_wx_u16m2_tumu(vbool8_t mask, vuint16m2_t maskedoff, vuint32m4_t op1, size_t shift, size_t vl) {
  return vnsrl_wx_u16m2_tumu(mask, maskedoff, op1, shift, vl);
}

vuint16m4_t test_vnsrl_wv_u16m4_tumu(vbool4_t mask, vuint16m4_t maskedoff, vuint32m8_t op1, vuint16m4_t shift, size_t vl) {
  return vnsrl_wv_u16m4_tumu(mask, maskedoff, op1, shift, vl);
}

vuint16m4_t test_vnsrl_wx_u16m4_tumu(vbool4_t mask, vuint16m4_t maskedoff, vuint32m8_t op1, size_t shift, size_t vl) {
  return vnsrl_wx_u16m4_tumu(mask, maskedoff, op1, shift, vl);
}

vuint32mf2_t test_vnsrl_wv_u32mf2_tumu(vbool64_t mask, vuint32mf2_t maskedoff, vuint64m1_t op1, vuint32mf2_t shift, size_t vl) {
  return vnsrl_wv_u32mf2_tumu(mask, maskedoff, op1, shift, vl);
}

vuint32mf2_t test_vnsrl_wx_u32mf2_tumu(vbool64_t mask, vuint32mf2_t maskedoff, vuint64m1_t op1, size_t shift, size_t vl) {
  return vnsrl_wx_u32mf2_tumu(mask, maskedoff, op1, shift, vl);
}

vuint32m1_t test_vnsrl_wv_u32m1_tumu(vbool32_t mask, vuint32m1_t maskedoff, vuint64m2_t op1, vuint32m1_t shift, size_t vl) {
  return vnsrl_wv_u32m1_tumu(mask, maskedoff, op1, shift, vl);
}

vuint32m1_t test_vnsrl_wx_u32m1_tumu(vbool32_t mask, vuint32m1_t maskedoff, vuint64m2_t op1, size_t shift, size_t vl) {
  return vnsrl_wx_u32m1_tumu(mask, maskedoff, op1, shift, vl);
}

vuint32m2_t test_vnsrl_wv_u32m2_tumu(vbool16_t mask, vuint32m2_t maskedoff, vuint64m4_t op1, vuint32m2_t shift, size_t vl) {
  return vnsrl_wv_u32m2_tumu(mask, maskedoff, op1, shift, vl);
}

vuint32m2_t test_vnsrl_wx_u32m2_tumu(vbool16_t mask, vuint32m2_t maskedoff, vuint64m4_t op1, size_t shift, size_t vl) {
  return vnsrl_wx_u32m2_tumu(mask, maskedoff, op1, shift, vl);
}

vuint32m4_t test_vnsrl_wv_u32m4_tumu(vbool8_t mask, vuint32m4_t maskedoff, vuint64m8_t op1, vuint32m4_t shift, size_t vl) {
  return vnsrl_wv_u32m4_tumu(mask, maskedoff, op1, shift, vl);
}

vuint32m4_t test_vnsrl_wx_u32m4_tumu(vbool8_t mask, vuint32m4_t maskedoff, vuint64m8_t op1, size_t shift, size_t vl) {
  return vnsrl_wx_u32m4_tumu(mask, maskedoff, op1, shift, vl);
}

vuint8mf8_t test_vnsrl_wv_u8mf8_tama(vbool64_t mask, vuint16mf4_t op1, vuint8mf8_t shift, size_t vl) {
  return vnsrl_wv_u8mf8_tama(mask, op1, shift, vl);
}

vuint8mf8_t test_vnsrl_wx_u8mf8_tama(vbool64_t mask, vuint16mf4_t op1, size_t shift, size_t vl) {
  return vnsrl_wx_u8mf8_tama(mask, op1, shift, vl);
}

vuint8mf4_t test_vnsrl_wv_u8mf4_tama(vbool32_t mask, vuint16mf2_t op1, vuint8mf4_t shift, size_t vl) {
  return vnsrl_wv_u8mf4_tama(mask, op1, shift, vl);
}

vuint8mf4_t test_vnsrl_wx_u8mf4_tama(vbool32_t mask, vuint16mf2_t op1, size_t shift, size_t vl) {
  return vnsrl_wx_u8mf4_tama(mask, op1, shift, vl);
}

vuint8mf2_t test_vnsrl_wv_u8mf2_tama(vbool16_t mask, vuint16m1_t op1, vuint8mf2_t shift, size_t vl) {
  return vnsrl_wv_u8mf2_tama(mask, op1, shift, vl);
}

vuint8mf2_t test_vnsrl_wx_u8mf2_tama(vbool16_t mask, vuint16m1_t op1, size_t shift, size_t vl) {
  return vnsrl_wx_u8mf2_tama(mask, op1, shift, vl);
}

vuint8m1_t test_vnsrl_wv_u8m1_tama(vbool8_t mask, vuint16m2_t op1, vuint8m1_t shift, size_t vl) {
  return vnsrl_wv_u8m1_tama(mask, op1, shift, vl);
}

vuint8m1_t test_vnsrl_wx_u8m1_tama(vbool8_t mask, vuint16m2_t op1, size_t shift, size_t vl) {
  return vnsrl_wx_u8m1_tama(mask, op1, shift, vl);
}

vuint8m2_t test_vnsrl_wv_u8m2_tama(vbool4_t mask, vuint16m4_t op1, vuint8m2_t shift, size_t vl) {
  return vnsrl_wv_u8m2_tama(mask, op1, shift, vl);
}

vuint8m2_t test_vnsrl_wx_u8m2_tama(vbool4_t mask, vuint16m4_t op1, size_t shift, size_t vl) {
  return vnsrl_wx_u8m2_tama(mask, op1, shift, vl);
}

vuint8m4_t test_vnsrl_wv_u8m4_tama(vbool2_t mask, vuint16m8_t op1, vuint8m4_t shift, size_t vl) {
  return vnsrl_wv_u8m4_tama(mask, op1, shift, vl);
}

vuint8m4_t test_vnsrl_wx_u8m4_tama(vbool2_t mask, vuint16m8_t op1, size_t shift, size_t vl) {
  return vnsrl_wx_u8m4_tama(mask, op1, shift, vl);
}

vuint16mf4_t test_vnsrl_wv_u16mf4_tama(vbool64_t mask, vuint32mf2_t op1, vuint16mf4_t shift, size_t vl) {
  return vnsrl_wv_u16mf4_tama(mask, op1, shift, vl);
}

vuint16mf4_t test_vnsrl_wx_u16mf4_tama(vbool64_t mask, vuint32mf2_t op1, size_t shift, size_t vl) {
  return vnsrl_wx_u16mf4_tama(mask, op1, shift, vl);
}

vuint16mf2_t test_vnsrl_wv_u16mf2_tama(vbool32_t mask, vuint32m1_t op1, vuint16mf2_t shift, size_t vl) {
  return vnsrl_wv_u16mf2_tama(mask, op1, shift, vl);
}

vuint16mf2_t test_vnsrl_wx_u16mf2_tama(vbool32_t mask, vuint32m1_t op1, size_t shift, size_t vl) {
  return vnsrl_wx_u16mf2_tama(mask, op1, shift, vl);
}

vuint16m1_t test_vnsrl_wv_u16m1_tama(vbool16_t mask, vuint32m2_t op1, vuint16m1_t shift, size_t vl) {
  return vnsrl_wv_u16m1_tama(mask, op1, shift, vl);
}

vuint16m1_t test_vnsrl_wx_u16m1_tama(vbool16_t mask, vuint32m2_t op1, size_t shift, size_t vl) {
  return vnsrl_wx_u16m1_tama(mask, op1, shift, vl);
}

vuint16m2_t test_vnsrl_wv_u16m2_tama(vbool8_t mask, vuint32m4_t op1, vuint16m2_t shift, size_t vl) {
  return vnsrl_wv_u16m2_tama(mask, op1, shift, vl);
}

vuint16m2_t test_vnsrl_wx_u16m2_tama(vbool8_t mask, vuint32m4_t op1, size_t shift, size_t vl) {
  return vnsrl_wx_u16m2_tama(mask, op1, shift, vl);
}

vuint16m4_t test_vnsrl_wv_u16m4_tama(vbool4_t mask, vuint32m8_t op1, vuint16m4_t shift, size_t vl) {
  return vnsrl_wv_u16m4_tama(mask, op1, shift, vl);
}

vuint16m4_t test_vnsrl_wx_u16m4_tama(vbool4_t mask, vuint32m8_t op1, size_t shift, size_t vl) {
  return vnsrl_wx_u16m4_tama(mask, op1, shift, vl);
}

vuint32mf2_t test_vnsrl_wv_u32mf2_tama(vbool64_t mask, vuint64m1_t op1, vuint32mf2_t shift, size_t vl) {
  return vnsrl_wv_u32mf2_tama(mask, op1, shift, vl);
}

vuint32mf2_t test_vnsrl_wx_u32mf2_tama(vbool64_t mask, vuint64m1_t op1, size_t shift, size_t vl) {
  return vnsrl_wx_u32mf2_tama(mask, op1, shift, vl);
}

vuint32m1_t test_vnsrl_wv_u32m1_tama(vbool32_t mask, vuint64m2_t op1, vuint32m1_t shift, size_t vl) {
  return vnsrl_wv_u32m1_tama(mask, op1, shift, vl);
}

vuint32m1_t test_vnsrl_wx_u32m1_tama(vbool32_t mask, vuint64m2_t op1, size_t shift, size_t vl) {
  return vnsrl_wx_u32m1_tama(mask, op1, shift, vl);
}

vuint32m2_t test_vnsrl_wv_u32m2_tama(vbool16_t mask, vuint64m4_t op1, vuint32m2_t shift, size_t vl) {
  return vnsrl_wv_u32m2_tama(mask, op1, shift, vl);
}

vuint32m2_t test_vnsrl_wx_u32m2_tama(vbool16_t mask, vuint64m4_t op1, size_t shift, size_t vl) {
  return vnsrl_wx_u32m2_tama(mask, op1, shift, vl);
}

vuint32m4_t test_vnsrl_wv_u32m4_tama(vbool8_t mask, vuint64m8_t op1, vuint32m4_t shift, size_t vl) {
  return vnsrl_wv_u32m4_tama(mask, op1, shift, vl);
}

vuint32m4_t test_vnsrl_wx_u32m4_tama(vbool8_t mask, vuint64m8_t op1, size_t shift, size_t vl) {
  return vnsrl_wx_u32m4_tama(mask, op1, shift, vl);
}

vuint8mf8_t test_vnsrl_wv_u8mf8_tamu(vbool64_t mask, vuint8mf8_t maskedoff, vuint16mf4_t op1, vuint8mf8_t shift, size_t vl) {
  return vnsrl_wv_u8mf8_tamu(mask, maskedoff, op1, shift, vl);
}

vuint8mf8_t test_vnsrl_wx_u8mf8_tamu(vbool64_t mask, vuint8mf8_t maskedoff, vuint16mf4_t op1, size_t shift, size_t vl) {
  return vnsrl_wx_u8mf8_tamu(mask, maskedoff, op1, shift, vl);
}

vuint8mf4_t test_vnsrl_wv_u8mf4_tamu(vbool32_t mask, vuint8mf4_t maskedoff, vuint16mf2_t op1, vuint8mf4_t shift, size_t vl) {
  return vnsrl_wv_u8mf4_tamu(mask, maskedoff, op1, shift, vl);
}

vuint8mf4_t test_vnsrl_wx_u8mf4_tamu(vbool32_t mask, vuint8mf4_t maskedoff, vuint16mf2_t op1, size_t shift, size_t vl) {
  return vnsrl_wx_u8mf4_tamu(mask, maskedoff, op1, shift, vl);
}

vuint8mf2_t test_vnsrl_wv_u8mf2_tamu(vbool16_t mask, vuint8mf2_t maskedoff, vuint16m1_t op1, vuint8mf2_t shift, size_t vl) {
  return vnsrl_wv_u8mf2_tamu(mask, maskedoff, op1, shift, vl);
}

vuint8mf2_t test_vnsrl_wx_u8mf2_tamu(vbool16_t mask, vuint8mf2_t maskedoff, vuint16m1_t op1, size_t shift, size_t vl) {
  return vnsrl_wx_u8mf2_tamu(mask, maskedoff, op1, shift, vl);
}

vuint8m1_t test_vnsrl_wv_u8m1_tamu(vbool8_t mask, vuint8m1_t maskedoff, vuint16m2_t op1, vuint8m1_t shift, size_t vl) {
  return vnsrl_wv_u8m1_tamu(mask, maskedoff, op1, shift, vl);
}

vuint8m1_t test_vnsrl_wx_u8m1_tamu(vbool8_t mask, vuint8m1_t maskedoff, vuint16m2_t op1, size_t shift, size_t vl) {
  return vnsrl_wx_u8m1_tamu(mask, maskedoff, op1, shift, vl);
}

vuint8m2_t test_vnsrl_wv_u8m2_tamu(vbool4_t mask, vuint8m2_t maskedoff, vuint16m4_t op1, vuint8m2_t shift, size_t vl) {
  return vnsrl_wv_u8m2_tamu(mask, maskedoff, op1, shift, vl);
}

vuint8m2_t test_vnsrl_wx_u8m2_tamu(vbool4_t mask, vuint8m2_t maskedoff, vuint16m4_t op1, size_t shift, size_t vl) {
  return vnsrl_wx_u8m2_tamu(mask, maskedoff, op1, shift, vl);
}

vuint8m4_t test_vnsrl_wv_u8m4_tamu(vbool2_t mask, vuint8m4_t maskedoff, vuint16m8_t op1, vuint8m4_t shift, size_t vl) {
  return vnsrl_wv_u8m4_tamu(mask, maskedoff, op1, shift, vl);
}

vuint8m4_t test_vnsrl_wx_u8m4_tamu(vbool2_t mask, vuint8m4_t maskedoff, vuint16m8_t op1, size_t shift, size_t vl) {
  return vnsrl_wx_u8m4_tamu(mask, maskedoff, op1, shift, vl);
}

vuint16mf4_t test_vnsrl_wv_u16mf4_tamu(vbool64_t mask, vuint16mf4_t maskedoff, vuint32mf2_t op1, vuint16mf4_t shift, size_t vl) {
  return vnsrl_wv_u16mf4_tamu(mask, maskedoff, op1, shift, vl);
}

vuint16mf4_t test_vnsrl_wx_u16mf4_tamu(vbool64_t mask, vuint16mf4_t maskedoff, vuint32mf2_t op1, size_t shift, size_t vl) {
  return vnsrl_wx_u16mf4_tamu(mask, maskedoff, op1, shift, vl);
}

vuint16mf2_t test_vnsrl_wv_u16mf2_tamu(vbool32_t mask, vuint16mf2_t maskedoff, vuint32m1_t op1, vuint16mf2_t shift, size_t vl) {
  return vnsrl_wv_u16mf2_tamu(mask, maskedoff, op1, shift, vl);
}

vuint16mf2_t test_vnsrl_wx_u16mf2_tamu(vbool32_t mask, vuint16mf2_t maskedoff, vuint32m1_t op1, size_t shift, size_t vl) {
  return vnsrl_wx_u16mf2_tamu(mask, maskedoff, op1, shift, vl);
}

vuint16m1_t test_vnsrl_wv_u16m1_tamu(vbool16_t mask, vuint16m1_t maskedoff, vuint32m2_t op1, vuint16m1_t shift, size_t vl) {
  return vnsrl_wv_u16m1_tamu(mask, maskedoff, op1, shift, vl);
}

vuint16m1_t test_vnsrl_wx_u16m1_tamu(vbool16_t mask, vuint16m1_t maskedoff, vuint32m2_t op1, size_t shift, size_t vl) {
  return vnsrl_wx_u16m1_tamu(mask, maskedoff, op1, shift, vl);
}

vuint16m2_t test_vnsrl_wv_u16m2_tamu(vbool8_t mask, vuint16m2_t maskedoff, vuint32m4_t op1, vuint16m2_t shift, size_t vl) {
  return vnsrl_wv_u16m2_tamu(mask, maskedoff, op1, shift, vl);
}

vuint16m2_t test_vnsrl_wx_u16m2_tamu(vbool8_t mask, vuint16m2_t maskedoff, vuint32m4_t op1, size_t shift, size_t vl) {
  return vnsrl_wx_u16m2_tamu(mask, maskedoff, op1, shift, vl);
}

vuint16m4_t test_vnsrl_wv_u16m4_tamu(vbool4_t mask, vuint16m4_t maskedoff, vuint32m8_t op1, vuint16m4_t shift, size_t vl) {
  return vnsrl_wv_u16m4_tamu(mask, maskedoff, op1, shift, vl);
}

vuint16m4_t test_vnsrl_wx_u16m4_tamu(vbool4_t mask, vuint16m4_t maskedoff, vuint32m8_t op1, size_t shift, size_t vl) {
  return vnsrl_wx_u16m4_tamu(mask, maskedoff, op1, shift, vl);
}

vuint32mf2_t test_vnsrl_wv_u32mf2_tamu(vbool64_t mask, vuint32mf2_t maskedoff, vuint64m1_t op1, vuint32mf2_t shift, size_t vl) {
  return vnsrl_wv_u32mf2_tamu(mask, maskedoff, op1, shift, vl);
}

vuint32mf2_t test_vnsrl_wx_u32mf2_tamu(vbool64_t mask, vuint32mf2_t maskedoff, vuint64m1_t op1, size_t shift, size_t vl) {
  return vnsrl_wx_u32mf2_tamu(mask, maskedoff, op1, shift, vl);
}

vuint32m1_t test_vnsrl_wv_u32m1_tamu(vbool32_t mask, vuint32m1_t maskedoff, vuint64m2_t op1, vuint32m1_t shift, size_t vl) {
  return vnsrl_wv_u32m1_tamu(mask, maskedoff, op1, shift, vl);
}

vuint32m1_t test_vnsrl_wx_u32m1_tamu(vbool32_t mask, vuint32m1_t maskedoff, vuint64m2_t op1, size_t shift, size_t vl) {
  return vnsrl_wx_u32m1_tamu(mask, maskedoff, op1, shift, vl);
}

vuint32m2_t test_vnsrl_wv_u32m2_tamu(vbool16_t mask, vuint32m2_t maskedoff, vuint64m4_t op1, vuint32m2_t shift, size_t vl) {
  return vnsrl_wv_u32m2_tamu(mask, maskedoff, op1, shift, vl);
}

vuint32m2_t test_vnsrl_wx_u32m2_tamu(vbool16_t mask, vuint32m2_t maskedoff, vuint64m4_t op1, size_t shift, size_t vl) {
  return vnsrl_wx_u32m2_tamu(mask, maskedoff, op1, shift, vl);
}

vuint32m4_t test_vnsrl_wv_u32m4_tamu(vbool8_t mask, vuint32m4_t maskedoff, vuint64m8_t op1, vuint32m4_t shift, size_t vl) {
  return vnsrl_wv_u32m4_tamu(mask, maskedoff, op1, shift, vl);
}

vuint32m4_t test_vnsrl_wx_u32m4_tamu(vbool8_t mask, vuint32m4_t maskedoff, vuint64m8_t op1, size_t shift, size_t vl) {
  return vnsrl_wx_u32m4_tamu(mask, maskedoff, op1, shift, vl);
}

