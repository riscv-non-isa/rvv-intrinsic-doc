#include <riscv_vector.h>
#include <stdint.h>

vint16mf4_t test_vlse16_v_i16mf4_tu(vint16mf4_t vd, const int16_t *rs1,
                                    ptrdiff_t rs2, size_t vl) {
  return __riscv_vlse16_tu(vd, rs1, rs2, vl);
}

vint16mf2_t test_vlse16_v_i16mf2_tu(vint16mf2_t vd, const int16_t *rs1,
                                    ptrdiff_t rs2, size_t vl) {
  return __riscv_vlse16_tu(vd, rs1, rs2, vl);
}

vint16m1_t test_vlse16_v_i16m1_tu(vint16m1_t vd, const int16_t *rs1,
                                  ptrdiff_t rs2, size_t vl) {
  return __riscv_vlse16_tu(vd, rs1, rs2, vl);
}

vint16m2_t test_vlse16_v_i16m2_tu(vint16m2_t vd, const int16_t *rs1,
                                  ptrdiff_t rs2, size_t vl) {
  return __riscv_vlse16_tu(vd, rs1, rs2, vl);
}

vint16m4_t test_vlse16_v_i16m4_tu(vint16m4_t vd, const int16_t *rs1,
                                  ptrdiff_t rs2, size_t vl) {
  return __riscv_vlse16_tu(vd, rs1, rs2, vl);
}

vint16m8_t test_vlse16_v_i16m8_tu(vint16m8_t vd, const int16_t *rs1,
                                  ptrdiff_t rs2, size_t vl) {
  return __riscv_vlse16_tu(vd, rs1, rs2, vl);
}

vuint16mf4_t test_vlse16_v_u16mf4_tu(vuint16mf4_t vd, const uint16_t *rs1,
                                     ptrdiff_t rs2, size_t vl) {
  return __riscv_vlse16_tu(vd, rs1, rs2, vl);
}

vuint16mf2_t test_vlse16_v_u16mf2_tu(vuint16mf2_t vd, const uint16_t *rs1,
                                     ptrdiff_t rs2, size_t vl) {
  return __riscv_vlse16_tu(vd, rs1, rs2, vl);
}

vuint16m1_t test_vlse16_v_u16m1_tu(vuint16m1_t vd, const uint16_t *rs1,
                                   ptrdiff_t rs2, size_t vl) {
  return __riscv_vlse16_tu(vd, rs1, rs2, vl);
}

vuint16m2_t test_vlse16_v_u16m2_tu(vuint16m2_t vd, const uint16_t *rs1,
                                   ptrdiff_t rs2, size_t vl) {
  return __riscv_vlse16_tu(vd, rs1, rs2, vl);
}

vuint16m4_t test_vlse16_v_u16m4_tu(vuint16m4_t vd, const uint16_t *rs1,
                                   ptrdiff_t rs2, size_t vl) {
  return __riscv_vlse16_tu(vd, rs1, rs2, vl);
}

vuint16m8_t test_vlse16_v_u16m8_tu(vuint16m8_t vd, const uint16_t *rs1,
                                   ptrdiff_t rs2, size_t vl) {
  return __riscv_vlse16_tu(vd, rs1, rs2, vl);
}

vint16mf4_t test_vlse16_v_i16mf4_tum(vbool64_t vm, vint16mf4_t vd,
                                     const int16_t *rs1, ptrdiff_t rs2,
                                     size_t vl) {
  return __riscv_vlse16_tum(vm, vd, rs1, rs2, vl);
}

vint16mf2_t test_vlse16_v_i16mf2_tum(vbool32_t vm, vint16mf2_t vd,
                                     const int16_t *rs1, ptrdiff_t rs2,
                                     size_t vl) {
  return __riscv_vlse16_tum(vm, vd, rs1, rs2, vl);
}

vint16m1_t test_vlse16_v_i16m1_tum(vbool16_t vm, vint16m1_t vd,
                                   const int16_t *rs1, ptrdiff_t rs2,
                                   size_t vl) {
  return __riscv_vlse16_tum(vm, vd, rs1, rs2, vl);
}

vint16m2_t test_vlse16_v_i16m2_tum(vbool8_t vm, vint16m2_t vd,
                                   const int16_t *rs1, ptrdiff_t rs2,
                                   size_t vl) {
  return __riscv_vlse16_tum(vm, vd, rs1, rs2, vl);
}

vint16m4_t test_vlse16_v_i16m4_tum(vbool4_t vm, vint16m4_t vd,
                                   const int16_t *rs1, ptrdiff_t rs2,
                                   size_t vl) {
  return __riscv_vlse16_tum(vm, vd, rs1, rs2, vl);
}

