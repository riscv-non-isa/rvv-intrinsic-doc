
## Zvksed - ShangMi Suite: SM4 Block Cipher:

### [Vector SM4 KeyExpansion]():

**Prototypes:**
``` C
vuint32mf2_t __riscv_vsm4k (vuint32mf2_t vs2, size_t uimm, size_t vl);
vuint32m1_t __riscv_vsm4k (vuint32m1_t vs2, size_t uimm, size_t vl);
vuint32m2_t __riscv_vsm4k (vuint32m2_t vs2, size_t uimm, size_t vl);
vuint32m4_t __riscv_vsm4k (vuint32m4_t vs2, size_t uimm, size_t vl);
vuint32m8_t __riscv_vsm4k (vuint32m8_t vs2, size_t uimm, size_t vl);
```

### [Vector SM4 Rounds]():

**Prototypes:**
``` C
vuint32mf2_t __riscv_vsm4r_vv (vuint32mf2_t vd, vuint32mf2_t vs2, size_t vl);
vuint32mf2_t __riscv_vsm4r_vs (vuint32mf2_t vd, vuint32mf2_t vs2, size_t vl);
vuint32m1_t __riscv_vsm4r_vs (vuint32m1_t vd, vuint32mf2_t vs2, size_t vl);
vuint32m2_t __riscv_vsm4r_vs (vuint32m2_t vd, vuint32mf2_t vs2, size_t vl);
vuint32m4_t __riscv_vsm4r_vs (vuint32m4_t vd, vuint32mf2_t vs2, size_t vl);
vuint32m8_t __riscv_vsm4r_vs (vuint32m8_t vd, vuint32mf2_t vs2, size_t vl);
vuint32m1_t __riscv_vsm4r_vv (vuint32m1_t vd, vuint32m1_t vs2, size_t vl);
vuint32m1_t __riscv_vsm4r_vs (vuint32m1_t vd, vuint32m1_t vs2, size_t vl);
vuint32m2_t __riscv_vsm4r_vs (vuint32m2_t vd, vuint32m1_t vs2, size_t vl);
vuint32m4_t __riscv_vsm4r_vs (vuint32m4_t vd, vuint32m1_t vs2, size_t vl);
vuint32m8_t __riscv_vsm4r_vs (vuint32m8_t vd, vuint32m1_t vs2, size_t vl);
vuint32m2_t __riscv_vsm4r_vv (vuint32m2_t vd, vuint32m2_t vs2, size_t vl);
vuint32m2_t __riscv_vsm4r_vs (vuint32m2_t vd, vuint32m2_t vs2, size_t vl);
vuint32m4_t __riscv_vsm4r_vs (vuint32m4_t vd, vuint32m2_t vs2, size_t vl);
vuint32m8_t __riscv_vsm4r_vs (vuint32m8_t vd, vuint32m2_t vs2, size_t vl);
vuint32m4_t __riscv_vsm4r_vv (vuint32m4_t vd, vuint32m4_t vs2, size_t vl);
vuint32m4_t __riscv_vsm4r_vs (vuint32m4_t vd, vuint32m4_t vs2, size_t vl);
vuint32m8_t __riscv_vsm4r_vs (vuint32m8_t vd, vuint32m4_t vs2, size_t vl);
vuint32m8_t __riscv_vsm4r_vv (vuint32m8_t vd, vuint32m8_t vs2, size_t vl);
vuint32m8_t __riscv_vsm4r_vs (vuint32m8_t vd, vuint32m8_t vs2, size_t vl);
```
