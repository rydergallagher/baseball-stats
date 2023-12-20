    .global calculate_obp
    .text

calculate_obp:
    # 0 = pa, 1 = hits, 2 = walks, 3 = hbp, 4 = sacflies

    vmovaps %xmm0, %xmm8            # move arg 1 into xmm8 (for organization)
    vxorps %xmm0, %xmm0, %xmm0     # 0 out return register
    vaddss %xmm1, %xmm2, %xmm9      # xmm9 = xmm1 + xmm2 (hits + walks)
    vaddss %xmm3, %xmm9, %xmm9      # xmm9 = xmm9 (hits + walks) + xmm3 (hbp)

    vaddss %xmm8, %xmm2, %xmm10     # xmm10 = xmm8 + xmm2 (plate appearances + walks)
    vaddss %xmm3, %xmm10, %xmm10    # xmm10 = xmm10 + xmm3 (plate appearances + walks + hit by pitches)
    vaddss %xmm4, %xmm10, %xmm10    # xmm10 = xmm10 + xmm4 (plate appearances + walks + hy by pitches + sac flies)

    # vdivss src1, src2, dst
    # dst = srcs2 / srcs1
    vdivss %xmm10, %xmm9, %xmm0     # xmm0 (return)= xmm9 / xmm10

    retq
