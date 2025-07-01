// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v \
// RUN:   -target-feature +zvfbfmin \
// RUN:   -target-feature +zvfbfwma -disable-O0-optnone \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

vbfloat16mf4x5_t test_vluxseg5ei64_v_bf16mf4x5_tu(vbfloat16mf4x5_t vd,
                                                  const __bf16 *rs1,
                                                  vuint64m1_t rs2, size_t vl) {
  return __riscv_vluxseg5ei64_tu(vd, rs1, rs2, vl);
}

vbfloat16mf2x5_t test_vluxseg5ei64_v_bf16mf2x5_tu(vbfloat16mf2x5_t vd,
                                                  const __bf16 *rs1,
                                                  vuint64m2_t rs2, size_t vl) {
  return __riscv_vluxseg5ei64_tu(vd, rs1, rs2, vl);
}

vbfloat16m1x5_t test_vluxseg5ei64_v_bf16m1x5_tu(vbfloat16m1x5_t vd,
                                                const __bf16 *rs1,
                                                vuint64m4_t rs2, size_t vl) {
  return __riscv_vluxseg5ei64_tu(vd, rs1, rs2, vl);
}

vbfloat16mf4x5_t test_vluxseg5ei64_v_bf16mf4x5_tum(vbool64_t vm,
                                                   vbfloat16mf4x5_t vd,
                                                   const __bf16 *rs1,
                                                   vuint64m1_t rs2, size_t vl) {
  return __riscv_vluxseg5ei64_tum(vm, vd, rs1, rs2, vl);
}

vbfloat16mf2x5_t test_vluxseg5ei64_v_bf16mf2x5_tum(vbool32_t vm,
                                                   vbfloat16mf2x5_t vd,
                                                   const __bf16 *rs1,
                                                   vuint64m2_t rs2, size_t vl) {
  return __riscv_vluxseg5ei64_tum(vm, vd, rs1, rs2, vl);
}

vbfloat16m1x5_t test_vluxseg5ei64_v_bf16m1x5_tum(vbool16_t vm,
                                                 vbfloat16m1x5_t vd,
                                                 const __bf16 *rs1,
                                                 vuint64m4_t rs2, size_t vl) {
  return __riscv_vluxseg5ei64_tum(vm, vd, rs1, rs2, vl);
}

vbfloat16mf4x5_t test_vluxseg5ei64_v_bf16mf4x5_tumu(vbool64_t vm,
                                                    vbfloat16mf4x5_t vd,
                                                    const __bf16 *rs1,
                                                    vuint64m1_t rs2,
                                                    size_t vl) {
  return __riscv_vluxseg5ei64_tumu(vm, vd, rs1, rs2, vl);
}

vbfloat16mf2x5_t test_vluxseg5ei64_v_bf16mf2x5_tumu(vbool32_t vm,
                                                    vbfloat16mf2x5_t vd,
                                                    const __bf16 *rs1,
                                                    vuint64m2_t rs2,
                                                    size_t vl) {
  return __riscv_vluxseg5ei64_tumu(vm, vd, rs1, rs2, vl);
}

vbfloat16m1x5_t test_vluxseg5ei64_v_bf16m1x5_tumu(vbool16_t vm,
                                                  vbfloat16m1x5_t vd,
                                                  const __bf16 *rs1,
                                                  vuint64m4_t rs2, size_t vl) {
  return __riscv_vluxseg5ei64_tumu(vm, vd, rs1, rs2, vl);
}

vbfloat16mf4x5_t test_vluxseg5ei64_v_bf16mf4x5_mu(vbool64_t vm,
                                                  vbfloat16mf4x5_t vd,
                                                  const __bf16 *rs1,
                                                  vuint64m1_t rs2, size_t vl) {
  return __riscv_vluxseg5ei64_mu(vm, vd, rs1, rs2, vl);
}

vbfloat16mf2x5_t test_vluxseg5ei64_v_bf16mf2x5_mu(vbool32_t vm,
                                                  vbfloat16mf2x5_t vd,
                                                  const __bf16 *rs1,
                                                  vuint64m2_t rs2, size_t vl) {
  return __riscv_vluxseg5ei64_mu(vm, vd, rs1, rs2, vl);
}

vbfloat16m1x5_t test_vluxseg5ei64_v_bf16m1x5_mu(vbool16_t vm,
                                                vbfloat16m1x5_t vd,
                                                const __bf16 *rs1,
                                                vuint64m4_t rs2, size_t vl) {
  return __riscv_vluxseg5ei64_mu(vm, vd, rs1, rs2, vl);
}
