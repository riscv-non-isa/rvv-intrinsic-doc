
## Zvbb - Vector Bit-manipulation used in Cryptography:

### [Vector Bit-manipulation used in Cryptography - Bitwise And-Not]():

**Prototypes:**
``` C
vuint8mf8_t __riscv_vandn (vuint8mf8_t vs2, vuint8mf8_t vs1, size_t vl);
vuint8mf8_t __riscv_vandn (vuint8mf8_t vs2, uint8_t rs1, size_t vl);
vuint8mf4_t __riscv_vandn (vuint8mf4_t vs2, vuint8mf4_t vs1, size_t vl);
vuint8mf4_t __riscv_vandn (vuint8mf4_t vs2, uint8_t rs1, size_t vl);
vuint8mf2_t __riscv_vandn (vuint8mf2_t vs2, vuint8mf2_t vs1, size_t vl);
vuint8mf2_t __riscv_vandn (vuint8mf2_t vs2, uint8_t rs1, size_t vl);
vuint8m1_t __riscv_vandn (vuint8m1_t vs2, vuint8m1_t vs1, size_t vl);
vuint8m1_t __riscv_vandn (vuint8m1_t vs2, uint8_t rs1, size_t vl);
vuint8m2_t __riscv_vandn (vuint8m2_t vs2, vuint8m2_t vs1, size_t vl);
vuint8m2_t __riscv_vandn (vuint8m2_t vs2, uint8_t rs1, size_t vl);
vuint8m4_t __riscv_vandn (vuint8m4_t vs2, vuint8m4_t vs1, size_t vl);
vuint8m4_t __riscv_vandn (vuint8m4_t vs2, uint8_t rs1, size_t vl);
vuint8m8_t __riscv_vandn (vuint8m8_t vs2, vuint8m8_t vs1, size_t vl);
vuint8m8_t __riscv_vandn (vuint8m8_t vs2, uint8_t rs1, size_t vl);
vuint16mf4_t __riscv_vandn (vuint16mf4_t vs2, vuint16mf4_t vs1, size_t vl);
vuint16mf4_t __riscv_vandn (vuint16mf4_t vs2, uint16_t rs1, size_t vl);
vuint16mf2_t __riscv_vandn (vuint16mf2_t vs2, vuint16mf2_t vs1, size_t vl);
vuint16mf2_t __riscv_vandn (vuint16mf2_t vs2, uint16_t rs1, size_t vl);
vuint16m1_t __riscv_vandn (vuint16m1_t vs2, vuint16m1_t vs1, size_t vl);
vuint16m1_t __riscv_vandn (vuint16m1_t vs2, uint16_t rs1, size_t vl);
vuint16m2_t __riscv_vandn (vuint16m2_t vs2, vuint16m2_t vs1, size_t vl);
vuint16m2_t __riscv_vandn (vuint16m2_t vs2, uint16_t rs1, size_t vl);
vuint16m4_t __riscv_vandn (vuint16m4_t vs2, vuint16m4_t vs1, size_t vl);
vuint16m4_t __riscv_vandn (vuint16m4_t vs2, uint16_t rs1, size_t vl);
vuint16m8_t __riscv_vandn (vuint16m8_t vs2, vuint16m8_t vs1, size_t vl);
vuint16m8_t __riscv_vandn (vuint16m8_t vs2, uint16_t rs1, size_t vl);
vuint32mf2_t __riscv_vandn (vuint32mf2_t vs2, vuint32mf2_t vs1, size_t vl);
vuint32mf2_t __riscv_vandn (vuint32mf2_t vs2, uint32_t rs1, size_t vl);
vuint32m1_t __riscv_vandn (vuint32m1_t vs2, vuint32m1_t vs1, size_t vl);
vuint32m1_t __riscv_vandn (vuint32m1_t vs2, uint32_t rs1, size_t vl);
vuint32m2_t __riscv_vandn (vuint32m2_t vs2, vuint32m2_t vs1, size_t vl);
vuint32m2_t __riscv_vandn (vuint32m2_t vs2, uint32_t rs1, size_t vl);
vuint32m4_t __riscv_vandn (vuint32m4_t vs2, vuint32m4_t vs1, size_t vl);
vuint32m4_t __riscv_vandn (vuint32m4_t vs2, uint32_t rs1, size_t vl);
vuint32m8_t __riscv_vandn (vuint32m8_t vs2, vuint32m8_t vs1, size_t vl);
vuint32m8_t __riscv_vandn (vuint32m8_t vs2, uint32_t rs1, size_t vl);
vuint64m1_t __riscv_vandn (vuint64m1_t vs2, vuint64m1_t vs1, size_t vl);
vuint64m1_t __riscv_vandn (vuint64m1_t vs2, uint64_t rs1, size_t vl);
vuint64m2_t __riscv_vandn (vuint64m2_t vs2, vuint64m2_t vs1, size_t vl);
vuint64m2_t __riscv_vandn (vuint64m2_t vs2, uint64_t rs1, size_t vl);
vuint64m4_t __riscv_vandn (vuint64m4_t vs2, vuint64m4_t vs1, size_t vl);
vuint64m4_t __riscv_vandn (vuint64m4_t vs2, uint64_t rs1, size_t vl);
vuint64m8_t __riscv_vandn (vuint64m8_t vs2, vuint64m8_t vs1, size_t vl);
vuint64m8_t __riscv_vandn (vuint64m8_t vs2, uint64_t rs1, size_t vl);
// masked functions
vuint8mf8_t __riscv_vandn (vbool64_t mask, vuint8mf8_t vs2, vuint8mf8_t vs1, size_t vl);
vuint8mf8_t __riscv_vandn (vbool64_t mask, vuint8mf8_t vs2, uint8_t rs1, size_t vl);
vuint8mf4_t __riscv_vandn (vbool32_t mask, vuint8mf4_t vs2, vuint8mf4_t vs1, size_t vl);
vuint8mf4_t __riscv_vandn (vbool32_t mask, vuint8mf4_t vs2, uint8_t rs1, size_t vl);
vuint8mf2_t __riscv_vandn (vbool16_t mask, vuint8mf2_t vs2, vuint8mf2_t vs1, size_t vl);
vuint8mf2_t __riscv_vandn (vbool16_t mask, vuint8mf2_t vs2, uint8_t rs1, size_t vl);
vuint8m1_t __riscv_vandn (vbool8_t mask, vuint8m1_t vs2, vuint8m1_t vs1, size_t vl);
vuint8m1_t __riscv_vandn (vbool8_t mask, vuint8m1_t vs2, uint8_t rs1, size_t vl);
vuint8m2_t __riscv_vandn (vbool4_t mask, vuint8m2_t vs2, vuint8m2_t vs1, size_t vl);
vuint8m2_t __riscv_vandn (vbool4_t mask, vuint8m2_t vs2, uint8_t rs1, size_t vl);
vuint8m4_t __riscv_vandn (vbool2_t mask, vuint8m4_t vs2, vuint8m4_t vs1, size_t vl);
vuint8m4_t __riscv_vandn (vbool2_t mask, vuint8m4_t vs2, uint8_t rs1, size_t vl);
vuint8m8_t __riscv_vandn (vbool1_t mask, vuint8m8_t vs2, vuint8m8_t vs1, size_t vl);
vuint8m8_t __riscv_vandn (vbool1_t mask, vuint8m8_t vs2, uint8_t rs1, size_t vl);
vuint16mf4_t __riscv_vandn (vbool64_t mask, vuint16mf4_t vs2, vuint16mf4_t vs1, size_t vl);
vuint16mf4_t __riscv_vandn (vbool64_t mask, vuint16mf4_t vs2, uint16_t rs1, size_t vl);
vuint16mf2_t __riscv_vandn (vbool32_t mask, vuint16mf2_t vs2, vuint16mf2_t vs1, size_t vl);
vuint16mf2_t __riscv_vandn (vbool32_t mask, vuint16mf2_t vs2, uint16_t rs1, size_t vl);
vuint16m1_t __riscv_vandn (vbool16_t mask, vuint16m1_t vs2, vuint16m1_t vs1, size_t vl);
vuint16m1_t __riscv_vandn (vbool16_t mask, vuint16m1_t vs2, uint16_t rs1, size_t vl);
vuint16m2_t __riscv_vandn (vbool8_t mask, vuint16m2_t vs2, vuint16m2_t vs1, size_t vl);
vuint16m2_t __riscv_vandn (vbool8_t mask, vuint16m2_t vs2, uint16_t rs1, size_t vl);
vuint16m4_t __riscv_vandn (vbool4_t mask, vuint16m4_t vs2, vuint16m4_t vs1, size_t vl);
vuint16m4_t __riscv_vandn (vbool4_t mask, vuint16m4_t vs2, uint16_t rs1, size_t vl);
vuint16m8_t __riscv_vandn (vbool2_t mask, vuint16m8_t vs2, vuint16m8_t vs1, size_t vl);
vuint16m8_t __riscv_vandn (vbool2_t mask, vuint16m8_t vs2, uint16_t rs1, size_t vl);
vuint32mf2_t __riscv_vandn (vbool64_t mask, vuint32mf2_t vs2, vuint32mf2_t vs1, size_t vl);
vuint32mf2_t __riscv_vandn (vbool64_t mask, vuint32mf2_t vs2, uint32_t rs1, size_t vl);
vuint32m1_t __riscv_vandn (vbool32_t mask, vuint32m1_t vs2, vuint32m1_t vs1, size_t vl);
vuint32m1_t __riscv_vandn (vbool32_t mask, vuint32m1_t vs2, uint32_t rs1, size_t vl);
vuint32m2_t __riscv_vandn (vbool16_t mask, vuint32m2_t vs2, vuint32m2_t vs1, size_t vl);
vuint32m2_t __riscv_vandn (vbool16_t mask, vuint32m2_t vs2, uint32_t rs1, size_t vl);
vuint32m4_t __riscv_vandn (vbool8_t mask, vuint32m4_t vs2, vuint32m4_t vs1, size_t vl);
vuint32m4_t __riscv_vandn (vbool8_t mask, vuint32m4_t vs2, uint32_t rs1, size_t vl);
vuint32m8_t __riscv_vandn (vbool4_t mask, vuint32m8_t vs2, vuint32m8_t vs1, size_t vl);
vuint32m8_t __riscv_vandn (vbool4_t mask, vuint32m8_t vs2, uint32_t rs1, size_t vl);
vuint64m1_t __riscv_vandn (vbool64_t mask, vuint64m1_t vs2, vuint64m1_t vs1, size_t vl);
vuint64m1_t __riscv_vandn (vbool64_t mask, vuint64m1_t vs2, uint64_t rs1, size_t vl);
vuint64m2_t __riscv_vandn (vbool32_t mask, vuint64m2_t vs2, vuint64m2_t vs1, size_t vl);
vuint64m2_t __riscv_vandn (vbool32_t mask, vuint64m2_t vs2, uint64_t rs1, size_t vl);
vuint64m4_t __riscv_vandn (vbool16_t mask, vuint64m4_t vs2, vuint64m4_t vs1, size_t vl);
vuint64m4_t __riscv_vandn (vbool16_t mask, vuint64m4_t vs2, uint64_t rs1, size_t vl);
vuint64m8_t __riscv_vandn (vbool8_t mask, vuint64m8_t vs2, vuint64m8_t vs1, size_t vl);
vuint64m8_t __riscv_vandn (vbool8_t mask, vuint64m8_t vs2, uint64_t rs1, size_t vl);
```

