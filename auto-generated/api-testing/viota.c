#include <riscv_vector.h>
#include <stdint.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
vuint8mf8_t test_viota_m_u8mf8(vbool64_t op1, size_t vl) {
  return __riscv_viota_m_u8mf8(op1, vl);
}

vuint8mf4_t test_viota_m_u8mf4(vbool32_t op1, size_t vl) {
  return __riscv_viota_m_u8mf4(op1, vl);
}

vuint8mf2_t test_viota_m_u8mf2(vbool16_t op1, size_t vl) {
  return __riscv_viota_m_u8mf2(op1, vl);
}

vuint8m1_t test_viota_m_u8m1(vbool8_t op1, size_t vl) {
  return __riscv_viota_m_u8m1(op1, vl);
}

vuint8m2_t test_viota_m_u8m2(vbool4_t op1, size_t vl) {
  return __riscv_viota_m_u8m2(op1, vl);
}

vuint8m4_t test_viota_m_u8m4(vbool2_t op1, size_t vl) {
  return __riscv_viota_m_u8m4(op1, vl);
}

vuint8m8_t test_viota_m_u8m8(vbool1_t op1, size_t vl) {
  return __riscv_viota_m_u8m8(op1, vl);
}

vuint16mf4_t test_viota_m_u16mf4(vbool64_t op1, size_t vl) {
  return __riscv_viota_m_u16mf4(op1, vl);
}

vuint16mf2_t test_viota_m_u16mf2(vbool32_t op1, size_t vl) {
  return __riscv_viota_m_u16mf2(op1, vl);
}

vuint16m1_t test_viota_m_u16m1(vbool16_t op1, size_t vl) {
  return __riscv_viota_m_u16m1(op1, vl);
}

vuint16m2_t test_viota_m_u16m2(vbool8_t op1, size_t vl) {
  return __riscv_viota_m_u16m2(op1, vl);
}

vuint16m4_t test_viota_m_u16m4(vbool4_t op1, size_t vl) {
  return __riscv_viota_m_u16m4(op1, vl);
}

vuint16m8_t test_viota_m_u16m8(vbool2_t op1, size_t vl) {
  return __riscv_viota_m_u16m8(op1, vl);
}

vuint32mf2_t test_viota_m_u32mf2(vbool64_t op1, size_t vl) {
  return __riscv_viota_m_u32mf2(op1, vl);
}

vuint32m1_t test_viota_m_u32m1(vbool32_t op1, size_t vl) {
  return __riscv_viota_m_u32m1(op1, vl);
}

vuint32m2_t test_viota_m_u32m2(vbool16_t op1, size_t vl) {
  return __riscv_viota_m_u32m2(op1, vl);
}

vuint32m4_t test_viota_m_u32m4(vbool8_t op1, size_t vl) {
  return __riscv_viota_m_u32m4(op1, vl);
}

vuint32m8_t test_viota_m_u32m8(vbool4_t op1, size_t vl) {
  return __riscv_viota_m_u32m8(op1, vl);
}

vuint64m1_t test_viota_m_u64m1(vbool64_t op1, size_t vl) {
  return __riscv_viota_m_u64m1(op1, vl);
}

vuint64m2_t test_viota_m_u64m2(vbool32_t op1, size_t vl) {
  return __riscv_viota_m_u64m2(op1, vl);
}

vuint64m4_t test_viota_m_u64m4(vbool16_t op1, size_t vl) {
  return __riscv_viota_m_u64m4(op1, vl);
}

vuint64m8_t test_viota_m_u64m8(vbool8_t op1, size_t vl) {
  return __riscv_viota_m_u64m8(op1, vl);
}

vuint8mf8_t test_viota_m_u8mf8_m(vbool64_t mask, vbool64_t op1, size_t vl) {
  return __riscv_viota_m_u8mf8_m(mask, op1, vl);
}

vuint8mf4_t test_viota_m_u8mf4_m(vbool32_t mask, vbool32_t op1, size_t vl) {
  return __riscv_viota_m_u8mf4_m(mask, op1, vl);
}

