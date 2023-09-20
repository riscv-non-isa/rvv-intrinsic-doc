#include <riscv_vector.h>
#include <stdint.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
vfloat32mf2x7_t test_vlsseg7e32_v_f32mf2x7_tu(vfloat32mf2x7_t vd,
                                              const float32_t *rs1,
                                              ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg7e32_v_f32mf2x7_tu(vd, rs1, rs2, vl);
}

vfloat32m1x7_t test_vlsseg7e32_v_f32m1x7_tu(vfloat32m1x7_t vd,
                                            const float32_t *rs1, ptrdiff_t rs2,
                                            size_t vl) {
  return __riscv_vlsseg7e32_v_f32m1x7_tu(vd, rs1, rs2, vl);
}

vint32mf2x7_t test_vlsseg7e32_v_i32mf2x7_tu(vint32mf2x7_t vd,
                                            const int32_t *rs1, ptrdiff_t rs2,
                                            size_t vl) {
  return __riscv_vlsseg7e32_v_i32mf2x7_tu(vd, rs1, rs2, vl);
}

vint32m1x7_t test_vlsseg7e32_v_i32m1x7_tu(vint32m1x7_t vd, const int32_t *rs1,
                                          ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg7e32_v_i32m1x7_tu(vd, rs1, rs2, vl);
}

vuint32mf2x7_t test_vlsseg7e32_v_u32mf2x7_tu(vuint32mf2x7_t vd,
                                             const uint32_t *rs1, ptrdiff_t rs2,
                                             size_t vl) {
  return __riscv_vlsseg7e32_v_u32mf2x7_tu(vd, rs1, rs2, vl);
}

vuint32m1x7_t test_vlsseg7e32_v_u32m1x7_tu(vuint32m1x7_t vd,
                                           const uint32_t *rs1, ptrdiff_t rs2,
                                           size_t vl) {
  return __riscv_vlsseg7e32_v_u32m1x7_tu(vd, rs1, rs2, vl);
}

vfloat32mf2x7_t test_vlsseg7e32_v_f32mf2x7_tum(vbool64_t vm, vfloat32mf2x7_t vd,
                                               const float32_t *rs1,
                                               ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg7e32_v_f32mf2x7_tum(vm, vd, rs1, rs2, vl);
}

vfloat32m1x7_t test_vlsseg7e32_v_f32m1x7_tum(vbool32_t vm, vfloat32m1x7_t vd,
                                             const float32_t *rs1,
                                             ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg7e32_v_f32m1x7_tum(vm, vd, rs1, rs2, vl);
}

vint32mf2x7_t test_vlsseg7e32_v_i32mf2x7_tum(vbool64_t vm, vint32mf2x7_t vd,
                                             const int32_t *rs1, ptrdiff_t rs2,
                                             size_t vl) {
  return __riscv_vlsseg7e32_v_i32mf2x7_tum(vm, vd, rs1, rs2, vl);
}

vint32m1x7_t test_vlsseg7e32_v_i32m1x7_tum(vbool32_t vm, vint32m1x7_t vd,
                                           const int32_t *rs1, ptrdiff_t rs2,
                                           size_t vl) {
  return __riscv_vlsseg7e32_v_i32m1x7_tum(vm, vd, rs1, rs2, vl);
}

vuint32mf2x7_t test_vlsseg7e32_v_u32mf2x7_tum(vbool64_t vm, vuint32mf2x7_t vd,
                                              const uint32_t *rs1,
                                              ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg7e32_v_u32mf2x7_tum(vm, vd, rs1, rs2, vl);
}

vuint32m1x7_t test_vlsseg7e32_v_u32m1x7_tum(vbool32_t vm, vuint32m1x7_t vd,
                                            const uint32_t *rs1, ptrdiff_t rs2,
                                            size_t vl) {
  return __riscv_vlsseg7e32_v_u32m1x7_tum(vm, vd, rs1, rs2, vl);
}

