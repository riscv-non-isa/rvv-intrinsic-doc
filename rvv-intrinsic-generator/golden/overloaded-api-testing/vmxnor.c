#include <stdint.h>
#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
vbool1_t test_vmxnor_mm_b1(vbool1_t op1, vbool1_t op2, size_t vl) {
  return vmxnor(op1, op2, vl);
}

vbool2_t test_vmxnor_mm_b2(vbool2_t op1, vbool2_t op2, size_t vl) {
  return vmxnor(op1, op2, vl);
}

vbool4_t test_vmxnor_mm_b4(vbool4_t op1, vbool4_t op2, size_t vl) {
  return vmxnor(op1, op2, vl);
}

vbool8_t test_vmxnor_mm_b8(vbool8_t op1, vbool8_t op2, size_t vl) {
  return vmxnor(op1, op2, vl);
}

vbool16_t test_vmxnor_mm_b16(vbool16_t op1, vbool16_t op2, size_t vl) {
  return vmxnor(op1, op2, vl);
}

vbool32_t test_vmxnor_mm_b32(vbool32_t op1, vbool32_t op2, size_t vl) {
  return vmxnor(op1, op2, vl);
}

vbool64_t test_vmxnor_mm_b64(vbool64_t op1, vbool64_t op2, size_t vl) {
  return vmxnor(op1, op2, vl);
}

