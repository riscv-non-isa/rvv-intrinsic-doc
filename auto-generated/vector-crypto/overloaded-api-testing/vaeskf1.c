#include <riscv_vector.h>
#include <stdint.h>

vuint32mf2_t test_vaeskf1_vi_u32mf2(vuint32mf2_t vs2, size_t vl) {
  return __riscv_vaeskf1(vs2, 0, vl);
}

vuint32m1_t test_vaeskf1_vi_u32m1(vuint32m1_t vs2, size_t vl) {
  return __riscv_vaeskf1(vs2, 0, vl);
}

vuint32m2_t test_vaeskf1_vi_u32m2(vuint32m2_t vs2, size_t vl) {
  return __riscv_vaeskf1(vs2, 0, vl);
}

vuint32m4_t test_vaeskf1_vi_u32m4(vuint32m4_t vs2, size_t vl) {
  return __riscv_vaeskf1(vs2, 0, vl);
}

vuint32m8_t test_vaeskf1_vi_u32m8(vuint32m8_t vs2, size_t vl) {
  return __riscv_vaeskf1(vs2, 0, vl);
}
