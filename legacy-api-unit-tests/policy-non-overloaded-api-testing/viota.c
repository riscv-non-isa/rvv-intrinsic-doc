#include <stdint.h>
#include "rvv-v0p10-compatible-headers/non-policy.h"
#include "rvv-v0p10-compatible-headers/policy.h"
#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
vuint8mf8_t test_viota_m_u8mf8_tu(vuint8mf8_t maskedoff, vbool64_t op1, size_t vl) {
  return viota_m_u8mf8_tu(maskedoff, op1, vl);
}

vuint8mf4_t test_viota_m_u8mf4_tu(vuint8mf4_t maskedoff, vbool32_t op1, size_t vl) {
  return viota_m_u8mf4_tu(maskedoff, op1, vl);
}

vuint8mf2_t test_viota_m_u8mf2_tu(vuint8mf2_t maskedoff, vbool16_t op1, size_t vl) {
  return viota_m_u8mf2_tu(maskedoff, op1, vl);
}

vuint8m1_t test_viota_m_u8m1_tu(vuint8m1_t maskedoff, vbool8_t op1, size_t vl) {
  return viota_m_u8m1_tu(maskedoff, op1, vl);
}

vuint8m2_t test_viota_m_u8m2_tu(vuint8m2_t maskedoff, vbool4_t op1, size_t vl) {
  return viota_m_u8m2_tu(maskedoff, op1, vl);
}

vuint8m4_t test_viota_m_u8m4_tu(vuint8m4_t maskedoff, vbool2_t op1, size_t vl) {
  return viota_m_u8m4_tu(maskedoff, op1, vl);
}

vuint8m8_t test_viota_m_u8m8_tu(vuint8m8_t maskedoff, vbool1_t op1, size_t vl) {
  return viota_m_u8m8_tu(maskedoff, op1, vl);
}

vuint16mf4_t test_viota_m_u16mf4_tu(vuint16mf4_t maskedoff, vbool64_t op1, size_t vl) {
  return viota_m_u16mf4_tu(maskedoff, op1, vl);
}

vuint16mf2_t test_viota_m_u16mf2_tu(vuint16mf2_t maskedoff, vbool32_t op1, size_t vl) {
  return viota_m_u16mf2_tu(maskedoff, op1, vl);
}

vuint16m1_t test_viota_m_u16m1_tu(vuint16m1_t maskedoff, vbool16_t op1, size_t vl) {
  return viota_m_u16m1_tu(maskedoff, op1, vl);
}

vuint16m2_t test_viota_m_u16m2_tu(vuint16m2_t maskedoff, vbool8_t op1, size_t vl) {
  return viota_m_u16m2_tu(maskedoff, op1, vl);
}

vuint16m4_t test_viota_m_u16m4_tu(vuint16m4_t maskedoff, vbool4_t op1, size_t vl) {
  return viota_m_u16m4_tu(maskedoff, op1, vl);
}

vuint16m8_t test_viota_m_u16m8_tu(vuint16m8_t maskedoff, vbool2_t op1, size_t vl) {
  return viota_m_u16m8_tu(maskedoff, op1, vl);
}

vuint32mf2_t test_viota_m_u32mf2_tu(vuint32mf2_t maskedoff, vbool64_t op1, size_t vl) {
  return viota_m_u32mf2_tu(maskedoff, op1, vl);
}

vuint32m1_t test_viota_m_u32m1_tu(vuint32m1_t maskedoff, vbool32_t op1, size_t vl) {
  return viota_m_u32m1_tu(maskedoff, op1, vl);
}

vuint32m2_t test_viota_m_u32m2_tu(vuint32m2_t maskedoff, vbool16_t op1, size_t vl) {
  return viota_m_u32m2_tu(maskedoff, op1, vl);
}

vuint32m4_t test_viota_m_u32m4_tu(vuint32m4_t maskedoff, vbool8_t op1, size_t vl) {
  return viota_m_u32m4_tu(maskedoff, op1, vl);
}

vuint32m8_t test_viota_m_u32m8_tu(vuint32m8_t maskedoff, vbool4_t op1, size_t vl) {
  return viota_m_u32m8_tu(maskedoff, op1, vl);
}

