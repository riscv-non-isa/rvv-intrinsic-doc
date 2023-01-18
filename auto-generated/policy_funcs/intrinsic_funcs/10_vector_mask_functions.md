
## Vector Mask Functions:

### [Vector Mask Load/Store Functions](../rvv-intrinsic-api.md#74-vector-unit-stride-operations):
This operation don't have Policy Intrinsic Functions.

### [Vector Mask-Register Logical Functions](../rvv-intrinsic-api.md#161-vector-mask-register-logical-operations):
This operation don't have Policy Intrinsic Functions.

### [Vector count population in mask Functions](../rvv-intrinsic-api.md#162-vector-count-population-in-mask-vcpopm):
This operation don't have Policy Intrinsic Functions.

### [Find-first-set mask bit Functions](../rvv-intrinsic-api.md#163-vfirst-find-first-set-mask-bit):
This operation don't have Policy Intrinsic Functions.

### [Set-before-first mask bit Functions](../rvv-intrinsic-api.md#164-vmsbfm-set-before-first-mask-bit):

**Prototypes:**
``` C
// masked functions
vbool1_t vmsbf_m_b1_mu (vbool1_t mask, vbool1_t maskedoff, vbool1_t op1, size_t vl);
vbool2_t vmsbf_m_b2_mu (vbool2_t mask, vbool2_t maskedoff, vbool2_t op1, size_t vl);
vbool4_t vmsbf_m_b4_mu (vbool4_t mask, vbool4_t maskedoff, vbool4_t op1, size_t vl);
vbool8_t vmsbf_m_b8_mu (vbool8_t mask, vbool8_t maskedoff, vbool8_t op1, size_t vl);
vbool16_t vmsbf_m_b16_mu (vbool16_t mask, vbool16_t maskedoff, vbool16_t op1, size_t vl);
vbool32_t vmsbf_m_b32_mu (vbool32_t mask, vbool32_t maskedoff, vbool32_t op1, size_t vl);
vbool64_t vmsbf_m_b64_mu (vbool64_t mask, vbool64_t maskedoff, vbool64_t op1, size_t vl);
```

### [Set-including-first mask bit Functions](../rvv-intrinsic-api.md#165-vmsifm-set-including-first-mask-bit):

**Prototypes:**
``` C
// masked functions
vbool1_t vmsif_m_b1_mu (vbool1_t mask, vbool1_t maskedoff, vbool1_t op1, size_t vl);
vbool2_t vmsif_m_b2_mu (vbool2_t mask, vbool2_t maskedoff, vbool2_t op1, size_t vl);
vbool4_t vmsif_m_b4_mu (vbool4_t mask, vbool4_t maskedoff, vbool4_t op1, size_t vl);
vbool8_t vmsif_m_b8_mu (vbool8_t mask, vbool8_t maskedoff, vbool8_t op1, size_t vl);
vbool16_t vmsif_m_b16_mu (vbool16_t mask, vbool16_t maskedoff, vbool16_t op1, size_t vl);
vbool32_t vmsif_m_b32_mu (vbool32_t mask, vbool32_t maskedoff, vbool32_t op1, size_t vl);
vbool64_t vmsif_m_b64_mu (vbool64_t mask, vbool64_t maskedoff, vbool64_t op1, size_t vl);
```

### [Set-only-first mask bit Functions](../rvv-intrinsic-api.md#166-vmsofm-set-only-first-mask-bit):

**Prototypes:**
``` C
// masked functions
vbool1_t vmsof_m_b1_mu (vbool1_t mask, vbool1_t maskedoff, vbool1_t op1, size_t vl);
vbool2_t vmsof_m_b2_mu (vbool2_t mask, vbool2_t maskedoff, vbool2_t op1, size_t vl);
vbool4_t vmsof_m_b4_mu (vbool4_t mask, vbool4_t maskedoff, vbool4_t op1, size_t vl);
vbool8_t vmsof_m_b8_mu (vbool8_t mask, vbool8_t maskedoff, vbool8_t op1, size_t vl);
vbool16_t vmsof_m_b16_mu (vbool16_t mask, vbool16_t maskedoff, vbool16_t op1, size_t vl);
vbool32_t vmsof_m_b32_mu (vbool32_t mask, vbool32_t maskedoff, vbool32_t op1, size_t vl);
vbool64_t vmsof_m_b64_mu (vbool64_t mask, vbool64_t maskedoff, vbool64_t op1, size_t vl);
```

