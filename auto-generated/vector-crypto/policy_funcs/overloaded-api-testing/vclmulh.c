#include <riscv_vector.h>
#include <stdint.h>

vuint64m1_t test_vclmulh_vv_u64m1_tu(vuint64m1_t vd, vuint64m1_t vs2,
                                     vuint64m1_t vs1, size_t vl) {
  return __riscv_vclmulh_tu(vd, vs2, vs1, vl);
}

vuint64m1_t test_vclmulh_vx_u64m1_tu(vuint64m1_t vd, vuint64m1_t vs2,
                                     uint64_t rs1, size_t vl) {
  return __riscv_vclmulh_tu(vd, vs2, rs1, vl);
}

vuint64m2_t test_vclmulh_vv_u64m2_tu(vuint64m2_t vd, vuint64m2_t vs2,
                                     vuint64m2_t vs1, size_t vl) {
  return __riscv_vclmulh_tu(vd, vs2, vs1, vl);
}

vuint64m2_t test_vclmulh_vx_u64m2_tu(vuint64m2_t vd, vuint64m2_t vs2,
                                     uint64_t rs1, size_t vl) {
  return __riscv_vclmulh_tu(vd, vs2, rs1, vl);
}

vuint64m4_t test_vclmulh_vv_u64m4_tu(vuint64m4_t vd, vuint64m4_t vs2,
                                     vuint64m4_t vs1, size_t vl) {
  return __riscv_vclmulh_tu(vd, vs2, vs1, vl);
}

vuint64m4_t test_vclmulh_vx_u64m4_tu(vuint64m4_t vd, vuint64m4_t vs2,
                                     uint64_t rs1, size_t vl) {
  return __riscv_vclmulh_tu(vd, vs2, rs1, vl);
}

vuint64m8_t test_vclmulh_vv_u64m8_tu(vuint64m8_t vd, vuint64m8_t vs2,
                                     vuint64m8_t vs1, size_t vl) {
  return __riscv_vclmulh_tu(vd, vs2, vs1, vl);
}

vuint64m8_t test_vclmulh_vx_u64m8_tu(vuint64m8_t vd, vuint64m8_t vs2,
                                     uint64_t rs1, size_t vl) {
  return __riscv_vclmulh_tu(vd, vs2, rs1, vl);
}

vuint64m1_t test_vclmulh_vv_u64m1_tum(vbool64_t vm, vuint64m1_t vd,
                                      vuint64m1_t vs2, vuint64m1_t vs1,
                                      size_t vl) {
  return __riscv_vclmulh_tum(vm, vd, vs2, vs1, vl);
}

vuint64m1_t test_vclmulh_vx_u64m1_tum(vbool64_t vm, vuint64m1_t vd,
                                      vuint64m1_t vs2, uint64_t rs1,
                                      size_t vl) {
  return __riscv_vclmulh_tum(vm, vd, vs2, rs1, vl);
}

vuint64m2_t test_vclmulh_vv_u64m2_tum(vbool32_t vm, vuint64m2_t vd,
                                      vuint64m2_t vs2, vuint64m2_t vs1,
                                      size_t vl) {
  return __riscv_vclmulh_tum(vm, vd, vs2, vs1, vl);
}

vuint64m2_t test_vclmulh_vx_u64m2_tum(vbool32_t vm, vuint64m2_t vd,
                                      vuint64m2_t vs2, uint64_t rs1,
                                      size_t vl) {
  return __riscv_vclmulh_tum(vm, vd, vs2, rs1, vl);
}

vuint64m4_t test_vclmulh_vv_u64m4_tum(vbool16_t vm, vuint64m4_t vd,
                                      vuint64m4_t vs2, vuint64m4_t vs1,
                                      size_t vl) {
  return __riscv_vclmulh_tum(vm, vd, vs2, vs1, vl);
}

vuint64m4_t test_vclmulh_vx_u64m4_tum(vbool16_t vm, vuint64m4_t vd,
                                      vuint64m4_t vs2, uint64_t rs1,
                                      size_t vl) {
  return __riscv_vclmulh_tum(vm, vd, vs2, rs1, vl);
}

vuint64m8_t test_vclmulh_vv_u64m8_tum(vbool8_t vm, vuint64m8_t vd,
                                      vuint64m8_t vs2, vuint64m8_t vs1,
                                      size_t vl) {
  return __riscv_vclmulh_tum(vm, vd, vs2, vs1, vl);
}

vuint64m8_t test_vclmulh_vx_u64m8_tum(vbool8_t vm, vuint64m8_t vd,
                                      vuint64m8_t vs2, uint64_t rs1,
                                      size_t vl) {
  return __riscv_vclmulh_tum(vm, vd, vs2, rs1, vl);
}

