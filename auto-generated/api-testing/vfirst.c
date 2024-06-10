#include <riscv_vector.h>
#include <stdint.h>

long test_vfirst_m_b1(vbool1_t vs2, size_t vl) {
  return __riscv_vfirst_m_b1(vs2, vl);
}

long test_vfirst_m_b2(vbool2_t vs2, size_t vl) {
  return __riscv_vfirst_m_b2(vs2, vl);
}

long test_vfirst_m_b4(vbool4_t vs2, size_t vl) {
  return __riscv_vfirst_m_b4(vs2, vl);
}

long test_vfirst_m_b8(vbool8_t vs2, size_t vl) {
  return __riscv_vfirst_m_b8(vs2, vl);
}

long test_vfirst_m_b16(vbool16_t vs2, size_t vl) {
  return __riscv_vfirst_m_b16(vs2, vl);
}

long test_vfirst_m_b32(vbool32_t vs2, size_t vl) {
  return __riscv_vfirst_m_b32(vs2, vl);
}

long test_vfirst_m_b64(vbool64_t vs2, size_t vl) {
  return __riscv_vfirst_m_b64(vs2, vl);
}

long test_vfirst_m_b1_m(vbool1_t vm, vbool1_t vs2, size_t vl) {
  return __riscv_vfirst_m_b1_m(vm, vs2, vl);
}

long test_vfirst_m_b2_m(vbool2_t vm, vbool2_t vs2, size_t vl) {
  return __riscv_vfirst_m_b2_m(vm, vs2, vl);
}

long test_vfirst_m_b4_m(vbool4_t vm, vbool4_t vs2, size_t vl) {
  return __riscv_vfirst_m_b4_m(vm, vs2, vl);
}

long test_vfirst_m_b8_m(vbool8_t vm, vbool8_t vs2, size_t vl) {
  return __riscv_vfirst_m_b8_m(vm, vs2, vl);
}

long test_vfirst_m_b16_m(vbool16_t vm, vbool16_t vs2, size_t vl) {
  return __riscv_vfirst_m_b16_m(vm, vs2, vl);
}

long test_vfirst_m_b32_m(vbool32_t vm, vbool32_t vs2, size_t vl) {
  return __riscv_vfirst_m_b32_m(vm, vs2, vl);
}

long test_vfirst_m_b64_m(vbool64_t vm, vbool64_t vs2, size_t vl) {
  return __riscv_vfirst_m_b64_m(vm, vs2, vl);
}
