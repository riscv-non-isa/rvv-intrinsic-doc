#include <stdint.h>
#include "rvv-v0p10-compatible-headers/overloaded-non-policy.h"
#include "rvv-v0p10-compatible-headers/overloaded-policy.h"
#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
vuint16mf4_t test_vzext_vf2_u16mf4_tu(vuint16mf4_t maskedoff, vuint8mf8_t op1, size_t vl) {
  return vzext_vf2_tu(maskedoff, op1, vl);
}

vuint16mf2_t test_vzext_vf2_u16mf2_tu(vuint16mf2_t maskedoff, vuint8mf4_t op1, size_t vl) {
  return vzext_vf2_tu(maskedoff, op1, vl);
}

vuint16m1_t test_vzext_vf2_u16m1_tu(vuint16m1_t maskedoff, vuint8mf2_t op1, size_t vl) {
  return vzext_vf2_tu(maskedoff, op1, vl);
}

vuint16m2_t test_vzext_vf2_u16m2_tu(vuint16m2_t maskedoff, vuint8m1_t op1, size_t vl) {
  return vzext_vf2_tu(maskedoff, op1, vl);
}

vuint16m4_t test_vzext_vf2_u16m4_tu(vuint16m4_t maskedoff, vuint8m2_t op1, size_t vl) {
  return vzext_vf2_tu(maskedoff, op1, vl);
}

vuint16m8_t test_vzext_vf2_u16m8_tu(vuint16m8_t maskedoff, vuint8m4_t op1, size_t vl) {
  return vzext_vf2_tu(maskedoff, op1, vl);
}

vuint32mf2_t test_vzext_vf4_u32mf2_tu(vuint32mf2_t maskedoff, vuint8mf8_t op1, size_t vl) {
  return vzext_vf4_tu(maskedoff, op1, vl);
}

vuint32m1_t test_vzext_vf4_u32m1_tu(vuint32m1_t maskedoff, vuint8mf4_t op1, size_t vl) {
  return vzext_vf4_tu(maskedoff, op1, vl);
}

vuint32m2_t test_vzext_vf4_u32m2_tu(vuint32m2_t maskedoff, vuint8mf2_t op1, size_t vl) {
  return vzext_vf4_tu(maskedoff, op1, vl);
}

vuint32m4_t test_vzext_vf4_u32m4_tu(vuint32m4_t maskedoff, vuint8m1_t op1, size_t vl) {
  return vzext_vf4_tu(maskedoff, op1, vl);
}

vuint32m8_t test_vzext_vf4_u32m8_tu(vuint32m8_t maskedoff, vuint8m2_t op1, size_t vl) {
  return vzext_vf4_tu(maskedoff, op1, vl);
}

vuint64m1_t test_vzext_vf8_u64m1_tu(vuint64m1_t maskedoff, vuint8mf8_t op1, size_t vl) {
  return vzext_vf8_tu(maskedoff, op1, vl);
}

vuint64m2_t test_vzext_vf8_u64m2_tu(vuint64m2_t maskedoff, vuint8mf4_t op1, size_t vl) {
  return vzext_vf8_tu(maskedoff, op1, vl);
}

vuint64m4_t test_vzext_vf8_u64m4_tu(vuint64m4_t maskedoff, vuint8mf2_t op1, size_t vl) {
  return vzext_vf8_tu(maskedoff, op1, vl);
}

vuint64m8_t test_vzext_vf8_u64m8_tu(vuint64m8_t maskedoff, vuint8m1_t op1, size_t vl) {
  return vzext_vf8_tu(maskedoff, op1, vl);
}

vuint32mf2_t test_vzext_vf2_u32mf2_tu(vuint32mf2_t maskedoff, vuint16mf4_t op1, size_t vl) {
  return vzext_vf2_tu(maskedoff, op1, vl);
}

vuint32m1_t test_vzext_vf2_u32m1_tu(vuint32m1_t maskedoff, vuint16mf2_t op1, size_t vl) {
  return vzext_vf2_tu(maskedoff, op1, vl);
}

vuint32m2_t test_vzext_vf2_u32m2_tu(vuint32m2_t maskedoff, vuint16m1_t op1, size_t vl) {
  return vzext_vf2_tu(maskedoff, op1, vl);
}

vuint32m4_t test_vzext_vf2_u32m4_tu(vuint32m4_t maskedoff, vuint16m2_t op1, size_t vl) {
  return vzext_vf2_tu(maskedoff, op1, vl);
}

vuint32m8_t test_vzext_vf2_u32m8_tu(vuint32m8_t maskedoff, vuint16m4_t op1, size_t vl) {
  return vzext_vf2_tu(maskedoff, op1, vl);
}

