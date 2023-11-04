#include <riscv_vector.h>
#include <stdint.h>

vint8mf8_t test_vsmul_vv_i8mf8(vint8mf8_t vs2, vint8mf8_t vs1, size_t vl) {
  return __riscv_vsmul_vv_i8mf8(vs2, vs1, __RISCV_VXRM_RNU, vl);
}

vint8mf8_t test_vsmul_vx_i8mf8(vint8mf8_t vs2, int8_t rs1, size_t vl) {
  return __riscv_vsmul_vx_i8mf8(vs2, rs1, __RISCV_VXRM_RNU, vl);
}

vint8mf4_t test_vsmul_vv_i8mf4(vint8mf4_t vs2, vint8mf4_t vs1, size_t vl) {
  return __riscv_vsmul_vv_i8mf4(vs2, vs1, __RISCV_VXRM_RNU, vl);
}

vint8mf4_t test_vsmul_vx_i8mf4(vint8mf4_t vs2, int8_t rs1, size_t vl) {
  return __riscv_vsmul_vx_i8mf4(vs2, rs1, __RISCV_VXRM_RNU, vl);
}

vint8mf2_t test_vsmul_vv_i8mf2(vint8mf2_t vs2, vint8mf2_t vs1, size_t vl) {
  return __riscv_vsmul_vv_i8mf2(vs2, vs1, __RISCV_VXRM_RNU, vl);
}

vint8mf2_t test_vsmul_vx_i8mf2(vint8mf2_t vs2, int8_t rs1, size_t vl) {
  return __riscv_vsmul_vx_i8mf2(vs2, rs1, __RISCV_VXRM_RNU, vl);
}

vint8m1_t test_vsmul_vv_i8m1(vint8m1_t vs2, vint8m1_t vs1, size_t vl) {
  return __riscv_vsmul_vv_i8m1(vs2, vs1, __RISCV_VXRM_RNU, vl);
}

vint8m1_t test_vsmul_vx_i8m1(vint8m1_t vs2, int8_t rs1, size_t vl) {
  return __riscv_vsmul_vx_i8m1(vs2, rs1, __RISCV_VXRM_RNU, vl);
}

vint8m2_t test_vsmul_vv_i8m2(vint8m2_t vs2, vint8m2_t vs1, size_t vl) {
  return __riscv_vsmul_vv_i8m2(vs2, vs1, __RISCV_VXRM_RNU, vl);
}

vint8m2_t test_vsmul_vx_i8m2(vint8m2_t vs2, int8_t rs1, size_t vl) {
  return __riscv_vsmul_vx_i8m2(vs2, rs1, __RISCV_VXRM_RNU, vl);
}

vint8m4_t test_vsmul_vv_i8m4(vint8m4_t vs2, vint8m4_t vs1, size_t vl) {
  return __riscv_vsmul_vv_i8m4(vs2, vs1, __RISCV_VXRM_RNU, vl);
}

vint8m4_t test_vsmul_vx_i8m4(vint8m4_t vs2, int8_t rs1, size_t vl) {
  return __riscv_vsmul_vx_i8m4(vs2, rs1, __RISCV_VXRM_RNU, vl);
}

vint8m8_t test_vsmul_vv_i8m8(vint8m8_t vs2, vint8m8_t vs1, size_t vl) {
  return __riscv_vsmul_vv_i8m8(vs2, vs1, __RISCV_VXRM_RNU, vl);
}

vint8m8_t test_vsmul_vx_i8m8(vint8m8_t vs2, int8_t rs1, size_t vl) {
  return __riscv_vsmul_vx_i8m8(vs2, rs1, __RISCV_VXRM_RNU, vl);
}

vint16mf4_t test_vsmul_vv_i16mf4(vint16mf4_t vs2, vint16mf4_t vs1, size_t vl) {
  return __riscv_vsmul_vv_i16mf4(vs2, vs1, __RISCV_VXRM_RNU, vl);
}

vint16mf4_t test_vsmul_vx_i16mf4(vint16mf4_t vs2, int16_t rs1, size_t vl) {
  return __riscv_vsmul_vx_i16mf4(vs2, rs1, __RISCV_VXRM_RNU, vl);
}

