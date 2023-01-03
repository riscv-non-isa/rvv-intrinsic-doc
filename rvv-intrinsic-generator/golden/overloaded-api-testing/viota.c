#include <stdint.h>
#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
vuint8mf8_t test_viota_m_u8mf8_m(vbool64_t mask, vuint8mf8_t maskedoff, vbool64_t op1, size_t vl) {
  return viota(mask, maskedoff, op1, vl);
}

vuint8mf4_t test_viota_m_u8mf4_m(vbool32_t mask, vuint8mf4_t maskedoff, vbool32_t op1, size_t vl) {
  return viota(mask, maskedoff, op1, vl);
}

vuint8mf2_t test_viota_m_u8mf2_m(vbool16_t mask, vuint8mf2_t maskedoff, vbool16_t op1, size_t vl) {
  return viota(mask, maskedoff, op1, vl);
}

vuint8m1_t test_viota_m_u8m1_m(vbool8_t mask, vuint8m1_t maskedoff, vbool8_t op1, size_t vl) {
  return viota(mask, maskedoff, op1, vl);
}

vuint8m2_t test_viota_m_u8m2_m(vbool4_t mask, vuint8m2_t maskedoff, vbool4_t op1, size_t vl) {
  return viota(mask, maskedoff, op1, vl);
}

vuint8m4_t test_viota_m_u8m4_m(vbool2_t mask, vuint8m4_t maskedoff, vbool2_t op1, size_t vl) {
  return viota(mask, maskedoff, op1, vl);
}

vuint8m8_t test_viota_m_u8m8_m(vbool1_t mask, vuint8m8_t maskedoff, vbool1_t op1, size_t vl) {
  return viota(mask, maskedoff, op1, vl);
}

vuint16mf4_t test_viota_m_u16mf4_m(vbool64_t mask, vuint16mf4_t maskedoff, vbool64_t op1, size_t vl) {
  return viota(mask, maskedoff, op1, vl);
}

vuint16mf2_t test_viota_m_u16mf2_m(vbool32_t mask, vuint16mf2_t maskedoff, vbool32_t op1, size_t vl) {
  return viota(mask, maskedoff, op1, vl);
}

vuint16m1_t test_viota_m_u16m1_m(vbool16_t mask, vuint16m1_t maskedoff, vbool16_t op1, size_t vl) {
  return viota(mask, maskedoff, op1, vl);
}

vuint16m2_t test_viota_m_u16m2_m(vbool8_t mask, vuint16m2_t maskedoff, vbool8_t op1, size_t vl) {
  return viota(mask, maskedoff, op1, vl);
}

vuint16m4_t test_viota_m_u16m4_m(vbool4_t mask, vuint16m4_t maskedoff, vbool4_t op1, size_t vl) {
  return viota(mask, maskedoff, op1, vl);
}

vuint16m8_t test_viota_m_u16m8_m(vbool2_t mask, vuint16m8_t maskedoff, vbool2_t op1, size_t vl) {
  return viota(mask, maskedoff, op1, vl);
}

vuint32mf2_t test_viota_m_u32mf2_m(vbool64_t mask, vuint32mf2_t maskedoff, vbool64_t op1, size_t vl) {
  return viota(mask, maskedoff, op1, vl);
}

vuint32m1_t test_viota_m_u32m1_m(vbool32_t mask, vuint32m1_t maskedoff, vbool32_t op1, size_t vl) {
  return viota(mask, maskedoff, op1, vl);
}

vuint32m2_t test_viota_m_u32m2_m(vbool16_t mask, vuint32m2_t maskedoff, vbool16_t op1, size_t vl) {
  return viota(mask, maskedoff, op1, vl);
}

vuint32m4_t test_viota_m_u32m4_m(vbool8_t mask, vuint32m4_t maskedoff, vbool8_t op1, size_t vl) {
  return viota(mask, maskedoff, op1, vl);
}

vuint32m8_t test_viota_m_u32m8_m(vbool4_t mask, vuint32m8_t maskedoff, vbool4_t op1, size_t vl) {
  return viota(mask, maskedoff, op1, vl);
}

vuint64m1_t test_viota_m_u64m1_m(vbool64_t mask, vuint64m1_t maskedoff, vbool64_t op1, size_t vl) {
  return viota(mask, maskedoff, op1, vl);
}

vuint64m2_t test_viota_m_u64m2_m(vbool32_t mask, vuint64m2_t maskedoff, vbool32_t op1, size_t vl) {
  return viota(mask, maskedoff, op1, vl);
}

vuint64m4_t test_viota_m_u64m4_m(vbool16_t mask, vuint64m4_t maskedoff, vbool16_t op1, size_t vl) {
  return viota(mask, maskedoff, op1, vl);
}

vuint64m8_t test_viota_m_u64m8_m(vbool8_t mask, vuint64m8_t maskedoff, vbool8_t op1, size_t vl) {
  return viota(mask, maskedoff, op1, vl);
}