vuint64m1_t test_vzext_vf4_u64m1_tu(vuint64m1_t maskedoff, vuint16mf4_t op1, size_t vl) {
  return vzext_vf4_tu(maskedoff, op1, vl);
}

vuint64m2_t test_vzext_vf4_u64m2_tu(vuint64m2_t maskedoff, vuint16mf2_t op1, size_t vl) {
  return vzext_vf4_tu(maskedoff, op1, vl);
}

vuint64m4_t test_vzext_vf4_u64m4_tu(vuint64m4_t maskedoff, vuint16m1_t op1, size_t vl) {
  return vzext_vf4_tu(maskedoff, op1, vl);
}

vuint64m8_t test_vzext_vf4_u64m8_tu(vuint64m8_t maskedoff, vuint16m2_t op1, size_t vl) {
  return vzext_vf4_tu(maskedoff, op1, vl);
}

vuint64m1_t test_vzext_vf2_u64m1_tu(vuint64m1_t maskedoff, vuint32mf2_t op1, size_t vl) {
  return vzext_vf2_tu(maskedoff, op1, vl);
}

vuint64m2_t test_vzext_vf2_u64m2_tu(vuint64m2_t maskedoff, vuint32m1_t op1, size_t vl) {
  return vzext_vf2_tu(maskedoff, op1, vl);
}

vuint64m4_t test_vzext_vf2_u64m4_tu(vuint64m4_t maskedoff, vuint32m2_t op1, size_t vl) {
  return vzext_vf2_tu(maskedoff, op1, vl);
}

vuint64m8_t test_vzext_vf2_u64m8_tu(vuint64m8_t maskedoff, vuint32m4_t op1, size_t vl) {
  return vzext_vf2_tu(maskedoff, op1, vl);
}

vuint16mf4_t test_vzext_vf2_u16mf4_ta(vuint8mf8_t op1, size_t vl) {
  return vzext_vf2_ta(op1, vl);
}

vuint16mf2_t test_vzext_vf2_u16mf2_ta(vuint8mf4_t op1, size_t vl) {
  return vzext_vf2_ta(op1, vl);
}

vuint16m1_t test_vzext_vf2_u16m1_ta(vuint8mf2_t op1, size_t vl) {
  return vzext_vf2_ta(op1, vl);
}

vuint16m2_t test_vzext_vf2_u16m2_ta(vuint8m1_t op1, size_t vl) {
  return vzext_vf2_ta(op1, vl);
}

vuint16m4_t test_vzext_vf2_u16m4_ta(vuint8m2_t op1, size_t vl) {
  return vzext_vf2_ta(op1, vl);
}

vuint16m8_t test_vzext_vf2_u16m8_ta(vuint8m4_t op1, size_t vl) {
  return vzext_vf2_ta(op1, vl);
}

vuint32mf2_t test_vzext_vf4_u32mf2_ta(vuint8mf8_t op1, size_t vl) {
  return vzext_vf4_ta(op1, vl);
}

vuint32m1_t test_vzext_vf4_u32m1_ta(vuint8mf4_t op1, size_t vl) {
  return vzext_vf4_ta(op1, vl);
}

vuint32m2_t test_vzext_vf4_u32m2_ta(vuint8mf2_t op1, size_t vl) {
  return vzext_vf4_ta(op1, vl);
}

vuint32m4_t test_vzext_vf4_u32m4_ta(vuint8m1_t op1, size_t vl) {
  return vzext_vf4_ta(op1, vl);
}

vuint32m8_t test_vzext_vf4_u32m8_ta(vuint8m2_t op1, size_t vl) {
  return vzext_vf4_ta(op1, vl);
}

vuint64m1_t test_vzext_vf8_u64m1_ta(vuint8mf8_t op1, size_t vl) {
  return vzext_vf8_ta(op1, vl);
}

vuint64m2_t test_vzext_vf8_u64m2_ta(vuint8mf4_t op1, size_t vl) {
  return vzext_vf8_ta(op1, vl);
}

vuint64m4_t test_vzext_vf8_u64m4_ta(vuint8mf2_t op1, size_t vl) {
  return vzext_vf8_ta(op1, vl);
}

vuint64m8_t test_vzext_vf8_u64m8_ta(vuint8m1_t op1, size_t vl) {
  return vzext_vf8_ta(op1, vl);
}

vuint32mf2_t test_vzext_vf2_u32mf2_ta(vuint16mf4_t op1, size_t vl) {
  return vzext_vf2_ta(op1, vl);
}

vuint32m1_t test_vzext_vf2_u32m1_ta(vuint16mf2_t op1, size_t vl) {
  return vzext_vf2_ta(op1, vl);
}

vuint32m2_t test_vzext_vf2_u32m2_ta(vuint16m1_t op1, size_t vl) {
  return vzext_vf2_ta(op1, vl);
}

