#include <riscv_vector.h>
#include <stdint.h>

vuint32mf2_t test_vsm3me_vv_u32mf2(vuint32mf2_t vs2, vuint32mf2_t vs1,
                                   size_t vl) {
  return __riscv_vsm3me(vs2, vs1, vl);
}

vuint32m1_t test_vsm3me_vv_u32m1(vuint32m1_t vs2, vuint32m1_t vs1, size_t vl) {
  return __riscv_vsm3me(vs2, vs1, vl);
}

vuint32m2_t test_vsm3me_vv_u32m2(vuint32m2_t vs2, vuint32m2_t vs1, size_t vl) {
  return __riscv_vsm3me(vs2, vs1, vl);
}

vuint32m4_t test_vsm3me_vv_u32m4(vuint32m4_t vs2, vuint32m4_t vs1, size_t vl) {
  return __riscv_vsm3me(vs2, vs1, vl);
}

vuint32m8_t test_vsm3me_vv_u32m8(vuint32m8_t vs2, vuint32m8_t vs1, size_t vl) {
  return __riscv_vsm3me(vs2, vs1, vl);
}
