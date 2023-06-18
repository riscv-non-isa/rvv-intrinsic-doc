// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -target-feature +zfh \
// RUN:   -target-feature +experimental-zvfh -disable-O0-optnone  \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

#include <riscv_ntlh.h>

vfloat32mf2x6_t test_vlsseg6e32_v_f32mf2x6_ntl_PALL(const float *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg6e32_v_f32mf2x6_ntl(base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vfloat32m1x6_t test_vlsseg6e32_v_f32m1x6_ntl_PALL(const float *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg6e32_v_f32m1x6_ntl(base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint32mf2x6_t test_vlsseg6e32_v_i32mf2x6_ntl_PALL(const int32_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg6e32_v_i32mf2x6_ntl(base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint32m1x6_t test_vlsseg6e32_v_i32m1x6_ntl_PALL(const int32_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg6e32_v_i32m1x6_ntl(base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint32mf2x6_t test_vlsseg6e32_v_u32mf2x6_ntl_PALL(const uint32_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg6e32_v_u32mf2x6_ntl(base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint32m1x6_t test_vlsseg6e32_v_u32m1x6_ntl_PALL(const uint32_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg6e32_v_u32m1x6_ntl(base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vfloat32mf2x6_t test_vlsseg6e32_v_f32mf2x6_m_ntl_PALL(vbool64_t mask, const float *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg6e32_v_f32mf2x6_m_ntl(mask, base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vfloat32m1x6_t test_vlsseg6e32_v_f32m1x6_m_ntl_PALL(vbool32_t mask, const float *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg6e32_v_f32m1x6_m_ntl(mask, base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint32mf2x6_t test_vlsseg6e32_v_i32mf2x6_m_ntl_PALL(vbool64_t mask, const int32_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg6e32_v_i32mf2x6_m_ntl(mask, base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vint32m1x6_t test_vlsseg6e32_v_i32m1x6_m_ntl_PALL(vbool32_t mask, const int32_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg6e32_v_i32m1x6_m_ntl(mask, base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint32mf2x6_t test_vlsseg6e32_v_u32mf2x6_m_ntl_PALL(vbool64_t mask, const uint32_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg6e32_v_u32mf2x6_m_ntl(mask, base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

vuint32m1x6_t test_vlsseg6e32_v_u32m1x6_m_ntl_PALL(vbool32_t mask, const uint32_t *base, ptrdiff_t bstride, size_t vl, int domain) {
  return __riscv_vlsseg6e32_v_u32m1x6_m_ntl(mask, base, bstride, vl, __RISCV_NTLH_ALL_PRIVATE);
}