vuint32m4_t test_vzext_vf2_u32m4_ta(vuint16m2_t op1, size_t vl) {
  return vzext_vf2_ta(op1, vl);
}

vuint32m8_t test_vzext_vf2_u32m8_ta(vuint16m4_t op1, size_t vl) {
  return vzext_vf2_ta(op1, vl);
}

vuint64m1_t test_vzext_vf4_u64m1_ta(vuint16mf4_t op1, size_t vl) {
  return vzext_vf4_ta(op1, vl);
}

vuint64m2_t test_vzext_vf4_u64m2_ta(vuint16mf2_t op1, size_t vl) {
  return vzext_vf4_ta(op1, vl);
}

vuint64m4_t test_vzext_vf4_u64m4_ta(vuint16m1_t op1, size_t vl) {
  return vzext_vf4_ta(op1, vl);
}

vuint64m8_t test_vzext_vf4_u64m8_ta(vuint16m2_t op1, size_t vl) {
  return vzext_vf4_ta(op1, vl);
}

vuint64m1_t test_vzext_vf2_u64m1_ta(vuint32mf2_t op1, size_t vl) {
  return vzext_vf2_ta(op1, vl);
}

vuint64m2_t test_vzext_vf2_u64m2_ta(vuint32m1_t op1, size_t vl) {
  return vzext_vf2_ta(op1, vl);
}

vuint64m4_t test_vzext_vf2_u64m4_ta(vuint32m2_t op1, size_t vl) {
  return vzext_vf2_ta(op1, vl);
}

vuint64m8_t test_vzext_vf2_u64m8_ta(vuint32m4_t op1, size_t vl) {
  return vzext_vf2_ta(op1, vl);
}

vuint16mf4_t test_vzext_vf2_u16mf4_tuma(vbool64_t mask, vuint16mf4_t maskedoff, vuint8mf8_t op1, size_t vl) {
  return vzext_vf2_tuma(mask, maskedoff, op1, vl);
}

vuint16mf2_t test_vzext_vf2_u16mf2_tuma(vbool32_t mask, vuint16mf2_t maskedoff, vuint8mf4_t op1, size_t vl) {
  return vzext_vf2_tuma(mask, maskedoff, op1, vl);
}

vuint16m1_t test_vzext_vf2_u16m1_tuma(vbool16_t mask, vuint16m1_t maskedoff, vuint8mf2_t op1, size_t vl) {
  return vzext_vf2_tuma(mask, maskedoff, op1, vl);
}

vuint16m2_t test_vzext_vf2_u16m2_tuma(vbool8_t mask, vuint16m2_t maskedoff, vuint8m1_t op1, size_t vl) {
  return vzext_vf2_tuma(mask, maskedoff, op1, vl);
}

vuint16m4_t test_vzext_vf2_u16m4_tuma(vbool4_t mask, vuint16m4_t maskedoff, vuint8m2_t op1, size_t vl) {
  return vzext_vf2_tuma(mask, maskedoff, op1, vl);
}

vuint16m8_t test_vzext_vf2_u16m8_tuma(vbool2_t mask, vuint16m8_t maskedoff, vuint8m4_t op1, size_t vl) {
  return vzext_vf2_tuma(mask, maskedoff, op1, vl);
}

vuint32mf2_t test_vzext_vf4_u32mf2_tuma(vbool64_t mask, vuint32mf2_t maskedoff, vuint8mf8_t op1, size_t vl) {
  return vzext_vf4_tuma(mask, maskedoff, op1, vl);
}

vuint32m1_t test_vzext_vf4_u32m1_tuma(vbool32_t mask, vuint32m1_t maskedoff, vuint8mf4_t op1, size_t vl) {
  return vzext_vf4_tuma(mask, maskedoff, op1, vl);
}

vuint32m2_t test_vzext_vf4_u32m2_tuma(vbool16_t mask, vuint32m2_t maskedoff, vuint8mf2_t op1, size_t vl) {
  return vzext_vf4_tuma(mask, maskedoff, op1, vl);
}

vuint32m4_t test_vzext_vf4_u32m4_tuma(vbool8_t mask, vuint32m4_t maskedoff, vuint8m1_t op1, size_t vl) {
  return vzext_vf4_tuma(mask, maskedoff, op1, vl);
}

vuint32m8_t test_vzext_vf4_u32m8_tuma(vbool4_t mask, vuint32m8_t maskedoff, vuint8m2_t op1, size_t vl) {
  return vzext_vf4_tuma(mask, maskedoff, op1, vl);
}

vuint64m1_t test_vzext_vf8_u64m1_tuma(vbool64_t mask, vuint64m1_t maskedoff, vuint8mf8_t op1, size_t vl) {
  return vzext_vf8_tuma(mask, maskedoff, op1, vl);
}

