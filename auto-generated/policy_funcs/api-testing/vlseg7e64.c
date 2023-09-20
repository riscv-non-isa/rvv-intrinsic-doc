#include <riscv_vector.h>
#include <stdint.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
vfloat64m1x7_t test_vlseg7e64_v_f64m1x7_tu(vfloat64m1x7_t vd,
                                           const float64_t *rs1, size_t vl) {
  return __riscv_vlseg7e64_v_f64m1x7_tu(vd, rs1, vl);
}

vint64m1x7_t test_vlseg7e64_v_i64m1x7_tu(vint64m1x7_t vd, const int64_t *rs1,
                                         size_t vl) {
  return __riscv_vlseg7e64_v_i64m1x7_tu(vd, rs1, vl);
}

vuint64m1x7_t test_vlseg7e64_v_u64m1x7_tu(vuint64m1x7_t vd, const uint64_t *rs1,
                                          size_t vl) {
  return __riscv_vlseg7e64_v_u64m1x7_tu(vd, rs1, vl);
}

vfloat64m1x7_t test_vlseg7e64_v_f64m1x7_tum(vbool64_t vm, vfloat64m1x7_t vd,
                                            const float64_t *rs1, size_t vl) {
  return __riscv_vlseg7e64_v_f64m1x7_tum(vm, vd, rs1, vl);
}

vint64m1x7_t test_vlseg7e64_v_i64m1x7_tum(vbool64_t vm, vint64m1x7_t vd,
                                          const int64_t *rs1, size_t vl) {
  return __riscv_vlseg7e64_v_i64m1x7_tum(vm, vd, rs1, vl);
}

vuint64m1x7_t test_vlseg7e64_v_u64m1x7_tum(vbool64_t vm, vuint64m1x7_t vd,
                                           const uint64_t *rs1, size_t vl) {
  return __riscv_vlseg7e64_v_u64m1x7_tum(vm, vd, rs1, vl);
}

vfloat64m1x7_t test_vlseg7e64_v_f64m1x7_tumu(vbool64_t vm, vfloat64m1x7_t vd,
                                             const float64_t *rs1, size_t vl) {
  return __riscv_vlseg7e64_v_f64m1x7_tumu(vm, vd, rs1, vl);
}

vint64m1x7_t test_vlseg7e64_v_i64m1x7_tumu(vbool64_t vm, vint64m1x7_t vd,
                                           const int64_t *rs1, size_t vl) {
  return __riscv_vlseg7e64_v_i64m1x7_tumu(vm, vd, rs1, vl);
}

vuint64m1x7_t test_vlseg7e64_v_u64m1x7_tumu(vbool64_t vm, vuint64m1x7_t vd,
                                            const uint64_t *rs1, size_t vl) {
  return __riscv_vlseg7e64_v_u64m1x7_tumu(vm, vd, rs1, vl);
}

vfloat64m1x7_t test_vlseg7e64_v_f64m1x7_mu(vbool64_t vm, vfloat64m1x7_t vd,
                                           const float64_t *rs1, size_t vl) {
  return __riscv_vlseg7e64_v_f64m1x7_mu(vm, vd, rs1, vl);
}

vint64m1x7_t test_vlseg7e64_v_i64m1x7_mu(vbool64_t vm, vint64m1x7_t vd,
                                         const int64_t *rs1, size_t vl) {
  return __riscv_vlseg7e64_v_i64m1x7_mu(vm, vd, rs1, vl);
}

vuint64m1x7_t test_vlseg7e64_v_u64m1x7_mu(vbool64_t vm, vuint64m1x7_t vd,
                                          const uint64_t *rs1, size_t vl) {
  return __riscv_vlseg7e64_v_u64m1x7_mu(vm, vd, rs1, vl);
}
