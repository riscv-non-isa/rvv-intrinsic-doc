#include <riscv_vector.h>
#include <stdint.h>

vuint64m1_t test_vclmulh_vv_u64m1(vuint64m1_t vs2, vuint64m1_t vs1, size_t vl) {
  return __riscv_vclmulh_vv_u64m1(vs2, vs1, vl);
}

vuint64m1_t test_vclmulh_vx_u64m1(vuint64m1_t vs2, uint64_t rs1, size_t vl) {
  return __riscv_vclmulh_vx_u64m1(vs2, rs1, vl);
}

vuint64m2_t test_vclmulh_vv_u64m2(vuint64m2_t vs2, vuint64m2_t vs1, size_t vl) {
  return __riscv_vclmulh_vv_u64m2(vs2, vs1, vl);
}

vuint64m2_t test_vclmulh_vx_u64m2(vuint64m2_t vs2, uint64_t rs1, size_t vl) {
  return __riscv_vclmulh_vx_u64m2(vs2, rs1, vl);
}

vuint64m4_t test_vclmulh_vv_u64m4(vuint64m4_t vs2, vuint64m4_t vs1, size_t vl) {
  return __riscv_vclmulh_vv_u64m4(vs2, vs1, vl);
}

vuint64m4_t test_vclmulh_vx_u64m4(vuint64m4_t vs2, uint64_t rs1, size_t vl) {
  return __riscv_vclmulh_vx_u64m4(vs2, rs1, vl);
}

vuint64m8_t test_vclmulh_vv_u64m8(vuint64m8_t vs2, vuint64m8_t vs1, size_t vl) {
  return __riscv_vclmulh_vv_u64m8(vs2, vs1, vl);
}

vuint64m8_t test_vclmulh_vx_u64m8(vuint64m8_t vs2, uint64_t rs1, size_t vl) {
  return __riscv_vclmulh_vx_u64m8(vs2, rs1, vl);
}

vuint64m1_t test_vclmulh_vv_u64m1_m(vbool64_t vm, vuint64m1_t vs2,
                                    vuint64m1_t vs1, size_t vl) {
  return __riscv_vclmulh_vv_u64m1_m(vm, vs2, vs1, vl);
}

vuint64m1_t test_vclmulh_vx_u64m1_m(vbool64_t vm, vuint64m1_t vs2, uint64_t rs1,
                                    size_t vl) {
  return __riscv_vclmulh_vx_u64m1_m(vm, vs2, rs1, vl);
}

vuint64m2_t test_vclmulh_vv_u64m2_m(vbool32_t vm, vuint64m2_t vs2,
                                    vuint64m2_t vs1, size_t vl) {
  return __riscv_vclmulh_vv_u64m2_m(vm, vs2, vs1, vl);
}

vuint64m2_t test_vclmulh_vx_u64m2_m(vbool32_t vm, vuint64m2_t vs2, uint64_t rs1,
                                    size_t vl) {
  return __riscv_vclmulh_vx_u64m2_m(vm, vs2, rs1, vl);
}

vuint64m4_t test_vclmulh_vv_u64m4_m(vbool16_t vm, vuint64m4_t vs2,
                                    vuint64m4_t vs1, size_t vl) {
  return __riscv_vclmulh_vv_u64m4_m(vm, vs2, vs1, vl);
}

vuint64m4_t test_vclmulh_vx_u64m4_m(vbool16_t vm, vuint64m4_t vs2, uint64_t rs1,
                                    size_t vl) {
  return __riscv_vclmulh_vx_u64m4_m(vm, vs2, rs1, vl);
}

vuint64m8_t test_vclmulh_vv_u64m8_m(vbool8_t vm, vuint64m8_t vs2,
                                    vuint64m8_t vs1, size_t vl) {
  return __riscv_vclmulh_vv_u64m8_m(vm, vs2, vs1, vl);
}

vuint64m8_t test_vclmulh_vx_u64m8_m(vbool8_t vm, vuint64m8_t vs2, uint64_t rs1,
                                    size_t vl) {
  return __riscv_vclmulh_vx_u64m8_m(vm, vs2, rs1, vl);
}