vuint64m2_t test_vzext_vf8_u64m2_tuma(vbool32_t mask, vuint64m2_t maskedoff, vuint8mf4_t op1, size_t vl) {
  return vzext_vf8_tuma(mask, maskedoff, op1, vl);
}

vuint64m4_t test_vzext_vf8_u64m4_tuma(vbool16_t mask, vuint64m4_t maskedoff, vuint8mf2_t op1, size_t vl) {
  return vzext_vf8_tuma(mask, maskedoff, op1, vl);
}

vuint64m8_t test_vzext_vf8_u64m8_tuma(vbool8_t mask, vuint64m8_t maskedoff, vuint8m1_t op1, size_t vl) {
  return vzext_vf8_tuma(mask, maskedoff, op1, vl);
}

vuint32mf2_t test_vzext_vf2_u32mf2_tuma(vbool64_t mask, vuint32mf2_t maskedoff, vuint16mf4_t op1, size_t vl) {
  return vzext_vf2_tuma(mask, maskedoff, op1, vl);
}

vuint32m1_t test_vzext_vf2_u32m1_tuma(vbool32_t mask, vuint32m1_t maskedoff, vuint16mf2_t op1, size_t vl) {
  return vzext_vf2_tuma(mask, maskedoff, op1, vl);
}

vuint32m2_t test_vzext_vf2_u32m2_tuma(vbool16_t mask, vuint32m2_t maskedoff, vuint16m1_t op1, size_t vl) {
  return vzext_vf2_tuma(mask, maskedoff, op1, vl);
}

vuint32m4_t test_vzext_vf2_u32m4_tuma(vbool8_t mask, vuint32m4_t maskedoff, vuint16m2_t op1, size_t vl) {
  return vzext_vf2_tuma(mask, maskedoff, op1, vl);
}

vuint32m8_t test_vzext_vf2_u32m8_tuma(vbool4_t mask, vuint32m8_t maskedoff, vuint16m4_t op1, size_t vl) {
  return vzext_vf2_tuma(mask, maskedoff, op1, vl);
}

vuint64m1_t test_vzext_vf4_u64m1_tuma(vbool64_t mask, vuint64m1_t maskedoff, vuint16mf4_t op1, size_t vl) {
  return vzext_vf4_tuma(mask, maskedoff, op1, vl);
}

vuint64m2_t test_vzext_vf4_u64m2_tuma(vbool32_t mask, vuint64m2_t maskedoff, vuint16mf2_t op1, size_t vl) {
  return vzext_vf4_tuma(mask, maskedoff, op1, vl);
}

vuint64m4_t test_vzext_vf4_u64m4_tuma(vbool16_t mask, vuint64m4_t maskedoff, vuint16m1_t op1, size_t vl) {
  return vzext_vf4_tuma(mask, maskedoff, op1, vl);
}

vuint64m8_t test_vzext_vf4_u64m8_tuma(vbool8_t mask, vuint64m8_t maskedoff, vuint16m2_t op1, size_t vl) {
  return vzext_vf4_tuma(mask, maskedoff, op1, vl);
}

vuint64m1_t test_vzext_vf2_u64m1_tuma(vbool64_t mask, vuint64m1_t maskedoff, vuint32mf2_t op1, size_t vl) {
  return vzext_vf2_tuma(mask, maskedoff, op1, vl);
}

vuint64m2_t test_vzext_vf2_u64m2_tuma(vbool32_t mask, vuint64m2_t maskedoff, vuint32m1_t op1, size_t vl) {
  return vzext_vf2_tuma(mask, maskedoff, op1, vl);
}

vuint64m4_t test_vzext_vf2_u64m4_tuma(vbool16_t mask, vuint64m4_t maskedoff, vuint32m2_t op1, size_t vl) {
  return vzext_vf2_tuma(mask, maskedoff, op1, vl);
}

vuint64m8_t test_vzext_vf2_u64m8_tuma(vbool8_t mask, vuint64m8_t maskedoff, vuint32m4_t op1, size_t vl) {
  return vzext_vf2_tuma(mask, maskedoff, op1, vl);
}

vuint16mf4_t test_vzext_vf2_u16mf4_tumu(vbool64_t mask, vuint16mf4_t maskedoff, vuint8mf8_t op1, size_t vl) {
  return vzext_vf2_tumu(mask, maskedoff, op1, vl);
}

vuint16mf2_t test_vzext_vf2_u16mf2_tumu(vbool32_t mask, vuint16mf2_t maskedoff, vuint8mf4_t op1, size_t vl) {
  return vzext_vf2_tumu(mask, maskedoff, op1, vl);
}

vuint16m1_t test_vzext_vf2_u16m1_tumu(vbool16_t mask, vuint16m1_t maskedoff, vuint8mf2_t op1, size_t vl) {
  return vzext_vf2_tumu(mask, maskedoff, op1, vl);
}

