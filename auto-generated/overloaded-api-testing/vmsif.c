#include <riscv_vector.h>
#include <stdint.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
vbool1_t test_vmsif_m_b1(vbool1_t op1, size_t vl) {
  return __riscv_vmsif(op1, vl);
}

vbool2_t test_vmsif_m_b2(vbool2_t op1, size_t vl) {
  return __riscv_vmsif(op1, vl);
}

vbool4_t test_vmsif_m_b4(vbool4_t op1, size_t vl) {
  return __riscv_vmsif(op1, vl);
}

vbool8_t test_vmsif_m_b8(vbool8_t op1, size_t vl) {
  return __riscv_vmsif(op1, vl);
}

vbool16_t test_vmsif_m_b16(vbool16_t op1, size_t vl) {
  return __riscv_vmsif(op1, vl);
}

vbool32_t test_vmsif_m_b32(vbool32_t op1, size_t vl) {
  return __riscv_vmsif(op1, vl);
}

vbool64_t test_vmsif_m_b64(vbool64_t op1, size_t vl) {
  return __riscv_vmsif(op1, vl);
}

vbool1_t test_vmsif_m_b1_m(vbool1_t mask, vbool1_t op1, size_t vl) {
  return __riscv_vmsif(mask, op1, vl);
}

vbool2_t test_vmsif_m_b2_m(vbool2_t mask, vbool2_t op1, size_t vl) {
  return __riscv_vmsif(mask, op1, vl);
}

vbool4_t test_vmsif_m_b4_m(vbool4_t mask, vbool4_t op1, size_t vl) {
  return __riscv_vmsif(mask, op1, vl);
}

vbool8_t test_vmsif_m_b8_m(vbool8_t mask, vbool8_t op1, size_t vl) {
  return __riscv_vmsif(mask, op1, vl);
}

vbool16_t test_vmsif_m_b16_m(vbool16_t mask, vbool16_t op1, size_t vl) {
  return __riscv_vmsif(mask, op1, vl);
}

vbool32_t test_vmsif_m_b32_m(vbool32_t mask, vbool32_t op1, size_t vl) {
  return __riscv_vmsif(mask, op1, vl);
}

vbool64_t test_vmsif_m_b64_m(vbool64_t mask, vbool64_t op1, size_t vl) {
  return __riscv_vmsif(mask, op1, vl);
}
