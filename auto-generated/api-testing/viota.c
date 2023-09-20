#include <riscv_vector.h>
#include <stdint.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
vuint8mf8_t test_viota_m_u8mf8(vbool64_t vs2, size_t vl) {
  return __riscv_viota_m_u8mf8(vs2, vl);
}

vuint8mf4_t test_viota_m_u8mf4(vbool32_t vs2, size_t vl) {
  return __riscv_viota_m_u8mf4(vs2, vl);
}

vuint8mf2_t test_viota_m_u8mf2(vbool16_t vs2, size_t vl) {
  return __riscv_viota_m_u8mf2(vs2, vl);
}

vuint8m1_t test_viota_m_u8m1(vbool8_t vs2, size_t vl) {
  return __riscv_viota_m_u8m1(vs2, vl);
}

vuint8m2_t test_viota_m_u8m2(vbool4_t vs2, size_t vl) {
  return __riscv_viota_m_u8m2(vs2, vl);
}

vuint8m4_t test_viota_m_u8m4(vbool2_t vs2, size_t vl) {
  return __riscv_viota_m_u8m4(vs2, vl);
}

vuint8m8_t test_viota_m_u8m8(vbool1_t vs2, size_t vl) {
  return __riscv_viota_m_u8m8(vs2, vl);
}

vuint16mf4_t test_viota_m_u16mf4(vbool64_t vs2, size_t vl) {
  return __riscv_viota_m_u16mf4(vs2, vl);
}

vuint16mf2_t test_viota_m_u16mf2(vbool32_t vs2, size_t vl) {
  return __riscv_viota_m_u16mf2(vs2, vl);
}

vuint16m1_t test_viota_m_u16m1(vbool16_t vs2, size_t vl) {
  return __riscv_viota_m_u16m1(vs2, vl);
}

vuint16m2_t test_viota_m_u16m2(vbool8_t vs2, size_t vl) {
  return __riscv_viota_m_u16m2(vs2, vl);
}

vuint16m4_t test_viota_m_u16m4(vbool4_t vs2, size_t vl) {
  return __riscv_viota_m_u16m4(vs2, vl);
}

vuint16m8_t test_viota_m_u16m8(vbool2_t vs2, size_t vl) {
  return __riscv_viota_m_u16m8(vs2, vl);
}

vuint32mf2_t test_viota_m_u32mf2(vbool64_t vs2, size_t vl) {
  return __riscv_viota_m_u32mf2(vs2, vl);
}

vuint32m1_t test_viota_m_u32m1(vbool32_t vs2, size_t vl) {
  return __riscv_viota_m_u32m1(vs2, vl);
}

vuint32m2_t test_viota_m_u32m2(vbool16_t vs2, size_t vl) {
  return __riscv_viota_m_u32m2(vs2, vl);
}

vuint32m4_t test_viota_m_u32m4(vbool8_t vs2, size_t vl) {
  return __riscv_viota_m_u32m4(vs2, vl);
}

vuint32m8_t test_viota_m_u32m8(vbool4_t vs2, size_t vl) {
  return __riscv_viota_m_u32m8(vs2, vl);
}

vuint64m1_t test_viota_m_u64m1(vbool64_t vs2, size_t vl) {
  return __riscv_viota_m_u64m1(vs2, vl);
}

vuint64m2_t test_viota_m_u64m2(vbool32_t vs2, size_t vl) {
  return __riscv_viota_m_u64m2(vs2, vl);
}

vuint64m4_t test_viota_m_u64m4(vbool16_t vs2, size_t vl) {
  return __riscv_viota_m_u64m4(vs2, vl);
}

vuint64m8_t test_viota_m_u64m8(vbool8_t vs2, size_t vl) {
  return __riscv_viota_m_u64m8(vs2, vl);
}

vuint8mf8_t test_viota_m_u8mf8_m(vbool64_t vm, vbool64_t vs2, size_t vl) {
  return __riscv_viota_m_u8mf8_m(vm, vs2, vl);
}

vuint8mf4_t test_viota_m_u8mf4_m(vbool32_t vm, vbool32_t vs2, size_t vl) {
  return __riscv_viota_m_u8mf4_m(vm, vs2, vl);
}