vuint16m2_t test_vzext_vf2_u16m2_tumu(vbool8_t mask, vuint16m2_t maskedoff, vuint8m1_t op1, size_t vl) {
  return vzext_vf2_tumu(mask, maskedoff, op1, vl);
}

vuint16m4_t test_vzext_vf2_u16m4_tumu(vbool4_t mask, vuint16m4_t maskedoff, vuint8m2_t op1, size_t vl) {
  return vzext_vf2_tumu(mask, maskedoff, op1, vl);
}

vuint16m8_t test_vzext_vf2_u16m8_tumu(vbool2_t mask, vuint16m8_t maskedoff, vuint8m4_t op1, size_t vl) {
  return vzext_vf2_tumu(mask, maskedoff, op1, vl);
}

vuint32mf2_t test_vzext_vf4_u32mf2_tumu(vbool64_t mask, vuint32mf2_t maskedoff, vuint8mf8_t op1, size_t vl) {
  return vzext_vf4_tumu(mask, maskedoff, op1, vl);
}

vuint32m1_t test_vzext_vf4_u32m1_tumu(vbool32_t mask, vuint32m1_t maskedoff, vuint8mf4_t op1, size_t vl) {
  return vzext_vf4_tumu(mask, maskedoff, op1, vl);
}

vuint32m2_t test_vzext_vf4_u32m2_tumu(vbool16_t mask, vuint32m2_t maskedoff, vuint8mf2_t op1, size_t vl) {
  return vzext_vf4_tumu(mask, maskedoff, op1, vl);
}

vuint32m4_t test_vzext_vf4_u32m4_tumu(vbool8_t mask, vuint32m4_t maskedoff, vuint8m1_t op1, size_t vl) {
  return vzext_vf4_tumu(mask, maskedoff, op1, vl);
}

vuint32m8_t test_vzext_vf4_u32m8_tumu(vbool4_t mask, vuint32m8_t maskedoff, vuint8m2_t op1, size_t vl) {
  return vzext_vf4_tumu(mask, maskedoff, op1, vl);
}

vuint64m1_t test_vzext_vf8_u64m1_tumu(vbool64_t mask, vuint64m1_t maskedoff, vuint8mf8_t op1, size_t vl) {
  return vzext_vf8_tumu(mask, maskedoff, op1, vl);
}

vuint64m2_t test_vzext_vf8_u64m2_tumu(vbool32_t mask, vuint64m2_t maskedoff, vuint8mf4_t op1, size_t vl) {
  return vzext_vf8_tumu(mask, maskedoff, op1, vl);
}

vuint64m4_t test_vzext_vf8_u64m4_tumu(vbool16_t mask, vuint64m4_t maskedoff, vuint8mf2_t op1, size_t vl) {
  return vzext_vf8_tumu(mask, maskedoff, op1, vl);
}

vuint64m8_t test_vzext_vf8_u64m8_tumu(vbool8_t mask, vuint64m8_t maskedoff, vuint8m1_t op1, size_t vl) {
  return vzext_vf8_tumu(mask, maskedoff, op1, vl);
}

vuint32mf2_t test_vzext_vf2_u32mf2_tumu(vbool64_t mask, vuint32mf2_t maskedoff, vuint16mf4_t op1, size_t vl) {
  return vzext_vf2_tumu(mask, maskedoff, op1, vl);
}

vuint32m1_t test_vzext_vf2_u32m1_tumu(vbool32_t mask, vuint32m1_t maskedoff, vuint16mf2_t op1, size_t vl) {
  return vzext_vf2_tumu(mask, maskedoff, op1, vl);
}

vuint32m2_t test_vzext_vf2_u32m2_tumu(vbool16_t mask, vuint32m2_t maskedoff, vuint16m1_t op1, size_t vl) {
  return vzext_vf2_tumu(mask, maskedoff, op1, vl);
}

vuint32m4_t test_vzext_vf2_u32m4_tumu(vbool8_t mask, vuint32m4_t maskedoff, vuint16m2_t op1, size_t vl) {
  return vzext_vf2_tumu(mask, maskedoff, op1, vl);
}

vuint32m8_t test_vzext_vf2_u32m8_tumu(vbool4_t mask, vuint32m8_t maskedoff, vuint16m4_t op1, size_t vl) {
  return vzext_vf2_tumu(mask, maskedoff, op1, vl);
}

vuint64m1_t test_vzext_vf4_u64m1_tumu(vbool64_t mask, vuint64m1_t maskedoff, vuint16mf4_t op1, size_t vl) {
  return vzext_vf4_tumu(mask, maskedoff, op1, vl);
}

vuint64m2_t test_vzext_vf4_u64m2_tumu(vbool32_t mask, vuint64m2_t maskedoff, vuint16mf2_t op1, size_t vl) {
  return vzext_vf4_tumu(mask, maskedoff, op1, vl);
}

