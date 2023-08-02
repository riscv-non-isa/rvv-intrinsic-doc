
## Zvbb - Vector Bit-manipulation used in Cryptography:

### [Vector Bit-manipulation used in Cryptography - Bitwise And-Not]():

**Prototypes:**
``` C
vuint8mf8_t __riscv_vandn_tu (vuint8mf8_t maskedoff, vuint8mf8_t vs2, vuint8mf8_t vs1, size_t vl);
vuint8mf8_t __riscv_vandn_tu (vuint8mf8_t maskedoff, vuint8mf8_t vs2, uint8_t rs1, size_t vl);
vuint8mf4_t __riscv_vandn_tu (vuint8mf4_t maskedoff, vuint8mf4_t vs2, vuint8mf4_t vs1, size_t vl);
vuint8mf4_t __riscv_vandn_tu (vuint8mf4_t maskedoff, vuint8mf4_t vs2, uint8_t rs1, size_t vl);
vuint8mf2_t __riscv_vandn_tu (vuint8mf2_t maskedoff, vuint8mf2_t vs2, vuint8mf2_t vs1, size_t vl);
vuint8mf2_t __riscv_vandn_tu (vuint8mf2_t maskedoff, vuint8mf2_t vs2, uint8_t rs1, size_t vl);
vuint8m1_t __riscv_vandn_tu (vuint8m1_t maskedoff, vuint8m1_t vs2, vuint8m1_t vs1, size_t vl);
vuint8m1_t __riscv_vandn_tu (vuint8m1_t maskedoff, vuint8m1_t vs2, uint8_t rs1, size_t vl);
vuint8m2_t __riscv_vandn_tu (vuint8m2_t maskedoff, vuint8m2_t vs2, vuint8m2_t vs1, size_t vl);
vuint8m2_t __riscv_vandn_tu (vuint8m2_t maskedoff, vuint8m2_t vs2, uint8_t rs1, size_t vl);
vuint8m4_t __riscv_vandn_tu (vuint8m4_t maskedoff, vuint8m4_t vs2, vuint8m4_t vs1, size_t vl);
vuint8m4_t __riscv_vandn_tu (vuint8m4_t maskedoff, vuint8m4_t vs2, uint8_t rs1, size_t vl);
vuint8m8_t __riscv_vandn_tu (vuint8m8_t maskedoff, vuint8m8_t vs2, vuint8m8_t vs1, size_t vl);
vuint8m8_t __riscv_vandn_tu (vuint8m8_t maskedoff, vuint8m8_t vs2, uint8_t rs1, size_t vl);
vuint16mf4_t __riscv_vandn_tu (vuint16mf4_t maskedoff, vuint16mf4_t vs2, vuint16mf4_t vs1, size_t vl);
vuint16mf4_t __riscv_vandn_tu (vuint16mf4_t maskedoff, vuint16mf4_t vs2, uint16_t rs1, size_t vl);
vuint16mf2_t __riscv_vandn_tu (vuint16mf2_t maskedoff, vuint16mf2_t vs2, vuint16mf2_t vs1, size_t vl);
vuint16mf2_t __riscv_vandn_tu (vuint16mf2_t maskedoff, vuint16mf2_t vs2, uint16_t rs1, size_t vl);
vuint16m1_t __riscv_vandn_tu (vuint16m1_t maskedoff, vuint16m1_t vs2, vuint16m1_t vs1, size_t vl);
vuint16m1_t __riscv_vandn_tu (vuint16m1_t maskedoff, vuint16m1_t vs2, uint16_t rs1, size_t vl);
vuint16m2_t __riscv_vandn_tu (vuint16m2_t maskedoff, vuint16m2_t vs2, vuint16m2_t vs1, size_t vl);
vuint16m2_t __riscv_vandn_tu (vuint16m2_t maskedoff, vuint16m2_t vs2, uint16_t rs1, size_t vl);
vuint16m4_t __riscv_vandn_tu (vuint16m4_t maskedoff, vuint16m4_t vs2, vuint16m4_t vs1, size_t vl);
vuint16m4_t __riscv_vandn_tu (vuint16m4_t maskedoff, vuint16m4_t vs2, uint16_t rs1, size_t vl);
vuint16m8_t __riscv_vandn_tu (vuint16m8_t maskedoff, vuint16m8_t vs2, vuint16m8_t vs1, size_t vl);
vuint16m8_t __riscv_vandn_tu (vuint16m8_t maskedoff, vuint16m8_t vs2, uint16_t rs1, size_t vl);
vuint32mf2_t __riscv_vandn_tu (vuint32mf2_t maskedoff, vuint32mf2_t vs2, vuint32mf2_t vs1, size_t vl);
vuint32mf2_t __riscv_vandn_tu (vuint32mf2_t maskedoff, vuint32mf2_t vs2, uint32_t rs1, size_t vl);
vuint32m1_t __riscv_vandn_tu (vuint32m1_t maskedoff, vuint32m1_t vs2, vuint32m1_t vs1, size_t vl);
vuint32m1_t __riscv_vandn_tu (vuint32m1_t maskedoff, vuint32m1_t vs2, uint32_t rs1, size_t vl);
vuint32m2_t __riscv_vandn_tu (vuint32m2_t maskedoff, vuint32m2_t vs2, vuint32m2_t vs1, size_t vl);
vuint32m2_t __riscv_vandn_tu (vuint32m2_t maskedoff, vuint32m2_t vs2, uint32_t rs1, size_t vl);
vuint32m4_t __riscv_vandn_tu (vuint32m4_t maskedoff, vuint32m4_t vs2, vuint32m4_t vs1, size_t vl);
vuint32m4_t __riscv_vandn_tu (vuint32m4_t maskedoff, vuint32m4_t vs2, uint32_t rs1, size_t vl);
vuint32m8_t __riscv_vandn_tu (vuint32m8_t maskedoff, vuint32m8_t vs2, vuint32m8_t vs1, size_t vl);
vuint32m8_t __riscv_vandn_tu (vuint32m8_t maskedoff, vuint32m8_t vs2, uint32_t rs1, size_t vl);
vuint64m1_t __riscv_vandn_tu (vuint64m1_t maskedoff, vuint64m1_t vs2, vuint64m1_t vs1, size_t vl);
vuint64m1_t __riscv_vandn_tu (vuint64m1_t maskedoff, vuint64m1_t vs2, uint64_t rs1, size_t vl);
vuint64m2_t __riscv_vandn_tu (vuint64m2_t maskedoff, vuint64m2_t vs2, vuint64m2_t vs1, size_t vl);
vuint64m2_t __riscv_vandn_tu (vuint64m2_t maskedoff, vuint64m2_t vs2, uint64_t rs1, size_t vl);
vuint64m4_t __riscv_vandn_tu (vuint64m4_t maskedoff, vuint64m4_t vs2, vuint64m4_t vs1, size_t vl);
vuint64m4_t __riscv_vandn_tu (vuint64m4_t maskedoff, vuint64m4_t vs2, uint64_t rs1, size_t vl);
vuint64m8_t __riscv_vandn_tu (vuint64m8_t maskedoff, vuint64m8_t vs2, vuint64m8_t vs1, size_t vl);
vuint64m8_t __riscv_vandn_tu (vuint64m8_t maskedoff, vuint64m8_t vs2, uint64_t rs1, size_t vl);
// masked functions
vuint8mf8_t __riscv_vandn_tum (vbool64_t mask, vuint8mf8_t maskedoff, vuint8mf8_t vs2, vuint8mf8_t vs1, size_t vl);
vuint8mf8_t __riscv_vandn_tum (vbool64_t mask, vuint8mf8_t maskedoff, vuint8mf8_t vs2, uint8_t rs1, size_t vl);
vuint8mf4_t __riscv_vandn_tum (vbool32_t mask, vuint8mf4_t maskedoff, vuint8mf4_t vs2, vuint8mf4_t vs1, size_t vl);
vuint8mf4_t __riscv_vandn_tum (vbool32_t mask, vuint8mf4_t maskedoff, vuint8mf4_t vs2, uint8_t rs1, size_t vl);
vuint8mf2_t __riscv_vandn_tum (vbool16_t mask, vuint8mf2_t maskedoff, vuint8mf2_t vs2, vuint8mf2_t vs1, size_t vl);
vuint8mf2_t __riscv_vandn_tum (vbool16_t mask, vuint8mf2_t maskedoff, vuint8mf2_t vs2, uint8_t rs1, size_t vl);
vuint8m1_t __riscv_vandn_tum (vbool8_t mask, vuint8m1_t maskedoff, vuint8m1_t vs2, vuint8m1_t vs1, size_t vl);
vuint8m1_t __riscv_vandn_tum (vbool8_t mask, vuint8m1_t maskedoff, vuint8m1_t vs2, uint8_t rs1, size_t vl);
vuint8m2_t __riscv_vandn_tum (vbool4_t mask, vuint8m2_t maskedoff, vuint8m2_t vs2, vuint8m2_t vs1, size_t vl);
vuint8m2_t __riscv_vandn_tum (vbool4_t mask, vuint8m2_t maskedoff, vuint8m2_t vs2, uint8_t rs1, size_t vl);
vuint8m4_t __riscv_vandn_tum (vbool2_t mask, vuint8m4_t maskedoff, vuint8m4_t vs2, vuint8m4_t vs1, size_t vl);
vuint8m4_t __riscv_vandn_tum (vbool2_t mask, vuint8m4_t maskedoff, vuint8m4_t vs2, uint8_t rs1, size_t vl);
vuint8m8_t __riscv_vandn_tum (vbool1_t mask, vuint8m8_t maskedoff, vuint8m8_t vs2, vuint8m8_t vs1, size_t vl);
vuint8m8_t __riscv_vandn_tum (vbool1_t mask, vuint8m8_t maskedoff, vuint8m8_t vs2, uint8_t rs1, size_t vl);
vuint16mf4_t __riscv_vandn_tum (vbool64_t mask, vuint16mf4_t maskedoff, vuint16mf4_t vs2, vuint16mf4_t vs1, size_t vl);
vuint16mf4_t __riscv_vandn_tum (vbool64_t mask, vuint16mf4_t maskedoff, vuint16mf4_t vs2, uint16_t rs1, size_t vl);
vuint16mf2_t __riscv_vandn_tum (vbool32_t mask, vuint16mf2_t maskedoff, vuint16mf2_t vs2, vuint16mf2_t vs1, size_t vl);
vuint16mf2_t __riscv_vandn_tum (vbool32_t mask, vuint16mf2_t maskedoff, vuint16mf2_t vs2, uint16_t rs1, size_t vl);
vuint16m1_t __riscv_vandn_tum (vbool16_t mask, vuint16m1_t maskedoff, vuint16m1_t vs2, vuint16m1_t vs1, size_t vl);
vuint16m1_t __riscv_vandn_tum (vbool16_t mask, vuint16m1_t maskedoff, vuint16m1_t vs2, uint16_t rs1, size_t vl);
vuint16m2_t __riscv_vandn_tum (vbool8_t mask, vuint16m2_t maskedoff, vuint16m2_t vs2, vuint16m2_t vs1, size_t vl);
vuint16m2_t __riscv_vandn_tum (vbool8_t mask, vuint16m2_t maskedoff, vuint16m2_t vs2, uint16_t rs1, size_t vl);
vuint16m4_t __riscv_vandn_tum (vbool4_t mask, vuint16m4_t maskedoff, vuint16m4_t vs2, vuint16m4_t vs1, size_t vl);
vuint16m4_t __riscv_vandn_tum (vbool4_t mask, vuint16m4_t maskedoff, vuint16m4_t vs2, uint16_t rs1, size_t vl);
vuint16m8_t __riscv_vandn_tum (vbool2_t mask, vuint16m8_t maskedoff, vuint16m8_t vs2, vuint16m8_t vs1, size_t vl);
vuint16m8_t __riscv_vandn_tum (vbool2_t mask, vuint16m8_t maskedoff, vuint16m8_t vs2, uint16_t rs1, size_t vl);
vuint32mf2_t __riscv_vandn_tum (vbool64_t mask, vuint32mf2_t maskedoff, vuint32mf2_t vs2, vuint32mf2_t vs1, size_t vl);
vuint32mf2_t __riscv_vandn_tum (vbool64_t mask, vuint32mf2_t maskedoff, vuint32mf2_t vs2, uint32_t rs1, size_t vl);
vuint32m1_t __riscv_vandn_tum (vbool32_t mask, vuint32m1_t maskedoff, vuint32m1_t vs2, vuint32m1_t vs1, size_t vl);
vuint32m1_t __riscv_vandn_tum (vbool32_t mask, vuint32m1_t maskedoff, vuint32m1_t vs2, uint32_t rs1, size_t vl);
vuint32m2_t __riscv_vandn_tum (vbool16_t mask, vuint32m2_t maskedoff, vuint32m2_t vs2, vuint32m2_t vs1, size_t vl);
vuint32m2_t __riscv_vandn_tum (vbool16_t mask, vuint32m2_t maskedoff, vuint32m2_t vs2, uint32_t rs1, size_t vl);
vuint32m4_t __riscv_vandn_tum (vbool8_t mask, vuint32m4_t maskedoff, vuint32m4_t vs2, vuint32m4_t vs1, size_t vl);
vuint32m4_t __riscv_vandn_tum (vbool8_t mask, vuint32m4_t maskedoff, vuint32m4_t vs2, uint32_t rs1, size_t vl);
vuint32m8_t __riscv_vandn_tum (vbool4_t mask, vuint32m8_t maskedoff, vuint32m8_t vs2, vuint32m8_t vs1, size_t vl);
vuint32m8_t __riscv_vandn_tum (vbool4_t mask, vuint32m8_t maskedoff, vuint32m8_t vs2, uint32_t rs1, size_t vl);
vuint64m1_t __riscv_vandn_tum (vbool64_t mask, vuint64m1_t maskedoff, vuint64m1_t vs2, vuint64m1_t vs1, size_t vl);
vuint64m1_t __riscv_vandn_tum (vbool64_t mask, vuint64m1_t maskedoff, vuint64m1_t vs2, uint64_t rs1, size_t vl);
vuint64m2_t __riscv_vandn_tum (vbool32_t mask, vuint64m2_t maskedoff, vuint64m2_t vs2, vuint64m2_t vs1, size_t vl);
vuint64m2_t __riscv_vandn_tum (vbool32_t mask, vuint64m2_t maskedoff, vuint64m2_t vs2, uint64_t rs1, size_t vl);
vuint64m4_t __riscv_vandn_tum (vbool16_t mask, vuint64m4_t maskedoff, vuint64m4_t vs2, vuint64m4_t vs1, size_t vl);
vuint64m4_t __riscv_vandn_tum (vbool16_t mask, vuint64m4_t maskedoff, vuint64m4_t vs2, uint64_t rs1, size_t vl);
vuint64m8_t __riscv_vandn_tum (vbool8_t mask, vuint64m8_t maskedoff, vuint64m8_t vs2, vuint64m8_t vs1, size_t vl);
vuint64m8_t __riscv_vandn_tum (vbool8_t mask, vuint64m8_t maskedoff, vuint64m8_t vs2, uint64_t rs1, size_t vl);
// masked functions
vuint8mf8_t __riscv_vandn_tumu (vbool64_t mask, vuint8mf8_t maskedoff, vuint8mf8_t vs2, vuint8mf8_t vs1, size_t vl);
vuint8mf8_t __riscv_vandn_tumu (vbool64_t mask, vuint8mf8_t maskedoff, vuint8mf8_t vs2, uint8_t rs1, size_t vl);
vuint8mf4_t __riscv_vandn_tumu (vbool32_t mask, vuint8mf4_t maskedoff, vuint8mf4_t vs2, vuint8mf4_t vs1, size_t vl);
vuint8mf4_t __riscv_vandn_tumu (vbool32_t mask, vuint8mf4_t maskedoff, vuint8mf4_t vs2, uint8_t rs1, size_t vl);
vuint8mf2_t __riscv_vandn_tumu (vbool16_t mask, vuint8mf2_t maskedoff, vuint8mf2_t vs2, vuint8mf2_t vs1, size_t vl);
vuint8mf2_t __riscv_vandn_tumu (vbool16_t mask, vuint8mf2_t maskedoff, vuint8mf2_t vs2, uint8_t rs1, size_t vl);
vuint8m1_t __riscv_vandn_tumu (vbool8_t mask, vuint8m1_t maskedoff, vuint8m1_t vs2, vuint8m1_t vs1, size_t vl);
vuint8m1_t __riscv_vandn_tumu (vbool8_t mask, vuint8m1_t maskedoff, vuint8m1_t vs2, uint8_t rs1, size_t vl);
vuint8m2_t __riscv_vandn_tumu (vbool4_t mask, vuint8m2_t maskedoff, vuint8m2_t vs2, vuint8m2_t vs1, size_t vl);
vuint8m2_t __riscv_vandn_tumu (vbool4_t mask, vuint8m2_t maskedoff, vuint8m2_t vs2, uint8_t rs1, size_t vl);
vuint8m4_t __riscv_vandn_tumu (vbool2_t mask, vuint8m4_t maskedoff, vuint8m4_t vs2, vuint8m4_t vs1, size_t vl);
vuint8m4_t __riscv_vandn_tumu (vbool2_t mask, vuint8m4_t maskedoff, vuint8m4_t vs2, uint8_t rs1, size_t vl);
vuint8m8_t __riscv_vandn_tumu (vbool1_t mask, vuint8m8_t maskedoff, vuint8m8_t vs2, vuint8m8_t vs1, size_t vl);
vuint8m8_t __riscv_vandn_tumu (vbool1_t mask, vuint8m8_t maskedoff, vuint8m8_t vs2, uint8_t rs1, size_t vl);
vuint16mf4_t __riscv_vandn_tumu (vbool64_t mask, vuint16mf4_t maskedoff, vuint16mf4_t vs2, vuint16mf4_t vs1, size_t vl);
vuint16mf4_t __riscv_vandn_tumu (vbool64_t mask, vuint16mf4_t maskedoff, vuint16mf4_t vs2, uint16_t rs1, size_t vl);
vuint16mf2_t __riscv_vandn_tumu (vbool32_t mask, vuint16mf2_t maskedoff, vuint16mf2_t vs2, vuint16mf2_t vs1, size_t vl);
vuint16mf2_t __riscv_vandn_tumu (vbool32_t mask, vuint16mf2_t maskedoff, vuint16mf2_t vs2, uint16_t rs1, size_t vl);
vuint16m1_t __riscv_vandn_tumu (vbool16_t mask, vuint16m1_t maskedoff, vuint16m1_t vs2, vuint16m1_t vs1, size_t vl);
vuint16m1_t __riscv_vandn_tumu (vbool16_t mask, vuint16m1_t maskedoff, vuint16m1_t vs2, uint16_t rs1, size_t vl);
vuint16m2_t __riscv_vandn_tumu (vbool8_t mask, vuint16m2_t maskedoff, vuint16m2_t vs2, vuint16m2_t vs1, size_t vl);
vuint16m2_t __riscv_vandn_tumu (vbool8_t mask, vuint16m2_t maskedoff, vuint16m2_t vs2, uint16_t rs1, size_t vl);
vuint16m4_t __riscv_vandn_tumu (vbool4_t mask, vuint16m4_t maskedoff, vuint16m4_t vs2, vuint16m4_t vs1, size_t vl);
vuint16m4_t __riscv_vandn_tumu (vbool4_t mask, vuint16m4_t maskedoff, vuint16m4_t vs2, uint16_t rs1, size_t vl);
vuint16m8_t __riscv_vandn_tumu (vbool2_t mask, vuint16m8_t maskedoff, vuint16m8_t vs2, vuint16m8_t vs1, size_t vl);
vuint16m8_t __riscv_vandn_tumu (vbool2_t mask, vuint16m8_t maskedoff, vuint16m8_t vs2, uint16_t rs1, size_t vl);
vuint32mf2_t __riscv_vandn_tumu (vbool64_t mask, vuint32mf2_t maskedoff, vuint32mf2_t vs2, vuint32mf2_t vs1, size_t vl);
vuint32mf2_t __riscv_vandn_tumu (vbool64_t mask, vuint32mf2_t maskedoff, vuint32mf2_t vs2, uint32_t rs1, size_t vl);
vuint32m1_t __riscv_vandn_tumu (vbool32_t mask, vuint32m1_t maskedoff, vuint32m1_t vs2, vuint32m1_t vs1, size_t vl);
vuint32m1_t __riscv_vandn_tumu (vbool32_t mask, vuint32m1_t maskedoff, vuint32m1_t vs2, uint32_t rs1, size_t vl);
vuint32m2_t __riscv_vandn_tumu (vbool16_t mask, vuint32m2_t maskedoff, vuint32m2_t vs2, vuint32m2_t vs1, size_t vl);
vuint32m2_t __riscv_vandn_tumu (vbool16_t mask, vuint32m2_t maskedoff, vuint32m2_t vs2, uint32_t rs1, size_t vl);
vuint32m4_t __riscv_vandn_tumu (vbool8_t mask, vuint32m4_t maskedoff, vuint32m4_t vs2, vuint32m4_t vs1, size_t vl);
vuint32m4_t __riscv_vandn_tumu (vbool8_t mask, vuint32m4_t maskedoff, vuint32m4_t vs2, uint32_t rs1, size_t vl);
vuint32m8_t __riscv_vandn_tumu (vbool4_t mask, vuint32m8_t maskedoff, vuint32m8_t vs2, vuint32m8_t vs1, size_t vl);
vuint32m8_t __riscv_vandn_tumu (vbool4_t mask, vuint32m8_t maskedoff, vuint32m8_t vs2, uint32_t rs1, size_t vl);
vuint64m1_t __riscv_vandn_tumu (vbool64_t mask, vuint64m1_t maskedoff, vuint64m1_t vs2, vuint64m1_t vs1, size_t vl);
vuint64m1_t __riscv_vandn_tumu (vbool64_t mask, vuint64m1_t maskedoff, vuint64m1_t vs2, uint64_t rs1, size_t vl);
vuint64m2_t __riscv_vandn_tumu (vbool32_t mask, vuint64m2_t maskedoff, vuint64m2_t vs2, vuint64m2_t vs1, size_t vl);
vuint64m2_t __riscv_vandn_tumu (vbool32_t mask, vuint64m2_t maskedoff, vuint64m2_t vs2, uint64_t rs1, size_t vl);
vuint64m4_t __riscv_vandn_tumu (vbool16_t mask, vuint64m4_t maskedoff, vuint64m4_t vs2, vuint64m4_t vs1, size_t vl);
vuint64m4_t __riscv_vandn_tumu (vbool16_t mask, vuint64m4_t maskedoff, vuint64m4_t vs2, uint64_t rs1, size_t vl);
vuint64m8_t __riscv_vandn_tumu (vbool8_t mask, vuint64m8_t maskedoff, vuint64m8_t vs2, vuint64m8_t vs1, size_t vl);
vuint64m8_t __riscv_vandn_tumu (vbool8_t mask, vuint64m8_t maskedoff, vuint64m8_t vs2, uint64_t rs1, size_t vl);
// masked functions
vuint8mf8_t __riscv_vandn_mu (vbool64_t mask, vuint8mf8_t maskedoff, vuint8mf8_t vs2, vuint8mf8_t vs1, size_t vl);
vuint8mf8_t __riscv_vandn_mu (vbool64_t mask, vuint8mf8_t maskedoff, vuint8mf8_t vs2, uint8_t rs1, size_t vl);
vuint8mf4_t __riscv_vandn_mu (vbool32_t mask, vuint8mf4_t maskedoff, vuint8mf4_t vs2, vuint8mf4_t vs1, size_t vl);
vuint8mf4_t __riscv_vandn_mu (vbool32_t mask, vuint8mf4_t maskedoff, vuint8mf4_t vs2, uint8_t rs1, size_t vl);
vuint8mf2_t __riscv_vandn_mu (vbool16_t mask, vuint8mf2_t maskedoff, vuint8mf2_t vs2, vuint8mf2_t vs1, size_t vl);
vuint8mf2_t __riscv_vandn_mu (vbool16_t mask, vuint8mf2_t maskedoff, vuint8mf2_t vs2, uint8_t rs1, size_t vl);
vuint8m1_t __riscv_vandn_mu (vbool8_t mask, vuint8m1_t maskedoff, vuint8m1_t vs2, vuint8m1_t vs1, size_t vl);
vuint8m1_t __riscv_vandn_mu (vbool8_t mask, vuint8m1_t maskedoff, vuint8m1_t vs2, uint8_t rs1, size_t vl);
vuint8m2_t __riscv_vandn_mu (vbool4_t mask, vuint8m2_t maskedoff, vuint8m2_t vs2, vuint8m2_t vs1, size_t vl);
vuint8m2_t __riscv_vandn_mu (vbool4_t mask, vuint8m2_t maskedoff, vuint8m2_t vs2, uint8_t rs1, size_t vl);
vuint8m4_t __riscv_vandn_mu (vbool2_t mask, vuint8m4_t maskedoff, vuint8m4_t vs2, vuint8m4_t vs1, size_t vl);
vuint8m4_t __riscv_vandn_mu (vbool2_t mask, vuint8m4_t maskedoff, vuint8m4_t vs2, uint8_t rs1, size_t vl);
vuint8m8_t __riscv_vandn_mu (vbool1_t mask, vuint8m8_t maskedoff, vuint8m8_t vs2, vuint8m8_t vs1, size_t vl);
vuint8m8_t __riscv_vandn_mu (vbool1_t mask, vuint8m8_t maskedoff, vuint8m8_t vs2, uint8_t rs1, size_t vl);
vuint16mf4_t __riscv_vandn_mu (vbool64_t mask, vuint16mf4_t maskedoff, vuint16mf4_t vs2, vuint16mf4_t vs1, size_t vl);
vuint16mf4_t __riscv_vandn_mu (vbool64_t mask, vuint16mf4_t maskedoff, vuint16mf4_t vs2, uint16_t rs1, size_t vl);
vuint16mf2_t __riscv_vandn_mu (vbool32_t mask, vuint16mf2_t maskedoff, vuint16mf2_t vs2, vuint16mf2_t vs1, size_t vl);
vuint16mf2_t __riscv_vandn_mu (vbool32_t mask, vuint16mf2_t maskedoff, vuint16mf2_t vs2, uint16_t rs1, size_t vl);
vuint16m1_t __riscv_vandn_mu (vbool16_t mask, vuint16m1_t maskedoff, vuint16m1_t vs2, vuint16m1_t vs1, size_t vl);
vuint16m1_t __riscv_vandn_mu (vbool16_t mask, vuint16m1_t maskedoff, vuint16m1_t vs2, uint16_t rs1, size_t vl);
vuint16m2_t __riscv_vandn_mu (vbool8_t mask, vuint16m2_t maskedoff, vuint16m2_t vs2, vuint16m2_t vs1, size_t vl);
vuint16m2_t __riscv_vandn_mu (vbool8_t mask, vuint16m2_t maskedoff, vuint16m2_t vs2, uint16_t rs1, size_t vl);
vuint16m4_t __riscv_vandn_mu (vbool4_t mask, vuint16m4_t maskedoff, vuint16m4_t vs2, vuint16m4_t vs1, size_t vl);
vuint16m4_t __riscv_vandn_mu (vbool4_t mask, vuint16m4_t maskedoff, vuint16m4_t vs2, uint16_t rs1, size_t vl);
vuint16m8_t __riscv_vandn_mu (vbool2_t mask, vuint16m8_t maskedoff, vuint16m8_t vs2, vuint16m8_t vs1, size_t vl);
vuint16m8_t __riscv_vandn_mu (vbool2_t mask, vuint16m8_t maskedoff, vuint16m8_t vs2, uint16_t rs1, size_t vl);
vuint32mf2_t __riscv_vandn_mu (vbool64_t mask, vuint32mf2_t maskedoff, vuint32mf2_t vs2, vuint32mf2_t vs1, size_t vl);
vuint32mf2_t __riscv_vandn_mu (vbool64_t mask, vuint32mf2_t maskedoff, vuint32mf2_t vs2, uint32_t rs1, size_t vl);
vuint32m1_t __riscv_vandn_mu (vbool32_t mask, vuint32m1_t maskedoff, vuint32m1_t vs2, vuint32m1_t vs1, size_t vl);
vuint32m1_t __riscv_vandn_mu (vbool32_t mask, vuint32m1_t maskedoff, vuint32m1_t vs2, uint32_t rs1, size_t vl);
vuint32m2_t __riscv_vandn_mu (vbool16_t mask, vuint32m2_t maskedoff, vuint32m2_t vs2, vuint32m2_t vs1, size_t vl);
vuint32m2_t __riscv_vandn_mu (vbool16_t mask, vuint32m2_t maskedoff, vuint32m2_t vs2, uint32_t rs1, size_t vl);
vuint32m4_t __riscv_vandn_mu (vbool8_t mask, vuint32m4_t maskedoff, vuint32m4_t vs2, vuint32m4_t vs1, size_t vl);
vuint32m4_t __riscv_vandn_mu (vbool8_t mask, vuint32m4_t maskedoff, vuint32m4_t vs2, uint32_t rs1, size_t vl);
vuint32m8_t __riscv_vandn_mu (vbool4_t mask, vuint32m8_t maskedoff, vuint32m8_t vs2, vuint32m8_t vs1, size_t vl);
vuint32m8_t __riscv_vandn_mu (vbool4_t mask, vuint32m8_t maskedoff, vuint32m8_t vs2, uint32_t rs1, size_t vl);
vuint64m1_t __riscv_vandn_mu (vbool64_t mask, vuint64m1_t maskedoff, vuint64m1_t vs2, vuint64m1_t vs1, size_t vl);
vuint64m1_t __riscv_vandn_mu (vbool64_t mask, vuint64m1_t maskedoff, vuint64m1_t vs2, uint64_t rs1, size_t vl);
vuint64m2_t __riscv_vandn_mu (vbool32_t mask, vuint64m2_t maskedoff, vuint64m2_t vs2, vuint64m2_t vs1, size_t vl);
vuint64m2_t __riscv_vandn_mu (vbool32_t mask, vuint64m2_t maskedoff, vuint64m2_t vs2, uint64_t rs1, size_t vl);
vuint64m4_t __riscv_vandn_mu (vbool16_t mask, vuint64m4_t maskedoff, vuint64m4_t vs2, vuint64m4_t vs1, size_t vl);
vuint64m4_t __riscv_vandn_mu (vbool16_t mask, vuint64m4_t maskedoff, vuint64m4_t vs2, uint64_t rs1, size_t vl);
vuint64m8_t __riscv_vandn_mu (vbool8_t mask, vuint64m8_t maskedoff, vuint64m8_t vs2, vuint64m8_t vs1, size_t vl);
vuint64m8_t __riscv_vandn_mu (vbool8_t mask, vuint64m8_t maskedoff, vuint64m8_t vs2, uint64_t rs1, size_t vl);
```