vfloat32mf2x7_t test_vlsseg7e32_v_f32mf2x7_tumu(vbool64_t vm,
                                                vfloat32mf2x7_t vd,
                                                const float32_t *rs1,
                                                ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg7e32_v_f32mf2x7_tumu(vm, vd, rs1, rs2, vl);
}

vfloat32m1x7_t test_vlsseg7e32_v_f32m1x7_tumu(vbool32_t vm, vfloat32m1x7_t vd,
                                              const float32_t *rs1,
                                              ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg7e32_v_f32m1x7_tumu(vm, vd, rs1, rs2, vl);
}

vint32mf2x7_t test_vlsseg7e32_v_i32mf2x7_tumu(vbool64_t vm, vint32mf2x7_t vd,
                                              const int32_t *rs1, ptrdiff_t rs2,
                                              size_t vl) {
  return __riscv_vlsseg7e32_v_i32mf2x7_tumu(vm, vd, rs1, rs2, vl);
}

vint32m1x7_t test_vlsseg7e32_v_i32m1x7_tumu(vbool32_t vm, vint32m1x7_t vd,
                                            const int32_t *rs1, ptrdiff_t rs2,
                                            size_t vl) {
  return __riscv_vlsseg7e32_v_i32m1x7_tumu(vm, vd, rs1, rs2, vl);
}

vuint32mf2x7_t test_vlsseg7e32_v_u32mf2x7_tumu(vbool64_t vm, vuint32mf2x7_t vd,
                                               const uint32_t *rs1,
                                               ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg7e32_v_u32mf2x7_tumu(vm, vd, rs1, rs2, vl);
}

vuint32m1x7_t test_vlsseg7e32_v_u32m1x7_tumu(vbool32_t vm, vuint32m1x7_t vd,
                                             const uint32_t *rs1, ptrdiff_t rs2,
                                             size_t vl) {
  return __riscv_vlsseg7e32_v_u32m1x7_tumu(vm, vd, rs1, rs2, vl);
}

vfloat32mf2x7_t test_vlsseg7e32_v_f32mf2x7_mu(vbool64_t vm, vfloat32mf2x7_t vd,
                                              const float32_t *rs1,
                                              ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg7e32_v_f32mf2x7_mu(vm, vd, rs1, rs2, vl);
}

vfloat32m1x7_t test_vlsseg7e32_v_f32m1x7_mu(vbool32_t vm, vfloat32m1x7_t vd,
                                            const float32_t *rs1, ptrdiff_t rs2,
                                            size_t vl) {
  return __riscv_vlsseg7e32_v_f32m1x7_mu(vm, vd, rs1, rs2, vl);
}

vint32mf2x7_t test_vlsseg7e32_v_i32mf2x7_mu(vbool64_t vm, vint32mf2x7_t vd,
                                            const int32_t *rs1, ptrdiff_t rs2,
                                            size_t vl) {
  return __riscv_vlsseg7e32_v_i32mf2x7_mu(vm, vd, rs1, rs2, vl);
}

vint32m1x7_t test_vlsseg7e32_v_i32m1x7_mu(vbool32_t vm, vint32m1x7_t vd,
                                          const int32_t *rs1, ptrdiff_t rs2,
                                          size_t vl) {
  return __riscv_vlsseg7e32_v_i32m1x7_mu(vm, vd, rs1, rs2, vl);
}

vuint32mf2x7_t test_vlsseg7e32_v_u32mf2x7_mu(vbool64_t vm, vuint32mf2x7_t vd,
                                             const uint32_t *rs1, ptrdiff_t rs2,
                                             size_t vl) {
  return __riscv_vlsseg7e32_v_u32mf2x7_mu(vm, vd, rs1, rs2, vl);
}

vuint32m1x7_t test_vlsseg7e32_v_u32m1x7_mu(vbool32_t vm, vuint32m1x7_t vd,
                                           const uint32_t *rs1, ptrdiff_t rs2,
                                           size_t vl) {
  return __riscv_vlsseg7e32_v_u32m1x7_mu(vm, vd, rs1, rs2, vl);
}
