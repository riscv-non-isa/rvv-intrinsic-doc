#include <riscv_vector.h>
#include <stdint.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;

vbool1_t test_vmmv_m_b1(vbool1_t vs, size_t vl) { return __riscv_vmmv(vs, vl); }

vbool2_t test_vmmv_m_b2(vbool2_t vs, size_t vl) { return __riscv_vmmv(vs, vl); }

vbool4_t test_vmmv_m_b4(vbool4_t vs, size_t vl) { return __riscv_vmmv(vs, vl); }

vbool8_t test_vmmv_m_b8(vbool8_t vs, size_t vl) { return __riscv_vmmv(vs, vl); }

vbool16_t test_vmmv_m_b16(vbool16_t vs, size_t vl) {
  return __riscv_vmmv(vs, vl);
}

vbool32_t test_vmmv_m_b32(vbool32_t vs, size_t vl) {
  return __riscv_vmmv(vs, vl);
}

vbool64_t test_vmmv_m_b64(vbool64_t vs, size_t vl) {
  return __riscv_vmmv(vs, vl);
}