vuint64m1_t test_viota_m_u64m1_tu(vuint64m1_t maskedoff, vbool64_t op1, size_t vl) {
  return viota_m_u64m1_tu(maskedoff, op1, vl);
}

vuint64m2_t test_viota_m_u64m2_tu(vuint64m2_t maskedoff, vbool32_t op1, size_t vl) {
  return viota_m_u64m2_tu(maskedoff, op1, vl);
}

vuint64m4_t test_viota_m_u64m4_tu(vuint64m4_t maskedoff, vbool16_t op1, size_t vl) {
  return viota_m_u64m4_tu(maskedoff, op1, vl);
}

vuint64m8_t test_viota_m_u64m8_tu(vuint64m8_t maskedoff, vbool8_t op1, size_t vl) {
  return viota_m_u64m8_tu(maskedoff, op1, vl);
}

vuint8mf8_t test_viota_m_u8mf8_ta(vbool64_t op1, size_t vl) {
  return viota_m_u8mf8_ta(op1, vl);
}

vuint8mf4_t test_viota_m_u8mf4_ta(vbool32_t op1, size_t vl) {
  return viota_m_u8mf4_ta(op1, vl);
}

vuint8mf2_t test_viota_m_u8mf2_ta(vbool16_t op1, size_t vl) {
  return viota_m_u8mf2_ta(op1, vl);
}

vuint8m1_t test_viota_m_u8m1_ta(vbool8_t op1, size_t vl) {
  return viota_m_u8m1_ta(op1, vl);
}

vuint8m2_t test_viota_m_u8m2_ta(vbool4_t op1, size_t vl) {
  return viota_m_u8m2_ta(op1, vl);
}

vuint8m4_t test_viota_m_u8m4_ta(vbool2_t op1, size_t vl) {
  return viota_m_u8m4_ta(op1, vl);
}

vuint8m8_t test_viota_m_u8m8_ta(vbool1_t op1, size_t vl) {
  return viota_m_u8m8_ta(op1, vl);
}

vuint16mf4_t test_viota_m_u16mf4_ta(vbool64_t op1, size_t vl) {
  return viota_m_u16mf4_ta(op1, vl);
}

vuint16mf2_t test_viota_m_u16mf2_ta(vbool32_t op1, size_t vl) {
  return viota_m_u16mf2_ta(op1, vl);
}

vuint16m1_t test_viota_m_u16m1_ta(vbool16_t op1, size_t vl) {
  return viota_m_u16m1_ta(op1, vl);
}

vuint16m2_t test_viota_m_u16m2_ta(vbool8_t op1, size_t vl) {
  return viota_m_u16m2_ta(op1, vl);
}

vuint16m4_t test_viota_m_u16m4_ta(vbool4_t op1, size_t vl) {
  return viota_m_u16m4_ta(op1, vl);
}

vuint16m8_t test_viota_m_u16m8_ta(vbool2_t op1, size_t vl) {
  return viota_m_u16m8_ta(op1, vl);
}

vuint32mf2_t test_viota_m_u32mf2_ta(vbool64_t op1, size_t vl) {
  return viota_m_u32mf2_ta(op1, vl);
}

vuint32m1_t test_viota_m_u32m1_ta(vbool32_t op1, size_t vl) {
  return viota_m_u32m1_ta(op1, vl);
}

vuint32m2_t test_viota_m_u32m2_ta(vbool16_t op1, size_t vl) {
  return viota_m_u32m2_ta(op1, vl);
}

vuint32m4_t test_viota_m_u32m4_ta(vbool8_t op1, size_t vl) {
  return viota_m_u32m4_ta(op1, vl);
}

vuint32m8_t test_viota_m_u32m8_ta(vbool4_t op1, size_t vl) {
  return viota_m_u32m8_ta(op1, vl);
}

vuint64m1_t test_viota_m_u64m1_ta(vbool64_t op1, size_t vl) {
  return viota_m_u64m1_ta(op1, vl);
}

vuint64m2_t test_viota_m_u64m2_ta(vbool32_t op1, size_t vl) {
  return viota_m_u64m2_ta(op1, vl);
}

vuint64m4_t test_viota_m_u64m4_ta(vbool16_t op1, size_t vl) {
  return viota_m_u64m4_ta(op1, vl);
}