vuint64m4_t test_vzext_vf4_u64m4_tumu(vbool16_t mask, vuint64m4_t maskedoff, vuint16m1_t op1, size_t vl) {
  return vzext_vf4_tumu(mask, maskedoff, op1, vl);
}

vuint64m8_t test_vzext_vf4_u64m8_tumu(vbool8_t mask, vuint64m8_t maskedoff, vuint16m2_t op1, size_t vl) {
  return vzext_vf4_tumu(mask, maskedoff, op1, vl);
}

vuint64m1_t test_vzext_vf2_u64m1_tumu(vbool64_t mask, vuint64m1_t maskedoff, vuint32mf2_t op1, size_t vl) {
  return vzext_vf2_tumu(mask, maskedoff, op1, vl);
}

vuint64m2_t test_vzext_vf2_u64m2_tumu(vbool32_t mask, vuint64m2_t maskedoff, vuint32m1_t op1, size_t vl) {
  return vzext_vf2_tumu(mask, maskedoff, op1, vl);
}

vuint64m4_t test_vzext_vf2_u64m4_tumu(vbool16_t mask, vuint64m4_t maskedoff, vuint32m2_t op1, size_t vl) {
  return vzext_vf2_tumu(mask, maskedoff, op1, vl);
}

vuint64m8_t test_vzext_vf2_u64m8_tumu(vbool8_t mask, vuint64m8_t maskedoff, vuint32m4_t op1, size_t vl) {
  return vzext_vf2_tumu(mask, maskedoff, op1, vl);
}

vuint16mf4_t test_vzext_vf2_u16mf4_tama(vbool64_t mask, vuint8mf8_t op1, size_t vl) {
  return vzext_vf2_tama(mask, op1, vl);
}

vuint16mf2_t test_vzext_vf2_u16mf2_tama(vbool32_t mask, vuint8mf4_t op1, size_t vl) {
  return vzext_vf2_tama(mask, op1, vl);
}

vuint16m1_t test_vzext_vf2_u16m1_tama(vbool16_t mask, vuint8mf2_t op1, size_t vl) {
  return vzext_vf2_tama(mask, op1, vl);
}

vuint16m2_t test_vzext_vf2_u16m2_tama(vbool8_t mask, vuint8m1_t op1, size_t vl) {
  return vzext_vf2_tama(mask, op1, vl);
}

vuint16m4_t test_vzext_vf2_u16m4_tama(vbool4_t mask, vuint8m2_t op1, size_t vl) {
  return vzext_vf2_tama(mask, op1, vl);
}

vuint16m8_t test_vzext_vf2_u16m8_tama(vbool2_t mask, vuint8m4_t op1, size_t vl) {
  return vzext_vf2_tama(mask, op1, vl);
}

vuint32mf2_t test_vzext_vf4_u32mf2_tama(vbool64_t mask, vuint8mf8_t op1, size_t vl) {
  return vzext_vf4_tama(mask, op1, vl);
}

vuint32m1_t test_vzext_vf4_u32m1_tama(vbool32_t mask, vuint8mf4_t op1, size_t vl) {
  return vzext_vf4_tama(mask, op1, vl);
}

vuint32m2_t test_vzext_vf4_u32m2_tama(vbool16_t mask, vuint8mf2_t op1, size_t vl) {
  return vzext_vf4_tama(mask, op1, vl);
}

vuint32m4_t test_vzext_vf4_u32m4_tama(vbool8_t mask, vuint8m1_t op1, size_t vl) {
  return vzext_vf4_tama(mask, op1, vl);
}

vuint32m8_t test_vzext_vf4_u32m8_tama(vbool4_t mask, vuint8m2_t op1, size_t vl) {
  return vzext_vf4_tama(mask, op1, vl);
}

vuint64m1_t test_vzext_vf8_u64m1_tama(vbool64_t mask, vuint8mf8_t op1, size_t vl) {
  return vzext_vf8_tama(mask, op1, vl);
}

vuint64m2_t test_vzext_vf8_u64m2_tama(vbool32_t mask, vuint8mf4_t op1, size_t vl) {
  return vzext_vf8_tama(mask, op1, vl);
}

vuint64m4_t test_vzext_vf8_u64m4_tama(vbool16_t mask, vuint8mf2_t op1, size_t vl) {
  return vzext_vf8_tama(mask, op1, vl);
}

vuint64m8_t test_vzext_vf8_u64m8_tama(vbool8_t mask, vuint8m1_t op1, size_t vl) {
  return vzext_vf8_tama(mask, op1, vl);
}

vuint32mf2_t test_vzext_vf2_u32mf2_tama(vbool64_t mask, vuint16mf4_t op1, size_t vl) {
  return vzext_vf2_tama(mask, op1, vl);
}

