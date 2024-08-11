#include <riscv_vector.h>
#include <stdint.h>

vfloat16mf4x4_t test_vlsseg4e16_v_f16mf4x4_tu(vfloat16mf4x4_t vd,
                                              const _Float16 *rs1,
                                              ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg4e16_tu(vd, rs1, rs2, vl);
}

vfloat16mf2x4_t test_vlsseg4e16_v_f16mf2x4_tu(vfloat16mf2x4_t vd,
                                              const _Float16 *rs1,
                                              ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg4e16_tu(vd, rs1, rs2, vl);
}

vfloat16m1x4_t test_vlsseg4e16_v_f16m1x4_tu(vfloat16m1x4_t vd,
                                            const _Float16 *rs1, ptrdiff_t rs2,
                                            size_t vl) {
  return __riscv_vlsseg4e16_tu(vd, rs1, rs2, vl);
}

vfloat16m2x4_t test_vlsseg4e16_v_f16m2x4_tu(vfloat16m2x4_t vd,
                                            const _Float16 *rs1, ptrdiff_t rs2,
                                            size_t vl) {
  return __riscv_vlsseg4e16_tu(vd, rs1, rs2, vl);
}

vfloat16mf4x4_t test_vlsseg4e16_v_f16mf4x4_tum(vbool64_t vm, vfloat16mf4x4_t vd,
                                               const _Float16 *rs1,
                                               ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg4e16_tum(vm, vd, rs1, rs2, vl);
}

vfloat16mf2x4_t test_vlsseg4e16_v_f16mf2x4_tum(vbool32_t vm, vfloat16mf2x4_t vd,
                                               const _Float16 *rs1,
                                               ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg4e16_tum(vm, vd, rs1, rs2, vl);
}

vfloat16m1x4_t test_vlsseg4e16_v_f16m1x4_tum(vbool16_t vm, vfloat16m1x4_t vd,
                                             const _Float16 *rs1, ptrdiff_t rs2,
                                             size_t vl) {
  return __riscv_vlsseg4e16_tum(vm, vd, rs1, rs2, vl);
}

vfloat16m2x4_t test_vlsseg4e16_v_f16m2x4_tum(vbool8_t vm, vfloat16m2x4_t vd,
                                             const _Float16 *rs1, ptrdiff_t rs2,
                                             size_t vl) {
  return __riscv_vlsseg4e16_tum(vm, vd, rs1, rs2, vl);
}

vfloat16mf4x4_t test_vlsseg4e16_v_f16mf4x4_tumu(vbool64_t vm,
                                                vfloat16mf4x4_t vd,
                                                const _Float16 *rs1,
                                                ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg4e16_tumu(vm, vd, rs1, rs2, vl);
}

vfloat16mf2x4_t test_vlsseg4e16_v_f16mf2x4_tumu(vbool32_t vm,
                                                vfloat16mf2x4_t vd,
                                                const _Float16 *rs1,
                                                ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg4e16_tumu(vm, vd, rs1, rs2, vl);
}

vfloat16m1x4_t test_vlsseg4e16_v_f16m1x4_tumu(vbool16_t vm, vfloat16m1x4_t vd,
                                              const _Float16 *rs1,
                                              ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg4e16_tumu(vm, vd, rs1, rs2, vl);
}

vfloat16m2x4_t test_vlsseg4e16_v_f16m2x4_tumu(vbool8_t vm, vfloat16m2x4_t vd,
                                              const _Float16 *rs1,
                                              ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg4e16_tumu(vm, vd, rs1, rs2, vl);
}

vfloat16mf4x4_t test_vlsseg4e16_v_f16mf4x4_mu(vbool64_t vm, vfloat16mf4x4_t vd,
                                              const _Float16 *rs1,
                                              ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg4e16_mu(vm, vd, rs1, rs2, vl);
}

vfloat16mf2x4_t test_vlsseg4e16_v_f16mf2x4_mu(vbool32_t vm, vfloat16mf2x4_t vd,
                                              const _Float16 *rs1,
                                              ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg4e16_mu(vm, vd, rs1, rs2, vl);
}

vfloat16m1x4_t test_vlsseg4e16_v_f16m1x4_mu(vbool16_t vm, vfloat16m1x4_t vd,
                                            const _Float16 *rs1, ptrdiff_t rs2,
                                            size_t vl) {
  return __riscv_vlsseg4e16_mu(vm, vd, rs1, rs2, vl);
}

vfloat16m2x4_t test_vlsseg4e16_v_f16m2x4_mu(vbool8_t vm, vfloat16m2x4_t vd,
                                            const _Float16 *rs1, ptrdiff_t rs2,
                                            size_t vl) {
  return __riscv_vlsseg4e16_mu(vm, vd, rs1, rs2, vl);
}
