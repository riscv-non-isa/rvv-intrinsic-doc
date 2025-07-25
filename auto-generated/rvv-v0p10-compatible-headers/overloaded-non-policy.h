#ifndef __RVV_0P10_COMPATIBLE_HEADERS_OVERLOADED_NON_POLICY_H
#define __RVV_0P10_COMPATIBLE_HEADERS_OVERLOADED_NON_POLICY_H

// The maximum number of parameters is 20, this is held by segment load
// instructions with a NFIELD (NF) of 8. 20 is contributed by 8 vector register
// pointers passed, 1 vector mask register, 8 passthrough register for
// undisturbed policy, and 3 for address base, byte index, vl.
#define _GET_OVERRIDE(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13,  \
                      _14, _15, _16, _17, _18, _19, _20, NAME, ...)            \
  NAME

#if __has_include("riscv_vector.h")
#include <riscv_vector.h>
#endif
#ifndef __RISCV_VECTOR_H
#include_next <riscv_vector.h>
#endif

// masked functions
// masked functions
// masked functions
// masked functions
// masked functions
// masked functions
// masked functions
// masked functions
// masked functions
// masked functions
// masked functions
// masked functions
// masked functions
// masked functions
// masked functions
// masked functions
// masked functions
// masked functions
// masked functions
// masked functions
// masked functions
// masked functions
// masked functions
// masked functions
// masked functions
// masked functions
// masked functions
// masked functions
// masked functions
#define vmerge(mask, op1, op2, vl) __riscv_vmerge((op1), (op2), (mask), (vl))
// masked functions
// masked functions
// masked functions
// masked functions
// masked functions
// masked functions
// masked functions
// masked functions
// masked functions
// masked functions
// masked functions
// masked functions
// masked functions
// masked functions
// masked functions
// masked functions
// masked functions
// masked functions
// masked functions
#define vfmerge(mask, op1, op2, vl) __riscv_vfmerge((op1), (op2), (mask), (vl))
// masked functions
// masked functions
// masked functions
// masked functions
// masked functions
// masked functions
// masked functions
// masked functions
// masked functions
// masked functions
// masked functions
// masked functions
// masked functions
// masked functions
// masked functions
// masked functions
// masked functions
// masked functions
#define vcompress(mask, dest, src, vl)                                         \
  __riscv_vcompress_tu((dest), (src), (mask), (vl))
// Reinterpret between different type under the same SEW/LMUL
// Reinterpret between different SEW under the same LMUL
// masked functions
#define vse16(...)                                                             \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                7, 6, 5, __riscv_vse16, __riscv_vse16, 2, 1)                   \
  (__VA_ARGS__)
#define vse32(...)                                                             \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                7, 6, 5, __riscv_vse32, __riscv_vse32, 2, 1)                   \
  (__VA_ARGS__)
#define vse64(...)                                                             \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                7, 6, 5, __riscv_vse64, __riscv_vse64, 2, 1)                   \
  (__VA_ARGS__)
#define vse8(...)                                                              \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                7, 6, 5, __riscv_vse8, __riscv_vse8, 2, 1)                     \
  (__VA_ARGS__)
#define vsm(...) __riscv_vsm(__VA_ARGS__)
#define vsse16(...)                                                            \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                7, 6, __riscv_vsse16, __riscv_vsse16, 3, 2, 1)                 \
  (__VA_ARGS__)
#define vsse32(...)                                                            \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                7, 6, __riscv_vsse32, __riscv_vsse32, 3, 2, 1)                 \
  (__VA_ARGS__)
#define vsse64(...)                                                            \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                7, 6, __riscv_vsse64, __riscv_vsse64, 3, 2, 1)                 \
  (__VA_ARGS__)
#define vsse8(...)                                                             \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                7, 6, __riscv_vsse8, __riscv_vsse8, 3, 2, 1)                   \
  (__VA_ARGS__)
#define vloxei8(...)                                                           \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                7, 6, __riscv_vloxei8_tumu, 4, __riscv_vloxei8, 2, 1)          \
  (__VA_ARGS__)
#define vloxei16(...)                                                          \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                7, 6, __riscv_vloxei16_tumu, 4, __riscv_vloxei16, 2, 1)        \
  (__VA_ARGS__)
#define vloxei32(...)                                                          \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                7, 6, __riscv_vloxei32_tumu, 4, __riscv_vloxei32, 2, 1)        \
  (__VA_ARGS__)
#define vloxei64(...)                                                          \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                7, 6, __riscv_vloxei64_tumu, 4, __riscv_vloxei64, 2, 1)        \
  (__VA_ARGS__)
#define vluxei8(...)                                                           \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                7, 6, __riscv_vluxei8_tumu, 4, __riscv_vluxei8, 2, 1)          \
  (__VA_ARGS__)
#define vluxei16(...)                                                          \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                7, 6, __riscv_vluxei16_tumu, 4, __riscv_vluxei16, 2, 1)        \
  (__VA_ARGS__)
#define vluxei32(...)                                                          \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                7, 6, __riscv_vluxei32_tumu, 4, __riscv_vluxei32, 2, 1)        \
  (__VA_ARGS__)
#define vluxei64(...)                                                          \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                7, 6, __riscv_vluxei64_tumu, 4, __riscv_vluxei64, 2, 1)        \
  (__VA_ARGS__)
#define vsoxei8(...)                                                           \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                7, 6, __riscv_vsoxei8, __riscv_vsoxei8, 3, 2, 1)               \
  (__VA_ARGS__)
#define vsoxei16(...)                                                          \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                7, 6, __riscv_vsoxei16, __riscv_vsoxei16, 3, 2, 1)             \
  (__VA_ARGS__)
#define vsoxei32(...)                                                          \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                7, 6, __riscv_vsoxei32, __riscv_vsoxei32, 3, 2, 1)             \
  (__VA_ARGS__)
#define vsoxei64(...)                                                          \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                7, 6, __riscv_vsoxei64, __riscv_vsoxei64, 3, 2, 1)             \
  (__VA_ARGS__)
#define vsuxei8(...)                                                           \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                7, 6, __riscv_vsuxei8, __riscv_vsuxei8, 3, 2, 1)               \
  (__VA_ARGS__)
#define vsuxei16(...)                                                          \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                7, 6, __riscv_vsuxei16, __riscv_vsuxei16, 3, 2, 1)             \
  (__VA_ARGS__)
#define vsuxei32(...)                                                          \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                7, 6, __riscv_vsuxei32, __riscv_vsuxei32, 3, 2, 1)             \
  (__VA_ARGS__)
#define vsuxei64(...)                                                          \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                7, 6, __riscv_vsuxei64, __riscv_vsuxei64, 3, 2, 1)             \
  (__VA_ARGS__)
#define vsseg2e16(...)                                                         \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                7, 6, __riscv_vsseg2e16, __riscv_vsseg2e16, 3, 2, 1)           \
  (__VA_ARGS__)
#define vsseg3e16(...)                                                         \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                7, __riscv_vsseg3e16, __riscv_vsseg3e16, 4, 3, 2, 1)           \
  (__VA_ARGS__)
#define vsseg4e16(...)                                                         \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                __riscv_vsseg4e16, __riscv_vsseg4e16, 5, 4, 3, 2, 1)           \
  (__VA_ARGS__)
#define vsseg5e16(...)                                                         \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9,    \
                __riscv_vsseg5e16, __riscv_vsseg5e16, 6, 5, 4, 3, 2, 1)        \
  (__VA_ARGS__)
#define vsseg6e16(...)                                                         \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10,       \
                __riscv_vsseg6e16, __riscv_vsseg6e16, 7, 6, 5, 4, 3, 2, 1)     \
  (__VA_ARGS__)
#define vsseg7e16(...)                                                         \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11,           \
                __riscv_vsseg7e16, __riscv_vsseg7e16, 8, 7, 6, 5, 4, 3, 2, 1)  \
  (__VA_ARGS__)
#define vsseg8e16(...)                                                         \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12,               \
                __riscv_vsseg8e16, __riscv_vsseg8e16, 9, 8, 7, 6, 5, 4, 3, 2,  \
                1)                                                             \
  (__VA_ARGS__)
#define vsseg2e32(...)                                                         \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                7, 6, __riscv_vsseg2e32, __riscv_vsseg2e32, 3, 2, 1)           \
  (__VA_ARGS__)
#define vsseg3e32(...)                                                         \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                7, __riscv_vsseg3e32, __riscv_vsseg3e32, 4, 3, 2, 1)           \
  (__VA_ARGS__)
#define vsseg4e32(...)                                                         \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                __riscv_vsseg4e32, __riscv_vsseg4e32, 5, 4, 3, 2, 1)           \
  (__VA_ARGS__)
#define vsseg5e32(...)                                                         \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9,    \
                __riscv_vsseg5e32, __riscv_vsseg5e32, 6, 5, 4, 3, 2, 1)        \
  (__VA_ARGS__)
#define vsseg6e32(...)                                                         \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10,       \
                __riscv_vsseg6e32, __riscv_vsseg6e32, 7, 6, 5, 4, 3, 2, 1)     \
  (__VA_ARGS__)
#define vsseg7e32(...)                                                         \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11,           \
                __riscv_vsseg7e32, __riscv_vsseg7e32, 8, 7, 6, 5, 4, 3, 2, 1)  \
  (__VA_ARGS__)
#define vsseg8e32(...)                                                         \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12,               \
                __riscv_vsseg8e32, __riscv_vsseg8e32, 9, 8, 7, 6, 5, 4, 3, 2,  \
                1)                                                             \
  (__VA_ARGS__)
#define vsseg2e64(...)                                                         \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                7, 6, __riscv_vsseg2e64, __riscv_vsseg2e64, 3, 2, 1)           \
  (__VA_ARGS__)
#define vsseg3e64(...)                                                         \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                7, __riscv_vsseg3e64, __riscv_vsseg3e64, 4, 3, 2, 1)           \
  (__VA_ARGS__)
#define vsseg4e64(...)                                                         \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                __riscv_vsseg4e64, __riscv_vsseg4e64, 5, 4, 3, 2, 1)           \
  (__VA_ARGS__)
#define vsseg5e64(...)                                                         \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9,    \
                __riscv_vsseg5e64, __riscv_vsseg5e64, 6, 5, 4, 3, 2, 1)        \
  (__VA_ARGS__)
#define vsseg6e64(...)                                                         \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10,       \
                __riscv_vsseg6e64, __riscv_vsseg6e64, 7, 6, 5, 4, 3, 2, 1)     \
  (__VA_ARGS__)
#define vsseg7e64(...)                                                         \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11,           \
                __riscv_vsseg7e64, __riscv_vsseg7e64, 8, 7, 6, 5, 4, 3, 2, 1)  \
  (__VA_ARGS__)
#define vsseg8e64(...)                                                         \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12,               \
                __riscv_vsseg8e64, __riscv_vsseg8e64, 9, 8, 7, 6, 5, 4, 3, 2,  \
                1)                                                             \
  (__VA_ARGS__)
#define vsseg2e8(...)                                                          \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                7, 6, __riscv_vsseg2e8, __riscv_vsseg2e8, 3, 2, 1)             \
  (__VA_ARGS__)
#define vsseg3e8(...)                                                          \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                7, __riscv_vsseg3e8, __riscv_vsseg3e8, 4, 3, 2, 1)             \
  (__VA_ARGS__)
#define vsseg4e8(...)                                                          \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                __riscv_vsseg4e8, __riscv_vsseg4e8, 5, 4, 3, 2, 1)             \
  (__VA_ARGS__)
#define vsseg5e8(...)                                                          \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9,    \
                __riscv_vsseg5e8, __riscv_vsseg5e8, 6, 5, 4, 3, 2, 1)          \
  (__VA_ARGS__)
#define vsseg6e8(...)                                                          \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10,       \
                __riscv_vsseg6e8, __riscv_vsseg6e8, 7, 6, 5, 4, 3, 2, 1)       \
  (__VA_ARGS__)
#define vsseg7e8(...)                                                          \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11,           \
                __riscv_vsseg7e8, __riscv_vsseg7e8, 8, 7, 6, 5, 4, 3, 2, 1)    \
  (__VA_ARGS__)
#define vsseg8e8(...)                                                          \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12,               \
                __riscv_vsseg8e8, __riscv_vsseg8e8, 9, 8, 7, 6, 5, 4, 3, 2, 1) \
  (__VA_ARGS__)
#define vssseg2e16(...)                                                        \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                7, __riscv_vssseg2e16, __riscv_vssseg2e16, 4, 3, 2, 1)         \
  (__VA_ARGS__)
#define vssseg3e16(...)                                                        \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                __riscv_vssseg3e16, __riscv_vssseg3e16, 5, 4, 3, 2, 1)         \
  (__VA_ARGS__)
#define vssseg4e16(...)                                                        \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9,    \
                __riscv_vssseg4e16, __riscv_vssseg4e16, 6, 5, 4, 3, 2, 1)      \
  (__VA_ARGS__)
#define vssseg5e16(...)                                                        \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10,       \
                __riscv_vssseg5e16, __riscv_vssseg5e16, 7, 6, 5, 4, 3, 2, 1)   \
  (__VA_ARGS__)
#define vssseg6e16(...)                                                        \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11,           \
                __riscv_vssseg6e16, __riscv_vssseg6e16, 8, 7, 6, 5, 4, 3, 2,   \
                1)                                                             \
  (__VA_ARGS__)
#define vssseg7e16(...)                                                        \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12,               \
                __riscv_vssseg7e16, __riscv_vssseg7e16, 9, 8, 7, 6, 5, 4, 3,   \
                2, 1)                                                          \
  (__VA_ARGS__)
#define vssseg8e16(...)                                                        \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13,                   \
                __riscv_vssseg8e16, __riscv_vssseg8e16, 10, 9, 8, 7, 6, 5, 4,  \
                3, 2, 1)                                                       \
  (__VA_ARGS__)
#define vssseg2e32(...)                                                        \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                7, __riscv_vssseg2e32, __riscv_vssseg2e32, 4, 3, 2, 1)         \
  (__VA_ARGS__)
