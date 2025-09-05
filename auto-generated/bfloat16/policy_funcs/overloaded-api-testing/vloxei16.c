#include <riscv_vector.h>
#include <stdint.h>

vbfloat16mf4_t test_vloxei16_v_bf16mf4_tu(vbfloat16mf4_t vd, const __bf16 *rs1,
                                          vuint16mf4_t rs2, size_t vl) {
  return __riscv_vloxei16_tu(vd, rs1, rs2, vl);
}

vbfloat16mf2_t test_vloxei16_v_bf16mf2_tu(vbfloat16mf2_t vd, const __bf16 *rs1,
                                          vuint16mf2_t rs2, size_t vl) {
  return __riscv_vloxei16_tu(vd, rs1, rs2, vl);
}

vbfloat16m1_t test_vloxei16_v_bf16m1_tu(vbfloat16m1_t vd, const __bf16 *rs1,
                                        vuint16m1_t rs2, size_t vl) {
  return __riscv_vloxei16_tu(vd, rs1, rs2, vl);
}

vbfloat16m2_t test_vloxei16_v_bf16m2_tu(vbfloat16m2_t vd, const __bf16 *rs1,
                                        vuint16m2_t rs2, size_t vl) {
  return __riscv_vloxei16_tu(vd, rs1, rs2, vl);
}

vbfloat16m4_t test_vloxei16_v_bf16m4_tu(vbfloat16m4_t vd, const __bf16 *rs1,
                                        vuint16m4_t rs2, size_t vl) {
  return __riscv_vloxei16_tu(vd, rs1, rs2, vl);
}

vbfloat16m8_t test_vloxei16_v_bf16m8_tu(vbfloat16m8_t vd, const __bf16 *rs1,
                                        vuint16m8_t rs2, size_t vl) {
  return __riscv_vloxei16_tu(vd, rs1, rs2, vl);
}

vbfloat16mf4_t test_vloxei16_v_bf16mf4_tum(vbool64_t vm, vbfloat16mf4_t vd,
                                           const __bf16 *rs1, vuint16mf4_t rs2,
                                           size_t vl) {
  return __riscv_vloxei16_tum(vm, vd, rs1, rs2, vl);
}

vbfloat16mf2_t test_vloxei16_v_bf16mf2_tum(vbool32_t vm, vbfloat16mf2_t vd,
                                           const __bf16 *rs1, vuint16mf2_t rs2,
                                           size_t vl) {
  return __riscv_vloxei16_tum(vm, vd, rs1, rs2, vl);
}

vbfloat16m1_t test_vloxei16_v_bf16m1_tum(vbool16_t vm, vbfloat16m1_t vd,
                                         const __bf16 *rs1, vuint16m1_t rs2,
                                         size_t vl) {
  return __riscv_vloxei16_tum(vm, vd, rs1, rs2, vl);
}

vbfloat16m2_t test_vloxei16_v_bf16m2_tum(vbool8_t vm, vbfloat16m2_t vd,
                                         const __bf16 *rs1, vuint16m2_t rs2,
                                         size_t vl) {
  return __riscv_vloxei16_tum(vm, vd, rs1, rs2, vl);
}

vbfloat16m4_t test_vloxei16_v_bf16m4_tum(vbool4_t vm, vbfloat16m4_t vd,
                                         const __bf16 *rs1, vuint16m4_t rs2,
                                         size_t vl) {
  return __riscv_vloxei16_tum(vm, vd, rs1, rs2, vl);
}

vbfloat16m8_t test_vloxei16_v_bf16m8_tum(vbool2_t vm, vbfloat16m8_t vd,
                                         const __bf16 *rs1, vuint16m8_t rs2,
                                         size_t vl) {
  return __riscv_vloxei16_tum(vm, vd, rs1, rs2, vl);
}

vbfloat16mf4_t test_vloxei16_v_bf16mf4_tumu(vbool64_t vm, vbfloat16mf4_t vd,
                                            const __bf16 *rs1, vuint16mf4_t rs2,
                                            size_t vl) {
  return __riscv_vloxei16_tumu(vm, vd, rs1, rs2, vl);
}

vbfloat16mf2_t test_vloxei16_v_bf16mf2_tumu(vbool32_t vm, vbfloat16mf2_t vd,
                                            const __bf16 *rs1, vuint16mf2_t rs2,
                                            size_t vl) {
  return __riscv_vloxei16_tumu(vm, vd, rs1, rs2, vl);
}

vbfloat16m1_t test_vloxei16_v_bf16m1_tumu(vbool16_t vm, vbfloat16m1_t vd,
                                          const __bf16 *rs1, vuint16m1_t rs2,
                                          size_t vl) {
  return __riscv_vloxei16_tumu(vm, vd, rs1, rs2, vl);
}

vbfloat16m2_t test_vloxei16_v_bf16m2_tumu(vbool8_t vm, vbfloat16m2_t vd,
                                          const __bf16 *rs1, vuint16m2_t rs2,
                                          size_t vl) {
  return __riscv_vloxei16_tumu(vm, vd, rs1, rs2, vl);
}

vbfloat16m4_t test_vloxei16_v_bf16m4_tumu(vbool4_t vm, vbfloat16m4_t vd,
                                          const __bf16 *rs1, vuint16m4_t rs2,
                                          size_t vl) {
  return __riscv_vloxei16_tumu(vm, vd, rs1, rs2, vl);
}

vbfloat16m8_t test_vloxei16_v_bf16m8_tumu(vbool2_t vm, vbfloat16m8_t vd,
                                          const __bf16 *rs1, vuint16m8_t rs2,
                                          size_t vl) {
  return __riscv_vloxei16_tumu(vm, vd, rs1, rs2, vl);
}

vbfloat16mf4_t test_vloxei16_v_bf16mf4_mu(vbool64_t vm, vbfloat16mf4_t vd,
                                          const __bf16 *rs1, vuint16mf4_t rs2,
                                          size_t vl) {
  return __riscv_vloxei16_mu(vm, vd, rs1, rs2, vl);
}

vbfloat16mf2_t test_vloxei16_v_bf16mf2_mu(vbool32_t vm, vbfloat16mf2_t vd,
                                          const __bf16 *rs1, vuint16mf2_t rs2,
                                          size_t vl) {
  return __riscv_vloxei16_mu(vm, vd, rs1, rs2, vl);
}

vbfloat16m1_t test_vloxei16_v_bf16m1_mu(vbool16_t vm, vbfloat16m1_t vd,
                                        const __bf16 *rs1, vuint16m1_t rs2,
                                        size_t vl) {
  return __riscv_vloxei16_mu(vm, vd, rs1, rs2, vl);
}

vbfloat16m2_t test_vloxei16_v_bf16m2_mu(vbool8_t vm, vbfloat16m2_t vd,
                                        const __bf16 *rs1, vuint16m2_t rs2,
                                        size_t vl) {
  return __riscv_vloxei16_mu(vm, vd, rs1, rs2, vl);
}

vbfloat16m4_t test_vloxei16_v_bf16m4_mu(vbool4_t vm, vbfloat16m4_t vd,
                                        const __bf16 *rs1, vuint16m4_t rs2,
                                        size_t vl) {
  return __riscv_vloxei16_mu(vm, vd, rs1, rs2, vl);
}

vbfloat16m8_t test_vloxei16_v_bf16m8_mu(vbool2_t vm, vbfloat16m8_t vd,
                                        const __bf16 *rs1, vuint16m8_t rs2,
                                        size_t vl) {
  return __riscv_vloxei16_mu(vm, vd, rs1, rs2, vl);
}
