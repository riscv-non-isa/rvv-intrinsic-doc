#include <stdint.h>
#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
vuint32mf2_t test_vsm4k_vi_u32mf2_tu(vuint32mf2_t maskedoff, vuint32mf2_t vs2, size_t uimm, size_t vl) {
  return __riscv_vsm4k_vi_u32mf2_tu(maskedoff, vs2, 0, vl);
}

vuint32m1_t test_vsm4k_vi_u32m1_tu(vuint32m1_t maskedoff, vuint32m1_t vs2, size_t uimm, size_t vl) {
  return __riscv_vsm4k_vi_u32m1_tu(maskedoff, vs2, 0, vl);
}

vuint32m2_t test_vsm4k_vi_u32m2_tu(vuint32m2_t maskedoff, vuint32m2_t vs2, size_t uimm, size_t vl) {
  return __riscv_vsm4k_vi_u32m2_tu(maskedoff, vs2, 0, vl);
}

vuint32m4_t test_vsm4k_vi_u32m4_tu(vuint32m4_t maskedoff, vuint32m4_t vs2, size_t uimm, size_t vl) {
  return __riscv_vsm4k_vi_u32m4_tu(maskedoff, vs2, 0, vl);
}

vuint32m8_t test_vsm4k_vi_u32m8_tu(vuint32m8_t maskedoff, vuint32m8_t vs2, size_t uimm, size_t vl) {
  return __riscv_vsm4k_vi_u32m8_tu(maskedoff, vs2, 0, vl);
}