#define vssseg3e32(...)                                                        \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                __riscv_vssseg3e32, __riscv_vssseg3e32, 5, 4, 3, 2, 1)         \
  (__VA_ARGS__)
#define vssseg4e32(...)                                                        \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9,    \
                __riscv_vssseg4e32, __riscv_vssseg4e32, 6, 5, 4, 3, 2, 1)      \
  (__VA_ARGS__)
#define vssseg5e32(...)                                                        \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10,       \
                __riscv_vssseg5e32, __riscv_vssseg5e32, 7, 6, 5, 4, 3, 2, 1)   \
  (__VA_ARGS__)
#define vssseg6e32(...)                                                        \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11,           \
                __riscv_vssseg6e32, __riscv_vssseg6e32, 8, 7, 6, 5, 4, 3, 2,   \
                1)                                                             \
  (__VA_ARGS__)
#define vssseg7e32(...)                                                        \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12,               \
                __riscv_vssseg7e32, __riscv_vssseg7e32, 9, 8, 7, 6, 5, 4, 3,   \
                2, 1)                                                          \
  (__VA_ARGS__)
#define vssseg8e32(...)                                                        \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13,                   \
                __riscv_vssseg8e32, __riscv_vssseg8e32, 10, 9, 8, 7, 6, 5, 4,  \
                3, 2, 1)                                                       \
  (__VA_ARGS__)
#define vssseg2e64(...)                                                        \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                7, __riscv_vssseg2e64, __riscv_vssseg2e64, 4, 3, 2, 1)         \
  (__VA_ARGS__)
#define vssseg3e64(...)                                                        \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                __riscv_vssseg3e64, __riscv_vssseg3e64, 5, 4, 3, 2, 1)         \
  (__VA_ARGS__)
#define vssseg4e64(...)                                                        \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9,    \
                __riscv_vssseg4e64, __riscv_vssseg4e64, 6, 5, 4, 3, 2, 1)      \
  (__VA_ARGS__)
#define vssseg5e64(...)                                                        \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10,       \
                __riscv_vssseg5e64, __riscv_vssseg5e64, 7, 6, 5, 4, 3, 2, 1)   \
  (__VA_ARGS__)
#define vssseg6e64(...)                                                        \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11,           \
                __riscv_vssseg6e64, __riscv_vssseg6e64, 8, 7, 6, 5, 4, 3, 2,   \
                1)                                                             \
  (__VA_ARGS__)
#define vssseg7e64(...)                                                        \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12,               \
                __riscv_vssseg7e64, __riscv_vssseg7e64, 9, 8, 7, 6, 5, 4, 3,   \
                2, 1)                                                          \
  (__VA_ARGS__)
#define vssseg8e64(...)                                                        \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13,                   \
                __riscv_vssseg8e64, __riscv_vssseg8e64, 10, 9, 8, 7, 6, 5, 4,  \
                3, 2, 1)                                                       \
  (__VA_ARGS__)
#define vssseg2e8(...)                                                         \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                7, __riscv_vssseg2e8, __riscv_vssseg2e8, 4, 3, 2, 1)           \
  (__VA_ARGS__)
#define vssseg3e8(...)                                                         \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                __riscv_vssseg3e8, __riscv_vssseg3e8, 5, 4, 3, 2, 1)           \
  (__VA_ARGS__)
#define vssseg4e8(...)                                                         \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9,    \
                __riscv_vssseg4e8, __riscv_vssseg4e8, 6, 5, 4, 3, 2, 1)        \
  (__VA_ARGS__)
#define vssseg5e8(...)                                                         \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10,       \
                __riscv_vssseg5e8, __riscv_vssseg5e8, 7, 6, 5, 4, 3, 2, 1)     \
  (__VA_ARGS__)
#define vssseg6e8(...)                                                         \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11,           \
                __riscv_vssseg6e8, __riscv_vssseg6e8, 8, 7, 6, 5, 4, 3, 2, 1)  \
  (__VA_ARGS__)
#define vssseg7e8(...)                                                         \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12,               \
                __riscv_vssseg7e8, __riscv_vssseg7e8, 9, 8, 7, 6, 5, 4, 3, 2,  \
                1)                                                             \
  (__VA_ARGS__)
#define vssseg8e8(...)                                                         \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13,                   \
                __riscv_vssseg8e8, __riscv_vssseg8e8, 10, 9, 8, 7, 6, 5, 4, 3, \
                2, 1)                                                          \
  (__VA_ARGS__)
#define vloxseg2ei8(...)                                                       \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9,    \
                __riscv_vloxseg2ei8_tumu, 7, 6, __riscv_vloxseg2ei8, 4, 3, 2,  \
                1)                                                             \
  (__VA_ARGS__)
#define vloxseg3ei8(...)                                                       \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11,           \
                __riscv_vloxseg3ei8_tumu, 9, 8, 7, __riscv_vloxseg3ei8, 5, 4,  \
                3, 2, 1)                                                       \
  (__VA_ARGS__)
#define vloxseg4ei8(...)                                                       \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13,                   \
                __riscv_vloxseg4ei8_tumu, 11, 10, 9, 8, __riscv_vloxseg4ei8,   \
                6, 5, 4, 3, 2, 1)                                              \
  (__VA_ARGS__)
#define vloxseg5ei8(...)                                                       \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, __riscv_vloxseg5ei8_tumu, \
                13, 12, 11, 10, 9, __riscv_vloxseg5ei8, 7, 6, 5, 4, 3, 2, 1)   \
  (__VA_ARGS__)
#define vloxseg6ei8(...)                                                       \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, __riscv_vloxseg6ei8_tumu, 15, 14, \
                13, 12, 11, 10, __riscv_vloxseg6ei8, 8, 7, 6, 5, 4, 3, 2, 1)   \
  (__VA_ARGS__)
#define vloxseg7ei8(...)                                                       \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, __riscv_vloxseg7ei8_tumu, 17, 16, 15, 14, \
                13, 12, 11, __riscv_vloxseg7ei8, 9, 8, 7, 6, 5, 4, 3, 2, 1)    \
  (__VA_ARGS__)
#define vloxseg8ei8(...)                                                       \
  _GET_OVERRIDE(__VA_ARGS__, __riscv_vloxseg8ei8_tumu, 19, 18, 17, 16, 15, 14, \
                13, 12, __riscv_vloxseg8ei8, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1)    \
  (__VA_ARGS__)
#define vloxseg2ei16(...)                                                      \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9,    \
                __riscv_vloxseg2ei16_tumu, 7, 6, __riscv_vloxseg2ei16, 4, 3,   \
                2, 1)                                                          \
  (__VA_ARGS__)
#define vloxseg3ei16(...)                                                      \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11,           \
                __riscv_vloxseg3ei16_tumu, 9, 8, 7, __riscv_vloxseg3ei16, 5,   \
                4, 3, 2, 1)                                                    \
  (__VA_ARGS__)
#define vloxseg4ei16(...)                                                      \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13,                   \
                __riscv_vloxseg4ei16_tumu, 11, 10, 9, 8, __riscv_vloxseg4ei16, \
                6, 5, 4, 3, 2, 1)                                              \
  (__VA_ARGS__)
#define vloxseg5ei16(...)                                                      \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15,                           \
                __riscv_vloxseg5ei16_tumu, 13, 12, 11, 10, 9,                  \
                __riscv_vloxseg5ei16, 7, 6, 5, 4, 3, 2, 1)                     \
  (__VA_ARGS__)
#define vloxseg6ei16(...)                                                      \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, __riscv_vloxseg6ei16_tumu, 15,    \
                14, 13, 12, 11, 10, __riscv_vloxseg6ei16, 8, 7, 6, 5, 4, 3, 2, \
                1)                                                             \
  (__VA_ARGS__)
#define vloxseg7ei16(...)                                                      \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, __riscv_vloxseg7ei16_tumu, 17, 16, 15,    \
                14, 13, 12, 11, __riscv_vloxseg7ei16, 9, 8, 7, 6, 5, 4, 3, 2,  \
                1)                                                             \
  (__VA_ARGS__)
#define vloxseg8ei16(...)                                                      \
  _GET_OVERRIDE(__VA_ARGS__, __riscv_vloxseg8ei16_tumu, 19, 18, 17, 16, 15,    \
                14, 13, 12, __riscv_vloxseg8ei16, 10, 9, 8, 7, 6, 5, 4, 3, 2,  \
                1)                                                             \
  (__VA_ARGS__)
#define vloxseg2ei32(...)                                                      \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9,    \
                __riscv_vloxseg2ei32_tumu, 7, 6, __riscv_vloxseg2ei32, 4, 3,   \
                2, 1)                                                          \
  (__VA_ARGS__)
#define vloxseg3ei32(...)                                                      \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11,           \
                __riscv_vloxseg3ei32_tumu, 9, 8, 7, __riscv_vloxseg3ei32, 5,   \
                4, 3, 2, 1)                                                    \
  (__VA_ARGS__)
#define vloxseg4ei32(...)                                                      \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13,                   \
                __riscv_vloxseg4ei32_tumu, 11, 10, 9, 8, __riscv_vloxseg4ei32, \
                6, 5, 4, 3, 2, 1)                                              \
  (__VA_ARGS__)
#define vloxseg5ei32(...)                                                      \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15,                           \
                __riscv_vloxseg5ei32_tumu, 13, 12, 11, 10, 9,                  \
                __riscv_vloxseg5ei32, 7, 6, 5, 4, 3, 2, 1)                     \
  (__VA_ARGS__)
#define vloxseg6ei32(...)                                                      \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, __riscv_vloxseg6ei32_tumu, 15,    \
                14, 13, 12, 11, 10, __riscv_vloxseg6ei32, 8, 7, 6, 5, 4, 3, 2, \
                1)                                                             \
  (__VA_ARGS__)
#define vloxseg7ei32(...)                                                      \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, __riscv_vloxseg7ei32_tumu, 17, 16, 15,    \
                14, 13, 12, 11, __riscv_vloxseg7ei32, 9, 8, 7, 6, 5, 4, 3, 2,  \
                1)                                                             \
  (__VA_ARGS__)
#define vloxseg8ei32(...)                                                      \
  _GET_OVERRIDE(__VA_ARGS__, __riscv_vloxseg8ei32_tumu, 19, 18, 17, 16, 15,    \
                14, 13, 12, __riscv_vloxseg8ei32, 10, 9, 8, 7, 6, 5, 4, 3, 2,  \
                1)                                                             \
  (__VA_ARGS__)
#define vloxseg2ei64(...)                                                      \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9,    \
                __riscv_vloxseg2ei64_tumu, 7, 6, __riscv_vloxseg2ei64, 4, 3,   \
                2, 1)                                                          \
  (__VA_ARGS__)
#define vloxseg3ei64(...)                                                      \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11,           \
                __riscv_vloxseg3ei64_tumu, 9, 8, 7, __riscv_vloxseg3ei64, 5,   \
                4, 3, 2, 1)                                                    \
  (__VA_ARGS__)
#define vloxseg4ei64(...)                                                      \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13,                   \
                __riscv_vloxseg4ei64_tumu, 11, 10, 9, 8, __riscv_vloxseg4ei64, \
                6, 5, 4, 3, 2, 1)                                              \
  (__VA_ARGS__)
#define vloxseg5ei64(...)                                                      \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15,                           \
                __riscv_vloxseg5ei64_tumu, 13, 12, 11, 10, 9,                  \
                __riscv_vloxseg5ei64, 7, 6, 5, 4, 3, 2, 1)                     \
  (__VA_ARGS__)
#define vloxseg6ei64(...)                                                      \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, __riscv_vloxseg6ei64_tumu, 15,    \
                14, 13, 12, 11, 10, __riscv_vloxseg6ei64, 8, 7, 6, 5, 4, 3, 2, \
                1)                                                             \
  (__VA_ARGS__)
#define vloxseg7ei64(...)                                                      \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, __riscv_vloxseg7ei64_tumu, 17, 16, 15,    \
                14, 13, 12, 11, __riscv_vloxseg7ei64, 9, 8, 7, 6, 5, 4, 3, 2,  \
                1)                                                             \
  (__VA_ARGS__)
#define vloxseg8ei64(...)                                                      \
  _GET_OVERRIDE(__VA_ARGS__, __riscv_vloxseg8ei64_tumu, 19, 18, 17, 16, 15,    \
                14, 13, 12, __riscv_vloxseg8ei64, 10, 9, 8, 7, 6, 5, 4, 3, 2,  \
                1)                                                             \
  (__VA_ARGS__)
#define vluxseg2ei8(...)                                                       \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9,    \
                __riscv_vluxseg2ei8_tumu, 7, 6, __riscv_vluxseg2ei8, 4, 3, 2,  \
                1)                                                             \
  (__VA_ARGS__)
#define vluxseg3ei8(...)                                                       \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11,           \
                __riscv_vluxseg3ei8_tumu, 9, 8, 7, __riscv_vluxseg3ei8, 5, 4,  \
                3, 2, 1)                                                       \
  (__VA_ARGS__)
#define vluxseg4ei8(...)                                                       \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13,                   \
                __riscv_vluxseg4ei8_tumu, 11, 10, 9, 8, __riscv_vluxseg4ei8,   \
                6, 5, 4, 3, 2, 1)                                              \
  (__VA_ARGS__)
#define vluxseg5ei8(...)                                                       \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, __riscv_vluxseg5ei8_tumu, \
                13, 12, 11, 10, 9, __riscv_vluxseg5ei8, 7, 6, 5, 4, 3, 2, 1)   \
  (__VA_ARGS__)
#define vluxseg6ei8(...)                                                       \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, __riscv_vluxseg6ei8_tumu, 15, 14, \
                13, 12, 11, 10, __riscv_vluxseg6ei8, 8, 7, 6, 5, 4, 3, 2, 1)   \
  (__VA_ARGS__)
#define vluxseg7ei8(...)                                                       \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, __riscv_vluxseg7ei8_tumu, 17, 16, 15, 14, \
                13, 12, 11, __riscv_vluxseg7ei8, 9, 8, 7, 6, 5, 4, 3, 2, 1)    \
  (__VA_ARGS__)