vuint64m1_t test_vclmulh_vv_u64m1_tumu(vbool64_t vm, vuint64m1_t vd,
                                       vuint64m1_t vs2, vuint64m1_t vs1,
                                       size_t vl) {
  return __riscv_vclmulh_tumu(vm, vd, vs2, vs1, vl);
}

vuint64m1_t test_vclmulh_vx_u64m1_tumu(vbool64_t vm, vuint64m1_t vd,
                                       vuint64m1_t vs2, uint64_t rs1,
                                       size_t vl) {
  return __riscv_vclmulh_tumu(vm, vd, vs2, rs1, vl);
}

vuint64m2_t test_vclmulh_vv_u64m2_tumu(vbool32_t vm, vuint64m2_t vd,
                                       vuint64m2_t vs2, vuint64m2_t vs1,
                                       size_t vl) {
  return __riscv_vclmulh_tumu(vm, vd, vs2, vs1, vl);
}

vuint64m2_t test_vclmulh_vx_u64m2_tumu(vbool32_t vm, vuint64m2_t vd,
                                       vuint64m2_t vs2, uint64_t rs1,
                                       size_t vl) {
  return __riscv_vclmulh_tumu(vm, vd, vs2, rs1, vl);
}

vuint64m4_t test_vclmulh_vv_u64m4_tumu(vbool16_t vm, vuint64m4_t vd,
                                       vuint64m4_t vs2, vuint64m4_t vs1,
                                       size_t vl) {
  return __riscv_vclmulh_tumu(vm, vd, vs2, vs1, vl);
}

vuint64m4_t test_vclmulh_vx_u64m4_tumu(vbool16_t vm, vuint64m4_t vd,
                                       vuint64m4_t vs2, uint64_t rs1,
                                       size_t vl) {
  return __riscv_vclmulh_tumu(vm, vd, vs2, rs1, vl);
}

vuint64m8_t test_vclmulh_vv_u64m8_tumu(vbool8_t vm, vuint64m8_t vd,
                                       vuint64m8_t vs2, vuint64m8_t vs1,
                                       size_t vl) {
  return __riscv_vclmulh_tumu(vm, vd, vs2, vs1, vl);
}

vuint64m8_t test_vclmulh_vx_u64m8_tumu(vbool8_t vm, vuint64m8_t vd,
                                       vuint64m8_t vs2, uint64_t rs1,
                                       size_t vl) {
  return __riscv_vclmulh_tumu(vm, vd, vs2, rs1, vl);
}

vuint64m1_t test_vclmulh_vv_u64m1_mu(vbool64_t vm, vuint64m1_t vd,
                                     vuint64m1_t vs2, vuint64m1_t vs1,
                                     size_t vl) {
  return __riscv_vclmulh_mu(vm, vd, vs2, vs1, vl);
}

vuint64m1_t test_vclmulh_vx_u64m1_mu(vbool64_t vm, vuint64m1_t vd,
                                     vuint64m1_t vs2, uint64_t rs1, size_t vl) {
  return __riscv_vclmulh_mu(vm, vd, vs2, rs1, vl);
}

vuint64m2_t test_vclmulh_vv_u64m2_mu(vbool32_t vm, vuint64m2_t vd,
                                     vuint64m2_t vs2, vuint64m2_t vs1,
                                     size_t vl) {
  return __riscv_vclmulh_mu(vm, vd, vs2, vs1, vl);
}

vuint64m2_t test_vclmulh_vx_u64m2_mu(vbool32_t vm, vuint64m2_t vd,
                                     vuint64m2_t vs2, uint64_t rs1, size_t vl) {
  return __riscv_vclmulh_mu(vm, vd, vs2, rs1, vl);
}

vuint64m4_t test_vclmulh_vv_u64m4_mu(vbool16_t vm, vuint64m4_t vd,
                                     vuint64m4_t vs2, vuint64m4_t vs1,
                                     size_t vl) {
  return __riscv_vclmulh_mu(vm, vd, vs2, vs1, vl);
}

vuint64m4_t test_vclmulh_vx_u64m4_mu(vbool16_t vm, vuint64m4_t vd,
                                     vuint64m4_t vs2, uint64_t rs1, size_t vl) {
  return __riscv_vclmulh_mu(vm, vd, vs2, rs1, vl);
}

vuint64m8_t test_vclmulh_vv_u64m8_mu(vbool8_t vm, vuint64m8_t vd,
                                     vuint64m8_t vs2, vuint64m8_t vs1,
                                     size_t vl) {
  return __riscv_vclmulh_mu(vm, vd, vs2, vs1, vl);
}

vuint64m8_t test_vclmulh_vx_u64m8_mu(vbool8_t vm, vuint64m8_t vd,
                                     vuint64m8_t vs2, uint64_t rs1, size_t vl) {
  return __riscv_vclmulh_mu(vm, vd, vs2, rs1, vl);
}
