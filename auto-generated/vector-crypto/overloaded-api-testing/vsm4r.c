#include <stdint.h>
#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
vuint32mf2_t test_vsm4r_vv_u32mf2(vuint32mf2_t vd, vuint32mf2_t vs2, size_t vl) {
  return __riscv_vsm4r_vv(vd, vs2, vl);
}

vuint32mf2_t test_vsm4r_vs_u32mf2(vuint32mf2_t vd, vuint32mf2_t vs2, size_t vl) {
  return __riscv_vsm4r_vs(vd, vs2, vl);
}

vuint32m1_t test_vsm4r_vs_u32m1(vuint32m1_t vd, vuint32mf2_t vs2, size_t vl) {
  return __riscv_vsm4r_vs(vd, vs2, vl);
}

vuint32m2_t test_vsm4r_vs_u32m2(vuint32m2_t vd, vuint32m1_t vs2, size_t vl) {
  return __riscv_vsm4r_vs(vd, vs2, vl);
}

vuint32m4_t test_vsm4r_vs_u32m4(vuint32m4_t vd, vuint32m2_t vs2, size_t vl) {
  return __riscv_vsm4r_vs(vd, vs2, vl);
}

vuint32m8_t test_vsm4r_vs_u32m8(vuint32m8_t vd, vuint32m4_t vs2, size_t vl) {
  return __riscv_vsm4r_vs(vd, vs2, vl);
}

vuint32m1_t test_vsm4r_vv_u32m1(vuint32m1_t vd, vuint32m1_t vs2, size_t vl) {
  return __riscv_vsm4r_vv(vd, vs2, vl);
}

vuint32m1_t test_vsm4r_vs_u32m1(vuint32m1_t vd, vuint32m1_t vs2, size_t vl) {
  return __riscv_vsm4r_vs(vd, vs2, vl);
}

vuint32m2_t test_vsm4r_vs_u32m2(vuint32m2_t vd, vuint32m1_t vs2, size_t vl) {
  return __riscv_vsm4r_vs(vd, vs2, vl);
}

vuint32m4_t test_vsm4r_vs_u32m4(vuint32m4_t vd, vuint32m2_t vs2, size_t vl) {
  return __riscv_vsm4r_vs(vd, vs2, vl);
}

vuint32m8_t test_vsm4r_vs_u32m8(vuint32m8_t vd, vuint32m4_t vs2, size_t vl) {
  return __riscv_vsm4r_vs(vd, vs2, vl);
}

vuint32m2_t test_vsm4r_vv_u32m2(vuint32m2_t vd, vuint32m2_t vs2, size_t vl) {
  return __riscv_vsm4r_vv(vd, vs2, vl);
}

vuint32m2_t test_vsm4r_vs_u32m2(vuint32m2_t vd, vuint32m2_t vs2, size_t vl) {
  return __riscv_vsm4r_vs(vd, vs2, vl);
}

vuint32m4_t test_vsm4r_vs_u32m4(vuint32m4_t vd, vuint32m2_t vs2, size_t vl) {
  return __riscv_vsm4r_vs(vd, vs2, vl);
}

vuint32m8_t test_vsm4r_vs_u32m8(vuint32m8_t vd, vuint32m4_t vs2, size_t vl) {
  return __riscv_vsm4r_vs(vd, vs2, vl);
}

vuint32m4_t test_vsm4r_vv_u32m4(vuint32m4_t vd, vuint32m4_t vs2, size_t vl) {
  return __riscv_vsm4r_vv(vd, vs2, vl);
}

vuint32m4_t test_vsm4r_vs_u32m4(vuint32m4_t vd, vuint32m4_t vs2, size_t vl) {
  return __riscv_vsm4r_vs(vd, vs2, vl);
}

vuint32m8_t test_vsm4r_vs_u32m8(vuint32m8_t vd, vuint32m4_t vs2, size_t vl) {
  return __riscv_vsm4r_vs(vd, vs2, vl);
}

vuint32m8_t test_vsm4r_vv_u32m8(vuint32m8_t vd, vuint32m8_t vs2, size_t vl) {
  return __riscv_vsm4r_vv(vd, vs2, vl);
}

vuint32m8_t test_vsm4r_vs_u32m8(vuint32m8_t vd, vuint32m8_t vs2, size_t vl) {
  return __riscv_vsm4r_vs(vd, vs2, vl);
}