#define vluxseg8ei8(...)                                                       \
  _GET_OVERRIDE(__VA_ARGS__, __riscv_vluxseg8ei8_tumu, 19, 18, 17, 16, 15, 14, \
                13, 12, __riscv_vluxseg8ei8, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1)    \
  (__VA_ARGS__)
#define vluxseg2ei16(...)                                                      \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9,    \
                __riscv_vluxseg2ei16_tumu, 7, 6, __riscv_vluxseg2ei16, 4, 3,   \
                2, 1)                                                          \
  (__VA_ARGS__)
#define vluxseg3ei16(...)                                                      \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11,           \
                __riscv_vluxseg3ei16_tumu, 9, 8, 7, __riscv_vluxseg3ei16, 5,   \
                4, 3, 2, 1)                                                    \
  (__VA_ARGS__)
#define vluxseg4ei16(...)                                                      \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13,                   \
                __riscv_vluxseg4ei16_tumu, 11, 10, 9, 8, __riscv_vluxseg4ei16, \
                6, 5, 4, 3, 2, 1)                                              \
  (__VA_ARGS__)
#define vluxseg5ei16(...)                                                      \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15,                           \
                __riscv_vluxseg5ei16_tumu, 13, 12, 11, 10, 9,                  \
                __riscv_vluxseg5ei16, 7, 6, 5, 4, 3, 2, 1)                     \
  (__VA_ARGS__)
#define vluxseg6ei16(...)                                                      \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, __riscv_vluxseg6ei16_tumu, 15,    \
                14, 13, 12, 11, 10, __riscv_vluxseg6ei16, 8, 7, 6, 5, 4, 3, 2, \
                1)                                                             \
  (__VA_ARGS__)
#define vluxseg7ei16(...)                                                      \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, __riscv_vluxseg7ei16_tumu, 17, 16, 15,    \
                14, 13, 12, 11, __riscv_vluxseg7ei16, 9, 8, 7, 6, 5, 4, 3, 2,  \
                1)                                                             \
  (__VA_ARGS__)
#define vluxseg8ei16(...)                                                      \
  _GET_OVERRIDE(__VA_ARGS__, __riscv_vluxseg8ei16_tumu, 19, 18, 17, 16, 15,    \
                14, 13, 12, __riscv_vluxseg8ei16, 10, 9, 8, 7, 6, 5, 4, 3, 2,  \
                1)                                                             \
  (__VA_ARGS__)
#define vluxseg2ei32(...)                                                      \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9,    \
                __riscv_vluxseg2ei32_tumu, 7, 6, __riscv_vluxseg2ei32, 4, 3,   \
                2, 1)                                                          \
  (__VA_ARGS__)
#define vluxseg3ei32(...)                                                      \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11,           \
                __riscv_vluxseg3ei32_tumu, 9, 8, 7, __riscv_vluxseg3ei32, 5,   \
                4, 3, 2, 1)                                                    \
  (__VA_ARGS__)
#define vluxseg4ei32(...)                                                      \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13,                   \
                __riscv_vluxseg4ei32_tumu, 11, 10, 9, 8, __riscv_vluxseg4ei32, \
                6, 5, 4, 3, 2, 1)                                              \
  (__VA_ARGS__)
#define vluxseg5ei32(...)                                                      \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15,                           \
                __riscv_vluxseg5ei32_tumu, 13, 12, 11, 10, 9,                  \
                __riscv_vluxseg5ei32, 7, 6, 5, 4, 3, 2, 1)                     \
  (__VA_ARGS__)
#define vluxseg6ei32(...)                                                      \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, __riscv_vluxseg6ei32_tumu, 15,    \
                14, 13, 12, 11, 10, __riscv_vluxseg6ei32, 8, 7, 6, 5, 4, 3, 2, \
                1)                                                             \
  (__VA_ARGS__)
#define vluxseg7ei32(...)                                                      \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, __riscv_vluxseg7ei32_tumu, 17, 16, 15,    \
                14, 13, 12, 11, __riscv_vluxseg7ei32, 9, 8, 7, 6, 5, 4, 3, 2,  \
                1)                                                             \
  (__VA_ARGS__)
#define vluxseg8ei32(...)                                                      \
  _GET_OVERRIDE(__VA_ARGS__, __riscv_vluxseg8ei32_tumu, 19, 18, 17, 16, 15,    \
                14, 13, 12, __riscv_vluxseg8ei32, 10, 9, 8, 7, 6, 5, 4, 3, 2,  \
                1)                                                             \
  (__VA_ARGS__)
#define vluxseg2ei64(...)                                                      \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9,    \
                __riscv_vluxseg2ei64_tumu, 7, 6, __riscv_vluxseg2ei64, 4, 3,   \
                2, 1)                                                          \
  (__VA_ARGS__)
#define vluxseg3ei64(...)                                                      \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11,           \
                __riscv_vluxseg3ei64_tumu, 9, 8, 7, __riscv_vluxseg3ei64, 5,   \
                4, 3, 2, 1)                                                    \
  (__VA_ARGS__)
#define vluxseg4ei64(...)                                                      \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13,                   \
                __riscv_vluxseg4ei64_tumu, 11, 10, 9, 8, __riscv_vluxseg4ei64, \
                6, 5, 4, 3, 2, 1)                                              \
  (__VA_ARGS__)
#define vluxseg5ei64(...)                                                      \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15,                           \
                __riscv_vluxseg5ei64_tumu, 13, 12, 11, 10, 9,                  \
                __riscv_vluxseg5ei64, 7, 6, 5, 4, 3, 2, 1)                     \
  (__VA_ARGS__)
#define vluxseg6ei64(...)                                                      \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, __riscv_vluxseg6ei64_tumu, 15,    \
                14, 13, 12, 11, 10, __riscv_vluxseg6ei64, 8, 7, 6, 5, 4, 3, 2, \
                1)                                                             \
  (__VA_ARGS__)
#define vluxseg7ei64(...)                                                      \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, __riscv_vluxseg7ei64_tumu, 17, 16, 15,    \
                14, 13, 12, 11, __riscv_vluxseg7ei64, 9, 8, 7, 6, 5, 4, 3, 2,  \
                1)                                                             \
  (__VA_ARGS__)
#define vluxseg8ei64(...)                                                      \
  _GET_OVERRIDE(__VA_ARGS__, __riscv_vluxseg8ei64_tumu, 19, 18, 17, 16, 15,    \
                14, 13, 12, __riscv_vluxseg8ei64, 10, 9, 8, 7, 6, 5, 4, 3, 2,  \
                1)                                                             \
  (__VA_ARGS__)
#define vsoxseg2ei8(...)                                                       \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                7, __riscv_vsoxseg2ei8, __riscv_vsoxseg2ei8, 4, 3, 2, 1)       \
  (__VA_ARGS__)
#define vsoxseg3ei8(...)                                                       \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                __riscv_vsoxseg3ei8, __riscv_vsoxseg3ei8, 5, 4, 3, 2, 1)       \
  (__VA_ARGS__)
#define vsoxseg4ei8(...)                                                       \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9,    \
                __riscv_vsoxseg4ei8, __riscv_vsoxseg4ei8, 6, 5, 4, 3, 2, 1)    \
  (__VA_ARGS__)
#define vsoxseg5ei8(...)                                                       \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10,       \
                __riscv_vsoxseg5ei8, __riscv_vsoxseg5ei8, 7, 6, 5, 4, 3, 2, 1) \
  (__VA_ARGS__)
#define vsoxseg6ei8(...)                                                       \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11,           \
                __riscv_vsoxseg6ei8, __riscv_vsoxseg6ei8, 8, 7, 6, 5, 4, 3, 2, \
                1)                                                             \
  (__VA_ARGS__)
#define vsoxseg7ei8(...)                                                       \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12,               \
                __riscv_vsoxseg7ei8, __riscv_vsoxseg7ei8, 9, 8, 7, 6, 5, 4, 3, \
                2, 1)                                                          \
  (__VA_ARGS__)
#define vsoxseg8ei8(...)                                                       \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13,                   \
                __riscv_vsoxseg8ei8, __riscv_vsoxseg8ei8, 10, 9, 8, 7, 6, 5,   \
                4, 3, 2, 1)                                                    \
  (__VA_ARGS__)
#define vsoxseg2ei16(...)                                                      \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                7, __riscv_vsoxseg2ei16, __riscv_vsoxseg2ei16, 4, 3, 2, 1)     \
  (__VA_ARGS__)
#define vsoxseg3ei16(...)                                                      \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                __riscv_vsoxseg3ei16, __riscv_vsoxseg3ei16, 5, 4, 3, 2, 1)     \
  (__VA_ARGS__)
#define vsoxseg4ei16(...)                                                      \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9,    \
                __riscv_vsoxseg4ei16, __riscv_vsoxseg4ei16, 6, 5, 4, 3, 2, 1)  \
  (__VA_ARGS__)
#define vsoxseg5ei16(...)                                                      \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10,       \
                __riscv_vsoxseg5ei16, __riscv_vsoxseg5ei16, 7, 6, 5, 4, 3, 2,  \
                1)                                                             \
  (__VA_ARGS__)
#define vsoxseg6ei16(...)                                                      \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11,           \
                __riscv_vsoxseg6ei16, __riscv_vsoxseg6ei16, 8, 7, 6, 5, 4, 3,  \
                2, 1)                                                          \
  (__VA_ARGS__)
#define vsoxseg7ei16(...)                                                      \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12,               \
                __riscv_vsoxseg7ei16, __riscv_vsoxseg7ei16, 9, 8, 7, 6, 5, 4,  \
                3, 2, 1)                                                       \
  (__VA_ARGS__)
#define vsoxseg8ei16(...)                                                      \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13,                   \
                __riscv_vsoxseg8ei16, __riscv_vsoxseg8ei16, 10, 9, 8, 7, 6, 5, \
                4, 3, 2, 1)                                                    \
  (__VA_ARGS__)
#define vsoxseg2ei32(...)                                                      \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                7, __riscv_vsoxseg2ei32, __riscv_vsoxseg2ei32, 4, 3, 2, 1)     \
  (__VA_ARGS__)
#define vsoxseg3ei32(...)                                                      \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                __riscv_vsoxseg3ei32, __riscv_vsoxseg3ei32, 5, 4, 3, 2, 1)     \
  (__VA_ARGS__)
#define vsoxseg4ei32(...)                                                      \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9,    \
                __riscv_vsoxseg4ei32, __riscv_vsoxseg4ei32, 6, 5, 4, 3, 2, 1)  \
  (__VA_ARGS__)
#define vsoxseg5ei32(...)                                                      \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10,       \
                __riscv_vsoxseg5ei32, __riscv_vsoxseg5ei32, 7, 6, 5, 4, 3, 2,  \
                1)                                                             \
  (__VA_ARGS__)
#define vsoxseg6ei32(...)                                                      \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11,           \
                __riscv_vsoxseg6ei32, __riscv_vsoxseg6ei32, 8, 7, 6, 5, 4, 3,  \
                2, 1)                                                          \
  (__VA_ARGS__)
#define vsoxseg7ei32(...)                                                      \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12,               \
                __riscv_vsoxseg7ei32, __riscv_vsoxseg7ei32, 9, 8, 7, 6, 5, 4,  \
                3, 2, 1)                                                       \
  (__VA_ARGS__)
#define vsoxseg8ei32(...)                                                      \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13,                   \
                __riscv_vsoxseg8ei32, __riscv_vsoxseg8ei32, 10, 9, 8, 7, 6, 5, \
                4, 3, 2, 1)                                                    \
  (__VA_ARGS__)
#define vsoxseg2ei64(...)                                                      \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                7, __riscv_vsoxseg2ei64, __riscv_vsoxseg2ei64, 4, 3, 2, 1)     \
  (__VA_ARGS__)
#define vsoxseg3ei64(...)                                                      \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                __riscv_vsoxseg3ei64, __riscv_vsoxseg3ei64, 5, 4, 3, 2, 1)     \
  (__VA_ARGS__)
#define vsoxseg4ei64(...)                                                      \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9,    \
                __riscv_vsoxseg4ei64, __riscv_vsoxseg4ei64, 6, 5, 4, 3, 2, 1)  \
  (__VA_ARGS__)
#define vsoxseg5ei64(...)                                                      \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10,       \
                __riscv_vsoxseg5ei64, __riscv_vsoxseg5ei64, 7, 6, 5, 4, 3, 2,  \
                1)                                                             \
  (__VA_ARGS__)
#define vsoxseg6ei64(...)                                                      \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11,           \
                __riscv_vsoxseg6ei64, __riscv_vsoxseg6ei64, 8, 7, 6, 5, 4, 3,  \
                2, 1)                                                          \
  (__VA_ARGS__)
#define vsoxseg7ei64(...)                                                      \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12,               \
                __riscv_vsoxseg7ei64, __riscv_vsoxseg7ei64, 9, 8, 7, 6, 5, 4,  \
                3, 2, 1)                                                       \
  (__VA_ARGS__)
#define vsoxseg8ei64(...)                                                      \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13,                   \
                __riscv_vsoxseg8ei64, __riscv_vsoxseg8ei64, 10, 9, 8, 7, 6, 5, \
                4, 3, 2, 1)                                                    \
  (__VA_ARGS__)
#define vsuxseg2ei8(...)                                                       \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                7, __riscv_vsuxseg2ei8, __riscv_vsuxseg2ei8, 4, 3, 2, 1)       \
  (__VA_ARGS__)
#define vsuxseg3ei8(...)                                                       \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                __riscv_vsuxseg3ei8, __riscv_vsuxseg3ei8, 5, 4, 3, 2, 1)       \
  (__VA_ARGS__)
#define vsuxseg4ei8(...)                                                       \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9,    \
                __riscv_vsuxseg4ei8, __riscv_vsuxseg4ei8, 6, 5, 4, 3, 2, 1)    \
  (__VA_ARGS__)
#define vsuxseg5ei8(...)                                                       \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10,       \
                __riscv_vsuxseg5ei8, __riscv_vsuxseg5ei8, 7, 6, 5, 4, 3, 2, 1) \
  (__VA_ARGS__)