vuint64m8_t test_viota_m_u64m8_ta(vbool8_t op1, size_t vl) {
  return viota_m_u64m8_ta(op1, vl);
}

vuint8mf8_t test_viota_m_u8mf8_tuma(vbool64_t mask, vuint8mf8_t maskedoff, vbool64_t op1, size_t vl) {
  return viota_m_u8mf8_tuma(mask, maskedoff, op1, vl);
}

vuint8mf4_t test_viota_m_u8mf4_tuma(vbool32_t mask, vuint8mf4_t maskedoff, vbool32_t op1, size_t vl) {
  return viota_m_u8mf4_tuma(mask, maskedoff, op1, vl);
}

vuint8mf2_t test_viota_m_u8mf2_tuma(vbool16_t mask, vuint8mf2_t maskedoff, vbool16_t op1, size_t vl) {
  return viota_m_u8mf2_tuma(mask, maskedoff, op1, vl);
}

vuint8m1_t test_viota_m_u8m1_tuma(vbool8_t mask, vuint8m1_t maskedoff, vbool8_t op1, size_t vl) {
  return viota_m_u8m1_tuma(mask, maskedoff, op1, vl);
}

vuint8m2_t test_viota_m_u8m2_tuma(vbool4_t mask, vuint8m2_t maskedoff, vbool4_t op1, size_t vl) {
  return viota_m_u8m2_tuma(mask, maskedoff, op1, vl);
}

vuint8m4_t test_viota_m_u8m4_tuma(vbool2_t mask, vuint8m4_t maskedoff, vbool2_t op1, size_t vl) {
  return viota_m_u8m4_tuma(mask, maskedoff, op1, vl);
}

vuint8m8_t test_viota_m_u8m8_tuma(vbool1_t mask, vuint8m8_t maskedoff, vbool1_t op1, size_t vl) {
  return viota_m_u8m8_tuma(mask, maskedoff, op1, vl);
}

vuint16mf4_t test_viota_m_u16mf4_tuma(vbool64_t mask, vuint16mf4_t maskedoff, vbool64_t op1, size_t vl) {
  return viota_m_u16mf4_tuma(mask, maskedoff, op1, vl);
}

vuint16mf2_t test_viota_m_u16mf2_tuma(vbool32_t mask, vuint16mf2_t maskedoff, vbool32_t op1, size_t vl) {
  return viota_m_u16mf2_tuma(mask, maskedoff, op1, vl);
}

vuint16m1_t test_viota_m_u16m1_tuma(vbool16_t mask, vuint16m1_t maskedoff, vbool16_t op1, size_t vl) {
  return viota_m_u16m1_tuma(mask, maskedoff, op1, vl);
}

vuint16m2_t test_viota_m_u16m2_tuma(vbool8_t mask, vuint16m2_t maskedoff, vbool8_t op1, size_t vl) {
  return viota_m_u16m2_tuma(mask, maskedoff, op1, vl);
}

vuint16m4_t test_viota_m_u16m4_tuma(vbool4_t mask, vuint16m4_t maskedoff, vbool4_t op1, size_t vl) {
  return viota_m_u16m4_tuma(mask, maskedoff, op1, vl);
}

vuint16m8_t test_viota_m_u16m8_tuma(vbool2_t mask, vuint16m8_t maskedoff, vbool2_t op1, size_t vl) {
  return viota_m_u16m8_tuma(mask, maskedoff, op1, vl);
}

vuint32mf2_t test_viota_m_u32mf2_tuma(vbool64_t mask, vuint32mf2_t maskedoff, vbool64_t op1, size_t vl) {
  return viota_m_u32mf2_tuma(mask, maskedoff, op1, vl);
}

vuint32m1_t test_viota_m_u32m1_tuma(vbool32_t mask, vuint32m1_t maskedoff, vbool32_t op1, size_t vl) {
  return viota_m_u32m1_tuma(mask, maskedoff, op1, vl);
}

vuint32m2_t test_viota_m_u32m2_tuma(vbool16_t mask, vuint32m2_t maskedoff, vbool16_t op1, size_t vl) {
  return viota_m_u32m2_tuma(mask, maskedoff, op1, vl);
}

