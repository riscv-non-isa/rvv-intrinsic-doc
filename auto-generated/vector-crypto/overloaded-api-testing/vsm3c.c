#include <stdint.h>
#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
vuint32mf2_t test_vsm3c_vi_u32mf2(vuint32mf2_t vd, vuint32mf2_t vs2, size_t uimm, size_t vl) {
  return __riscv_vsm3c(vd, vs2, 0, vl);
}

vuint32m1_t test_vsm3c_vi_u32m1(vuint32m1_t vd, vuint32m1_t vs2, size_t uimm, size_t vl) {
  return __riscv_vsm3c(vd, vs2, 0, vl);
}

vuint32m2_t test_vsm3c_vi_u32m2(vuint32m2_t vd, vuint32m2_t vs2, size_t uimm, size_t vl) {
  return __riscv_vsm3c(vd, vs2, 0, vl);
}

vuint32m4_t test_vsm3c_vi_u32m4(vuint32m4_t vd, vuint32m4_t vs2, size_t uimm, size_t vl) {
  return __riscv_vsm3c(vd, vs2, 0, vl);
}

vuint32m8_t test_vsm3c_vi_u32m8(vuint32m8_t vd, vuint32m8_t vs2, size_t uimm, size_t vl) {
  return __riscv_vsm3c(vd, vs2, 0, vl);
}