#define vsuxseg6ei8(...)                                                       \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11,           \
                __riscv_vsuxseg6ei8, __riscv_vsuxseg6ei8, 8, 7, 6, 5, 4, 3, 2, \
                1)                                                             \
  (__VA_ARGS__)
#define vsuxseg7ei8(...)                                                       \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12,               \
                __riscv_vsuxseg7ei8, __riscv_vsuxseg7ei8, 9, 8, 7, 6, 5, 4, 3, \
                2, 1)                                                          \
  (__VA_ARGS__)
#define vsuxseg8ei8(...)                                                       \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13,                   \
                __riscv_vsuxseg8ei8, __riscv_vsuxseg8ei8, 10, 9, 8, 7, 6, 5,   \
                4, 3, 2, 1)                                                    \
  (__VA_ARGS__)
#define vsuxseg2ei16(...)                                                      \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                7, __riscv_vsuxseg2ei16, __riscv_vsuxseg2ei16, 4, 3, 2, 1)     \
  (__VA_ARGS__)
#define vsuxseg3ei16(...)                                                      \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                __riscv_vsuxseg3ei16, __riscv_vsuxseg3ei16, 5, 4, 3, 2, 1)     \
  (__VA_ARGS__)
#define vsuxseg4ei16(...)                                                      \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9,    \
                __riscv_vsuxseg4ei16, __riscv_vsuxseg4ei16, 6, 5, 4, 3, 2, 1)  \
  (__VA_ARGS__)
#define vsuxseg5ei16(...)                                                      \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10,       \
                __riscv_vsuxseg5ei16, __riscv_vsuxseg5ei16, 7, 6, 5, 4, 3, 2,  \
                1)                                                             \
  (__VA_ARGS__)
#define vsuxseg6ei16(...)                                                      \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11,           \
                __riscv_vsuxseg6ei16, __riscv_vsuxseg6ei16, 8, 7, 6, 5, 4, 3,  \
                2, 1)                                                          \
  (__VA_ARGS__)
#define vsuxseg7ei16(...)                                                      \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12,               \
                __riscv_vsuxseg7ei16, __riscv_vsuxseg7ei16, 9, 8, 7, 6, 5, 4,  \
                3, 2, 1)                                                       \
  (__VA_ARGS__)
#define vsuxseg8ei16(...)                                                      \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13,                   \
                __riscv_vsuxseg8ei16, __riscv_vsuxseg8ei16, 10, 9, 8, 7, 6, 5, \
                4, 3, 2, 1)                                                    \
  (__VA_ARGS__)
#define vsuxseg2ei32(...)                                                      \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                7, __riscv_vsuxseg2ei32, __riscv_vsuxseg2ei32, 4, 3, 2, 1)     \
  (__VA_ARGS__)
#define vsuxseg3ei32(...)                                                      \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                __riscv_vsuxseg3ei32, __riscv_vsuxseg3ei32, 5, 4, 3, 2, 1)     \
  (__VA_ARGS__)
#define vsuxseg4ei32(...)                                                      \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9,    \
                __riscv_vsuxseg4ei32, __riscv_vsuxseg4ei32, 6, 5, 4, 3, 2, 1)  \
  (__VA_ARGS__)
#define vsuxseg5ei32(...)                                                      \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10,       \
                __riscv_vsuxseg5ei32, __riscv_vsuxseg5ei32, 7, 6, 5, 4, 3, 2,  \
                1)                                                             \
  (__VA_ARGS__)
#define vsuxseg6ei32(...)                                                      \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11,           \
                __riscv_vsuxseg6ei32, __riscv_vsuxseg6ei32, 8, 7, 6, 5, 4, 3,  \
                2, 1)                                                          \
  (__VA_ARGS__)
#define vsuxseg7ei32(...)                                                      \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12,               \
                __riscv_vsuxseg7ei32, __riscv_vsuxseg7ei32, 9, 8, 7, 6, 5, 4,  \
                3, 2, 1)                                                       \
  (__VA_ARGS__)
#define vsuxseg8ei32(...)                                                      \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13,                   \
                __riscv_vsuxseg8ei32, __riscv_vsuxseg8ei32, 10, 9, 8, 7, 6, 5, \
                4, 3, 2, 1)                                                    \
  (__VA_ARGS__)
#define vsuxseg2ei64(...)                                                      \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                7, __riscv_vsuxseg2ei64, __riscv_vsuxseg2ei64, 4, 3, 2, 1)     \
  (__VA_ARGS__)
#define vsuxseg3ei64(...)                                                      \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                __riscv_vsuxseg3ei64, __riscv_vsuxseg3ei64, 5, 4, 3, 2, 1)     \
  (__VA_ARGS__)
#define vsuxseg4ei64(...)                                                      \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9,    \
                __riscv_vsuxseg4ei64, __riscv_vsuxseg4ei64, 6, 5, 4, 3, 2, 1)  \
  (__VA_ARGS__)
#define vsuxseg5ei64(...)                                                      \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10,       \
                __riscv_vsuxseg5ei64, __riscv_vsuxseg5ei64, 7, 6, 5, 4, 3, 2,  \
                1)                                                             \
  (__VA_ARGS__)
#define vsuxseg6ei64(...)                                                      \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11,           \
                __riscv_vsuxseg6ei64, __riscv_vsuxseg6ei64, 8, 7, 6, 5, 4, 3,  \
                2, 1)                                                          \
  (__VA_ARGS__)
#define vsuxseg7ei64(...)                                                      \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12,               \
                __riscv_vsuxseg7ei64, __riscv_vsuxseg7ei64, 9, 8, 7, 6, 5, 4,  \
                3, 2, 1)                                                       \
  (__VA_ARGS__)
#define vsuxseg8ei64(...)                                                      \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13,                   \
                __riscv_vsuxseg8ei64, __riscv_vsuxseg8ei64, 10, 9, 8, 7, 6, 5, \
                4, 3, 2, 1)                                                    \
  (__VA_ARGS__)
#define vadd(...)                                                              \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                7, 6, __riscv_vadd_tumu, 4, __riscv_vadd, 2, 1)                \
  (__VA_ARGS__)
#define vsub(...)                                                              \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                7, 6, __riscv_vsub_tumu, 4, __riscv_vsub, 2, 1)                \
  (__VA_ARGS__)
#define vrsub(...)                                                             \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                7, 6, __riscv_vrsub_tumu, 4, __riscv_vrsub, 2, 1)              \
  (__VA_ARGS__)
#define vneg(...)                                                              \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                7, 6, 5, __riscv_vneg_tumu, 3, __riscv_vneg, 1)                \
  (__VA_ARGS__)
#define vwadd_vv(...)                                                          \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                7, 6, __riscv_vwadd_vv_tumu, 4, __riscv_vwadd_vv, 2, 1)        \
  (__VA_ARGS__)
#define vwadd_vx(...)                                                          \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                7, 6, __riscv_vwadd_vx_tumu, 4, __riscv_vwadd_vx, 2, 1)        \
  (__VA_ARGS__)
#define vwadd_wv(...)                                                          \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                7, 6, __riscv_vwadd_wv_tumu, 4, __riscv_vwadd_wv, 2, 1)        \
  (__VA_ARGS__)
#define vwadd_wx(...)                                                          \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                7, 6, __riscv_vwadd_wx_tumu, 4, __riscv_vwadd_wx, 2, 1)        \
  (__VA_ARGS__)
#define vwsub_vv(...)                                                          \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                7, 6, __riscv_vwsub_vv_tumu, 4, __riscv_vwsub_vv, 2, 1)        \
  (__VA_ARGS__)
#define vwsub_vx(...)                                                          \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                7, 6, __riscv_vwsub_vx_tumu, 4, __riscv_vwsub_vx, 2, 1)        \
  (__VA_ARGS__)
#define vwsub_wv(...)                                                          \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                7, 6, __riscv_vwsub_wv_tumu, 4, __riscv_vwsub_wv, 2, 1)        \
  (__VA_ARGS__)
#define vwsub_wx(...)                                                          \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                7, 6, __riscv_vwsub_wx_tumu, 4, __riscv_vwsub_wx, 2, 1)        \
  (__VA_ARGS__)
#define vwaddu_vv(...)                                                         \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                7, 6, __riscv_vwaddu_vv_tumu, 4, __riscv_vwaddu_vv, 2, 1)      \
  (__VA_ARGS__)
#define vwaddu_vx(...)                                                         \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                7, 6, __riscv_vwaddu_vx_tumu, 4, __riscv_vwaddu_vx, 2, 1)      \
  (__VA_ARGS__)
#define vwaddu_wv(...)                                                         \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                7, 6, __riscv_vwaddu_wv_tumu, 4, __riscv_vwaddu_wv, 2, 1)      \
  (__VA_ARGS__)
#define vwaddu_wx(...)                                                         \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                7, 6, __riscv_vwaddu_wx_tumu, 4, __riscv_vwaddu_wx, 2, 1)      \
  (__VA_ARGS__)
#define vwsubu_vv(...)                                                         \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                7, 6, __riscv_vwsubu_vv_tumu, 4, __riscv_vwsubu_vv, 2, 1)      \
  (__VA_ARGS__)
#define vwsubu_vx(...)                                                         \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                7, 6, __riscv_vwsubu_vx_tumu, 4, __riscv_vwsubu_vx, 2, 1)      \
  (__VA_ARGS__)
#define vwsubu_wv(...)                                                         \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                7, 6, __riscv_vwsubu_wv_tumu, 4, __riscv_vwsubu_wv, 2, 1)      \
  (__VA_ARGS__)
#define vwsubu_wx(...)                                                         \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                7, 6, __riscv_vwsubu_wx_tumu, 4, __riscv_vwsubu_wx, 2, 1)      \
  (__VA_ARGS__)
#define vwcvt_x(...)                                                           \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                7, 6, 5, __riscv_vwcvt_x_tumu, 3, __riscv_vwcvt_x, 1)          \
  (__VA_ARGS__)
#define vwcvtu_x(...)                                                          \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                7, 6, 5, __riscv_vwcvtu_x_tumu, 3, __riscv_vwcvtu_x, 1)        \
  (__VA_ARGS__)
#define vsext_vf2(...)                                                         \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                7, 6, 5, __riscv_vsext_vf2_tumu, 3, __riscv_vsext_vf2, 1)      \
  (__VA_ARGS__)
#define vsext_vf4(...)                                                         \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                7, 6, 5, __riscv_vsext_vf4_tumu, 3, __riscv_vsext_vf4, 1)      \
  (__VA_ARGS__)
#define vsext_vf8(...)                                                         \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                7, 6, 5, __riscv_vsext_vf8_tumu, 3, __riscv_vsext_vf8, 1)      \
  (__VA_ARGS__)
#define vzext_vf2(...)                                                         \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                7, 6, 5, __riscv_vzext_vf2_tumu, 3, __riscv_vzext_vf2, 1)      \
  (__VA_ARGS__)
#define vzext_vf4(...)                                                         \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                7, 6, 5, __riscv_vzext_vf4_tumu, 3, __riscv_vzext_vf4, 1)      \
  (__VA_ARGS__)
#define vzext_vf8(...)                                                         \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                7, 6, 5, __riscv_vzext_vf8_tumu, 3, __riscv_vzext_vf8, 1)      \
  (__VA_ARGS__)
#define vadc(...) __riscv_vadc(__VA_ARGS__)
#define vsbc(...) __riscv_vsbc(__VA_ARGS__)
#define vmadc(...) __riscv_vmadc(__VA_ARGS__)
#define vmsbc(...) __riscv_vmsbc(__VA_ARGS__)
#define vand(...)                                                              \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                7, 6, __riscv_vand_tumu, 4, __riscv_vand, 2, 1)                \
  (__VA_ARGS__)
#define vor(...)                                                               \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                7, 6, __riscv_vor_tumu, 4, __riscv_vor, 2, 1)                  \
  (__VA_ARGS__)
#define vxor(...)                                                              \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                7, 6, __riscv_vxor_tumu, 4, __riscv_vxor, 2, 1)                \
  (__VA_ARGS__)
#define vnot(...)                                                              \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                7, 6, 5, __riscv_vnot_tumu, 3, __riscv_vnot, 1)                \
  (__VA_ARGS__)
#define vsll(...)                                                              \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                7, 6, __riscv_vsll_tumu, 4, __riscv_vsll, 2, 1)                \
  (__VA_ARGS__)
#define vsra(...)                                                              \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                7, 6, __riscv_vsra_tumu, 4, __riscv_vsra, 2, 1)                \
  (__VA_ARGS__)
#define vsrl(...)                                                              \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                7, 6, __riscv_vsrl_tumu, 4, __riscv_vsrl, 2, 1)                \
  (__VA_ARGS__)
#define vnsra(...)                                                             \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                7, 6, __riscv_vnsra_tumu, 4, __riscv_vnsra, 2, 1)              \
  (__VA_ARGS__)
#define vnsrl(...)                                                             \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                7, 6, __riscv_vnsrl_tumu, 4, __riscv_vnsrl, 2, 1)              \
  (__VA_ARGS__)
#define vncvt_x(...)                                                           \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                7, 6, 5, __riscv_vncvt_x_tumu, 3, __riscv_vncvt_x, 1)          \
  (__VA_ARGS__)
#define vmseq(...)                                                             \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                7, 6, __riscv_vmseq_mu, 4, __riscv_vmseq, 2, 1)                \
  (__VA_ARGS__)
#define vmsne(...)                                                             \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                7, 6, __riscv_vmsne_mu, 4, __riscv_vmsne, 2, 1)                \
  (__VA_ARGS__)
#define vmslt(...)                                                             \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                7, 6, __riscv_vmslt_mu, 4, __riscv_vmslt, 2, 1)                \
  (__VA_ARGS__)
#define vmsle(...)                                                             \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                7, 6, __riscv_vmsle_mu, 4, __riscv_vmsle, 2, 1)                \
  (__VA_ARGS__)
#define vmsgt(...)                                                             \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                7, 6, __riscv_vmsgt_mu, 4, __riscv_vmsgt, 2, 1)                \
  (__VA_ARGS__)