vuint32m4_t test_viota_m_u32m4_tuma(vbool8_t mask, vuint32m4_t maskedoff, vbool8_t op1, size_t vl) {
  return viota_m_u32m4_tuma(mask, maskedoff, op1, vl);
}

vuint32m8_t test_viota_m_u32m8_tuma(vbool4_t mask, vuint32m8_t maskedoff, vbool4_t op1, size_t vl) {
  return viota_m_u32m8_tuma(mask, maskedoff, op1, vl);
}

vuint64m1_t test_viota_m_u64m1_tuma(vbool64_t mask, vuint64m1_t maskedoff, vbool64_t op1, size_t vl) {
  return viota_m_u64m1_tuma(mask, maskedoff, op1, vl);
}

vuint64m2_t test_viota_m_u64m2_tuma(vbool32_t mask, vuint64m2_t maskedoff, vbool32_t op1, size_t vl) {
  return viota_m_u64m2_tuma(mask, maskedoff, op1, vl);
}

vuint64m4_t test_viota_m_u64m4_tuma(vbool16_t mask, vuint64m4_t maskedoff, vbool16_t op1, size_t vl) {
  return viota_m_u64m4_tuma(mask, maskedoff, op1, vl);
}

vuint64m8_t test_viota_m_u64m8_tuma(vbool8_t mask, vuint64m8_t maskedoff, vbool8_t op1, size_t vl) {
  return viota_m_u64m8_tuma(mask, maskedoff, op1, vl);
}

vuint8mf8_t test_viota_m_u8mf8_tumu(vbool64_t mask, vuint8mf8_t maskedoff, vbool64_t op1, size_t vl) {
  return viota_m_u8mf8_tumu(mask, maskedoff, op1, vl);
}

vuint8mf4_t test_viota_m_u8mf4_tumu(vbool32_t mask, vuint8mf4_t maskedoff, vbool32_t op1, size_t vl) {
  return viota_m_u8mf4_tumu(mask, maskedoff, op1, vl);
}

vuint8mf2_t test_viota_m_u8mf2_tumu(vbool16_t mask, vuint8mf2_t maskedoff, vbool16_t op1, size_t vl) {
  return viota_m_u8mf2_tumu(mask, maskedoff, op1, vl);
}

vuint8m1_t test_viota_m_u8m1_tumu(vbool8_t mask, vuint8m1_t maskedoff, vbool8_t op1, size_t vl) {
  return viota_m_u8m1_tumu(mask, maskedoff, op1, vl);
}

vuint8m2_t test_viota_m_u8m2_tumu(vbool4_t mask, vuint8m2_t maskedoff, vbool4_t op1, size_t vl) {
  return viota_m_u8m2_tumu(mask, maskedoff, op1, vl);
}

vuint8m4_t test_viota_m_u8m4_tumu(vbool2_t mask, vuint8m4_t maskedoff, vbool2_t op1, size_t vl) {
  return viota_m_u8m4_tumu(mask, maskedoff, op1, vl);
}

vuint8m8_t test_viota_m_u8m8_tumu(vbool1_t mask, vuint8m8_t maskedoff, vbool1_t op1, size_t vl) {
  return viota_m_u8m8_tumu(mask, maskedoff, op1, vl);
}

vuint16mf4_t test_viota_m_u16mf4_tumu(vbool64_t mask, vuint16mf4_t maskedoff, vbool64_t op1, size_t vl) {
  return viota_m_u16mf4_tumu(mask, maskedoff, op1, vl);
}

vuint16mf2_t test_viota_m_u16mf2_tumu(vbool32_t mask, vuint16mf2_t maskedoff, vbool32_t op1, size_t vl) {
  return viota_m_u16mf2_tumu(mask, maskedoff, op1, vl);
}

vuint16m1_t test_viota_m_u16m1_tumu(vbool16_t mask, vuint16m1_t maskedoff, vbool16_t op1, size_t vl) {
  return viota_m_u16m1_tumu(mask, maskedoff, op1, vl);
}

vuint16m2_t test_viota_m_u16m2_tumu(vbool8_t mask, vuint16m2_t maskedoff, vbool8_t op1, size_t vl) {
  return viota_m_u16m2_tumu(mask, maskedoff, op1, vl);
}