### [Vector Bit-manipulation used in Cryptography - Reverse Bits]():

**Prototypes:**
``` C
vuint8mf8_t __riscv_vbrev (vuint8mf8_t vs2, size_t vl);
vuint8mf4_t __riscv_vbrev (vuint8mf4_t vs2, size_t vl);
vuint8mf2_t __riscv_vbrev (vuint8mf2_t vs2, size_t vl);
vuint8m1_t __riscv_vbrev (vuint8m1_t vs2, size_t vl);
vuint8m2_t __riscv_vbrev (vuint8m2_t vs2, size_t vl);
vuint8m4_t __riscv_vbrev (vuint8m4_t vs2, size_t vl);
vuint8m8_t __riscv_vbrev (vuint8m8_t vs2, size_t vl);
vuint16mf4_t __riscv_vbrev (vuint16mf4_t vs2, size_t vl);
vuint16mf2_t __riscv_vbrev (vuint16mf2_t vs2, size_t vl);
vuint16m1_t __riscv_vbrev (vuint16m1_t vs2, size_t vl);
vuint16m2_t __riscv_vbrev (vuint16m2_t vs2, size_t vl);
vuint16m4_t __riscv_vbrev (vuint16m4_t vs2, size_t vl);
vuint16m8_t __riscv_vbrev (vuint16m8_t vs2, size_t vl);
vuint32mf2_t __riscv_vbrev (vuint32mf2_t vs2, size_t vl);
vuint32m1_t __riscv_vbrev (vuint32m1_t vs2, size_t vl);
vuint32m2_t __riscv_vbrev (vuint32m2_t vs2, size_t vl);
vuint32m4_t __riscv_vbrev (vuint32m4_t vs2, size_t vl);
vuint32m8_t __riscv_vbrev (vuint32m8_t vs2, size_t vl);
vuint64m1_t __riscv_vbrev (vuint64m1_t vs2, size_t vl);
vuint64m2_t __riscv_vbrev (vuint64m2_t vs2, size_t vl);
vuint64m4_t __riscv_vbrev (vuint64m4_t vs2, size_t vl);
vuint64m8_t __riscv_vbrev (vuint64m8_t vs2, size_t vl);
vuint8mf8_t __riscv_vbrev8 (vuint8mf8_t vs2, size_t vl);
vuint8mf4_t __riscv_vbrev8 (vuint8mf4_t vs2, size_t vl);
vuint8mf2_t __riscv_vbrev8 (vuint8mf2_t vs2, size_t vl);
vuint8m1_t __riscv_vbrev8 (vuint8m1_t vs2, size_t vl);
vuint8m2_t __riscv_vbrev8 (vuint8m2_t vs2, size_t vl);
vuint8m4_t __riscv_vbrev8 (vuint8m4_t vs2, size_t vl);
vuint8m8_t __riscv_vbrev8 (vuint8m8_t vs2, size_t vl);
vuint16mf4_t __riscv_vbrev8 (vuint16mf4_t vs2, size_t vl);
vuint16mf2_t __riscv_vbrev8 (vuint16mf2_t vs2, size_t vl);
vuint16m1_t __riscv_vbrev8 (vuint16m1_t vs2, size_t vl);
vuint16m2_t __riscv_vbrev8 (vuint16m2_t vs2, size_t vl);
vuint16m4_t __riscv_vbrev8 (vuint16m4_t vs2, size_t vl);
vuint16m8_t __riscv_vbrev8 (vuint16m8_t vs2, size_t vl);
vuint32mf2_t __riscv_vbrev8 (vuint32mf2_t vs2, size_t vl);
vuint32m1_t __riscv_vbrev8 (vuint32m1_t vs2, size_t vl);
vuint32m2_t __riscv_vbrev8 (vuint32m2_t vs2, size_t vl);
vuint32m4_t __riscv_vbrev8 (vuint32m4_t vs2, size_t vl);
vuint32m8_t __riscv_vbrev8 (vuint32m8_t vs2, size_t vl);
vuint64m1_t __riscv_vbrev8 (vuint64m1_t vs2, size_t vl);
vuint64m2_t __riscv_vbrev8 (vuint64m2_t vs2, size_t vl);
vuint64m4_t __riscv_vbrev8 (vuint64m4_t vs2, size_t vl);
vuint64m8_t __riscv_vbrev8 (vuint64m8_t vs2, size_t vl);
vuint8mf8_t __riscv_vrev8 (vuint8mf8_t vs2, size_t vl);
vuint8mf4_t __riscv_vrev8 (vuint8mf4_t vs2, size_t vl);
vuint8mf2_t __riscv_vrev8 (vuint8mf2_t vs2, size_t vl);
vuint8m1_t __riscv_vrev8 (vuint8m1_t vs2, size_t vl);
vuint8m2_t __riscv_vrev8 (vuint8m2_t vs2, size_t vl);
vuint8m4_t __riscv_vrev8 (vuint8m4_t vs2, size_t vl);
vuint8m8_t __riscv_vrev8 (vuint8m8_t vs2, size_t vl);
vuint16mf4_t __riscv_vrev8 (vuint16mf4_t vs2, size_t vl);
vuint16mf2_t __riscv_vrev8 (vuint16mf2_t vs2, size_t vl);
vuint16m1_t __riscv_vrev8 (vuint16m1_t vs2, size_t vl);
vuint16m2_t __riscv_vrev8 (vuint16m2_t vs2, size_t vl);
vuint16m4_t __riscv_vrev8 (vuint16m4_t vs2, size_t vl);
vuint16m8_t __riscv_vrev8 (vuint16m8_t vs2, size_t vl);
vuint32mf2_t __riscv_vrev8 (vuint32mf2_t vs2, size_t vl);
vuint32m1_t __riscv_vrev8 (vuint32m1_t vs2, size_t vl);
vuint32m2_t __riscv_vrev8 (vuint32m2_t vs2, size_t vl);
vuint32m4_t __riscv_vrev8 (vuint32m4_t vs2, size_t vl);
vuint32m8_t __riscv_vrev8 (vuint32m8_t vs2, size_t vl);
vuint64m1_t __riscv_vrev8 (vuint64m1_t vs2, size_t vl);
vuint64m2_t __riscv_vrev8 (vuint64m2_t vs2, size_t vl);
vuint64m4_t __riscv_vrev8 (vuint64m4_t vs2, size_t vl);
vuint64m8_t __riscv_vrev8 (vuint64m8_t vs2, size_t vl);
// masked functions
vuint8mf8_t __riscv_vbrev (vbool64_t mask, vuint8mf8_t vs2, size_t vl);
vuint8mf4_t __riscv_vbrev (vbool32_t mask, vuint8mf4_t vs2, size_t vl);
vuint8mf2_t __riscv_vbrev (vbool16_t mask, vuint8mf2_t vs2, size_t vl);
vuint8m1_t __riscv_vbrev (vbool8_t mask, vuint8m1_t vs2, size_t vl);
vuint8m2_t __riscv_vbrev (vbool4_t mask, vuint8m2_t vs2, size_t vl);
vuint8m4_t __riscv_vbrev (vbool2_t mask, vuint8m4_t vs2, size_t vl);
vuint8m8_t __riscv_vbrev (vbool1_t mask, vuint8m8_t vs2, size_t vl);
vuint16mf4_t __riscv_vbrev (vbool64_t mask, vuint16mf4_t vs2, size_t vl);
vuint16mf2_t __riscv_vbrev (vbool32_t mask, vuint16mf2_t vs2, size_t vl);
vuint16m1_t __riscv_vbrev (vbool16_t mask, vuint16m1_t vs2, size_t vl);
vuint16m2_t __riscv_vbrev (vbool8_t mask, vuint16m2_t vs2, size_t vl);
vuint16m4_t __riscv_vbrev (vbool4_t mask, vuint16m4_t vs2, size_t vl);
vuint16m8_t __riscv_vbrev (vbool2_t mask, vuint16m8_t vs2, size_t vl);
vuint32mf2_t __riscv_vbrev (vbool64_t mask, vuint32mf2_t vs2, size_t vl);
vuint32m1_t __riscv_vbrev (vbool32_t mask, vuint32m1_t vs2, size_t vl);
vuint32m2_t __riscv_vbrev (vbool16_t mask, vuint32m2_t vs2, size_t vl);
vuint32m4_t __riscv_vbrev (vbool8_t mask, vuint32m4_t vs2, size_t vl);
vuint32m8_t __riscv_vbrev (vbool4_t mask, vuint32m8_t vs2, size_t vl);
vuint64m1_t __riscv_vbrev (vbool64_t mask, vuint64m1_t vs2, size_t vl);
vuint64m2_t __riscv_vbrev (vbool32_t mask, vuint64m2_t vs2, size_t vl);
vuint64m4_t __riscv_vbrev (vbool16_t mask, vuint64m4_t vs2, size_t vl);
vuint64m8_t __riscv_vbrev (vbool8_t mask, vuint64m8_t vs2, size_t vl);
vuint8mf8_t __riscv_vbrev8 (vbool64_t mask, vuint8mf8_t vs2, size_t vl);
vuint8mf4_t __riscv_vbrev8 (vbool32_t mask, vuint8mf4_t vs2, size_t vl);
vuint8mf2_t __riscv_vbrev8 (vbool16_t mask, vuint8mf2_t vs2, size_t vl);
vuint8m1_t __riscv_vbrev8 (vbool8_t mask, vuint8m1_t vs2, size_t vl);
vuint8m2_t __riscv_vbrev8 (vbool4_t mask, vuint8m2_t vs2, size_t vl);
vuint8m4_t __riscv_vbrev8 (vbool2_t mask, vuint8m4_t vs2, size_t vl);
vuint8m8_t __riscv_vbrev8 (vbool1_t mask, vuint8m8_t vs2, size_t vl);
vuint16mf4_t __riscv_vbrev8 (vbool64_t mask, vuint16mf4_t vs2, size_t vl);
vuint16mf2_t __riscv_vbrev8 (vbool32_t mask, vuint16mf2_t vs2, size_t vl);
vuint16m1_t __riscv_vbrev8 (vbool16_t mask, vuint16m1_t vs2, size_t vl);
vuint16m2_t __riscv_vbrev8 (vbool8_t mask, vuint16m2_t vs2, size_t vl);
vuint16m4_t __riscv_vbrev8 (vbool4_t mask, vuint16m4_t vs2, size_t vl);
vuint16m8_t __riscv_vbrev8 (vbool2_t mask, vuint16m8_t vs2, size_t vl);
vuint32mf2_t __riscv_vbrev8 (vbool64_t mask, vuint32mf2_t vs2, size_t vl);
vuint32m1_t __riscv_vbrev8 (vbool32_t mask, vuint32m1_t vs2, size_t vl);
vuint32m2_t __riscv_vbrev8 (vbool16_t mask, vuint32m2_t vs2, size_t vl);
vuint32m4_t __riscv_vbrev8 (vbool8_t mask, vuint32m4_t vs2, size_t vl);
vuint32m8_t __riscv_vbrev8 (vbool4_t mask, vuint32m8_t vs2, size_t vl);
vuint64m1_t __riscv_vbrev8 (vbool64_t mask, vuint64m1_t vs2, size_t vl);
vuint64m2_t __riscv_vbrev8 (vbool32_t mask, vuint64m2_t vs2, size_t vl);
vuint64m4_t __riscv_vbrev8 (vbool16_t mask, vuint64m4_t vs2, size_t vl);
vuint64m8_t __riscv_vbrev8 (vbool8_t mask, vuint64m8_t vs2, size_t vl);
vuint8mf8_t __riscv_vrev8 (vbool64_t mask, vuint8mf8_t vs2, size_t vl);
vuint8mf4_t __riscv_vrev8 (vbool32_t mask, vuint8mf4_t vs2, size_t vl);
vuint8mf2_t __riscv_vrev8 (vbool16_t mask, vuint8mf2_t vs2, size_t vl);
vuint8m1_t __riscv_vrev8 (vbool8_t mask, vuint8m1_t vs2, size_t vl);
vuint8m2_t __riscv_vrev8 (vbool4_t mask, vuint8m2_t vs2, size_t vl);
vuint8m4_t __riscv_vrev8 (vbool2_t mask, vuint8m4_t vs2, size_t vl);
vuint8m8_t __riscv_vrev8 (vbool1_t mask, vuint8m8_t vs2, size_t vl);
vuint16mf4_t __riscv_vrev8 (vbool64_t mask, vuint16mf4_t vs2, size_t vl);
vuint16mf2_t __riscv_vrev8 (vbool32_t mask, vuint16mf2_t vs2, size_t vl);
vuint16m1_t __riscv_vrev8 (vbool16_t mask, vuint16m1_t vs2, size_t vl);
vuint16m2_t __riscv_vrev8 (vbool8_t mask, vuint16m2_t vs2, size_t vl);
vuint16m4_t __riscv_vrev8 (vbool4_t mask, vuint16m4_t vs2, size_t vl);
vuint16m8_t __riscv_vrev8 (vbool2_t mask, vuint16m8_t vs2, size_t vl);
vuint32mf2_t __riscv_vrev8 (vbool64_t mask, vuint32mf2_t vs2, size_t vl);
vuint32m1_t __riscv_vrev8 (vbool32_t mask, vuint32m1_t vs2, size_t vl);
vuint32m2_t __riscv_vrev8 (vbool16_t mask, vuint32m2_t vs2, size_t vl);
vuint32m4_t __riscv_vrev8 (vbool8_t mask, vuint32m4_t vs2, size_t vl);
vuint32m8_t __riscv_vrev8 (vbool4_t mask, vuint32m8_t vs2, size_t vl);
vuint64m1_t __riscv_vrev8 (vbool64_t mask, vuint64m1_t vs2, size_t vl);
vuint64m2_t __riscv_vrev8 (vbool32_t mask, vuint64m2_t vs2, size_t vl);
vuint64m4_t __riscv_vrev8 (vbool16_t mask, vuint64m4_t vs2, size_t vl);
vuint64m8_t __riscv_vrev8 (vbool8_t mask, vuint64m8_t vs2, size_t vl);
```