vint16mf2_t test_vsmul_vv_i16mf2(vint16mf2_t vs2, vint16mf2_t vs1, size_t vl) {
  return __riscv_vsmul_vv_i16mf2(vs2, vs1, __RISCV_VXRM_RNU, vl);
}

vint16mf2_t test_vsmul_vx_i16mf2(vint16mf2_t vs2, int16_t rs1, size_t vl) {
  return __riscv_vsmul_vx_i16mf2(vs2, rs1, __RISCV_VXRM_RNU, vl);
}

vint16m1_t test_vsmul_vv_i16m1(vint16m1_t vs2, vint16m1_t vs1, size_t vl) {
  return __riscv_vsmul_vv_i16m1(vs2, vs1, __RISCV_VXRM_RNU, vl);
}

vint16m1_t test_vsmul_vx_i16m1(vint16m1_t vs2, int16_t rs1, size_t vl) {
  return __riscv_vsmul_vx_i16m1(vs2, rs1, __RISCV_VXRM_RNU, vl);
}

vint16m2_t test_vsmul_vv_i16m2(vint16m2_t vs2, vint16m2_t vs1, size_t vl) {
  return __riscv_vsmul_vv_i16m2(vs2, vs1, __RISCV_VXRM_RNU, vl);
}

vint16m2_t test_vsmul_vx_i16m2(vint16m2_t vs2, int16_t rs1, size_t vl) {
  return __riscv_vsmul_vx_i16m2(vs2, rs1, __RISCV_VXRM_RNU, vl);
}

vint16m4_t test_vsmul_vv_i16m4(vint16m4_t vs2, vint16m4_t vs1, size_t vl) {
  return __riscv_vsmul_vv_i16m4(vs2, vs1, __RISCV_VXRM_RNU, vl);
}

vint16m4_t test_vsmul_vx_i16m4(vint16m4_t vs2, int16_t rs1, size_t vl) {
  return __riscv_vsmul_vx_i16m4(vs2, rs1, __RISCV_VXRM_RNU, vl);
}

vint16m8_t test_vsmul_vv_i16m8(vint16m8_t vs2, vint16m8_t vs1, size_t vl) {
  return __riscv_vsmul_vv_i16m8(vs2, vs1, __RISCV_VXRM_RNU, vl);
}

vint16m8_t test_vsmul_vx_i16m8(vint16m8_t vs2, int16_t rs1, size_t vl) {
  return __riscv_vsmul_vx_i16m8(vs2, rs1, __RISCV_VXRM_RNU, vl);
}

vint32mf2_t test_vsmul_vv_i32mf2(vint32mf2_t vs2, vint32mf2_t vs1, size_t vl) {
  return __riscv_vsmul_vv_i32mf2(vs2, vs1, __RISCV_VXRM_RNU, vl);
}

vint32mf2_t test_vsmul_vx_i32mf2(vint32mf2_t vs2, int32_t rs1, size_t vl) {
  return __riscv_vsmul_vx_i32mf2(vs2, rs1, __RISCV_VXRM_RNU, vl);
}

vint32m1_t test_vsmul_vv_i32m1(vint32m1_t vs2, vint32m1_t vs1, size_t vl) {
  return __riscv_vsmul_vv_i32m1(vs2, vs1, __RISCV_VXRM_RNU, vl);
}

vint32m1_t test_vsmul_vx_i32m1(vint32m1_t vs2, int32_t rs1, size_t vl) {
  return __riscv_vsmul_vx_i32m1(vs2, rs1, __RISCV_VXRM_RNU, vl);
}

vint32m2_t test_vsmul_vv_i32m2(vint32m2_t vs2, vint32m2_t vs1, size_t vl) {
  return __riscv_vsmul_vv_i32m2(vs2, vs1, __RISCV_VXRM_RNU, vl);
}

vint32m2_t test_vsmul_vx_i32m2(vint32m2_t vs2, int32_t rs1, size_t vl) {
  return __riscv_vsmul_vx_i32m2(vs2, rs1, __RISCV_VXRM_RNU, vl);
}