vuint8mf2_t test_viota_m_u8mf2_m(vbool16_t vm, vbool16_t vs2, size_t vl) {
  return __riscv_viota_m_u8mf2_m(vm, vs2, vl);
}

vuint8m1_t test_viota_m_u8m1_m(vbool8_t vm, vbool8_t vs2, size_t vl) {
  return __riscv_viota_m_u8m1_m(vm, vs2, vl);
}

vuint8m2_t test_viota_m_u8m2_m(vbool4_t vm, vbool4_t vs2, size_t vl) {
  return __riscv_viota_m_u8m2_m(vm, vs2, vl);
}

vuint8m4_t test_viota_m_u8m4_m(vbool2_t vm, vbool2_t vs2, size_t vl) {
  return __riscv_viota_m_u8m4_m(vm, vs2, vl);
}

vuint8m8_t test_viota_m_u8m8_m(vbool1_t vm, vbool1_t vs2, size_t vl) {
  return __riscv_viota_m_u8m8_m(vm, vs2, vl);
}

vuint16mf4_t test_viota_m_u16mf4_m(vbool64_t vm, vbool64_t vs2, size_t vl) {
  return __riscv_viota_m_u16mf4_m(vm, vs2, vl);
}

vuint16mf2_t test_viota_m_u16mf2_m(vbool32_t vm, vbool32_t vs2, size_t vl) {
  return __riscv_viota_m_u16mf2_m(vm, vs2, vl);
}

vuint16m1_t test_viota_m_u16m1_m(vbool16_t vm, vbool16_t vs2, size_t vl) {
  return __riscv_viota_m_u16m1_m(vm, vs2, vl);
}

vuint16m2_t test_viota_m_u16m2_m(vbool8_t vm, vbool8_t vs2, size_t vl) {
  return __riscv_viota_m_u16m2_m(vm, vs2, vl);
}

vuint16m4_t test_viota_m_u16m4_m(vbool4_t vm, vbool4_t vs2, size_t vl) {
  return __riscv_viota_m_u16m4_m(vm, vs2, vl);
}

vuint16m8_t test_viota_m_u16m8_m(vbool2_t vm, vbool2_t vs2, size_t vl) {
  return __riscv_viota_m_u16m8_m(vm, vs2, vl);
}

vuint32mf2_t test_viota_m_u32mf2_m(vbool64_t vm, vbool64_t vs2, size_t vl) {
  return __riscv_viota_m_u32mf2_m(vm, vs2, vl);
}

vuint32m1_t test_viota_m_u32m1_m(vbool32_t vm, vbool32_t vs2, size_t vl) {
  return __riscv_viota_m_u32m1_m(vm, vs2, vl);
}

vuint32m2_t test_viota_m_u32m2_m(vbool16_t vm, vbool16_t vs2, size_t vl) {
  return __riscv_viota_m_u32m2_m(vm, vs2, vl);
}

vuint32m4_t test_viota_m_u32m4_m(vbool8_t vm, vbool8_t vs2, size_t vl) {
  return __riscv_viota_m_u32m4_m(vm, vs2, vl);
}

vuint32m8_t test_viota_m_u32m8_m(vbool4_t vm, vbool4_t vs2, size_t vl) {
  return __riscv_viota_m_u32m8_m(vm, vs2, vl);
}

vuint64m1_t test_viota_m_u64m1_m(vbool64_t vm, vbool64_t vs2, size_t vl) {
  return __riscv_viota_m_u64m1_m(vm, vs2, vl);
}

vuint64m2_t test_viota_m_u64m2_m(vbool32_t vm, vbool32_t vs2, size_t vl) {
  return __riscv_viota_m_u64m2_m(vm, vs2, vl);
}

vuint64m4_t test_viota_m_u64m4_m(vbool16_t vm, vbool16_t vs2, size_t vl) {
  return __riscv_viota_m_u64m4_m(vm, vs2, vl);
}

vuint64m8_t test_viota_m_u64m8_m(vbool8_t vm, vbool8_t vs2, size_t vl) {
  return __riscv_viota_m_u64m8_m(vm, vs2, vl);
}