### [Vector Bit-manipulation used in Cryptography - Count Bits]():

**Prototypes:**
``` C
vuint8mf8_t __riscv_vclz (vuint8mf8_t vs2, size_t vl);
vuint8mf4_t __riscv_vclz (vuint8mf4_t vs2, size_t vl);
vuint8mf2_t __riscv_vclz (vuint8mf2_t vs2, size_t vl);
vuint8m1_t __riscv_vclz (vuint8m1_t vs2, size_t vl);
vuint8m2_t __riscv_vclz (vuint8m2_t vs2, size_t vl);
vuint8m4_t __riscv_vclz (vuint8m4_t vs2, size_t vl);
vuint8m8_t __riscv_vclz (vuint8m8_t vs2, size_t vl);
vuint16mf4_t __riscv_vclz (vuint16mf4_t vs2, size_t vl);
vuint16mf2_t __riscv_vclz (vuint16mf2_t vs2, size_t vl);
vuint16m1_t __riscv_vclz (vuint16m1_t vs2, size_t vl);
vuint16m2_t __riscv_vclz (vuint16m2_t vs2, size_t vl);
vuint16m4_t __riscv_vclz (vuint16m4_t vs2, size_t vl);
vuint16m8_t __riscv_vclz (vuint16m8_t vs2, size_t vl);
vuint32mf2_t __riscv_vclz (vuint32mf2_t vs2, size_t vl);
vuint32m1_t __riscv_vclz (vuint32m1_t vs2, size_t vl);
vuint32m2_t __riscv_vclz (vuint32m2_t vs2, size_t vl);
vuint32m4_t __riscv_vclz (vuint32m4_t vs2, size_t vl);
vuint32m8_t __riscv_vclz (vuint32m8_t vs2, size_t vl);
vuint64m1_t __riscv_vclz (vuint64m1_t vs2, size_t vl);
vuint64m2_t __riscv_vclz (vuint64m2_t vs2, size_t vl);
vuint64m4_t __riscv_vclz (vuint64m4_t vs2, size_t vl);
vuint64m8_t __riscv_vclz (vuint64m8_t vs2, size_t vl);
vuint8mf8_t __riscv_vctz (vuint8mf8_t vs2, size_t vl);
vuint8mf4_t __riscv_vctz (vuint8mf4_t vs2, size_t vl);
vuint8mf2_t __riscv_vctz (vuint8mf2_t vs2, size_t vl);
vuint8m1_t __riscv_vctz (vuint8m1_t vs2, size_t vl);
vuint8m2_t __riscv_vctz (vuint8m2_t vs2, size_t vl);
vuint8m4_t __riscv_vctz (vuint8m4_t vs2, size_t vl);
vuint8m8_t __riscv_vctz (vuint8m8_t vs2, size_t vl);
vuint16mf4_t __riscv_vctz (vuint16mf4_t vs2, size_t vl);
vuint16mf2_t __riscv_vctz (vuint16mf2_t vs2, size_t vl);
vuint16m1_t __riscv_vctz (vuint16m1_t vs2, size_t vl);
vuint16m2_t __riscv_vctz (vuint16m2_t vs2, size_t vl);
vuint16m4_t __riscv_vctz (vuint16m4_t vs2, size_t vl);
vuint16m8_t __riscv_vctz (vuint16m8_t vs2, size_t vl);
vuint32mf2_t __riscv_vctz (vuint32mf2_t vs2, size_t vl);
vuint32m1_t __riscv_vctz (vuint32m1_t vs2, size_t vl);
vuint32m2_t __riscv_vctz (vuint32m2_t vs2, size_t vl);
vuint32m4_t __riscv_vctz (vuint32m4_t vs2, size_t vl);
vuint32m8_t __riscv_vctz (vuint32m8_t vs2, size_t vl);
vuint64m1_t __riscv_vctz (vuint64m1_t vs2, size_t vl);
vuint64m2_t __riscv_vctz (vuint64m2_t vs2, size_t vl);
vuint64m4_t __riscv_vctz (vuint64m4_t vs2, size_t vl);
vuint64m8_t __riscv_vctz (vuint64m8_t vs2, size_t vl);
// masked functions
vuint8mf8_t __riscv_vclz (vbool64_t mask, vuint8mf8_t vs2, size_t vl);
vuint8mf4_t __riscv_vclz (vbool32_t mask, vuint8mf4_t vs2, size_t vl);
vuint8mf2_t __riscv_vclz (vbool16_t mask, vuint8mf2_t vs2, size_t vl);
vuint8m1_t __riscv_vclz (vbool8_t mask, vuint8m1_t vs2, size_t vl);
vuint8m2_t __riscv_vclz (vbool4_t mask, vuint8m2_t vs2, size_t vl);
vuint8m4_t __riscv_vclz (vbool2_t mask, vuint8m4_t vs2, size_t vl);
vuint8m8_t __riscv_vclz (vbool1_t mask, vuint8m8_t vs2, size_t vl);
vuint16mf4_t __riscv_vclz (vbool64_t mask, vuint16mf4_t vs2, size_t vl);
vuint16mf2_t __riscv_vclz (vbool32_t mask, vuint16mf2_t vs2, size_t vl);
vuint16m1_t __riscv_vclz (vbool16_t mask, vuint16m1_t vs2, size_t vl);
vuint16m2_t __riscv_vclz (vbool8_t mask, vuint16m2_t vs2, size_t vl);
vuint16m4_t __riscv_vclz (vbool4_t mask, vuint16m4_t vs2, size_t vl);
vuint16m8_t __riscv_vclz (vbool2_t mask, vuint16m8_t vs2, size_t vl);
vuint32mf2_t __riscv_vclz (vbool64_t mask, vuint32mf2_t vs2, size_t vl);
vuint32m1_t __riscv_vclz (vbool32_t mask, vuint32m1_t vs2, size_t vl);
vuint32m2_t __riscv_vclz (vbool16_t mask, vuint32m2_t vs2, size_t vl);
vuint32m4_t __riscv_vclz (vbool8_t mask, vuint32m4_t vs2, size_t vl);
vuint32m8_t __riscv_vclz (vbool4_t mask, vuint32m8_t vs2, size_t vl);
vuint64m1_t __riscv_vclz (vbool64_t mask, vuint64m1_t vs2, size_t vl);
vuint64m2_t __riscv_vclz (vbool32_t mask, vuint64m2_t vs2, size_t vl);
vuint64m4_t __riscv_vclz (vbool16_t mask, vuint64m4_t vs2, size_t vl);
vuint64m8_t __riscv_vclz (vbool8_t mask, vuint64m8_t vs2, size_t vl);
vuint8mf8_t __riscv_vctz (vbool64_t mask, vuint8mf8_t vs2, size_t vl);
vuint8mf4_t __riscv_vctz (vbool32_t mask, vuint8mf4_t vs2, size_t vl);
vuint8mf2_t __riscv_vctz (vbool16_t mask, vuint8mf2_t vs2, size_t vl);
vuint8m1_t __riscv_vctz (vbool8_t mask, vuint8m1_t vs2, size_t vl);
vuint8m2_t __riscv_vctz (vbool4_t mask, vuint8m2_t vs2, size_t vl);
vuint8m4_t __riscv_vctz (vbool2_t mask, vuint8m4_t vs2, size_t vl);
vuint8m8_t __riscv_vctz (vbool1_t mask, vuint8m8_t vs2, size_t vl);
vuint16mf4_t __riscv_vctz (vbool64_t mask, vuint16mf4_t vs2, size_t vl);
vuint16mf2_t __riscv_vctz (vbool32_t mask, vuint16mf2_t vs2, size_t vl);
vuint16m1_t __riscv_vctz (vbool16_t mask, vuint16m1_t vs2, size_t vl);
vuint16m2_t __riscv_vctz (vbool8_t mask, vuint16m2_t vs2, size_t vl);
vuint16m4_t __riscv_vctz (vbool4_t mask, vuint16m4_t vs2, size_t vl);
vuint16m8_t __riscv_vctz (vbool2_t mask, vuint16m8_t vs2, size_t vl);
vuint32mf2_t __riscv_vctz (vbool64_t mask, vuint32mf2_t vs2, size_t vl);
vuint32m1_t __riscv_vctz (vbool32_t mask, vuint32m1_t vs2, size_t vl);
vuint32m2_t __riscv_vctz (vbool16_t mask, vuint32m2_t vs2, size_t vl);
vuint32m4_t __riscv_vctz (vbool8_t mask, vuint32m4_t vs2, size_t vl);
vuint32m8_t __riscv_vctz (vbool4_t mask, vuint32m8_t vs2, size_t vl);
vuint64m1_t __riscv_vctz (vbool64_t mask, vuint64m1_t vs2, size_t vl);
vuint64m2_t __riscv_vctz (vbool32_t mask, vuint64m2_t vs2, size_t vl);
vuint64m4_t __riscv_vctz (vbool16_t mask, vuint64m4_t vs2, size_t vl);
vuint64m8_t __riscv_vctz (vbool8_t mask, vuint64m8_t vs2, size_t vl);
```