vint16m8_t test_vlse16_v_i16m8_tum(vbool2_t vm, vint16m8_t vd,
                                   const int16_t *rs1, ptrdiff_t rs2,
                                   size_t vl) {
  return __riscv_vlse16_tum(vm, vd, rs1, rs2, vl);
}

vuint16mf4_t test_vlse16_v_u16mf4_tum(vbool64_t vm, vuint16mf4_t vd,
                                      const uint16_t *rs1, ptrdiff_t rs2,
                                      size_t vl) {
  return __riscv_vlse16_tum(vm, vd, rs1, rs2, vl);
}

vuint16mf2_t test_vlse16_v_u16mf2_tum(vbool32_t vm, vuint16mf2_t vd,
                                      const uint16_t *rs1, ptrdiff_t rs2,
                                      size_t vl) {
  return __riscv_vlse16_tum(vm, vd, rs1, rs2, vl);
}

vuint16m1_t test_vlse16_v_u16m1_tum(vbool16_t vm, vuint16m1_t vd,
                                    const uint16_t *rs1, ptrdiff_t rs2,
                                    size_t vl) {
  return __riscv_vlse16_tum(vm, vd, rs1, rs2, vl);
}

vuint16m2_t test_vlse16_v_u16m2_tum(vbool8_t vm, vuint16m2_t vd,
                                    const uint16_t *rs1, ptrdiff_t rs2,
                                    size_t vl) {
  return __riscv_vlse16_tum(vm, vd, rs1, rs2, vl);
}

vuint16m4_t test_vlse16_v_u16m4_tum(vbool4_t vm, vuint16m4_t vd,
                                    const uint16_t *rs1, ptrdiff_t rs2,
                                    size_t vl) {
  return __riscv_vlse16_tum(vm, vd, rs1, rs2, vl);
}

vuint16m8_t test_vlse16_v_u16m8_tum(vbool2_t vm, vuint16m8_t vd,
                                    const uint16_t *rs1, ptrdiff_t rs2,
                                    size_t vl) {
  return __riscv_vlse16_tum(vm, vd, rs1, rs2, vl);
}

vint16mf4_t test_vlse16_v_i16mf4_tumu(vbool64_t vm, vint16mf4_t vd,
                                      const int16_t *rs1, ptrdiff_t rs2,
                                      size_t vl) {
  return __riscv_vlse16_tumu(vm, vd, rs1, rs2, vl);
}

vint16mf2_t test_vlse16_v_i16mf2_tumu(vbool32_t vm, vint16mf2_t vd,
                                      const int16_t *rs1, ptrdiff_t rs2,
                                      size_t vl) {
  return __riscv_vlse16_tumu(vm, vd, rs1, rs2, vl);
}

vint16m1_t test_vlse16_v_i16m1_tumu(vbool16_t vm, vint16m1_t vd,
                                    const int16_t *rs1, ptrdiff_t rs2,
                                    size_t vl) {
  return __riscv_vlse16_tumu(vm, vd, rs1, rs2, vl);
}

vint16m2_t test_vlse16_v_i16m2_tumu(vbool8_t vm, vint16m2_t vd,
                                    const int16_t *rs1, ptrdiff_t rs2,
                                    size_t vl) {
  return __riscv_vlse16_tumu(vm, vd, rs1, rs2, vl);
}

vint16m4_t test_vlse16_v_i16m4_tumu(vbool4_t vm, vint16m4_t vd,
                                    const int16_t *rs1, ptrdiff_t rs2,
                                    size_t vl) {
  return __riscv_vlse16_tumu(vm, vd, rs1, rs2, vl);
}

vint16m8_t test_vlse16_v_i16m8_tumu(vbool2_t vm, vint16m8_t vd,
                                    const int16_t *rs1, ptrdiff_t rs2,
                                    size_t vl) {
  return __riscv_vlse16_tumu(vm, vd, rs1, rs2, vl);
}

vuint16mf4_t test_vlse16_v_u16mf4_tumu(vbool64_t vm, vuint16mf4_t vd,
                                       const uint16_t *rs1, ptrdiff_t rs2,
                                       size_t vl) {
  return __riscv_vlse16_tumu(vm, vd, rs1, rs2, vl);
}

vuint16mf2_t test_vlse16_v_u16mf2_tumu(vbool32_t vm, vuint16mf2_t vd,
                                       const uint16_t *rs1, ptrdiff_t rs2,
                                       size_t vl) {
  return __riscv_vlse16_tumu(vm, vd, rs1, rs2, vl);
}