#define vmsge(...)                                                             \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                7, 6, __riscv_vmsge_mu, 4, __riscv_vmsge, 2, 1)                \
  (__VA_ARGS__)
#define vmsltu(...)                                                            \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                7, 6, __riscv_vmsltu_mu, 4, __riscv_vmsltu, 2, 1)              \
  (__VA_ARGS__)
#define vmsleu(...)                                                            \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                7, 6, __riscv_vmsleu_mu, 4, __riscv_vmsleu, 2, 1)              \
  (__VA_ARGS__)
#define vmsgtu(...)                                                            \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                7, 6, __riscv_vmsgtu_mu, 4, __riscv_vmsgtu, 2, 1)              \
  (__VA_ARGS__)
#define vmsgeu(...)                                                            \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                7, 6, __riscv_vmsgeu_mu, 4, __riscv_vmsgeu, 2, 1)              \
  (__VA_ARGS__)
#define vmin(...)                                                              \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                7, 6, __riscv_vmin_tumu, 4, __riscv_vmin, 2, 1)                \
  (__VA_ARGS__)
#define vmax(...)                                                              \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                7, 6, __riscv_vmax_tumu, 4, __riscv_vmax, 2, 1)                \
  (__VA_ARGS__)
#define vminu(...)                                                             \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                7, 6, __riscv_vminu_tumu, 4, __riscv_vminu, 2, 1)              \
  (__VA_ARGS__)
#define vmaxu(...)                                                             \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                7, 6, __riscv_vmaxu_tumu, 4, __riscv_vmaxu, 2, 1)              \
  (__VA_ARGS__)
#define vmul(...)                                                              \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                7, 6, __riscv_vmul_tumu, 4, __riscv_vmul, 2, 1)                \
  (__VA_ARGS__)
#define vmulh(...)                                                             \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                7, 6, __riscv_vmulh_tumu, 4, __riscv_vmulh, 2, 1)              \
  (__VA_ARGS__)
#define vmulhsu(...)                                                           \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                7, 6, __riscv_vmulhsu_tumu, 4, __riscv_vmulhsu, 2, 1)          \
  (__VA_ARGS__)
#define vmulhu(...)                                                            \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                7, 6, __riscv_vmulhu_tumu, 4, __riscv_vmulhu, 2, 1)            \
  (__VA_ARGS__)
#define vdiv(...)                                                              \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                7, 6, __riscv_vdiv_tumu, 4, __riscv_vdiv, 2, 1)                \
  (__VA_ARGS__)
#define vrem(...)                                                              \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                7, 6, __riscv_vrem_tumu, 4, __riscv_vrem, 2, 1)                \
  (__VA_ARGS__)
#define vdivu(...)                                                             \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                7, 6, __riscv_vdivu_tumu, 4, __riscv_vdivu, 2, 1)              \
  (__VA_ARGS__)
#define vremu(...)                                                             \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                7, 6, __riscv_vremu_tumu, 4, __riscv_vremu, 2, 1)              \
  (__VA_ARGS__)
#define vwmul(...)                                                             \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                7, 6, __riscv_vwmul_tumu, 4, __riscv_vwmul, 2, 1)              \
  (__VA_ARGS__)
#define vwmulsu(...)                                                           \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                7, 6, __riscv_vwmulsu_tumu, 4, __riscv_vwmulsu, 2, 1)          \
  (__VA_ARGS__)
#define vwmulu(...)                                                            \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                7, 6, __riscv_vwmulu_tumu, 4, __riscv_vwmulu, 2, 1)            \
  (__VA_ARGS__)
#define vmacc(...)                                                             \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                7, 6, __riscv_vmacc_tumu, __riscv_vmacc_tu, 3, 2, 1)           \
  (__VA_ARGS__)
#define vnmsac(...)                                                            \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                7, 6, __riscv_vnmsac_tumu, __riscv_vnmsac_tu, 3, 2, 1)         \
  (__VA_ARGS__)
#define vmadd(...)                                                             \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                7, 6, __riscv_vmadd_tumu, __riscv_vmadd_tu, 3, 2, 1)           \
  (__VA_ARGS__)
#define vnmsub(...)                                                            \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                7, 6, __riscv_vnmsub_tumu, __riscv_vnmsub_tu, 3, 2, 1)         \
  (__VA_ARGS__)
#define vwmacc(...)                                                            \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                7, 6, __riscv_vwmacc_tumu, __riscv_vwmacc_tu, 3, 2, 1)         \
  (__VA_ARGS__)
#define vwmaccsu(...)                                                          \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                7, 6, __riscv_vwmaccsu_tumu, __riscv_vwmaccsu_tu, 3, 2, 1)     \
  (__VA_ARGS__)
#define vwmaccus(...)                                                          \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                7, 6, __riscv_vwmaccus_tumu, __riscv_vwmaccus_tu, 3, 2, 1)     \
  (__VA_ARGS__)
#define vwmaccu(...)                                                           \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                7, 6, __riscv_vwmaccu_tumu, __riscv_vwmaccu_tu, 3, 2, 1)       \
  (__VA_ARGS__)
#define vmv_v(...) __riscv_vmv_v(__VA_ARGS__)
#define vsadd(...)                                                             \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                7, 6, __riscv_vsadd_tumu, 4, __riscv_vsadd, 2, 1)              \
  (__VA_ARGS__)
#define vssub(...)                                                             \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                7, 6, __riscv_vssub_tumu, 4, __riscv_vssub, 2, 1)              \
  (__VA_ARGS__)
#define vsaddu(...)                                                            \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                7, 6, __riscv_vsaddu_tumu, 4, __riscv_vsaddu, 2, 1)            \
  (__VA_ARGS__)
#define vssubu(...)                                                            \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                7, 6, __riscv_vssubu_tumu, 4, __riscv_vssubu, 2, 1)            \
  (__VA_ARGS__)
#define vaadd(...)                                                             \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                7, 6, __riscv_vaadd_tumu, 4, __riscv_vaadd, 2, 1)              \
  (__VA_ARGS__)
#define vasub(...)                                                             \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                7, 6, __riscv_vasub_tumu, 4, __riscv_vasub, 2, 1)              \
  (__VA_ARGS__)
#define vaaddu(...)                                                            \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                7, 6, __riscv_vaaddu_tumu, 4, __riscv_vaaddu, 2, 1)            \
  (__VA_ARGS__)
#define vasubu(...)                                                            \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                7, 6, __riscv_vasubu_tumu, 4, __riscv_vasubu, 2, 1)            \
  (__VA_ARGS__)
#define vsmul(...)                                                             \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                7, 6, __riscv_vsmul_mu, 4, __riscv_vsmul, 2, 1)                \
  (__VA_ARGS__)
#define vssra(...)                                                             \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                7, 6, __riscv_vssra_tumu, 4, __riscv_vssra, 2, 1)              \
  (__VA_ARGS__)
#define vssrl(...)                                                             \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                7, 6, __riscv_vssrl_tumu, 4, __riscv_vssrl, 2, 1)              \
  (__VA_ARGS__)
#define vnclip(...)                                                            \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                7, 6, __riscv_vnclip_tumu, 4, __riscv_vnclip, 2, 1)            \
  (__VA_ARGS__)
#define vnclipu(...)                                                           \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                7, 6, __riscv_vnclipu_tumu, 4, __riscv_vnclipu, 2, 1)          \
  (__VA_ARGS__)
#define vfadd(...)                                                             \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                7, 6, __riscv_vfadd_tumu, 4, __riscv_vfadd, 2, 1)              \
  (__VA_ARGS__)
#define vfsub(...)                                                             \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                7, 6, __riscv_vfsub_tumu, 4, __riscv_vfsub, 2, 1)              \
  (__VA_ARGS__)
#define vfrsub(...)                                                            \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                7, 6, __riscv_vfrsub_tumu, 4, __riscv_vfrsub, 2, 1)            \
  (__VA_ARGS__)
#define vfneg(...)                                                             \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                7, 6, 5, __riscv_vfneg_tumu, 3, __riscv_vfneg, 1)              \
  (__VA_ARGS__)
#define vfwadd_vv(...)                                                         \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                7, 6, __riscv_vfwadd_vv_tumu, 4, __riscv_vfwadd_vv, 2, 1)      \
  (__VA_ARGS__)
#define vfwadd_vf(...)                                                         \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                7, 6, __riscv_vfwadd_vf_tumu, 4, __riscv_vfwadd_vf, 2, 1)      \
  (__VA_ARGS__)
#define vfwadd_wv(...)                                                         \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                7, 6, __riscv_vfwadd_wv_tumu, 4, __riscv_vfwadd_wv, 2, 1)      \
  (__VA_ARGS__)
#define vfwadd_wf(...)                                                         \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                7, 6, __riscv_vfwadd_wf_tumu, 4, __riscv_vfwadd_wf, 2, 1)      \
  (__VA_ARGS__)
#define vfwsub_vv(...)                                                         \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                7, 6, __riscv_vfwsub_vv_tumu, 4, __riscv_vfwsub_vv, 2, 1)      \
  (__VA_ARGS__)
#define vfwsub_vf(...)                                                         \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                7, 6, __riscv_vfwsub_vf_tumu, 4, __riscv_vfwsub_vf, 2, 1)      \
  (__VA_ARGS__)
#define vfwsub_wv(...)                                                         \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                7, 6, __riscv_vfwsub_wv_tumu, 4, __riscv_vfwsub_wv, 2, 1)      \
  (__VA_ARGS__)
#define vfwsub_wf(...)                                                         \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                7, 6, __riscv_vfwsub_wf_tumu, 4, __riscv_vfwsub_wf, 2, 1)      \
  (__VA_ARGS__)
#define vfmul(...)                                                             \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                7, 6, __riscv_vfmul_tumu, 4, __riscv_vfmul, 2, 1)              \
  (__VA_ARGS__)
#define vfdiv(...)                                                             \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                7, 6, __riscv_vfdiv_tumu, 4, __riscv_vfdiv, 2, 1)              \
  (__VA_ARGS__)
#define vfrdiv(...)                                                            \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                7, 6, __riscv_vfrdiv_tumu, 4, __riscv_vfrdiv, 2, 1)            \
  (__VA_ARGS__)
#define vfwmul(...)                                                            \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                7, 6, __riscv_vfwmul_tumu, 4, __riscv_vfwmul, 2, 1)            \
  (__VA_ARGS__)
#define vfmacc(...)                                                            \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                7, 6, __riscv_vfmacc_tumu, __riscv_vfmacc_tu, 3, 2, 1)         \
  (__VA_ARGS__)
#define vfnmacc(...)                                                           \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                7, 6, __riscv_vfnmacc_tumu, __riscv_vfnmacc_tu, 3, 2, 1)       \
  (__VA_ARGS__)
#define vfmsac(...)                                                            \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                7, 6, __riscv_vfmsac_tumu, __riscv_vfmsac_tu, 3, 2, 1)         \
  (__VA_ARGS__)
#define vfnmsac(...)                                                           \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                7, 6, __riscv_vfnmsac_tumu, __riscv_vfnmsac_tu, 3, 2, 1)       \
  (__VA_ARGS__)
#define vfmadd(...)                                                            \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                7, 6, __riscv_vfmadd_tumu, __riscv_vfmadd_tu, 3, 2, 1)         \
  (__VA_ARGS__)
#define vfnmadd(...)                                                           \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                7, 6, __riscv_vfnmadd_tumu, __riscv_vfnmadd_tu, 3, 2, 1)       \
  (__VA_ARGS__)
#define vfmsub(...)                                                            \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                7, 6, __riscv_vfmsub_tumu, __riscv_vfmsub_tu, 3, 2, 1)         \
  (__VA_ARGS__)
#define vfnmsub(...)                                                           \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                7, 6, __riscv_vfnmsub_tumu, __riscv_vfnmsub_tu, 3, 2, 1)       \
  (__VA_ARGS__)
#define vfwmacc(...)                                                           \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                7, 6, __riscv_vfwmacc_tumu, __riscv_vfwmacc_tu, 3, 2, 1)       \
  (__VA_ARGS__)
#define vfwnmacc(...)                                                          \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                7, 6, __riscv_vfwnmacc_tumu, __riscv_vfwnmacc_tu, 3, 2, 1)     \
  (__VA_ARGS__)
#define vfwmsac(...)                                                           \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                7, 6, __riscv_vfwmsac_tumu, __riscv_vfwmsac_tu, 3, 2, 1)       \
  (__VA_ARGS__)
#define vfwnmsac(...)                                                          \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                7, 6, __riscv_vfwnmsac_tumu, __riscv_vfwnmsac_tu, 3, 2, 1)     \
  (__VA_ARGS__)
#define vfsqrt(...)                                                            \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                7, 6, 5, __riscv_vfsqrt_tumu, 3, __riscv_vfsqrt, 1)            \
  (__VA_ARGS__)
#define vfrsqrt7(...)                                                          \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                7, 6, 5, __riscv_vfrsqrt7_tumu, 3, __riscv_vfrsqrt7, 1)        \
  (__VA_ARGS__)
#define vfrec7(...)                                                            \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                7, 6, 5, __riscv_vfrec7_tumu, 3, __riscv_vfrec7, 1)            \
  (__VA_ARGS__)
#define vfmin(...)                                                             \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                7, 6, __riscv_vfmin_tumu, 4, __riscv_vfmin, 2, 1)              \
  (__VA_ARGS__)
#define vfmax(...)                                                             \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                7, 6, __riscv_vfmax_tumu, 4, __riscv_vfmax, 2, 1)              \
  (__VA_ARGS__)
#define vfsgnj(...)                                                            \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                7, 6, __riscv_vfsgnj_tumu, 4, __riscv_vfsgnj, 2, 1)            \
  (__VA_ARGS__)
#define vfsgnjn(...)                                                           \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                7, 6, __riscv_vfsgnjn_tumu, 4, __riscv_vfsgnjn, 2, 1)          \
  (__VA_ARGS__)
#define vfsgnjx(...)                                                           \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                7, 6, __riscv_vfsgnjx_tumu, 4, __riscv_vfsgnjx, 2, 1)          \
  (__VA_ARGS__)