vuint16m4_t test_viota_m_u16m4_tumu(vbool4_t mask, vuint16m4_t maskedoff, vbool4_t op1, size_t vl) {
  return viota_m_u16m4_tumu(mask, maskedoff, op1, vl);
}

vuint16m8_t test_viota_m_u16m8_tumu(vbool2_t mask, vuint16m8_t maskedoff, vbool2_t op1, size_t vl) {
  return viota_m_u16m8_tumu(mask, maskedoff, op1, vl);
}

vuint32mf2_t test_viota_m_u32mf2_tumu(vbool64_t mask, vuint32mf2_t maskedoff, vbool64_t op1, size_t vl) {
  return viota_m_u32mf2_tumu(mask, maskedoff, op1, vl);
}

vuint32m1_t test_viota_m_u32m1_tumu(vbool32_t mask, vuint32m1_t maskedoff, vbool32_t op1, size_t vl) {
  return viota_m_u32m1_tumu(mask, maskedoff, op1, vl);
}

vuint32m2_t test_viota_m_u32m2_tumu(vbool16_t mask, vuint32m2_t maskedoff, vbool16_t op1, size_t vl) {
  return viota_m_u32m2_tumu(mask, maskedoff, op1, vl);
}

vuint32m4_t test_viota_m_u32m4_tumu(vbool8_t mask, vuint32m4_t maskedoff, vbool8_t op1, size_t vl) {
  return viota_m_u32m4_tumu(mask, maskedoff, op1, vl);
}

vuint32m8_t test_viota_m_u32m8_tumu(vbool4_t mask, vuint32m8_t maskedoff, vbool4_t op1, size_t vl) {
  return viota_m_u32m8_tumu(mask, maskedoff, op1, vl);
}

vuint64m1_t test_viota_m_u64m1_tumu(vbool64_t mask, vuint64m1_t maskedoff, vbool64_t op1, size_t vl) {
  return viota_m_u64m1_tumu(mask, maskedoff, op1, vl);
}

vuint64m2_t test_viota_m_u64m2_tumu(vbool32_t mask, vuint64m2_t maskedoff, vbool32_t op1, size_t vl) {
  return viota_m_u64m2_tumu(mask, maskedoff, op1, vl);
}

vuint64m4_t test_viota_m_u64m4_tumu(vbool16_t mask, vuint64m4_t maskedoff, vbool16_t op1, size_t vl) {
  return viota_m_u64m4_tumu(mask, maskedoff, op1, vl);
}

vuint64m8_t test_viota_m_u64m8_tumu(vbool8_t mask, vuint64m8_t maskedoff, vbool8_t op1, size_t vl) {
  return viota_m_u64m8_tumu(mask, maskedoff, op1, vl);
}

vuint8mf8_t test_viota_m_u8mf8_tama(vbool64_t mask, vbool64_t op1, size_t vl) {
  return viota_m_u8mf8_tama(mask, op1, vl);
}

vuint8mf4_t test_viota_m_u8mf4_tama(vbool32_t mask, vbool32_t op1, size_t vl) {
  return viota_m_u8mf4_tama(mask, op1, vl);
}

vuint8mf2_t test_viota_m_u8mf2_tama(vbool16_t mask, vbool16_t op1, size_t vl) {
  return viota_m_u8mf2_tama(mask, op1, vl);
}

vuint8m1_t test_viota_m_u8m1_tama(vbool8_t mask, vbool8_t op1, size_t vl) {
  return viota_m_u8m1_tama(mask, op1, vl);
}

vuint8m2_t test_viota_m_u8m2_tama(vbool4_t mask, vbool4_t op1, size_t vl) {
  return viota_m_u8m2_tama(mask, op1, vl);
}

vuint8m4_t test_viota_m_u8m4_tama(vbool2_t mask, vbool2_t op1, size_t vl) {
  return viota_m_u8m4_tama(mask, op1, vl);
}

vuint8m8_t test_viota_m_u8m8_tama(vbool1_t mask, vbool1_t op1, size_t vl) {
  return viota_m_u8m8_tama(mask, op1, vl);
}