### [Vector Bit-manipulation used in Cryptography - Reverse Bits]():

**Prototypes:**
``` C
vuint8mf8_t __riscv_vbrev_tu (vuint8mf8_t maskedoff, vuint8mf8_t vs2, size_t vl);
vuint8mf4_t __riscv_vbrev_tu (vuint8mf4_t maskedoff, vuint8mf4_t vs2, size_t vl);
vuint8mf2_t __riscv_vbrev_tu (vuint8mf2_t maskedoff, vuint8mf2_t vs2, size_t vl);
vuint8m1_t __riscv_vbrev_tu (vuint8m1_t maskedoff, vuint8m1_t vs2, size_t vl);
vuint8m2_t __riscv_vbrev_tu (vuint8m2_t maskedoff, vuint8m2_t vs2, size_t vl);
vuint8m4_t __riscv_vbrev_tu (vuint8m4_t maskedoff, vuint8m4_t vs2, size_t vl);
vuint8m8_t __riscv_vbrev_tu (vuint8m8_t maskedoff, vuint8m8_t vs2, size_t vl);
vuint16mf4_t __riscv_vbrev_tu (vuint16mf4_t maskedoff, vuint16mf4_t vs2, size_t vl);
vuint16mf2_t __riscv_vbrev_tu (vuint16mf2_t maskedoff, vuint16mf2_t vs2, size_t vl);
vuint16m1_t __riscv_vbrev_tu (vuint16m1_t maskedoff, vuint16m1_t vs2, size_t vl);
vuint16m2_t __riscv_vbrev_tu (vuint16m2_t maskedoff, vuint16m2_t vs2, size_t vl);
vuint16m4_t __riscv_vbrev_tu (vuint16m4_t maskedoff, vuint16m4_t vs2, size_t vl);
vuint16m8_t __riscv_vbrev_tu (vuint16m8_t maskedoff, vuint16m8_t vs2, size_t vl);
vuint32mf2_t __riscv_vbrev_tu (vuint32mf2_t maskedoff, vuint32mf2_t vs2, size_t vl);
vuint32m1_t __riscv_vbrev_tu (vuint32m1_t maskedoff, vuint32m1_t vs2, size_t vl);
vuint32m2_t __riscv_vbrev_tu (vuint32m2_t maskedoff, vuint32m2_t vs2, size_t vl);
vuint32m4_t __riscv_vbrev_tu (vuint32m4_t maskedoff, vuint32m4_t vs2, size_t vl);
vuint32m8_t __riscv_vbrev_tu (vuint32m8_t maskedoff, vuint32m8_t vs2, size_t vl);
vuint64m1_t __riscv_vbrev_tu (vuint64m1_t maskedoff, vuint64m1_t vs2, size_t vl);
vuint64m2_t __riscv_vbrev_tu (vuint64m2_t maskedoff, vuint64m2_t vs2, size_t vl);
vuint64m4_t __riscv_vbrev_tu (vuint64m4_t maskedoff, vuint64m4_t vs2, size_t vl);
vuint64m8_t __riscv_vbrev_tu (vuint64m8_t maskedoff, vuint64m8_t vs2, size_t vl);
vuint8mf8_t __riscv_vbrev8_tu (vuint8mf8_t maskedoff, vuint8mf8_t vs2, size_t vl);
vuint8mf4_t __riscv_vbrev8_tu (vuint8mf4_t maskedoff, vuint8mf4_t vs2, size_t vl);
vuint8mf2_t __riscv_vbrev8_tu (vuint8mf2_t maskedoff, vuint8mf2_t vs2, size_t vl);
vuint8m1_t __riscv_vbrev8_tu (vuint8m1_t maskedoff, vuint8m1_t vs2, size_t vl);
vuint8m2_t __riscv_vbrev8_tu (vuint8m2_t maskedoff, vuint8m2_t vs2, size_t vl);
vuint8m4_t __riscv_vbrev8_tu (vuint8m4_t maskedoff, vuint8m4_t vs2, size_t vl);
vuint8m8_t __riscv_vbrev8_tu (vuint8m8_t maskedoff, vuint8m8_t vs2, size_t vl);
vuint16mf4_t __riscv_vbrev8_tu (vuint16mf4_t maskedoff, vuint16mf4_t vs2, size_t vl);
vuint16mf2_t __riscv_vbrev8_tu (vuint16mf2_t maskedoff, vuint16mf2_t vs2, size_t vl);
vuint16m1_t __riscv_vbrev8_tu (vuint16m1_t maskedoff, vuint16m1_t vs2, size_t vl);
vuint16m2_t __riscv_vbrev8_tu (vuint16m2_t maskedoff, vuint16m2_t vs2, size_t vl);
vuint16m4_t __riscv_vbrev8_tu (vuint16m4_t maskedoff, vuint16m4_t vs2, size_t vl);
vuint16m8_t __riscv_vbrev8_tu (vuint16m8_t maskedoff, vuint16m8_t vs2, size_t vl);
vuint32mf2_t __riscv_vbrev8_tu (vuint32mf2_t maskedoff, vuint32mf2_t vs2, size_t vl);
vuint32m1_t __riscv_vbrev8_tu (vuint32m1_t maskedoff, vuint32m1_t vs2, size_t vl);
vuint32m2_t __riscv_vbrev8_tu (vuint32m2_t maskedoff, vuint32m2_t vs2, size_t vl);
vuint32m4_t __riscv_vbrev8_tu (vuint32m4_t maskedoff, vuint32m4_t vs2, size_t vl);
vuint32m8_t __riscv_vbrev8_tu (vuint32m8_t maskedoff, vuint32m8_t vs2, size_t vl);
vuint64m1_t __riscv_vbrev8_tu (vuint64m1_t maskedoff, vuint64m1_t vs2, size_t vl);
vuint64m2_t __riscv_vbrev8_tu (vuint64m2_t maskedoff, vuint64m2_t vs2, size_t vl);
vuint64m4_t __riscv_vbrev8_tu (vuint64m4_t maskedoff, vuint64m4_t vs2, size_t vl);
vuint64m8_t __riscv_vbrev8_tu (vuint64m8_t maskedoff, vuint64m8_t vs2, size_t vl);
vuint8mf8_t __riscv_vrev8_tu (vuint8mf8_t maskedoff, vuint8mf8_t vs2, size_t vl);
vuint8mf4_t __riscv_vrev8_tu (vuint8mf4_t maskedoff, vuint8mf4_t vs2, size_t vl);
vuint8mf2_t __riscv_vrev8_tu (vuint8mf2_t maskedoff, vuint8mf2_t vs2, size_t vl);
vuint8m1_t __riscv_vrev8_tu (vuint8m1_t maskedoff, vuint8m1_t vs2, size_t vl);
vuint8m2_t __riscv_vrev8_tu (vuint8m2_t maskedoff, vuint8m2_t vs2, size_t vl);
vuint8m4_t __riscv_vrev8_tu (vuint8m4_t maskedoff, vuint8m4_t vs2, size_t vl);
vuint8m8_t __riscv_vrev8_tu (vuint8m8_t maskedoff, vuint8m8_t vs2, size_t vl);
vuint16mf4_t __riscv_vrev8_tu (vuint16mf4_t maskedoff, vuint16mf4_t vs2, size_t vl);
vuint16mf2_t __riscv_vrev8_tu (vuint16mf2_t maskedoff, vuint16mf2_t vs2, size_t vl);
vuint16m1_t __riscv_vrev8_tu (vuint16m1_t maskedoff, vuint16m1_t vs2, size_t vl);
vuint16m2_t __riscv_vrev8_tu (vuint16m2_t maskedoff, vuint16m2_t vs2, size_t vl);
vuint16m4_t __riscv_vrev8_tu (vuint16m4_t maskedoff, vuint16m4_t vs2, size_t vl);
vuint16m8_t __riscv_vrev8_tu (vuint16m8_t maskedoff, vuint16m8_t vs2, size_t vl);
vuint32mf2_t __riscv_vrev8_tu (vuint32mf2_t maskedoff, vuint32mf2_t vs2, size_t vl);
vuint32m1_t __riscv_vrev8_tu (vuint32m1_t maskedoff, vuint32m1_t vs2, size_t vl);
vuint32m2_t __riscv_vrev8_tu (vuint32m2_t maskedoff, vuint32m2_t vs2, size_t vl);
vuint32m4_t __riscv_vrev8_tu (vuint32m4_t maskedoff, vuint32m4_t vs2, size_t vl);
vuint32m8_t __riscv_vrev8_tu (vuint32m8_t maskedoff, vuint32m8_t vs2, size_t vl);
vuint64m1_t __riscv_vrev8_tu (vuint64m1_t maskedoff, vuint64m1_t vs2, size_t vl);
vuint64m2_t __riscv_vrev8_tu (vuint64m2_t maskedoff, vuint64m2_t vs2, size_t vl);
vuint64m4_t __riscv_vrev8_tu (vuint64m4_t maskedoff, vuint64m4_t vs2, size_t vl);
vuint64m8_t __riscv_vrev8_tu (vuint64m8_t maskedoff, vuint64m8_t vs2, size_t vl);
// masked functions
vuint8mf8_t __riscv_vbrev_tum (vbool64_t mask, vuint8mf8_t maskedoff, vuint8mf8_t vs2, size_t vl);
vuint8mf4_t __riscv_vbrev_tum (vbool32_t mask, vuint8mf4_t maskedoff, vuint8mf4_t vs2, size_t vl);
vuint8mf2_t __riscv_vbrev_tum (vbool16_t mask, vuint8mf2_t maskedoff, vuint8mf2_t vs2, size_t vl);
vuint8m1_t __riscv_vbrev_tum (vbool8_t mask, vuint8m1_t maskedoff, vuint8m1_t vs2, size_t vl);
vuint8m2_t __riscv_vbrev_tum (vbool4_t mask, vuint8m2_t maskedoff, vuint8m2_t vs2, size_t vl);
vuint8m4_t __riscv_vbrev_tum (vbool2_t mask, vuint8m4_t maskedoff, vuint8m4_t vs2, size_t vl);
vuint8m8_t __riscv_vbrev_tum (vbool1_t mask, vuint8m8_t maskedoff, vuint8m8_t vs2, size_t vl);
vuint16mf4_t __riscv_vbrev_tum (vbool64_t mask, vuint16mf4_t maskedoff, vuint16mf4_t vs2, size_t vl);
vuint16mf2_t __riscv_vbrev_tum (vbool32_t mask, vuint16mf2_t maskedoff, vuint16mf2_t vs2, size_t vl);
vuint16m1_t __riscv_vbrev_tum (vbool16_t mask, vuint16m1_t maskedoff, vuint16m1_t vs2, size_t vl);
vuint16m2_t __riscv_vbrev_tum (vbool8_t mask, vuint16m2_t maskedoff, vuint16m2_t vs2, size_t vl);
vuint16m4_t __riscv_vbrev_tum (vbool4_t mask, vuint16m4_t maskedoff, vuint16m4_t vs2, size_t vl);
vuint16m8_t __riscv_vbrev_tum (vbool2_t mask, vuint16m8_t maskedoff, vuint16m8_t vs2, size_t vl);
vuint32mf2_t __riscv_vbrev_tum (vbool64_t mask, vuint32mf2_t maskedoff, vuint32mf2_t vs2, size_t vl);
vuint32m1_t __riscv_vbrev_tum (vbool32_t mask, vuint32m1_t maskedoff, vuint32m1_t vs2, size_t vl);
vuint32m2_t __riscv_vbrev_tum (vbool16_t mask, vuint32m2_t maskedoff, vuint32m2_t vs2, size_t vl);
vuint32m4_t __riscv_vbrev_tum (vbool8_t mask, vuint32m4_t maskedoff, vuint32m4_t vs2, size_t vl);
vuint32m8_t __riscv_vbrev_tum (vbool4_t mask, vuint32m8_t maskedoff, vuint32m8_t vs2, size_t vl);
vuint64m1_t __riscv_vbrev_tum (vbool64_t mask, vuint64m1_t maskedoff, vuint64m1_t vs2, size_t vl);
vuint64m2_t __riscv_vbrev_tum (vbool32_t mask, vuint64m2_t maskedoff, vuint64m2_t vs2, size_t vl);
vuint64m4_t __riscv_vbrev_tum (vbool16_t mask, vuint64m4_t maskedoff, vuint64m4_t vs2, size_t vl);
vuint64m8_t __riscv_vbrev_tum (vbool8_t mask, vuint64m8_t maskedoff, vuint64m8_t vs2, size_t vl);
vuint8mf8_t __riscv_vbrev8_tum (vbool64_t mask, vuint8mf8_t maskedoff, vuint8mf8_t vs2, size_t vl);
vuint8mf4_t __riscv_vbrev8_tum (vbool32_t mask, vuint8mf4_t maskedoff, vuint8mf4_t vs2, size_t vl);
vuint8mf2_t __riscv_vbrev8_tum (vbool16_t mask, vuint8mf2_t maskedoff, vuint8mf2_t vs2, size_t vl);
vuint8m1_t __riscv_vbrev8_tum (vbool8_t mask, vuint8m1_t maskedoff, vuint8m1_t vs2, size_t vl);
vuint8m2_t __riscv_vbrev8_tum (vbool4_t mask, vuint8m2_t maskedoff, vuint8m2_t vs2, size_t vl);
vuint8m4_t __riscv_vbrev8_tum (vbool2_t mask, vuint8m4_t maskedoff, vuint8m4_t vs2, size_t vl);
vuint8m8_t __riscv_vbrev8_tum (vbool1_t mask, vuint8m8_t maskedoff, vuint8m8_t vs2, size_t vl);
vuint16mf4_t __riscv_vbrev8_tum (vbool64_t mask, vuint16mf4_t maskedoff, vuint16mf4_t vs2, size_t vl);
vuint16mf2_t __riscv_vbrev8_tum (vbool32_t mask, vuint16mf2_t maskedoff, vuint16mf2_t vs2, size_t vl);
vuint16m1_t __riscv_vbrev8_tum (vbool16_t mask, vuint16m1_t maskedoff, vuint16m1_t vs2, size_t vl);
vuint16m2_t __riscv_vbrev8_tum (vbool8_t mask, vuint16m2_t maskedoff, vuint16m2_t vs2, size_t vl);
vuint16m4_t __riscv_vbrev8_tum (vbool4_t mask, vuint16m4_t maskedoff, vuint16m4_t vs2, size_t vl);
vuint16m8_t __riscv_vbrev8_tum (vbool2_t mask, vuint16m8_t maskedoff, vuint16m8_t vs2, size_t vl);
vuint32mf2_t __riscv_vbrev8_tum (vbool64_t mask, vuint32mf2_t maskedoff, vuint32mf2_t vs2, size_t vl);
vuint32m1_t __riscv_vbrev8_tum (vbool32_t mask, vuint32m1_t maskedoff, vuint32m1_t vs2, size_t vl);
vuint32m2_t __riscv_vbrev8_tum (vbool16_t mask, vuint32m2_t maskedoff, vuint32m2_t vs2, size_t vl);
vuint32m4_t __riscv_vbrev8_tum (vbool8_t mask, vuint32m4_t maskedoff, vuint32m4_t vs2, size_t vl);
vuint32m8_t __riscv_vbrev8_tum (vbool4_t mask, vuint32m8_t maskedoff, vuint32m8_t vs2, size_t vl);
vuint64m1_t __riscv_vbrev8_tum (vbool64_t mask, vuint64m1_t maskedoff, vuint64m1_t vs2, size_t vl);
vuint64m2_t __riscv_vbrev8_tum (vbool32_t mask, vuint64m2_t maskedoff, vuint64m2_t vs2, size_t vl);
vuint64m4_t __riscv_vbrev8_tum (vbool16_t mask, vuint64m4_t maskedoff, vuint64m4_t vs2, size_t vl);
vuint64m8_t __riscv_vbrev8_tum (vbool8_t mask, vuint64m8_t maskedoff, vuint64m8_t vs2, size_t vl);
vuint8mf8_t __riscv_vrev8_tum (vbool64_t mask, vuint8mf8_t maskedoff, vuint8mf8_t vs2, size_t vl);
vuint8mf4_t __riscv_vrev8_tum (vbool32_t mask, vuint8mf4_t maskedoff, vuint8mf4_t vs2, size_t vl);
vuint8mf2_t __riscv_vrev8_tum (vbool16_t mask, vuint8mf2_t maskedoff, vuint8mf2_t vs2, size_t vl);
vuint8m1_t __riscv_vrev8_tum (vbool8_t mask, vuint8m1_t maskedoff, vuint8m1_t vs2, size_t vl);
vuint8m2_t __riscv_vrev8_tum (vbool4_t mask, vuint8m2_t maskedoff, vuint8m2_t vs2, size_t vl);
vuint8m4_t __riscv_vrev8_tum (vbool2_t mask, vuint8m4_t maskedoff, vuint8m4_t vs2, size_t vl);
vuint8m8_t __riscv_vrev8_tum (vbool1_t mask, vuint8m8_t maskedoff, vuint8m8_t vs2, size_t vl);
vuint16mf4_t __riscv_vrev8_tum (vbool64_t mask, vuint16mf4_t maskedoff, vuint16mf4_t vs2, size_t vl);
vuint16mf2_t __riscv_vrev8_tum (vbool32_t mask, vuint16mf2_t maskedoff, vuint16mf2_t vs2, size_t vl);
vuint16m1_t __riscv_vrev8_tum (vbool16_t mask, vuint16m1_t maskedoff, vuint16m1_t vs2, size_t vl);
vuint16m2_t __riscv_vrev8_tum (vbool8_t mask, vuint16m2_t maskedoff, vuint16m2_t vs2, size_t vl);
vuint16m4_t __riscv_vrev8_tum (vbool4_t mask, vuint16m4_t maskedoff, vuint16m4_t vs2, size_t vl);
vuint16m8_t __riscv_vrev8_tum (vbool2_t mask, vuint16m8_t maskedoff, vuint16m8_t vs2, size_t vl);
vuint32mf2_t __riscv_vrev8_tum (vbool64_t mask, vuint32mf2_t maskedoff, vuint32mf2_t vs2, size_t vl);
vuint32m1_t __riscv_vrev8_tum (vbool32_t mask, vuint32m1_t maskedoff, vuint32m1_t vs2, size_t vl);
vuint32m2_t __riscv_vrev8_tum (vbool16_t mask, vuint32m2_t maskedoff, vuint32m2_t vs2, size_t vl);
vuint32m4_t __riscv_vrev8_tum (vbool8_t mask, vuint32m4_t maskedoff, vuint32m4_t vs2, size_t vl);
vuint32m8_t __riscv_vrev8_tum (vbool4_t mask, vuint32m8_t maskedoff, vuint32m8_t vs2, size_t vl);
vuint64m1_t __riscv_vrev8_tum (vbool64_t mask, vuint64m1_t maskedoff, vuint64m1_t vs2, size_t vl);
vuint64m2_t __riscv_vrev8_tum (vbool32_t mask, vuint64m2_t maskedoff, vuint64m2_t vs2, size_t vl);
vuint64m4_t __riscv_vrev8_tum (vbool16_t mask, vuint64m4_t maskedoff, vuint64m4_t vs2, size_t vl);
vuint64m8_t __riscv_vrev8_tum (vbool8_t mask, vuint64m8_t maskedoff, vuint64m8_t vs2, size_t vl);
// masked functions
vuint8mf8_t __riscv_vbrev_tumu (vbool64_t mask, vuint8mf8_t maskedoff, vuint8mf8_t vs2, size_t vl);
vuint8mf4_t __riscv_vbrev_tumu (vbool32_t mask, vuint8mf4_t maskedoff, vuint8mf4_t vs2, size_t vl);
vuint8mf2_t __riscv_vbrev_tumu (vbool16_t mask, vuint8mf2_t maskedoff, vuint8mf2_t vs2, size_t vl);
vuint8m1_t __riscv_vbrev_tumu (vbool8_t mask, vuint8m1_t maskedoff, vuint8m1_t vs2, size_t vl);
vuint8m2_t __riscv_vbrev_tumu (vbool4_t mask, vuint8m2_t maskedoff, vuint8m2_t vs2, size_t vl);
vuint8m4_t __riscv_vbrev_tumu (vbool2_t mask, vuint8m4_t maskedoff, vuint8m4_t vs2, size_t vl);
vuint8m8_t __riscv_vbrev_tumu (vbool1_t mask, vuint8m8_t maskedoff, vuint8m8_t vs2, size_t vl);
vuint16mf4_t __riscv_vbrev_tumu (vbool64_t mask, vuint16mf4_t maskedoff, vuint16mf4_t vs2, size_t vl);
vuint16mf2_t __riscv_vbrev_tumu (vbool32_t mask, vuint16mf2_t maskedoff, vuint16mf2_t vs2, size_t vl);
vuint16m1_t __riscv_vbrev_tumu (vbool16_t mask, vuint16m1_t maskedoff, vuint16m1_t vs2, size_t vl);
vuint16m2_t __riscv_vbrev_tumu (vbool8_t mask, vuint16m2_t maskedoff, vuint16m2_t vs2, size_t vl);
vuint16m4_t __riscv_vbrev_tumu (vbool4_t mask, vuint16m4_t maskedoff, vuint16m4_t vs2, size_t vl);
vuint16m8_t __riscv_vbrev_tumu (vbool2_t mask, vuint16m8_t maskedoff, vuint16m8_t vs2, size_t vl);
vuint32mf2_t __riscv_vbrev_tumu (vbool64_t mask, vuint32mf2_t maskedoff, vuint32mf2_t vs2, size_t vl);
vuint32m1_t __riscv_vbrev_tumu (vbool32_t mask, vuint32m1_t maskedoff, vuint32m1_t vs2, size_t vl);
vuint32m2_t __riscv_vbrev_tumu (vbool16_t mask, vuint32m2_t maskedoff, vuint32m2_t vs2, size_t vl);
vuint32m4_t __riscv_vbrev_tumu (vbool8_t mask, vuint32m4_t maskedoff, vuint32m4_t vs2, size_t vl);
vuint32m8_t __riscv_vbrev_tumu (vbool4_t mask, vuint32m8_t maskedoff, vuint32m8_t vs2, size_t vl);
vuint64m1_t __riscv_vbrev_tumu (vbool64_t mask, vuint64m1_t maskedoff, vuint64m1_t vs2, size_t vl);
vuint64m2_t __riscv_vbrev_tumu (vbool32_t mask, vuint64m2_t maskedoff, vuint64m2_t vs2, size_t vl);
vuint64m4_t __riscv_vbrev_tumu (vbool16_t mask, vuint64m4_t maskedoff, vuint64m4_t vs2, size_t vl);
vuint64m8_t __riscv_vbrev_tumu (vbool8_t mask, vuint64m8_t maskedoff, vuint64m8_t vs2, size_t vl);
vuint8mf8_t __riscv_vbrev8_tumu (vbool64_t mask, vuint8mf8_t maskedoff, vuint8mf8_t vs2, size_t vl);
vuint8mf4_t __riscv_vbrev8_tumu (vbool32_t mask, vuint8mf4_t maskedoff, vuint8mf4_t vs2, size_t vl);
vuint8mf2_t __riscv_vbrev8_tumu (vbool16_t mask, vuint8mf2_t maskedoff, vuint8mf2_t vs2, size_t vl);
vuint8m1_t __riscv_vbrev8_tumu (vbool8_t mask, vuint8m1_t maskedoff, vuint8m1_t vs2, size_t vl);
vuint8m2_t __riscv_vbrev8_tumu (vbool4_t mask, vuint8m2_t maskedoff, vuint8m2_t vs2, size_t vl);
vuint8m4_t __riscv_vbrev8_tumu (vbool2_t mask, vuint8m4_t maskedoff, vuint8m4_t vs2, size_t vl);
vuint8m8_t __riscv_vbrev8_tumu (vbool1_t mask, vuint8m8_t maskedoff, vuint8m8_t vs2, size_t vl);
vuint16mf4_t __riscv_vbrev8_tumu (vbool64_t mask, vuint16mf4_t maskedoff, vuint16mf4_t vs2, size_t vl);
vuint16mf2_t __riscv_vbrev8_tumu (vbool32_t mask, vuint16mf2_t maskedoff, vuint16mf2_t vs2, size_t vl);
vuint16m1_t __riscv_vbrev8_tumu (vbool16_t mask, vuint16m1_t maskedoff, vuint16m1_t vs2, size_t vl);
vuint16m2_t __riscv_vbrev8_tumu (vbool8_t mask, vuint16m2_t maskedoff, vuint16m2_t vs2, size_t vl);
vuint16m4_t __riscv_vbrev8_tumu (vbool4_t mask, vuint16m4_t maskedoff, vuint16m4_t vs2, size_t vl);
vuint16m8_t __riscv_vbrev8_tumu (vbool2_t mask, vuint16m8_t maskedoff, vuint16m8_t vs2, size_t vl);
vuint32mf2_t __riscv_vbrev8_tumu (vbool64_t mask, vuint32mf2_t maskedoff, vuint32mf2_t vs2, size_t vl);
vuint32m1_t __riscv_vbrev8_tumu (vbool32_t mask, vuint32m1_t maskedoff, vuint32m1_t vs2, size_t vl);
vuint32m2_t __riscv_vbrev8_tumu (vbool16_t mask, vuint32m2_t maskedoff, vuint32m2_t vs2, size_t vl);
vuint32m4_t __riscv_vbrev8_tumu (vbool8_t mask, vuint32m4_t maskedoff, vuint32m4_t vs2, size_t vl);
vuint32m8_t __riscv_vbrev8_tumu (vbool4_t mask, vuint32m8_t maskedoff, vuint32m8_t vs2, size_t vl);
vuint64m1_t __riscv_vbrev8_tumu (vbool64_t mask, vuint64m1_t maskedoff, vuint64m1_t vs2, size_t vl);
vuint64m2_t __riscv_vbrev8_tumu (vbool32_t mask, vuint64m2_t maskedoff, vuint64m2_t vs2, size_t vl);
vuint64m4_t __riscv_vbrev8_tumu (vbool16_t mask, vuint64m4_t maskedoff, vuint64m4_t vs2, size_t vl);
vuint64m8_t __riscv_vbrev8_tumu (vbool8_t mask, vuint64m8_t maskedoff, vuint64m8_t vs2, size_t vl);
vuint8mf8_t __riscv_vrev8_tumu (vbool64_t mask, vuint8mf8_t maskedoff, vuint8mf8_t vs2, size_t vl);
vuint8mf4_t __riscv_vrev8_tumu (vbool32_t mask, vuint8mf4_t maskedoff, vuint8mf4_t vs2, size_t vl);
vuint8mf2_t __riscv_vrev8_tumu (vbool16_t mask, vuint8mf2_t maskedoff, vuint8mf2_t vs2, size_t vl);
vuint8m1_t __riscv_vrev8_tumu (vbool8_t mask, vuint8m1_t maskedoff, vuint8m1_t vs2, size_t vl);
vuint8m2_t __riscv_vrev8_tumu (vbool4_t mask, vuint8m2_t maskedoff, vuint8m2_t vs2, size_t vl);
vuint8m4_t __riscv_vrev8_tumu (vbool2_t mask, vuint8m4_t maskedoff, vuint8m4_t vs2, size_t vl);
vuint8m8_t __riscv_vrev8_tumu (vbool1_t mask, vuint8m8_t maskedoff, vuint8m8_t vs2, size_t vl);
vuint16mf4_t __riscv_vrev8_tumu (vbool64_t mask, vuint16mf4_t maskedoff, vuint16mf4_t vs2, size_t vl);
vuint16mf2_t __riscv_vrev8_tumu (vbool32_t mask, vuint16mf2_t maskedoff, vuint16mf2_t vs2, size_t vl);
vuint16m1_t __riscv_vrev8_tumu (vbool16_t mask, vuint16m1_t maskedoff, vuint16m1_t vs2, size_t vl);
vuint16m2_t __riscv_vrev8_tumu (vbool8_t mask, vuint16m2_t maskedoff, vuint16m2_t vs2, size_t vl);
vuint16m4_t __riscv_vrev8_tumu (vbool4_t mask, vuint16m4_t maskedoff, vuint16m4_t vs2, size_t vl);
vuint16m8_t __riscv_vrev8_tumu (vbool2_t mask, vuint16m8_t maskedoff, vuint16m8_t vs2, size_t vl);
vuint32mf2_t __riscv_vrev8_tumu (vbool64_t mask, vuint32mf2_t maskedoff, vuint32mf2_t vs2, size_t vl);
vuint32m1_t __riscv_vrev8_tumu (vbool32_t mask, vuint32m1_t maskedoff, vuint32m1_t vs2, size_t vl);
vuint32m2_t __riscv_vrev8_tumu (vbool16_t mask, vuint32m2_t maskedoff, vuint32m2_t vs2, size_t vl);
vuint32m4_t __riscv_vrev8_tumu (vbool8_t mask, vuint32m4_t maskedoff, vuint32m4_t vs2, size_t vl);
vuint32m8_t __riscv_vrev8_tumu (vbool4_t mask, vuint32m8_t maskedoff, vuint32m8_t vs2, size_t vl);
vuint64m1_t __riscv_vrev8_tumu (vbool64_t mask, vuint64m1_t maskedoff, vuint64m1_t vs2, size_t vl);
vuint64m2_t __riscv_vrev8_tumu (vbool32_t mask, vuint64m2_t maskedoff, vuint64m2_t vs2, size_t vl);
vuint64m4_t __riscv_vrev8_tumu (vbool16_t mask, vuint64m4_t maskedoff, vuint64m4_t vs2, size_t vl);
vuint64m8_t __riscv_vrev8_tumu (vbool8_t mask, vuint64m8_t maskedoff, vuint64m8_t vs2, size_t vl);
// masked functions
vuint8mf8_t __riscv_vbrev_mu (vbool64_t mask, vuint8mf8_t maskedoff, vuint8mf8_t vs2, size_t vl);
vuint8mf4_t __riscv_vbrev_mu (vbool32_t mask, vuint8mf4_t maskedoff, vuint8mf4_t vs2, size_t vl);
vuint8mf2_t __riscv_vbrev_mu (vbool16_t mask, vuint8mf2_t maskedoff, vuint8mf2_t vs2, size_t vl);
vuint8m1_t __riscv_vbrev_mu (vbool8_t mask, vuint8m1_t maskedoff, vuint8m1_t vs2, size_t vl);
vuint8m2_t __riscv_vbrev_mu (vbool4_t mask, vuint8m2_t maskedoff, vuint8m2_t vs2, size_t vl);
vuint8m4_t __riscv_vbrev_mu (vbool2_t mask, vuint8m4_t maskedoff, vuint8m4_t vs2, size_t vl);
vuint8m8_t __riscv_vbrev_mu (vbool1_t mask, vuint8m8_t maskedoff, vuint8m8_t vs2, size_t vl);
vuint16mf4_t __riscv_vbrev_mu (vbool64_t mask, vuint16mf4_t maskedoff, vuint16mf4_t vs2, size_t vl);
vuint16mf2_t __riscv_vbrev_mu (vbool32_t mask, vuint16mf2_t maskedoff, vuint16mf2_t vs2, size_t vl);
vuint16m1_t __riscv_vbrev_mu (vbool16_t mask, vuint16m1_t maskedoff, vuint16m1_t vs2, size_t vl);
vuint16m2_t __riscv_vbrev_mu (vbool8_t mask, vuint16m2_t maskedoff, vuint16m2_t vs2, size_t vl);
vuint16m4_t __riscv_vbrev_mu (vbool4_t mask, vuint16m4_t maskedoff, vuint16m4_t vs2, size_t vl);
vuint16m8_t __riscv_vbrev_mu (vbool2_t mask, vuint16m8_t maskedoff, vuint16m8_t vs2, size_t vl);
vuint32mf2_t __riscv_vbrev_mu (vbool64_t mask, vuint32mf2_t maskedoff, vuint32mf2_t vs2, size_t vl);
vuint32m1_t __riscv_vbrev_mu (vbool32_t mask, vuint32m1_t maskedoff, vuint32m1_t vs2, size_t vl);
vuint32m2_t __riscv_vbrev_mu (vbool16_t mask, vuint32m2_t maskedoff, vuint32m2_t vs2, size_t vl);
vuint32m4_t __riscv_vbrev_mu (vbool8_t mask, vuint32m4_t maskedoff, vuint32m4_t vs2, size_t vl);
vuint32m8_t __riscv_vbrev_mu (vbool4_t mask, vuint32m8_t maskedoff, vuint32m8_t vs2, size_t vl);
vuint64m1_t __riscv_vbrev_mu (vbool64_t mask, vuint64m1_t maskedoff, vuint64m1_t vs2, size_t vl);
vuint64m2_t __riscv_vbrev_mu (vbool32_t mask, vuint64m2_t maskedoff, vuint64m2_t vs2, size_t vl);
vuint64m4_t __riscv_vbrev_mu (vbool16_t mask, vuint64m4_t maskedoff, vuint64m4_t vs2, size_t vl);
vuint64m8_t __riscv_vbrev_mu (vbool8_t mask, vuint64m8_t maskedoff, vuint64m8_t vs2, size_t vl);
vuint8mf8_t __riscv_vbrev8_mu (vbool64_t mask, vuint8mf8_t maskedoff, vuint8mf8_t vs2, size_t vl);
vuint8mf4_t __riscv_vbrev8_mu (vbool32_t mask, vuint8mf4_t maskedoff, vuint8mf4_t vs2, size_t vl);
vuint8mf2_t __riscv_vbrev8_mu (vbool16_t mask, vuint8mf2_t maskedoff, vuint8mf2_t vs2, size_t vl);
vuint8m1_t __riscv_vbrev8_mu (vbool8_t mask, vuint8m1_t maskedoff, vuint8m1_t vs2, size_t vl);
vuint8m2_t __riscv_vbrev8_mu (vbool4_t mask, vuint8m2_t maskedoff, vuint8m2_t vs2, size_t vl);
vuint8m4_t __riscv_vbrev8_mu (vbool2_t mask, vuint8m4_t maskedoff, vuint8m4_t vs2, size_t vl);
vuint8m8_t __riscv_vbrev8_mu (vbool1_t mask, vuint8m8_t maskedoff, vuint8m8_t vs2, size_t vl);
vuint16mf4_t __riscv_vbrev8_mu (vbool64_t mask, vuint16mf4_t maskedoff, vuint16mf4_t vs2, size_t vl);
vuint16mf2_t __riscv_vbrev8_mu (vbool32_t mask, vuint16mf2_t maskedoff, vuint16mf2_t vs2, size_t vl);
vuint16m1_t __riscv_vbrev8_mu (vbool16_t mask, vuint16m1_t maskedoff, vuint16m1_t vs2, size_t vl);
vuint16m2_t __riscv_vbrev8_mu (vbool8_t mask, vuint16m2_t maskedoff, vuint16m2_t vs2, size_t vl);
vuint16m4_t __riscv_vbrev8_mu (vbool4_t mask, vuint16m4_t maskedoff, vuint16m4_t vs2, size_t vl);
vuint16m8_t __riscv_vbrev8_mu (vbool2_t mask, vuint16m8_t maskedoff, vuint16m8_t vs2, size_t vl);
vuint32mf2_t __riscv_vbrev8_mu (vbool64_t mask, vuint32mf2_t maskedoff, vuint32mf2_t vs2, size_t vl);
vuint32m1_t __riscv_vbrev8_mu (vbool32_t mask, vuint32m1_t maskedoff, vuint32m1_t vs2, size_t vl);
vuint32m2_t __riscv_vbrev8_mu (vbool16_t mask, vuint32m2_t maskedoff, vuint32m2_t vs2, size_t vl);
vuint32m4_t __riscv_vbrev8_mu (vbool8_t mask, vuint32m4_t maskedoff, vuint32m4_t vs2, size_t vl);
vuint32m8_t __riscv_vbrev8_mu (vbool4_t mask, vuint32m8_t maskedoff, vuint32m8_t vs2, size_t vl);
vuint64m1_t __riscv_vbrev8_mu (vbool64_t mask, vuint64m1_t maskedoff, vuint64m1_t vs2, size_t vl);
vuint64m2_t __riscv_vbrev8_mu (vbool32_t mask, vuint64m2_t maskedoff, vuint64m2_t vs2, size_t vl);
vuint64m4_t __riscv_vbrev8_mu (vbool16_t mask, vuint64m4_t maskedoff, vuint64m4_t vs2, size_t vl);
vuint64m8_t __riscv_vbrev8_mu (vbool8_t mask, vuint64m8_t maskedoff, vuint64m8_t vs2, size_t vl);
vuint8mf8_t __riscv_vrev8_mu (vbool64_t mask, vuint8mf8_t maskedoff, vuint8mf8_t vs2, size_t vl);
vuint8mf4_t __riscv_vrev8_mu (vbool32_t mask, vuint8mf4_t maskedoff, vuint8mf4_t vs2, size_t vl);
vuint8mf2_t __riscv_vrev8_mu (vbool16_t mask, vuint8mf2_t maskedoff, vuint8mf2_t vs2, size_t vl);
vuint8m1_t __riscv_vrev8_mu (vbool8_t mask, vuint8m1_t maskedoff, vuint8m1_t vs2, size_t vl);
vuint8m2_t __riscv_vrev8_mu (vbool4_t mask, vuint8m2_t maskedoff, vuint8m2_t vs2, size_t vl);
vuint8m4_t __riscv_vrev8_mu (vbool2_t mask, vuint8m4_t maskedoff, vuint8m4_t vs2, size_t vl);
vuint8m8_t __riscv_vrev8_mu (vbool1_t mask, vuint8m8_t maskedoff, vuint8m8_t vs2, size_t vl);
vuint16mf4_t __riscv_vrev8_mu (vbool64_t mask, vuint16mf4_t maskedoff, vuint16mf4_t vs2, size_t vl);
vuint16mf2_t __riscv_vrev8_mu (vbool32_t mask, vuint16mf2_t maskedoff, vuint16mf2_t vs2, size_t vl);
vuint16m1_t __riscv_vrev8_mu (vbool16_t mask, vuint16m1_t maskedoff, vuint16m1_t vs2, size_t vl);
vuint16m2_t __riscv_vrev8_mu (vbool8_t mask, vuint16m2_t maskedoff, vuint16m2_t vs2, size_t vl);
vuint16m4_t __riscv_vrev8_mu (vbool4_t mask, vuint16m4_t maskedoff, vuint16m4_t vs2, size_t vl);
vuint16m8_t __riscv_vrev8_mu (vbool2_t mask, vuint16m8_t maskedoff, vuint16m8_t vs2, size_t vl);
vuint32mf2_t __riscv_vrev8_mu (vbool64_t mask, vuint32mf2_t maskedoff, vuint32mf2_t vs2, size_t vl);
vuint32m1_t __riscv_vrev8_mu (vbool32_t mask, vuint32m1_t maskedoff, vuint32m1_t vs2, size_t vl);
vuint32m2_t __riscv_vrev8_mu (vbool16_t mask, vuint32m2_t maskedoff, vuint32m2_t vs2, size_t vl);
vuint32m4_t __riscv_vrev8_mu (vbool8_t mask, vuint32m4_t maskedoff, vuint32m4_t vs2, size_t vl);
vuint32m8_t __riscv_vrev8_mu (vbool4_t mask, vuint32m8_t maskedoff, vuint32m8_t vs2, size_t vl);
vuint64m1_t __riscv_vrev8_mu (vbool64_t mask, vuint64m1_t maskedoff, vuint64m1_t vs2, size_t vl);
vuint64m2_t __riscv_vrev8_mu (vbool32_t mask, vuint64m2_t maskedoff, vuint64m2_t vs2, size_t vl);
vuint64m4_t __riscv_vrev8_mu (vbool16_t mask, vuint64m4_t maskedoff, vuint64m4_t vs2, size_t vl);
vuint64m8_t __riscv_vrev8_mu (vbool8_t mask, vuint64m8_t maskedoff, vuint64m8_t vs2, size_t vl);
```

