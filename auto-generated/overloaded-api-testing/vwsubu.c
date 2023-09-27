#include <riscv_vector.h>
#include <stdint.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
vuint16mf4_t test_vwsubu_vv_u16mf4(vuint8mf8_t vs2, vuint8mf8_t vs1,
                                   size_t vl) {
  return __riscv_vwsubu_vv(vs2, vs1, vl);
}

vuint16mf4_t test_vwsubu_vx_u16mf4(vuint8mf8_t vs2, uint8_t rs1, size_t vl) {
  return __riscv_vwsubu_vx(vs2, rs1, vl);
}

vuint16mf4_t test_vwsubu_wv_u16mf4(vuint16mf4_t vs2, vuint8mf8_t vs1,
                                   size_t vl) {
  return __riscv_vwsubu_wv(vs2, vs1, vl);
}

vuint16mf4_t test_vwsubu_wx_u16mf4(vuint16mf4_t vs2, uint8_t rs1, size_t vl) {
  return __riscv_vwsubu_wx(vs2, rs1, vl);
}

vuint16mf2_t test_vwsubu_vv_u16mf2(vuint8mf4_t vs2, vuint8mf4_t vs1,
                                   size_t vl) {
  return __riscv_vwsubu_vv(vs2, vs1, vl);
}

vuint16mf2_t test_vwsubu_vx_u16mf2(vuint8mf4_t vs2, uint8_t rs1, size_t vl) {
  return __riscv_vwsubu_vx(vs2, rs1, vl);
}

vuint16mf2_t test_vwsubu_wv_u16mf2(vuint16mf2_t vs2, vuint8mf4_t vs1,
                                   size_t vl) {
  return __riscv_vwsubu_wv(vs2, vs1, vl);
}

vuint16mf2_t test_vwsubu_wx_u16mf2(vuint16mf2_t vs2, uint8_t rs1, size_t vl) {
  return __riscv_vwsubu_wx(vs2, rs1, vl);
}

vuint16m1_t test_vwsubu_vv_u16m1(vuint8mf2_t vs2, vuint8mf2_t vs1, size_t vl) {
  return __riscv_vwsubu_vv(vs2, vs1, vl);
}

vuint16m1_t test_vwsubu_vx_u16m1(vuint8mf2_t vs2, uint8_t rs1, size_t vl) {
  return __riscv_vwsubu_vx(vs2, rs1, vl);
}

vuint16m1_t test_vwsubu_wv_u16m1(vuint16m1_t vs2, vuint8mf2_t vs1, size_t vl) {
  return __riscv_vwsubu_wv(vs2, vs1, vl);
}

vuint16m1_t test_vwsubu_wx_u16m1(vuint16m1_t vs2, uint8_t rs1, size_t vl) {
  return __riscv_vwsubu_wx(vs2, rs1, vl);
}

vuint16m2_t test_vwsubu_vv_u16m2(vuint8m1_t vs2, vuint8m1_t vs1, size_t vl) {
  return __riscv_vwsubu_vv(vs2, vs1, vl);
}

vuint16m2_t test_vwsubu_vx_u16m2(vuint8m1_t vs2, uint8_t rs1, size_t vl) {
  return __riscv_vwsubu_vx(vs2, rs1, vl);
}

vuint16m2_t test_vwsubu_wv_u16m2(vuint16m2_t vs2, vuint8m1_t vs1, size_t vl) {
  return __riscv_vwsubu_wv(vs2, vs1, vl);
}

vuint16m2_t test_vwsubu_wx_u16m2(vuint16m2_t vs2, uint8_t rs1, size_t vl) {
  return __riscv_vwsubu_wx(vs2, rs1, vl);
}

vuint16m4_t test_vwsubu_vv_u16m4(vuint8m2_t vs2, vuint8m2_t vs1, size_t vl) {
  return __riscv_vwsubu_vv(vs2, vs1, vl);
}

vuint16m4_t test_vwsubu_vx_u16m4(vuint8m2_t vs2, uint8_t rs1, size_t vl) {
  return __riscv_vwsubu_vx(vs2, rs1, vl);
}

