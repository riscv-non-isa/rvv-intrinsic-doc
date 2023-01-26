#include <stdint.h>
#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
vuint16mf4_t test_vfclass_v_u16mf4(vfloat16mf4_t op1, size_t vl) {
  return __riscv_vfclass(op1, vl);
}

vuint16mf2_t test_vfclass_v_u16mf2(vfloat16mf2_t op1, size_t vl) {
  return __riscv_vfclass(op1, vl);
}

vuint16m1_t test_vfclass_v_u16m1(vfloat16m1_t op1, size_t vl) {
  return __riscv_vfclass(op1, vl);
}

vuint16m2_t test_vfclass_v_u16m2(vfloat16m2_t op1, size_t vl) {
  return __riscv_vfclass(op1, vl);
}

vuint16m4_t test_vfclass_v_u16m4(vfloat16m4_t op1, size_t vl) {
  return __riscv_vfclass(op1, vl);
}

vuint16m8_t test_vfclass_v_u16m8(vfloat16m8_t op1, size_t vl) {
  return __riscv_vfclass(op1, vl);
}

vuint32mf2_t test_vfclass_v_u32mf2(vfloat32mf2_t op1, size_t vl) {
  return __riscv_vfclass(op1, vl);
}

vuint32m1_t test_vfclass_v_u32m1(vfloat32m1_t op1, size_t vl) {
  return __riscv_vfclass(op1, vl);
}

vuint32m2_t test_vfclass_v_u32m2(vfloat32m2_t op1, size_t vl) {
  return __riscv_vfclass(op1, vl);
}

vuint32m4_t test_vfclass_v_u32m4(vfloat32m4_t op1, size_t vl) {
  return __riscv_vfclass(op1, vl);
}

vuint32m8_t test_vfclass_v_u32m8(vfloat32m8_t op1, size_t vl) {
  return __riscv_vfclass(op1, vl);
}

vuint64m1_t test_vfclass_v_u64m1(vfloat64m1_t op1, size_t vl) {
  return __riscv_vfclass(op1, vl);
}

vuint64m2_t test_vfclass_v_u64m2(vfloat64m2_t op1, size_t vl) {
  return __riscv_vfclass(op1, vl);
}

vuint64m4_t test_vfclass_v_u64m4(vfloat64m4_t op1, size_t vl) {
  return __riscv_vfclass(op1, vl);
}

vuint64m8_t test_vfclass_v_u64m8(vfloat64m8_t op1, size_t vl) {
  return __riscv_vfclass(op1, vl);
}

vuint16mf4_t test_vfclass_v_u16mf4_m(vbool64_t mask, vfloat16mf4_t op1, size_t vl) {
  return __riscv_vfclass(mask, op1, vl);
}

vuint16mf2_t test_vfclass_v_u16mf2_m(vbool32_t mask, vfloat16mf2_t op1, size_t vl) {
  return __riscv_vfclass(mask, op1, vl);
}

vuint16m1_t test_vfclass_v_u16m1_m(vbool16_t mask, vfloat16m1_t op1, size_t vl) {
  return __riscv_vfclass(mask, op1, vl);
}

vuint16m2_t test_vfclass_v_u16m2_m(vbool8_t mask, vfloat16m2_t op1, size_t vl) {
  return __riscv_vfclass(mask, op1, vl);
}

vuint16m4_t test_vfclass_v_u16m4_m(vbool4_t mask, vfloat16m4_t op1, size_t vl) {
  return __riscv_vfclass(mask, op1, vl);
}

vuint16m8_t test_vfclass_v_u16m8_m(vbool2_t mask, vfloat16m8_t op1, size_t vl) {
  return __riscv_vfclass(mask, op1, vl);
}

vuint32mf2_t test_vfclass_v_u32mf2_m(vbool64_t mask, vfloat32mf2_t op1, size_t vl) {
  return __riscv_vfclass(mask, op1, vl);
}

vuint32m1_t test_vfclass_v_u32m1_m(vbool32_t mask, vfloat32m1_t op1, size_t vl) {
  return __riscv_vfclass(mask, op1, vl);
}

vuint32m2_t test_vfclass_v_u32m2_m(vbool16_t mask, vfloat32m2_t op1, size_t vl) {
  return __riscv_vfclass(mask, op1, vl);
}

vuint32m4_t test_vfclass_v_u32m4_m(vbool8_t mask, vfloat32m4_t op1, size_t vl) {
  return __riscv_vfclass(mask, op1, vl);
}

vuint32m8_t test_vfclass_v_u32m8_m(vbool4_t mask, vfloat32m8_t op1, size_t vl) {
  return __riscv_vfclass(mask, op1, vl);
}

vuint64m1_t test_vfclass_v_u64m1_m(vbool64_t mask, vfloat64m1_t op1, size_t vl) {
  return __riscv_vfclass(mask, op1, vl);
}

vuint64m2_t test_vfclass_v_u64m2_m(vbool32_t mask, vfloat64m2_t op1, size_t vl) {
  return __riscv_vfclass(mask, op1, vl);
}

vuint64m4_t test_vfclass_v_u64m4_m(vbool16_t mask, vfloat64m4_t op1, size_t vl) {
  return __riscv_vfclass(mask, op1, vl);
}

vuint64m8_t test_vfclass_v_u64m8_m(vbool8_t mask, vfloat64m8_t op1, size_t vl) {
  return __riscv_vfclass(mask, op1, vl);
}