vuint16m1_t test_vlse16_v_u16m1_tumu(vbool16_t vm, vuint16m1_t vd,
                                     const uint16_t *rs1, ptrdiff_t rs2,
                                     size_t vl) {
  return __riscv_vlse16_tumu(vm, vd, rs1, rs2, vl);
}

vuint16m2_t test_vlse16_v_u16m2_tumu(vbool8_t vm, vuint16m2_t vd,
                                     const uint16_t *rs1, ptrdiff_t rs2,
                                     size_t vl) {
  return __riscv_vlse16_tumu(vm, vd, rs1, rs2, vl);
}

vuint16m4_t test_vlse16_v_u16m4_tumu(vbool4_t vm, vuint16m4_t vd,
                                     const uint16_t *rs1, ptrdiff_t rs2,
                                     size_t vl) {
  return __riscv_vlse16_tumu(vm, vd, rs1, rs2, vl);
}

vuint16m8_t test_vlse16_v_u16m8_tumu(vbool2_t vm, vuint16m8_t vd,
                                     const uint16_t *rs1, ptrdiff_t rs2,
                                     size_t vl) {
  return __riscv_vlse16_tumu(vm, vd, rs1, rs2, vl);
}

vint16mf4_t test_vlse16_v_i16mf4_mu(vbool64_t vm, vint16mf4_t vd,
                                    const int16_t *rs1, ptrdiff_t rs2,
                                    size_t vl) {
  return __riscv_vlse16_mu(vm, vd, rs1, rs2, vl);
}

vint16mf2_t test_vlse16_v_i16mf2_mu(vbool32_t vm, vint16mf2_t vd,
                                    const int16_t *rs1, ptrdiff_t rs2,
                                    size_t vl) {
  return __riscv_vlse16_mu(vm, vd, rs1, rs2, vl);
}

vint16m1_t test_vlse16_v_i16m1_mu(vbool16_t vm, vint16m1_t vd,
                                  const int16_t *rs1, ptrdiff_t rs2,
                                  size_t vl) {
  return __riscv_vlse16_mu(vm, vd, rs1, rs2, vl);
}

vint16m2_t test_vlse16_v_i16m2_mu(vbool8_t vm, vint16m2_t vd,
                                  const int16_t *rs1, ptrdiff_t rs2,
                                  size_t vl) {
  return __riscv_vlse16_mu(vm, vd, rs1, rs2, vl);
}

vint16m4_t test_vlse16_v_i16m4_mu(vbool4_t vm, vint16m4_t vd,
                                  const int16_t *rs1, ptrdiff_t rs2,
                                  size_t vl) {
  return __riscv_vlse16_mu(vm, vd, rs1, rs2, vl);
}

vint16m8_t test_vlse16_v_i16m8_mu(vbool2_t vm, vint16m8_t vd,
                                  const int16_t *rs1, ptrdiff_t rs2,
                                  size_t vl) {
  return __riscv_vlse16_mu(vm, vd, rs1, rs2, vl);
}

vuint16mf4_t test_vlse16_v_u16mf4_mu(vbool64_t vm, vuint16mf4_t vd,
                                     const uint16_t *rs1, ptrdiff_t rs2,
                                     size_t vl) {
  return __riscv_vlse16_mu(vm, vd, rs1, rs2, vl);
}

vuint16mf2_t test_vlse16_v_u16mf2_mu(vbool32_t vm, vuint16mf2_t vd,
                                     const uint16_t *rs1, ptrdiff_t rs2,
                                     size_t vl) {
  return __riscv_vlse16_mu(vm, vd, rs1, rs2, vl);
}

vuint16m1_t test_vlse16_v_u16m1_mu(vbool16_t vm, vuint16m1_t vd,
                                   const uint16_t *rs1, ptrdiff_t rs2,
                                   size_t vl) {
  return __riscv_vlse16_mu(vm, vd, rs1, rs2, vl);
}

vuint16m2_t test_vlse16_v_u16m2_mu(vbool8_t vm, vuint16m2_t vd,
                                   const uint16_t *rs1, ptrdiff_t rs2,
                                   size_t vl) {
  return __riscv_vlse16_mu(vm, vd, rs1, rs2, vl);
}

vuint16m4_t test_vlse16_v_u16m4_mu(vbool4_t vm, vuint16m4_t vd,
                                   const uint16_t *rs1, ptrdiff_t rs2,
                                   size_t vl) {
  return __riscv_vlse16_mu(vm, vd, rs1, rs2, vl);
}

vuint16m8_t test_vlse16_v_u16m8_mu(vbool2_t vm, vuint16m8_t vd,
                                   const uint16_t *rs1, ptrdiff_t rs2,
                                   size_t vl) {
  return __riscv_vlse16_mu(vm, vd, rs1, rs2, vl);
}