### [Vector Bit-manipulation used in Cryptography - Rotate]():

**Prototypes:**
``` C
vuint8mf8_t __riscv_vrol (vuint8mf8_t vs2, vuint8mf8_t vs1, size_t vl);
vuint8mf8_t __riscv_vrol (vuint8mf8_t vs2, size_t rs1, size_t vl);
vuint8mf4_t __riscv_vrol (vuint8mf4_t vs2, vuint8mf4_t vs1, size_t vl);
vuint8mf4_t __riscv_vrol (vuint8mf4_t vs2, size_t rs1, size_t vl);
vuint8mf2_t __riscv_vrol (vuint8mf2_t vs2, vuint8mf2_t vs1, size_t vl);
vuint8mf2_t __riscv_vrol (vuint8mf2_t vs2, size_t rs1, size_t vl);
vuint8m1_t __riscv_vrol (vuint8m1_t vs2, vuint8m1_t vs1, size_t vl);
vuint8m1_t __riscv_vrol (vuint8m1_t vs2, size_t rs1, size_t vl);
vuint8m2_t __riscv_vrol (vuint8m2_t vs2, vuint8m2_t vs1, size_t vl);
vuint8m2_t __riscv_vrol (vuint8m2_t vs2, size_t rs1, size_t vl);
vuint8m4_t __riscv_vrol (vuint8m4_t vs2, vuint8m4_t vs1, size_t vl);
vuint8m4_t __riscv_vrol (vuint8m4_t vs2, size_t rs1, size_t vl);
vuint8m8_t __riscv_vrol (vuint8m8_t vs2, vuint8m8_t vs1, size_t vl);
vuint8m8_t __riscv_vrol (vuint8m8_t vs2, size_t rs1, size_t vl);
vuint16mf4_t __riscv_vrol (vuint16mf4_t vs2, vuint16mf4_t vs1, size_t vl);
vuint16mf4_t __riscv_vrol (vuint16mf4_t vs2, size_t rs1, size_t vl);
vuint16mf2_t __riscv_vrol (vuint16mf2_t vs2, vuint16mf2_t vs1, size_t vl);
vuint16mf2_t __riscv_vrol (vuint16mf2_t vs2, size_t rs1, size_t vl);
vuint16m1_t __riscv_vrol (vuint16m1_t vs2, vuint16m1_t vs1, size_t vl);
vuint16m1_t __riscv_vrol (vuint16m1_t vs2, size_t rs1, size_t vl);
vuint16m2_t __riscv_vrol (vuint16m2_t vs2, vuint16m2_t vs1, size_t vl);
vuint16m2_t __riscv_vrol (vuint16m2_t vs2, size_t rs1, size_t vl);
vuint16m4_t __riscv_vrol (vuint16m4_t vs2, vuint16m4_t vs1, size_t vl);
vuint16m4_t __riscv_vrol (vuint16m4_t vs2, size_t rs1, size_t vl);
vuint16m8_t __riscv_vrol (vuint16m8_t vs2, vuint16m8_t vs1, size_t vl);
vuint16m8_t __riscv_vrol (vuint16m8_t vs2, size_t rs1, size_t vl);
vuint32mf2_t __riscv_vrol (vuint32mf2_t vs2, vuint32mf2_t vs1, size_t vl);
vuint32mf2_t __riscv_vrol (vuint32mf2_t vs2, size_t rs1, size_t vl);
vuint32m1_t __riscv_vrol (vuint32m1_t vs2, vuint32m1_t vs1, size_t vl);
vuint32m1_t __riscv_vrol (vuint32m1_t vs2, size_t rs1, size_t vl);
vuint32m2_t __riscv_vrol (vuint32m2_t vs2, vuint32m2_t vs1, size_t vl);
vuint32m2_t __riscv_vrol (vuint32m2_t vs2, size_t rs1, size_t vl);
vuint32m4_t __riscv_vrol (vuint32m4_t vs2, vuint32m4_t vs1, size_t vl);
vuint32m4_t __riscv_vrol (vuint32m4_t vs2, size_t rs1, size_t vl);
vuint32m8_t __riscv_vrol (vuint32m8_t vs2, vuint32m8_t vs1, size_t vl);
vuint32m8_t __riscv_vrol (vuint32m8_t vs2, size_t rs1, size_t vl);
vuint64m1_t __riscv_vrol (vuint64m1_t vs2, vuint64m1_t vs1, size_t vl);
vuint64m1_t __riscv_vrol (vuint64m1_t vs2, size_t rs1, size_t vl);
vuint64m2_t __riscv_vrol (vuint64m2_t vs2, vuint64m2_t vs1, size_t vl);
vuint64m2_t __riscv_vrol (vuint64m2_t vs2, size_t rs1, size_t vl);
vuint64m4_t __riscv_vrol (vuint64m4_t vs2, vuint64m4_t vs1, size_t vl);
vuint64m4_t __riscv_vrol (vuint64m4_t vs2, size_t rs1, size_t vl);
vuint64m8_t __riscv_vrol (vuint64m8_t vs2, vuint64m8_t vs1, size_t vl);
vuint64m8_t __riscv_vrol (vuint64m8_t vs2, size_t rs1, size_t vl);
vuint8mf8_t __riscv_vror (vuint8mf8_t vs2, vuint8mf8_t vs1, size_t vl);
vuint8mf8_t __riscv_vror (vuint8mf8_t vs2, size_t rs1, size_t vl);
vuint8mf4_t __riscv_vror (vuint8mf4_t vs2, vuint8mf4_t vs1, size_t vl);
vuint8mf4_t __riscv_vror (vuint8mf4_t vs2, size_t rs1, size_t vl);
vuint8mf2_t __riscv_vror (vuint8mf2_t vs2, vuint8mf2_t vs1, size_t vl);
vuint8mf2_t __riscv_vror (vuint8mf2_t vs2, size_t rs1, size_t vl);
vuint8m1_t __riscv_vror (vuint8m1_t vs2, vuint8m1_t vs1, size_t vl);
vuint8m1_t __riscv_vror (vuint8m1_t vs2, size_t rs1, size_t vl);
vuint8m2_t __riscv_vror (vuint8m2_t vs2, vuint8m2_t vs1, size_t vl);
vuint8m2_t __riscv_vror (vuint8m2_t vs2, size_t rs1, size_t vl);
vuint8m4_t __riscv_vror (vuint8m4_t vs2, vuint8m4_t vs1, size_t vl);
vuint8m4_t __riscv_vror (vuint8m4_t vs2, size_t rs1, size_t vl);
vuint8m8_t __riscv_vror (vuint8m8_t vs2, vuint8m8_t vs1, size_t vl);
vuint8m8_t __riscv_vror (vuint8m8_t vs2, size_t rs1, size_t vl);
vuint16mf4_t __riscv_vror (vuint16mf4_t vs2, vuint16mf4_t vs1, size_t vl);
vuint16mf4_t __riscv_vror (vuint16mf4_t vs2, size_t rs1, size_t vl);
vuint16mf2_t __riscv_vror (vuint16mf2_t vs2, vuint16mf2_t vs1, size_t vl);
vuint16mf2_t __riscv_vror (vuint16mf2_t vs2, size_t rs1, size_t vl);
vuint16m1_t __riscv_vror (vuint16m1_t vs2, vuint16m1_t vs1, size_t vl);
vuint16m1_t __riscv_vror (vuint16m1_t vs2, size_t rs1, size_t vl);
vuint16m2_t __riscv_vror (vuint16m2_t vs2, vuint16m2_t vs1, size_t vl);
vuint16m2_t __riscv_vror (vuint16m2_t vs2, size_t rs1, size_t vl);
vuint16m4_t __riscv_vror (vuint16m4_t vs2, vuint16m4_t vs1, size_t vl);
vuint16m4_t __riscv_vror (vuint16m4_t vs2, size_t rs1, size_t vl);
vuint16m8_t __riscv_vror (vuint16m8_t vs2, vuint16m8_t vs1, size_t vl);
vuint16m8_t __riscv_vror (vuint16m8_t vs2, size_t rs1, size_t vl);
vuint32mf2_t __riscv_vror (vuint32mf2_t vs2, vuint32mf2_t vs1, size_t vl);
vuint32mf2_t __riscv_vror (vuint32mf2_t vs2, size_t rs1, size_t vl);
vuint32m1_t __riscv_vror (vuint32m1_t vs2, vuint32m1_t vs1, size_t vl);
vuint32m1_t __riscv_vror (vuint32m1_t vs2, size_t rs1, size_t vl);
vuint32m2_t __riscv_vror (vuint32m2_t vs2, vuint32m2_t vs1, size_t vl);
vuint32m2_t __riscv_vror (vuint32m2_t vs2, size_t rs1, size_t vl);
vuint32m4_t __riscv_vror (vuint32m4_t vs2, vuint32m4_t vs1, size_t vl);
vuint32m4_t __riscv_vror (vuint32m4_t vs2, size_t rs1, size_t vl);
vuint32m8_t __riscv_vror (vuint32m8_t vs2, vuint32m8_t vs1, size_t vl);
vuint32m8_t __riscv_vror (vuint32m8_t vs2, size_t rs1, size_t vl);
vuint64m1_t __riscv_vror (vuint64m1_t vs2, vuint64m1_t vs1, size_t vl);
vuint64m1_t __riscv_vror (vuint64m1_t vs2, size_t rs1, size_t vl);
vuint64m2_t __riscv_vror (vuint64m2_t vs2, vuint64m2_t vs1, size_t vl);
vuint64m2_t __riscv_vror (vuint64m2_t vs2, size_t rs1, size_t vl);
vuint64m4_t __riscv_vror (vuint64m4_t vs2, vuint64m4_t vs1, size_t vl);
vuint64m4_t __riscv_vror (vuint64m4_t vs2, size_t rs1, size_t vl);
vuint64m8_t __riscv_vror (vuint64m8_t vs2, vuint64m8_t vs1, size_t vl);
vuint64m8_t __riscv_vror (vuint64m8_t vs2, size_t rs1, size_t vl);
// masked functions
vuint8mf8_t __riscv_vrol (vbool64_t mask, vuint8mf8_t vs2, vuint8mf8_t vs1, size_t vl);
vuint8mf8_t __riscv_vrol (vbool64_t mask, vuint8mf8_t vs2, size_t rs1, size_t vl);
vuint8mf4_t __riscv_vrol (vbool32_t mask, vuint8mf4_t vs2, vuint8mf4_t vs1, size_t vl);
vuint8mf4_t __riscv_vrol (vbool32_t mask, vuint8mf4_t vs2, size_t rs1, size_t vl);
vuint8mf2_t __riscv_vrol (vbool16_t mask, vuint8mf2_t vs2, vuint8mf2_t vs1, size_t vl);
vuint8mf2_t __riscv_vrol (vbool16_t mask, vuint8mf2_t vs2, size_t rs1, size_t vl);
vuint8m1_t __riscv_vrol (vbool8_t mask, vuint8m1_t vs2, vuint8m1_t vs1, size_t vl);
vuint8m1_t __riscv_vrol (vbool8_t mask, vuint8m1_t vs2, size_t rs1, size_t vl);
vuint8m2_t __riscv_vrol (vbool4_t mask, vuint8m2_t vs2, vuint8m2_t vs1, size_t vl);
vuint8m2_t __riscv_vrol (vbool4_t mask, vuint8m2_t vs2, size_t rs1, size_t vl);
vuint8m4_t __riscv_vrol (vbool2_t mask, vuint8m4_t vs2, vuint8m4_t vs1, size_t vl);
vuint8m4_t __riscv_vrol (vbool2_t mask, vuint8m4_t vs2, size_t rs1, size_t vl);
vuint8m8_t __riscv_vrol (vbool1_t mask, vuint8m8_t vs2, vuint8m8_t vs1, size_t vl);
vuint8m8_t __riscv_vrol (vbool1_t mask, vuint8m8_t vs2, size_t rs1, size_t vl);
vuint16mf4_t __riscv_vrol (vbool64_t mask, vuint16mf4_t vs2, vuint16mf4_t vs1, size_t vl);
vuint16mf4_t __riscv_vrol (vbool64_t mask, vuint16mf4_t vs2, size_t rs1, size_t vl);
vuint16mf2_t __riscv_vrol (vbool32_t mask, vuint16mf2_t vs2, vuint16mf2_t vs1, size_t vl);
vuint16mf2_t __riscv_vrol (vbool32_t mask, vuint16mf2_t vs2, size_t rs1, size_t vl);
vuint16m1_t __riscv_vrol (vbool16_t mask, vuint16m1_t vs2, vuint16m1_t vs1, size_t vl);
vuint16m1_t __riscv_vrol (vbool16_t mask, vuint16m1_t vs2, size_t rs1, size_t vl);
vuint16m2_t __riscv_vrol (vbool8_t mask, vuint16m2_t vs2, vuint16m2_t vs1, size_t vl);
vuint16m2_t __riscv_vrol (vbool8_t mask, vuint16m2_t vs2, size_t rs1, size_t vl);
vuint16m4_t __riscv_vrol (vbool4_t mask, vuint16m4_t vs2, vuint16m4_t vs1, size_t vl);
vuint16m4_t __riscv_vrol (vbool4_t mask, vuint16m4_t vs2, size_t rs1, size_t vl);
vuint16m8_t __riscv_vrol (vbool2_t mask, vuint16m8_t vs2, vuint16m8_t vs1, size_t vl);
vuint16m8_t __riscv_vrol (vbool2_t mask, vuint16m8_t vs2, size_t rs1, size_t vl);
vuint32mf2_t __riscv_vrol (vbool64_t mask, vuint32mf2_t vs2, vuint32mf2_t vs1, size_t vl);
vuint32mf2_t __riscv_vrol (vbool64_t mask, vuint32mf2_t vs2, size_t rs1, size_t vl);
vuint32m1_t __riscv_vrol (vbool32_t mask, vuint32m1_t vs2, vuint32m1_t vs1, size_t vl);
vuint32m1_t __riscv_vrol (vbool32_t mask, vuint32m1_t vs2, size_t rs1, size_t vl);
vuint32m2_t __riscv_vrol (vbool16_t mask, vuint32m2_t vs2, vuint32m2_t vs1, size_t vl);
vuint32m2_t __riscv_vrol (vbool16_t mask, vuint32m2_t vs2, size_t rs1, size_t vl);
vuint32m4_t __riscv_vrol (vbool8_t mask, vuint32m4_t vs2, vuint32m4_t vs1, size_t vl);
vuint32m4_t __riscv_vrol (vbool8_t mask, vuint32m4_t vs2, size_t rs1, size_t vl);
vuint32m8_t __riscv_vrol (vbool4_t mask, vuint32m8_t vs2, vuint32m8_t vs1, size_t vl);
vuint32m8_t __riscv_vrol (vbool4_t mask, vuint32m8_t vs2, size_t rs1, size_t vl);
vuint64m1_t __riscv_vrol (vbool64_t mask, vuint64m1_t vs2, vuint64m1_t vs1, size_t vl);
vuint64m1_t __riscv_vrol (vbool64_t mask, vuint64m1_t vs2, size_t rs1, size_t vl);
vuint64m2_t __riscv_vrol (vbool32_t mask, vuint64m2_t vs2, vuint64m2_t vs1, size_t vl);
vuint64m2_t __riscv_vrol (vbool32_t mask, vuint64m2_t vs2, size_t rs1, size_t vl);
vuint64m4_t __riscv_vrol (vbool16_t mask, vuint64m4_t vs2, vuint64m4_t vs1, size_t vl);
vuint64m4_t __riscv_vrol (vbool16_t mask, vuint64m4_t vs2, size_t rs1, size_t vl);
vuint64m8_t __riscv_vrol (vbool8_t mask, vuint64m8_t vs2, vuint64m8_t vs1, size_t vl);
vuint64m8_t __riscv_vrol (vbool8_t mask, vuint64m8_t vs2, size_t rs1, size_t vl);
vuint8mf8_t __riscv_vror (vbool64_t mask, vuint8mf8_t vs2, vuint8mf8_t vs1, size_t vl);
vuint8mf8_t __riscv_vror (vbool64_t mask, vuint8mf8_t vs2, size_t rs1, size_t vl);
vuint8mf4_t __riscv_vror (vbool32_t mask, vuint8mf4_t vs2, vuint8mf4_t vs1, size_t vl);
vuint8mf4_t __riscv_vror (vbool32_t mask, vuint8mf4_t vs2, size_t rs1, size_t vl);
vuint8mf2_t __riscv_vror (vbool16_t mask, vuint8mf2_t vs2, vuint8mf2_t vs1, size_t vl);
vuint8mf2_t __riscv_vror (vbool16_t mask, vuint8mf2_t vs2, size_t rs1, size_t vl);
vuint8m1_t __riscv_vror (vbool8_t mask, vuint8m1_t vs2, vuint8m1_t vs1, size_t vl);
vuint8m1_t __riscv_vror (vbool8_t mask, vuint8m1_t vs2, size_t rs1, size_t vl);
vuint8m2_t __riscv_vror (vbool4_t mask, vuint8m2_t vs2, vuint8m2_t vs1, size_t vl);
vuint8m2_t __riscv_vror (vbool4_t mask, vuint8m2_t vs2, size_t rs1, size_t vl);
vuint8m4_t __riscv_vror (vbool2_t mask, vuint8m4_t vs2, vuint8m4_t vs1, size_t vl);
vuint8m4_t __riscv_vror (vbool2_t mask, vuint8m4_t vs2, size_t rs1, size_t vl);
vuint8m8_t __riscv_vror (vbool1_t mask, vuint8m8_t vs2, vuint8m8_t vs1, size_t vl);
vuint8m8_t __riscv_vror (vbool1_t mask, vuint8m8_t vs2, size_t rs1, size_t vl);
vuint16mf4_t __riscv_vror (vbool64_t mask, vuint16mf4_t vs2, vuint16mf4_t vs1, size_t vl);
vuint16mf4_t __riscv_vror (vbool64_t mask, vuint16mf4_t vs2, size_t rs1, size_t vl);
vuint16mf2_t __riscv_vror (vbool32_t mask, vuint16mf2_t vs2, vuint16mf2_t vs1, size_t vl);
vuint16mf2_t __riscv_vror (vbool32_t mask, vuint16mf2_t vs2, size_t rs1, size_t vl);
vuint16m1_t __riscv_vror (vbool16_t mask, vuint16m1_t vs2, vuint16m1_t vs1, size_t vl);
vuint16m1_t __riscv_vror (vbool16_t mask, vuint16m1_t vs2, size_t rs1, size_t vl);
vuint16m2_t __riscv_vror (vbool8_t mask, vuint16m2_t vs2, vuint16m2_t vs1, size_t vl);
vuint16m2_t __riscv_vror (vbool8_t mask, vuint16m2_t vs2, size_t rs1, size_t vl);
vuint16m4_t __riscv_vror (vbool4_t mask, vuint16m4_t vs2, vuint16m4_t vs1, size_t vl);
vuint16m4_t __riscv_vror (vbool4_t mask, vuint16m4_t vs2, size_t rs1, size_t vl);
vuint16m8_t __riscv_vror (vbool2_t mask, vuint16m8_t vs2, vuint16m8_t vs1, size_t vl);
vuint16m8_t __riscv_vror (vbool2_t mask, vuint16m8_t vs2, size_t rs1, size_t vl);
vuint32mf2_t __riscv_vror (vbool64_t mask, vuint32mf2_t vs2, vuint32mf2_t vs1, size_t vl);
vuint32mf2_t __riscv_vror (vbool64_t mask, vuint32mf2_t vs2, size_t rs1, size_t vl);
vuint32m1_t __riscv_vror (vbool32_t mask, vuint32m1_t vs2, vuint32m1_t vs1, size_t vl);
vuint32m1_t __riscv_vror (vbool32_t mask, vuint32m1_t vs2, size_t rs1, size_t vl);
vuint32m2_t __riscv_vror (vbool16_t mask, vuint32m2_t vs2, vuint32m2_t vs1, size_t vl);
vuint32m2_t __riscv_vror (vbool16_t mask, vuint32m2_t vs2, size_t rs1, size_t vl);
vuint32m4_t __riscv_vror (vbool8_t mask, vuint32m4_t vs2, vuint32m4_t vs1, size_t vl);
vuint32m4_t __riscv_vror (vbool8_t mask, vuint32m4_t vs2, size_t rs1, size_t vl);
vuint32m8_t __riscv_vror (vbool4_t mask, vuint32m8_t vs2, vuint32m8_t vs1, size_t vl);
vuint32m8_t __riscv_vror (vbool4_t mask, vuint32m8_t vs2, size_t rs1, size_t vl);
vuint64m1_t __riscv_vror (vbool64_t mask, vuint64m1_t vs2, vuint64m1_t vs1, size_t vl);
vuint64m1_t __riscv_vror (vbool64_t mask, vuint64m1_t vs2, size_t rs1, size_t vl);
vuint64m2_t __riscv_vror (vbool32_t mask, vuint64m2_t vs2, vuint64m2_t vs1, size_t vl);
vuint64m2_t __riscv_vror (vbool32_t mask, vuint64m2_t vs2, size_t rs1, size_t vl);
vuint64m4_t __riscv_vror (vbool16_t mask, vuint64m4_t vs2, vuint64m4_t vs1, size_t vl);
vuint64m4_t __riscv_vror (vbool16_t mask, vuint64m4_t vs2, size_t rs1, size_t vl);
vuint64m8_t __riscv_vror (vbool8_t mask, vuint64m8_t vs2, vuint64m8_t vs1, size_t vl);
vuint64m8_t __riscv_vror (vbool8_t mask, vuint64m8_t vs2, size_t rs1, size_t vl);
```