vuint32m1_t test_vzext_vf2_u32m1_tama(vbool32_t mask, vuint16mf2_t op1, size_t vl) {
  return vzext_vf2_tama(mask, op1, vl);
}

vuint32m2_t test_vzext_vf2_u32m2_tama(vbool16_t mask, vuint16m1_t op1, size_t vl) {
  return vzext_vf2_tama(mask, op1, vl);
}

vuint32m4_t test_vzext_vf2_u32m4_tama(vbool8_t mask, vuint16m2_t op1, size_t vl) {
  return vzext_vf2_tama(mask, op1, vl);
}

vuint32m8_t test_vzext_vf2_u32m8_tama(vbool4_t mask, vuint16m4_t op1, size_t vl) {
  return vzext_vf2_tama(mask, op1, vl);
}

vuint64m1_t test_vzext_vf4_u64m1_tama(vbool64_t mask, vuint16mf4_t op1, size_t vl) {
  return vzext_vf4_tama(mask, op1, vl);
}

vuint64m2_t test_vzext_vf4_u64m2_tama(vbool32_t mask, vuint16mf2_t op1, size_t vl) {
  return vzext_vf4_tama(mask, op1, vl);
}

vuint64m4_t test_vzext_vf4_u64m4_tama(vbool16_t mask, vuint16m1_t op1, size_t vl) {
  return vzext_vf4_tama(mask, op1, vl);
}

vuint64m8_t test_vzext_vf4_u64m8_tama(vbool8_t mask, vuint16m2_t op1, size_t vl) {
  return vzext_vf4_tama(mask, op1, vl);
}

vuint64m1_t test_vzext_vf2_u64m1_tama(vbool64_t mask, vuint32mf2_t op1, size_t vl) {
  return vzext_vf2_tama(mask, op1, vl);
}

vuint64m2_t test_vzext_vf2_u64m2_tama(vbool32_t mask, vuint32m1_t op1, size_t vl) {
  return vzext_vf2_tama(mask, op1, vl);
}

vuint64m4_t test_vzext_vf2_u64m4_tama(vbool16_t mask, vuint32m2_t op1, size_t vl) {
  return vzext_vf2_tama(mask, op1, vl);
}

vuint64m8_t test_vzext_vf2_u64m8_tama(vbool8_t mask, vuint32m4_t op1, size_t vl) {
  return vzext_vf2_tama(mask, op1, vl);
}

vuint16mf4_t test_vzext_vf2_u16mf4_tamu(vbool64_t mask, vuint16mf4_t maskedoff, vuint8mf8_t op1, size_t vl) {
  return vzext_vf2_tamu(mask, maskedoff, op1, vl);
}

vuint16mf2_t test_vzext_vf2_u16mf2_tamu(vbool32_t mask, vuint16mf2_t maskedoff, vuint8mf4_t op1, size_t vl) {
  return vzext_vf2_tamu(mask, maskedoff, op1, vl);
}

vuint16m1_t test_vzext_vf2_u16m1_tamu(vbool16_t mask, vuint16m1_t maskedoff, vuint8mf2_t op1, size_t vl) {
  return vzext_vf2_tamu(mask, maskedoff, op1, vl);
}

vuint16m2_t test_vzext_vf2_u16m2_tamu(vbool8_t mask, vuint16m2_t maskedoff, vuint8m1_t op1, size_t vl) {
  return vzext_vf2_tamu(mask, maskedoff, op1, vl);
}

vuint16m4_t test_vzext_vf2_u16m4_tamu(vbool4_t mask, vuint16m4_t maskedoff, vuint8m2_t op1, size_t vl) {
  return vzext_vf2_tamu(mask, maskedoff, op1, vl);
}

vuint16m8_t test_vzext_vf2_u16m8_tamu(vbool2_t mask, vuint16m8_t maskedoff, vuint8m4_t op1, size_t vl) {
  return vzext_vf2_tamu(mask, maskedoff, op1, vl);
}

vuint32mf2_t test_vzext_vf4_u32mf2_tamu(vbool64_t mask, vuint32mf2_t maskedoff, vuint8mf8_t op1, size_t vl) {
  return vzext_vf4_tamu(mask, maskedoff, op1, vl);
}

vuint32m1_t test_vzext_vf4_u32m1_tamu(vbool32_t mask, vuint32m1_t maskedoff, vuint8mf4_t op1, size_t vl) {
  return vzext_vf4_tamu(mask, maskedoff, op1, vl);
}

vuint32m2_t test_vzext_vf4_u32m2_tamu(vbool16_t mask, vuint32m2_t maskedoff, vuint8mf2_t op1, size_t vl) {
  return vzext_vf4_tamu(mask, maskedoff, op1, vl);
}