### [Vector Bit-manipulation used in Cryptography - Count Bits]():
This operation don't have Policy Intrinsic Functions.

### [Vector Bit-manipulation used in Cryptography - Rotate]():

**Prototypes:**
``` C
vuint8mf8_t __riscv_vrol_tu (vuint8mf8_t maskedoff, vuint8mf8_t vs2, vuint8mf8_t vs1, size_t vl);
vuint8mf8_t __riscv_vrol_tu (vuint8mf8_t maskedoff, vuint8mf8_t vs2, size_t rs1, size_t vl);
vuint8mf4_t __riscv_vrol_tu (vuint8mf4_t maskedoff, vuint8mf4_t vs2, vuint8mf4_t vs1, size_t vl);
vuint8mf4_t __riscv_vrol_tu (vuint8mf4_t maskedoff, vuint8mf4_t vs2, size_t rs1, size_t vl);
vuint8mf2_t __riscv_vrol_tu (vuint8mf2_t maskedoff, vuint8mf2_t vs2, vuint8mf2_t vs1, size_t vl);
vuint8mf2_t __riscv_vrol_tu (vuint8mf2_t maskedoff, vuint8mf2_t vs2, size_t rs1, size_t vl);
vuint8m1_t __riscv_vrol_tu (vuint8m1_t maskedoff, vuint8m1_t vs2, vuint8m1_t vs1, size_t vl);
vuint8m1_t __riscv_vrol_tu (vuint8m1_t maskedoff, vuint8m1_t vs2, size_t rs1, size_t vl);
vuint8m2_t __riscv_vrol_tu (vuint8m2_t maskedoff, vuint8m2_t vs2, vuint8m2_t vs1, size_t vl);
vuint8m2_t __riscv_vrol_tu (vuint8m2_t maskedoff, vuint8m2_t vs2, size_t rs1, size_t vl);
vuint8m4_t __riscv_vrol_tu (vuint8m4_t maskedoff, vuint8m4_t vs2, vuint8m4_t vs1, size_t vl);
vuint8m4_t __riscv_vrol_tu (vuint8m4_t maskedoff, vuint8m4_t vs2, size_t rs1, size_t vl);
vuint8m8_t __riscv_vrol_tu (vuint8m8_t maskedoff, vuint8m8_t vs2, vuint8m8_t vs1, size_t vl);
vuint8m8_t __riscv_vrol_tu (vuint8m8_t maskedoff, vuint8m8_t vs2, size_t rs1, size_t vl);
vuint16mf4_t __riscv_vrol_tu (vuint16mf4_t maskedoff, vuint16mf4_t vs2, vuint16mf4_t vs1, size_t vl);
vuint16mf4_t __riscv_vrol_tu (vuint16mf4_t maskedoff, vuint16mf4_t vs2, size_t rs1, size_t vl);
vuint16mf2_t __riscv_vrol_tu (vuint16mf2_t maskedoff, vuint16mf2_t vs2, vuint16mf2_t vs1, size_t vl);
vuint16mf2_t __riscv_vrol_tu (vuint16mf2_t maskedoff, vuint16mf2_t vs2, size_t rs1, size_t vl);
vuint16m1_t __riscv_vrol_tu (vuint16m1_t maskedoff, vuint16m1_t vs2, vuint16m1_t vs1, size_t vl);
vuint16m1_t __riscv_vrol_tu (vuint16m1_t maskedoff, vuint16m1_t vs2, size_t rs1, size_t vl);
vuint16m2_t __riscv_vrol_tu (vuint16m2_t maskedoff, vuint16m2_t vs2, vuint16m2_t vs1, size_t vl);
vuint16m2_t __riscv_vrol_tu (vuint16m2_t maskedoff, vuint16m2_t vs2, size_t rs1, size_t vl);
vuint16m4_t __riscv_vrol_tu (vuint16m4_t maskedoff, vuint16m4_t vs2, vuint16m4_t vs1, size_t vl);
vuint16m4_t __riscv_vrol_tu (vuint16m4_t maskedoff, vuint16m4_t vs2, size_t rs1, size_t vl);
vuint16m8_t __riscv_vrol_tu (vuint16m8_t maskedoff, vuint16m8_t vs2, vuint16m8_t vs1, size_t vl);
vuint16m8_t __riscv_vrol_tu (vuint16m8_t maskedoff, vuint16m8_t vs2, size_t rs1, size_t vl);
vuint32mf2_t __riscv_vrol_tu (vuint32mf2_t maskedoff, vuint32mf2_t vs2, vuint32mf2_t vs1, size_t vl);
vuint32mf2_t __riscv_vrol_tu (vuint32mf2_t maskedoff, vuint32mf2_t vs2, size_t rs1, size_t vl);
vuint32m1_t __riscv_vrol_tu (vuint32m1_t maskedoff, vuint32m1_t vs2, vuint32m1_t vs1, size_t vl);
vuint32m1_t __riscv_vrol_tu (vuint32m1_t maskedoff, vuint32m1_t vs2, size_t rs1, size_t vl);
vuint32m2_t __riscv_vrol_tu (vuint32m2_t maskedoff, vuint32m2_t vs2, vuint32m2_t vs1, size_t vl);
vuint32m2_t __riscv_vrol_tu (vuint32m2_t maskedoff, vuint32m2_t vs2, size_t rs1, size_t vl);
vuint32m4_t __riscv_vrol_tu (vuint32m4_t maskedoff, vuint32m4_t vs2, vuint32m4_t vs1, size_t vl);
vuint32m4_t __riscv_vrol_tu (vuint32m4_t maskedoff, vuint32m4_t vs2, size_t rs1, size_t vl);
vuint32m8_t __riscv_vrol_tu (vuint32m8_t maskedoff, vuint32m8_t vs2, vuint32m8_t vs1, size_t vl);
vuint32m8_t __riscv_vrol_tu (vuint32m8_t maskedoff, vuint32m8_t vs2, size_t rs1, size_t vl);
vuint64m1_t __riscv_vrol_tu (vuint64m1_t maskedoff, vuint64m1_t vs2, vuint64m1_t vs1, size_t vl);
vuint64m1_t __riscv_vrol_tu (vuint64m1_t maskedoff, vuint64m1_t vs2, size_t rs1, size_t vl);
vuint64m2_t __riscv_vrol_tu (vuint64m2_t maskedoff, vuint64m2_t vs2, vuint64m2_t vs1, size_t vl);
vuint64m2_t __riscv_vrol_tu (vuint64m2_t maskedoff, vuint64m2_t vs2, size_t rs1, size_t vl);
vuint64m4_t __riscv_vrol_tu (vuint64m4_t maskedoff, vuint64m4_t vs2, vuint64m4_t vs1, size_t vl);
vuint64m4_t __riscv_vrol_tu (vuint64m4_t maskedoff, vuint64m4_t vs2, size_t rs1, size_t vl);
vuint64m8_t __riscv_vrol_tu (vuint64m8_t maskedoff, vuint64m8_t vs2, vuint64m8_t vs1, size_t vl);
vuint64m8_t __riscv_vrol_tu (vuint64m8_t maskedoff, vuint64m8_t vs2, size_t rs1, size_t vl);
vuint8mf8_t __riscv_vror_tu (vuint8mf8_t maskedoff, vuint8mf8_t vs2, vuint8mf8_t vs1, size_t vl);
vuint8mf8_t __riscv_vror_tu (vuint8mf8_t maskedoff, vuint8mf8_t vs2, size_t rs1, size_t vl);
vuint8mf4_t __riscv_vror_tu (vuint8mf4_t maskedoff, vuint8mf4_t vs2, vuint8mf4_t vs1, size_t vl);
vuint8mf4_t __riscv_vror_tu (vuint8mf4_t maskedoff, vuint8mf4_t vs2, size_t rs1, size_t vl);
vuint8mf2_t __riscv_vror_tu (vuint8mf2_t maskedoff, vuint8mf2_t vs2, vuint8mf2_t vs1, size_t vl);
vuint8mf2_t __riscv_vror_tu (vuint8mf2_t maskedoff, vuint8mf2_t vs2, size_t rs1, size_t vl);
vuint8m1_t __riscv_vror_tu (vuint8m1_t maskedoff, vuint8m1_t vs2, vuint8m1_t vs1, size_t vl);
vuint8m1_t __riscv_vror_tu (vuint8m1_t maskedoff, vuint8m1_t vs2, size_t rs1, size_t vl);
vuint8m2_t __riscv_vror_tu (vuint8m2_t maskedoff, vuint8m2_t vs2, vuint8m2_t vs1, size_t vl);
vuint8m2_t __riscv_vror_tu (vuint8m2_t maskedoff, vuint8m2_t vs2, size_t rs1, size_t vl);
vuint8m4_t __riscv_vror_tu (vuint8m4_t maskedoff, vuint8m4_t vs2, vuint8m4_t vs1, size_t vl);
vuint8m4_t __riscv_vror_tu (vuint8m4_t maskedoff, vuint8m4_t vs2, size_t rs1, size_t vl);
vuint8m8_t __riscv_vror_tu (vuint8m8_t maskedoff, vuint8m8_t vs2, vuint8m8_t vs1, size_t vl);
vuint8m8_t __riscv_vror_tu (vuint8m8_t maskedoff, vuint8m8_t vs2, size_t rs1, size_t vl);
vuint16mf4_t __riscv_vror_tu (vuint16mf4_t maskedoff, vuint16mf4_t vs2, vuint16mf4_t vs1, size_t vl);
vuint16mf4_t __riscv_vror_tu (vuint16mf4_t maskedoff, vuint16mf4_t vs2, size_t rs1, size_t vl);
vuint16mf2_t __riscv_vror_tu (vuint16mf2_t maskedoff, vuint16mf2_t vs2, vuint16mf2_t vs1, size_t vl);
vuint16mf2_t __riscv_vror_tu (vuint16mf2_t maskedoff, vuint16mf2_t vs2, size_t rs1, size_t vl);
vuint16m1_t __riscv_vror_tu (vuint16m1_t maskedoff, vuint16m1_t vs2, vuint16m1_t vs1, size_t vl);
vuint16m1_t __riscv_vror_tu (vuint16m1_t maskedoff, vuint16m1_t vs2, size_t rs1, size_t vl);
vuint16m2_t __riscv_vror_tu (vuint16m2_t maskedoff, vuint16m2_t vs2, vuint16m2_t vs1, size_t vl);
vuint16m2_t __riscv_vror_tu (vuint16m2_t maskedoff, vuint16m2_t vs2, size_t rs1, size_t vl);
vuint16m4_t __riscv_vror_tu (vuint16m4_t maskedoff, vuint16m4_t vs2, vuint16m4_t vs1, size_t vl);
vuint16m4_t __riscv_vror_tu (vuint16m4_t maskedoff, vuint16m4_t vs2, size_t rs1, size_t vl);
vuint16m8_t __riscv_vror_tu (vuint16m8_t maskedoff, vuint16m8_t vs2, vuint16m8_t vs1, size_t vl);
vuint16m8_t __riscv_vror_tu (vuint16m8_t maskedoff, vuint16m8_t vs2, size_t rs1, size_t vl);
vuint32mf2_t __riscv_vror_tu (vuint32mf2_t maskedoff, vuint32mf2_t vs2, vuint32mf2_t vs1, size_t vl);
vuint32mf2_t __riscv_vror_tu (vuint32mf2_t maskedoff, vuint32mf2_t vs2, size_t rs1, size_t vl);
vuint32m1_t __riscv_vror_tu (vuint32m1_t maskedoff, vuint32m1_t vs2, vuint32m1_t vs1, size_t vl);
vuint32m1_t __riscv_vror_tu (vuint32m1_t maskedoff, vuint32m1_t vs2, size_t rs1, size_t vl);
vuint32m2_t __riscv_vror_tu (vuint32m2_t maskedoff, vuint32m2_t vs2, vuint32m2_t vs1, size_t vl);
vuint32m2_t __riscv_vror_tu (vuint32m2_t maskedoff, vuint32m2_t vs2, size_t rs1, size_t vl);
vuint32m4_t __riscv_vror_tu (vuint32m4_t maskedoff, vuint32m4_t vs2, vuint32m4_t vs1, size_t vl);
vuint32m4_t __riscv_vror_tu (vuint32m4_t maskedoff, vuint32m4_t vs2, size_t rs1, size_t vl);
vuint32m8_t __riscv_vror_tu (vuint32m8_t maskedoff, vuint32m8_t vs2, vuint32m8_t vs1, size_t vl);
vuint32m8_t __riscv_vror_tu (vuint32m8_t maskedoff, vuint32m8_t vs2, size_t rs1, size_t vl);
vuint64m1_t __riscv_vror_tu (vuint64m1_t maskedoff, vuint64m1_t vs2, vuint64m1_t vs1, size_t vl);
vuint64m1_t __riscv_vror_tu (vuint64m1_t maskedoff, vuint64m1_t vs2, size_t rs1, size_t vl);
vuint64m2_t __riscv_vror_tu (vuint64m2_t maskedoff, vuint64m2_t vs2, vuint64m2_t vs1, size_t vl);
vuint64m2_t __riscv_vror_tu (vuint64m2_t maskedoff, vuint64m2_t vs2, size_t rs1, size_t vl);
vuint64m4_t __riscv_vror_tu (vuint64m4_t maskedoff, vuint64m4_t vs2, vuint64m4_t vs1, size_t vl);
vuint64m4_t __riscv_vror_tu (vuint64m4_t maskedoff, vuint64m4_t vs2, size_t rs1, size_t vl);
vuint64m8_t __riscv_vror_tu (vuint64m8_t maskedoff, vuint64m8_t vs2, vuint64m8_t vs1, size_t vl);
vuint64m8_t __riscv_vror_tu (vuint64m8_t maskedoff, vuint64m8_t vs2, size_t rs1, size_t vl);
// masked functions
vuint8mf8_t __riscv_vrol_tum (vbool64_t mask, vuint8mf8_t maskedoff, vuint8mf8_t vs2, vuint8mf8_t vs1, size_t vl);
vuint8mf8_t __riscv_vrol_tum (vbool64_t mask, vuint8mf8_t maskedoff, vuint8mf8_t vs2, size_t rs1, size_t vl);
vuint8mf4_t __riscv_vrol_tum (vbool32_t mask, vuint8mf4_t maskedoff, vuint8mf4_t vs2, vuint8mf4_t vs1, size_t vl);
vuint8mf4_t __riscv_vrol_tum (vbool32_t mask, vuint8mf4_t maskedoff, vuint8mf4_t vs2, size_t rs1, size_t vl);
vuint8mf2_t __riscv_vrol_tum (vbool16_t mask, vuint8mf2_t maskedoff, vuint8mf2_t vs2, vuint8mf2_t vs1, size_t vl);
vuint8mf2_t __riscv_vrol_tum (vbool16_t mask, vuint8mf2_t maskedoff, vuint8mf2_t vs2, size_t rs1, size_t vl);
vuint8m1_t __riscv_vrol_tum (vbool8_t mask, vuint8m1_t maskedoff, vuint8m1_t vs2, vuint8m1_t vs1, size_t vl);
vuint8m1_t __riscv_vrol_tum (vbool8_t mask, vuint8m1_t maskedoff, vuint8m1_t vs2, size_t rs1, size_t vl);
vuint8m2_t __riscv_vrol_tum (vbool4_t mask, vuint8m2_t maskedoff, vuint8m2_t vs2, vuint8m2_t vs1, size_t vl);
vuint8m2_t __riscv_vrol_tum (vbool4_t mask, vuint8m2_t maskedoff, vuint8m2_t vs2, size_t rs1, size_t vl);
vuint8m4_t __riscv_vrol_tum (vbool2_t mask, vuint8m4_t maskedoff, vuint8m4_t vs2, vuint8m4_t vs1, size_t vl);
vuint8m4_t __riscv_vrol_tum (vbool2_t mask, vuint8m4_t maskedoff, vuint8m4_t vs2, size_t rs1, size_t vl);
vuint8m8_t __riscv_vrol_tum (vbool1_t mask, vuint8m8_t maskedoff, vuint8m8_t vs2, vuint8m8_t vs1, size_t vl);
vuint8m8_t __riscv_vrol_tum (vbool1_t mask, vuint8m8_t maskedoff, vuint8m8_t vs2, size_t rs1, size_t vl);
vuint16mf4_t __riscv_vrol_tum (vbool64_t mask, vuint16mf4_t maskedoff, vuint16mf4_t vs2, vuint16mf4_t vs1, size_t vl);
vuint16mf4_t __riscv_vrol_tum (vbool64_t mask, vuint16mf4_t maskedoff, vuint16mf4_t vs2, size_t rs1, size_t vl);
vuint16mf2_t __riscv_vrol_tum (vbool32_t mask, vuint16mf2_t maskedoff, vuint16mf2_t vs2, vuint16mf2_t vs1, size_t vl);
vuint16mf2_t __riscv_vrol_tum (vbool32_t mask, vuint16mf2_t maskedoff, vuint16mf2_t vs2, size_t rs1, size_t vl);
vuint16m1_t __riscv_vrol_tum (vbool16_t mask, vuint16m1_t maskedoff, vuint16m1_t vs2, vuint16m1_t vs1, size_t vl);
vuint16m1_t __riscv_vrol_tum (vbool16_t mask, vuint16m1_t maskedoff, vuint16m1_t vs2, size_t rs1, size_t vl);
vuint16m2_t __riscv_vrol_tum (vbool8_t mask, vuint16m2_t maskedoff, vuint16m2_t vs2, vuint16m2_t vs1, size_t vl);
vuint16m2_t __riscv_vrol_tum (vbool8_t mask, vuint16m2_t maskedoff, vuint16m2_t vs2, size_t rs1, size_t vl);
vuint16m4_t __riscv_vrol_tum (vbool4_t mask, vuint16m4_t maskedoff, vuint16m4_t vs2, vuint16m4_t vs1, size_t vl);
vuint16m4_t __riscv_vrol_tum (vbool4_t mask, vuint16m4_t maskedoff, vuint16m4_t vs2, size_t rs1, size_t vl);
vuint16m8_t __riscv_vrol_tum (vbool2_t mask, vuint16m8_t maskedoff, vuint16m8_t vs2, vuint16m8_t vs1, size_t vl);
vuint16m8_t __riscv_vrol_tum (vbool2_t mask, vuint16m8_t maskedoff, vuint16m8_t vs2, size_t rs1, size_t vl);
vuint32mf2_t __riscv_vrol_tum (vbool64_t mask, vuint32mf2_t maskedoff, vuint32mf2_t vs2, vuint32mf2_t vs1, size_t vl);
vuint32mf2_t __riscv_vrol_tum (vbool64_t mask, vuint32mf2_t maskedoff, vuint32mf2_t vs2, size_t rs1, size_t vl);
vuint32m1_t __riscv_vrol_tum (vbool32_t mask, vuint32m1_t maskedoff, vuint32m1_t vs2, vuint32m1_t vs1, size_t vl);
vuint32m1_t __riscv_vrol_tum (vbool32_t mask, vuint32m1_t maskedoff, vuint32m1_t vs2, size_t rs1, size_t vl);
vuint32m2_t __riscv_vrol_tum (vbool16_t mask, vuint32m2_t maskedoff, vuint32m2_t vs2, vuint32m2_t vs1, size_t vl);
vuint32m2_t __riscv_vrol_tum (vbool16_t mask, vuint32m2_t maskedoff, vuint32m2_t vs2, size_t rs1, size_t vl);
vuint32m4_t __riscv_vrol_tum (vbool8_t mask, vuint32m4_t maskedoff, vuint32m4_t vs2, vuint32m4_t vs1, size_t vl);
vuint32m4_t __riscv_vrol_tum (vbool8_t mask, vuint32m4_t maskedoff, vuint32m4_t vs2, size_t rs1, size_t vl);
vuint32m8_t __riscv_vrol_tum (vbool4_t mask, vuint32m8_t maskedoff, vuint32m8_t vs2, vuint32m8_t vs1, size_t vl);
vuint32m8_t __riscv_vrol_tum (vbool4_t mask, vuint32m8_t maskedoff, vuint32m8_t vs2, size_t rs1, size_t vl);
vuint64m1_t __riscv_vrol_tum (vbool64_t mask, vuint64m1_t maskedoff, vuint64m1_t vs2, vuint64m1_t vs1, size_t vl);
vuint64m1_t __riscv_vrol_tum (vbool64_t mask, vuint64m1_t maskedoff, vuint64m1_t vs2, size_t rs1, size_t vl);
vuint64m2_t __riscv_vrol_tum (vbool32_t mask, vuint64m2_t maskedoff, vuint64m2_t vs2, vuint64m2_t vs1, size_t vl);
vuint64m2_t __riscv_vrol_tum (vbool32_t mask, vuint64m2_t maskedoff, vuint64m2_t vs2, size_t rs1, size_t vl);
vuint64m4_t __riscv_vrol_tum (vbool16_t mask, vuint64m4_t maskedoff, vuint64m4_t vs2, vuint64m4_t vs1, size_t vl);
vuint64m4_t __riscv_vrol_tum (vbool16_t mask, vuint64m4_t maskedoff, vuint64m4_t vs2, size_t rs1, size_t vl);
vuint64m8_t __riscv_vrol_tum (vbool8_t mask, vuint64m8_t maskedoff, vuint64m8_t vs2, vuint64m8_t vs1, size_t vl);
vuint64m8_t __riscv_vrol_tum (vbool8_t mask, vuint64m8_t maskedoff, vuint64m8_t vs2, size_t rs1, size_t vl);
vuint8mf8_t __riscv_vror_tum (vbool64_t mask, vuint8mf8_t maskedoff, vuint8mf8_t vs2, vuint8mf8_t vs1, size_t vl);
vuint8mf8_t __riscv_vror_tum (vbool64_t mask, vuint8mf8_t maskedoff, vuint8mf8_t vs2, size_t rs1, size_t vl);
vuint8mf4_t __riscv_vror_tum (vbool32_t mask, vuint8mf4_t maskedoff, vuint8mf4_t vs2, vuint8mf4_t vs1, size_t vl);
vuint8mf4_t __riscv_vror_tum (vbool32_t mask, vuint8mf4_t maskedoff, vuint8mf4_t vs2, size_t rs1, size_t vl);
vuint8mf2_t __riscv_vror_tum (vbool16_t mask, vuint8mf2_t maskedoff, vuint8mf2_t vs2, vuint8mf2_t vs1, size_t vl);
vuint8mf2_t __riscv_vror_tum (vbool16_t mask, vuint8mf2_t maskedoff, vuint8mf2_t vs2, size_t rs1, size_t vl);
vuint8m1_t __riscv_vror_tum (vbool8_t mask, vuint8m1_t maskedoff, vuint8m1_t vs2, vuint8m1_t vs1, size_t vl);
vuint8m1_t __riscv_vror_tum (vbool8_t mask, vuint8m1_t maskedoff, vuint8m1_t vs2, size_t rs1, size_t vl);
vuint8m2_t __riscv_vror_tum (vbool4_t mask, vuint8m2_t maskedoff, vuint8m2_t vs2, vuint8m2_t vs1, size_t vl);
vuint8m2_t __riscv_vror_tum (vbool4_t mask, vuint8m2_t maskedoff, vuint8m2_t vs2, size_t rs1, size_t vl);
vuint8m4_t __riscv_vror_tum (vbool2_t mask, vuint8m4_t maskedoff, vuint8m4_t vs2, vuint8m4_t vs1, size_t vl);
vuint8m4_t __riscv_vror_tum (vbool2_t mask, vuint8m4_t maskedoff, vuint8m4_t vs2, size_t rs1, size_t vl);
vuint8m8_t __riscv_vror_tum (vbool1_t mask, vuint8m8_t maskedoff, vuint8m8_t vs2, vuint8m8_t vs1, size_t vl);
vuint8m8_t __riscv_vror_tum (vbool1_t mask, vuint8m8_t maskedoff, vuint8m8_t vs2, size_t rs1, size_t vl);
vuint16mf4_t __riscv_vror_tum (vbool64_t mask, vuint16mf4_t maskedoff, vuint16mf4_t vs2, vuint16mf4_t vs1, size_t vl);
vuint16mf4_t __riscv_vror_tum (vbool64_t mask, vuint16mf4_t maskedoff, vuint16mf4_t vs2, size_t rs1, size_t vl);
vuint16mf2_t __riscv_vror_tum (vbool32_t mask, vuint16mf2_t maskedoff, vuint16mf2_t vs2, vuint16mf2_t vs1, size_t vl);
vuint16mf2_t __riscv_vror_tum (vbool32_t mask, vuint16mf2_t maskedoff, vuint16mf2_t vs2, size_t rs1, size_t vl);
vuint16m1_t __riscv_vror_tum (vbool16_t mask, vuint16m1_t maskedoff, vuint16m1_t vs2, vuint16m1_t vs1, size_t vl);
vuint16m1_t __riscv_vror_tum (vbool16_t mask, vuint16m1_t maskedoff, vuint16m1_t vs2, size_t rs1, size_t vl);
vuint16m2_t __riscv_vror_tum (vbool8_t mask, vuint16m2_t maskedoff, vuint16m2_t vs2, vuint16m2_t vs1, size_t vl);
vuint16m2_t __riscv_vror_tum (vbool8_t mask, vuint16m2_t maskedoff, vuint16m2_t vs2, size_t rs1, size_t vl);
vuint16m4_t __riscv_vror_tum (vbool4_t mask, vuint16m4_t maskedoff, vuint16m4_t vs2, vuint16m4_t vs1, size_t vl);
vuint16m4_t __riscv_vror_tum (vbool4_t mask, vuint16m4_t maskedoff, vuint16m4_t vs2, size_t rs1, size_t vl);
vuint16m8_t __riscv_vror_tum (vbool2_t mask, vuint16m8_t maskedoff, vuint16m8_t vs2, vuint16m8_t vs1, size_t vl);
vuint16m8_t __riscv_vror_tum (vbool2_t mask, vuint16m8_t maskedoff, vuint16m8_t vs2, size_t rs1, size_t vl);
vuint32mf2_t __riscv_vror_tum (vbool64_t mask, vuint32mf2_t maskedoff, vuint32mf2_t vs2, vuint32mf2_t vs1, size_t vl);
vuint32mf2_t __riscv_vror_tum (vbool64_t mask, vuint32mf2_t maskedoff, vuint32mf2_t vs2, size_t rs1, size_t vl);
vuint32m1_t __riscv_vror_tum (vbool32_t mask, vuint32m1_t maskedoff, vuint32m1_t vs2, vuint32m1_t vs1, size_t vl);
vuint32m1_t __riscv_vror_tum (vbool32_t mask, vuint32m1_t maskedoff, vuint32m1_t vs2, size_t rs1, size_t vl);
vuint32m2_t __riscv_vror_tum (vbool16_t mask, vuint32m2_t maskedoff, vuint32m2_t vs2, vuint32m2_t vs1, size_t vl);
vuint32m2_t __riscv_vror_tum (vbool16_t mask, vuint32m2_t maskedoff, vuint32m2_t vs2, size_t rs1, size_t vl);
vuint32m4_t __riscv_vror_tum (vbool8_t mask, vuint32m4_t maskedoff, vuint32m4_t vs2, vuint32m4_t vs1, size_t vl);
vuint32m4_t __riscv_vror_tum (vbool8_t mask, vuint32m4_t maskedoff, vuint32m4_t vs2, size_t rs1, size_t vl);
vuint32m8_t __riscv_vror_tum (vbool4_t mask, vuint32m8_t maskedoff, vuint32m8_t vs2, vuint32m8_t vs1, size_t vl);
vuint32m8_t __riscv_vror_tum (vbool4_t mask, vuint32m8_t maskedoff, vuint32m8_t vs2, size_t rs1, size_t vl);
vuint64m1_t __riscv_vror_tum (vbool64_t mask, vuint64m1_t maskedoff, vuint64m1_t vs2, vuint64m1_t vs1, size_t vl);
vuint64m1_t __riscv_vror_tum (vbool64_t mask, vuint64m1_t maskedoff, vuint64m1_t vs2, size_t rs1, size_t vl);
vuint64m2_t __riscv_vror_tum (vbool32_t mask, vuint64m2_t maskedoff, vuint64m2_t vs2, vuint64m2_t vs1, size_t vl);
vuint64m2_t __riscv_vror_tum (vbool32_t mask, vuint64m2_t maskedoff, vuint64m2_t vs2, size_t rs1, size_t vl);
vuint64m4_t __riscv_vror_tum (vbool16_t mask, vuint64m4_t maskedoff, vuint64m4_t vs2, vuint64m4_t vs1, size_t vl);
vuint64m4_t __riscv_vror_tum (vbool16_t mask, vuint64m4_t maskedoff, vuint64m4_t vs2, size_t rs1, size_t vl);
vuint64m8_t __riscv_vror_tum (vbool8_t mask, vuint64m8_t maskedoff, vuint64m8_t vs2, vuint64m8_t vs1, size_t vl);
vuint64m8_t __riscv_vror_tum (vbool8_t mask, vuint64m8_t maskedoff, vuint64m8_t vs2, size_t rs1, size_t vl);
// masked functions
vuint8mf8_t __riscv_vrol_tumu (vbool64_t mask, vuint8mf8_t maskedoff, vuint8mf8_t vs2, vuint8mf8_t vs1, size_t vl);
vuint8mf8_t __riscv_vrol_tumu (vbool64_t mask, vuint8mf8_t maskedoff, vuint8mf8_t vs2, size_t rs1, size_t vl);
vuint8mf4_t __riscv_vrol_tumu (vbool32_t mask, vuint8mf4_t maskedoff, vuint8mf4_t vs2, vuint8mf4_t vs1, size_t vl);
vuint8mf4_t __riscv_vrol_tumu (vbool32_t mask, vuint8mf4_t maskedoff, vuint8mf4_t vs2, size_t rs1, size_t vl);
vuint8mf2_t __riscv_vrol_tumu (vbool16_t mask, vuint8mf2_t maskedoff, vuint8mf2_t vs2, vuint8mf2_t vs1, size_t vl);
vuint8mf2_t __riscv_vrol_tumu (vbool16_t mask, vuint8mf2_t maskedoff, vuint8mf2_t vs2, size_t rs1, size_t vl);
vuint8m1_t __riscv_vrol_tumu (vbool8_t mask, vuint8m1_t maskedoff, vuint8m1_t vs2, vuint8m1_t vs1, size_t vl);
vuint8m1_t __riscv_vrol_tumu (vbool8_t mask, vuint8m1_t maskedoff, vuint8m1_t vs2, size_t rs1, size_t vl);
vuint8m2_t __riscv_vrol_tumu (vbool4_t mask, vuint8m2_t maskedoff, vuint8m2_t vs2, vuint8m2_t vs1, size_t vl);
vuint8m2_t __riscv_vrol_tumu (vbool4_t mask, vuint8m2_t maskedoff, vuint8m2_t vs2, size_t rs1, size_t vl);
vuint8m4_t __riscv_vrol_tumu (vbool2_t mask, vuint8m4_t maskedoff, vuint8m4_t vs2, vuint8m4_t vs1, size_t vl);
vuint8m4_t __riscv_vrol_tumu (vbool2_t mask, vuint8m4_t maskedoff, vuint8m4_t vs2, size_t rs1, size_t vl);
vuint8m8_t __riscv_vrol_tumu (vbool1_t mask, vuint8m8_t maskedoff, vuint8m8_t vs2, vuint8m8_t vs1, size_t vl);
vuint8m8_t __riscv_vrol_tumu (vbool1_t mask, vuint8m8_t maskedoff, vuint8m8_t vs2, size_t rs1, size_t vl);
vuint16mf4_t __riscv_vrol_tumu (vbool64_t mask, vuint16mf4_t maskedoff, vuint16mf4_t vs2, vuint16mf4_t vs1, size_t vl);
vuint16mf4_t __riscv_vrol_tumu (vbool64_t mask, vuint16mf4_t maskedoff, vuint16mf4_t vs2, size_t rs1, size_t vl);
vuint16mf2_t __riscv_vrol_tumu (vbool32_t mask, vuint16mf2_t maskedoff, vuint16mf2_t vs2, vuint16mf2_t vs1, size_t vl);
vuint16mf2_t __riscv_vrol_tumu (vbool32_t mask, vuint16mf2_t maskedoff, vuint16mf2_t vs2, size_t rs1, size_t vl);
vuint16m1_t __riscv_vrol_tumu (vbool16_t mask, vuint16m1_t maskedoff, vuint16m1_t vs2, vuint16m1_t vs1, size_t vl);
vuint16m1_t __riscv_vrol_tumu (vbool16_t mask, vuint16m1_t maskedoff, vuint16m1_t vs2, size_t rs1, size_t vl);
vuint16m2_t __riscv_vrol_tumu (vbool8_t mask, vuint16m2_t maskedoff, vuint16m2_t vs2, vuint16m2_t vs1, size_t vl);
vuint16m2_t __riscv_vrol_tumu (vbool8_t mask, vuint16m2_t maskedoff, vuint16m2_t vs2, size_t rs1, size_t vl);
vuint16m4_t __riscv_vrol_tumu (vbool4_t mask, vuint16m4_t maskedoff, vuint16m4_t vs2, vuint16m4_t vs1, size_t vl);
vuint16m4_t __riscv_vrol_tumu (vbool4_t mask, vuint16m4_t maskedoff, vuint16m4_t vs2, size_t rs1, size_t vl);
vuint16m8_t __riscv_vrol_tumu (vbool2_t mask, vuint16m8_t maskedoff, vuint16m8_t vs2, vuint16m8_t vs1, size_t vl);
vuint16m8_t __riscv_vrol_tumu (vbool2_t mask, vuint16m8_t maskedoff, vuint16m8_t vs2, size_t rs1, size_t vl);
vuint32mf2_t __riscv_vrol_tumu (vbool64_t mask, vuint32mf2_t maskedoff, vuint32mf2_t vs2, vuint32mf2_t vs1, size_t vl);
vuint32mf2_t __riscv_vrol_tumu (vbool64_t mask, vuint32mf2_t maskedoff, vuint32mf2_t vs2, size_t rs1, size_t vl);
vuint32m1_t __riscv_vrol_tumu (vbool32_t mask, vuint32m1_t maskedoff, vuint32m1_t vs2, vuint32m1_t vs1, size_t vl);
vuint32m1_t __riscv_vrol_tumu (vbool32_t mask, vuint32m1_t maskedoff, vuint32m1_t vs2, size_t rs1, size_t vl);
vuint32m2_t __riscv_vrol_tumu (vbool16_t mask, vuint32m2_t maskedoff, vuint32m2_t vs2, vuint32m2_t vs1, size_t vl);
vuint32m2_t __riscv_vrol_tumu (vbool16_t mask, vuint32m2_t maskedoff, vuint32m2_t vs2, size_t rs1, size_t vl);
vuint32m4_t __riscv_vrol_tumu (vbool8_t mask, vuint32m4_t maskedoff, vuint32m4_t vs2, vuint32m4_t vs1, size_t vl);
vuint32m4_t __riscv_vrol_tumu (vbool8_t mask, vuint32m4_t maskedoff, vuint32m4_t vs2, size_t rs1, size_t vl);
vuint32m8_t __riscv_vrol_tumu (vbool4_t mask, vuint32m8_t maskedoff, vuint32m8_t vs2, vuint32m8_t vs1, size_t vl);
vuint32m8_t __riscv_vrol_tumu (vbool4_t mask, vuint32m8_t maskedoff, vuint32m8_t vs2, size_t rs1, size_t vl);
vuint64m1_t __riscv_vrol_tumu (vbool64_t mask, vuint64m1_t maskedoff, vuint64m1_t vs2, vuint64m1_t vs1, size_t vl);
vuint64m1_t __riscv_vrol_tumu (vbool64_t mask, vuint64m1_t maskedoff, vuint64m1_t vs2, size_t rs1, size_t vl);
vuint64m2_t __riscv_vrol_tumu (vbool32_t mask, vuint64m2_t maskedoff, vuint64m2_t vs2, vuint64m2_t vs1, size_t vl);
vuint64m2_t __riscv_vrol_tumu (vbool32_t mask, vuint64m2_t maskedoff, vuint64m2_t vs2, size_t rs1, size_t vl);
vuint64m4_t __riscv_vrol_tumu (vbool16_t mask, vuint64m4_t maskedoff, vuint64m4_t vs2, vuint64m4_t vs1, size_t vl);
vuint64m4_t __riscv_vrol_tumu (vbool16_t mask, vuint64m4_t maskedoff, vuint64m4_t vs2, size_t rs1, size_t vl);
vuint64m8_t __riscv_vrol_tumu (vbool8_t mask, vuint64m8_t maskedoff, vuint64m8_t vs2, vuint64m8_t vs1, size_t vl);
vuint64m8_t __riscv_vrol_tumu (vbool8_t mask, vuint64m8_t maskedoff, vuint64m8_t vs2, size_t rs1, size_t vl);
vuint8mf8_t __riscv_vror_tumu (vbool64_t mask, vuint8mf8_t maskedoff, vuint8mf8_t vs2, vuint8mf8_t vs1, size_t vl);
vuint8mf8_t __riscv_vror_tumu (vbool64_t mask, vuint8mf8_t maskedoff, vuint8mf8_t vs2, size_t rs1, size_t vl);
vuint8mf4_t __riscv_vror_tumu (vbool32_t mask, vuint8mf4_t maskedoff, vuint8mf4_t vs2, vuint8mf4_t vs1, size_t vl);
vuint8mf4_t __riscv_vror_tumu (vbool32_t mask, vuint8mf4_t maskedoff, vuint8mf4_t vs2, size_t rs1, size_t vl);
vuint8mf2_t __riscv_vror_tumu (vbool16_t mask, vuint8mf2_t maskedoff, vuint8mf2_t vs2, vuint8mf2_t vs1, size_t vl);
vuint8mf2_t __riscv_vror_tumu (vbool16_t mask, vuint8mf2_t maskedoff, vuint8mf2_t vs2, size_t rs1, size_t vl);
vuint8m1_t __riscv_vror_tumu (vbool8_t mask, vuint8m1_t maskedoff, vuint8m1_t vs2, vuint8m1_t vs1, size_t vl);
vuint8m1_t __riscv_vror_tumu (vbool8_t mask, vuint8m1_t maskedoff, vuint8m1_t vs2, size_t rs1, size_t vl);
vuint8m2_t __riscv_vror_tumu (vbool4_t mask, vuint8m2_t maskedoff, vuint8m2_t vs2, vuint8m2_t vs1, size_t vl);
vuint8m2_t __riscv_vror_tumu (vbool4_t mask, vuint8m2_t maskedoff, vuint8m2_t vs2, size_t rs1, size_t vl);
vuint8m4_t __riscv_vror_tumu (vbool2_t mask, vuint8m4_t maskedoff, vuint8m4_t vs2, vuint8m4_t vs1, size_t vl);
vuint8m4_t __riscv_vror_tumu (vbool2_t mask, vuint8m4_t maskedoff, vuint8m4_t vs2, size_t rs1, size_t vl);
vuint8m8_t __riscv_vror_tumu (vbool1_t mask, vuint8m8_t maskedoff, vuint8m8_t vs2, vuint8m8_t vs1, size_t vl);
vuint8m8_t __riscv_vror_tumu (vbool1_t mask, vuint8m8_t maskedoff, vuint8m8_t vs2, size_t rs1, size_t vl);
vuint16mf4_t __riscv_vror_tumu (vbool64_t mask, vuint16mf4_t maskedoff, vuint16mf4_t vs2, vuint16mf4_t vs1, size_t vl);
vuint16mf4_t __riscv_vror_tumu (vbool64_t mask, vuint16mf4_t maskedoff, vuint16mf4_t vs2, size_t rs1, size_t vl);
vuint16mf2_t __riscv_vror_tumu (vbool32_t mask, vuint16mf2_t maskedoff, vuint16mf2_t vs2, vuint16mf2_t vs1, size_t vl);
vuint16mf2_t __riscv_vror_tumu (vbool32_t mask, vuint16mf2_t maskedoff, vuint16mf2_t vs2, size_t rs1, size_t vl);
vuint16m1_t __riscv_vror_tumu (vbool16_t mask, vuint16m1_t maskedoff, vuint16m1_t vs2, vuint16m1_t vs1, size_t vl);
vuint16m1_t __riscv_vror_tumu (vbool16_t mask, vuint16m1_t maskedoff, vuint16m1_t vs2, size_t rs1, size_t vl);
vuint16m2_t __riscv_vror_tumu (vbool8_t mask, vuint16m2_t maskedoff, vuint16m2_t vs2, vuint16m2_t vs1, size_t vl);
vuint16m2_t __riscv_vror_tumu (vbool8_t mask, vuint16m2_t maskedoff, vuint16m2_t vs2, size_t rs1, size_t vl);
vuint16m4_t __riscv_vror_tumu (vbool4_t mask, vuint16m4_t maskedoff, vuint16m4_t vs2, vuint16m4_t vs1, size_t vl);
vuint16m4_t __riscv_vror_tumu (vbool4_t mask, vuint16m4_t maskedoff, vuint16m4_t vs2, size_t rs1, size_t vl);
vuint16m8_t __riscv_vror_tumu (vbool2_t mask, vuint16m8_t maskedoff, vuint16m8_t vs2, vuint16m8_t vs1, size_t vl);
vuint16m8_t __riscv_vror_tumu (vbool2_t mask, vuint16m8_t maskedoff, vuint16m8_t vs2, size_t rs1, size_t vl);
vuint32mf2_t __riscv_vror_tumu (vbool64_t mask, vuint32mf2_t maskedoff, vuint32mf2_t vs2, vuint32mf2_t vs1, size_t vl);
vuint32mf2_t __riscv_vror_tumu (vbool64_t mask, vuint32mf2_t maskedoff, vuint32mf2_t vs2, size_t rs1, size_t vl);
vuint32m1_t __riscv_vror_tumu (vbool32_t mask, vuint32m1_t maskedoff, vuint32m1_t vs2, vuint32m1_t vs1, size_t vl);
vuint32m1_t __riscv_vror_tumu (vbool32_t mask, vuint32m1_t maskedoff, vuint32m1_t vs2, size_t rs1, size_t vl);
vuint32m2_t __riscv_vror_tumu (vbool16_t mask, vuint32m2_t maskedoff, vuint32m2_t vs2, vuint32m2_t vs1, size_t vl);
vuint32m2_t __riscv_vror_tumu (vbool16_t mask, vuint32m2_t maskedoff, vuint32m2_t vs2, size_t rs1, size_t vl);
vuint32m4_t __riscv_vror_tumu (vbool8_t mask, vuint32m4_t maskedoff, vuint32m4_t vs2, vuint32m4_t vs1, size_t vl);
vuint32m4_t __riscv_vror_tumu (vbool8_t mask, vuint32m4_t maskedoff, vuint32m4_t vs2, size_t rs1, size_t vl);
vuint32m8_t __riscv_vror_tumu (vbool4_t mask, vuint32m8_t maskedoff, vuint32m8_t vs2, vuint32m8_t vs1, size_t vl);
vuint32m8_t __riscv_vror_tumu (vbool4_t mask, vuint32m8_t maskedoff, vuint32m8_t vs2, size_t rs1, size_t vl);
vuint64m1_t __riscv_vror_tumu (vbool64_t mask, vuint64m1_t maskedoff, vuint64m1_t vs2, vuint64m1_t vs1, size_t vl);
vuint64m1_t __riscv_vror_tumu (vbool64_t mask, vuint64m1_t maskedoff, vuint64m1_t vs2, size_t rs1, size_t vl);
vuint64m2_t __riscv_vror_tumu (vbool32_t mask, vuint64m2_t maskedoff, vuint64m2_t vs2, vuint64m2_t vs1, size_t vl);
vuint64m2_t __riscv_vror_tumu (vbool32_t mask, vuint64m2_t maskedoff, vuint64m2_t vs2, size_t rs1, size_t vl);
vuint64m4_t __riscv_vror_tumu (vbool16_t mask, vuint64m4_t maskedoff, vuint64m4_t vs2, vuint64m4_t vs1, size_t vl);
vuint64m4_t __riscv_vror_tumu (vbool16_t mask, vuint64m4_t maskedoff, vuint64m4_t vs2, size_t rs1, size_t vl);
vuint64m8_t __riscv_vror_tumu (vbool8_t mask, vuint64m8_t maskedoff, vuint64m8_t vs2, vuint64m8_t vs1, size_t vl);
vuint64m8_t __riscv_vror_tumu (vbool8_t mask, vuint64m8_t maskedoff, vuint64m8_t vs2, size_t rs1, size_t vl);
// masked functions
vuint8mf8_t __riscv_vrol_mu (vbool64_t mask, vuint8mf8_t maskedoff, vuint8mf8_t vs2, vuint8mf8_t vs1, size_t vl);
vuint8mf8_t __riscv_vrol_mu (vbool64_t mask, vuint8mf8_t maskedoff, vuint8mf8_t vs2, size_t rs1, size_t vl);
vuint8mf4_t __riscv_vrol_mu (vbool32_t mask, vuint8mf4_t maskedoff, vuint8mf4_t vs2, vuint8mf4_t vs1, size_t vl);
vuint8mf4_t __riscv_vrol_mu (vbool32_t mask, vuint8mf4_t maskedoff, vuint8mf4_t vs2, size_t rs1, size_t vl);
vuint8mf2_t __riscv_vrol_mu (vbool16_t mask, vuint8mf2_t maskedoff, vuint8mf2_t vs2, vuint8mf2_t vs1, size_t vl);
vuint8mf2_t __riscv_vrol_mu (vbool16_t mask, vuint8mf2_t maskedoff, vuint8mf2_t vs2, size_t rs1, size_t vl);
vuint8m1_t __riscv_vrol_mu (vbool8_t mask, vuint8m1_t maskedoff, vuint8m1_t vs2, vuint8m1_t vs1, size_t vl);
vuint8m1_t __riscv_vrol_mu (vbool8_t mask, vuint8m1_t maskedoff, vuint8m1_t vs2, size_t rs1, size_t vl);
vuint8m2_t __riscv_vrol_mu (vbool4_t mask, vuint8m2_t maskedoff, vuint8m2_t vs2, vuint8m2_t vs1, size_t vl);
vuint8m2_t __riscv_vrol_mu (vbool4_t mask, vuint8m2_t maskedoff, vuint8m2_t vs2, size_t rs1, size_t vl);
vuint8m4_t __riscv_vrol_mu (vbool2_t mask, vuint8m4_t maskedoff, vuint8m4_t vs2, vuint8m4_t vs1, size_t vl);
vuint8m4_t __riscv_vrol_mu (vbool2_t mask, vuint8m4_t maskedoff, vuint8m4_t vs2, size_t rs1, size_t vl);
vuint8m8_t __riscv_vrol_mu (vbool1_t mask, vuint8m8_t maskedoff, vuint8m8_t vs2, vuint8m8_t vs1, size_t vl);
vuint8m8_t __riscv_vrol_mu (vbool1_t mask, vuint8m8_t maskedoff, vuint8m8_t vs2, size_t rs1, size_t vl);
vuint16mf4_t __riscv_vrol_mu (vbool64_t mask, vuint16mf4_t maskedoff, vuint16mf4_t vs2, vuint16mf4_t vs1, size_t vl);
vuint16mf4_t __riscv_vrol_mu (vbool64_t mask, vuint16mf4_t maskedoff, vuint16mf4_t vs2, size_t rs1, size_t vl);
vuint16mf2_t __riscv_vrol_mu (vbool32_t mask, vuint16mf2_t maskedoff, vuint16mf2_t vs2, vuint16mf2_t vs1, size_t vl);
vuint16mf2_t __riscv_vrol_mu (vbool32_t mask, vuint16mf2_t maskedoff, vuint16mf2_t vs2, size_t rs1, size_t vl);
vuint16m1_t __riscv_vrol_mu (vbool16_t mask, vuint16m1_t maskedoff, vuint16m1_t vs2, vuint16m1_t vs1, size_t vl);
vuint16m1_t __riscv_vrol_mu (vbool16_t mask, vuint16m1_t maskedoff, vuint16m1_t vs2, size_t rs1, size_t vl);
vuint16m2_t __riscv_vrol_mu (vbool8_t mask, vuint16m2_t maskedoff, vuint16m2_t vs2, vuint16m2_t vs1, size_t vl);
vuint16m2_t __riscv_vrol_mu (vbool8_t mask, vuint16m2_t maskedoff, vuint16m2_t vs2, size_t rs1, size_t vl);
vuint16m4_t __riscv_vrol_mu (vbool4_t mask, vuint16m4_t maskedoff, vuint16m4_t vs2, vuint16m4_t vs1, size_t vl);
vuint16m4_t __riscv_vrol_mu (vbool4_t mask, vuint16m4_t maskedoff, vuint16m4_t vs2, size_t rs1, size_t vl);
vuint16m8_t __riscv_vrol_mu (vbool2_t mask, vuint16m8_t maskedoff, vuint16m8_t vs2, vuint16m8_t vs1, size_t vl);
vuint16m8_t __riscv_vrol_mu (vbool2_t mask, vuint16m8_t maskedoff, vuint16m8_t vs2, size_t rs1, size_t vl);
vuint32mf2_t __riscv_vrol_mu (vbool64_t mask, vuint32mf2_t maskedoff, vuint32mf2_t vs2, vuint32mf2_t vs1, size_t vl);
vuint32mf2_t __riscv_vrol_mu (vbool64_t mask, vuint32mf2_t maskedoff, vuint32mf2_t vs2, size_t rs1, size_t vl);
vuint32m1_t __riscv_vrol_mu (vbool32_t mask, vuint32m1_t maskedoff, vuint32m1_t vs2, vuint32m1_t vs1, size_t vl);
vuint32m1_t __riscv_vrol_mu (vbool32_t mask, vuint32m1_t maskedoff, vuint32m1_t vs2, size_t rs1, size_t vl);
vuint32m2_t __riscv_vrol_mu (vbool16_t mask, vuint32m2_t maskedoff, vuint32m2_t vs2, vuint32m2_t vs1, size_t vl);
vuint32m2_t __riscv_vrol_mu (vbool16_t mask, vuint32m2_t maskedoff, vuint32m2_t vs2, size_t rs1, size_t vl);
vuint32m4_t __riscv_vrol_mu (vbool8_t mask, vuint32m4_t maskedoff, vuint32m4_t vs2, vuint32m4_t vs1, size_t vl);
vuint32m4_t __riscv_vrol_mu (vbool8_t mask, vuint32m4_t maskedoff, vuint32m4_t vs2, size_t rs1, size_t vl);
vuint32m8_t __riscv_vrol_mu (vbool4_t mask, vuint32m8_t maskedoff, vuint32m8_t vs2, vuint32m8_t vs1, size_t vl);
vuint32m8_t __riscv_vrol_mu (vbool4_t mask, vuint32m8_t maskedoff, vuint32m8_t vs2, size_t rs1, size_t vl);
vuint64m1_t __riscv_vrol_mu (vbool64_t mask, vuint64m1_t maskedoff, vuint64m1_t vs2, vuint64m1_t vs1, size_t vl);
vuint64m1_t __riscv_vrol_mu (vbool64_t mask, vuint64m1_t maskedoff, vuint64m1_t vs2, size_t rs1, size_t vl);
vuint64m2_t __riscv_vrol_mu (vbool32_t mask, vuint64m2_t maskedoff, vuint64m2_t vs2, vuint64m2_t vs1, size_t vl);
vuint64m2_t __riscv_vrol_mu (vbool32_t mask, vuint64m2_t maskedoff, vuint64m2_t vs2, size_t rs1, size_t vl);
vuint64m4_t __riscv_vrol_mu (vbool16_t mask, vuint64m4_t maskedoff, vuint64m4_t vs2, vuint64m4_t vs1, size_t vl);
vuint64m4_t __riscv_vrol_mu (vbool16_t mask, vuint64m4_t maskedoff, vuint64m4_t vs2, size_t rs1, size_t vl);
vuint64m8_t __riscv_vrol_mu (vbool8_t mask, vuint64m8_t maskedoff, vuint64m8_t vs2, vuint64m8_t vs1, size_t vl);
vuint64m8_t __riscv_vrol_mu (vbool8_t mask, vuint64m8_t maskedoff, vuint64m8_t vs2, size_t rs1, size_t vl);
vuint8mf8_t __riscv_vror_mu (vbool64_t mask, vuint8mf8_t maskedoff, vuint8mf8_t vs2, vuint8mf8_t vs1, size_t vl);
vuint8mf8_t __riscv_vror_mu (vbool64_t mask, vuint8mf8_t maskedoff, vuint8mf8_t vs2, size_t rs1, size_t vl);
vuint8mf4_t __riscv_vror_mu (vbool32_t mask, vuint8mf4_t maskedoff, vuint8mf4_t vs2, vuint8mf4_t vs1, size_t vl);
vuint8mf4_t __riscv_vror_mu (vbool32_t mask, vuint8mf4_t maskedoff, vuint8mf4_t vs2, size_t rs1, size_t vl);
vuint8mf2_t __riscv_vror_mu (vbool16_t mask, vuint8mf2_t maskedoff, vuint8mf2_t vs2, vuint8mf2_t vs1, size_t vl);
vuint8mf2_t __riscv_vror_mu (vbool16_t mask, vuint8mf2_t maskedoff, vuint8mf2_t vs2, size_t rs1, size_t vl);
vuint8m1_t __riscv_vror_mu (vbool8_t mask, vuint8m1_t maskedoff, vuint8m1_t vs2, vuint8m1_t vs1, size_t vl);
vuint8m1_t __riscv_vror_mu (vbool8_t mask, vuint8m1_t maskedoff, vuint8m1_t vs2, size_t rs1, size_t vl);
vuint8m2_t __riscv_vror_mu (vbool4_t mask, vuint8m2_t maskedoff, vuint8m2_t vs2, vuint8m2_t vs1, size_t vl);
vuint8m2_t __riscv_vror_mu (vbool4_t mask, vuint8m2_t maskedoff, vuint8m2_t vs2, size_t rs1, size_t vl);
vuint8m4_t __riscv_vror_mu (vbool2_t mask, vuint8m4_t maskedoff, vuint8m4_t vs2, vuint8m4_t vs1, size_t vl);
vuint8m4_t __riscv_vror_mu (vbool2_t mask, vuint8m4_t maskedoff, vuint8m4_t vs2, size_t rs1, size_t vl);
vuint8m8_t __riscv_vror_mu (vbool1_t mask, vuint8m8_t maskedoff, vuint8m8_t vs2, vuint8m8_t vs1, size_t vl);
vuint8m8_t __riscv_vror_mu (vbool1_t mask, vuint8m8_t maskedoff, vuint8m8_t vs2, size_t rs1, size_t vl);
vuint16mf4_t __riscv_vror_mu (vbool64_t mask, vuint16mf4_t maskedoff, vuint16mf4_t vs2, vuint16mf4_t vs1, size_t vl);
vuint16mf4_t __riscv_vror_mu (vbool64_t mask, vuint16mf4_t maskedoff, vuint16mf4_t vs2, size_t rs1, size_t vl);
vuint16mf2_t __riscv_vror_mu (vbool32_t mask, vuint16mf2_t maskedoff, vuint16mf2_t vs2, vuint16mf2_t vs1, size_t vl);
vuint16mf2_t __riscv_vror_mu (vbool32_t mask, vuint16mf2_t maskedoff, vuint16mf2_t vs2, size_t rs1, size_t vl);
vuint16m1_t __riscv_vror_mu (vbool16_t mask, vuint16m1_t maskedoff, vuint16m1_t vs2, vuint16m1_t vs1, size_t vl);
vuint16m1_t __riscv_vror_mu (vbool16_t mask, vuint16m1_t maskedoff, vuint16m1_t vs2, size_t rs1, size_t vl);
vuint16m2_t __riscv_vror_mu (vbool8_t mask, vuint16m2_t maskedoff, vuint16m2_t vs2, vuint16m2_t vs1, size_t vl);
vuint16m2_t __riscv_vror_mu (vbool8_t mask, vuint16m2_t maskedoff, vuint16m2_t vs2, size_t rs1, size_t vl);
vuint16m4_t __riscv_vror_mu (vbool4_t mask, vuint16m4_t maskedoff, vuint16m4_t vs2, vuint16m4_t vs1, size_t vl);
vuint16m4_t __riscv_vror_mu (vbool4_t mask, vuint16m4_t maskedoff, vuint16m4_t vs2, size_t rs1, size_t vl);
vuint16m8_t __riscv_vror_mu (vbool2_t mask, vuint16m8_t maskedoff, vuint16m8_t vs2, vuint16m8_t vs1, size_t vl);
vuint16m8_t __riscv_vror_mu (vbool2_t mask, vuint16m8_t maskedoff, vuint16m8_t vs2, size_t rs1, size_t vl);
vuint32mf2_t __riscv_vror_mu (vbool64_t mask, vuint32mf2_t maskedoff, vuint32mf2_t vs2, vuint32mf2_t vs1, size_t vl);
vuint32mf2_t __riscv_vror_mu (vbool64_t mask, vuint32mf2_t maskedoff, vuint32mf2_t vs2, size_t rs1, size_t vl);
vuint32m1_t __riscv_vror_mu (vbool32_t mask, vuint32m1_t maskedoff, vuint32m1_t vs2, vuint32m1_t vs1, size_t vl);
vuint32m1_t __riscv_vror_mu (vbool32_t mask, vuint32m1_t maskedoff, vuint32m1_t vs2, size_t rs1, size_t vl);
vuint32m2_t __riscv_vror_mu (vbool16_t mask, vuint32m2_t maskedoff, vuint32m2_t vs2, vuint32m2_t vs1, size_t vl);
vuint32m2_t __riscv_vror_mu (vbool16_t mask, vuint32m2_t maskedoff, vuint32m2_t vs2, size_t rs1, size_t vl);
vuint32m4_t __riscv_vror_mu (vbool8_t mask, vuint32m4_t maskedoff, vuint32m4_t vs2, vuint32m4_t vs1, size_t vl);
vuint32m4_t __riscv_vror_mu (vbool8_t mask, vuint32m4_t maskedoff, vuint32m4_t vs2, size_t rs1, size_t vl);
vuint32m8_t __riscv_vror_mu (vbool4_t mask, vuint32m8_t maskedoff, vuint32m8_t vs2, vuint32m8_t vs1, size_t vl);
vuint32m8_t __riscv_vror_mu (vbool4_t mask, vuint32m8_t maskedoff, vuint32m8_t vs2, size_t rs1, size_t vl);
vuint64m1_t __riscv_vror_mu (vbool64_t mask, vuint64m1_t maskedoff, vuint64m1_t vs2, vuint64m1_t vs1, size_t vl);
vuint64m1_t __riscv_vror_mu (vbool64_t mask, vuint64m1_t maskedoff, vuint64m1_t vs2, size_t rs1, size_t vl);
vuint64m2_t __riscv_vror_mu (vbool32_t mask, vuint64m2_t maskedoff, vuint64m2_t vs2, vuint64m2_t vs1, size_t vl);
vuint64m2_t __riscv_vror_mu (vbool32_t mask, vuint64m2_t maskedoff, vuint64m2_t vs2, size_t rs1, size_t vl);
vuint64m4_t __riscv_vror_mu (vbool16_t mask, vuint64m4_t maskedoff, vuint64m4_t vs2, vuint64m4_t vs1, size_t vl);
vuint64m4_t __riscv_vror_mu (vbool16_t mask, vuint64m4_t maskedoff, vuint64m4_t vs2, size_t rs1, size_t vl);
vuint64m8_t __riscv_vror_mu (vbool8_t mask, vuint64m8_t maskedoff, vuint64m8_t vs2, vuint64m8_t vs1, size_t vl);
vuint64m8_t __riscv_vror_mu (vbool8_t mask, vuint64m8_t maskedoff, vuint64m8_t vs2, size_t rs1, size_t vl);
```