vuint16mf4_t test_viota_m_u16mf4_tama(vbool64_t mask, vbool64_t op1, size_t vl) {
  return viota_m_u16mf4_tama(mask, op1, vl);
}

vuint16mf2_t test_viota_m_u16mf2_tama(vbool32_t mask, vbool32_t op1, size_t vl) {
  return viota_m_u16mf2_tama(mask, op1, vl);
}

vuint16m1_t test_viota_m_u16m1_tama(vbool16_t mask, vbool16_t op1, size_t vl) {
  return viota_m_u16m1_tama(mask, op1, vl);
}

vuint16m2_t test_viota_m_u16m2_tama(vbool8_t mask, vbool8_t op1, size_t vl) {
  return viota_m_u16m2_tama(mask, op1, vl);
}

vuint16m4_t test_viota_m_u16m4_tama(vbool4_t mask, vbool4_t op1, size_t vl) {
  return viota_m_u16m4_tama(mask, op1, vl);
}

vuint16m8_t test_viota_m_u16m8_tama(vbool2_t mask, vbool2_t op1, size_t vl) {
  return viota_m_u16m8_tama(mask, op1, vl);
}

vuint32mf2_t test_viota_m_u32mf2_tama(vbool64_t mask, vbool64_t op1, size_t vl) {
  return viota_m_u32mf2_tama(mask, op1, vl);
}

vuint32m1_t test_viota_m_u32m1_tama(vbool32_t mask, vbool32_t op1, size_t vl) {
  return viota_m_u32m1_tama(mask, op1, vl);
}

vuint32m2_t test_viota_m_u32m2_tama(vbool16_t mask, vbool16_t op1, size_t vl) {
  return viota_m_u32m2_tama(mask, op1, vl);
}

vuint32m4_t test_viota_m_u32m4_tama(vbool8_t mask, vbool8_t op1, size_t vl) {
  return viota_m_u32m4_tama(mask, op1, vl);
}

vuint32m8_t test_viota_m_u32m8_tama(vbool4_t mask, vbool4_t op1, size_t vl) {
  return viota_m_u32m8_tama(mask, op1, vl);
}

vuint64m1_t test_viota_m_u64m1_tama(vbool64_t mask, vbool64_t op1, size_t vl) {
  return viota_m_u64m1_tama(mask, op1, vl);
}

vuint64m2_t test_viota_m_u64m2_tama(vbool32_t mask, vbool32_t op1, size_t vl) {
  return viota_m_u64m2_tama(mask, op1, vl);
}

vuint64m4_t test_viota_m_u64m4_tama(vbool16_t mask, vbool16_t op1, size_t vl) {
  return viota_m_u64m4_tama(mask, op1, vl);
}

vuint64m8_t test_viota_m_u64m8_tama(vbool8_t mask, vbool8_t op1, size_t vl) {
  return viota_m_u64m8_tama(mask, op1, vl);
}

vuint8mf8_t test_viota_m_u8mf8_tamu(vbool64_t mask, vuint8mf8_t maskedoff, vbool64_t op1, size_t vl) {
  return viota_m_u8mf8_tamu(mask, maskedoff, op1, vl);
}

vuint8mf4_t test_viota_m_u8mf4_tamu(vbool32_t mask, vuint8mf4_t maskedoff, vbool32_t op1, size_t vl) {
  return viota_m_u8mf4_tamu(mask, maskedoff, op1, vl);
}

vuint8mf2_t test_viota_m_u8mf2_tamu(vbool16_t mask, vuint8mf2_t maskedoff, vbool16_t op1, size_t vl) {
  return viota_m_u8mf2_tamu(mask, maskedoff, op1, vl);
}

vuint8m1_t test_viota_m_u8m1_tamu(vbool8_t mask, vuint8m1_t maskedoff, vbool8_t op1, size_t vl) {
  return viota_m_u8m1_tamu(mask, maskedoff, op1, vl);
}

vuint8m2_t test_viota_m_u8m2_tamu(vbool4_t mask, vuint8m2_t maskedoff, vbool4_t op1, size_t vl) {
  return viota_m_u8m2_tamu(mask, maskedoff, op1, vl);
}