#define vfabs(...)                                                             \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                7, 6, 5, __riscv_vfabs_tumu, 3, __riscv_vfabs, 1)              \
  (__VA_ARGS__)
#define vmfeq(...)                                                             \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                7, 6, __riscv_vmfeq_mu, 4, __riscv_vmfeq, 2, 1)                \
  (__VA_ARGS__)
#define vmfne(...)                                                             \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                7, 6, __riscv_vmfne_mu, 4, __riscv_vmfne, 2, 1)                \
  (__VA_ARGS__)
#define vmflt(...)                                                             \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                7, 6, __riscv_vmflt_mu, 4, __riscv_vmflt, 2, 1)                \
  (__VA_ARGS__)
#define vmfle(...)                                                             \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                7, 6, __riscv_vmfle_mu, 4, __riscv_vmfle, 2, 1)                \
  (__VA_ARGS__)
#define vmfgt(...)                                                             \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                7, 6, __riscv_vmfgt_mu, 4, __riscv_vmfgt, 2, 1)                \
  (__VA_ARGS__)
#define vmfge(...)                                                             \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                7, 6, __riscv_vmfge_mu, 4, __riscv_vmfge, 2, 1)                \
  (__VA_ARGS__)
#define vfclass(...)                                                           \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                7, 6, 5, __riscv_vfclass_tumu, 3, __riscv_vfclass, 1)          \
  (__VA_ARGS__)
#define vfcvt_x(...)                                                           \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                7, 6, 5, __riscv_vfcvt_x_tumu, 3, __riscv_vfcvt_x, 1)          \
  (__VA_ARGS__)
#define vfcvt_rtz_x(...)                                                       \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                7, 6, 5, __riscv_vfcvt_rtz_x_tumu, 3, __riscv_vfcvt_rtz_x, 1)  \
  (__VA_ARGS__)
#define vfcvt_xu(...)                                                          \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                7, 6, 5, __riscv_vfcvt_xu_tumu, 3, __riscv_vfcvt_xu, 1)        \
  (__VA_ARGS__)
#define vfcvt_rtz_xu(...)                                                      \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                7, 6, 5, __riscv_vfcvt_rtz_xu_tumu, 3, __riscv_vfcvt_rtz_xu,   \
                1)                                                             \
  (__VA_ARGS__)
#define vfcvt_f(...)                                                           \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                7, 6, 5, __riscv_vfcvt_f_tumu, 3, __riscv_vfcvt_f, 1)          \
  (__VA_ARGS__)
#define vfwcvt_f(...)                                                          \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                7, 6, 5, __riscv_vfwcvt_f_tumu, 3, __riscv_vfwcvt_f, 1)        \
  (__VA_ARGS__)
#define vfwcvt_x(...)                                                          \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                7, 6, 5, __riscv_vfwcvt_x_tumu, 3, __riscv_vfwcvt_x, 1)        \
  (__VA_ARGS__)
#define vfwcvt_rtz_x(...)                                                      \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                7, 6, 5, __riscv_vfwcvt_rtz_x_tumu, 3, __riscv_vfwcvt_rtz_x,   \
                1)                                                             \
  (__VA_ARGS__)
#define vfwcvt_xu(...)                                                         \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                7, 6, 5, __riscv_vfwcvt_xu_tumu, 3, __riscv_vfwcvt_xu, 1)      \
  (__VA_ARGS__)
#define vfwcvt_rtz_xu(...)                                                     \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                7, 6, 5, __riscv_vfwcvt_rtz_xu_tumu, 3, __riscv_vfwcvt_rtz_xu, \
                1)                                                             \
  (__VA_ARGS__)
#define vfncvt_x(...)                                                          \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                7, 6, 5, __riscv_vfncvt_x_tumu, 3, __riscv_vfncvt_x, 1)        \
  (__VA_ARGS__)
#define vfncvt_rtz_x(...)                                                      \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                7, 6, 5, __riscv_vfncvt_rtz_x_tumu, 3, __riscv_vfncvt_rtz_x,   \
                1)                                                             \
  (__VA_ARGS__)
#define vfncvt_xu(...)                                                         \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                7, 6, 5, __riscv_vfncvt_xu_tumu, 3, __riscv_vfncvt_xu, 1)      \
  (__VA_ARGS__)
#define vfncvt_rtz_xu(...)                                                     \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                7, 6, 5, __riscv_vfncvt_rtz_xu_tumu, 3, __riscv_vfncvt_rtz_xu, \
                1)                                                             \
  (__VA_ARGS__)
#define vfncvt_f(...)                                                          \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                7, 6, 5, __riscv_vfncvt_f_tumu, 3, __riscv_vfncvt_f, 1)        \
  (__VA_ARGS__)
#define vfncvt_rod_f(...)                                                      \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                7, 6, 5, __riscv_vfncvt_rod_f_tumu, 3, __riscv_vfncvt_rod_f,   \
                1)                                                             \
  (__VA_ARGS__)
#define vredsum(...)                                                           \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                7, 6, __riscv_vredsum_tum, __riscv_vredsum_tu, 3, 2, 1)        \
  (__VA_ARGS__)
#define vredmax(...)                                                           \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                7, 6, __riscv_vredmax_tum, __riscv_vredmax_tu, 3, 2, 1)        \
  (__VA_ARGS__)
#define vredmin(...)                                                           \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                7, 6, __riscv_vredmin_tum, __riscv_vredmin_tu, 3, 2, 1)        \
  (__VA_ARGS__)
#define vredand(...)                                                           \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                7, 6, __riscv_vredand_tum, __riscv_vredand_tu, 3, 2, 1)        \
  (__VA_ARGS__)
#define vredor(...)                                                            \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                7, 6, __riscv_vredor_tum, __riscv_vredor_tu, 3, 2, 1)          \
  (__VA_ARGS__)
#define vredxor(...)                                                           \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                7, 6, __riscv_vredxor_tum, __riscv_vredxor_tu, 3, 2, 1)        \
  (__VA_ARGS__)
#define vredmaxu(...)                                                          \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                7, 6, __riscv_vredmaxu_tum, __riscv_vredmaxu_tu, 3, 2, 1)      \
  (__VA_ARGS__)
#define vredminu(...)                                                          \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                7, 6, __riscv_vredminu_tum, __riscv_vredminu_tu, 3, 2, 1)      \
  (__VA_ARGS__)
#define vwredsum(...)                                                          \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                7, 6, __riscv_vwredsum_tum, __riscv_vwredsum_tu, 3, 2, 1)      \
  (__VA_ARGS__)
#define vwredsumu(...)                                                         \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                7, 6, __riscv_vwredsumu_tum, __riscv_vwredsumu_tu, 3, 2, 1)    \
  (__VA_ARGS__)
#define vfredosum(...)                                                         \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                7, 6, __riscv_vfredosum_tum, __riscv_vfredosum_tu, 3, 2, 1)    \
  (__VA_ARGS__)
#define vfredusum(...)                                                         \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                7, 6, __riscv_vfredusum_tum, __riscv_vfredusum_tu, 3, 2, 1)    \
  (__VA_ARGS__)
#define vfredmax(...)                                                          \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                7, 6, __riscv_vfredmax_tum, __riscv_vfredmax_tu, 3, 2, 1)      \
  (__VA_ARGS__)
#define vfredmin(...)                                                          \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                7, 6, __riscv_vfredmin_tum, __riscv_vfredmin_tu, 3, 2, 1)      \
  (__VA_ARGS__)
#define vfwredosum(...)                                                        \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                7, 6, __riscv_vfwredosum_tum, __riscv_vfwredosum_tu, 3, 2, 1)  \
  (__VA_ARGS__)
#define vfwredusum(...)                                                        \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                7, 6, __riscv_vfwredusum_tum, __riscv_vfwredusum_tu, 3, 2, 1)  \
  (__VA_ARGS__)
#define vmand(...) __riscv_vmand(__VA_ARGS__)
#define vmnand(...) __riscv_vmnand(__VA_ARGS__)
#define vmandn(...) __riscv_vmandn(__VA_ARGS__)
#define vmxor(...) __riscv_vmxor(__VA_ARGS__)
#define vmor(...) __riscv_vmor(__VA_ARGS__)
#define vmnor(...) __riscv_vmnor(__VA_ARGS__)
#define vmorn(...) __riscv_vmorn(__VA_ARGS__)
#define vmxnor(...) __riscv_vmxnor(__VA_ARGS__)
#define vmmv(...) __riscv_vmmv(__VA_ARGS__)
#define vmnot(...) __riscv_vmnot(__VA_ARGS__)
#define vcpop(...)                                                             \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                7, 6, 5, 4, __riscv_vcpop, __riscv_vcpop, 1)                   \
  (__VA_ARGS__)
#define vfirst(...)                                                            \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                7, 6, 5, 4, __riscv_vfirst, __riscv_vfirst, 1)                 \
  (__VA_ARGS__)
#define vmsbf(...)                                                             \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                7, 6, 5, __riscv_vmsbf_mu, 3, __riscv_vmsbf, 1)                \
  (__VA_ARGS__)
#define vmsif(...)                                                             \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                7, 6, 5, __riscv_vmsif_mu, 3, __riscv_vmsif, 1)                \
  (__VA_ARGS__)
#define vmsof(...)                                                             \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                7, 6, 5, __riscv_vmsof_mu, 3, __riscv_vmsof, 1)                \
  (__VA_ARGS__)
#define vfmv_f(...) __riscv_vfmv_f(__VA_ARGS__)
#define vfmv_s(...) __riscv_vfmv_s_tu(__VA_ARGS__)
#define vmv_x(...) __riscv_vmv_x(__VA_ARGS__)
#define vmv_s(...) __riscv_vmv_s_tu(__VA_ARGS__)
#define vslideup(...)                                                          \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                7, 6, __riscv_vslideup_tumu, __riscv_vslideup_tu, 3, 2, 1)     \
  (__VA_ARGS__)
#define vslidedown(...)                                                        \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                7, 6, __riscv_vslidedown_tumu, __riscv_vslidedown_tu, 3, 2, 1) \
  (__VA_ARGS__)
#define vfslide1up(...)                                                        \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                7, 6, __riscv_vfslide1up_tumu, 4, __riscv_vfslide1up, 2, 1)    \
  (__VA_ARGS__)
#define vfslide1down(...)                                                      \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                7, 6, __riscv_vfslide1down_tumu, 4, __riscv_vfslide1down, 2,   \
                1)                                                             \
  (__VA_ARGS__)
#define vslide1up(...)                                                         \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                7, 6, __riscv_vslide1up_tumu, 4, __riscv_vslide1up, 2, 1)      \
  (__VA_ARGS__)
#define vslide1down(...)                                                       \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                7, 6, __riscv_vslide1down_tumu, 4, __riscv_vslide1down, 2, 1)  \
  (__VA_ARGS__)
#define vrgather(...)                                                          \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                7, 6, __riscv_vrgather_tumu, 4, __riscv_vrgather, 2, 1)        \
  (__VA_ARGS__)
#define vrgatherei16(...)                                                      \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                7, 6, __riscv_vrgatherei16_tumu, 4, __riscv_vrgatherei16, 2,   \
                1)                                                             \
  (__VA_ARGS__)