vuint16m4_t test_vwsubu_wv_u16m4(vuint16m4_t vs2, vuint8m2_t vs1, size_t vl) {
  return __riscv_vwsubu_wv(vs2, vs1, vl);
}

vuint16m4_t test_vwsubu_wx_u16m4(vuint16m4_t vs2, uint8_t rs1, size_t vl) {
  return __riscv_vwsubu_wx(vs2, rs1, vl);
}

vuint16m8_t test_vwsubu_vv_u16m8(vuint8m4_t vs2, vuint8m4_t vs1, size_t vl) {
  return __riscv_vwsubu_vv(vs2, vs1, vl);
}

vuint16m8_t test_vwsubu_vx_u16m8(vuint8m4_t vs2, uint8_t rs1, size_t vl) {
  return __riscv_vwsubu_vx(vs2, rs1, vl);
}

vuint16m8_t test_vwsubu_wv_u16m8(vuint16m8_t vs2, vuint8m4_t vs1, size_t vl) {
  return __riscv_vwsubu_wv(vs2, vs1, vl);
}

vuint16m8_t test_vwsubu_wx_u16m8(vuint16m8_t vs2, uint8_t rs1, size_t vl) {
  return __riscv_vwsubu_wx(vs2, rs1, vl);
}

vuint32mf2_t test_vwsubu_vv_u32mf2(vuint16mf4_t vs2, vuint16mf4_t vs1,
                                   size_t vl) {
  return __riscv_vwsubu_vv(vs2, vs1, vl);
}

vuint32mf2_t test_vwsubu_vx_u32mf2(vuint16mf4_t vs2, uint16_t rs1, size_t vl) {
  return __riscv_vwsubu_vx(vs2, rs1, vl);
}

vuint32mf2_t test_vwsubu_wv_u32mf2(vuint32mf2_t vs2, vuint16mf4_t vs1,
                                   size_t vl) {
  return __riscv_vwsubu_wv(vs2, vs1, vl);
}

vuint32mf2_t test_vwsubu_wx_u32mf2(vuint32mf2_t vs2, uint16_t rs1, size_t vl) {
  return __riscv_vwsubu_wx(vs2, rs1, vl);
}

vuint32m1_t test_vwsubu_vv_u32m1(vuint16mf2_t vs2, vuint16mf2_t vs1,
                                 size_t vl) {
  return __riscv_vwsubu_vv(vs2, vs1, vl);
}

vuint32m1_t test_vwsubu_vx_u32m1(vuint16mf2_t vs2, uint16_t rs1, size_t vl) {
  return __riscv_vwsubu_vx(vs2, rs1, vl);
}

vuint32m1_t test_vwsubu_wv_u32m1(vuint32m1_t vs2, vuint16mf2_t vs1, size_t vl) {
  return __riscv_vwsubu_wv(vs2, vs1, vl);
}

vuint32m1_t test_vwsubu_wx_u32m1(vuint32m1_t vs2, uint16_t rs1, size_t vl) {
  return __riscv_vwsubu_wx(vs2, rs1, vl);
}

vuint32m2_t test_vwsubu_vv_u32m2(vuint16m1_t vs2, vuint16m1_t vs1, size_t vl) {
  return __riscv_vwsubu_vv(vs2, vs1, vl);
}

vuint32m2_t test_vwsubu_vx_u32m2(vuint16m1_t vs2, uint16_t rs1, size_t vl) {
  return __riscv_vwsubu_vx(vs2, rs1, vl);
}

vuint32m2_t test_vwsubu_wv_u32m2(vuint32m2_t vs2, vuint16m1_t vs1, size_t vl) {
  return __riscv_vwsubu_wv(vs2, vs1, vl);
}

vuint32m2_t test_vwsubu_wx_u32m2(vuint32m2_t vs2, uint16_t rs1, size_t vl) {
  return __riscv_vwsubu_wx(vs2, rs1, vl);
}

vuint32m4_t test_vwsubu_vv_u32m4(vuint16m2_t vs2, vuint16m2_t vs1, size_t vl) {
  return __riscv_vwsubu_vv(vs2, vs1, vl);
}

