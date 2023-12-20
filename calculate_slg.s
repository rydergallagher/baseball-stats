    .global calculate_slg
    .text

calculate_slg:

    # 0 = singles, 1 = doubles, 2 = triples, 3 = hrs, 4 = plate appearances, 5 = 2, 6 = 3, 7 = 4

    vmulss %xmm1, %xmm5, %xmm1  # xmm1 *= 2 (doubles = doubles * 2)
    vmulss %xmm2, %xmm6, %xmm2  # xmm2 *= 3 (triples = triples * 3)
    vmulss %xmm3, %xmm7, %xmm3  # xmm3 *= 4 (homeruns = homeruns * 4)
    vaddss %xmm0, %xmm1, %xmm8  # xmm8 = xmm0 + xmm1
    vaddss %xmm2, %xmm3, %xmm9  # xmm9 = xmm2 + xmm3
    vaddss %xmm8, %xmm9, %xmm9  # total addition

    vxorps %xmm0, %xmm0, %xmm0  # 0 out return register
    # vdivss src1, src2, dst
    # dst = srcs2 / srcs1
    vdivss %xmm4, %xmm9, %xmm0  # return = sum / plate appearances

    retq
