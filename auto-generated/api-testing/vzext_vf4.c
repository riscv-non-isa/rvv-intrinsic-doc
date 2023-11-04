#include <riscv_vector.h>
#include <stdint.h>

vuint32mf2_t test_vzext_vf4_u32mf2(vuint8mf8_t vs2, size_t vl) {
  return __riscv_vzext_vf4_u32mf2(vs2, vl);
}

vuint32m1_t test_vzext_vf4_u32m1(vuint8mf4_t vs2, size_t vl) {
  return __riscv_vzext_vf4_u32m1(vs2, vl);
}

vuint32m2_t test_vzext_vf4_u32m2(vuint8mf2_t vs2, size_t vl) {
  return __riscv_vzext_vf4_u32m2(vs2, vl);
}

vuint32m4_t test_vzext_vf4_u32m4(vuint8m1_t vs2, size_t vl) {
  return __riscv_vzext_vf4_u32m4(vs2, vl);
}

vuint32m8_t test_vzext_vf4_u32m8(vuint8m2_t vs2, size_t vl) {
  return __riscv_vzext_vf4_u32m8(vs2, vl);
}

vuint64m1_t test_vzext_vf4_u64m1(vuint16mf4_t vs2, size_t vl) {
  return __riscv_vzext_vf4_u64m1(vs2, vl);
}

vuint64m2_t test_vzext_vf4_u64m2(vuint16mf2_t vs2, size_t vl) {
  return __riscv_vzext_vf4_u64m2(vs2, vl);
}

vuint64m4_t test_vzext_vf4_u64m4(vuint16m1_t vs2, size_t vl) {
  return __riscv_vzext_vf4_u64m4(vs2, vl);
}

vuint64m8_t test_vzext_vf4_u64m8(vuint16m2_t vs2, size_t vl) {
  return __riscv_vzext_vf4_u64m8(vs2, vl);
}

vuint32mf2_t test_vzext_vf4_u32mf2_m(vbool64_t vm, vuint8mf8_t vs2, size_t vl) {
  return __riscv_vzext_vf4_u32mf2_m(vm, vs2, vl);
}

vuint32m1_t test_vzext_vf4_u32m1_m(vbool32_t vm, vuint8mf4_t vs2, size_t vl) {
  return __riscv_vzext_vf4_u32m1_m(vm, vs2, vl);
}

vuint32m2_t test_vzext_vf4_u32m2_m(vbool16_t vm, vuint8mf2_t vs2, size_t vl) {
  return __riscv_vzext_vf4_u32m2_m(vm, vs2, vl);
}

vuint32m4_t test_vzext_vf4_u32m4_m(vbool8_t vm, vuint8m1_t vs2, size_t vl) {
  return __riscv_vzext_vf4_u32m4_m(vm, vs2, vl);
}

vuint32m8_t test_vzext_vf4_u32m8_m(vbool4_t vm, vuint8m2_t vs2, size_t vl) {
  return __riscv_vzext_vf4_u32m8_m(vm, vs2, vl);
}

vuint64m1_t test_vzext_vf4_u64m1_m(vbool64_t vm, vuint16mf4_t vs2, size_t vl) {
  return __riscv_vzext_vf4_u64m1_m(vm, vs2, vl);
}

vuint64m2_t test_vzext_vf4_u64m2_m(vbool32_t vm, vuint16mf2_t vs2, size_t vl) {
  return __riscv_vzext_vf4_u64m2_m(vm, vs2, vl);
}

vuint64m4_t test_vzext_vf4_u64m4_m(vbool16_t vm, vuint16m1_t vs2, size_t vl) {
  return __riscv_vzext_vf4_u64m4_m(vm, vs2, vl);
}

vuint64m8_t test_vzext_vf4_u64m8_m(vbool8_t vm, vuint16m2_t vs2, size_t vl) {
  return __riscv_vzext_vf4_u64m8_m(vm, vs2, vl);
}