vuint32m4_t test_vwsubu_vx_u32m4(vuint16m2_t vs2, uint16_t rs1, size_t vl) {
  return __riscv_vwsubu_vx(vs2, rs1, vl);
}

vuint32m4_t test_vwsubu_wv_u32m4(vuint32m4_t vs2, vuint16m2_t vs1, size_t vl) {
  return __riscv_vwsubu_wv(vs2, vs1, vl);
}

vuint32m4_t test_vwsubu_wx_u32m4(vuint32m4_t vs2, uint16_t rs1, size_t vl) {
  return __riscv_vwsubu_wx(vs2, rs1, vl);
}

vuint32m8_t test_vwsubu_vv_u32m8(vuint16m4_t vs2, vuint16m4_t vs1, size_t vl) {
  return __riscv_vwsubu_vv(vs2, vs1, vl);
}

vuint32m8_t test_vwsubu_vx_u32m8(vuint16m4_t vs2, uint16_t rs1, size_t vl) {
  return __riscv_vwsubu_vx(vs2, rs1, vl);
}

vuint32m8_t test_vwsubu_wv_u32m8(vuint32m8_t vs2, vuint16m4_t vs1, size_t vl) {
  return __riscv_vwsubu_wv(vs2, vs1, vl);
}

vuint32m8_t test_vwsubu_wx_u32m8(vuint32m8_t vs2, uint16_t rs1, size_t vl) {
  return __riscv_vwsubu_wx(vs2, rs1, vl);
}

vuint64m1_t test_vwsubu_vv_u64m1(vuint32mf2_t vs2, vuint32mf2_t vs1,
                                 size_t vl) {
  return __riscv_vwsubu_vv(vs2, vs1, vl);
}

vuint64m1_t test_vwsubu_vx_u64m1(vuint32mf2_t vs2, uint32_t rs1, size_t vl) {
  return __riscv_vwsubu_vx(vs2, rs1, vl);
}

vuint64m1_t test_vwsubu_wv_u64m1(vuint64m1_t vs2, vuint32mf2_t vs1, size_t vl) {
  return __riscv_vwsubu_wv(vs2, vs1, vl);
}

vuint64m1_t test_vwsubu_wx_u64m1(vuint64m1_t vs2, uint32_t rs1, size_t vl) {
  return __riscv_vwsubu_wx(vs2, rs1, vl);
}

vuint64m2_t test_vwsubu_vv_u64m2(vuint32m1_t vs2, vuint32m1_t vs1, size_t vl) {
  return __riscv_vwsubu_vv(vs2, vs1, vl);
}

vuint64m2_t test_vwsubu_vx_u64m2(vuint32m1_t vs2, uint32_t rs1, size_t vl) {
  return __riscv_vwsubu_vx(vs2, rs1, vl);
}

vuint64m2_t test_vwsubu_wv_u64m2(vuint64m2_t vs2, vuint32m1_t vs1, size_t vl) {
  return __riscv_vwsubu_wv(vs2, vs1, vl);
}

vuint64m2_t test_vwsubu_wx_u64m2(vuint64m2_t vs2, uint32_t rs1, size_t vl) {
  return __riscv_vwsubu_wx(vs2, rs1, vl);
}

vuint64m4_t test_vwsubu_vv_u64m4(vuint32m2_t vs2, vuint32m2_t vs1, size_t vl) {
  return __riscv_vwsubu_vv(vs2, vs1, vl);
}

vuint64m4_t test_vwsubu_vx_u64m4(vuint32m2_t vs2, uint32_t rs1, size_t vl) {
  return __riscv_vwsubu_vx(vs2, rs1, vl);
}

vuint64m4_t test_vwsubu_wv_u64m4(vuint64m4_t vs2, vuint32m2_t vs1, size_t vl) {
  return __riscv_vwsubu_wv(vs2, vs1, vl);
}

vuint64m4_t test_vwsubu_wx_u64m4(vuint64m4_t vs2, uint32_t rs1, size_t vl) {
  return __riscv_vwsubu_wx(vs2, rs1, vl);
}