### [Vector Iota Functions](../rvv-intrinsic-api.md#168-vector-iota-operations):

**Prototypes:**
``` C
vuint8mf8_t viota_m_u8mf8_tu (vuint8mf8_t maskedoff, vbool64_t op1, size_t vl);
vuint8mf4_t viota_m_u8mf4_tu (vuint8mf4_t maskedoff, vbool32_t op1, size_t vl);
vuint8mf2_t viota_m_u8mf2_tu (vuint8mf2_t maskedoff, vbool16_t op1, size_t vl);
vuint8m1_t viota_m_u8m1_tu (vuint8m1_t maskedoff, vbool8_t op1, size_t vl);
vuint8m2_t viota_m_u8m2_tu (vuint8m2_t maskedoff, vbool4_t op1, size_t vl);
vuint8m4_t viota_m_u8m4_tu (vuint8m4_t maskedoff, vbool2_t op1, size_t vl);
vuint8m8_t viota_m_u8m8_tu (vuint8m8_t maskedoff, vbool1_t op1, size_t vl);
vuint16mf4_t viota_m_u16mf4_tu (vuint16mf4_t maskedoff, vbool64_t op1, size_t vl);
vuint16mf2_t viota_m_u16mf2_tu (vuint16mf2_t maskedoff, vbool32_t op1, size_t vl);
vuint16m1_t viota_m_u16m1_tu (vuint16m1_t maskedoff, vbool16_t op1, size_t vl);
vuint16m2_t viota_m_u16m2_tu (vuint16m2_t maskedoff, vbool8_t op1, size_t vl);
vuint16m4_t viota_m_u16m4_tu (vuint16m4_t maskedoff, vbool4_t op1, size_t vl);
vuint16m8_t viota_m_u16m8_tu (vuint16m8_t maskedoff, vbool2_t op1, size_t vl);
vuint32mf2_t viota_m_u32mf2_tu (vuint32mf2_t maskedoff, vbool64_t op1, size_t vl);
vuint32m1_t viota_m_u32m1_tu (vuint32m1_t maskedoff, vbool32_t op1, size_t vl);
vuint32m2_t viota_m_u32m2_tu (vuint32m2_t maskedoff, vbool16_t op1, size_t vl);
vuint32m4_t viota_m_u32m4_tu (vuint32m4_t maskedoff, vbool8_t op1, size_t vl);
vuint32m8_t viota_m_u32m8_tu (vuint32m8_t maskedoff, vbool4_t op1, size_t vl);
vuint64m1_t viota_m_u64m1_tu (vuint64m1_t maskedoff, vbool64_t op1, size_t vl);
vuint64m2_t viota_m_u64m2_tu (vuint64m2_t maskedoff, vbool32_t op1, size_t vl);
vuint64m4_t viota_m_u64m4_tu (vuint64m4_t maskedoff, vbool16_t op1, size_t vl);
vuint64m8_t viota_m_u64m8_tu (vuint64m8_t maskedoff, vbool8_t op1, size_t vl);
// masked functions
vuint8mf8_t viota_m_u8mf8_tum (vbool64_t mask, vuint8mf8_t maskedoff, vbool64_t op1, size_t vl);
vuint8mf4_t viota_m_u8mf4_tum (vbool32_t mask, vuint8mf4_t maskedoff, vbool32_t op1, size_t vl);
vuint8mf2_t viota_m_u8mf2_tum (vbool16_t mask, vuint8mf2_t maskedoff, vbool16_t op1, size_t vl);
vuint8m1_t viota_m_u8m1_tum (vbool8_t mask, vuint8m1_t maskedoff, vbool8_t op1, size_t vl);
vuint8m2_t viota_m_u8m2_tum (vbool4_t mask, vuint8m2_t maskedoff, vbool4_t op1, size_t vl);
vuint8m4_t viota_m_u8m4_tum (vbool2_t mask, vuint8m4_t maskedoff, vbool2_t op1, size_t vl);
vuint8m8_t viota_m_u8m8_tum (vbool1_t mask, vuint8m8_t maskedoff, vbool1_t op1, size_t vl);
vuint16mf4_t viota_m_u16mf4_tum (vbool64_t mask, vuint16mf4_t maskedoff, vbool64_t op1, size_t vl);
vuint16mf2_t viota_m_u16mf2_tum (vbool32_t mask, vuint16mf2_t maskedoff, vbool32_t op1, size_t vl);
vuint16m1_t viota_m_u16m1_tum (vbool16_t mask, vuint16m1_t maskedoff, vbool16_t op1, size_t vl);
vuint16m2_t viota_m_u16m2_tum (vbool8_t mask, vuint16m2_t maskedoff, vbool8_t op1, size_t vl);
vuint16m4_t viota_m_u16m4_tum (vbool4_t mask, vuint16m4_t maskedoff, vbool4_t op1, size_t vl);
vuint16m8_t viota_m_u16m8_tum (vbool2_t mask, vuint16m8_t maskedoff, vbool2_t op1, size_t vl);
vuint32mf2_t viota_m_u32mf2_tum (vbool64_t mask, vuint32mf2_t maskedoff, vbool64_t op1, size_t vl);
vuint32m1_t viota_m_u32m1_tum (vbool32_t mask, vuint32m1_t maskedoff, vbool32_t op1, size_t vl);
vuint32m2_t viota_m_u32m2_tum (vbool16_t mask, vuint32m2_t maskedoff, vbool16_t op1, size_t vl);
vuint32m4_t viota_m_u32m4_tum (vbool8_t mask, vuint32m4_t maskedoff, vbool8_t op1, size_t vl);
vuint32m8_t viota_m_u32m8_tum (vbool4_t mask, vuint32m8_t maskedoff, vbool4_t op1, size_t vl);
vuint64m1_t viota_m_u64m1_tum (vbool64_t mask, vuint64m1_t maskedoff, vbool64_t op1, size_t vl);
vuint64m2_t viota_m_u64m2_tum (vbool32_t mask, vuint64m2_t maskedoff, vbool32_t op1, size_t vl);
vuint64m4_t viota_m_u64m4_tum (vbool16_t mask, vuint64m4_t maskedoff, vbool16_t op1, size_t vl);
vuint64m8_t viota_m_u64m8_tum (vbool8_t mask, vuint64m8_t maskedoff, vbool8_t op1, size_t vl);
// masked functions
vuint8mf8_t viota_m_u8mf8_tumu (vbool64_t mask, vuint8mf8_t maskedoff, vbool64_t op1, size_t vl);
vuint8mf4_t viota_m_u8mf4_tumu (vbool32_t mask, vuint8mf4_t maskedoff, vbool32_t op1, size_t vl);
vuint8mf2_t viota_m_u8mf2_tumu (vbool16_t mask, vuint8mf2_t maskedoff, vbool16_t op1, size_t vl);
vuint8m1_t viota_m_u8m1_tumu (vbool8_t mask, vuint8m1_t maskedoff, vbool8_t op1, size_t vl);
vuint8m2_t viota_m_u8m2_tumu (vbool4_t mask, vuint8m2_t maskedoff, vbool4_t op1, size_t vl);
vuint8m4_t viota_m_u8m4_tumu (vbool2_t mask, vuint8m4_t maskedoff, vbool2_t op1, size_t vl);
vuint8m8_t viota_m_u8m8_tumu (vbool1_t mask, vuint8m8_t maskedoff, vbool1_t op1, size_t vl);
vuint16mf4_t viota_m_u16mf4_tumu (vbool64_t mask, vuint16mf4_t maskedoff, vbool64_t op1, size_t vl);
vuint16mf2_t viota_m_u16mf2_tumu (vbool32_t mask, vuint16mf2_t maskedoff, vbool32_t op1, size_t vl);
vuint16m1_t viota_m_u16m1_tumu (vbool16_t mask, vuint16m1_t maskedoff, vbool16_t op1, size_t vl);
vuint16m2_t viota_m_u16m2_tumu (vbool8_t mask, vuint16m2_t maskedoff, vbool8_t op1, size_t vl);
vuint16m4_t viota_m_u16m4_tumu (vbool4_t mask, vuint16m4_t maskedoff, vbool4_t op1, size_t vl);
vuint16m8_t viota_m_u16m8_tumu (vbool2_t mask, vuint16m8_t maskedoff, vbool2_t op1, size_t vl);
vuint32mf2_t viota_m_u32mf2_tumu (vbool64_t mask, vuint32mf2_t maskedoff, vbool64_t op1, size_t vl);
vuint32m1_t viota_m_u32m1_tumu (vbool32_t mask, vuint32m1_t maskedoff, vbool32_t op1, size_t vl);
vuint32m2_t viota_m_u32m2_tumu (vbool16_t mask, vuint32m2_t maskedoff, vbool16_t op1, size_t vl);
vuint32m4_t viota_m_u32m4_tumu (vbool8_t mask, vuint32m4_t maskedoff, vbool8_t op1, size_t vl);
vuint32m8_t viota_m_u32m8_tumu (vbool4_t mask, vuint32m8_t maskedoff, vbool4_t op1, size_t vl);
vuint64m1_t viota_m_u64m1_tumu (vbool64_t mask, vuint64m1_t maskedoff, vbool64_t op1, size_t vl);
vuint64m2_t viota_m_u64m2_tumu (vbool32_t mask, vuint64m2_t maskedoff, vbool32_t op1, size_t vl);
vuint64m4_t viota_m_u64m4_tumu (vbool16_t mask, vuint64m4_t maskedoff, vbool16_t op1, size_t vl);
vuint64m8_t viota_m_u64m8_tumu (vbool8_t mask, vuint64m8_t maskedoff, vbool8_t op1, size_t vl);
// masked functions
vuint8mf8_t viota_m_u8mf8_mu (vbool64_t mask, vuint8mf8_t maskedoff, vbool64_t op1, size_t vl);
vuint8mf4_t viota_m_u8mf4_mu (vbool32_t mask, vuint8mf4_t maskedoff, vbool32_t op1, size_t vl);
vuint8mf2_t viota_m_u8mf2_mu (vbool16_t mask, vuint8mf2_t maskedoff, vbool16_t op1, size_t vl);
vuint8m1_t viota_m_u8m1_mu (vbool8_t mask, vuint8m1_t maskedoff, vbool8_t op1, size_t vl);
vuint8m2_t viota_m_u8m2_mu (vbool4_t mask, vuint8m2_t maskedoff, vbool4_t op1, size_t vl);
vuint8m4_t viota_m_u8m4_mu (vbool2_t mask, vuint8m4_t maskedoff, vbool2_t op1, size_t vl);
vuint8m8_t viota_m_u8m8_mu (vbool1_t mask, vuint8m8_t maskedoff, vbool1_t op1, size_t vl);
vuint16mf4_t viota_m_u16mf4_mu (vbool64_t mask, vuint16mf4_t maskedoff, vbool64_t op1, size_t vl);
vuint16mf2_t viota_m_u16mf2_mu (vbool32_t mask, vuint16mf2_t maskedoff, vbool32_t op1, size_t vl);
vuint16m1_t viota_m_u16m1_mu (vbool16_t mask, vuint16m1_t maskedoff, vbool16_t op1, size_t vl);
vuint16m2_t viota_m_u16m2_mu (vbool8_t mask, vuint16m2_t maskedoff, vbool8_t op1, size_t vl);
vuint16m4_t viota_m_u16m4_mu (vbool4_t mask, vuint16m4_t maskedoff, vbool4_t op1, size_t vl);
vuint16m8_t viota_m_u16m8_mu (vbool2_t mask, vuint16m8_t maskedoff, vbool2_t op1, size_t vl);
vuint32mf2_t viota_m_u32mf2_mu (vbool64_t mask, vuint32mf2_t maskedoff, vbool64_t op1, size_t vl);
vuint32m1_t viota_m_u32m1_mu (vbool32_t mask, vuint32m1_t maskedoff, vbool32_t op1, size_t vl);
vuint32m2_t viota_m_u32m2_mu (vbool16_t mask, vuint32m2_t maskedoff, vbool16_t op1, size_t vl);
vuint32m4_t viota_m_u32m4_mu (vbool8_t mask, vuint32m4_t maskedoff, vbool8_t op1, size_t vl);
vuint32m8_t viota_m_u32m8_mu (vbool4_t mask, vuint32m8_t maskedoff, vbool4_t op1, size_t vl);
vuint64m1_t viota_m_u64m1_mu (vbool64_t mask, vuint64m1_t maskedoff, vbool64_t op1, size_t vl);
vuint64m2_t viota_m_u64m2_mu (vbool32_t mask, vuint64m2_t maskedoff, vbool32_t op1, size_t vl);
vuint64m4_t viota_m_u64m4_mu (vbool16_t mask, vuint64m4_t maskedoff, vbool16_t op1, size_t vl);
vuint64m8_t viota_m_u64m8_mu (vbool8_t mask, vuint64m8_t maskedoff, vbool8_t op1, size_t vl);
```

