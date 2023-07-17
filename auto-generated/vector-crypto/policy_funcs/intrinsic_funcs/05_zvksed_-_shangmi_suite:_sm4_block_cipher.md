
## Zvksed - ShangMi Suite: SM4 Block Cipher:

### [Vector SM4 KeyExpansion]():

**Prototypes:**
``` C
vuint32mf2_t __riscv_vsm4k_vi_u32mf2_tu (vuint32mf2_t maskedoff, vuint32mf2_t vs2, size_t uimm, size_t vl);
vuint32m1_t __riscv_vsm4k_vi_u32m1_tu (vuint32m1_t maskedoff, vuint32m1_t vs2, size_t uimm, size_t vl);
vuint32m2_t __riscv_vsm4k_vi_u32m2_tu (vuint32m2_t maskedoff, vuint32m2_t vs2, size_t uimm, size_t vl);
vuint32m4_t __riscv_vsm4k_vi_u32m4_tu (vuint32m4_t maskedoff, vuint32m4_t vs2, size_t uimm, size_t vl);
vuint32m8_t __riscv_vsm4k_vi_u32m8_tu (vuint32m8_t maskedoff, vuint32m8_t vs2, size_t uimm, size_t vl);
```

### [Vector SM4 Rounds]():

**Prototypes:**
``` C
vuint32mf2_t __riscv_vsm4r_vv_u32mf2_tu (vuint32mf2_t vd, vuint32mf2_t vs2, size_t vl);
vuint32mf2_t __riscv_vsm4r_vs_u32mf2_tu (vuint32mf2_t vd, vuint32mf2_t vs2, size_t vl);
vuint32m1_t __riscv_vsm4r_vv_u32m1_tu (vuint32m1_t vd, vuint32m1_t vs2, size_t vl);
vuint32m1_t __riscv_vsm4r_vs_u32m1_tu (vuint32m1_t vd, vuint32m1_t vs2, size_t vl);
vuint32m2_t __riscv_vsm4r_vv_u32m2_tu (vuint32m2_t vd, vuint32m2_t vs2, size_t vl);
vuint32m2_t __riscv_vsm4r_vs_u32m2_tu (vuint32m2_t vd, vuint32m2_t vs2, size_t vl);
vuint32m4_t __riscv_vsm4r_vv_u32m4_tu (vuint32m4_t vd, vuint32m4_t vs2, size_t vl);
vuint32m4_t __riscv_vsm4r_vs_u32m4_tu (vuint32m4_t vd, vuint32m4_t vs2, size_t vl);
vuint32m8_t __riscv_vsm4r_vv_u32m8_tu (vuint32m8_t vd, vuint32m8_t vs2, size_t vl);
vuint32m8_t __riscv_vsm4r_vs_u32m8_tu (vuint32m8_t vd, vuint32m8_t vs2, size_t vl);
```