vuint64m8_t test_vwsubu_vv_u64m8(vuint32m4_t vs2, vuint32m4_t vs1, size_t vl) {
  return __riscv_vwsubu_vv(vs2, vs1, vl);
}

vuint64m8_t test_vwsubu_vx_u64m8(vuint32m4_t vs2, uint32_t rs1, size_t vl) {
  return __riscv_vwsubu_vx(vs2, rs1, vl);
}

vuint64m8_t test_vwsubu_wv_u64m8(vuint64m8_t vs2, vuint32m4_t vs1, size_t vl) {
  return __riscv_vwsubu_wv(vs2, vs1, vl);
}

vuint64m8_t test_vwsubu_wx_u64m8(vuint64m8_t vs2, uint32_t rs1, size_t vl) {
  return __riscv_vwsubu_wx(vs2, rs1, vl);
}

vuint16mf4_t test_vwsubu_vv_u16mf4_m(vbool64_t vm, vuint8mf8_t vs2,
                                     vuint8mf8_t vs1, size_t vl) {
  return __riscv_vwsubu_vv(vm, vs2, vs1, vl);
}

vuint16mf4_t test_vwsubu_vx_u16mf4_m(vbool64_t vm, vuint8mf8_t vs2, uint8_t rs1,
                                     size_t vl) {
  return __riscv_vwsubu_vx(vm, vs2, rs1, vl);
}

vuint16mf4_t test_vwsubu_wv_u16mf4_m(vbool64_t vm, vuint16mf4_t vs2,
                                     vuint8mf8_t vs1, size_t vl) {
  return __riscv_vwsubu_wv(vm, vs2, vs1, vl);
}

vuint16mf4_t test_vwsubu_wx_u16mf4_m(vbool64_t vm, vuint16mf4_t vs2,
                                     uint8_t rs1, size_t vl) {
  return __riscv_vwsubu_wx(vm, vs2, rs1, vl);
}

vuint16mf2_t test_vwsubu_vv_u16mf2_m(vbool32_t vm, vuint8mf4_t vs2,
                                     vuint8mf4_t vs1, size_t vl) {
  return __riscv_vwsubu_vv(vm, vs2, vs1, vl);
}

vuint16mf2_t test_vwsubu_vx_u16mf2_m(vbool32_t vm, vuint8mf4_t vs2, uint8_t rs1,
                                     size_t vl) {
  return __riscv_vwsubu_vx(vm, vs2, rs1, vl);
}

vuint16mf2_t test_vwsubu_wv_u16mf2_m(vbool32_t vm, vuint16mf2_t vs2,
                                     vuint8mf4_t vs1, size_t vl) {
  return __riscv_vwsubu_wv(vm, vs2, vs1, vl);
}

vuint16mf2_t test_vwsubu_wx_u16mf2_m(vbool32_t vm, vuint16mf2_t vs2,
                                     uint8_t rs1, size_t vl) {
  return __riscv_vwsubu_wx(vm, vs2, rs1, vl);
}

vuint16m1_t test_vwsubu_vv_u16m1_m(vbool16_t vm, vuint8mf2_t vs2,
                                   vuint8mf2_t vs1, size_t vl) {
  return __riscv_vwsubu_vv(vm, vs2, vs1, vl);
}

vuint16m1_t test_vwsubu_vx_u16m1_m(vbool16_t vm, vuint8mf2_t vs2, uint8_t rs1,
                                   size_t vl) {
  return __riscv_vwsubu_vx(vm, vs2, rs1, vl);
}

vuint16m1_t test_vwsubu_wv_u16m1_m(vbool16_t vm, vuint16m1_t vs2,
                                   vuint8mf2_t vs1, size_t vl) {
  return __riscv_vwsubu_wv(vm, vs2, vs1, vl);
}

vuint16m1_t test_vwsubu_wx_u16m1_m(vbool16_t vm, vuint16m1_t vs2, uint8_t rs1,
                                   size_t vl) {
  return __riscv_vwsubu_wx(vm, vs2, rs1, vl);
}