### [Vector Bit-manipulation used in Cryptography - Shift]():

**Prototypes:**
``` C
vuint16mf4_t __riscv_vwsll_tu (vuint16mf4_t maskedoff, vuint8mf8_t vs2, vuint8mf8_t vs1, size_t vl);
vuint16mf4_t __riscv_vwsll_tu (vuint16mf4_t maskedoff, vuint8mf8_t vs2, size_t rs1, size_t vl);
vuint16mf2_t __riscv_vwsll_tu (vuint16mf2_t maskedoff, vuint8mf4_t vs2, vuint8mf4_t vs1, size_t vl);
vuint16mf2_t __riscv_vwsll_tu (vuint16mf2_t maskedoff, vuint8mf4_t vs2, size_t rs1, size_t vl);
vuint16m1_t __riscv_vwsll_tu (vuint16m1_t maskedoff, vuint8mf2_t vs2, vuint8mf2_t vs1, size_t vl);
vuint16m1_t __riscv_vwsll_tu (vuint16m1_t maskedoff, vuint8mf2_t vs2, size_t rs1, size_t vl);
vuint16m2_t __riscv_vwsll_tu (vuint16m2_t maskedoff, vuint8m1_t vs2, vuint8m1_t vs1, size_t vl);
vuint16m2_t __riscv_vwsll_tu (vuint16m2_t maskedoff, vuint8m1_t vs2, size_t rs1, size_t vl);
vuint16m4_t __riscv_vwsll_tu (vuint16m4_t maskedoff, vuint8m2_t vs2, vuint8m2_t vs1, size_t vl);
vuint16m4_t __riscv_vwsll_tu (vuint16m4_t maskedoff, vuint8m2_t vs2, size_t rs1, size_t vl);
vuint16m8_t __riscv_vwsll_tu (vuint16m8_t maskedoff, vuint8m4_t vs2, vuint8m4_t vs1, size_t vl);
vuint16m8_t __riscv_vwsll_tu (vuint16m8_t maskedoff, vuint8m4_t vs2, size_t rs1, size_t vl);
vuint32mf2_t __riscv_vwsll_tu (vuint32mf2_t maskedoff, vuint16mf4_t vs2, vuint16mf4_t vs1, size_t vl);
vuint32mf2_t __riscv_vwsll_tu (vuint32mf2_t maskedoff, vuint16mf4_t vs2, size_t rs1, size_t vl);
vuint32m1_t __riscv_vwsll_tu (vuint32m1_t maskedoff, vuint16mf2_t vs2, vuint16mf2_t vs1, size_t vl);
vuint32m1_t __riscv_vwsll_tu (vuint32m1_t maskedoff, vuint16mf2_t vs2, size_t rs1, size_t vl);
vuint32m2_t __riscv_vwsll_tu (vuint32m2_t maskedoff, vuint16m1_t vs2, vuint16m1_t vs1, size_t vl);
vuint32m2_t __riscv_vwsll_tu (vuint32m2_t maskedoff, vuint16m1_t vs2, size_t rs1, size_t vl);
vuint32m4_t __riscv_vwsll_tu (vuint32m4_t maskedoff, vuint16m2_t vs2, vuint16m2_t vs1, size_t vl);
vuint32m4_t __riscv_vwsll_tu (vuint32m4_t maskedoff, vuint16m2_t vs2, size_t rs1, size_t vl);
vuint32m8_t __riscv_vwsll_tu (vuint32m8_t maskedoff, vuint16m4_t vs2, vuint16m4_t vs1, size_t vl);
vuint32m8_t __riscv_vwsll_tu (vuint32m8_t maskedoff, vuint16m4_t vs2, size_t rs1, size_t vl);
vuint64m1_t __riscv_vwsll_tu (vuint64m1_t maskedoff, vuint32mf2_t vs2, vuint32mf2_t vs1, size_t vl);
vuint64m1_t __riscv_vwsll_tu (vuint64m1_t maskedoff, vuint32mf2_t vs2, size_t rs1, size_t vl);
vuint64m2_t __riscv_vwsll_tu (vuint64m2_t maskedoff, vuint32m1_t vs2, vuint32m1_t vs1, size_t vl);
vuint64m2_t __riscv_vwsll_tu (vuint64m2_t maskedoff, vuint32m1_t vs2, size_t rs1, size_t vl);
vuint64m4_t __riscv_vwsll_tu (vuint64m4_t maskedoff, vuint32m2_t vs2, vuint32m2_t vs1, size_t vl);
vuint64m4_t __riscv_vwsll_tu (vuint64m4_t maskedoff, vuint32m2_t vs2, size_t rs1, size_t vl);
vuint64m8_t __riscv_vwsll_tu (vuint64m8_t maskedoff, vuint32m4_t vs2, vuint32m4_t vs1, size_t vl);
vuint64m8_t __riscv_vwsll_tu (vuint64m8_t maskedoff, vuint32m4_t vs2, size_t rs1, size_t vl);
// masked functions
vuint16mf4_t __riscv_vwsll_tum (vbool64_t mask, vuint16mf4_t maskedoff, vuint8mf8_t vs2, vuint8mf8_t vs1, size_t vl);
vuint16mf4_t __riscv_vwsll_tum (vbool64_t mask, vuint16mf4_t maskedoff, vuint8mf8_t vs2, size_t rs1, size_t vl);
vuint16mf2_t __riscv_vwsll_tum (vbool32_t mask, vuint16mf2_t maskedoff, vuint8mf4_t vs2, vuint8mf4_t vs1, size_t vl);
vuint16mf2_t __riscv_vwsll_tum (vbool32_t mask, vuint16mf2_t maskedoff, vuint8mf4_t vs2, size_t rs1, size_t vl);
vuint16m1_t __riscv_vwsll_tum (vbool16_t mask, vuint16m1_t maskedoff, vuint8mf2_t vs2, vuint8mf2_t vs1, size_t vl);
vuint16m1_t __riscv_vwsll_tum (vbool16_t mask, vuint16m1_t maskedoff, vuint8mf2_t vs2, size_t rs1, size_t vl);
vuint16m2_t __riscv_vwsll_tum (vbool8_t mask, vuint16m2_t maskedoff, vuint8m1_t vs2, vuint8m1_t vs1, size_t vl);
vuint16m2_t __riscv_vwsll_tum (vbool8_t mask, vuint16m2_t maskedoff, vuint8m1_t vs2, size_t rs1, size_t vl);
vuint16m4_t __riscv_vwsll_tum (vbool4_t mask, vuint16m4_t maskedoff, vuint8m2_t vs2, vuint8m2_t vs1, size_t vl);
vuint16m4_t __riscv_vwsll_tum (vbool4_t mask, vuint16m4_t maskedoff, vuint8m2_t vs2, size_t rs1, size_t vl);
vuint16m8_t __riscv_vwsll_tum (vbool2_t mask, vuint16m8_t maskedoff, vuint8m4_t vs2, vuint8m4_t vs1, size_t vl);
vuint16m8_t __riscv_vwsll_tum (vbool2_t mask, vuint16m8_t maskedoff, vuint8m4_t vs2, size_t rs1, size_t vl);
vuint32mf2_t __riscv_vwsll_tum (vbool64_t mask, vuint32mf2_t maskedoff, vuint16mf4_t vs2, vuint16mf4_t vs1, size_t vl);
vuint32mf2_t __riscv_vwsll_tum (vbool64_t mask, vuint32mf2_t maskedoff, vuint16mf4_t vs2, size_t rs1, size_t vl);
vuint32m1_t __riscv_vwsll_tum (vbool32_t mask, vuint32m1_t maskedoff, vuint16mf2_t vs2, vuint16mf2_t vs1, size_t vl);
vuint32m1_t __riscv_vwsll_tum (vbool32_t mask, vuint32m1_t maskedoff, vuint16mf2_t vs2, size_t rs1, size_t vl);
vuint32m2_t __riscv_vwsll_tum (vbool16_t mask, vuint32m2_t maskedoff, vuint16m1_t vs2, vuint16m1_t vs1, size_t vl);
vuint32m2_t __riscv_vwsll_tum (vbool16_t mask, vuint32m2_t maskedoff, vuint16m1_t vs2, size_t rs1, size_t vl);
vuint32m4_t __riscv_vwsll_tum (vbool8_t mask, vuint32m4_t maskedoff, vuint16m2_t vs2, vuint16m2_t vs1, size_t vl);
vuint32m4_t __riscv_vwsll_tum (vbool8_t mask, vuint32m4_t maskedoff, vuint16m2_t vs2, size_t rs1, size_t vl);
vuint32m8_t __riscv_vwsll_tum (vbool4_t mask, vuint32m8_t maskedoff, vuint16m4_t vs2, vuint16m4_t vs1, size_t vl);
vuint32m8_t __riscv_vwsll_tum (vbool4_t mask, vuint32m8_t maskedoff, vuint16m4_t vs2, size_t rs1, size_t vl);
vuint64m1_t __riscv_vwsll_tum (vbool64_t mask, vuint64m1_t maskedoff, vuint32mf2_t vs2, vuint32mf2_t vs1, size_t vl);
vuint64m1_t __riscv_vwsll_tum (vbool64_t mask, vuint64m1_t maskedoff, vuint32mf2_t vs2, size_t rs1, size_t vl);
vuint64m2_t __riscv_vwsll_tum (vbool32_t mask, vuint64m2_t maskedoff, vuint32m1_t vs2, vuint32m1_t vs1, size_t vl);
vuint64m2_t __riscv_vwsll_tum (vbool32_t mask, vuint64m2_t maskedoff, vuint32m1_t vs2, size_t rs1, size_t vl);
vuint64m4_t __riscv_vwsll_tum (vbool16_t mask, vuint64m4_t maskedoff, vuint32m2_t vs2, vuint32m2_t vs1, size_t vl);
vuint64m4_t __riscv_vwsll_tum (vbool16_t mask, vuint64m4_t maskedoff, vuint32m2_t vs2, size_t rs1, size_t vl);
vuint64m8_t __riscv_vwsll_tum (vbool8_t mask, vuint64m8_t maskedoff, vuint32m4_t vs2, vuint32m4_t vs1, size_t vl);
vuint64m8_t __riscv_vwsll_tum (vbool8_t mask, vuint64m8_t maskedoff, vuint32m4_t vs2, size_t rs1, size_t vl);
// masked functions
vuint16mf4_t __riscv_vwsll_tumu (vbool64_t mask, vuint16mf4_t maskedoff, vuint8mf8_t vs2, vuint8mf8_t vs1, size_t vl);
vuint16mf4_t __riscv_vwsll_tumu (vbool64_t mask, vuint16mf4_t maskedoff, vuint8mf8_t vs2, size_t rs1, size_t vl);
vuint16mf2_t __riscv_vwsll_tumu (vbool32_t mask, vuint16mf2_t maskedoff, vuint8mf4_t vs2, vuint8mf4_t vs1, size_t vl);
vuint16mf2_t __riscv_vwsll_tumu (vbool32_t mask, vuint16mf2_t maskedoff, vuint8mf4_t vs2, size_t rs1, size_t vl);
vuint16m1_t __riscv_vwsll_tumu (vbool16_t mask, vuint16m1_t maskedoff, vuint8mf2_t vs2, vuint8mf2_t vs1, size_t vl);
vuint16m1_t __riscv_vwsll_tumu (vbool16_t mask, vuint16m1_t maskedoff, vuint8mf2_t vs2, size_t rs1, size_t vl);
vuint16m2_t __riscv_vwsll_tumu (vbool8_t mask, vuint16m2_t maskedoff, vuint8m1_t vs2, vuint8m1_t vs1, size_t vl);
vuint16m2_t __riscv_vwsll_tumu (vbool8_t mask, vuint16m2_t maskedoff, vuint8m1_t vs2, size_t rs1, size_t vl);
vuint16m4_t __riscv_vwsll_tumu (vbool4_t mask, vuint16m4_t maskedoff, vuint8m2_t vs2, vuint8m2_t vs1, size_t vl);
vuint16m4_t __riscv_vwsll_tumu (vbool4_t mask, vuint16m4_t maskedoff, vuint8m2_t vs2, size_t rs1, size_t vl);
vuint16m8_t __riscv_vwsll_tumu (vbool2_t mask, vuint16m8_t maskedoff, vuint8m4_t vs2, vuint8m4_t vs1, size_t vl);
vuint16m8_t __riscv_vwsll_tumu (vbool2_t mask, vuint16m8_t maskedoff, vuint8m4_t vs2, size_t rs1, size_t vl);
vuint32mf2_t __riscv_vwsll_tumu (vbool64_t mask, vuint32mf2_t maskedoff, vuint16mf4_t vs2, vuint16mf4_t vs1, size_t vl);
vuint32mf2_t __riscv_vwsll_tumu (vbool64_t mask, vuint32mf2_t maskedoff, vuint16mf4_t vs2, size_t rs1, size_t vl);
vuint32m1_t __riscv_vwsll_tumu (vbool32_t mask, vuint32m1_t maskedoff, vuint16mf2_t vs2, vuint16mf2_t vs1, size_t vl);
vuint32m1_t __riscv_vwsll_tumu (vbool32_t mask, vuint32m1_t maskedoff, vuint16mf2_t vs2, size_t rs1, size_t vl);
vuint32m2_t __riscv_vwsll_tumu (vbool16_t mask, vuint32m2_t maskedoff, vuint16m1_t vs2, vuint16m1_t vs1, size_t vl);
vuint32m2_t __riscv_vwsll_tumu (vbool16_t mask, vuint32m2_t maskedoff, vuint16m1_t vs2, size_t rs1, size_t vl);
vuint32m4_t __riscv_vwsll_tumu (vbool8_t mask, vuint32m4_t maskedoff, vuint16m2_t vs2, vuint16m2_t vs1, size_t vl);
vuint32m4_t __riscv_vwsll_tumu (vbool8_t mask, vuint32m4_t maskedoff, vuint16m2_t vs2, size_t rs1, size_t vl);
vuint32m8_t __riscv_vwsll_tumu (vbool4_t mask, vuint32m8_t maskedoff, vuint16m4_t vs2, vuint16m4_t vs1, size_t vl);
vuint32m8_t __riscv_vwsll_tumu (vbool4_t mask, vuint32m8_t maskedoff, vuint16m4_t vs2, size_t rs1, size_t vl);
vuint64m1_t __riscv_vwsll_tumu (vbool64_t mask, vuint64m1_t maskedoff, vuint32mf2_t vs2, vuint32mf2_t vs1, size_t vl);
vuint64m1_t __riscv_vwsll_tumu (vbool64_t mask, vuint64m1_t maskedoff, vuint32mf2_t vs2, size_t rs1, size_t vl);
vuint64m2_t __riscv_vwsll_tumu (vbool32_t mask, vuint64m2_t maskedoff, vuint32m1_t vs2, vuint32m1_t vs1, size_t vl);
vuint64m2_t __riscv_vwsll_tumu (vbool32_t mask, vuint64m2_t maskedoff, vuint32m1_t vs2, size_t rs1, size_t vl);
vuint64m4_t __riscv_vwsll_tumu (vbool16_t mask, vuint64m4_t maskedoff, vuint32m2_t vs2, vuint32m2_t vs1, size_t vl);
vuint64m4_t __riscv_vwsll_tumu (vbool16_t mask, vuint64m4_t maskedoff, vuint32m2_t vs2, size_t rs1, size_t vl);
vuint64m8_t __riscv_vwsll_tumu (vbool8_t mask, vuint64m8_t maskedoff, vuint32m4_t vs2, vuint32m4_t vs1, size_t vl);
vuint64m8_t __riscv_vwsll_tumu (vbool8_t mask, vuint64m8_t maskedoff, vuint32m4_t vs2, size_t rs1, size_t vl);
// masked functions
vuint16mf4_t __riscv_vwsll_mu (vbool64_t mask, vuint16mf4_t maskedoff, vuint8mf8_t vs2, vuint8mf8_t vs1, size_t vl);
vuint16mf4_t __riscv_vwsll_mu (vbool64_t mask, vuint16mf4_t maskedoff, vuint8mf8_t vs2, size_t rs1, size_t vl);
vuint16mf2_t __riscv_vwsll_mu (vbool32_t mask, vuint16mf2_t maskedoff, vuint8mf4_t vs2, vuint8mf4_t vs1, size_t vl);
vuint16mf2_t __riscv_vwsll_mu (vbool32_t mask, vuint16mf2_t maskedoff, vuint8mf4_t vs2, size_t rs1, size_t vl);
vuint16m1_t __riscv_vwsll_mu (vbool16_t mask, vuint16m1_t maskedoff, vuint8mf2_t vs2, vuint8mf2_t vs1, size_t vl);
vuint16m1_t __riscv_vwsll_mu (vbool16_t mask, vuint16m1_t maskedoff, vuint8mf2_t vs2, size_t rs1, size_t vl);
vuint16m2_t __riscv_vwsll_mu (vbool8_t mask, vuint16m2_t maskedoff, vuint8m1_t vs2, vuint8m1_t vs1, size_t vl);
vuint16m2_t __riscv_vwsll_mu (vbool8_t mask, vuint16m2_t maskedoff, vuint8m1_t vs2, size_t rs1, size_t vl);
vuint16m4_t __riscv_vwsll_mu (vbool4_t mask, vuint16m4_t maskedoff, vuint8m2_t vs2, vuint8m2_t vs1, size_t vl);
vuint16m4_t __riscv_vwsll_mu (vbool4_t mask, vuint16m4_t maskedoff, vuint8m2_t vs2, size_t rs1, size_t vl);
vuint16m8_t __riscv_vwsll_mu (vbool2_t mask, vuint16m8_t maskedoff, vuint8m4_t vs2, vuint8m4_t vs1, size_t vl);
vuint16m8_t __riscv_vwsll_mu (vbool2_t mask, vuint16m8_t maskedoff, vuint8m4_t vs2, size_t rs1, size_t vl);
vuint32mf2_t __riscv_vwsll_mu (vbool64_t mask, vuint32mf2_t maskedoff, vuint16mf4_t vs2, vuint16mf4_t vs1, size_t vl);
vuint32mf2_t __riscv_vwsll_mu (vbool64_t mask, vuint32mf2_t maskedoff, vuint16mf4_t vs2, size_t rs1, size_t vl);
vuint32m1_t __riscv_vwsll_mu (vbool32_t mask, vuint32m1_t maskedoff, vuint16mf2_t vs2, vuint16mf2_t vs1, size_t vl);
vuint32m1_t __riscv_vwsll_mu (vbool32_t mask, vuint32m1_t maskedoff, vuint16mf2_t vs2, size_t rs1, size_t vl);
vuint32m2_t __riscv_vwsll_mu (vbool16_t mask, vuint32m2_t maskedoff, vuint16m1_t vs2, vuint16m1_t vs1, size_t vl);
vuint32m2_t __riscv_vwsll_mu (vbool16_t mask, vuint32m2_t maskedoff, vuint16m1_t vs2, size_t rs1, size_t vl);
vuint32m4_t __riscv_vwsll_mu (vbool8_t mask, vuint32m4_t maskedoff, vuint16m2_t vs2, vuint16m2_t vs1, size_t vl);
vuint32m4_t __riscv_vwsll_mu (vbool8_t mask, vuint32m4_t maskedoff, vuint16m2_t vs2, size_t rs1, size_t vl);
vuint32m8_t __riscv_vwsll_mu (vbool4_t mask, vuint32m8_t maskedoff, vuint16m4_t vs2, vuint16m4_t vs1, size_t vl);
vuint32m8_t __riscv_vwsll_mu (vbool4_t mask, vuint32m8_t maskedoff, vuint16m4_t vs2, size_t rs1, size_t vl);
vuint64m1_t __riscv_vwsll_mu (vbool64_t mask, vuint64m1_t maskedoff, vuint32mf2_t vs2, vuint32mf2_t vs1, size_t vl);
vuint64m1_t __riscv_vwsll_mu (vbool64_t mask, vuint64m1_t maskedoff, vuint32mf2_t vs2, size_t rs1, size_t vl);
vuint64m2_t __riscv_vwsll_mu (vbool32_t mask, vuint64m2_t maskedoff, vuint32m1_t vs2, vuint32m1_t vs1, size_t vl);
vuint64m2_t __riscv_vwsll_mu (vbool32_t mask, vuint64m2_t maskedoff, vuint32m1_t vs2, size_t rs1, size_t vl);
vuint64m4_t __riscv_vwsll_mu (vbool16_t mask, vuint64m4_t maskedoff, vuint32m2_t vs2, vuint32m2_t vs1, size_t vl);
vuint64m4_t __riscv_vwsll_mu (vbool16_t mask, vuint64m4_t maskedoff, vuint32m2_t vs2, size_t rs1, size_t vl);
vuint64m8_t __riscv_vwsll_mu (vbool8_t mask, vuint64m8_t maskedoff, vuint32m4_t vs2, vuint32m4_t vs1, size_t vl);
vuint64m8_t __riscv_vwsll_mu (vbool8_t mask, vuint64m8_t maskedoff, vuint32m4_t vs2, size_t rs1, size_t vl);
```