### [Vector Bit-manipulation used in Cryptography - Shift]():

**Prototypes:**
``` C
vuint16mf4_t __riscv_vwsll (vuint8mf8_t vs2, vuint8mf8_t vs1, size_t vl);
vuint16mf4_t __riscv_vwsll (vuint8mf8_t vs2, size_t rs1, size_t vl);
vuint16mf2_t __riscv_vwsll (vuint8mf4_t vs2, vuint8mf4_t vs1, size_t vl);
vuint16mf2_t __riscv_vwsll (vuint8mf4_t vs2, size_t rs1, size_t vl);
vuint16m1_t __riscv_vwsll (vuint8mf2_t vs2, vuint8mf2_t vs1, size_t vl);
vuint16m1_t __riscv_vwsll (vuint8mf2_t vs2, size_t rs1, size_t vl);
vuint16m2_t __riscv_vwsll (vuint8m1_t vs2, vuint8m1_t vs1, size_t vl);
vuint16m2_t __riscv_vwsll (vuint8m1_t vs2, size_t rs1, size_t vl);
vuint16m4_t __riscv_vwsll (vuint8m2_t vs2, vuint8m2_t vs1, size_t vl);
vuint16m4_t __riscv_vwsll (vuint8m2_t vs2, size_t rs1, size_t vl);
vuint16m8_t __riscv_vwsll (vuint8m4_t vs2, vuint8m4_t vs1, size_t vl);
vuint16m8_t __riscv_vwsll (vuint8m4_t vs2, size_t rs1, size_t vl);
vuint32mf2_t __riscv_vwsll (vuint16mf4_t vs2, vuint16mf4_t vs1, size_t vl);
vuint32mf2_t __riscv_vwsll (vuint16mf4_t vs2, size_t rs1, size_t vl);
vuint32m1_t __riscv_vwsll (vuint16mf2_t vs2, vuint16mf2_t vs1, size_t vl);
vuint32m1_t __riscv_vwsll (vuint16mf2_t vs2, size_t rs1, size_t vl);
vuint32m2_t __riscv_vwsll (vuint16m1_t vs2, vuint16m1_t vs1, size_t vl);
vuint32m2_t __riscv_vwsll (vuint16m1_t vs2, size_t rs1, size_t vl);
vuint32m4_t __riscv_vwsll (vuint16m2_t vs2, vuint16m2_t vs1, size_t vl);
vuint32m4_t __riscv_vwsll (vuint16m2_t vs2, size_t rs1, size_t vl);
vuint32m8_t __riscv_vwsll (vuint16m4_t vs2, vuint16m4_t vs1, size_t vl);
vuint32m8_t __riscv_vwsll (vuint16m4_t vs2, size_t rs1, size_t vl);
vuint64m1_t __riscv_vwsll (vuint32mf2_t vs2, vuint32mf2_t vs1, size_t vl);
vuint64m1_t __riscv_vwsll (vuint32mf2_t vs2, size_t rs1, size_t vl);
vuint64m2_t __riscv_vwsll (vuint32m1_t vs2, vuint32m1_t vs1, size_t vl);
vuint64m2_t __riscv_vwsll (vuint32m1_t vs2, size_t rs1, size_t vl);
vuint64m4_t __riscv_vwsll (vuint32m2_t vs2, vuint32m2_t vs1, size_t vl);
vuint64m4_t __riscv_vwsll (vuint32m2_t vs2, size_t rs1, size_t vl);
vuint64m8_t __riscv_vwsll (vuint32m4_t vs2, vuint32m4_t vs1, size_t vl);
vuint64m8_t __riscv_vwsll (vuint32m4_t vs2, size_t rs1, size_t vl);
// masked functions
vuint16mf4_t __riscv_vwsll (vbool64_t mask, vuint8mf8_t vs2, vuint8mf8_t vs1, size_t vl);
vuint16mf4_t __riscv_vwsll (vbool64_t mask, vuint8mf8_t vs2, size_t rs1, size_t vl);
vuint16mf2_t __riscv_vwsll (vbool32_t mask, vuint8mf4_t vs2, vuint8mf4_t vs1, size_t vl);
vuint16mf2_t __riscv_vwsll (vbool32_t mask, vuint8mf4_t vs2, size_t rs1, size_t vl);
vuint16m1_t __riscv_vwsll (vbool16_t mask, vuint8mf2_t vs2, vuint8mf2_t vs1, size_t vl);
vuint16m1_t __riscv_vwsll (vbool16_t mask, vuint8mf2_t vs2, size_t rs1, size_t vl);
vuint16m2_t __riscv_vwsll (vbool8_t mask, vuint8m1_t vs2, vuint8m1_t vs1, size_t vl);
vuint16m2_t __riscv_vwsll (vbool8_t mask, vuint8m1_t vs2, size_t rs1, size_t vl);
vuint16m4_t __riscv_vwsll (vbool4_t mask, vuint8m2_t vs2, vuint8m2_t vs1, size_t vl);
vuint16m4_t __riscv_vwsll (vbool4_t mask, vuint8m2_t vs2, size_t rs1, size_t vl);
vuint16m8_t __riscv_vwsll (vbool2_t mask, vuint8m4_t vs2, vuint8m4_t vs1, size_t vl);
vuint16m8_t __riscv_vwsll (vbool2_t mask, vuint8m4_t vs2, size_t rs1, size_t vl);
vuint32mf2_t __riscv_vwsll (vbool64_t mask, vuint16mf4_t vs2, vuint16mf4_t vs1, size_t vl);
vuint32mf2_t __riscv_vwsll (vbool64_t mask, vuint16mf4_t vs2, size_t rs1, size_t vl);
vuint32m1_t __riscv_vwsll (vbool32_t mask, vuint16mf2_t vs2, vuint16mf2_t vs1, size_t vl);
vuint32m1_t __riscv_vwsll (vbool32_t mask, vuint16mf2_t vs2, size_t rs1, size_t vl);
vuint32m2_t __riscv_vwsll (vbool16_t mask, vuint16m1_t vs2, vuint16m1_t vs1, size_t vl);
vuint32m2_t __riscv_vwsll (vbool16_t mask, vuint16m1_t vs2, size_t rs1, size_t vl);
vuint32m4_t __riscv_vwsll (vbool8_t mask, vuint16m2_t vs2, vuint16m2_t vs1, size_t vl);
vuint32m4_t __riscv_vwsll (vbool8_t mask, vuint16m2_t vs2, size_t rs1, size_t vl);
vuint32m8_t __riscv_vwsll (vbool4_t mask, vuint16m4_t vs2, vuint16m4_t vs1, size_t vl);
vuint32m8_t __riscv_vwsll (vbool4_t mask, vuint16m4_t vs2, size_t rs1, size_t vl);
vuint64m1_t __riscv_vwsll (vbool64_t mask, vuint32mf2_t vs2, vuint32mf2_t vs1, size_t vl);
vuint64m1_t __riscv_vwsll (vbool64_t mask, vuint32mf2_t vs2, size_t rs1, size_t vl);
vuint64m2_t __riscv_vwsll (vbool32_t mask, vuint32m1_t vs2, vuint32m1_t vs1, size_t vl);
vuint64m2_t __riscv_vwsll (vbool32_t mask, vuint32m1_t vs2, size_t rs1, size_t vl);
vuint64m4_t __riscv_vwsll (vbool16_t mask, vuint32m2_t vs2, vuint32m2_t vs1, size_t vl);
vuint64m4_t __riscv_vwsll (vbool16_t mask, vuint32m2_t vs2, size_t rs1, size_t vl);
vuint64m8_t __riscv_vwsll (vbool8_t mask, vuint32m4_t vs2, vuint32m4_t vs1, size_t vl);
vuint64m8_t __riscv_vwsll (vbool8_t mask, vuint32m4_t vs2, size_t rs1, size_t vl);
```