#define vreinterpret_u8mf8(...) __riscv_vreinterpret_u8mf8(__VA_ARGS__)
#define vreinterpret_u8mf4(...) __riscv_vreinterpret_u8mf4(__VA_ARGS__)
#define vreinterpret_u8mf2(...) __riscv_vreinterpret_u8mf2(__VA_ARGS__)
#define vreinterpret_u8m1(...) __riscv_vreinterpret_u8m1(__VA_ARGS__)
#define vreinterpret_u8m2(...) __riscv_vreinterpret_u8m2(__VA_ARGS__)
#define vreinterpret_u8m4(...) __riscv_vreinterpret_u8m4(__VA_ARGS__)
#define vreinterpret_u8m8(...) __riscv_vreinterpret_u8m8(__VA_ARGS__)
#define vreinterpret_i8mf8(...) __riscv_vreinterpret_i8mf8(__VA_ARGS__)
#define vreinterpret_i8mf4(...) __riscv_vreinterpret_i8mf4(__VA_ARGS__)
#define vreinterpret_i8mf2(...) __riscv_vreinterpret_i8mf2(__VA_ARGS__)
#define vreinterpret_i8m1(...) __riscv_vreinterpret_i8m1(__VA_ARGS__)
#define vreinterpret_i8m2(...) __riscv_vreinterpret_i8m2(__VA_ARGS__)
#define vreinterpret_i8m4(...) __riscv_vreinterpret_i8m4(__VA_ARGS__)
#define vreinterpret_i8m8(...) __riscv_vreinterpret_i8m8(__VA_ARGS__)
#define vreinterpret_f16mf4(...) __riscv_vreinterpret_f16mf4(__VA_ARGS__)
#define vreinterpret_f16mf2(...) __riscv_vreinterpret_f16mf2(__VA_ARGS__)
#define vreinterpret_f16m1(...) __riscv_vreinterpret_f16m1(__VA_ARGS__)
#define vreinterpret_f16m2(...) __riscv_vreinterpret_f16m2(__VA_ARGS__)
#define vreinterpret_f16m4(...) __riscv_vreinterpret_f16m4(__VA_ARGS__)
#define vreinterpret_f16m8(...) __riscv_vreinterpret_f16m8(__VA_ARGS__)
#define vreinterpret_u16mf4(...) __riscv_vreinterpret_u16mf4(__VA_ARGS__)
#define vreinterpret_u16mf2(...) __riscv_vreinterpret_u16mf2(__VA_ARGS__)
#define vreinterpret_u16m1(...) __riscv_vreinterpret_u16m1(__VA_ARGS__)
#define vreinterpret_u16m2(...) __riscv_vreinterpret_u16m2(__VA_ARGS__)
#define vreinterpret_u16m4(...) __riscv_vreinterpret_u16m4(__VA_ARGS__)
#define vreinterpret_u16m8(...) __riscv_vreinterpret_u16m8(__VA_ARGS__)
#define vreinterpret_i16mf4(...) __riscv_vreinterpret_i16mf4(__VA_ARGS__)
#define vreinterpret_i16mf2(...) __riscv_vreinterpret_i16mf2(__VA_ARGS__)
#define vreinterpret_i16m1(...) __riscv_vreinterpret_i16m1(__VA_ARGS__)
#define vreinterpret_i16m2(...) __riscv_vreinterpret_i16m2(__VA_ARGS__)
#define vreinterpret_i16m4(...) __riscv_vreinterpret_i16m4(__VA_ARGS__)
#define vreinterpret_i16m8(...) __riscv_vreinterpret_i16m8(__VA_ARGS__)
#define vreinterpret_f32mf2(...) __riscv_vreinterpret_f32mf2(__VA_ARGS__)
#define vreinterpret_f32m1(...) __riscv_vreinterpret_f32m1(__VA_ARGS__)
#define vreinterpret_f32m2(...) __riscv_vreinterpret_f32m2(__VA_ARGS__)
#define vreinterpret_f32m4(...) __riscv_vreinterpret_f32m4(__VA_ARGS__)
#define vreinterpret_f32m8(...) __riscv_vreinterpret_f32m8(__VA_ARGS__)
#define vreinterpret_u32mf2(...) __riscv_vreinterpret_u32mf2(__VA_ARGS__)
#define vreinterpret_u32m1(...) __riscv_vreinterpret_u32m1(__VA_ARGS__)
#define vreinterpret_u32m2(...) __riscv_vreinterpret_u32m2(__VA_ARGS__)
#define vreinterpret_u32m4(...) __riscv_vreinterpret_u32m4(__VA_ARGS__)
#define vreinterpret_u32m8(...) __riscv_vreinterpret_u32m8(__VA_ARGS__)
#define vreinterpret_i32mf2(...) __riscv_vreinterpret_i32mf2(__VA_ARGS__)
#define vreinterpret_i32m1(...) __riscv_vreinterpret_i32m1(__VA_ARGS__)
#define vreinterpret_i32m2(...) __riscv_vreinterpret_i32m2(__VA_ARGS__)
#define vreinterpret_i32m4(...) __riscv_vreinterpret_i32m4(__VA_ARGS__)
#define vreinterpret_i32m8(...) __riscv_vreinterpret_i32m8(__VA_ARGS__)
#define vreinterpret_f64m1(...) __riscv_vreinterpret_f64m1(__VA_ARGS__)
#define vreinterpret_f64m2(...) __riscv_vreinterpret_f64m2(__VA_ARGS__)
#define vreinterpret_f64m4(...) __riscv_vreinterpret_f64m4(__VA_ARGS__)
#define vreinterpret_f64m8(...) __riscv_vreinterpret_f64m8(__VA_ARGS__)
#define vreinterpret_u64m1(...) __riscv_vreinterpret_u64m1(__VA_ARGS__)
#define vreinterpret_u64m2(...) __riscv_vreinterpret_u64m2(__VA_ARGS__)
#define vreinterpret_u64m4(...) __riscv_vreinterpret_u64m4(__VA_ARGS__)
#define vreinterpret_u64m8(...) __riscv_vreinterpret_u64m8(__VA_ARGS__)
#define vreinterpret_i64m1(...) __riscv_vreinterpret_i64m1(__VA_ARGS__)
#define vreinterpret_i64m2(...) __riscv_vreinterpret_i64m2(__VA_ARGS__)
#define vreinterpret_i64m4(...) __riscv_vreinterpret_i64m4(__VA_ARGS__)
#define vreinterpret_i64m8(...) __riscv_vreinterpret_i64m8(__VA_ARGS__)
#define vlmul_ext_f16mf2(...) __riscv_vlmul_ext_f16mf2(__VA_ARGS__)
#define vlmul_ext_f16m1(...) __riscv_vlmul_ext_f16m1(__VA_ARGS__)
#define vlmul_ext_f16m2(...) __riscv_vlmul_ext_f16m2(__VA_ARGS__)
#define vlmul_ext_f16m4(...) __riscv_vlmul_ext_f16m4(__VA_ARGS__)
#define vlmul_ext_f16m8(...) __riscv_vlmul_ext_f16m8(__VA_ARGS__)
#define vlmul_ext_f32m1(...) __riscv_vlmul_ext_f32m1(__VA_ARGS__)
#define vlmul_ext_f32m2(...) __riscv_vlmul_ext_f32m2(__VA_ARGS__)
#define vlmul_ext_f32m4(...) __riscv_vlmul_ext_f32m4(__VA_ARGS__)
#define vlmul_ext_f32m8(...) __riscv_vlmul_ext_f32m8(__VA_ARGS__)
#define vlmul_ext_f64m2(...) __riscv_vlmul_ext_f64m2(__VA_ARGS__)
#define vlmul_ext_f64m4(...) __riscv_vlmul_ext_f64m4(__VA_ARGS__)
#define vlmul_ext_f64m8(...) __riscv_vlmul_ext_f64m8(__VA_ARGS__)
#define vlmul_ext_i8mf4(...) __riscv_vlmul_ext_i8mf4(__VA_ARGS__)
#define vlmul_ext_i8mf2(...) __riscv_vlmul_ext_i8mf2(__VA_ARGS__)
#define vlmul_ext_i8m1(...) __riscv_vlmul_ext_i8m1(__VA_ARGS__)
#define vlmul_ext_i8m2(...) __riscv_vlmul_ext_i8m2(__VA_ARGS__)
#define vlmul_ext_i8m4(...) __riscv_vlmul_ext_i8m4(__VA_ARGS__)
#define vlmul_ext_i8m8(...) __riscv_vlmul_ext_i8m8(__VA_ARGS__)
#define vlmul_ext_i16mf2(...) __riscv_vlmul_ext_i16mf2(__VA_ARGS__)
#define vlmul_ext_i16m1(...) __riscv_vlmul_ext_i16m1(__VA_ARGS__)
#define vlmul_ext_i16m2(...) __riscv_vlmul_ext_i16m2(__VA_ARGS__)
#define vlmul_ext_i16m4(...) __riscv_vlmul_ext_i16m4(__VA_ARGS__)
#define vlmul_ext_i16m8(...) __riscv_vlmul_ext_i16m8(__VA_ARGS__)
#define vlmul_ext_i32m1(...) __riscv_vlmul_ext_i32m1(__VA_ARGS__)
#define vlmul_ext_i32m2(...) __riscv_vlmul_ext_i32m2(__VA_ARGS__)
#define vlmul_ext_i32m4(...) __riscv_vlmul_ext_i32m4(__VA_ARGS__)
#define vlmul_ext_i32m8(...) __riscv_vlmul_ext_i32m8(__VA_ARGS__)
#define vlmul_ext_i64m2(...) __riscv_vlmul_ext_i64m2(__VA_ARGS__)
#define vlmul_ext_i64m4(...) __riscv_vlmul_ext_i64m4(__VA_ARGS__)
#define vlmul_ext_i64m8(...) __riscv_vlmul_ext_i64m8(__VA_ARGS__)
#define vlmul_ext_u8mf4(...) __riscv_vlmul_ext_u8mf4(__VA_ARGS__)
#define vlmul_ext_u8mf2(...) __riscv_vlmul_ext_u8mf2(__VA_ARGS__)
#define vlmul_ext_u8m1(...) __riscv_vlmul_ext_u8m1(__VA_ARGS__)
#define vlmul_ext_u8m2(...) __riscv_vlmul_ext_u8m2(__VA_ARGS__)
#define vlmul_ext_u8m4(...) __riscv_vlmul_ext_u8m4(__VA_ARGS__)
#define vlmul_ext_u8m8(...) __riscv_vlmul_ext_u8m8(__VA_ARGS__)
#define vlmul_ext_u16mf2(...) __riscv_vlmul_ext_u16mf2(__VA_ARGS__)
#define vlmul_ext_u16m1(...) __riscv_vlmul_ext_u16m1(__VA_ARGS__)
#define vlmul_ext_u16m2(...) __riscv_vlmul_ext_u16m2(__VA_ARGS__)
#define vlmul_ext_u16m4(...) __riscv_vlmul_ext_u16m4(__VA_ARGS__)
#define vlmul_ext_u16m8(...) __riscv_vlmul_ext_u16m8(__VA_ARGS__)
#define vlmul_ext_u32m1(...) __riscv_vlmul_ext_u32m1(__VA_ARGS__)
#define vlmul_ext_u32m2(...) __riscv_vlmul_ext_u32m2(__VA_ARGS__)
#define vlmul_ext_u32m4(...) __riscv_vlmul_ext_u32m4(__VA_ARGS__)
#define vlmul_ext_u32m8(...) __riscv_vlmul_ext_u32m8(__VA_ARGS__)
#define vlmul_ext_u64m2(...) __riscv_vlmul_ext_u64m2(__VA_ARGS__)
#define vlmul_ext_u64m4(...) __riscv_vlmul_ext_u64m4(__VA_ARGS__)
#define vlmul_ext_u64m8(...) __riscv_vlmul_ext_u64m8(__VA_ARGS__)
#define vlmul_trunc_f16mf4(...) __riscv_vlmul_trunc_f16mf4(__VA_ARGS__)
#define vlmul_trunc_f16mf2(...) __riscv_vlmul_trunc_f16mf2(__VA_ARGS__)
#define vlmul_trunc_f16m1(...) __riscv_vlmul_trunc_f16m1(__VA_ARGS__)
#define vlmul_trunc_f16m2(...) __riscv_vlmul_trunc_f16m2(__VA_ARGS__)
#define vlmul_trunc_f16m4(...) __riscv_vlmul_trunc_f16m4(__VA_ARGS__)
#define vlmul_trunc_f32mf2(...) __riscv_vlmul_trunc_f32mf2(__VA_ARGS__)
#define vlmul_trunc_f32m1(...) __riscv_vlmul_trunc_f32m1(__VA_ARGS__)
#define vlmul_trunc_f32m2(...) __riscv_vlmul_trunc_f32m2(__VA_ARGS__)
#define vlmul_trunc_f32m4(...) __riscv_vlmul_trunc_f32m4(__VA_ARGS__)
#define vlmul_trunc_f64m1(...) __riscv_vlmul_trunc_f64m1(__VA_ARGS__)
#define vlmul_trunc_f64m2(...) __riscv_vlmul_trunc_f64m2(__VA_ARGS__)
#define vlmul_trunc_f64m4(...) __riscv_vlmul_trunc_f64m4(__VA_ARGS__)
#define vlmul_trunc_i8mf8(...) __riscv_vlmul_trunc_i8mf8(__VA_ARGS__)
#define vlmul_trunc_i8mf4(...) __riscv_vlmul_trunc_i8mf4(__VA_ARGS__)
#define vlmul_trunc_i8mf2(...) __riscv_vlmul_trunc_i8mf2(__VA_ARGS__)
#define vlmul_trunc_i8m1(...) __riscv_vlmul_trunc_i8m1(__VA_ARGS__)
#define vlmul_trunc_i8m2(...) __riscv_vlmul_trunc_i8m2(__VA_ARGS__)
#define vlmul_trunc_i8m4(...) __riscv_vlmul_trunc_i8m4(__VA_ARGS__)
#define vlmul_trunc_i16mf4(...) __riscv_vlmul_trunc_i16mf4(__VA_ARGS__)
#define vlmul_trunc_i16mf2(...) __riscv_vlmul_trunc_i16mf2(__VA_ARGS__)
#define vlmul_trunc_i16m1(...) __riscv_vlmul_trunc_i16m1(__VA_ARGS__)
#define vlmul_trunc_i16m2(...) __riscv_vlmul_trunc_i16m2(__VA_ARGS__)
#define vlmul_trunc_i16m4(...) __riscv_vlmul_trunc_i16m4(__VA_ARGS__)
#define vlmul_trunc_i32mf2(...) __riscv_vlmul_trunc_i32mf2(__VA_ARGS__)
#define vlmul_trunc_i32m1(...) __riscv_vlmul_trunc_i32m1(__VA_ARGS__)
#define vlmul_trunc_i32m2(...) __riscv_vlmul_trunc_i32m2(__VA_ARGS__)
#define vlmul_trunc_i32m4(...) __riscv_vlmul_trunc_i32m4(__VA_ARGS__)
#define vlmul_trunc_i64m1(...) __riscv_vlmul_trunc_i64m1(__VA_ARGS__)
#define vlmul_trunc_i64m2(...) __riscv_vlmul_trunc_i64m2(__VA_ARGS__)
#define vlmul_trunc_i64m4(...) __riscv_vlmul_trunc_i64m4(__VA_ARGS__)
#define vlmul_trunc_u8mf8(...) __riscv_vlmul_trunc_u8mf8(__VA_ARGS__)
#define vlmul_trunc_u8mf4(...) __riscv_vlmul_trunc_u8mf4(__VA_ARGS__)
#define vlmul_trunc_u8mf2(...) __riscv_vlmul_trunc_u8mf2(__VA_ARGS__)
#define vlmul_trunc_u8m1(...) __riscv_vlmul_trunc_u8m1(__VA_ARGS__)
#define vlmul_trunc_u8m2(...) __riscv_vlmul_trunc_u8m2(__VA_ARGS__)
#define vlmul_trunc_u8m4(...) __riscv_vlmul_trunc_u8m4(__VA_ARGS__)
#define vlmul_trunc_u16mf4(...) __riscv_vlmul_trunc_u16mf4(__VA_ARGS__)
#define vlmul_trunc_u16mf2(...) __riscv_vlmul_trunc_u16mf2(__VA_ARGS__)
#define vlmul_trunc_u16m1(...) __riscv_vlmul_trunc_u16m1(__VA_ARGS__)
#define vlmul_trunc_u16m2(...) __riscv_vlmul_trunc_u16m2(__VA_ARGS__)
#define vlmul_trunc_u16m4(...) __riscv_vlmul_trunc_u16m4(__VA_ARGS__)
#define vlmul_trunc_u32mf2(...) __riscv_vlmul_trunc_u32mf2(__VA_ARGS__)
#define vlmul_trunc_u32m1(...) __riscv_vlmul_trunc_u32m1(__VA_ARGS__)
#define vlmul_trunc_u32m2(...) __riscv_vlmul_trunc_u32m2(__VA_ARGS__)
#define vlmul_trunc_u32m4(...) __riscv_vlmul_trunc_u32m4(__VA_ARGS__)
#define vlmul_trunc_u64m1(...) __riscv_vlmul_trunc_u64m1(__VA_ARGS__)
#define vlmul_trunc_u64m2(...) __riscv_vlmul_trunc_u64m2(__VA_ARGS__)
#define vlmul_trunc_u64m4(...) __riscv_vlmul_trunc_u64m4(__VA_ARGS__)
#define vset(...) __riscv_vset(__VA_ARGS__)
#define vget_f16m1(...) __riscv_vget_f16m1(__VA_ARGS__)
#define vget_f16m2(...) __riscv_vget_f16m2(__VA_ARGS__)
#define vget_f16m4(...) __riscv_vget_f16m4(__VA_ARGS__)
#define vget_f32m1(...) __riscv_vget_f32m1(__VA_ARGS__)
#define vget_f32m2(...) __riscv_vget_f32m2(__VA_ARGS__)
#define vget_f32m4(...) __riscv_vget_f32m4(__VA_ARGS__)
#define vget_f64m1(...) __riscv_vget_f64m1(__VA_ARGS__)
#define vget_f64m2(...) __riscv_vget_f64m2(__VA_ARGS__)
#define vget_f64m4(...) __riscv_vget_f64m4(__VA_ARGS__)
#define vget_i8m1(...) __riscv_vget_i8m1(__VA_ARGS__)
#define vget_i8m2(...) __riscv_vget_i8m2(__VA_ARGS__)
#define vget_i8m4(...) __riscv_vget_i8m4(__VA_ARGS__)
#define vget_i16m1(...) __riscv_vget_i16m1(__VA_ARGS__)
#define vget_i16m2(...) __riscv_vget_i16m2(__VA_ARGS__)
#define vget_i16m4(...) __riscv_vget_i16m4(__VA_ARGS__)
#define vget_i32m1(...) __riscv_vget_i32m1(__VA_ARGS__)
#define vget_i32m2(...) __riscv_vget_i32m2(__VA_ARGS__)
#define vget_i32m4(...) __riscv_vget_i32m4(__VA_ARGS__)
#define vget_i64m1(...) __riscv_vget_i64m1(__VA_ARGS__)
#define vget_i64m2(...) __riscv_vget_i64m2(__VA_ARGS__)
#define vget_i64m4(...) __riscv_vget_i64m4(__VA_ARGS__)
#define vget_u8m1(...) __riscv_vget_u8m1(__VA_ARGS__)
#define vget_u8m2(...) __riscv_vget_u8m2(__VA_ARGS__)
#define vget_u8m4(...) __riscv_vget_u8m4(__VA_ARGS__)
#define vget_u16m1(...) __riscv_vget_u16m1(__VA_ARGS__)
#define vget_u16m2(...) __riscv_vget_u16m2(__VA_ARGS__)
#define vget_u16m4(...) __riscv_vget_u16m4(__VA_ARGS__)
#define vget_u32m1(...) __riscv_vget_u32m1(__VA_ARGS__)
#define vget_u32m2(...) __riscv_vget_u32m2(__VA_ARGS__)
#define vget_u32m4(...) __riscv_vget_u32m4(__VA_ARGS__)
#define vget_u64m1(...) __riscv_vget_u64m1(__VA_ARGS__)
#define vget_u64m2(...) __riscv_vget_u64m2(__VA_ARGS__)
#define vget_u64m4(...) __riscv_vget_u64m4(__VA_ARGS__)
#define vqdot(...)                                                             \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                7, 6, __riscv_vqdot_tumu, __riscv_vqdot, 3, 2, 1)              \
  (__VA_ARGS__)