vuint32m4_t test_vzext_vf4_u32m4_tamu(vbool8_t mask, vuint32m4_t maskedoff, vuint8m1_t op1, size_t vl) {
  return vzext_vf4_tamu(mask, maskedoff, op1, vl);
}

vuint32m8_t test_vzext_vf4_u32m8_tamu(vbool4_t mask, vuint32m8_t maskedoff, vuint8m2_t op1, size_t vl) {
  return vzext_vf4_tamu(mask, maskedoff, op1, vl);
}

vuint64m1_t test_vzext_vf8_u64m1_tamu(vbool64_t mask, vuint64m1_t maskedoff, vuint8mf8_t op1, size_t vl) {
  return vzext_vf8_tamu(mask, maskedoff, op1, vl);
}

vuint64m2_t test_vzext_vf8_u64m2_tamu(vbool32_t mask, vuint64m2_t maskedoff, vuint8mf4_t op1, size_t vl) {
  return vzext_vf8_tamu(mask, maskedoff, op1, vl);
}

vuint64m4_t test_vzext_vf8_u64m4_tamu(vbool16_t mask, vuint64m4_t maskedoff, vuint8mf2_t op1, size_t vl) {
  return vzext_vf8_tamu(mask, maskedoff, op1, vl);
}

vuint64m8_t test_vzext_vf8_u64m8_tamu(vbool8_t mask, vuint64m8_t maskedoff, vuint8m1_t op1, size_t vl) {
  return vzext_vf8_tamu(mask, maskedoff, op1, vl);
}

vuint32mf2_t test_vzext_vf2_u32mf2_tamu(vbool64_t mask, vuint32mf2_t maskedoff, vuint16mf4_t op1, size_t vl) {
  return vzext_vf2_tamu(mask, maskedoff, op1, vl);
}

vuint32m1_t test_vzext_vf2_u32m1_tamu(vbool32_t mask, vuint32m1_t maskedoff, vuint16mf2_t op1, size_t vl) {
  return vzext_vf2_tamu(mask, maskedoff, op1, vl);
}

vuint32m2_t test_vzext_vf2_u32m2_tamu(vbool16_t mask, vuint32m2_t maskedoff, vuint16m1_t op1, size_t vl) {
  return vzext_vf2_tamu(mask, maskedoff, op1, vl);
}

vuint32m4_t test_vzext_vf2_u32m4_tamu(vbool8_t mask, vuint32m4_t maskedoff, vuint16m2_t op1, size_t vl) {
  return vzext_vf2_tamu(mask, maskedoff, op1, vl);
}

vuint32m8_t test_vzext_vf2_u32m8_tamu(vbool4_t mask, vuint32m8_t maskedoff, vuint16m4_t op1, size_t vl) {
  return vzext_vf2_tamu(mask, maskedoff, op1, vl);
}

vuint64m1_t test_vzext_vf4_u64m1_tamu(vbool64_t mask, vuint64m1_t maskedoff, vuint16mf4_t op1, size_t vl) {
  return vzext_vf4_tamu(mask, maskedoff, op1, vl);
}

vuint64m2_t test_vzext_vf4_u64m2_tamu(vbool32_t mask, vuint64m2_t maskedoff, vuint16mf2_t op1, size_t vl) {
  return vzext_vf4_tamu(mask, maskedoff, op1, vl);
}

vuint64m4_t test_vzext_vf4_u64m4_tamu(vbool16_t mask, vuint64m4_t maskedoff, vuint16m1_t op1, size_t vl) {
  return vzext_vf4_tamu(mask, maskedoff, op1, vl);
}

vuint64m8_t test_vzext_vf4_u64m8_tamu(vbool8_t mask, vuint64m8_t maskedoff, vuint16m2_t op1, size_t vl) {
  return vzext_vf4_tamu(mask, maskedoff, op1, vl);
}

vuint64m1_t test_vzext_vf2_u64m1_tamu(vbool64_t mask, vuint64m1_t maskedoff, vuint32mf2_t op1, size_t vl) {
  return vzext_vf2_tamu(mask, maskedoff, op1, vl);
}

vuint64m2_t test_vzext_vf2_u64m2_tamu(vbool32_t mask, vuint64m2_t maskedoff, vuint32m1_t op1, size_t vl) {
  return vzext_vf2_tamu(mask, maskedoff, op1, vl);
}

vuint64m4_t test_vzext_vf2_u64m4_tamu(vbool16_t mask, vuint64m4_t maskedoff, vuint32m2_t op1, size_t vl) {
  return vzext_vf2_tamu(mask, maskedoff, op1, vl);
}

vuint64m8_t test_vzext_vf2_u64m8_tamu(vbool8_t mask, vuint64m8_t maskedoff, vuint32m4_t op1, size_t vl) {
  return vzext_vf2_tamu(mask, maskedoff, op1, vl);
}

