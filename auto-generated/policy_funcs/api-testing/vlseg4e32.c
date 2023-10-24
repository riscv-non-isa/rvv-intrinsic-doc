#include <riscv_vector.h>
#include <stdint.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;

vfloat32mf2x4_t test_vlseg4e32_v_f32mf2x4_tu(vfloat32mf2x4_t vd,
                                             const float32_t *rs1, size_t vl) {
  return __riscv_vlseg4e32_v_f32mf2x4_tu(vd, rs1, vl);
}

vfloat32m1x4_t test_vlseg4e32_v_f32m1x4_tu(vfloat32m1x4_t vd,
                                           const float32_t *rs1, size_t vl) {
  return __riscv_vlseg4e32_v_f32m1x4_tu(vd, rs1, vl);
}

vfloat32m2x4_t test_vlseg4e32_v_f32m2x4_tu(vfloat32m2x4_t vd,
                                           const float32_t *rs1, size_t vl) {
  return __riscv_vlseg4e32_v_f32m2x4_tu(vd, rs1, vl);
}

vint32mf2x4_t test_vlseg4e32_v_i32mf2x4_tu(vint32mf2x4_t vd, const int32_t *rs1,
                                           size_t vl) {
  return __riscv_vlseg4e32_v_i32mf2x4_tu(vd, rs1, vl);
}

vint32m1x4_t test_vlseg4e32_v_i32m1x4_tu(vint32m1x4_t vd, const int32_t *rs1,
                                         size_t vl) {
  return __riscv_vlseg4e32_v_i32m1x4_tu(vd, rs1, vl);
}

vint32m2x4_t test_vlseg4e32_v_i32m2x4_tu(vint32m2x4_t vd, const int32_t *rs1,
                                         size_t vl) {
  return __riscv_vlseg4e32_v_i32m2x4_tu(vd, rs1, vl);
}

vuint32mf2x4_t test_vlseg4e32_v_u32mf2x4_tu(vuint32mf2x4_t vd,
                                            const uint32_t *rs1, size_t vl) {
  return __riscv_vlseg4e32_v_u32mf2x4_tu(vd, rs1, vl);
}

vuint32m1x4_t test_vlseg4e32_v_u32m1x4_tu(vuint32m1x4_t vd, const uint32_t *rs1,
                                          size_t vl) {
  return __riscv_vlseg4e32_v_u32m1x4_tu(vd, rs1, vl);
}

vuint32m2x4_t test_vlseg4e32_v_u32m2x4_tu(vuint32m2x4_t vd, const uint32_t *rs1,
                                          size_t vl) {
  return __riscv_vlseg4e32_v_u32m2x4_tu(vd, rs1, vl);
}

vfloat32mf2x4_t test_vlseg4e32_v_f32mf2x4_tum(vbool64_t vm, vfloat32mf2x4_t vd,
                                              const float32_t *rs1, size_t vl) {
  return __riscv_vlseg4e32_v_f32mf2x4_tum(vm, vd, rs1, vl);
}

vfloat32m1x4_t test_vlseg4e32_v_f32m1x4_tum(vbool32_t vm, vfloat32m1x4_t vd,
                                            const float32_t *rs1, size_t vl) {
  return __riscv_vlseg4e32_v_f32m1x4_tum(vm, vd, rs1, vl);
}

vfloat32m2x4_t test_vlseg4e32_v_f32m2x4_tum(vbool16_t vm, vfloat32m2x4_t vd,
                                            const float32_t *rs1, size_t vl) {
  return __riscv_vlseg4e32_v_f32m2x4_tum(vm, vd, rs1, vl);
}

vint32mf2x4_t test_vlseg4e32_v_i32mf2x4_tum(vbool64_t vm, vint32mf2x4_t vd,
                                            const int32_t *rs1, size_t vl) {
  return __riscv_vlseg4e32_v_i32mf2x4_tum(vm, vd, rs1, vl);
}

vint32m1x4_t test_vlseg4e32_v_i32m1x4_tum(vbool32_t vm, vint32m1x4_t vd,
                                          const int32_t *rs1, size_t vl) {
  return __riscv_vlseg4e32_v_i32m1x4_tum(vm, vd, rs1, vl);
}

vint32m2x4_t test_vlseg4e32_v_i32m2x4_tum(vbool16_t vm, vint32m2x4_t vd,
                                          const int32_t *rs1, size_t vl) {
  return __riscv_vlseg4e32_v_i32m2x4_tum(vm, vd, rs1, vl);
}

vuint32mf2x4_t test_vlseg4e32_v_u32mf2x4_tum(vbool64_t vm, vuint32mf2x4_t vd,
                                             const uint32_t *rs1, size_t vl) {
  return __riscv_vlseg4e32_v_u32mf2x4_tum(vm, vd, rs1, vl);
}

vuint32m1x4_t test_vlseg4e32_v_u32m1x4_tum(vbool32_t vm, vuint32m1x4_t vd,
                                           const uint32_t *rs1, size_t vl) {
  return __riscv_vlseg4e32_v_u32m1x4_tum(vm, vd, rs1, vl);
}

vuint32m2x4_t test_vlseg4e32_v_u32m2x4_tum(vbool16_t vm, vuint32m2x4_t vd,
                                           const uint32_t *rs1, size_t vl) {
  return __riscv_vlseg4e32_v_u32m2x4_tum(vm, vd, rs1, vl);
}

