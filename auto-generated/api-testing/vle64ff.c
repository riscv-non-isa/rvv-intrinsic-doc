#include <riscv_vector.h>
#include <stdint.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
vfloat64m1_t test_vle64ff_v_f64m1(const float64_t *rs1, size_t *new_vl,
                                  size_t vl) {
  return __riscv_vle64ff_v_f64m1(rs1, new_vl, vl);
}

vfloat64m2_t test_vle64ff_v_f64m2(const float64_t *rs1, size_t *new_vl,
                                  size_t vl) {
  return __riscv_vle64ff_v_f64m2(rs1, new_vl, vl);
}

vfloat64m4_t test_vle64ff_v_f64m4(const float64_t *rs1, size_t *new_vl,
                                  size_t vl) {
  return __riscv_vle64ff_v_f64m4(rs1, new_vl, vl);
}

vfloat64m8_t test_vle64ff_v_f64m8(const float64_t *rs1, size_t *new_vl,
                                  size_t vl) {
  return __riscv_vle64ff_v_f64m8(rs1, new_vl, vl);
}

vint64m1_t test_vle64ff_v_i64m1(const int64_t *rs1, size_t *new_vl, size_t vl) {
  return __riscv_vle64ff_v_i64m1(rs1, new_vl, vl);
}

vint64m2_t test_vle64ff_v_i64m2(const int64_t *rs1, size_t *new_vl, size_t vl) {
  return __riscv_vle64ff_v_i64m2(rs1, new_vl, vl);
}

vint64m4_t test_vle64ff_v_i64m4(const int64_t *rs1, size_t *new_vl, size_t vl) {
  return __riscv_vle64ff_v_i64m4(rs1, new_vl, vl);
}

vint64m8_t test_vle64ff_v_i64m8(const int64_t *rs1, size_t *new_vl, size_t vl) {
  return __riscv_vle64ff_v_i64m8(rs1, new_vl, vl);
}

vuint64m1_t test_vle64ff_v_u64m1(const uint64_t *rs1, size_t *new_vl,
                                 size_t vl) {
  return __riscv_vle64ff_v_u64m1(rs1, new_vl, vl);
}

vuint64m2_t test_vle64ff_v_u64m2(const uint64_t *rs1, size_t *new_vl,
                                 size_t vl) {
  return __riscv_vle64ff_v_u64m2(rs1, new_vl, vl);
}

vuint64m4_t test_vle64ff_v_u64m4(const uint64_t *rs1, size_t *new_vl,
                                 size_t vl) {
  return __riscv_vle64ff_v_u64m4(rs1, new_vl, vl);
}

vuint64m8_t test_vle64ff_v_u64m8(const uint64_t *rs1, size_t *new_vl,
                                 size_t vl) {
  return __riscv_vle64ff_v_u64m8(rs1, new_vl, vl);
}

vfloat64m1_t test_vle64ff_v_f64m1_m(vbool64_t vm, const float64_t *rs1,
                                    size_t *new_vl, size_t vl) {
  return __riscv_vle64ff_v_f64m1_m(vm, rs1, new_vl, vl);
}

vfloat64m2_t test_vle64ff_v_f64m2_m(vbool32_t vm, const float64_t *rs1,
                                    size_t *new_vl, size_t vl) {
  return __riscv_vle64ff_v_f64m2_m(vm, rs1, new_vl, vl);
}

vfloat64m4_t test_vle64ff_v_f64m4_m(vbool16_t vm, const float64_t *rs1,
                                    size_t *new_vl, size_t vl) {
  return __riscv_vle64ff_v_f64m4_m(vm, rs1, new_vl, vl);
}

vfloat64m8_t test_vle64ff_v_f64m8_m(vbool8_t vm, const float64_t *rs1,
                                    size_t *new_vl, size_t vl) {
  return __riscv_vle64ff_v_f64m8_m(vm, rs1, new_vl, vl);
}

vint64m1_t test_vle64ff_v_i64m1_m(vbool64_t vm, const int64_t *rs1,
                                  size_t *new_vl, size_t vl) {
  return __riscv_vle64ff_v_i64m1_m(vm, rs1, new_vl, vl);
}

vint64m2_t test_vle64ff_v_i64m2_m(vbool32_t vm, const int64_t *rs1,
                                  size_t *new_vl, size_t vl) {
  return __riscv_vle64ff_v_i64m2_m(vm, rs1, new_vl, vl);
}

vint64m4_t test_vle64ff_v_i64m4_m(vbool16_t vm, const int64_t *rs1,
                                  size_t *new_vl, size_t vl) {
  return __riscv_vle64ff_v_i64m4_m(vm, rs1, new_vl, vl);
}

vint64m8_t test_vle64ff_v_i64m8_m(vbool8_t vm, const int64_t *rs1,
                                  size_t *new_vl, size_t vl) {
  return __riscv_vle64ff_v_i64m8_m(vm, rs1, new_vl, vl);
}

vuint64m1_t test_vle64ff_v_u64m1_m(vbool64_t vm, const uint64_t *rs1,
                                   size_t *new_vl, size_t vl) {
  return __riscv_vle64ff_v_u64m1_m(vm, rs1, new_vl, vl);
}

vuint64m2_t test_vle64ff_v_u64m2_m(vbool32_t vm, const uint64_t *rs1,
                                   size_t *new_vl, size_t vl) {
  return __riscv_vle64ff_v_u64m2_m(vm, rs1, new_vl, vl);
}

vuint64m4_t test_vle64ff_v_u64m4_m(vbool16_t vm, const uint64_t *rs1,
                                   size_t *new_vl, size_t vl) {
  return __riscv_vle64ff_v_u64m4_m(vm, rs1, new_vl, vl);
}

vuint64m8_t test_vle64ff_v_u64m8_m(vbool8_t vm, const uint64_t *rs1,
                                   size_t *new_vl, size_t vl) {
  return __riscv_vle64ff_v_u64m8_m(vm, rs1, new_vl, vl);
}
