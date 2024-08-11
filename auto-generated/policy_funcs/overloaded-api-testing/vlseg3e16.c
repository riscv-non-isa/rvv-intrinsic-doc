#include <riscv_vector.h>
#include <stdint.h>

vint16mf4x3_t test_vlseg3e16_v_i16mf4x3_tu(vint16mf4x3_t vd, const int16_t *rs1,
                                           size_t vl) {
  return __riscv_vlseg3e16_tu(vd, rs1, vl);
}

vint16mf2x3_t test_vlseg3e16_v_i16mf2x3_tu(vint16mf2x3_t vd, const int16_t *rs1,
                                           size_t vl) {
  return __riscv_vlseg3e16_tu(vd, rs1, vl);
}

vint16m1x3_t test_vlseg3e16_v_i16m1x3_tu(vint16m1x3_t vd, const int16_t *rs1,
                                         size_t vl) {
  return __riscv_vlseg3e16_tu(vd, rs1, vl);
}

vint16m2x3_t test_vlseg3e16_v_i16m2x3_tu(vint16m2x3_t vd, const int16_t *rs1,
                                         size_t vl) {
  return __riscv_vlseg3e16_tu(vd, rs1, vl);
}

vuint16mf4x3_t test_vlseg3e16_v_u16mf4x3_tu(vuint16mf4x3_t vd,
                                            const uint16_t *rs1, size_t vl) {
  return __riscv_vlseg3e16_tu(vd, rs1, vl);
}

vuint16mf2x3_t test_vlseg3e16_v_u16mf2x3_tu(vuint16mf2x3_t vd,
                                            const uint16_t *rs1, size_t vl) {
  return __riscv_vlseg3e16_tu(vd, rs1, vl);
}

vuint16m1x3_t test_vlseg3e16_v_u16m1x3_tu(vuint16m1x3_t vd, const uint16_t *rs1,
                                          size_t vl) {
  return __riscv_vlseg3e16_tu(vd, rs1, vl);
}

vuint16m2x3_t test_vlseg3e16_v_u16m2x3_tu(vuint16m2x3_t vd, const uint16_t *rs1,
                                          size_t vl) {
  return __riscv_vlseg3e16_tu(vd, rs1, vl);
}

vint16mf4x3_t test_vlseg3e16_v_i16mf4x3_tum(vbool64_t vm, vint16mf4x3_t vd,
                                            const int16_t *rs1, size_t vl) {
  return __riscv_vlseg3e16_tum(vm, vd, rs1, vl);
}

vint16mf2x3_t test_vlseg3e16_v_i16mf2x3_tum(vbool32_t vm, vint16mf2x3_t vd,
                                            const int16_t *rs1, size_t vl) {
  return __riscv_vlseg3e16_tum(vm, vd, rs1, vl);
}

vint16m1x3_t test_vlseg3e16_v_i16m1x3_tum(vbool16_t vm, vint16m1x3_t vd,
                                          const int16_t *rs1, size_t vl) {
  return __riscv_vlseg3e16_tum(vm, vd, rs1, vl);
}

vint16m2x3_t test_vlseg3e16_v_i16m2x3_tum(vbool8_t vm, vint16m2x3_t vd,
                                          const int16_t *rs1, size_t vl) {
  return __riscv_vlseg3e16_tum(vm, vd, rs1, vl);
}

vuint16mf4x3_t test_vlseg3e16_v_u16mf4x3_tum(vbool64_t vm, vuint16mf4x3_t vd,
                                             const uint16_t *rs1, size_t vl) {
  return __riscv_vlseg3e16_tum(vm, vd, rs1, vl);
}

vuint16mf2x3_t test_vlseg3e16_v_u16mf2x3_tum(vbool32_t vm, vuint16mf2x3_t vd,
                                             const uint16_t *rs1, size_t vl) {
  return __riscv_vlseg3e16_tum(vm, vd, rs1, vl);
}

vuint16m1x3_t test_vlseg3e16_v_u16m1x3_tum(vbool16_t vm, vuint16m1x3_t vd,
                                           const uint16_t *rs1, size_t vl) {
  return __riscv_vlseg3e16_tum(vm, vd, rs1, vl);
}

vuint16m2x3_t test_vlseg3e16_v_u16m2x3_tum(vbool8_t vm, vuint16m2x3_t vd,
                                           const uint16_t *rs1, size_t vl) {
  return __riscv_vlseg3e16_tum(vm, vd, rs1, vl);
}