vint32m4_t test_vsmul_vv_i32m4(vint32m4_t vs2, vint32m4_t vs1, size_t vl) {
  return __riscv_vsmul_vv_i32m4(vs2, vs1, __RISCV_VXRM_RNU, vl);
}

vint32m4_t test_vsmul_vx_i32m4(vint32m4_t vs2, int32_t rs1, size_t vl) {
  return __riscv_vsmul_vx_i32m4(vs2, rs1, __RISCV_VXRM_RNU, vl);
}

vint32m8_t test_vsmul_vv_i32m8(vint32m8_t vs2, vint32m8_t vs1, size_t vl) {
  return __riscv_vsmul_vv_i32m8(vs2, vs1, __RISCV_VXRM_RNU, vl);
}

vint32m8_t test_vsmul_vx_i32m8(vint32m8_t vs2, int32_t rs1, size_t vl) {
  return __riscv_vsmul_vx_i32m8(vs2, rs1, __RISCV_VXRM_RNU, vl);
}

vint64m1_t test_vsmul_vv_i64m1(vint64m1_t vs2, vint64m1_t vs1, size_t vl) {
  return __riscv_vsmul_vv_i64m1(vs2, vs1, __RISCV_VXRM_RNU, vl);
}

vint64m1_t test_vsmul_vx_i64m1(vint64m1_t vs2, int64_t rs1, size_t vl) {
  return __riscv_vsmul_vx_i64m1(vs2, rs1, __RISCV_VXRM_RNU, vl);
}

vint64m2_t test_vsmul_vv_i64m2(vint64m2_t vs2, vint64m2_t vs1, size_t vl) {
  return __riscv_vsmul_vv_i64m2(vs2, vs1, __RISCV_VXRM_RNU, vl);
}

vint64m2_t test_vsmul_vx_i64m2(vint64m2_t vs2, int64_t rs1, size_t vl) {
  return __riscv_vsmul_vx_i64m2(vs2, rs1, __RISCV_VXRM_RNU, vl);
}

vint64m4_t test_vsmul_vv_i64m4(vint64m4_t vs2, vint64m4_t vs1, size_t vl) {
  return __riscv_vsmul_vv_i64m4(vs2, vs1, __RISCV_VXRM_RNU, vl);
}

vint64m4_t test_vsmul_vx_i64m4(vint64m4_t vs2, int64_t rs1, size_t vl) {
  return __riscv_vsmul_vx_i64m4(vs2, rs1, __RISCV_VXRM_RNU, vl);
}

vint64m8_t test_vsmul_vv_i64m8(vint64m8_t vs2, vint64m8_t vs1, size_t vl) {
  return __riscv_vsmul_vv_i64m8(vs2, vs1, __RISCV_VXRM_RNU, vl);
}

vint64m8_t test_vsmul_vx_i64m8(vint64m8_t vs2, int64_t rs1, size_t vl) {
  return __riscv_vsmul_vx_i64m8(vs2, rs1, __RISCV_VXRM_RNU, vl);
}

vint8mf8_t test_vsmul_vv_i8mf8_m(vbool64_t vm, vint8mf8_t vs2, vint8mf8_t vs1,
                                 size_t vl) {
  return __riscv_vsmul_vv_i8mf8_m(vm, vs2, vs1, __RISCV_VXRM_RNU, vl);
}

vint8mf8_t test_vsmul_vx_i8mf8_m(vbool64_t vm, vint8mf8_t vs2, int8_t rs1,
                                 size_t vl) {
  return __riscv_vsmul_vx_i8mf8_m(vm, vs2, rs1, __RISCV_VXRM_RNU, vl);
}

vint8mf4_t test_vsmul_vv_i8mf4_m(vbool32_t vm, vint8mf4_t vs2, vint8mf4_t vs1,
                                 size_t vl) {
  return __riscv_vsmul_vv_i8mf4_m(vm, vs2, vs1, __RISCV_VXRM_RNU, vl);
}