vuint8mf2_t test_viota_m_u8mf2_m(vbool16_t mask, vbool16_t op1, size_t vl) {
  return __riscv_viota_m_u8mf2_m(mask, op1, vl);
}

vuint8m1_t test_viota_m_u8m1_m(vbool8_t mask, vbool8_t op1, size_t vl) {
  return __riscv_viota_m_u8m1_m(mask, op1, vl);
}

vuint8m2_t test_viota_m_u8m2_m(vbool4_t mask, vbool4_t op1, size_t vl) {
  return __riscv_viota_m_u8m2_m(mask, op1, vl);
}

vuint8m4_t test_viota_m_u8m4_m(vbool2_t mask, vbool2_t op1, size_t vl) {
  return __riscv_viota_m_u8m4_m(mask, op1, vl);
}

vuint8m8_t test_viota_m_u8m8_m(vbool1_t mask, vbool1_t op1, size_t vl) {
  return __riscv_viota_m_u8m8_m(mask, op1, vl);
}

vuint16mf4_t test_viota_m_u16mf4_m(vbool64_t mask, vbool64_t op1, size_t vl) {
  return __riscv_viota_m_u16mf4_m(mask, op1, vl);
}

vuint16mf2_t test_viota_m_u16mf2_m(vbool32_t mask, vbool32_t op1, size_t vl) {
  return __riscv_viota_m_u16mf2_m(mask, op1, vl);
}

vuint16m1_t test_viota_m_u16m1_m(vbool16_t mask, vbool16_t op1, size_t vl) {
  return __riscv_viota_m_u16m1_m(mask, op1, vl);
}

vuint16m2_t test_viota_m_u16m2_m(vbool8_t mask, vbool8_t op1, size_t vl) {
  return __riscv_viota_m_u16m2_m(mask, op1, vl);
}

vuint16m4_t test_viota_m_u16m4_m(vbool4_t mask, vbool4_t op1, size_t vl) {
  return __riscv_viota_m_u16m4_m(mask, op1, vl);
}

vuint16m8_t test_viota_m_u16m8_m(vbool2_t mask, vbool2_t op1, size_t vl) {
  return __riscv_viota_m_u16m8_m(mask, op1, vl);
}

vuint32mf2_t test_viota_m_u32mf2_m(vbool64_t mask, vbool64_t op1, size_t vl) {
  return __riscv_viota_m_u32mf2_m(mask, op1, vl);
}

vuint32m1_t test_viota_m_u32m1_m(vbool32_t mask, vbool32_t op1, size_t vl) {
  return __riscv_viota_m_u32m1_m(mask, op1, vl);
}

vuint32m2_t test_viota_m_u32m2_m(vbool16_t mask, vbool16_t op1, size_t vl) {
  return __riscv_viota_m_u32m2_m(mask, op1, vl);
}

vuint32m4_t test_viota_m_u32m4_m(vbool8_t mask, vbool8_t op1, size_t vl) {
  return __riscv_viota_m_u32m4_m(mask, op1, vl);
}

vuint32m8_t test_viota_m_u32m8_m(vbool4_t mask, vbool4_t op1, size_t vl) {
  return __riscv_viota_m_u32m8_m(mask, op1, vl);
}

vuint64m1_t test_viota_m_u64m1_m(vbool64_t mask, vbool64_t op1, size_t vl) {
  return __riscv_viota_m_u64m1_m(mask, op1, vl);
}

vuint64m2_t test_viota_m_u64m2_m(vbool32_t mask, vbool32_t op1, size_t vl) {
  return __riscv_viota_m_u64m2_m(mask, op1, vl);
}

vuint64m4_t test_viota_m_u64m4_m(vbool16_t mask, vbool16_t op1, size_t vl) {
  return __riscv_viota_m_u64m4_m(mask, op1, vl);
}

vuint64m8_t test_viota_m_u64m8_m(vbool8_t mask, vbool8_t op1, size_t vl) {
  return __riscv_viota_m_u64m8_m(mask, op1, vl);
}