vuint16m2_t test_vwsubu_vv_u16m2_m(vbool8_t vm, vuint8m1_t vs2, vuint8m1_t vs1,
                                   size_t vl) {
  return __riscv_vwsubu_vv(vm, vs2, vs1, vl);
}

vuint16m2_t test_vwsubu_vx_u16m2_m(vbool8_t vm, vuint8m1_t vs2, uint8_t rs1,
                                   size_t vl) {
  return __riscv_vwsubu_vx(vm, vs2, rs1, vl);
}

vuint16m2_t test_vwsubu_wv_u16m2_m(vbool8_t vm, vuint16m2_t vs2, vuint8m1_t vs1,
                                   size_t vl) {
  return __riscv_vwsubu_wv(vm, vs2, vs1, vl);
}

vuint16m2_t test_vwsubu_wx_u16m2_m(vbool8_t vm, vuint16m2_t vs2, uint8_t rs1,
                                   size_t vl) {
  return __riscv_vwsubu_wx(vm, vs2, rs1, vl);
}

vuint16m4_t test_vwsubu_vv_u16m4_m(vbool4_t vm, vuint8m2_t vs2, vuint8m2_t vs1,
                                   size_t vl) {
  return __riscv_vwsubu_vv(vm, vs2, vs1, vl);
}

vuint16m4_t test_vwsubu_vx_u16m4_m(vbool4_t vm, vuint8m2_t vs2, uint8_t rs1,
                                   size_t vl) {
  return __riscv_vwsubu_vx(vm, vs2, rs1, vl);
}

vuint16m4_t test_vwsubu_wv_u16m4_m(vbool4_t vm, vuint16m4_t vs2, vuint8m2_t vs1,
                                   size_t vl) {
  return __riscv_vwsubu_wv(vm, vs2, vs1, vl);
}

vuint16m4_t test_vwsubu_wx_u16m4_m(vbool4_t vm, vuint16m4_t vs2, uint8_t rs1,
                                   size_t vl) {
  return __riscv_vwsubu_wx(vm, vs2, rs1, vl);
}

vuint16m8_t test_vwsubu_vv_u16m8_m(vbool2_t vm, vuint8m4_t vs2, vuint8m4_t vs1,
                                   size_t vl) {
  return __riscv_vwsubu_vv(vm, vs2, vs1, vl);
}

vuint16m8_t test_vwsubu_vx_u16m8_m(vbool2_t vm, vuint8m4_t vs2, uint8_t rs1,
                                   size_t vl) {
  return __riscv_vwsubu_vx(vm, vs2, rs1, vl);
}

vuint16m8_t test_vwsubu_wv_u16m8_m(vbool2_t vm, vuint16m8_t vs2, vuint8m4_t vs1,
                                   size_t vl) {
  return __riscv_vwsubu_wv(vm, vs2, vs1, vl);
}

vuint16m8_t test_vwsubu_wx_u16m8_m(vbool2_t vm, vuint16m8_t vs2, uint8_t rs1,
                                   size_t vl) {
  return __riscv_vwsubu_wx(vm, vs2, rs1, vl);
}

vuint32mf2_t test_vwsubu_vv_u32mf2_m(vbool64_t vm, vuint16mf4_t vs2,
                                     vuint16mf4_t vs1, size_t vl) {
  return __riscv_vwsubu_vv(vm, vs2, vs1, vl);
}

vuint32mf2_t test_vwsubu_vx_u32mf2_m(vbool64_t vm, vuint16mf4_t vs2,
                                     uint16_t rs1, size_t vl) {
  return __riscv_vwsubu_vx(vm, vs2, rs1, vl);
}

vuint32mf2_t test_vwsubu_wv_u32mf2_m(vbool64_t vm, vuint32mf2_t vs2,
                                     vuint16mf4_t vs1, size_t vl) {
  return __riscv_vwsubu_wv(vm, vs2, vs1, vl);
}

vuint32mf2_t test_vwsubu_wx_u32mf2_m(vbool64_t vm, vuint32mf2_t vs2,
                                     uint16_t rs1, size_t vl) {
  return __riscv_vwsubu_wx(vm, vs2, rs1, vl);
}