vint8mf4_t test_vsmul_vx_i8mf4_m(vbool32_t vm, vint8mf4_t vs2, int8_t rs1,
                                 size_t vl) {
  return __riscv_vsmul_vx_i8mf4_m(vm, vs2, rs1, __RISCV_VXRM_RNU, vl);
}

vint8mf2_t test_vsmul_vv_i8mf2_m(vbool16_t vm, vint8mf2_t vs2, vint8mf2_t vs1,
                                 size_t vl) {
  return __riscv_vsmul_vv_i8mf2_m(vm, vs2, vs1, __RISCV_VXRM_RNU, vl);
}

vint8mf2_t test_vsmul_vx_i8mf2_m(vbool16_t vm, vint8mf2_t vs2, int8_t rs1,
                                 size_t vl) {
  return __riscv_vsmul_vx_i8mf2_m(vm, vs2, rs1, __RISCV_VXRM_RNU, vl);
}

vint8m1_t test_vsmul_vv_i8m1_m(vbool8_t vm, vint8m1_t vs2, vint8m1_t vs1,
                               size_t vl) {
  return __riscv_vsmul_vv_i8m1_m(vm, vs2, vs1, __RISCV_VXRM_RNU, vl);
}

vint8m1_t test_vsmul_vx_i8m1_m(vbool8_t vm, vint8m1_t vs2, int8_t rs1,
                               size_t vl) {
  return __riscv_vsmul_vx_i8m1_m(vm, vs2, rs1, __RISCV_VXRM_RNU, vl);
}

vint8m2_t test_vsmul_vv_i8m2_m(vbool4_t vm, vint8m2_t vs2, vint8m2_t vs1,
                               size_t vl) {
  return __riscv_vsmul_vv_i8m2_m(vm, vs2, vs1, __RISCV_VXRM_RNU, vl);
}

vint8m2_t test_vsmul_vx_i8m2_m(vbool4_t vm, vint8m2_t vs2, int8_t rs1,
                               size_t vl) {
  return __riscv_vsmul_vx_i8m2_m(vm, vs2, rs1, __RISCV_VXRM_RNU, vl);
}

vint8m4_t test_vsmul_vv_i8m4_m(vbool2_t vm, vint8m4_t vs2, vint8m4_t vs1,
                               size_t vl) {
  return __riscv_vsmul_vv_i8m4_m(vm, vs2, vs1, __RISCV_VXRM_RNU, vl);
}

vint8m4_t test_vsmul_vx_i8m4_m(vbool2_t vm, vint8m4_t vs2, int8_t rs1,
                               size_t vl) {
  return __riscv_vsmul_vx_i8m4_m(vm, vs2, rs1, __RISCV_VXRM_RNU, vl);
}

vint8m8_t test_vsmul_vv_i8m8_m(vbool1_t vm, vint8m8_t vs2, vint8m8_t vs1,
                               size_t vl) {
  return __riscv_vsmul_vv_i8m8_m(vm, vs2, vs1, __RISCV_VXRM_RNU, vl);
}

vint8m8_t test_vsmul_vx_i8m8_m(vbool1_t vm, vint8m8_t vs2, int8_t rs1,
                               size_t vl) {
  return __riscv_vsmul_vx_i8m8_m(vm, vs2, rs1, __RISCV_VXRM_RNU, vl);
}

vint16mf4_t test_vsmul_vv_i16mf4_m(vbool64_t vm, vint16mf4_t vs2,
                                   vint16mf4_t vs1, size_t vl) {
  return __riscv_vsmul_vv_i16mf4_m(vm, vs2, vs1, __RISCV_VXRM_RNU, vl);
}

vint16mf4_t test_vsmul_vx_i16mf4_m(vbool64_t vm, vint16mf4_t vs2, int16_t rs1,
                                   size_t vl) {
  return __riscv_vsmul_vx_i16mf4_m(vm, vs2, rs1, __RISCV_VXRM_RNU, vl);
}

vint16mf2_t test_vsmul_vv_i16mf2_m(vbool32_t vm, vint16mf2_t vs2,
                                   vint16mf2_t vs1, size_t vl) {
  return __riscv_vsmul_vv_i16mf2_m(vm, vs2, vs1, __RISCV_VXRM_RNU, vl);
}