#define vqdotsu(...)                                                           \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                7, 6, __riscv_vqdotsu_tumu, __riscv_vqdotsu, 3, 2, 1)          \
  (__VA_ARGS__)
#define vqdotus(...)                                                           \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                7, 6, __riscv_vqdotus_tumu, __riscv_vqdotus, 3, 2, 1)          \
  (__VA_ARGS__)
#define vqdotu(...)                                                            \
  _GET_OVERRIDE(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
                7, 6, __riscv_vqdotu_tumu, __riscv_vqdotu, 3, 2, 1)            \
  (__VA_ARGS__)
#define vle16(...) __riscv_vle16_tumu(__VA_ARGS__)
#define vle32(...) __riscv_vle32_tumu(__VA_ARGS__)
#define vle64(...) __riscv_vle64_tumu(__VA_ARGS__)
#define vle8(...) __riscv_vle8_tumu(__VA_ARGS__)
#define vlse16(...) __riscv_vlse16_tumu(__VA_ARGS__)
#define vlse32(...) __riscv_vlse32_tumu(__VA_ARGS__)
#define vlse64(...) __riscv_vlse64_tumu(__VA_ARGS__)
#define vlse8(...) __riscv_vlse8_tumu(__VA_ARGS__)
#define vle16ff(...) __riscv_vle16ff_tumu(__VA_ARGS__)
#define vle32ff(...) __riscv_vle32ff_tumu(__VA_ARGS__)
#define vle64ff(...) __riscv_vle64ff_tumu(__VA_ARGS__)
#define vle8ff(...) __riscv_vle8ff_tumu(__VA_ARGS__)
#define vlseg2e16(...) __riscv_vlseg2e16_tumu(__VA_ARGS__)
#define vlseg3e16(...) __riscv_vlseg3e16_tumu(__VA_ARGS__)
#define vlseg4e16(...) __riscv_vlseg4e16_tumu(__VA_ARGS__)
#define vlseg5e16(...) __riscv_vlseg5e16_tumu(__VA_ARGS__)
#define vlseg6e16(...) __riscv_vlseg6e16_tumu(__VA_ARGS__)
#define vlseg7e16(...) __riscv_vlseg7e16_tumu(__VA_ARGS__)
#define vlseg8e16(...) __riscv_vlseg8e16_tumu(__VA_ARGS__)
#define vlseg2e32(...) __riscv_vlseg2e32_tumu(__VA_ARGS__)
#define vlseg3e32(...) __riscv_vlseg3e32_tumu(__VA_ARGS__)
#define vlseg4e32(...) __riscv_vlseg4e32_tumu(__VA_ARGS__)
#define vlseg5e32(...) __riscv_vlseg5e32_tumu(__VA_ARGS__)
#define vlseg6e32(...) __riscv_vlseg6e32_tumu(__VA_ARGS__)
#define vlseg7e32(...) __riscv_vlseg7e32_tumu(__VA_ARGS__)
#define vlseg8e32(...) __riscv_vlseg8e32_tumu(__VA_ARGS__)
#define vlseg2e64(...) __riscv_vlseg2e64_tumu(__VA_ARGS__)
#define vlseg3e64(...) __riscv_vlseg3e64_tumu(__VA_ARGS__)
#define vlseg4e64(...) __riscv_vlseg4e64_tumu(__VA_ARGS__)
#define vlseg5e64(...) __riscv_vlseg5e64_tumu(__VA_ARGS__)
#define vlseg6e64(...) __riscv_vlseg6e64_tumu(__VA_ARGS__)
#define vlseg7e64(...) __riscv_vlseg7e64_tumu(__VA_ARGS__)
#define vlseg8e64(...) __riscv_vlseg8e64_tumu(__VA_ARGS__)
#define vlseg2e16ff(...) __riscv_vlseg2e16ff_tumu(__VA_ARGS__)
#define vlseg3e16ff(...) __riscv_vlseg3e16ff_tumu(__VA_ARGS__)
#define vlseg4e16ff(...) __riscv_vlseg4e16ff_tumu(__VA_ARGS__)
#define vlseg5e16ff(...) __riscv_vlseg5e16ff_tumu(__VA_ARGS__)
#define vlseg6e16ff(...) __riscv_vlseg6e16ff_tumu(__VA_ARGS__)
#define vlseg7e16ff(...) __riscv_vlseg7e16ff_tumu(__VA_ARGS__)
#define vlseg8e16ff(...) __riscv_vlseg8e16ff_tumu(__VA_ARGS__)
#define vlseg2e32ff(...) __riscv_vlseg2e32ff_tumu(__VA_ARGS__)
#define vlseg3e32ff(...) __riscv_vlseg3e32ff_tumu(__VA_ARGS__)
#define vlseg4e32ff(...) __riscv_vlseg4e32ff_tumu(__VA_ARGS__)
#define vlseg5e32ff(...) __riscv_vlseg5e32ff_tumu(__VA_ARGS__)
#define vlseg6e32ff(...) __riscv_vlseg6e32ff_tumu(__VA_ARGS__)
#define vlseg7e32ff(...) __riscv_vlseg7e32ff_tumu(__VA_ARGS__)
#define vlseg8e32ff(...) __riscv_vlseg8e32ff_tumu(__VA_ARGS__)
#define vlseg2e64ff(...) __riscv_vlseg2e64ff_tumu(__VA_ARGS__)
#define vlseg3e64ff(...) __riscv_vlseg3e64ff_tumu(__VA_ARGS__)
#define vlseg4e64ff(...) __riscv_vlseg4e64ff_tumu(__VA_ARGS__)
#define vlseg5e64ff(...) __riscv_vlseg5e64ff_tumu(__VA_ARGS__)
#define vlseg6e64ff(...) __riscv_vlseg6e64ff_tumu(__VA_ARGS__)
#define vlseg7e64ff(...) __riscv_vlseg7e64ff_tumu(__VA_ARGS__)
#define vlseg8e64ff(...) __riscv_vlseg8e64ff_tumu(__VA_ARGS__)
#define vlseg2e8(...) __riscv_vlseg2e8_tumu(__VA_ARGS__)
#define vlseg3e8(...) __riscv_vlseg3e8_tumu(__VA_ARGS__)
#define vlseg4e8(...) __riscv_vlseg4e8_tumu(__VA_ARGS__)
#define vlseg5e8(...) __riscv_vlseg5e8_tumu(__VA_ARGS__)
#define vlseg6e8(...) __riscv_vlseg6e8_tumu(__VA_ARGS__)
#define vlseg7e8(...) __riscv_vlseg7e8_tumu(__VA_ARGS__)
#define vlseg8e8(...) __riscv_vlseg8e8_tumu(__VA_ARGS__)
#define vlseg2e8ff(...) __riscv_vlseg2e8ff_tumu(__VA_ARGS__)
#define vlseg3e8ff(...) __riscv_vlseg3e8ff_tumu(__VA_ARGS__)
#define vlseg4e8ff(...) __riscv_vlseg4e8ff_tumu(__VA_ARGS__)
#define vlseg5e8ff(...) __riscv_vlseg5e8ff_tumu(__VA_ARGS__)
#define vlseg6e8ff(...) __riscv_vlseg6e8ff_tumu(__VA_ARGS__)
#define vlseg7e8ff(...) __riscv_vlseg7e8ff_tumu(__VA_ARGS__)
#define vlseg8e8ff(...) __riscv_vlseg8e8ff_tumu(__VA_ARGS__)
#define vlsseg2e16(...) __riscv_vlsseg2e16_tumu(__VA_ARGS__)
#define vlsseg3e16(...) __riscv_vlsseg3e16_tumu(__VA_ARGS__)
#define vlsseg4e16(...) __riscv_vlsseg4e16_tumu(__VA_ARGS__)
#define vlsseg5e16(...) __riscv_vlsseg5e16_tumu(__VA_ARGS__)
#define vlsseg6e16(...) __riscv_vlsseg6e16_tumu(__VA_ARGS__)
#define vlsseg7e16(...) __riscv_vlsseg7e16_tumu(__VA_ARGS__)
#define vlsseg8e16(...) __riscv_vlsseg8e16_tumu(__VA_ARGS__)
#define vlsseg2e32(...) __riscv_vlsseg2e32_tumu(__VA_ARGS__)
#define vlsseg3e32(...) __riscv_vlsseg3e32_tumu(__VA_ARGS__)
#define vlsseg4e32(...) __riscv_vlsseg4e32_tumu(__VA_ARGS__)
#define vlsseg5e32(...) __riscv_vlsseg5e32_tumu(__VA_ARGS__)
#define vlsseg6e32(...) __riscv_vlsseg6e32_tumu(__VA_ARGS__)
#define vlsseg7e32(...) __riscv_vlsseg7e32_tumu(__VA_ARGS__)
#define vlsseg8e32(...) __riscv_vlsseg8e32_tumu(__VA_ARGS__)
#define vlsseg2e64(...) __riscv_vlsseg2e64_tumu(__VA_ARGS__)
#define vlsseg3e64(...) __riscv_vlsseg3e64_tumu(__VA_ARGS__)
#define vlsseg4e64(...) __riscv_vlsseg4e64_tumu(__VA_ARGS__)
#define vlsseg5e64(...) __riscv_vlsseg5e64_tumu(__VA_ARGS__)
#define vlsseg6e64(...) __riscv_vlsseg6e64_tumu(__VA_ARGS__)
#define vlsseg7e64(...) __riscv_vlsseg7e64_tumu(__VA_ARGS__)
#define vlsseg8e64(...) __riscv_vlsseg8e64_tumu(__VA_ARGS__)
#define vlsseg2e8(...) __riscv_vlsseg2e8_tumu(__VA_ARGS__)
#define vlsseg3e8(...) __riscv_vlsseg3e8_tumu(__VA_ARGS__)
#define vlsseg4e8(...) __riscv_vlsseg4e8_tumu(__VA_ARGS__)
#define vlsseg5e8(...) __riscv_vlsseg5e8_tumu(__VA_ARGS__)
#define vlsseg6e8(...) __riscv_vlsseg6e8_tumu(__VA_ARGS__)
#define vlsseg7e8(...) __riscv_vlsseg7e8_tumu(__VA_ARGS__)
#define vlsseg8e8(...) __riscv_vlsseg8e8_tumu(__VA_ARGS__)
#define viota(...) __riscv_viota_tumu(__VA_ARGS__)
#define vid(...) __riscv_vid_tumu(__VA_ARGS__)
#endif