## Zvbc - Vector Carryless Multiplication:

### [Vector Carryless Multiplication]():

**Prototypes:**
``` C
vuint64m1_t __riscv_vclmul_tu (vuint64m1_t maskedoff, vuint64m1_t vs2, vuint64m1_t vs1, size_t vl);
vuint64m1_t __riscv_vclmul_tu (vuint64m1_t maskedoff, vuint64m1_t vs2, uint64_t rs1, size_t vl);
vuint64m2_t __riscv_vclmul_tu (vuint64m2_t maskedoff, vuint64m2_t vs2, vuint64m2_t vs1, size_t vl);
vuint64m2_t __riscv_vclmul_tu (vuint64m2_t maskedoff, vuint64m2_t vs2, uint64_t rs1, size_t vl);
vuint64m4_t __riscv_vclmul_tu (vuint64m4_t maskedoff, vuint64m4_t vs2, vuint64m4_t vs1, size_t vl);
vuint64m4_t __riscv_vclmul_tu (vuint64m4_t maskedoff, vuint64m4_t vs2, uint64_t rs1, size_t vl);
vuint64m8_t __riscv_vclmul_tu (vuint64m8_t maskedoff, vuint64m8_t vs2, vuint64m8_t vs1, size_t vl);
vuint64m8_t __riscv_vclmul_tu (vuint64m8_t maskedoff, vuint64m8_t vs2, uint64_t rs1, size_t vl);
vuint64m1_t __riscv_vclmulh_tu (vuint64m1_t maskedoff, vuint64m1_t vs2, vuint64m1_t vs1, size_t vl);
vuint64m1_t __riscv_vclmulh_tu (vuint64m1_t maskedoff, vuint64m1_t vs2, uint64_t rs1, size_t vl);
vuint64m2_t __riscv_vclmulh_tu (vuint64m2_t maskedoff, vuint64m2_t vs2, vuint64m2_t vs1, size_t vl);
vuint64m2_t __riscv_vclmulh_tu (vuint64m2_t maskedoff, vuint64m2_t vs2, uint64_t rs1, size_t vl);
vuint64m4_t __riscv_vclmulh_tu (vuint64m4_t maskedoff, vuint64m4_t vs2, vuint64m4_t vs1, size_t vl);
vuint64m4_t __riscv_vclmulh_tu (vuint64m4_t maskedoff, vuint64m4_t vs2, uint64_t rs1, size_t vl);
vuint64m8_t __riscv_vclmulh_tu (vuint64m8_t maskedoff, vuint64m8_t vs2, vuint64m8_t vs1, size_t vl);
vuint64m8_t __riscv_vclmulh_tu (vuint64m8_t maskedoff, vuint64m8_t vs2, uint64_t rs1, size_t vl);
// masked functions
vuint64m1_t __riscv_vclmul_tum (vbool64_t mask, vuint64m1_t maskedoff, vuint64m1_t vs2, vuint64m1_t vs1, size_t vl);
vuint64m1_t __riscv_vclmul_tum (vbool64_t mask, vuint64m1_t maskedoff, vuint64m1_t vs2, uint64_t rs1, size_t vl);
vuint64m2_t __riscv_vclmul_tum (vbool32_t mask, vuint64m2_t maskedoff, vuint64m2_t vs2, vuint64m2_t vs1, size_t vl);
vuint64m2_t __riscv_vclmul_tum (vbool32_t mask, vuint64m2_t maskedoff, vuint64m2_t vs2, uint64_t rs1, size_t vl);
vuint64m4_t __riscv_vclmul_tum (vbool16_t mask, vuint64m4_t maskedoff, vuint64m4_t vs2, vuint64m4_t vs1, size_t vl);
vuint64m4_t __riscv_vclmul_tum (vbool16_t mask, vuint64m4_t maskedoff, vuint64m4_t vs2, uint64_t rs1, size_t vl);
vuint64m8_t __riscv_vclmul_tum (vbool8_t mask, vuint64m8_t maskedoff, vuint64m8_t vs2, vuint64m8_t vs1, size_t vl);
vuint64m8_t __riscv_vclmul_tum (vbool8_t mask, vuint64m8_t maskedoff, vuint64m8_t vs2, uint64_t rs1, size_t vl);
vuint64m1_t __riscv_vclmulh_tum (vbool64_t mask, vuint64m1_t maskedoff, vuint64m1_t vs2, vuint64m1_t vs1, size_t vl);
vuint64m1_t __riscv_vclmulh_tum (vbool64_t mask, vuint64m1_t maskedoff, vuint64m1_t vs2, uint64_t rs1, size_t vl);
vuint64m2_t __riscv_vclmulh_tum (vbool32_t mask, vuint64m2_t maskedoff, vuint64m2_t vs2, vuint64m2_t vs1, size_t vl);
vuint64m2_t __riscv_vclmulh_tum (vbool32_t mask, vuint64m2_t maskedoff, vuint64m2_t vs2, uint64_t rs1, size_t vl);
vuint64m4_t __riscv_vclmulh_tum (vbool16_t mask, vuint64m4_t maskedoff, vuint64m4_t vs2, vuint64m4_t vs1, size_t vl);
vuint64m4_t __riscv_vclmulh_tum (vbool16_t mask, vuint64m4_t maskedoff, vuint64m4_t vs2, uint64_t rs1, size_t vl);
vuint64m8_t __riscv_vclmulh_tum (vbool8_t mask, vuint64m8_t maskedoff, vuint64m8_t vs2, vuint64m8_t vs1, size_t vl);
vuint64m8_t __riscv_vclmulh_tum (vbool8_t mask, vuint64m8_t maskedoff, vuint64m8_t vs2, uint64_t rs1, size_t vl);
// masked functions
vuint64m1_t __riscv_vclmul_tumu (vbool64_t mask, vuint64m1_t maskedoff, vuint64m1_t vs2, vuint64m1_t vs1, size_t vl);
vuint64m1_t __riscv_vclmul_tumu (vbool64_t mask, vuint64m1_t maskedoff, vuint64m1_t vs2, uint64_t rs1, size_t vl);
vuint64m2_t __riscv_vclmul_tumu (vbool32_t mask, vuint64m2_t maskedoff, vuint64m2_t vs2, vuint64m2_t vs1, size_t vl);
vuint64m2_t __riscv_vclmul_tumu (vbool32_t mask, vuint64m2_t maskedoff, vuint64m2_t vs2, uint64_t rs1, size_t vl);
vuint64m4_t __riscv_vclmul_tumu (vbool16_t mask, vuint64m4_t maskedoff, vuint64m4_t vs2, vuint64m4_t vs1, size_t vl);
vuint64m4_t __riscv_vclmul_tumu (vbool16_t mask, vuint64m4_t maskedoff, vuint64m4_t vs2, uint64_t rs1, size_t vl);
vuint64m8_t __riscv_vclmul_tumu (vbool8_t mask, vuint64m8_t maskedoff, vuint64m8_t vs2, vuint64m8_t vs1, size_t vl);
vuint64m8_t __riscv_vclmul_tumu (vbool8_t mask, vuint64m8_t maskedoff, vuint64m8_t vs2, uint64_t rs1, size_t vl);
vuint64m1_t __riscv_vclmulh_tumu (vbool64_t mask, vuint64m1_t maskedoff, vuint64m1_t vs2, vuint64m1_t vs1, size_t vl);
vuint64m1_t __riscv_vclmulh_tumu (vbool64_t mask, vuint64m1_t maskedoff, vuint64m1_t vs2, uint64_t rs1, size_t vl);
vuint64m2_t __riscv_vclmulh_tumu (vbool32_t mask, vuint64m2_t maskedoff, vuint64m2_t vs2, vuint64m2_t vs1, size_t vl);
vuint64m2_t __riscv_vclmulh_tumu (vbool32_t mask, vuint64m2_t maskedoff, vuint64m2_t vs2, uint64_t rs1, size_t vl);
vuint64m4_t __riscv_vclmulh_tumu (vbool16_t mask, vuint64m4_t maskedoff, vuint64m4_t vs2, vuint64m4_t vs1, size_t vl);
vuint64m4_t __riscv_vclmulh_tumu (vbool16_t mask, vuint64m4_t maskedoff, vuint64m4_t vs2, uint64_t rs1, size_t vl);
vuint64m8_t __riscv_vclmulh_tumu (vbool8_t mask, vuint64m8_t maskedoff, vuint64m8_t vs2, vuint64m8_t vs1, size_t vl);
vuint64m8_t __riscv_vclmulh_tumu (vbool8_t mask, vuint64m8_t maskedoff, vuint64m8_t vs2, uint64_t rs1, size_t vl);
// masked functions
vuint64m1_t __riscv_vclmul_mu (vbool64_t mask, vuint64m1_t maskedoff, vuint64m1_t vs2, vuint64m1_t vs1, size_t vl);
vuint64m1_t __riscv_vclmul_mu (vbool64_t mask, vuint64m1_t maskedoff, vuint64m1_t vs2, uint64_t rs1, size_t vl);
vuint64m2_t __riscv_vclmul_mu (vbool32_t mask, vuint64m2_t maskedoff, vuint64m2_t vs2, vuint64m2_t vs1, size_t vl);
vuint64m2_t __riscv_vclmul_mu (vbool32_t mask, vuint64m2_t maskedoff, vuint64m2_t vs2, uint64_t rs1, size_t vl);
vuint64m4_t __riscv_vclmul_mu (vbool16_t mask, vuint64m4_t maskedoff, vuint64m4_t vs2, vuint64m4_t vs1, size_t vl);
vuint64m4_t __riscv_vclmul_mu (vbool16_t mask, vuint64m4_t maskedoff, vuint64m4_t vs2, uint64_t rs1, size_t vl);
vuint64m8_t __riscv_vclmul_mu (vbool8_t mask, vuint64m8_t maskedoff, vuint64m8_t vs2, vuint64m8_t vs1, size_t vl);
vuint64m8_t __riscv_vclmul_mu (vbool8_t mask, vuint64m8_t maskedoff, vuint64m8_t vs2, uint64_t rs1, size_t vl);
vuint64m1_t __riscv_vclmulh_mu (vbool64_t mask, vuint64m1_t maskedoff, vuint64m1_t vs2, vuint64m1_t vs1, size_t vl);
vuint64m1_t __riscv_vclmulh_mu (vbool64_t mask, vuint64m1_t maskedoff, vuint64m1_t vs2, uint64_t rs1, size_t vl);
vuint64m2_t __riscv_vclmulh_mu (vbool32_t mask, vuint64m2_t maskedoff, vuint64m2_t vs2, vuint64m2_t vs1, size_t vl);
vuint64m2_t __riscv_vclmulh_mu (vbool32_t mask, vuint64m2_t maskedoff, vuint64m2_t vs2, uint64_t rs1, size_t vl);
vuint64m4_t __riscv_vclmulh_mu (vbool16_t mask, vuint64m4_t maskedoff, vuint64m4_t vs2, vuint64m4_t vs1, size_t vl);
vuint64m4_t __riscv_vclmulh_mu (vbool16_t mask, vuint64m4_t maskedoff, vuint64m4_t vs2, uint64_t rs1, size_t vl);
vuint64m8_t __riscv_vclmulh_mu (vbool8_t mask, vuint64m8_t maskedoff, vuint64m8_t vs2, vuint64m8_t vs1, size_t vl);
vuint64m8_t __riscv_vclmulh_mu (vbool8_t mask, vuint64m8_t maskedoff, vuint64m8_t vs2, uint64_t rs1, size_t vl);
```

