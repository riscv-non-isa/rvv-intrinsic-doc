// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v \
// RUN:   -target-feature +zvfbfmin \
// RUN:   -target-feature +zvfbfwma -disable-O0-optnone \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

vbfloat16mf4x7_t test_vluxseg7ei64_v_bf16mf4x7_tu(vbfloat16mf4x7_t vd,
                                                  const __bf16 *rs1,
                                                  vuint64m1_t rs2, size_t vl) {
  return __riscv_vluxseg7ei64_tu(vd, rs1, rs2, vl);
}

vbfloat16mf2x7_t test_vluxseg7ei64_v_bf16mf2x7_tu(vbfloat16mf2x7_t vd,
                                                  const __bf16 *rs1,
                                                  vuint64m2_t rs2, size_t vl) {
  return __riscv_vluxseg7ei64_tu(vd, rs1, rs2, vl);
}

vbfloat16m1x7_t test_vluxseg7ei64_v_bf16m1x7_tu(vbfloat16m1x7_t vd,
                                                const __bf16 *rs1,
                                                vuint64m4_t rs2, size_t vl) {
  return __riscv_vluxseg7ei64_tu(vd, rs1, rs2, vl);
}

vbfloat16mf4x7_t test_vluxseg7ei64_v_bf16mf4x7_tum(vbool64_t vm,
                                                   vbfloat16mf4x7_t vd,
                                                   const __bf16 *rs1,
                                                   vuint64m1_t rs2, size_t vl) {
  return __riscv_vluxseg7ei64_tum(vm, vd, rs1, rs2, vl);
}

vbfloat16mf2x7_t test_vluxseg7ei64_v_bf16mf2x7_tum(vbool32_t vm,
                                                   vbfloat16mf2x7_t vd,
                                                   const __bf16 *rs1,
                                                   vuint64m2_t rs2, size_t vl) {
  return __riscv_vluxseg7ei64_tum(vm, vd, rs1, rs2, vl);
}

vbfloat16m1x7_t test_vluxseg7ei64_v_bf16m1x7_tum(vbool16_t vm,
                                                 vbfloat16m1x7_t vd,
                                                 const __bf16 *rs1,
                                                 vuint64m4_t rs2, size_t vl) {
  return __riscv_vluxseg7ei64_tum(vm, vd, rs1, rs2, vl);
}

vbfloat16mf4x7_t test_vluxseg7ei64_v_bf16mf4x7_tumu(vbool64_t vm,
                                                    vbfloat16mf4x7_t vd,
                                                    const __bf16 *rs1,
                                                    vuint64m1_t rs2,
                                                    size_t vl) {
  return __riscv_vluxseg7ei64_tumu(vm, vd, rs1, rs2, vl);
}

vbfloat16mf2x7_t test_vluxseg7ei64_v_bf16mf2x7_tumu(vbool32_t vm,
                                                    vbfloat16mf2x7_t vd,
                                                    const __bf16 *rs1,
                                                    vuint64m2_t rs2,
                                                    size_t vl) {
  return __riscv_vluxseg7ei64_tumu(vm, vd, rs1, rs2, vl);
}

vbfloat16m1x7_t test_vluxseg7ei64_v_bf16m1x7_tumu(vbool16_t vm,
                                                  vbfloat16m1x7_t vd,
                                                  const __bf16 *rs1,
                                                  vuint64m4_t rs2, size_t vl) {
  return __riscv_vluxseg7ei64_tumu(vm, vd, rs1, rs2, vl);
}

vbfloat16mf4x7_t test_vluxseg7ei64_v_bf16mf4x7_mu(vbool64_t vm,
                                                  vbfloat16mf4x7_t vd,
                                                  const __bf16 *rs1,
                                                  vuint64m1_t rs2, size_t vl) {
  return __riscv_vluxseg7ei64_mu(vm, vd, rs1, rs2, vl);
}

vbfloat16mf2x7_t test_vluxseg7ei64_v_bf16mf2x7_mu(vbool32_t vm,
                                                  vbfloat16mf2x7_t vd,
                                                  const __bf16 *rs1,
                                                  vuint64m2_t rs2, size_t vl) {
  return __riscv_vluxseg7ei64_mu(vm, vd, rs1, rs2, vl);
}

vbfloat16m1x7_t test_vluxseg7ei64_v_bf16m1x7_mu(vbool16_t vm,
                                                vbfloat16m1x7_t vd,
                                                const __bf16 *rs1,
                                                vuint64m4_t rs2, size_t vl) {
  return __riscv_vluxseg7ei64_mu(vm, vd, rs1, rs2, vl);
}