vuint32m1_t test_vwsubu_vv_u32m1_m(vbool32_t vm, vuint16mf2_t vs2,
                                   vuint16mf2_t vs1, size_t vl) {
  return __riscv_vwsubu_vv(vm, vs2, vs1, vl);
}

vuint32m1_t test_vwsubu_vx_u32m1_m(vbool32_t vm, vuint16mf2_t vs2, uint16_t rs1,
                                   size_t vl) {
  return __riscv_vwsubu_vx(vm, vs2, rs1, vl);
}

vuint32m1_t test_vwsubu_wv_u32m1_m(vbool32_t vm, vuint32m1_t vs2,
                                   vuint16mf2_t vs1, size_t vl) {
  return __riscv_vwsubu_wv(vm, vs2, vs1, vl);
}

vuint32m1_t test_vwsubu_wx_u32m1_m(vbool32_t vm, vuint32m1_t vs2, uint16_t rs1,
                                   size_t vl) {
  return __riscv_vwsubu_wx(vm, vs2, rs1, vl);
}

vuint32m2_t test_vwsubu_vv_u32m2_m(vbool16_t vm, vuint16m1_t vs2,
                                   vuint16m1_t vs1, size_t vl) {
  return __riscv_vwsubu_vv(vm, vs2, vs1, vl);
}

vuint32m2_t test_vwsubu_vx_u32m2_m(vbool16_t vm, vuint16m1_t vs2, uint16_t rs1,
                                   size_t vl) {
  return __riscv_vwsubu_vx(vm, vs2, rs1, vl);
}

vuint32m2_t test_vwsubu_wv_u32m2_m(vbool16_t vm, vuint32m2_t vs2,
                                   vuint16m1_t vs1, size_t vl) {
  return __riscv_vwsubu_wv(vm, vs2, vs1, vl);
}

vuint32m2_t test_vwsubu_wx_u32m2_m(vbool16_t vm, vuint32m2_t vs2, uint16_t rs1,
                                   size_t vl) {
  return __riscv_vwsubu_wx(vm, vs2, rs1, vl);
}

vuint32m4_t test_vwsubu_vv_u32m4_m(vbool8_t vm, vuint16m2_t vs2,
                                   vuint16m2_t vs1, size_t vl) {
  return __riscv_vwsubu_vv(vm, vs2, vs1, vl);
}

vuint32m4_t test_vwsubu_vx_u32m4_m(vbool8_t vm, vuint16m2_t vs2, uint16_t rs1,
                                   size_t vl) {
  return __riscv_vwsubu_vx(vm, vs2, rs1, vl);
}

vuint32m4_t test_vwsubu_wv_u32m4_m(vbool8_t vm, vuint32m4_t vs2,
                                   vuint16m2_t vs1, size_t vl) {
  return __riscv_vwsubu_wv(vm, vs2, vs1, vl);
}

vuint32m4_t test_vwsubu_wx_u32m4_m(vbool8_t vm, vuint32m4_t vs2, uint16_t rs1,
                                   size_t vl) {
  return __riscv_vwsubu_wx(vm, vs2, rs1, vl);
}

vuint32m8_t test_vwsubu_vv_u32m8_m(vbool4_t vm, vuint16m4_t vs2,
                                   vuint16m4_t vs1, size_t vl) {
  return __riscv_vwsubu_vv(vm, vs2, vs1, vl);
}

vuint32m8_t test_vwsubu_vx_u32m8_m(vbool4_t vm, vuint16m4_t vs2, uint16_t rs1,
                                   size_t vl) {
  return __riscv_vwsubu_vx(vm, vs2, rs1, vl);
}

vuint32m8_t test_vwsubu_wv_u32m8_m(vbool4_t vm, vuint32m8_t vs2,
                                   vuint16m4_t vs1, size_t vl) {
  return __riscv_vwsubu_wv(vm, vs2, vs1, vl);
}

vuint32m8_t test_vwsubu_wx_u32m8_m(vbool4_t vm, vuint32m8_t vs2, uint16_t rs1,
                                   size_t vl) {
  return __riscv_vwsubu_wx(vm, vs2, rs1, vl);
}