## Zvkg - Vector GCM/GMAC:

### [Vector GCM/GMAC]():

**Prototypes:**
``` C
vuint32mf2_t __riscv_vghsh_tu (vuint32mf2_t vd, vuint32mf2_t vs2, vuint32mf2_t vs1, size_t vl);
vuint32m1_t __riscv_vghsh_tu (vuint32m1_t vd, vuint32m1_t vs2, vuint32m1_t vs1, size_t vl);
vuint32m2_t __riscv_vghsh_tu (vuint32m2_t vd, vuint32m2_t vs2, vuint32m2_t vs1, size_t vl);
vuint32m4_t __riscv_vghsh_tu (vuint32m4_t vd, vuint32m4_t vs2, vuint32m4_t vs1, size_t vl);
vuint32m8_t __riscv_vghsh_tu (vuint32m8_t vd, vuint32m8_t vs2, vuint32m8_t vs1, size_t vl);
vuint32mf2_t __riscv_vgmul_tu (vuint32mf2_t vd, vuint32mf2_t vs2, size_t vl);
vuint32m1_t __riscv_vgmul_tu (vuint32m1_t vd, vuint32m1_t vs2, size_t vl);
vuint32m2_t __riscv_vgmul_tu (vuint32m2_t vd, vuint32m2_t vs2, size_t vl);
vuint32m4_t __riscv_vgmul_tu (vuint32m4_t vd, vuint32m4_t vs2, size_t vl);
vuint32m8_t __riscv_vgmul_tu (vuint32m8_t vd, vuint32m8_t vs2, size_t vl);
```

