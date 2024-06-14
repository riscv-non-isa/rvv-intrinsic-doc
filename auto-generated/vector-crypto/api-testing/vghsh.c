#include <riscv_vector.h>
#include <stdint.h>

vuint32mf2_t test_vghsh_vv_u32mf2(vuint32mf2_t vd, vuint32mf2_t vs2,
                                  vuint32mf2_t vs1, size_t vl) {
  return __riscv_vghsh_vv_u32mf2(vd, vs2, vs1, vl);
}

vuint32m1_t test_vghsh_vv_u32m1(vuint32m1_t vd, vuint32m1_t vs2,
                                vuint32m1_t vs1, size_t vl) {
  return __riscv_vghsh_vv_u32m1(vd, vs2, vs1, vl);
}

vuint32m2_t test_vghsh_vv_u32m2(vuint32m2_t vd, vuint32m2_t vs2,
                                vuint32m2_t vs1, size_t vl) {
  return __riscv_vghsh_vv_u32m2(vd, vs2, vs1, vl);
}

vuint32m4_t test_vghsh_vv_u32m4(vuint32m4_t vd, vuint32m4_t vs2,
                                vuint32m4_t vs1, size_t vl) {
  return __riscv_vghsh_vv_u32m4(vd, vs2, vs1, vl);
}

vuint32m8_t test_vghsh_vv_u32m8(vuint32m8_t vd, vuint32m8_t vs2,
                                vuint32m8_t vs1, size_t vl) {
  return __riscv_vghsh_vv_u32m8(vd, vs2, vs1, vl);
}