## Zvbc - Vector Carryless Multiplication:

### [Vector Carryless Multiplication]():

**Prototypes:**
``` C
vuint64m1_t __riscv_vclmul (vuint64m1_t vs2, vuint64m1_t vs1, size_t vl);
vuint64m1_t __riscv_vclmul (vuint64m1_t vs2, uint64_t rs1, size_t vl);
vuint64m2_t __riscv_vclmul (vuint64m2_t vs2, vuint64m2_t vs1, size_t vl);
vuint64m2_t __riscv_vclmul (vuint64m2_t vs2, uint64_t rs1, size_t vl);
vuint64m4_t __riscv_vclmul (vuint64m4_t vs2, vuint64m4_t vs1, size_t vl);
vuint64m4_t __riscv_vclmul (vuint64m4_t vs2, uint64_t rs1, size_t vl);
vuint64m8_t __riscv_vclmul (vuint64m8_t vs2, vuint64m8_t vs1, size_t vl);
vuint64m8_t __riscv_vclmul (vuint64m8_t vs2, uint64_t rs1, size_t vl);
vuint64m1_t __riscv_vclmulh (vuint64m1_t vs2, vuint64m1_t vs1, size_t vl);
vuint64m1_t __riscv_vclmulh (vuint64m1_t vs2, uint64_t rs1, size_t vl);
vuint64m2_t __riscv_vclmulh (vuint64m2_t vs2, vuint64m2_t vs1, size_t vl);
vuint64m2_t __riscv_vclmulh (vuint64m2_t vs2, uint64_t rs1, size_t vl);
vuint64m4_t __riscv_vclmulh (vuint64m4_t vs2, vuint64m4_t vs1, size_t vl);
vuint64m4_t __riscv_vclmulh (vuint64m4_t vs2, uint64_t rs1, size_t vl);
vuint64m8_t __riscv_vclmulh (vuint64m8_t vs2, vuint64m8_t vs1, size_t vl);
vuint64m8_t __riscv_vclmulh (vuint64m8_t vs2, uint64_t rs1, size_t vl);
// masked functions
vuint64m1_t __riscv_vclmul (vbool64_t mask, vuint64m1_t vs2, vuint64m1_t vs1, size_t vl);
vuint64m1_t __riscv_vclmul (vbool64_t mask, vuint64m1_t vs2, uint64_t rs1, size_t vl);
vuint64m2_t __riscv_vclmul (vbool32_t mask, vuint64m2_t vs2, vuint64m2_t vs1, size_t vl);
vuint64m2_t __riscv_vclmul (vbool32_t mask, vuint64m2_t vs2, uint64_t rs1, size_t vl);
vuint64m4_t __riscv_vclmul (vbool16_t mask, vuint64m4_t vs2, vuint64m4_t vs1, size_t vl);
vuint64m4_t __riscv_vclmul (vbool16_t mask, vuint64m4_t vs2, uint64_t rs1, size_t vl);
vuint64m8_t __riscv_vclmul (vbool8_t mask, vuint64m8_t vs2, vuint64m8_t vs1, size_t vl);
vuint64m8_t __riscv_vclmul (vbool8_t mask, vuint64m8_t vs2, uint64_t rs1, size_t vl);
vuint64m1_t __riscv_vclmulh (vbool64_t mask, vuint64m1_t vs2, vuint64m1_t vs1, size_t vl);
vuint64m1_t __riscv_vclmulh (vbool64_t mask, vuint64m1_t vs2, uint64_t rs1, size_t vl);
vuint64m2_t __riscv_vclmulh (vbool32_t mask, vuint64m2_t vs2, vuint64m2_t vs1, size_t vl);
vuint64m2_t __riscv_vclmulh (vbool32_t mask, vuint64m2_t vs2, uint64_t rs1, size_t vl);
vuint64m4_t __riscv_vclmulh (vbool16_t mask, vuint64m4_t vs2, vuint64m4_t vs1, size_t vl);
vuint64m4_t __riscv_vclmulh (vbool16_t mask, vuint64m4_t vs2, uint64_t rs1, size_t vl);
vuint64m8_t __riscv_vclmulh (vbool8_t mask, vuint64m8_t vs2, vuint64m8_t vs1, size_t vl);
vuint64m8_t __riscv_vclmulh (vbool8_t mask, vuint64m8_t vs2, uint64_t rs1, size_t vl);
```