## Zvkned - NIST Suite: Vector AES Block Cipher:

### [Vector AES Encryption]():

**Prototypes:**
``` C
vuint32mf2_t __riscv_vaesef_vv_tu (vuint32mf2_t vd, vuint32mf2_t vs2, size_t vl);
vuint32mf2_t __riscv_vaesef_vs_tu (vuint32mf2_t vd, vuint32mf2_t vs2, size_t vl);
vuint32m1_t __riscv_vaesef_vs_tu (vuint32m1_t vd, vuint32mf2_t vs2, size_t vl);
vuint32m2_t __riscv_vaesef_vs_tu (vuint32m2_t vd, vuint32mf2_t vs2, size_t vl);
vuint32m4_t __riscv_vaesef_vs_tu (vuint32m4_t vd, vuint32mf2_t vs2, size_t vl);
vuint32m8_t __riscv_vaesef_vs_tu (vuint32m8_t vd, vuint32mf2_t vs2, size_t vl);
vuint32m1_t __riscv_vaesef_vv_tu (vuint32m1_t vd, vuint32m1_t vs2, size_t vl);
vuint32m1_t __riscv_vaesef_vs_tu (vuint32m1_t vd, vuint32m1_t vs2, size_t vl);
vuint32m2_t __riscv_vaesef_vs_tu (vuint32m2_t vd, vuint32m1_t vs2, size_t vl);
vuint32m4_t __riscv_vaesef_vs_tu (vuint32m4_t vd, vuint32m1_t vs2, size_t vl);
vuint32m8_t __riscv_vaesef_vs_tu (vuint32m8_t vd, vuint32m1_t vs2, size_t vl);
vuint32m2_t __riscv_vaesef_vv_tu (vuint32m2_t vd, vuint32m2_t vs2, size_t vl);
vuint32m2_t __riscv_vaesef_vs_tu (vuint32m2_t vd, vuint32m2_t vs2, size_t vl);
vuint32m4_t __riscv_vaesef_vs_tu (vuint32m4_t vd, vuint32m2_t vs2, size_t vl);
vuint32m8_t __riscv_vaesef_vs_tu (vuint32m8_t vd, vuint32m2_t vs2, size_t vl);
vuint32m4_t __riscv_vaesef_vv_tu (vuint32m4_t vd, vuint32m4_t vs2, size_t vl);
vuint32m4_t __riscv_vaesef_vs_tu (vuint32m4_t vd, vuint32m4_t vs2, size_t vl);
vuint32m8_t __riscv_vaesef_vs_tu (vuint32m8_t vd, vuint32m4_t vs2, size_t vl);
vuint32m8_t __riscv_vaesef_vv_tu (vuint32m8_t vd, vuint32m8_t vs2, size_t vl);
vuint32m8_t __riscv_vaesef_vs_tu (vuint32m8_t vd, vuint32m8_t vs2, size_t vl);
vuint32mf2_t __riscv_vaesem_vv_tu (vuint32mf2_t vd, vuint32mf2_t vs2, size_t vl);
vuint32mf2_t __riscv_vaesem_vs_tu (vuint32mf2_t vd, vuint32mf2_t vs2, size_t vl);
vuint32m1_t __riscv_vaesem_vs_tu (vuint32m1_t vd, vuint32mf2_t vs2, size_t vl);
vuint32m2_t __riscv_vaesem_vs_tu (vuint32m2_t vd, vuint32mf2_t vs2, size_t vl);
vuint32m4_t __riscv_vaesem_vs_tu (vuint32m4_t vd, vuint32mf2_t vs2, size_t vl);
vuint32m8_t __riscv_vaesem_vs_tu (vuint32m8_t vd, vuint32mf2_t vs2, size_t vl);
vuint32m1_t __riscv_vaesem_vv_tu (vuint32m1_t vd, vuint32m1_t vs2, size_t vl);
vuint32m1_t __riscv_vaesem_vs_tu (vuint32m1_t vd, vuint32m1_t vs2, size_t vl);
vuint32m2_t __riscv_vaesem_vs_tu (vuint32m2_t vd, vuint32m1_t vs2, size_t vl);
vuint32m4_t __riscv_vaesem_vs_tu (vuint32m4_t vd, vuint32m1_t vs2, size_t vl);
vuint32m8_t __riscv_vaesem_vs_tu (vuint32m8_t vd, vuint32m1_t vs2, size_t vl);
vuint32m2_t __riscv_vaesem_vv_tu (vuint32m2_t vd, vuint32m2_t vs2, size_t vl);
vuint32m2_t __riscv_vaesem_vs_tu (vuint32m2_t vd, vuint32m2_t vs2, size_t vl);
vuint32m4_t __riscv_vaesem_vs_tu (vuint32m4_t vd, vuint32m2_t vs2, size_t vl);
vuint32m8_t __riscv_vaesem_vs_tu (vuint32m8_t vd, vuint32m2_t vs2, size_t vl);
vuint32m4_t __riscv_vaesem_vv_tu (vuint32m4_t vd, vuint32m4_t vs2, size_t vl);
vuint32m4_t __riscv_vaesem_vs_tu (vuint32m4_t vd, vuint32m4_t vs2, size_t vl);
vuint32m8_t __riscv_vaesem_vs_tu (vuint32m8_t vd, vuint32m4_t vs2, size_t vl);
vuint32m8_t __riscv_vaesem_vv_tu (vuint32m8_t vd, vuint32m8_t vs2, size_t vl);
vuint32m8_t __riscv_vaesem_vs_tu (vuint32m8_t vd, vuint32m8_t vs2, size_t vl);
```

