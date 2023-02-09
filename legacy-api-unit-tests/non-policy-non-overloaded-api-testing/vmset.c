#include <stdint.h>
#include "rvv-v0p10-compatible-headers/non-policy.h"
#include "rvv-v0p10-compatible-headers/policy.h"
#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
vbool1_t test_vmset_m_b1(size_t vl) {
  return vmset_m_b1(vl);
}

vbool2_t test_vmset_m_b2(size_t vl) {
  return vmset_m_b2(vl);
}

vbool4_t test_vmset_m_b4(size_t vl) {
  return vmset_m_b4(vl);
}

vbool8_t test_vmset_m_b8(size_t vl) {
  return vmset_m_b8(vl);
}

vbool16_t test_vmset_m_b16(size_t vl) {
  return vmset_m_b16(vl);
}

vbool32_t test_vmset_m_b32(size_t vl) {
  return vmset_m_b32(vl);
}

vbool64_t test_vmset_m_b64(size_t vl) {
  return vmset_m_b64(vl);
}