vuint8m4_t test_viota_m_u8m4_tamu(vbool2_t mask, vuint8m4_t maskedoff, vbool2_t op1, size_t vl) {
  return viota_m_u8m4_tamu(mask, maskedoff, op1, vl);
}

vuint8m8_t test_viota_m_u8m8_tamu(vbool1_t mask, vuint8m8_t maskedoff, vbool1_t op1, size_t vl) {
  return viota_m_u8m8_tamu(mask, maskedoff, op1, vl);
}

vuint16mf4_t test_viota_m_u16mf4_tamu(vbool64_t mask, vuint16mf4_t maskedoff, vbool64_t op1, size_t vl) {
  return viota_m_u16mf4_tamu(mask, maskedoff, op1, vl);
}

vuint16mf2_t test_viota_m_u16mf2_tamu(vbool32_t mask, vuint16mf2_t maskedoff, vbool32_t op1, size_t vl) {
  return viota_m_u16mf2_tamu(mask, maskedoff, op1, vl);
}

vuint16m1_t test_viota_m_u16m1_tamu(vbool16_t mask, vuint16m1_t maskedoff, vbool16_t op1, size_t vl) {
  return viota_m_u16m1_tamu(mask, maskedoff, op1, vl);
}

vuint16m2_t test_viota_m_u16m2_tamu(vbool8_t mask, vuint16m2_t maskedoff, vbool8_t op1, size_t vl) {
  return viota_m_u16m2_tamu(mask, maskedoff, op1, vl);
}

vuint16m4_t test_viota_m_u16m4_tamu(vbool4_t mask, vuint16m4_t maskedoff, vbool4_t op1, size_t vl) {
  return viota_m_u16m4_tamu(mask, maskedoff, op1, vl);
}

vuint16m8_t test_viota_m_u16m8_tamu(vbool2_t mask, vuint16m8_t maskedoff, vbool2_t op1, size_t vl) {
  return viota_m_u16m8_tamu(mask, maskedoff, op1, vl);
}

vuint32mf2_t test_viota_m_u32mf2_tamu(vbool64_t mask, vuint32mf2_t maskedoff, vbool64_t op1, size_t vl) {
  return viota_m_u32mf2_tamu(mask, maskedoff, op1, vl);
}

vuint32m1_t test_viota_m_u32m1_tamu(vbool32_t mask, vuint32m1_t maskedoff, vbool32_t op1, size_t vl) {
  return viota_m_u32m1_tamu(mask, maskedoff, op1, vl);
}

vuint32m2_t test_viota_m_u32m2_tamu(vbool16_t mask, vuint32m2_t maskedoff, vbool16_t op1, size_t vl) {
  return viota_m_u32m2_tamu(mask, maskedoff, op1, vl);
}

vuint32m4_t test_viota_m_u32m4_tamu(vbool8_t mask, vuint32m4_t maskedoff, vbool8_t op1, size_t vl) {
  return viota_m_u32m4_tamu(mask, maskedoff, op1, vl);
}

vuint32m8_t test_viota_m_u32m8_tamu(vbool4_t mask, vuint32m8_t maskedoff, vbool4_t op1, size_t vl) {
  return viota_m_u32m8_tamu(mask, maskedoff, op1, vl);
}

vuint64m1_t test_viota_m_u64m1_tamu(vbool64_t mask, vuint64m1_t maskedoff, vbool64_t op1, size_t vl) {
  return viota_m_u64m1_tamu(mask, maskedoff, op1, vl);
}

vuint64m2_t test_viota_m_u64m2_tamu(vbool32_t mask, vuint64m2_t maskedoff, vbool32_t op1, size_t vl) {
  return viota_m_u64m2_tamu(mask, maskedoff, op1, vl);
}

vuint64m4_t test_viota_m_u64m4_tamu(vbool16_t mask, vuint64m4_t maskedoff, vbool16_t op1, size_t vl) {
  return viota_m_u64m4_tamu(mask, maskedoff, op1, vl);
}

vuint64m8_t test_viota_m_u64m8_tamu(vbool8_t mask, vuint64m8_t maskedoff, vbool8_t op1, size_t vl) {
  return viota_m_u64m8_tamu(mask, maskedoff, op1, vl);
}