vint16mf4x3_t test_vlseg3e16_v_i16mf4x3_tumu(vbool64_t vm, vint16mf4x3_t vd,
                                             const int16_t *rs1, size_t vl) {
  return __riscv_vlseg3e16_tumu(vm, vd, rs1, vl);
}

vint16mf2x3_t test_vlseg3e16_v_i16mf2x3_tumu(vbool32_t vm, vint16mf2x3_t vd,
                                             const int16_t *rs1, size_t vl) {
  return __riscv_vlseg3e16_tumu(vm, vd, rs1, vl);
}

vint16m1x3_t test_vlseg3e16_v_i16m1x3_tumu(vbool16_t vm, vint16m1x3_t vd,
                                           const int16_t *rs1, size_t vl) {
  return __riscv_vlseg3e16_tumu(vm, vd, rs1, vl);
}

vint16m2x3_t test_vlseg3e16_v_i16m2x3_tumu(vbool8_t vm, vint16m2x3_t vd,
                                           const int16_t *rs1, size_t vl) {
  return __riscv_vlseg3e16_tumu(vm, vd, rs1, vl);
}

vuint16mf4x3_t test_vlseg3e16_v_u16mf4x3_tumu(vbool64_t vm, vuint16mf4x3_t vd,
                                              const uint16_t *rs1, size_t vl) {
  return __riscv_vlseg3e16_tumu(vm, vd, rs1, vl);
}

vuint16mf2x3_t test_vlseg3e16_v_u16mf2x3_tumu(vbool32_t vm, vuint16mf2x3_t vd,
                                              const uint16_t *rs1, size_t vl) {
  return __riscv_vlseg3e16_tumu(vm, vd, rs1, vl);
}

vuint16m1x3_t test_vlseg3e16_v_u16m1x3_tumu(vbool16_t vm, vuint16m1x3_t vd,
                                            const uint16_t *rs1, size_t vl) {
  return __riscv_vlseg3e16_tumu(vm, vd, rs1, vl);
}

vuint16m2x3_t test_vlseg3e16_v_u16m2x3_tumu(vbool8_t vm, vuint16m2x3_t vd,
                                            const uint16_t *rs1, size_t vl) {
  return __riscv_vlseg3e16_tumu(vm, vd, rs1, vl);
}

vint16mf4x3_t test_vlseg3e16_v_i16mf4x3_mu(vbool64_t vm, vint16mf4x3_t vd,
                                           const int16_t *rs1, size_t vl) {
  return __riscv_vlseg3e16_mu(vm, vd, rs1, vl);
}

vint16mf2x3_t test_vlseg3e16_v_i16mf2x3_mu(vbool32_t vm, vint16mf2x3_t vd,
                                           const int16_t *rs1, size_t vl) {
  return __riscv_vlseg3e16_mu(vm, vd, rs1, vl);
}

vint16m1x3_t test_vlseg3e16_v_i16m1x3_mu(vbool16_t vm, vint16m1x3_t vd,
                                         const int16_t *rs1, size_t vl) {
  return __riscv_vlseg3e16_mu(vm, vd, rs1, vl);
}

vint16m2x3_t test_vlseg3e16_v_i16m2x3_mu(vbool8_t vm, vint16m2x3_t vd,
                                         const int16_t *rs1, size_t vl) {
  return __riscv_vlseg3e16_mu(vm, vd, rs1, vl);
}

vuint16mf4x3_t test_vlseg3e16_v_u16mf4x3_mu(vbool64_t vm, vuint16mf4x3_t vd,
                                            const uint16_t *rs1, size_t vl) {
  return __riscv_vlseg3e16_mu(vm, vd, rs1, vl);
}

vuint16mf2x3_t test_vlseg3e16_v_u16mf2x3_mu(vbool32_t vm, vuint16mf2x3_t vd,
                                            const uint16_t *rs1, size_t vl) {
  return __riscv_vlseg3e16_mu(vm, vd, rs1, vl);
}

vuint16m1x3_t test_vlseg3e16_v_u16m1x3_mu(vbool16_t vm, vuint16m1x3_t vd,
                                          const uint16_t *rs1, size_t vl) {
  return __riscv_vlseg3e16_mu(vm, vd, rs1, vl);
}

vuint16m2x3_t test_vlseg3e16_v_u16m2x3_mu(vbool8_t vm, vuint16m2x3_t vd,
                                          const uint16_t *rs1, size_t vl) {
  return __riscv_vlseg3e16_mu(vm, vd, rs1, vl);
}