## Zvkg - Vector GCM/GMAC:

### [Vector GCM/GMAC]():

**Prototypes:**
``` C
vuint32mf2_t __riscv_vghsh (vuint32mf2_t vd, vuint32mf2_t vs2, vuint32mf2_t vs1, size_t vl);
vuint32m1_t __riscv_vghsh (vuint32m1_t vd, vuint32m1_t vs2, vuint32m1_t vs1, size_t vl);
vuint32m2_t __riscv_vghsh (vuint32m2_t vd, vuint32m2_t vs2, vuint32m2_t vs1, size_t vl);
vuint32m4_t __riscv_vghsh (vuint32m4_t vd, vuint32m4_t vs2, vuint32m4_t vs1, size_t vl);
vuint32m8_t __riscv_vghsh (vuint32m8_t vd, vuint32m8_t vs2, vuint32m8_t vs1, size_t vl);
vuint32mf2_t __riscv_vgmul (vuint32mf2_t vd, vuint32mf2_t vs2, size_t vl);
vuint32m1_t __riscv_vgmul (vuint32m1_t vd, vuint32m1_t vs2, size_t vl);
vuint32m2_t __riscv_vgmul (vuint32m2_t vd, vuint32m2_t vs2, size_t vl);
vuint32m4_t __riscv_vgmul (vuint32m4_t vd, vuint32m4_t vs2, size_t vl);
vuint32m8_t __riscv_vgmul (vuint32m8_t vd, vuint32m8_t vs2, size_t vl);
```

## Zvkned - NIST Suite: Vector AES Block Cipher:

### [Vector AES Encryption]():

**Prototypes:**
``` C
vuint32mf2_t __riscv_vaesef_vv (vuint32mf2_t vd, vuint32mf2_t vs2, size_t vl);
vuint32mf2_t __riscv_vaesef_vs (vuint32mf2_t vd, vuint32mf2_t vs2, size_t vl);
vuint32m1_t __riscv_vaesef_vs (vuint32m1_t vd, vuint32mf2_t vs2, size_t vl);
vuint32m2_t __riscv_vaesef_vs (vuint32m2_t vd, vuint32mf2_t vs2, size_t vl);
vuint32m4_t __riscv_vaesef_vs (vuint32m4_t vd, vuint32mf2_t vs2, size_t vl);
vuint32m8_t __riscv_vaesef_vs (vuint32m8_t vd, vuint32mf2_t vs2, size_t vl);
vuint32m1_t __riscv_vaesef_vv (vuint32m1_t vd, vuint32m1_t vs2, size_t vl);
vuint32m1_t __riscv_vaesef_vs (vuint32m1_t vd, vuint32m1_t vs2, size_t vl);
vuint32m2_t __riscv_vaesef_vs (vuint32m2_t vd, vuint32m1_t vs2, size_t vl);
vuint32m4_t __riscv_vaesef_vs (vuint32m4_t vd, vuint32m1_t vs2, size_t vl);
vuint32m8_t __riscv_vaesef_vs (vuint32m8_t vd, vuint32m1_t vs2, size_t vl);
vuint32m2_t __riscv_vaesef_vv (vuint32m2_t vd, vuint32m2_t vs2, size_t vl);
vuint32m2_t __riscv_vaesef_vs (vuint32m2_t vd, vuint32m2_t vs2, size_t vl);
vuint32m4_t __riscv_vaesef_vs (vuint32m4_t vd, vuint32m2_t vs2, size_t vl);
vuint32m8_t __riscv_vaesef_vs (vuint32m8_t vd, vuint32m2_t vs2, size_t vl);
vuint32m4_t __riscv_vaesef_vv (vuint32m4_t vd, vuint32m4_t vs2, size_t vl);
vuint32m4_t __riscv_vaesef_vs (vuint32m4_t vd, vuint32m4_t vs2, size_t vl);
vuint32m8_t __riscv_vaesef_vs (vuint32m8_t vd, vuint32m4_t vs2, size_t vl);
vuint32m8_t __riscv_vaesef_vv (vuint32m8_t vd, vuint32m8_t vs2, size_t vl);
vuint32m8_t __riscv_vaesef_vs (vuint32m8_t vd, vuint32m8_t vs2, size_t vl);
vuint32mf2_t __riscv_vaesem_vv (vuint32mf2_t vd, vuint32mf2_t vs2, size_t vl);
vuint32mf2_t __riscv_vaesem_vs (vuint32mf2_t vd, vuint32mf2_t vs2, size_t vl);
vuint32m1_t __riscv_vaesem_vs (vuint32m1_t vd, vuint32mf2_t vs2, size_t vl);
vuint32m2_t __riscv_vaesem_vs (vuint32m2_t vd, vuint32mf2_t vs2, size_t vl);
vuint32m4_t __riscv_vaesem_vs (vuint32m4_t vd, vuint32mf2_t vs2, size_t vl);
vuint32m8_t __riscv_vaesem_vs (vuint32m8_t vd, vuint32mf2_t vs2, size_t vl);
vuint32m1_t __riscv_vaesem_vv (vuint32m1_t vd, vuint32m1_t vs2, size_t vl);
vuint32m1_t __riscv_vaesem_vs (vuint32m1_t vd, vuint32m1_t vs2, size_t vl);
vuint32m2_t __riscv_vaesem_vs (vuint32m2_t vd, vuint32m1_t vs2, size_t vl);
vuint32m4_t __riscv_vaesem_vs (vuint32m4_t vd, vuint32m1_t vs2, size_t vl);
vuint32m8_t __riscv_vaesem_vs (vuint32m8_t vd, vuint32m1_t vs2, size_t vl);
vuint32m2_t __riscv_vaesem_vv (vuint32m2_t vd, vuint32m2_t vs2, size_t vl);
vuint32m2_t __riscv_vaesem_vs (vuint32m2_t vd, vuint32m2_t vs2, size_t vl);
vuint32m4_t __riscv_vaesem_vs (vuint32m4_t vd, vuint32m2_t vs2, size_t vl);
vuint32m8_t __riscv_vaesem_vs (vuint32m8_t vd, vuint32m2_t vs2, size_t vl);
vuint32m4_t __riscv_vaesem_vv (vuint32m4_t vd, vuint32m4_t vs2, size_t vl);
vuint32m4_t __riscv_vaesem_vs (vuint32m4_t vd, vuint32m4_t vs2, size_t vl);
vuint32m8_t __riscv_vaesem_vs (vuint32m8_t vd, vuint32m4_t vs2, size_t vl);
vuint32m8_t __riscv_vaesem_vv (vuint32m8_t vd, vuint32m8_t vs2, size_t vl);
vuint32m8_t __riscv_vaesem_vs (vuint32m8_t vd, vuint32m8_t vs2, size_t vl);
```

### [Vector AES Decryption]():

**Prototypes:**
``` C
vuint32mf2_t __riscv_vaesdf_vv (vuint32mf2_t vd, vuint32mf2_t vs2, size_t vl);
vuint32mf2_t __riscv_vaesdf_vs (vuint32mf2_t vd, vuint32mf2_t vs2, size_t vl);
vuint32m1_t __riscv_vaesdf_vs (vuint32m1_t vd, vuint32mf2_t vs2, size_t vl);
vuint32m2_t __riscv_vaesdf_vs (vuint32m2_t vd, vuint32mf2_t vs2, size_t vl);
vuint32m4_t __riscv_vaesdf_vs (vuint32m4_t vd, vuint32mf2_t vs2, size_t vl);
vuint32m8_t __riscv_vaesdf_vs (vuint32m8_t vd, vuint32mf2_t vs2, size_t vl);
vuint32m1_t __riscv_vaesdf_vv (vuint32m1_t vd, vuint32m1_t vs2, size_t vl);
vuint32m1_t __riscv_vaesdf_vs (vuint32m1_t vd, vuint32m1_t vs2, size_t vl);
vuint32m2_t __riscv_vaesdf_vs (vuint32m2_t vd, vuint32m1_t vs2, size_t vl);
vuint32m4_t __riscv_vaesdf_vs (vuint32m4_t vd, vuint32m1_t vs2, size_t vl);
vuint32m8_t __riscv_vaesdf_vs (vuint32m8_t vd, vuint32m1_t vs2, size_t vl);
vuint32m2_t __riscv_vaesdf_vv (vuint32m2_t vd, vuint32m2_t vs2, size_t vl);
vuint32m2_t __riscv_vaesdf_vs (vuint32m2_t vd, vuint32m2_t vs2, size_t vl);
vuint32m4_t __riscv_vaesdf_vs (vuint32m4_t vd, vuint32m2_t vs2, size_t vl);
vuint32m8_t __riscv_vaesdf_vs (vuint32m8_t vd, vuint32m2_t vs2, size_t vl);
vuint32m4_t __riscv_vaesdf_vv (vuint32m4_t vd, vuint32m4_t vs2, size_t vl);
vuint32m4_t __riscv_vaesdf_vs (vuint32m4_t vd, vuint32m4_t vs2, size_t vl);
vuint32m8_t __riscv_vaesdf_vs (vuint32m8_t vd, vuint32m4_t vs2, size_t vl);
vuint32m8_t __riscv_vaesdf_vv (vuint32m8_t vd, vuint32m8_t vs2, size_t vl);
vuint32m8_t __riscv_vaesdf_vs (vuint32m8_t vd, vuint32m8_t vs2, size_t vl);
vuint32mf2_t __riscv_vaesdm_vv (vuint32mf2_t vd, vuint32mf2_t vs2, size_t vl);
vuint32mf2_t __riscv_vaesdm_vs (vuint32mf2_t vd, vuint32mf2_t vs2, size_t vl);
vuint32m1_t __riscv_vaesdm_vs (vuint32m1_t vd, vuint32mf2_t vs2, size_t vl);
vuint32m2_t __riscv_vaesdm_vs (vuint32m2_t vd, vuint32mf2_t vs2, size_t vl);
vuint32m4_t __riscv_vaesdm_vs (vuint32m4_t vd, vuint32mf2_t vs2, size_t vl);
vuint32m8_t __riscv_vaesdm_vs (vuint32m8_t vd, vuint32mf2_t vs2, size_t vl);
vuint32m1_t __riscv_vaesdm_vv (vuint32m1_t vd, vuint32m1_t vs2, size_t vl);
vuint32m1_t __riscv_vaesdm_vs (vuint32m1_t vd, vuint32m1_t vs2, size_t vl);
vuint32m2_t __riscv_vaesdm_vs (vuint32m2_t vd, vuint32m1_t vs2, size_t vl);
vuint32m4_t __riscv_vaesdm_vs (vuint32m4_t vd, vuint32m1_t vs2, size_t vl);
vuint32m8_t __riscv_vaesdm_vs (vuint32m8_t vd, vuint32m1_t vs2, size_t vl);
vuint32m2_t __riscv_vaesdm_vv (vuint32m2_t vd, vuint32m2_t vs2, size_t vl);
vuint32m2_t __riscv_vaesdm_vs (vuint32m2_t vd, vuint32m2_t vs2, size_t vl);
vuint32m4_t __riscv_vaesdm_vs (vuint32m4_t vd, vuint32m2_t vs2, size_t vl);
vuint32m8_t __riscv_vaesdm_vs (vuint32m8_t vd, vuint32m2_t vs2, size_t vl);
vuint32m4_t __riscv_vaesdm_vv (vuint32m4_t vd, vuint32m4_t vs2, size_t vl);
vuint32m4_t __riscv_vaesdm_vs (vuint32m4_t vd, vuint32m4_t vs2, size_t vl);
vuint32m8_t __riscv_vaesdm_vs (vuint32m8_t vd, vuint32m4_t vs2, size_t vl);
vuint32m8_t __riscv_vaesdm_vv (vuint32m8_t vd, vuint32m8_t vs2, size_t vl);
vuint32m8_t __riscv_vaesdm_vs (vuint32m8_t vd, vuint32m8_t vs2, size_t vl);
```

