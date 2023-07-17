#include <stdint.h>
#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
vuint64m1_t test_vclmulh_vv_u64m1(vuint64m1_t vs2, vuint64m1_t vs1, size_t vl) {
  return __riscv_vclmulh(vs2, vs1, vl);
}

vuint64m1_t test_vclmulh_vx_u64m1(vuint64m1_t vs2, uint64_t rs1, size_t vl) {
  return __riscv_vclmulh(vs2, rs1, vl);
}

vuint64m2_t test_vclmulh_vv_u64m2(vuint64m2_t vs2, vuint64m2_t vs1, size_t vl) {
  return __riscv_vclmulh(vs2, vs1, vl);
}

vuint64m2_t test_vclmulh_vx_u64m2(vuint64m2_t vs2, uint64_t rs1, size_t vl) {
  return __riscv_vclmulh(vs2, rs1, vl);
}

vuint64m4_t test_vclmulh_vv_u64m4(vuint64m4_t vs2, vuint64m4_t vs1, size_t vl) {
  return __riscv_vclmulh(vs2, vs1, vl);
}

vuint64m4_t test_vclmulh_vx_u64m4(vuint64m4_t vs2, uint64_t rs1, size_t vl) {
  return __riscv_vclmulh(vs2, rs1, vl);
}

vuint64m8_t test_vclmulh_vv_u64m8(vuint64m8_t vs2, vuint64m8_t vs1, size_t vl) {
  return __riscv_vclmulh(vs2, vs1, vl);
}

vuint64m8_t test_vclmulh_vx_u64m8(vuint64m8_t vs2, uint64_t rs1, size_t vl) {
  return __riscv_vclmulh(vs2, rs1, vl);
}

vuint64m1_t test_vclmulh_vv_u64m1_m(vbool64_t mask, vuint64m1_t vs2, vuint64m1_t vs1, size_t vl) {
  return __riscv_vclmulh(mask, vs2, vs1, vl);
}

vuint64m1_t test_vclmulh_vx_u64m1_m(vbool64_t mask, vuint64m1_t vs2, uint64_t rs1, size_t vl) {
  return __riscv_vclmulh(mask, vs2, rs1, vl);
}

vuint64m2_t test_vclmulh_vv_u64m2_m(vbool32_t mask, vuint64m2_t vs2, vuint64m2_t vs1, size_t vl) {
  return __riscv_vclmulh(mask, vs2, vs1, vl);
}

vuint64m2_t test_vclmulh_vx_u64m2_m(vbool32_t mask, vuint64m2_t vs2, uint64_t rs1, size_t vl) {
  return __riscv_vclmulh(mask, vs2, rs1, vl);
}

vuint64m4_t test_vclmulh_vv_u64m4_m(vbool16_t mask, vuint64m4_t vs2, vuint64m4_t vs1, size_t vl) {
  return __riscv_vclmulh(mask, vs2, vs1, vl);
}

vuint64m4_t test_vclmulh_vx_u64m4_m(vbool16_t mask, vuint64m4_t vs2, uint64_t rs1, size_t vl) {
  return __riscv_vclmulh(mask, vs2, rs1, vl);
}

vuint64m8_t test_vclmulh_vv_u64m8_m(vbool8_t mask, vuint64m8_t vs2, vuint64m8_t vs1, size_t vl) {
  return __riscv_vclmulh(mask, vs2, vs1, vl);
}

vuint64m8_t test_vclmulh_vx_u64m8_m(vbool8_t mask, vuint64m8_t vs2, uint64_t rs1, size_t vl) {
  return __riscv_vclmulh(mask, vs2, rs1, vl);
}