vfloat32mf2x4_t test_vlseg4e32_v_f32mf2x4_tumu(vbool64_t vm, vfloat32mf2x4_t vd,
                                               const float32_t *rs1,
                                               size_t vl) {
  return __riscv_vlseg4e32_v_f32mf2x4_tumu(vm, vd, rs1, vl);
}

vfloat32m1x4_t test_vlseg4e32_v_f32m1x4_tumu(vbool32_t vm, vfloat32m1x4_t vd,
                                             const float32_t *rs1, size_t vl) {
  return __riscv_vlseg4e32_v_f32m1x4_tumu(vm, vd, rs1, vl);
}

vfloat32m2x4_t test_vlseg4e32_v_f32m2x4_tumu(vbool16_t vm, vfloat32m2x4_t vd,
                                             const float32_t *rs1, size_t vl) {
  return __riscv_vlseg4e32_v_f32m2x4_tumu(vm, vd, rs1, vl);
}

vint32mf2x4_t test_vlseg4e32_v_i32mf2x4_tumu(vbool64_t vm, vint32mf2x4_t vd,
                                             const int32_t *rs1, size_t vl) {
  return __riscv_vlseg4e32_v_i32mf2x4_tumu(vm, vd, rs1, vl);
}

vint32m1x4_t test_vlseg4e32_v_i32m1x4_tumu(vbool32_t vm, vint32m1x4_t vd,
                                           const int32_t *rs1, size_t vl) {
  return __riscv_vlseg4e32_v_i32m1x4_tumu(vm, vd, rs1, vl);
}

vint32m2x4_t test_vlseg4e32_v_i32m2x4_tumu(vbool16_t vm, vint32m2x4_t vd,
                                           const int32_t *rs1, size_t vl) {
  return __riscv_vlseg4e32_v_i32m2x4_tumu(vm, vd, rs1, vl);
}

vuint32mf2x4_t test_vlseg4e32_v_u32mf2x4_tumu(vbool64_t vm, vuint32mf2x4_t vd,
                                              const uint32_t *rs1, size_t vl) {
  return __riscv_vlseg4e32_v_u32mf2x4_tumu(vm, vd, rs1, vl);
}

vuint32m1x4_t test_vlseg4e32_v_u32m1x4_tumu(vbool32_t vm, vuint32m1x4_t vd,
                                            const uint32_t *rs1, size_t vl) {
  return __riscv_vlseg4e32_v_u32m1x4_tumu(vm, vd, rs1, vl);
}

vuint32m2x4_t test_vlseg4e32_v_u32m2x4_tumu(vbool16_t vm, vuint32m2x4_t vd,
                                            const uint32_t *rs1, size_t vl) {
  return __riscv_vlseg4e32_v_u32m2x4_tumu(vm, vd, rs1, vl);
}

vfloat32mf2x4_t test_vlseg4e32_v_f32mf2x4_mu(vbool64_t vm, vfloat32mf2x4_t vd,
                                             const float32_t *rs1, size_t vl) {
  return __riscv_vlseg4e32_v_f32mf2x4_mu(vm, vd, rs1, vl);
}

vfloat32m1x4_t test_vlseg4e32_v_f32m1x4_mu(vbool32_t vm, vfloat32m1x4_t vd,
                                           const float32_t *rs1, size_t vl) {
  return __riscv_vlseg4e32_v_f32m1x4_mu(vm, vd, rs1, vl);
}

vfloat32m2x4_t test_vlseg4e32_v_f32m2x4_mu(vbool16_t vm, vfloat32m2x4_t vd,
                                           const float32_t *rs1, size_t vl) {
  return __riscv_vlseg4e32_v_f32m2x4_mu(vm, vd, rs1, vl);
}

vint32mf2x4_t test_vlseg4e32_v_i32mf2x4_mu(vbool64_t vm, vint32mf2x4_t vd,
                                           const int32_t *rs1, size_t vl) {
  return __riscv_vlseg4e32_v_i32mf2x4_mu(vm, vd, rs1, vl);
}

vint32m1x4_t test_vlseg4e32_v_i32m1x4_mu(vbool32_t vm, vint32m1x4_t vd,
                                         const int32_t *rs1, size_t vl) {
  return __riscv_vlseg4e32_v_i32m1x4_mu(vm, vd, rs1, vl);
}

vint32m2x4_t test_vlseg4e32_v_i32m2x4_mu(vbool16_t vm, vint32m2x4_t vd,
                                         const int32_t *rs1, size_t vl) {
  return __riscv_vlseg4e32_v_i32m2x4_mu(vm, vd, rs1, vl);
}

vuint32mf2x4_t test_vlseg4e32_v_u32mf2x4_mu(vbool64_t vm, vuint32mf2x4_t vd,
                                            const uint32_t *rs1, size_t vl) {
  return __riscv_vlseg4e32_v_u32mf2x4_mu(vm, vd, rs1, vl);
}

vuint32m1x4_t test_vlseg4e32_v_u32m1x4_mu(vbool32_t vm, vuint32m1x4_t vd,
                                          const uint32_t *rs1, size_t vl) {
  return __riscv_vlseg4e32_v_u32m1x4_mu(vm, vd, rs1, vl);
}

vuint32m2x4_t test_vlseg4e32_v_u32m2x4_mu(vbool16_t vm, vuint32m2x4_t vd,
                                          const uint32_t *rs1, size_t vl) {
  return __riscv_vlseg4e32_v_u32m2x4_mu(vm, vd, rs1, vl);
}