### [Vector AES-128 Forward KeySchedule generation]():

**Prototypes:**
``` C
vuint32mf2_t __riscv_vaeskf1 (vuint32mf2_t vs2, size_t uimm, size_t vl);
vuint32m1_t __riscv_vaeskf1 (vuint32m1_t vs2, size_t uimm, size_t vl);
vuint32m2_t __riscv_vaeskf1 (vuint32m2_t vs2, size_t uimm, size_t vl);
vuint32m4_t __riscv_vaeskf1 (vuint32m4_t vs2, size_t uimm, size_t vl);
vuint32m8_t __riscv_vaeskf1 (vuint32m8_t vs2, size_t uimm, size_t vl);
vuint32mf2_t __riscv_vaeskf2 (vuint32mf2_t vd, vuint32mf2_t vs2, size_t uimm, size_t vl);
vuint32m1_t __riscv_vaeskf2 (vuint32m1_t vd, vuint32m1_t vs2, size_t uimm, size_t vl);
vuint32m2_t __riscv_vaeskf2 (vuint32m2_t vd, vuint32m2_t vs2, size_t uimm, size_t vl);
vuint32m4_t __riscv_vaeskf2 (vuint32m4_t vd, vuint32m4_t vs2, size_t uimm, size_t vl);
vuint32m8_t __riscv_vaeskf2 (vuint32m8_t vd, vuint32m8_t vs2, size_t uimm, size_t vl);
```

### [Vector AES round zero]():

**Prototypes:**
``` C
vuint32mf2_t __riscv_vaesz (vuint32mf2_t vd, vuint32mf2_t vs2, size_t vl);
vuint32m1_t __riscv_vaesz (vuint32m1_t vd, vuint32mf2_t vs2, size_t vl);
vuint32m2_t __riscv_vaesz (vuint32m2_t vd, vuint32mf2_t vs2, size_t vl);
vuint32m4_t __riscv_vaesz (vuint32m4_t vd, vuint32mf2_t vs2, size_t vl);
vuint32m8_t __riscv_vaesz (vuint32m8_t vd, vuint32mf2_t vs2, size_t vl);
vuint32m1_t __riscv_vaesz (vuint32m1_t vd, vuint32m1_t vs2, size_t vl);
vuint32m2_t __riscv_vaesz (vuint32m2_t vd, vuint32m1_t vs2, size_t vl);
vuint32m4_t __riscv_vaesz (vuint32m4_t vd, vuint32m1_t vs2, size_t vl);
vuint32m8_t __riscv_vaesz (vuint32m8_t vd, vuint32m1_t vs2, size_t vl);
vuint32m2_t __riscv_vaesz (vuint32m2_t vd, vuint32m2_t vs2, size_t vl);
vuint32m4_t __riscv_vaesz (vuint32m4_t vd, vuint32m2_t vs2, size_t vl);
vuint32m8_t __riscv_vaesz (vuint32m8_t vd, vuint32m2_t vs2, size_t vl);
vuint32m4_t __riscv_vaesz (vuint32m4_t vd, vuint32m4_t vs2, size_t vl);
vuint32m8_t __riscv_vaesz (vuint32m8_t vd, vuint32m4_t vs2, size_t vl);
vuint32m8_t __riscv_vaesz (vuint32m8_t vd, vuint32m8_t vs2, size_t vl);
```

## Zvknh - NIST Suite: Vector SHA-2 Secure Hash:

### [Vector SHA-2 message schedule]():

**Prototypes:**
``` C
vuint32mf2_t __riscv_vsha2ms (vuint32mf2_t vd, vuint32mf2_t vs2, vuint32mf2_t vs1, size_t vl);
vuint32m1_t __riscv_vsha2ms (vuint32m1_t vd, vuint32m1_t vs2, vuint32m1_t vs1, size_t vl);
vuint32m2_t __riscv_vsha2ms (vuint32m2_t vd, vuint32m2_t vs2, vuint32m2_t vs1, size_t vl);
vuint32m4_t __riscv_vsha2ms (vuint32m4_t vd, vuint32m4_t vs2, vuint32m4_t vs1, size_t vl);
vuint32m8_t __riscv_vsha2ms (vuint32m8_t vd, vuint32m8_t vs2, vuint32m8_t vs1, size_t vl);
vuint64m1_t __riscv_vsha2ms (vuint64m1_t vd, vuint64m1_t vs2, vuint64m1_t vs1, size_t vl);
vuint64m2_t __riscv_vsha2ms (vuint64m2_t vd, vuint64m2_t vs2, vuint64m2_t vs1, size_t vl);
vuint64m4_t __riscv_vsha2ms (vuint64m4_t vd, vuint64m4_t vs2, vuint64m4_t vs1, size_t vl);
vuint64m8_t __riscv_vsha2ms (vuint64m8_t vd, vuint64m8_t vs2, vuint64m8_t vs1, size_t vl);
```

### [Vector SHA-2 two rounds of compression]():

**Prototypes:**
``` C
vuint32mf2_t __riscv_vsha2ch (vuint32mf2_t vd, vuint32mf2_t vs2, vuint32mf2_t vs1, size_t vl);
vuint32m1_t __riscv_vsha2ch (vuint32m1_t vd, vuint32m1_t vs2, vuint32m1_t vs1, size_t vl);
vuint32m2_t __riscv_vsha2ch (vuint32m2_t vd, vuint32m2_t vs2, vuint32m2_t vs1, size_t vl);
vuint32m4_t __riscv_vsha2ch (vuint32m4_t vd, vuint32m4_t vs2, vuint32m4_t vs1, size_t vl);
vuint32m8_t __riscv_vsha2ch (vuint32m8_t vd, vuint32m8_t vs2, vuint32m8_t vs1, size_t vl);
vuint64m1_t __riscv_vsha2ch (vuint64m1_t vd, vuint64m1_t vs2, vuint64m1_t vs1, size_t vl);
vuint64m2_t __riscv_vsha2ch (vuint64m2_t vd, vuint64m2_t vs2, vuint64m2_t vs1, size_t vl);
vuint64m4_t __riscv_vsha2ch (vuint64m4_t vd, vuint64m4_t vs2, vuint64m4_t vs1, size_t vl);
vuint64m8_t __riscv_vsha2ch (vuint64m8_t vd, vuint64m8_t vs2, vuint64m8_t vs1, size_t vl);
vuint32mf2_t __riscv_vsha2cl (vuint32mf2_t vd, vuint32mf2_t vs2, vuint32mf2_t vs1, size_t vl);
vuint32m1_t __riscv_vsha2cl (vuint32m1_t vd, vuint32m1_t vs2, vuint32m1_t vs1, size_t vl);
vuint32m2_t __riscv_vsha2cl (vuint32m2_t vd, vuint32m2_t vs2, vuint32m2_t vs1, size_t vl);
vuint32m4_t __riscv_vsha2cl (vuint32m4_t vd, vuint32m4_t vs2, vuint32m4_t vs1, size_t vl);
vuint32m8_t __riscv_vsha2cl (vuint32m8_t vd, vuint32m8_t vs2, vuint32m8_t vs1, size_t vl);
vuint64m1_t __riscv_vsha2cl (vuint64m1_t vd, vuint64m1_t vs2, vuint64m1_t vs1, size_t vl);
vuint64m2_t __riscv_vsha2cl (vuint64m2_t vd, vuint64m2_t vs2, vuint64m2_t vs1, size_t vl);
vuint64m4_t __riscv_vsha2cl (vuint64m4_t vd, vuint64m4_t vs2, vuint64m4_t vs1, size_t vl);
vuint64m8_t __riscv_vsha2cl (vuint64m8_t vd, vuint64m8_t vs2, vuint64m8_t vs1, size_t vl);
```

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

## Zvksh - ShangMi Suite: SM3 Secure Hash:

### [Vector SM3 Message Expansion]():

**Prototypes:**
``` C
vuint32mf2_t __riscv_vsm3me (vuint32mf2_t vs2, vuint32mf2_t vs1, size_t vl);
vuint32m1_t __riscv_vsm3me (vuint32m1_t vs2, vuint32m1_t vs1, size_t vl);
vuint32m2_t __riscv_vsm3me (vuint32m2_t vs2, vuint32m2_t vs1, size_t vl);
vuint32m4_t __riscv_vsm3me (vuint32m4_t vs2, vuint32m4_t vs1, size_t vl);
vuint32m8_t __riscv_vsm3me (vuint32m8_t vs2, vuint32m8_t vs1, size_t vl);
```

### [Vector SM3 Message Expansion]():

**Prototypes:**
``` C
vuint32mf2_t __riscv_vsm3c (vuint32mf2_t vd, vuint32mf2_t vs2, size_t uimm, size_t vl);
vuint32m1_t __riscv_vsm3c (vuint32m1_t vd, vuint32m1_t vs2, size_t uimm, size_t vl);
vuint32m2_t __riscv_vsm3c (vuint32m2_t vd, vuint32m2_t vs2, size_t uimm, size_t vl);
vuint32m4_t __riscv_vsm3c (vuint32m4_t vd, vuint32m4_t vs2, size_t uimm, size_t vl);
vuint32m8_t __riscv_vsm3c (vuint32m8_t vd, vuint32m8_t vs2, size_t uimm, size_t vl);
```