vint16mf2_t test_vsmul_vx_i16mf2_m(vbool32_t vm, vint16mf2_t vs2, int16_t rs1,
                                   size_t vl) {
  return __riscv_vsmul_vx_i16mf2_m(vm, vs2, rs1, __RISCV_VXRM_RNU, vl);
}

vint16m1_t test_vsmul_vv_i16m1_m(vbool16_t vm, vint16m1_t vs2, vint16m1_t vs1,
                                 size_t vl) {
  return __riscv_vsmul_vv_i16m1_m(vm, vs2, vs1, __RISCV_VXRM_RNU, vl);
}

vint16m1_t test_vsmul_vx_i16m1_m(vbool16_t vm, vint16m1_t vs2, int16_t rs1,
                                 size_t vl) {
  return __riscv_vsmul_vx_i16m1_m(vm, vs2, rs1, __RISCV_VXRM_RNU, vl);
}

vint16m2_t test_vsmul_vv_i16m2_m(vbool8_t vm, vint16m2_t vs2, vint16m2_t vs1,
                                 size_t vl) {
  return __riscv_vsmul_vv_i16m2_m(vm, vs2, vs1, __RISCV_VXRM_RNU, vl);
}

vint16m2_t test_vsmul_vx_i16m2_m(vbool8_t vm, vint16m2_t vs2, int16_t rs1,
                                 size_t vl) {
  return __riscv_vsmul_vx_i16m2_m(vm, vs2, rs1, __RISCV_VXRM_RNU, vl);
}

vint16m4_t test_vsmul_vv_i16m4_m(vbool4_t vm, vint16m4_t vs2, vint16m4_t vs1,
                                 size_t vl) {
  return __riscv_vsmul_vv_i16m4_m(vm, vs2, vs1, __RISCV_VXRM_RNU, vl);
}

vint16m4_t test_vsmul_vx_i16m4_m(vbool4_t vm, vint16m4_t vs2, int16_t rs1,
                                 size_t vl) {
  return __riscv_vsmul_vx_i16m4_m(vm, vs2, rs1, __RISCV_VXRM_RNU, vl);
}

vint16m8_t test_vsmul_vv_i16m8_m(vbool2_t vm, vint16m8_t vs2, vint16m8_t vs1,
                                 size_t vl) {
  return __riscv_vsmul_vv_i16m8_m(vm, vs2, vs1, __RISCV_VXRM_RNU, vl);
}

vint16m8_t test_vsmul_vx_i16m8_m(vbool2_t vm, vint16m8_t vs2, int16_t rs1,
                                 size_t vl) {
  return __riscv_vsmul_vx_i16m8_m(vm, vs2, rs1, __RISCV_VXRM_RNU, vl);
}

vint32mf2_t test_vsmul_vv_i32mf2_m(vbool64_t vm, vint32mf2_t vs2,
                                   vint32mf2_t vs1, size_t vl) {
  return __riscv_vsmul_vv_i32mf2_m(vm, vs2, vs1, __RISCV_VXRM_RNU, vl);
}

vint32mf2_t test_vsmul_vx_i32mf2_m(vbool64_t vm, vint32mf2_t vs2, int32_t rs1,
                                   size_t vl) {
  return __riscv_vsmul_vx_i32mf2_m(vm, vs2, rs1, __RISCV_VXRM_RNU, vl);
}

vint32m1_t test_vsmul_vv_i32m1_m(vbool32_t vm, vint32m1_t vs2, vint32m1_t vs1,
                                 size_t vl) {
  return __riscv_vsmul_vv_i32m1_m(vm, vs2, vs1, __RISCV_VXRM_RNU, vl);
}

vint32m1_t test_vsmul_vx_i32m1_m(vbool32_t vm, vint32m1_t vs2, int32_t rs1,
                                 size_t vl) {
  return __riscv_vsmul_vx_i32m1_m(vm, vs2, rs1, __RISCV_VXRM_RNU, vl);
}