vuint64m1_t test_vwsubu_vv_u64m1_m(vbool64_t vm, vuint32mf2_t vs2,
                                   vuint32mf2_t vs1, size_t vl) {
  return __riscv_vwsubu_vv(vm, vs2, vs1, vl);
}

vuint64m1_t test_vwsubu_vx_u64m1_m(vbool64_t vm, vuint32mf2_t vs2, uint32_t rs1,
                                   size_t vl) {
  return __riscv_vwsubu_vx(vm, vs2, rs1, vl);
}

vuint64m1_t test_vwsubu_wv_u64m1_m(vbool64_t vm, vuint64m1_t vs2,
                                   vuint32mf2_t vs1, size_t vl) {
  return __riscv_vwsubu_wv(vm, vs2, vs1, vl);
}

vuint64m1_t test_vwsubu_wx_u64m1_m(vbool64_t vm, vuint64m1_t vs2, uint32_t rs1,
                                   size_t vl) {
  return __riscv_vwsubu_wx(vm, vs2, rs1, vl);
}

vuint64m2_t test_vwsubu_vv_u64m2_m(vbool32_t vm, vuint32m1_t vs2,
                                   vuint32m1_t vs1, size_t vl) {
  return __riscv_vwsubu_vv(vm, vs2, vs1, vl);
}

vuint64m2_t test_vwsubu_vx_u64m2_m(vbool32_t vm, vuint32m1_t vs2, uint32_t rs1,
                                   size_t vl) {
  return __riscv_vwsubu_vx(vm, vs2, rs1, vl);
}

vuint64m2_t test_vwsubu_wv_u64m2_m(vbool32_t vm, vuint64m2_t vs2,
                                   vuint32m1_t vs1, size_t vl) {
  return __riscv_vwsubu_wv(vm, vs2, vs1, vl);
}

vuint64m2_t test_vwsubu_wx_u64m2_m(vbool32_t vm, vuint64m2_t vs2, uint32_t rs1,
                                   size_t vl) {
  return __riscv_vwsubu_wx(vm, vs2, rs1, vl);
}

vuint64m4_t test_vwsubu_vv_u64m4_m(vbool16_t vm, vuint32m2_t vs2,
                                   vuint32m2_t vs1, size_t vl) {
  return __riscv_vwsubu_vv(vm, vs2, vs1, vl);
}

vuint64m4_t test_vwsubu_vx_u64m4_m(vbool16_t vm, vuint32m2_t vs2, uint32_t rs1,
                                   size_t vl) {
  return __riscv_vwsubu_vx(vm, vs2, rs1, vl);
}

vuint64m4_t test_vwsubu_wv_u64m4_m(vbool16_t vm, vuint64m4_t vs2,
                                   vuint32m2_t vs1, size_t vl) {
  return __riscv_vwsubu_wv(vm, vs2, vs1, vl);
}

vuint64m4_t test_vwsubu_wx_u64m4_m(vbool16_t vm, vuint64m4_t vs2, uint32_t rs1,
                                   size_t vl) {
  return __riscv_vwsubu_wx(vm, vs2, rs1, vl);
}

vuint64m8_t test_vwsubu_vv_u64m8_m(vbool8_t vm, vuint32m4_t vs2,
                                   vuint32m4_t vs1, size_t vl) {
  return __riscv_vwsubu_vv(vm, vs2, vs1, vl);
}

vuint64m8_t test_vwsubu_vx_u64m8_m(vbool8_t vm, vuint32m4_t vs2, uint32_t rs1,
                                   size_t vl) {
  return __riscv_vwsubu_vx(vm, vs2, rs1, vl);
}

vuint64m8_t test_vwsubu_wv_u64m8_m(vbool8_t vm, vuint64m8_t vs2,
                                   vuint32m4_t vs1, size_t vl) {
  return __riscv_vwsubu_wv(vm, vs2, vs1, vl);
}

vuint64m8_t test_vwsubu_wx_u64m8_m(vbool8_t vm, vuint64m8_t vs2, uint32_t rs1,
                                   size_t vl) {
  return __riscv_vwsubu_wx(vm, vs2, rs1, vl);
}