### [Vector AES Decryption]():

**Prototypes:**
``` C
vuint32mf2_t __riscv_vaesdf_vv_tu (vuint32mf2_t vd, vuint32mf2_t vs2, size_t vl);
vuint32mf2_t __riscv_vaesdf_vs_tu (vuint32mf2_t vd, vuint32mf2_t vs2, size_t vl);
vuint32m1_t __riscv_vaesdf_vs_tu (vuint32m1_t vd, vuint32mf2_t vs2, size_t vl);
vuint32m2_t __riscv_vaesdf_vs_tu (vuint32m2_t vd, vuint32mf2_t vs2, size_t vl);
vuint32m4_t __riscv_vaesdf_vs_tu (vuint32m4_t vd, vuint32mf2_t vs2, size_t vl);
vuint32m8_t __riscv_vaesdf_vs_tu (vuint32m8_t vd, vuint32mf2_t vs2, size_t vl);
vuint32m1_t __riscv_vaesdf_vv_tu (vuint32m1_t vd, vuint32m1_t vs2, size_t vl);
vuint32m1_t __riscv_vaesdf_vs_tu (vuint32m1_t vd, vuint32m1_t vs2, size_t vl);
vuint32m2_t __riscv_vaesdf_vs_tu (vuint32m2_t vd, vuint32m1_t vs2, size_t vl);
vuint32m4_t __riscv_vaesdf_vs_tu (vuint32m4_t vd, vuint32m1_t vs2, size_t vl);
vuint32m8_t __riscv_vaesdf_vs_tu (vuint32m8_t vd, vuint32m1_t vs2, size_t vl);
vuint32m2_t __riscv_vaesdf_vv_tu (vuint32m2_t vd, vuint32m2_t vs2, size_t vl);
vuint32m2_t __riscv_vaesdf_vs_tu (vuint32m2_t vd, vuint32m2_t vs2, size_t vl);
vuint32m4_t __riscv_vaesdf_vs_tu (vuint32m4_t vd, vuint32m2_t vs2, size_t vl);
vuint32m8_t __riscv_vaesdf_vs_tu (vuint32m8_t vd, vuint32m2_t vs2, size_t vl);
vuint32m4_t __riscv_vaesdf_vv_tu (vuint32m4_t vd, vuint32m4_t vs2, size_t vl);
vuint32m4_t __riscv_vaesdf_vs_tu (vuint32m4_t vd, vuint32m4_t vs2, size_t vl);
vuint32m8_t __riscv_vaesdf_vs_tu (vuint32m8_t vd, vuint32m4_t vs2, size_t vl);
vuint32m8_t __riscv_vaesdf_vv_tu (vuint32m8_t vd, vuint32m8_t vs2, size_t vl);
vuint32m8_t __riscv_vaesdf_vs_tu (vuint32m8_t vd, vuint32m8_t vs2, size_t vl);
vuint32mf2_t __riscv_vaesdm_vv_tu (vuint32mf2_t vd, vuint32mf2_t vs2, size_t vl);
vuint32mf2_t __riscv_vaesdm_vs_tu (vuint32mf2_t vd, vuint32mf2_t vs2, size_t vl);
vuint32m1_t __riscv_vaesdm_vs_tu (vuint32m1_t vd, vuint32mf2_t vs2, size_t vl);
vuint32m2_t __riscv_vaesdm_vs_tu (vuint32m2_t vd, vuint32mf2_t vs2, size_t vl);
vuint32m4_t __riscv_vaesdm_vs_tu (vuint32m4_t vd, vuint32mf2_t vs2, size_t vl);
vuint32m8_t __riscv_vaesdm_vs_tu (vuint32m8_t vd, vuint32mf2_t vs2, size_t vl);
vuint32m1_t __riscv_vaesdm_vv_tu (vuint32m1_t vd, vuint32m1_t vs2, size_t vl);
vuint32m1_t __riscv_vaesdm_vs_tu (vuint32m1_t vd, vuint32m1_t vs2, size_t vl);
vuint32m2_t __riscv_vaesdm_vs_tu (vuint32m2_t vd, vuint32m1_t vs2, size_t vl);
vuint32m4_t __riscv_vaesdm_vs_tu (vuint32m4_t vd, vuint32m1_t vs2, size_t vl);
vuint32m8_t __riscv_vaesdm_vs_tu (vuint32m8_t vd, vuint32m1_t vs2, size_t vl);
vuint32m2_t __riscv_vaesdm_vv_tu (vuint32m2_t vd, vuint32m2_t vs2, size_t vl);
vuint32m2_t __riscv_vaesdm_vs_tu (vuint32m2_t vd, vuint32m2_t vs2, size_t vl);
vuint32m4_t __riscv_vaesdm_vs_tu (vuint32m4_t vd, vuint32m2_t vs2, size_t vl);
vuint32m8_t __riscv_vaesdm_vs_tu (vuint32m8_t vd, vuint32m2_t vs2, size_t vl);
vuint32m4_t __riscv_vaesdm_vv_tu (vuint32m4_t vd, vuint32m4_t vs2, size_t vl);
vuint32m4_t __riscv_vaesdm_vs_tu (vuint32m4_t vd, vuint32m4_t vs2, size_t vl);
vuint32m8_t __riscv_vaesdm_vs_tu (vuint32m8_t vd, vuint32m4_t vs2, size_t vl);
vuint32m8_t __riscv_vaesdm_vv_tu (vuint32m8_t vd, vuint32m8_t vs2, size_t vl);
vuint32m8_t __riscv_vaesdm_vs_tu (vuint32m8_t vd, vuint32m8_t vs2, size_t vl);
```

### [Vector AES-128 Forward KeySchedule generation]():

**Prototypes:**
``` C
vuint32mf2_t __riscv_vaeskf1_tu (vuint32mf2_t maskedoff, vuint32mf2_t vs2, size_t uimm, size_t vl);
vuint32m1_t __riscv_vaeskf1_tu (vuint32m1_t maskedoff, vuint32m1_t vs2, size_t uimm, size_t vl);
vuint32m2_t __riscv_vaeskf1_tu (vuint32m2_t maskedoff, vuint32m2_t vs2, size_t uimm, size_t vl);
vuint32m4_t __riscv_vaeskf1_tu (vuint32m4_t maskedoff, vuint32m4_t vs2, size_t uimm, size_t vl);
vuint32m8_t __riscv_vaeskf1_tu (vuint32m8_t maskedoff, vuint32m8_t vs2, size_t uimm, size_t vl);
vuint32mf2_t __riscv_vaeskf2_tu (vuint32mf2_t vd, vuint32mf2_t vs2, size_t uimm, size_t vl);
vuint32m1_t __riscv_vaeskf2_tu (vuint32m1_t vd, vuint32m1_t vs2, size_t uimm, size_t vl);
vuint32m2_t __riscv_vaeskf2_tu (vuint32m2_t vd, vuint32m2_t vs2, size_t uimm, size_t vl);
vuint32m4_t __riscv_vaeskf2_tu (vuint32m4_t vd, vuint32m4_t vs2, size_t uimm, size_t vl);
vuint32m8_t __riscv_vaeskf2_tu (vuint32m8_t vd, vuint32m8_t vs2, size_t uimm, size_t vl);
```

### [Vector AES round zero]():

**Prototypes:**
``` C
vuint32mf2_t __riscv_vaesz_tu (vuint32mf2_t vd, vuint32mf2_t vs2, size_t vl);
vuint32m1_t __riscv_vaesz_tu (vuint32m1_t vd, vuint32mf2_t vs2, size_t vl);
vuint32m2_t __riscv_vaesz_tu (vuint32m2_t vd, vuint32mf2_t vs2, size_t vl);
vuint32m4_t __riscv_vaesz_tu (vuint32m4_t vd, vuint32mf2_t vs2, size_t vl);
vuint32m8_t __riscv_vaesz_tu (vuint32m8_t vd, vuint32mf2_t vs2, size_t vl);
vuint32m1_t __riscv_vaesz_tu (vuint32m1_t vd, vuint32m1_t vs2, size_t vl);
vuint32m2_t __riscv_vaesz_tu (vuint32m2_t vd, vuint32m1_t vs2, size_t vl);
vuint32m4_t __riscv_vaesz_tu (vuint32m4_t vd, vuint32m1_t vs2, size_t vl);
vuint32m8_t __riscv_vaesz_tu (vuint32m8_t vd, vuint32m1_t vs2, size_t vl);
vuint32m2_t __riscv_vaesz_tu (vuint32m2_t vd, vuint32m2_t vs2, size_t vl);
vuint32m4_t __riscv_vaesz_tu (vuint32m4_t vd, vuint32m2_t vs2, size_t vl);
vuint32m8_t __riscv_vaesz_tu (vuint32m8_t vd, vuint32m2_t vs2, size_t vl);
vuint32m4_t __riscv_vaesz_tu (vuint32m4_t vd, vuint32m4_t vs2, size_t vl);
vuint32m8_t __riscv_vaesz_tu (vuint32m8_t vd, vuint32m4_t vs2, size_t vl);
vuint32m8_t __riscv_vaesz_tu (vuint32m8_t vd, vuint32m8_t vs2, size_t vl);
```

## Zvknh - NIST Suite: Vector SHA-2 Secure Hash:

### [Vector SHA-2 message schedule]():

**Prototypes:**
``` C
vuint32mf2_t __riscv_vsha2ms_tu (vuint32mf2_t vd, vuint32mf2_t vs2, vuint32mf2_t vs1, size_t vl);
vuint32m1_t __riscv_vsha2ms_tu (vuint32m1_t vd, vuint32m1_t vs2, vuint32m1_t vs1, size_t vl);
vuint32m2_t __riscv_vsha2ms_tu (vuint32m2_t vd, vuint32m2_t vs2, vuint32m2_t vs1, size_t vl);
vuint32m4_t __riscv_vsha2ms_tu (vuint32m4_t vd, vuint32m4_t vs2, vuint32m4_t vs1, size_t vl);
vuint32m8_t __riscv_vsha2ms_tu (vuint32m8_t vd, vuint32m8_t vs2, vuint32m8_t vs1, size_t vl);
vuint64m1_t __riscv_vsha2ms_tu (vuint64m1_t vd, vuint64m1_t vs2, vuint64m1_t vs1, size_t vl);
vuint64m2_t __riscv_vsha2ms_tu (vuint64m2_t vd, vuint64m2_t vs2, vuint64m2_t vs1, size_t vl);
vuint64m4_t __riscv_vsha2ms_tu (vuint64m4_t vd, vuint64m4_t vs2, vuint64m4_t vs1, size_t vl);
vuint64m8_t __riscv_vsha2ms_tu (vuint64m8_t vd, vuint64m8_t vs2, vuint64m8_t vs1, size_t vl);
```

### [Vector SHA-2 two rounds of compression]():

**Prototypes:**
``` C
vuint32mf2_t __riscv_vsha2ch_tu (vuint32mf2_t vd, vuint32mf2_t vs2, vuint32mf2_t vs1, size_t vl);
vuint32m1_t __riscv_vsha2ch_tu (vuint32m1_t vd, vuint32m1_t vs2, vuint32m1_t vs1, size_t vl);
vuint32m2_t __riscv_vsha2ch_tu (vuint32m2_t vd, vuint32m2_t vs2, vuint32m2_t vs1, size_t vl);
vuint32m4_t __riscv_vsha2ch_tu (vuint32m4_t vd, vuint32m4_t vs2, vuint32m4_t vs1, size_t vl);
vuint32m8_t __riscv_vsha2ch_tu (vuint32m8_t vd, vuint32m8_t vs2, vuint32m8_t vs1, size_t vl);
vuint64m1_t __riscv_vsha2ch_tu (vuint64m1_t vd, vuint64m1_t vs2, vuint64m1_t vs1, size_t vl);
vuint64m2_t __riscv_vsha2ch_tu (vuint64m2_t vd, vuint64m2_t vs2, vuint64m2_t vs1, size_t vl);
vuint64m4_t __riscv_vsha2ch_tu (vuint64m4_t vd, vuint64m4_t vs2, vuint64m4_t vs1, size_t vl);
vuint64m8_t __riscv_vsha2ch_tu (vuint64m8_t vd, vuint64m8_t vs2, vuint64m8_t vs1, size_t vl);
vuint32mf2_t __riscv_vsha2cl_tu (vuint32mf2_t vd, vuint32mf2_t vs2, vuint32mf2_t vs1, size_t vl);
vuint32m1_t __riscv_vsha2cl_tu (vuint32m1_t vd, vuint32m1_t vs2, vuint32m1_t vs1, size_t vl);
vuint32m2_t __riscv_vsha2cl_tu (vuint32m2_t vd, vuint32m2_t vs2, vuint32m2_t vs1, size_t vl);
vuint32m4_t __riscv_vsha2cl_tu (vuint32m4_t vd, vuint32m4_t vs2, vuint32m4_t vs1, size_t vl);
vuint32m8_t __riscv_vsha2cl_tu (vuint32m8_t vd, vuint32m8_t vs2, vuint32m8_t vs1, size_t vl);
vuint64m1_t __riscv_vsha2cl_tu (vuint64m1_t vd, vuint64m1_t vs2, vuint64m1_t vs1, size_t vl);
vuint64m2_t __riscv_vsha2cl_tu (vuint64m2_t vd, vuint64m2_t vs2, vuint64m2_t vs1, size_t vl);
vuint64m4_t __riscv_vsha2cl_tu (vuint64m4_t vd, vuint64m4_t vs2, vuint64m4_t vs1, size_t vl);
vuint64m8_t __riscv_vsha2cl_tu (vuint64m8_t vd, vuint64m8_t vs2, vuint64m8_t vs1, size_t vl);
```

## Zvksed - ShangMi Suite: SM4 Block Cipher:

### [Vector SM4 KeyExpansion]():

**Prototypes:**
``` C
vuint32mf2_t __riscv_vsm4k_tu (vuint32mf2_t maskedoff, vuint32mf2_t vs2, size_t uimm, size_t vl);
vuint32m1_t __riscv_vsm4k_tu (vuint32m1_t maskedoff, vuint32m1_t vs2, size_t uimm, size_t vl);
vuint32m2_t __riscv_vsm4k_tu (vuint32m2_t maskedoff, vuint32m2_t vs2, size_t uimm, size_t vl);
vuint32m4_t __riscv_vsm4k_tu (vuint32m4_t maskedoff, vuint32m4_t vs2, size_t uimm, size_t vl);
vuint32m8_t __riscv_vsm4k_tu (vuint32m8_t maskedoff, vuint32m8_t vs2, size_t uimm, size_t vl);
```

### [Vector SM4 Rounds]():

**Prototypes:**
``` C
vuint32mf2_t __riscv_vsm4r_vv_tu (vuint32mf2_t vd, vuint32mf2_t vs2, size_t vl);
vuint32mf2_t __riscv_vsm4r_vs_tu (vuint32mf2_t vd, vuint32mf2_t vs2, size_t vl);
vuint32m1_t __riscv_vsm4r_vs_tu (vuint32m1_t vd, vuint32mf2_t vs2, size_t vl);
vuint32m2_t __riscv_vsm4r_vs_tu (vuint32m2_t vd, vuint32mf2_t vs2, size_t vl);
vuint32m4_t __riscv_vsm4r_vs_tu (vuint32m4_t vd, vuint32mf2_t vs2, size_t vl);
vuint32m8_t __riscv_vsm4r_vs_tu (vuint32m8_t vd, vuint32mf2_t vs2, size_t vl);
vuint32m1_t __riscv_vsm4r_vv_tu (vuint32m1_t vd, vuint32m1_t vs2, size_t vl);
vuint32m1_t __riscv_vsm4r_vs_tu (vuint32m1_t vd, vuint32m1_t vs2, size_t vl);
vuint32m2_t __riscv_vsm4r_vs_tu (vuint32m2_t vd, vuint32m1_t vs2, size_t vl);
vuint32m4_t __riscv_vsm4r_vs_tu (vuint32m4_t vd, vuint32m1_t vs2, size_t vl);
vuint32m8_t __riscv_vsm4r_vs_tu (vuint32m8_t vd, vuint32m1_t vs2, size_t vl);
vuint32m2_t __riscv_vsm4r_vv_tu (vuint32m2_t vd, vuint32m2_t vs2, size_t vl);
vuint32m2_t __riscv_vsm4r_vs_tu (vuint32m2_t vd, vuint32m2_t vs2, size_t vl);
vuint32m4_t __riscv_vsm4r_vs_tu (vuint32m4_t vd, vuint32m2_t vs2, size_t vl);
vuint32m8_t __riscv_vsm4r_vs_tu (vuint32m8_t vd, vuint32m2_t vs2, size_t vl);
vuint32m4_t __riscv_vsm4r_vv_tu (vuint32m4_t vd, vuint32m4_t vs2, size_t vl);
vuint32m4_t __riscv_vsm4r_vs_tu (vuint32m4_t vd, vuint32m4_t vs2, size_t vl);
vuint32m8_t __riscv_vsm4r_vs_tu (vuint32m8_t vd, vuint32m4_t vs2, size_t vl);
vuint32m8_t __riscv_vsm4r_vv_tu (vuint32m8_t vd, vuint32m8_t vs2, size_t vl);
vuint32m8_t __riscv_vsm4r_vs_tu (vuint32m8_t vd, vuint32m8_t vs2, size_t vl);
```

## Zvksh - ShangMi Suite: SM3 Secure Hash:

### [Vector SM3 Message Expansion]():

**Prototypes:**
``` C
vuint32mf2_t __riscv_vsm3me_tu (vuint32mf2_t maskedoff, vuint32mf2_t vs2, vuint32mf2_t vs1, size_t vl);
vuint32m1_t __riscv_vsm3me_tu (vuint32m1_t maskedoff, vuint32m1_t vs2, vuint32m1_t vs1, size_t vl);
vuint32m2_t __riscv_vsm3me_tu (vuint32m2_t maskedoff, vuint32m2_t vs2, vuint32m2_t vs1, size_t vl);
vuint32m4_t __riscv_vsm3me_tu (vuint32m4_t maskedoff, vuint32m4_t vs2, vuint32m4_t vs1, size_t vl);
vuint32m8_t __riscv_vsm3me_tu (vuint32m8_t maskedoff, vuint32m8_t vs2, vuint32m8_t vs1, size_t vl);
```

### [Vector SM3 Message Expansion]():

**Prototypes:**
``` C
vuint32mf2_t __riscv_vsm3c_tu (vuint32mf2_t vd, vuint32mf2_t vs2, size_t uimm, size_t vl);
vuint32m1_t __riscv_vsm3c_tu (vuint32m1_t vd, vuint32m1_t vs2, size_t uimm, size_t vl);
vuint32m2_t __riscv_vsm3c_tu (vuint32m2_t vd, vuint32m2_t vs2, size_t uimm, size_t vl);
vuint32m4_t __riscv_vsm3c_tu (vuint32m4_t vd, vuint32m4_t vs2, size_t uimm, size_t vl);
vuint32m8_t __riscv_vsm3c_tu (vuint32m8_t vd, vuint32m8_t vs2, size_t uimm, size_t vl);
```