vint32m2_t test_vsmul_vv_i32m2_m(vbool16_t vm, vint32m2_t vs2, vint32m2_t vs1,
                                 size_t vl) {
  return __riscv_vsmul_vv_i32m2_m(vm, vs2, vs1, __RISCV_VXRM_RNU, vl);
}

vint32m2_t test_vsmul_vx_i32m2_m(vbool16_t vm, vint32m2_t vs2, int32_t rs1,
                                 size_t vl) {
  return __riscv_vsmul_vx_i32m2_m(vm, vs2, rs1, __RISCV_VXRM_RNU, vl);
}

vint32m4_t test_vsmul_vv_i32m4_m(vbool8_t vm, vint32m4_t vs2, vint32m4_t vs1,
                                 size_t vl) {
  return __riscv_vsmul_vv_i32m4_m(vm, vs2, vs1, __RISCV_VXRM_RNU, vl);
}

vint32m4_t test_vsmul_vx_i32m4_m(vbool8_t vm, vint32m4_t vs2, int32_t rs1,
                                 size_t vl) {
  return __riscv_vsmul_vx_i32m4_m(vm, vs2, rs1, __RISCV_VXRM_RNU, vl);
}

vint32m8_t test_vsmul_vv_i32m8_m(vbool4_t vm, vint32m8_t vs2, vint32m8_t vs1,
                                 size_t vl) {
  return __riscv_vsmul_vv_i32m8_m(vm, vs2, vs1, __RISCV_VXRM_RNU, vl);
}

vint32m8_t test_vsmul_vx_i32m8_m(vbool4_t vm, vint32m8_t vs2, int32_t rs1,
                                 size_t vl) {
  return __riscv_vsmul_vx_i32m8_m(vm, vs2, rs1, __RISCV_VXRM_RNU, vl);
}

vint64m1_t test_vsmul_vv_i64m1_m(vbool64_t vm, vint64m1_t vs2, vint64m1_t vs1,
                                 size_t vl) {
  return __riscv_vsmul_vv_i64m1_m(vm, vs2, vs1, __RISCV_VXRM_RNU, vl);
}

vint64m1_t test_vsmul_vx_i64m1_m(vbool64_t vm, vint64m1_t vs2, int64_t rs1,
                                 size_t vl) {
  return __riscv_vsmul_vx_i64m1_m(vm, vs2, rs1, __RISCV_VXRM_RNU, vl);
}

vint64m2_t test_vsmul_vv_i64m2_m(vbool32_t vm, vint64m2_t vs2, vint64m2_t vs1,
                                 size_t vl) {
  return __riscv_vsmul_vv_i64m2_m(vm, vs2, vs1, __RISCV_VXRM_RNU, vl);
}

vint64m2_t test_vsmul_vx_i64m2_m(vbool32_t vm, vint64m2_t vs2, int64_t rs1,
                                 size_t vl) {
  return __riscv_vsmul_vx_i64m2_m(vm, vs2, rs1, __RISCV_VXRM_RNU, vl);
}

vint64m4_t test_vsmul_vv_i64m4_m(vbool16_t vm, vint64m4_t vs2, vint64m4_t vs1,
                                 size_t vl) {
  return __riscv_vsmul_vv_i64m4_m(vm, vs2, vs1, __RISCV_VXRM_RNU, vl);
}

vint64m4_t test_vsmul_vx_i64m4_m(vbool16_t vm, vint64m4_t vs2, int64_t rs1,
                                 size_t vl) {
  return __riscv_vsmul_vx_i64m4_m(vm, vs2, rs1, __RISCV_VXRM_RNU, vl);
}

vint64m8_t test_vsmul_vv_i64m8_m(vbool8_t vm, vint64m8_t vs2, vint64m8_t vs1,
                                 size_t vl) {
  return __riscv_vsmul_vv_i64m8_m(vm, vs2, vs1, __RISCV_VXRM_RNU, vl);
}

vint64m8_t test_vsmul_vx_i64m8_m(vbool8_t vm, vint64m8_t vs2, int64_t rs1,
                                 size_t vl) {
  return __riscv_vsmul_vx_i64m8_m(vm, vs2, rs1, __RISCV_VXRM_RNU, vl);
}