### [Vector Element Index Functions](../rvv-intrinsic-api.md#169-vector-element-index-operations):

**Prototypes:**
``` C
vuint8mf8_t vid_v_u8mf8_tu (vuint8mf8_t maskedoff, size_t vl);
vuint8mf4_t vid_v_u8mf4_tu (vuint8mf4_t maskedoff, size_t vl);
vuint8mf2_t vid_v_u8mf2_tu (vuint8mf2_t maskedoff, size_t vl);
vuint8m1_t vid_v_u8m1_tu (vuint8m1_t maskedoff, size_t vl);
vuint8m2_t vid_v_u8m2_tu (vuint8m2_t maskedoff, size_t vl);
vuint8m4_t vid_v_u8m4_tu (vuint8m4_t maskedoff, size_t vl);
vuint8m8_t vid_v_u8m8_tu (vuint8m8_t maskedoff, size_t vl);
vuint16mf4_t vid_v_u16mf4_tu (vuint16mf4_t maskedoff, size_t vl);
vuint16mf2_t vid_v_u16mf2_tu (vuint16mf2_t maskedoff, size_t vl);
vuint16m1_t vid_v_u16m1_tu (vuint16m1_t maskedoff, size_t vl);
vuint16m2_t vid_v_u16m2_tu (vuint16m2_t maskedoff, size_t vl);
vuint16m4_t vid_v_u16m4_tu (vuint16m4_t maskedoff, size_t vl);
vuint16m8_t vid_v_u16m8_tu (vuint16m8_t maskedoff, size_t vl);
vuint32mf2_t vid_v_u32mf2_tu (vuint32mf2_t maskedoff, size_t vl);
vuint32m1_t vid_v_u32m1_tu (vuint32m1_t maskedoff, size_t vl);
vuint32m2_t vid_v_u32m2_tu (vuint32m2_t maskedoff, size_t vl);
vuint32m4_t vid_v_u32m4_tu (vuint32m4_t maskedoff, size_t vl);
vuint32m8_t vid_v_u32m8_tu (vuint32m8_t maskedoff, size_t vl);
vuint64m1_t vid_v_u64m1_tu (vuint64m1_t maskedoff, size_t vl);
vuint64m2_t vid_v_u64m2_tu (vuint64m2_t maskedoff, size_t vl);
vuint64m4_t vid_v_u64m4_tu (vuint64m4_t maskedoff, size_t vl);
vuint64m8_t vid_v_u64m8_tu (vuint64m8_t maskedoff, size_t vl);
// masked functions
vuint8mf8_t vid_v_u8mf8_tum (vbool64_t mask, vuint8mf8_t maskedoff, size_t vl);
vuint8mf4_t vid_v_u8mf4_tum (vbool32_t mask, vuint8mf4_t maskedoff, size_t vl);
vuint8mf2_t vid_v_u8mf2_tum (vbool16_t mask, vuint8mf2_t maskedoff, size_t vl);
vuint8m1_t vid_v_u8m1_tum (vbool8_t mask, vuint8m1_t maskedoff, size_t vl);
vuint8m2_t vid_v_u8m2_tum (vbool4_t mask, vuint8m2_t maskedoff, size_t vl);
vuint8m4_t vid_v_u8m4_tum (vbool2_t mask, vuint8m4_t maskedoff, size_t vl);
vuint8m8_t vid_v_u8m8_tum (vbool1_t mask, vuint8m8_t maskedoff, size_t vl);
vuint16mf4_t vid_v_u16mf4_tum (vbool64_t mask, vuint16mf4_t maskedoff, size_t vl);
vuint16mf2_t vid_v_u16mf2_tum (vbool32_t mask, vuint16mf2_t maskedoff, size_t vl);
vuint16m1_t vid_v_u16m1_tum (vbool16_t mask, vuint16m1_t maskedoff, size_t vl);
vuint16m2_t vid_v_u16m2_tum (vbool8_t mask, vuint16m2_t maskedoff, size_t vl);
vuint16m4_t vid_v_u16m4_tum (vbool4_t mask, vuint16m4_t maskedoff, size_t vl);
vuint16m8_t vid_v_u16m8_tum (vbool2_t mask, vuint16m8_t maskedoff, size_t vl);
vuint32mf2_t vid_v_u32mf2_tum (vbool64_t mask, vuint32mf2_t maskedoff, size_t vl);
vuint32m1_t vid_v_u32m1_tum (vbool32_t mask, vuint32m1_t maskedoff, size_t vl);
vuint32m2_t vid_v_u32m2_tum (vbool16_t mask, vuint32m2_t maskedoff, size_t vl);
vuint32m4_t vid_v_u32m4_tum (vbool8_t mask, vuint32m4_t maskedoff, size_t vl);
vuint32m8_t vid_v_u32m8_tum (vbool4_t mask, vuint32m8_t maskedoff, size_t vl);
vuint64m1_t vid_v_u64m1_tum (vbool64_t mask, vuint64m1_t maskedoff, size_t vl);
vuint64m2_t vid_v_u64m2_tum (vbool32_t mask, vuint64m2_t maskedoff, size_t vl);
vuint64m4_t vid_v_u64m4_tum (vbool16_t mask, vuint64m4_t maskedoff, size_t vl);
vuint64m8_t vid_v_u64m8_tum (vbool8_t mask, vuint64m8_t maskedoff, size_t vl);
// masked functions
vuint8mf8_t vid_v_u8mf8_tumu (vbool64_t mask, vuint8mf8_t maskedoff, size_t vl);
vuint8mf4_t vid_v_u8mf4_tumu (vbool32_t mask, vuint8mf4_t maskedoff, size_t vl);
vuint8mf2_t vid_v_u8mf2_tumu (vbool16_t mask, vuint8mf2_t maskedoff, size_t vl);
vuint8m1_t vid_v_u8m1_tumu (vbool8_t mask, vuint8m1_t maskedoff, size_t vl);
vuint8m2_t vid_v_u8m2_tumu (vbool4_t mask, vuint8m2_t maskedoff, size_t vl);
vuint8m4_t vid_v_u8m4_tumu (vbool2_t mask, vuint8m4_t maskedoff, size_t vl);
vuint8m8_t vid_v_u8m8_tumu (vbool1_t mask, vuint8m8_t maskedoff, size_t vl);
vuint16mf4_t vid_v_u16mf4_tumu (vbool64_t mask, vuint16mf4_t maskedoff, size_t vl);
vuint16mf2_t vid_v_u16mf2_tumu (vbool32_t mask, vuint16mf2_t maskedoff, size_t vl);
vuint16m1_t vid_v_u16m1_tumu (vbool16_t mask, vuint16m1_t maskedoff, size_t vl);
vuint16m2_t vid_v_u16m2_tumu (vbool8_t mask, vuint16m2_t maskedoff, size_t vl);
vuint16m4_t vid_v_u16m4_tumu (vbool4_t mask, vuint16m4_t maskedoff, size_t vl);
vuint16m8_t vid_v_u16m8_tumu (vbool2_t mask, vuint16m8_t maskedoff, size_t vl);
vuint32mf2_t vid_v_u32mf2_tumu (vbool64_t mask, vuint32mf2_t maskedoff, size_t vl);
vuint32m1_t vid_v_u32m1_tumu (vbool32_t mask, vuint32m1_t maskedoff, size_t vl);
vuint32m2_t vid_v_u32m2_tumu (vbool16_t mask, vuint32m2_t maskedoff, size_t vl);
vuint32m4_t vid_v_u32m4_tumu (vbool8_t mask, vuint32m4_t maskedoff, size_t vl);
vuint32m8_t vid_v_u32m8_tumu (vbool4_t mask, vuint32m8_t maskedoff, size_t vl);
vuint64m1_t vid_v_u64m1_tumu (vbool64_t mask, vuint64m1_t maskedoff, size_t vl);
vuint64m2_t vid_v_u64m2_tumu (vbool32_t mask, vuint64m2_t maskedoff, size_t vl);
vuint64m4_t vid_v_u64m4_tumu (vbool16_t mask, vuint64m4_t maskedoff, size_t vl);
vuint64m8_t vid_v_u64m8_tumu (vbool8_t mask, vuint64m8_t maskedoff, size_t vl);
// masked functions
vuint8mf8_t vid_v_u8mf8_mu (vbool64_t mask, vuint8mf8_t maskedoff, size_t vl);
vuint8mf4_t vid_v_u8mf4_mu (vbool32_t mask, vuint8mf4_t maskedoff, size_t vl);
vuint8mf2_t vid_v_u8mf2_mu (vbool16_t mask, vuint8mf2_t maskedoff, size_t vl);
vuint8m1_t vid_v_u8m1_mu (vbool8_t mask, vuint8m1_t maskedoff, size_t vl);
vuint8m2_t vid_v_u8m2_mu (vbool4_t mask, vuint8m2_t maskedoff, size_t vl);
vuint8m4_t vid_v_u8m4_mu (vbool2_t mask, vuint8m4_t maskedoff, size_t vl);
vuint8m8_t vid_v_u8m8_mu (vbool1_t mask, vuint8m8_t maskedoff, size_t vl);
vuint16mf4_t vid_v_u16mf4_mu (vbool64_t mask, vuint16mf4_t maskedoff, size_t vl);
vuint16mf2_t vid_v_u16mf2_mu (vbool32_t mask, vuint16mf2_t maskedoff, size_t vl);
vuint16m1_t vid_v_u16m1_mu (vbool16_t mask, vuint16m1_t maskedoff, size_t vl);
vuint16m2_t vid_v_u16m2_mu (vbool8_t mask, vuint16m2_t maskedoff, size_t vl);
vuint16m4_t vid_v_u16m4_mu (vbool4_t mask, vuint16m4_t maskedoff, size_t vl);
vuint16m8_t vid_v_u16m8_mu (vbool2_t mask, vuint16m8_t maskedoff, size_t vl);
vuint32mf2_t vid_v_u32mf2_mu (vbool64_t mask, vuint32mf2_t maskedoff, size_t vl);
vuint32m1_t vid_v_u32m1_mu (vbool32_t mask, vuint32m1_t maskedoff, size_t vl);
vuint32m2_t vid_v_u32m2_mu (vbool16_t mask, vuint32m2_t maskedoff, size_t vl);
vuint32m4_t vid_v_u32m4_mu (vbool8_t mask, vuint32m4_t maskedoff, size_t vl);
vuint32m8_t vid_v_u32m8_mu (vbool4_t mask, vuint32m8_t maskedoff, size_t vl);
vuint64m1_t vid_v_u64m1_mu (vbool64_t mask, vuint64m1_t maskedoff, size_t vl);
vuint64m2_t vid_v_u64m2_mu (vbool32_t mask, vuint64m2_t maskedoff, size_t vl);
vuint64m4_t vid_v_u64m4_mu (vbool16_t mask, vuint64m4_t maskedoff, size_t vl);
vuint64m8_t vid_v_u64m8_mu (vbool8_t mask, vuint64m8_t maskedoff, size_t vl);
```
